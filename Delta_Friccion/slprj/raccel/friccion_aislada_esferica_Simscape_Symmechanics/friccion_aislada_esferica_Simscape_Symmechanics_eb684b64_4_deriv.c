#include "__cf_friccion_aislada_esferica_Simscape_Symmechanics.h"
#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "sm_ssci_run_time_errors.h"
PmfMessageId friccion_aislada_esferica_Simscape_Symmechanics_eb684b64_4_deriv
( const double * state , const double * input , const double * inputDot ,
const double * inputDdot , const double * discreteState , double * deriv ,
NeuDiagnosticManager * neDiagMgr ) { double xx [ 66 ] ; int ii [ 6 ] ; ( void
) inputDot ; ( void ) inputDdot ; ( void ) discreteState ; ( void ) neDiagMgr
; xx [ 0 ] = state [ 0 ] ; xx [ 1 ] = state [ 1 ] ; xx [ 2 ] = state [ 2 ] ;
xx [ 3 ] = state [ 3 ] ; xx [ 4 ] = state [ 4 ] ; xx [ 5 ] = state [ 5 ] ; xx
[ 6 ] = state [ 6 ] ; pm_math_quatDeriv ( xx + 0 , xx + 4 , xx + 7 ) ; xx [ 0
] = 4.647981284500388e-15 ; xx [ 1 ] = 3.902740798365455e-12 ; xx [ 2 ] =
3.490160508531874e-7 ; xx [ 11 ] = 0.01222526465245554 ; xx [ 12 ] = xx [ 0 ]
; xx [ 13 ] = xx [ 1 ] ; xx [ 14 ] = xx [ 0 ] ; xx [ 15 ] =
0.01222539527220452 ; xx [ 16 ] = xx [ 2 ] ; xx [ 17 ] = xx [ 1 ] ; xx [ 18 ]
= xx [ 2 ] ; xx [ 19 ] = 4.35033167565476e-7 ; ii [ 0 ] = 0 ; ii [ 0 ] =
factorSymmetric ( xx + 11 , 3 , xx + 21 , xx + 0 , ii + 1 , ii + 5 ) ; if (
ii [ 5 ] != 0 ) { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Spherical1' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 4 ] = 2.0 ; xx [ 5 ] = 6.658676131843762e-9 ; xx [ 6 ]
= xx [ 5 ] * state [ 6 ] ; xx [ 21 ] = xx [ 5 ] * state [ 4 ] ; xx [ 23 ] =
state [ 4 ] + xx [ 4 ] * ( xx [ 6 ] - xx [ 5 ] * xx [ 21 ] ) ; xx [ 22 ] =
state [ 6 ] - ( xx [ 21 ] + xx [ 5 ] * xx [ 6 ] ) * xx [ 4 ] ; xx [ 24 ] = xx
[ 23 ] ; xx [ 25 ] = state [ 5 ] ; xx [ 26 ] = xx [ 22 ] ; xx [ 6 ] =
2.935215762577145e-4 ; xx [ 21 ] = 2.936522062157798e-4 ; xx [ 27 ] =
4.350229584783627e-7 ; xx [ 29 ] = xx [ 23 ] * xx [ 6 ] ; xx [ 30 ] = xx [ 21
] * state [ 5 ] ; xx [ 31 ] = xx [ 27 ] * xx [ 22 ] ; pm_math_cross3 ( xx +
24 , xx + 29 , xx + 32 ) ; xx [ 22 ] = 1.331735226368753e-8 ; xx [ 28 ] =
0.07901816599991779 ; xx [ 29 ] = 2.010925206001072e-9 ; xx [ 37 ] = - xx [
29 ] ; xx [ 38 ] = 4.416909028913054e-6 ; xx [ 39 ] = - 0.1510000000000146 ;
pm_math_cross3 ( xx + 24 , xx + 37 , xx + 40 ) ; pm_math_cross3 ( xx + 24 ,
xx + 40 , xx + 37 ) ; xx [ 24 ] = 4.416909028913053e-6 ; xx [ 25 ] =
0.5232991125821865 ; xx [ 26 ] = xx [ 25 ] * xx [ 39 ] ; xx [ 40 ] = - xx [
24 ] ; xx [ 41 ] = - 5.014184061295275e-15 ; xx [ 42 ] =
5.882153345469713e-14 ; xx [ 43 ] = xx [ 25 ] * xx [ 37 ] ; xx [ 44 ] = xx [
25 ] * xx [ 38 ] ; xx [ 45 ] = xx [ 26 ] ; xx [ 46 ] = input [ 0 ] - ( xx [
32 ] - xx [ 22 ] * xx [ 34 ] + xx [ 28 ] * xx [ 38 ] + xx [ 24 ] * xx [ 26 ]
) ; xx [ 47 ] = input [ 1 ] - ( xx [ 33 ] + xx [ 29 ] * xx [ 26 ] - xx [ 28 ]
* xx [ 37 ] ) ; xx [ 48 ] = input [ 2 ] - ( xx [ 22 ] * xx [ 32 ] + xx [ 34 ]
+ pm_math_dot3 ( xx + 40 , xx + 43 ) ) ; solveSymmetric ( xx + 11 , xx + 0 ,
ii + 1 , xx + 46 , 3 , 1 , ii [ 0 ] , xx + 22 , xx + 29 ) ; xx [ 3 ] = 0.0 ;
xx [ 20 ] = 2.311364575186448e-6 ; xx [ 30 ] = xx [ 6 ] ; xx [ 31 ] = xx [ 3
] ; xx [ 32 ] = 3.908930228016804e-12 ; xx [ 33 ] = xx [ 3 ] ; xx [ 34 ] = xx
[ 21 ] ; xx [ 35 ] = xx [ 3 ] ; xx [ 36 ] = - 5.793353980847868e-15 ; xx [ 37
] = xx [ 3 ] ; xx [ 38 ] = xx [ 27 ] ; xx [ 39 ] = xx [ 3 ] ; xx [ 40 ] = -
xx [ 28 ] ; xx [ 41 ] = - xx [ 20 ] ; xx [ 42 ] = xx [ 28 ] ; xx [ 43 ] = xx
[ 3 ] ; xx [ 44 ] = - 2.623918069599561e-15 ; xx [ 45 ] = xx [ 20 ] ; xx [ 46
] = 1.052315375769512e-9 ; xx [ 47 ] = 3.078125625756641e-14 ; solveSymmetric
( xx + 11 , xx + 0 , ii + 1 , xx + 30 , 3 , 6 , ii [ 0 ] , xx + 48 , xx + 25
) ; xx [ 0 ] = xx [ 57 ] ; xx [ 1 ] = xx [ 60 ] ; xx [ 2 ] = xx [ 63 ] ; xx [
3 ] = 0.6123724356957946 ; xx [ 6 ] = - 0.3535533905932738 ; xx [ 11 ] = xx [
3 ] ; xx [ 12 ] = - xx [ 3 ] ; xx [ 13 ] = xx [ 6 ] ; xx [ 14 ] = xx [ 6 ] ;
xx [ 15 ] = - ( state [ 0 ] + xx [ 5 ] * state [ 2 ] ) ; xx [ 16 ] = - (
state [ 1 ] + xx [ 5 ] * state [ 3 ] ) ; xx [ 17 ] = xx [ 5 ] * state [ 0 ] -
state [ 2 ] ; xx [ 18 ] = xx [ 5 ] * state [ 1 ] - state [ 3 ] ;
pm_math_quatCompose ( xx + 11 , xx + 15 , xx + 25 ) ; xx [ 3 ] =
9.810000000000001 ; xx [ 5 ] = xx [ 3 ] * xx [ 28 ] ; xx [ 11 ] = xx [ 3 ] *
xx [ 26 ] ; xx [ 14 ] = ( xx [ 25 ] * xx [ 5 ] + xx [ 27 ] * xx [ 11 ] ) * xx
[ 4 ] ; xx [ 15 ] = xx [ 3 ] - ( xx [ 28 ] * xx [ 5 ] + xx [ 26 ] * xx [ 11 ]
) * xx [ 4 ] ; xx [ 16 ] = xx [ 4 ] * ( xx [ 27 ] * xx [ 5 ] - xx [ 25 ] * xx
[ 11 ] ) ; xx [ 3 ] = xx [ 58 ] ; xx [ 4 ] = xx [ 61 ] ; xx [ 5 ] = xx [ 64 ]
; xx [ 11 ] = xx [ 59 ] ; xx [ 12 ] = xx [ 62 ] ; xx [ 13 ] = xx [ 65 ] ;
deriv [ 0 ] = xx [ 7 ] ; deriv [ 1 ] = xx [ 8 ] ; deriv [ 2 ] = xx [ 9 ] ;
deriv [ 3 ] = xx [ 10 ] ; deriv [ 4 ] = xx [ 22 ] - pm_math_dot3 ( xx + 0 ,
xx + 14 ) ; deriv [ 5 ] = xx [ 23 ] - pm_math_dot3 ( xx + 3 , xx + 14 ) ;
deriv [ 6 ] = xx [ 24 ] - pm_math_dot3 ( xx + 11 , xx + 14 ) ; return NULL ;
}
