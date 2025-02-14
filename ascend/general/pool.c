/*
 *  Ascend Pooled Memory Manager / Memory module.
 *  by Karl Westerberg, Ben Allan
 *  Created: 6/90
 *  by Benjamin Andrew Allan
 *  Created: 2/96
 *  Version: $Revision: 1.1 $
 *  Version control file: $RCSfile: pool.c,v $
 *  Date last modified: $Date: 1997/07/18 11:37:01 $
 *  Last modified by: $Author: mthomas $
 *  Version: $Revision: 1.7 $
 *  Version control file: $RCSfile: mem.c,v $
 *  Date last modified: $Date: 1998/01/10 18:00:06 $
 *  Last modified by: $Author: ballan $
 *
 *  This file is part of the Ascend Language Interpreter.
 *
 *  Copyright (C) 1996 Benjamin Andrew Allan
 *  Copyright (C) 1997 Carnegie Mellon University

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
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "platform.h"
#include "ascMalloc.h"
#include "pool.h"
#include "mathmacros.h"

static void move_fwd(POINTER from, POINTER too, size_t nbytes)
/**
 ***  Copies bytes from --> too in forward direction.
 **/
{
   while( nbytes-- > 0 )
      *(too++) = *(from++);
}

static void move_bwd(POINTER from, POINTER too, size_t nbytes)
/**
 ***  Copies bytes from --> too in backward direction.
 **/
{
   from += nbytes;
   too  += nbytes;
   while( nbytes-- > 0 )
      *(--too) = *(--from);
}

void pool_move_disjoint(POINTER from, POINTER too, size_t nbytes)
{
   ascbcopy((char *)from,(char *)too,nbytes);
}

void pool_move(POINTER from, POINTER too,size_t nbytes)
{
   if( from < too )
      move_bwd(from,too,nbytes);
   else
      move_fwd(from,too,nbytes);
}

/*  zeroes nbytes of memory pointed at by too. byte is ignored but
 *  there for interchangability with pool_repl_byte
 */
void pool_zero_byte(POINTER too, unsigned byte, size_t nbytes)
{
  (void)byte;
  ascbzero((void *)too,(size_t)nbytes);
  /*
   *   while( nbytes-- > 0 )
   *         *(too++) = 0;
   */
}

void pool_repl_byte(POINTER too, unsigned byte, size_t nbytes)
{
   while( nbytes-- > 0 )
      *(too++) = (char)byte;
}

void pool_repl_word(POINTER too,unsigned word, size_t nwords)
{
   unsigned *pw = (unsigned *)too;
   while( nwords-- > 0 )
      *(pw++) = word;
}

#define mv_get(too,from,nbytes) move_fwd((POINTER)(from),(POINTER)(too),nbytes)
#define mv_set(from,too,nbytes) move_fwd((POINTER)(from),(POINTER)(too),nbytes)

/*********************** pool_store code. BAA 5/16/95 ***********************/
/* according to K&R2 char <--> byte and size_t is a byte count.
   We are coding with those assumptions. (sizeof(char)==1) */
#define OK 345676543
#define DESTROYED 765434567
#if POOL_DEBUG
/* ground LIGHTENING */
#undef pool_LIGHTENING
#define pool_LIGHTENING FALSE
#endif
#define BYPASS_ASCMALLOC FALSE
#if (pool_LIGHTENING || BYPASS_ASCMALLOC)
/* gonna bypass ascmalloc, eh? ;-) shaame on you! */
#define PMEM_calloc(a,b) calloc(a,b)
#define PMEM_malloc(a) malloc(a)
#define PMEM_free(a) free(a)
#define PMEM_realloc(a,b) realloc(a,b)
#else
#define PMEM_calloc(a,b) asccalloc(a,b)
#define PMEM_malloc(a) ascmalloc(a)
#define PMEM_free(a) ascfree(a)
#define PMEM_realloc(a,b) ascrealloc(a,b)
#endif

/*
   Don't get caught taking the size of struct pool_element,
   It is the head for anonymous elements of any size.
*/
struct pool_element {
	struct pool_element *nextelt;
};

struct pool_store_header {
  int integrity;     /* sanity number. */
  /* actual data */
  int maxlen;        /* current length of pool, not necessarily w/bars full */
  char **pool;       /* array of pointers to bars */
  struct pool_element *list; /* pointer to the most recently freed element */

