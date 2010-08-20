/* This file is created by Hongke Zhu, 06-10-2010. 
Chemical & Materials Engineering Department, 
University of Alabama in Huntsville, United States.

LITERATURE REFERENCE
Lemmon, E.W. and Ihmels, E.C.,
"Thermodynamic Properties of the Butenes.  Part II. Short Fundamental
Equations of State,"
Fluid Phase Equilibria, 228-229C:173-187, 2005.
*/

#include "../helmholtz.h"

#define CISBUTENE_M 56.10632 /* kg/kmol */
#define CISBUTENE_R (8314.472/CISBUTENE_M) /* J/kg/K */
#define CISBUTENE_TSTAR 435.75 /* K */

const IdealData ideal_data_cisbutene = {
    0.2591542 /* constant */
    , 2.4189888 /* linear */
    , CISBUTENE_TSTAR /* Tstar */
    , CISBUTENE_R /* cp0star */
    , 1 /* power terms */
    , (const IdealPowTerm[]){
        {3.9687,	0.0}
    }
    , 4 /* exponential terms */
    , (const IdealExpTerm[]){
        {3.2375,    248.0}
        ,{7.0437,   1183.0}
        ,{11.414,   2092.0}
        ,{7.3722,   4397.0}
    } 
};

const HelmholtzData helmholtz_data_cisbutene = {
	"cisbutene"
    , /* R */ CISBUTENE_R /* J/kg/K */
    , /* M */ CISBUTENE_M /* kg/kmol */
    , /* rho_star */ 4.244*CISBUTENE_M /* kg/m3(= rho_c for this model) */
    , /* T_star */ CISBUTENE_TSTAR /* K (= T_c for this model) */

    , /* T_c */ CISBUTENE_TSTAR
    , /* rho_c */ 4.244*CISBUTENE_M /* kg/m3 */
    , /* T_t */ 0

    , 0.202 /* acentric factor */
    , &ideal_data_cisbutene
    , 12 /* power terms */
    , (const HelmholtzPowTerm[]){
        /* a_i, 	t_i, 	d_i, 	l_i */
        {0.77827,         0.12,    1.0,   0}
        , {-2.8064,         1.3,     1.0,   0}
        , {1.0030,          1.74,    1.0,   0}
        , {0.013762,        2.1,     2.0,   0}
        , {0.085514,        0.28,    3.0,   0}
        , {0.00021268,      0.69,    7.0,   0}
        , {0.22962,         0.75,    2.0,   1}
        , {-0.072442,       2.0,     5.0,   1}
        , {-0.23722,        4.4,     1.0,   2}
        , {-0.074071,       4.7,     4.0,   2}
        , {-0.026547,      15.0,     3.0,   3}
        , {0.012032,       14.0,     4.0,   3}
    }
    , 0 /* gaussian terms */
    , 0
    , 0 /* critical terms */
    , 0
};

/*
    Test suite. These tests attempt to validate the current code using a few sample figures output by REFPROP 8.0. To compile and run the test:

    ./test.py cisbutene
*/

#ifdef TEST

#include "test.h"
#include <math.h>
#include <assert.h>
#include <stdio.h>

const TestData td[]; const unsigned ntd;

int main(void){
    //return helm_check_u(&helmholtz_data_cisbutene, ntd, td);
    //return helm_check_dpdT_rho(&helmholtz_data_cisbutene, ntd, td);
    //return helm_check_dpdrho_T(&helmholtz_data_cisbutene, ntd, td);
    //return helm_check_dhdT_rho(&helmholtz_data_cisbutene, ntd, td);
    //return helm_check_dhdrho_T(&helmholtz_data_cisbutene, ntd, td);
    //return helm_check_dudT_rho(&helmholtz_data_cisbutene, ntd, td);
    //return helm_check_dudrho_T(&helmholtz_data_cisbutene, ntd, td);
    return helm_run_test_cases(&helmholtz_data_cisbutene, ntd, td, 'C');
}

/*
A small set of data points calculated using REFPROP 8.0, for validation. 
*/

