/*	ASCEND modelling environment
	Copyright (C) 1990, 1993, 1994 Thomas Guthrie Epperly, Kirk Abbott.
	Copyright (C) 2006 Carnegie Mellon University

	This program is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation; either version 2, or (at your option)
	any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program; if not, write to the Free Software
	Foundation, Inc., 59 Temple Place - Suite 330,
	Boston, MA 02111-1307, USA.
*//**
	Code to support dynamic and static loading of user packages.

	The default state is to have packages. As such it takes an explicit
	definition of NO_PACKAGES, if packages are not to be handled.
	An explicit definition of STATIC_PACKAGES or DYNAMIC_PACKAGES is also
	required.
*//*
	User Packages
	by Kirk Abbott
	Created: July 4, 1994
	Last rev in old CVS: 1.14 ballan 1998/03/06 15:47:14
*/

#if !defined(DYNAMIC_PACKAGES) && !defined(STATIC_PACKAGES) && !defined(NO_PACKAGES)
# error "Package linking option not set!"
#endif

#include <math.h>
#include <ctype.h>  /* was compiler/actype.h */

#include <utilities/ascConfig.h>
#include <utilities/config.h> /* NEW */

#ifndef ASC_DEFAULTPATH
# error "Where is ASC_DEFAULTPATH???"
#endif

#include <general/ospath.h>

#include "compiler.h"
#include <utilities/ascMalloc.h>
#include <general/list.h>
#include "symtab.h"
#include "fractions.h"
#include "dimen.h"
#include "functype.h"
#include "types.h"
#include "extcall.h"
#include "mathinst.h"
#include "instance_enum.h"
#include "instquery.h"
#include "atomvalue.h"
#include "find.h"
#include "relation_type.h"
#include "relation.h"
#include "safe.h"
#include "relation_util.h"
#include "extfunc.h"
#include <packages/sensitivity.h>
#include <packages/ascFreeAllVars.h>
#include "module.h"
#include "packages.h"

/*
	Initialise the slv data structures used when calling external fns
*/
void Init_Slv_Interp(struct Slv_Interp *slv_interp)
{
  if (slv_interp){
    slv_interp->nodestamp = 0;
    slv_interp->status = calc_all_ok;
    slv_interp->user_data = NULL;
    slv_interp->first_call = (unsigned)0;
    slv_interp->last_call = (unsigned)0;
    slv_interp->check_args = (unsigned)0;
    slv_interp->recalculate = (unsigned)0;
    slv_interp->func_eval = (unsigned)0;
    slv_interp->deriv_eval = (unsigned)0;
    slv_interp->single_step = (unsigned)0;
  }
}

/*---------------------------------------------
  BUILT-IN PACKAGES...
*/

/**
	Load builtin packages, unless NO_PACKAGES.

	@return 0 if success, 1 if failure.
*/
static
int Builtins_Init(void)
{
  int result = 0;

#ifdef NO_PACKAGES
  ERROR_REPORTER_HERE(ASC_USER_WARNING,"Builtins_Init: DISABLED at compile-time");
#else
  ERROR_REPORTER_DEBUG("Builtins_Init: Loading function asc_free_all_variables\n");
  result = CreateUserFunctionMethod("asc_free_all_variables",
			Asc_FreeAllVars,
			1,
		 "Unset 'fixed' flag of all items of type 'solver_var'");
#endif
  return result;
}

/*---------------------------------------------
  DYNAMIC_PACKAGES code only...
*/
# ifdef DYNAMIC_PACKAGES
static char path_var[PATH_MAX];

/**
	A little structure to help with searching for libraries

	@see test_librarysearch
*/
struct LibrarySearch{
	struct FilePath *partialpath;
	char fullpath[PATH_MAX];
};

FilePathTestFn test_librarysearch;

