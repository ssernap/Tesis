#include "__cf_friccion_aislada.h"
#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "sm_ssci_run_time_errors.h"
PmfMessageId friccion_aislada_d30b7e43_2_output ( const double * state ,
const double * input , const double * inputDot , const double * inputDdot ,
const double * discreteState , double * output , NeuDiagnosticManager *
neDiagMgr ) { ( void ) input ; ( void ) inputDot ; ( void ) inputDdot ; (
void ) discreteState ; ( void ) neDiagMgr ; output [ 0 ] = state [ 1 ] ;
return NULL ; }