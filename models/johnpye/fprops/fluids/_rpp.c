/*  Copyright (C) 2011 Carnegie Mellon University

 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation; either version 2, or (at your option)
 any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>.
*//** @file
... MCGRAW-HILL LICENSE ...

	Data in this file, except as OTHERWISE noted in the code given, are taken
	from THE BOOK:

		The Properties of Gases and Liquids, 4th Edition
		by Reid, Prausnitz, and Poling, Copyright 1987 McGraw-Hill Companies,

	with the publisher's permission dated July 20, 1998.
	This file must not be modified, distributed, or otherwise used
	without this License notice attached. The conditions of this license,
	and the GNU Public License, both apply.

	Terms from McGraw-Hill:
	M1. The data may not be used outside of ASCEND and derivative works.
	M2. McGraw-Hill makes no representations or warranties as to the
		accuracy of any information contained in THE BOOK, or in this
		transcription of it, including any warranties of merchantability
		or fitness for a particular purpose. In no event shall McGraw-Hill
		have any liability to any party for special, incidental, tort, or
		consequential damages arising out of or in connection with THE
		BOOK or this transcription of it, even if McGraw-Hill has been
		advised of the possibility of such damages. All users of ASCEND
		(or any derivative work) must be provided with written notice of
		this disclaimer and limitation on liability in the end-user license
		of ASCEND or any derivative work.
	M3. Credit to McGraw-Hill and the authors of THE BOOK shall be visible
		each time ASCEND is accessed, and at all other reasonable points.
		Such credit shall include the copyright notice of the McGraw-Hill
		Companies.
	M4. Any work incorporating this information in any way on the WWW
		(Internet) shall include a hypertext reference to:
		http://www.bookstore.mcgraw-hill.com

... end of McGraw-Hill License ...

...	CMU DISCLAIMER ...

	The authors of ASCEND and Carnegie Mellon University make
	absolutely NO WARRANTY about the accuracy of this transcription
	of the RPP data or of the original data itself, nor do they
	provide any guarantee that the data here represented is
	suitable for any purpose academic or commercial.

... end of CMU disclaimer ...
*/

#include "../filedata.h"


static const IdealData ideal_data_chloropentafluoroetane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{27.83, 0}
			,{0.3492, 1}
			,{-2.89E-04, 2}
			,{8.14E-08, 3}
		}
	}}
};

static const CubicData cubic_data_chloropentafluoroetane = {
	.M = 154.467
	,.T_c = 353.2
	,.p_c = (32.3 * 1e5)
	,.rho_c = (1000 * 154.467 / 251.8)
	,.T_t = 0
	,.omega = 0.279
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, NAN, NAN}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_chloropentafluoroetane
};

const EosData eos_rpp_chloropentafluoroetane = {
	"chloropentafluoroetane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_chloropentafluoroetane}
};


static const IdealData ideal_data_bromobenzene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-28.81, 0}
			,{0.5351, 1}
			,{-4.08E-04, 2}
			,{1.21E-07, 3}
		}
	}}
};

static const CubicData cubic_data_bromobenzene = {
	.M = 157.010
	,.T_c = 670.0
	,.p_c = (45.2 * 1e5)
	,.rho_c = (1000 * 157.010 / 324.0)
	,.T_min = 329
	,.omega = 0.251
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (105100 / 157.010), (138600 / 157.010)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_bromobenzene
};

const EosData eos_rpp_bromobenzene = {
	"bromobenzene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_bromobenzene}
};


static const IdealData ideal_data_ammonia = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{27.31, 0}
			,{0.02383, 1}
			,{1.71E-05, 2}
			,{-1.19E-08, 3}
		}
	}}
};

static const CubicData cubic_data_ammonia = {
	.M = 17.031
	,.T_c = 405.5
	,.p_c = (113.5 * 1e5)
	,.rho_c = (1000 * 17.031 / 72.5)
	,.T_min = 220
	,.omega = 0.250
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-45730 / 17.031), (-16160 / 17.031)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_ammonia
};

const EosData eos_rpp_ammonia = {
	"ammonia"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_ammonia}
};


static const IdealData ideal_data_propyl_chloride = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-3.35, 0}
			,{0.3626, 1}
			,{-2.51E-04, 2}
			,{7.45E-08, 3}
		}
	}}
};

static const CubicData cubic_data_propyl_chloride = {
	.M = 78.542
	,.T_c = 503.0
	,.p_c = (45.8 * 1e5)
	,.rho_c = (1000 * 78.542 / 254.0)
	,.T_t = 0
	,.omega = 0.235
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-130200 / 78.542), (-50700 / 78.542)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_propyl_chloride
};

const EosData eos_rpp_propyl_chloride = {
	"propyl_chloride"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_propyl_chloride}
};


static const IdealData ideal_data_tert_butyl_methyl_ether = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{2.53, 0}
			,{0.5136, 1}
			,{-2.60E-04, 2}
			,{4.30E-08, 3}
		}
	}}
};

static const CubicData cubic_data_tert_butyl_methyl_ether = {
	.M = 88.150
	,.T_c = 496.4
	,.p_c = (33.7 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.269
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-293100 / 88.150), (-125500 / 88.150)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_tert_butyl_methyl_ether
};

const EosData eos_rpp_tert_butyl_methyl_ether = {
	"tert_butyl_methyl_ether"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_tert_butyl_methyl_ether}
};


static const IdealData ideal_data_n_octylcyclopentane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-59.95, 0}
			,{1.317, 1}
			,{-7.61E-04, 2}
			,{1.71E-07, 3}
		}
	}}
};

static const CubicData cubic_data_n_octylcyclopentane = {
	.M = 182.351
	,.T_c = 694.0
	,.p_c = (17.9 * 1e5)
	,.rho_c = -1
	,.T_min = 385
	,.omega = 0.564
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-250900 / 182.351), (95120 / 182.351)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_n_octylcyclopentane
};

const EosData eos_rpp_n_octylcyclopentane = {
	"n_octylcyclopentane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_n_octylcyclopentane}
};


static const IdealData ideal_data_n_decylcyclopentane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-61.92, 0}
			,{1.508, 1}
			,{-8.72E-04, 2}
			,{1.96E-07, 3}
		}
	}}
};

static const CubicData cubic_data_n_decylcyclopentane = {
	.M = 210.405
	,.T_c = 723.8
	,.p_c = (15.2 * 1e5)
	,.rho_c = -1
	,.T_min = 413
	,.omega = 0.654
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-292200 / 210.405), (111900 / 210.405)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_n_decylcyclopentane
};

const EosData eos_rpp_n_decylcyclopentane = {
	"n_decylcyclopentane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_n_decylcyclopentane}
};


static const IdealData ideal_data_2_2_4_4_tetramethylpentane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-67.40, 0}
			,{1.168, 1}
			,{-8.61E-04, 2}
			,{2.57E-07, 3}
		}
	}}
};

static const CubicData cubic_data_2_2_4_4_tetramethylpentane = {
	.M = 128.259
	,.T_c = 574.7
	,.p_c = (24.9 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.312
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-242100 / 128.259), (34040 / 128.259)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_2_2_4_4_tetramethylpentane
};

const EosData eos_rpp_2_2_4_4_tetramethylpentane = {
	"2_2_4_4_tetramethylpentane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_2_2_4_4_tetramethylpentane}
};


static const IdealData ideal_data_1_3_dimethylcyclohexane_cis = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-65.16, 0}
			,{0.8838, 1}
			,{-4.93E-04, 2}
			,{1.02E-07, 3}
		}
	}}
};

static const CubicData cubic_data_1_3_dimethylcyclohexane_cis = {
	.M = 112.216
	,.T_c = 591.0
	,.p_c = (29.6 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.224
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-184900 / 112.216), (29850 / 112.216)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_1_3_dimethylcyclohexane_cis
};

const EosData eos_rpp_1_3_dimethylcyclohexane_cis = {
	"1_3_dimethylcyclohexane_cis"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_1_3_dimethylcyclohexane_cis}
};


static const IdealData ideal_data_1_3_dimethylcyclohexane_trans = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-64.15, 0}
			,{0.8826, 1}
			,{-5.02E-04, 2}
			,{1.07E-07, 3}
		}
	}}
};

static const CubicData cubic_data_1_3_dimethylcyclohexane_trans = {
	.M = 112.216
	,.T_c = 598.0
	,.p_c = (29.7 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.189
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-176700 / 112.216), (36340 / 112.216)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_1_3_dimethylcyclohexane_trans
};

const EosData eos_rpp_1_3_dimethylcyclohexane_trans = {
	"1_3_dimethylcyclohexane_trans"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_1_3_dimethylcyclohexane_trans}
};


static const IdealData ideal_data_n_pentate = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-3.63, 0}
			,{0.4873, 1}
			,{-2.58E-04, 2}
			,{5.31E-08, 3}
		}
	}}
};

static const CubicData cubic_data_n_pentate = {
	.M = 72.151
	,.T_c = 469.7
	,.p_c = (33.7 * 1e5)
	,.rho_c = (1000 * 72.151 / 304.0)
	,.T_t = 0
	,.omega = 0.251
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-146500 / 72.151), (-8.37 / 72.151)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_n_pentate
};

const EosData eos_rpp_n_pentate = {
	"n_pentate"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_n_pentate}
};


static const IdealData ideal_data_2_pentene_trans = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{1.95, 0}
			,{0.4182, 1}
			,{-2.18E-04, 2}
			,{4.41E-08, 3}
		}
	}}
};

static const CubicData cubic_data_2_pentene_trans = {
	.M = 70.135
	,.T_c = 475.0
	,.p_c = (36.6 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.259
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-31780 / 70.135), (69960 / 70.135)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_2_pentene_trans
};

const EosData eos_rpp_2_pentene_trans = {
	"2_pentene_trans"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_2_pentene_trans}
};


static const IdealData ideal_data_benzonitrile = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-26.05, 0}
			,{0.5732, 1}
			,{-4.43E-04, 2}
			,{1.35E-07, 3}
		}
	}}
};

static const CubicData cubic_data_benzonitrile = {
	.M = 103.124
	,.T_c = 699.4
	,.p_c = (42.2 * 1e5)
	,.rho_c = -1
	,.T_min = 340
	,.omega = 0.362
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (219000 / 103.124), (261000 / 103.124)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_benzonitrile
};

const EosData eos_rpp_benzonitrile = {
	"benzonitrile"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_benzonitrile}
};


static const IdealData ideal_data_4_methyl_2_pentene_trans = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{12.63, 0}
			,{0.5154, 1}
			,{-3.01E-04, 2}
			,{7.33E-08, 3}
		}
	}}
};

static const CubicData cubic_data_4_methyl_2_pentene_trans = {
	.M = 84.162
	,.T_c = 493.0
	,.p_c = (30.4 * 1e5)
	,.rho_c = (1000 * 84.162 / 360.0)
	,.T_t = 0
	,.omega = 0.290
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-61500 / 84.162), (79670 / 84.162)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_4_methyl_2_pentene_trans
};

const EosData eos_rpp_4_methyl_2_pentene_trans = {
	"4_methyl_2_pentene_trans"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_4_methyl_2_pentene_trans}
};


static const IdealData ideal_data_methyl_formate = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{1.43, 0}
			,{0.27, 1}
			,{-1.95E-04, 2}
			,{5.70E-08, 3}
		}
	}}
};

static const CubicData cubic_data_methyl_formate = {
	.M = 60.052
	,.T_c = 487.2
	,.p_c = (60.0 * 1e5)
	,.rho_c = (1000 * 60.052 / 172.0)
	,.T_t = 0
	,.omega = 0.257
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-350000 / 60.052), (-297400 / 60.052)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_methyl_formate
};

const EosData eos_rpp_methyl_formate = {
	"methyl_formate"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_methyl_formate}
};


static const IdealData ideal_data_n_eicosane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-22.38, 0}
			,{1.939, 1}
			,{-1.12E-03, 2}
			,{2.53E-07, 3}
		}
	}}
};

static const CubicData cubic_data_n_eicosane = {
	.M = 282.556
	,.T_c = 767.0
	,.p_c = (11.1 * 1e5)
	,.rho_c = -1
	,.T_min = 471
	,.omega = 0.907
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-456100 / 282.556), (117400 / 282.556)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_n_eicosane
};

const EosData eos_rpp_n_eicosane = {
	"n_eicosane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_n_eicosane}
};


static const IdealData ideal_data_2_methylhexane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-39.39, 0}
			,{0.8642, 1}
			,{-6.29E-04, 2}
			,{1.84E-07, 3}
		}
	}}
};

static const CubicData cubic_data_2_methylhexane = {
	.M = 100.295
	,.T_c = 530.4
	,.p_c = (27.3 * 1e5)
	,.rho_c = (1000 * 100.295 / 421.0)
	,.T_t = 0
	,.omega = 0.329
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (195100 / 100.295), (3220 / 100.295)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_2_methylhexane
};

const EosData eos_rpp_2_methylhexane = {
	"2_methylhexane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_2_methylhexane}
};


static const IdealData ideal_data_butyronitrile = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{15.21, 0}
			,{0.3206, 1}
			,{-1.64E-04, 2}
			,{2.98E-08, 3}
		}
	}}
};

static const CubicData cubic_data_butyronitrile = {
	.M = 69.107
	,.T_c = 582.2
	,.p_c = (37.9 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.373
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (34100 / 69.107), (108700 / 69.107)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_butyronitrile
};

const EosData eos_rpp_butyronitrile = {
	"butyronitrile"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_butyronitrile}
};


static const IdealData ideal_data_ethylcyclohexane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-63.89, 0}
			,{0.8893, 1}
			,{-5.11E-04, 2}
			,{1.10E-07, 3}
		}
	}}
};

static const CubicData cubic_data_ethylcyclohexane = {
	.M = 112.216
	,.T_c = 609.0
	,.p_c = (30.0 * 1e5)
	,.rho_c = (1000 * 112.216 / 450.0)
	,.T_t = 0
	,.omega = 0.243
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-171900 / 112.216), (39270 / 112.216)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_ethylcyclohexane
};

const EosData eos_rpp_ethylcyclohexane = {
	"ethylcyclohexane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_ethylcyclohexane}
};


static const IdealData ideal_data_n_propylcyclohexane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-62.52, 0}
			,{0.9889, 1}
			,{-5.80E-04, 2}
			,{1.29E-07, 3}
		}
	}}
};

static const CubicData cubic_data_n_propylcyclohexane = {
	.M = 126.243
	,.T_c = 639.0
	,.p_c = (28.0 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.258
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-1.93E+05 / 126.243), (4.74E+04 / 126.243)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_n_propylcyclohexane
};

const EosData eos_rpp_n_propylcyclohexane = {
	"n_propylcyclohexane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_n_propylcyclohexane}
};


static const IdealData ideal_data_n_propylbenzene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-31.29, 0}
			,{0.7486, 1}
			,{-4.60E-04, 2}
			,{1.08E-07, 3}
		}
	}}
};

static const CubicData cubic_data_n_propylbenzene = {
	.M = 120.195
	,.T_c = 638.2
	,.p_c = (32.0 * 1e5)
	,.rho_c = (1000 * 120.195 / 44.0)
	,.T_t = 0
	,.omega = 0.344
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (7.83E+03 / 120.195), (1.37E+05 / 120.195)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_n_propylbenzene
};

const EosData eos_rpp_n_propylbenzene = {
	"n_propylbenzene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_n_propylbenzene}
};


static const IdealData ideal_data_1_1_dimethylcyclopentane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-57.89, 0}
			,{0.767, 1}
			,{-4.50E-04, 2}
			,{1.01E-07, 3}
		}
	}}
};

static const CubicData cubic_data_1_1_dimethylcyclopentane = {
	.M = 98.189
	,.T_c = 547.0
	,.p_c = (34.4 * 1e5)
	,.rho_c = (1000 * 98.189 / 360.0)
	,.T_t = 0
	,.omega = 0.273
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-138400 / 98.189), (39060 / 98.189)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_1_1_dimethylcyclopentane
};

const EosData eos_rpp_1_1_dimethylcyclopentane = {
	"1_1_dimethylcyclopentane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_1_1_dimethylcyclopentane}
};


static const IdealData ideal_data_methane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{19.25, 0}
			,{5.213e-2, 1}
			,{1.197e-5, 2}
			,{-1.132e-8, 3}
		}
	}}
};

static const CubicData cubic_data_methane = {
	.M = 16.043
	,.T_c = 190.4
	,.p_c = (46.0 * 1e5)
	,.rho_c = (1000 * 16.043 / 99.0)
	,.T_t = 0
	,.omega = 0.011
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-7.490e+4 / 16.043), (-5.087e+4 / 16.043)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_methane
};

const EosData eos_rpp_methane = {
	"methane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_methane}
};


static const IdealData ideal_data_4_methylpyridine = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-17.43, 0}
			,{0.4882, 1}
			,{-2.80E-04, 2}
			,{5.45E-08, 3}
		}
	}}
};

static const CubicData cubic_data_4_methylpyridine = {
	.M = 93.129
	,.T_c = 646.0
	,.p_c = (44.6 * 1e5)
	,.rho_c = (1000 * 93.129 / 311.0)
	,.T_t = 0
	,.omega = 0.301
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (102300 / 93.129), NAN}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_4_methylpyridine
};

const EosData eos_rpp_4_methylpyridine = {
	"4_methylpyridine"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_4_methylpyridine}
};


static const IdealData ideal_data_2_methyl_3_ethylpentane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-9.22, 0}
			,{0.7859, 1}
			,{-4.40E-04, 2}
			,{9.70E-08, 3}
		}
	}}
};

static const CubicData cubic_data_2_methyl_3_ethylpentane = {
	.M = 114.232
	,.T_c = 567.1
	,.p_c = (27.0 * 1e5)
	,.rho_c = (1000 * 114.232 / 433.0)
	,.T_t = 0
	,.omega = 0.330
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-211300 / 114.232), (21270 / 114.232)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_2_methyl_3_ethylpentane
};

const EosData eos_rpp_2_methyl_3_ethylpentane = {
	"2_methyl_3_ethylpentane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_2_methyl_3_ethylpentane}
};


static const IdealData ideal_data_n_nonadecane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-15.49, 0}
			,{1.812, 1}
			,{-1.02E-03, 2}
			,{2.21E-07, 3}
		}
	}}
};

static const CubicData cubic_data_n_nonadecane = {
	.M = 268.529
	,.T_c = 756.0
	,.p_c = (11.1 * 1e5)
	,.rho_c = -1
	,.T_min = 456
	,.omega = 0.827
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-435400 / 268.529), (109000 / 268.529)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_n_nonadecane
};

const EosData eos_rpp_n_nonadecane = {
	"n_nonadecane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_n_nonadecane}
};


static const IdealData ideal_data_nitric_oxide = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{29.35, 0}
			,{-0.0009378, 1}
			,{9.75E-06, 2}
			,{-4.19E-09, 3}
		}
	}}
};

static const CubicData cubic_data_nitric_oxide = {
	.M = 30.006
	,.T_c = 180.0
	,.p_c = (64.8 * 1e5)
	,.rho_c = (1000 * 30.006 / 57.7)
	,.T_t = 0
	,.omega = 0.588
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (90430 / 30.006), (86750 / 30.006)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_nitric_oxide
};

const EosData eos_rpp_nitric_oxide = {
	"nitric_oxide"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_nitric_oxide}
};


static const IdealData ideal_data_ethyl_butyrate = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{21.51, 0}
			,{0.4928, 1}
			,{-1.94E-04, 2}
			,{3.56E-09, 3}
		}
	}}
};

static const CubicData cubic_data_ethyl_butyrate = {
	.M = 116.160
	,.T_c = 569.0
	,.p_c = (29.6 * 1e5)
	,.rho_c = (1000 * 116.160 / 421.0)
	,.T_t = 0
	,.omega = 0.461
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, NAN, NAN}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_ethyl_butyrate
};

const EosData eos_rpp_ethyl_butyrate = {
	"ethyl_butyrate"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_ethyl_butyrate}
};


static const IdealData ideal_data_diphenyl_ether = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-60.73, 0}
			,{0.9282, 1}
			,{-5.87E-04, 2}
			,{1.36E-04, 3}
		}
	}}
};

static const CubicData cubic_data_diphenyl_ether = {
	.M = 170.211
	,.T_c = 766.0
	,.p_c = (31.4 * 1e5)
	,.rho_c = -1
	,.T_min = 477
	,.omega = 0.440
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (49990 / 170.211), NAN}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_diphenyl_ether
};

const EosData eos_rpp_diphenyl_ether = {
	"diphenyl_ether"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_diphenyl_ether}
};


static const IdealData ideal_data_2_3_dimethyl_2_butene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{2.29, 0}
			,{0.4827, 1}
			,{-2.20E-04, 2}
			,{3.04E-08, 3}
		}
	}}
};

static const CubicData cubic_data_2_3_dimethyl_2_butene = {
	.M = 84.162
	,.T_c = 524.0
	,.p_c = (33.6 * 1e5)
	,.rho_c = (1000 * 84.162 / 351.0)
	,.T_t = 0
	,.omega = 0.239
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-69840 / 84.162), (75910 / 84.162)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_2_3_dimethyl_2_butene
};

const EosData eos_rpp_2_3_dimethyl_2_butene = {
	"2_3_dimethyl_2_butene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_2_3_dimethyl_2_butene}
};


static const IdealData ideal_data_tetrafluorohydrazine = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{3.55, 0}
			,{0.3509, 1}
			,{-3.64E-04, 2}
			,{1.34E-07, 3}
		}
	}}
};

static const CubicData cubic_data_tetrafluorohydrazine = {
	.M = 104.016
	,.T_c = 309.0
	,.p_c = (37.5 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.206
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-8374 / 104.016), (79880 / 104.016)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_tetrafluorohydrazine
};

const EosData eos_rpp_tetrafluorohydrazine = {
	"tetrafluorohydrazine"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_tetrafluorohydrazine}
};


static const IdealData ideal_data_methyl_ethyl_ketone = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{10.94, 0}
			,{0.3559, 1}
			,{-1.90E-04, 2}
			,{3.92E-08, 3}
		}
	}}
};

static const CubicData cubic_data_methyl_ethyl_ketone = {
	.M = 72.107
	,.T_c = 536.8
	,.p_c = (42.1 * 1e5)
	,.rho_c = (1000 * 72.107 / 267.0)
	,.T_t = 0
	,.omega = 0.320
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-238500 / 72.107), (-146200 / 72.107)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_methyl_ethyl_ketone
};

const EosData eos_rpp_methyl_ethyl_ketone = {
	"methyl_ethyl_ketone"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_methyl_ethyl_ketone}
};


static const IdealData ideal_data_dichlorodifluoromethane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{31.60, 0}
			,{0.1782, 1}
			,{-1.51E-04, 2}
			,{4.34E-08, 3}
		}
	}}
};

static const CubicData cubic_data_dichlorodifluoromethane = {
	.M = 120.914
	,.T_c = 385.0
	,.p_c = (41.4 * 1e5)
	,.rho_c = (1000 * 120.914 / 216.7)
	,.T_t = 0
	,.omega = 0.204
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-481500 / 120.914), (-442500 / 120.914)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_dichlorodifluoromethane
};

const EosData eos_rpp_dichlorodifluoromethane = {
	"dichlorodifluoromethane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_dichlorodifluoromethane}
};


static const IdealData ideal_data_isobutane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-1.39, 0}
			,{0.3847, 1}
			,{-1.85E-04, 2}
			,{2.90E-08, 3}
		}
	}}
};

static const CubicData cubic_data_isobutane = {
	.M = 58.124
	,.T_c = 408.2
	,.p_c = (36.5 * 1e5)
	,.rho_c = (1000 * 58.124 / 263.0)
	,.T_t = 0
	,.omega = 0.183
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-134600 / 58.124), (-20900 / 58.124)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_isobutane
};

const EosData eos_rpp_isobutane = {
	"isobutane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_isobutane}
};


static const IdealData ideal_data_water = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{32.24, 0}
			,{1.924e-3, 1}
			,{1.055e-5, 2}
			,{-3.596e-9, 3}
		}
	}}
};

static const CubicData cubic_data_water = {
	.M = 18.015
	,.T_c = 647.3
	,.p_c = (221.2 * 1e5)
	,.rho_c = (1000 * 18.015 / 57.1)
	,.T_min = 275
	,.omega = 0.344
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-2.420e+5 / 18.015), (-2.288e+5 / 18.015)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_water
};

const EosData eos_rpp_water = {
	"water"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_water}
};


static const IdealData ideal_data_bromine = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{33.86, 0}
			,{0.01125, 1}
			,{-1.19E-05, 2}
			,{4.53E-09, 3}
		}
	}}
};

static const CubicData cubic_data_bromine = {
	.M = 159.808
	,.T_c = 588.0
	,.p_c = (103.0 * 1e5)
	,.rho_c = (1000 * 159.808 / 127.2)
	,.T_t = 0
	,.omega = 0.108
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (30930 / 159.808), (3136 / 159.808)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_bromine
};

const EosData eos_rpp_bromine = {
	"bromine"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_bromine}
};


static const IdealData ideal_data_ethanol = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{9.014, 0}
			,{2.141e-1, 1}
			,{-8.390e-5, 2}
			,{1.373e-9, 3}
		}
	}}
};

static const CubicData cubic_data_ethanol = {
	.M = 46.069
	,.T_c = 513.9
	,.p_c = (61.4 * 1e5)
	,.rho_c = (1000 * 46.069 / 167.1)
	,.T_t = 0
	,.omega = 0.644
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-2.350e+5 / 46.069), (-1.684e+5 / 46.069)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_ethanol
};

const EosData eos_rpp_ethanol = {
	"ethanol"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_ethanol}
};


static const IdealData ideal_data_dichloromonofluoromethane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{23.66, 0}
			,{0.1581, 1}
			,{-1.20E-04, 2}
			,{3.26E-08, 3}
		}
	}}
};

static const CubicData cubic_data_dichloromonofluoromethane = {
	.M = 102.923
	,.T_c = 451.6
	,.p_c = (51.8 * 1e5)
	,.rho_c = (1000 * 102.923 / 196.4)
	,.T_t = 0
	,.omega = 0.210
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-298900 / 102.923), (-268400 / 102.923)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_dichloromonofluoromethane
};

const EosData eos_rpp_dichloromonofluoromethane = {
	"dichloromonofluoromethane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_dichloromonofluoromethane}
};


static const IdealData ideal_data_1_chloro_1_1_difluoroethane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{16.82, 0}
			,{0.2757, 1}
			,{-1.99E-04, 2}
			,{5.31E-08, 3}
		}
	}}
};

static const CubicData cubic_data_1_chloro_1_1_difluoroethane = {
	.M = 100.496
	,.T_c = 409.6
	,.p_c = (43.3 * 1e5)
	,.rho_c = (1000 * 100.496 / 231.0)
	,.T_t = 0
	,.omega = 0.251
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, NAN, NAN}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_1_chloro_1_1_difluoroethane
};

const EosData eos_rpp_1_chloro_1_1_difluoroethane = {
	"1_chloro_1_1_difluoroethane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_1_chloro_1_1_difluoroethane}
};


static const IdealData ideal_data_1_nonene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-3.72, 0}
			,{0.8122, 1}
			,{-4.51E-04, 2}
			,{9.71E-08, 3}
		}
	}}
};

static const CubicData cubic_data_1_nonene = {
	.M = 126.243
	,.T_c = 592.0
	,.p_c = (23.4 * 1e5)
	,.rho_c = (1000 * 126.243 / 580.0)
	,.T_t = 0
	,.omega = 0.430
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-103600 / 126.243), (112800 / 126.243)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_1_nonene
};

const EosData eos_rpp_1_nonene = {
	"1_nonene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_1_nonene}
};


static const IdealData ideal_data_1_4_dimethylcyclohexane_trans = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-70.36, 0}
			,{0.9131, 1}
			,{-5.31E-04, 2}
			,{1.16E-07, 3}
		}
	}}
};

static const CubicData cubic_data_1_4_dimethylcyclohexane_trans = {
	.M = 112.216
	,.T_c = 587.7
	,.p_c = (29.7 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.242
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-184700 / 112.216), (31740 / 112.216)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_1_4_dimethylcyclohexane_trans
};

const EosData eos_rpp_1_4_dimethylcyclohexane_trans = {
	"1_4_dimethylcyclohexane_trans"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_1_4_dimethylcyclohexane_trans}
};


static const IdealData ideal_data_isopropyl_chloride = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{1.84, 0}
			,{0.3488, 1}
			,{-2.24E-04, 2}
			,{5.86E-08, 3}
		}
	}}
};

static const CubicData cubic_data_isopropyl_chloride = {
	.M = 78.542
	,.T_c = 485.0
	,.p_c = (47.2 * 1e5)
	,.rho_c = (1000 * 78.542 / 230.0)
	,.T_t = 0
	,.omega = 0.232
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-146500 / 78.542), (-62550 / 78.542)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_isopropyl_chloride
};

const EosData eos_rpp_isopropyl_chloride = {
	"isopropyl_chloride"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_isopropyl_chloride}
};


static const IdealData ideal_data_ethane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{5.409, 0}
			,{1.781e-1, 1}
			,{-6.938e-5, 2}
			,{8.713e-9, 3}
		}
	}}
};

static const CubicData cubic_data_ethane = {
	.M = 30.070
	,.T_c = 305.4
	,.p_c = (48.8 * 1e5)
	,.rho_c = (1000 * 30.070 / 148.3)
	,.T_t = 0
	,.omega = 0.099
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-8.474e+4 / 30.070), (-3.295e+4 / 30.070)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_ethane
};

const EosData eos_rpp_ethane = {
	"ethane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_ethane}
};


static const IdealData ideal_data_1_butene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-2.99, 0}
			,{0.3532, 1}
			,{-1.99E-04, 2}
			,{4.46E-08, 3}
		}
	}}
};

static const CubicData cubic_data_1_butene = {
	.M = 56.108
	,.T_c = 419.6
	,.p_c = (40.2 * 1e5)
	,.rho_c = (1000 * 56.108 / 240.0)
	,.T_t = 0
	,.omega = 0.191
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-126 / 56.108), (71340 / 56.108)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_1_butene
};

const EosData eos_rpp_1_butene = {
	"1_butene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_1_butene}
};


static const IdealData ideal_data_3_3_diethylpentane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-67.27, 0}
			,{1.126, 1}
			,{-7.99E-04, 2}
			,{2.31E-07, 3}
		}
	}}
};

static const CubicData cubic_data_3_3_diethylpentane = {
	.M = 128.259
	,.T_c = 610.0
	,.p_c = (26.7 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.338
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-232100 / 128.259), (35090 / 128.259)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_3_3_diethylpentane
};

const EosData eos_rpp_3_3_diethylpentane = {
	"3_3_diethylpentane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_3_3_diethylpentane}
};


static const IdealData ideal_data_dipropyl_ether = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{18.62, 0}
			,{0.5335, 1}
			,{-2.29E-04, 2}
			,{2.44E-08, 3}
		}
	}}
};

static const CubicData cubic_data_dipropyl_ether = {
	.M = 102.177
	,.T_c = 530.6
	,.p_c = (30.3 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.369
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-293100 / 102.177), (-105600 / 102.177)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_dipropyl_ether
};

const EosData eos_rpp_dipropyl_ether = {
	"dipropyl_ether"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_dipropyl_ether}
};


static const IdealData ideal_data_isobutyl_formate = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{19.85, 0}
			,{0.4034, 1}
			,{-1.44E-04, 2}
			,{-7.40E-09, 3}
		}
	}}
};

static const CubicData cubic_data_isobutyl_formate = {
	.M = 102.134
	,.T_c = 554.0
	,.p_c = (37.3 * 1e5)
	,.rho_c = (1000 * 102.134 / 352.0)
	,.T_t = 0
	,.omega = 0.396
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, NAN, NAN}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_isobutyl_formate
};

const EosData eos_rpp_isobutyl_formate = {
	"isobutyl_formate"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_isobutyl_formate}
};


static const IdealData ideal_data_ketene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{6.39, 0}
			,{0.16938, 1}
			,{-1.08E-04, 2}
			,{2.70E-08, 3}
		}
	}}
};

static const CubicData cubic_data_ketene = {
	.M = 42.038
	,.T_c = 380.0
	,.p_c = (65.0 * 1e5)
	,.rho_c = (1000 * 42.038 / 145.0)
	,.T_t = 0
	,.omega = 0.210
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-61130 / 42.038), (-60330 / 42.038)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_ketene
};

const EosData eos_rpp_ketene = {
	"ketene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_ketene}
};


