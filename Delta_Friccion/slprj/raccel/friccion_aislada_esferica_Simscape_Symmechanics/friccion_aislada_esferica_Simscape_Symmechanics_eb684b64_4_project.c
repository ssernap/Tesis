#include "__cf_friccion_aislada_esferica_Simscape_Symmechanics.h"
#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "sm_ssci_run_time_errors.h"
PmfMessageId
friccion_aislada_esferica_Simscape_Symmechanics_eb684b64_4_project ( const
double * input , const double * inputDot , const double * discreteState ,
double * state , double * fullStateVal , NeuDiagnosticManager * neDiagMgr ) {
double xx [ 1 ] ; ( void ) input ; ( void ) inputDot ; ( void ) discreteState
; ( void ) neDiagMgr ; xx [ 0 ] = 1.0 / sqrt ( state [ 0 ] * state [ 0 ] +
state [ 1 ] * state [ 1 ] + state [ 2 ] * state [ 2 ] + state [ 3 ] * state [
3 ] ) ; state [ 0 ] = xx [ 0 ] * state [ 0 ] ; state [ 1 ] = xx [ 0 ] * state
[ 1 ] ; state [ 2 ] = xx [ 0 ] * state [ 2 ] ; state [ 3 ] = xx [ 0 ] * state
[ 3 ] ; fullStateVal [ 0 ] = 0.0 ; return NULL ; }
