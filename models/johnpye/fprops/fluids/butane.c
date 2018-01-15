/* This file is created by Hongke Zhu, 06-10-2010.
Chemical & Materials Engineering Department,
University of Alabama in Huntsville, United States.

LITERATURE REFERENCE
Buecker, D. and Wagner, W.,
"Reference Equations of State for the Thermodynamic Properties of Fluid Phase n-Butane and Isobutane,"
J. Phys. Chem. Ref. Data, 35(2):929-1019, 2006.
*/

#include "../helmholtz.h"
#ifndef CUNIT_TEST

#define BUTANE_M 58.12220 /* kg/kmol */
#define BUTANE_R (8314.472/BUTANE_M) /* J/kg/K */
#define BUTANE_TC 425.125 /* K */

static const IdealData ideal_data_butane = {
	IDEAL_CP0,{.cp0={
		BUTANE_R /* cp0star */
		, 1. /* Tstar */
		, 1 /* power terms */
		, (const Cp0PowTerm[]){
			{4.24680487,	0.0}
		}
		, 4 /* exponential terms */
		, (const Cp0ExpTerm[]){
			{5.54913289,	329.40404}
			,{11.4648996,	1420.17366}
			,{7.59987584,	2113.08938}
			,{9.66033239,	4240.85730}
		}
	}}
};

static const HelmholtzData helmholtz_data_butane = {
	.R = BUTANE_R /* J/kg/K */
	, .M = BUTANE_M /* kg/kmol */
	, .rho_star = 3.922769613*BUTANE_M /* kg/m3(= rho_c for this model) */
	, .T_star = BUTANE_TC /* K (= T_c for this model) */
	, .T_c = BUTANE_TC
	, .rho_c = 3.922769613*BUTANE_M /* kg/m3 */
	, .T_t = 134.6

	, .ref = {FPROPS_REF_PHI0,{.phi0={
		.c = 12.54882924 /* constant */
		,.m = -5.46976878 /* linear */
	}}}

	, .omega = 0.201 /* acentric factor */
	, .ideal = &ideal_data_butane
	, .np = 23 /* power terms */
	, .pt = (const HelmholtzPowTerm[]){
		/* a_i, 	t_i, 	d_i, 	l_i */
		{0.25536998241635E+01,      0.5,    1.0,   0}
		, {-0.44585951806696E+01,   1.0,    1.0,   0}
		, {0.82425886369063E+00,    1.5,    1.0,   0}
		, {0.11215007011442E+00,    0.0,    2.0,   0}
		, {-0.35910933680333E-01,   0.5,    3.0,   0}
		, {0.16790508518103E-01,    0.5,    4.0,   0}
		, {0.32734072508724E-01,    0.75,   4.0,   0}
		, {0.95571232982005E+00,    2.0,    1.0,   1}
		, {-0.10003385753419E+01,   2.5,    1.0,   1}
		, {0.85581548803855E-01,    2.5,    2.0,   1}
		, {-0.25147918369616E-01,   1.5,    7.0,   1}
		, {-0.15202958578918E-02,   1.0,    8.0,   1}
		, {0.47060682326420E-02,    1.5,    8.0,   1}
		, {-0.97845414174006E-01,   4.0,    1.0,   2}
		, {-0.48317904158760E-01,   7.0,    2.0,   2}
		, {0.17841271865468E+00,    3.0,    3.0,   2}
		, {0.18173836739334E-01,    7.0,    3.0,   2}
		, {-0.11399068074953E+00,   3.0,    4.0,   2}
		, {0.19329896666669E-01,    1.0,    5.0,   2}
		, {0.11575877401010E-02,    6.0,    5.0,   2}
		, {0.15253808698116E-03,    0.0,   10.0,   2}
		, {-0.43688558458471E-01,   6.0,    2.0,   3}
		, {-0.82403190629989E-02,   13.0,   6.0,   3}
	}
	, .ng = 2 /* gaussian terms */
	, .gt = (const HelmholtzGausTerm[]){
		/* n, t, d, alpha, beta, gamma, epsilon */
		{-0.28390056949441E-01,    2.0,   1.0,  10.0, 150.0, 1.16, 0.85}
		, {0.14904666224681E-02,   0.0,   2.0,  10.0, 200.0, 1.13, 1.0}
	}
};