static const IdealData ideal_data_dimethyl_sulphide = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{24.30, 0}
			,{0.1875, 1}
			,{-6.79E-05, 2}
			,{4.10E-09, 3}
		}
	}}
};

static const CubicData cubic_data_dimethyl_sulphide = {
	.M = 62.130
	,.T_c = 503.0
	,.p_c = (55.3 * 1e5)
	,.rho_c = (1000 * 62.130 / 201.0)
	,.T_t = 0
	,.omega = 0.191
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-37560 / 62.130), (6950 / 62.130)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_dimethyl_sulphide
};

const EosData eos_rpp_dimethyl_sulphide = {
	"dimethyl_sulphide"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_dimethyl_sulphide}
};


static const IdealData ideal_data_1_1_dichloroethane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{12.47, 0}
			,{0.2696, 1}
			,{-2.05E-04, 2}
			,{6.30E-08, 3}
		}
	}}
};

static const CubicData cubic_data_1_1_dichloroethane = {
	.M = 98.960
	,.T_c = 523.0
	,.p_c = (50.7 * 1e5)
	,.rho_c = (1000 * 98.960 / 236.0)
	,.T_t = 0
	,.omega = 0.240
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-130000 / 98.960), (-73140 / 98.960)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_1_1_dichloroethane
};

const EosData eos_rpp_1_1_dichloroethane = {
	"1_1_dichloroethane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_1_1_dichloroethane}
};


static const IdealData ideal_data_2_butene_cis = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{0.44, 0}
			,{0.2953, 1}
			,{-1.02E-04, 2}
			,{-6.16E-10, 3}
		}
	}}
};

static const CubicData cubic_data_2_butene_cis = {
	.M = 56.108
	,.T_c = 435.6
	,.p_c = (42.0 * 1e5)
	,.rho_c = (1000 * 56.108 / 234.0)
	,.T_t = 0
	,.omega = 0.202
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-6990 / 56.108), (65900 / 56.108)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_2_butene_cis
};

const EosData eos_rpp_2_butene_cis = {
	"2_butene_cis"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_2_butene_cis}
};


static const IdealData ideal_data_piperidine = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-53.07, 0}
			,{0.6289, 1}
			,{-3.36E-04, 2}
			,{6.43E-08, 3}
		}
	}}
};

static const CubicData cubic_data_piperidine = {
	.M = 85.150
	,.T_c = 594.0
	,.p_c = (47.6 * 1e5)
	,.rho_c = (1000 * 85.150 / 289.0)
	,.T_t = 0
	,.omega = 0.251
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-49030 / 85.150), NAN}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_piperidine
};

const EosData eos_rpp_piperidine = {
	"piperidine"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_piperidine}
};


static const IdealData ideal_data_ethylene_oxide = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-7.52, 0}
			,{0.2222, 1}
			,{-1.26E-04, 2}
			,{2.59E-08, 3}
		}
	}}
};

static const CubicData cubic_data_ethylene_oxide = {
	.M = 44.054
	,.T_c = 469.0
	,.p_c = (71.9 * 1e5)
	,.rho_c = (1000 * 44.054 / 140.0)
	,.T_t = 0
	,.omega = 0.202
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-52670 / 44.054), (-13100 / 44.054)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_ethylene_oxide
};

const EosData eos_rpp_ethylene_oxide = {
	"ethylene_oxide"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_ethylene_oxide}
};


static const IdealData ideal_data_1_tetradecene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-7.97, 0}
			,{1.826, 1}
			,{-7.21E-04, 2}
			,{1.57E-07, 3}
		}
	}}
};

static const CubicData cubic_data_1_tetradecene = {
	.M = 196.378
	,.T_c = 689.0
	,.p_c = (15.6 * 1e5)
	,.rho_c = -1
	,.T_min = 380
	,.omega = 0.644
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-206700 / 196.378), (154900 / 196.378)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_1_tetradecene
};

const EosData eos_rpp_1_tetradecene = {
	"1_tetradecene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_1_tetradecene}
};


static const IdealData ideal_data_n_butanol = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{3.266, 0}
			,{4.180e-1, 1}
			,{-2.242e-4, 2}
			,{4.685e-8, 3}
		}
	}}
};

static const CubicData cubic_data_n_butanol = {
	.M = 74.123
	,.T_c = 563.1
	,.p_c = (44.2 * 1e5)
	,.rho_c = (1000 * 74.123 / 274.0)
	,.T_t = 0
	,.omega = 0.593
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-2.749e+5 / 74.123), (-1.509e+5 / 74.123)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_n_butanol
};

const EosData eos_rpp_n_butanol = {
	"n_butanol"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_n_butanol}
};


static const IdealData ideal_data_2_butyne = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{15.93, 0}
			,{0.2381, 1}
			,{-1.07E-04, 2}
			,{1.75E-08, 3}
		}
	}}
};

static const CubicData cubic_data_2_butyne = {
	.M = 54.092
	,.T_c = 488.7
	,.p_c = (50.8 * 1e5)
	,.rho_c = (1000 * 54.092 / 221.0)
	,.T_t = 0
	,.omega = 0.124
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (146400 / 54.092), (185600 / 54.092)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_2_butyne
};

const EosData eos_rpp_2_butyne = {
	"2_butyne"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_2_butyne}
};


static const IdealData ideal_data_titanium_tetrachloride = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{70.64, 0}
			,{0.1224, 1}
			,{-1.44E-04, 2}
			,{5.82E-08, 3}
		}
	}}
};

static const CubicData cubic_data_titanium_tetrachloride = {
	.M = 189.712
	,.T_c = 638.0
	,.p_c = (46.6 * 1e5)
	,.rho_c = (1000 * 189.712 / 339.2)
	,.T_t = 0
	,.omega = 0.268
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-763700 / 189.712), (-727200 / 189.712)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_titanium_tetrachloride
};

const EosData eos_rpp_titanium_tetrachloride = {
	"titanium_tetrachloride"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_titanium_tetrachloride}
};


static const IdealData ideal_data_nitromethane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{7.43, 0}
			,{0.1978, 1}
			,{-1.08E-04, 2}
			,{2.09E-08, 3}
		}
	}}
};

static const CubicData cubic_data_nitromethane = {
	.M = 61.041
	,.T_c = 588.0
	,.p_c = (63.1 * 1e5)
	,.rho_c = (1000 * 61.041 / 173.2)
	,.T_t = 0
	,.omega = 0.310
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-74780 / 61.041), (-6950 / 61.041)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_nitromethane
};

const EosData eos_rpp_nitromethane = {
	"nitromethane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_nitromethane}
};


static const IdealData ideal_data_1_methylnaphthalene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-64.82, 0}
			,{0.9387, 1}
			,{-6.49E-04, 2}
			,{2.02E-07, 3}
		}
	}}
};

static const CubicData cubic_data_1_methylnaphthalene = {
	.M = 142.201
	,.T_c = 772.0
	,.p_c = (36.0 * 1e5)
	,.rho_c = (1000 * 142.201 / 462.0)
	,.T_t = 0
	,.omega = 0.310
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (116900 / 142.201), (217800 / 142.201)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_1_methylnaphthalene
};

const EosData eos_rpp_1_methylnaphthalene = {
	"1_methylnaphthalene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_1_methylnaphthalene}
};


static const IdealData ideal_data_n_propyl_acetate = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{15.42, 0}
			,{0.4501, 1}
			,{-1.69E-04, 2}
			,{-1.44E-08, 3}
		}
	}}
};

static const CubicData cubic_data_n_propyl_acetate = {
	.M = 102.134
	,.T_c = 549.4
	,.p_c = (33.3 * 1e5)
	,.rho_c = (1000 * 102.134 / 345.0)
	,.T_t = 0
	,.omega = 0.391
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-466000 / 102.134), NAN}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_n_propyl_acetate
};

const EosData eos_rpp_n_propyl_acetate = {
	"n_propyl_acetate"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_n_propyl_acetate}
};


static const IdealData ideal_data_carbon_tetrafluoride = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{13.98, 0}
			,{0.2026, 1}
			,{-1.63E-04, 2}
			,{4.51E-08, 3}
		}
	}}
};

static const CubicData cubic_data_carbon_tetrafluoride = {
	.M = 88.005
	,.T_c = 227.6
	,.p_c = (37.4 * 1e5)
	,.rho_c = (1000 * 88.005 / 139.6)
	,.T_t = 0
	,.omega = 0.177
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-933700 / 88.005), (-889000 / 88.005)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_carbon_tetrafluoride
};

const EosData eos_rpp_carbon_tetrafluoride = {
	"carbon_tetrafluoride"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_carbon_tetrafluoride}
};


static const IdealData ideal_data_2_hexene_trans = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-32.92, 0}
			,{0.6929, 1}
			,{-5.62E-04, 2}
			,{2.01E-07, 3}
		}
	}}
};

static const CubicData cubic_data_2_hexene_trans = {
	.M = 84.162
	,.T_c = 516.0
	,.p_c = (32.7 * 1e5)
	,.rho_c = (1000 * 84.162 / 351.0)
	,.T_t = 0
	,.omega = 0.242
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-53930 / 84.162), (76490 / 84.162)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_2_hexene_trans
};

const EosData eos_rpp_2_hexene_trans = {
	"2_hexene_trans"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_2_hexene_trans}
};


static const IdealData ideal_data_2_2_3_trimethylbutane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-22.94, 0}
			,{0.7159, 1}
			,{-4.42E-04, 2}
			,{1.01E-07, 3}
		}
	}}
};

static const CubicData cubic_data_2_2_3_trimethylbutane = {
	.M = 100.205
	,.T_c = 531.2
	,.p_c = (29.5 * 1e5)
	,.rho_c = (1000 * 100.205 / 398.0)
	,.T_t = 0
	,.omega = 0.250
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-205000 / 100.205), (4270 / 100.205)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_2_2_3_trimethylbutane
};

const EosData eos_rpp_2_2_3_trimethylbutane = {
	"2_2_3_trimethylbutane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_2_2_3_trimethylbutane}
};


static const IdealData ideal_data_i_butanol = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-7.708, 0}
			,{4.689e-1, 1}
			,{-2.884e-4, 2}
			,{7.231e-8, 3}
		}
	}}
};

static const CubicData cubic_data_i_butanol = {
	.M = 74.123
	,.T_c = 547.8
	,.p_c = (43.0 * 1e5)
	,.rho_c = (1000 * 74.123 / 273)
	,.T_t = 0
	,.omega = 0.592
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-2.834e+5 / 74.123), (-1.674e+5 / 74.123)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_i_butanol
};

const EosData eos_rpp_i_butanol = {
	"i_butanol"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_i_butanol}
};


static const IdealData ideal_data_pyradine = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{39.79, 0}
			,{0.4928, 1}
			,{-3.56E-04, 2}
			,{1.00E-07, 3}
		}
	}}
};

static const CubicData cubic_data_pyradine = {
	.M = 79.102
	,.T_c = 620.0
	,.p_c = (56.3 * 1e5)
	,.rho_c = (1000 * 79.102 / 254.0)
	,.T_t = 0
	,.omega = 0.243
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (140300 / 79.102), (190300 / 79.102)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_pyradine
};

const EosData eos_rpp_pyradine = {
	"pyradine"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_pyradine}
};


static const IdealData ideal_data_methyl_phenyl_ketone = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-29.58, 0}
			,{0.641, 1}
			,{-4.07E-04, 2}
			,{9.72E-08, 3}
		}
	}}
};

static const CubicData cubic_data_methyl_phenyl_ketone = {
	.M = 120.151
	,.T_c = 714.0
	,.p_c = (40.6 * 1e5)
	,.rho_c = (1000 * 120.151 / 376.0)
	,.T_t = 0
	,.omega = 0.420
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-86900 / 120.151), (1840 / 120.151)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_methyl_phenyl_ketone
};

const EosData eos_rpp_methyl_phenyl_ketone = {
	"methyl_phenyl_ketone"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_methyl_phenyl_ketone}
};


static const IdealData ideal_data_radon = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{20.80, 0}
			,{0, 1}
			,{0.00E+00, 2}
			,{0.00E+00, 3}
		}
	}}
};

static const CubicData cubic_data_radon = {
	.M = 222.000
	,.T_c = 377.0
	,.p_c = (62.8 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = -0.008
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (0 / 222.000), (0 / 222.000)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_radon
};

const EosData eos_rpp_radon = {
	"radon"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_radon}
};


static const IdealData ideal_data_1_4_pentadiene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{7.00, 0}
			,{0.3952, 1}
			,{-2.37E-04, 2}
			,{5.60E-08, 3}
		}
	}}
};

static const CubicData cubic_data_1_4_pentadiene = {
	.M = 68.119
	,.T_c = 478.0
	,.p_c = (37.9 * 1e5)
	,.rho_c = (1000 * 68.119 / 276.0)
	,.T_t = 0
	,.omega = 0.104
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (105500 / 68.119), (170400 / 68.119)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_1_4_pentadiene
};

const EosData eos_rpp_1_4_pentadiene = {
	"1_4_pentadiene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_1_4_pentadiene}
};


static const IdealData ideal_data_n_dodecane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-9.24, 0}
			,{1.149, 1}
			,{-6.35E-04, 2}
			,{1.36E-07, 3}
		}
	}}
};

static const CubicData cubic_data_n_dodecane = {
	.M = 170.340
	,.T_c = 658.2
	,.p_c = (18.2 * 1e5)
	,.rho_c = (1000 * 170.340 / 713.0)
	,.T_t = 0
	,.omega = 0.575
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-291100 / 170.340), (50070 / 170.340)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_n_dodecane
};

const EosData eos_rpp_n_dodecane = {
	"n_dodecane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_n_dodecane}
};


static const IdealData ideal_data_1_pentene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-0.13, 0}
			,{0.4329, 1}
			,{-2.32E-04, 2}
			,{4.68E-08, 3}
		}
	}}
};

static const CubicData cubic_data_1_pentene = {
	.M = 70.135
	,.T_c = 464.8
	,.p_c = (35.3 * 1e5)
	,.rho_c = (1000 * 70.135 / 300.0)
	,.T_t = 0
	,.omega = 0.233
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-20930 / 70.135), (79170 / 70.135)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_1_pentene
};

const EosData eos_rpp_1_pentene = {
	"1_pentene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_1_pentene}
};


static const IdealData ideal_data_butylcyclohexane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-62.96, 0}
			,{1.081, 1}
			,{-6.31E-04, 2}
			,{1.40E-07, 3}
		}
	}}
};

static const CubicData cubic_data_butylcyclohexane = {
	.M = 140.260
	,.T_c = 667.0
	,.p_c = (31.5 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.362
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-213300 / 140.260), (56480 / 140.260)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_butylcyclohexane
};

const EosData eos_rpp_butylcyclohexane = {
	"butylcyclohexane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_butylcyclohexane}
};


static const IdealData ideal_data_aniline = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-40.52, 0}
			,{0.6385, 1}
			,{-5.13E-04, 2}
			,{1.63E-07, 3}
		}
	}}
};

static const CubicData cubic_data_aniline = {
	.M = 93.129
	,.T_c = 699.0
	,.p_c = (53.1 * 1e5)
	,.rho_c = (1000 * 93.129 / 274.0)
	,.T_t = 0
	,.omega = 0.384
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (86920 / 93.129), (166800 / 93.129)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_aniline
};

const EosData eos_rpp_aniline = {
	"aniline"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_aniline}
};


static const IdealData ideal_data_aluminum_tribromide = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{64.94, 0}
			,{0.06098, 1}
			,{-7.31E-05, 2}
			,{2.98E-08, 3}
		}
	}}
};

static const CubicData cubic_data_aluminum_tribromide = {
	.M = 266.694
	,.T_c = 763.0
	,.p_c = (28.9 * 1e5)
	,.rho_c = (1000 * 266.694 / 310.0)
	,.T_t = 0
	,.omega = 0.399
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-423300 / 266.694), (-452200 / 266.694)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_aluminum_tribromide
};

const EosData eos_rpp_aluminum_tribromide = {
	"aluminum_tribromide"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_aluminum_tribromide}
};


static const IdealData ideal_data_n_butyraldehyde = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{14.08, 0}
			,{0.3457, 1}
			,{-1.72E-04, 2}
			,{2.89E-08, 3}
		}
	}}
};

static const CubicData cubic_data_n_butyraldehyde = {
	.M = 72.107
	,.T_c = 545.4
	,.p_c = (53.8 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.352
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-205200 / 72.107), (-114800 / 72.107)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_n_butyraldehyde
};

const EosData eos_rpp_n_butyraldehyde = {
	"n_butyraldehyde"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_n_butyraldehyde}
};


static const IdealData ideal_data_n_heptane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-5.146, 0}
			,{6.762e-1, 1}
			,{-3.651e-4, 2}
			,{7.658e-8, 3}
		}
	}}
};

static const CubicData cubic_data_n_heptane = {
	.M = 100.205
	,.T_c = 540.3
	,.p_c = (27.4 * 1e5)
	,.rho_c = (1000 * 100.205 / 432)
	,.T_t = 0
	,.omega = 0.349
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-1.879e+5 / 100.205), (8.000e+3 / 100.205)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_n_heptane
};

const EosData eos_rpp_n_heptane = {
	"n_heptane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_n_heptane}
};


static const IdealData ideal_data_hydrogen = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{27.14, 0}
			,{9.274e+1, 1}
			,{-1.381e-5, 2}
			,{7.645e-9, 3}
		}
	}}
};

static const CubicData cubic_data_hydrogen = {
	.M = 2.016
	,.T_c = 33.0
	,.p_c = (12.9 * 1e5)
	,.rho_c = (1000 * 2.016 / 64.3)
	,.T_t = 0
	,.omega = -0.216
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (0.00 / 2.016), (0.00 / 2.016)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_hydrogen
};

const EosData eos_rpp_hydrogen = {
	"hydrogen"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_hydrogen}
};


static const IdealData ideal_data_ethyl_bromide = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{6.66, 0}
			,{0.2348, 1}
			,{-1.47E-04, 2}
			,{3.80E-08, 3}
		}
	}}
};

static const CubicData cubic_data_ethyl_bromide = {
	.M = 108.966
	,.T_c = 503.9
	,.p_c = (62.3 * 1e5)
	,.rho_c = (1000 * 108.966 / 215.0)
	,.T_t = 0
	,.omega = 0.229
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-64060 / 108.966), (-26330 / 108.966)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_ethyl_bromide
};

const EosData eos_rpp_ethyl_bromide = {
	"ethyl_bromide"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_ethyl_bromide}
};


static const IdealData ideal_data_1_3_5_trimethylbenzene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-19.59, 0}
			,{0.6724, 1}
			,{-3.69E-04, 2}
			,{7.70E-08, 3}
		}
	}}
};

static const CubicData cubic_data_1_3_5_trimethylbenzene = {
	.M = 120.195
	,.T_c = 637.3
	,.p_c = (31.3 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.399
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-1.61E+04 / 120.195), (1.18E+05 / 120.195)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_1_3_5_trimethylbenzene
};

const EosData eos_rpp_1_3_5_trimethylbenzene = {
	"1_3_5_trimethylbenzene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_1_3_5_trimethylbenzene}
};


static const IdealData ideal_data_2_5_dimethylhexane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-9.22, 0}
			,{0.7859, 1}
			,{-4.40E-04, 2}
			,{9.70E-08, 3}
		}
	}}
};

static const CubicData cubic_data_2_5_dimethylhexane = {
	.M = 114.232
	,.T_c = 550.1
	,.p_c = (24.9 * 1e5)
	,.rho_c = (1000 * 114.232 / 482.0)
	,.T_t = 0
	,.omega = 0.356
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-222800 / 114.232), (10470 / 114.232)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_2_5_dimethylhexane
};

const EosData eos_rpp_2_5_dimethylhexane = {
	"2_5_dimethylhexane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_2_5_dimethylhexane}
};


static const IdealData ideal_data_1_methyl_3_ethylbenzene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-29.00, 0}
			,{0.7293, 1}
			,{-4.36E-04, 2}
			,{1.00E-07, 3}
		}
	}}
};

static const CubicData cubic_data_1_methyl_3_ethylbenzene = {
	.M = 120.195
	,.T_c = 637.0
	,.p_c = (28.4 * 1e5)
	,.rho_c = (1000 * 120.195 / 490.0)
	,.T_t = 0
	,.omega = 0.360
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-1.93E+03 / 120.195), (1.27E+05 / 120.195)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_1_methyl_3_ethylbenzene
};

const EosData eos_rpp_1_methyl_3_ethylbenzene = {
	"1_methyl_3_ethylbenzene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_1_methyl_3_ethylbenzene}
};


static const IdealData ideal_data_2_octene_trans = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-12.82, 0}
			,{0.7532, 1}
			,{-4.44E-04, 2}
			,{1.05E-07, 3}
		}
	}}
};

static const CubicData cubic_data_2_octene_trans = {
	.M = 112.216
	,.T_c = 580.0
	,.p_c = (27.7 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.350
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-94580 / 112.216), (92740 / 112.216)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_2_octene_trans
};

const EosData eos_rpp_2_octene_trans = {
	"2_octene_trans"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_2_octene_trans}
};


static const IdealData ideal_data_1_propanol = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{2.47, 0}
			,{0.3325, 1}
			,{-1.86E-04, 2}
			,{4.30E-08, 3}
		}
	}}
};

static const CubicData cubic_data_1_propanol = {
	.M = 60.096
	,.T_c = 536.8
	,.p_c = (51.7 * 1e5)
	,.rho_c = (1000 * 60.096 / 219.0)
	,.T_t = 0
	,.omega = 0.623
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-256600 / 60.096), (-161900 / 60.096)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_1_propanol
};

const EosData eos_rpp_1_propanol = {
	"1_propanol"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_1_propanol}
};


static const IdealData ideal_data_1_octadecene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-11.33, 0}
			,{1.664, 1}
			,{-9.37E-04, 2}
			,{2.05E-07, 3}
		}
	}}
};

static const CubicData cubic_data_1_octadecene = {
	.M = 252.486
	,.T_c = 739.0
	,.p_c = (11.3 * 1e5)
	,.rho_c = -1
	,.T_min = 444
	,.omega = 0.807
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-289200 / 252.486), (188400 / 252.486)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_1_octadecene
};

const EosData eos_rpp_1_octadecene = {
	"1_octadecene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_1_octadecene}
};


static const IdealData ideal_data_propane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-4.224, 0}
			,{3.063e-1, 1}
			,{-1.586e-4, 2}
			,{3.215e-8, 3}
		}
	}}
};

static const CubicData cubic_data_propane = {
	.M = 44.094
	,.T_c = 369.8
	,.p_c = (42.5 * 1e5)
	,.rho_c = (1000 * 44.094 / 203.0)
	,.T_t = 0
	,.omega = 0.153
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-1.039e+5 / 44.094), (-2.349e+4 / 44.094)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_propane
};

const EosData eos_rpp_propane = {
	"propane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_propane}
};


static const IdealData ideal_data_methanol = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{21.15, 0}
			,{7.092e-2, 1}
			,{2.587e-5, 2}
			,{-2.852e-8, 3}
		}
	}}
};

static const CubicData cubic_data_methanol = {
	.M = 32.042
	,.T_c = 512.6
	,.p_c = (80.9 * 1e5)
	,.rho_c = (1000 * 32.042 / 118.0)
	,.T_t = 0
	,.omega = 0.556
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-2.0133e+5 / 32.042), (-1.626e+5 / 32.042)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_methanol
};

const EosData eos_rpp_methanol = {
	"methanol"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_methanol}
};


static const IdealData ideal_data_methyl_propionate = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{18.20, 0}
			,{0.314, 1}
			,{-9.35E-05, 2}
			,{-1.83E-08, 3}
		}
	}}
};

static const CubicData cubic_data_methyl_propionate = {
	.M = 88.107
	,.T_c = 530.6
	,.p_c = (40.0 * 1e5)
	,.rho_c = (1000 * 88.107 / 282.0)
	,.T_t = 0
	,.omega = 0.350
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, NAN, NAN}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_methyl_propionate
};

const EosData eos_rpp_methyl_propionate = {
	"methyl_propionate"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_methyl_propionate}
};


static const IdealData ideal_data_n_decylcyclohexane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-69.02, 0}
			,{1.654, 1}
			,{-9.61E-04, 2}
			,{2.14E-07, 3}
		}
	}}
};

static const CubicData cubic_data_n_decylcyclohexane = {
	.M = 224.432
	,.T_c = 750.0
	,.p_c = (13.5 * 1e5)
	,.rho_c = -1
	,.T_min = 463
	,.omega = 0.583
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, NAN, NAN}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_n_decylcyclohexane
};

const EosData eos_rpp_n_decylcyclohexane = {
	"n_decylcyclohexane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_n_decylcyclohexane}
};


static const IdealData ideal_data_sulfur_trioxide = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{19.21, 0}
			,{0.1374, 1}
			,{-1.18E-04, 2}
			,{3.70E-08, 3}
		}
	}}
};

static const CubicData cubic_data_sulfur_trioxide = {
	.M = 80.058
	,.T_c = 491.0
	,.p_c = (82.1 * 1e5)
	,.rho_c = (1000 * 80.058 / 127.3)
	,.T_t = 0
	,.omega = 0.481
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-396000 / 80.058), (-371700 / 80.058)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_sulfur_trioxide
};

const EosData eos_rpp_sulfur_trioxide = {
	"sulfur_trioxide"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_sulfur_trioxide}
};


static const IdealData ideal_data_tert_butanol = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-48.61, 0}
			,{0.7172, 1}
			,{-7.08E-04, 2}
			,{2.92E-07, 3}
		}
	}}
};

static const CubicData cubic_data_tert_butanol = {
	.M = 74.123
	,.T_c = 506.2
	,.p_c = (39.7 * 1e5)
	,.rho_c = (1000 * 74.123 / 275.0)
	,.T_t = 0
	,.omega = 0.612
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-312800 / 74.123), (-177800 / 74.123)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_tert_butanol
};

const EosData eos_rpp_tert_butanol = {
	"tert_butanol"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_tert_butanol}
};


static const IdealData ideal_data_hydrogen_fluoride = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{29.06, 0}
			,{0.0006611, 1}
			,{-2.03E-06, 2}
			,{2.50E-09, 3}
		}
	}}
};

static const CubicData cubic_data_hydrogen_fluoride = {
	.M = 20.006
	,.T_c = 461.0
	,.p_c = (64.8 * 1e5)
	,.rho_c = (1000 * 20.006 / 69.2)
	,.T_t = 0
	,.omega = 0.329
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-271300 / 20.006), (-273400 / 20.006)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_hydrogen_fluoride
};

const EosData eos_rpp_hydrogen_fluoride = {
	"hydrogen_fluoride"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_hydrogen_fluoride}
};


static const IdealData ideal_data_carbonyl_sulfide = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{23.57, 0}
			,{0.07984, 1}
			,{-7.02E-05, 2}
			,{2.45E-08, 3}
		}
	}}
};

static const CubicData cubic_data_carbonyl_sulfide = {
	.M = 60.070
	,.T_c = 378.8
	,.p_c = (63.5 * 1e5)
	,.rho_c = (1000 * 60.070 / 136.3)
	,.T_t = 0
	,.omega = 0.105
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-138500 / 60.070), (-165800 / 60.070)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_carbonyl_sulfide
};

const EosData eos_rpp_carbonyl_sulfide = {
	"carbonyl_sulfide"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_carbonyl_sulfide}
};


static const IdealData ideal_data_2_methyl_2_pentene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-14.75, 0}
			,{0.5669, 1}
			,{-3.34E-04, 2}
			,{7.96E-08, 3}
		}
	}}
};

static const CubicData cubic_data_2_methyl_2_pentene = {
	.M = 84.162
	,.T_c = 518.0
	,.p_c = (32.8 * 1e5)
	,.rho_c = (1000 * 84.162 / 351.0)
	,.T_t = 0
	,.omega = 0.229
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-66530 / 84.162), (71260 / 84.162)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_2_methyl_2_pentene
};

const EosData eos_rpp_2_methyl_2_pentene = {
	"2_methyl_2_pentene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_2_methyl_2_pentene}
};


static const IdealData ideal_data_methyl_isopropyl_ether = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{13.53, 0}
			,{0.3697, 1}
			,{-1.48E-04, 2}
			,{1.21E-08, 3}
		}
	}}
};

static const CubicData cubic_data_methyl_isopropyl_ether = {
	.M = 74.123
	,.T_c = 464.5
	,.p_c = (37.6 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.266
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-252200 / 74.123), (-121000 / 74.123)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_methyl_isopropyl_ether
};

const EosData eos_rpp_methyl_isopropyl_ether = {
	"methyl_isopropyl_ether"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_methyl_isopropyl_ether}
};


static const IdealData ideal_data_carbon_tetrachloride = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{40.72, 0}
			,{0.2049, 1}
			,{-2.27E-04, 2}
			,{8.84E-08, 3}
		}
	}}
};

static const CubicData cubic_data_carbon_tetrachloride = {
	.M = 153.823
	,.T_c = 556.4
	,.p_c = (45.6 * 1e5)
	,.rho_c = (1000 * 153.823 / 275.9)
	,.T_t = 0
	,.omega = 0.193
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-100500 / 153.823), (-58280 / 153.823)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_carbon_tetrachloride
};

const EosData eos_rpp_carbon_tetrachloride = {
	"carbon_tetrachloride"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_carbon_tetrachloride}
};


static const IdealData ideal_data_fluorobenzene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-38.73, 0}
			,{0.5669, 1}
			,{-4.43E-04, 2}
			,{1.36E-07, 3}
		}
	}}
};

static const CubicData cubic_data_fluorobenzene = {
	.M = 96.104
	,.T_c = 560.1
	,.p_c = (45.5 * 1e5)
	,.rho_c = (1000 * 96.104 / 269.0)
	,.T_t = 0
	,.omega = 0.244
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-116600 / 96.104), (-69080 / 96.104)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_fluorobenzene
};

const EosData eos_rpp_fluorobenzene = {
	"fluorobenzene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_fluorobenzene}
};


static const IdealData ideal_data_1_3_butadiene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-1.69, 0}
			,{0.3419, 1}
			,{-2.34E-04, 2}
			,{6.34E-08, 3}
		}
	}}
};

static const CubicData cubic_data_1_3_butadiene = {
	.M = 54.092
	,.T_c = 425.0
	,.p_c = (43.3 * 1e5)
	,.rho_c = (1000 * 54.092 / 221.0)
	,.T_t = 0
	,.omega = 0.195
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (110200 / 54.092), (150800 / 54.092)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_1_3_butadiene
};

const EosData eos_rpp_1_3_butadiene = {
	"1_3_butadiene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_1_3_butadiene}
};


static const IdealData ideal_data_cyclohexanol = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-55.53, 0}
			,{0.7214, 1}
			,{-4.09E-04, 2}
			,{8.24E-08, 3}
		}
	}}
};

static const CubicData cubic_data_cyclohexanol = {
	.M = 100.160
	,.T_c = 625.0
	,.p_c = (37.5 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.528
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-294800 / 100.160), (-118000 / 100.160)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_cyclohexanol
};

const EosData eos_rpp_cyclohexanol = {
	"cyclohexanol"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_cyclohexanol}
};


static const IdealData ideal_data_sulfur_hexafluoride = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-0.66, 0}
			,{0.4639, 1}
			,{-5.09E-04, 2}
			,{1.95E-07, 3}
		}
	}}
};

static const CubicData cubic_data_sulfur_hexafluoride = {
	.M = 146.054
	,.T_c = 318.7
	,.p_c = (37.6 * 1e5)
	,.rho_c = (1000 * 146.054 / 198.8)
	,.T_t = 0
	,.omega = 0.286
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-1222000 / 146.054), (-1118000 / 146.054)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_sulfur_hexafluoride
};

const EosData eos_rpp_sulfur_hexafluoride = {
	"sulfur_hexafluoride"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_sulfur_hexafluoride}
};


static const IdealData ideal_data_1_pentyne = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{18.07, 0}
			,{0.3511, 1}
			,{-1.91E-04, 2}
			,{4.10E-08, 3}
		}
	}}
};

static const CubicData cubic_data_1_pentyne = {
	.M = 68.119
	,.T_c = 493.5
	,.p_c = (40.5 * 1e5)
	,.rho_c = (1000 * 68.119 / 278.0)
	,.T_t = 0
	,.omega = 0.164
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (144400 / 68.119), (210400 / 68.119)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_1_pentyne
};

const EosData eos_rpp_1_pentyne = {
	"1_pentyne"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_1_pentyne}
};


