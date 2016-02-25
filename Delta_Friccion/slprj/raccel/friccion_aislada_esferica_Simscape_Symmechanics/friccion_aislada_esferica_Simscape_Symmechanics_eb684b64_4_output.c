#include "__cf_friccion_aislada_esferica_Simscape_Symmechanics.h"
#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "sm_ssci_run_time_errors.h"
PmfMessageId
friccion_aislada_esferica_Simscape_Symmechanics_eb684b64_4_output ( const
double * state , const double * input , const double * inputDot , const
double * inputDdot , const double * discreteState , double * output ,
NeuDiagnosticManager * neDiagMgr ) { ( void ) input ; ( void ) inputDot ; (
void ) inputDdot ; ( void ) discreteState ; ( void ) neDiagMgr ; output [ 0 ]
= state [ 0 ] ; output [ 1 ] = state [ 1 ] ; output [ 2 ] = state [ 2 ] ;
output [ 3 ] = state [ 3 ] ; output [ 4 ] = state [ 4 ] ; output [ 5 ] =
state [ 5 ] ; output [ 6 ] = state [ 6 ] ; return NULL ; }
