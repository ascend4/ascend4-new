/* 
This file created by John Pye 2014

LITERATURE REFERENCE
http://dx.doi.org/10.1016/0378-3812(85)87016-3
R. Schmidt, W. Wagner, 1985. "A new form of the equation of state for pure 
substances and its application to oxygen", Fluid Phase Equilibria 19(3) 175-200.
*/

#include "../helmholtz.h"
#ifndef CUNIT_TEST

#define OXYGEN_M 31.9988  /* kg/kmol */
#define OXYGEN_R (8314.34/OXYGEN_M) /* J/kg/K */
#define OXYGEN_TC 154.581 /* K */
#define OXYGEN_RHOC (13.63*OXYGEN_M) /* kg/m3 */

/* we use Roland Span's re-fit cp0 curve as per REFPROP 8.0, no publication cited */
static const IdealData ideal_data_oxygen = {
	IDEAL_CP0
	,.data = {.cp0 = {
		OXYGEN_R /* cp0star */
    	, 1. /* Tstar */
		, 1 /* power terms */
		, (const Cp0PowTerm[]){
		    {3.51808732,	0.0}
		}
		, 5 /* exponential terms */
		, (const Cp0ExpTerm[]){
		    {0.102323928e+01,  0.224632440e+04}
			,{0.784357918e+00,  0.112599763e+05}
			,{0.337183363e-02,  0.120126209e+04}
			,{-0.170864084e-01,  0.690089445e+02}
			,{0.463751562e-01,  0.532805445e+04}
		}
	}}
};

static HelmholtzData helmholtz_data_oxygen = {
    .R = OXYGEN_R
    , .M = OXYGEN_M
    , .T_star = OXYGEN_TC
    , .rho_star = OXYGEN_RHOC
    , .T_c = OXYGEN_TC
    , .rho_c = OXYGEN_RHOC
    , .T_t = 54.361
    , {FPROPS_REF_TPHS0,
		.data={.tphs={
			.T0 = 298.15
			,.p0 = 1.01325e5
			,.h0 = 0
			,.s0 = 0
		}}
	}
    , 0.0222 /* acentric factor, according to REFPROP 8 */
    , &ideal_data_oxygen
    , 32 /* power terms */
    , (const HelmholtzPowTerm[]){
        /* a_i, 	t_i, 	d_i, 	l_i */
		{0.39837687490,     	0,  	1,	0}
		,{-0.18461574540e1, 	1.5,	1,	0}
		,{ 0.41834731970,   	2.5,	1,	0}
		,{ 0.23706207110e-1,	-0.5,	2,	0}
		,{ 0.97717305730e-1,	1.5,	2,	0}
		,{ 0.30178912940e-1,	2,  	2,	0}
		,{ 0.22733532120e-1,	0,  	3,	0}
		,{ 0.13572540860e-1,	1,  	3,	0}
		,{-0.40526989430e-1,	2.5,	3,	0}
		,{ 0.54546285150e-3,	0,  	6,	0}
		,{ 0.51131822770e-3,	2,  	7,	0}
		,{ 0.29534668830e-6,	5,  	7,	0}
		,{-0.86876450720e-4,	2,  	8,	0}
		,{-0.21270825890e0, 	5,  	1,	2}
		,{ 0.87359419580e-1,	6,  	1,	2}
		,{ 0.12755091900e0, 	3.5,	2,	2}
		,{-0.90677010640e-1,	5.5,	2,	2}
		,{-0.35400842060e-1,	3,  	3,	2}
		,{-0.36232780590e-1,	7,  	3,	2}
		,{ 0.13276992900e-1,	6,  	5,	2}
		,{-0.32541118650e-3,	8.5,	6,	2}
		,{-0.83135829320e-2,	4,  	7,	2}
		,{ 0.21245705590e-2,	6.5,	8,	2}
		,{-0.83252062320e-3,	5.5,	10,	2}
		,{-0.26261732760e-4,	22,  	2,	4}
		,{ 0.25995814820e-2,	11,  	3,	4}
		,{ 0.99846496630e-2,	18,  	3,	4}
		,{ 0.21999231530e-2,	11,  	4,	4}
		,{-0.25913504860e-1,	23,  	4,	4}
		,{-0.12596308480e0, 	17,  	5,	4}
		,{ 0.14783556370e0, 	18,  	5,	4}
		,{-0.10112510780e-1,	23,  	5,	4}
    }
};