static const IdealData ideal_data_2_methyl_1_3_butadiene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-3.41, 0}
			,{0.45885, 1}
			,{-3.34E-04, 2}
			,{1.00E-07, 3}
		}
	}}
};

static const CubicData cubic_data_2_methyl_1_3_butadiene = {
	.M = 68.119
	,.T_c = 484.0
	,.p_c = (38.5 * 1e5)
	,.rho_c = (1000 * 68.119 / 276.0)
	,.T_t = 0
	,.omega = 0.164
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (75780 / 68.119), (146000 / 68.119)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_2_methyl_1_3_butadiene
};

const EosData eos_rpp_2_methyl_1_3_butadiene = {
	"2_methyl_1_3_butadiene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_2_methyl_1_3_butadiene}
};


static const IdealData ideal_data_1_hexanol = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{4.81, 0}
			,{0.5891, 1}
			,{-3.01E-04, 2}
			,{5.43E-08, 3}
		}
	}}
};

static const CubicData cubic_data_1_hexanol = {
	.M = 102.177
	,.T_c = 611.0
	,.p_c = (40.5 * 1e5)
	,.rho_c = (1000 * 102.177 / 381.0)
	,.T_t = 0
	,.omega = 0.560
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-317800 / 102.177), (-135700 / 102.177)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_1_hexanol
};

const EosData eos_rpp_1_hexanol = {
	"1_hexanol"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_1_hexanol}
};


static const IdealData ideal_data_1_2_3_trimethylbenzene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-6.94, 0}
			,{0.6335, 1}
			,{-3.33E-04, 2}
			,{6.61E-08, 3}
		}
	}}
};

static const CubicData cubic_data_1_2_3_trimethylbenzene = {
	.M = 120.195
	,.T_c = 664.5
	,.p_c = (34.5 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.366
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-9.59E+03 / 120.195), (1.25E+05 / 120.195)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_1_2_3_trimethylbenzene
};

const EosData eos_rpp_1_2_3_trimethylbenzene = {
	"1_2_3_trimethylbenzene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_1_2_3_trimethylbenzene}
};


static const IdealData ideal_data_1_2_dichloropropane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{10.45, 0}
			,{0.3655, 1}
			,{-2.60E-04, 2}
			,{7.74E-08, 3}
		}
	}}
};

static const CubicData cubic_data_1_2_dichloropropane = {
	.M = 112.987
	,.T_c = 577.0
	,.p_c = (44.5 * 1e5)
	,.rho_c = (1000 * 112.987 / 226.0)
	,.T_t = 0
	,.omega = 0.240
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-166000 / 112.987), (-83150 / 112.987)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_1_2_dichloropropane
};

const EosData eos_rpp_1_2_dichloropropane = {
	"1_2_dichloropropane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_1_2_dichloropropane}
};


static const IdealData ideal_data_1_2_dichloroethane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{20.49, 0}
			,{0.231, 1}
			,{-1.44E-04, 2}
			,{3.39E-08, 3}
		}
	}}
};

static const CubicData cubic_data_1_2_dichloroethane = {
	.M = 98.960
	,.T_c = 566.0
	,.p_c = (53.7 * 1e5)
	,.rho_c = (1000 * 98.960 / 225.0)
	,.T_t = 0
	,.omega = 0.278
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-129800 / 98.960), (-73900 / 98.960)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_1_2_dichloroethane
};

const EosData eos_rpp_1_2_dichloroethane = {
	"1_2_dichloroethane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_1_2_dichloroethane}
};


static const IdealData ideal_data_hydrogen_chloride = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{30.67, 0}
			,{-0.007201, 1}
			,{1.25E-05, 2}
			,{-3.90E-09, 3}
		}
	}}
};

static const CubicData cubic_data_hydrogen_chloride = {
	.M = 36.461
	,.T_c = 324.7
	,.p_c = (83.1 * 1e5)
	,.rho_c = (1000 * 36.461 / 80.9)
	,.T_t = 0
	,.omega = 0.133
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-92360 / 36.461), (-95330 / 36.461)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_hydrogen_chloride
};

const EosData eos_rpp_hydrogen_chloride = {
	"hydrogen_chloride"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_hydrogen_chloride}
};


static const IdealData ideal_data_1_octanol = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{6.17, 0}
			,{0.7607, 1}
			,{-3.80E-04, 2}
			,{6.26E-08, 3}
		}
	}}
};

static const CubicData cubic_data_1_octanol = {
	.M = 130.231
	,.T_c = 652.5
	,.p_c = (28.6 * 1e5)
	,.rho_c = (1000 * 130.231 / 490.0)
	,.T_t = 0
	,.omega = 0.587
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-360100 / 130.231), (-1.20E+05 / 130.231)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_1_octanol
};

const EosData eos_rpp_1_octanol = {
	"1_octanol"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_1_octanol}
};


static const IdealData ideal_data_2_2_5_5_tetramthylhexane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-62.34, 0}
			,{1.235, 1}
			,{-8.96E-04, 2}
			,{2.62E-07, 3}
		}
	}}
};

static const CubicData cubic_data_2_2_5_5_tetramthylhexane = {
	.M = 142.286
	,.T_c = 581.6
	,.p_c = (21.9 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.375
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, NAN, NAN}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_2_2_5_5_tetramthylhexane
};

const EosData eos_rpp_2_2_5_5_tetramthylhexane = {
	"2_2_5_5_tetramthylhexane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_2_2_5_5_tetramthylhexane}
};


static const IdealData ideal_data_diethyl_amine = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{2.04, 0}
			,{0.443, 1}
			,{-2.18E-04, 2}
			,{3.65E-08, 3}
		}
	}}
};

static const CubicData cubic_data_diethyl_amine = {
	.M = 73.139
	,.T_c = 496.5
	,.p_c = (37.1 * 1e5)
	,.rho_c = (1000 * 73.139 / 301.0)
	,.T_t = 0
	,.omega = 0.291
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-72430 / 73.139), (72140 / 73.139)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_diethyl_amine
};

const EosData eos_rpp_diethyl_amine = {
	"diethyl_amine"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_diethyl_amine}
};


static const IdealData ideal_data_nitrogen = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{3.115e1, 0}
			,{-1.357e-2, 1}
			,{2.680e-5, 2}
			,{-1.168e-8, 3}
		}
	}}
};

static const CubicData cubic_data_nitrogen = {
	.M = 28.013
	,.T_c = 126.2
	,.p_c = (33.9 * 1e5)
	,.rho_c = (1000 * 28.013 / 89.8)
	,.T_t = 0
	,.omega = 0.039
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (0.00 / 28.013), (0.00 / 28.013)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_nitrogen
};

const EosData eos_rpp_nitrogen = {
	"nitrogen"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_nitrogen}
};


static const IdealData ideal_data_1_cyclopentyltetradecane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-64.93, 0}
			,{1.884, 1}
			,{-1.09E-03, 2}
			,{2.43E-07, 3}
		}
	}}
};

static const CubicData cubic_data_1_cyclopentyltetradecane = {
	.M = 266.513
	,.T_c = 772.0
	,.p_c = (11.2 * 1e5)
	,.rho_c = -1
	,.T_min = 465
	,.omega = 0.789
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-374600 / 266.513), (145600 / 266.513)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_1_cyclopentyltetradecane
};

const EosData eos_rpp_1_cyclopentyltetradecane = {
	"1_cyclopentyltetradecane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_1_cyclopentyltetradecane}
};


static const IdealData ideal_data_n_tridecylcylopentane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-64.21, 0}
			,{1.79, 1}
			,{-1.03E-03, 2}
			,{2.31E-07, 3}
		}
	}}
};

static const CubicData cubic_data_n_tridecylcylopentane = {
	.M = 252.486
	,.T_c = 761.0
	,.p_c = (12.0 * 1e5)
	,.rho_c = -1
	,.T_min = 453
	,.omega = 0.755
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-354000 / 252.486), (137100 / 252.486)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_n_tridecylcylopentane
};

const EosData eos_rpp_n_tridecylcylopentane = {
	"n_tridecylcylopentane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_n_tridecylcylopentane}
};


static const IdealData ideal_data_1_2_dimethylcyclopentane_trans = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{54.52, 0}
			,{0.7591, 1}
			,{-4.48E-04, 2}
			,{1.02E-07, 3}
		}
	}}
};

static const CubicData cubic_data_1_2_dimethylcyclopentane_trans = {
	.M = 98.189
	,.T_c = 553.2
	,.p_c = (34.4 * 1e5)
	,.rho_c = (1000 * 98.189 / 362.0)
	,.T_t = 0
	,.omega = 0.269
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-136800 / 98.189), (38390 / 98.189)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_1_2_dimethylcyclopentane_trans
};

const EosData eos_rpp_1_2_dimethylcyclopentane_trans = {
	"1_2_dimethylcyclopentane_trans"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_1_2_dimethylcyclopentane_trans}
};


static const IdealData ideal_data_1_4_dioxane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-53.57, 0}
			,{0.5987, 1}
			,{-4.09E-04, 2}
			,{1.06E-07, 3}
		}
	}}
};

static const CubicData cubic_data_1_4_dioxane = {
	.M = 88.107
	,.T_c = 587.0
	,.p_c = (52.1 * 1e5)
	,.rho_c = (1000 * 88.107 / 238.0)
	,.T_t = 0
	,.omega = 0.281
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-315300 / 88.107), (-180900 / 88.107)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_1_4_dioxane
};

const EosData eos_rpp_1_4_dioxane = {
	"1_4_dioxane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_1_4_dioxane}
};


static const IdealData ideal_data_n_tridecane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-10.46, 0}
			,{1.245, 1}
			,{-6.91E-04, 2}
			,{1.49E-07, 3}
		}
	}}
};

static const CubicData cubic_data_n_tridecane = {
	.M = 184.367
	,.T_c = 676.0
	,.p_c = (17.2 * 1e5)
	,.rho_c = (1000 * 184.367 / 780.0)
	,.T_min = 380
	,.omega = 0.619
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-311700 / 184.367), (58490 / 184.367)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_n_tridecane
};

const EosData eos_rpp_n_tridecane = {
	"n_tridecane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_n_tridecane}
};


static const IdealData ideal_data_2_2_3_3_tetramethylhexane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-58.83, 0}
			,{1.231, 1}
			,{-8.83E-04, 2}
			,{2.59E-07, 3}
		}
	}}
};

static const CubicData cubic_data_2_2_3_3_tetramethylhexane = {
	.M = 142.286
	,.T_c = 623.2
	,.p_c = (25.1 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.364
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, NAN, NAN}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_2_2_3_3_tetramethylhexane
};

const EosData eos_rpp_2_2_3_3_tetramethylhexane = {
	"2_2_3_3_tetramethylhexane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_2_2_3_3_tetramethylhexane}
};


static const IdealData ideal_data_diethyl_ether = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{21.42, 0}
			,{0.3359, 1}
			,{-1.04E-04, 2}
			,{-9.36E-09, 3}
		}
	}}
};

static const CubicData cubic_data_diethyl_ether = {
	.M = 74.123
	,.T_c = 466.7
	,.p_c = (36.4 * 1e5)
	,.rho_c = (1000 * 74.123 / 280.0)
	,.T_t = 0
	,.omega = 0.281
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-252400 / 74.123), (-122400 / 74.123)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_diethyl_ether
};

const EosData eos_rpp_diethyl_ether = {
	"diethyl_ether"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_diethyl_ether}
};


static const IdealData ideal_data_trifluoroamine_oxide = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{15.13, 0}
			,{0.2446, 1}
			,{-2.53E-04, 2}
			,{9.38E-08, 3}
		}
	}}
};

static const CubicData cubic_data_trifluoroamine_oxide = {
	.M = 87.001
	,.T_c = 303.0
	,.p_c = (64.3 * 1e5)
	,.rho_c = (1000 * 87.001 / 146.9)
	,.T_t = 0
	,.omega = 0.212
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-163300 / 87.001), (-96460 / 87.001)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_trifluoroamine_oxide
};

const EosData eos_rpp_trifluoroamine_oxide = {
	"trifluoroamine_oxide"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_trifluoroamine_oxide}
};


static const IdealData ideal_data_trichlorofluoromethane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{40.98, 0}
			,{0.1668, 1}
			,{-1.42E-04, 2}
			,{4.15E-08, 3}
		}
	}}
};

static const CubicData cubic_data_trichlorofluoromethane = {
	.M = 137.368
	,.T_c = 471.2
	,.p_c = (44.1 * 1e5)
	,.rho_c = (1000 * 137.368 / 247.8)
	,.T_t = 0
	,.omega = 0.189
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-284700 / 137.368), (-245500 / 137.368)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_trichlorofluoromethane
};

const EosData eos_rpp_trichlorofluoromethane = {
	"trichlorofluoromethane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_trichlorofluoromethane}
};


static const IdealData ideal_data_acetone = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{6.301, 0}
			,{2.606e-1, 1}
			,{-1.253e-4, 2}
			,{2.038e-8, 3}
		}
	}}
};

static const CubicData cubic_data_acetone = {
	.M = 58.080
	,.T_c = 508.1
	,.p_c = (47.0 * 1e5)
	,.rho_c = (1000 * 58.080 / 209.0)
	,.T_t = 0
	,.omega = 0.304
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-2.177e+5 / 58.080), (-1.532e+5 / 58.080)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_acetone
};

const EosData eos_rpp_acetone = {
	"acetone"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_acetone}
};


static const IdealData ideal_data_methyl_propyl_ether = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{21.31, 0}
			,{0.339, 1}
			,{-1.13E-04, 2}
			,{-2.86E-09, 3}
		}
	}}
};

static const CubicData cubic_data_methyl_propyl_ether = {
	.M = 74.123
	,.T_c = 476.3
	,.p_c = (38.0 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.271
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-237900 / 74.123), (-110000 / 74.123)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_methyl_propyl_ether
};

const EosData eos_rpp_methyl_propyl_ether = {
	"methyl_propyl_ether"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_methyl_propyl_ether}
};


static const IdealData ideal_data_2_2_dimethylpentane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-50.10, 0}
			,{0.8956, 1}
			,{-6.36E-04, 2}
			,{1.74E-07, 3}
		}
	}}
};

static const CubicData cubic_data_2_2_dimethylpentane = {
	.M = 100.205
	,.T_c = 520.5
	,.p_c = (27.7 * 1e5)
	,.rho_c = (1000 * 100.205 / 416.0)
	,.T_t = 0
	,.omega = 0.287
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-206300 / 100.205), (840 / 100.205)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_2_2_dimethylpentane
};

const EosData eos_rpp_2_2_dimethylpentane = {
	"2_2_dimethylpentane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_2_2_dimethylpentane}
};


static const IdealData ideal_data_isobutyl_acetate = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{7.31, 0}
			,{0.574, 1}
			,{-2.58E-04, 2}
			,{1.10E-08, 3}
		}
	}}
};

static const CubicData cubic_data_isobutyl_acetate = {
	.M = 116.160
	,.T_c = 564.0
	,.p_c = (30.2 * 1e5)
	,.rho_c = (1000 * 116.160 / 414.0)
	,.T_t = 0
	,.omega = 0.455
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-495500 / 116.160), NAN}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_isobutyl_acetate
};

const EosData eos_rpp_isobutyl_acetate = {
	"isobutyl_acetate"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_isobutyl_acetate}
};


static const IdealData ideal_data_vinylacetylene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{6.76, 0}
			,{0.2841, 1}
			,{-2.27E-04, 2}
			,{7.46E-08, 3}
		}
	}}
};

static const CubicData cubic_data_vinylacetylene = {
	.M = 52.076
	,.T_c = 455.0
	,.p_c = (49.6 * 1e5)
	,.rho_c = (1000 * 52.076 / 202.0)
	,.T_t = 0
	,.omega = 0.092
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (304800 / 52.076), (306200 / 52.076)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_vinylacetylene
};

const EosData eos_rpp_vinylacetylene = {
	"vinylacetylene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_vinylacetylene}
};


static const IdealData ideal_data_methyl_isopropyl_ketone = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-2.91, 0}
			,{0.4991, 1}
			,{-2.94E-04, 2}
			,{6.67E-08, 3}
		}
	}}
};

static const CubicData cubic_data_methyl_isopropyl_ketone = {
	.M = 86.134
	,.T_c = 553.4
	,.p_c = (38.5 * 1e5)
	,.rho_c = (1000 * 86.134 / 310.0)
	,.T_t = 0
	,.omega = 0.331
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, NAN, NAN}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_methyl_isopropyl_ketone
};

const EosData eos_rpp_methyl_isopropyl_ketone = {
	"methyl_isopropyl_ketone"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_methyl_isopropyl_ketone}
};


static const IdealData ideal_data_thiophosphoryl_trifluoride = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{24.92, 0}
			,{0.2326, 1}
			,{-2.47E-04, 2}
			,{9.28E-08, 3}
		}
	}}
};

static const CubicData cubic_data_thiophosphoryl_trifluoride = {
	.M = 120.034
	,.T_c = 346.0
	,.p_c = (38.2 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.187
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-992300 / 120.034), (-974300 / 120.034)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_thiophosphoryl_trifluoride
};

const EosData eos_rpp_thiophosphoryl_trifluoride = {
	"thiophosphoryl_trifluoride"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_thiophosphoryl_trifluoride}
};


static const IdealData ideal_data_methyl_fluoride = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{13.82, 0}
			,{0.08616, 1}
			,{-2.07E-05, 2}
			,{-1.99E-09, 3}
		}
	}}
};

static const CubicData cubic_data_methyl_fluoride = {
	.M = 34.033
	,.T_c = 315.0
	,.p_c = (56.0 * 1e5)
	,.rho_c = (1000 * 34.033 / 113.2)
	,.T_t = 0
	,.omega = 0.187
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-234000 / 34.033), (-210100 / 34.033)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_methyl_fluoride
};

const EosData eos_rpp_methyl_fluoride = {
	"methyl_fluoride"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_methyl_fluoride}
};


static const IdealData ideal_data_isobutyric_acid = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{9.81, 0}
			,{0.4668, 1}
			,{-3.72E-04, 2}
			,{1.35E-07, 3}
		}
	}}
};

static const CubicData cubic_data_isobutyric_acid = {
	.M = 88.107
	,.T_c = 609.0
	,.p_c = (40.5 * 1e5)
	,.rho_c = (1000 * 88.107 / 292.0)
	,.T_t = 0
	,.omega = 0.623
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-484200 / 88.107), NAN}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_isobutyric_acid
};

const EosData eos_rpp_isobutyric_acid = {
	"isobutyric_acid"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_isobutyric_acid}
};


static const IdealData ideal_data_1_hexene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-1.75, 0}
			,{0.5309, 1}
			,{-2.90E-04, 2}
			,{6.05E-08, 3}
		}
	}}
};

static const CubicData cubic_data_1_hexene = {
	.M = 84.163
	,.T_c = 504.0
	,.p_c = (31.7 * 1e5)
	,.rho_c = (1000 * 84.163 / 350.0)
	,.T_t = 0
	,.omega = 0.285
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-41700 / 84.163), (87500 / 84.163)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_1_hexene
};

const EosData eos_rpp_1_hexene = {
	"1_hexene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_1_hexene}
};


static const IdealData ideal_data_sec_butylbenzene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-65.15, 0}
			,{0.9893, 1}
			,{-7.21E-04, 2}
			,{2.15E-07, 3}
		}
	}}
};

static const CubicData cubic_data_sec_butylbenzene = {
	.M = 134.222
	,.T_c = 664.0
	,.p_c = (29.4 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.274
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-17460 / 134.222), NAN}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_sec_butylbenzene
};

const EosData eos_rpp_sec_butylbenzene = {
	"sec_butylbenzene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_sec_butylbenzene}
};


static const IdealData ideal_data_thiophene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-30.61, 0}
			,{0.448, 1}
			,{-3.77E-04, 2}
			,{1.25E-07, 3}
		}
	}}
};

static const CubicData cubic_data_thiophene = {
	.M = 84.136
	,.T_c = 579.4
	,.p_c = (56.9 * 1e5)
	,.rho_c = (1000 * 84.136 / 219.0)
	,.T_t = 0
	,.omega = 0.196
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (115800 / 84.136), (126900 / 84.136)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_thiophene
};

const EosData eos_rpp_thiophene = {
	"thiophene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_thiophene}
};


static const IdealData ideal_data_cyclohexene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-68.65, 0}
			,{0.7252, 1}
			,{-5.41E-04, 2}
			,{1.64E-07, 3}
		}
	}}
};

static const CubicData cubic_data_cyclohexene = {
	.M = 82.146
	,.T_c = 560.5
	,.p_c = (43.4 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.210
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-5360 / 82.146), (106900 / 82.146)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_cyclohexene
};

const EosData eos_rpp_cyclohexene = {
	"cyclohexene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_cyclohexene}
};


static const IdealData ideal_data_diphenyl = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-9.707e+1, 0}
			,{1.106, 1}
			,{-8.855e-4, 2}
			,{2.790e-7, 3}
		}
	}}
};

static const CubicData cubic_data_diphenyl = {
	.M = 154.212
	,.T_c = 789.0
	,.p_c = (38.5 * 1e5)
	,.rho_c = (1000 * 154.212 / 502.0)
	,.T_min = 342
	,.omega = 0.372
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (1.822e+5 / 154.212), (2.803e+5 / 154.212)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_diphenyl
};

const EosData eos_rpp_diphenyl = {
	"diphenyl"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_diphenyl}
};


static const IdealData ideal_data_o_cresol = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-32.28, 0}
			,{0.7005, 1}
			,{-5.92E-04, 2}
			,{2.21E-07, 3}
		}
	}}
};

static const CubicData cubic_data_o_cresol = {
	.M = 108.140
	,.T_c = 697.6
	,.p_c = (50.1 * 1e5)
	,.rho_c = -1
	,.T_min = 393	
	,.omega = 0.433
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-128700 / 108.140), (-33000 / 108.140)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_o_cresol
};

const EosData eos_rpp_o_cresol = {
	"o_cresol"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_o_cresol}
};


static const IdealData ideal_data_1_1_difluoroethane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{86.75, 0}
			,{0.2396, 1}
			,{-1.46E-04, 2}
			,{3.39E-08, 3}
		}
	}}
};

static const CubicData cubic_data_1_1_difluoroethane = {
	.M = 66.051
	,.T_c = 386.7
	,.p_c = (45.0 * 1e5)
	,.rho_c = (1000 * 66.051 / 181.0)
	,.T_t = 0
	,.omega = 0.256
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-494000 / 66.051), (-436500 / 66.051)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_1_1_difluoroethane
};

const EosData eos_rpp_1_1_difluoroethane = {
	"1_1_difluoroethane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_1_1_difluoroethane}
};


static const IdealData ideal_data_acetonitrile = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{20.48, 0}
			,{0.1196, 1}
			,{-4.49E-05, 2}
			,{3.20E-09, 3}
		}
	}}
};

static const CubicData cubic_data_acetonitrile = {
	.M = 41.053
	,.T_c = 545.5
	,.p_c = (48.3 * 1e5)
	,.rho_c = (1000 * 41.053 / 173.0)
	,.T_t = 0
	,.omega = 0.327
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (87920 / 41.053), (105700 / 41.053)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_acetonitrile
};

const EosData eos_rpp_acetonitrile = {
	"acetonitrile"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_acetonitrile}
};


static const IdealData ideal_data_cyanogen = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{35.94, 0}
			,{0.09253, 1}
			,{-8.15E-05, 2}
			,{2.95E-08, 3}
		}
	}}
};

static const CubicData cubic_data_cyanogen = {
	.M = 52.035
	,.T_c = 400.0
	,.p_c = (59.8 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.278
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (309200 / 52.035), (297400 / 52.035)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_cyanogen
};

const EosData eos_rpp_cyanogen = {
	"cyanogen"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_cyanogen}
};


static const IdealData ideal_data_n_undecane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-8.40, 0}
			,{1.054, 1}
			,{-5.80E-04, 2}
			,{1.24E-07, 3}
		}
	}}
};

static const CubicData cubic_data_n_undecane = {
	.M = 156.313
	,.T_c = 638.8
	,.p_c = (19.7 * 1e5)
	,.rho_c = (1000 * 156.313 / 660.0)
	,.T_min = 350
	,.omega = 0.535
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-270500 / 156.313), (41620 / 156.313)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_n_undecane
};

const EosData eos_rpp_n_undecane = {
	"n_undecane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_n_undecane}
};


static const IdealData ideal_data_2_2_3_trimethylhexane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-45.63, 0}
			,{1.055, 1}
			,{-7.17E-04, 2}
			,{1.99E-07, 3}
		}
	}}
};

static const CubicData cubic_data_2_2_3_trimethylhexane = {
	.M = 128.259
	,.T_c = 588.0
	,.p_c = (24.9 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.332
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-241400 / 128.259), (24530 / 128.259)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_2_2_3_trimethylhexane
};

const EosData eos_rpp_2_2_3_trimethylhexane = {
	"2_2_3_trimethylhexane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_2_2_3_trimethylhexane}
};


static const IdealData ideal_data_3_hexene_trans = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-4.34, 0}
			,{0.551, 1}
			,{-3.28E-04, 2}
			,{8.05E-08, 3}
		}
	}}
};

static const CubicData cubic_data_3_hexene_trans = {
	.M = 84.162
	,.T_c = 519.9
	,.p_c = (32.5 * 1e5)
	,.rho_c = (1000 * 84.162 / 350.0)
	,.T_t = 0
	,.omega = 0.227
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-54470 / 84.162), (77670 / 84.162)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_3_hexene_trans
};

const EosData eos_rpp_3_hexene_trans = {
	"3_hexene_trans"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_3_hexene_trans}
};


static const IdealData ideal_data_n_octane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-6.096, 0}
			,{7.712e-1, 1}
			,{-4.195e-4, 2}
			,{8.855e-8, 3}
		}
	}}
};

static const CubicData cubic_data_n_octane = {
	.M = 114.232
	,.T_c = 568.8
	,.p_c = (24.9 * 1e5)
	,.rho_c = (1000 * 114.232 / 492.0)
	,.T_t = 0
	,.omega = 0.398
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-2.086e5 / 114.232), (1.640e4 / 114.232)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_n_octane
};

const EosData eos_rpp_n_octane = {
	"n_octane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_n_octane}
};


static const IdealData ideal_data_2_methyl_pentane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-10.57, 0}
			,{0.6184, 1}
			,{-3.57E-04, 2}
			,{8.09E-08, 3}
		}
	}}
};

static const CubicData cubic_data_2_methyl_pentane = {
	.M = 86.178
	,.T_c = 497.5
	,.p_c = (30.1 * 1e5)
	,.rho_c = (1000 * 86.178 / 367.0)
	,.T_t = 0
	,.omega = 0.278
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-174400 / 86.178), (-5020 / 86.178)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_2_methyl_pentane
};

const EosData eos_rpp_2_methyl_pentane = {
	"2_methyl_pentane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_2_methyl_pentane}
};


static const IdealData ideal_data_acrylic_acid = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{1.74, 0}
			,{0.3191, 1}
			,{-2.35E-04, 2}
			,{6.98E-08, 3}
		}
	}}
};

static const CubicData cubic_data_acrylic_acid = {
	.M = 72.064
	,.T_c = 615.0
	,.p_c = (56.7 * 1e5)
	,.rho_c = (1000 * 72.064 / 210.0)
	,.T_t = 0
	,.omega = 0.560
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-336500 / 72.064), (-286300 / 72.064)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_acrylic_acid
};

const EosData eos_rpp_acrylic_acid = {
	"acrylic_acid"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_acrylic_acid}
};


static const IdealData ideal_data_sulfur_dioxide = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{23.85, 0}
			,{0.06699, 1}
			,{-4.96E-05, 2}
			,{1.33E-08, 3}
		}
	}}
};

static const CubicData cubic_data_sulfur_dioxide = {
	.M = 64.063
	,.T_c = 430.8
	,.p_c = (78.8 * 1e5)
	,.rho_c = (1000 * 64.063 / 122.2)
	,.T_t = 0
	,.omega = 0.256
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-297100 / 64.063), (-300400 / 64.063)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_sulfur_dioxide
};

const EosData eos_rpp_sulfur_dioxide = {
	"sulfur_dioxide"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_sulfur_dioxide}
};


static const IdealData ideal_data_chlorine = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{26.93, 0}
			,{0.03384, 1}
			,{-3.87E-05, 2}
			,{1.55E-08, 3}
		}
	}}
};

static const CubicData cubic_data_chlorine = {
	.M = 70.906
	,.T_c = 416.9
	,.p_c = (79.8 * 1e5)
	,.rho_c = (1000 * 70.906 / 123.8)
	,.T_t = 0
	,.omega = 0.090
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (0 / 70.906), (0 / 70.906)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_chlorine
};

const EosData eos_rpp_chlorine = {
	"chlorine"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_chlorine}
};


static const IdealData ideal_data_n_hexylcylopentane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-58.32, 0}
			,{1.128, 1}
			,{-6.54E-04, 2}
			,{1.47E-07, 3}
		}
	}}
};

static const CubicData cubic_data_n_hexylcylopentane = {
	.M = 154.297
	,.T_c = 660.1
	,.p_c = (21.3 * 1e5)
	,.rho_c = -1
	,.T_min = 351
	,.omega = 0.476
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-209600 / 154.297), (78250 / 154.297)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_n_hexylcylopentane
};

const EosData eos_rpp_n_hexylcylopentane = {
	"n_hexylcylopentane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_n_hexylcylopentane}
};


static const IdealData ideal_data_2_3_3_4_tetramethylpentane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-54.92, 0}
			,{1.091, 1}
			,{-7.60E-04, 2}
			,{2.16E-07, 3}
		}
	}}
};

static const CubicData cubic_data_2_3_3_4_tetramethylpentane = {
	.M = 128.259
	,.T_c = 607.7
	,.p_c = (27.2 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.313
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-236400 / 128.259), (34120 / 128.259)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_2_3_3_4_tetramethylpentane
};

const EosData eos_rpp_2_3_3_4_tetramethylpentane = {
	"2_3_3_4_tetramethylpentane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_2_3_3_4_tetramethylpentane}
};


static const IdealData ideal_data_1_1_difluoroethene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{3.07, 0}
			,{0.2445, 1}
			,{-2.10E-04, 2}
			,{7.02E-08, 3}
		}
	}}
};

static const CubicData cubic_data_1_1_difluoroethene = {
	.M = 64.035
	,.T_c = 302.9
	,.p_c = (44.6 * 1e5)
	,.rho_c = (1000 * 64.035 / 154.1)
	,.T_t = 0
	,.omega = 0.140
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-345400 / 64.035), (-321700 / 64.035)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_1_1_difluoroethene
};

const EosData eos_rpp_1_1_difluoroethene = {
	"1_1_difluoroethene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_1_1_difluoroethene}
};


static const IdealData ideal_data_1_heptene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-3.30, 0}
			,{0.6297, 1}
			,{-3.51E-04, 2}
			,{7.61E-08, 3}
		}
	}}
};

static const CubicData cubic_data_1_heptene = {
	.M = 98.189
	,.T_c = 537.3
	,.p_c = (28.3 * 1e5)
	,.rho_c = (1000 * 98.189 / 440.0)
	,.T_t = 0
	,.omega = 0.358
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-62340 / 98.189), (95880 / 98.189)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_1_heptene
};

const EosData eos_rpp_1_heptene = {
	"1_heptene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_1_heptene}
};


static const IdealData ideal_data_n_tetradecane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-10.98, 0}
			,{1.338, 1}
			,{-7.42E-04, 2}
			,{1.60E-07, 3}
		}
	}}
};

static const CubicData cubic_data_n_tetradecane = {
	.M = 198.934
	,.T_c = 693.0
	,.p_c = (14.4 * 1e5)
	,.rho_c = (1000 * 198.934 / 830.0)
	,.T_min = 380
	,.omega = 0.581
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-332300 / 198.934), (66860 / 198.934)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_n_tetradecane
};

const EosData eos_rpp_n_tetradecane = {
	"n_tetradecane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_n_tetradecane}
};


static const IdealData ideal_data_4_methyl_2_pentene_cis = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-1.68, 0}
			,{0.5376, 1}
			,{-3.04E-04, 2}
			,{6.75E-08, 3}
		}
	}}
};

static const CubicData cubic_data_4_methyl_2_pentene_cis = {
	.M = 84.162
	,.T_c = 490.0
	,.p_c = (30.4 * 1e5)
	,.rho_c = (1000 * 84.162 / 360.0)
	,.T_t = 0
	,.omega = 0.290
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-57480 / 84.162), (82190 / 84.162)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_4_methyl_2_pentene_cis
};

