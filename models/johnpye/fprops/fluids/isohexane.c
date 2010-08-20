/* This file is created by Hongke Zhu, 05-30-2010. 
Chemical & Materials Engineering Department, 
University of Alabama in Huntsville, United States.

LITERATURE REFERENCE
Lemmon, E.W. and Span, R.,
"Short Fundamental Equations of State for 20 Industrial Fluids,"
J. Chem. Eng. Data, 51:785-850, 2006.
*/

#include "../helmholtz.h"

#define ISOHEXANE_M 86.17536 /* kg/kmol */
#define ISOHEXANE_R (8314.472/ISOHEXANE_M) /* J/kg/K */
#define ISOHEXANE_TSTAR 497.7 /* K */

const IdealData ideal_data_isohexane = {
    6.9259123919 /* constant */
    , -0.3128629679 /* linear */
    , ISOHEXANE_TSTAR /* Tstar */
    , ISOHEXANE_R /* cp0star */
    , 1 /* power terms */
    , (const IdealPowTerm[]){
        {4.0,	0.0}
    }
    , 4 /* exponential terms */
    , (const IdealExpTerm[]){
        {7.9127,	325.0}
        ,{16.871,	1150.0}
        ,{19.257,	2397.0}
        ,{14.075,	5893.0}
    }
};

const HelmholtzData helmholtz_data_isohexane = {
	"isohexane"
    , /* R */ ISOHEXANE_R /* J/kg/K */
    , /* M */ ISOHEXANE_M /* kg/kmol */
    , /* rho_star */ 2.715*ISOHEXANE_M /* kg/m3(= rho_c for this model) */
    , /* T_star */ ISOHEXANE_TSTAR /* K (= T_c for this model) */

    , /* T_c */ ISOHEXANE_TSTAR
    , /* rho_c */ 2.715*ISOHEXANE_M /* kg/m3 */
    , /* p_t */ 0

    , 0.2797 /* acentric factor */
    , &ideal_data_isohexane
    , 12 /* power terms */
    , (const HelmholtzPowTerm[]){
        /* a_i, 	t_i, 	d_i, 	l_i */
        {1.1027,	0.25,	1.0,	0.0}
        , {-2.9699,	1.125,	1.0,	0.0}
        , {1.0295,	1.5,	1.0,	0.0}
        , {-0.21238,	1.375,	2.0,	0.0}
        , {0.11897,	0.25,	3.0,	0.0}
        , {0.00027738,	0.875,	7.0,	0.0}
        , {0.40103,	0.625,	2.0,	1.0}
        , {-0.034238,	1.75,	5.0,	1.0}
        , {-0.43584,	3.625,	1.0,	2.0}
        , {-0.11693,	3.625,	4.0,	2.0}
        , {-0.019262,	14.5,	3.0,	3.0}
        , {0.0080783,	12.0,	4.0,	3.0}
    }
    , 0 /* gaussian terms */
    , 0
    , 0 /* critical terms */
    , 0
};

/*
    Test suite. These tests attempt to validate the current code using a few sample figures output by REFPROP 8.0. To compile and run the test:

    ./test.py isohexane
*/

#ifdef TEST

#include "test.h"
#include <math.h>
#include <assert.h>
#include <stdio.h>

const TestData td[]; const unsigned ntd;

int main(void){
    //return helm_check_u(&helmholtz_data_isohexane, ntd, td);
    //return helm_check_dpdT_rho(&helmholtz_data_isohexane, ntd, td);
    //return helm_check_dpdrho_T(&helmholtz_data_isohexane, ntd, td);
    //return helm_check_dhdT_rho(&helmholtz_data_isohexane, ntd, td);
    //return helm_check_dhdrho_T(&helmholtz_data_isohexane, ntd, td);
    //return helm_check_dudT_rho(&helmholtz_data_isohexane, ntd, td);
    //return helm_check_dudrho_T(&helmholtz_data_isohexane, ntd, td);
    return helm_run_test_cases(&helmholtz_data_isohexane, ntd, td, 'C');
}

/*
A small set of data points calculated using REFPROP 8.0, for validation. 
*/