const EosData eos_oxygen = {
	"oxygen"
	,"R. Schmidt, W. Wagner, 1985. 'A new form of the equation of state for pure "
	 "substances and its application to oxygen', Fluid Phase Equilibria 19(3) "
	 "175-200. (Also: using R. Span's modified cp0 equation as per REFPROP 8)"
	,"http://dx.doi.org/10.1016/0378-3812(85)87016-3"
	,100
	,FPROPS_HELMHOLTZ
	,.data = {.helm = &helmholtz_data_oxygen}
};

#else
#include "../test.h"
extern const EosData eos_oxygen;

/*
A small set of data points calculated using REFPROP 8.0, for validation.
*/

static const TestData td[] = {
    /* Temperature, Pressure, Density, Int. Energy, Enthalpy, Entropy, Cv, Cp, Cp0, Helmholtz */
    /* (C), (MPa), (kg/m3), (kJ/kg), (kJ/kg), (kJ/kg-K), (kJ/kg-K), (kJ/kg-K), (kJ/kg-K), (kJ/kg) */
	{-210, 0.02, 1.26802754557e3, -1.78916609977e2, -1.78900837449e2, 2.34276499745e0, 1.05931898199e0, 1.67618075825e0, 9.10091734584e-1, -3.26862219566e2}
	,{-160, 0.02, 6.82492503289e-1, 7.30475393174e1, 1.02351890506e2, 5.94517498132e0, 6.50803410076e-1, 9.13747408186e-1, 9.09812873458e-1, -5.99649009818e2}
	,{-110, 0.02, 4.72320799598e-1, 1.05625128973e2, 1.47969230729e2, 6.27908102651e0, 6.50345127400e-1, 9.11347209783e-1, 9.09823710085e-1, -9.18806940502e2}
	,{-60, 0.02, 3.61294030747e-1, 1.38169950948e2, 1.93526525643e2, 6.52265443774e0, 6.50897537531e-1, 9.11324534732e-1, 9.10595976428e-1, -1.25213384246e3}
	,{-10, 0.02, 2.92569904596e-1, 1.70788656679e2, 2.39148387759e2, 6.71492038935e0, 6.53934026506e-1, 9.14123658389e-1, 9.13697476486e-1, -1.59624264378e3}
	,{-210, 1, 1.26927494950e3, -1.79088017101e2, -1.78300165738e2, 2.34004446186e0, 1.06035743221e0, 1.67423639423e0, 9.10091734584e-1, -3.26861824868e2}
	,{-110, 1, 2.50527565657e1, 1.00698567983e2, 1.40614335231e2, 5.23210986793e0, 6.69237235514e-1, 9.98969906584e-1, 9.09823710085e-1, -7.52920156970e2}
	,{-10, 1, 1.47889934228e1, 1.68472663318e2, 2.36090517448e2, 5.68966155399e0, 6.57334828289e-1, 9.35541113773e-1, 9.13697476486e-1, -1.32876177461e3}
	,{90, 1, 1.06143468382e1, 2.35459179912e2, 3.29671288791e2, 5.99102964677e0, 6.72786076425e-1, 9.40954071795e-1, 9.31097241655e-1, -1.94018323631e3}
	,{190, 1, 8.29845387436e0, 3.04400120335e2, 4.24904495625e2, 6.22254868872e0, 7.00995396257e-1, 9.65472264951e-1, 9.59944892726e-1, -2.57757330484e3}
	,{290, 1, 6.81800533247e0, 3.76260433798e2, 5.22930896967e2, 6.41409055325e0, 7.32448691043e-1, 9.95185716716e-1, 9.91705676200e-1, -3.23583466127e3}
	,{390, 1, 5.78795372309e0, 4.51114593146e2, 6.23887225382e2, 6.57904597913e0, 7.61619125225e-1, 1.02341143084e0, 1.02105042448e0, -3.91177974792e3}
	,{490, 1, 5.02920976303e0, 5.28647231653e2, 7.27485627170e2, 6.72451321673e0, 7.86644981698e-1, 1.04787365173e0, 1.04618446136e0, -4.60316502969e3}
	,{590, 1, 4.44678292542e0, 6.08446341321e2, 8.33328017978e2, 6.85481520330e0, 8.07470926807e-1, 1.06833963174e0, 1.06708176268e0, -5.30828740141e3}
	,{690, 1, 3.98548933975e0, 6.90126957886e2, 9.41037176119e2, 6.97286970976e0, 8.24692551760e-1, 1.08531913865e0, 1.08435264380e0, -6.02579250307e3}
	,{790, 1, 3.61103858654e0, 7.73370129853e2, 1.05029876853e3, 7.08078930984e0, 8.39047947790e-1, 1.09950488561e0, 1.09874328263e0, -6.75457102491e3}
	,{890, 1, 3.30098535336e0, 8.57927433369e2, 1.16086728101e3, 7.18017746933e0, 8.51226918521e-1, 1.11156097969e0, 1.11094821904e0, -7.49369599009e3}
	,{990, 1, 3.04001486021e0, 9.43613185613e2, 1.27255894607e3, 7.27229119042e0, 8.61810050377e-1, 1.12205263664e0, 1.12155095535e0, -8.24238143156e3}
	,{-210, 80, 1.34970186744e3, -1.88519085854e2, -1.29246736952e2, 2.16321276459e0, 1.11868648333e0, 1.59834938696e0, 9.10091734584e-1, -3.25125971938e2}
	,{-10, 80, 7.86668580412e2, 5.96371697345e1, 1.61331837593e2, 4.28291992973e0, 7.55898203251e-1, 1.32842096790e0, 9.13697476486e-1, -1.06741320977e3}
	,{190, 80, 4.91771616122e2, 2.44049048453e2, 4.06726188363e2, 4.98124525334e0, 7.35744701465e-1, 1.15663638007e0, 9.59944892726e-1, -2.06301469063e3}
	,{390, 80, 3.59228436673e2, 4.10959438527e2, 6.33658957365e2, 5.38886147844e0, 7.77748852668e-1, 1.12493681718e0, 1.02105042448e0, -3.16266405090e3}
	,{590, 80, 2.85558839921e2, 5.78811764704e2, 8.58964184507e2, 5.68576731912e0, 8.16066984097e-1, 1.13019363197e0, 1.06708176268e0, -4.32885829679e3}
	,{790, 80, 2.38130545472e2, 7.50097116098e2, 1.08604729772e3, 5.92235282345e0, 8.44008540611e-1, 1.14078115446e0, 1.09874328263e0, -5.54625228815e3}
	,{990, 80, 2.04758509530e2, 9.24563667414e2, 1.31526782024e3, 6.11988309848e0, 8.64812705761e-1, 1.15136338113e0, 1.12155095535e0, -6.80576666843e3}
};

static const unsigned ntd = sizeof(td)/sizeof(TestData);

void test_fluid_oxygen(void){
	FpropsError err = FPROPS_NO_ERROR;
	double maxerr=0;
	test_init();
	PureFluid *P = helmholtz_prepare(&eos_oxygen, NULL);

	ASSERT_TOL_VAL(ideal_cp(60,1.2820239582e3,P->data,&err),9.10133773207e2,1e-9);
	ASSERT_TOL_VAL(ideal_cp(120,6.43209699241E-1,P->data,&err),9.09800101279e2,1e-9);
	ASSERT_TOL_VAL(ideal_cp(270,2.85140864243e-1,P->data,&err),9.1439308538e2,1e-9);

#ifdef REALLY_TEST
	helm_run_test_cases(P, ntd, td, 'C');
#else
	(void)ntd; (void)td;
#endif
}

#endif