const EosData eos_rpp_4_methyl_2_pentene_cis = {
	"4_methyl_2_pentene_cis"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_4_methyl_2_pentene_cis}
};


static const IdealData ideal_data_krypton = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{20.80, 0}
			,{0, 1}
			,{0.00E+00, 2}
			,{0.00E+00, 3}
		}
	}}
};

static const CubicData cubic_data_krypton = {
	.M = 83.800
	,.T_c = 209.4
	,.p_c = (55.0 * 1e5)
	,.rho_c = (1000 * 83.800 / 91.2)
	,.T_min = 115
	,.omega = 0.005
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (0 / 83.800), (0 / 83.800)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_krypton
};

const EosData eos_rpp_krypton = {
	"krypton"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_krypton}
};


static const IdealData ideal_data_1_hexadecene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-9.71, 0}
			,{1.475, 1}
			,{-8.30E-04, 2}
			,{1.81E-07, 3}
		}
	}}
};

static const CubicData cubic_data_1_hexadecene = {
	.M = 224.432
	,.T_c = 717.0
	,.p_c = (13.3 * 1e5)
	,.rho_c = -1
	,.T_min = 400
	,.omega = 0.721
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-248000 / 224.432), (171600 / 224.432)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_1_hexadecene
};

const EosData eos_rpp_1_hexadecene = {
	"1_hexadecene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_1_hexadecene}
};


static const IdealData ideal_data_fluoroform = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{8.16, 0}
			,{0.1813, 1}
			,{-1.38E-04, 2}
			,{3.94E-08, 3}
		}
	}}
};

static const CubicData cubic_data_fluoroform = {
	.M = 70.013
	,.T_c = 299.3
	,.p_c = (48.6 * 1e5)
	,.rho_c = (1000 * 70.013 / 132.7)
	,.T_t = 0
	,.omega = 0.260
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-697500 / 70.013), (-662800 / 70.013)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_fluoroform
};

const EosData eos_rpp_fluoroform = {
	"fluoroform"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_fluoroform}
};


static const IdealData ideal_data_allyl_cyanide = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{21.70, 0}
			,{0.2572, 1}
			,{-1.19E-04, 2}
			,{1.23E-08, 3}
		}
	}}
};

static const CubicData cubic_data_allyl_cyanide = {
	.M = 67.091
	,.T_c = 585.0
	,.p_c = (39.5 * 1e5)
	,.rho_c = (1000 * 67.091 / 265.0)
	,.T_t = 0
	,.omega = 0.390
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, NAN, NAN}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_allyl_cyanide
};

const EosData eos_rpp_allyl_cyanide = {
	"allyl_cyanide"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_allyl_cyanide}
};


static const IdealData ideal_data_3_methyl_1_2_butadiene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{14.69, 0}
			,{0.3598, 1}
			,{-1.98E-04, 2}
			,{4.26E-08, 3}
		}
	}}
};

static const CubicData cubic_data_3_methyl_1_2_butadiene = {
	.M = 68.119
	,.T_c = 496.0
	,.p_c = (41.1 * 1e5)
	,.rho_c = (1000 * 68.119 / 267.0)
	,.T_t = 0
	,.omega = 0.160
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (129800 / 68.119), (198700 / 68.119)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_3_methyl_1_2_butadiene
};

const EosData eos_rpp_3_methyl_1_2_butadiene = {
	"3_methyl_1_2_butadiene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_3_methyl_1_2_butadiene}
};


static const IdealData ideal_data_methyl_isocyanate = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{35.76, 0}
			,{0.104, 1}
			,{-5.82E-06, 2}
			,{-1.69E-08, 3}
		}
	}}
};

static const CubicData cubic_data_methyl_isocyanate = {
	.M = 57.052
	,.T_c = 491.0
	,.p_c = (55.7 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.278
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-90000 / 57.052), NAN}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_methyl_isocyanate
};

const EosData eos_rpp_methyl_isocyanate = {
	"methyl_isocyanate"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_methyl_isocyanate}
};


static const IdealData ideal_data_3_methylhexane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-7.05, 0}
			,{0.6837, 1}
			,{-3.73E-04, 2}
			,{7.83E-08, 3}
		}
	}}
};

static const CubicData cubic_data_3_methylhexane = {
	.M = 100.205
	,.T_c = 535.3
	,.p_c = (28.1 * 1e5)
	,.rho_c = (1000 * 100.205 / 404.0)
	,.T_t = 0
	,.omega = 0.323
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-192400 / 100.205), (4600 / 100.205)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_3_methylhexane
};

const EosData eos_rpp_3_methylhexane = {
	"3_methylhexane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_3_methylhexane}
};


static const IdealData ideal_data_mercury = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{20.80, 0}
			,{0, 1}
			,{0.00E+00, 2}
			,{0.00E+00, 3}
		}
	}}
};

static const CubicData cubic_data_mercury = {
	.M = 200.610
	,.T_c = 1765.0
	,.p_c = (1510.0 * 1e5)
	,.rho_c = (1000 * 200.610 / 42.7)
	,.T_f = 234.3
	,.omega = -0.167
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (61340 / 200.610), (31860 / 200.610)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_mercury
};

const EosData eos_rpp_mercury = {
	"mercury"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_mercury}
};


static const IdealData ideal_data_dibutyl_amine = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{9.76, 0}
			,{0.8081, 1}
			,{-4.39E-04, 2}
			,{9.25E-08, 3}
		}
	}}
};

static const CubicData cubic_data_dibutyl_amine = {
	.M = 129.247
	,.T_c = 607.5
	,.p_c = (26.4 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.580
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, NAN, NAN}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_dibutyl_amine
};

const EosData eos_rpp_dibutyl_amine = {
	"dibutyl_amine"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_dibutyl_amine}
};


static const IdealData ideal_data_m_toluidine = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-15.99, 0}
			,{0.5681, 1}
			,{-3.03E-04, 2}
			,{4.64E-08, 3}
		}
	}}
};

static const CubicData cubic_data_m_toluidine = {
	.M = 107.156
	,.T_c = 709.0
	,.p_c = (41.5 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.410
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, NAN, NAN}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_m_toluidine
};

const EosData eos_rpp_m_toluidine = {
	"m_toluidine"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_m_toluidine}
};


static const IdealData ideal_data_1_2_dibromoethane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{25.00, 0}
			,{0.2517, 1}
			,{-1.83E-04, 2}
			,{5.65E-08, 3}
		}
	}}
};

static const CubicData cubic_data_1_2_dibromoethane = {
	.M = 187.862
	,.T_c = 646.0
	,.p_c = (53.5 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.795
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-38940 / 187.862), (-10600 / 187.862)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_1_2_dibromoethane
};

const EosData eos_rpp_1_2_dibromoethane = {
	"1_2_dibromoethane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_1_2_dibromoethane}
};


static const IdealData ideal_data_methyl_acrylate = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{15.16, 0}
			,{0.2796, 1}
			,{-8.81E-05, 2}
			,{-1.66E-08, 3}
		}
	}}
};

static const CubicData cubic_data_methyl_acrylate = {
	.M = 86.091
	,.T_c = 536.0
	,.p_c = (43.0 * 1e5)
	,.rho_c = (1000 * 86.091 / 265.0)
	,.T_t = 0
	,.omega = 0.350
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, NAN, NAN}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_methyl_acrylate
};

const EosData eos_rpp_methyl_acrylate = {
	"methyl_acrylate"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_methyl_acrylate}
};


static const IdealData ideal_data_ethyl_chloride = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-0.55, 0}
			,{0.2606, 1}
			,{-1.84E-04, 2}
			,{5.55E-08, 3}
		}
	}}
};

static const CubicData cubic_data_ethyl_chloride = {
	.M = 64.515
	,.T_c = 460.4
	,.p_c = (52.7 * 1e5)
	,.rho_c = (1000 * 64.515 / 199.0)
	,.T_t = 0
	,.omega = 0.191
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-111800 / 64.515), (-60040 / 64.515)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_ethyl_chloride
};

const EosData eos_rpp_ethyl_chloride = {
	"ethyl_chloride"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_ethyl_chloride}
};


static const IdealData ideal_data_methylcyclopentane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-50.11, 0}
			,{0.6381, 1}
			,{-3.64E-04, 2}
			,{8.01E-08, 3}
		}
	}}
};

static const CubicData cubic_data_methylcyclopentane = {
	.M = 84.162
	,.T_c = 532.7
	,.p_c = (37.8 * 1e5)
	,.rho_c = (1000 * 84.162 / 319.0)
	,.T_t = 0
	,.omega = 0.231
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-106800 / 84.162), (35800 / 84.162)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_methylcyclopentane
};

const EosData eos_rpp_methylcyclopentane = {
	"methylcyclopentane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_methylcyclopentane}
};


static const IdealData ideal_data_deuterium_oxide = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{31.82, 0}
			,{0.003045, 1}
			,{2.03E-05, 2}
			,{-9.74E-09, 3}
		}
	}}
};

static const CubicData cubic_data_deuterium_oxide = {
	.M = 20.031
	,.T_c = 644.0
	,.p_c = (216.6 * 1e5)
	,.rho_c = (1000 * 20.031 / 56.6)
	,.T_t = 0
	,.omega = 0.351
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-249400 / 20.031), (-234800 / 20.031)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_deuterium_oxide
};

const EosData eos_rpp_deuterium_oxide = {
	"deuterium_oxide"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_deuterium_oxide}
};


static const IdealData ideal_data_ethyl_mercaptan = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{14.92, 0}
			,{0.2351, 1}
			,{-1.36E-04, 2}
			,{3.16E-08, 3}
		}
	}}
};

static const CubicData cubic_data_ethyl_mercaptan = {
	.M = 62.134
	,.T_c = 499.0
	,.p_c = (54.9 * 1e5)
	,.rho_c = (1000 * 62.134 / 207.0)
	,.T_t = 0
	,.omega = 0.191
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-46140 / 62.134), (-4670 / 62.134)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_ethyl_mercaptan
};

const EosData eos_rpp_ethyl_mercaptan = {
	"ethyl_mercaptan"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_ethyl_mercaptan}
};


static const IdealData ideal_data_tetrahydrofuran = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{19.10, 0}
			,{0.5162, 1}
			,{-4.13E-04, 2}
			,{1.45E-07, 3}
		}
	}}
};

static const CubicData cubic_data_tetrahydrofuran = {
	.M = 72.107
	,.T_c = 540.1
	,.p_c = (51.9 * 1e5)
	,.rho_c = (1000 * 72.107 / 224.0)
	,.T_t = 0
	,.omega = 0.217
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-184300 / 72.107), NAN}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_tetrahydrofuran
};

const EosData eos_rpp_tetrahydrofuran = {
	"tetrahydrofuran"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_tetrahydrofuran}
};


static const IdealData ideal_data_silane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{11.18, 0}
			,{0.122, 1}
			,{-5.55E-05, 2}
			,{6.84E-09, 3}
		}
	}}
};

static const CubicData cubic_data_silane = {
	.M = 32.122
	,.T_c = 269.7
	,.p_c = (48.4 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.068
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (32660 / 32.122), (55180 / 32.122)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_silane
};

const EosData eos_rpp_silane = {
	"silane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_silane}
};


static const IdealData ideal_data_formaldehyde = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{23.48, 0}
			,{0.03157, 1}
			,{2.99E-05, 2}
			,{-2.30E-08, 3}
		}
	}}
};

static const CubicData cubic_data_formaldehyde = {
	.M = 30.026
	,.T_c = 408.0
	,.p_c = (65.9 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.253
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-116000 / 30.026), (-110000 / 30.026)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_formaldehyde
};

const EosData eos_rpp_formaldehyde = {
	"formaldehyde"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_formaldehyde}
};


static const IdealData ideal_data_1_pentanol = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{3.87, 0}
			,{0.5045, 1}
			,{-2.64E-04, 2}
			,{5.12E-08, 3}
		}
	}}
};

static const CubicData cubic_data_1_pentanol = {
	.M = 88.150
	,.T_c = 588.2
	,.p_c = (39.1 * 1e5)
	,.rho_c = (1000 * 88.150 / 326.0)
	,.T_t = 0
	,.omega = 0.579
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-298900 / 88.150), (-146100 / 88.150)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_1_pentanol
};

const EosData eos_rpp_1_pentanol = {
	"1_pentanol"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_1_pentanol}
};


static const IdealData ideal_data_butene_1 = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-2.994, 0}
			,{3.532e-1, 1}
			,{-1.990e-4, 2}
			,{4.463e-8, 3}
		}
	}}
};

static const CubicData cubic_data_butene_1 = {
	.M = 56.108
	,.T_c = 419.6
	,.p_c = (40.2 * 1e5)
	,.rho_c = (1000 * 56.108 / 240)
	,.T_t = 0
	,.omega = 0.191
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-37.5e+3 / 56.108), (7.134e+4 / 56.108)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_butene_1
};

const EosData eos_rpp_butene_1 = {
	"butene_1"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_butene_1}
};


static const IdealData ideal_data_1_dodecene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-6.54, 0}
			,{1.098, 1}
			,{-6.16E-04, 2}
			,{1.34E-07, 3}
		}
	}}
};

static const CubicData cubic_data_1_dodecene = {
	.M = 168.324
	,.T_c = 657.0
	,.p_c = (18.5 * 1e5)
	,.rho_c = -1
	,.T_min = 360
	,.omega = 0.558
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-165500 / 168.324), (138000 / 168.324)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_1_dodecene
};

const EosData eos_rpp_1_dodecene = {
	"1_dodecene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_1_dodecene}
};


static const IdealData ideal_data_hydrogen_equilib = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{27.14, 0}
			,{0.009274, 1}
			,{-1.38E-05, 2}
			,{7.65E-09, 3}
		}
	}}
};

static const CubicData cubic_data_hydrogen_equilib = {
	.M = 2.016
	,.T_c = 33.0
	,.p_c = (12.9 * 1e5)
	,.rho_c = (1000 * 2.016 / 64.3)
	,.T_t = 0
	,.omega = -0.216
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (0 / 2.016), (0 / 2.016)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_hydrogen_equilib
};

const EosData eos_rpp_hydrogen_equilib = {
	"hydrogen_equilib"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_hydrogen_equilib}
};


static const IdealData ideal_data_n_hexane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-4.413, 0}
			,{5.820e-1, 1}
			,{-3.119e-4, 2}
			,{6.494e-8, 3}
		}
	}}
};

static const CubicData cubic_data_n_hexane = {
	.M = 86.178
	,.T_c = 507.5
	,.p_c = (30.1 * 1e5)
	,.rho_c = (1000 * 86.178 / 370)
	,.T_t = 0
	,.omega = 0.299
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-1.673e+5 / 86.178), (-1.670e+2 / 86.178)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_n_hexane
};

const EosData eos_rpp_n_hexane = {
	"n_hexane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_n_hexane}
};


static const IdealData ideal_data_2_methylnaphthalene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-56.52, 0}
			,{0.8997, 1}
			,{-6.47E-04, 2}
			,{1.84E-07, 3}
		}
	}}
};

static const CubicData cubic_data_2_methylnaphthalene = {
	.M = 142.201
	,.T_c = 761.0
	,.p_c = (35.0 * 1e5)
	,.rho_c = (1000 * 142.201 / 462.0)
	,.T_t = 0
	,.omega = 0.382
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (116200 / 142.201), (216300 / 142.201)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_2_methylnaphthalene
};

const EosData eos_rpp_2_methylnaphthalene = {
	"2_methylnaphthalene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_2_methylnaphthalene}
};


static const IdealData ideal_data_3_methyl_pentane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-2.39, 0}
			,{0.569, 1}
			,{-2.87E-04, 2}
			,{5.03E-08, 3}
		}
	}}
};

static const CubicData cubic_data_3_methyl_pentane = {
	.M = 86.178
	,.T_c = 504.5
	,.p_c = (31.2 * 1e5)
	,.rho_c = (1000 * 86.178 / 367.0)
	,.T_t = 0
	,.omega = 0.272
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-171700 / 86.178), (-2140 / 86.178)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_3_methyl_pentane
};

const EosData eos_rpp_3_methyl_pentane = {
	"3_methyl_pentane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_3_methyl_pentane}
};


static const IdealData ideal_data_2_3_dimethylhexane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-9.22, 0}
			,{0.7859, 1}
			,{-4.40E-04, 2}
			,{9.70E-08, 3}
		}
	}}
};

static const CubicData cubic_data_2_3_dimethylhexane = {
	.M = 114.232
	,.T_c = 563.5
	,.p_c = (26.3 * 1e5)
	,.rho_c = (1000 * 114.232 / 468.0)
	,.T_t = 0
	,.omega = 0.346
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-214100 / 114.232), (17710 / 114.232)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_2_3_dimethylhexane
};

const EosData eos_rpp_2_3_dimethylhexane = {
	"2_3_dimethylhexane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_2_3_dimethylhexane}
};


static const IdealData ideal_data_acetylene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{26.82, 0}
			,{0.07578, 1}
			,{-5.01E-05, 2}
			,{1.41E-08, 3}
		}
	}}
};

static const CubicData cubic_data_acetylene = {
	.M = 26.038
	,.T_c = 308.3
	,.p_c = (61.4 * 1e5)
	,.rho_c = (1000 * 26.038 / 112.7)
	,.T_t = 0
	,.omega = 0.190
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (226900 / 26.038), (209300 / 26.038)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_acetylene
};

const EosData eos_rpp_acetylene = {
	"acetylene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_acetylene}
};


static const IdealData ideal_data_chloro_benzene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-33.89, 0}
			,{0.5631, 1}
			,{-4.522e-04, 2}
			,{1.426e-07, 3}
		}
	}}
};

static const CubicData cubic_data_chloro_benzene = {
	.M = 112.559
	,.T_c = 632.4
	,.p_c = (45.2 * 1e5)
	,.rho_c = (1000 * 112.559 / 308.0)
	,.T_t = 0
	,.omega = 0.249
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (5.187e04 / 112.559), (9.923e04 / 112.559)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_chloro_benzene
};

const EosData eos_rpp_chloro_benzene = {
	"chloro_benzene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_chloro_benzene}
};


static const IdealData ideal_data_chlorodifluoromethane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{17.30, 0}
			,{0.1618, 1}
			,{-1.17E-04, 2}
			,{3.06E-08, 3}
		}
	}}
};

static const CubicData cubic_data_chlorodifluoromethane = {
	.M = 86.469
	,.T_c = 369.3
	,.p_c = (49.7 * 1e5)
	,.rho_c = (1000 * 86.469 / 165.6)
	,.T_t = 0
	,.omega = 0.221
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-502000 / 86.469), (-470900 / 86.469)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_chlorodifluoromethane
};

const EosData eos_rpp_chlorodifluoromethane = {
	"chlorodifluoromethane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_chlorodifluoromethane}
};


static const IdealData ideal_data_2_4_dimethylhexane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-9.22, 0}
			,{0.7859, 1}
			,{-4.40E-04, 2}
			,{9.70E-08, 3}
		}
	}}
};

static const CubicData cubic_data_2_4_dimethylhexane = {
	.M = 114.232
	,.T_c = 553.5
	,.p_c = (25.6 * 1e5)
	,.rho_c = (1000 * 114.232 / 472.0)
	,.T_t = 0
	,.omega = 0.343
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-219600 / 114.232), (11720 / 114.232)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_2_4_dimethylhexane
};

const EosData eos_rpp_2_4_dimethylhexane = {
	"2_4_dimethylhexane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_2_4_dimethylhexane}
};


static const IdealData ideal_data_ethyl_propionate = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{19.85, 0}
			,{0.4034, 1}
			,{-1.44E-04, 2}
			,{-7.39E-09, 3}
		}
	}}
};

static const CubicData cubic_data_ethyl_propionate = {
	.M = 102.134
	,.T_c = 546.0
	,.p_c = (33.6 * 1e5)
	,.rho_c = (1000 * 102.134 / 345.0)
	,.T_t = 0
	,.omega = 0.391
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-470200 / 102.134), (-323700 / 102.134)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_ethyl_propionate
};

const EosData eos_rpp_ethyl_propionate = {
	"ethyl_propionate"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_ethyl_propionate}
};


static const IdealData ideal_data_3_3_5_trimethylheptane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-70.37, 0}
			,{1.232, 1}
			,{-8.65E-04, 2}
			,{2.46E-07, 3}
		}
	}}
};

static const CubicData cubic_data_3_3_5_trimethylheptane = {
	.M = 142.286
	,.T_c = 609.7
	,.p_c = (23.2 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.382
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-258700 / 142.286), (33580 / 142.286)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_3_3_5_trimethylheptane
};

const EosData eos_rpp_3_3_5_trimethylheptane = {
	"3_3_5_trimethylheptane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_3_3_5_trimethylheptane}
};


static const IdealData ideal_data_i_pentane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-9.525, 0}
			,{5.066e-1, 1}
			,{-2.729e-4, 2}
			,{5.723e-8, 3}
		}
	}}
};

static const CubicData cubic_data_i_pentane = {
	.M = 72.151
	,.T_c = 460.4
	,.p_c = (33.9 * 1e5)
	,.rho_c = (1000 * 72.151 / 306)
	,.T_t = 0
	,.omega = 0.227
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-1.546e+5 / 72.151), (-1.482e+4 / 72.151)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_i_pentane
};

const EosData eos_rpp_i_pentane = {
	"i_pentane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_i_pentane}
};


static const IdealData ideal_data_trifluoroacetonitrile = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{22.13, 0}
			,{0.2519, 1}
			,{-2.36E-04, 2}
			,{8.21E-08, 3}
		}
	}}
};

static const CubicData cubic_data_trifluoroacetonitrile = {
	.M = 95.023
	,.T_c = 311.1
	,.p_c = (36.2 * 1e5)
	,.rho_c = (1000 * 95.023 / 202.0)
	,.T_t = 0
	,.omega = 0.267
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-49570 / 95.023), (-46220 / 95.023)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_trifluoroacetonitrile
};

const EosData eos_rpp_trifluoroacetonitrile = {
	"trifluoroacetonitrile"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_trifluoroacetonitrile}
};


static const IdealData ideal_data_methyl_benzoate = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-21.21, 0}
			,{0.5501, 1}
			,{-1.80E-04, 2}
			,{4.43E-08, 3}
		}
	}}
};

static const CubicData cubic_data_methyl_benzoate = {
	.M = 136.151
	,.T_c = 692.0
	,.p_c = (36.4 * 1e5)
	,.rho_c = (1000 * 136.151 / 396.0)
	,.T_t = 0
	,.omega = 0.430
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-254000 / 136.151), NAN}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_methyl_benzoate
};

const EosData eos_rpp_methyl_benzoate = {
	"methyl_benzoate"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_methyl_benzoate}
};


static const IdealData ideal_data_trans_difluorodiazine = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{22.54, 0}
			,{0.1377, 1}
			,{-1.26E-04, 2}
			,{4.23E-08, 3}
		}
	}}
};

static const CubicData cubic_data_trans_difluorodiazine = {
	.M = 66.010
	,.T_c = 260.0
	,.p_c = (55.7 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.217
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (81220 / 66.010), (120500 / 66.010)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_trans_difluorodiazine
};

const EosData eos_rpp_trans_difluorodiazine = {
	"trans_difluorodiazine"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_trans_difluorodiazine}
};


static const IdealData ideal_data_perfluoroethene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{29.01, 0}
			,{0.2277, 1}
			,{-2.04E-04, 2}
			,{6.78E-08, 3}
		}
	}}
};

static const CubicData cubic_data_perfluoroethene = {
	.M = 100.016
	,.T_c = 306.5
	,.p_c = (39.4 * 1e5)
	,.rho_c = (1000 * 100.016 / 172.0)
	,.T_t = 0
	,.omega = 0.233
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-65900 / 100.016), (-624100 / 100.016)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_perfluoroethene
};

const EosData eos_rpp_perfluoroethene = {
	"perfluoroethene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_perfluoroethene}
};


static const IdealData ideal_data_2_chlorobutane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-3.43, 0}
			,{0.4559, 1}
			,{-2.98E-04, 2}
			,{8.26E-08, 3}
		}
	}}
};

static const CubicData cubic_data_2_chlorobutane = {
	.M = 92.569
	,.T_c = 520.6
	,.p_c = (39.5 * 1e5)
	,.rho_c = (1000 * 92.569 / 305.0)
	,.T_t = 0
	,.omega = 0.300
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-161600 / 92.569), (-53510 / 92.569)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_2_chlorobutane
};

const EosData eos_rpp_2_chlorobutane = {
	"2_chlorobutane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_2_chlorobutane}
};


static const IdealData ideal_data_diethyl_sulfide = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{13.59, 0}
			,{0.3959, 1}
			,{-1.78E-04, 2}
			,{2.65E-08, 3}
		}
	}}
};

static const CubicData cubic_data_diethyl_sulfide = {
	.M = 90.184
	,.T_c = 557.0
	,.p_c = (39.6 * 1e5)
	,.rho_c = (1000 * 90.184 / 318.0)
	,.T_t = 0
	,.omega = 0.292
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-83530 / 90.184), (17800 / 90.184)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_diethyl_sulfide
};

const EosData eos_rpp_diethyl_sulfide = {
	"diethyl_sulfide"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_diethyl_sulfide}
};


static const IdealData ideal_data_cyclopentane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-53.62, 0}
			,{0.5426, 1}
			,{-3.03E-04, 2}
			,{6.49E-08, 3}
		}
	}}
};

static const CubicData cubic_data_cyclopentane = {
	.M = 70.135
	,.T_c = 511.7
	,.p_c = (45.1 * 1e5)
	,.rho_c = (1000 * 70.135 / 260.0)
	,.T_t = 0
	,.omega = 0.196
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-77290 / 70.135), (38600 / 70.135)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_cyclopentane
};

const EosData eos_rpp_cyclopentane = {
	"cyclopentane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_cyclopentane}
};


static const IdealData ideal_data_1_2_dimethylcyclohexane_cis = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-68.37, 0}
			,{0.8972, 1}
			,{-5.14E-04, 2}
			,{1.10E-07, 3}
		}
	}}
};

static const CubicData cubic_data_1_2_dimethylcyclohexane_cis = {
	.M = 112.216
	,.T_c = 606.0
	,.p_c = (29.6 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.236
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-172300 / 112.216), (41240 / 112.216)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_1_2_dimethylcyclohexane_cis
};

const EosData eos_rpp_1_2_dimethylcyclohexane_cis = {
	"1_2_dimethylcyclohexane_cis"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_1_2_dimethylcyclohexane_cis}
};


static const IdealData ideal_data_furan = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-35.53, 0}
			,{0.4321, 1}
			,{-3.46E-04, 2}
			,{1.07E-07, 3}
		}
	}}
};

static const CubicData cubic_data_furan = {
	.M = 68.075
	,.T_c = 490.2
	,.p_c = (55.0 * 1e5)
	,.rho_c = (1000 * 68.075 / 218.0)
	,.T_t = 0
	,.omega = 0.209
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-34700 / 68.075), (879 / 68.075)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_furan
};

const EosData eos_rpp_furan = {
	"furan"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_furan}
};


static const IdealData ideal_data_acetaldehyde = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{7.72, 0}
			,{0.1823, 1}
			,{-1.01E-04, 2}
			,{2.38E-08, 3}
		}
	}}
};

static const CubicData cubic_data_acetaldehyde = {
	.M = 44.054
	,.T_c = 461.0
	,.p_c = (55.7 * 1e5)
	,.rho_c = (1000 * 44.054 / 154.0)
	,.T_t = 0
	,.omega = 0.303
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-164400 / 44.054), (-133400 / 44.054)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_acetaldehyde
};

const EosData eos_rpp_acetaldehyde = {
	"acetaldehyde"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_acetaldehyde}
};


static const IdealData ideal_data_hydrogen_cyanide = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{21.86, 0}
			,{0.06062, 1}
			,{-4.96E-05, 2}
			,{1.82E-08, 3}
		}
	}}
};

static const CubicData cubic_data_hydrogen_cyanide = {
	.M = 27.026
	,.T_c = 456.7
	,.p_c = (53.9 * 1e5)
	,.rho_c = (1000 * 27.026 / 138.8)
	,.T_t = 0
	,.omega = 0.388
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (130600 / 27.026), (120200 / 27.026)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_hydrogen_cyanide
};

const EosData eos_rpp_hydrogen_cyanide = {
	"hydrogen_cyanide"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_hydrogen_cyanide}
};


static const IdealData ideal_data_4_methylheptane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-9.22, 0}
			,{0.7859, 1}
			,{-4.40E-04, 2}
			,{9.70E-08, 3}
		}
	}}
};

static const CubicData cubic_data_4_methylheptane = {
	.M = 114.232
	,.T_c = 561.7
	,.p_c = (25.4 * 1e5)
	,.rho_c = (1000 * 114.232 / 476.0)
	,.T_t = 0
	,.omega = 0.371
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-212200 / 114.232), (16750 / 114.232)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_4_methylheptane
};

const EosData eos_rpp_4_methylheptane = {
	"4_methylheptane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_4_methylheptane}
};


static const IdealData ideal_data_morpholine = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-42.80, 0}
			,{0.5388, 1}
			,{-2.67E-04, 2}
			,{4.20E-08, 3}
		}
	}}
};

static const CubicData cubic_data_morpholine = {
	.M = 87.122
	,.T_c = 618.0
	,.p_c = (54.7 * 1e5)
	,.rho_c = (1000 * 87.122 / 253.0)
	,.T_t = 0
	,.omega = 0.370
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, NAN, NAN}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_morpholine
};

const EosData eos_rpp_morpholine = {
	"morpholine"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_morpholine}
};


static const IdealData ideal_data_p_xylene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-25.09, 0}
			,{0.6042, 1}
			,{-3.37E-04, 2}
			,{6.82E-08, 3}
		}
	}}
};

static const CubicData cubic_data_p_xylene = {
	.M = 106.168
	,.T_c = 616.2
	,.p_c = (35.1 * 1e5)
	,.rho_c = (1000 * 106.168 / 379.0)
	,.T_t = 0
	,.omega = 0.321
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (17960 / 106.168), (121200 / 106.168)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_p_xylene
};

const EosData eos_rpp_p_xylene = {
	"p_xylene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_p_xylene}
};


static const IdealData ideal_data_2_3_dimethyl_butane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-14.61, 0}
			,{0.615, 1}
			,{-3.38E-04, 2}
			,{6.82E-08, 3}
		}
	}}
};

static const CubicData cubic_data_2_3_dimethyl_butane = {
	.M = 86.178
	,.T_c = 500.0
	,.p_c = (31.3 * 1e5)
	,.rho_c = (1000 * 86.178 / 358.0)
	,.T_t = 0
	,.omega = 0.247
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-177900 / 86.178), (-4100 / 86.178)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_2_3_dimethyl_butane
};

const EosData eos_rpp_2_3_dimethyl_butane = {
	"2_3_dimethyl_butane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_2_3_dimethyl_butane}
};


static const IdealData ideal_data_methyl_n_propyl_ketone = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{1.15, 0}
			,{0.4802, 1}
			,{-2.82E-04, 2}
			,{6.66E-08, 3}
		}
	}}
};

static const CubicData cubic_data_methyl_n_propyl_ketone = {
	.M = 86.134
	,.T_c = 561.1
	,.p_c = (36.9 * 1e5)
	,.rho_c = (1000 * 86.134 / 301.0)
	,.T_t = 0
	,.omega = 0.346
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-258800 / 86.134), (-137200 / 86.134)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_methyl_n_propyl_ketone
};

const EosData eos_rpp_methyl_n_propyl_ketone = {
	"methyl_n_propyl_ketone"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_methyl_n_propyl_ketone}
};


static const IdealData ideal_data_isopropyl_amine = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-7.49, 0}
			,{0.4175, 1}
			,{-2.83E-04, 2}
			,{8.35E-08, 3}
		}
	}}
};

static const CubicData cubic_data_isopropyl_amine = {
	.M = 59.112
	,.T_c = 471.8
	,.p_c = (45.4 * 1e5)
	,.rho_c = (1000 * 59.112 / 221.0)
	,.T_t = 0
	,.omega = 0.291
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-83820 / 59.112), NAN}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_isopropyl_amine
};

const EosData eos_rpp_isopropyl_amine = {
	"isopropyl_amine"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_isopropyl_amine}
};


static const IdealData ideal_data_dodecane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-9.328, 0}
			,{1.149, 1}
			,{-6.347e-4, 2}
			,{1.359e-7, 3}
		}
	}}
};