const EosData eos_butane = {
	"butane"
	,"D Buecker and W Wagner, 2006. 'Reference Equations of State for the "
	"Thermodynamic Properties of Fluid Phase n-Butane and Isobutane,' "
	"J. Phys. Chem. Ref. Data, 35(2):929-1019."
	,"http://dx.doi.org/10.1063/1.1901687"
	,100
	,FPROPS_HELMHOLTZ
	,.data = {.helm = &helmholtz_data_butane}
};


#else
extern const EosData eos_butane;

#include "../test.h"
#include <math.h>
#include <assert.h>
#include <stdio.h>

/*
A small set of data points calculated using REFPROP 8.0, for validation.
*/

static const TestData td[] = {
    /* Temperature, Pressure, Density, Int. Energy, Enthalpy, Entropy, Cv, Cp, Cp0, Helmholtz */
    /* (C), (MPa), (kg/m3), (kJ/kg), (kJ/kg), (kJ/kg-K), (kJ/kg-K), (kJ/kg-K), (kJ/kg-K), (kJ/kg) */
    {-1.00E+2, 1.00000000001E-1, 6.99347206157E+2, -6.45505493226E+2, -6.45362502736E+2, -2.53956986499E+0, 1.44891316097E+0, 2.01339462067E+0, 1.2307884332E+0, -2.05778971103E+2}
    , {-5.0E+1, 9.99999999998E-2, 6.51781090976E+2, -5.42457674954E+2, -5.42304249208E+2, -2.01725636485E+0, 1.51109623243E+0, 2.12168910846E+0, 1.39394135083E+0, -9.23069171376E+1}
    , {0.E+0, 1.E-1, 2.66678984022E+0, -8.38648240691E+1, -4.63665561173E+1, -1.55677670325E-1, 1.46783029944E+0, 1.64180231603E+0, 1.587722205E+0, -4.13414684197E+1}
    , {5.0E+1, 1.E-1, 2.21298575808E+0, -4.90817085404E+0, 4.02796481976E+1, 1.35172181993E-1, 1.67218733164E+0, 1.83105488188E+0, 1.80467066816E+0, -4.85890614649E+1}
    , {1.00E+2, 1.E-1, 1.89963027757E+0, 8.44644389403E+1, 1.37106261499E+2, 4.13402623437E-1, 1.8908245046E+0, 2.04338156122E+0, 2.02832866538E+0, -6.97967499952E+1}
    , {1.50E+2, 1.E-1, 1.66705939632E+0, 1.8463064236E+2, 2.44616507423E+2, 6.83502505019E-1, 2.10663429242E+0, 2.25599324437E+0, 2.24645402294E+0, -1.04593442639E+2}
    , {2.00E+2, 1.E-1, 1.48654094041E+0, 2.95274935254E+2, 3.62545198239E+2, 9.46710309927E-1, 2.31163549947E+0, 2.45916485881E+0, 2.45266142341E+0, -1.52661047888E+2}
    , {2.50E+2, 1.E-1, 1.34194117519E+0, 4.15797044825E+2, 4.9031595955E+2, 1.20325650517E+0, 2.50301927329E+0, 2.64940832725E+0, 2.64472060925E+0, -2.13686595854E+2}
    , {3.00E+2, 1.E-1, 1.22332371341E+0, 5.45516395893E+2, 6.27260907917E+2, 1.45313836091E+0, 2.68055096265E+0, 2.82618252739E+0, 2.8226554162E+0, -2.87349855664E+2}
    , {-1.00E+2, 1.E+0, 6.99838929678E+2, -6.45802001877E+2, -6.44373101658E+2, -2.54128549097E+0, 1.44970426736E+0, 2.01249007219E+0, 1.2307884332E+0, -2.05778419116E+2}
    , {-5.0E+1, 1.E+0, 6.52514339735E+2, -5.4291601422E+2, -5.4138348085E+2, -2.01931455825E+0, 1.51186736099E+0, 2.11970715978E+0, 1.39394135083E+0, -9.23059705473E+1}
    , {0.E+0, 1.E+0, 6.01900042479E+2, -4.32719074887E+2, -4.31057669455E+2, -1.57384400906E+0, 1.64054923584E+0, 2.30724339974E+0, 1.587722205E+0, -2.82358381048E+0}
    , {5.0E+1, 1.E+0, 5.43553515612E+2, -3.10941373919E+2, -3.09101628666E+2, -1.16450120288E+0, 1.81494167949E+0, 2.59087304142E+0, 1.80467066816E+0, 6.53671897918E+1}
    , {1.00E+2, 1.E+0, 2.22632851376E+1, 6.60553742647E+1, 1.10972375229E+2, 3.29616755981E-2, 1.95529453007E+0, 2.26404492271E+0, 2.02832866538E+0, 5.37557250153E+1}
    , {1.50E+2, 1.E+0, 1.82958976951E+1, 1.7168233643E+2, 2.26339397628E+2, 3.2296035517E-1, 2.13981131833E+0, 2.36843668906E+0, 2.24645402294E+0, 3.50216621392E+1}
    , {2.00E+2, 1.E+0, 1.57817420681E+1, 2.85307629499E+2, 3.48671990397E+2, 5.96049740895E-1, 2.33111261645E+0, 2.52831586693E+0, 2.45266142341E+0, 3.28669459447E+0}
    , {2.50E+2, 1.E+0, 1.39707714614E+1, 4.07716969297E+2, 4.79294977911E+2, 8.58344821534E-1, 2.51555575377E+0, 2.69650570404E+0, 2.64472060925E+0, -4.13261240879E+1}
    , {3.00E+2, 1.E+0, 1.25773650939E+1, 5.38739376125E+2, 6.18247285177E+2, 1.11190017303E+0, 2.689171531E+0, 2.86042172644E+0, 2.8226554162E+0, -9.85462080469E+1}
    , {-1.00E+2, 1.E+1, 7.04591690514E+2, -6.48636020809E+2, -6.34443403816E+2, -2.55795596169E+0, 1.45735411258E+0, 2.00438289215E+0, 1.2307884332E+0, -2.05725946043E+2}
    , {-5.0E+1, 1.E+1, 6.59455542572E+2, -5.47219467179E+2, -5.32055442686E+2, -2.03899072643E+0, 1.51936327475E+0, 2.1026817938E+0, 1.39394135083E+0, -9.22186865763E+1}
    , {0.E+0, 1.E+1, 6.1258328158E+2, -4.39331375463E+2, -4.23007064466E+2, -1.59861916173E+0, 1.64806857343E+0, 2.27029673302E+0, 1.587722205E+0, -2.66855143648E+0}
    , {5.0E+1, 1.E+1, 5.61780032102E+2, -3.2181575517E+2, -3.0401519369E+2, -1.19911640495E+0, 1.82089683696E+0, 2.49881819592E+0, 1.80467066816E+0, 6.5678711088E+1}
    , {1.00E+2, 1.0E+1, 5.03489123376E+2, -1.920123417E+2, -1.72150939465E+2, -8.20201606777E-1, 2.0160429027E+0, 2.78684214596E+0, 2.02832866538E+0, 1.14045887869E+2}
    , {1.50E+2, 1.E+1, 4.31021881711E+2, -4.70138334054E+1, -2.38131551468E+1, -4.47643489841E-1, 2.22393622002E+0, 3.16941749212E+0, 2.24645402294E+0, 1.42406509321E+2}
    , {2.00E+2, 1.0E+1, 3.30761337527E+2, 1.18143812507E+2, 1.48377092113E+2, -6.36299694711E-2, 2.44110780988E+0, 3.74493645675E+0, 2.45266142341E+0, 1.48250332563E+2}
    , {2.50E+2, 1.0E+1, 2.23787430493E+2, 2.93954662872E+2, 3.38639925033E+2, 3.18694697644E-1, 2.61688632074E+0, 3.69733644994E+0, 2.64472060925E+0, 1.27229531799E+2}
    , {3.00E+2, 1.E+1, 1.66431978463E+2, 4.5581919583E+2, 5.1590380272E+2, 6.42488771429E-1, 2.76058623857E+0, 3.43469859329E+0, 2.8226554162E+0, 8.75767564854E+1}
};

static const unsigned ntd = sizeof(td)/sizeof(TestData);

void test_fluid_butane(){
	PureFluid *P = helmholtz_prepare(&eos_butane, NULL);
	helm_run_test_cases(P, ntd, td, 'C');
}

#endif