  /* some interesting book keeping quantities */
#if !pool_LIGHTENING
  long active;		/* number of elements individually requested, ever */
  long retned;		/* number of elements individually returned, ever */
#endif
  size_t eltsize;	/* size of element, often an unsigned (long) */
  size_t eltsize_req;	/* size of element, often an unsigned (long) */
  size_t barsize;	/* size of bar. no point in extra multiplications */

  /* memory management quantities */
  int len;           /* number of bars filled (length of pool filled) */
  int wid;           /* num elements in a bar */
  int expand;        /* number of bars to expand by usually */
  int growpool;      /* expansion increment for pool array */
  int curbar;        /* pool entry from which fresh elements may be had */
  int curelt;        /* number of the next element in the curbar to hand out */
  int onlist;        /* length of recycle list, in elements */
#if !pool_LIGHTENING
  int total;         /* total number of elements in this store */
  int highwater;     /* fresh elements turned loose from store */
  int inuse;         /* current elts user has outstanding */
#endif
};
/* notes on header:
 * list is, as currently coded, null terminated by accident.
 * The intent of the author is that the counter onlist is the
 * authoritative list length.
 */

#define PMEM_MINBARSIZE 5
#define PMEM_MINPOOLSIZE 2
#ifdef __alpha
#define PMEM_MINPOOLGROW 512
/* gotta love those fat pointers. grow by 4k min. */
#else
#define PMEM_MINPOOLGROW 1024
#endif


/*
Returns 2 if really bad, 1 if something fishy, 0 otherwise.
*/
static int check_pool_store(const pool_store_t ps){
#if pool_LIGHTENING
  return 0;
#else
  int i;

  if (ISNULL(ps)) {
    ERROR_REPORTER_HERE(ASC_PROG_NOTE,"check_pool_store (pool.c): NULL pool_store_t!");
    return 2;
  }
  if (ps->integrity != OK) {
    (ps->integrity == DESTROYED) ?
      (ERROR_REPORTER_HERE(ASC_PROG_NOTE,"check_pool_store (pool.c): pool_store_t recently destroyed!"))
    : (ERROR_REPORTER_HERE(ASC_PROG_NOTE,"check_pool_store (pool.c): pool_store_t corrupted!"));
    return 2;
  }
  if (ps->onlist && ISNULL(ps->list)) {
    ERROR_REPORTER_HERE(ASC_PROG_ERR,"NULL recycle list!");
    return 1;
  }
  /* more in than out? */
  if (ps->retned > ps->active) {
    ERROR_REPORTER_HERE(ASC_PROG_ERR,"Imbalanced memory.");
    return 1;
  }
  if (ps->onlist + ps->inuse != ps->highwater) {
    ERROR_REPORTER_HERE(ASC_PROG_ERR,"Imbalanced elements.");
    return 1;
  }
  /* is pool allocated to ps->len? */
  for (i=0; i < ps->len; i++) {
    if (ISNULL(ps->pool[i])) {
      ERROR_REPORTER_HERE(ASC_PROG_ERR,"Hole found in pool! Bar %d is NULL.",i);
      return 2;
    }
  }
  /* do not check for integrity or count of recycle list elements. */
  return 0;
#endif
}