static const CubicData cubic_data_dodecane = {
	.M = 170.34
	,.T_c = 658.2
	,.p_c = (18.2 * 1e5)
	,.rho_c = (1000 * 170.34 / 713.0)
	,.T_min = 360
	,.omega = 0.575
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-2.911e5 / 170.34), (5.007e4 / 170.34)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_dodecane
};

const EosData eos_rpp_dodecane = {
	"dodecane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_dodecane}
};


static const IdealData ideal_data_1_2_dimethylcyclopentane_cis = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-55.64, 0}
			,{0.7616, 1}
			,{-4.48E-04, 2}
			,{1.01E-07, 3}
		}
	}}
};

static const CubicData cubic_data_1_2_dimethylcyclopentane_cis = {
	.M = 98.189
	,.T_c = 564.8
	,.p_c = (34.4 * 1e5)
	,.rho_c = (1000 * 98.189 / 368.0)
	,.T_t = 0
	,.omega = 0.269
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (129600 / 98.189), (45760 / 98.189)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_1_2_dimethylcyclopentane_cis
};

const EosData eos_rpp_1_2_dimethylcyclopentane_cis = {
	"1_2_dimethylcyclopentane_cis"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_1_2_dimethylcyclopentane_cis}
};


static const IdealData ideal_data_chlorine_pentafluoride = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{30.98, 0}
			,{0.3203, 1}
			,{-3.69E-04, 2}
			,{1.46E-07, 3}
		}
	}}
};

static const CubicData cubic_data_chlorine_pentafluoride = {
	.M = 130.433
	,.T_c = 416.0
	,.p_c = (52.7 * 1e5)
	,.rho_c = (1000 * 130.433 / 233.0)
	,.T_t = 0
	,.omega = 0.216
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-238600 / 130.433), (-146900 / 130.433)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_chlorine_pentafluoride
};

const EosData eos_rpp_chlorine_pentafluoride = {
	"chlorine_pentafluoride"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_chlorine_pentafluoride}
};


static const IdealData ideal_data_silicon_tetrafluoride = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{26.78, 0}
			,{0.2157, 1}
			,{-2.20E-04, 2}
			,{8.03E-08, 3}
		}
	}}
};

static const CubicData cubic_data_silicon_tetrafluoride = {
	.M = 104.090
	,.T_c = 259.0
	,.p_c = (37.2 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.753
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-1616000 / 104.090), (-1574000 / 104.090)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_silicon_tetrafluoride
};

const EosData eos_rpp_silicon_tetrafluoride = {
	"silicon_tetrafluoride"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_silicon_tetrafluoride}
};


static const IdealData ideal_data_1_2_butadiene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{11.20, 0}
			,{0.2724, 1}
			,{-1.47E-04, 2}
			,{3.09E-08, 3}
		}
	}}
};

static const CubicData cubic_data_1_2_butadiene = {
	.M = 54.092
	,.T_c = 443.7
	,.p_c = (44.9 * 1e5)
	,.rho_c = (1000 * 54.092 / 219.0)
	,.T_t = 0
	,.omega = 0.255
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (162300 / 54.092), (198600 / 54.092)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_1_2_butadiene
};

const EosData eos_rpp_1_2_butadiene = {
	"1_2_butadiene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_1_2_butadiene}
};


static const IdealData ideal_data_acrylonitrile = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{10.69, 0}
			,{0.2208, 1}
			,{-1.57E-04, 2}
			,{4.60E-08, 3}
		}
	}}
};

static const CubicData cubic_data_acrylonitrile = {
	.M = 53.064
	,.T_c = 536.0
	,.p_c = (45.6 * 1e5)
	,.rho_c = (1000 * 53.064 / 210.0)
	,.T_t = 0
	,.omega = 0.350
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (185100 / 53.064), (195400 / 53.064)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_acrylonitrile
};

const EosData eos_rpp_acrylonitrile = {
	"acrylonitrile"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_acrylonitrile}
};


static const IdealData ideal_data_3_3_dimethyl_1_butene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-12.56, 0}
			,{0.5485, 1}
			,{-2.92E-04, 2}
			,{5.21E-08, 3}
		}
	}}
};

static const CubicData cubic_data_3_3_dimethyl_1_butene = {
	.M = 84.162
	,.T_c = 490.0
	,.p_c = (32.5 * 1e5)
	,.rho_c = (1000 * 84.162 / 340.0)
	,.T_t = 0
	,.omega = 0.121
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-61550 / 84.162), (98220 / 84.162)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_3_3_dimethyl_1_butene
};

const EosData eos_rpp_3_3_dimethyl_1_butene = {
	"3_3_dimethyl_1_butene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_3_3_dimethyl_1_butene}
};


static const IdealData ideal_data_cyclobutane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-50.25, 0}
			,{0.5024, 1}
			,{-3.56E-04, 2}
			,{1.05E-07, 3}
		}
	}}
};

static const CubicData cubic_data_cyclobutane = {
	.M = 56.108
	,.T_c = 460.0
	,.p_c = (49.9 * 1e5)
	,.rho_c = (1000 * 56.108 / 210.0)
	,.T_t = 0
	,.omega = 0.181
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (26670 / 56.108), (110100 / 56.108)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_cyclobutane
};

const EosData eos_rpp_cyclobutane = {
	"cyclobutane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_cyclobutane}
};


static const IdealData ideal_data_propionitrile = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{15.40, 0}
			,{0.2245, 1}
			,{-1.10E-04, 2}
			,{1.95E-08, 3}
		}
	}}
};

static const CubicData cubic_data_propionitrile = {
	.M = 55.080
	,.T_c = 564.4
	,.p_c = (41.8 * 1e5)
	,.rho_c = (1000 * 55.080 / 229.0)
	,.T_t = 0
	,.omega = 0.313
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (50660 / 55.080), (96210 / 55.080)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_propionitrile
};

const EosData eos_rpp_propionitrile = {
	"propionitrile"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_propionitrile}
};


static const IdealData ideal_data_carbon_monoxide = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{30.87, 0}
			,{-0.01285, 1}
			,{2.79E-05, 2}
			,{-1.27E-08, 3}
		}
	}}
};

static const CubicData cubic_data_carbon_monoxide = {
	.M = 28.010
	,.T_c = 132.9
	,.p_c = (35.0 * 1e5)
	,.rho_c = (1000 * 28.010 / 93.2)
	,.T_t = 0
	,.omega = 0.066
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-110600 / 28.010), (-137400 / 28.010)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_carbon_monoxide
};

const EosData eos_rpp_carbon_monoxide = {
	"carbon_monoxide"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_carbon_monoxide}
};


static const IdealData ideal_data_boron_trifluoride = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{18.58, 0}
			,{0.1399, 1}
			,{-1.22E-04, 2}
			,{3.92E-08, 3}
		}
	}}
};

static const CubicData cubic_data_boron_trifluoride = {
	.M = 67.805
	,.T_c = 260.8
	,.p_c = (49.9 * 1e5)
	,.rho_c = (1000 * 67.805 / 114.7)
	,.T_t = 0
	,.omega = 0.393
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-1136000 / 67.805), (-1120000 / 67.805)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_boron_trifluoride
};

const EosData eos_rpp_boron_trifluoride = {
	"boron_trifluoride"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_boron_trifluoride}
};


static const IdealData ideal_data_ethyl_amine = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{3.69, 0}
			,{0.2752, 1}
			,{-1.58E-04, 2}
			,{3.81E-08, 3}
		}
	}}
};

static const CubicData cubic_data_ethyl_amine = {
	.M = 45.085
	,.T_c = 456.4
	,.p_c = (56.4 * 1e5)
	,.rho_c = (1000 * 45.085 / 182.0)
	,.T_t = 0
	,.omega = 0.289
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-46050 / 45.085), (33700 / 45.085)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_ethyl_amine
};

const EosData eos_rpp_ethyl_amine = {
	"ethyl_amine"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_ethyl_amine}
};


static const IdealData ideal_data_1_2_propylene_oxide = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-8.46, 0}
			,{0.3257, 1}
			,{-1.99E-04, 2}
			,{4.82E-08, 3}
		}
	}}
};

static const CubicData cubic_data_1_2_propylene_oxide = {
	.M = 58.080
	,.T_c = 482.2
	,.p_c = (49.2 * 1e5)
	,.rho_c = (1000 * 58.080 / 186.0)
	,.T_t = 0
	,.omega = 0.269
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-92820 / 58.080), (-25800 / 58.080)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_1_2_propylene_oxide
};

const EosData eos_rpp_1_2_propylene_oxide = {
	"1_2_propylene_oxide"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_1_2_propylene_oxide}
};


static const IdealData ideal_data_1_4_diethylbenzene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-37.42, 0}
			,{0.8671, 1}
			,{-5.56E-04, 2}
			,{1.41E-07, 3}
		}
	}}
};

static const CubicData cubic_data_1_4_diethylbenzene = {
	.M = 134.222
	,.T_c = 657.9
	,.p_c = (28.0 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.404
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-22270 / 134.222), (138000 / 134.222)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_1_4_diethylbenzene
};

const EosData eos_rpp_1_4_diethylbenzene = {
	"1_4_diethylbenzene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_1_4_diethylbenzene}
};


static const IdealData ideal_data_phosgene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{28.09, 0}
			,{0.1361, 1}
			,{-1.37E-04, 2}
			,{5.07E-08, 3}
		}
	}}
};

static const CubicData cubic_data_phosgene = {
	.M = 98.916
	,.T_c = 455.0
	,.p_c = (56.7 * 1e5)
	,.rho_c = (1000 * 98.916 / 190.1)
	,.T_t = 0
	,.omega = 0.205
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-221100 / 98.916), (-206900 / 98.916)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_phosgene
};

const EosData eos_rpp_phosgene = {
	"phosgene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_phosgene}
};


static const IdealData ideal_data_trichloroethene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{30.17, 0}
			,{0.2287, 1}
			,{-2.23E-04, 2}
			,{8.24E-08, 3}
		}
	}}
};

static const CubicData cubic_data_trichloroethene = {
	.M = 131.389
	,.T_c = 572.0
	,.p_c = (50.5 * 1e5)
	,.rho_c = (1000 * 131.389 / 256.0)
	,.T_t = 0
	,.omega = 0.213
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-5862 / 131.389), (19890 / 131.389)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_trichloroethene
};

const EosData eos_rpp_trichloroethene = {
	"trichloroethene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_trichloroethene}
};


static const IdealData ideal_data_isobutaol = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-7.71, 0}
			,{0.4689, 1}
			,{-2.88E-04, 2}
			,{7.23E-08, 3}
		}
	}}
};

static const CubicData cubic_data_isobutaol = {
	.M = 74.123
	,.T_c = 547.8
	,.p_c = (43.0 * 1e5)
	,.rho_c = (1000 * 74.123 / 273.0)
	,.T_t = 0
	,.omega = 0.592
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-283400 / 74.123), (-167400 / 74.123)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_isobutaol
};

const EosData eos_rpp_isobutaol = {
	"isobutaol"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_isobutaol}
};


static const IdealData ideal_data_cyclopropane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-35.24, 0}
			,{0.3813, 1}
			,{-2.88E-04, 2}
			,{9.04E-08, 3}
		}
	}}
};

static const CubicData cubic_data_cyclopropane = {
	.M = 42.081
	,.T_c = 397.8
	,.p_c = (54.9 * 1e5)
	,.rho_c = (1000 * 42.081 / 163.0)
	,.T_t = 0
	,.omega = 0.130
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (53340 / 42.081), (104500 / 42.081)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_cyclopropane
};

const EosData eos_rpp_cyclopropane = {
	"cyclopropane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_cyclopropane}
};


static const IdealData ideal_data_1_1_dichlorotetrafluoroetane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{40.45, 0}
			,{0.3278, 1}
			,{-2.75E-04, 2}
			,{7.82E-08, 3}
		}
	}}
};

static const CubicData cubic_data_1_1_dichlorotetrafluoroetane = {
	.M = 170.922
	,.T_c = 418.6
	,.p_c = (33.0 * 1e5)
	,.rho_c = (1000 * 170.922 / 294.2)
	,.T_t = 0
	,.omega = 0.263
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, NAN, NAN}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_1_1_dichlorotetrafluoroetane
};

const EosData eos_rpp_1_1_dichlorotetrafluoroetane = {
	"1_1_dichlorotetrafluoroetane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_1_1_dichlorotetrafluoroetane}
};


static const IdealData ideal_data_n_propanol = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{2.470, 0}
			,{3.325e-1, 1}
			,{-1.855e-4, 2}
			,{4.296e-8, 3}
		}
	}}
};

static const CubicData cubic_data_n_propanol = {
	.M = 60.096
	,.T_c = 536.7
	,.p_c = (51.7 * 1e5)
	,.rho_c = (1000 * 60.096 / 218.5)
	,.T_t = 0
	,.omega = 0.623
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-2.566e+5 / 60.096), (-1.619e+5 / 60.096)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_n_propanol
};

const EosData eos_rpp_n_propanol = {
	"n_propanol"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_n_propanol}
};


static const IdealData ideal_data_ethyl_acetate = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{7.24, 0}
			,{0.4072, 1}
			,{-2.09E-04, 2}
			,{2.86E-08, 3}
		}
	}}
};

static const CubicData cubic_data_ethyl_acetate = {
	.M = 88.107
	,.T_c = 523.2
	,.p_c = (38.3 * 1e5)
	,.rho_c = (1000 * 88.107 / 286.0)
	,.T_t = 0
	,.omega = 0.362
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-443200 / 88.107), (-327600 / 88.107)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_ethyl_acetate
};

const EosData eos_rpp_ethyl_acetate = {
	"ethyl_acetate"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_ethyl_acetate}
};


static const IdealData ideal_data_dibutyl_ether = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{6.05, 0}
			,{0.7729, 1}
			,{-4.09E-04, 2}
			,{8.09E-08, 3}
		}
	}}
};

static const CubicData cubic_data_dibutyl_ether = {
	.M = 130.231
	,.T_c = 580.0
	,.p_c = (25.3 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.502
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-334100 / 130.231), (-88590 / 130.231)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_dibutyl_ether
};

const EosData eos_rpp_dibutyl_ether = {
	"dibutyl_ether"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_dibutyl_ether}
};


static const IdealData ideal_data_3_ethylhexane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-9.22, 0}
			,{0.7859, 1}
			,{-4.40E-04, 2}
			,{9.70E-08, 3}
		}
	}}
};

static const CubicData cubic_data_3_ethylhexane = {
	.M = 114.232
	,.T_c = 565.5
	,.p_c = (26.1 * 1e5)
	,.rho_c = (1000 * 114.232 / 455.0)
	,.T_t = 0
	,.omega = 0.361
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-211000 / 114.232), (16940 / 114.232)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_3_ethylhexane
};

const EosData eos_rpp_3_ethylhexane = {
	"3_ethylhexane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_3_ethylhexane}
};


static const IdealData ideal_data_butyl_benzoate = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-17.37, 0}
			,{0.8657, 1}
			,{-4.61E-04, 2}
			,{7.25E-08, 3}
		}
	}}
};

static const CubicData cubic_data_butyl_benzoate = {
	.M = 178.232
	,.T_c = 723.0
	,.p_c = (26.0 * 1e5)
	,.rho_c = (1000 * 178.232 / 561.0)
	,.T_t = 0
	,.omega = 0.580
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, NAN, NAN}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_butyl_benzoate
};

const EosData eos_rpp_butyl_benzoate = {
	"butyl_benzoate"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_butyl_benzoate}
};


static const IdealData ideal_data_nitrogen_trifluoride = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{11.41, 0}
			,{0.1948, 1}
			,{-2.02E-04, 2}
			,{7.45E-08, 3}
		}
	}}
};

static const CubicData cubic_data_nitrogen_trifluoride = {
	.M = 71.002
	,.T_c = 234.0
	,.p_c = (45.3 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.135
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-131600 / 71.002), (-90100 / 71.002)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_nitrogen_trifluoride
};

const EosData eos_rpp_nitrogen_trifluoride = {
	"nitrogen_trifluoride"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_nitrogen_trifluoride}
};


static const IdealData ideal_data_n_propyl_amine = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{6.69, 0}
			,{0.3498, 1}
			,{-1.82E-04, 2}
			,{3.59E-08, 3}
		}
	}}
};

static const CubicData cubic_data_n_propyl_amine = {
	.M = 59.112
	,.T_c = 497.0
	,.p_c = (48.1 * 1e5)
	,.rho_c = (1000 * 59.112 / 233.0)
	,.T_t = 0
	,.omega = 0.303
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-72430 / 59.112), (39820 / 59.112)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_n_propyl_amine
};

const EosData eos_rpp_n_propyl_amine = {
	"n_propyl_amine"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_n_propyl_amine}
};


static const IdealData ideal_data_n_propylcyclopentane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-55.97, 0}
			,{0.8449, 1}
			,{-4.92E-04, 2}
			,{1.12E-07, 3}
		}
	}}
};

static const CubicData cubic_data_n_propylcyclopentane = {
	.M = 112.216
	,.T_c = 603.0
	,.p_c = (30.0 * 1e5)
	,.rho_c = (1000 * 112.216 / 425.0)
	,.T_t = 0
	,.omega = 0.335
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-148200 / 112.216), (52630 / 112.216)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_n_propylcyclopentane
};

const EosData eos_rpp_n_propylcyclopentane = {
	"n_propylcyclopentane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_n_propylcyclopentane}
};


static const IdealData ideal_data_n_butyl_acetate = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{13.62, 0}
			,{0.5489, 1}
			,{-2.28E-04, 2}
			,{7.91E-10, 3}
		}
	}}
};

static const CubicData cubic_data_n_butyl_acetate = {
	.M = 116.160
	,.T_c = 579.0
	,.p_c = (31.4 * 1e5)
	,.rho_c = (1000 * 116.160 / 400.0)
	,.T_t = 0
	,.omega = 0.417
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-486800 / 116.160), NAN}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_n_butyl_acetate
};

const EosData eos_rpp_n_butyl_acetate = {
	"n_butyl_acetate"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_n_butyl_acetate}
};


static const IdealData ideal_data_1_heptanol = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{49.07, 0}
			,{0.6778, 1}
			,{-3.45E-04, 2}
			,{6.05E-08, 3}
		}
	}}
};

static const CubicData cubic_data_1_heptanol = {
	.M = 116.204
	,.T_c = 633.0
	,.p_c = (30.4 * 1e5)
	,.rho_c = (1000 * 116.204 / 435.0)
	,.T_t = 0
	,.omega = 0.560
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-332000 / 116.204), (-121000 / 116.204)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_1_heptanol
};

const EosData eos_rpp_1_heptanol = {
	"1_heptanol"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_1_heptanol}
};


static const IdealData ideal_data_boron_trichloride = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{32.61, 0}
			,{0.139, 1}
			,{-1.46E-04, 2}
			,{5.44E-08, 3}
		}
	}}
};

static const CubicData cubic_data_boron_trichloride = {
	.M = 117.191
	,.T_c = 455.0
	,.p_c = (38.7 * 1e5)
	,.rho_c = (1000 * 117.191 / 239.5)
	,.T_t = 0
	,.omega = 0.140
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-403200 / 117.191), (-388200 / 117.191)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_boron_trichloride
};

const EosData eos_rpp_boron_trichloride = {
	"boron_trichloride"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_boron_trichloride}
};


static const IdealData ideal_data_hydrogen_iodide = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{31.16, 0}
			,{-0.01428, 1}
			,{2.97E-05, 2}
			,{-1.35E-08, 3}
		}
	}}
};

static const CubicData cubic_data_hydrogen_iodide = {
	.M = 127.912
	,.T_c = 424.0
	,.p_c = (83.1 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.049
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (26380 / 127.912), (1591 / 127.912)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_hydrogen_iodide
};

const EosData eos_rpp_hydrogen_iodide = {
	"hydrogen_iodide"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_hydrogen_iodide}
};


static const IdealData ideal_data_dimethylamine = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-0.17, 0}
			,{0.2695, 1}
			,{-1.33E-04, 2}
			,{2.34E-08, 3}
		}
	}}
};

static const CubicData cubic_data_dimethylamine = {
	.M = 45.085
	,.T_c = 437.7
	,.p_c = (53.1 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.302
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-18800 / 45.085), (68000 / 45.085)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_dimethylamine
};

const EosData eos_rpp_dimethylamine = {
	"dimethylamine"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_dimethylamine}
};


static const IdealData ideal_data_phosphorus_trifluoride = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{21.79, 0}
			,{0.1733, 1}
			,{-1.85E-04, 2}
			,{6.97E-08, 3}
		}
	}}
};

static const CubicData cubic_data_phosphorus_trifluoride = {
	.M = 87.968
	,.T_c = 271.2
	,.p_c = (43.3 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.326
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-937800 / 87.968), (-925300 / 87.968)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_phosphorus_trifluoride
};

const EosData eos_rpp_phosphorus_trifluoride = {
	"phosphorus_trifluoride"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_phosphorus_trifluoride}
};


static const IdealData ideal_data_2_2_3_3_tetramethylpentane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-54.58, 0}
			,{1.089, 1}
			,{-7.57E-04, 2}
			,{2.14E-07, 3}
		}
	}}
};

static const CubicData cubic_data_2_2_3_3_tetramethylpentane = {
	.M = 128.259
	,.T_c = 607.7
	,.p_c = (27.4 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.303
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-237400 / 128.259), (34330 / 128.259)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_2_2_3_3_tetramethylpentane
};

const EosData eos_rpp_2_2_3_3_tetramethylpentane = {
	"2_2_3_3_tetramethylpentane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_2_2_3_3_tetramethylpentane}
};


static const IdealData ideal_data_ethyl_acrylate = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{16.81, 0}
			,{0.369, 1}
			,{-1.38E-04, 2}
			,{-5.73E-09, 3}
		}
	}}
};

static const CubicData cubic_data_ethyl_acrylate = {
	.M = 100.118
	,.T_c = 552.0
	,.p_c = (37.4 * 1e5)
	,.rho_c = (1000 * 100.118 / 320.0)
	,.T_t = 0
	,.omega = 0.400
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, NAN, NAN}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_ethyl_acrylate
};

const EosData eos_rpp_ethyl_acrylate = {
	"ethyl_acrylate"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_ethyl_acrylate}
};


static const IdealData ideal_data_3_methyl_1_butene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{21.74, 0}
			,{0.389, 1}
			,{-2.01E-04, 2}
			,{4.01E-08, 3}
		}
	}}
};

static const CubicData cubic_data_3_methyl_1_butene = {
	.M = 70.135
	,.T_c = 450.0
	,.p_c = (35.1 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.209
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-28970 / 70.135), (74820 / 70.135)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_3_methyl_1_butene
};

const EosData eos_rpp_3_methyl_1_butene = {
	"3_methyl_1_butene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_3_methyl_1_butene}
};


static const IdealData ideal_data_isobutyraldehyde = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{24.46, 0}
			,{0.3356, 1}
			,{-2.06E-04, 2}
			,{6.37E-08, 3}
		}
	}}
};

static const CubicData cubic_data_isobutyraldehyde = {
	.M = 72.107
	,.T_c = 513.0
	,.p_c = (41.5 * 1e5)
	,.rho_c = (1000 * 72.107 / 274.0)
	,.T_t = 0
	,.omega = 0.350
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-215900 / 72.107), (-121400 / 72.107)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_isobutyraldehyde
};

const EosData eos_rpp_isobutyraldehyde = {
	"isobutyraldehyde"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_isobutyraldehyde}
};


static const IdealData ideal_data_cis_difluorodiazine = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{11.21, 0}
			,{0.1745, 1}
			,{-1.69E-04, 2}
			,{5.90E-08, 3}
		}
	}}
};

static const CubicData cubic_data_cis_difluorodiazine = {
	.M = 66.010
	,.T_c = 272.0
	,.p_c = (70.9 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.252
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (68660 / 66.010), (108800 / 66.010)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_cis_difluorodiazine
};

const EosData eos_rpp_cis_difluorodiazine = {
	"cis_difluorodiazine"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_cis_difluorodiazine}
};


static const IdealData ideal_data_acetic_anhydride = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-23.13, 0}
			,{0.5087, 1}
			,{-3.58E-04, 2}
			,{9.84E-08, 3}
		}
	}}
};

static const CubicData cubic_data_acetic_anhydride = {
	.M = 102.089
	,.T_c = 569.0
	,.p_c = (46.8 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.908
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-576100 / 102.089), (-477000 / 102.089)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_acetic_anhydride
};

const EosData eos_rpp_acetic_anhydride = {
	"acetic_anhydride"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_acetic_anhydride}
};


static const IdealData ideal_data_2_2_4_trimethylpentane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-7.46, 0}
			,{0.7779, 1}
			,{-4.29E-04, 2}
			,{9.17E-08, 3}
		}
	}}
};

static const CubicData cubic_data_2_2_4_trimethylpentane = {
	.M = 114.232
	,.T_c = 544.0
	,.p_c = (25.7 * 1e5)
	,.rho_c = (1000 * 114.232 / 468.0)
	,.T_t = 0
	,.omega = 0.303
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-224300 / 114.232), (13690 / 114.232)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_2_2_4_trimethylpentane
};

const EosData eos_rpp_2_2_4_trimethylpentane = {
	"2_2_4_trimethylpentane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_2_2_4_trimethylpentane}
};


static const IdealData ideal_data_m_xylene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-29.17, 0}
			,{0.6297, 1}
			,{-3.75E-04, 2}
			,{8.48E-08, 3}
		}
	}}
};

static const CubicData cubic_data_m_xylene = {
	.M = 106.168
	,.T_c = 617.1
	,.p_c = (35.4 * 1e5)
	,.rho_c = (1000 * 106.168 / 376.0)
	,.T_t = 0
	,.omega = 0.325
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (17250 / 106.168), (118900 / 106.168)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_m_xylene
};

const EosData eos_rpp_m_xylene = {
	"m_xylene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_m_xylene}
};


static const IdealData ideal_data_1_methyl_3_isopropylbenzene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-48.76, 0}
			,{0.9064, 1}
			,{-6.05E-04, 2}
			,{1.63E-07, 3}
		}
	}}
};

static const CubicData cubic_data_1_methyl_3_isopropylbenzene = {
	.M = 134.222
	,.T_c = 666.0
	,.p_c = (29.3 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.279
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-29310 / 134.222), NAN}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_1_methyl_3_isopropylbenzene
};

const EosData eos_rpp_1_methyl_3_isopropylbenzene = {
	"1_methyl_3_isopropylbenzene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_1_methyl_3_isopropylbenzene}
};


static const IdealData ideal_data_triethylamine = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-18.43, 0}
			,{0.7155, 1}
			,{-4.39E-04, 2}
			,{1.09E-07, 3}
		}
	}}
};

static const CubicData cubic_data_triethylamine = {
	.M = 101.193
	,.T_c = 535.0
	,.p_c = (30.3 * 1e5)
	,.rho_c = (1000 * 101.193 / 389.0)
	,.T_t = 0
	,.omega = 0.320
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-99650 / 101.193), (110400 / 101.193)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_triethylamine
};

const EosData eos_rpp_triethylamine = {
	"triethylamine"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_triethylamine}
};


static const IdealData ideal_data_acetic_acid = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{4.84, 0}
			,{0.2549, 1}
			,{-1.75E-04, 2}
			,{4.95E-08, 3}
		}
	}}
};

static const CubicData cubic_data_acetic_acid = {
	.M = 60.052
	,.T_c = 592.7
	,.p_c = (57.9 * 1e5)
	,.rho_c = (1000 * 60.052 / 171.0)
	,.T_t = 0
	,.omega = 0.447
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-435100 / 60.052), (-376900 / 60.052)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_acetic_acid
};

const EosData eos_rpp_acetic_acid = {
	"acetic_acid"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_acetic_acid}
};


static const IdealData ideal_data_n_octadecane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-14.47, 0}
			,{1.717, 1}
			,{-9.59E-04, 2}
			,{2.08E-07, 3}
		}
	}}
};

static const CubicData cubic_data_n_octadecane = {
	.M = 254.504
	,.T_c = 748.0
	,.p_c = (12.0 * 1e5)
	,.rho_c = -1
	,.T_min = 445
	,.omega = 0.790
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-414800 / 254.504), (100600 / 254.504)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_n_octadecane
};

const EosData eos_rpp_n_octadecane = {
	"n_octadecane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_n_octadecane}
};


static const IdealData ideal_data_naphthalene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-68.80, 0}
			,{0.8499, 1}
			,{-6.51E-04, 2}
			,{1.98E-07, 3}
		}
	}}
};

static const CubicData cubic_data_naphthalene = {
	.M = 128.174
	,.T_c = 748.4
	,.p_c = (40.5 * 1e5)
	,.rho_c = (1000 * 128.174 / 413.0)
	,.T_t = 0
	,.omega = 0.302
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (151100 / 128.174), (223700 / 128.174)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_naphthalene
};

const EosData eos_rpp_naphthalene = {
	"naphthalene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_naphthalene}
};


static const IdealData ideal_data_deutromethane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{12.49, 0}
			,{0.101, 1}
			,{-2.20E-05, 2}
			,{-8.46E-09, 3}
		}
	}}
};

static const CubicData cubic_data_deutromethane = {
	.M = 20.071
	,.T_c = 189.2
	,.p_c = (46.6 * 1e5)
	,.rho_c = (1000 * 20.071 / 98.2)
	,.T_t = 0
	,.omega = 0.032
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-88300 / 20.071), (-59540 / 20.071)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_deutromethane
};

const EosData eos_rpp_deutromethane = {
	"deutromethane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_deutromethane}
};


static const IdealData ideal_data_2_3_dimethyl_1_butene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{7.03, 0}
			,{0.5585, 1}
			,{-3.70E-04, 2}
			,{1.06E-07, 3}
		}
	}}
};

static const CubicData cubic_data_2_3_dimethyl_1_butene = {
	.M = 84.162
	,.T_c = 501.0
	,.p_c = (32.4 * 1e5)
	,.rho_c = (1000 * 84.162 / 343.0)
	,.T_t = 0
	,.omega = 0.221
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-66360 / 84.162), (79090 / 84.162)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_2_3_dimethyl_1_butene
};

const EosData eos_rpp_2_3_dimethyl_1_butene = {
	"2_3_dimethyl_1_butene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_2_3_dimethyl_1_butene}
};


static const IdealData ideal_data_dipropylamine = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{6.46, 0}
			,{0.6293, 1}
			,{-3.39E-04, 2}
			,{7.07E-08, 3}
		}
	}}
};

static const CubicData cubic_data_dipropylamine = {
	.M = 101.193
	,.T_c = 555.8
	,.p_c = (29.9 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.471
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, NAN, NAN}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_dipropylamine
};

const EosData eos_rpp_dipropylamine = {
	"dipropylamine"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_dipropylamine}
};


static const IdealData ideal_data_n_heptadecane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-13.97, 0}
			,{1.624, 1}
			,{-9.08E-04, 2}
			,{1.97E-07, 3}
		}
	}}
};

static const CubicData cubic_data_n_heptadecane = {
	.M = 240.475
	,.T_c = 733.0
	,.p_c = (13.0 * 1e5)
	,.rho_c = (1000 * 240.475 / 1000.0)
	,.T_min = 434
	,.omega = 0.770
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-394200 / 240.475), (92150 / 240.475)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_n_heptadecane
};

const EosData eos_rpp_n_heptadecane = {
	"n_heptadecane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_n_heptadecane}
};


static const IdealData ideal_data_2_2_dimethyl_butane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-16.63, 0}
			,{0.6293, 1}
			,{-3.48E-04, 2}
			,{6.85E-08, 3}
		}
	}}
};

static const CubicData cubic_data_2_2_dimethyl_butane = {
	.M = 86.178
	,.T_c = 488.8
	,.p_c = (30.8 * 1e5)
	,.rho_c = (1000 * 86.178 / 359.0)
	,.T_t = 0
	,.omega = 0.232
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-185700 / 86.178), (-9630 / 86.178)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_2_2_dimethyl_butane
};

const EosData eos_rpp_2_2_dimethyl_butane = {
	"2_2_dimethyl_butane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_2_2_dimethyl_butane}
};


static const IdealData ideal_data_2_butanol = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{5.75, 0}
			,{0.4245, 1}
			,{-2.33E-04, 2}
			,{4.77E-08, 3}
		}
	}}
};

static const CubicData cubic_data_2_butanol = {
	.M = 74.123
	,.T_c = 536.1
	,.p_c = (41.8 * 1e5)
	,.rho_c = (1000 * 74.123 / 269.0)
	,.T_t = 0
	,.omega = 0.577
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-292800 / 74.123), (-167700 / 74.123)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_2_butanol
};

const EosData eos_rpp_2_butanol = {
	"2_butanol"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_2_butanol}
};


