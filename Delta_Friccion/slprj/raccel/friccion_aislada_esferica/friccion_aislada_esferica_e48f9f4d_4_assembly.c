#include "__cf_friccion_aislada_esferica.h"
#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "sm_ssci_run_time_errors.h"
void friccion_aislada_esferica_e48f9f4d_4_resetStateVector ( const void *
mech , double * state ) { double xx [ 2 ] ; ( void ) mech ; xx [ 0 ] = 1.0 ;
xx [ 1 ] = 0.0 ; state [ 0 ] = xx [ 0 ] ; state [ 1 ] = xx [ 1 ] ; state [ 2
] = xx [ 1 ] ; state [ 3 ] = xx [ 1 ] ; state [ 4 ] = xx [ 1 ] ; state [ 5 ]
= xx [ 1 ] ; state [ 6 ] = xx [ 1 ] ; state [ 7 ] = xx [ 0 ] ; state [ 8 ] =
xx [ 1 ] ; state [ 9 ] = xx [ 1 ] ; state [ 10 ] = xx [ 1 ] ; state [ 11 ] =
xx [ 1 ] ; state [ 12 ] = xx [ 1 ] ; state [ 13 ] = xx [ 1 ] ; } PmfMessageId
friccion_aislada_esferica_e48f9f4d_4_initializeTrackedAngleState ( const void
* mech , double * state , void * neDiagMgr0 ) { NeuDiagnosticManager *
neDiagMgr = ( NeuDiagnosticManager * ) neDiagMgr0 ; ( void ) mech ; ( void )
state ; return NULL ; } void
friccion_aislada_esferica_e48f9f4d_4_computeDiscreteState ( const void * mech
, double * state ) { ( void ) mech ; ( void ) state ; } void
friccion_aislada_esferica_e48f9f4d_4_adjustPosition ( const void * mech ,
const double * dofDeltas , double * state ) { double xx [ 28 ] ; ( void )
mech ; xx [ 0 ] = state [ 0 ] ; xx [ 1 ] = state [ 1 ] ; xx [ 2 ] = state [ 2
] ; xx [ 3 ] = state [ 3 ] ; xx [ 4 ] = dofDeltas [ 0 ] ; xx [ 5 ] =
dofDeltas [ 1 ] ; xx [ 6 ] = dofDeltas [ 2 ] ; pm_math_quatDeriv ( xx + 0 ,
xx + 4 , xx + 7 ) ; xx [ 0 ] = state [ 0 ] + xx [ 7 ] ; xx [ 3 ] = state [ 1
] + xx [ 8 ] ; xx [ 6 ] = state [ 2 ] + xx [ 9 ] ; xx [ 9 ] = state [ 3 ] +
xx [ 10 ] ; xx [ 12 ] = 1.0e-64 ; xx [ 13 ] = sqrt ( xx [ 0 ] * xx [ 0 ] + xx
[ 3 ] * xx [ 3 ] + xx [ 6 ] * xx [ 6 ] + xx [ 9 ] * xx [ 9 ] ) ; if ( xx [ 12
] > xx [ 13 ] ) xx [ 13 ] = xx [ 12 ] ; xx [ 17 ] = state [ 7 ] ; xx [ 18 ] =
state [ 8 ] ; xx [ 19 ] = state [ 9 ] ; xx [ 20 ] = state [ 10 ] ; xx [ 21 ]
= dofDeltas [ 3 ] ; xx [ 22 ] = dofDeltas [ 4 ] ; xx [ 23 ] = dofDeltas [ 5 ]
; pm_math_quatDeriv ( xx + 17 , xx + 21 , xx + 24 ) ; xx [ 1 ] = state [ 7 ]
+ xx [ 24 ] ; xx [ 4 ] = state [ 8 ] + xx [ 25 ] ; xx [ 7 ] = state [ 9 ] +
xx [ 26 ] ; xx [ 10 ] = state [ 10 ] + xx [ 27 ] ; xx [ 17 ] = sqrt ( xx [ 1
] * xx [ 1 ] + xx [ 4 ] * xx [ 4 ] + xx [ 7 ] * xx [ 7 ] + xx [ 10 ] * xx [
10 ] ) ; if ( xx [ 12 ] > xx [ 17 ] ) xx [ 17 ] = xx [ 12 ] ; state [ 0 ] =
xx [ 0 ] / xx [ 13 ] ; state [ 1 ] = xx [ 3 ] / xx [ 13 ] ; state [ 2 ] = xx
[ 6 ] / xx [ 13 ] ; state [ 3 ] = xx [ 9 ] / xx [ 13 ] ; state [ 7 ] = xx [ 1
] / xx [ 17 ] ; state [ 8 ] = xx [ 4 ] / xx [ 17 ] ; state [ 9 ] = xx [ 7 ] /
xx [ 17 ] ; state [ 10 ] = xx [ 10 ] / xx [ 17 ] ; } static void
perturbState_0_0 ( double mag , double * state ) { double xx [ 18 ] ; xx [ 0
] = 0.5 * mag ; xx [ 2 ] = fabs ( mag ) ; xx [ 4 ] = 1.0 / ( xx [ 2 ] - floor
( xx [ 2 ] ) + 1.0e-9 ) ; xx [ 2 ] = sin ( xx [ 4 ] ) ; xx [ 5 ] = cos ( xx [
4 ] ) ; xx [ 8 ] = sin ( 2.0 * xx [ 4 ] ) ; xx [ 11 ] = sqrt ( xx [ 2 ] * xx
[ 2 ] + xx [ 5 ] * xx [ 5 ] + xx [ 8 ] * xx [ 8 ] ) ; xx [ 3 ] = sin ( xx [ 0
] ) ; xx [ 14 ] = cos ( xx [ 0 ] ) ; xx [ 15 ] = xx [ 2 ] / xx [ 11 ] * xx [
3 ] ; xx [ 16 ] = xx [ 5 ] / xx [ 11 ] * xx [ 3 ] ; xx [ 17 ] = xx [ 8 ] / xx
[ 11 ] * xx [ 3 ] ; xx [ 0 ] = state [ 0 ] ; xx [ 1 ] = state [ 1 ] ; xx [ 2
] = state [ 2 ] ; xx [ 3 ] = state [ 3 ] ; pm_math_quatCompose ( xx + 14 , xx
+ 0 , xx + 4 ) ; state [ 0 ] = xx [ 4 ] ; state [ 1 ] = xx [ 5 ] ; state [ 2
] = xx [ 6 ] ; state [ 3 ] = xx [ 7 ] ; } static void perturbState_0_0v (
double mag , double * state ) { double xx [ 18 ] ; xx [ 0 ] = 0.5 * mag ; xx
[ 2 ] = fabs ( mag ) ; xx [ 4 ] = 1.0 / ( xx [ 2 ] - floor ( xx [ 2 ] ) +
1.0e-9 ) ; xx [ 2 ] = sin ( xx [ 4 ] ) ; xx [ 5 ] = cos ( xx [ 4 ] ) ; xx [ 8
] = sin ( 2.0 * xx [ 4 ] ) ; xx [ 11 ] = sqrt ( xx [ 2 ] * xx [ 2 ] + xx [ 5
] * xx [ 5 ] + xx [ 8 ] * xx [ 8 ] ) ; xx [ 3 ] = sin ( xx [ 0 ] ) ; xx [ 14
] = cos ( xx [ 0 ] ) ; xx [ 15 ] = xx [ 2 ] / xx [ 11 ] * xx [ 3 ] ; xx [ 16
] = xx [ 5 ] / xx [ 11 ] * xx [ 3 ] ; xx [ 17 ] = xx [ 8 ] / xx [ 11 ] * xx [
3 ] ; xx [ 1 ] = state [ 0 ] ; xx [ 2 ] = state [ 1 ] ; xx [ 3 ] = state [ 2
] ; xx [ 4 ] = state [ 3 ] ; pm_math_quatCompose ( xx + 14 , xx + 1 , xx + 5
) ; state [ 0 ] = xx [ 5 ] ; state [ 1 ] = xx [ 6 ] ; state [ 2 ] = xx [ 7 ]
; state [ 3 ] = xx [ 8 ] ; state [ 4 ] = state [ 4 ] + 1.2 * mag ; state [ 5
] = state [ 5 ] - xx [ 0 ] ; state [ 6 ] = state [ 6 ] + 0.9 * mag ; } static
void perturbState_1_0 ( double mag , double * state ) { double xx [ 18 ] ; xx
[ 0 ] = 0.5 * mag ; xx [ 2 ] = fabs ( mag ) ; xx [ 4 ] = 1.0 / ( xx [ 2 ] -
floor ( xx [ 2 ] ) + 1.0e-9 ) ; xx [ 2 ] = sin ( xx [ 4 ] ) ; xx [ 5 ] = cos
( xx [ 4 ] ) ; xx [ 8 ] = sin ( 2.0 * xx [ 4 ] ) ; xx [ 11 ] = sqrt ( xx [ 2
] * xx [ 2 ] + xx [ 5 ] * xx [ 5 ] + xx [ 8 ] * xx [ 8 ] ) ; xx [ 3 ] = sin (
xx [ 0 ] ) ; xx [ 14 ] = cos ( xx [ 0 ] ) ; xx [ 15 ] = xx [ 2 ] / xx [ 11 ]
* xx [ 3 ] ; xx [ 16 ] = xx [ 5 ] / xx [ 11 ] * xx [ 3 ] ; xx [ 17 ] = xx [ 8
] / xx [ 11 ] * xx [ 3 ] ; xx [ 0 ] = state [ 7 ] ; xx [ 1 ] = state [ 8 ] ;
xx [ 2 ] = state [ 9 ] ; xx [ 3 ] = state [ 10 ] ; pm_math_quatCompose ( xx +
14 , xx + 0 , xx + 4 ) ; state [ 7 ] = xx [ 4 ] ; state [ 8 ] = xx [ 5 ] ;
state [ 9 ] = xx [ 6 ] ; state [ 10 ] = xx [ 7 ] ; } static void
perturbState_1_0v ( double mag , double * state ) { double xx [ 18 ] ; xx [ 0
] = 0.5 * mag ; xx [ 2 ] = fabs ( mag ) ; xx [ 4 ] = 1.0 / ( xx [ 2 ] - floor
( xx [ 2 ] ) + 1.0e-9 ) ; xx [ 2 ] = sin ( xx [ 4 ] ) ; xx [ 5 ] = cos ( xx [
4 ] ) ; xx [ 8 ] = sin ( 2.0 * xx [ 4 ] ) ; xx [ 11 ] = sqrt ( xx [ 2 ] * xx
[ 2 ] + xx [ 5 ] * xx [ 5 ] + xx [ 8 ] * xx [ 8 ] ) ; xx [ 3 ] = sin ( xx [ 0
] ) ; xx [ 14 ] = cos ( xx [ 0 ] ) ; xx [ 15 ] = xx [ 2 ] / xx [ 11 ] * xx [
3 ] ; xx [ 16 ] = xx [ 5 ] / xx [ 11 ] * xx [ 3 ] ; xx [ 17 ] = xx [ 8 ] / xx
[ 11 ] * xx [ 3 ] ; xx [ 1 ] = state [ 7 ] ; xx [ 2 ] = state [ 8 ] ; xx [ 3
] = state [ 9 ] ; xx [ 4 ] = state [ 10 ] ; pm_math_quatCompose ( xx + 14 ,
xx + 1 , xx + 5 ) ; state [ 7 ] = xx [ 5 ] ; state [ 8 ] = xx [ 6 ] ; state [
9 ] = xx [ 7 ] ; state [ 10 ] = xx [ 8 ] ; state [ 11 ] = state [ 11 ] + 1.2
* mag ; state [ 12 ] = state [ 12 ] - xx [ 0 ] ; state [ 13 ] = state [ 13 ]
+ 0.9 * mag ; } void friccion_aislada_esferica_e48f9f4d_4_perturbState (
const void * mech , size_t stageIdx , size_t primIdx , double mag , bool
doPerturbVelocity , double * state ) { ( void ) mech ; ( void ) stageIdx ; (
void ) primIdx ; ( void ) mag ; ( void ) doPerturbVelocity ; ( void ) state ;
switch ( ( stageIdx * 6 + primIdx ) * 2 + ( doPerturbVelocity ? 1 : 0 ) ) {
case 0 : perturbState_0_0 ( mag , state ) ; break ; case 1 :
perturbState_0_0v ( mag , state ) ; break ; case 12 : perturbState_1_0 ( mag
, state ) ; break ; case 13 : perturbState_1_0v ( mag , state ) ; break ; } }
void friccion_aislada_esferica_e48f9f4d_4_propagateMotion ( const void * mech
, const double * state , double * motionData ) { double xx [ 33 ] ; ( void )
mech ; xx [ 0 ] = 0.6123724356957946 ; xx [ 2 ] = - 0.3535533905932738 ; xx [
3 ] = xx [ 0 ] ; xx [ 4 ] = - xx [ 0 ] ; xx [ 5 ] = xx [ 2 ] ; xx [ 6 ] = xx
[ 2 ] ; xx [ 0 ] = 6.658676150629137e-9 ; xx [ 7 ] = - ( state [ 0 ] + xx [ 0
] * state [ 2 ] ) ; xx [ 8 ] = - ( state [ 1 ] + xx [ 0 ] * state [ 3 ] ) ;
xx [ 9 ] = xx [ 0 ] * state [ 0 ] - state [ 2 ] ; xx [ 10 ] = xx [ 0 ] *
state [ 1 ] - state [ 3 ] ; pm_math_quatCompose ( xx + 3 , xx + 7 , xx + 11 )
; xx [ 7 ] = - 2.010925208962528e-9 ; xx [ 8 ] = 9.920397470219879e-5 ; xx [
9 ] = - 0.1510000000000145 ; pm_math_quatXform ( xx + 11 , xx + 7 , xx + 16 )
; xx [ 19 ] = - ( state [ 7 ] + xx [ 0 ] * state [ 9 ] ) ; xx [ 20 ] = - (
state [ 8 ] + xx [ 0 ] * state [ 10 ] ) ; xx [ 21 ] = xx [ 0 ] * state [ 7 ]
- state [ 9 ] ; xx [ 22 ] = xx [ 0 ] * state [ 8 ] - state [ 10 ] ;
pm_math_quatCompose ( xx + 3 , xx + 19 , xx + 23 ) ; pm_math_quatXform ( xx +
23 , xx + 7 , xx + 1 ) ; xx [ 4 ] = 2.0 ; xx [ 5 ] = xx [ 0 ] * state [ 6 ] ;
xx [ 6 ] = xx [ 0 ] * state [ 4 ] ; xx [ 10 ] = state [ 4 ] + xx [ 4 ] * ( xx
[ 5 ] - xx [ 0 ] * xx [ 6 ] ) ; xx [ 15 ] = state [ 6 ] - ( xx [ 6 ] + xx [ 0
] * xx [ 5 ] ) * xx [ 4 ] ; xx [ 19 ] = xx [ 10 ] ; xx [ 20 ] = state [ 5 ] ;
xx [ 21 ] = xx [ 15 ] ; pm_math_cross3 ( xx + 19 , xx + 7 , xx + 27 ) ; xx [
5 ] = xx [ 0 ] * state [ 13 ] ; xx [ 6 ] = xx [ 0 ] * state [ 11 ] ; xx [ 19
] = state [ 11 ] + xx [ 4 ] * ( xx [ 5 ] - xx [ 0 ] * xx [ 6 ] ) ; xx [ 20 ]
= state [ 13 ] - ( xx [ 6 ] + xx [ 0 ] * xx [ 5 ] ) * xx [ 4 ] ; xx [ 4 ] =
xx [ 19 ] ; xx [ 5 ] = state [ 12 ] ; xx [ 6 ] = xx [ 20 ] ; pm_math_cross3 (
xx + 4 , xx + 7 , xx + 30 ) ; motionData [ 0 ] = xx [ 11 ] ; motionData [ 1 ]
= xx [ 12 ] ; motionData [ 2 ] = xx [ 13 ] ; motionData [ 3 ] = xx [ 14 ] ;
motionData [ 4 ] = xx [ 16 ] - 0.03943093089703365 ; motionData [ 5 ] = xx [
17 ] - 0.1899999999999991 ; motionData [ 6 ] = xx [ 18 ] - 0.1329345582613999
; motionData [ 7 ] = xx [ 23 ] ; motionData [ 8 ] = xx [ 24 ] ; motionData [
9 ] = xx [ 25 ] ; motionData [ 10 ] = xx [ 26 ] ; motionData [ 11 ] = xx [ 1
] - 0.09052642972031554 ; motionData [ 12 ] = xx [ 2 ] - 0.1899999999999992 ;
motionData [ 13 ] = xx [ 3 ] - 0.1034345582613999 ; motionData [ 14 ] = xx [
10 ] ; motionData [ 15 ] = state [ 5 ] ; motionData [ 16 ] = xx [ 15 ] ;
motionData [ 17 ] = xx [ 27 ] ; motionData [ 18 ] = xx [ 28 ] ; motionData [
19 ] = xx [ 29 ] ; motionData [ 20 ] = xx [ 19 ] ; motionData [ 21 ] = state
[ 12 ] ; motionData [ 22 ] = xx [ 20 ] ; motionData [ 23 ] = xx [ 30 ] ;
motionData [ 24 ] = xx [ 31 ] ; motionData [ 25 ] = xx [ 32 ] ; } size_t
friccion_aislada_esferica_e48f9f4d_4_computeAssemblyError ( const void * mech
, size_t constraintIdx , const double * state , const double * motionData ,
double * error ) { ( void ) mech ; ( void ) state ; ( void ) motionData ; (
void ) error ; ( void ) state ; switch ( constraintIdx ) { } return 0 ; }
size_t friccion_aislada_esferica_e48f9f4d_4_computeAssemblyJacobian ( const
void * mech , size_t constraintIdx , bool forVelocitySatisfaction , const
double * state , const double * motionData , double * J ) { ( void ) mech ; (
void ) state ; ( void ) forVelocitySatisfaction ; ( void ) motionData ; (
void ) J ; switch ( constraintIdx ) { } return 0 ; } size_t
friccion_aislada_esferica_e48f9f4d_4_computeFullAssemblyJacobian ( const void
* mech , const double * state , const double * motionData , double * J ) { (
void ) mech ; ( void ) state ; ( void ) motionData ; ( void ) J ; return 0 ;
} PmfMessageId friccion_aislada_esferica_e48f9f4d_4_convertStateVector (
const void * asmMech , const void * simMech , const double * asmState ,
double * simState , void * neDiagMgr0 ) { NeuDiagnosticManager * neDiagMgr =
( NeuDiagnosticManager * ) neDiagMgr0 ; ( void ) asmMech ; ( void ) simMech ;
simState [ 0 ] = asmState [ 0 ] ; simState [ 1 ] = asmState [ 1 ] ; simState
[ 2 ] = asmState [ 2 ] ; simState [ 3 ] = asmState [ 3 ] ; simState [ 4 ] =
asmState [ 4 ] ; simState [ 5 ] = asmState [ 5 ] ; simState [ 6 ] = asmState
[ 6 ] ; simState [ 7 ] = asmState [ 7 ] ; simState [ 8 ] = asmState [ 8 ] ;
simState [ 9 ] = asmState [ 9 ] ; simState [ 10 ] = asmState [ 10 ] ;
simState [ 11 ] = asmState [ 11 ] ; simState [ 12 ] = asmState [ 12 ] ;
simState [ 13 ] = asmState [ 13 ] ; return NULL ; }