/**
	A 'test' function for passing to the ospath_searchpath_iterate function.
	This test function will return a match when a library having the required
	name is present in the fully resolved path.
*/
int test_librarysearch(struct FilePath *path, void *userdata){
	/*  user data = the relative path, plus a place
		to store the full path when found */
	struct LibrarySearch *ls = (struct LibrarySearch *)userdata;

	struct FilePath *fp = ospath_concat(path,ls->partialpath);
	FILE *f;

	ospath_strcpy(fp,ls->fullpath,PATH_MAX);
	CONSOLE_DEBUG("SEARCHING FOR %s",ls->fullpath);
	
	f = ospath_fopen(fp,"r");
	if(f==NULL){
		return 0;
	}
	fclose(f);

	CONSOLE_DEBUG("FOUND! %s",ls->fullpath);
	return 1;
}

/**
	Search the archive library path for a file matching the given
	(platform specific, with extension?) library filename.

	@param name Name of library being searched for
	@param envv Name of environment var containing the ASCEND search path
	@param dpath Default search path for the case where the env var is not defined

	@return a pointer to a string space holding the full path
	name of the file to be opened. The returned pointer may be NULL

	If the returned pointer is not NULL, then it points to space that must be
	freed when no longer needed.
*/
static
char *SearchArchiveLibraryPath(CONST char *name, char *dpath, char *envv){
	struct FilePath *fp1, *fp2, *fp3; /* relative path */
	char *s1;
	char buffer[PATH_MAX];

	struct LibrarySearch ls;
	struct FilePath **sp;
	extern char path_var[PATH_MAX];
	char *path;

	fp1 = ospath_new(name);
	fp2 = ospath_getdir(fp1);
	s1 = ospath_getfilestem(fp1);
	if(s1==NULL){
		// not a file, so fail...
		return NULL;
	}

	CONSOLE_DEBUG("FILESTEM = '%s'",s1);
	
#if defined(ASC_SHLIBSUFFIX) && defined(ASC_SHLIBPREFIX)
	snprintf(buffer,PATH_MAX,"%s%s%s",ASC_SHLIBPREFIX,s1,ASC_SHLIBSUFFIX);
#else
# ifdef __WIN32__
	snprintf(buffer,PATH_MAX,"%s.dll",s1);
# elif defined(linux)
	snprintf(buffer,PATH_MAX,"lib%s.so",s1); /* changed from .o to .so -- JP */
# elif defined(sun) || defined(solaris)
	snprintf(buffer,PATH_MAX,"%s.so.1.0",s1);
# elif defined(__hpux)
	snprintf(buffer,PATH_MAX,"%s.sl",s1);
# elif defined(_SGI_SOURCE)
	snprintf(buffer,PATH_MAX,"%s.so",s1);
# else
#  error "Please #define ASC_SHLIBSUFFIX and ASC_SHLIBPREFIX or pass as compiler flags to packages.c"
# endif
#endif

	fp3 = ospath_new(buffer);
	ospath_free(fp1);
	fp1 = ospath_concat(fp2,fp3);
	ospath_free(fp2);
	ospath_free(fp3);
	free(s1);

	ls.partialpath = fp1;

	CONSOLE_DEBUG("ENV VAR = '%s'",envv);

	CONSOLE_DEBUG("GETTING SEARCH PATH FROM ENVIRONMENT VAR '%s'",envv);
	path=getenv(envv);
	if(path==NULL){
		CONSOLE_DEBUG("ENV VAR NOT FOUND, FALLING BACK TO DEFAULT SEARCH PATH = '%s'",dpath);
		path=ASC_DEFAULTPATH;
	}

	CONSOLE_DEBUG("SEARCHPATH = '%s'",path);

	sp = ospath_searchpath_new(path);

	if(NULL==ospath_searchpath_iterate(sp,&test_librarysearch,&ls)){
		return NULL;
	}

	strncpy(path_var,ls.fullpath,PATH_MAX);

	ospath_free(fp1);

	return path_var;
}

#endif /* DYNAMIC_PACKAGES */
/*
  END of DYNAMIC_PACKAGES-specific code
  ------------------------------------------*/

