#include "__cf_friccion_aislada_esferica_estatica.h"
#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "sm_ssci_run_time_errors.h"
PmfMessageId friccion_aislada_esferica_estatica_86e574d6_4_output ( const
double * state , const double * input , const double * inputDot , const
double * inputDdot , const double * discreteState , double * output ,
NeuDiagnosticManager * neDiagMgr ) { ( void ) input ; ( void ) inputDot ; (
void ) inputDdot ; ( void ) discreteState ; ( void ) neDiagMgr ; output [ 0 ]
= state [ 4 ] ; output [ 1 ] = state [ 5 ] ; output [ 2 ] = state [ 6 ] ;
output [ 3 ] = state [ 11 ] ; output [ 4 ] = state [ 12 ] ; output [ 5 ] =
state [ 13 ] ; return NULL ; }