const TestData td[] = {
    /* Temperature, Pressure, Density, Int. Energy, Enthalpy, Entropy, Cv, Cp, Cp0, Helmholtz */
    /* (C), (MPa), (kg/m3), (kJ/kg), (kJ/kg), (kJ/kg-K), (kJ/kg-K), (kJ/kg-K), (kJ/kg-K), (kJ/kg) */
    {-1.50E+2, 1.E-1, 8.04078152185E+2, -4.16936211954E+2, -4.16811845934E+2, -1.92124969583E+0, 1.25528022922E+0, 1.76835474572E+0, 8.38896874323E-1, -1.80334311913E+2}
    , {-1.00E+2, 1.E-1, 7.58018268954E+2, -3.29011471053E+2, -3.28879548111E+2, -1.32207402578E+0, 1.29888047392E+0, 1.7778925111E+0, 1.05409587647E+0, -1.0009435349E+2}
    , {-5.0E+1, 1.E-1, 7.14656803059E+2, -2.37041956935E+2, -2.36902029631E+2, -8.56148942606E-1, 1.44014686122E+0, 1.91627668704E+0, 1.28500857287E+0, -4.5992320393E+1}
    , {0.E+0, 9.99999999999E-2, 6.71147050581E+2, -1.36336529651E+2, -1.36187531008E+2, -4.49599082914E-1, 1.628068277E+0, 2.11969824221E+0, 1.52875530833E+0, -1.35285401534E+1}
    , {5.0E+1, 1.E-1, 6.25072264548E+2, -2.45156228832E+1, -2.43556413808E+1, -7.41923137219E-2, 1.83308278484E+0, 2.35866421494E+0, 1.77155612153E+0, -5.40376703952E-1}
    , {1.00E+2, 1.E-1, 2.86790904445E+0, 3.65987931351E+2, 4.00856540658E+2, 1.19060347442E+0, 1.92383996477E+0, 2.0368127829E+0, 2.00680513434E+0, -7.82857551304E+1}
    , {1.50E+2, 1.E-1, 2.49968610042E+0, 4.6799992702E+2, 5.08004950044E+2, 1.45979435381E+0, 2.14221021503E+0, 2.24865578455E+0, 2.23126489747E+0, -1.49712053796E+2}
    , {2.00E+2, 1.E-1, 2.22081107726E+0, 5.80577299419E+2, 6.25605893262E+2, 1.72226807297E+0, 2.35064040386E+0, 2.45372971711E+0, 2.44272511652E+0, -2.34313839307E+2}
    , {2.50E+2, 1.E-1, 2.00039640563E+0, 7.03193301361E+2, 7.53183393184E+2, 1.97842323468E+0, 2.54605819883E+0, 2.64722197388E+0, 2.63978157498E+0, -3.31818813861E+2}
    , {-1.50E+2, 1.E+0, 8.04396261542E+2, -4.17103125047E+2, -4.15859956663E+2, -1.9226072551E+0, 1.25605766396E+0, 1.76847406709E+0, 8.38896874323E-1, -1.80334041581E+2}
    , {-1.00E+2, 1.E+0, 7.58457953749E+2, -3.29249862887E+2, -3.27931398238E+2, -1.32345324651E+0, 1.29954446807E+0, 1.77761254851E+0, 1.05409587647E+0, -1.00093933254E+2}
    , {-5.0E+1, 1.E+0, 7.15266341403E+2, -2.37378722289E+2, -2.35980641683E+2, -8.57661021057E-1, 1.44075184035E+0, 1.91544489869E+0, 1.28500857287E+0, -4.59916654405E+1}
    , {0.E+0, 1.E+0, 6.72015313435E+2, -1.36817249726E+2, -1.35329188397E+2, -4.51362863597E-1, 1.62862581381E+0, 2.11790568246E+0, 1.52875530833E+0, -1.35274835343E+1}
    , {5.0E+1, 1.E+0, 6.26381722224E+2, -2.52273054221E+1, -2.36308348283E+1, -7.64003153598E-2, 1.83355751487E+0, 2.35482526682E+0, 1.77155612153E+0, -5.38543513547E-1}
    , {1.00E+2, 1.E+0, 5.75142296023E+2, 9.89531258014E+1, 1.00691825958E+2, 2.80845523132E-1, 2.04308327949E+0, 2.62532550621E+0, 2.00680513434E+0, -5.84438115547E+0}
    , {1.50E+2, 1.E+0, 5.10728561488E+2, 2.38298667027E+2, 2.40256654254E+2, 6.31373903642E-1, 2.25440653199E+0, 2.98537718416E+0, 2.23126489747E+0, -2.8867200299E+1}
    , {2.00E+2, 1.E+0, 2.58930316964E+1, 5.64494655774E+2, 6.03115085074E+2, 1.46511817165E+0, 2.3981134012E+0, 2.60695555512E+0, 2.44272511652E+0, -1.28726007141E+2}
    , {2.50E+2, 1.E+0, 2.20808636581E+1, 6.91210417861E+2, 7.36498501492E+2, 1.73299180838E+0, 2.57378003577E+0, 2.73557302899E+0, 2.63978157498E+0, -2.15404246691E+2}
    , {-1.50E+2, 1.E+1, 8.07512395314E+2, -4.18722350171E+2, -4.06338639335E+2, -1.93596859156E+0, 1.26375376229E+0, 1.76985284667E+0, 8.38896874323E-1, -1.80307818121E+2}
    , {-1.00E+2, 1.E+1, 7.6272571327E+2, -3.31542854722E+2, -3.18431981671E+2, -1.33692831937E+0, 1.3061011255E+0, 1.77528507553E+0, 1.05409587647E+0, -1.00053716223E+2}
    , {-5.0E+1, 1.E+1, 7.21103938468E+2, -2.4057850894E+2, -2.2671088256E+2, -8.72275593543E-1, 1.44672101903E+0, 1.90827318528E+0, 1.28500857287E+0, -4.59302102413E+1}
    , {0.E+0, 1.E+1, 6.80155215849E+2, -1.41298173744E+2, -1.26595647369E+2, -4.68119306128E-1, 1.6341610263E+0, 2.10290456121E+0, 1.52875530833E+0, -1.34313852748E+1}
    , {5.0E+1, 1.E+1, 6.38204227171E+2, -3.1644025717E+1, -1.59750602444E+1, -9.67456358544E-2, 1.8384625102E+0, 2.3249465815E+0, 1.77155612153E+0, -3.80673490668E-1}
    , {1.00E+2, 1.E+1, 5.93646654173E+2, 8.92844342522E+1, 1.06129471497E+2, 2.54175784712E-1, 2.04639335873E+0, 2.56113113622E+0, 2.00680513434E+0, -5.5612598132E+0}
    , {1.50E+2, 1.0E+1, 5.44450092595E+2, 2.21955477412E+2, 2.40322633807E+2, 5.91335665548E-1, 2.25197433374E+0, 2.80858125627E+0, 2.23126489747E+0, -2.82682094641E+1}
    , {2.00E+2, 1.E+1, 4.87635872514E+2, 3.66709020364E+2, 3.87216125283E+2, 9.19182567683E-1, 2.45243004508E+0, 3.0696353812E+0, 2.44272511652E+0, -6.8202211535E+1}
    , {2.50E+2, 1.E+1, 4.1949027337E+2, 5.23607817358E+2, 5.47446272347E+2, 1.24087651613E+0, 2.64668214054E+0, 3.33865416169E+0, 2.63978157498E+0, -1.25556732054E+2}
    , {-1.00E+2, 1.E+2, 7.9659405602E+2, -3.48141436988E+2, -2.22606982841E+2, -1.44935914431E+0, 1.36431694703E+0, 1.77712973663E+0, 1.05409587647E+0, -9.71849011512E+1}
    , {-5.0E+1, 1.00E+2, 7.64002142907E+2, -2.62218658567E+2, -1.31328973337E+2, -9.86839236618E-1, 1.49876413285E+0, 1.8885288321E+0, 1.28500857287E+0, -4.20054829153E+1}
    , {0.E+0, 1.00E+2, 7.34142631607E+2, -1.69002828408E+2, -3.27895154973E+1, -5.88972433276E-1, 1.68238301059E+0, 2.05892641589E+0, 1.52875530833E+0, -8.12500825847E+0}
    , {5.0E+1, 1.00E+2, 7.06153568479E+2, -6.66976608485E+1, 7.49145952722E+1, -2.27333504493E-1, 1.88373462616E+0, 2.25104385774E+0, 1.77155612153E+0, 6.76516112831E+0}
    , {1.00E+2, 1.E+2, 6.79605978216E+2, 4.52447084585E+1, 1.92388793716E+2, 1.10332803976E-1, 2.08853796231E+0, 2.4478468339E+0, 2.00680513434E+0, 4.07402265483E+0}
    , {1.50E+2, 1.00E+2, 6.54291990368E+2, 1.66796193115E+2, 3.1963315501E+2, 4.30088501051E-1, 2.28966136951E+0, 2.64078356644E+0, 2.23126489747E+0, -1.51957561044E+1}
    , {2.00E+2, 1.00E+2, 6.30125638116E+2, 2.97617813462E+2, 4.56316323649E+2, 7.35208438649E-1, 2.48268947563E+0, 2.8247387355E+0, 2.44272511652E+0, -5.0246059285E+1}
    , {2.50E+2, 1.00E+2, 6.07086865902E+2, 4.37185269944E+2, 6.01906343018E+2, 1.02757093115E+0, 2.66486029457E+0, 2.99671019961E+0, 2.63978157498E+0, -1.00388462688E+2}
};

const unsigned ntd = sizeof(td)/sizeof(TestData);

#endif