int LoadArchiveLibrary(CONST char *partialname, CONST char *initfunc){

#ifdef DYNAMIC_PACKAGES
	char *file;
	char auto_initfunc[PATH_MAX];
	char *stem;
	struct FilePath *fp1;
	int result;

	CONSOLE_DEBUG("ABOUT TO SEARCH FOR '%s'",partialname);

	file = SearchArchiveLibraryPath(partialname, ASC_DEFAULTPATH, PATHENVIRONMENTVAR);
	if(file==NULL){
		ERROR_REPORTER_NOLINE(ASC_USER_ERROR,"The named library '%s' was not found in the search path.",partialname);
		return 1;
	}

	fp1 = ospath_new(partialname);
	stem = ospath_getfilestem(fp1);
	if(stem==NULL){
		ERROR_REPORTER_NOLINE(ASC_PROG_ERROR,"What is the stem of named library '%s'???",partialname);
		free(stem);
		ospath_free(fp1);
		return 1;
	}

	if(initfunc==NULL){
		strncpy(auto_initfunc,stem,PATH_MAX);
		strncat(auto_initfunc,"_register",PATH_MAX-strlen(auto_initfunc));
		result = Asc_DynamicLoad(file,auto_initfunc);
	}else{
		result = Asc_DynamicLoad(file,initfunc);
	}

	if (result) {
		CONSOLE_DEBUG("FAILED TO LOAD LIBRARY '%s' (error %d)",partialname,result);
    	result = 1;
	}else{
		if(initfunc==NULL){
	  		ERROR_REPORTER_DEBUG("Successfully ran '%s' from dynamic package '%s'\n",auto_initfunc,file);
		}else{
			ERROR_REPORTER_DEBUG("Successfully ran '%s' from dynamic package '%s'\n",initfunc,file);
		}
	}

	free(stem);
	ospath_free(fp1);
  	return result;

#else

	DISUSED_PARAMETER(name); DISUSED_PARAMETER(initfunc);

# if defined(STATIC_PACKAGES)
	ERROR_REPORTER_HERE(ASC_PROG_NOTE,"LoadArchiveLibrary disabled: STATIC_PACKAGES, no need to load dynamically.\n");
	return 0;
# elif defined(NO_PACKAGES)
	ERROR_REPORTER_HERE(ASC_PROG_ERROR,"LoadArchiveLibrary disabled: NO_PACKAGES");
	return 1;
# else
#  error "Invalid package linking flags"
# endif

#endif
}

/*---------------------------------------------
  STATIC_PACKAGES code only...

  Declare the functions which we are expected to be able to call.
*/
#ifndef NO_PACKAGES
# ifdef STATIC_PACKAGES

#include <packages/kvalues.h>
#include <packages/bisect.h>
#include <packages/sensitivity.h>

# endif
#endif

#ifdef STATIC_PACKAGES
/**
	Load all statically-linked packages

	@return 0 on success, >0 if any CreateUserFunction calls failed.
*/
static
int StaticPackages_Init(void)
{
  int result = 0;

  result += sensitivity_register();
  result += kvalues_register();

  return result;
}
#endif

/**
	This is a general purpose function that will load whatever user
	functions are required according to the compile-time settings.

	If NO_PACKAGES, nothing will be loaded. If DYNAMIC_PACKAGES, then
	just the builtin packages will be loaded. If STATIC_PACKAGES then
	builtin plus those called in 'StaticPackages_Init' will be loaded.
*/
void AddUserFunctions(void)
{
#ifdef NO_PACKAGES
# ifdef __GNUC__
#  warning "EXTERNAL PACKAGES ARE BEING DISABLED"
# endif
  ERROR_REPORTER_NOLINE(ASC_PROG_NOTE,"AddUserFunctions disabled at compile-time.");
#else

  /* Builtins are always statically linked */
  if (Builtins_Init()) {
      ERROR_REPORTER_NOLINE(ASC_PROG_WARNING,"Problem in Builtins_Init: Some user functions not created");
  }

# ifdef DYNAMIC_PACKAGES
  /* do nothing */

# elif defined(STATIC_PACKAGES)
#  ifdef __GNUC__
#   warning "STATIC PACKAGES"
#  endif

  /*The following need to be reimplemented but are basically useful as is. */
  if (StaticPackages_Init()) {
      ERROR_REPORTER_NOLINE(ASC_PROG_WARNING,"Problem in StaticPackages_Init(): Some user functions not created");
  }

# endif
#endif
}