const TestData td[] = {
    /* Temperature, Pressure, Density, Int. Energy, Enthalpy, Entropy, Cv, Cp, Cp0, Helmholtz */
    /* (C), (MPa), (kg/m3), (kJ/kg), (kJ/kg), (kJ/kg-K), (kJ/kg-K), (kJ/kg-K), (kJ/kg-K), (kJ/kg) */
    {-1.00E+2, 1.E-1, 7.49664974641E+2, -2.11134549398E+2, -2.11001156478E+2, -9.51669395303E-1, 1.34014606723E+0, 1.97918922459E+0, 1.04771089317E+0, -4.63529936008E+1}
    , {-5.0E+1, 9.99999999999E-2, 6.98041603895E+2, -1.11764349291E+2, -1.11621091354E+2, -4.47626135477E-1, 1.35788886545E+0, 2.01383605693E+0, 1.18173759895E+0, -1.18765771596E+1}
    , {0.E+0, 1.E-1, 6.44267272697E+2, -8.1697856887E+0, -8.01457060291E+0, -2.9135384541E-2, 1.45017878755E+0, 2.14546458849E+0, 1.34761954714E+0, -2.11455401325E-1}
    , {5.0E+1, 1.E-1, 2.13659298164E+0, 4.36833704607E+2, 4.83637190745E+2, 1.72953238355E+0, 1.40273958783E+0, 1.56847925156E+0, 1.5339252466E+0, -1.22064685139E+2}
    , {1.00E+2, 1.E-1, 1.83369848627E+0, 5.11888986916E+2, 5.6642357957E+2, 1.9674250077E+0, 1.5880918373E+0, 1.74605522613E+0, 1.72857339203E+0, -2.22255654709E+2}
    , {1.50E+2, 1.E-1, 1.60934890831E+0, 5.962403766E+2, 6.58377306313E+2, 2.19843624208E+0, 1.77779729015E+0, 1.93221669247E+0, 1.922083926E+0, -3.34027919236E+2}
    , {2.00E+2, 1.E-1, 1.43522554993E+0, 6.89907398828E+2, 7.59582858552E+2, 2.42431066789E+0, 1.96230584699E+0, 2.11484212572E+0, 2.10833924903E+0, -4.57155193683E+2}
    , {2.50E+2, 1.E-1, 1.29570523007E+0, 7.92535184854E+2, 8.69713232514E+2, 2.64542907863E+0, 2.13725504068E+0, 2.28867370254E+0, 2.28416299806E+0, -5.91421037634E+2}
    , {-1.00E+2, 1.E+0, 7.50125844034E+2, -2.11419651932E+2, -2.10086542284E+2, -9.5331855985E-1, 1.34063581845E+0, 1.97850877963E+0, 1.04771089317E+0, -4.63525432937E+1}
    , {-5.0E+1, 1.E+0, 6.98721329954E+2, -1.12191722129E+2, -1.10760536394E+2, -4.49544746883E-1, 1.35836173529E+0, 2.01223727693E+0, 1.18173759895E+0, -1.18758118619E+1}
    , {0.E+0, 1.E+0, 6.45332219084E+2, -8.82907263378E+0, -7.27948318136E+0, -3.15541725417E-2, 1.45051155765E+0, 2.14170964705E+0, 1.34761954714E+0, -2.10050404016E-1}
    , {5.0E+1, 1.E+0, 5.85558472299E+2, 1.03246571173E+2, 1.04954342552E+2, 3.4524175736E-1, 1.58886729814E+0, 2.36613314632E+0, 1.5339252466E+0, -8.31830271831E+0}
    , {1.00E+2, 1.E+0, 2.14592452772E+1, 4.93004952896E+2, 5.39604914222E+2, 1.57389615462E+0, 1.67583751587E+0, 1.99404215688E+0, 1.72857339203E+0, -9.42943972022E+1}
    , {1.50E+2, 1.E+0, 1.76644640029E+1, 5.83436858484E+2, 6.40047690255E+2, 1.8264239972E+0, 1.81702696312E+0, 2.04944797775E+0, 1.922083926E+0, -1.89414455932E+2}
    , {2.00E+2, 1.E+0, 1.5256431784E+1, 6.80202375689E+2, 7.45748501688E+2, 2.062389092E+0, 1.98306153178E+0, 2.18384852177E+0, 2.10833924903E+0, -2.95617023189E+2}
    , {2.50E+2, 1.E+0, 1.35157514521E+1, 7.84693845524E+2, 8.58681592602E+2, 2.28915805746E+0, 2.1493330622E+0, 2.33424440608E+0, 2.28416299806E+0, -4.12879192237E+2}
    , {-1.00E+2, 1.E+1, 7.54589387405E+2, -2.14163945204E+2, -2.00911704758E+2, -9.69415900956E-1, 1.34569044728E+0, 1.97245855947E+0, 1.04771089317E+0, -4.63095819537E+1}
    , {-5.0E+1, 1.E+1, 7.05189267065E+2, -1.16241309959E+2, -1.02060719773E+2, -4.68010948056E-1, 1.36335789233E+0, 1.99837003413E+0, 1.18173759895E+0, -1.18046669E+1}
    , {0.E+0, 1.E+1, 6.55140931901E+2, -1.48991349235E+1, 3.64756421187E-1, -5.42326395285E-2, 1.45452955114E+0, 2.11105919139E+0, 1.34761954714E+0, -8.54894362895E-2}
    , {5.0E+1, 1.0E+1, 6.01854281518E+2, 9.35464800062E+1, 1.10161797546E+2, 3.14471620728E-1, 1.58984191723E+0, 2.29134644116E+0, 1.5339252466E+0, -8.07502423218E+0}
    , {1.00E+2, 1.E+1, 5.41488135458E+2, 2.12147051725E+2, 2.30614677044E+2, 6.60621257432E-1, 1.75049762928E+0, 2.53985105215E+0, 1.72857339203E+0, -3.43637704853E+1}
    , {1.50E+2, 1.E+1, 4.66424842188E+2, 3.44560768766E+2, 3.66000450137E+2, 1.00063143605E+0, 1.92653739683E+0, 2.90384076781E+0, 1.922083926E+0, -7.88564233996E+1}
    , {2.00E+2, 1.E+1, 3.58473578049E+2, 4.97791704576E+2, 5.25687763344E+2, 1.35666239611E+0, 2.11779695886E+0, 3.54164338609E+0, 2.10833924903E+0, -1.44113108142E+2}
    , {2.50E+2, 1.0E+1, 2.29405568221E+2, 6.66779540836E+2, 7.1037046183E+2, 1.72770427198E+0, 2.27015011797E+0, 3.54912795031E+0, 2.28416299806E+0, -2.37068949052E+2}
};

const unsigned ntd = sizeof(td)/sizeof(TestData);

#endif
