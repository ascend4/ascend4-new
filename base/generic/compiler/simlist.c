/*
 *  Simulation Management for Ascend
 *  by Ben Allan
 *  Version: $Revision: 1.3 $
 *  Version control file: $RCSfile: simlist.c,v $
 *  Date last modified: $Date: 1997/07/18 12:34:53 $
 *  Last modified by: $Author: mthomas $
 *  Part of Ascend
 *
 *  This file is part of the Ascend Language Interpreter.
 *
 *  Copyright (C) 1997 Benjamin Andrew Allan
 *
 *  The Ascend Language Interpreter is free software; you can redistribute
 *  it and/or modify it under the terms of the GNU General Public License as
 *  published by the Free Software Foundation; either version 2 of the
 *  License, or (at your option) any later version.
 *
 *  The Ascend Language Interpreter is distributed in hope that it will be
 *  useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with the program; if not, write to the Free Software Foundation,
 *  Inc., 675 Mass Ave, Cambridge, MA 02139 USA.  Check the file named
 *  COPYING.
 *
 *  This module initializes manages a global list simulations,
 *  which may be interrelated in very twisty ways due to UNIVERSAL and
 *  parameter passing.
 */

#include <utilities/ascConfig.h>
#include "compiler.h"
#include <general/list.h>
#include "instance_enum.h"
#include "destroyinst.h"
#include "simlist.h"
#include "instquery.h"
 
#ifndef lint
static CONST char simlistID[] = "$Id: simlist.c,v 1.3 1997/07/18 12:34:53 mthomas Exp $";
#endif


struct gl_list_t *g_simulation_list = NULL;

void Asc_DeAllocSim(struct Instance *sim)
{
  if (sim) {
	CONSOLE_DEBUG("Destroying instance %s", SCP(GetSimulationName(sim)) );
    DestroyInstance(sim,NULL);
  }
}


void Asc_DestroySimulations(void)
{
  if (g_simulation_list) {
    gl_iterate(g_simulation_list,(void (*)(VOIDPTR))Asc_DeAllocSim);
    gl_destroy(g_simulation_list);      /* Asc_DeAllocSim takes care of the
                                         * memory -- see SimsProc.c */
    g_simulation_list = NULL;
  }else{
  	CONSOLE_DEBUG("g_simulation_list is null");
  }
}

/*
 *  SimsProc.c
 *  by Kirk Abbott and Ben Allan
 *  Created: 1/94
 *  Version: $Revision: 1.31 $
 *  Version control file: $RCSfile: SimsProc.c,v $
 *  Date last modified: $Date: 2003/08/23 18:43:08 $
 *  Last modified by: $Author: ballan $
 *
 *  This file is part of the ASCEND Tcl/Tk interface
 *
 *  Copyright 1997, Carnegie Mellon University
 *
 *  The ASCEND Tcl/Tk interface is free software; you can redistribute
 *  it and/or modify it under the terms of the GNU General Public License as
 *  published by the Free Software Foundation; either version 2 of the
 *  License, or (at your option) any later version.
 *
 *  The ASCEND Tcl/Tk interface is distributed in hope that it will be
 *  useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with the program; if not, write to the Free Software Foundation,
 *  Inc., 675 Mass Ave, Cambridge, MA 02139 USA.  Check the file named
 *  COPYING.  COPYING is found in ../compiler.
 */


#include <ctype.h>
#include <utilities/ascConfig.h>
#include <utilities/ascMalloc.h>
#include <general/tm_time.h>
#include <general/list.h>
#include <general/dstring.h>
#include "compiler.h"
#include "instance_enum.h"
#include "cmpfunc.h"
#include "fractions.h"
#include "dimen.h"
#include "expr_types.h"
#include "stattypes.h"
#include "statement.h"
#include "slist.h"
#include "syntax.h"
#include "prototype.h"
#include "symtab.h"
#include "instance_io.h"
#include "instance_name.h"
#include "parentchild.h"
#include "extinst.h"
#include "child.h"
#include "type_desc.h"
#include "copyinst.h"
#include "destroyinst.h"
#include "module.h"
#include "library.h"
#include "name.h"
#include "pending.h"
#include "check.h"
#include "stattypes.h"
#include "relation_type.h"
#include "bintoken.h"
#include "instantiate.h"
#include "value_type.h"
#include "statio.h"
#include "bit.h"
#include "simlist.h"

int g_compiler_timing=0;

#ifndef lint
static CONST char SimsProcID[] = "$Id: SimsProc.c,v 1.31 2003/08/23 18:43:08 ballan Exp $";
#endif


#define MAXIMUM_INST_NAME 256

/*
 * unheadered stuff from instantiate.c
 * changed g_cursim to extern -- JP
 */
extern struct Instance *g_cursim;
struct gl_list_t *ArrayIndices(struct Name *name, struct Instance *parent);