/*---------------------------------------
	TESTING FUNCTIONS

	The following functions may be called someone desirous of testing
	an external relation provided as a package. They are here
	for convenience, and should be really in a separate file.
*/

/**
	What's this do? -- JP
*/
static void LoadInputVector(struct gl_list_t *arglist,
			    double *inputs,
			    unsigned ninputs,
			    unsigned long n_input_args)
{
  struct Instance *inst;
  struct gl_list_t *input_list;
  unsigned long c,len;

  input_list = LinearizeArgList(arglist,1,n_input_args);

  if(!input_list)return;

  len = gl_length(input_list);

  if(len!=ninputs)return; /* somehow we had inconsistent data */

  for (c=1;c<=len;c++) {
    inst = (struct Instance *)gl_fetch(input_list,c);
    inputs[c-1] = RealAtomValue(inst);
  }
  gl_destroy(input_list);
}

/**
	What's a black box, and what's a glass box? -- JP
*/
int CallBlackBox(struct Instance *inst,
		 CONST struct relation *rel)
{
  struct Instance *data;

  struct Slv_Interp slv_interp;
  struct ExternalFunc *efunc;
  struct ExtCallNode *ext;
  struct gl_list_t *arglist;
  unsigned long n_input_args, n_output_args;
  int nok = 0;

  unsigned long ninputs, noutputs;
  double *inputs = NULL, *outputs = NULL;
  double *jacobian = NULL;

  /* All these desperately need a typedef in a header someplace */
/*  now typedefs in solver/extfunc.h - 1/22/2006 - jds
  int (*init_func) (struct Slv_Interp *,
                    struct Instance *,
                    struct gl_list_t *);

  int (*eval_func)(struct Slv_Interp *,
                   int,         // n_inputs
                   int,         // n_outputs
                   double *,    // inputs
                   double * ,   // outputs
                   double * );  // jacobian

  int (*deriv_func)(struct Slv_Interp *,
                   int,         // n_inputs
                   int ,        // n_outputs
                   double *,    // inputs
                   double * ,   // outputs
                   double * );  // jacobian
*/
  ExtBBoxInitFunc *init_func;
  ExtBBoxFunc *eval_func;
  ExtBBoxFunc *deriv_func;

/*------------------------------
	After this point everything should be ok.
	<-- says who? when? -- JP
*/

  /* Visual C doesn't like this before the func ptr defs. */
  UNUSED_PARAMETER(inst);

  ext = BlackBoxExtCall(rel);
  arglist = ExternalCallArgList(ext);
  data = ExternalCallDataInstance(ext);
  efunc = ExternalCallExtFunc(ext);
  init_func = GetInitFunc(efunc);
  eval_func = GetValueFunc(efunc);
  deriv_func = GetDerivFunc(efunc);

  if (init_func && eval_func) {

    /* set up the interpreter. */
    Init_Slv_Interp(&slv_interp);
    slv_interp.check_args = (unsigned)1;
    slv_interp.first_call = (unsigned)1;
    slv_interp.last_call = (unsigned)0;
    slv_interp.nodestamp = ExternalCallNodeStamp(ext);
    n_input_args = NumberInputArgs(efunc);
    n_output_args = NumberOutputArgs(efunc);
    ninputs = CountNumberOfArgs(arglist,1,n_input_args);
    noutputs = CountNumberOfArgs(arglist,n_input_args + 1,
				 n_input_args+n_output_args);

    /* Create the work vectors. Load the input vector from the instance tree. */
    inputs = (double *)asccalloc(ninputs,sizeof(double));
    outputs = (double *)asccalloc(ninputs,sizeof(double));
    jacobian = (double *)asccalloc(ninputs*noutputs,sizeof(double));
    LoadInputVector(arglist,inputs,ninputs,n_input_args);

    /*
     * Call the init function.
     */
    nok = (*init_func)(&slv_interp,data,arglist);
    if (nok) goto error;
    /*
     * Call the evaluation function.
     */
    nok = (*eval_func)(&slv_interp,ninputs,noutputs,
		       inputs,outputs,jacobian);
    if (nok) goto error;
    /*
     * Call the derivative routine.
     */
    if (deriv_func) {
      nok = (*deriv_func)(&slv_interp,ninputs,noutputs,
			  inputs,outputs,jacobian);
      if (nok) goto error;
    }
    /*
     * Call the init function to shut down
     */
    slv_interp.first_call = (unsigned)0;
    slv_interp.last_call = (unsigned)1;
    nok = (*init_func)(&slv_interp,data,arglist);
    if (nok) goto error;
  }
  else{
    FPRINTF(ASCERR,"External function not loaded\n");
    return 1;
  }

 error:
  if (inputs) ascfree((char *)inputs);
  if (outputs) ascfree((char *)outputs);
  if (jacobian) ascfree((char *)outputs);
  if (nok)
    return 1;
  else
    return 0;
}

