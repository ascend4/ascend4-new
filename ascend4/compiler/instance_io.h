/*
 *  Instance Output Routines
 *  by Tom Epperly
 *  Created: 2/8/90
 *  Version: $Revision: 1.21 $
 *  Version control file: $RCSfile: instance_io.h,v $
 *  Date last modified: $Date: 1998/01/11 17:03:34 $
 *  Last modified by: $Author: ballan $
 *
 *  This file is part of the Ascend Language Interpreter.
 *
 *  Copyright (C) 1990, 1993, 1994 Thomas Guthrie Weidner Epperly
 *  Copyright 1996 Benjamin Andrew Allan
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
 */

#ifndef __INSTANCE_IO_H_SEEN__
#define __INSTANCE_IO_H_SEEN__


/*
 *  When #including instance_io.h, make sure these files are #included first:
 *         #include "compiler.h"
 *         #include "symtab.h"
 */


/*
 *  struct NameNode is used by the AllPaths and WriteAliases routines to
 *  keep track of an instance and which child name is used for a
 *  particular name chain.
 */
struct NameNode {
  CONST struct Instance *inst;
  unsigned long index;
};

extern struct gl_list_t *ShortestPath(CONST struct Instance *,
                                      CONST struct Instance *,
                                      /* CONST */ unsigned int,
                                      /* CONST */ unsigned int);
/*
 *  struct gl_list_t *ShortestPath(inst,ref,height,best)
 *  const struct Instance *inst, *ref;
 *  const unsigned int height,best;
 *  Collect all instances in path connecting inst with ref and returns
 *  them in a list.  If path doesn't exist, it returns NULL.  Path will
 *  be such that the smallest number of intermediate instances are used.
 *  This is a recursive function so send in 0,UINT_MAX as the last two
 *  arguments to initiate the call.
 *
 *  This returns a list of pointers to instances, and it should be
 *  deallocated with gl_destroy(path).
 */

extern struct gl_list_t *AllPaths(CONST struct Instance *);
/*
 *  struct gl_list_t *AllPaths(inst)
 *  const struct Instance *i;
 *
 *  AllPaths makes and returns a list of lists of NameNode structures.
 *  Each member of list AllPaths returns is a path from the given instance
 *  to root.
 *
 *  How to deallocate the result of AllPaths:
 *  Here is an example of how to deallocate the results.  Use it or
 *  something equivalent.
 *  struct gl_list_t *paths,*path;
 *  paths = AllPaths(i);
 *  ....whatever....
 *  for(c=1;c <= gl_length(paths);c++){
 *     gl_free_and_destroy(gl_fetch(paths,c));
 *  }
 *  gl_destroy(paths);
 */

extern struct gl_list_t *ISAPaths(CONST struct gl_list_t *);
/*
 *  struct gl_list_t *ISAPaths(pathlist)
 *  struct gl_list_t *pathlist, *list;
 *  isalist = ISAPaths(pathlist);
 *
 *  Given pathlist, the output of AllPaths, returns the list of
 *  names which are real: that is names which have been constructed
 *  without ALIASES or WILL_BE's intermediate.
 *  The list returned contains pointers to elements of the pathlist given,
 *  so it should be destroyed with gl_destroy(isalist) before the
 *  AllPaths destruction is applied to pathlist.
 *  In well written MODELs, the isalist returned will be one long.
 */

extern int WriteInstanceName(FILE *,CONST struct Instance *,
        CONST struct Instance *);
/*
 *  int WriteInstanceName(f,i,ref)
 *  const struct Instance *i,*ref;
 *  FILE *f;
 *  Print the instance's name to the specified file.  The name that is
 *  printed is derived from the shortest path between i and ref.  If
 *  ref is NULL, the shortest path to root is used. The number of
 *  characters written is returned, to assist in pretty printing or
 *  line breaking.
 */

extern void WriteInstanceNameDS(Asc_DString *, CONST struct Instance *,
        CONST struct Instance *);
/*
 *  WriteInstanceNameDS(dsPtr,i,ref)
 *  const struct Instance *i,*ref;
 *  Asc_DString *dsPtr;
 *  Print the instance's name to the specified dstring.  The name that is
 *  printed is derived from the shortest path between i and ref.  If
 *  ref is NULL, the shortest path to root is used.
 *  This does not put a . in at the beginning of a name, so you cannot
 *  build up proper names in a DS with it. It writes proper
 *  relative names instead, where the context is assumed to be ref.
 */

extern char *WriteInstanceNameString(CONST struct Instance *,
                                     CONST struct Instance *);
/*
 *  result = WriteInstanceNameString(i,ref)
 *  const struct Instance *i,*ref;
 *  char *result;
 *  Return a string (that the user must destroy eventually).  The name that is
 *  printed is derived from the shortest path between i and ref.  If
 *  ref is NULL, the shortest path to root is used.
 *  The name will not begin with a ., even if the path ref
 *  is not a simulation or NULL.
 */

