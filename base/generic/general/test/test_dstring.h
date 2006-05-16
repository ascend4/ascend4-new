/*	ASCEND modelling environment
	Copyright (C) 2005 Jerry St.Clair
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
	@file
	Registration function for unit tests of the ASCEND general/dstring.c module.

	Requires:
	#include "CUnit/CUnit.h"
	#include "utilities/ascConfig.h"
	#include "general/dstring.h"
 */

#ifndef TEST_DSTRING_H_SEEN
#define TEST_DSTRING_H_SEEN

#ifdef __cplusplus
extern "C" {
#endif

CU_ErrorCode test_register_general_dstring(void);
/**<
 *  Registers the unit tests for the ASCEND general/dstring module.
 *  Returns a CUnit error code (CUE_SUCCESS if no errors).
 */

#ifdef __cplusplus
}
#endif

#endif  /* TEST_DSTRING_H_SEEN */