/**
	When glassbox are registered, they must register a pointer
	to their function jump table. In other words, they must
	register a pointer to an 'array of pointers to functions'.
	This typedef just makes life a little cleaner.

	<-- what typedef?? -- JP
*/
int CallGlassBox(struct Instance *relinst, CONST struct relation *rel)
{
  CONST struct gl_list_t *incidence;
  struct Instance *var;
  struct ExternalFunc *efunc;
  int index;
  long i;
  double *f, *x, *g;
  int m,mode,result;
  int n;

  ExtEvalFunc **evaltable, *eval_func;
  ExtEvalFunc **derivtable, *deriv_func;

  (void) relinst;
  incidence = RelationVarList(rel);
  if (!incidence) {
    FPRINTF(ASCERR,"Incidence list is empty -- nothing to evaluate\n");
    return 0;
  }
  index = GlassBoxRelIndex(rel);
  efunc = GlassBoxExtFunc(rel);
  evaltable = GetValueJumpTable(efunc);
  eval_func = evaltable[index];
  derivtable = GetDerivJumpTable(efunc);
  deriv_func = derivtable[index];

  m = 0;			  /* FIX not sure what this should be !!! */
  n = gl_length(incidence);
  f = (double *)asccalloc((1 + 2*n),sizeof(double));
  x = &f[1];
  g = &f[n+1];

  for (i=0;i<n;i++) {
    var = (struct Instance *)gl_fetch(incidence,i+1);
    x[i] = RealAtomValue(var);
  }
  result = (*eval_func)(&mode,&m,&n,x,NULL,f,g);
  result += (*deriv_func)(&mode,&m,&n,x,NULL,f,g);

  ascfree((char *)f);
  return result;
}

/**
	No idea what this does. It's referenced in 'interface.c' only, so it
	appears to be defunct -- JP
*/
int CallExternalProcs(struct Instance *inst)
{
  CONST struct relation *rel;
  enum Expr_enum reltype;

  if (inst==NULL){
    FPRINTF(ASCERR,"Instance does not exist for callprocs\n");
    return 1;
  }
  if (InstanceKind(inst)!=REL_INST){
    FPRINTF(ASCERR,"Instance is not a relation\n");
    return 1;
  }
  rel = GetInstanceRelation(inst,&reltype);
  if (!rel) {
    FPRINTF(ASCERR,"Relation structure is NULL\n");
    return 1;
  }
  switch (reltype) {
  case e_blackbox:
    return CallBlackBox(inst,rel);
  case e_glassbox:
    return CallGlassBox(inst,rel);
  default:
    FPRINTF(ASCERR,"Invalid relation type in CallExternalProc\n");
    return 1;
  }
}
