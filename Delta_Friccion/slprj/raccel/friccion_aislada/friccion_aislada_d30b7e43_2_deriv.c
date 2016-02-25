#include "__cf_friccion_aislada.h"
#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "sm_ssci_run_time_errors.h"
PmfMessageId friccion_aislada_d30b7e43_2_deriv ( const double * state , const
double * input , const double * inputDot , const double * inputDdot , const
double * discreteState , double * deriv , NeuDiagnosticManager * neDiagMgr )
{ double xx [ 32 ] ; int ii [ 3 ] ; ( void ) inputDot ; ( void ) inputDdot ;
( void ) discreteState ; ( void ) neDiagMgr ; xx [ 0 ] = 6.568050403978787e-3
; xx [ 1 ] = 0.9974153114669369 ; xx [ 2 ] = 0.07155108081087214 ; xx [ 5 ] =
xx [ 0 ] * state [ 1 ] ; xx [ 6 ] = xx [ 1 ] * state [ 1 ] ; xx [ 7 ] = xx [
2 ] * state [ 1 ] ; xx [ 8 ] = 4.88308621989983e-6 * state [ 1 ] ; xx [ 9 ] =
7.172785421636019e-4 * state [ 1 ] ; xx [ 10 ] = 8.59649160740444e-6 * state
[ 1 ] ; pm_math_cross3 ( xx + 5 , xx + 8 , xx + 11 ) ; xx [ 4 ] =
0.02286709270623662 ; xx [ 8 ] = 1.505863794435611e-4 ; xx [ 9 ] =
6.908446810292455e-8 ; xx [ 14 ] = - xx [ 4 ] ; xx [ 15 ] = xx [ 8 ] ; xx [
16 ] = - xx [ 9 ] ; xx [ 10 ] = 0.2590896379045805 ; xx [ 17 ] = - xx [ 4 ] *
state [ 1 ] ; xx [ 18 ] = xx [ 8 ] * state [ 1 ] ; xx [ 19 ] = - xx [ 9 ] *
state [ 1 ] ; pm_math_cross3 ( xx + 5 , xx + 17 , xx + 20 ) ; xx [ 4 ] = xx [
10 ] * xx [ 20 ] ; xx [ 5 ] = xx [ 10 ] * xx [ 21 ] ; xx [ 6 ] = xx [ 10 ] *
xx [ 22 ] ; xx [ 7 ] = 8.515566259282997e-4 ; ii [ 1 ] = factorSymmetric ( xx
+ 7 , 1 , xx + 17 , xx + 9 , ii + 0 , ii + 2 ) ; if ( ii [ 2 ] != 0 ) {
return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'friccion_aislada/Robot Delta/Revolute1' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 17 ] = - 5.92462676918932e-3 / xx [ 7 ] ; xx [ 18 ] =
3.9015370523394e-5 / xx [ 7 ] ; xx [ 19 ] = - 1.789906982561726e-8 / xx [ 7 ]
; xx [ 20 ] = 0.5907224733087 ; xx [ 21 ] = - 0.6355193691704046 ; xx [ 22 ]
= - 0.3395036715477617 ; xx [ 23 ] = - 0.3631794982414238 ; xx [ 8 ] = 0.5 *
state [ 0 ] ; xx [ 10 ] = sin ( xx [ 8 ] ) ; xx [ 24 ] = cos ( xx [ 8 ] ) ;
xx [ 25 ] = xx [ 0 ] * xx [ 10 ] ; xx [ 26 ] = xx [ 1 ] * xx [ 10 ] ; xx [ 27
] = xx [ 2 ] * xx [ 10 ] ; pm_math_quatCompose ( xx + 20 , xx + 24 , xx + 28
) ; xx [ 3 ] = 9.810000000000001 ; xx [ 8 ] = xx [ 3 ] * xx [ 31 ] ; xx [ 10
] = xx [ 3 ] * xx [ 29 ] ; xx [ 20 ] = 2.0 ; xx [ 23 ] = ( xx [ 28 ] * xx [ 8
] + xx [ 30 ] * xx [ 10 ] ) * xx [ 20 ] ; xx [ 24 ] = xx [ 3 ] - ( xx [ 31 ]
* xx [ 8 ] + xx [ 29 ] * xx [ 10 ] ) * xx [ 20 ] ; xx [ 25 ] = xx [ 20 ] * (
xx [ 30 ] * xx [ 8 ] - xx [ 28 ] * xx [ 10 ] ) ; deriv [ 0 ] = state [ 1 ] ;
deriv [ 1 ] = ( input [ 0 ] - ( pm_math_dot3 ( xx + 0 , xx + 11 ) +
pm_math_dot3 ( xx + 14 , xx + 4 ) ) ) / xx [ 7 ] - pm_math_dot3 ( xx + 17 ,
xx + 23 ) ; return NULL ; }
