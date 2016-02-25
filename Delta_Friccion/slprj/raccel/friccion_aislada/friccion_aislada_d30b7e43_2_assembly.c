#include "__cf_friccion_aislada.h"
#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "sm_ssci_run_time_errors.h"
void friccion_aislada_d30b7e43_2_resetStateVector ( const void * mech ,
double * state ) { double xx [ 1 ] ; ( void ) mech ; xx [ 0 ] = 0.0 ; state [
0 ] = xx [ 0 ] ; state [ 1 ] = xx [ 0 ] ; } PmfMessageId
friccion_aislada_d30b7e43_2_initializeTrackedAngleState ( const void * mech ,
double * state , void * neDiagMgr0 ) { NeuDiagnosticManager * neDiagMgr = (
NeuDiagnosticManager * ) neDiagMgr0 ; ( void ) mech ; ( void ) state ; return
NULL ; } void friccion_aislada_d30b7e43_2_computeDiscreteState ( const void *
mech , double * state ) { ( void ) mech ; ( void ) state ; } void
friccion_aislada_d30b7e43_2_adjustPosition ( const void * mech , const double
* dofDeltas , double * state ) { ( void ) mech ; state [ 0 ] = state [ 0 ] +
dofDeltas [ 0 ] ; } static void perturbState_0_0 ( double mag , double *
state ) { state [ 0 ] = state [ 0 ] + mag ; } static void perturbState_0_0v (
double mag , double * state ) { state [ 0 ] = state [ 0 ] + mag ; state [ 1 ]
= state [ 1 ] - 0.875 * mag ; } void friccion_aislada_d30b7e43_2_perturbState
( const void * mech , size_t stageIdx , size_t primIdx , double mag , bool
doPerturbVelocity , double * state ) { ( void ) mech ; ( void ) stageIdx ; (
void ) primIdx ; ( void ) mag ; ( void ) doPerturbVelocity ; ( void ) state ;
switch ( ( stageIdx * 6 + primIdx ) * 2 + ( doPerturbVelocity ? 1 : 0 ) ) {
case 0 : perturbState_0_0 ( mag , state ) ; break ; case 1 :
perturbState_0_0v ( mag , state ) ; break ; } } void
friccion_aislada_d30b7e43_2_propagateMotion ( const void * mech , const
double * state , double * motionData ) { double xx [ 20 ] ; ( void ) mech ;
xx [ 0 ] = 0.5907224733087 ; xx [ 1 ] = - 0.6355193691704046 ; xx [ 2 ] = -
0.3395036715477617 ; xx [ 3 ] = - 0.3631794982414238 ; xx [ 4 ] = 0.5 * state
[ 0 ] ; xx [ 6 ] = 6.568050403978787e-3 ; xx [ 7 ] = sin ( xx [ 4 ] ) ; xx [
5 ] = 0.9974153114669369 ; xx [ 10 ] = 0.07155108081087214 ; xx [ 12 ] = cos
( xx [ 4 ] ) ; xx [ 13 ] = xx [ 6 ] * xx [ 7 ] ; xx [ 14 ] = xx [ 5 ] * xx [
7 ] ; xx [ 15 ] = xx [ 10 ] * xx [ 7 ] ; pm_math_quatCompose ( xx + 0 , xx +
12 , xx + 16 ) ; xx [ 0 ] = 2.857824181372707e-4 ; xx [ 1 ] =
0.04340905238692258 ; xx [ 2 ] = 0.02604036355056263 ; pm_math_quatXform ( xx
+ 16 , xx + 0 , xx + 7 ) ; motionData [ 0 ] = xx [ 16 ] ; motionData [ 1 ] =
xx [ 17 ] ; motionData [ 2 ] = xx [ 18 ] ; motionData [ 3 ] = xx [ 19 ] ;
motionData [ 4 ] = - ( 0.01780386417849428 + xx [ 7 ] ) ; motionData [ 5 ] =
- ( 0.03999999999999998 + xx [ 8 ] ) ; motionData [ 6 ] = - (
0.1412753798862076 + xx [ 9 ] ) ; motionData [ 7 ] = xx [ 6 ] * state [ 1 ] ;
motionData [ 8 ] = xx [ 5 ] * state [ 1 ] ; motionData [ 9 ] = xx [ 10 ] *
state [ 1 ] ; motionData [ 10 ] = - 0.02286709270623662 * state [ 1 ] ;
motionData [ 11 ] = 1.505863794435611e-4 * state [ 1 ] ; motionData [ 12 ] =
- 6.908446810292455e-8 * state [ 1 ] ; } size_t
friccion_aislada_d30b7e43_2_computeAssemblyError ( const void * mech , size_t
constraintIdx , const double * state , const double * motionData , double *
error ) { ( void ) mech ; ( void ) state ; ( void ) motionData ; ( void )
error ; ( void ) state ; switch ( constraintIdx ) { } return 0 ; } size_t
friccion_aislada_d30b7e43_2_computeAssemblyJacobian ( const void * mech ,
size_t constraintIdx , bool forVelocitySatisfaction , const double * state ,
const double * motionData , double * J ) { ( void ) mech ; ( void ) state ; (
void ) forVelocitySatisfaction ; ( void ) motionData ; ( void ) J ; switch (
constraintIdx ) { } return 0 ; } size_t
friccion_aislada_d30b7e43_2_computeFullAssemblyJacobian ( const void * mech ,
const double * state , const double * motionData , double * J ) { ( void )
mech ; ( void ) state ; ( void ) motionData ; ( void ) J ; return 0 ; }
PmfMessageId friccion_aislada_d30b7e43_2_convertStateVector ( const void *
asmMech , const void * simMech , const double * asmState , double * simState
, void * neDiagMgr0 ) { NeuDiagnosticManager * neDiagMgr = (
NeuDiagnosticManager * ) neDiagMgr0 ; ( void ) asmMech ; ( void ) simMech ;
simState [ 0 ] = asmState [ 0 ] ; simState [ 1 ] = asmState [ 1 ] ; return
NULL ; }
