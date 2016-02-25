#include "__cf_friccion_aislada_esferica_Simscape_Symmechanics.h"
#include "nesl_rtw.h"
#include "friccion_aislada_esferica_Simscape_Symmechanics_eb684b64_1.h"
#include "friccion_aislada_esferica_Simscape_Symmechanics_eb684b64_2.h"
#include "friccion_aislada_esferica_Simscape_Symmechanics_eb684b64_3.h"
#include "friccion_aislada_esferica_Simscape_Symmechanics_eb684b64_4.h"
void friccion_aislada_esferica_Simscape_Symmechanics_eb684b64_gateway ( void
) { NeModelParameters modelparams = { ( NeSolverType ) 1 , 0.001 , 1 , 0.001
, 0 , 0 , 0 , 0 , ( SscLoggingSetting ) 0 , } ; NeSolverParameters
solverparams = { 0 , 0 , 1 , 0 , 0 , 0.001 , 1e-06 , 1e-09 , 0 , 1 , 1e-09 ,
0 , ( NeAdvancerChoice ) 0 , 0.001 , 0 , 3 , 2 , ( NeLinearAlgebraChoice ) 0
, 1024 , 1 , 0.001 , } ; const NeInputParameters * inputparameters = NULL ;
const NeOutputParameters * outputparameters = NULL ; const NeLinearAlgebra *
linear_algebra_ptr = ( ( solverparams . mLinearAlgebra == NE_FULL_LA ) ?
get_rtw_linear_algebra ( ) : neu_get_csparse_linear_algebra ( ) ) ; NeDae *
dae [ 4 ] ; size_t numInputs = 0 ; size_t numOutputs = 0 ; { static const
NeInputParameters inputparameters_init [ ] = { { 1 , 0 , 0 , 0.001 , 1 , 0 ,
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver\nConfiguration"
, } , { 1 , 0 , 0 , 0.001 , 1 , 0 ,
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver\nConfiguration"
, } , { 1 , 0 , 0 , 0.001 , 1 , 0 ,
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver\nConfiguration"
, } , { 1 , 1 , 1 , 0.001 , 1 , 0 ,
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver\nConfiguration"
, } , { 1 , 1 , 1 , 0.001 , 1 , 0 ,
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver\nConfiguration"
, } , { 1 , 1 , 1 , 0.001 , 1 , 0 ,
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver\nConfiguration"
, } , } ; inputparameters = inputparameters_init ; numInputs = sizeof (
inputparameters_init ) / sizeof ( inputparameters_init [ 0 ] ) ; } { static
const NeOutputParameters outputparameters_init [ ] = { { 0 , 0 ,
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver\nConfiguration"
, } , { 1 , 0 ,
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver\nConfiguration"
, } , { 2 , 0 ,
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver\nConfiguration"
, } , { 3 , 0 ,
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver\nConfiguration"
, } , } ; outputparameters = outputparameters_init ; numOutputs = sizeof (
outputparameters_init ) / sizeof ( outputparameters_init [ 0 ] ) ; }
friccion_aislada_esferica_Simscape_Symmechanics_eb684b64_1_dae ( & dae [ 0 ]
, & modelparams , & solverparams , linear_algebra_ptr ) ;
friccion_aislada_esferica_Simscape_Symmechanics_eb684b64_2_dae ( & dae [ 1 ]
, & modelparams , & solverparams , linear_algebra_ptr ) ;
friccion_aislada_esferica_Simscape_Symmechanics_eb684b64_3_dae ( & dae [ 2 ]
, & modelparams , & solverparams , linear_algebra_ptr ) ;
friccion_aislada_esferica_Simscape_Symmechanics_eb684b64_4_dae ( & dae [ 3 ]
, & modelparams , & solverparams , linear_algebra_ptr ) ;
nesl_register_simulator_group (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration"
, 4 , dae , solverparams , modelparams , numInputs , inputparameters ,
numOutputs , outputparameters ) ; }
