#include "__cf_friccion_aislada_esferica_estatica.h"
#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "sm_ssci_run_time_errors.h"
PmfMessageId friccion_aislada_esferica_estatica_86e574d6_4_deriv ( const
double * state , const double * input , const double * inputDot , const
double * inputDdot , const double * discreteState , double * deriv ,
NeuDiagnosticManager * neDiagMgr ) { double xx [ 109 ] ; int ii [ 6 ] ; (
void ) inputDot ; ( void ) inputDdot ; ( void ) discreteState ; ( void )
neDiagMgr ; xx [ 0 ] = state [ 0 ] ; xx [ 1 ] = state [ 1 ] ; xx [ 2 ] =
state [ 2 ] ; xx [ 3 ] = state [ 3 ] ; xx [ 4 ] = state [ 4 ] ; xx [ 5 ] =
state [ 5 ] ; xx [ 6 ] = state [ 6 ] ; pm_math_quatDeriv ( xx + 0 , xx + 4 ,
xx + 7 ) ; xx [ 0 ] = 1.158333962556902e-20 ; xx [ 1 ] =
3.903119253855806e-12 ; xx [ 2 ] = 3.490160508532587e-7 ; xx [ 11 ] =
8.247646524533363e-4 ; xx [ 12 ] = xx [ 0 ] ; xx [ 13 ] = xx [ 1 ] ; xx [ 14
] = xx [ 0 ] ; xx [ 15 ] = 8.248952722023148e-4 ; xx [ 16 ] = xx [ 2 ] ; xx [
17 ] = xx [ 1 ] ; xx [ 18 ] = xx [ 2 ] ; xx [ 19 ] = 4.350331675654802e-7 ;
ii [ 0 ] = 0 ; ii [ 0 ] = factorSymmetric ( xx + 11 , 3 , xx + 21 , xx + 0 ,
ii + 1 , ii + 5 ) ; if ( ii [ 5 ] != 0 ) { return sm_ssci_recordRunTimeError
( "sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'friccion_aislada_esferica_estatica/Robot Delta/Spherical1' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } memcpy ( xx + 21 , xx + 11 , 9 * sizeof ( double ) ) ; xx [
4 ] = 2.0 ; xx [ 5 ] = 6.658676150629137e-9 ; xx [ 6 ] = xx [ 5 ] * state [ 6
] ; xx [ 30 ] = xx [ 5 ] * state [ 4 ] ; xx [ 32 ] = state [ 4 ] + xx [ 4 ] *
( xx [ 6 ] - xx [ 5 ] * xx [ 30 ] ) ; xx [ 31 ] = state [ 6 ] - ( xx [ 30 ] +
xx [ 5 ] * xx [ 6 ] ) * xx [ 4 ] ; xx [ 33 ] = xx [ 32 ] ; xx [ 34 ] = state
[ 5 ] ; xx [ 35 ] = xx [ 31 ] ; xx [ 6 ] = 2.935213571702446e-4 ; xx [ 30 ] =
2.936522062157758e-4 ; xx [ 36 ] = 4.348038710125838e-7 ; xx [ 38 ] = xx [ 32
] * xx [ 6 ] ; xx [ 39 ] = xx [ 30 ] * state [ 5 ] ; xx [ 40 ] = xx [ 36 ] *
xx [ 31 ] ; pm_math_cross3 ( xx + 33 , xx + 38 , xx + 41 ) ; xx [ 31 ] =
1.331735230125827e-8 ; xx [ 37 ] = 1.321134280794295e-12 ; xx [ 38 ] =
0.1510000000000145 ; xx [ 39 ] = 9.920397470219877e-5 ; xx [ 46 ] =
0.02329911258218661 ; xx [ 47 ] = - 2.010925208962528e-9 ; xx [ 48 ] =
9.920397470219879e-5 ; xx [ 49 ] = - xx [ 38 ] ; pm_math_cross3 ( xx + 33 ,
xx + 47 , xx + 50 ) ; pm_math_cross3 ( xx + 33 , xx + 50 , xx + 53 ) ; xx [
33 ] = xx [ 46 ] * xx [ 53 ] ; xx [ 34 ] = xx [ 46 ] * xx [ 54 ] ; xx [ 35 ]
= xx [ 46 ] * xx [ 55 ] ; xx [ 45 ] = 4.685277283797506e-11 ; xx [ 50 ] =
3.518165999910515e-3 ; xx [ 56 ] = - xx [ 39 ] ; xx [ 57 ] = -
5.011472334945477e-15 ; xx [ 58 ] = xx [ 37 ] ; xx [ 60 ] = input [ 0 ] - (
xx [ 41 ] - xx [ 31 ] * xx [ 43 ] + pm_math_dot3 ( xx + 37 , xx + 33 ) ) ; xx
[ 61 ] = input [ 1 ] - ( xx [ 42 ] + xx [ 45 ] * xx [ 55 ] - xx [ 50 ] * xx [
53 ] ) ; xx [ 62 ] = input [ 2 ] - ( xx [ 31 ] * xx [ 41 ] + xx [ 43 ] +
pm_math_dot3 ( xx + 56 , xx + 33 ) ) ; solveSymmetric ( xx + 21 , xx + 0 , ii
+ 1 , xx + 60 , 3 , 1 , ii [ 0 ] , xx + 32 , xx + 40 ) ; xx [ 3 ] = 0.0 ; xx
[ 20 ] = 3.07812563444124e-14 ; xx [ 35 ] = 2.311364575186921e-6 ; xx [ 59 ]
= xx [ 6 ] ; xx [ 60 ] = xx [ 3 ] ; xx [ 61 ] = 3.908927321379609e-12 ; xx [
62 ] = xx [ 3 ] ; xx [ 63 ] = xx [ 30 ] ; xx [ 64 ] = xx [ 3 ] ; xx [ 65 ] =
- 5.790436332225438e-15 ; xx [ 66 ] = xx [ 3 ] ; xx [ 67 ] = xx [ 36 ] ; xx [
68 ] = xx [ 20 ] ; xx [ 69 ] = - xx [ 50 ] ; xx [ 70 ] = - xx [ 35 ] ; xx [
71 ] = xx [ 50 ] ; xx [ 72 ] = xx [ 3 ] ; xx [ 73 ] = - 1.167628581344083e-16
; xx [ 74 ] = xx [ 35 ] ; xx [ 75 ] = xx [ 45 ] ; xx [ 76 ] = xx [ 20 ] ;
solveSymmetric ( xx + 21 , xx + 0 , ii + 1 , xx + 59 , 3 , 6 , ii [ 0 ] , xx
+ 77 , xx + 40 ) ; xx [ 20 ] = xx [ 86 ] ; xx [ 21 ] = xx [ 89 ] ; xx [ 22 ]
= xx [ 92 ] ; xx [ 3 ] = 0.6123724356957946 ; xx [ 23 ] = -
0.3535533905932738 ; xx [ 24 ] = xx [ 3 ] ; xx [ 25 ] = - xx [ 3 ] ; xx [ 26
] = xx [ 23 ] ; xx [ 27 ] = xx [ 23 ] ; xx [ 40 ] = - ( state [ 0 ] + xx [ 5
] * state [ 2 ] ) ; xx [ 41 ] = - ( state [ 1 ] + xx [ 5 ] * state [ 3 ] ) ;
xx [ 42 ] = xx [ 5 ] * state [ 0 ] - state [ 2 ] ; xx [ 43 ] = xx [ 5 ] *
state [ 1 ] - state [ 3 ] ; pm_math_quatCompose ( xx + 24 , xx + 40 , xx + 51
) ; xx [ 3 ] = 9.810000000000001 ; xx [ 23 ] = xx [ 3 ] * xx [ 54 ] ; xx [ 28
] = xx [ 3 ] * xx [ 52 ] ; xx [ 40 ] = ( xx [ 51 ] * xx [ 23 ] + xx [ 53 ] *
xx [ 28 ] ) * xx [ 4 ] ; xx [ 41 ] = xx [ 3 ] - ( xx [ 54 ] * xx [ 23 ] + xx
[ 52 ] * xx [ 28 ] ) * xx [ 4 ] ; xx [ 42 ] = xx [ 4 ] * ( xx [ 53 ] * xx [
23 ] - xx [ 51 ] * xx [ 28 ] ) ; xx [ 51 ] = xx [ 87 ] ; xx [ 52 ] = xx [ 90
] ; xx [ 53 ] = xx [ 93 ] ; xx [ 77 ] = xx [ 88 ] ; xx [ 78 ] = xx [ 91 ] ;
xx [ 79 ] = xx [ 94 ] ; xx [ 80 ] = state [ 7 ] ; xx [ 81 ] = state [ 8 ] ;
xx [ 82 ] = state [ 9 ] ; xx [ 83 ] = state [ 10 ] ; xx [ 84 ] = state [ 11 ]
; xx [ 85 ] = state [ 12 ] ; xx [ 86 ] = state [ 13 ] ; pm_math_quatDeriv (
xx + 80 , xx + 84 , xx + 87 ) ; if ( ii [ 5 ] != 0 ) { return
sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'friccion_aislada_esferica_estatica/Robot Delta/Spherical3' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 23 ] = xx [ 5 ] * state [ 13 ] ; xx [ 28 ] = xx [ 5 ]
* state [ 11 ] ; xx [ 35 ] = state [ 11 ] + xx [ 4 ] * ( xx [ 23 ] - xx [ 5 ]
* xx [ 28 ] ) ; xx [ 29 ] = state [ 13 ] - ( xx [ 28 ] + xx [ 5 ] * xx [ 23 ]
) * xx [ 4 ] ; xx [ 80 ] = xx [ 35 ] ; xx [ 81 ] = state [ 12 ] ; xx [ 82 ] =
xx [ 29 ] ; xx [ 83 ] = xx [ 35 ] * xx [ 6 ] ; xx [ 84 ] = xx [ 30 ] * state
[ 12 ] ; xx [ 85 ] = xx [ 36 ] * xx [ 29 ] ; pm_math_cross3 ( xx + 80 , xx +
83 , xx + 28 ) ; pm_math_cross3 ( xx + 80 , xx + 47 , xx + 83 ) ;
pm_math_cross3 ( xx + 80 , xx + 83 , xx + 47 ) ; xx [ 80 ] = xx [ 46 ] * xx [
47 ] ; xx [ 81 ] = xx [ 46 ] * xx [ 48 ] ; xx [ 82 ] = xx [ 46 ] * xx [ 49 ]
; xx [ 84 ] = input [ 3 ] - ( xx [ 28 ] - xx [ 31 ] * xx [ 30 ] +
pm_math_dot3 ( xx + 37 , xx + 80 ) ) ; xx [ 85 ] = input [ 4 ] - ( xx [ 29 ]
+ xx [ 45 ] * xx [ 49 ] - xx [ 50 ] * xx [ 47 ] ) ; xx [ 86 ] = input [ 5 ] -
( xx [ 31 ] * xx [ 28 ] + xx [ 30 ] + pm_math_dot3 ( xx + 56 , xx + 80 ) ) ;
solveSymmetric ( xx + 11 , xx + 0 , ii + 1 , xx + 84 , 3 , 1 , ii [ 0 ] , xx
+ 28 , xx + 35 ) ; solveSymmetric ( xx + 11 , xx + 0 , ii + 1 , xx + 59 , 3 ,
6 , ii [ 0 ] , xx + 91 , xx + 35 ) ; xx [ 0 ] = xx [ 100 ] ; xx [ 1 ] = xx [
103 ] ; xx [ 2 ] = xx [ 106 ] ; xx [ 11 ] = - ( state [ 7 ] + xx [ 5 ] *
state [ 9 ] ) ; xx [ 12 ] = - ( state [ 8 ] + xx [ 5 ] * state [ 10 ] ) ; xx
[ 13 ] = xx [ 5 ] * state [ 7 ] - state [ 9 ] ; xx [ 14 ] = xx [ 5 ] * state
[ 8 ] - state [ 10 ] ; pm_math_quatCompose ( xx + 24 , xx + 11 , xx + 15 ) ;
xx [ 5 ] = xx [ 3 ] * xx [ 18 ] ; xx [ 11 ] = xx [ 3 ] * xx [ 16 ] ; xx [ 23
] = ( xx [ 15 ] * xx [ 5 ] + xx [ 17 ] * xx [ 11 ] ) * xx [ 4 ] ; xx [ 24 ] =
xx [ 3 ] - ( xx [ 18 ] * xx [ 5 ] + xx [ 16 ] * xx [ 11 ] ) * xx [ 4 ] ; xx [
25 ] = xx [ 4 ] * ( xx [ 17 ] * xx [ 5 ] - xx [ 15 ] * xx [ 11 ] ) ; xx [ 3 ]
= xx [ 101 ] ; xx [ 4 ] = xx [ 104 ] ; xx [ 5 ] = xx [ 107 ] ; xx [ 11 ] = xx
[ 102 ] ; xx [ 12 ] = xx [ 105 ] ; xx [ 13 ] = xx [ 108 ] ; deriv [ 0 ] = xx
[ 7 ] ; deriv [ 1 ] = xx [ 8 ] ; deriv [ 2 ] = xx [ 9 ] ; deriv [ 3 ] = xx [
10 ] ; deriv [ 4 ] = xx [ 32 ] - pm_math_dot3 ( xx + 20 , xx + 40 ) ; deriv [
5 ] = xx [ 33 ] - pm_math_dot3 ( xx + 51 , xx + 40 ) ; deriv [ 6 ] = xx [ 34
] - pm_math_dot3 ( xx + 77 , xx + 40 ) ; deriv [ 7 ] = xx [ 87 ] ; deriv [ 8
] = xx [ 88 ] ; deriv [ 9 ] = xx [ 89 ] ; deriv [ 10 ] = xx [ 90 ] ; deriv [
11 ] = xx [ 28 ] - pm_math_dot3 ( xx + 0 , xx + 23 ) ; deriv [ 12 ] = xx [ 29
] - pm_math_dot3 ( xx + 3 , xx + 23 ) ; deriv [ 13 ] = xx [ 30 ] -
pm_math_dot3 ( xx + 11 , xx + 23 ) ; return NULL ; }
