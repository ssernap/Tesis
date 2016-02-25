#include "__cf_friccion_aislada.h"
#include "rt_logging_mmi.h"
#include "friccion_aislada_capi.h"
#include <math.h>
#include "friccion_aislada.h"
#include "friccion_aislada_private.h"
#include "friccion_aislada_dt.h"
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
"slprj\\raccel\\friccion_aislada\\friccion_aislada_Jpattern.mat" ; const
int_T gblNumRootInportBlks = 0 ; const int_T gblNumModelInputs = 0 ; extern
rtInportTUtable * gblInportTUtables ; extern const char * gblInportFileName ;
const int_T gblInportDataTypeIdx [ ] = { - 1 } ; const int_T gblInportDims [
] = { - 1 } ; const int_T gblInportComplex [ ] = { - 1 } ; const int_T
gblInportInterpoFlag [ ] = { - 1 } ; const int_T gblInportContinuous [ ] = {
- 1 } ;
#include "simstruc.h"
#include "fixedpoint.h"
B rtB ; X rtX ; DW rtDW ; static SimStruct model_S ; SimStruct * const rtS =
& model_S ; static void kodygifx4z ( const real_T a [ 4 ] , real_T c [ 4 ] )
; static void kodygifx4z ( const real_T a [ 4 ] , real_T c [ 4 ] ) { real_T r
; real_T t ; if ( muDoubleScalarAbs ( a [ 1 ] ) > muDoubleScalarAbs ( a [ 0 ]
) ) { r = a [ 0 ] / a [ 1 ] ; t = 1.0 / ( r * a [ 3 ] - a [ 2 ] ) ; c [ 0 ] =
a [ 3 ] / a [ 1 ] * t ; c [ 1 ] = - t ; c [ 2 ] = - a [ 2 ] / a [ 1 ] * t ; c
[ 3 ] = r * t ; } else { r = a [ 1 ] / a [ 0 ] ; t = 1.0 / ( a [ 3 ] - r * a
[ 2 ] ) ; c [ 0 ] = a [ 3 ] / a [ 0 ] * t ; c [ 1 ] = - r * t ; c [ 2 ] = - a
[ 2 ] / a [ 0 ] * t ; c [ 3 ] = t ; } } void MdlInitialize ( void ) {
boolean_T tmp ; int_T tmp_p ; char * tmp_e ; rtX . c4heiwjyo0 = rtP .
Integrator_IC ; rtX . cytsrnzz24 = rtP . Filter_IC ; rtX . e5ilpltgaf = rtP .
Integrator_IC_efr3g1wrer ; rtX . ldm2uo30vp = rtP . Filter_IC_gdoix51u4z ;
rtX . o0ls511edu = rtP . Integrator_IC_cvaudhvmvm ; rtX . pcw0d3bv0m = rtP .
Filter_IC_ajlfi3u02h ; tmp = false ; if ( tmp ) { tmp_p = strcmp ( "ode45" ,
ssGetSolverName ( rtS ) ) ; if ( tmp_p != 0 ) { tmp_e =
solver_mismatch_message ( "ode45" , ssGetSolverName ( rtS ) ) ;
ssSetErrorStatus ( rtS , tmp_e ) ; } } rtw_diagnostics_reset ( ) ;
rtw_diagnostics_reset ( ) ; rtw_diagnostics_reset ( ) ; rtw_diagnostics_reset
( ) ; rtw_diagnostics_reset ( ) ; rtw_diagnostics_reset ( ) ;
rtw_diagnostics_reset ( ) ; rtw_diagnostics_reset ( ) ; } void MdlStart (
void ) { NeuDiagnosticManager * diagnosticManager ; NeBoolVector fimtsVector
; boolean_T fimts ; real_T modelParameters_mSolverTolerance ; real_T
modelParameters_mFixedStepSize ; boolean_T
modelParameters_mVariableStepSolver ; NeslSimulator * simulator ;
NeuDiagnosticTree * diagnosticTree ; int32_T tmp ; char * msg ;
NeslSimulationData * simulationData ; real_T time ; NeBoolVector
fimtsVector_p ; boolean_T fimts_p [ 2 ] ; real_T time_p ; NeBoolVector
fimtsVector_e ; boolean_T fimts_e [ 3 ] ; real_T time_e ; NeBoolVector
fimtsVector_i ; boolean_T fimts_i ; real_T time_i ; NeBoolVector
fimtsVector_m ; boolean_T fimts_m ; real_T time_m ; NeBoolVector
fimtsVector_g ; boolean_T fimts_g [ 3 ] ; real_T time_g ; NeBoolVector
fimtsVector_j ; boolean_T fimts_j [ 2 ] ; real_T time_j ; NeBoolVector
fimtsVector_f ; boolean_T fimts_f ; real_T time_f ; NeModelParameters
expl_temp ; NeModelParameters expl_temp_p ; NeModelParameters expl_temp_e ;
NeModelParameters expl_temp_i ; NeModelParameters expl_temp_m ;
NeModelParameters expl_temp_g ; NeModelParameters expl_temp_j ;
NeModelParameters expl_temp_f ; simulator = nesl_lease_simulator (
"friccion_aislada/Robot Delta/Solver Configuration" , 0 , 1 ) ; rtDW .
ku2cbhbb3u = ( void * ) simulator ; modelParameters_mVariableStepSolver =
pointer_is_null ( rtDW . ku2cbhbb3u ) ; if (
modelParameters_mVariableStepSolver ) { friccion_aislada_d30b7e43_gateway ( )
; simulator = nesl_lease_simulator (
"friccion_aislada/Robot Delta/Solver Configuration" , 0 , 1 ) ; rtDW .
ku2cbhbb3u = ( void * ) simulator ; } simulationData =
nesl_create_simulation_data ( ) ; rtDW . f4ygo2hyze = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
g3mxxyfx5h = ( void * ) diagnosticManager ; fimts = false ; fimtsVector . mN
= 1 ; fimtsVector . mX = & fimts ; modelParameters_mSolverTolerance = 0.001 ;
modelParameters_mFixedStepSize = 0.0 ; modelParameters_mVariableStepSolver =
true ; simulator = ( NeslSimulator * ) rtDW . ku2cbhbb3u ; diagnosticManager
= ( NeuDiagnosticManager * ) rtDW . g3mxxyfx5h ; diagnosticTree =
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
simulationData = ( NeslSimulationData * ) rtDW . f4ygo2hyze ; time = ssGetT (
rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time ; simulationData -> mData -> mContStates . mN = 2 ;
simulationData -> mData -> mContStates . mX = ( real_T * ) & rtX . daoi22nz3l
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
( NeslSimulator * ) rtDW . ku2cbhbb3u ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . g3mxxyfx5h ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp =
ne_simulator_method ( simulator , NESL_SIM_START , simulationData ,
diagnosticManager ) ; if ( tmp != 0 ) { tmp = rtw_diagnostics_message_count (
) ; if ( tmp == 0 ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ;
ssSetErrorStatus ( rtS , msg ) ; } } simulator = nesl_lease_simulator (
"friccion_aislada/Robot Delta/Solver Configuration" , 3 , 1 ) ; rtDW .
m1qd0xfu3n = ( void * ) simulator ; modelParameters_mVariableStepSolver =
pointer_is_null ( rtDW . m1qd0xfu3n ) ; if (
modelParameters_mVariableStepSolver ) { friccion_aislada_d30b7e43_gateway ( )
; simulator = nesl_lease_simulator (
"friccion_aislada/Robot Delta/Solver Configuration" , 3 , 1 ) ; rtDW .
m1qd0xfu3n = ( void * ) simulator ; } simulationData =
nesl_create_simulation_data ( ) ; rtDW . eqo2lqtdrq = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
epnuqlho43 = ( void * ) diagnosticManager ; fimts_p [ 0U ] = false ; fimts_p
[ 1U ] = false ; fimtsVector_p . mN = 2 ; fimtsVector_p . mX = & fimts_p [ 0U
] ; modelParameters_mSolverTolerance = 0.001 ; modelParameters_mFixedStepSize
= 0.0 ; modelParameters_mVariableStepSolver = true ; simulator = (
NeslSimulator * ) rtDW . m1qd0xfu3n ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . epnuqlho43 ; diagnosticTree =
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
simulationData = ( NeslSimulationData * ) rtDW . eqo2lqtdrq ; time_p = ssGetT
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
m1qd0xfu3n ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . epnuqlho43
; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp = ne_simulator_method ( simulator , NESL_SIM_START
, simulationData , diagnosticManager ) ; if ( tmp != 0 ) { tmp =
rtw_diagnostics_message_count ( ) ; if ( tmp == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulator = nesl_lease_simulator (
"friccion_aislada/Robot Delta/Solver Configuration" , 2 , 1 ) ; rtDW .
cra3jb3y0w = ( void * ) simulator ; modelParameters_mVariableStepSolver =
pointer_is_null ( rtDW . cra3jb3y0w ) ; if (
modelParameters_mVariableStepSolver ) { friccion_aislada_d30b7e43_gateway ( )
; simulator = nesl_lease_simulator (
"friccion_aislada/Robot Delta/Solver Configuration" , 2 , 1 ) ; rtDW .
cra3jb3y0w = ( void * ) simulator ; } simulationData =
nesl_create_simulation_data ( ) ; rtDW . cckhbqzmkz = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
ngaoo2eejn = ( void * ) diagnosticManager ; fimts_e [ 0U ] = false ; fimts_e
[ 1U ] = false ; fimts_e [ 2U ] = false ; fimtsVector_e . mN = 3 ;
fimtsVector_e . mX = & fimts_e [ 0U ] ; modelParameters_mSolverTolerance =
0.001 ; modelParameters_mFixedStepSize = 0.0 ;
modelParameters_mVariableStepSolver = true ; simulator = ( NeslSimulator * )
rtDW . cra3jb3y0w ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW .
ngaoo2eejn ; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
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
simulationData = ( NeslSimulationData * ) rtDW . cckhbqzmkz ; time_e = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_e ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 1 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . bkz3pip0b3 ; simulationData -> mData -> mModeVector . mN = 0 ;
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
cra3jb3y0w ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . ngaoo2eejn
; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp = ne_simulator_method ( simulator , NESL_SIM_START
, simulationData , diagnosticManager ) ; if ( tmp != 0 ) { tmp =
rtw_diagnostics_message_count ( ) ; if ( tmp == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulator = nesl_lease_simulator (
"friccion_aislada/Robot Delta/Solver Configuration" , 1 , 0 ) ; rtDW .
javjhfpea0 = ( void * ) simulator ; modelParameters_mVariableStepSolver =
pointer_is_null ( rtDW . javjhfpea0 ) ; if (
modelParameters_mVariableStepSolver ) { friccion_aislada_d30b7e43_gateway ( )
; simulator = nesl_lease_simulator (
"friccion_aislada/Robot Delta/Solver Configuration" , 1 , 0 ) ; rtDW .
javjhfpea0 = ( void * ) simulator ; } simulationData =
nesl_create_simulation_data ( ) ; rtDW . c35s3qa5pe = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
kihgsxbg1w = ( void * ) diagnosticManager ; fimts_i = false ; fimtsVector_i .
mN = 1 ; fimtsVector_i . mX = & fimts_i ; modelParameters_mSolverTolerance =
0.001 ; modelParameters_mFixedStepSize = 0.0 ;
modelParameters_mVariableStepSolver = true ; simulator = ( NeslSimulator * )
rtDW . javjhfpea0 ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW .
kihgsxbg1w ; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
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
simulationData = ( NeslSimulationData * ) rtDW . c35s3qa5pe ; time_i = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_i ; simulationData -> mData -> mContStates . mN = 0 ;
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
javjhfpea0 ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . kihgsxbg1w
; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp = ne_simulator_method ( simulator , NESL_SIM_START
, simulationData , diagnosticManager ) ; if ( tmp != 0 ) { tmp =
rtw_diagnostics_message_count ( ) ; if ( tmp == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulator = nesl_lease_simulator (
"friccion_aislada/Robot Delta/Solver Configuration" , 3 , 0 ) ; rtDW .
c52ibvvdh2 = ( void * ) simulator ; modelParameters_mVariableStepSolver =
pointer_is_null ( rtDW . c52ibvvdh2 ) ; if (
modelParameters_mVariableStepSolver ) { friccion_aislada_d30b7e43_gateway ( )
; simulator = nesl_lease_simulator (
"friccion_aislada/Robot Delta/Solver Configuration" , 3 , 0 ) ; rtDW .
c52ibvvdh2 = ( void * ) simulator ; } simulationData =
nesl_create_simulation_data ( ) ; rtDW . mcvrzvza0a = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
fvh45ypqnb = ( void * ) diagnosticManager ; fimts_m = false ; fimtsVector_m .
mN = 1 ; fimtsVector_m . mX = & fimts_m ; modelParameters_mSolverTolerance =
0.001 ; modelParameters_mFixedStepSize = 0.0 ;
modelParameters_mVariableStepSolver = true ; simulator = ( NeslSimulator * )
rtDW . c52ibvvdh2 ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW .
fvh45ypqnb ; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; expl_temp_m . mVariableStepSolver =
modelParameters_mVariableStepSolver ; expl_temp_m . mUseSimState = false ;
expl_temp_m . mStartTime = 0.0 ; expl_temp_m . mSolverType =
NE_SOLVER_TYPE_ODE ; expl_temp_m . mSolverTolerance =
modelParameters_mSolverTolerance ; expl_temp_m . mLoggingMode =
SSC_LOGGING_NONE ; expl_temp_m . mLoadInitialState = false ; expl_temp_m .
mLinTrimCompile = false ; expl_temp_m . mFixedStepSize =
modelParameters_mFixedStepSize ; tmp = nesl_initialize_simulator ( simulator
, expl_temp_m , & fimtsVector_m , diagnosticManager ) ; if ( tmp != 0 ) { tmp
= rtw_diagnostics_message_count ( ) ; if ( tmp == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . mcvrzvza0a ; time_m = ssGetT
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
c52ibvvdh2 ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . fvh45ypqnb
; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp = ne_simulator_method ( simulator , NESL_SIM_START
, simulationData , diagnosticManager ) ; if ( tmp != 0 ) { tmp =
rtw_diagnostics_message_count ( ) ; if ( tmp == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulator = nesl_lease_simulator (
"friccion_aislada/Robot Delta/Solver Configuration" , 2 , 0 ) ; rtDW .
kxoqefzlou = ( void * ) simulator ; modelParameters_mVariableStepSolver =
pointer_is_null ( rtDW . kxoqefzlou ) ; if (
modelParameters_mVariableStepSolver ) { friccion_aislada_d30b7e43_gateway ( )
; simulator = nesl_lease_simulator (
"friccion_aislada/Robot Delta/Solver Configuration" , 2 , 0 ) ; rtDW .
kxoqefzlou = ( void * ) simulator ; } simulationData =
nesl_create_simulation_data ( ) ; rtDW . oquym14qcv = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
om1znyxidc = ( void * ) diagnosticManager ; fimts_g [ 0U ] = false ; fimts_g
[ 1U ] = false ; fimts_g [ 2U ] = false ; fimtsVector_g . mN = 3 ;
fimtsVector_g . mX = & fimts_g [ 0U ] ; modelParameters_mSolverTolerance =
0.001 ; modelParameters_mFixedStepSize = 0.0 ;
modelParameters_mVariableStepSolver = true ; simulator = ( NeslSimulator * )
rtDW . kxoqefzlou ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW .
om1znyxidc ; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
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
simulationData = ( NeslSimulationData * ) rtDW . oquym14qcv ; time_g = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_g ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 1 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . pkuuqhesdo ; simulationData -> mData -> mModeVector . mN = 0 ;
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
kxoqefzlou ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . om1znyxidc
; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp = ne_simulator_method ( simulator , NESL_SIM_START
, simulationData , diagnosticManager ) ; if ( tmp != 0 ) { tmp =
rtw_diagnostics_message_count ( ) ; if ( tmp == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulator = nesl_lease_simulator (
"friccion_aislada/Robot Delta/Solver Configuration" , 1 , 1 ) ; rtDW .
fxum5hjnru = ( void * ) simulator ; modelParameters_mVariableStepSolver =
pointer_is_null ( rtDW . fxum5hjnru ) ; if (
modelParameters_mVariableStepSolver ) { friccion_aislada_d30b7e43_gateway ( )
; simulator = nesl_lease_simulator (
"friccion_aislada/Robot Delta/Solver Configuration" , 1 , 1 ) ; rtDW .
fxum5hjnru = ( void * ) simulator ; } simulationData =
nesl_create_simulation_data ( ) ; rtDW . j2oaqyzpyc = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
lhhgzjnvtn = ( void * ) diagnosticManager ; fimts_j [ 0U ] = false ; fimts_j
[ 1U ] = false ; fimtsVector_j . mN = 2 ; fimtsVector_j . mX = & fimts_j [ 0U
] ; modelParameters_mSolverTolerance = 0.001 ; modelParameters_mFixedStepSize
= 0.0 ; modelParameters_mVariableStepSolver = true ; simulator = (
NeslSimulator * ) rtDW . fxum5hjnru ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . lhhgzjnvtn ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; expl_temp_j .
mVariableStepSolver = modelParameters_mVariableStepSolver ; expl_temp_j .
mUseSimState = false ; expl_temp_j . mStartTime = 0.0 ; expl_temp_j .
mSolverType = NE_SOLVER_TYPE_ODE ; expl_temp_j . mSolverTolerance =
modelParameters_mSolverTolerance ; expl_temp_j . mLoggingMode =
SSC_LOGGING_NONE ; expl_temp_j . mLoadInitialState = false ; expl_temp_j .
mLinTrimCompile = false ; expl_temp_j . mFixedStepSize =
modelParameters_mFixedStepSize ; tmp = nesl_initialize_simulator ( simulator
, expl_temp_j , & fimtsVector_j , diagnosticManager ) ; if ( tmp != 0 ) { tmp
= rtw_diagnostics_message_count ( ) ; if ( tmp == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . j2oaqyzpyc ; time_j = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_j ; simulationData -> mData -> mContStates . mN = 0 ;
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
fxum5hjnru ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . lhhgzjnvtn
; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp = ne_simulator_method ( simulator , NESL_SIM_START
, simulationData , diagnosticManager ) ; if ( tmp != 0 ) { tmp =
rtw_diagnostics_message_count ( ) ; if ( tmp == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulator = nesl_lease_simulator (
"friccion_aislada/Robot Delta/Solver Configuration" , 0 , 0 ) ; rtDW .
nyiiqtb3pj = ( void * ) simulator ; modelParameters_mVariableStepSolver =
pointer_is_null ( rtDW . nyiiqtb3pj ) ; if (
modelParameters_mVariableStepSolver ) { friccion_aislada_d30b7e43_gateway ( )
; simulator = nesl_lease_simulator (
"friccion_aislada/Robot Delta/Solver Configuration" , 0 , 0 ) ; rtDW .
nyiiqtb3pj = ( void * ) simulator ; } simulationData =
nesl_create_simulation_data ( ) ; rtDW . gcums0dzz2 = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
lhf2yly352 = ( void * ) diagnosticManager ; fimts_f = false ; fimtsVector_f .
mN = 1 ; fimtsVector_f . mX = & fimts_f ; modelParameters_mSolverTolerance =
0.001 ; modelParameters_mFixedStepSize = 0.0 ;
modelParameters_mVariableStepSolver = true ; simulator = ( NeslSimulator * )
rtDW . nyiiqtb3pj ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW .
lhf2yly352 ; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; expl_temp_f . mVariableStepSolver =
modelParameters_mVariableStepSolver ; expl_temp_f . mUseSimState = false ;
expl_temp_f . mStartTime = 0.0 ; expl_temp_f . mSolverType =
NE_SOLVER_TYPE_ODE ; expl_temp_f . mSolverTolerance =
modelParameters_mSolverTolerance ; expl_temp_f . mLoggingMode =
SSC_LOGGING_NONE ; expl_temp_f . mLoadInitialState = false ; expl_temp_f .
mLinTrimCompile = false ; expl_temp_f . mFixedStepSize =
modelParameters_mFixedStepSize ; tmp = nesl_initialize_simulator ( simulator
, expl_temp_f , & fimtsVector_f , diagnosticManager ) ; if ( tmp != 0 ) { tmp
= rtw_diagnostics_message_count ( ) ; if ( tmp == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . gcums0dzz2 ; time_f = ssGetT
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
nyiiqtb3pj ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . lhf2yly352
; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp = ne_simulator_method ( simulator , NESL_SIM_START
, simulationData , diagnosticManager ) ; if ( tmp != 0 ) { tmp =
rtw_diagnostics_message_count ( ) ; if ( tmp == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
MdlInitialize ( ) ; } void MdlOutputs ( int_T tid ) { real_T katwlividx ;
real_T ocjga0uv4u ; real_T akmqn3a4eg ; real_T d4bw4e4r4g ; real_T itszgm543j
; NeslSimulationData * simulationData ; real_T time ; boolean_T tmp ; real_T
tmp_p [ 4 ] ; int_T tmp_e [ 2 ] ; NeslSimulator * simulator ;
NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree * diagnosticTree
; char * msg ; real_T time_p ; real_T tmp_i [ 6 ] ; int_T tmp_m [ 3 ] ;
real_T time_e ; real_T tmp_g [ 3 ] ; int_T tmp_j [ 4 ] ; real_T time_i ;
real_T tmp_f [ 4 ] ; int_T tmp_c [ 2 ] ; real_T time_m ; real_T tmp_k [ 4 ] ;
int_T tmp_b [ 2 ] ; real_T time_g ; real_T tmp_n [ 3 ] ; int_T tmp_l [ 4 ] ;
real_T time_j ; real_T tmp_d [ 6 ] ; int_T tmp_o [ 3 ] ; real_T time_f ;
real_T tmp_dz [ 4 ] ; int_T tmp_fs [ 2 ] ; real_T PC1 [ 3 ] ; real_T PC2 [ 3
] ; real_T PC3 [ 3 ] ; real_T C31 ; real_T C32 ; real_T C33 ; real_T theta3_1
; real_T theta3_2 ; real_T theta3_3 ; real_T theta2_1 ; static const real_T b
[ 3 ] = { - 66.0387 , 0.0 , 0.0 } ; static const int8_T b_a [ 9 ] = { 1 , 0 ,
0 , 0 , 1 , 0 , 0 , 0 , 1 } ; static const real_T c_a [ 9 ] = { -
0.49999999999999978 , 0.86602540378443871 , 0.0 , - 0.86602540378443871 , -
0.49999999999999978 , 0.0 , 0.0 , 0.0 , 1.0 } ; static const real_T d_a [ 9 ]
= { - 0.50000000000000044 , - 0.86602540378443849 , 0.0 , 0.86602540378443849
, - 0.50000000000000044 , 0.0 , 0.0 , 0.0 , 1.0 } ; real_T tmp_ck [ 4 ] ;
real_T tmp_f2 [ 4 ] ; real_T tmp_kt [ 4 ] ; real_T tmp_lt [ 4 ] ; int32_T i ;
katwlividx = ssGetT ( rtS ) ; if ( katwlividx < 3.0 ) { rtB . pljjj452mj =
0.0 ; rtB . iczpsbisae = - 50.0 ; rtB . o4nsjknro4 = 170.0 ; } else if (
katwlividx < 5.0 ) { rtB . pljjj452mj = 0.0 ; rtB . iczpsbisae = - 50.0 ; rtB
. o4nsjknro4 = ( ( ( ( ( katwlividx - 3.0 ) * 0.0 + 170.0 ) + ( katwlividx -
3.0 ) * ( katwlividx - 3.0 ) * 0.0 ) + muDoubleScalarPower ( katwlividx - 3.0
, 3.0 ) * 62.5 ) + muDoubleScalarPower ( katwlividx - 3.0 , 4.0 ) * - 46.875
) + muDoubleScalarPower ( katwlividx - 3.0 , 5.0 ) * 9.375 ; } else if (
katwlividx < 9.0 ) { rtB . pljjj452mj = 0.0 ; rtB . iczpsbisae = ( ( ( ( ( (
katwlividx - 2.0 ) - 3.0 ) * 0.0 + - 50.0 ) + ( ( katwlividx - 2.0 ) - 3.0 )
* ( ( katwlividx - 2.0 ) - 3.0 ) * 0.0 ) + muDoubleScalarPower ( ( katwlividx
- 2.0 ) - 3.0 , 3.0 ) * 15.625 ) + muDoubleScalarPower ( ( katwlividx - 2.0 )
- 3.0 , 4.0 ) * - 5.859375 ) + muDoubleScalarPower ( ( katwlividx - 2.0 ) -
3.0 , 5.0 ) * 0.5859375 ; rtB . o4nsjknro4 = 220.0 ; } else if ( katwlividx <
11.0 ) { rtB . pljjj452mj = 0.0 ; rtB . iczpsbisae = 50.0 ; rtB . o4nsjknro4
= ( ( ( ( ( ( ( katwlividx - 4.0 ) - 2.0 ) - 3.0 ) * 0.0 + 220.0 ) + ( ( (
katwlividx - 4.0 ) - 2.0 ) - 3.0 ) * ( ( ( katwlividx - 4.0 ) - 2.0 ) - 3.0 )
* 0.0 ) + muDoubleScalarPower ( ( ( katwlividx - 4.0 ) - 2.0 ) - 3.0 , 3.0 )
* - 62.5 ) + muDoubleScalarPower ( ( ( katwlividx - 4.0 ) - 2.0 ) - 3.0 , 4.0
) * 46.875 ) + muDoubleScalarPower ( ( ( katwlividx - 4.0 ) - 2.0 ) - 3.0 ,
5.0 ) * - 9.375 ; } else { rtB . pljjj452mj = 0.0 ; rtB . iczpsbisae = 50.0 ;
rtB . o4nsjknro4 = 170.0 ; } for ( i = 0 ; i < 3 ; i ++ ) { PC1 [ i ] = ( ( (
real_T ) b_a [ i + 3 ] * rtB . iczpsbisae + ( real_T ) b_a [ i ] * rtB .
pljjj452mj ) + ( real_T ) b_a [ i + 6 ] * rtB . o4nsjknro4 ) + b [ i ] ; }
for ( i = 0 ; i < 3 ; i ++ ) { PC2 [ i ] = ( ( c_a [ i + 3 ] * rtB .
iczpsbisae + c_a [ i ] * rtB . pljjj452mj ) + c_a [ i + 6 ] * rtB .
o4nsjknro4 ) + b [ i ] ; } for ( i = 0 ; i < 3 ; i ++ ) { PC3 [ i ] = ( ( d_a
[ i + 3 ] * rtB . iczpsbisae + d_a [ i ] * rtB . pljjj452mj ) + d_a [ i + 6 ]
* rtB . o4nsjknro4 ) + b [ i ] ; } C31 = PC1 [ 1 ] / 302.0 ; C32 = PC2 [ 1 ]
/ 302.0 ; C33 = PC3 [ 1 ] / 302.0 ; theta3_1 = muDoubleScalarAtan2 ( -
muDoubleScalarSqrt ( 1.0 - C31 * C31 ) , C31 ) ; theta3_2 =
muDoubleScalarAtan2 ( - muDoubleScalarSqrt ( 1.0 - C32 * C32 ) , C32 ) ;
theta3_3 = muDoubleScalarAtan2 ( - muDoubleScalarSqrt ( 1.0 - C33 * C33 ) ,
C33 ) ; C31 = ( ( ( ( PC1 [ 0 ] * PC1 [ 0 ] + PC1 [ 1 ] * PC1 [ 1 ] ) + PC1 [
2 ] * PC1 [ 2 ] ) - 22500.0 ) - 91204.0 ) / ( 90600.0 * muDoubleScalarSin (
theta3_1 ) ) ; C32 = ( ( ( ( PC2 [ 0 ] * PC2 [ 0 ] + PC2 [ 1 ] * PC2 [ 1 ] )
+ PC2 [ 2 ] * PC2 [ 2 ] ) - 22500.0 ) - 91204.0 ) / ( 90600.0 *
muDoubleScalarSin ( theta3_2 ) ) ; C33 = ( ( ( ( PC3 [ 0 ] * PC3 [ 0 ] + PC3
[ 1 ] * PC3 [ 1 ] ) + PC3 [ 2 ] * PC3 [ 2 ] ) - 22500.0 ) - 91204.0 ) / (
90600.0 * muDoubleScalarSin ( theta3_3 ) ) ; theta2_1 = muDoubleScalarAtan2 (
- muDoubleScalarSqrt ( 1.0 - C31 * C31 ) , C31 ) ; C32 = muDoubleScalarAtan2
( - muDoubleScalarSqrt ( 1.0 - C32 * C32 ) , C32 ) ; C31 =
muDoubleScalarAtan2 ( - muDoubleScalarSqrt ( 1.0 - C33 * C33 ) , C33 ) ;
tmp_kt [ 0 ] = 302.0 * muDoubleScalarSin ( theta3_1 ) * muDoubleScalarCos (
theta2_1 ) + 150.0 ; tmp_kt [ 2 ] = - 302.0 * muDoubleScalarSin ( theta3_1 )
* muDoubleScalarSin ( theta2_1 ) ; tmp_kt [ 1 ] = 302.0 * muDoubleScalarSin (
theta3_1 ) * muDoubleScalarSin ( theta2_1 ) ; tmp_kt [ 3 ] = 302.0 *
muDoubleScalarSin ( theta3_1 ) * muDoubleScalarCos ( theta2_1 ) + 150.0 ;
kodygifx4z ( tmp_kt , tmp_lt ) ; tmp_f2 [ 0 ] = 302.0 * muDoubleScalarSin (
theta3_2 ) * muDoubleScalarCos ( C32 ) + 150.0 ; tmp_f2 [ 2 ] = - 302.0 *
muDoubleScalarSin ( theta3_2 ) * muDoubleScalarSin ( C32 ) ; tmp_f2 [ 1 ] =
302.0 * muDoubleScalarSin ( theta3_2 ) * muDoubleScalarSin ( C32 ) ; tmp_f2 [
3 ] = 302.0 * muDoubleScalarSin ( theta3_2 ) * muDoubleScalarCos ( C32 ) +
150.0 ; kodygifx4z ( tmp_f2 , tmp_kt ) ; tmp_ck [ 0 ] = 302.0 *
muDoubleScalarSin ( theta3_3 ) * muDoubleScalarCos ( C31 ) + 150.0 ; tmp_ck [
2 ] = - 302.0 * muDoubleScalarSin ( theta3_3 ) * muDoubleScalarSin ( C31 ) ;
tmp_ck [ 1 ] = 302.0 * muDoubleScalarSin ( theta3_3 ) * muDoubleScalarSin (
C31 ) ; tmp_ck [ 3 ] = 302.0 * muDoubleScalarSin ( theta3_3 ) *
muDoubleScalarCos ( C31 ) + 150.0 ; kodygifx4z ( tmp_ck , tmp_f2 ) ; C31 =
muDoubleScalarAtan2 ( tmp_lt [ 1 ] * PC1 [ 0 ] + tmp_lt [ 3 ] * PC1 [ 1 ] ,
tmp_lt [ 0 ] * PC1 [ 0 ] + tmp_lt [ 2 ] * PC1 [ 1 ] ) ; rtB . osjgev2jfz =
muDoubleScalarAtan2 ( tmp_kt [ 1 ] * PC2 [ 0 ] + tmp_kt [ 3 ] * PC2 [ 1 ] ,
tmp_kt [ 0 ] * PC2 [ 0 ] + tmp_kt [ 2 ] * PC2 [ 1 ] ) ; rtB . iier5jnm1g =
muDoubleScalarAtan2 ( tmp_f2 [ 1 ] * PC3 [ 0 ] + tmp_f2 [ 3 ] * PC3 [ 1 ] ,
tmp_f2 [ 0 ] * PC3 [ 0 ] + tmp_f2 [ 2 ] * PC3 [ 1 ] ) ; rtB . al3p3wiuhl =
rtP . Gain_Gain * C31 ; C33 = rtP . Gain_Gain_j13fe42xcx * C31 - 0.0 ; C31 =
rtP . ProportionalGain_Gain * C33 ; itszgm543j = rtX . c4heiwjyo0 ; C32 = rtP
. DerivativeGain_Gain * C33 ; akmqn3a4eg = rtX . cytsrnzz24 ; rtB .
aptbtwirg2 = ( C32 - akmqn3a4eg ) * rtP . FilterCoefficient_Gain ; rtB .
jrnsoabm5v = ( C31 + itszgm543j ) + rtB . aptbtwirg2 ; if ( ssIsMajorTimeStep
( rtS ) ) { rtDW . nvlp11rn3a = rtB . jrnsoabm5v >= rtP . Saturation_UpperSat
? 1 : rtB . jrnsoabm5v > rtP . Saturation_LowerSat ? 0 : - 1 ; } rtB .
iuntmk0pqm = rtDW . nvlp11rn3a == 1 ? rtP . Saturation_UpperSat : rtDW .
nvlp11rn3a == - 1 ? rtP . Saturation_LowerSat : rtB . jrnsoabm5v ; akmqn3a4eg
= rtB . osjgev2jfz - 0.0 ; C31 = rtP . ProportionalGain_Gain_opm0dtoc1v *
akmqn3a4eg ; itszgm543j = rtX . e5ilpltgaf ; C32 = rtP .
DerivativeGain_Gain_pfs2epusuf * akmqn3a4eg ; d4bw4e4r4g = rtX . ldm2uo30vp ;
rtB . b2kmtindra = ( C32 - d4bw4e4r4g ) * rtP .
FilterCoefficient_Gain_ediatr1iqq ; rtB . hq20auavrt = ( C31 + itszgm543j ) +
rtB . b2kmtindra ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . nusy4aj0zr = rtB
. hq20auavrt >= rtP . Saturation_UpperSat_e2lmnhs4sw ? 1 : rtB . hq20auavrt >
rtP . Saturation_LowerSat_b5ltm0ubpa ? 0 : - 1 ; } rtB . b1nojvudsr = rtDW .
nusy4aj0zr == 1 ? rtP . Saturation_UpperSat_e2lmnhs4sw : rtDW . nusy4aj0zr ==
- 1 ? rtP . Saturation_LowerSat_b5ltm0ubpa : rtB . hq20auavrt ; d4bw4e4r4g =
rtB . iier5jnm1g - 0.0 ; C31 = rtP . ProportionalGain_Gain_o1sqswnaqc *
d4bw4e4r4g ; itszgm543j = rtX . o0ls511edu ; C32 = rtP .
DerivativeGain_Gain_hru04pbg0s * d4bw4e4r4g ; ocjga0uv4u = rtX . pcw0d3bv0m ;
rtB . f1mgl1s1xb = ( C32 - ocjga0uv4u ) * rtP .
FilterCoefficient_Gain_hiknh0un1z ; rtB . dvhl00qx2u = ( C31 + itszgm543j ) +
rtB . f1mgl1s1xb ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . i33y5j4e2i = rtB
. dvhl00qx2u >= rtP . Saturation_UpperSat_mneiexavww ? 1 : rtB . dvhl00qx2u >
rtP . Saturation_LowerSat_bhtm255dky ? 0 : - 1 ; } rtB . oawkdb23jw = rtDW .
i33y5j4e2i == 1 ? rtP . Saturation_UpperSat_mneiexavww : rtDW . i33y5j4e2i ==
- 1 ? rtP . Saturation_LowerSat_bhtm255dky : rtB . dvhl00qx2u ; rtB .
mvfxom43g2 = rtP . IntegralGain_Gain * C33 ; rtB . gepgtl2di2 = rtP .
IntegralGain_Gain_cjxryeebdo * akmqn3a4eg ; rtB . glyfzrufqc = rtP .
IntegralGain_Gain_c2fz3dj4be * d4bw4e4r4g ; simulationData = (
NeslSimulationData * ) rtDW . f4ygo2hyze ; time = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time ; simulationData -> mData -> mContStates . mN = 2 ;
simulationData -> mData -> mContStates . mX = ( real_T * ) & rtX . daoi22nz3l
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
; tmp_p [ 0U ] = rtB . dccd4mhei1 [ 0 ] ; tmp_p [ 1U ] = rtB . dccd4mhei1 [ 1
] ; tmp_p [ 2U ] = rtB . dccd4mhei1 [ 2 ] ; tmp_p [ 3U ] = rtB . dccd4mhei1 [
3 ] ; tmp_e [ 1U ] = 4 ; simulationData -> mData -> mInputValues . mN = 4 ;
simulationData -> mData -> mInputValues . mX = & tmp_p [ 0U ] ;
simulationData -> mData -> mInputOffsets . mN = 2 ; simulationData -> mData
-> mInputOffsets . mX = & tmp_e [ 0U ] ; simulationData -> mData -> mOutputs
. mN = 2 ; simulationData -> mData -> mOutputs . mX = & rtB . jjfsxd2pht [ 0U
] ; simulationData -> mData -> mSampleHits . mN = 0 ; simulationData -> mData
-> mSampleHits . mX = NULL ; simulationData -> mData ->
mIsFundamentalSampleHit = false ; simulator = ( NeslSimulator * ) rtDW .
ku2cbhbb3u ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . g3mxxyfx5h
; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; i = ne_simulator_method ( simulator , NESL_SIM_OUTPUTS
, simulationData , diagnosticManager ) ; if ( i != 0 ) { i =
rtw_diagnostics_message_count ( ) ; if ( i == 0 ) { msg = rtw_diagnostics_msg
( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } } simulationData = (
NeslSimulationData * ) rtDW . eqo2lqtdrq ; time_p = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_p ; simulationData -> mData -> mContStates . mN = 0 ;
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
-> mIsSolverRequestingReset = tmp ; tmp_m [ 0U ] = 0 ; tmp_i [ 0U ] = rtB .
dccd4mhei1 [ 0 ] ; tmp_i [ 1U ] = rtB . dccd4mhei1 [ 1 ] ; tmp_i [ 2U ] = rtB
. dccd4mhei1 [ 2 ] ; tmp_i [ 3U ] = rtB . dccd4mhei1 [ 3 ] ; tmp_m [ 1U ] = 4
; tmp_i [ 4U ] = rtB . jjfsxd2pht [ 0 ] ; tmp_i [ 5U ] = rtB . jjfsxd2pht [ 1
] ; tmp_m [ 2U ] = 6 ; simulationData -> mData -> mInputValues . mN = 6 ;
simulationData -> mData -> mInputValues . mX = & tmp_i [ 0U ] ;
simulationData -> mData -> mInputOffsets . mN = 3 ; simulationData -> mData
-> mInputOffsets . mX = & tmp_m [ 0U ] ; simulationData -> mData -> mOutputs
. mN = 1 ; simulationData -> mData -> mOutputs . mX = & rtB . kpgvwiv1ba ;
simulationData -> mData -> mSampleHits . mN = 0 ; simulationData -> mData ->
mSampleHits . mX = NULL ; simulationData -> mData -> mIsFundamentalSampleHit
= false ; simulator = ( NeslSimulator * ) rtDW . m1qd0xfu3n ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . epnuqlho43 ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; i = ne_simulator_method ( simulator , NESL_SIM_OUTPUTS , simulationData ,
diagnosticManager ) ; if ( i != 0 ) { i = rtw_diagnostics_message_count ( ) ;
if ( i == 0 ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ;
ssSetErrorStatus ( rtS , msg ) ; } } simulationData = ( NeslSimulationData *
) rtDW . cckhbqzmkz ; time_e = ssGetT ( rtS ) ; simulationData -> mData ->
mTime . mN = 1 ; simulationData -> mData -> mTime . mX = & time_e ;
simulationData -> mData -> mContStates . mN = 0 ; simulationData -> mData ->
mContStates . mX = NULL ; simulationData -> mData -> mDiscStates . mN = 1 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . bkz3pip0b3 ;
simulationData -> mData -> mModeVector . mN = 0 ; simulationData -> mData ->
mModeVector . mX = NULL ; tmp = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData -> mData
-> mFoundZcEvents = tmp ; simulationData -> mData -> mIsMajorTimeStep = true
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; simulationData -> mData -> mIsComputingJacobian
= false ; tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData
-> mIsSolverRequestingReset = tmp ; tmp_j [ 0U ] = 0 ; tmp_g [ 0U ] = rtB .
kpgvwiv1ba ; tmp_j [ 1U ] = 1 ; tmp_g [ 1U ] = 0.0 ; tmp_j [ 2U ] = 2 ; tmp_g
[ 2U ] = 0.0 ; tmp_j [ 3U ] = 3 ; simulationData -> mData -> mInputValues .
mN = 3 ; simulationData -> mData -> mInputValues . mX = & tmp_g [ 0U ] ;
simulationData -> mData -> mInputOffsets . mN = 4 ; simulationData -> mData
-> mInputOffsets . mX = & tmp_j [ 0U ] ; simulationData -> mData -> mOutputs
. mN = 4 ; simulationData -> mData -> mOutputs . mX = & rtB . hyoklokl5z [ 0U
] ; simulationData -> mData -> mSampleHits . mN = 0 ; simulationData -> mData
-> mSampleHits . mX = NULL ; simulationData -> mData ->
mIsFundamentalSampleHit = false ; simulator = ( NeslSimulator * ) rtDW .
cra3jb3y0w ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . ngaoo2eejn
; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; i = ne_simulator_method ( simulator , NESL_SIM_OUTPUTS
, simulationData , diagnosticManager ) ; if ( i != 0 ) { i =
rtw_diagnostics_message_count ( ) ; if ( i == 0 ) { msg = rtw_diagnostics_msg
( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } } simulationData = (
NeslSimulationData * ) rtDW . c35s3qa5pe ; time_i = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_i ; simulationData -> mData -> mContStates . mN = 0 ;
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
-> mIsSolverRequestingReset = tmp ; tmp_c [ 0U ] = 0 ; tmp_f [ 0U ] = rtB .
hyoklokl5z [ 0 ] ; tmp_f [ 1U ] = rtB . hyoklokl5z [ 1 ] ; tmp_f [ 2U ] = rtB
. hyoklokl5z [ 2 ] ; tmp_f [ 3U ] = rtB . hyoklokl5z [ 3 ] ; tmp_c [ 1U ] = 4
; simulationData -> mData -> mInputValues . mN = 4 ; simulationData -> mData
-> mInputValues . mX = & tmp_f [ 0U ] ; simulationData -> mData ->
mInputOffsets . mN = 2 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_c [ 0U ] ; simulationData -> mData -> mOutputs . mN = 0 ; simulationData
-> mData -> mOutputs . mX = NULL ; simulationData -> mData -> mSampleHits .
mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ; simulationData
-> mData -> mIsFundamentalSampleHit = false ; simulator = ( NeslSimulator * )
rtDW . javjhfpea0 ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW .
kihgsxbg1w ; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; i = ne_simulator_method ( simulator , NESL_SIM_OUTPUTS
, simulationData , diagnosticManager ) ; if ( i != 0 ) { i =
rtw_diagnostics_message_count ( ) ; if ( i == 0 ) { msg = rtw_diagnostics_msg
( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } } simulationData = (
NeslSimulationData * ) rtDW . mcvrzvza0a ; time_m = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_m ; simulationData -> mData -> mContStates . mN = 0 ;
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
-> mIsSolverRequestingReset = tmp ; tmp_b [ 0U ] = 0 ; tmp_k [ 0U ] = rtB .
hyoklokl5z [ 0 ] ; tmp_k [ 1U ] = rtB . hyoklokl5z [ 1 ] ; tmp_k [ 2U ] = rtB
. hyoklokl5z [ 2 ] ; tmp_k [ 3U ] = rtB . hyoklokl5z [ 3 ] ; tmp_b [ 1U ] = 4
; simulationData -> mData -> mInputValues . mN = 4 ; simulationData -> mData
-> mInputValues . mX = & tmp_k [ 0U ] ; simulationData -> mData ->
mInputOffsets . mN = 2 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_b [ 0U ] ; simulationData -> mData -> mOutputs . mN = 1 ; simulationData
-> mData -> mOutputs . mX = & rtB . eg4lb0s2bh ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulator = (
NeslSimulator * ) rtDW . c52ibvvdh2 ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . fvh45ypqnb ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; i =
ne_simulator_method ( simulator , NESL_SIM_OUTPUTS , simulationData ,
diagnosticManager ) ; if ( i != 0 ) { i = rtw_diagnostics_message_count ( ) ;
if ( i == 0 ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ;
ssSetErrorStatus ( rtS , msg ) ; } } simulationData = ( NeslSimulationData *
) rtDW . oquym14qcv ; time_g = ssGetT ( rtS ) ; simulationData -> mData ->
mTime . mN = 1 ; simulationData -> mData -> mTime . mX = & time_g ;
simulationData -> mData -> mContStates . mN = 0 ; simulationData -> mData ->
mContStates . mX = NULL ; simulationData -> mData -> mDiscStates . mN = 1 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . pkuuqhesdo ;
simulationData -> mData -> mModeVector . mN = 0 ; simulationData -> mData ->
mModeVector . mX = NULL ; tmp = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData -> mData
-> mFoundZcEvents = tmp ; simulationData -> mData -> mIsMajorTimeStep = true
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; simulationData -> mData -> mIsComputingJacobian
= false ; tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData
-> mIsSolverRequestingReset = tmp ; tmp_l [ 0U ] = 0 ; tmp_n [ 0U ] = rtB .
eg4lb0s2bh ; tmp_l [ 1U ] = 1 ; tmp_n [ 1U ] = 0.0 ; tmp_l [ 2U ] = 2 ; tmp_n
[ 2U ] = 0.0 ; tmp_l [ 3U ] = 3 ; simulationData -> mData -> mInputValues .
mN = 3 ; simulationData -> mData -> mInputValues . mX = & tmp_n [ 0U ] ;
simulationData -> mData -> mInputOffsets . mN = 4 ; simulationData -> mData
-> mInputOffsets . mX = & tmp_l [ 0U ] ; simulationData -> mData -> mOutputs
. mN = 4 ; simulationData -> mData -> mOutputs . mX = & rtB . dccd4mhei1 [ 0U
] ; simulationData -> mData -> mSampleHits . mN = 0 ; simulationData -> mData
-> mSampleHits . mX = NULL ; simulationData -> mData ->
mIsFundamentalSampleHit = false ; simulator = ( NeslSimulator * ) rtDW .
kxoqefzlou ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . om1znyxidc
; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; i = ne_simulator_method ( simulator , NESL_SIM_OUTPUTS
, simulationData , diagnosticManager ) ; if ( i != 0 ) { i =
rtw_diagnostics_message_count ( ) ; if ( i == 0 ) { msg = rtw_diagnostics_msg
( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } } simulationData = (
NeslSimulationData * ) rtDW . j2oaqyzpyc ; time_j = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_j ; simulationData -> mData -> mContStates . mN = 0 ;
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
-> mIsSolverRequestingReset = tmp ; tmp_o [ 0U ] = 0 ; tmp_d [ 0U ] = rtB .
dccd4mhei1 [ 0 ] ; tmp_d [ 1U ] = rtB . dccd4mhei1 [ 1 ] ; tmp_d [ 2U ] = rtB
. dccd4mhei1 [ 2 ] ; tmp_d [ 3U ] = rtB . dccd4mhei1 [ 3 ] ; tmp_o [ 1U ] = 4
; tmp_d [ 4U ] = rtB . jjfsxd2pht [ 0 ] ; tmp_d [ 5U ] = rtB . jjfsxd2pht [ 1
] ; tmp_o [ 2U ] = 6 ; simulationData -> mData -> mInputValues . mN = 6 ;
simulationData -> mData -> mInputValues . mX = & tmp_d [ 0U ] ;
simulationData -> mData -> mInputOffsets . mN = 3 ; simulationData -> mData
-> mInputOffsets . mX = & tmp_o [ 0U ] ; simulationData -> mData -> mOutputs
. mN = 0 ; simulationData -> mData -> mOutputs . mX = NULL ; simulationData
-> mData -> mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits .
mX = NULL ; simulationData -> mData -> mIsFundamentalSampleHit = false ;
simulator = ( NeslSimulator * ) rtDW . fxum5hjnru ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . lhhgzjnvtn ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; i =
ne_simulator_method ( simulator , NESL_SIM_OUTPUTS , simulationData ,
diagnosticManager ) ; if ( i != 0 ) { i = rtw_diagnostics_message_count ( ) ;
if ( i == 0 ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ;
ssSetErrorStatus ( rtS , msg ) ; } } simulationData = ( NeslSimulationData *
) rtDW . gcums0dzz2 ; time_f = ssGetT ( rtS ) ; simulationData -> mData ->
mTime . mN = 1 ; simulationData -> mData -> mTime . mX = & time_f ;
simulationData -> mData -> mContStates . mN = 0 ; simulationData -> mData ->
mContStates . mX = NULL ; simulationData -> mData -> mDiscStates . mN = 0 ;
simulationData -> mData -> mDiscStates . mX = NULL ; simulationData -> mData
-> mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = NULL
; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) ->
foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents = tmp ;
simulationData -> mData -> mIsMajorTimeStep = true ; tmp = ( ssGetMdlInfoPtr
( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; simulationData ->
mData -> mIsComputingJacobian = false ; tmp = ssIsSolverRequestingReset ( rtS
) ; simulationData -> mData -> mIsSolverRequestingReset = tmp ; tmp_fs [ 0U ]
= 0 ; tmp_dz [ 0U ] = rtB . hyoklokl5z [ 0 ] ; tmp_dz [ 1U ] = rtB .
hyoklokl5z [ 1 ] ; tmp_dz [ 2U ] = rtB . hyoklokl5z [ 2 ] ; tmp_dz [ 3U ] =
rtB . hyoklokl5z [ 3 ] ; tmp_fs [ 1U ] = 4 ; simulationData -> mData ->
mInputValues . mN = 4 ; simulationData -> mData -> mInputValues . mX = &
tmp_dz [ 0U ] ; simulationData -> mData -> mInputOffsets . mN = 2 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_fs [ 0U ] ;
simulationData -> mData -> mOutputs . mN = 0 ; simulationData -> mData ->
mOutputs . mX = NULL ; simulationData -> mData -> mSampleHits . mN = 0 ;
simulationData -> mData -> mSampleHits . mX = NULL ; simulationData -> mData
-> mIsFundamentalSampleHit = false ; simulator = ( NeslSimulator * ) rtDW .
nyiiqtb3pj ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . lhf2yly352
; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; i = ne_simulator_method ( simulator , NESL_SIM_OUTPUTS
, simulationData , diagnosticManager ) ; if ( i != 0 ) { i =
rtw_diagnostics_message_count ( ) ; if ( i == 0 ) { msg = rtw_diagnostics_msg
( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } } UNUSED_PARAMETER (
tid ) ; } void MdlUpdate ( int_T tid ) { UNUSED_PARAMETER ( tid ) ; } void
MdlDerivatives ( void ) { NeslSimulationData * simulationData ; real_T time ;
boolean_T tmp ; real_T tmp_p [ 4 ] ; int_T tmp_e [ 2 ] ; NeslSimulator *
simulator ; NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree *
diagnosticTree ; int32_T tmp_i ; char * msg ; XDot * _rtXdot ; _rtXdot = ( (
XDot * ) ssGetdX ( rtS ) ) ; { ( ( XDot * ) ssGetdX ( rtS ) ) -> c4heiwjyo0 =
rtB . mvfxom43g2 ; } { ( ( XDot * ) ssGetdX ( rtS ) ) -> cytsrnzz24 = rtB .
aptbtwirg2 ; } { ( ( XDot * ) ssGetdX ( rtS ) ) -> e5ilpltgaf = rtB .
gepgtl2di2 ; } { ( ( XDot * ) ssGetdX ( rtS ) ) -> ldm2uo30vp = rtB .
b2kmtindra ; } { ( ( XDot * ) ssGetdX ( rtS ) ) -> o0ls511edu = rtB .
glyfzrufqc ; } { ( ( XDot * ) ssGetdX ( rtS ) ) -> pcw0d3bv0m = rtB .
f1mgl1s1xb ; } simulationData = ( NeslSimulationData * ) rtDW . f4ygo2hyze ;
time = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ;
simulationData -> mData -> mTime . mX = & time ; simulationData -> mData ->
mContStates . mN = 2 ; simulationData -> mData -> mContStates . mX = ( real_T
* ) & rtX . daoi22nz3l ; simulationData -> mData -> mDiscStates . mN = 0 ;
simulationData -> mData -> mDiscStates . mX = NULL ; simulationData -> mData
-> mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = NULL
; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) ->
foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents = tmp ;
simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp
= ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; tmp =
ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_e [ 0U ] = 0 ; tmp_p [ 0U ] = rtB .
dccd4mhei1 [ 0 ] ; tmp_p [ 1U ] = rtB . dccd4mhei1 [ 1 ] ; tmp_p [ 2U ] = rtB
. dccd4mhei1 [ 2 ] ; tmp_p [ 3U ] = rtB . dccd4mhei1 [ 3 ] ; tmp_e [ 1U ] = 4
; simulationData -> mData -> mInputValues . mN = 4 ; simulationData -> mData
-> mInputValues . mX = & tmp_p [ 0U ] ; simulationData -> mData ->
mInputOffsets . mN = 2 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_e [ 0U ] ; simulationData -> mData -> mDx . mN = 2 ; simulationData ->
mData -> mDx . mX = ( real_T * ) & _rtXdot -> daoi22nz3l ; simulator = (
NeslSimulator * ) rtDW . ku2cbhbb3u ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . g3mxxyfx5h ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( simulator , NESL_SIM_DERIVATIVES , simulationData ,
diagnosticManager ) ; if ( tmp_i != 0 ) { tmp_i =
rtw_diagnostics_message_count ( ) ; if ( tmp_i == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
} void MdlProjection ( void ) { NeslSimulationData * simulationData ; real_T
time ; boolean_T tmp ; real_T tmp_p [ 4 ] ; int_T tmp_e [ 2 ] ; NeslSimulator
* simulator ; NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree *
diagnosticTree ; int32_T tmp_i ; char * msg ; simulationData = (
NeslSimulationData * ) rtDW . f4ygo2hyze ; time = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time ; simulationData -> mData -> mContStates . mN = 2 ;
simulationData -> mData -> mContStates . mX = ( real_T * ) & rtX . daoi22nz3l
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
; tmp_p [ 0U ] = rtB . dccd4mhei1 [ 0 ] ; tmp_p [ 1U ] = rtB . dccd4mhei1 [ 1
] ; tmp_p [ 2U ] = rtB . dccd4mhei1 [ 2 ] ; tmp_p [ 3U ] = rtB . dccd4mhei1 [
3 ] ; tmp_e [ 1U ] = 4 ; simulationData -> mData -> mInputValues . mN = 4 ;
simulationData -> mData -> mInputValues . mX = & tmp_p [ 0U ] ;
simulationData -> mData -> mInputOffsets . mN = 2 ; simulationData -> mData
-> mInputOffsets . mX = & tmp_e [ 0U ] ; simulator = ( NeslSimulator * ) rtDW
. ku2cbhbb3u ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW .
g3mxxyfx5h ; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp_i = ne_simulator_method ( simulator ,
NESL_SIM_PROJECTION , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp_i = rtw_diagnostics_message_count ( ) ; if ( tmp_i == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
} void MdlZeroCrossings ( void ) { ZCV * _rtZCSV ; _rtZCSV = ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) ; _rtZCSV -> mwqoushr4t = rtB .
jrnsoabm5v - rtP . Saturation_UpperSat ; _rtZCSV -> ktu22l2ybc = rtB .
jrnsoabm5v - rtP . Saturation_LowerSat ; _rtZCSV -> injupbslsr = rtB .
hq20auavrt - rtP . Saturation_UpperSat_e2lmnhs4sw ; _rtZCSV -> mpwhqk1v0r =
rtB . hq20auavrt - rtP . Saturation_LowerSat_b5ltm0ubpa ; _rtZCSV ->
lrqup5u2mg = rtB . dvhl00qx2u - rtP . Saturation_UpperSat_mneiexavww ;
_rtZCSV -> pkjggipfmr = rtB . dvhl00qx2u - rtP .
Saturation_LowerSat_bhtm255dky ; } void MdlTerminate ( void ) {
neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW . g3mxxyfx5h
) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW . f4ygo2hyze
) ; nesl_erase_simulator (
"friccion_aislada/Robot Delta/Solver Configuration" ) ;
neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW . epnuqlho43
) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW . eqo2lqtdrq
) ; nesl_erase_simulator (
"friccion_aislada/Robot Delta/Solver Configuration" ) ;
neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW . ngaoo2eejn
) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW . cckhbqzmkz
) ; nesl_erase_simulator (
"friccion_aislada/Robot Delta/Solver Configuration" ) ;
neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW . kihgsxbg1w
) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW . c35s3qa5pe
) ; nesl_erase_simulator (
"friccion_aislada/Robot Delta/Solver Configuration" ) ;
neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW . fvh45ypqnb
) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW . mcvrzvza0a
) ; nesl_erase_simulator (
"friccion_aislada/Robot Delta/Solver Configuration" ) ;
neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW . om1znyxidc
) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW . oquym14qcv
) ; nesl_erase_simulator (
"friccion_aislada/Robot Delta/Solver Configuration" ) ;
neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW . lhhgzjnvtn
) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW . j2oaqyzpyc
) ; nesl_erase_simulator (
"friccion_aislada/Robot Delta/Solver Configuration" ) ;
neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW . lhf2yly352
) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW . gcums0dzz2
) ; nesl_erase_simulator (
"friccion_aislada/Robot Delta/Solver Configuration" ) ; } void
MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS , 8 ) ; ssSetNumY (
rtS , 0 ) ; ssSetNumU ( rtS , 0 ) ; ssSetDirectFeedThrough ( rtS , 0 ) ;
ssSetNumSampleTimes ( rtS , 1 ) ; ssSetNumBlocks ( rtS , 84 ) ;
ssSetNumBlockIO ( rtS , 23 ) ; ssSetNumBlockParams ( rtS , 26 ) ; } void
MdlInitializeSampleTimes ( void ) { ssSetSampleTime ( rtS , 0 , 0.0 ) ;
ssSetOffsetTime ( rtS , 0 , 0.0 ) ; } void raccel_set_checksum ( SimStruct *
rtS ) { ssSetChecksumVal ( rtS , 0 , 3037672637U ) ; ssSetChecksumVal ( rtS ,
1 , 3485007851U ) ; ssSetChecksumVal ( rtS , 2 , 4196739282U ) ;
ssSetChecksumVal ( rtS , 3 , 104019543U ) ; } SimStruct *
raccel_register_model ( void ) { static struct _ssMdlInfo mdlInfo ; ( void )
memset ( ( char * ) rtS , 0 , sizeof ( SimStruct ) ) ; ( void ) memset ( (
char * ) & mdlInfo , 0 , sizeof ( struct _ssMdlInfo ) ) ; ssSetMdlInfoPtr (
rtS , & mdlInfo ) ; { static time_T mdlPeriod [ NSAMPLE_TIMES ] ; static
time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T mdlTaskTimes [
NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ; static int_T
mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T mdlTNextWasAdjustedPtr [
NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits [ NSAMPLE_TIMES *
NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [ NSAMPLE_TIMES ] ; {
int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) { mdlPeriod [ i ] = 0.0 ;
mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ; mdlTsMap [ i ] = i ;
mdlSampleHits [ i ] = 1 ; } } ssSetSampleTimePtr ( rtS , & mdlPeriod [ 0 ] )
; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ; ssSetSampleTimeTaskIDPtr (
rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , & mdlTaskTimes [ 0 ] ) ;
ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ; ssSetTNextWasAdjustedPtr
( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ; ssSetPerTaskSampleHitsPtr ( rtS ,
& mdlPerTaskSampleHits [ 0 ] ) ; ssSetTimeOfNextSampleHitPtr ( rtS , &
mdlTimeOfNextSampleHit [ 0 ] ) ; } ssSetSolverMode ( rtS ,
SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS , ( ( void * ) & rtB ) ) ;
( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof ( B ) ) ; }
ssSetDefaultParam ( rtS , ( real_T * ) & rtP ) ; { real_T * x = ( real_T * )
& rtX ; ssSetContStates ( rtS , x ) ; ( void ) memset ( ( void * ) x , 0 ,
sizeof ( X ) ) ; } { void * dwork = ( void * ) & rtDW ; ssSetRootDWork ( rtS
, dwork ) ; ( void ) memset ( dwork , 0 , sizeof ( DW ) ) ; } { static
DataTypeTransInfo dtInfo ; ( void ) memset ( ( char_T * ) & dtInfo , 0 ,
sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS , & dtInfo ) ; dtInfo .
numDataTypes = 14 ; dtInfo . dataTypeSizes = & rtDataTypeSizes [ 0 ] ; dtInfo
. dataTypeNames = & rtDataTypeNames [ 0 ] ; dtInfo . B = & rtBTransTable ;
dtInfo . P = & rtPTransTable ; } friccion_aislada_InitializeDataMapInfo ( rtS
) ; ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS , rtS )
; ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS ,
"friccion_aislada" ) ; ssSetPath ( rtS , "friccion_aislada" ) ; ssSetTStart (
rtS , 0.0 ) ; ssSetTFinal ( rtS , 13.0 ) ; { static RTWLogInfo
rt_DataLoggingInfo ; ssSetRTWLogInfo ( rtS , & rt_DataLoggingInfo ) ; } { {
static int_T rt_LoggedStateWidths [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 } ; static int_T rt_LoggedStateNumDimensions [ ] = { 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 } ; static int_T rt_LoggedStateDimensions [ ] = { 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 } ; static boolean_T rt_LoggedStateIsVarDims [ ] =
{ 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static BuiltInDTypeId
rt_LoggedStateDataTypeIds [ ] = { SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE } ; static int_T rt_LoggedStateComplexSignals [ ] = { 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 } ; static const char_T * rt_LoggedStateLabels [ ] =
{ "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE"
, "CSTATE" , "DiscStates" , "DiscStates" } ; static const char_T *
rt_LoggedStateBlockNames [ ] = {
"friccion_aislada/Subsystem/Control M1/PID Controller1/Integrator" ,
"friccion_aislada/Subsystem/Control M1/PID Controller1/Filter" ,
"friccion_aislada/Subsystem/Control M2/PID Controller1/Integrator" ,
"friccion_aislada/Subsystem/Control M2/PID Controller1/Filter" ,
"friccion_aislada/Subsystem/Control M3/PID Controller1/Integrator" ,
"friccion_aislada/Subsystem/Control M3/PID Controller1/Filter" ,
"friccion_aislada/Robot Delta/Revolute1" ,
"friccion_aislada/Robot Delta/Revolute1" ,
"friccion_aislada/Robot Delta/Solver\nConfiguration/EVAL_KEY/EXEC_INPUT_10" ,
"friccion_aislada/Robot Delta/Solver\nConfiguration/EVAL_KEY/EXEC_INPUT_9" }
; static const char_T * rt_LoggedStateNames [ ] = { "" , "" , "" , "" , "" ,
"" , "Robot_Delta.Revolute1.Rz.q" , "Robot_Delta.Revolute1.Rz.w" , "" , "" }
; static boolean_T rt_LoggedStateCrossMdlRef [ ] = { 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 } ; static RTWLogDataTypeConvert rt_RTWLogDataTypeConvert [ ] =
{ { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE
, SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 ,
0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } } ; static
RTWLogSignalInfo rt_LoggedStateSignalInfo = { 10 , rt_LoggedStateWidths ,
rt_LoggedStateNumDimensions , rt_LoggedStateDimensions ,
rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , { rt_LoggedStateLabels } , ( NULL )
, ( NULL ) , ( NULL ) , { rt_LoggedStateBlockNames } , { rt_LoggedStateNames
} , rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert } ; static void *
rt_LoggedStateSignalPtrs [ 10 ] ; rtliSetLogXSignalPtrs ( ssGetRTWLogInfo (
rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtX . c4heiwjyo0 ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtX . cytsrnzz24 ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtX . e5ilpltgaf ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) & rtX . ldm2uo30vp ;
rt_LoggedStateSignalPtrs [ 4 ] = ( void * ) & rtX . o0ls511edu ;
rt_LoggedStateSignalPtrs [ 5 ] = ( void * ) & rtX . pcw0d3bv0m ;
rt_LoggedStateSignalPtrs [ 6 ] = ( void * ) & rtX . daoi22nz3l [ 0 ] ;
rt_LoggedStateSignalPtrs [ 7 ] = ( void * ) & rtX . daoi22nz3l [ 1 ] ;
rt_LoggedStateSignalPtrs [ 8 ] = ( void * ) & rtDW . bkz3pip0b3 ;
rt_LoggedStateSignalPtrs [ 9 ] = ( void * ) & rtDW . pkuuqhesdo ; }
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
mdlMethods2 ; static boolean_T contStatesDisabled [ 8 ] ; static real_T
absTol [ 8 ] = { 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6
, 1.0E-6 } ; static uint8_T absTolControl [ 8 ] = { 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U } ; static uint8_T zcAttributes [ 6 ] = { ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) } ; ssSetSolverRelTol ( rtS , 0.001 ) ; ssSetStepSize ( rtS ,
0.0 ) ; ssSetMinStepSize ( rtS , 0.0 ) ; ssSetMaxNumMinSteps ( rtS , - 1 ) ;
ssSetMinStepViolatedError ( rtS , 0 ) ; ssSetMaxStepSize ( rtS , 0.26 ) ;
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
rtS , zcAttributes ) ; ssSetSolverNumZcSignals ( rtS , 6 ) ;
ssSetModelZeroCrossings ( rtS , MdlZeroCrossings ) ;
ssSetSolverConsecutiveZCsStepRelTol ( rtS , 2.8421709430404007E-13 ) ;
ssSetSolverMaxConsecutiveZCs ( rtS , 1000 ) ; ssSetSolverConsecutiveZCsError
( rtS , 2 ) ; ssSetSolverMaskedZcDiagnostic ( rtS , 1 ) ;
ssSetSolverIgnoredZcDiagnostic ( rtS , 1 ) ; ssSetSolverMaxConsecutiveMinStep
( rtS , 1 ) ; ssSetSolverShapePreserveControl ( rtS , 2 ) ; ssSetTNextTid (
rtS , INT_MIN ) ; ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset (
rtS ) ; ssSetNumNonsampledZCs ( rtS , 6 ) ; ssSetContStateDisabled ( rtS ,
contStatesDisabled ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ; }
ssSetChecksumVal ( rtS , 0 , 3037672637U ) ; ssSetChecksumVal ( rtS , 1 ,
3485007851U ) ; ssSetChecksumVal ( rtS , 2 , 4196739282U ) ; ssSetChecksumVal
( rtS , 3 , 104019543U ) ; { static const sysRanDType rtAlwaysEnabled =
SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo rt_ExtModeInfo ; static const
sysRanDType * systemRan [ 3 ] ; ssSetRTWExtModeInfo ( rtS , & rt_ExtModeInfo
) ; rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo , systemRan ) ;
systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = & rtAlwaysEnabled ;
systemRan [ 2 ] = & rtAlwaysEnabled ; rteiSetModelMappingInfoPtr (
ssGetRTWExtModeInfo ( rtS ) , & ssGetModelMappingInfo ( rtS ) ) ;
rteiSetChecksumsPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetChecksums ( rtS ) )
; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetTPtr ( rtS ) ) ; } return
rtS ; }