extern int WriteAnyInstanceName(FILE *, struct Instance *);
/*
 *  int  WriteAnyInstanceName(f,i,ref);
 *  struct Instance *i,*ref;
 *  FILE *f;
 *  Very similar to WriteInstanceName.
 *  Print the instance's name to the specified file.  The name that is
 *  printed is derived from *any* path from i to NULL.
 *  This function was designed for speed, rather than good
 *  looks, and may be used for bulk writing of instance names. Returns
 *  the count of characters written.
 */

extern unsigned long CountAliases(CONST struct Instance *);
/*
 *  unsigned long CountAliases(i)
 *  Count all the known names of the instance given.
 */

extern unsigned long CountISAs(CONST struct Instance *);
/*
 *  unsigned long CountISAs(i)
 *  Count the names with which the instance given was created.
 */

extern void WriteAliases(FILE *,CONST struct Instance *);
/*
 *  void WriteAliases(f,i)
 *  FILE *f;
 *  struct Instance *i;
 *  Print all the instance's names to the specified file.
 */

extern void WriteISAs(FILE *,CONST struct Instance *);
/*
 *  void WriteISAs(f,i)
 *  FILE *f;
 *  struct Instance *i;
 *  Print the instance's constructed names to the specified file.
 *  (there may not be any in bizarre circumstances).
 */

extern struct gl_list_t *WriteAliasStrings(CONST struct Instance *);
/*
 *  aliases=WriteAliasStrings(i);
 *  struct Instance *i;
 *  struct gl_list_t *aliases;
 *
 *  Return a list of strings of all the possible instance names for i.
 *  The list AND the strings on it are the user's responsibility to destroy.
 *  gl_free_and_destroy(aliases) would be convenient.
 */

extern struct gl_list_t *WriteISAStrings(CONST struct Instance *);
/*
 *  aliases=WriteISAStrings(i);
 *  struct Instance *i;
 *  struct gl_list_t *aliases;
 *
 *  Return a list of strings of all the constructed instance names for i.
 *  Names created by WILL_BE/ALIASES are not returned.
 *  Under bizarre circumstances, the list may be empty.
 *  The list AND the strings on it are the user's responsibility to destroy.
 *  gl_free_and_destroy(aliases) would be convenient.
 *
 *  BUGS: returns IS_A'd parents as well. need to hunt down the path
 *  of instances being tracked and see if they were passed the original
 *  instance we queried about.
 */

extern void WriteClique(FILE *,CONST struct Instance *);
/*
 *  void WriteClique(f,i)
 *  FILE *f;
 *  struct Instance *i;
 *  Print all the instance's clique members.
 */

extern void WriteInstance(FILE *,CONST struct Instance *);
/*
 *  void WriteInstance(f,i)
 *  FILE *f;
 *  struct Instance *i;
 *  Print the information contained in i.
 */

extern int WritePath(FILE *, CONST struct gl_list_t *);
/*
 *  l =  WritePath(f,path);
 *  FILE *f;
 *  CONST struct gl_list_t *path;
 *  int l;
 *  Returns the number of name pieces written.
 */

extern char *WritePathString(CONST struct gl_list_t *);
/*
 *  str =  WritePathString(path);
 *  CONST struct gl_list_t *path;
 *  char *str;
 *  Returns the path in a string. The caller should free the string when
 *  done with it.
 */

extern void SaveInstance(FILE *,CONST struct Instance *,int);
/*
 *  void SaveInstance(fp,inst,dorelations);
 *  FILE *fp,
 *  const struct Instance *inst;
 *  int dorelations;
 *  Save the information contained in inst in a format that will allow
 *  efficient reconstruction of the instance. This will be followed up
 *  with RestoreInstance.
 */

extern void WriteInstanceList(struct gl_list_t *list);
/*
 *  void WriteInstanceList(list);
 *  struct gl_list_t *list;
 *  This is a debugging aid and not intended for general use.
 *  It assumes that this is a list of instances and will try to write
 *  out the instance name for each element on the list.
 */

extern void WriteAtomValue(FILE *, CONST struct Instance *);
/*
 *  void WriteAtomValue(f,i);
 *  FILE *f;
 *  CONST struct Instance *i;
 */