void Asc_SetCurrentSim(struct Instance *sim)
{
  g_cursim = sim;
  return;                                         
}

struct Instance *Asc_GetCurrentSim()
{
  return g_cursim;
}

int Asc_SimsUniqueName(symchar *str)
{
  unsigned long c;
  struct Instance *ptr;
  for(c=gl_length(g_simulation_list);c>=1;c--) {
    ptr = (struct Instance *)gl_fetch(g_simulation_list,c);
    if (GetSimulationName(ptr) == str) {
      return 0;
    }
  }
  return 1;
}

/*
 *
 */
int Asc_SimsCmpSim(struct Instance *sim1, struct Instance *sim2)
{
  assert(sim1&&sim2);
  return CmpSymchar(GetSimulationName(sim1),GetSimulationName(sim2));
}

/*
 * Find the simulation list entry to a named simulation. Return
 * null if no simulation of that name found. Sims are inserted sorted
 * so we should do a gl_search here.
 */
struct Instance *Asc_FindSimulationTop(symchar *str)
{
  unsigned long len,c;
  struct Instance *ptr;

  len = gl_length(g_simulation_list);
  for (c=len;c>=1;c--) {
    ptr = (struct Instance *)gl_fetch(g_simulation_list,c);
    if (GetSimulationName(ptr) == str) {
      return ptr;
    }
  }
  return NULL;
}


/*
 * This function setups up to call instantiate with different
 * compiler settings. In all cases Instantiate will make a copy of
 * the name that is given. format should perhaps be an array of enums
 * or a bit structure to deal with multiple compilation flags. At the moment
 * it is just an int.
 */
struct Instance *SimsCreateInstance(symchar *type,
                                    symchar *name, 
                                    enum CreateInst_format format,
                                    symchar *defmethod)
{
  struct Instance *result;
  unsigned int oldflags;
  double comptime;

  if ((NULL == type) ||(NULL == name)) {
    return NULL;
  }
  g_ExtVariablesTable = NULL;		/* defined in extinst.[ch] */
  comptime = tm_cpu_time();
  switch (format) {
  case e_normal:
    result = Instantiate(type,name,0,defmethod);
    break;
  case e_no_relations:
    oldflags = GetInstantiationRelnFlags();
    SetInstantiationRelnFlags(NORELS);
    result = Instantiate(type,name,0,defmethod);
    SetInstantiationRelnFlags(oldflags);
    break;
  case e_patch:
    result = InstantiatePatch(type,name,0);
    break;
  default:
    FPRINTF(stderr,"Warning: doing standard compilation\n");
    result = Instantiate(type,name,0,defmethod);
    break;
  }
  comptime = tm_cpu_time() - comptime;
  if (g_compiler_timing) {
    FPRINTF(stderr,"Instantiation CPU time = %g seconds\n",comptime);
  }
  return result;
}


/*
 * This function searches the simulation list for
 * the *root* instance of the simulation.
 */
struct Instance *Asc_FindSimulationRoot(symchar *str)
{
  unsigned long c,len;
  struct Instance *ptr;

  len = gl_length(g_simulation_list);
  for (c = len; c >= 1; c--) {
    ptr = (struct Instance *)gl_fetch(g_simulation_list,c);
    if (GetSimulationName(ptr) == str) {
      return GetSimulationRoot(ptr);
    }
  }
  return NULL;
}

symchar *Asc_SimsFindSimulationName(CONST struct Instance *root)
{
  unsigned long len,c;
  struct Instance *ptr;

  if (!root) {
    return NULL;
  }
  len = gl_length(g_simulation_list);
  for(c=len;c>=1;c--) {
    ptr = (struct Instance *)gl_fetch(g_simulation_list,c);
    if (GetSimulationRoot(ptr)==root) {
      return GetSimulationName(ptr);
    }
  }
  return NULL;
}

#ifdef THIS_IS_AN_UNUSED_FUNCTION
/*@unused@*/
static
void BrowWritePendingStatements(FILE *f, CONST struct Instance *i)
{
  CONST struct BitList *blist;
  CONST struct TypeDescription *desc;
  CONST struct StatementList *slist;
  CONST struct Statement *stat;
  CONST struct gl_list_t *list;
  unsigned long c,len;
  blist = InstanceBitList(i);
  if ((blist!=NULL)&&(!BitListEmpty(blist))) {
    FPRINTF(stderr,"PENDING STATEMENTS\n");
    desc = InstanceTypeDesc(i);
    slist = GetStatementList(desc);
    list = GetList(slist);
    len = gl_length(list);
    for(c=1;c<=len;c++) {
      if (ReadBit(blist,c-1)) {
        stat = (struct Statement *)gl_fetch(list,c);
        WriteStatement(f,stat,4);
        if (StatementType(stat)== SELECT) {
          c = c + SelectStatNumberStats(stat);
        }
      }
    }
  }
}
#endif  /* THIS_IS_AN_UNUSED_FUNCTION */
