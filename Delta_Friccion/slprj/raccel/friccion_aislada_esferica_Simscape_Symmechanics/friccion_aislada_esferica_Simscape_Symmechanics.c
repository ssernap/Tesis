#include "__cf_friccion_aislada_esferica_Simscape_Symmechanics.h"
#include "rt_logging_mmi.h"
#include "friccion_aislada_esferica_Simscape_Symmechanics_capi.h"
#include <math.h>
#include "friccion_aislada_esferica_Simscape_Symmechanics.h"
#include "friccion_aislada_esferica_Simscape_Symmechanics_private.h"
#include "friccion_aislada_esferica_Simscape_Symmechanics_dt.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 0 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
const boolean_T gbl_raccel_isMultitasking = 1 ;
#else
const boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
const boolean_T gbl_raccel_tid01eq = 0 ; const int_T gbl_raccel_NumST = 1 ;
const char_T * gbl_raccel_Version = "8.6 (R2014a) 27-Dec-2013" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const char * gblSlvrJacPatternFileName =
 "slprj\\raccel\\friccion_aislada_esferica_Simscape_Symmechanics\\friccion_aislada_esferica_Simscape_Symmechanics_Jpattern.mat"
; const int_T gblNumRootInportBlks = 0 ; const int_T gblNumModelInputs = 0 ;
extern rtInportTUtable * gblInportTUtables ; extern const char *
gblInportFileName ; const int_T gblInportDataTypeIdx [ ] = { - 1 } ; const
int_T gblInportDims [ ] = { - 1 } ; const int_T gblInportComplex [ ] = { - 1
} ; const int_T gblInportInterpoFlag [ ] = { - 1 } ; const int_T
gblInportContinuous [ ] = { - 1 } ;
#include "simstruc.h"
#include "fixedpoint.h"
B rtB ; X rtX ; DW rtDW ; static SimStruct model_S ; SimStruct * const rtS =
& model_S ; void MdlInitialize ( void ) { boolean_T tmp ; int_T tmp_p ; char
* tmp_e ; char * tmp_i ; char * tmp_m ; char * tmp_g ; char * tmp_j ; char *
tmp_f ; char * tmp_c ; tmp = false ; if ( tmp ) { tmp_p = strcmp ( "ode45" ,
ssGetSolverName ( rtS ) ) ; if ( tmp_p != 0 ) { tmp_e =
solver_mismatch_message ( "ode45" , ssGetSolverName ( rtS ) ) ;
ssSetErrorStatus ( rtS , tmp_e ) ; } } rtw_diagnostics_reset ( ) ;
rtw_diagnostics_reset ( ) ; tmp = false ; if ( tmp ) { tmp_p = strcmp (
"ode45" , ssGetSolverName ( rtS ) ) ; if ( tmp_p != 0 ) { tmp_i =
solver_mismatch_message ( "ode45" , ssGetSolverName ( rtS ) ) ;
ssSetErrorStatus ( rtS , tmp_i ) ; } } rtw_diagnostics_reset ( ) ; tmp =
false ; if ( tmp ) { tmp_p = strcmp ( "ode45" , ssGetSolverName ( rtS ) ) ;
if ( tmp_p != 0 ) { tmp_m = solver_mismatch_message ( "ode45" ,
ssGetSolverName ( rtS ) ) ; ssSetErrorStatus ( rtS , tmp_m ) ; } }
rtw_diagnostics_reset ( ) ; rtw_diagnostics_reset ( ) ; tmp = false ; if (
tmp ) { tmp_p = strcmp ( "ode45" , ssGetSolverName ( rtS ) ) ; if ( tmp_p !=
0 ) { tmp_g = solver_mismatch_message ( "ode45" , ssGetSolverName ( rtS ) ) ;
ssSetErrorStatus ( rtS , tmp_g ) ; } } rtw_diagnostics_reset ( ) ; tmp =
false ; if ( tmp ) { tmp_p = strcmp ( "ode45" , ssGetSolverName ( rtS ) ) ;
if ( tmp_p != 0 ) { tmp_j = solver_mismatch_message ( "ode45" ,
ssGetSolverName ( rtS ) ) ; ssSetErrorStatus ( rtS , tmp_j ) ; } }
rtw_diagnostics_reset ( ) ; rtw_diagnostics_reset ( ) ; tmp = false ; if (
tmp ) { tmp_p = strcmp ( "ode45" , ssGetSolverName ( rtS ) ) ; if ( tmp_p !=
0 ) { tmp_f = solver_mismatch_message ( "ode45" , ssGetSolverName ( rtS ) ) ;
ssSetErrorStatus ( rtS , tmp_f ) ; } } rtw_diagnostics_reset ( ) ; tmp =
false ; if ( tmp ) { tmp_p = strcmp ( "ode45" , ssGetSolverName ( rtS ) ) ;
if ( tmp_p != 0 ) { tmp_c = solver_mismatch_message ( "ode45" ,
ssGetSolverName ( rtS ) ) ; ssSetErrorStatus ( rtS , tmp_c ) ; } }
rtw_diagnostics_reset ( ) ; rtw_diagnostics_reset ( ) ; rtw_diagnostics_reset
( ) ; rtw_diagnostics_reset ( ) ; rtw_diagnostics_reset ( ) ;
rtw_diagnostics_reset ( ) ; rtw_diagnostics_reset ( ) ; rtw_diagnostics_reset
( ) ; rtw_diagnostics_reset ( ) ; } void MdlStart ( void ) {
NeuDiagnosticManager * diagnosticManager ; NeBoolVector fimtsVector ;
boolean_T fimts [ 3 ] ; real_T modelParameters_mSolverTolerance ; real_T
modelParameters_mFixedStepSize ; boolean_T
modelParameters_mVariableStepSolver ; NeslSimulator * simulator ;
NeuDiagnosticTree * diagnosticTree ; int32_T tmp ; char * msg ;
NeslSimulationData * simulationData ; real_T time ; NeBoolVector
fimtsVector_p ; boolean_T fimts_p [ 4 ] ; real_T time_p ; NeBoolVector
fimtsVector_e ; boolean_T fimts_e [ 3 ] ; real_T time_e ; NeBoolVector
fimtsVector_i ; boolean_T fimts_i ; real_T time_i ; NeBoolVector
fimtsVector_m ; boolean_T fimts_m [ 2 ] ; real_T time_m ; NeBoolVector
fimtsVector_g ; boolean_T fimts_g [ 3 ] ; real_T time_g ; NeBoolVector
fimtsVector_j ; boolean_T fimts_j ; real_T time_j ; NeBoolVector
fimtsVector_f ; boolean_T fimts_f [ 2 ] ; real_T time_f ; NeBoolVector
fimtsVector_c ; boolean_T fimts_c [ 3 ] ; real_T time_c ; NeBoolVector
fimtsVector_k ; boolean_T fimts_k ; real_T time_k ; NeBoolVector
fimtsVector_b ; boolean_T fimts_b [ 2 ] ; real_T time_b ; NeBoolVector
fimtsVector_n ; boolean_T fimts_n [ 2 ] ; real_T time_n ; NeBoolVector
fimtsVector_l ; boolean_T fimts_l [ 3 ] ; real_T time_l ; NeBoolVector
fimtsVector_d ; boolean_T fimts_d [ 2 ] ; real_T time_d ; NeBoolVector
fimtsVector_o ; boolean_T fimts_o [ 3 ] ; real_T time_o ; NeBoolVector
fimtsVector_dz ; boolean_T fimts_dz [ 2 ] ; real_T time_dz ; NeBoolVector
fimtsVector_fs ; boolean_T fimts_fs [ 3 ] ; real_T time_fs ; NeBoolVector
fimtsVector_ck ; boolean_T fimts_ck [ 4 ] ; real_T time_ck ;
NeModelParameters expl_temp ; NeModelParameters expl_temp_p ;
NeModelParameters expl_temp_e ; NeModelParameters expl_temp_i ;
NeModelParameters expl_temp_m ; NeModelParameters expl_temp_g ;
NeModelParameters expl_temp_j ; NeModelParameters expl_temp_f ;
NeModelParameters expl_temp_c ; NeModelParameters expl_temp_k ;
NeModelParameters expl_temp_b ; NeModelParameters expl_temp_n ;
NeModelParameters expl_temp_l ; NeModelParameters expl_temp_d ;
NeModelParameters expl_temp_o ; NeModelParameters expl_temp_dz ;
NeModelParameters expl_temp_fs ; NeModelParameters expl_temp_ck ; simulator =
nesl_lease_simulator (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration"
, 0 , 3 ) ; rtDW . oh2nksyqvj = ( void * ) simulator ;
modelParameters_mVariableStepSolver = pointer_is_null ( rtDW . oh2nksyqvj ) ;
if ( modelParameters_mVariableStepSolver ) {
friccion_aislada_esferica_Simscape_Symmechanics_eb684b64_gateway ( ) ;
simulator = nesl_lease_simulator (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration"
, 0 , 3 ) ; rtDW . oh2nksyqvj = ( void * ) simulator ; } simulationData =
nesl_create_simulation_data ( ) ; rtDW . piiowhvoq3 = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
n0nnoz5d3k = ( void * ) diagnosticManager ; fimts [ 0U ] = false ; fimts [ 1U
] = false ; fimts [ 2U ] = false ; fimtsVector . mN = 3 ; fimtsVector . mX =
& fimts [ 0U ] ; modelParameters_mSolverTolerance = 0.001 ;
modelParameters_mFixedStepSize = 0.0 ; modelParameters_mVariableStepSolver =
true ; simulator = ( NeslSimulator * ) rtDW . oh2nksyqvj ; diagnosticManager
= ( NeuDiagnosticManager * ) rtDW . n0nnoz5d3k ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; expl_temp .
mVariableStepSolver = modelParameters_mVariableStepSolver ; expl_temp .
mUseSimState = false ; expl_temp . mStartTime = 0.0 ; expl_temp . mSolverType
= NE_SOLVER_TYPE_ODE ; expl_temp . mSolverTolerance =
modelParameters_mSolverTolerance ; expl_temp . mLoggingMode =
SSC_LOGGING_NONE ; expl_temp . mLoadInitialState = false ; expl_temp .
mLinTrimCompile = false ; expl_temp . mFixedStepSize =
modelParameters_mFixedStepSize ; tmp = nesl_initialize_simulator ( simulator
, expl_temp , & fimtsVector , diagnosticManager ) ; if ( tmp != 0 ) { tmp =
rtw_diagnostics_message_count ( ) ; if ( tmp == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . piiowhvoq3 ; time = ssGetT (
rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time ; simulationData -> mData -> mContStates . mN = 7 ;
simulationData -> mData -> mContStates . mX = ( real_T * ) & rtX . cjklakdih0
; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = NULL ; simulationData -> mData -> mModeVector . mN = 0
; simulationData -> mData -> mModeVector . mX = NULL ;
modelParameters_mVariableStepSolver = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData -> mData
-> mFoundZcEvents = modelParameters_mVariableStepSolver ; simulationData ->
mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ;
modelParameters_mVariableStepSolver = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags .
solverAssertCheck == 1U ) ; simulationData -> mData -> mIsSolverAssertCheck =
modelParameters_mVariableStepSolver ; modelParameters_mVariableStepSolver =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = modelParameters_mVariableStepSolver ;
modelParameters_mVariableStepSolver = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian =
modelParameters_mVariableStepSolver ; modelParameters_mVariableStepSolver =
ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = modelParameters_mVariableStepSolver ; simulator =
( NeslSimulator * ) rtDW . oh2nksyqvj ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . n0nnoz5d3k ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp =
ne_simulator_method ( simulator , NESL_SIM_START , simulationData ,
diagnosticManager ) ; if ( tmp != 0 ) { tmp = rtw_diagnostics_message_count (
) ; if ( tmp == 0 ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ;
ssSetErrorStatus ( rtS , msg ) ; } } simulator = nesl_lease_simulator (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration"
, 3 , 3 ) ; rtDW . m5lvlhykau = ( void * ) simulator ;
modelParameters_mVariableStepSolver = pointer_is_null ( rtDW . m5lvlhykau ) ;
if ( modelParameters_mVariableStepSolver ) {
friccion_aislada_esferica_Simscape_Symmechanics_eb684b64_gateway ( ) ;
simulator = nesl_lease_simulator (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration"
, 3 , 3 ) ; rtDW . m5lvlhykau = ( void * ) simulator ; } simulationData =
nesl_create_simulation_data ( ) ; rtDW . i4aru4d13y = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
psaiktqsay = ( void * ) diagnosticManager ; fimts_p [ 0U ] = false ; fimts_p
[ 1U ] = false ; fimts_p [ 2U ] = false ; fimts_p [ 3U ] = false ;
fimtsVector_p . mN = 4 ; fimtsVector_p . mX = & fimts_p [ 0U ] ;
modelParameters_mSolverTolerance = 0.001 ; modelParameters_mFixedStepSize =
0.0 ; modelParameters_mVariableStepSolver = true ; simulator = (
NeslSimulator * ) rtDW . m5lvlhykau ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . psaiktqsay ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; expl_temp_p .
mVariableStepSolver = modelParameters_mVariableStepSolver ; expl_temp_p .
mUseSimState = false ; expl_temp_p . mStartTime = 0.0 ; expl_temp_p .
mSolverType = NE_SOLVER_TYPE_ODE ; expl_temp_p . mSolverTolerance =
modelParameters_mSolverTolerance ; expl_temp_p . mLoggingMode =
SSC_LOGGING_NONE ; expl_temp_p . mLoadInitialState = false ; expl_temp_p .
mLinTrimCompile = false ; expl_temp_p . mFixedStepSize =
modelParameters_mFixedStepSize ; tmp = nesl_initialize_simulator ( simulator
, expl_temp_p , & fimtsVector_p , diagnosticManager ) ; if ( tmp != 0 ) { tmp
= rtw_diagnostics_message_count ( ) ; if ( tmp == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . i4aru4d13y ; time_p = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_p ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = NULL
; simulationData -> mData -> mModeVector . mN = 0 ; simulationData -> mData
-> mModeVector . mX = NULL ; modelParameters_mVariableStepSolver = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents =
modelParameters_mVariableStepSolver ; simulationData -> mData ->
mIsMajorTimeStep = true ; modelParameters_mVariableStepSolver = (
ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck =
modelParameters_mVariableStepSolver ; modelParameters_mVariableStepSolver =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = modelParameters_mVariableStepSolver ; simulationData
-> mData -> mIsComputingJacobian = false ;
modelParameters_mVariableStepSolver = ssIsSolverRequestingReset ( rtS ) ;
simulationData -> mData -> mIsSolverRequestingReset =
modelParameters_mVariableStepSolver ; simulator = ( NeslSimulator * ) rtDW .
m5lvlhykau ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . psaiktqsay
; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp = ne_simulator_method ( simulator , NESL_SIM_START
, simulationData , diagnosticManager ) ; if ( tmp != 0 ) { tmp =
rtw_diagnostics_message_count ( ) ; if ( tmp == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulator = nesl_lease_simulator (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration"
, 2 , 3 ) ; rtDW . flmlbqbmbh = ( void * ) simulator ;
modelParameters_mVariableStepSolver = pointer_is_null ( rtDW . flmlbqbmbh ) ;
if ( modelParameters_mVariableStepSolver ) {
friccion_aislada_esferica_Simscape_Symmechanics_eb684b64_gateway ( ) ;
simulator = nesl_lease_simulator (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration"
, 2 , 3 ) ; rtDW . flmlbqbmbh = ( void * ) simulator ; } simulationData =
nesl_create_simulation_data ( ) ; rtDW . gkm0s0ctrk = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
iob4nznmac = ( void * ) diagnosticManager ; fimts_e [ 0U ] = false ; fimts_e
[ 1U ] = false ; fimts_e [ 2U ] = false ; fimtsVector_e . mN = 3 ;
fimtsVector_e . mX = & fimts_e [ 0U ] ; modelParameters_mSolverTolerance =
0.001 ; modelParameters_mFixedStepSize = 0.0 ;
modelParameters_mVariableStepSolver = true ; simulator = ( NeslSimulator * )
rtDW . flmlbqbmbh ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW .
iob4nznmac ; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; expl_temp_e . mVariableStepSolver =
modelParameters_mVariableStepSolver ; expl_temp_e . mUseSimState = false ;
expl_temp_e . mStartTime = 0.0 ; expl_temp_e . mSolverType =
NE_SOLVER_TYPE_ODE ; expl_temp_e . mSolverTolerance =
modelParameters_mSolverTolerance ; expl_temp_e . mLoggingMode =
SSC_LOGGING_NONE ; expl_temp_e . mLoadInitialState = false ; expl_temp_e .
mLinTrimCompile = false ; expl_temp_e . mFixedStepSize =
modelParameters_mFixedStepSize ; tmp = nesl_initialize_simulator ( simulator
, expl_temp_e , & fimtsVector_e , diagnosticManager ) ; if ( tmp != 0 ) { tmp
= rtw_diagnostics_message_count ( ) ; if ( tmp == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . gkm0s0ctrk ; time_e = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_e ; simulationData -> mData -> mContStates . mN = 1 ;
simulationData -> mData -> mContStates . mX = & rtX . c150l3qmxn ;
simulationData -> mData -> mDiscStates . mN = 1 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . mxwpzq1ids ; simulationData -> mData ->
mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = NULL ;
modelParameters_mVariableStepSolver = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData -> mData
-> mFoundZcEvents = modelParameters_mVariableStepSolver ; simulationData ->
mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ;
modelParameters_mVariableStepSolver = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags .
solverAssertCheck == 1U ) ; simulationData -> mData -> mIsSolverAssertCheck =
modelParameters_mVariableStepSolver ; modelParameters_mVariableStepSolver =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = modelParameters_mVariableStepSolver ;
modelParameters_mVariableStepSolver = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian =
modelParameters_mVariableStepSolver ; modelParameters_mVariableStepSolver =
ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = modelParameters_mVariableStepSolver ; simulator =
( NeslSimulator * ) rtDW . flmlbqbmbh ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . iob4nznmac ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp =
ne_simulator_method ( simulator , NESL_SIM_START , simulationData ,
diagnosticManager ) ; if ( tmp != 0 ) { tmp = rtw_diagnostics_message_count (
) ; if ( tmp == 0 ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ;
ssSetErrorStatus ( rtS , msg ) ; } } simulator = nesl_lease_simulator (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration"
, 0 , 0 ) ; rtDW . nyiiqtb3pj = ( void * ) simulator ;
modelParameters_mVariableStepSolver = pointer_is_null ( rtDW . nyiiqtb3pj ) ;
if ( modelParameters_mVariableStepSolver ) {
friccion_aislada_esferica_Simscape_Symmechanics_eb684b64_gateway ( ) ;
simulator = nesl_lease_simulator (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration"
, 0 , 0 ) ; rtDW . nyiiqtb3pj = ( void * ) simulator ; } simulationData =
nesl_create_simulation_data ( ) ; rtDW . gcums0dzz2 = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
lhf2yly352 = ( void * ) diagnosticManager ; fimts_i = false ; fimtsVector_i .
mN = 1 ; fimtsVector_i . mX = & fimts_i ; modelParameters_mSolverTolerance =
0.001 ; modelParameters_mFixedStepSize = 0.0 ;
modelParameters_mVariableStepSolver = true ; simulator = ( NeslSimulator * )
rtDW . nyiiqtb3pj ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW .
lhf2yly352 ; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; expl_temp_i . mVariableStepSolver =
modelParameters_mVariableStepSolver ; expl_temp_i . mUseSimState = false ;
expl_temp_i . mStartTime = 0.0 ; expl_temp_i . mSolverType =
NE_SOLVER_TYPE_ODE ; expl_temp_i . mSolverTolerance =
modelParameters_mSolverTolerance ; expl_temp_i . mLoggingMode =
SSC_LOGGING_NONE ; expl_temp_i . mLoadInitialState = false ; expl_temp_i .
mLinTrimCompile = false ; expl_temp_i . mFixedStepSize =
modelParameters_mFixedStepSize ; tmp = nesl_initialize_simulator ( simulator
, expl_temp_i , & fimtsVector_i , diagnosticManager ) ; if ( tmp != 0 ) { tmp
= rtw_diagnostics_message_count ( ) ; if ( tmp == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . gcums0dzz2 ; time_i = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_i ; simulationData -> mData -> mContStates . mN = 1 ;
simulationData -> mData -> mContStates . mX = & rtX . ml5rpxbc10 ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = NULL ; simulationData -> mData -> mModeVector . mN = 4 ;
simulationData -> mData -> mModeVector . mX = ( int32_T * ) & rtDW .
alrqayrcnu ; modelParameters_mVariableStepSolver = ( ssIsMajorTimeStep ( rtS
) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData ->
mData -> mFoundZcEvents = modelParameters_mVariableStepSolver ;
simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ;
modelParameters_mVariableStepSolver = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags .
solverAssertCheck == 1U ) ; simulationData -> mData -> mIsSolverAssertCheck =
modelParameters_mVariableStepSolver ; modelParameters_mVariableStepSolver =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = modelParameters_mVariableStepSolver ;
modelParameters_mVariableStepSolver = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian =
modelParameters_mVariableStepSolver ; modelParameters_mVariableStepSolver =
ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = modelParameters_mVariableStepSolver ; simulator =
( NeslSimulator * ) rtDW . nyiiqtb3pj ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . lhf2yly352 ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp =
ne_simulator_method ( simulator , NESL_SIM_START , simulationData ,
diagnosticManager ) ; if ( tmp != 0 ) { tmp = rtw_diagnostics_message_count (
) ; if ( tmp == 0 ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ;
ssSetErrorStatus ( rtS , msg ) ; } } simulator = nesl_lease_simulator (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration"
, 1 , 0 ) ; rtDW . gtt25diae4 = ( void * ) simulator ;
modelParameters_mVariableStepSolver = pointer_is_null ( rtDW . gtt25diae4 ) ;
if ( modelParameters_mVariableStepSolver ) {
friccion_aislada_esferica_Simscape_Symmechanics_eb684b64_gateway ( ) ;
simulator = nesl_lease_simulator (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration"
, 1 , 0 ) ; rtDW . gtt25diae4 = ( void * ) simulator ; } simulationData =
nesl_create_simulation_data ( ) ; rtDW . bzrmjhnabu = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
is3dc1o4zz = ( void * ) diagnosticManager ; fimts_m [ 0U ] = false ; fimts_m
[ 1U ] = false ; fimtsVector_m . mN = 2 ; fimtsVector_m . mX = & fimts_m [ 0U
] ; modelParameters_mSolverTolerance = 0.001 ; modelParameters_mFixedStepSize
= 0.0 ; modelParameters_mVariableStepSolver = true ; simulator = (
NeslSimulator * ) rtDW . gtt25diae4 ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . is3dc1o4zz ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; expl_temp_m .
mVariableStepSolver = modelParameters_mVariableStepSolver ; expl_temp_m .
mUseSimState = false ; expl_temp_m . mStartTime = 0.0 ; expl_temp_m .
mSolverType = NE_SOLVER_TYPE_ODE ; expl_temp_m . mSolverTolerance =
modelParameters_mSolverTolerance ; expl_temp_m . mLoggingMode =
SSC_LOGGING_NONE ; expl_temp_m . mLoadInitialState = false ; expl_temp_m .
mLinTrimCompile = false ; expl_temp_m . mFixedStepSize =
modelParameters_mFixedStepSize ; tmp = nesl_initialize_simulator ( simulator
, expl_temp_m , & fimtsVector_m , diagnosticManager ) ; if ( tmp != 0 ) { tmp
= rtw_diagnostics_message_count ( ) ; if ( tmp == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . bzrmjhnabu ; time_m = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_m ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = NULL
; simulationData -> mData -> mModeVector . mN = 0 ; simulationData -> mData
-> mModeVector . mX = NULL ; modelParameters_mVariableStepSolver = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents =
modelParameters_mVariableStepSolver ; simulationData -> mData ->
mIsMajorTimeStep = true ; modelParameters_mVariableStepSolver = (
ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck =
modelParameters_mVariableStepSolver ; modelParameters_mVariableStepSolver =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = modelParameters_mVariableStepSolver ; simulationData
-> mData -> mIsComputingJacobian = false ;
modelParameters_mVariableStepSolver = ssIsSolverRequestingReset ( rtS ) ;
simulationData -> mData -> mIsSolverRequestingReset =
modelParameters_mVariableStepSolver ; simulator = ( NeslSimulator * ) rtDW .
gtt25diae4 ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . is3dc1o4zz
; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp = ne_simulator_method ( simulator , NESL_SIM_START
, simulationData , diagnosticManager ) ; if ( tmp != 0 ) { tmp =
rtw_diagnostics_message_count ( ) ; if ( tmp == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulator = nesl_lease_simulator (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration"
, 2 , 5 ) ; rtDW . jjazmhpwwr = ( void * ) simulator ;
modelParameters_mVariableStepSolver = pointer_is_null ( rtDW . jjazmhpwwr ) ;
if ( modelParameters_mVariableStepSolver ) {
friccion_aislada_esferica_Simscape_Symmechanics_eb684b64_gateway ( ) ;
simulator = nesl_lease_simulator (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration"
, 2 , 5 ) ; rtDW . jjazmhpwwr = ( void * ) simulator ; } simulationData =
nesl_create_simulation_data ( ) ; rtDW . evijjolyva = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
pxp5ilgmi3 = ( void * ) diagnosticManager ; fimts_g [ 0U ] = false ; fimts_g
[ 1U ] = false ; fimts_g [ 2U ] = false ; fimtsVector_g . mN = 3 ;
fimtsVector_g . mX = & fimts_g [ 0U ] ; modelParameters_mSolverTolerance =
0.001 ; modelParameters_mFixedStepSize = 0.0 ;
modelParameters_mVariableStepSolver = true ; simulator = ( NeslSimulator * )
rtDW . jjazmhpwwr ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW .
pxp5ilgmi3 ; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; expl_temp_g . mVariableStepSolver =
modelParameters_mVariableStepSolver ; expl_temp_g . mUseSimState = false ;
expl_temp_g . mStartTime = 0.0 ; expl_temp_g . mSolverType =
NE_SOLVER_TYPE_ODE ; expl_temp_g . mSolverTolerance =
modelParameters_mSolverTolerance ; expl_temp_g . mLoggingMode =
SSC_LOGGING_NONE ; expl_temp_g . mLoadInitialState = false ; expl_temp_g .
mLinTrimCompile = false ; expl_temp_g . mFixedStepSize =
modelParameters_mFixedStepSize ; tmp = nesl_initialize_simulator ( simulator
, expl_temp_g , & fimtsVector_g , diagnosticManager ) ; if ( tmp != 0 ) { tmp
= rtw_diagnostics_message_count ( ) ; if ( tmp == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . evijjolyva ; time_g = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_g ; simulationData -> mData -> mContStates . mN = 1 ;
simulationData -> mData -> mContStates . mX = & rtX . m2txpyziu4 ;
simulationData -> mData -> mDiscStates . mN = 1 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . citycn5tuj ; simulationData -> mData ->
mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = NULL ;
modelParameters_mVariableStepSolver = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData -> mData
-> mFoundZcEvents = modelParameters_mVariableStepSolver ; simulationData ->
mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ;
modelParameters_mVariableStepSolver = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags .
solverAssertCheck == 1U ) ; simulationData -> mData -> mIsSolverAssertCheck =
modelParameters_mVariableStepSolver ; modelParameters_mVariableStepSolver =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = modelParameters_mVariableStepSolver ;
modelParameters_mVariableStepSolver = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian =
modelParameters_mVariableStepSolver ; modelParameters_mVariableStepSolver =
ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = modelParameters_mVariableStepSolver ; simulator =
( NeslSimulator * ) rtDW . jjazmhpwwr ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . pxp5ilgmi3 ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp =
ne_simulator_method ( simulator , NESL_SIM_START , simulationData ,
diagnosticManager ) ; if ( tmp != 0 ) { tmp = rtw_diagnostics_message_count (
) ; if ( tmp == 0 ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ;
ssSetErrorStatus ( rtS , msg ) ; } } simulator = nesl_lease_simulator (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration"
, 0 , 1 ) ; rtDW . ku2cbhbb3u = ( void * ) simulator ;
modelParameters_mVariableStepSolver = pointer_is_null ( rtDW . ku2cbhbb3u ) ;
if ( modelParameters_mVariableStepSolver ) {
friccion_aislada_esferica_Simscape_Symmechanics_eb684b64_gateway ( ) ;
simulator = nesl_lease_simulator (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration"
, 0 , 1 ) ; rtDW . ku2cbhbb3u = ( void * ) simulator ; } simulationData =
nesl_create_simulation_data ( ) ; rtDW . f4ygo2hyze = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
g3mxxyfx5h = ( void * ) diagnosticManager ; fimts_j = false ; fimtsVector_j .
mN = 1 ; fimtsVector_j . mX = & fimts_j ; modelParameters_mSolverTolerance =
0.001 ; modelParameters_mFixedStepSize = 0.0 ;
modelParameters_mVariableStepSolver = true ; simulator = ( NeslSimulator * )
rtDW . ku2cbhbb3u ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW .
g3mxxyfx5h ; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; expl_temp_j . mVariableStepSolver =
modelParameters_mVariableStepSolver ; expl_temp_j . mUseSimState = false ;
expl_temp_j . mStartTime = 0.0 ; expl_temp_j . mSolverType =
NE_SOLVER_TYPE_ODE ; expl_temp_j . mSolverTolerance =
modelParameters_mSolverTolerance ; expl_temp_j . mLoggingMode =
SSC_LOGGING_NONE ; expl_temp_j . mLoadInitialState = false ; expl_temp_j .
mLinTrimCompile = false ; expl_temp_j . mFixedStepSize =
modelParameters_mFixedStepSize ; tmp = nesl_initialize_simulator ( simulator
, expl_temp_j , & fimtsVector_j , diagnosticManager ) ; if ( tmp != 0 ) { tmp
= rtw_diagnostics_message_count ( ) ; if ( tmp == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . f4ygo2hyze ; time_j = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_j ; simulationData -> mData -> mContStates . mN = 1 ;
simulationData -> mData -> mContStates . mX = & rtX . pgig0w5z22 ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = NULL ; simulationData -> mData -> mModeVector . mN = 4 ;
simulationData -> mData -> mModeVector . mX = ( int32_T * ) & rtDW .
dhe2ccms01 ; modelParameters_mVariableStepSolver = ( ssIsMajorTimeStep ( rtS
) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData ->
mData -> mFoundZcEvents = modelParameters_mVariableStepSolver ;
simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ;
modelParameters_mVariableStepSolver = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags .
solverAssertCheck == 1U ) ; simulationData -> mData -> mIsSolverAssertCheck =
modelParameters_mVariableStepSolver ; modelParameters_mVariableStepSolver =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = modelParameters_mVariableStepSolver ;
modelParameters_mVariableStepSolver = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian =
modelParameters_mVariableStepSolver ; modelParameters_mVariableStepSolver =
ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = modelParameters_mVariableStepSolver ; simulator =
( NeslSimulator * ) rtDW . ku2cbhbb3u ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . g3mxxyfx5h ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp =
ne_simulator_method ( simulator , NESL_SIM_START , simulationData ,
diagnosticManager ) ; if ( tmp != 0 ) { tmp = rtw_diagnostics_message_count (
) ; if ( tmp == 0 ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ;
ssSetErrorStatus ( rtS , msg ) ; } } simulator = nesl_lease_simulator (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration"
, 1 , 1 ) ; rtDW . dxh0qu5kpi = ( void * ) simulator ;
modelParameters_mVariableStepSolver = pointer_is_null ( rtDW . dxh0qu5kpi ) ;
if ( modelParameters_mVariableStepSolver ) {
friccion_aislada_esferica_Simscape_Symmechanics_eb684b64_gateway ( ) ;
simulator = nesl_lease_simulator (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration"
, 1 , 1 ) ; rtDW . dxh0qu5kpi = ( void * ) simulator ; } simulationData =
nesl_create_simulation_data ( ) ; rtDW . gsrotkxe3w = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
aa1kkeyuws = ( void * ) diagnosticManager ; fimts_f [ 0U ] = false ; fimts_f
[ 1U ] = false ; fimtsVector_f . mN = 2 ; fimtsVector_f . mX = & fimts_f [ 0U
] ; modelParameters_mSolverTolerance = 0.001 ; modelParameters_mFixedStepSize
= 0.0 ; modelParameters_mVariableStepSolver = true ; simulator = (
NeslSimulator * ) rtDW . dxh0qu5kpi ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . aa1kkeyuws ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; expl_temp_f .
mVariableStepSolver = modelParameters_mVariableStepSolver ; expl_temp_f .
mUseSimState = false ; expl_temp_f . mStartTime = 0.0 ; expl_temp_f .
mSolverType = NE_SOLVER_TYPE_ODE ; expl_temp_f . mSolverTolerance =
modelParameters_mSolverTolerance ; expl_temp_f . mLoggingMode =
SSC_LOGGING_NONE ; expl_temp_f . mLoadInitialState = false ; expl_temp_f .
mLinTrimCompile = false ; expl_temp_f . mFixedStepSize =
modelParameters_mFixedStepSize ; tmp = nesl_initialize_simulator ( simulator
, expl_temp_f , & fimtsVector_f , diagnosticManager ) ; if ( tmp != 0 ) { tmp
= rtw_diagnostics_message_count ( ) ; if ( tmp == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . gsrotkxe3w ; time_f = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_f ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = NULL
; simulationData -> mData -> mModeVector . mN = 0 ; simulationData -> mData
-> mModeVector . mX = NULL ; modelParameters_mVariableStepSolver = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents =
modelParameters_mVariableStepSolver ; simulationData -> mData ->
mIsMajorTimeStep = true ; modelParameters_mVariableStepSolver = (
ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck =
modelParameters_mVariableStepSolver ; modelParameters_mVariableStepSolver =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = modelParameters_mVariableStepSolver ; simulationData
-> mData -> mIsComputingJacobian = false ;
modelParameters_mVariableStepSolver = ssIsSolverRequestingReset ( rtS ) ;
simulationData -> mData -> mIsSolverRequestingReset =
modelParameters_mVariableStepSolver ; simulator = ( NeslSimulator * ) rtDW .
dxh0qu5kpi ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . aa1kkeyuws
; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp = ne_simulator_method ( simulator , NESL_SIM_START
, simulationData , diagnosticManager ) ; if ( tmp != 0 ) { tmp =
rtw_diagnostics_message_count ( ) ; if ( tmp == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulator = nesl_lease_simulator (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration"
, 2 , 4 ) ; rtDW . kswjmadgur = ( void * ) simulator ;
modelParameters_mVariableStepSolver = pointer_is_null ( rtDW . kswjmadgur ) ;
if ( modelParameters_mVariableStepSolver ) {
friccion_aislada_esferica_Simscape_Symmechanics_eb684b64_gateway ( ) ;
simulator = nesl_lease_simulator (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration"
, 2 , 4 ) ; rtDW . kswjmadgur = ( void * ) simulator ; } simulationData =
nesl_create_simulation_data ( ) ; rtDW . jstvsrdxec = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
bwrk1jrfjh = ( void * ) diagnosticManager ; fimts_c [ 0U ] = false ; fimts_c
[ 1U ] = false ; fimts_c [ 2U ] = false ; fimtsVector_c . mN = 3 ;
fimtsVector_c . mX = & fimts_c [ 0U ] ; modelParameters_mSolverTolerance =
0.001 ; modelParameters_mFixedStepSize = 0.0 ;
modelParameters_mVariableStepSolver = true ; simulator = ( NeslSimulator * )
rtDW . kswjmadgur ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW .
bwrk1jrfjh ; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; expl_temp_c . mVariableStepSolver =
modelParameters_mVariableStepSolver ; expl_temp_c . mUseSimState = false ;
expl_temp_c . mStartTime = 0.0 ; expl_temp_c . mSolverType =
NE_SOLVER_TYPE_ODE ; expl_temp_c . mSolverTolerance =
modelParameters_mSolverTolerance ; expl_temp_c . mLoggingMode =
SSC_LOGGING_NONE ; expl_temp_c . mLoadInitialState = false ; expl_temp_c .
mLinTrimCompile = false ; expl_temp_c . mFixedStepSize =
modelParameters_mFixedStepSize ; tmp = nesl_initialize_simulator ( simulator
, expl_temp_c , & fimtsVector_c , diagnosticManager ) ; if ( tmp != 0 ) { tmp
= rtw_diagnostics_message_count ( ) ; if ( tmp == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . jstvsrdxec ; time_c = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_c ; simulationData -> mData -> mContStates . mN = 1 ;
simulationData -> mData -> mContStates . mX = & rtX . h15fzyy0rm ;
simulationData -> mData -> mDiscStates . mN = 1 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . g0ybx5ny0s ; simulationData -> mData ->
mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = NULL ;
modelParameters_mVariableStepSolver = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData -> mData
-> mFoundZcEvents = modelParameters_mVariableStepSolver ; simulationData ->
mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ;
modelParameters_mVariableStepSolver = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags .
solverAssertCheck == 1U ) ; simulationData -> mData -> mIsSolverAssertCheck =
modelParameters_mVariableStepSolver ; modelParameters_mVariableStepSolver =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = modelParameters_mVariableStepSolver ;
modelParameters_mVariableStepSolver = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian =
modelParameters_mVariableStepSolver ; modelParameters_mVariableStepSolver =
ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = modelParameters_mVariableStepSolver ; simulator =
( NeslSimulator * ) rtDW . kswjmadgur ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . bwrk1jrfjh ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp =
ne_simulator_method ( simulator , NESL_SIM_START , simulationData ,
diagnosticManager ) ; if ( tmp != 0 ) { tmp = rtw_diagnostics_message_count (
) ; if ( tmp == 0 ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ;
ssSetErrorStatus ( rtS , msg ) ; } } simulator = nesl_lease_simulator (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration"
, 0 , 2 ) ; rtDW . avoetnry4f = ( void * ) simulator ;
modelParameters_mVariableStepSolver = pointer_is_null ( rtDW . avoetnry4f ) ;
if ( modelParameters_mVariableStepSolver ) {
friccion_aislada_esferica_Simscape_Symmechanics_eb684b64_gateway ( ) ;
simulator = nesl_lease_simulator (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration"
, 0 , 2 ) ; rtDW . avoetnry4f = ( void * ) simulator ; } simulationData =
nesl_create_simulation_data ( ) ; rtDW . j3w0jjg10i = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
nzmye2eqv0 = ( void * ) diagnosticManager ; fimts_k = false ; fimtsVector_k .
mN = 1 ; fimtsVector_k . mX = & fimts_k ; modelParameters_mSolverTolerance =
0.001 ; modelParameters_mFixedStepSize = 0.0 ;
modelParameters_mVariableStepSolver = true ; simulator = ( NeslSimulator * )
rtDW . avoetnry4f ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW .
nzmye2eqv0 ; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; expl_temp_k . mVariableStepSolver =
modelParameters_mVariableStepSolver ; expl_temp_k . mUseSimState = false ;
expl_temp_k . mStartTime = 0.0 ; expl_temp_k . mSolverType =
NE_SOLVER_TYPE_ODE ; expl_temp_k . mSolverTolerance =
modelParameters_mSolverTolerance ; expl_temp_k . mLoggingMode =
SSC_LOGGING_NONE ; expl_temp_k . mLoadInitialState = false ; expl_temp_k .
mLinTrimCompile = false ; expl_temp_k . mFixedStepSize =
modelParameters_mFixedStepSize ; tmp = nesl_initialize_simulator ( simulator
, expl_temp_k , & fimtsVector_k , diagnosticManager ) ; if ( tmp != 0 ) { tmp
= rtw_diagnostics_message_count ( ) ; if ( tmp == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . j3w0jjg10i ; time_k = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_k ; simulationData -> mData -> mContStates . mN = 1 ;
simulationData -> mData -> mContStates . mX = & rtX . clcp24atwn ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = NULL ; simulationData -> mData -> mModeVector . mN = 4 ;
simulationData -> mData -> mModeVector . mX = ( int32_T * ) & rtDW .
pfel4n10vu ; modelParameters_mVariableStepSolver = ( ssIsMajorTimeStep ( rtS
) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData ->
mData -> mFoundZcEvents = modelParameters_mVariableStepSolver ;
simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ;
modelParameters_mVariableStepSolver = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags .
solverAssertCheck == 1U ) ; simulationData -> mData -> mIsSolverAssertCheck =
modelParameters_mVariableStepSolver ; modelParameters_mVariableStepSolver =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = modelParameters_mVariableStepSolver ;
modelParameters_mVariableStepSolver = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian =
modelParameters_mVariableStepSolver ; modelParameters_mVariableStepSolver =
ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = modelParameters_mVariableStepSolver ; simulator =
( NeslSimulator * ) rtDW . avoetnry4f ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . nzmye2eqv0 ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp =
ne_simulator_method ( simulator , NESL_SIM_START , simulationData ,
diagnosticManager ) ; if ( tmp != 0 ) { tmp = rtw_diagnostics_message_count (
) ; if ( tmp == 0 ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ;
ssSetErrorStatus ( rtS , msg ) ; } } simulator = nesl_lease_simulator (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration"
, 1 , 2 ) ; rtDW . ahd5nxo5ee = ( void * ) simulator ;
modelParameters_mVariableStepSolver = pointer_is_null ( rtDW . ahd5nxo5ee ) ;
if ( modelParameters_mVariableStepSolver ) {
friccion_aislada_esferica_Simscape_Symmechanics_eb684b64_gateway ( ) ;
simulator = nesl_lease_simulator (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration"
, 1 , 2 ) ; rtDW . ahd5nxo5ee = ( void * ) simulator ; } simulationData =
nesl_create_simulation_data ( ) ; rtDW . hwdzla2kb2 = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
l25nib43el = ( void * ) diagnosticManager ; fimts_b [ 0U ] = false ; fimts_b
[ 1U ] = false ; fimtsVector_b . mN = 2 ; fimtsVector_b . mX = & fimts_b [ 0U
] ; modelParameters_mSolverTolerance = 0.001 ; modelParameters_mFixedStepSize
= 0.0 ; modelParameters_mVariableStepSolver = true ; simulator = (
NeslSimulator * ) rtDW . ahd5nxo5ee ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . l25nib43el ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; expl_temp_b .
mVariableStepSolver = modelParameters_mVariableStepSolver ; expl_temp_b .
mUseSimState = false ; expl_temp_b . mStartTime = 0.0 ; expl_temp_b .
mSolverType = NE_SOLVER_TYPE_ODE ; expl_temp_b . mSolverTolerance =
modelParameters_mSolverTolerance ; expl_temp_b . mLoggingMode =
SSC_LOGGING_NONE ; expl_temp_b . mLoadInitialState = false ; expl_temp_b .
mLinTrimCompile = false ; expl_temp_b . mFixedStepSize =
modelParameters_mFixedStepSize ; tmp = nesl_initialize_simulator ( simulator
, expl_temp_b , & fimtsVector_b , diagnosticManager ) ; if ( tmp != 0 ) { tmp
= rtw_diagnostics_message_count ( ) ; if ( tmp == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . hwdzla2kb2 ; time_b = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_b ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = NULL
; simulationData -> mData -> mModeVector . mN = 0 ; simulationData -> mData
-> mModeVector . mX = NULL ; modelParameters_mVariableStepSolver = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents =
modelParameters_mVariableStepSolver ; simulationData -> mData ->
mIsMajorTimeStep = true ; modelParameters_mVariableStepSolver = (
ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck =
modelParameters_mVariableStepSolver ; modelParameters_mVariableStepSolver =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = modelParameters_mVariableStepSolver ; simulationData
-> mData -> mIsComputingJacobian = false ;
modelParameters_mVariableStepSolver = ssIsSolverRequestingReset ( rtS ) ;
simulationData -> mData -> mIsSolverRequestingReset =
modelParameters_mVariableStepSolver ; simulator = ( NeslSimulator * ) rtDW .
ahd5nxo5ee ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . l25nib43el
; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp = ne_simulator_method ( simulator , NESL_SIM_START
, simulationData , diagnosticManager ) ; if ( tmp != 0 ) { tmp =
rtw_diagnostics_message_count ( ) ; if ( tmp == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulator = nesl_lease_simulator (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration"
, 3 , 0 ) ; rtDW . mu0wco4dhv = ( void * ) simulator ;
modelParameters_mVariableStepSolver = pointer_is_null ( rtDW . mu0wco4dhv ) ;
if ( modelParameters_mVariableStepSolver ) {
friccion_aislada_esferica_Simscape_Symmechanics_eb684b64_gateway ( ) ;
simulator = nesl_lease_simulator (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration"
, 3 , 0 ) ; rtDW . mu0wco4dhv = ( void * ) simulator ; } simulationData =
nesl_create_simulation_data ( ) ; rtDW . mw4azdjt0i = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
hpobr5dnto = ( void * ) diagnosticManager ; fimts_n [ 0U ] = false ; fimts_n
[ 1U ] = false ; fimtsVector_n . mN = 2 ; fimtsVector_n . mX = & fimts_n [ 0U
] ; modelParameters_mSolverTolerance = 0.001 ; modelParameters_mFixedStepSize
= 0.0 ; modelParameters_mVariableStepSolver = true ; simulator = (
NeslSimulator * ) rtDW . mu0wco4dhv ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . hpobr5dnto ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; expl_temp_n .
mVariableStepSolver = modelParameters_mVariableStepSolver ; expl_temp_n .
mUseSimState = false ; expl_temp_n . mStartTime = 0.0 ; expl_temp_n .
mSolverType = NE_SOLVER_TYPE_ODE ; expl_temp_n . mSolverTolerance =
modelParameters_mSolverTolerance ; expl_temp_n . mLoggingMode =
SSC_LOGGING_NONE ; expl_temp_n . mLoadInitialState = false ; expl_temp_n .
mLinTrimCompile = false ; expl_temp_n . mFixedStepSize =
modelParameters_mFixedStepSize ; tmp = nesl_initialize_simulator ( simulator
, expl_temp_n , & fimtsVector_n , diagnosticManager ) ; if ( tmp != 0 ) { tmp
= rtw_diagnostics_message_count ( ) ; if ( tmp == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . mw4azdjt0i ; time_n = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_n ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = NULL
; simulationData -> mData -> mModeVector . mN = 0 ; simulationData -> mData
-> mModeVector . mX = NULL ; modelParameters_mVariableStepSolver = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents =
modelParameters_mVariableStepSolver ; simulationData -> mData ->
mIsMajorTimeStep = true ; modelParameters_mVariableStepSolver = (
ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck =
modelParameters_mVariableStepSolver ; modelParameters_mVariableStepSolver =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = modelParameters_mVariableStepSolver ; simulationData
-> mData -> mIsComputingJacobian = false ;
modelParameters_mVariableStepSolver = ssIsSolverRequestingReset ( rtS ) ;
simulationData -> mData -> mIsSolverRequestingReset =
modelParameters_mVariableStepSolver ; simulator = ( NeslSimulator * ) rtDW .
mu0wco4dhv ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . hpobr5dnto
; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp = ne_simulator_method ( simulator , NESL_SIM_START
, simulationData , diagnosticManager ) ; if ( tmp != 0 ) { tmp =
rtw_diagnostics_message_count ( ) ; if ( tmp == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulator = nesl_lease_simulator (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration"
, 2 , 0 ) ; rtDW . gpf31qpv5x = ( void * ) simulator ;
modelParameters_mVariableStepSolver = pointer_is_null ( rtDW . gpf31qpv5x ) ;
if ( modelParameters_mVariableStepSolver ) {
friccion_aislada_esferica_Simscape_Symmechanics_eb684b64_gateway ( ) ;
simulator = nesl_lease_simulator (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration"
, 2 , 0 ) ; rtDW . gpf31qpv5x = ( void * ) simulator ; } simulationData =
nesl_create_simulation_data ( ) ; rtDW . jrmucmc5l0 = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
eow2enys5v = ( void * ) diagnosticManager ; fimts_l [ 0U ] = false ; fimts_l
[ 1U ] = false ; fimts_l [ 2U ] = false ; fimtsVector_l . mN = 3 ;
fimtsVector_l . mX = & fimts_l [ 0U ] ; modelParameters_mSolverTolerance =
0.001 ; modelParameters_mFixedStepSize = 0.0 ;
modelParameters_mVariableStepSolver = true ; simulator = ( NeslSimulator * )
rtDW . gpf31qpv5x ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW .
eow2enys5v ; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; expl_temp_l . mVariableStepSolver =
modelParameters_mVariableStepSolver ; expl_temp_l . mUseSimState = false ;
expl_temp_l . mStartTime = 0.0 ; expl_temp_l . mSolverType =
NE_SOLVER_TYPE_ODE ; expl_temp_l . mSolverTolerance =
modelParameters_mSolverTolerance ; expl_temp_l . mLoggingMode =
SSC_LOGGING_NONE ; expl_temp_l . mLoadInitialState = false ; expl_temp_l .
mLinTrimCompile = false ; expl_temp_l . mFixedStepSize =
modelParameters_mFixedStepSize ; tmp = nesl_initialize_simulator ( simulator
, expl_temp_l , & fimtsVector_l , diagnosticManager ) ; if ( tmp != 0 ) { tmp
= rtw_diagnostics_message_count ( ) ; if ( tmp == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . jrmucmc5l0 ; time_l = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_l ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 1 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . hofd5gl0lv ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = NULL ;
modelParameters_mVariableStepSolver = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData -> mData
-> mFoundZcEvents = modelParameters_mVariableStepSolver ; simulationData ->
mData -> mIsMajorTimeStep = true ; modelParameters_mVariableStepSolver = (
ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck =
modelParameters_mVariableStepSolver ; modelParameters_mVariableStepSolver =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = modelParameters_mVariableStepSolver ; simulationData
-> mData -> mIsComputingJacobian = false ;
modelParameters_mVariableStepSolver = ssIsSolverRequestingReset ( rtS ) ;
simulationData -> mData -> mIsSolverRequestingReset =
modelParameters_mVariableStepSolver ; simulator = ( NeslSimulator * ) rtDW .
gpf31qpv5x ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . eow2enys5v
; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp = ne_simulator_method ( simulator , NESL_SIM_START
, simulationData , diagnosticManager ) ; if ( tmp != 0 ) { tmp =
rtw_diagnostics_message_count ( ) ; if ( tmp == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulator = nesl_lease_simulator (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration"
, 3 , 2 ) ; rtDW . de0spn04mt = ( void * ) simulator ;
modelParameters_mVariableStepSolver = pointer_is_null ( rtDW . de0spn04mt ) ;
if ( modelParameters_mVariableStepSolver ) {
friccion_aislada_esferica_Simscape_Symmechanics_eb684b64_gateway ( ) ;
simulator = nesl_lease_simulator (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration"
, 3 , 2 ) ; rtDW . de0spn04mt = ( void * ) simulator ; } simulationData =
nesl_create_simulation_data ( ) ; rtDW . gftgep1sjl = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
c2oj5ebuij = ( void * ) diagnosticManager ; fimts_d [ 0U ] = false ; fimts_d
[ 1U ] = false ; fimtsVector_d . mN = 2 ; fimtsVector_d . mX = & fimts_d [ 0U
] ; modelParameters_mSolverTolerance = 0.001 ; modelParameters_mFixedStepSize
= 0.0 ; modelParameters_mVariableStepSolver = true ; simulator = (
NeslSimulator * ) rtDW . de0spn04mt ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . c2oj5ebuij ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; expl_temp_d .
mVariableStepSolver = modelParameters_mVariableStepSolver ; expl_temp_d .
mUseSimState = false ; expl_temp_d . mStartTime = 0.0 ; expl_temp_d .
mSolverType = NE_SOLVER_TYPE_ODE ; expl_temp_d . mSolverTolerance =
modelParameters_mSolverTolerance ; expl_temp_d . mLoggingMode =
SSC_LOGGING_NONE ; expl_temp_d . mLoadInitialState = false ; expl_temp_d .
mLinTrimCompile = false ; expl_temp_d . mFixedStepSize =
modelParameters_mFixedStepSize ; tmp = nesl_initialize_simulator ( simulator
, expl_temp_d , & fimtsVector_d , diagnosticManager ) ; if ( tmp != 0 ) { tmp
= rtw_diagnostics_message_count ( ) ; if ( tmp == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . gftgep1sjl ; time_d = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_d ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = NULL
; simulationData -> mData -> mModeVector . mN = 0 ; simulationData -> mData
-> mModeVector . mX = NULL ; modelParameters_mVariableStepSolver = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents =
modelParameters_mVariableStepSolver ; simulationData -> mData ->
mIsMajorTimeStep = true ; modelParameters_mVariableStepSolver = (
ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck =
modelParameters_mVariableStepSolver ; modelParameters_mVariableStepSolver =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = modelParameters_mVariableStepSolver ; simulationData
-> mData -> mIsComputingJacobian = false ;
modelParameters_mVariableStepSolver = ssIsSolverRequestingReset ( rtS ) ;
simulationData -> mData -> mIsSolverRequestingReset =
modelParameters_mVariableStepSolver ; simulator = ( NeslSimulator * ) rtDW .
de0spn04mt ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . c2oj5ebuij
; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp = ne_simulator_method ( simulator , NESL_SIM_START
, simulationData , diagnosticManager ) ; if ( tmp != 0 ) { tmp =
rtw_diagnostics_message_count ( ) ; if ( tmp == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulator = nesl_lease_simulator (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration"
, 2 , 1 ) ; rtDW . ndnwrahj5v = ( void * ) simulator ;
modelParameters_mVariableStepSolver = pointer_is_null ( rtDW . ndnwrahj5v ) ;
if ( modelParameters_mVariableStepSolver ) {
friccion_aislada_esferica_Simscape_Symmechanics_eb684b64_gateway ( ) ;
simulator = nesl_lease_simulator (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration"
, 2 , 1 ) ; rtDW . ndnwrahj5v = ( void * ) simulator ; } simulationData =
nesl_create_simulation_data ( ) ; rtDW . o50nrjnd44 = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
j4zuphpirj = ( void * ) diagnosticManager ; fimts_o [ 0U ] = false ; fimts_o
[ 1U ] = false ; fimts_o [ 2U ] = false ; fimtsVector_o . mN = 3 ;
fimtsVector_o . mX = & fimts_o [ 0U ] ; modelParameters_mSolverTolerance =
0.001 ; modelParameters_mFixedStepSize = 0.0 ;
modelParameters_mVariableStepSolver = true ; simulator = ( NeslSimulator * )
rtDW . ndnwrahj5v ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW .
j4zuphpirj ; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; expl_temp_o . mVariableStepSolver =
modelParameters_mVariableStepSolver ; expl_temp_o . mUseSimState = false ;
expl_temp_o . mStartTime = 0.0 ; expl_temp_o . mSolverType =
NE_SOLVER_TYPE_ODE ; expl_temp_o . mSolverTolerance =
modelParameters_mSolverTolerance ; expl_temp_o . mLoggingMode =
SSC_LOGGING_NONE ; expl_temp_o . mLoadInitialState = false ; expl_temp_o .
mLinTrimCompile = false ; expl_temp_o . mFixedStepSize =
modelParameters_mFixedStepSize ; tmp = nesl_initialize_simulator ( simulator
, expl_temp_o , & fimtsVector_o , diagnosticManager ) ; if ( tmp != 0 ) { tmp
= rtw_diagnostics_message_count ( ) ; if ( tmp == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . o50nrjnd44 ; time_o = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_o ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 1 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . kmxvynb5xg ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = NULL ;
modelParameters_mVariableStepSolver = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData -> mData
-> mFoundZcEvents = modelParameters_mVariableStepSolver ; simulationData ->
mData -> mIsMajorTimeStep = true ; modelParameters_mVariableStepSolver = (
ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck =
modelParameters_mVariableStepSolver ; modelParameters_mVariableStepSolver =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = modelParameters_mVariableStepSolver ; simulationData
-> mData -> mIsComputingJacobian = false ;
modelParameters_mVariableStepSolver = ssIsSolverRequestingReset ( rtS ) ;
simulationData -> mData -> mIsSolverRequestingReset =
modelParameters_mVariableStepSolver ; simulator = ( NeslSimulator * ) rtDW .
ndnwrahj5v ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . j4zuphpirj
; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp = ne_simulator_method ( simulator , NESL_SIM_START
, simulationData , diagnosticManager ) ; if ( tmp != 0 ) { tmp =
rtw_diagnostics_message_count ( ) ; if ( tmp == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulator = nesl_lease_simulator (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration"
, 3 , 1 ) ; rtDW . nviurbkyfu = ( void * ) simulator ;
modelParameters_mVariableStepSolver = pointer_is_null ( rtDW . nviurbkyfu ) ;
if ( modelParameters_mVariableStepSolver ) {
friccion_aislada_esferica_Simscape_Symmechanics_eb684b64_gateway ( ) ;
simulator = nesl_lease_simulator (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration"
, 3 , 1 ) ; rtDW . nviurbkyfu = ( void * ) simulator ; } simulationData =
nesl_create_simulation_data ( ) ; rtDW . gksf2y3xqu = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
nyzomkvmej = ( void * ) diagnosticManager ; fimts_dz [ 0U ] = false ;
fimts_dz [ 1U ] = false ; fimtsVector_dz . mN = 2 ; fimtsVector_dz . mX = &
fimts_dz [ 0U ] ; modelParameters_mSolverTolerance = 0.001 ;
modelParameters_mFixedStepSize = 0.0 ; modelParameters_mVariableStepSolver =
true ; simulator = ( NeslSimulator * ) rtDW . nviurbkyfu ; diagnosticManager
= ( NeuDiagnosticManager * ) rtDW . nyzomkvmej ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; expl_temp_dz
. mVariableStepSolver = modelParameters_mVariableStepSolver ; expl_temp_dz .
mUseSimState = false ; expl_temp_dz . mStartTime = 0.0 ; expl_temp_dz .
mSolverType = NE_SOLVER_TYPE_ODE ; expl_temp_dz . mSolverTolerance =
modelParameters_mSolverTolerance ; expl_temp_dz . mLoggingMode =
SSC_LOGGING_NONE ; expl_temp_dz . mLoadInitialState = false ; expl_temp_dz .
mLinTrimCompile = false ; expl_temp_dz . mFixedStepSize =
modelParameters_mFixedStepSize ; tmp = nesl_initialize_simulator ( simulator
, expl_temp_dz , & fimtsVector_dz , diagnosticManager ) ; if ( tmp != 0 ) {
tmp = rtw_diagnostics_message_count ( ) ; if ( tmp == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . gksf2y3xqu ; time_dz =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_dz ; simulationData -> mData -> mContStates .
mN = 0 ; simulationData -> mData -> mContStates . mX = NULL ; simulationData
-> mData -> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates .
mX = NULL ; simulationData -> mData -> mModeVector . mN = 0 ; simulationData
-> mData -> mModeVector . mX = NULL ; modelParameters_mVariableStepSolver = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents =
modelParameters_mVariableStepSolver ; simulationData -> mData ->
mIsMajorTimeStep = true ; modelParameters_mVariableStepSolver = (
ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck =
modelParameters_mVariableStepSolver ; modelParameters_mVariableStepSolver =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = modelParameters_mVariableStepSolver ; simulationData
-> mData -> mIsComputingJacobian = false ;
modelParameters_mVariableStepSolver = ssIsSolverRequestingReset ( rtS ) ;
simulationData -> mData -> mIsSolverRequestingReset =
modelParameters_mVariableStepSolver ; simulator = ( NeslSimulator * ) rtDW .
nviurbkyfu ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . nyzomkvmej
; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp = ne_simulator_method ( simulator , NESL_SIM_START
, simulationData , diagnosticManager ) ; if ( tmp != 0 ) { tmp =
rtw_diagnostics_message_count ( ) ; if ( tmp == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulator = nesl_lease_simulator (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration"
, 2 , 2 ) ; rtDW . j5smstjan3 = ( void * ) simulator ;
modelParameters_mVariableStepSolver = pointer_is_null ( rtDW . j5smstjan3 ) ;
if ( modelParameters_mVariableStepSolver ) {
friccion_aislada_esferica_Simscape_Symmechanics_eb684b64_gateway ( ) ;
simulator = nesl_lease_simulator (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration"
, 2 , 2 ) ; rtDW . j5smstjan3 = ( void * ) simulator ; } simulationData =
nesl_create_simulation_data ( ) ; rtDW . dntzyn5tmg = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
pinay1nrr3 = ( void * ) diagnosticManager ; fimts_fs [ 0U ] = false ;
fimts_fs [ 1U ] = false ; fimts_fs [ 2U ] = false ; fimtsVector_fs . mN = 3 ;
fimtsVector_fs . mX = & fimts_fs [ 0U ] ; modelParameters_mSolverTolerance =
0.001 ; modelParameters_mFixedStepSize = 0.0 ;
modelParameters_mVariableStepSolver = true ; simulator = ( NeslSimulator * )
rtDW . j5smstjan3 ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW .
pinay1nrr3 ; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; expl_temp_fs . mVariableStepSolver =
modelParameters_mVariableStepSolver ; expl_temp_fs . mUseSimState = false ;
expl_temp_fs . mStartTime = 0.0 ; expl_temp_fs . mSolverType =
NE_SOLVER_TYPE_ODE ; expl_temp_fs . mSolverTolerance =
modelParameters_mSolverTolerance ; expl_temp_fs . mLoggingMode =
SSC_LOGGING_NONE ; expl_temp_fs . mLoadInitialState = false ; expl_temp_fs .
mLinTrimCompile = false ; expl_temp_fs . mFixedStepSize =
modelParameters_mFixedStepSize ; tmp = nesl_initialize_simulator ( simulator
, expl_temp_fs , & fimtsVector_fs , diagnosticManager ) ; if ( tmp != 0 ) {
tmp = rtw_diagnostics_message_count ( ) ; if ( tmp == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . dntzyn5tmg ; time_fs =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_fs ; simulationData -> mData -> mContStates .
mN = 0 ; simulationData -> mData -> mContStates . mX = NULL ; simulationData
-> mData -> mDiscStates . mN = 1 ; simulationData -> mData -> mDiscStates .
mX = & rtDW . lqg4ib442l ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = NULL ;
modelParameters_mVariableStepSolver = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData -> mData
-> mFoundZcEvents = modelParameters_mVariableStepSolver ; simulationData ->
mData -> mIsMajorTimeStep = true ; modelParameters_mVariableStepSolver = (
ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck =
modelParameters_mVariableStepSolver ; modelParameters_mVariableStepSolver =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = modelParameters_mVariableStepSolver ; simulationData
-> mData -> mIsComputingJacobian = false ;
modelParameters_mVariableStepSolver = ssIsSolverRequestingReset ( rtS ) ;
simulationData -> mData -> mIsSolverRequestingReset =
modelParameters_mVariableStepSolver ; simulator = ( NeslSimulator * ) rtDW .
j5smstjan3 ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . pinay1nrr3
; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp = ne_simulator_method ( simulator , NESL_SIM_START
, simulationData , diagnosticManager ) ; if ( tmp != 0 ) { tmp =
rtw_diagnostics_message_count ( ) ; if ( tmp == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulator = nesl_lease_simulator (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration"
, 1 , 3 ) ; rtDW . jxk3l5lam0 = ( void * ) simulator ;
modelParameters_mVariableStepSolver = pointer_is_null ( rtDW . jxk3l5lam0 ) ;
if ( modelParameters_mVariableStepSolver ) {
friccion_aislada_esferica_Simscape_Symmechanics_eb684b64_gateway ( ) ;
simulator = nesl_lease_simulator (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration"
, 1 , 3 ) ; rtDW . jxk3l5lam0 = ( void * ) simulator ; } simulationData =
nesl_create_simulation_data ( ) ; rtDW . atpqvqjfs5 = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
ac2uu54gd3 = ( void * ) diagnosticManager ; fimts_ck [ 0U ] = false ;
fimts_ck [ 1U ] = false ; fimts_ck [ 2U ] = false ; fimts_ck [ 3U ] = false ;
fimtsVector_ck . mN = 4 ; fimtsVector_ck . mX = & fimts_ck [ 0U ] ;
modelParameters_mSolverTolerance = 0.001 ; modelParameters_mFixedStepSize =
0.0 ; modelParameters_mVariableStepSolver = true ; simulator = (
NeslSimulator * ) rtDW . jxk3l5lam0 ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . ac2uu54gd3 ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; expl_temp_ck
. mVariableStepSolver = modelParameters_mVariableStepSolver ; expl_temp_ck .
mUseSimState = false ; expl_temp_ck . mStartTime = 0.0 ; expl_temp_ck .
mSolverType = NE_SOLVER_TYPE_ODE ; expl_temp_ck . mSolverTolerance =
modelParameters_mSolverTolerance ; expl_temp_ck . mLoggingMode =
SSC_LOGGING_NONE ; expl_temp_ck . mLoadInitialState = false ; expl_temp_ck .
mLinTrimCompile = false ; expl_temp_ck . mFixedStepSize =
modelParameters_mFixedStepSize ; tmp = nesl_initialize_simulator ( simulator
, expl_temp_ck , & fimtsVector_ck , diagnosticManager ) ; if ( tmp != 0 ) {
tmp = rtw_diagnostics_message_count ( ) ; if ( tmp == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . atpqvqjfs5 ; time_ck =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_ck ; simulationData -> mData -> mContStates .
mN = 0 ; simulationData -> mData -> mContStates . mX = NULL ; simulationData
-> mData -> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates .
mX = NULL ; simulationData -> mData -> mModeVector . mN = 0 ; simulationData
-> mData -> mModeVector . mX = NULL ; modelParameters_mVariableStepSolver = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents =
modelParameters_mVariableStepSolver ; simulationData -> mData ->
mIsMajorTimeStep = true ; modelParameters_mVariableStepSolver = (
ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck =
modelParameters_mVariableStepSolver ; modelParameters_mVariableStepSolver =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = modelParameters_mVariableStepSolver ; simulationData
-> mData -> mIsComputingJacobian = false ;
modelParameters_mVariableStepSolver = ssIsSolverRequestingReset ( rtS ) ;
simulationData -> mData -> mIsSolverRequestingReset =
modelParameters_mVariableStepSolver ; simulator = ( NeslSimulator * ) rtDW .
jxk3l5lam0 ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . ac2uu54gd3
; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp = ne_simulator_method ( simulator , NESL_SIM_START
, simulationData , diagnosticManager ) ; if ( tmp != 0 ) { tmp =
rtw_diagnostics_message_count ( ) ; if ( tmp == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
MdlInitialize ( ) ; } void MdlOutputs ( int_T tid ) { NeslSimulationData *
simulationData ; real_T time ; boolean_T tmp ; real_T tmp_p [ 12 ] ; int_T
tmp_e [ 4 ] ; NeslSimulator * simulator ; NeuDiagnosticManager *
diagnosticManager ; NeuDiagnosticTree * diagnosticTree ; int32_T tmp_i ; char
* msg ; real_T time_p ; real_T tmp_m [ 19 ] ; int_T tmp_g [ 5 ] ; real_T
time_e ; real_T tmp_j [ 3 ] ; int_T tmp_f [ 4 ] ; real_T time_i ; real_T
tmp_c [ 4 ] ; int_T tmp_k [ 2 ] ; real_T time_m ; real_T tmp_b [ 9 ] ; int_T
tmp_n [ 3 ] ; real_T time_g ; real_T tmp_l [ 3 ] ; int_T tmp_d [ 4 ] ; real_T
time_j ; real_T tmp_o [ 4 ] ; int_T tmp_dz [ 2 ] ; real_T time_f ; real_T
tmp_fs [ 9 ] ; int_T tmp_ck [ 3 ] ; real_T time_c ; real_T tmp_f2 [ 3 ] ;
int_T tmp_kt [ 4 ] ; real_T time_k ; real_T tmp_lt [ 4 ] ; int_T tmp_hn [ 2 ]
; real_T time_b ; real_T tmp_ap [ 9 ] ; int_T tmp_pj [ 3 ] ; real_T time_n ;
real_T tmp_po [ 9 ] ; int_T tmp_pk [ 3 ] ; real_T time_l ; real_T tmp_d0 [ 3
] ; int_T tmp_kh [ 4 ] ; real_T time_d ; real_T tmp_m0 [ 9 ] ; int_T tmp_fv [
3 ] ; real_T time_o ; real_T tmp_m4 [ 3 ] ; int_T tmp_nf [ 4 ] ; real_T
time_dz ; real_T tmp_mi [ 9 ] ; int_T tmp_b0 [ 3 ] ; real_T time_fs ; real_T
tmp_cc [ 3 ] ; int_T tmp_gw [ 4 ] ; real_T time_ck ; real_T tmp_iz [ 19 ] ;
int_T tmp_kv [ 5 ] ; simulationData = ( NeslSimulationData * ) rtDW .
piiowhvoq3 ; time = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN =
1 ; simulationData -> mData -> mTime . mX = & time ; simulationData -> mData
-> mContStates . mN = 7 ; simulationData -> mData -> mContStates . mX = (
real_T * ) & rtX . cjklakdih0 ; simulationData -> mData -> mDiscStates . mN =
0 ; simulationData -> mData -> mDiscStates . mX = NULL ; simulationData ->
mData -> mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX =
NULL ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) ->
foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents = tmp ;
simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp
= ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; tmp =
ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_e [ 0U ] = 0 ; tmp_p [ 0U ] = rtB .
ioszdbstmn [ 0 ] ; tmp_p [ 1U ] = rtB . ioszdbstmn [ 1 ] ; tmp_p [ 2U ] = rtB
. ioszdbstmn [ 2 ] ; tmp_p [ 3U ] = rtB . ioszdbstmn [ 3 ] ; tmp_e [ 1U ] = 4
; tmp_p [ 4U ] = rtB . itv2k1nlsr [ 0 ] ; tmp_p [ 5U ] = rtB . itv2k1nlsr [ 1
] ; tmp_p [ 6U ] = rtB . itv2k1nlsr [ 2 ] ; tmp_p [ 7U ] = rtB . itv2k1nlsr [
3 ] ; tmp_e [ 2U ] = 8 ; tmp_p [ 8U ] = rtB . euf53gdk1f [ 0 ] ; tmp_p [ 9U ]
= rtB . euf53gdk1f [ 1 ] ; tmp_p [ 10U ] = rtB . euf53gdk1f [ 2 ] ; tmp_p [
11U ] = rtB . euf53gdk1f [ 3 ] ; tmp_e [ 3U ] = 12 ; simulationData -> mData
-> mInputValues . mN = 12 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0U ] ; simulationData -> mData -> mInputOffsets . mN = 4 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0U ] ;
simulationData -> mData -> mOutputs . mN = 7 ; simulationData -> mData ->
mOutputs . mX = & rtB . hay0z4ydom [ 0U ] ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulator = (
NeslSimulator * ) rtDW . oh2nksyqvj ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . n0nnoz5d3k ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( simulator , NESL_SIM_OUTPUTS , simulationData ,
diagnosticManager ) ; if ( tmp_i != 0 ) { tmp_i =
rtw_diagnostics_message_count ( ) ; if ( tmp_i == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . i4aru4d13y ; time_p = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_p ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = NULL
; simulationData -> mData -> mModeVector . mN = 0 ; simulationData -> mData
-> mModeVector . mX = NULL ; tmp = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData -> mData
-> mFoundZcEvents = tmp ; simulationData -> mData -> mIsMajorTimeStep = true
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; simulationData -> mData -> mIsComputingJacobian
= false ; tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData
-> mIsSolverRequestingReset = tmp ; tmp_g [ 0U ] = 0 ; tmp_m [ 0U ] = rtB .
ioszdbstmn [ 0 ] ; tmp_m [ 1U ] = rtB . ioszdbstmn [ 1 ] ; tmp_m [ 2U ] = rtB
. ioszdbstmn [ 2 ] ; tmp_m [ 3U ] = rtB . ioszdbstmn [ 3 ] ; tmp_g [ 1U ] = 4
; tmp_m [ 4U ] = rtB . itv2k1nlsr [ 0 ] ; tmp_m [ 5U ] = rtB . itv2k1nlsr [ 1
] ; tmp_m [ 6U ] = rtB . itv2k1nlsr [ 2 ] ; tmp_m [ 7U ] = rtB . itv2k1nlsr [
3 ] ; tmp_g [ 2U ] = 8 ; tmp_m [ 8U ] = rtB . euf53gdk1f [ 0 ] ; tmp_m [ 9U ]
= rtB . euf53gdk1f [ 1 ] ; tmp_m [ 10U ] = rtB . euf53gdk1f [ 2 ] ; tmp_m [
11U ] = rtB . euf53gdk1f [ 3 ] ; tmp_g [ 3U ] = 12 ; tmp_m [ 12U ] = rtB .
hay0z4ydom [ 0 ] ; tmp_m [ 13U ] = rtB . hay0z4ydom [ 1 ] ; tmp_m [ 14U ] =
rtB . hay0z4ydom [ 2 ] ; tmp_m [ 15U ] = rtB . hay0z4ydom [ 3 ] ; tmp_m [ 16U
] = rtB . hay0z4ydom [ 4 ] ; tmp_m [ 17U ] = rtB . hay0z4ydom [ 5 ] ; tmp_m [
18U ] = rtB . hay0z4ydom [ 6 ] ; tmp_g [ 4U ] = 19 ; simulationData -> mData
-> mInputValues . mN = 19 ; simulationData -> mData -> mInputValues . mX = &
tmp_m [ 0U ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_g [ 0U ] ;
simulationData -> mData -> mOutputs . mN = 7 ; simulationData -> mData ->
mOutputs . mX = & rtB . l2jfs00ccy [ 0U ] ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulator = (
NeslSimulator * ) rtDW . m5lvlhykau ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . psaiktqsay ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( simulator , NESL_SIM_OUTPUTS , simulationData ,
diagnosticManager ) ; if ( tmp_i != 0 ) { tmp_i =
rtw_diagnostics_message_count ( ) ; if ( tmp_i == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
rtB . il3w4ovzm5 = rtB . l2jfs00ccy [ 4 ] ; rtB . khywms0clb = rtB .
l2jfs00ccy [ 5 ] ; rtB . pfk4qbtcfu = rtB . l2jfs00ccy [ 4 ] ; rtB .
pjhhb5kquv [ 0 ] = rtB . l2jfs00ccy [ 0 ] ; rtB . pjhhb5kquv [ 1 ] = rtB .
l2jfs00ccy [ 1 ] ; rtB . pjhhb5kquv [ 2 ] = rtB . l2jfs00ccy [ 2 ] ; rtB .
pjhhb5kquv [ 3 ] = rtB . l2jfs00ccy [ 3 ] ; simulationData = (
NeslSimulationData * ) rtDW . gkm0s0ctrk ; time_e = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_e ; simulationData -> mData -> mContStates . mN = 1 ;
simulationData -> mData -> mContStates . mX = & rtX . c150l3qmxn ;
simulationData -> mData -> mDiscStates . mN = 1 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . mxwpzq1ids ; simulationData -> mData ->
mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = NULL ;
tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) ->
foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents = tmp ;
simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp
= ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; tmp =
ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_f [ 0U ] = 0 ; tmp_j [ 0U ] = rtB .
l2jfs00ccy [ 4 ] ; tmp_f [ 1U ] = 1 ; tmp_j [ 1U ] = 0.0 ; tmp_f [ 2U ] = 2 ;
tmp_j [ 2U ] = 0.0 ; tmp_f [ 3U ] = 3 ; simulationData -> mData ->
mInputValues . mN = 3 ; simulationData -> mData -> mInputValues . mX = &
tmp_j [ 0U ] ; simulationData -> mData -> mInputOffsets . mN = 4 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_f [ 0U ] ;
simulationData -> mData -> mOutputs . mN = 4 ; simulationData -> mData ->
mOutputs . mX = & rtB . kcfetpaoaj [ 0U ] ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulator = (
NeslSimulator * ) rtDW . flmlbqbmbh ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . iob4nznmac ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( simulator , NESL_SIM_OUTPUTS , simulationData ,
diagnosticManager ) ; if ( tmp_i != 0 ) { tmp_i =
rtw_diagnostics_message_count ( ) ; if ( tmp_i == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . gcums0dzz2 ; time_i = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_i ; simulationData -> mData -> mContStates . mN = 1 ;
simulationData -> mData -> mContStates . mX = & rtX . ml5rpxbc10 ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = NULL ; simulationData -> mData -> mModeVector . mN = 4 ;
simulationData -> mData -> mModeVector . mX = ( int32_T * ) & rtDW .
alrqayrcnu ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS )
-> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents = tmp ;
simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp
= ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; tmp =
ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_k [ 0U ] = 0 ; tmp_c [ 0U ] = rtB .
kcfetpaoaj [ 0 ] ; tmp_c [ 1U ] = rtB . kcfetpaoaj [ 1 ] ; tmp_c [ 2U ] = rtB
. kcfetpaoaj [ 2 ] ; tmp_c [ 3U ] = rtB . kcfetpaoaj [ 3 ] ; tmp_k [ 1U ] = 4
; simulationData -> mData -> mInputValues . mN = 4 ; simulationData -> mData
-> mInputValues . mX = & tmp_c [ 0U ] ; simulationData -> mData ->
mInputOffsets . mN = 2 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_k [ 0U ] ; simulationData -> mData -> mOutputs . mN = 5 ; simulationData
-> mData -> mOutputs . mX = & rtB . n1oykolxud [ 0U ] ; simulationData ->
mData -> mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX =
NULL ; simulationData -> mData -> mIsFundamentalSampleHit = false ; simulator
= ( NeslSimulator * ) rtDW . nyiiqtb3pj ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . lhf2yly352 ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( simulator , NESL_SIM_OUTPUTS , simulationData ,
diagnosticManager ) ; if ( tmp_i != 0 ) { tmp_i =
rtw_diagnostics_message_count ( ) ; if ( tmp_i == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . bzrmjhnabu ; time_m = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_m ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = NULL
; simulationData -> mData -> mModeVector . mN = 0 ; simulationData -> mData
-> mModeVector . mX = NULL ; tmp = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData -> mData
-> mFoundZcEvents = tmp ; simulationData -> mData -> mIsMajorTimeStep = true
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; simulationData -> mData -> mIsComputingJacobian
= false ; tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData
-> mIsSolverRequestingReset = tmp ; tmp_n [ 0U ] = 0 ; tmp_b [ 0U ] = rtB .
kcfetpaoaj [ 0 ] ; tmp_b [ 1U ] = rtB . kcfetpaoaj [ 1 ] ; tmp_b [ 2U ] = rtB
. kcfetpaoaj [ 2 ] ; tmp_b [ 3U ] = rtB . kcfetpaoaj [ 3 ] ; tmp_n [ 1U ] = 4
; tmp_b [ 4U ] = rtB . n1oykolxud [ 0 ] ; tmp_b [ 5U ] = rtB . n1oykolxud [ 1
] ; tmp_b [ 6U ] = rtB . n1oykolxud [ 2 ] ; tmp_b [ 7U ] = rtB . n1oykolxud [
3 ] ; tmp_b [ 8U ] = rtB . n1oykolxud [ 4 ] ; tmp_n [ 2U ] = 9 ;
simulationData -> mData -> mInputValues . mN = 9 ; simulationData -> mData ->
mInputValues . mX = & tmp_b [ 0U ] ; simulationData -> mData -> mInputOffsets
. mN = 3 ; simulationData -> mData -> mInputOffsets . mX = & tmp_n [ 0U ] ;
simulationData -> mData -> mOutputs . mN = 0 ; simulationData -> mData ->
mOutputs . mX = NULL ; simulationData -> mData -> mSampleHits . mN = 0 ;
simulationData -> mData -> mSampleHits . mX = NULL ; simulationData -> mData
-> mIsFundamentalSampleHit = false ; simulator = ( NeslSimulator * ) rtDW .
gtt25diae4 ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . is3dc1o4zz
; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp_i = ne_simulator_method ( simulator ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( tmp_i != 0 ) {
tmp_i = rtw_diagnostics_message_count ( ) ; if ( tmp_i == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . evijjolyva ; time_g = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_g ; simulationData -> mData -> mContStates . mN = 1 ;
simulationData -> mData -> mContStates . mX = & rtX . m2txpyziu4 ;
simulationData -> mData -> mDiscStates . mN = 1 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . citycn5tuj ; simulationData -> mData ->
mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = NULL ;
tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) ->
foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents = tmp ;
simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp
= ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; tmp =
ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_d [ 0U ] = 0 ; tmp_l [ 0U ] = rtB .
l2jfs00ccy [ 6 ] ; tmp_d [ 1U ] = 1 ; tmp_l [ 1U ] = 0.0 ; tmp_d [ 2U ] = 2 ;
tmp_l [ 2U ] = 0.0 ; tmp_d [ 3U ] = 3 ; simulationData -> mData ->
mInputValues . mN = 3 ; simulationData -> mData -> mInputValues . mX = &
tmp_l [ 0U ] ; simulationData -> mData -> mInputOffsets . mN = 4 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_d [ 0U ] ;
simulationData -> mData -> mOutputs . mN = 4 ; simulationData -> mData ->
mOutputs . mX = & rtB . mopdhxqse4 [ 0U ] ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulator = (
NeslSimulator * ) rtDW . jjazmhpwwr ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . pxp5ilgmi3 ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( simulator , NESL_SIM_OUTPUTS , simulationData ,
diagnosticManager ) ; if ( tmp_i != 0 ) { tmp_i =
rtw_diagnostics_message_count ( ) ; if ( tmp_i == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . f4ygo2hyze ; time_j = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_j ; simulationData -> mData -> mContStates . mN = 1 ;
simulationData -> mData -> mContStates . mX = & rtX . pgig0w5z22 ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = NULL ; simulationData -> mData -> mModeVector . mN = 4 ;
simulationData -> mData -> mModeVector . mX = ( int32_T * ) & rtDW .
dhe2ccms01 ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS )
-> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents = tmp ;
simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp
= ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; tmp =
ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_dz [ 0U ] = 0 ; tmp_o [ 0U ] = rtB .
mopdhxqse4 [ 0 ] ; tmp_o [ 1U ] = rtB . mopdhxqse4 [ 1 ] ; tmp_o [ 2U ] = rtB
. mopdhxqse4 [ 2 ] ; tmp_o [ 3U ] = rtB . mopdhxqse4 [ 3 ] ; tmp_dz [ 1U ] =
4 ; simulationData -> mData -> mInputValues . mN = 4 ; simulationData ->
mData -> mInputValues . mX = & tmp_o [ 0U ] ; simulationData -> mData ->
mInputOffsets . mN = 2 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_dz [ 0U ] ; simulationData -> mData -> mOutputs . mN = 5 ; simulationData
-> mData -> mOutputs . mX = & rtB . jjfsxd2pht [ 0U ] ; simulationData ->
mData -> mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX =
NULL ; simulationData -> mData -> mIsFundamentalSampleHit = false ; simulator
= ( NeslSimulator * ) rtDW . ku2cbhbb3u ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . g3mxxyfx5h ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( simulator , NESL_SIM_OUTPUTS , simulationData ,
diagnosticManager ) ; if ( tmp_i != 0 ) { tmp_i =
rtw_diagnostics_message_count ( ) ; if ( tmp_i == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . gsrotkxe3w ; time_f = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_f ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = NULL
; simulationData -> mData -> mModeVector . mN = 0 ; simulationData -> mData
-> mModeVector . mX = NULL ; tmp = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData -> mData
-> mFoundZcEvents = tmp ; simulationData -> mData -> mIsMajorTimeStep = true
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; simulationData -> mData -> mIsComputingJacobian
= false ; tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData
-> mIsSolverRequestingReset = tmp ; tmp_ck [ 0U ] = 0 ; tmp_fs [ 0U ] = rtB .
mopdhxqse4 [ 0 ] ; tmp_fs [ 1U ] = rtB . mopdhxqse4 [ 1 ] ; tmp_fs [ 2U ] =
rtB . mopdhxqse4 [ 2 ] ; tmp_fs [ 3U ] = rtB . mopdhxqse4 [ 3 ] ; tmp_ck [ 1U
] = 4 ; tmp_fs [ 4U ] = rtB . jjfsxd2pht [ 0 ] ; tmp_fs [ 5U ] = rtB .
jjfsxd2pht [ 1 ] ; tmp_fs [ 6U ] = rtB . jjfsxd2pht [ 2 ] ; tmp_fs [ 7U ] =
rtB . jjfsxd2pht [ 3 ] ; tmp_fs [ 8U ] = rtB . jjfsxd2pht [ 4 ] ; tmp_ck [ 2U
] = 9 ; simulationData -> mData -> mInputValues . mN = 9 ; simulationData ->
mData -> mInputValues . mX = & tmp_fs [ 0U ] ; simulationData -> mData ->
mInputOffsets . mN = 3 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_ck [ 0U ] ; simulationData -> mData -> mOutputs . mN = 0 ; simulationData
-> mData -> mOutputs . mX = NULL ; simulationData -> mData -> mSampleHits .
mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ; simulationData
-> mData -> mIsFundamentalSampleHit = false ; simulator = ( NeslSimulator * )
rtDW . dxh0qu5kpi ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW .
aa1kkeyuws ; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp_i = ne_simulator_method ( simulator ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( tmp_i != 0 ) {
tmp_i = rtw_diagnostics_message_count ( ) ; if ( tmp_i == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . jstvsrdxec ; time_c = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_c ; simulationData -> mData -> mContStates . mN = 1 ;
simulationData -> mData -> mContStates . mX = & rtX . h15fzyy0rm ;
simulationData -> mData -> mDiscStates . mN = 1 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . g0ybx5ny0s ; simulationData -> mData ->
mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = NULL ;
tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) ->
foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents = tmp ;
simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp
= ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; tmp =
ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_kt [ 0U ] = 0 ; tmp_f2 [ 0U ] = rtB .
l2jfs00ccy [ 5 ] ; tmp_kt [ 1U ] = 1 ; tmp_f2 [ 1U ] = 0.0 ; tmp_kt [ 2U ] =
2 ; tmp_f2 [ 2U ] = 0.0 ; tmp_kt [ 3U ] = 3 ; simulationData -> mData ->
mInputValues . mN = 3 ; simulationData -> mData -> mInputValues . mX = &
tmp_f2 [ 0U ] ; simulationData -> mData -> mInputOffsets . mN = 4 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_kt [ 0U ] ;
simulationData -> mData -> mOutputs . mN = 4 ; simulationData -> mData ->
mOutputs . mX = & rtB . crsv2a03b0 [ 0U ] ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulator = (
NeslSimulator * ) rtDW . kswjmadgur ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . bwrk1jrfjh ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( simulator , NESL_SIM_OUTPUTS , simulationData ,
diagnosticManager ) ; if ( tmp_i != 0 ) { tmp_i =
rtw_diagnostics_message_count ( ) ; if ( tmp_i == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . j3w0jjg10i ; time_k = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_k ; simulationData -> mData -> mContStates . mN = 1 ;
simulationData -> mData -> mContStates . mX = & rtX . clcp24atwn ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = NULL ; simulationData -> mData -> mModeVector . mN = 4 ;
simulationData -> mData -> mModeVector . mX = ( int32_T * ) & rtDW .
pfel4n10vu ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS )
-> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents = tmp ;
simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp
= ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; tmp =
ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_hn [ 0U ] = 0 ; tmp_lt [ 0U ] = rtB .
crsv2a03b0 [ 0 ] ; tmp_lt [ 1U ] = rtB . crsv2a03b0 [ 1 ] ; tmp_lt [ 2U ] =
rtB . crsv2a03b0 [ 2 ] ; tmp_lt [ 3U ] = rtB . crsv2a03b0 [ 3 ] ; tmp_hn [ 1U
] = 4 ; simulationData -> mData -> mInputValues . mN = 4 ; simulationData ->
mData -> mInputValues . mX = & tmp_lt [ 0U ] ; simulationData -> mData ->
mInputOffsets . mN = 2 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_hn [ 0U ] ; simulationData -> mData -> mOutputs . mN = 5 ; simulationData
-> mData -> mOutputs . mX = & rtB . jrta0gtdwd [ 0U ] ; simulationData ->
mData -> mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX =
NULL ; simulationData -> mData -> mIsFundamentalSampleHit = false ; simulator
= ( NeslSimulator * ) rtDW . avoetnry4f ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . nzmye2eqv0 ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( simulator , NESL_SIM_OUTPUTS , simulationData ,
diagnosticManager ) ; if ( tmp_i != 0 ) { tmp_i =
rtw_diagnostics_message_count ( ) ; if ( tmp_i == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . hwdzla2kb2 ; time_b = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_b ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = NULL
; simulationData -> mData -> mModeVector . mN = 0 ; simulationData -> mData
-> mModeVector . mX = NULL ; tmp = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData -> mData
-> mFoundZcEvents = tmp ; simulationData -> mData -> mIsMajorTimeStep = true
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; simulationData -> mData -> mIsComputingJacobian
= false ; tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData
-> mIsSolverRequestingReset = tmp ; tmp_pj [ 0U ] = 0 ; tmp_ap [ 0U ] = rtB .
crsv2a03b0 [ 0 ] ; tmp_ap [ 1U ] = rtB . crsv2a03b0 [ 1 ] ; tmp_ap [ 2U ] =
rtB . crsv2a03b0 [ 2 ] ; tmp_ap [ 3U ] = rtB . crsv2a03b0 [ 3 ] ; tmp_pj [ 1U
] = 4 ; tmp_ap [ 4U ] = rtB . jrta0gtdwd [ 0 ] ; tmp_ap [ 5U ] = rtB .
jrta0gtdwd [ 1 ] ; tmp_ap [ 6U ] = rtB . jrta0gtdwd [ 2 ] ; tmp_ap [ 7U ] =
rtB . jrta0gtdwd [ 3 ] ; tmp_ap [ 8U ] = rtB . jrta0gtdwd [ 4 ] ; tmp_pj [ 2U
] = 9 ; simulationData -> mData -> mInputValues . mN = 9 ; simulationData ->
mData -> mInputValues . mX = & tmp_ap [ 0U ] ; simulationData -> mData ->
mInputOffsets . mN = 3 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_pj [ 0U ] ; simulationData -> mData -> mOutputs . mN = 0 ; simulationData
-> mData -> mOutputs . mX = NULL ; simulationData -> mData -> mSampleHits .
mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ; simulationData
-> mData -> mIsFundamentalSampleHit = false ; simulator = ( NeslSimulator * )
rtDW . ahd5nxo5ee ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW .
l25nib43el ; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp_i = ne_simulator_method ( simulator ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( tmp_i != 0 ) {
tmp_i = rtw_diagnostics_message_count ( ) ; if ( tmp_i == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . mw4azdjt0i ; time_n = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_n ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = NULL
; simulationData -> mData -> mModeVector . mN = 0 ; simulationData -> mData
-> mModeVector . mX = NULL ; tmp = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData -> mData
-> mFoundZcEvents = tmp ; simulationData -> mData -> mIsMajorTimeStep = true
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; simulationData -> mData -> mIsComputingJacobian
= false ; tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData
-> mIsSolverRequestingReset = tmp ; tmp_pk [ 0U ] = 0 ; tmp_po [ 0U ] = rtB .
kcfetpaoaj [ 0 ] ; tmp_po [ 1U ] = rtB . kcfetpaoaj [ 1 ] ; tmp_po [ 2U ] =
rtB . kcfetpaoaj [ 2 ] ; tmp_po [ 3U ] = rtB . kcfetpaoaj [ 3 ] ; tmp_pk [ 1U
] = 4 ; tmp_po [ 4U ] = rtB . n1oykolxud [ 0 ] ; tmp_po [ 5U ] = rtB .
n1oykolxud [ 1 ] ; tmp_po [ 6U ] = rtB . n1oykolxud [ 2 ] ; tmp_po [ 7U ] =
rtB . n1oykolxud [ 3 ] ; tmp_po [ 8U ] = rtB . n1oykolxud [ 4 ] ; tmp_pk [ 2U
] = 9 ; simulationData -> mData -> mInputValues . mN = 9 ; simulationData ->
mData -> mInputValues . mX = & tmp_po [ 0U ] ; simulationData -> mData ->
mInputOffsets . mN = 3 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_pk [ 0U ] ; simulationData -> mData -> mOutputs . mN = 1 ; simulationData
-> mData -> mOutputs . mX = & rtB . od0udch0bu ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulator = (
NeslSimulator * ) rtDW . mu0wco4dhv ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . hpobr5dnto ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( simulator , NESL_SIM_OUTPUTS , simulationData ,
diagnosticManager ) ; if ( tmp_i != 0 ) { tmp_i =
rtw_diagnostics_message_count ( ) ; if ( tmp_i == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . jrmucmc5l0 ; time_l = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_l ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 1 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . hofd5gl0lv ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = NULL ; tmp = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData
-> mIsMajorTimeStep = true ; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags .
solverAssertCheck == 1U ) ; simulationData -> mData -> mIsSolverAssertCheck =
tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; simulationData -> mData -> mIsComputingJacobian
= false ; tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData
-> mIsSolverRequestingReset = tmp ; tmp_kh [ 0U ] = 0 ; tmp_d0 [ 0U ] = rtB .
od0udch0bu ; tmp_kh [ 1U ] = 1 ; tmp_d0 [ 1U ] = 0.0 ; tmp_kh [ 2U ] = 2 ;
tmp_d0 [ 2U ] = 0.0 ; tmp_kh [ 3U ] = 3 ; simulationData -> mData ->
mInputValues . mN = 3 ; simulationData -> mData -> mInputValues . mX = &
tmp_d0 [ 0U ] ; simulationData -> mData -> mInputOffsets . mN = 4 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_kh [ 0U ] ;
simulationData -> mData -> mOutputs . mN = 4 ; simulationData -> mData ->
mOutputs . mX = & rtB . ioszdbstmn [ 0U ] ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulator = (
NeslSimulator * ) rtDW . gpf31qpv5x ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . eow2enys5v ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( simulator , NESL_SIM_OUTPUTS , simulationData ,
diagnosticManager ) ; if ( tmp_i != 0 ) { tmp_i =
rtw_diagnostics_message_count ( ) ; if ( tmp_i == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . gftgep1sjl ; time_d = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_d ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = NULL
; simulationData -> mData -> mModeVector . mN = 0 ; simulationData -> mData
-> mModeVector . mX = NULL ; tmp = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData -> mData
-> mFoundZcEvents = tmp ; simulationData -> mData -> mIsMajorTimeStep = true
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; simulationData -> mData -> mIsComputingJacobian
= false ; tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData
-> mIsSolverRequestingReset = tmp ; tmp_fv [ 0U ] = 0 ; tmp_m0 [ 0U ] = rtB .
crsv2a03b0 [ 0 ] ; tmp_m0 [ 1U ] = rtB . crsv2a03b0 [ 1 ] ; tmp_m0 [ 2U ] =
rtB . crsv2a03b0 [ 2 ] ; tmp_m0 [ 3U ] = rtB . crsv2a03b0 [ 3 ] ; tmp_fv [ 1U
] = 4 ; tmp_m0 [ 4U ] = rtB . jrta0gtdwd [ 0 ] ; tmp_m0 [ 5U ] = rtB .
jrta0gtdwd [ 1 ] ; tmp_m0 [ 6U ] = rtB . jrta0gtdwd [ 2 ] ; tmp_m0 [ 7U ] =
rtB . jrta0gtdwd [ 3 ] ; tmp_m0 [ 8U ] = rtB . jrta0gtdwd [ 4 ] ; tmp_fv [ 2U
] = 9 ; simulationData -> mData -> mInputValues . mN = 9 ; simulationData ->
mData -> mInputValues . mX = & tmp_m0 [ 0U ] ; simulationData -> mData ->
mInputOffsets . mN = 3 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_fv [ 0U ] ; simulationData -> mData -> mOutputs . mN = 1 ; simulationData
-> mData -> mOutputs . mX = & rtB . pjx0kmxjmu ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulator = (
NeslSimulator * ) rtDW . de0spn04mt ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . c2oj5ebuij ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( simulator , NESL_SIM_OUTPUTS , simulationData ,
diagnosticManager ) ; if ( tmp_i != 0 ) { tmp_i =
rtw_diagnostics_message_count ( ) ; if ( tmp_i == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . o50nrjnd44 ; time_o = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_o ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 1 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . kmxvynb5xg ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = NULL ; tmp = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData
-> mIsMajorTimeStep = true ; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags .
solverAssertCheck == 1U ) ; simulationData -> mData -> mIsSolverAssertCheck =
tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; simulationData -> mData -> mIsComputingJacobian
= false ; tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData
-> mIsSolverRequestingReset = tmp ; tmp_nf [ 0U ] = 0 ; tmp_m4 [ 0U ] = rtB .
pjx0kmxjmu ; tmp_nf [ 1U ] = 1 ; tmp_m4 [ 1U ] = 0.0 ; tmp_nf [ 2U ] = 2 ;
tmp_m4 [ 2U ] = 0.0 ; tmp_nf [ 3U ] = 3 ; simulationData -> mData ->
mInputValues . mN = 3 ; simulationData -> mData -> mInputValues . mX = &
tmp_m4 [ 0U ] ; simulationData -> mData -> mInputOffsets . mN = 4 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_nf [ 0U ] ;
simulationData -> mData -> mOutputs . mN = 4 ; simulationData -> mData ->
mOutputs . mX = & rtB . itv2k1nlsr [ 0U ] ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulator = (
NeslSimulator * ) rtDW . ndnwrahj5v ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . j4zuphpirj ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( simulator , NESL_SIM_OUTPUTS , simulationData ,
diagnosticManager ) ; if ( tmp_i != 0 ) { tmp_i =
rtw_diagnostics_message_count ( ) ; if ( tmp_i == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . gksf2y3xqu ; time_dz =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_dz ; simulationData -> mData -> mContStates .
mN = 0 ; simulationData -> mData -> mContStates . mX = NULL ; simulationData
-> mData -> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates .
mX = NULL ; simulationData -> mData -> mModeVector . mN = 0 ; simulationData
-> mData -> mModeVector . mX = NULL ; tmp = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData -> mData
-> mFoundZcEvents = tmp ; simulationData -> mData -> mIsMajorTimeStep = true
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; simulationData -> mData -> mIsComputingJacobian
= false ; tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData
-> mIsSolverRequestingReset = tmp ; tmp_b0 [ 0U ] = 0 ; tmp_mi [ 0U ] = rtB .
mopdhxqse4 [ 0 ] ; tmp_mi [ 1U ] = rtB . mopdhxqse4 [ 1 ] ; tmp_mi [ 2U ] =
rtB . mopdhxqse4 [ 2 ] ; tmp_mi [ 3U ] = rtB . mopdhxqse4 [ 3 ] ; tmp_b0 [ 1U
] = 4 ; tmp_mi [ 4U ] = rtB . jjfsxd2pht [ 0 ] ; tmp_mi [ 5U ] = rtB .
jjfsxd2pht [ 1 ] ; tmp_mi [ 6U ] = rtB . jjfsxd2pht [ 2 ] ; tmp_mi [ 7U ] =
rtB . jjfsxd2pht [ 3 ] ; tmp_mi [ 8U ] = rtB . jjfsxd2pht [ 4 ] ; tmp_b0 [ 2U
] = 9 ; simulationData -> mData -> mInputValues . mN = 9 ; simulationData ->
mData -> mInputValues . mX = & tmp_mi [ 0U ] ; simulationData -> mData ->
mInputOffsets . mN = 3 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_b0 [ 0U ] ; simulationData -> mData -> mOutputs . mN = 1 ; simulationData
-> mData -> mOutputs . mX = & rtB . jpvxooq51q ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulator = (
NeslSimulator * ) rtDW . nviurbkyfu ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . nyzomkvmej ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( simulator , NESL_SIM_OUTPUTS , simulationData ,
diagnosticManager ) ; if ( tmp_i != 0 ) { tmp_i =
rtw_diagnostics_message_count ( ) ; if ( tmp_i == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . dntzyn5tmg ; time_fs =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_fs ; simulationData -> mData -> mContStates .
mN = 0 ; simulationData -> mData -> mContStates . mX = NULL ; simulationData
-> mData -> mDiscStates . mN = 1 ; simulationData -> mData -> mDiscStates .
mX = & rtDW . lqg4ib442l ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = NULL ; tmp = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData
-> mIsMajorTimeStep = true ; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags .
solverAssertCheck == 1U ) ; simulationData -> mData -> mIsSolverAssertCheck =
tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; simulationData -> mData -> mIsComputingJacobian
= false ; tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData
-> mIsSolverRequestingReset = tmp ; tmp_gw [ 0U ] = 0 ; tmp_cc [ 0U ] = rtB .
jpvxooq51q ; tmp_gw [ 1U ] = 1 ; tmp_cc [ 1U ] = 0.0 ; tmp_gw [ 2U ] = 2 ;
tmp_cc [ 2U ] = 0.0 ; tmp_gw [ 3U ] = 3 ; simulationData -> mData ->
mInputValues . mN = 3 ; simulationData -> mData -> mInputValues . mX = &
tmp_cc [ 0U ] ; simulationData -> mData -> mInputOffsets . mN = 4 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_gw [ 0U ] ;
simulationData -> mData -> mOutputs . mN = 4 ; simulationData -> mData ->
mOutputs . mX = & rtB . euf53gdk1f [ 0U ] ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulator = (
NeslSimulator * ) rtDW . j5smstjan3 ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . pinay1nrr3 ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( simulator , NESL_SIM_OUTPUTS , simulationData ,
diagnosticManager ) ; if ( tmp_i != 0 ) { tmp_i =
rtw_diagnostics_message_count ( ) ; if ( tmp_i == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . atpqvqjfs5 ; time_ck =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_ck ; simulationData -> mData -> mContStates .
mN = 0 ; simulationData -> mData -> mContStates . mX = NULL ; simulationData
-> mData -> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates .
mX = NULL ; simulationData -> mData -> mModeVector . mN = 0 ; simulationData
-> mData -> mModeVector . mX = NULL ; tmp = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData -> mData
-> mFoundZcEvents = tmp ; simulationData -> mData -> mIsMajorTimeStep = true
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; simulationData -> mData -> mIsComputingJacobian
= false ; tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData
-> mIsSolverRequestingReset = tmp ; tmp_kv [ 0U ] = 0 ; tmp_iz [ 0U ] = rtB .
ioszdbstmn [ 0 ] ; tmp_iz [ 1U ] = rtB . ioszdbstmn [ 1 ] ; tmp_iz [ 2U ] =
rtB . ioszdbstmn [ 2 ] ; tmp_iz [ 3U ] = rtB . ioszdbstmn [ 3 ] ; tmp_kv [ 1U
] = 4 ; tmp_iz [ 4U ] = rtB . itv2k1nlsr [ 0 ] ; tmp_iz [ 5U ] = rtB .
itv2k1nlsr [ 1 ] ; tmp_iz [ 6U ] = rtB . itv2k1nlsr [ 2 ] ; tmp_iz [ 7U ] =
rtB . itv2k1nlsr [ 3 ] ; tmp_kv [ 2U ] = 8 ; tmp_iz [ 8U ] = rtB . euf53gdk1f
[ 0 ] ; tmp_iz [ 9U ] = rtB . euf53gdk1f [ 1 ] ; tmp_iz [ 10U ] = rtB .
euf53gdk1f [ 2 ] ; tmp_iz [ 11U ] = rtB . euf53gdk1f [ 3 ] ; tmp_kv [ 3U ] =
12 ; tmp_iz [ 12U ] = rtB . hay0z4ydom [ 0 ] ; tmp_iz [ 13U ] = rtB .
hay0z4ydom [ 1 ] ; tmp_iz [ 14U ] = rtB . hay0z4ydom [ 2 ] ; tmp_iz [ 15U ] =
rtB . hay0z4ydom [ 3 ] ; tmp_iz [ 16U ] = rtB . hay0z4ydom [ 4 ] ; tmp_iz [
17U ] = rtB . hay0z4ydom [ 5 ] ; tmp_iz [ 18U ] = rtB . hay0z4ydom [ 6 ] ;
tmp_kv [ 4U ] = 19 ; simulationData -> mData -> mInputValues . mN = 19 ;
simulationData -> mData -> mInputValues . mX = & tmp_iz [ 0U ] ;
simulationData -> mData -> mInputOffsets . mN = 5 ; simulationData -> mData
-> mInputOffsets . mX = & tmp_kv [ 0U ] ; simulationData -> mData -> mOutputs
. mN = 0 ; simulationData -> mData -> mOutputs . mX = NULL ; simulationData
-> mData -> mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits .
mX = NULL ; simulationData -> mData -> mIsFundamentalSampleHit = false ;
simulator = ( NeslSimulator * ) rtDW . jxk3l5lam0 ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . ac2uu54gd3 ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( simulator , NESL_SIM_OUTPUTS , simulationData ,
diagnosticManager ) ; if ( tmp_i != 0 ) { tmp_i =
rtw_diagnostics_message_count ( ) ; if ( tmp_i == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
UNUSED_PARAMETER ( tid ) ; } void MdlUpdate ( int_T tid ) {
NeslSimulationData * simulationData ; real_T time ; boolean_T tmp ; real_T
tmp_p [ 4 ] ; int_T tmp_e [ 2 ] ; NeslSimulator * simulator ;
NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree * diagnosticTree
; int32_T tmp_i ; char * msg ; NeslSimulationData * simulationData_p ; real_T
time_p ; real_T tmp_m [ 4 ] ; int_T tmp_g [ 2 ] ; NeslSimulator * simulator_p
; NeuDiagnosticManager * diagnosticManager_p ; NeuDiagnosticTree *
diagnosticTree_p ; char * msg_p ; NeslSimulationData * simulationData_e ;
real_T time_e ; real_T tmp_j [ 4 ] ; int_T tmp_f [ 2 ] ; NeslSimulator *
simulator_e ; NeuDiagnosticManager * diagnosticManager_e ; NeuDiagnosticTree
* diagnosticTree_e ; char * msg_e ; simulationData = ( NeslSimulationData * )
rtDW . gcums0dzz2 ; time = ssGetT ( rtS ) ; simulationData -> mData -> mTime
. mN = 1 ; simulationData -> mData -> mTime . mX = & time ; simulationData ->
mData -> mContStates . mN = 1 ; simulationData -> mData -> mContStates . mX =
& rtX . ml5rpxbc10 ; simulationData -> mData -> mDiscStates . mN = 0 ;
simulationData -> mData -> mDiscStates . mX = NULL ; simulationData -> mData
-> mModeVector . mN = 4 ; simulationData -> mData -> mModeVector . mX = (
int32_T * ) & rtDW . alrqayrcnu ; tmp = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData -> mData
-> mFoundZcEvents = tmp ; simulationData -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags .
solverAssertCheck == 1U ) ; simulationData -> mData -> mIsSolverAssertCheck =
tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; tmp =
ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_e [ 0U ] = 0 ; tmp_p [ 0U ] = rtB .
kcfetpaoaj [ 0 ] ; tmp_p [ 1U ] = rtB . kcfetpaoaj [ 1 ] ; tmp_p [ 2U ] = rtB
. kcfetpaoaj [ 2 ] ; tmp_p [ 3U ] = rtB . kcfetpaoaj [ 3 ] ; tmp_e [ 1U ] = 4
; simulationData -> mData -> mInputValues . mN = 4 ; simulationData -> mData
-> mInputValues . mX = & tmp_p [ 0U ] ; simulationData -> mData ->
mInputOffsets . mN = 2 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_e [ 0U ] ; simulator = ( NeslSimulator * ) rtDW . nyiiqtb3pj ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . lhf2yly352 ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = ne_simulator_method ( simulator , NESL_SIM_UPDATE ,
simulationData , diagnosticManager ) ; if ( tmp_i != 0 ) { tmp_i =
rtw_diagnostics_message_count ( ) ; if ( tmp_i == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData_p = ( NeslSimulationData * ) rtDW . f4ygo2hyze ; time_p =
ssGetT ( rtS ) ; simulationData_p -> mData -> mTime . mN = 1 ;
simulationData_p -> mData -> mTime . mX = & time_p ; simulationData_p ->
mData -> mContStates . mN = 1 ; simulationData_p -> mData -> mContStates . mX
= & rtX . pgig0w5z22 ; simulationData_p -> mData -> mDiscStates . mN = 0 ;
simulationData_p -> mData -> mDiscStates . mX = NULL ; simulationData_p ->
mData -> mModeVector . mN = 4 ; simulationData_p -> mData -> mModeVector . mX
= ( int32_T * ) & rtDW . dhe2ccms01 ; tmp = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData_p -> mData
-> mFoundZcEvents = tmp ; simulationData_p -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags .
solverAssertCheck == 1U ) ; simulationData_p -> mData -> mIsSolverAssertCheck
= tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ; simulationData_p -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData_p -> mData -> mIsComputingJacobian = tmp ; tmp =
ssIsSolverRequestingReset ( rtS ) ; simulationData_p -> mData ->
mIsSolverRequestingReset = tmp ; tmp_g [ 0U ] = 0 ; tmp_m [ 0U ] = rtB .
mopdhxqse4 [ 0 ] ; tmp_m [ 1U ] = rtB . mopdhxqse4 [ 1 ] ; tmp_m [ 2U ] = rtB
. mopdhxqse4 [ 2 ] ; tmp_m [ 3U ] = rtB . mopdhxqse4 [ 3 ] ; tmp_g [ 1U ] = 4
; simulationData_p -> mData -> mInputValues . mN = 4 ; simulationData_p ->
mData -> mInputValues . mX = & tmp_m [ 0U ] ; simulationData_p -> mData ->
mInputOffsets . mN = 2 ; simulationData_p -> mData -> mInputOffsets . mX = &
tmp_g [ 0U ] ; simulator_p = ( NeslSimulator * ) rtDW . ku2cbhbb3u ;
diagnosticManager_p = ( NeuDiagnosticManager * ) rtDW . g3mxxyfx5h ;
diagnosticTree_p = neu_diagnostic_manager_get_initial_tree (
diagnosticManager_p ) ; tmp_i = ne_simulator_method ( simulator_p ,
NESL_SIM_UPDATE , simulationData_p , diagnosticManager_p ) ; if ( tmp_i != 0
) { tmp_i = rtw_diagnostics_message_count ( ) ; if ( tmp_i == 0 ) { msg_p =
rtw_diagnostics_msg ( diagnosticTree_p ) ; ssSetErrorStatus ( rtS , msg_p ) ;
} } simulationData_e = ( NeslSimulationData * ) rtDW . j3w0jjg10i ; time_e =
ssGetT ( rtS ) ; simulationData_e -> mData -> mTime . mN = 1 ;
simulationData_e -> mData -> mTime . mX = & time_e ; simulationData_e ->
mData -> mContStates . mN = 1 ; simulationData_e -> mData -> mContStates . mX
= & rtX . clcp24atwn ; simulationData_e -> mData -> mDiscStates . mN = 0 ;
simulationData_e -> mData -> mDiscStates . mX = NULL ; simulationData_e ->
mData -> mModeVector . mN = 4 ; simulationData_e -> mData -> mModeVector . mX
= ( int32_T * ) & rtDW . pfel4n10vu ; tmp = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData_e -> mData
-> mFoundZcEvents = tmp ; simulationData_e -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags .
solverAssertCheck == 1U ) ; simulationData_e -> mData -> mIsSolverAssertCheck
= tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ; simulationData_e -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData_e -> mData -> mIsComputingJacobian = tmp ; tmp =
ssIsSolverRequestingReset ( rtS ) ; simulationData_e -> mData ->
mIsSolverRequestingReset = tmp ; tmp_f [ 0U ] = 0 ; tmp_j [ 0U ] = rtB .
crsv2a03b0 [ 0 ] ; tmp_j [ 1U ] = rtB . crsv2a03b0 [ 1 ] ; tmp_j [ 2U ] = rtB
. crsv2a03b0 [ 2 ] ; tmp_j [ 3U ] = rtB . crsv2a03b0 [ 3 ] ; tmp_f [ 1U ] = 4
; simulationData_e -> mData -> mInputValues . mN = 4 ; simulationData_e ->
mData -> mInputValues . mX = & tmp_j [ 0U ] ; simulationData_e -> mData ->
mInputOffsets . mN = 2 ; simulationData_e -> mData -> mInputOffsets . mX = &
tmp_f [ 0U ] ; simulator_e = ( NeslSimulator * ) rtDW . avoetnry4f ;
diagnosticManager_e = ( NeuDiagnosticManager * ) rtDW . nzmye2eqv0 ;
diagnosticTree_e = neu_diagnostic_manager_get_initial_tree (
diagnosticManager_e ) ; tmp_i = ne_simulator_method ( simulator_e ,
NESL_SIM_UPDATE , simulationData_e , diagnosticManager_e ) ; if ( tmp_i != 0
) { tmp_i = rtw_diagnostics_message_count ( ) ; if ( tmp_i == 0 ) { msg_e =
rtw_diagnostics_msg ( diagnosticTree_e ) ; ssSetErrorStatus ( rtS , msg_e ) ;
} } UNUSED_PARAMETER ( tid ) ; } void MdlDerivatives ( void ) {
NeslSimulationData * simulationData ; real_T time ; boolean_T tmp ; real_T
tmp_p [ 12 ] ; int_T tmp_e [ 4 ] ; NeslSimulator * simulator ;
NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree * diagnosticTree
; int32_T tmp_i ; char * msg ; NeslSimulationData * simulationData_p ; real_T
time_p ; real_T tmp_m [ 3 ] ; int_T tmp_g [ 4 ] ; NeslSimulator * simulator_p
; NeuDiagnosticManager * diagnosticManager_p ; NeuDiagnosticTree *
diagnosticTree_p ; char * msg_p ; NeslSimulationData * simulationData_e ;
real_T time_e ; real_T tmp_j [ 4 ] ; int_T tmp_f [ 2 ] ; NeslSimulator *
simulator_e ; NeuDiagnosticManager * diagnosticManager_e ; NeuDiagnosticTree
* diagnosticTree_e ; char * msg_e ; NeslSimulationData * simulationData_i ;
real_T time_i ; real_T tmp_c [ 3 ] ; int_T tmp_k [ 4 ] ; NeslSimulator *
simulator_i ; NeuDiagnosticManager * diagnosticManager_i ; NeuDiagnosticTree
* diagnosticTree_i ; char * msg_i ; NeslSimulationData * simulationData_m ;
real_T time_m ; real_T tmp_b [ 4 ] ; int_T tmp_n [ 2 ] ; NeslSimulator *
simulator_m ; NeuDiagnosticManager * diagnosticManager_m ; NeuDiagnosticTree
* diagnosticTree_m ; char * msg_m ; NeslSimulationData * simulationData_g ;
real_T time_g ; real_T tmp_l [ 3 ] ; int_T tmp_d [ 4 ] ; NeslSimulator *
simulator_g ; NeuDiagnosticManager * diagnosticManager_g ; NeuDiagnosticTree
* diagnosticTree_g ; char * msg_g ; NeslSimulationData * simulationData_j ;
real_T time_j ; real_T tmp_o [ 4 ] ; int_T tmp_dz [ 2 ] ; NeslSimulator *
simulator_j ; NeuDiagnosticManager * diagnosticManager_j ; NeuDiagnosticTree
* diagnosticTree_j ; char * msg_j ; XDot * _rtXdot ; _rtXdot = ( ( XDot * )
ssGetdX ( rtS ) ) ; simulationData = ( NeslSimulationData * ) rtDW .
piiowhvoq3 ; time = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN =
1 ; simulationData -> mData -> mTime . mX = & time ; simulationData -> mData
-> mContStates . mN = 7 ; simulationData -> mData -> mContStates . mX = (
real_T * ) & rtX . cjklakdih0 ; simulationData -> mData -> mDiscStates . mN =
0 ; simulationData -> mData -> mDiscStates . mX = NULL ; simulationData ->
mData -> mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX =
NULL ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) ->
foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents = tmp ;
simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp
= ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; tmp =
ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_e [ 0U ] = 0 ; tmp_p [ 0U ] = rtB .
ioszdbstmn [ 0 ] ; tmp_p [ 1U ] = rtB . ioszdbstmn [ 1 ] ; tmp_p [ 2U ] = rtB
. ioszdbstmn [ 2 ] ; tmp_p [ 3U ] = rtB . ioszdbstmn [ 3 ] ; tmp_e [ 1U ] = 4
; tmp_p [ 4U ] = rtB . itv2k1nlsr [ 0 ] ; tmp_p [ 5U ] = rtB . itv2k1nlsr [ 1
] ; tmp_p [ 6U ] = rtB . itv2k1nlsr [ 2 ] ; tmp_p [ 7U ] = rtB . itv2k1nlsr [
3 ] ; tmp_e [ 2U ] = 8 ; tmp_p [ 8U ] = rtB . euf53gdk1f [ 0 ] ; tmp_p [ 9U ]
= rtB . euf53gdk1f [ 1 ] ; tmp_p [ 10U ] = rtB . euf53gdk1f [ 2 ] ; tmp_p [
11U ] = rtB . euf53gdk1f [ 3 ] ; tmp_e [ 3U ] = 12 ; simulationData -> mData
-> mInputValues . mN = 12 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0U ] ; simulationData -> mData -> mInputOffsets . mN = 4 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0U ] ;
simulationData -> mData -> mDx . mN = 7 ; simulationData -> mData -> mDx . mX
= ( real_T * ) & _rtXdot -> cjklakdih0 ; simulator = ( NeslSimulator * ) rtDW
. oh2nksyqvj ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW .
n0nnoz5d3k ; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp_i = ne_simulator_method ( simulator ,
NESL_SIM_DERIVATIVES , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp_i = rtw_diagnostics_message_count ( ) ; if ( tmp_i == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData_p = ( NeslSimulationData * ) rtDW . gkm0s0ctrk ; time_p =
ssGetT ( rtS ) ; simulationData_p -> mData -> mTime . mN = 1 ;
simulationData_p -> mData -> mTime . mX = & time_p ; simulationData_p ->
mData -> mContStates . mN = 1 ; simulationData_p -> mData -> mContStates . mX
= & rtX . c150l3qmxn ; simulationData_p -> mData -> mDiscStates . mN = 1 ;
simulationData_p -> mData -> mDiscStates . mX = & rtDW . mxwpzq1ids ;
simulationData_p -> mData -> mModeVector . mN = 0 ; simulationData_p -> mData
-> mModeVector . mX = NULL ; tmp = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData_p -> mData
-> mFoundZcEvents = tmp ; simulationData_p -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags .
solverAssertCheck == 1U ) ; simulationData_p -> mData -> mIsSolverAssertCheck
= tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ; simulationData_p -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData_p -> mData -> mIsComputingJacobian = tmp ; tmp =
ssIsSolverRequestingReset ( rtS ) ; simulationData_p -> mData ->
mIsSolverRequestingReset = tmp ; tmp_g [ 0U ] = 0 ; tmp_m [ 0U ] = rtB .
l2jfs00ccy [ 4 ] ; tmp_g [ 1U ] = 1 ; tmp_m [ 1U ] = 0.0 ; tmp_g [ 2U ] = 2 ;
tmp_m [ 2U ] = 0.0 ; tmp_g [ 3U ] = 3 ; simulationData_p -> mData ->
mInputValues . mN = 3 ; simulationData_p -> mData -> mInputValues . mX = &
tmp_m [ 0U ] ; simulationData_p -> mData -> mInputOffsets . mN = 4 ;
simulationData_p -> mData -> mInputOffsets . mX = & tmp_g [ 0U ] ;
simulationData_p -> mData -> mDx . mN = 1 ; simulationData_p -> mData -> mDx
. mX = & _rtXdot -> c150l3qmxn ; simulator_p = ( NeslSimulator * ) rtDW .
flmlbqbmbh ; diagnosticManager_p = ( NeuDiagnosticManager * ) rtDW .
iob4nznmac ; diagnosticTree_p = neu_diagnostic_manager_get_initial_tree (
diagnosticManager_p ) ; tmp_i = ne_simulator_method ( simulator_p ,
NESL_SIM_DERIVATIVES , simulationData_p , diagnosticManager_p ) ; if ( tmp_i
!= 0 ) { tmp_i = rtw_diagnostics_message_count ( ) ; if ( tmp_i == 0 ) {
msg_p = rtw_diagnostics_msg ( diagnosticTree_p ) ; ssSetErrorStatus ( rtS ,
msg_p ) ; } } simulationData_e = ( NeslSimulationData * ) rtDW . gcums0dzz2 ;
time_e = ssGetT ( rtS ) ; simulationData_e -> mData -> mTime . mN = 1 ;
simulationData_e -> mData -> mTime . mX = & time_e ; simulationData_e ->
mData -> mContStates . mN = 1 ; simulationData_e -> mData -> mContStates . mX
= & rtX . ml5rpxbc10 ; simulationData_e -> mData -> mDiscStates . mN = 0 ;
simulationData_e -> mData -> mDiscStates . mX = NULL ; simulationData_e ->
mData -> mModeVector . mN = 4 ; simulationData_e -> mData -> mModeVector . mX
= ( int32_T * ) & rtDW . alrqayrcnu ; tmp = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData_e -> mData
-> mFoundZcEvents = tmp ; simulationData_e -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags .
solverAssertCheck == 1U ) ; simulationData_e -> mData -> mIsSolverAssertCheck
= tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ; simulationData_e -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData_e -> mData -> mIsComputingJacobian = tmp ; tmp =
ssIsSolverRequestingReset ( rtS ) ; simulationData_e -> mData ->
mIsSolverRequestingReset = tmp ; tmp_f [ 0U ] = 0 ; tmp_j [ 0U ] = rtB .
kcfetpaoaj [ 0 ] ; tmp_j [ 1U ] = rtB . kcfetpaoaj [ 1 ] ; tmp_j [ 2U ] = rtB
. kcfetpaoaj [ 2 ] ; tmp_j [ 3U ] = rtB . kcfetpaoaj [ 3 ] ; tmp_f [ 1U ] = 4
; simulationData_e -> mData -> mInputValues . mN = 4 ; simulationData_e ->
mData -> mInputValues . mX = & tmp_j [ 0U ] ; simulationData_e -> mData ->
mInputOffsets . mN = 2 ; simulationData_e -> mData -> mInputOffsets . mX = &
tmp_f [ 0U ] ; simulationData_e -> mData -> mDx . mN = 1 ; simulationData_e
-> mData -> mDx . mX = & _rtXdot -> ml5rpxbc10 ; simulator_e = (
NeslSimulator * ) rtDW . nyiiqtb3pj ; diagnosticManager_e = (
NeuDiagnosticManager * ) rtDW . lhf2yly352 ; diagnosticTree_e =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager_e ) ; tmp_i =
ne_simulator_method ( simulator_e , NESL_SIM_DERIVATIVES , simulationData_e ,
diagnosticManager_e ) ; if ( tmp_i != 0 ) { tmp_i =
rtw_diagnostics_message_count ( ) ; if ( tmp_i == 0 ) { msg_e =
rtw_diagnostics_msg ( diagnosticTree_e ) ; ssSetErrorStatus ( rtS , msg_e ) ;
} } simulationData_i = ( NeslSimulationData * ) rtDW . evijjolyva ; time_i =
ssGetT ( rtS ) ; simulationData_i -> mData -> mTime . mN = 1 ;
simulationData_i -> mData -> mTime . mX = & time_i ; simulationData_i ->
mData -> mContStates . mN = 1 ; simulationData_i -> mData -> mContStates . mX
= & rtX . m2txpyziu4 ; simulationData_i -> mData -> mDiscStates . mN = 1 ;
simulationData_i -> mData -> mDiscStates . mX = & rtDW . citycn5tuj ;
simulationData_i -> mData -> mModeVector . mN = 0 ; simulationData_i -> mData
-> mModeVector . mX = NULL ; tmp = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData_i -> mData
-> mFoundZcEvents = tmp ; simulationData_i -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags .
solverAssertCheck == 1U ) ; simulationData_i -> mData -> mIsSolverAssertCheck
= tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ; simulationData_i -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData_i -> mData -> mIsComputingJacobian = tmp ; tmp =
ssIsSolverRequestingReset ( rtS ) ; simulationData_i -> mData ->
mIsSolverRequestingReset = tmp ; tmp_k [ 0U ] = 0 ; tmp_c [ 0U ] = rtB .
l2jfs00ccy [ 6 ] ; tmp_k [ 1U ] = 1 ; tmp_c [ 1U ] = 0.0 ; tmp_k [ 2U ] = 2 ;
tmp_c [ 2U ] = 0.0 ; tmp_k [ 3U ] = 3 ; simulationData_i -> mData ->
mInputValues . mN = 3 ; simulationData_i -> mData -> mInputValues . mX = &
tmp_c [ 0U ] ; simulationData_i -> mData -> mInputOffsets . mN = 4 ;
simulationData_i -> mData -> mInputOffsets . mX = & tmp_k [ 0U ] ;
simulationData_i -> mData -> mDx . mN = 1 ; simulationData_i -> mData -> mDx
. mX = & _rtXdot -> m2txpyziu4 ; simulator_i = ( NeslSimulator * ) rtDW .
jjazmhpwwr ; diagnosticManager_i = ( NeuDiagnosticManager * ) rtDW .
pxp5ilgmi3 ; diagnosticTree_i = neu_diagnostic_manager_get_initial_tree (
diagnosticManager_i ) ; tmp_i = ne_simulator_method ( simulator_i ,
NESL_SIM_DERIVATIVES , simulationData_i , diagnosticManager_i ) ; if ( tmp_i
!= 0 ) { tmp_i = rtw_diagnostics_message_count ( ) ; if ( tmp_i == 0 ) {
msg_i = rtw_diagnostics_msg ( diagnosticTree_i ) ; ssSetErrorStatus ( rtS ,
msg_i ) ; } } simulationData_m = ( NeslSimulationData * ) rtDW . f4ygo2hyze ;
time_m = ssGetT ( rtS ) ; simulationData_m -> mData -> mTime . mN = 1 ;
simulationData_m -> mData -> mTime . mX = & time_m ; simulationData_m ->
mData -> mContStates . mN = 1 ; simulationData_m -> mData -> mContStates . mX
= & rtX . pgig0w5z22 ; simulationData_m -> mData -> mDiscStates . mN = 0 ;
simulationData_m -> mData -> mDiscStates . mX = NULL ; simulationData_m ->
mData -> mModeVector . mN = 4 ; simulationData_m -> mData -> mModeVector . mX
= ( int32_T * ) & rtDW . dhe2ccms01 ; tmp = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData_m -> mData
-> mFoundZcEvents = tmp ; simulationData_m -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags .
solverAssertCheck == 1U ) ; simulationData_m -> mData -> mIsSolverAssertCheck
= tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ; simulationData_m -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData_m -> mData -> mIsComputingJacobian = tmp ; tmp =
ssIsSolverRequestingReset ( rtS ) ; simulationData_m -> mData ->
mIsSolverRequestingReset = tmp ; tmp_n [ 0U ] = 0 ; tmp_b [ 0U ] = rtB .
mopdhxqse4 [ 0 ] ; tmp_b [ 1U ] = rtB . mopdhxqse4 [ 1 ] ; tmp_b [ 2U ] = rtB
. mopdhxqse4 [ 2 ] ; tmp_b [ 3U ] = rtB . mopdhxqse4 [ 3 ] ; tmp_n [ 1U ] = 4
; simulationData_m -> mData -> mInputValues . mN = 4 ; simulationData_m ->
mData -> mInputValues . mX = & tmp_b [ 0U ] ; simulationData_m -> mData ->
mInputOffsets . mN = 2 ; simulationData_m -> mData -> mInputOffsets . mX = &
tmp_n [ 0U ] ; simulationData_m -> mData -> mDx . mN = 1 ; simulationData_m
-> mData -> mDx . mX = & _rtXdot -> pgig0w5z22 ; simulator_m = (
NeslSimulator * ) rtDW . ku2cbhbb3u ; diagnosticManager_m = (
NeuDiagnosticManager * ) rtDW . g3mxxyfx5h ; diagnosticTree_m =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager_m ) ; tmp_i =
ne_simulator_method ( simulator_m , NESL_SIM_DERIVATIVES , simulationData_m ,
diagnosticManager_m ) ; if ( tmp_i != 0 ) { tmp_i =
rtw_diagnostics_message_count ( ) ; if ( tmp_i == 0 ) { msg_m =
rtw_diagnostics_msg ( diagnosticTree_m ) ; ssSetErrorStatus ( rtS , msg_m ) ;
} } simulationData_g = ( NeslSimulationData * ) rtDW . jstvsrdxec ; time_g =
ssGetT ( rtS ) ; simulationData_g -> mData -> mTime . mN = 1 ;
simulationData_g -> mData -> mTime . mX = & time_g ; simulationData_g ->
mData -> mContStates . mN = 1 ; simulationData_g -> mData -> mContStates . mX
= & rtX . h15fzyy0rm ; simulationData_g -> mData -> mDiscStates . mN = 1 ;
simulationData_g -> mData -> mDiscStates . mX = & rtDW . g0ybx5ny0s ;
simulationData_g -> mData -> mModeVector . mN = 0 ; simulationData_g -> mData
-> mModeVector . mX = NULL ; tmp = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData_g -> mData
-> mFoundZcEvents = tmp ; simulationData_g -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags .
solverAssertCheck == 1U ) ; simulationData_g -> mData -> mIsSolverAssertCheck
= tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ; simulationData_g -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData_g -> mData -> mIsComputingJacobian = tmp ; tmp =
ssIsSolverRequestingReset ( rtS ) ; simulationData_g -> mData ->
mIsSolverRequestingReset = tmp ; tmp_d [ 0U ] = 0 ; tmp_l [ 0U ] = rtB .
l2jfs00ccy [ 5 ] ; tmp_d [ 1U ] = 1 ; tmp_l [ 1U ] = 0.0 ; tmp_d [ 2U ] = 2 ;
tmp_l [ 2U ] = 0.0 ; tmp_d [ 3U ] = 3 ; simulationData_g -> mData ->
mInputValues . mN = 3 ; simulationData_g -> mData -> mInputValues . mX = &
tmp_l [ 0U ] ; simulationData_g -> mData -> mInputOffsets . mN = 4 ;
simulationData_g -> mData -> mInputOffsets . mX = & tmp_d [ 0U ] ;
simulationData_g -> mData -> mDx . mN = 1 ; simulationData_g -> mData -> mDx
. mX = & _rtXdot -> h15fzyy0rm ; simulator_g = ( NeslSimulator * ) rtDW .
kswjmadgur ; diagnosticManager_g = ( NeuDiagnosticManager * ) rtDW .
bwrk1jrfjh ; diagnosticTree_g = neu_diagnostic_manager_get_initial_tree (
diagnosticManager_g ) ; tmp_i = ne_simulator_method ( simulator_g ,
NESL_SIM_DERIVATIVES , simulationData_g , diagnosticManager_g ) ; if ( tmp_i
!= 0 ) { tmp_i = rtw_diagnostics_message_count ( ) ; if ( tmp_i == 0 ) {
msg_g = rtw_diagnostics_msg ( diagnosticTree_g ) ; ssSetErrorStatus ( rtS ,
msg_g ) ; } } simulationData_j = ( NeslSimulationData * ) rtDW . j3w0jjg10i ;
time_j = ssGetT ( rtS ) ; simulationData_j -> mData -> mTime . mN = 1 ;
simulationData_j -> mData -> mTime . mX = & time_j ; simulationData_j ->
mData -> mContStates . mN = 1 ; simulationData_j -> mData -> mContStates . mX
= & rtX . clcp24atwn ; simulationData_j -> mData -> mDiscStates . mN = 0 ;
simulationData_j -> mData -> mDiscStates . mX = NULL ; simulationData_j ->
mData -> mModeVector . mN = 4 ; simulationData_j -> mData -> mModeVector . mX
= ( int32_T * ) & rtDW . pfel4n10vu ; tmp = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData_j -> mData
-> mFoundZcEvents = tmp ; simulationData_j -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags .
solverAssertCheck == 1U ) ; simulationData_j -> mData -> mIsSolverAssertCheck
= tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ; simulationData_j -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData_j -> mData -> mIsComputingJacobian = tmp ; tmp =
ssIsSolverRequestingReset ( rtS ) ; simulationData_j -> mData ->
mIsSolverRequestingReset = tmp ; tmp_dz [ 0U ] = 0 ; tmp_o [ 0U ] = rtB .
crsv2a03b0 [ 0 ] ; tmp_o [ 1U ] = rtB . crsv2a03b0 [ 1 ] ; tmp_o [ 2U ] = rtB
. crsv2a03b0 [ 2 ] ; tmp_o [ 3U ] = rtB . crsv2a03b0 [ 3 ] ; tmp_dz [ 1U ] =
4 ; simulationData_j -> mData -> mInputValues . mN = 4 ; simulationData_j ->
mData -> mInputValues . mX = & tmp_o [ 0U ] ; simulationData_j -> mData ->
mInputOffsets . mN = 2 ; simulationData_j -> mData -> mInputOffsets . mX = &
tmp_dz [ 0U ] ; simulationData_j -> mData -> mDx . mN = 1 ; simulationData_j
-> mData -> mDx . mX = & _rtXdot -> clcp24atwn ; simulator_j = (
NeslSimulator * ) rtDW . avoetnry4f ; diagnosticManager_j = (
NeuDiagnosticManager * ) rtDW . nzmye2eqv0 ; diagnosticTree_j =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager_j ) ; tmp_i =
ne_simulator_method ( simulator_j , NESL_SIM_DERIVATIVES , simulationData_j ,
diagnosticManager_j ) ; if ( tmp_i != 0 ) { tmp_i =
rtw_diagnostics_message_count ( ) ; if ( tmp_i == 0 ) { msg_j =
rtw_diagnostics_msg ( diagnosticTree_j ) ; ssSetErrorStatus ( rtS , msg_j ) ;
} } } void MdlProjection ( void ) { NeslSimulationData * simulationData ;
real_T time ; boolean_T tmp ; real_T tmp_p [ 12 ] ; int_T tmp_e [ 4 ] ;
NeslSimulator * simulator ; NeuDiagnosticManager * diagnosticManager ;
NeuDiagnosticTree * diagnosticTree ; int32_T tmp_i ; char * msg ;
NeslSimulationData * simulationData_p ; real_T time_p ; real_T tmp_m [ 4 ] ;
int_T tmp_g [ 2 ] ; NeslSimulator * simulator_p ; NeuDiagnosticManager *
diagnosticManager_p ; NeuDiagnosticTree * diagnosticTree_p ; char * msg_p ;
NeslSimulationData * simulationData_e ; real_T time_e ; real_T tmp_j [ 4 ] ;
int_T tmp_f [ 2 ] ; NeslSimulator * simulator_e ; NeuDiagnosticManager *
diagnosticManager_e ; NeuDiagnosticTree * diagnosticTree_e ; char * msg_e ;
NeslSimulationData * simulationData_i ; real_T time_i ; real_T tmp_c [ 4 ] ;
int_T tmp_k [ 2 ] ; NeslSimulator * simulator_i ; NeuDiagnosticManager *
diagnosticManager_i ; NeuDiagnosticTree * diagnosticTree_i ; char * msg_i ;
simulationData = ( NeslSimulationData * ) rtDW . piiowhvoq3 ; time = ssGetT (
rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time ; simulationData -> mData -> mContStates . mN = 7 ;
simulationData -> mData -> mContStates . mX = ( real_T * ) & rtX . cjklakdih0
; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = NULL ; simulationData -> mData -> mModeVector . mN = 0
; simulationData -> mData -> mModeVector . mX = NULL ; tmp = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData
-> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr (
rtS ) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; tmp =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = tmp ; tmp = ssIsSolverRequestingReset ( rtS ) ;
simulationData -> mData -> mIsSolverRequestingReset = tmp ; tmp_e [ 0U ] = 0
; tmp_p [ 0U ] = rtB . ioszdbstmn [ 0 ] ; tmp_p [ 1U ] = rtB . ioszdbstmn [ 1
] ; tmp_p [ 2U ] = rtB . ioszdbstmn [ 2 ] ; tmp_p [ 3U ] = rtB . ioszdbstmn [
3 ] ; tmp_e [ 1U ] = 4 ; tmp_p [ 4U ] = rtB . itv2k1nlsr [ 0 ] ; tmp_p [ 5U ]
= rtB . itv2k1nlsr [ 1 ] ; tmp_p [ 6U ] = rtB . itv2k1nlsr [ 2 ] ; tmp_p [ 7U
] = rtB . itv2k1nlsr [ 3 ] ; tmp_e [ 2U ] = 8 ; tmp_p [ 8U ] = rtB .
euf53gdk1f [ 0 ] ; tmp_p [ 9U ] = rtB . euf53gdk1f [ 1 ] ; tmp_p [ 10U ] =
rtB . euf53gdk1f [ 2 ] ; tmp_p [ 11U ] = rtB . euf53gdk1f [ 3 ] ; tmp_e [ 3U
] = 12 ; simulationData -> mData -> mInputValues . mN = 12 ; simulationData
-> mData -> mInputValues . mX = & tmp_p [ 0U ] ; simulationData -> mData ->
mInputOffsets . mN = 4 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_e [ 0U ] ; simulator = ( NeslSimulator * ) rtDW . oh2nksyqvj ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . n0nnoz5d3k ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = ne_simulator_method ( simulator , NESL_SIM_PROJECTION ,
simulationData , diagnosticManager ) ; if ( tmp_i != 0 ) { tmp_i =
rtw_diagnostics_message_count ( ) ; if ( tmp_i == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData_p = ( NeslSimulationData * ) rtDW . gcums0dzz2 ; time_p =
ssGetT ( rtS ) ; simulationData_p -> mData -> mTime . mN = 1 ;
simulationData_p -> mData -> mTime . mX = & time_p ; simulationData_p ->
mData -> mContStates . mN = 1 ; simulationData_p -> mData -> mContStates . mX
= & rtX . ml5rpxbc10 ; simulationData_p -> mData -> mDiscStates . mN = 0 ;
simulationData_p -> mData -> mDiscStates . mX = NULL ; simulationData_p ->
mData -> mModeVector . mN = 4 ; simulationData_p -> mData -> mModeVector . mX
= ( int32_T * ) & rtDW . alrqayrcnu ; tmp = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData_p -> mData
-> mFoundZcEvents = tmp ; simulationData_p -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags .
solverAssertCheck == 1U ) ; simulationData_p -> mData -> mIsSolverAssertCheck
= tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ; simulationData_p -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData_p -> mData -> mIsComputingJacobian = tmp ; tmp =
ssIsSolverRequestingReset ( rtS ) ; simulationData_p -> mData ->
mIsSolverRequestingReset = tmp ; tmp_g [ 0U ] = 0 ; tmp_m [ 0U ] = rtB .
kcfetpaoaj [ 0 ] ; tmp_m [ 1U ] = rtB . kcfetpaoaj [ 1 ] ; tmp_m [ 2U ] = rtB
. kcfetpaoaj [ 2 ] ; tmp_m [ 3U ] = rtB . kcfetpaoaj [ 3 ] ; tmp_g [ 1U ] = 4
; simulationData_p -> mData -> mInputValues . mN = 4 ; simulationData_p ->
mData -> mInputValues . mX = & tmp_m [ 0U ] ; simulationData_p -> mData ->
mInputOffsets . mN = 2 ; simulationData_p -> mData -> mInputOffsets . mX = &
tmp_g [ 0U ] ; simulator_p = ( NeslSimulator * ) rtDW . nyiiqtb3pj ;
diagnosticManager_p = ( NeuDiagnosticManager * ) rtDW . lhf2yly352 ;
diagnosticTree_p = neu_diagnostic_manager_get_initial_tree (
diagnosticManager_p ) ; tmp_i = ne_simulator_method ( simulator_p ,
NESL_SIM_PROJECTION , simulationData_p , diagnosticManager_p ) ; if ( tmp_i
!= 0 ) { tmp_i = rtw_diagnostics_message_count ( ) ; if ( tmp_i == 0 ) {
msg_p = rtw_diagnostics_msg ( diagnosticTree_p ) ; ssSetErrorStatus ( rtS ,
msg_p ) ; } } simulationData_e = ( NeslSimulationData * ) rtDW . f4ygo2hyze ;
time_e = ssGetT ( rtS ) ; simulationData_e -> mData -> mTime . mN = 1 ;
simulationData_e -> mData -> mTime . mX = & time_e ; simulationData_e ->
mData -> mContStates . mN = 1 ; simulationData_e -> mData -> mContStates . mX
= & rtX . pgig0w5z22 ; simulationData_e -> mData -> mDiscStates . mN = 0 ;
simulationData_e -> mData -> mDiscStates . mX = NULL ; simulationData_e ->
mData -> mModeVector . mN = 4 ; simulationData_e -> mData -> mModeVector . mX
= ( int32_T * ) & rtDW . dhe2ccms01 ; tmp = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData_e -> mData
-> mFoundZcEvents = tmp ; simulationData_e -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags .
solverAssertCheck == 1U ) ; simulationData_e -> mData -> mIsSolverAssertCheck
= tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ; simulationData_e -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData_e -> mData -> mIsComputingJacobian = tmp ; tmp =
ssIsSolverRequestingReset ( rtS ) ; simulationData_e -> mData ->
mIsSolverRequestingReset = tmp ; tmp_f [ 0U ] = 0 ; tmp_j [ 0U ] = rtB .
mopdhxqse4 [ 0 ] ; tmp_j [ 1U ] = rtB . mopdhxqse4 [ 1 ] ; tmp_j [ 2U ] = rtB
. mopdhxqse4 [ 2 ] ; tmp_j [ 3U ] = rtB . mopdhxqse4 [ 3 ] ; tmp_f [ 1U ] = 4
; simulationData_e -> mData -> mInputValues . mN = 4 ; simulationData_e ->
mData -> mInputValues . mX = & tmp_j [ 0U ] ; simulationData_e -> mData ->
mInputOffsets . mN = 2 ; simulationData_e -> mData -> mInputOffsets . mX = &
tmp_f [ 0U ] ; simulator_e = ( NeslSimulator * ) rtDW . ku2cbhbb3u ;
diagnosticManager_e = ( NeuDiagnosticManager * ) rtDW . g3mxxyfx5h ;
diagnosticTree_e = neu_diagnostic_manager_get_initial_tree (
diagnosticManager_e ) ; tmp_i = ne_simulator_method ( simulator_e ,
NESL_SIM_PROJECTION , simulationData_e , diagnosticManager_e ) ; if ( tmp_i
!= 0 ) { tmp_i = rtw_diagnostics_message_count ( ) ; if ( tmp_i == 0 ) {
msg_e = rtw_diagnostics_msg ( diagnosticTree_e ) ; ssSetErrorStatus ( rtS ,
msg_e ) ; } } simulationData_i = ( NeslSimulationData * ) rtDW . j3w0jjg10i ;
time_i = ssGetT ( rtS ) ; simulationData_i -> mData -> mTime . mN = 1 ;
simulationData_i -> mData -> mTime . mX = & time_i ; simulationData_i ->
mData -> mContStates . mN = 1 ; simulationData_i -> mData -> mContStates . mX
= & rtX . clcp24atwn ; simulationData_i -> mData -> mDiscStates . mN = 0 ;
simulationData_i -> mData -> mDiscStates . mX = NULL ; simulationData_i ->
mData -> mModeVector . mN = 4 ; simulationData_i -> mData -> mModeVector . mX
= ( int32_T * ) & rtDW . pfel4n10vu ; tmp = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData_i -> mData
-> mFoundZcEvents = tmp ; simulationData_i -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags .
solverAssertCheck == 1U ) ; simulationData_i -> mData -> mIsSolverAssertCheck
= tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ; simulationData_i -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData_i -> mData -> mIsComputingJacobian = tmp ; tmp =
ssIsSolverRequestingReset ( rtS ) ; simulationData_i -> mData ->
mIsSolverRequestingReset = tmp ; tmp_k [ 0U ] = 0 ; tmp_c [ 0U ] = rtB .
crsv2a03b0 [ 0 ] ; tmp_c [ 1U ] = rtB . crsv2a03b0 [ 1 ] ; tmp_c [ 2U ] = rtB
. crsv2a03b0 [ 2 ] ; tmp_c [ 3U ] = rtB . crsv2a03b0 [ 3 ] ; tmp_k [ 1U ] = 4
; simulationData_i -> mData -> mInputValues . mN = 4 ; simulationData_i ->
mData -> mInputValues . mX = & tmp_c [ 0U ] ; simulationData_i -> mData ->
mInputOffsets . mN = 2 ; simulationData_i -> mData -> mInputOffsets . mX = &
tmp_k [ 0U ] ; simulator_i = ( NeslSimulator * ) rtDW . avoetnry4f ;
diagnosticManager_i = ( NeuDiagnosticManager * ) rtDW . nzmye2eqv0 ;
diagnosticTree_i = neu_diagnostic_manager_get_initial_tree (
diagnosticManager_i ) ; tmp_i = ne_simulator_method ( simulator_i ,
NESL_SIM_PROJECTION , simulationData_i , diagnosticManager_i ) ; if ( tmp_i
!= 0 ) { tmp_i = rtw_diagnostics_message_count ( ) ; if ( tmp_i == 0 ) {
msg_i = rtw_diagnostics_msg ( diagnosticTree_i ) ; ssSetErrorStatus ( rtS ,
msg_i ) ; } } } void MdlZeroCrossings ( void ) { NeslSimulationData *
simulationData ; real_T time ; boolean_T tmp ; real_T tmp_p [ 4 ] ; int_T
tmp_e [ 2 ] ; NeslSimulator * simulator ; NeuDiagnosticManager *
diagnosticManager ; NeuDiagnosticTree * diagnosticTree ; int32_T tmp_i ; char
* msg ; NeslSimulationData * simulationData_p ; real_T time_p ; real_T tmp_m
[ 4 ] ; int_T tmp_g [ 2 ] ; NeslSimulator * simulator_p ;
NeuDiagnosticManager * diagnosticManager_p ; NeuDiagnosticTree *
diagnosticTree_p ; char * msg_p ; NeslSimulationData * simulationData_e ;
real_T time_e ; real_T tmp_j [ 4 ] ; int_T tmp_f [ 2 ] ; NeslSimulator *
simulator_e ; NeuDiagnosticManager * diagnosticManager_e ; NeuDiagnosticTree
* diagnosticTree_e ; char * msg_e ; ZCV * _rtZCSV ; _rtZCSV = ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) ; simulationData = ( NeslSimulationData *
) rtDW . gcums0dzz2 ; time = ssGetT ( rtS ) ; simulationData -> mData ->
mTime . mN = 1 ; simulationData -> mData -> mTime . mX = & time ;
simulationData -> mData -> mContStates . mN = 1 ; simulationData -> mData ->
mContStates . mX = & rtX . ml5rpxbc10 ; simulationData -> mData ->
mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = NULL ;
simulationData -> mData -> mModeVector . mN = 4 ; simulationData -> mData ->
mModeVector . mX = ( int32_T * ) & rtDW . alrqayrcnu ; tmp = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData
-> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr (
rtS ) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; tmp =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = tmp ; tmp = ssIsSolverRequestingReset ( rtS ) ;
simulationData -> mData -> mIsSolverRequestingReset = tmp ; tmp_e [ 0U ] = 0
; tmp_p [ 0U ] = rtB . kcfetpaoaj [ 0 ] ; tmp_p [ 1U ] = rtB . kcfetpaoaj [ 1
] ; tmp_p [ 2U ] = rtB . kcfetpaoaj [ 2 ] ; tmp_p [ 3U ] = rtB . kcfetpaoaj [
3 ] ; tmp_e [ 1U ] = 4 ; simulationData -> mData -> mInputValues . mN = 4 ;
simulationData -> mData -> mInputValues . mX = & tmp_p [ 0U ] ;
simulationData -> mData -> mInputOffsets . mN = 2 ; simulationData -> mData
-> mInputOffsets . mX = & tmp_e [ 0U ] ; simulationData -> mData ->
mNonSampledZCs . mN = 3 ; simulationData -> mData -> mNonSampledZCs . mX = &
_rtZCSV -> e2zlzat00e ; simulator = ( NeslSimulator * ) rtDW . nyiiqtb3pj ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . lhf2yly352 ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = ne_simulator_method ( simulator , NESL_SIM_ZEROCROSSINGS ,
simulationData , diagnosticManager ) ; if ( tmp_i != 0 ) { tmp_i =
rtw_diagnostics_message_count ( ) ; if ( tmp_i == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData_p = ( NeslSimulationData * ) rtDW . f4ygo2hyze ; time_p =
ssGetT ( rtS ) ; simulationData_p -> mData -> mTime . mN = 1 ;
simulationData_p -> mData -> mTime . mX = & time_p ; simulationData_p ->
mData -> mContStates . mN = 1 ; simulationData_p -> mData -> mContStates . mX
= & rtX . pgig0w5z22 ; simulationData_p -> mData -> mDiscStates . mN = 0 ;
simulationData_p -> mData -> mDiscStates . mX = NULL ; simulationData_p ->
mData -> mModeVector . mN = 4 ; simulationData_p -> mData -> mModeVector . mX
= ( int32_T * ) & rtDW . dhe2ccms01 ; tmp = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData_p -> mData
-> mFoundZcEvents = tmp ; simulationData_p -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags .
solverAssertCheck == 1U ) ; simulationData_p -> mData -> mIsSolverAssertCheck
= tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ; simulationData_p -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData_p -> mData -> mIsComputingJacobian = tmp ; tmp =
ssIsSolverRequestingReset ( rtS ) ; simulationData_p -> mData ->
mIsSolverRequestingReset = tmp ; tmp_g [ 0U ] = 0 ; tmp_m [ 0U ] = rtB .
mopdhxqse4 [ 0 ] ; tmp_m [ 1U ] = rtB . mopdhxqse4 [ 1 ] ; tmp_m [ 2U ] = rtB
. mopdhxqse4 [ 2 ] ; tmp_m [ 3U ] = rtB . mopdhxqse4 [ 3 ] ; tmp_g [ 1U ] = 4
; simulationData_p -> mData -> mInputValues . mN = 4 ; simulationData_p ->
mData -> mInputValues . mX = & tmp_m [ 0U ] ; simulationData_p -> mData ->
mInputOffsets . mN = 2 ; simulationData_p -> mData -> mInputOffsets . mX = &
tmp_g [ 0U ] ; simulationData_p -> mData -> mNonSampledZCs . mN = 3 ;
simulationData_p -> mData -> mNonSampledZCs . mX = & _rtZCSV -> kxvd0bfrwi ;
simulator_p = ( NeslSimulator * ) rtDW . ku2cbhbb3u ; diagnosticManager_p = (
NeuDiagnosticManager * ) rtDW . g3mxxyfx5h ; diagnosticTree_p =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager_p ) ; tmp_i =
ne_simulator_method ( simulator_p , NESL_SIM_ZEROCROSSINGS , simulationData_p
, diagnosticManager_p ) ; if ( tmp_i != 0 ) { tmp_i =
rtw_diagnostics_message_count ( ) ; if ( tmp_i == 0 ) { msg_p =
rtw_diagnostics_msg ( diagnosticTree_p ) ; ssSetErrorStatus ( rtS , msg_p ) ;
} } simulationData_e = ( NeslSimulationData * ) rtDW . j3w0jjg10i ; time_e =
ssGetT ( rtS ) ; simulationData_e -> mData -> mTime . mN = 1 ;
simulationData_e -> mData -> mTime . mX = & time_e ; simulationData_e ->
mData -> mContStates . mN = 1 ; simulationData_e -> mData -> mContStates . mX
= & rtX . clcp24atwn ; simulationData_e -> mData -> mDiscStates . mN = 0 ;
simulationData_e -> mData -> mDiscStates . mX = NULL ; simulationData_e ->
mData -> mModeVector . mN = 4 ; simulationData_e -> mData -> mModeVector . mX
= ( int32_T * ) & rtDW . pfel4n10vu ; tmp = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData_e -> mData
-> mFoundZcEvents = tmp ; simulationData_e -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags .
solverAssertCheck == 1U ) ; simulationData_e -> mData -> mIsSolverAssertCheck
= tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ; simulationData_e -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData_e -> mData -> mIsComputingJacobian = tmp ; tmp =
ssIsSolverRequestingReset ( rtS ) ; simulationData_e -> mData ->
mIsSolverRequestingReset = tmp ; tmp_f [ 0U ] = 0 ; tmp_j [ 0U ] = rtB .
crsv2a03b0 [ 0 ] ; tmp_j [ 1U ] = rtB . crsv2a03b0 [ 1 ] ; tmp_j [ 2U ] = rtB
. crsv2a03b0 [ 2 ] ; tmp_j [ 3U ] = rtB . crsv2a03b0 [ 3 ] ; tmp_f [ 1U ] = 4
; simulationData_e -> mData -> mInputValues . mN = 4 ; simulationData_e ->
mData -> mInputValues . mX = & tmp_j [ 0U ] ; simulationData_e -> mData ->
mInputOffsets . mN = 2 ; simulationData_e -> mData -> mInputOffsets . mX = &
tmp_f [ 0U ] ; simulationData_e -> mData -> mNonSampledZCs . mN = 3 ;
simulationData_e -> mData -> mNonSampledZCs . mX = & _rtZCSV -> drno5mkys3 ;
simulator_e = ( NeslSimulator * ) rtDW . avoetnry4f ; diagnosticManager_e = (
NeuDiagnosticManager * ) rtDW . nzmye2eqv0 ; diagnosticTree_e =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager_e ) ; tmp_i =
ne_simulator_method ( simulator_e , NESL_SIM_ZEROCROSSINGS , simulationData_e
, diagnosticManager_e ) ; if ( tmp_i != 0 ) { tmp_i =
rtw_diagnostics_message_count ( ) ; if ( tmp_i == 0 ) { msg_e =
rtw_diagnostics_msg ( diagnosticTree_e ) ; ssSetErrorStatus ( rtS , msg_e ) ;
} } } void MdlTerminate ( void ) { neu_destroy_diagnostic_manager ( (
NeuDiagnosticManager * ) rtDW . n0nnoz5d3k ) ; nesl_destroy_simulation_data (
( NeslSimulationData * ) rtDW . piiowhvoq3 ) ; nesl_erase_simulator (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration"
) ; neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW .
psaiktqsay ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW .
i4aru4d13y ) ; nesl_erase_simulator (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration"
) ; neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW .
iob4nznmac ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW .
gkm0s0ctrk ) ; nesl_erase_simulator (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration"
) ; neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW .
lhf2yly352 ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW .
gcums0dzz2 ) ; nesl_erase_simulator (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration"
) ; neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW .
is3dc1o4zz ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW .
bzrmjhnabu ) ; nesl_erase_simulator (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration"
) ; neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW .
pxp5ilgmi3 ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW .
evijjolyva ) ; nesl_erase_simulator (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration"
) ; neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW .
g3mxxyfx5h ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW .
f4ygo2hyze ) ; nesl_erase_simulator (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration"
) ; neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW .
aa1kkeyuws ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW .
gsrotkxe3w ) ; nesl_erase_simulator (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration"
) ; neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW .
bwrk1jrfjh ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW .
jstvsrdxec ) ; nesl_erase_simulator (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration"
) ; neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW .
nzmye2eqv0 ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW .
j3w0jjg10i ) ; nesl_erase_simulator (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration"
) ; neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW .
l25nib43el ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW .
hwdzla2kb2 ) ; nesl_erase_simulator (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration"
) ; neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW .
hpobr5dnto ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW .
mw4azdjt0i ) ; nesl_erase_simulator (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration"
) ; neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW .
eow2enys5v ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW .
jrmucmc5l0 ) ; nesl_erase_simulator (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration"
) ; neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW .
c2oj5ebuij ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW .
gftgep1sjl ) ; nesl_erase_simulator (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration"
) ; neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW .
j4zuphpirj ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW .
o50nrjnd44 ) ; nesl_erase_simulator (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration"
) ; neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW .
nyzomkvmej ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW .
gksf2y3xqu ) ; nesl_erase_simulator (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration"
) ; neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW .
pinay1nrr3 ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW .
dntzyn5tmg ) ; nesl_erase_simulator (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration"
) ; neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW .
ac2uu54gd3 ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW .
atpqvqjfs5 ) ; nesl_erase_simulator (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration"
) ; } void MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS , 13 ) ;
ssSetNumY ( rtS , 0 ) ; ssSetNumU ( rtS , 0 ) ; ssSetDirectFeedThrough ( rtS
, 0 ) ; ssSetNumSampleTimes ( rtS , 1 ) ; ssSetNumBlocks ( rtS , 104 ) ;
ssSetNumBlockIO ( rtS , 18 ) ; } void MdlInitializeSampleTimes ( void ) {
ssSetSampleTime ( rtS , 0 , 0.0 ) ; ssSetOffsetTime ( rtS , 0 , 0.0 ) ; }
void raccel_set_checksum ( SimStruct * rtS ) { ssSetChecksumVal ( rtS , 0 ,
794203140U ) ; ssSetChecksumVal ( rtS , 1 , 1665204939U ) ; ssSetChecksumVal
( rtS , 2 , 3883052603U ) ; ssSetChecksumVal ( rtS , 3 , 2955421286U ) ; }
SimStruct * raccel_register_model ( void ) { static struct _ssMdlInfo mdlInfo
; ( void ) memset ( ( char * ) rtS , 0 , sizeof ( SimStruct ) ) ; ( void )
memset ( ( char * ) & mdlInfo , 0 , sizeof ( struct _ssMdlInfo ) ) ;
ssSetMdlInfoPtr ( rtS , & mdlInfo ) ; { static time_T mdlPeriod [
NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T
mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ;
static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T
mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits
[ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [
NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) {
mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ;
mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } } ssSetSampleTimePtr ( rtS ,
& mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , &
mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ;
ssSetTNextWasAdjustedPtr ( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ;
ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] ) ;
ssSetTimeOfNextSampleHitPtr ( rtS , & mdlTimeOfNextSampleHit [ 0 ] ) ; }
ssSetSolverMode ( rtS , SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS ,
( ( void * ) & rtB ) ) ; ( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof
( B ) ) ; } { real_T * x = ( real_T * ) & rtX ; ssSetContStates ( rtS , x ) ;
( void ) memset ( ( void * ) x , 0 , sizeof ( X ) ) ; } { void * dwork = (
void * ) & rtDW ; ssSetRootDWork ( rtS , dwork ) ; ( void ) memset ( dwork ,
0 , sizeof ( DW ) ) ; } { static DataTypeTransInfo dtInfo ; ( void ) memset (
( char_T * ) & dtInfo , 0 , sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS
, & dtInfo ) ; dtInfo . numDataTypes = 14 ; dtInfo . dataTypeSizes = &
rtDataTypeSizes [ 0 ] ; dtInfo . dataTypeNames = & rtDataTypeNames [ 0 ] ;
dtInfo . B = & rtBTransTable ; }
friccion_aislada_esferica_Simscape_Symmechanics_InitializeDataMapInfo ( rtS )
; ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ;
ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS ,
"friccion_aislada_esferica_Simscape_Symmechanics" ) ; ssSetPath ( rtS ,
"friccion_aislada_esferica_Simscape_Symmechanics" ) ; ssSetTStart ( rtS , 0.0
) ; ssSetTFinal ( rtS , 5.0 ) ; { static RTWLogInfo rt_DataLoggingInfo ;
ssSetRTWLogInfo ( rtS , & rt_DataLoggingInfo ) ; } { { static int_T
rt_LoggedStateWidths [ ] = { 4 , 3 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 } ; static int_T rt_LoggedStateNumDimensions [ ] = { 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 } ; static int_T rt_LoggedStateDimensions
[ ] = { 4 , 3 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 } ; static
boolean_T rt_LoggedStateIsVarDims [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 } ; static BuiltInDTypeId rt_LoggedStateDataTypeIds [ ] = {
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE } ; static int_T rt_LoggedStateComplexSignals [ ] = { 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static const char_T *
rt_LoggedStateLabels [ ] = { "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "DiscStates" , "DiscStates" ,
"DiscStates" , "DiscStates" , "DiscStates" , "DiscStates" } ; static const
char_T * rt_LoggedStateBlockNames [ ] = {
"friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Spherical1" ,
"friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Spherical1" ,
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver\nConfiguration/EVAL_KEY/EXEC_INPUT_20"
,
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Rotational Friction"
,
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver\nConfiguration/EVAL_KEY/EXEC_INPUT_22"
,
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Rotational Friction2"
,
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver\nConfiguration/EVAL_KEY/EXEC_INPUT_21"
,
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Rotational Friction1"
,
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver\nConfiguration/EVAL_KEY/EXEC_INPUT_20"
,
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver\nConfiguration/EVAL_KEY/EXEC_INPUT_22"
,
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver\nConfiguration/EVAL_KEY/EXEC_INPUT_21"
,
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver\nConfiguration/EVAL_KEY/EXEC_INPUT_17"
,
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver\nConfiguration/EVAL_KEY/EXEC_INPUT_18"
,
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver\nConfiguration/EVAL_KEY/EXEC_INPUT_19"
} ; static const char_T * rt_LoggedStateNames [ ] = {
"Robot_Delta.Spherical1.S.Q" , "Robot_Delta.Spherical1.S.w" , "" ,
 "friccion_aislada_esferica_Simscape_Symmechanics.Robot_Delta.Rotational_Friction.t"
, "" ,
 "friccion_aislada_esferica_Simscape_Symmechanics.Robot_Delta.Rotational_Friction2.t"
, "" ,
 "friccion_aislada_esferica_Simscape_Symmechanics.Robot_Delta.Rotational_Friction1.t"
, "" , "" , "" , "" , "" , "" } ; static boolean_T rt_LoggedStateCrossMdlRef
[ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static
RTWLogDataTypeConvert rt_RTWLogDataTypeConvert [ ] = { { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } } ; static
RTWLogSignalInfo rt_LoggedStateSignalInfo = { 14 , rt_LoggedStateWidths ,
rt_LoggedStateNumDimensions , rt_LoggedStateDimensions ,
rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , { rt_LoggedStateLabels } , ( NULL )
, ( NULL ) , ( NULL ) , { rt_LoggedStateBlockNames } , { rt_LoggedStateNames
} , rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert } ; static void *
rt_LoggedStateSignalPtrs [ 14 ] ; rtliSetLogXSignalPtrs ( ssGetRTWLogInfo (
rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtX . cjklakdih0 [ 0 ] ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtX . cjklakdih0 [ 4 ] ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtX . c150l3qmxn ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) & rtX . ml5rpxbc10 ;
rt_LoggedStateSignalPtrs [ 4 ] = ( void * ) & rtX . m2txpyziu4 ;
rt_LoggedStateSignalPtrs [ 5 ] = ( void * ) & rtX . pgig0w5z22 ;
rt_LoggedStateSignalPtrs [ 6 ] = ( void * ) & rtX . h15fzyy0rm ;
rt_LoggedStateSignalPtrs [ 7 ] = ( void * ) & rtX . clcp24atwn ;
rt_LoggedStateSignalPtrs [ 8 ] = ( void * ) & rtDW . mxwpzq1ids ;
rt_LoggedStateSignalPtrs [ 9 ] = ( void * ) & rtDW . citycn5tuj ;
rt_LoggedStateSignalPtrs [ 10 ] = ( void * ) & rtDW . g0ybx5ny0s ;
rt_LoggedStateSignalPtrs [ 11 ] = ( void * ) & rtDW . hofd5gl0lv ;
rt_LoggedStateSignalPtrs [ 12 ] = ( void * ) & rtDW . kmxvynb5xg ;
rt_LoggedStateSignalPtrs [ 13 ] = ( void * ) & rtDW . lqg4ib442l ; }
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "tmp_raccel_xout" ) ; rtliSetLogXFinal (
ssGetRTWLogInfo ( rtS ) , "xFinal" ) ; rtliSetLogVarNameModifier (
ssGetRTWLogInfo ( rtS ) , "none" ) ; rtliSetLogFormat ( ssGetRTWLogInfo ( rtS
) , 2 ) ; rtliSetLogMaxRows ( ssGetRTWLogInfo ( rtS ) , 1000 ) ;
rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS ) , 1 ) ; rtliSetLogY (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogYSignalInfo ( ssGetRTWLogInfo (
rtS ) , ( NULL ) ) ; rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL
) ) ; } { static struct _ssStatesInfo2 statesInfo2 ; ssSetStatesInfo2 ( rtS ,
& statesInfo2 ) ; } { static ssSolverInfo slvrInfo ; static struct
_ssSFcnModelMethods3 mdlMethods3 ; static struct _ssSFcnModelMethods2
mdlMethods2 ; static boolean_T contStatesDisabled [ 13 ] ; static real_T
absTol [ 13 ] = { 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 } ; static
uint8_T absTolControl [ 13 ] = { 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U } ; static uint8_T zcAttributes [ 9 ] = { ( ZC_EVENT_ALL )
, ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) ,
( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) } ;
ssSetSolverRelTol ( rtS , 0.001 ) ; ssSetStepSize ( rtS , 0.0 ) ;
ssSetMinStepSize ( rtS , 0.0 ) ; ssSetMaxNumMinSteps ( rtS , - 1 ) ;
ssSetMinStepViolatedError ( rtS , 0 ) ; ssSetMaxStepSize ( rtS , 0.1 ) ;
ssSetSolverMaxOrder ( rtS , - 1 ) ; ssSetSolverRefineFactor ( rtS , 1 ) ;
ssSetOutputTimes ( rtS , ( NULL ) ) ; ssSetNumOutputTimes ( rtS , 0 ) ;
ssSetOutputTimesOnly ( rtS , 0 ) ; ssSetOutputTimesIndex ( rtS , 0 ) ;
ssSetZCCacheNeedsReset ( rtS , 1 ) ; ssSetDerivCacheNeedsReset ( rtS , 0 ) ;
ssSetNumNonContDerivSigInfos ( rtS , 0 ) ; ssSetNonContDerivSigInfos ( rtS ,
( NULL ) ) ; ssSetSolverInfo ( rtS , & slvrInfo ) ; ssSetSolverName ( rtS ,
"ode45" ) ; ssSetVariableStepSolver ( rtS , 1 ) ;
ssSetSolverConsistencyChecking ( rtS , 0 ) ; ssSetSolverAdaptiveZcDetection (
rtS , 0 ) ; ssSetSolverRobustResetMethod ( rtS , 0 ) ;
_ssSetSolverUpdateJacobianAtReset ( rtS , true ) ; ssSetAbsTolVector ( rtS ,
absTol ) ; ssSetAbsTolControlVector ( rtS , absTolControl ) ;
ssSetSolverAbsTol_Obsolete ( rtS , absTol ) ;
ssSetSolverAbsTolControl_Obsolete ( rtS , absTolControl ) ;
ssSetSolverStateProjection ( rtS , 1 ) ; ( void ) memset ( ( void * ) &
mdlMethods2 , 0 , sizeof ( mdlMethods2 ) ) ; ssSetModelMethods2 ( rtS , &
mdlMethods2 ) ; ( void ) memset ( ( void * ) & mdlMethods3 , 0 , sizeof (
mdlMethods3 ) ) ; ssSetModelMethods3 ( rtS , & mdlMethods3 ) ;
ssSetModelProjection ( rtS , MdlProjection ) ; ssSetSolverMassMatrixType (
rtS , ( ssMatrixType ) 0 ) ; ssSetSolverMassMatrixNzMax ( rtS , 0 ) ;
ssSetModelOutputs ( rtS , MdlOutputs ) ; ssSetModelLogData ( rtS ,
rt_UpdateTXYLogVars ) ; ssSetModelUpdate ( rtS , MdlUpdate ) ;
ssSetModelDerivatives ( rtS , MdlDerivatives ) ; ssSetSolverZcSignalAttrib (
rtS , zcAttributes ) ; ssSetSolverNumZcSignals ( rtS , 9 ) ;
ssSetModelZeroCrossings ( rtS , MdlZeroCrossings ) ;
ssSetSolverConsecutiveZCsStepRelTol ( rtS , 2.8421709430404007E-13 ) ;
ssSetSolverMaxConsecutiveZCs ( rtS , 1000 ) ; ssSetSolverConsecutiveZCsError
( rtS , 2 ) ; ssSetSolverMaskedZcDiagnostic ( rtS , 1 ) ;
ssSetSolverIgnoredZcDiagnostic ( rtS , 1 ) ; ssSetSolverMaxConsecutiveMinStep
( rtS , 1 ) ; ssSetSolverShapePreserveControl ( rtS , 2 ) ; ssSetTNextTid (
rtS , INT_MIN ) ; ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset (
rtS ) ; ssSetNumNonsampledZCs ( rtS , 9 ) ; ssSetContStateDisabled ( rtS ,
contStatesDisabled ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ; }
ssSetChecksumVal ( rtS , 0 , 794203140U ) ; ssSetChecksumVal ( rtS , 1 ,
1665204939U ) ; ssSetChecksumVal ( rtS , 2 , 3883052603U ) ; ssSetChecksumVal
( rtS , 3 , 2955421286U ) ; { static const sysRanDType rtAlwaysEnabled =
SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo rt_ExtModeInfo ; static const
sysRanDType * systemRan [ 1 ] ; ssSetRTWExtModeInfo ( rtS , & rt_ExtModeInfo
) ; rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo , systemRan ) ;
systemRan [ 0 ] = & rtAlwaysEnabled ; rteiSetModelMappingInfoPtr (
ssGetRTWExtModeInfo ( rtS ) , & ssGetModelMappingInfo ( rtS ) ) ;
rteiSetChecksumsPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetChecksums ( rtS ) )
; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetTPtr ( rtS ) ) ; } return
rtS ; }