/*
   This should not be called unless all current store is in use.
   Returns 0 if ok, 1 for all other insanities.
   If only partial expansion is possible, we will do it and
   return 0. If change in ps->len is < the expected incremented value
   on return, the user knows he should do some garbage removal.
   incr is provided for times when we know how much we want
   to expand by.

   This should never be called on a totally empty pool.
*/
static int expand_store(pool_store_t ps, int incr){
  static int oldsize, newsize,punt,i;
  char **newpool = NULL;
  if (check_pool_store(ps) >1) {
    ERROR_REPORTER_HERE(ASC_PROG_ERR,"expand_store received bad pool_store_t. Expansion failed.");
    return 1;
  }

#if !pool_LIGHTENING
  /* do not expand elements or pool if all is not in use */
  if (ps->inuse < ps->total) {
    ERROR_REPORTER_HERE(ASC_PROG_ERR,"expand_store called prematurely. Expansion will be reported as failed.");
    return 1;
  }
#endif

  /* make sure bar expansion is at least the minimum */
  if (incr < ps->expand) incr = ps->expand;
  oldsize = ps->len;
  newsize = oldsize+incr;

  /* expand pool capacity only if all of pool in use  */
  if (newsize > ps->maxlen) {
    i = ps->maxlen + MAX(ps->growpool,incr);
    newpool = (char **)PMEM_realloc(ps->pool, i*sizeof(char *));
    if (ISNULL(newpool)) {
      ERROR_REPORTER_HERE(ASC_PROG_ERR,"expand_store can't realloc pool.");
      return 1;
    }
    /* NULL the new pool */
    for (punt = ps->maxlen; punt < i; punt++) {
      newpool[punt] = NULL;
    }
    ps->maxlen = i;
    ps->pool = newpool;
  }
  /* end of pool expansion */

  /* expand elements/bars */
  ps->len = newsize; /* set expanded number of bars filled */
  punt = -1;
  for (i = oldsize; i < newsize; i++) {
#if POOL_DEBUG
    ps->pool[i] = (char *)PMEM_calloc(ps->barsize,1);
#else
    ps->pool[i] = (char *)PMEM_malloc(ps->barsize);
#endif
    if (ISNULL(ps->pool[i])) {
      punt = i;
      /* we will return partially expanded if possible */
      break;
    }
  }
  if (punt >= 0) {
    /* incomplete expansion */
    if (punt == oldsize) {
      /* unable to add elements at all. fail */
      ERROR_REPORTER_HERE(ASC_PROG_ERR,"Insufficient memory.");
      ps->len = oldsize;
      return 1;
    } else {
      /* contract pool to the actual expansion size */
      ERROR_REPORTER_HERE(ASC_PROG_WARNING,"expand_store: Insufficient memory. Doing partial expansion.");
      ps->len = punt;
    }
  }
#if !pool_LIGHTENING
  ps->total = ps->len * ps->wid;
#endif
  return 0;
}


#if !pool_LIGHTENING
#if POOL_DEBUG
/*
Returns 1 if pointer is to an elt of the store, 0 otherwise.
The case of pointer into store reserved space, but not an elt is checked.
*/
static int from_store( pool_store_t ps, void *elt){
  char *data, **pool;
  int i,lim;

  if (ISNULL(ps) || ISNULL(elt)) return 0;
  lim = ps->len;
  pool = ps->pool;
  data = (char *)elt;
  for (i=0; i<lim; i++) {
    /* did the char come from the current bar of chars? */
    if (*pool <= data && data < *pool + ps->barsize) {
      /* if so, is it legal? */
      if ( !((data - (*pool)) % ps->eltsize) ) {
        return 1;
      } else {
        ERROR_REPORTER_HERE(ASC_PROG_ERR,"Misaligned element pointer detected.");
        return 0;
      }
    }
    pool++;
  }
  return 0;
}
#endif
#endif


void pool_get_stats(struct pool_statistics *pss,  pool_store_t m){
  if (ISNULL(pss)) {
    ERROR_REPORTER_HERE(ASC_PROG_ERR,"Called with NULL struct pool_statistics.");
    return;
  }
  if (check_pool_store(m)>1 ) {
    ascbzero((void *)pss,(int)sizeof(struct pool_statistics));
    ERROR_REPORTER_HERE(ASC_PROG_ERR,"Bad pool_store_t given. Returning 0s.");
    return;
  }
#if !pool_LIGHTENING
  pss->p_eff =  m->inuse*m->eltsize_req/(double)pool_sizeof_store(m);
  pss->p_recycle =
    ( (m->highwater > 0) ? m->active/(double)m->highwater : 0.0 );
  pss->elt_total = m->total;
  pss->elt_taken = m->highwater;
  pss->elt_inuse = m->inuse;
#else
  pss->p_eff = 0.0;
  pss->p_recycle = 0.0;
  pss->elt_total = m->len*m->wid;
  pss->elt_taken = m->curelt+m->curbar*m->wid;
  pss->elt_inuse = 0;
#endif
  pss->elt_onlist = m->onlist;
  pss->elt_size = m->eltsize;
  pss->str_len = m->len;
  pss->str_wid = m->wid;
}