static const IdealData ideal_data_1_2_3_trichloropropane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{26.88, 0}
			,{0.3622, 1}
			,{-2.79E-04, 2}
			,{8.79E-08, 3}
		}
	}}
};

static const CubicData cubic_data_1_2_3_trichloropropane = {
	.M = 147.432
	,.T_c = 651.0
	,.p_c = (39.5 * 1e5)
	,.rho_c = (1000 * 147.432 / 348.0)
	,.T_t = 0
	,.omega = 0.310
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-185900 / 147.432), (-97850 / 147.432)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_1_2_3_trichloropropane
};

const EosData eos_rpp_1_2_3_trichloropropane = {
	"1_2_3_trichloropropane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_1_2_3_trichloropropane}
};


static const IdealData ideal_data_1_4_difluorobenzene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-25.96, 0}
			,{0.5722, 1}
			,{-4.68E-04, 2}
			,{1.48E-07, 3}
		}
	}}
};

static const CubicData cubic_data_1_4_difluorobenzene = {
	.M = 114.094
	,.T_c = 556.0
	,.p_c = (44.0 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.299
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-307400 / 114.094), (-253000 / 114.094)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_1_4_difluorobenzene
};

const EosData eos_rpp_1_4_difluorobenzene = {
	"1_4_difluorobenzene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_1_4_difluorobenzene}
};


static const IdealData ideal_data_nitrogen_dioxide = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{24.23, 0}
			,{0.04836, 1}
			,{-2.08E-05, 2}
			,{2.93E-10, 3}
		}
	}}
};

static const CubicData cubic_data_nitrogen_dioxide = {
	.M = 46.006
	,.T_c = 431.0
	,.p_c = (101.0 * 1e5)
	,.rho_c = (1000 * 46.006 / 167.8)
	,.T_t = 0
	,.omega = 0.834
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (33870 / 46.006), (52000 / 46.006)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_nitrogen_dioxide
};

const EosData eos_rpp_nitrogen_dioxide = {
	"nitrogen_dioxide"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_nitrogen_dioxide}
};


static const IdealData ideal_data_methyl_isobutyl_ketone = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{3.89, 0}
			,{0.5656, 1}
			,{-3.32E-04, 2}
			,{8.23E-08, 3}
		}
	}}
};

static const CubicData cubic_data_methyl_isobutyl_ketone = {
	.M = 100.160
	,.T_c = 571.0
	,.p_c = (32.7 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.385
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-284000 / 100.160), NAN}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_methyl_isobutyl_ketone
};

const EosData eos_rpp_methyl_isobutyl_ketone = {
	"methyl_isobutyl_ketone"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_methyl_isobutyl_ketone}
};


static const IdealData ideal_data_diethyl_ketone = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{30.01, 0}
			,{0.3939, 1}
			,{-1.91E-04, 2}
			,{3.40E-08, 3}
		}
	}}
};

static const CubicData cubic_data_diethyl_ketone = {
	.M = 86.134
	,.T_c = 561.0
	,.p_c = (37.3 * 1e5)
	,.rho_c = (1000 * 86.134 / 336.0)
	,.T_t = 0
	,.omega = 0.344
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-258800 / 86.134), (-135400 / 86.134)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_diethyl_ketone
};

const EosData eos_rpp_diethyl_ketone = {
	"diethyl_ketone"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_diethyl_ketone}
};


static const IdealData ideal_data_propionic_acid = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{5.67, 0}
			,{0.3689, 1}
			,{-2.87E-04, 2}
			,{9.88E-08, 3}
		}
	}}
};

static const CubicData cubic_data_propionic_acid = {
	.M = 74.080
	,.T_c = 612.0
	,.p_c = (54.0 * 1e5)
	,.rho_c = (1000 * 74.080 / 222.0)
	,.T_t = 0
	,.omega = 0.520
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-455400 / 74.080), (-369600 / 74.080)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_propionic_acid
};

const EosData eos_rpp_propionic_acid = {
	"propionic_acid"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_propionic_acid}
};


static const IdealData ideal_data_1_4_dimethylcyclohexane_cis = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-64.15, 0}
			,{0.8826, 1}
			,{-5.02E-04, 2}
			,{1.07E-07, 3}
		}
	}}
};

static const CubicData cubic_data_1_4_dimethylcyclohexane_cis = {
	.M = 112.216
	,.T_c = 598.0
	,.p_c = (29.7 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.234
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-176800 / 112.216), (37970 / 112.216)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_1_4_dimethylcyclohexane_cis
};

const EosData eos_rpp_1_4_dimethylcyclohexane_cis = {
	"1_4_dimethylcyclohexane_cis"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_1_4_dimethylcyclohexane_cis}
};


static const IdealData ideal_data_3_ethylpentane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-7.05, 0}
			,{0.6837, 1}
			,{-3.73E-04, 2}
			,{7.83E-08, 3}
		}
	}}
};

static const CubicData cubic_data_3_ethylpentane = {
	.M = 100.205
	,.T_c = 540.6
	,.p_c = (28.9 * 1e5)
	,.rho_c = (1000 * 100.205 / 416.0)
	,.T_t = 0
	,.omega = 0.310
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-190000 / 100.205), (11000 / 100.205)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_3_ethylpentane
};

const EosData eos_rpp_3_ethylpentane = {
	"3_ethylpentane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_3_ethylpentane}
};


static const IdealData ideal_data_propadiene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{9.906, 0}
			,{1.977e-1, 1}
			,{-1.182e-4, 2}
			,{2.782e-8, 3}
		}
	}}
};

static const CubicData cubic_data_propadiene = {
	.M = 40.065
	,.T_c = 393.0
	,.p_c = (54.7 * 1e5)
	,.rho_c = (1000 * 40.065 / 162.0)
	,.T_t = 0
	,.omega = 0.313
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (1.923e5 / 40.065), (2.025e5 / 40.065)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_propadiene
};

const EosData eos_rpp_propadiene = {
	"propadiene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_propadiene}
};


static const IdealData ideal_data_methyl_ethyl_ether = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{18.67, 0}
			,{0.2685, 1}
			,{-1.03E-04, 2}
			,{8.95E-09, 3}
		}
	}}
};

static const CubicData cubic_data_methyl_ethyl_ether = {
	.M = 60.096
	,.T_c = 437.8
	,.p_c = (44.0 * 1e5)
	,.rho_c = (1000 * 60.096 / 221.0)
	,.T_t = 0
	,.omega = 0.244
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-216600 / 60.096), (-117700 / 60.096)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_methyl_ethyl_ether
};

const EosData eos_rpp_methyl_ethyl_ether = {
	"methyl_ethyl_ether"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_methyl_ethyl_ether}
};


static const IdealData ideal_data_3_3_dimethylpentane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-7.05, 0}
			,{0.6837, 1}
			,{-3.73E-04, 2}
			,{7.83E-08, 3}
		}
	}}
};

static const CubicData cubic_data_3_3_dimethylpentane = {
	.M = 100.205
	,.T_c = 536.4
	,.p_c = (29.5 * 1e5)
	,.rho_c = (1000 * 100.205 / 414.0)
	,.T_t = 0
	,.omega = 0.267
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-202000 / 100.205), (2640 / 100.205)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_3_3_dimethylpentane
};

const EosData eos_rpp_3_3_dimethylpentane = {
	"3_3_dimethylpentane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_3_3_dimethylpentane}
};


static const IdealData ideal_data_dichloromethane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{12.95, 0}
			,{0.1623, 1}
			,{-1.30E-04, 2}
			,{4.21E-08, 3}
		}
	}}
};

static const CubicData cubic_data_dichloromethane = {
	.M = 84.933
	,.T_c = 510.0
	,.p_c = (63.0 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.199
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-38900 / 84.933), (-68910 / 84.933)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_dichloromethane
};

const EosData eos_rpp_dichloromethane = {
	"dichloromethane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_dichloromethane}
};


static const IdealData ideal_data_carbon_disulfide = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{27.44, 0}
			,{0.08127, 1}
			,{-7.67E-05, 2}
			,{2.67E-08, 3}
		}
	}}
};

static const CubicData cubic_data_carbon_disulfide = {
	.M = 76.131
	,.T_c = 552.0
	,.p_c = (79.0 * 1e5)
	,.rho_c = (1000 * 76.131 / 160.0)
	,.T_t = 0
	,.omega = 0.109
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (117100 / 76.131), (66950 / 76.131)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_carbon_disulfide
};

const EosData eos_rpp_carbon_disulfide = {
	"carbon_disulfide"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_carbon_disulfide}
};


static const IdealData ideal_data_acrolein = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{11.97, 0}
			,{0.2106, 1}
			,{-1.07E-04, 2}
			,{1.91E-08, 3}
		}
	}}
};

static const CubicData cubic_data_acrolein = {
	.M = 56.064
	,.T_c = 506.0
	,.p_c = (51.6 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.330
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-70920 / 56.064), (-65190 / 56.064)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_acrolein
};

const EosData eos_rpp_acrolein = {
	"acrolein"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_acrolein}
};


static const IdealData ideal_data_1_3_pentadiene_trans = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{30.69, 0}
			,{0.2811, 1}
			,{-6.71E-05, 2}
			,{-2.35E-08, 3}
		}
	}}
};

static const CubicData cubic_data_1_3_pentadiene_trans = {
	.M = 68.119
	,.T_c = 496.0
	,.p_c = (39.9 * 1e5)
	,.rho_c = (1000 * 68.119 / 275.0)
	,.T_t = 0
	,.omega = 0.175
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (77870 / 68.119), (146800 / 68.119)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_1_3_pentadiene_trans
};

const EosData eos_rpp_1_3_pentadiene_trans = {
	"1_3_pentadiene_trans"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_1_3_pentadiene_trans}
};


static const IdealData ideal_data_n_butyl_amine = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{5.08, 0}
			,{0.4476, 1}
			,{-2.41E-04, 2}
			,{7.60E-08, 3}
		}
	}}
};

static const CubicData cubic_data_n_butyl_amine = {
	.M = 73.139
	,.T_c = 531.9
	,.p_c = (42.0 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.329
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-92110 / 73.139), (49240 / 73.139)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_n_butyl_amine
};

const EosData eos_rpp_n_butyl_amine = {
	"n_butyl_amine"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_n_butyl_amine}
};


static const IdealData ideal_data_3_hexene_cis = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-21.73, 0}
			,{0.5811, 1}
			,{-3.36E-04, 2}
			,{7.46E-08, 3}
		}
	}}
};

static const CubicData cubic_data_3_hexene_cis = {
	.M = 84.162
	,.T_c = 517.0
	,.p_c = (32.8 * 1e5)
	,.rho_c = (1000 * 84.162 / 350.0)
	,.T_t = 0
	,.omega = 0.225
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-47650 / 84.162), (83070 / 84.162)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_3_hexene_cis
};

const EosData eos_rpp_3_hexene_cis = {
	"3_hexene_cis"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_3_hexene_cis}
};


static const IdealData ideal_data_trimethyl_amine = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-8.21, 0}
			,{0.3972, 1}
			,{-2.22E-04, 2}
			,{4.62E-08, 3}
		}
	}}
};

static const CubicData cubic_data_trimethyl_amine = {
	.M = 59.112
	,.T_c = 433.3
	,.p_c = (40.9 * 1e5)
	,.rho_c = (1000 * 59.112 / 254.0)
	,.T_t = 0
	,.omega = 0.205
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-23860 / 59.112), (98980 / 59.112)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_trimethyl_amine
};

const EosData eos_rpp_trimethyl_amine = {
	"trimethyl_amine"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_trimethyl_amine}
};


static const IdealData ideal_data_methyl_mercaptan = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{13.27, 0}
			,{0.1457, 1}
			,{-8.55E-05, 2}
			,{2.08E-08, 3}
		}
	}}
};

static const CubicData cubic_data_methyl_mercaptan = {
	.M = 48.107
	,.T_c = 470.0
	,.p_c = (72.3 * 1e5)
	,.rho_c = (1000 * 48.107 / 144.8)
	,.T_t = 0
	,.omega = 0.153
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-22990 / 48.107), (-9923 / 48.107)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_methyl_mercaptan
};

const EosData eos_rpp_methyl_mercaptan = {
	"methyl_mercaptan"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_methyl_mercaptan}
};


static const IdealData ideal_data_tert_butylbenzene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-86.00, 0}
			,{1.102, 1}
			,{-8.75E-04, 2}
			,{2.83E-07, 3}
		}
	}}
};

static const CubicData cubic_data_tert_butylbenzene = {
	.M = 134.222
	,.T_c = 660.0
	,.p_c = (29.6 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.265
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-22690 / 134.222), NAN}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_tert_butylbenzene
};

const EosData eos_rpp_tert_butylbenzene = {
	"tert_butylbenzene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_tert_butylbenzene}
};


static const IdealData ideal_data_ethylcyclopentane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-55.31, 0}
			,{0.7511, 1}
			,{-4.40E-04, 2}
			,{1.00E-07, 3}
		}
	}}
};

static const CubicData cubic_data_ethylcyclopentane = {
	.M = 98.189
	,.T_c = 569.5
	,.p_c = (34.0 * 1e5)
	,.rho_c = (1000 * 98.189 / 375.0)
	,.T_t = 0
	,.omega = 0.271
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-127200 / 98.189), (44590 / 98.189)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_ethylcyclopentane
};

const EosData eos_rpp_ethylcyclopentane = {
	"ethylcyclopentane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_ethylcyclopentane}
};


static const IdealData ideal_data_methylcyclohexane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-61.92, 0}
			,{0.7842, 1}
			,{-4.44E-04, 2}
			,{9.37E-08, 3}
		}
	}}
};

static const CubicData cubic_data_methylcyclohexane = {
	.M = 98.189
	,.T_c = 572.2
	,.p_c = (34.7 * 1e5)
	,.rho_c = (1000 * 98.189 / 368.0)
	,.T_t = 0
	,.omega = 0.236
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-154900 / 98.189), (27300 / 98.189)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_methylcyclohexane
};

const EosData eos_rpp_methylcyclohexane = {
	"methylcyclohexane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_methylcyclohexane}
};


static const IdealData ideal_data_deuterium_equilibrium = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{30.25, 0}
			,{-0.006615, 1}
			,{1.17E-05, 2}
			,{-3.68E-09, 3}
		}
	}}
};

static const CubicData cubic_data_deuterium_equilibrium = {
	.M = 4.032
	,.T_c = 38.2
	,.p_c = (16.5 * 1e5)
	,.rho_c = (1000 * 4.032 / 60.3)
	,.T_t = 0
	,.omega = -0.137
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (0 / 4.032), (0 / 4.032)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_deuterium_equilibrium
};

const EosData eos_rpp_deuterium_equilibrium = {
	"deuterium_equilibrium"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_deuterium_equilibrium}
};


static const IdealData ideal_data_2_methyloctane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-10.11, 0}
			,{0.8805, 1}
			,{-4.94E-04, 2}
			,{1.08E-07, 3}
		}
	}}
};

static const CubicData cubic_data_2_methyloctane = {
	.M = 128.242
	,.T_c = 587.0
	,.p_c = (23.1 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.423
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-229200 / 128.242), (24830 / 128.242)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_2_methyloctane
};

const EosData eos_rpp_2_methyloctane = {
	"2_methyloctane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_2_methyloctane}
};


static const IdealData ideal_data_vinyl_methyl_ether = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{15.63, 0}
			,{0.2341, 1}
			,{-9.70E-05, 2}
			,{1.06E-08, 3}
		}
	}}
};

static const CubicData cubic_data_vinyl_methyl_ether = {
	.M = 58.080
	,.T_c = 436.0
	,.p_c = (47.6 * 1e5)
	,.rho_c = (1000 * 58.080 / 205.0)
	,.T_t = 0
	,.omega = 0.340
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, NAN, NAN}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_vinyl_methyl_ether
};

const EosData eos_rpp_vinyl_methyl_ether = {
	"vinyl_methyl_ether"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_vinyl_methyl_ether}
};


static const IdealData ideal_data_1_2_dimethoxyethane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{32.23, 0}
			,{0.3567, 1}
			,{-1.34E-04, 2}
			,{8.40E-09, 3}
		}
	}}
};

static const CubicData cubic_data_1_2_dimethoxyethane = {
	.M = 90.123
	,.T_c = 536.0
	,.p_c = (38.7 * 1e5)
	,.rho_c = (1000 * 90.123 / 271.0)
	,.T_t = 0
	,.omega = 0.358
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, NAN, NAN}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_1_2_dimethoxyethane
};

const EosData eos_rpp_1_2_dimethoxyethane = {
	"1_2_dimethoxyethane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_1_2_dimethoxyethane}
};


static const IdealData ideal_data_3_4_dimethylhexane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-9.22, 0}
			,{0.7859, 1}
			,{-4.40E-04, 2}
			,{9.70E-08, 3}
		}
	}}
};

static const CubicData cubic_data_3_4_dimethylhexane = {
	.M = 114.232
	,.T_c = 568.9
	,.p_c = (26.9 * 1e5)
	,.rho_c = (1000 * 114.232 / 466.0)
	,.T_t = 0
	,.omega = 0.338
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-213100 / 114.232), (17330 / 114.232)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_3_4_dimethylhexane
};

const EosData eos_rpp_3_4_dimethylhexane = {
	"3_4_dimethylhexane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_3_4_dimethylhexane}
};


static const IdealData ideal_data_pentanol_1 = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{3.869, 0}
			,{0.5045, 1}
			,{-2.639e-04, 2}
			,{5.120e-08, 3}
		}
	}}
};

static const CubicData cubic_data_pentanol_1 = {
	.M = 88.150
	,.T_c = 588.2
	,.p_c = (39.1 * 1e5)
	,.rho_c = (1000 * 88.150 / 326.0)
	,.T_t = 0
	,.omega = 0.579
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-2.989e05 / 88.150), (-1.461e05 / 88.150)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_pentanol_1
};

const EosData eos_rpp_pentanol_1 = {
	"pentanol_1"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_pentanol_1}
};


static const IdealData ideal_data_tert_butyl_chloride = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-3.93, 0}
			,{0.4652, 1}
			,{-2.89E-04, 2}
			,{7.87E-08, 3}
		}
	}}
};

static const CubicData cubic_data_tert_butyl_chloride = {
	.M = 92.569
	,.T_c = 507.0
	,.p_c = (39.5 * 1e5)
	,.rho_c = (1000 * 92.569 / 295.0)
	,.T_t = 0
	,.omega = 0.190
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-183400 / 92.569), (-64140 / 92.569)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_tert_butyl_chloride
};

const EosData eos_rpp_tert_butyl_chloride = {
	"tert_butyl_chloride"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_tert_butyl_chloride}
};


static const IdealData ideal_data_i_propanol = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{32.43, 0}
			,{1.885e-1, 1}
			,{6.406e-5, 2}
			,{-9.261e-8, 3}
		}
	}}
};

static const CubicData cubic_data_i_propanol = {
	.M = 60.096
	,.T_c = 508.3
	,.p_c = (47.6 * 1e5)
	,.rho_c = (1000 * 60.096 / 220.0)
	,.T_t = 0
	,.omega = 0.665
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-2.726e+5 / 60.096), (-1.177e+5 / 60.096)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_i_propanol
};

const EosData eos_rpp_i_propanol = {
	"i_propanol"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_i_propanol}
};


static const IdealData ideal_data_diisopropyl_ether = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{7.51, 0}
			,{0.5489, 1}
			,{-3.03E-04, 2}
			,{5.85E-08, 3}
		}
	}}
};

static const CubicData cubic_data_diisopropyl_ether = {
	.M = 102.177
	,.T_c = 500.3
	,.p_c = (28.8 * 1e5)
	,.rho_c = (1000 * 102.177 / 386.0)
	,.T_t = 0
	,.omega = 0.331
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-319000 / 102.177), (-122000 / 102.177)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_diisopropyl_ether
};

const EosData eos_rpp_diisopropyl_ether = {
	"diisopropyl_ether"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_diisopropyl_ether}
};


static const IdealData ideal_data_vinyl_formate = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{27.81, 0}
			,{0.1839, 1}
			,{-3.56E-05, 2}
			,{-2.34E-07, 3}
		}
	}}
};

static const CubicData cubic_data_vinyl_formate = {
	.M = 72.064
	,.T_c = 475.0
	,.p_c = (57.7 * 1e5)
	,.rho_c = (1000 * 72.064 / 210.0)
	,.T_t = 0
	,.omega = 0.550
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, NAN, NAN}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_vinyl_formate
};

const EosData eos_rpp_vinyl_formate = {
	"vinyl_formate"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_vinyl_formate}
};


static const IdealData ideal_data_3_methyl_2_pentene_trans = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-14.75, 0}
			,{0.5669, 1}
			,{-3.34E-04, 2}
			,{7.96E-08, 3}
		}
	}}
};

static const CubicData cubic_data_3_methyl_2_pentene_trans = {
	.M = 84.162
	,.T_c = 521.0
	,.p_c = (32.9 * 1e5)
	,.rho_c = (1000 * 84.162 / 350.0)
	,.T_t = 0
	,.omega = 0.207
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-63140 / 84.162), (71340 / 84.162)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_3_methyl_2_pentene_trans
};

const EosData eos_rpp_3_methyl_2_pentene_trans = {
	"3_methyl_2_pentene_trans"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_3_methyl_2_pentene_trans}
};


static const IdealData ideal_data_ethylene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{3.806, 0}
			,{1.566e-1, 1}
			,{-8.348e-5, 2}
			,{1.755e-8, 3}
		}
	}}
};

static const CubicData cubic_data_ethylene = {
	.M = 28.054
	,.T_c = 282.4
	,.p_c = (50.4 * 1e5)
	,.rho_c = (1000 * 28.054 / 130.4)
	,.T_t = 0
	,.omega = 0.089
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (5.234e+4 / 28.054), (6.816e+4 / 28.054)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_ethylene
};

const EosData eos_rpp_ethylene = {
	"ethylene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_ethylene}
};


static const IdealData ideal_data_1_cyclopentylpentadecane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-66.09, 0}
			,{1.98, 1}
			,{-1.14E-03, 2}
			,{2.55E-07, 3}
		}
	}}
};

static const CubicData cubic_data_1_cyclopentylpentadecane = {
	.M = 280.540
	,.T_c = 780.0
	,.p_c = (10.2 * 1e5)
	,.rho_c = -1
	,.T_min = 476
	,.omega = 0.833
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-395300 / 280.540), (154000 / 280.540)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_1_cyclopentylpentadecane
};

const EosData eos_rpp_1_cyclopentylpentadecane = {
	"1_cyclopentylpentadecane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_1_cyclopentylpentadecane}
};


static const IdealData ideal_data_n_hexadecane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-13.02, 0}
			,{1.529, 1}
			,{-8.537E-04, 2}
			,{1.850E-07, 3}
		}
	}}
};

static const CubicData cubic_data_n_hexadecane = {
	.M = 226.448
	,.T_c = 722.0
	,.p_c = (14.1 * 1e5)
	,.rho_c = -1
	,.T_t = 400
	,.omega = 0.742
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-373600 / 226.448), (83740 / 226.448)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_n_hexadecane
};

const EosData eos_rpp_n_hexadecane = {
	"n_hexadecane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_n_hexadecane}
};


static const IdealData ideal_data_methyl_ethyl_sulfide = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{19.53, 0}
			,{0.2891, 1}
			,{-1.21E-04, 2}
			,{1.29E-08, 3}
		}
	}}
};

static const CubicData cubic_data_methyl_ethyl_sulfide = {
	.M = 76.157
	,.T_c = 533.0
	,.p_c = (42.6 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.216
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-59660 / 76.157), (11400 / 76.157)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_methyl_ethyl_sulfide
};

const EosData eos_rpp_methyl_ethyl_sulfide = {
	"methyl_ethyl_sulfide"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_methyl_ethyl_sulfide}
};


static const IdealData ideal_data_p_cresol = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-40.63, 0}
			,{0.7055, 1}
			,{-5.76E-04, 2}
			,{1.97E-07, 3}
		}
	}}
};

static const CubicData cubic_data_p_cresol = {
	.M = 108.140
	,.T_c = 704.6
	,.p_c = (51.5 * 1e5)
	,.rho_c = -1
	,.T_min = 401
	,.omega = 0.505
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-125500 / 108.140), (-30900 / 108.140)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_p_cresol
};

const EosData eos_rpp_p_cresol = {
	"p_cresol"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_p_cresol}
};


static const IdealData ideal_data_valeraldehyde = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{14.24, 0}
			,{0.4329, 1}
			,{-2.11E-04, 2}
			,{3.16E-08, 3}
		}
	}}
};

static const CubicData cubic_data_valeraldehyde = {
	.M = 86.134
	,.T_c = 554.0
	,.p_c = (35.4 * 1e5)
	,.rho_c = (1000 * 86.134 / 333.0)
	,.T_t = 0
	,.omega = 0.400
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-228000 / 86.134), (-108400 / 86.134)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_valeraldehyde
};

const EosData eos_rpp_valeraldehyde = {
	"valeraldehyde"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_valeraldehyde}
};


static const IdealData ideal_data_ethylbenzene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-4.310e1, 0}
			,{7.072e-1, 1}
			,{-4.811e-4, 2}
			,{1.301e-7, 3}
		}
	}}
};

static const CubicData cubic_data_ethylbenzene = {
	.M = 106.168
	,.T_c = 617.2
	,.p_c = (36.0 * 1e5)
	,.rho_c = (1000 * 106.168 / 374)
	,.T_t = 0
	,.omega = 0.302
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (2.981e4 / 106.168), (1.307e5 / 106.168)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_ethylbenzene
};

const EosData eos_rpp_ethylbenzene = {
	"ethylbenzene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_ethylbenzene}
};


static const IdealData ideal_data_2_2_dimethylheptane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-20.89, 0}
			,{0.9668, 1}
			,{-6.12E-04, 2}
			,{1.57E-07, 3}
		}
	}}
};

static const CubicData cubic_data_2_2_dimethylheptane = {
	.M = 128.242
	,.T_c = 576.8
	,.p_c = (23.5 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.390
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-247000 / 128.242), (16750 / 128.242)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_2_2_dimethylheptane
};

const EosData eos_rpp_2_2_dimethylheptane = {
	"2_2_dimethylheptane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_2_2_dimethylheptane}
};


static const IdealData ideal_data_n_decane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-7.913, 0}
			,{9.609e-1, 1}
			,{-5.288e-4, 2}
			,{1.131e-7, 3}
		}
	}}
};

static const CubicData cubic_data_n_decane = {
	.M = 142.286
	,.T_c = 617.7
	,.p_c = (21.2 * 1e5)
	,.rho_c = (1000 * 142.286 / 603.0)
	,.T_t = 0
	,.omega = 0.489
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-2.498e5 / 142.286), (3.324e4 / 142.286)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_n_decane
};

const EosData eos_rpp_n_decane = {
	"n_decane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_n_decane}
};


static const IdealData ideal_data_m_cresol = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-45.01, 0}
			,{0.7264, 1}
			,{-6.03E-04, 2}
			,{2.08E-07, 3}
		}
	}}
};

static const CubicData cubic_data_m_cresol = {
	.M = 108.140
	,.T_c = 705.8
	,.p_c = (45.6 * 1e5)
	,.rho_c = (1000 * 108.140 / 309.0)
	,.T_t = 423
	,.omega = 0.454
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-132400 / 108.140), (-40570 / 108.140)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_m_cresol
};

const EosData eos_rpp_m_cresol = {
	"m_cresol"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_m_cresol}
};


static const IdealData ideal_data_chloroform = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{24.00, 0}
			,{1.893e-1, 1}
			,{-1.841e-4, 2}
			,{6.657e-8, 3}
		}
	}}
};

static const CubicData cubic_data_chloroform = {
	.M = 119.378
	,.T_c = 536.4
	,.p_c = (53.7 * 1e5)
	,.rho_c = (1000 * 119.378 / 238.9)
	,.T_t = 0
	,.omega = 0.218
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-1.013e+5 / 119.378), (-6.858e+4 / 119.378)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_chloroform
};

const EosData eos_rpp_chloroform = {
	"chloroform"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_chloroform}
};


static const IdealData ideal_data_trans_decalin = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-97.67, 0}
			,{1.045, 1}
			,{-5.48E-04, 2}
			,{8.98E-08, 3}
		}
	}}
};

static const CubicData cubic_data_trans_decalin = {
	.M = 138.254
	,.T_c = 687.1
	,.p_c = (31.4 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.270
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-182400 / 138.254), (73480 / 138.254)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_trans_decalin
};

const EosData eos_rpp_trans_decalin = {
	"trans_decalin"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_trans_decalin}
};


static const IdealData ideal_data_ethyl_formate = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{24.67, 0}
			,{0.2316, 1}
			,{-2.12E-05, 2}
			,{-5.36E-08, 3}
		}
	}}
};

static const CubicData cubic_data_ethyl_formate = {
	.M = 74.080
	,.T_c = 508.5
	,.p_c = (47.4 * 1e5)
	,.rho_c = (1000 * 74.080 / 229.0)
	,.T_t = 0
	,.omega = 0.285
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-371500 / 74.080), NAN}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_ethyl_formate
};

const EosData eos_rpp_ethyl_formate = {
	"ethyl_formate"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_ethyl_formate}
};


static const IdealData ideal_data_n_nonane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-8.37, 0}
			,{0.8729, 1}
			,{-4.82E-04, 2}
			,{1.03E-07, 3}
		}
	}}
};

static const CubicData cubic_data_n_nonane = {
	.M = 128.259
	,.T_c = 594.6
	,.p_c = (22.9 * 1e5)
	,.rho_c = (1000 * 128.259 / 548.0)
	,.T_t = 0
	,.omega = 0.445
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-229200 / 128.259), (24830 / 128.259)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_n_nonane
};

const EosData eos_rpp_n_nonane = {
	"n_nonane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_n_nonane}
};


static const IdealData ideal_data_hydrogen_sulfide = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{31.94, 0}
			,{0.001436, 1}
			,{2.43E-05, 2}
			,{-1.18E-08, 3}
		}
	}}
};

static const CubicData cubic_data_hydrogen_sulfide = {
	.M = 34.080
	,.T_c = 373.2
	,.p_c = (89.4 * 1e5)
	,.rho_c = (1000 * 34.080 / 98.6)
	,.T_t = 0
	,.omega = 0.097
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-20180 / 34.080), (-33080 / 34.080)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_hydrogen_sulfide
};

const EosData eos_rpp_hydrogen_sulfide = {
	"hydrogen_sulfide"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_hydrogen_sulfide}
};


static const IdealData ideal_data_n_butane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{9.487, 0}
			,{3.313e-1, 1}
			,{-1.108e-4, 2}
			,{-2.822e-9, 3}
		}
	}}
};

static const CubicData cubic_data_n_butane = {
	.M = 58.124
	,.T_c = 425.2
	,.p_c = (38.0 * 1e5)
	,.rho_c = (1000 * 58.124 / 255)
	,.T_t = 0
	,.omega = 0.199
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-1.262e+5 / 58.124), (-1.610e+4 / 58.124)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_n_butane
};

const EosData eos_rpp_n_butane = {
	"n_butane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_n_butane}
};


static const IdealData ideal_data_3_methyl_2_pentene_cis = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-14.75, 0}
			,{0.5669, 1}
			,{-3.34E-04, 2}
			,{7.96E-08, 3}
		}
	}}
};

static const CubicData cubic_data_3_methyl_2_pentene_cis = {
	.M = 84.162
	,.T_c = 518.0
	,.p_c = (32.8 * 1e5)
	,.rho_c = (1000 * 84.162 / 351.0)
	,.T_t = 0
	,.omega = 0.269
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-62220 / 84.162), (73270 / 84.162)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_3_methyl_2_pentene_cis
};

const EosData eos_rpp_3_methyl_2_pentene_cis = {
	"3_methyl_2_pentene_cis"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_3_methyl_2_pentene_cis}
};


static const IdealData ideal_data_1_1_dimethylcyclohexane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-72.11, 0}
			,{0.8997, 1}
			,{-5.02E-04, 2}
			,{1.03E-07, 3}
		}
	}}
};

static const CubicData cubic_data_1_1_dimethylcyclohexane = {
	.M = 112.216
	,.T_c = 591.0
	,.p_c = (29.6 * 1e5)
	,.rho_c = (1000 * 112.216 / 416.0)
	,.T_t = 0
	,.omega = 0.238
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-181100 / 112.216), (35250 / 112.216)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_1_1_dimethylcyclohexane
};

const EosData eos_rpp_1_1_dimethylcyclohexane = {
	"1_1_dimethylcyclohexane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_1_1_dimethylcyclohexane}
};