typedef VOIDPTR (*IPFunc)(struct Instance *,VOIDPTR);
/*
 *  This is the type of function you should write for use with
 *  PushInterfacePtrs. It will be applied to the instances in the
 *  tree. If your function returns anything other than NULL, then
 *  we will make the instance's interface pointer be the pointer you
 *  returned.
 *  In constructing instance bridges it is good to be able to attach
 *  temporary data structures to instances during construction. These
 *  temporary structures should not be left laying about. Rather, you
 *  should call the following Push and Pop functions like so:
 *     int build_my_bridge(struct Instance *i, ...)
 *     {
 *        struct gl_list_t *oldips = NULL;
 *        oldips =  PushInterfacePtrs(i,YourCreateFunc,0,1,vp);
 *  Do whatever you need to here, making the assumption
 *  that the instance's YourFunc was interested in have
 *  the data created by YourFunc in their interface_ptrs.
 *        PopInterfacePtrs(oldips,YourDestroyFunc,vp);
 *     }
 *  If everyone follows this rule, it is easy to see that we can
 *  support nested transient clients so long as they don't go
 *  sneaking around in each others guts.  Abstraction is your friend.
 *  Clients, such as a horribly sloppy GUI, may work without using the
 *  push and pop functions, but sanity insurance is then THAT client's
 *  responsibility and none of ours.
 */

extern struct gl_list_t *PushInterfacePtrs(struct Instance *,IPFunc,
                                           unsigned long int,int,VOIDPTR);
/*
 *  oldips = PushInterfacePtrs(i,ipcreatef,iest,visitorder,vp);
 *  struct Instance *i;
 *  IPFunc ipcreatef;
 *  unsigned long iest;
 *  int visitorder;
 *  struct gl_list_t *oldips;
 *  VOIDPTR vp;
 *
 *  Creates a gl_list and returns it to you.
 *  It contains the information needed to restore the state of the
 *  instance interface pointers ipcreatef returns non-NULL values for.
 *  Remember that not all instance types have interface pointers.
 *  Push does not visit subatomic instances (ATOM/reln children).
 *  The algorithm is as follows:
 *  -Create an initial gl_list of capacity = 2 * iest (we keep pairs).
 *  (Thus, iest allows you to give us a hint about how many insts
 *  you expect to be interested in. iest need not be a perfect hint.)
 *  -Visit the instance tree (visitorder is treated as order is in
 *  the VisitInstanceTree function). Each place that ipcreatef
 *  returns non-NULL, save ip state information in the gl_list and
 *  replace it in the instance with your ip data.
 *  -Return gllist.
 *  The gl_list returned here can only be safely destroyed by a call
 *  following to PopInterfacePtrs.
 *  The gl_list returned may be NULL if malloc fails or you forgot
 *  ipcreatef.
 *
 *  ASSUMPTION: For the duration of the Push/Pop sequence you will be
 *  taking NO compiler action that deletes, relocates, or merges any
 *  part of the subtree rooted at instance i.
 *  Violate this rule and we die most probably.
 *  This is not a hard assumption to meet in single thread code.
 */

typedef VOIDPTR (*IPDeleteFunc)(struct Instance *,VOIDPTR,VOIDPTR);
/*
 *  func(i,ipdata,vp);
 *  struct Instance *i;
 *  VOIDPTR ipdata;   (you gave us with your IPFunc)
 *  VOIDPTR vp;       (the vp you pass to PopInterfacePtrs)
 *  This is a function you supply. It will be called with the pointer
 *  you returned in IPFunc and the matching instance and the void
 *  you passed to PopInterfacePtrs.
 *  This is so you may do any destruction of the objects returned by IPFunc.
 */

extern void PopInterfacePtrs(struct gl_list_t *,IPDeleteFunc,VOIDPTR);
/*
 *  PopInterfacePtrs(oldips,ipdestroyf,vp);
 *  IPDeleteFunc ipdestroyf;
 *  struct gl_list_t *oldips;
 *  VOIDPTR userdata;
 *  oldips is from a call to PushInterfacePtrs.
 *  This function restores the previous state of interface pointers.
 *  ipdestroyf is a function you provide.  If you provide NULL
 *  (meaning that no deallocation of objects pointed at by interface_ptr)
 *  we simply restore the old state. If ipdestroyf is not NULL, we
 *  will call it on the instances in oldips.
 *  We deallocate oldips, this is not your job.
 */


int ArrayIsRelation(struct Instance *);
/*
 *  r = ArrayIsRelation(i);
 *  struct Instance *i;
 *  int r;
 *  Returns 1 if the instance sent in is a good relation array or relation,
 *  0 OTHERWISE.
 */

int ArrayIsLogRel(struct Instance *);
/*
 *  r = ArrayIsLogRel(i);
 *  struct Instance *i;
 *  int r;
 *  Returns 1 if the instance sent in is a good logical relation array
 *  or logical relation, 0 OTHERWISE.
 */

int ArrayIsWhen(struct Instance *);
/*
 *  r = ArrayIsWhen(i);
 *  struct Instance *i;
 *  int r;
 *  Returns 1 if the instance sent in is a good when array
 *  or when, 0 OTHERWISE.
 */

int ArrayIsModel(struct Instance *);
/*
 *  r = ArrayIsModel(i);
 *  struct Instance *i;
 *  int r;
 *  Returns 1 if the instance sent in is a good model array
 *  or when, 0 OTHERWISE.
 */

#endif /* __INSTANCE_IO_H_SEEN__ */