pool_store_t pool_create_store(int length, int width,
	size_t eltsize, int deltalen, int deltapool
){
  int i, punt;
  pool_store_t newps=NULL;
  size_t uelt;

  if (length < 1 || width < 1 || deltalen < 1 ) {
    ERROR_REPORTER_HERE(ASC_PROG_ERR,"Bad input detected.");
    return NULL;
  }

  /* check minsizes */
  if (length < PMEM_MINPOOLSIZE) length = PMEM_MINPOOLSIZE;
  if (width < PMEM_MINBARSIZE) width = PMEM_MINBARSIZE;
  /* maybe the user gave us length = max he knows he needs, so we
     will not enforce a minimum maxlen on length at creation */

  uelt = eltsize;
  /* check for elt padding needed */
  if(eltsize % sizeof(void *)) {
    size_t ptrperelt;
    ptrperelt = eltsize/sizeof(void *) + 1;
#if POOL_DEBUG
	CONSOLE_DEBUG("Elts of size %d padded to %d\n",(unsigned)eltsize,(unsigned)(eltsize = (unsigned)ptrperelt*sizeof(void *)));
#else
    eltsize = ptrperelt*sizeof(void *);
#endif
  }
  /* eltsize is now pointer alignable */
  /* it could still be user data misalignable, of course, if pointer
     is not the most restrictive data type for the machine */


  newps = (pool_store_t)PMEM_calloc(1,sizeof(struct pool_store_header));
  if (ISNULL(newps)) {
    ERROR_REPORTER_HERE(ASC_PROG_ERR,"Insufficient memory.");
    return NULL;
  }
  /* the following are all initially 0/NULL by calloc, and should be:
  newps->list
  newps->active
  newps->retned
  newps->curbar
  newps->curelt
  newps->highwater
  newps->onlist
  newps->inuse
  newps->pool
  */
  newps->integrity = OK;
  newps->len = length;
  newps->maxlen = length;
  newps->wid = width;
  newps->expand = deltalen;
  newps->eltsize = eltsize;
  newps->barsize = eltsize * width;
#if !pool_LIGHTENING
  newps->total = length * width;
#endif
  newps->growpool = MAX(PMEM_MINPOOLGROW,deltapool);
  newps->eltsize_req = uelt;

  /* get pool */
  newps->pool = (char **)PMEM_calloc(length,sizeof(char *));
  if (ISNULL(newps->pool)) {
    ERROR_REPORTER_HERE(ASC_PROG_ERR,"Insufficient memory.");
    newps->integrity = DESTROYED;
    PMEM_free(newps);
    return NULL;
  }

  /* fill it */
  punt = -1;
  for (i=0; i < length; i++) {
    newps->pool[i] = (char *)PMEM_malloc(newps->barsize);
    if (ISNULL(newps->pool[i])) {
      punt = i; /* we will stop cleanup deallocation at punt-1 */
      break;
    }
  }

  /* drain it if can't fill it */
 if (punt != -1) {
    ERROR_REPORTER_HERE(ASC_PROG_ERR,"Insufficient memory.");
    for (i = 0; i < punt; i++) {
      PMEM_free(newps->pool[i]);
    }
    newps->integrity = DESTROYED;
    PMEM_free(newps->pool);
    PMEM_free(newps);
    return NULL;
  }
  return newps;
}


void *pool_get_element(pool_store_t ps){
  /* no automatic variables please */
  struct pool_element *elt;
  /* in a test on the alpha, though, making elt static global slowed it */

  if (ISNULL(ps)) {
    ERROR_REPORTER_HERE(ASC_PROG_ERR,"Called with NULL store.");
    return NULL;
  }
  /* recycling */
  if (ps->onlist) {
    elt = ps->list; /* get last element put into list */
    ps->list = ps->list->nextelt; /* pop list */
    /* preserves original null if list is empty */
    ps->onlist--;
#if !pool_LIGHTENING
    ps->inuse++;
    ps->active++;
#endif
    return (void *)elt;
  }

  /* fresh element */
  if (ps->curelt == ps->wid) {
    /* bump up pool if bar all allocated */
    ps->curelt = 0;
    ps->curbar++;
  }
  if (ps->curbar == ps->len) {
    /* attempt to expand pool if all allocated */
    if ( expand_store(ps,1) ) {
      ERROR_REPORTER_HERE(ASC_PROG_ERR,"Insufficient memory.");
      return NULL;
    }
  }
  /* if we got here, pool is big enough to grab an element from */

  /* get the pointer to an element's worth of char from the pool */
  elt =
    (struct pool_element *) &(ps->pool[ps->curbar][ps->curelt * ps->eltsize]);
  ps->curelt++;
#if !pool_LIGHTENING
  ps->inuse++;
  ps->highwater++;
  ps->active++;
#endif
  return (void *)elt;
}


