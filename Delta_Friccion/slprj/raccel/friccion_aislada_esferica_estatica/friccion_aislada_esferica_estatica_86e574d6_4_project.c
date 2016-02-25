#include "__cf_friccion_aislada_esferica_estatica.h"
#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "sm_ssci_run_time_errors.h"
PmfMessageId friccion_aislada_esferica_estatica_86e574d6_4_project ( const
double * input , const double * inputDot , const double * discreteState ,
double * state , double * fullStateVal , NeuDiagnosticManager * neDiagMgr ) {
double xx [ 6 ] ; ( void ) input ; ( void ) inputDot ; ( void ) discreteState
; ( void ) neDiagMgr ; xx [ 0 ] = 1.0 ; xx [ 1 ] = xx [ 0 ] / sqrt ( state [
0 ] * state [ 0 ] + state [ 1 ] * state [ 1 ] + state [ 2 ] * state [ 2 ] +
state [ 3 ] * state [ 3 ] ) ; xx [ 5 ] = xx [ 0 ] / sqrt ( state [ 7 ] *
state [ 7 ] + state [ 8 ] * state [ 8 ] + state [ 9 ] * state [ 9 ] + state [
10 ] * state [ 10 ] ) ; state [ 0 ] = xx [ 1 ] * state [ 0 ] ; state [ 1 ] =
xx [ 1 ] * state [ 1 ] ; state [ 2 ] = xx [ 1 ] * state [ 2 ] ; state [ 3 ] =
xx [ 1 ] * state [ 3 ] ; state [ 7 ] = xx [ 5 ] * state [ 7 ] ; state [ 8 ] =
xx [ 5 ] * state [ 8 ] ; state [ 9 ] = xx [ 5 ] * state [ 9 ] ; state [ 10 ]
= xx [ 5 ] * state [ 10 ] ; fullStateVal [ 0 ] = 0.0 ; return NULL ; }