static const IdealData ideal_data_1_methyl_4_ethylbenzene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-27.31, 0}
			,{0.7176, 1}
			,{-4.22E-04, 2}
			,{9.54E-08, 3}
		}
	}}
};

static const CubicData cubic_data_1_methyl_4_ethylbenzene = {
	.M = 120.195
	,.T_c = 640.0
	,.p_c = (29.4 * 1e5)
	,.rho_c = (1000 * 120.195 / 470.0)
	,.T_t = 0
	,.omega = 0.322
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-2.05E+03 / 120.195), (1.27E+05 / 120.195)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_1_methyl_4_ethylbenzene
};

const EosData eos_rpp_1_methyl_4_ethylbenzene = {
	"1_methyl_4_ethylbenzene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_1_methyl_4_ethylbenzene}
};


static const IdealData ideal_data_perchloryl_fluoride = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{12.45, 0}
			,{0.239, 1}
			,{-2.35E-04, 2}
			,{8.32E-08, 3}
		}
	}}
};

static const CubicData cubic_data_perchloryl_fluoride = {
	.M = 102.448
	,.T_c = 368.4
	,.p_c = (53.7 * 1e5)
	,.rho_c = (1000 * 102.448 / 160.8)
	,.T_t = 0
	,.omega = 0.170
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-21440 / 102.448), (50620 / 102.448)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_perchloryl_fluoride
};

const EosData eos_rpp_perchloryl_fluoride = {
	"perchloryl_fluoride"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_perchloryl_fluoride}
};


static const IdealData ideal_data_neon = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{20.80, 0}
			,{0, 1}
			,{0.00E+00, 2}
			,{0.00E+00, 3}
		}
	}}
};

static const CubicData cubic_data_neon = {
	.M = 20.183
	,.T_c = 44.4
	,.p_c = (27.6 * 1e5)
	,.rho_c = (1000 * 20.183 / 41.6)
	,.T_min = 25
	,.omega = -0.029
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (0 / 20.183), (0 / 20.183)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_neon
};

const EosData eos_rpp_neon = {
	"neon"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_neon}
};


static const IdealData ideal_data_2_2_dimethylhexane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-9.22, 0}
			,{0.7859, 1}
			,{-4.40E-04, 2}
			,{9.70E-08, 3}
		}
	}}
};

static const CubicData cubic_data_2_2_dimethylhexane = {
	.M = 114.232
	,.T_c = 549.9
	,.p_c = (25.3 * 1e5)
	,.rho_c = (1000 * 114.232 / 478.0)
	,.T_t = 0
	,.omega = 0.338
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-224900 / 114.232), (10720 / 114.232)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_2_2_dimethylhexane
};

const EosData eos_rpp_2_2_dimethylhexane = {
	"2_2_dimethylhexane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_2_2_dimethylhexane}
};


static const IdealData ideal_data_chlorobenzene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-33.89, 0}
			,{0.5631, 1}
			,{-4.52E-04, 2}
			,{1.43E-07, 3}
		}
	}}
};

static const CubicData cubic_data_chlorobenzene = {
	.M = 112.559
	,.T_c = 632.4
	,.p_c = (45.2 * 1e5)
	,.rho_c = (1000 * 112.559 / 308.0)
	,.T_t = 0
	,.omega = 0.249
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (51870 / 112.559), (99230 / 112.559)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_chlorobenzene
};

const EosData eos_rpp_chlorobenzene = {
	"chlorobenzene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_chlorobenzene}
};


static const IdealData ideal_data_trifluorobromomethane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{21.88, 0}
			,{0.2159, 1}
			,{-2.11E-04, 2}
			,{7.46E-08, 3}
		}
	}}
};

static const CubicData cubic_data_trifluorobromomethane = {
	.M = 148.910
	,.T_c = 340.2
	,.p_c = (39.7 * 1e5)
	,.rho_c = (1000 * 148.910 / 195.9)
	,.T_t = 0
	,.omega = 0.171
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-649400 / 148.910), (-697500 / 148.910)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_trifluorobromomethane
};

const EosData eos_rpp_trifluorobromomethane = {
	"trifluorobromomethane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_trifluorobromomethane}
};


static const IdealData ideal_data_ethyl_butyl_ether = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{23.63, 0}
			,{0.5367, 1}
			,{2.53E-04, 2}
			,{4.16E-08, 3}
		}
	}}
};

static const CubicData cubic_data_ethyl_butyl_ether = {
	.M = 102.177
	,.T_c = 531.0
	,.p_c = (30.4 * 1e5)
	,.rho_c = (1000 * 102.177 / 390.0)
	,.T_t = 0
	,.omega = 0.400
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, NAN, NAN}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_ethyl_butyl_ether
};

const EosData eos_rpp_ethyl_butyl_ether = {
	"ethyl_butyl_ether"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_ethyl_butyl_ether}
};


static const IdealData ideal_data_1_decene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-4.66, 0}
			,{0.9077, 1}
			,{-5.06E-04, 2}
			,{1.10E-07, 3}
		}
	}}
};

static const CubicData cubic_data_1_decene = {
	.M = 140.270
	,.T_c = 615.0
	,.p_c = (22.0 * 1e5)
	,.rho_c = (1000 * 140.270 / 650.0)
	,.T_t = 0
	,.omega = 0.491
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-124200 / 140.270), (121100 / 140.270)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_1_decene
};

const EosData eos_rpp_1_decene = {
	"1_decene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_1_decene}
};


static const IdealData ideal_data_vinyl_acetate = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{15.16, 0}
			,{0.2795, 1}
			,{-8.81E-05, 2}
			,{-1.66E-08, 3}
		}
	}}
};

static const CubicData cubic_data_vinyl_acetate = {
	.M = 86.091
	,.T_c = 525.0
	,.p_c = (43.5 * 1e5)
	,.rho_c = (1000 * 86.091 / 265.0)
	,.T_t = 0
	,.omega = 0.340
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-316000 / 86.091), NAN}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_vinyl_acetate
};

const EosData eos_rpp_vinyl_acetate = {
	"vinyl_acetate"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_vinyl_acetate}
};


static const IdealData ideal_data_n_dodecylcyclopentane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-63.26, 0}
			,{1.695, 1}
			,{-9.77E-04, 2}
			,{2.19E-07, 3}
		}
	}}
};

static const CubicData cubic_data_n_dodecylcyclopentane = {
	.M = 238.459
	,.T_c = 750.0
	,.p_c = (12.9 * 1e5)
	,.rho_c = -1
	,.T_min = 463
	,.omega = 0.719
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-336100 / 238.459), (126000 / 238.459)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_n_dodecylcyclopentane
};

const EosData eos_rpp_n_dodecylcyclopentane = {
	"n_dodecylcyclopentane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_n_dodecylcyclopentane}
};


static const IdealData ideal_data_cis_decalin = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-112.50, 0}
			,{1.118, 1}
			,{-6.61E-04, 2}
			,{1.44E-07, 3}
		}
	}}
};

static const CubicData cubic_data_cis_decalin = {
	.M = 138.254
	,.T_c = 702.3
	,.p_c = (32.0 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.286
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-169100 / 138.254), (85870 / 138.254)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_cis_decalin
};

const EosData eos_rpp_cis_decalin = {
	"cis_decalin"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_cis_decalin}
};


static const IdealData ideal_data_3_methyl_3_ethylpentane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-9.22, 0}
			,{0.7859, 1}
			,{-4.40E-04, 2}
			,{9.70E-08, 3}
		}
	}}
};

static const CubicData cubic_data_3_methyl_3_ethylpentane = {
	.M = 114.232
	,.T_c = 576.6
	,.p_c = (28.1 * 1e5)
	,.rho_c = (1000 * 114.232 / 455.0)
	,.T_t = 0
	,.omega = 0.303
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-215100 / 114.232), (19930 / 114.232)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_3_methyl_3_ethylpentane
};

const EosData eos_rpp_3_methyl_3_ethylpentane = {
	"3_methyl_3_ethylpentane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_3_methyl_3_ethylpentane}
};


static const IdealData ideal_data_isobutyl_amine = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{9.49, 0}
			,{0.443, 1}
			,{-2.11E-04, 2}
			,{2.33E-08, 3}
		}
	}}
};

static const CubicData cubic_data_isobutyl_amine = {
	.M = 73.139
	,.T_c = 514.3
	,.p_c = (41.0 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.368
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, NAN, NAN}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_isobutyl_amine
};

const EosData eos_rpp_isobutyl_amine = {
	"isobutyl_amine"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_isobutyl_amine}
};


static const IdealData ideal_data_n_nonylcyclopentane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-60.81, 0}
			,{1.412, 1}
			,{-8.16E-04, 2}
			,{1.83E-07, 3}
		}
	}}
};

static const CubicData cubic_data_n_nonylcyclopentane = {
	.M = 196.378
	,.T_c = 710.5
	,.p_c = (16.5 * 1e5)
	,.rho_c = -1
	,.T_min = 400
	,.omega = 0.610
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-271500 / 196.378), (103500 / 196.378)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_n_nonylcyclopentane
};

const EosData eos_rpp_n_nonylcyclopentane = {
	"n_nonylcyclopentane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_n_nonylcyclopentane}
};


static const IdealData ideal_data_toluene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-2.435e+1, 0}
			,{5.125e-1, 1}
			,{-2.765e-4, 2}
			,{4.911e-8, 3}
		}
	}}
};

static const CubicData cubic_data_toluene = {
	.M = 92.141
	,.T_c = 591.8
	,.p_c = (41.0 * 1e5)
	,.rho_c = (1000 * 92.141 / 316)
	,.T_t = 0
	,.omega = 0.263
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (5.003e+4 / 92.141), (1.221e+5 / 92.141)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_toluene
};

const EosData eos_rpp_toluene = {
	"toluene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_toluene}
};


static const IdealData ideal_data_oxygen = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{2.811e1, 0}
			,{-3.680e-6, 1}
			,{1.746e-5, 2}
			,{-1.065e-8, 3}
		}
	}}
};

static const CubicData cubic_data_oxygen = {
	.M = 31.999
	,.T_c = 154.6
	,.p_c = (50.4 * 1e5)
	,.rho_c = (1000 * 31.999 / 73.4)
	,.T_t = 0
	,.omega = 0.025
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (0.00 / 31.999), (0.00 / 31.999)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_oxygen
};

const EosData eos_rpp_oxygen = {
	"oxygen"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_oxygen}
};


static const IdealData ideal_data_hydrogen_deuteride = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{29.47, 0}
			,{-0.001329, 1}
			,{1.31E-06, 2}
			,{1.28E-09, 3}
		}
	}}
};

static const CubicData cubic_data_hydrogen_deuteride = {
	.M = 3.023
	,.T_c = 36.0
	,.p_c = (14.8 * 1e5)
	,.rho_c = (1000 * 3.023 / 62.7)
	,.T_t = 0
	,.omega = -0.179
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (322 / 3.023), (-1465 / 3.023)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_hydrogen_deuteride
};

const EosData eos_rpp_hydrogen_deuteride = {
	"hydrogen_deuteride"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_hydrogen_deuteride}
};


static const IdealData ideal_data_2_methyl_2_butene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{11.80, 0}
			,{0.3509, 1}
			,{-1.12E-04, 2}
			,{-5.81E-09, 3}
		}
	}}
};

static const CubicData cubic_data_2_methyl_2_butene = {
	.M = 70.135
	,.T_c = 470.0
	,.p_c = (34.5 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.244
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-42580 / 70.135), (59700 / 70.135)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_2_methyl_2_butene
};

const EosData eos_rpp_2_methyl_2_butene = {
	"2_methyl_2_butene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_2_methyl_2_butene}
};


static const IdealData ideal_data_isopropylbenzene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-39.36, 0}
			,{0.7842, 1}
			,{-5.09E-04, 2}
			,{1.29E-07, 3}
		}
	}}
};

static const CubicData cubic_data_isopropylbenzene = {
	.M = 120.195
	,.T_c = 631.1
	,.p_c = (32.1 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.326
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (3.94E+03 / 120.195), (1.37E+05 / 120.195)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_isopropylbenzene
};

const EosData eos_rpp_isopropylbenzene = {
	"isopropylbenzene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_isopropylbenzene}
};


static const IdealData ideal_data_ozone = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{20.54, 0}
			,{0.08009, 1}
			,{-6.24E-05, 2}
			,{1.70E-08, 3}
		}
	}}
};

static const CubicData cubic_data_ozone = {
	.M = 47.998
	,.T_c = 261.1
	,.p_c = (55.7 * 1e5)
	,.rho_c = (1000 * 47.998 / 88.9)
	,.T_min = 109
	,.omega = 0.691
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (142800 / 47.998), (162900 / 47.998)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_ozone
};

const EosData eos_rpp_ozone = {
	"ozone"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_ozone}
};


static const IdealData ideal_data_benzene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-3.392e+1, 0}
			,{4.739e-1, 1}
			,{-3.017e-4, 2}
			,{7.130e-8, 3}
		}
	}}
};

static const CubicData cubic_data_benzene = {
	.M = 78.114
	,.T_c = 562.2
	,.p_c = (48.9 * 1e5)
	,.rho_c = (1000 * 78.114 / 259)
	,.T_t = 0
	,.omega = 0.212
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (8.298e+4 / 78.114), (1.297e+5 / 78.114)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_benzene
};

const EosData eos_rpp_benzene = {
	"benzene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_benzene}
};


static const IdealData ideal_data_1_2_pentadiene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{8.83, 0}
			,{0.388, 1}
			,{-2.28E-04, 2}
			,{5.25E-08, 3}
		}
	}}
};

static const CubicData cubic_data_1_2_pentadiene = {
	.M = 68.119
	,.T_c = 503.0
	,.p_c = (40.7 * 1e5)
	,.rho_c = (1000 * 68.119 / 276.0)
	,.T_t = 0
	,.omega = 0.173
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (145700 / 68.119), (210600 / 68.119)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_1_2_pentadiene
};

const EosData eos_rpp_1_2_pentadiene = {
	"1_2_pentadiene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_1_2_pentadiene}
};


static const IdealData ideal_data_hydrazine = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{9.77, 0}
			,{0.1895, 1}
			,{-1.66E-04, 2}
			,{6.03E-08, 3}
		}
	}}
};

static const CubicData cubic_data_hydrazine = {
	.M = 32.045
	,.T_c = 653.0
	,.p_c = (147.0 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.316
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (95250 / 32.045), (158600 / 32.045)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_hydrazine
};

const EosData eos_rpp_hydrazine = {
	"hydrazine"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_hydrazine}
};


static const IdealData ideal_data_2_2_3_trimethylpentane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-9.22, 0}
			,{0.7859, 1}
			,{-4.40E-04, 2}
			,{9.70E-08, 3}
		}
	}}
};

static const CubicData cubic_data_2_2_3_trimethylpentane = {
	.M = 114.232
	,.T_c = 563.5
	,.p_c = (27.3 * 1e5)
	,.rho_c = (1000 * 114.232 / 436.0)
	,.T_t = 0
	,.omega = 0.297
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-220300 / 114.232), (17120 / 114.232)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_2_2_3_trimethylpentane
};

const EosData eos_rpp_2_2_3_trimethylpentane = {
	"2_2_3_trimethylpentane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_2_2_3_trimethylpentane}
};


static const IdealData ideal_data_pyrrolidine = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-51.53, 0}
			,{0.5338, 1}
			,{-3.24E-04, 2}
			,{7.53E-08, 3}
		}
	}}
};

static const CubicData cubic_data_pyrrolidine = {
	.M = 71.123
	,.T_c = 568.6
	,.p_c = (56.1 * 1e5)
	,.rho_c = (1000 * 71.123 / 249.0)
	,.T_t = 0
	,.omega = 0.274
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-3600 / 71.123), (114800 / 71.123)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_pyrrolidine
};

const EosData eos_rpp_pyrrolidine = {
	"pyrrolidine"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_pyrrolidine}
};


static const IdealData ideal_data_phosphine = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{23.23, 0}
			,{0.04401, 1}
			,{1.30E-05, 2}
			,{-1.60E-08, 3}
		}
	}}
};

static const CubicData cubic_data_phosphine = {
	.M = 33.998
	,.T_c = 324.5
	,.p_c = (65.4 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.038
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (22900 / 33.998), (25410 / 33.998)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_phosphine
};

const EosData eos_rpp_phosphine = {
	"phosphine"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_phosphine}
};


static const IdealData ideal_data_1_undecene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-5.59, 0}
			,{1.003, 1}
			,{-5.60E-04, 2}
			,{1.22E-07, 3}
		}
	}}
};

static const CubicData cubic_data_1_undecene = {
	.M = 154.297
	,.T_c = 637.0
	,.p_c = (19.9 * 1e5)
	,.rho_c = -1
	,.T_min = 350
	,.omega = 0.518
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-1.45E-05 / 154.297), (129500 / 154.297)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_1_undecene
};

const EosData eos_rpp_1_undecene = {
	"1_undecene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_1_undecene}
};


static const IdealData ideal_data_1_octene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-4.10, 0}
			,{0.7239, 1}
			,{-4.04E-04, 2}
			,{8.68E-08, 3}
		}
	}}
};

static const CubicData cubic_data_1_octene = {
	.M = 112.216
	,.T_c = 566.7
	,.p_c = (26.2 * 1e5)
	,.rho_c = (1000 * 112.216 / 464.0)
	,.T_t = 0
	,.omega = 0.386
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-82980 / 112.216), (104300 / 112.216)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_1_octene
};

const EosData eos_rpp_1_octene = {
	"1_octene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_1_octene}
};


static const IdealData ideal_data_n_butyric_acid = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{11.74, 0}
			,{0.4137, 1}
			,{-2.43E-04, 2}
			,{5.53E-08, 3}
		}
	}}
};

static const CubicData cubic_data_n_butyric_acid = {
	.M = 88.107
	,.T_c = 628.0
	,.p_c = (52.7 * 1e5)
	,.rho_c = (1000 * 88.107 / 290.0)
	,.T_t = 0
	,.omega = 0.683
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-476200 / 88.107), NAN}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_n_butyric_acid
};

const EosData eos_rpp_n_butyric_acid = {
	"n_butyric_acid"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_n_butyric_acid}
};


static const IdealData ideal_data_2_2_5_trimethylhexane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-54.11, 0}
			,{1.095, 1}
			,{-7.75E-04, 2}
			,{2.26E-07, 3}
		}
	}}
};

static const CubicData cubic_data_2_2_5_trimethylhexane = {
	.M = 128.259
	,.T_c = 568.0
	,.p_c = (23.3 * 1e5)
	,.rho_c = (1000 * 128.259 / 519.0)
	,.T_t = 0
	,.omega = 0.357
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-254200 / 128.259), (13440 / 128.259)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_2_2_5_trimethylhexane
};

const EosData eos_rpp_2_2_5_trimethylhexane = {
	"2_2_5_trimethylhexane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_2_2_5_trimethylhexane}
};


static const IdealData ideal_data_n_butylbenzene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-22.99, 0}
			,{0.7934, 1}
			,{-4.40E-04, 2}
			,{8.57E-08, 3}
		}
	}}
};

static const CubicData cubic_data_n_butylbenzene = {
	.M = 134.222
	,.T_c = 660.5
	,.p_c = (28.9 * 1e5)
	,.rho_c = (1000 * 134.222 / 497.0)
	,.T_t = 0
	,.omega = 0.393
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-13820 / 134.222), (144800 / 134.222)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_n_butylbenzene
};

const EosData eos_rpp_n_butylbenzene = {
	"n_butylbenzene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_n_butylbenzene}
};


static const IdealData ideal_data_dihexylether = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{33.54, 0}
			,{1.073, 1}
			,{-5.54E-04, 2}
			,{1.68E-07, 3}
		}
	}}
};

static const CubicData cubic_data_dihexylether = {
	.M = 186.339
	,.T_c = 657.0
	,.p_c = (18.2 * 1e5)
	,.rho_c = (1000 * 186.339 / 720.0)
	,.T_min = 373
	,.omega = 0.700
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, NAN, NAN}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_dihexylether
};

const EosData eos_rpp_dihexylether = {
	"dihexylether"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_dihexylether}
};


static const IdealData ideal_data_1_pentadecene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-9.20, 0}
			,{1.382, 1}
			,{-7.78E-04, 2}
			,{1.70E-07, 3}
		}
	}}
};

static const CubicData cubic_data_1_pentadecene = {
	.M = 210.405
	,.T_c = 704.0
	,.p_c = (14.5 * 1e5)
	,.rho_c = -1
	,.T_min = 400
	,.omega = 0.682
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-227400 / 210.405), (163200 / 210.405)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_1_pentadecene
};

const EosData eos_rpp_1_pentadecene = {
	"1_pentadecene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_1_pentadecene}
};


static const IdealData ideal_data_methyl_acetylene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{14.71, 0}
			,{0.1864, 1}
			,{-1.17E-04, 2}
			,{3.22E-08, 3}
		}
	}}
};

static const CubicData cubic_data_methyl_acetylene = {
	.M = 40.065
	,.T_c = 402.4
	,.p_c = (56.3 * 1e5)
	,.rho_c = (1000 * 40.065 / 164.0)
	,.T_t = 0
	,.omega = 0.215
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (185600 / 40.065), (194600 / 40.065)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_methyl_acetylene
};

const EosData eos_rpp_methyl_acetylene = {
	"methyl_acetylene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_methyl_acetylene}
};


static const IdealData ideal_data_difluoromethane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{11.79, 0}
			,{0.1181, 1}
			,{-4.84E-05, 2}
			,{2.13E-09, 3}
		}
	}}
};

static const CubicData cubic_data_difluoromethane = {
	.M = 52.023
	,.T_c = 351.6
	,.p_c = (58.3 * 1e5)
	,.rho_c = (1000 * 52.023 / 120.8)
	,.T_t = 0
	,.omega = 0.271
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-450900 / 52.023), (-422900 / 52.023)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_difluoromethane
};

const EosData eos_rpp_difluoromethane = {
	"difluoromethane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_difluoromethane}
};


static const IdealData ideal_data_benzoic_acid = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-51.29, 0}
			,{0.6293, 1}
			,{-4.24E-04, 2}
			,{1.06E-07, 3}
		}
	}}
};

static const CubicData cubic_data_benzoic_acid = {
	.M = 122.124
	,.T_c = 752.0
	,.p_c = (45.6 * 1e5)
	,.rho_c = (1000 * 122.124 / 341.0)
	,.T_min = 405
	,.omega = 0.620
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-290400 / 122.124), (-210600 / 122.124)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_benzoic_acid
};

const EosData eos_rpp_benzoic_acid = {
	"benzoic_acid"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_benzoic_acid}
};


static const IdealData ideal_data_aluminum_trichloride = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{50.54, 0}
			,{0.1037, 1}
			,{-1.20E-04, 2}
			,{4.79E-08, 3}
		}
	}}
};

static const CubicData cubic_data_aluminum_trichloride = {
	.M = 133.341
	,.T_c = 620.0
	,.p_c = (26.3 * 1e5)
	,.rho_c = (1000 * 133.341 / 259.0)
	,.T_t = 0
	,.omega = 0.660
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-584900 / 133.341), (-570400 / 133.341)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_aluminum_trichloride
};

const EosData eos_rpp_aluminum_trichloride = {
	"aluminum_trichloride"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_aluminum_trichloride}
};


static const IdealData ideal_data_perflourobenzene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{36.28, 0}
			,{0.5267, 1}
			,{-4.55E-04, 2}
			,{1.46E-07, 3}
		}
	}}
};

static const CubicData cubic_data_perflourobenzene = {
	.M = 186.056
	,.T_c = 516.7
	,.p_c = (33.0 * 1e5)
	,.rho_c = (1000 * 186.056 / 335.0)
	,.T_t = 0
	,.omega = 0.396
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-957300 / 186.056), (-880000 / 186.056)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_perflourobenzene
};

const EosData eos_rpp_perflourobenzene = {
	"perflourobenzene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_perflourobenzene}
};


static const IdealData ideal_data_2_methyl_butane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-9.52, 0}
			,{0.5066001, 1}
			,{-2.73E-04, 2}
			,{5.72E-08, 3}
		}
	}}
};

static const CubicData cubic_data_2_methyl_butane = {
	.M = 72.151
	,.T_c = 460.4
	,.p_c = (33.9 * 1e5)
	,.rho_c = (1000 * 72.151 / 306.0)
	,.T_t = 0
	,.omega = 0.227
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-154600 / 72.151), (-14820 / 72.151)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_2_methyl_butane
};

const EosData eos_rpp_2_methyl_butane = {
	"2_methyl_butane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_2_methyl_butane}
};


static const IdealData ideal_data_2_3_4_trimethylpentane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-9.22, 0}
			,{0.7859, 1}
			,{-4.40E-04, 2}
			,{9.70E-08, 3}
		}
	}}
};

static const CubicData cubic_data_2_3_4_trimethylpentane = {
	.M = 114.232
	,.T_c = 566.4
	,.p_c = (27.3 * 1e5)
	,.rho_c = (1000 * 114.232 / 461.0)
	,.T_t = 0
	,.omega = 0.315
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-217600 / 114.232), (18920 / 114.232)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_2_3_4_trimethylpentane
};

const EosData eos_rpp_2_3_4_trimethylpentane = {
	"2_3_4_trimethylpentane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_2_3_4_trimethylpentane}
};


static const IdealData ideal_data_n_pentane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-3.626, 0}
			,{4.873e-1, 1}
			,{-2.580e-4, 2}
			,{5.305e-8, 3}
		}
	}}
};

static const CubicData cubic_data_n_pentane = {
	.M = 72.151
	,.T_c = 469.7
	,.p_c = (33.7 * 1e5)
	,.rho_c = (1000 * 72.151 / 304)
	,.T_t = 0
	,.omega = 0.251
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-1.465e+5 / 72.151), (-8.370e+3 / 72.151)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_n_pentane
};

const EosData eos_rpp_n_pentane = {
	"n_pentane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_n_pentane}
};


static const IdealData ideal_data_1_chlorobutane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-2.61, 0}
			,{0.4497, 1}
			,{-2.94E-04, 2}
			,{8.08E-08, 3}
		}
	}}
};

static const CubicData cubic_data_1_chlorobutane = {
	.M = 92.569
	,.T_c = 542.0
	,.p_c = (36.8 * 1e5)
	,.rho_c = (1000 * 92.569 / 312.0)
	,.T_t = 0
	,.omega = 0.218
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-147400 / 92.569), (-38810 / 92.569)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_1_chlorobutane
};

const EosData eos_rpp_1_chlorobutane = {
	"1_chlorobutane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_1_chlorobutane}
};


static const IdealData ideal_data_methyl_amine = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{11.48, 0}
			,{0.1427, 1}
			,{-5.33E-05, 2}
			,{4.75E-09, 3}
		}
	}}
};

static const CubicData cubic_data_methyl_amine = {
	.M = 31.058
	,.T_c = 430.0
	,.p_c = (74.3 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.292
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-23030 / 31.058), (32280 / 31.058)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_methyl_amine
};

const EosData eos_rpp_methyl_amine = {
	"methyl_amine"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_methyl_amine}
};


static const IdealData ideal_data_dimethyl_ether = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{17.02, 0}
			,{0.1791, 1}
			,{-5.23E-05, 2}
			,{-1.92E-09, 3}
		}
	}}
};

static const CubicData cubic_data_dimethyl_ether = {
	.M = 46.069
	,.T_c = 400.0
	,.p_c = (52.4 * 1e5)
	,.rho_c = (1000 * 46.069 / 178.0)
	,.T_t = 0
	,.omega = 0.200
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-184200 / 46.069), (-113000 / 46.069)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_dimethyl_ether
};

const EosData eos_rpp_dimethyl_ether = {
	"dimethyl_ether"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_dimethyl_ether}
};


static const IdealData ideal_data_3_3_dimethylhexane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-9.22, 0}
			,{0.7859, 1}
			,{-4.40E-04, 2}
			,{9.70E-08, 3}
		}
	}}
};

static const CubicData cubic_data_3_3_dimethylhexane = {
	.M = 114.232
	,.T_c = 562.0
	,.p_c = (26.5 * 1e5)
	,.rho_c = (1000 * 114.232 / 443.0)
	,.T_t = 0
	,.omega = 0.320
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-220300 / 114.232), (13270 / 114.232)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_3_3_dimethylhexane
};

const EosData eos_rpp_3_3_dimethylhexane = {
	"3_3_dimethylhexane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_3_3_dimethylhexane}
};


static const IdealData ideal_data_1_methyl_2_ethylbenzene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-16.45, 0}
			,{0.6996, 1}
			,{-4.12E-04, 2}
			,{9.33E-08, 3}
		}
	}}
};

static const CubicData cubic_data_1_methyl_2_ethylbenzene = {
	.M = 120.195
	,.T_c = 651.0
	,.p_c = (30.4 * 1e5)
	,.rho_c = (1000 * 120.195 / 460.0)
	,.T_t = 0
	,.omega = 0.294
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (1.21E+03 / 120.195), (1.31E+05 / 120.195)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_1_methyl_2_ethylbenzene
};

const EosData eos_rpp_1_methyl_2_ethylbenzene = {
	"1_methyl_2_ethylbenzene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_1_methyl_2_ethylbenzene}
};


static const IdealData ideal_data_1_2_2_trichlorotrifluoroetane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{61.14, 0}
			,{0.2874, 1}
			,{-2.42E-04, 2}
			,{6.90E-08, 3}
		}
	}}
};

static const CubicData cubic_data_1_2_2_trichlorotrifluoroetane = {
	.M = 187.380
	,.T_c = 487.3
	,.p_c = (34.1 * 1e5)
	,.rho_c = (1000 * 187.380 / 325.5)
	,.T_t = 0
	,.omega = 0.256
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-745700 / 187.380), NAN}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_1_2_2_trichlorotrifluoroetane
};

const EosData eos_rpp_1_2_2_trichlorotrifluoroetane = {
	"1_2_2_trichlorotrifluoroetane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_1_2_2_trichlorotrifluoroetane}
};


static const IdealData ideal_data_2_2_3_4_tetramethylpentane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-54.58, 0}
			,{1.089, 1}
			,{-7.57E-04, 2}
			,{2.14E-07, 3}
		}
	}}
};

static const CubicData cubic_data_2_2_3_4_tetramethylpentane = {
	.M = 128.259
	,.T_c = 592.7
	,.p_c = (26.0 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.313
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-237100 / 128.259), (32660 / 128.259)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_2_2_3_4_tetramethylpentane
};

const EosData eos_rpp_2_2_3_4_tetramethylpentane = {
	"2_2_3_4_tetramethylpentane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_2_2_3_4_tetramethylpentane}
};


static const IdealData ideal_data_1_1_1_trifluoroethane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{5.74, 0}
			,{0.3141, 1}
			,{-2.60E-04, 2}
			,{8.42E-08, 3}
		}
	}}
};

static const CubicData cubic_data_1_1_1_trifluoroethane = {
	.M = 84.041
	,.T_c = 346.3
	,.p_c = (37.6 * 1e5)
	,.rho_c = (1000 * 84.041 / 194.0)
	,.T_t = 0
	,.omega = 0.251
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-746100 / 84.041), (-679200 / 84.041)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_1_1_1_trifluoroethane
};

const EosData eos_rpp_1_1_1_trifluoroethane = {
	"1_1_1_trifluoroethane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_1_1_1_trifluoroethane}
};


static const IdealData ideal_data_fluorine = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{23.22, 0}
			,{0.03657, 1}
			,{-3.61E-05, 2}
			,{1.20E-08, 3}
		}
	}}
};

static const CubicData cubic_data_fluorine = {
	.M = 37.997
	,.T_c = 144.3
	,.p_c = (52.2 * 1e5)
	,.rho_c = (1000 * 37.997 / 66.3)
	,.T_t = 0
	,.omega = 0.054
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (0 / 37.997), (0 / 37.997)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_fluorine
};

const EosData eos_rpp_fluorine = {
	"fluorine"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_fluorine}
};


static const IdealData ideal_data_1_2_4_5_tetramethylbenzene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{16.52, 0}
			,{0.6519, 1}
			,{-2.88E-04, 2}
			,{3.26E-08, 3}
		}
	}}
};

static const CubicData cubic_data_1_2_4_5_tetramethylbenzene = {
	.M = 134.222
	,.T_c = 675.0
	,.p_c = (29.4 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.435
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-45300 / 134.222), (119500 / 134.222)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_1_2_4_5_tetramethylbenzene
};