void pool_get_element_list(pool_store_t ps, int nelts, void **ary){
  ERROR_REPORTER_HERE(ASC_PROG_ERR,"NOT implemented");
  if (ISNULL(ps) || ISNULL(ary)) {
    ERROR_REPORTER_HERE(ASC_PROG_ERR,"Called with NULL array or pool_store_t");
    return;
  }
  if (nelts <1) {
    ERROR_REPORTER_HERE(ASC_PROG_WARNING,"Called with request for 0 elements.");
    return;
  }
  ary[0]=NULL;
}


void pool_free_elementF(pool_store_t ps, void *ptr
#if POOL_DEBUG
	, CONST char *fn
#endif
){
  struct pool_element *elt;

  if (ISNULL(ptr)) return;
  elt = (struct pool_element *)ptr;

#if !pool_LIGHTENING
#if POOL_DEBUG
  if (check_pool_store(ps)) {
    ERROR_REPORTER_HERE(ASC_PROG_ERR,"Fishy pool_store_t. Element not recycled. Filename='%s'",fn);
    return;
    /* at this point we have no way to get back at the abandoned element */
  }
  /* check for belongs to this pool_store_t */
  if (!from_store(ps,ptr)) {
    ERROR_REPORTER_HERE(ASC_PROG_ERR,"Spurious element detected. Element ignored.");
    return;
  }
#endif
#endif

  /* recycle him */
  elt->nextelt = ps->list; /* push onto list */
  /* first one in will pick up the null list starts as */
  ps->list = elt;
  /* ptr now on lifo stack in elt linked list form */
  ps->onlist++;

#if !pool_LIGHTENING
  ps->retned++;
  ps->inuse--;
  if (ps->inuse < 0) {
    ERROR_REPORTER_HERE(ASC_PROG_ERR,"More elements freed than have been handed out. (%d)",abs(ps->inuse));
#if POOL_DEBUG
    ERROR_REPORTER_HERE(ASC_PROG_ERR,"Filename='%s'",fn);
#endif
  }
#endif
  return;
}


void pool_clear_storeF(pool_store_t ps
#if POOL_DEBUG
	, CONST char *fn
#endif
){
  if ( check_pool_store(ps) > 1 ) {
    ERROR_REPORTER_HERE(ASC_PROG_ERR,"Bad pool_store_t given. Not cleared.");
#if POOL_DEBUG
    ERROR_REPORTER_HERE(ASC_PROG_ERR,"Filename='%s'",fn);
#endif
    return;
  }
#if POOL_DEBUG
  if (ps->inuse || ps->highwater - ps->onlist ) {
    ERROR_REPORTER_HERE(ASC_PROG_WARNING,"In use elements in given pool_store_t are cleared. Don't refer to them again. Filename='%s'",fn);
  }
#endif
#if !pool_LIGHTENING
  ps->retned += ps->inuse;
  if (ps->active - ps->retned ||
      ps->onlist + ps->inuse - ps->highwater ||
      ps->curelt + ps->curbar*ps->wid - ps->highwater) {
    ERROR_REPORTER_HERE(ASC_PROG_ERR,"Element imbalance detected.");
  }
#endif
#if !pool_LIGHTENING
  ps->inuse = 0;
  ps->highwater = 0;
#endif
  ps->curbar = 0;
  ps->curelt = 0;
  ps->onlist = 0;
  ps->list = NULL;
}


void pool_destroy_store(pool_store_t ps){
  int i;
#if POOL_DEBUG
  if ( (i=check_pool_store(ps))==2 ) {
    ERROR_REPORTER_HERE(ASC_PROG_ERR,"Bad pool_store_t given. Not destroyed.");
    return;
  }
  if ( i ) {
    ERROR_REPORTER_HERE(ASC_PROG_WARNING,"Suspicious pool_store_t given. Destroyed anyway.");
    return;
  }
  if (ps->inuse || ps->highwater - ps->onlist ) {
    ERROR_REPORTER_HERE(ASC_PROG_WARNING,"In use elements in given pool_store_t are cleared. Don't refer to them again.");
  }
#else
  if (ISNULL(ps)  || ps->integrity != OK) {
    ERROR_REPORTER_HERE(ASC_PROG_ERR,"Bad pool_store_t given. Not destroyed.");
    return;
  }
#endif
  for (i=0; i < ps->len; i++) {
    PMEM_free(ps->pool[i]);
  }
  PMEM_free(ps->pool);
  ps->integrity = DESTROYED;
  PMEM_free(ps);
  return;
}


void pool_print_store(FILE *fp, pool_store_t ps, unsigned detail){
  if (ISNULL(fp) || ISNULL(ps)) {
    ERROR_REPORTER_HERE(ASC_PROG_ERR,"Called with NULL FILE or pool_store_t.");
    return;
  }
  if (check_pool_store(ps)>1) {
    ERROR_REPORTER_HERE(ASC_PROG_ERR,"Called with bad pool_store_t");
    return;
  }
  FPRINTF(fp,"pool_store_t statistics:\n");
  if (detail) {
    FPRINTF(fp,"INTERNAL (integrity OK if = %d):\n",OK);
    FPRINTF(fp,"%-30s %-20ld\n","integrity", (long)ps->integrity);
#if !pool_LIGHTENING
    FPRINTF(fp,"%-30s %-20ld\n","active",ps->active);
    FPRINTF(fp,"%-30s %-20ld\n","returned",ps->retned);
#endif
    FPRINTF(fp,"%-30s %-20lu\n","eltsize",(unsigned long)ps->eltsize);
    FPRINTF(fp,"%-30s %-20lu\n","barsize",(unsigned long)ps->barsize);
    FPRINTF(fp,"%-30s %-20d\n","pool length",ps->len);
    FPRINTF(fp,"%-30s %-20d\n","pool maxlength",ps->maxlen);
    FPRINTF(fp,"%-30s %-20d\n","bar width",ps->wid);
    FPRINTF(fp,"%-30s %-20d\n","pool extension",ps->growpool);
    FPRINTF(fp,"%-30s %-20d\n","pool fill rate",ps->expand);
    FPRINTF(fp,"%-30s %-20d\n","current bar",ps->curbar);
    FPRINTF(fp,"%-30s %-20d\n","current elt",ps->curelt);
#if !pool_LIGHTENING
    FPRINTF(fp,"%-30s %-20d\n","total elts",ps->total);
    FPRINTF(fp,"%-30s %-20d\n","highwater",ps->highwater);
#endif
    FPRINTF(fp,"%-30s %-20d\n","elt on list",ps->onlist);
#if !pool_LIGHTENING
    FPRINTF(fp,"%-30s %-20d\n","elt in use",ps->inuse);
#endif
  }
  if (!detail || detail > 1) {
    FPRINTF(fp,"SUMMARY:\n");
    FPRINTF(fp,"%-30s %-20d\n","Pointers in pool",ps->maxlen);
    FPRINTF(fp,"%-30s %-20d\n","Pointers allocated",ps->len);
#if !pool_LIGHTENING
    FPRINTF(fp,"%-30s %-20d\n","Elements in pool",ps->total);
    FPRINTF(fp,"%-30s %-20d\n","Elements in use",ps->inuse);
#endif
    FPRINTF(fp,"%-30s %-20d\n","Elements waiting recycle",ps->onlist);
#if !pool_LIGHTENING
    FPRINTF(fp,"%-30s %-20d\n","Elements unused",ps->total - ps->highwater);
#endif
    FPRINTF(fp,"%-30s %-20d\n","Working deltapool",ps->growpool);
    FPRINTF(fp,"%-30s %-20d\n","Working deltalen",ps->expand);
    FPRINTF(fp,"%-30s %-20g\n","Element efficiency",
      ps->eltsize_req/(double)ps->eltsize);
#if !pool_LIGHTENING
    FPRINTF(fp,"%-30s %-20g\n","Memory efficiency (w/recycle)",
      ps->highwater*ps->eltsize_req/(double)pool_sizeof_store(ps));
    FPRINTF(fp,"%-30s %-20g\n","Memory efficiency (instant)",
      ps->inuse*ps->eltsize_req/(double)pool_sizeof_store(ps));
    FPRINTF(fp,"%-30s %-20g\n","Recycle rate",
       ((ps->highwater > 0) ? ps->active/(double)ps->highwater : 0) );
#endif
  }
  FPRINTF(fp,"%-30s %-20lu\n","Total bytes in store",
    (unsigned long)pool_sizeof_store(ps));

  return;
}


size_t pool_sizeof_store(pool_store_t ps){
  size_t siz;
  if (check_pool_store(ps)>1) return (size_t)0;
  siz = sizeof(struct pool_store_header);    /* header */
  siz += ps->barsize * ps->len;             /* elt data */
  return (siz += ps->maxlen*sizeof(char*)); /* pool vector */
}