const EosData eos_rpp_1_2_4_5_tetramethylbenzene = {
	"1_2_4_5_tetramethylbenzene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_1_2_4_5_tetramethylbenzene}
};


static const IdealData ideal_data_1_tridecene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-7.12, 0}
			,{1.191, 1}
			,{-6.67E-04, 2}
			,{1.45E-07, 3}
		}
	}}
};

static const CubicData cubic_data_1_tridecene = {
	.M = 182.351
	,.T_c = 674.0
	,.p_c = (17.0 * 1e5)
	,.rho_c = -1
	,.T_min = 370
	,.omega = 0.598
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-186100 / 182.351), (146400 / 182.351)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_1_tridecene
};

const EosData eos_rpp_1_tridecene = {
	"1_tridecene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_1_tridecene}
};


static const IdealData ideal_data_silicon_tetrachloride = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{56.58, 0}
			,{0.1636, 1}
			,{-1.90E-04, 2}
			,{7.57E-08, 3}
		}
	}}
};

static const CubicData cubic_data_silicon_tetrachloride = {
	.M = 169.898
	,.T_c = 508.1
	,.p_c = (35.9 * 1e5)
	,.rho_c = (1000 * 169.898 / 325.7)
	,.T_t = 0
	,.omega = 0.232
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-657700 / 169.898), (-617800 / 169.898)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_silicon_tetrachloride
};

const EosData eos_rpp_silicon_tetrachloride = {
	"silicon_tetrachloride"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_silicon_tetrachloride}
};


static const IdealData ideal_data_styrene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-2.825e+1, 0}
			,{6.159e-1, 1}
			,{-4.023e-4, 2}
			,{9.935e-8, 3}
		}
	}}
};

static const CubicData cubic_data_styrene = {
	.M = 104.152
	,.T_c = 647
	,.p_c = (39.9 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.257
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (1.475e+5 / 104.152), (2.139e+5 / 104.152)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_styrene
};

const EosData eos_rpp_styrene = {
	"styrene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_styrene}
};


static const IdealData ideal_data_2_3_3_trimethylpentane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-9.22, 0}
			,{0.7859, 1}
			,{-4.40E-04, 2}
			,{9.70E-08, 3}
		}
	}}
};

static const CubicData cubic_data_2_3_3_trimethylpentane = {
	.M = 114.232
	,.T_c = 573.6
	,.p_c = (28.2 * 1e5)
	,.rho_c = (1000 * 114.232 / 455.0)
	,.T_t = 0
	,.omega = 0.290
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-2.17E+05 / 114.232), (1.89E+04 / 114.232)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_2_3_3_trimethylpentane
};

const EosData eos_rpp_2_3_3_trimethylpentane = {
	"2_3_3_trimethylpentane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_2_3_3_trimethylpentane}
};


static const IdealData ideal_data_trans_1_2_dichloroethene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{18.28, 0}
			,{0.21, 1}
			,{-1.76E-04, 2}
			,{5.80E-08, 3}
		}
	}}
};

static const CubicData cubic_data_trans_1_2_dichloroethene = {
	.M = 96.944
	,.T_c = 513.0
	,.p_c = (48.1 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.232
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (4190 / 96.944), (26600 / 96.944)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_trans_1_2_dichloroethene
};

const EosData eos_rpp_trans_1_2_dichloroethene = {
	"trans_1_2_dichloroethene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_trans_1_2_dichloroethene}
};


static const IdealData ideal_data_2_methylheptane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-89.70, 0}
			,{1.242, 1}
			,{-1.18E-03, 2}
			,{4.62E-07, 3}
		}
	}}
};

static const CubicData cubic_data_2_methylheptane = {
	.M = 114.232
	,.T_c = 559.6
	,.p_c = (24.8 * 1e5)
	,.rho_c = (1000 * 114.232 / 488.0)
	,.T_t = 0
	,.omega = 0.378
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-215600 / 114.232), (12770 / 114.232)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_2_methylheptane
};

const EosData eos_rpp_2_methylheptane = {
	"2_methylheptane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_2_methylheptane}
};


static const IdealData ideal_data_carbon_dioxide = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{19.80, 0}
			,{7.344e-2, 1}
			,{-5.602e-5, 2}
			,{1.715e-8, 3}
		}
	}}
};

static const CubicData cubic_data_carbon_dioxide = {
	.M = 44.010
	,.T_c = 304.1
	,.p_c = (73.8 * 1e5)
	,.rho_c = (1000 * 44.010 / 93.9)
	,.T_t = 0
	,.omega = 0.239
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-3.938e+5 / 44.010), (-3.946e+5 / 44.010)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_carbon_dioxide
};

const EosData eos_rpp_carbon_dioxide = {
	"carbon_dioxide"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_carbon_dioxide}
};


static const IdealData ideal_data_ethyl_flouride = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{4.35, 0}
			,{0.218, 1}
			,{-1.17E-04, 2}
			,{2.41E-08, 3}
		}
	}}
};

static const CubicData cubic_data_ethyl_flouride = {
	.M = 48.060
	,.T_c = 375.3
	,.p_c = (50.2 * 1e5)
	,.rho_c = (1000 * 48.060 / 169.0)
	,.T_t = 0
	,.omega = 0.215
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-261700 / 48.060), (-209700 / 48.060)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_ethyl_flouride
};

const EosData eos_rpp_ethyl_flouride = {
	"ethyl_flouride"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_ethyl_flouride}
};


static const IdealData ideal_data_ethyl_benzoate = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{20.67, 0}
			,{0.6887, 1}
			,{-3.61E-04, 2}
			,{5.06E-08, 3}
		}
	}}
};

static const CubicData cubic_data_ethyl_benzoate = {
	.M = 150.178
	,.T_c = 668.7
	,.p_c = (23.2 * 1e5)
	,.rho_c = -1
	,.T_min = 317
	,.omega = 0.480
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, NAN, NAN}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_ethyl_benzoate
};

const EosData eos_rpp_ethyl_benzoate = {
	"ethyl_benzoate"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_ethyl_benzoate}
};


static const IdealData ideal_data_helium_3 = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{20.80, 0}
			,{0, 1}
			,{0.00E+00, 2}
			,{0.00E+00, 3}
		}
	}}
};

static const CubicData cubic_data_helium_3 = {
	.M = 3.017
	,.T_c = 3.3
	,.p_c = (1.1 * 1e5)
	,.rho_c = (1000 * 3.017 / 72.9)
	,.T_t = 0
	,.omega = -0.473
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, NAN, NAN}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_helium_3
};

const EosData eos_rpp_helium_3 = {
	"helium_3"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_helium_3}
};


static const IdealData ideal_data_propionaldehyde = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{11.72, 0}
			,{0.2614, 1}
			,{-1.30E-04, 2}
			,{2.13E-08, 3}
		}
	}}
};

static const CubicData cubic_data_propionaldehyde = {
	.M = 58.080
	,.T_c = 515.3
	,.p_c = (63.3 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.313
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-192200 / 58.080), (-130500 / 58.080)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_propionaldehyde
};

const EosData eos_rpp_propionaldehyde = {
	"propionaldehyde"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_propionaldehyde}
};


static const IdealData ideal_data_o_xylene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-15.85, 0}
			,{0.5962, 1}
			,{-3.44E-04, 2}
			,{7.53E-08, 3}
		}
	}}
};

static const CubicData cubic_data_o_xylene = {
	.M = 106.168
	,.T_c = 630.3
	,.p_c = (37.3 * 1e5)
	,.rho_c = (1000 * 106.168 / 369.0)
	,.T_t = 0
	,.omega = 0.310
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (19000 / 106.168), (122200 / 106.168)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_o_xylene
};

const EosData eos_rpp_o_xylene = {
	"o_xylene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_o_xylene}
};


static const IdealData ideal_data_helium_4 = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{20.80, 0}
			,{0, 1}
			,{0.00E+00, 2}
			,{0.00E+00, 3}
		}
	}}
};

static const CubicData cubic_data_helium_4 = {
	.M = 4.003
	,.T_c = 5.2
	,.p_c = (2.3 * 1e5)
	,.rho_c = (1000 * 4.003 / 57.4)
	,.T_t = 0
	,.omega = -0.365
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, NAN, NAN}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_helium_4
};

const EosData eos_rpp_helium_4 = {
	"helium_4"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_helium_4}
};


static const IdealData ideal_data_propylene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{3.710, 0}
			,{2.345e-1, 1}
			,{-1.160e-4, 2}
			,{2.205e-8, 3}
		}
	}}
};

static const CubicData cubic_data_propylene = {
	.M = 42.081
	,.T_c = 364.9
	,.p_c = (46.0 * 1e5)
	,.rho_c = (1000 * 42.081 / 181.0)
	,.T_t = 0
	,.omega = 0.144
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (2.043e+4 / 42.081), (6.276e+4 / 42.081)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_propylene
};

const EosData eos_rpp_propylene = {
	"propylene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_propylene}
};


static const IdealData ideal_data_n_pentadecane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-11.92, 0}
			,{1.433, 1}
			,{-7.97E-04, 2}
			,{1.72E-07, 3}
		}
	}}
};

static const CubicData cubic_data_n_pentadecane = {
	.M = 212.421
	,.T_c = 707.0
	,.p_c = (15.2 * 1e5)
	,.rho_c = (1000 * 212.421 / 880.0)
	,.T_min = 400
	,.omega = 0.706
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-353000 / 212.421), (75280 / 212.421)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_n_pentadecane
};

const EosData eos_rpp_n_pentadecane = {
	"n_pentadecane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_n_pentadecane}
};


static const IdealData ideal_data_iodobenzene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-29.27, 0}
			,{0.5564, 1}
			,{-4.51E-04, 2}
			,{1.44E-07, 3}
		}
	}}
};

static const CubicData cubic_data_iodobenzene = {
	.M = 204.011
	,.T_c = 721.0
	,.p_c = (45.2 * 1e5)
	,.rho_c = (1000 * 204.011 / 351.0)
	,.T_t = 0
	,.omega = 0.249
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (162700 / 204.011), (187900 / 204.011)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_iodobenzene
};

const EosData eos_rpp_iodobenzene = {
	"iodobenzene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_iodobenzene}
};


static const IdealData ideal_data_cycloheptane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-76.19, 0}
			,{0.7867, 1}
			,{4.20E-04, 2}
			,{7.56E-08, 3}
		}
	}}
};

static const CubicData cubic_data_cycloheptane = {
	.M = 98.189
	,.T_c = 604.2
	,.p_c = (38.1 * 1e5)
	,.rho_c = (1000 * 98.189 / 353.0)
	,.T_t = 0
	,.omega = 0.237
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-119400 / 98.189), (63050 / 98.189)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_cycloheptane
};

const EosData eos_rpp_cycloheptane = {
	"cycloheptane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_cycloheptane}
};


static const IdealData ideal_data_vinyl_ethyl_ether = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{17.28, 0}
			,{0.3236, 1}
			,{-1.47E-04, 2}
			,{2.15E-08, 3}
		}
	}}
};

static const CubicData cubic_data_vinyl_ethyl_ether = {
	.M = 72.107
	,.T_c = 475.0
	,.p_c = (40.7 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.268
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-140300 / 72.107), (475 / 72.107)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_vinyl_ethyl_ether
};

const EosData eos_rpp_vinyl_ethyl_ether = {
	"vinyl_ethyl_ether"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_vinyl_ethyl_ether}
};


static const IdealData ideal_data_ethylenediamine = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{38.30, 0}
			,{0.2407, 1}
			,{-4.34E-05, 2}
			,{-3.95E-08, 3}
		}
	}}
};

static const CubicData cubic_data_ethylenediamine = {
	.M = 60.099
	,.T_c = 593.0
	,.p_c = (62.8 * 1e5)
	,.rho_c = (1000 * 60.099 / 206.0)
	,.T_t = 0
	,.omega = 0.510
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, NAN, NAN}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_ethylenediamine
};

const EosData eos_rpp_ethylenediamine = {
	"ethylenediamine"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_ethylenediamine}
};


static const IdealData ideal_data_1_2_dichlorotetrafluoroethane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{38.78, 0}
			,{0.344, 1}
			,{-2.95E-04, 2}
			,{8.51E-08, 3}
		}
	}}
};

static const CubicData cubic_data_1_2_dichlorotetrafluoroethane = {
	.M = 170.922
	,.T_c = 418.9
	,.p_c = (32.6 * 1e5)
	,.rho_c = (1000 * 170.922 / 293.8)
	,.T_t = 0
	,.omega = 0.246
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-898500 / 170.922), NAN}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_1_2_dichlorotetrafluoroethane
};

const EosData eos_rpp_1_2_dichlorotetrafluoroethane = {
	"1_2_dichlorotetrafluoroethane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_1_2_dichlorotetrafluoroethane}
};


static const IdealData ideal_data_cyclopentanone = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-40.64, 0}
			,{0.5255, 1}
			,{-3.12E-04, 2}
			,{7.13E-08, 3}
		}
	}}
};

static const CubicData cubic_data_cyclopentanone = {
	.M = 84.118
	,.T_c = 634.6
	,.p_c = (51.1 * 1e5)
	,.rho_c = (1000 * 84.118 / 268.0)
	,.T_t = 0
	,.omega = 0.350
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-192800 / 84.118), NAN}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_cyclopentanone
};

const EosData eos_rpp_cyclopentanone = {
	"cyclopentanone"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_cyclopentanone}
};


static const IdealData ideal_data_methyl_acetate = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{16.55, 0}
			,{0.2245, 1}
			,{-4.34E-05, 2}
			,{2.91E-08, 3}
		}
	}}
};

static const CubicData cubic_data_methyl_acetate = {
	.M = 74.080
	,.T_c = 506.8
	,.p_c = (46.9 * 1e5)
	,.rho_c = (1000 * 74.080 / 228.0)
	,.T_t = 0
	,.omega = 0.326
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-409700 / 74.080), NAN}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_methyl_acetate
};

const EosData eos_rpp_methyl_acetate = {
	"methyl_acetate"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_methyl_acetate}
};


static const IdealData ideal_data_chlorotrifluoromethane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{22.81, 0}
			,{0.1911, 1}
			,{-1.58E-04, 2}
			,{4.46E-08, 3}
		}
	}}
};

static const CubicData cubic_data_chlorotrifluoromethane = {
	.M = 104.459
	,.T_c = 302.0
	,.p_c = (38.7 * 1e5)
	,.rho_c = (1000 * 104.459 / 180.4)
	,.T_t = 0
	,.omega = 0.198
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-695000 / 104.459), (-654400 / 104.459)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_chlorotrifluoromethane
};

const EosData eos_rpp_chlorotrifluoromethane = {
	"chlorotrifluoromethane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_chlorotrifluoromethane}
};


static const IdealData ideal_data_2_pentene_cis = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-14.29, 0}
			,{0.4601, 1}
			,{-2.54E-04, 2}
			,{5.46E-08, 3}
		}
	}}
};

static const CubicData cubic_data_2_pentene_cis = {
	.M = 70.135
	,.T_c = 476.0
	,.p_c = (36.5 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.251
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-28090 / 70.135), (71890 / 70.135)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_2_pentene_cis
};

const EosData eos_rpp_2_pentene_cis = {
	"2_pentene_cis"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_2_pentene_cis}
};


static const IdealData ideal_data_hydrogen_bromide = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{30.65, 0}
			,{-0.009462, 1}
			,{1.72E-05, 2}
			,{-6.24E-09, 3}
		}
	}}
};

static const CubicData cubic_data_hydrogen_bromide = {
	.M = 80.912
	,.T_c = 363.2
	,.p_c = (85.5 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.088
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-36260 / 80.912), (-53300 / 80.912)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_hydrogen_bromide
};

const EosData eos_rpp_hydrogen_bromide = {
	"hydrogen_bromide"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_hydrogen_bromide}
};


static const IdealData ideal_data_3_methylheptane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-9.22, 0}
			,{0.7859, 1}
			,{-4.40E-04, 2}
			,{9.70E-08, 3}
		}
	}}
};

static const CubicData cubic_data_3_methylheptane = {
	.M = 114.232
	,.T_c = 563.7
	,.p_c = (25.5 * 1e5)
	,.rho_c = (1000 * 114.232 / 464.0)
	,.T_t = 0
	,.omega = 0.370
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-212800 / 114.232), (13730 / 114.232)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_3_methylheptane
};

const EosData eos_rpp_3_methylheptane = {
	"3_methylheptane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_3_methylheptane}
};


static const IdealData ideal_data_isopropyl_alcohol = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{32.43, 0}
			,{0.1885, 1}
			,{6.41E-05, 2}
			,{-9.26E-08, 3}
		}
	}}
};

static const CubicData cubic_data_isopropyl_alcohol = {
	.M = 60.096
	,.T_c = 508.3
	,.p_c = (47.6 * 1e5)
	,.rho_c = (1000 * 60.096 / 220.0)
	,.T_t = 0
	,.omega = 0.665
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-272600 / 60.096), (-173500 / 60.096)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_isopropyl_alcohol
};

const EosData eos_rpp_isopropyl_alcohol = {
	"isopropyl_alcohol"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_isopropyl_alcohol}
};


static const IdealData ideal_data_n_heptylcyclopentane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-59.26, 0}
			,{1.223, 1}
			,{-7.08E-04, 2}
			,{1.60E-07, 3}
		}
	}}
};

static const CubicData cubic_data_n_heptylcyclopentane = {
	.M = 168.324
	,.T_c = 679.0
	,.p_c = (19.4 * 1e5)
	,.rho_c = -1
	,.T_min = 368
	,.omega = 0.515
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-230300 / 168.324), (86670 / 168.324)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_n_heptylcyclopentane
};

const EosData eos_rpp_n_heptylcyclopentane = {
	"n_heptylcyclopentane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_n_heptylcyclopentane}
};


static const IdealData ideal_data_diethylbenzene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-3.742e+1, 0}
			,{8.671e-1, 1}
			,{-5.560e-4, 2}
			,{1.411e-7, 3}
		}
	}}
};

static const CubicData cubic_data_diethylbenzene = {
	.M = 134.222
	,.T_c = 657.9
	,.p_c = (28.0 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.404
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-2.227e+4 / 134.222), (1.380e+5 / 134.222)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_diethylbenzene
};

const EosData eos_rpp_diethylbenzene = {
	"diethylbenzene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_diethylbenzene}
};


static const IdealData ideal_data_2_methylpyridine = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-36.26, 0}
			,{0.5584, 1}
			,{-3.70E-04, 2}
			,{9.66E-08, 3}
		}
	}}
};

static const CubicData cubic_data_2_methylpyridine = {
	.M = 93.129
	,.T_c = 621.0
	,.p_c = (46.0 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.299
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (99020 / 93.129), (177200 / 93.129)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_2_methylpyridine
};

const EosData eos_rpp_2_methylpyridine = {
	"2_methylpyridine"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_2_methylpyridine}
};


static const IdealData ideal_data_methyl_chloride = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{13.88, 0}
			,{0.1014, 1}
			,{-3.89E-05, 2}
			,{2.57E-09, 3}
		}
	}}
};

static const CubicData cubic_data_methyl_chloride = {
	.M = 50.488
	,.T_c = 416.3
	,.p_c = (67.0 * 1e5)
	,.rho_c = (1000 * 50.488 / 138.9)
	,.T_t = 0
	,.omega = 0.153
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-86370 / 50.488), (-62930 / 50.488)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_methyl_chloride
};

const EosData eos_rpp_methyl_chloride = {
	"methyl_chloride"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_methyl_chloride}
};


static const IdealData ideal_data_2_hexene_cis = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-9.81, 0}
			,{0.5309, 1}
			,{-2.72E-04, 2}
			,{4.83E-08, 3}
		}
	}}
};

static const CubicData cubic_data_2_hexene_cis = {
	.M = 84.162
	,.T_c = 518.0
	,.p_c = (32.8 * 1e5)
	,.rho_c = (1000 * 84.162 / 351.0)
	,.T_t = 0
	,.omega = 0.256
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-52380 / 84.162), (76280 / 84.162)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_2_hexene_cis
};

const EosData eos_rpp_2_hexene_cis = {
	"2_hexene_cis"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_2_hexene_cis}
};


static const IdealData ideal_data_2_4_dimethylpentane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-7.05, 0}
			,{0.6837, 1}
			,{-3.73E-04, 2}
			,{7.83E-08, 3}
		}
	}}
};

static const CubicData cubic_data_2_4_dimethylpentane = {
	.M = 100.205
	,.T_c = 519.8
	,.p_c = (27.4 * 1e5)
	,.rho_c = (1000 * 100.205 / 418.0)
	,.T_t = 0
	,.omega = 0.302
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-202100 / 100.205), (3100 / 100.205)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_2_4_dimethylpentane
};

const EosData eos_rpp_2_4_dimethylpentane = {
	"2_4_dimethylpentane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_2_4_dimethylpentane}
};


static const IdealData ideal_data_2_2_4_trimethylhexane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-60.13, 0}
			,{1.104, 1}
			,{-7.71E-04, 2}
			,{2.19E-07, 3}
		}
	}}
};

static const CubicData cubic_data_2_2_4_trimethylhexane = {
	.M = 128.259
	,.T_c = 573.7
	,.p_c = (23.7 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.321
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-243400 / 128.259), (22520 / 128.259)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_2_2_4_trimethylhexane
};

const EosData eos_rpp_2_2_4_trimethylhexane = {
	"2_2_4_trimethylhexane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_2_2_4_trimethylhexane}
};


static const IdealData ideal_data_phenol = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-35.84, 0}
			,{0.5983, 1}
			,{-4.83E-04, 2}
			,{1.53E-07, 3}
		}
	}}
};

static const CubicData cubic_data_phenol = {
	.M = 94.113
	,.T_c = 694.2
	,.p_c = (61.3 * 1e5)
	,.rho_c = (1000 * 94.113 / 229.0)
	,.T_t = 0
	,.omega = 0.438
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-96420 / 94.113), (-32900 / 94.113)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_phenol
};

const EosData eos_rpp_phenol = {
	"phenol"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_phenol}
};


static const IdealData ideal_data_2_2_dimethylpropane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-16.59, 0}
			,{0.5552, 1}
			,{-3.31E-04, 2}
			,{7.63E-08, 3}
		}
	}}
};

static const CubicData cubic_data_2_2_dimethylpropane = {
	.M = 72.151
	,.T_c = 433.8
	,.p_c = (32.0 * 1e5)
	,.rho_c = (1000 * 72.151 / 303.0)
	,.T_t = 0
	,.omega = 0.197
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-166100 / 72.151), (-15240 / 72.151)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_2_2_dimethylpropane
};

const EosData eos_rpp_2_2_dimethylpropane = {
	"2_2_dimethylpropane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_2_2_dimethylpropane}
};


static const IdealData ideal_data_benzaldehyde = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-12.14, 0}
			,{0.4961, 1}
			,{-2.85E-04, 2}
			,{5.17E-08, 3}
		}
	}}
};

static const CubicData cubic_data_benzaldehyde = {
	.M = 106.124
	,.T_c = 694.8
	,.p_c = (45.4 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.316
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-36800 / 106.124), (22400 / 106.124)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_benzaldehyde
};

const EosData eos_rpp_benzaldehyde = {
	"benzaldehyde"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_benzaldehyde}
};


static const IdealData ideal_data_cyclohexane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-54.54, 0}
			,{0.6113, 1}
			,{-2.52E-04, 2}
			,{1.32E-08, 3}
		}
	}}
};

static const CubicData cubic_data_cyclohexane = {
	.M = 84.162
	,.T_c = 553.5
	,.p_c = (40.7 * 1e5)
	,.rho_c = (1000 * 84.162 / 308.0)
	,.T_t = 0
	,.omega = 0.212
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-123200 / 84.162), (31780 / 84.162)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_cyclohexane
};

const EosData eos_rpp_cyclohexane = {
	"cyclohexane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_cyclohexane}
};


static const IdealData ideal_data_vinyl_chloride = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{5.95, 0}
			,{0.2019, 1}
			,{-1.54E-04, 2}
			,{4.77E-08, 3}
		}
	}}
};

static const CubicData cubic_data_vinyl_chloride = {
	.M = 62.499
	,.T_c = 425.0
	,.p_c = (51.5 * 1e5)
	,.rho_c = (1000 * 62.499 / 169.0)
	,.T_t = 0
	,.omega = 0.122
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (35170 / 62.499), (51540 / 62.499)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_vinyl_chloride
};

const EosData eos_rpp_vinyl_chloride = {
	"vinyl_chloride"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_vinyl_chloride}
};


static const IdealData ideal_data_i_butane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-1.390, 0}
			,{3.847e-1, 1}
			,{-1.846e-4, 2}
			,{2.895e-8, 3}
		}
	}}
};

static const CubicData cubic_data_i_butane = {
	.M = 58.124
	,.T_c = 408.2
	,.p_c = (36.5 * 1e5)
	,.rho_c = (1000 * 58.124 / 263)
	,.T_t = 0
	,.omega = 0.183
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-1.346e+5 / 58.124), (-2.090e+4 / 58.124)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_i_butane
};

const EosData eos_rpp_i_butane = {
	"i_butane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_i_butane}
};


static const IdealData ideal_data_1_2_4_trimethylbenzene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-4.67, 0}
			,{0.6238, 1}
			,{-3.26E-04, 2}
			,{6.38E-08, 3}
		}
	}}
};

static const CubicData cubic_data_1_2_4_trimethylbenzene = {
	.M = 120.195
	,.T_c = 649.2
	,.p_c = (32.3 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.376
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-1.39E+04 / 120.195), (1.17E+05 / 120.195)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_1_2_4_trimethylbenzene
};

const EosData eos_rpp_1_2_4_trimethylbenzene = {
	"1_2_4_trimethylbenzene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_1_2_4_trimethylbenzene}
};


static const IdealData ideal_data_o_dichlorobenzene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-14.30, 0}
			,{0.5506, 1}
			,{-4.51E-04, 2}
			,{1.43E-07, 3}
		}
	}}
};

static const CubicData cubic_data_o_dichlorobenzene = {
	.M = 147.004
	,.T_c = 729.0
	,.p_c = (41.0 * 1e5)
	,.rho_c = (1000 * 147.004 / 360.0)
	,.T_t = 0
	,.omega = 0.272
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (30000 / 147.004), (82730 / 147.004)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_o_dichlorobenzene
};

const EosData eos_rpp_o_dichlorobenzene = {
	"o_dichlorobenzene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_o_dichlorobenzene}
};


static const IdealData ideal_data_nitrous_oxide = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{21.62, 0}
			,{0.07281, 1}
			,{-5.78E-05, 2}
			,{1.83E-08, 3}
		}
	}}
};

static const CubicData cubic_data_nitrous_oxide = {
	.M = 44.013
	,.T_c = 309.6
	,.p_c = (72.4 * 1e5)
	,.rho_c = (1000 * 44.013 / 97.4)
	,.T_t = 0
	,.omega = 0.165
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (81600 / 44.013), (10370 / 44.013)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_nitrous_oxide
};

const EosData eos_rpp_nitrous_oxide = {
	"nitrous_oxide"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_nitrous_oxide}
};


static const IdealData ideal_data_2_3_dimethylpentane = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{-7.05, 0}
			,{0.6837, 1}
			,{-3.73E-04, 2}
			,{7.83E-08, 3}
		}
	}}
};

static const CubicData cubic_data_2_3_dimethylpentane = {
	.M = 100.205
	,.T_c = 537.4
	,.p_c = (29.1 * 1e5)
	,.rho_c = (1000 * 100.205 / 393.0)
	,.T_t = 0
	,.omega = 0.296
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-199400 / 100.205), (670 / 100.205)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_2_3_dimethylpentane
};

const EosData eos_rpp_2_3_dimethylpentane = {
	"2_3_dimethylpentane"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_2_3_dimethylpentane}
};


static const IdealData ideal_data_acetyl_chloride = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{25.02, 0}
			,{0.1711, 1}
			,{-9.86E-05, 2}
			,{2.22E-08, 3}
		}
	}}
};

static const CubicData cubic_data_acetyl_chloride = {
	.M = 78.498
	,.T_c = 508.0
	,.p_c = (58.7 * 1e5)
	,.rho_c = (1000 * 78.498 / 204.0)
	,.T_t = 0
	,.omega = 0.344
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-244100 / 78.498), (-206400 / 78.498)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_acetyl_chloride
};

const EosData eos_rpp_acetyl_chloride = {
	"acetyl_chloride"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_acetyl_chloride}
};


static const IdealData ideal_data_allyl_chloride = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{2.53, 0}
			,{0.3047, 1}
			,{-2.28E-04, 2}
			,{7.29E-08, 3}
		}
	}}
};

static const CubicData cubic_data_allyl_chloride = {
	.M = 76.526
	,.T_c = 514.0
	,.p_c = (47.6 * 1e5)
	,.rho_c = (1000 * 76.526 / 234.0)
	,.T_t = 0
	,.omega = 0.130
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-628 / 76.526), (43630 / 76.526)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_allyl_chloride
};

const EosData eos_rpp_allyl_chloride = {
	"allyl_chloride"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_allyl_chloride}
};


static const IdealData ideal_data_2_methyl_1_butene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{10.57, 0}
			,{0.3997, 1}
			,{-1.95E-04, 2}
			,{3.31E-08, 3}
		}
	}}
};

static const CubicData cubic_data_2_methyl_1_butene = {
	.M = 70.135
	,.T_c = 465.0
	,.p_c = (34.5 * 1e5)
	,.rho_c = -1
	,.T_t = 0
	,.omega = 0.236
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-36340 / 70.135), (65650 / 70.135)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_2_methyl_1_butene
};

const EosData eos_rpp_2_methyl_1_butene = {
	"2_methyl_1_butene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_2_methyl_1_butene}
};


static const IdealData ideal_data_1_butyne = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{12.55, 0}
			,{0.2744, 1}
			,{-1.55E-04, 2}
			,{3.45E-08, 3}
		}
	}}
};

static const CubicData cubic_data_1_butyne = {
	.M = 54.092
	,.T_c = 463.7
	,.p_c = (47.1 * 1e5)
	,.rho_c = (1000 * 54.092 / 220.0)
	,.T_t = 0
	,.omega = 0.050
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (165300 / 54.092), (202200 / 54.092)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_1_butyne
};

const EosData eos_rpp_1_butyne = {
	"1_butyne"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_1_butyne}
};


static const IdealData ideal_data_isobutylene = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{16.05, 0}
			,{0.2804, 1}
			,{-1.09E-04, 2}
			,{9.10E-09, 3}
		}
	}}
};

static const CubicData cubic_data_isobutylene = {
	.M = 56.108
	,.T_c = 417.9
	,.p_c = (40.0 * 1e5)
	,.rho_c = (1000 * 56.108 / 239.0)
	,.T_t = 0
	,.omega = 0.194
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-16910 / 56.108), (58110 / 56.108)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_isobutylene
};

const EosData eos_rpp_isobutylene = {
	"isobutylene"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_isobutylene}
};


static const IdealData ideal_data_xenon = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{20.80, 0}
			,{0, 1}
			,{0.00E+00, 2}
			,{0.00E+00, 3}
		}
	}}
};

static const CubicData cubic_data_xenon = {
	.M = 131.300
	,.T_c = 289.7
	,.p_c = (58.4 * 1e5)
	,.rho_c = (1000 * 131.300 / 118.4)
	,.T_t = 0
	,.omega = 0.008
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (0 / 131.300), (0 / 131.300)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_xenon
};

const EosData eos_rpp_xenon = {
	"xenon"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_xenon}
};


static const IdealData ideal_data_2_butene_trans = {
	IDEAL_CP0
	,.data = {.cp0 = {
		.cp0star = 1
		,.Tstar = 1
		,.np = 4
		,.pt = (const Cp0PowTerm[]){
			{18.32, 0}
			,{0.2564, 1}
			,{-7.01E-05, 2}
			,{-8.99E-09, 3}
		}
	}}
};

static const CubicData cubic_data_2_butene_trans = {
	.M = 56.108
	,.T_c = 428.6
	,.p_c = (39.9 * 1e5)
	,.rho_c = (1000 * 56.108 / 238.0)
	,.T_t = 0
	,.omega = 0.205
	,.ref0 = {FPROPS_REF_TPHG,{.tphg={298.2, 101325, (-11180 / 56.108), (63010 / 56.108)}}}
	,.ref = {FPROPS_REF_IIR}
	,.ideal = &ideal_data_2_butene_trans
};

const EosData eos_rpp_2_butene_trans = {
	"2_butene_trans"
	,"RPP"
	,""
	,40
	,FPROPS_CUBIC
	,.data = {.cubic=&cubic_data_2_butene_trans}
};

