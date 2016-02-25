#include "__cf_friccion_aislada_esferica.h"
#include "rt_logging_mmi.h"
#include "friccion_aislada_esferica_capi.h"
#include <math.h>
#include "friccion_aislada_esferica.h"
#include "friccion_aislada_esferica_private.h"
#include "friccion_aislada_esferica_dt.h"
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
 "slprj\\raccel\\friccion_aislada_esferica\\friccion_aislada_esferica_Jpattern.mat"
; const int_T gblNumRootInportBlks = 0 ; const int_T gblNumModelInputs = 0 ;
extern rtInportTUtable * gblInportTUtables ; extern const char *
gblInportFileName ; const int_T gblInportDataTypeIdx [ ] = { - 1 } ; const
int_T gblInportDims [ ] = { - 1 } ; const int_T gblInportComplex [ ] = { - 1
} ; const int_T gblInportInterpoFlag [ ] = { - 1 } ; const int_T
gblInportContinuous [ ] = { - 1 } ;
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
rtw_diagnostics_reset ( ) ; rtw_diagnostics_reset ( ) ; rtw_diagnostics_reset
( ) ; rtw_diagnostics_reset ( ) ; rtw_diagnostics_reset ( ) ;
rtw_diagnostics_reset ( ) ; rtw_diagnostics_reset ( ) ; rtw_diagnostics_reset
( ) ; rtw_diagnostics_reset ( ) ; rtw_diagnostics_reset ( ) ;
rtw_diagnostics_reset ( ) ; rtw_diagnostics_reset ( ) ; } void MdlStart (
void ) { NeuDiagnosticManager * diagnosticManager ; NeBoolVector fimtsVector
; boolean_T fimts [ 6 ] ; real_T modelParameters_mSolverTolerance ; real_T
modelParameters_mFixedStepSize ; boolean_T
modelParameters_mVariableStepSolver ; NeslSimulator * simulator ;
NeuDiagnosticTree * diagnosticTree ; int32_T tmp ; char * msg ;
NeslSimulationData * simulationData ; real_T time ; NeBoolVector
fimtsVector_p ; boolean_T fimts_p [ 7 ] ; real_T time_p ; NeBoolVector
fimtsVector_e ; boolean_T fimts_e [ 3 ] ; real_T time_e ; NeBoolVector
fimtsVector_i ; boolean_T fimts_i ; real_T time_i ; NeBoolVector
fimtsVector_m ; boolean_T fimts_m [ 3 ] ; real_T time_m ; NeBoolVector
fimtsVector_g ; boolean_T fimts_g ; real_T time_g ; NeBoolVector
fimtsVector_j ; boolean_T fimts_j [ 3 ] ; real_T time_j ; NeBoolVector
fimtsVector_f ; boolean_T fimts_f ; real_T time_f ; NeBoolVector
fimtsVector_c ; boolean_T fimts_c ; real_T time_c ; NeBoolVector
fimtsVector_k ; boolean_T fimts_k [ 3 ] ; real_T time_k ; NeBoolVector
fimtsVector_b ; boolean_T fimts_b ; real_T time_b ; NeBoolVector
fimtsVector_n ; boolean_T fimts_n [ 3 ] ; real_T time_n ; NeBoolVector
fimtsVector_l ; boolean_T fimts_l ; real_T time_l ; NeBoolVector
fimtsVector_d ; boolean_T fimts_d [ 3 ] ; real_T time_d ; NeBoolVector
fimtsVector_o ; boolean_T fimts_o [ 7 ] ; real_T time_o ; NeBoolVector
fimtsVector_dz ; boolean_T fimts_dz ; real_T time_dz ; NeBoolVector
fimtsVector_fs ; boolean_T fimts_fs ; real_T time_fs ; NeBoolVector
fimtsVector_ck ; boolean_T fimts_ck ; real_T time_ck ; NeModelParameters
expl_temp ; NeModelParameters expl_temp_p ; NeModelParameters expl_temp_e ;
NeModelParameters expl_temp_i ; NeModelParameters expl_temp_m ;
NeModelParameters expl_temp_g ; NeModelParameters expl_temp_j ;
NeModelParameters expl_temp_f ; NeModelParameters expl_temp_c ;
NeModelParameters expl_temp_k ; NeModelParameters expl_temp_b ;
NeModelParameters expl_temp_n ; NeModelParameters expl_temp_l ;
NeModelParameters expl_temp_d ; NeModelParameters expl_temp_o ;
NeModelParameters expl_temp_dz ; NeModelParameters expl_temp_fs ;
NeModelParameters expl_temp_ck ; simulator = nesl_lease_simulator (
"friccion_aislada_esferica/Robot Delta/Solver Configuration" , 0 , 3 ) ; rtDW
. oh2nksyqvj = ( void * ) simulator ; modelParameters_mVariableStepSolver =
pointer_is_null ( rtDW . oh2nksyqvj ) ; if (
modelParameters_mVariableStepSolver ) {
friccion_aislada_esferica_e48f9f4d_gateway ( ) ; simulator =
nesl_lease_simulator (
"friccion_aislada_esferica/Robot Delta/Solver Configuration" , 0 , 3 ) ; rtDW
. oh2nksyqvj = ( void * ) simulator ; } simulationData =
nesl_create_simulation_data ( ) ; rtDW . piiowhvoq3 = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
n0nnoz5d3k = ( void * ) diagnosticManager ; fimts [ 0U ] = false ; fimts [ 1U
] = false ; fimts [ 2U ] = false ; fimts [ 3U ] = false ; fimts [ 4U ] =
false ; fimts [ 5U ] = false ; fimtsVector . mN = 6 ; fimtsVector . mX = &
fimts [ 0U ] ; modelParameters_mSolverTolerance = 0.001 ;
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
-> mTime . mX = & time ; simulationData -> mData -> mContStates . mN = 14 ;
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
"friccion_aislada_esferica/Robot Delta/Solver Configuration" , 3 , 3 ) ; rtDW
. m5lvlhykau = ( void * ) simulator ; modelParameters_mVariableStepSolver =
pointer_is_null ( rtDW . m5lvlhykau ) ; if (
modelParameters_mVariableStepSolver ) {
friccion_aislada_esferica_e48f9f4d_gateway ( ) ; simulator =
nesl_lease_simulator (
"friccion_aislada_esferica/Robot Delta/Solver Configuration" , 3 , 3 ) ; rtDW
. m5lvlhykau = ( void * ) simulator ; } simulationData =
nesl_create_simulation_data ( ) ; rtDW . i4aru4d13y = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
psaiktqsay = ( void * ) diagnosticManager ; fimts_p [ 0U ] = false ; fimts_p
[ 1U ] = false ; fimts_p [ 2U ] = false ; fimts_p [ 3U ] = false ; fimts_p [
4U ] = false ; fimts_p [ 5U ] = false ; fimts_p [ 6U ] = false ;
fimtsVector_p . mN = 7 ; fimtsVector_p . mX = & fimts_p [ 0U ] ;
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
"friccion_aislada_esferica/Robot Delta/Solver Configuration" , 2 , 4 ) ; rtDW
. kswjmadgur = ( void * ) simulator ; modelParameters_mVariableStepSolver =
pointer_is_null ( rtDW . kswjmadgur ) ; if (
modelParameters_mVariableStepSolver ) {
friccion_aislada_esferica_e48f9f4d_gateway ( ) ; simulator =
nesl_lease_simulator (
"friccion_aislada_esferica/Robot Delta/Solver Configuration" , 2 , 4 ) ; rtDW
. kswjmadgur = ( void * ) simulator ; } simulationData =
nesl_create_simulation_data ( ) ; rtDW . jstvsrdxec = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
bwrk1jrfjh = ( void * ) diagnosticManager ; fimts_e [ 0U ] = false ; fimts_e
[ 1U ] = false ; fimts_e [ 2U ] = false ; fimtsVector_e . mN = 3 ;
fimtsVector_e . mX = & fimts_e [ 0U ] ; modelParameters_mSolverTolerance =
0.001 ; modelParameters_mFixedStepSize = 0.0 ;
modelParameters_mVariableStepSolver = true ; simulator = ( NeslSimulator * )
rtDW . kswjmadgur ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW .
bwrk1jrfjh ; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
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
simulationData = ( NeslSimulationData * ) rtDW . jstvsrdxec ; time_e = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_e ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 1 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . g0ybx5ny0s ; simulationData -> mData -> mModeVector . mN = 0 ;
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
kswjmadgur ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . bwrk1jrfjh
; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp = ne_simulator_method ( simulator , NESL_SIM_START
, simulationData , diagnosticManager ) ; if ( tmp != 0 ) { tmp =
rtw_diagnostics_message_count ( ) ; if ( tmp == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulator = nesl_lease_simulator (
"friccion_aislada_esferica/Robot Delta/Solver Configuration" , 1 , 0 ) ; rtDW
. gtt25diae4 = ( void * ) simulator ; modelParameters_mVariableStepSolver =
pointer_is_null ( rtDW . gtt25diae4 ) ; if (
modelParameters_mVariableStepSolver ) {
friccion_aislada_esferica_e48f9f4d_gateway ( ) ; simulator =
nesl_lease_simulator (
"friccion_aislada_esferica/Robot Delta/Solver Configuration" , 1 , 0 ) ; rtDW
. gtt25diae4 = ( void * ) simulator ; } simulationData =
nesl_create_simulation_data ( ) ; rtDW . bzrmjhnabu = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
is3dc1o4zz = ( void * ) diagnosticManager ; fimts_i = false ; fimtsVector_i .
mN = 1 ; fimtsVector_i . mX = & fimts_i ; modelParameters_mSolverTolerance =
0.001 ; modelParameters_mFixedStepSize = 0.0 ;
modelParameters_mVariableStepSolver = true ; simulator = ( NeslSimulator * )
rtDW . gtt25diae4 ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW .
is3dc1o4zz ; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
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
simulationData = ( NeslSimulationData * ) rtDW . bzrmjhnabu ; time_i = ssGetT
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
gtt25diae4 ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . is3dc1o4zz
; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp = ne_simulator_method ( simulator , NESL_SIM_START
, simulationData , diagnosticManager ) ; if ( tmp != 0 ) { tmp =
rtw_diagnostics_message_count ( ) ; if ( tmp == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulator = nesl_lease_simulator (
"friccion_aislada_esferica/Robot Delta/Solver Configuration" , 2 , 5 ) ; rtDW
. jjazmhpwwr = ( void * ) simulator ; modelParameters_mVariableStepSolver =
pointer_is_null ( rtDW . jjazmhpwwr ) ; if (
modelParameters_mVariableStepSolver ) {
friccion_aislada_esferica_e48f9f4d_gateway ( ) ; simulator =
nesl_lease_simulator (
"friccion_aislada_esferica/Robot Delta/Solver Configuration" , 2 , 5 ) ; rtDW
. jjazmhpwwr = ( void * ) simulator ; } simulationData =
nesl_create_simulation_data ( ) ; rtDW . evijjolyva = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
pxp5ilgmi3 = ( void * ) diagnosticManager ; fimts_m [ 0U ] = false ; fimts_m
[ 1U ] = false ; fimts_m [ 2U ] = false ; fimtsVector_m . mN = 3 ;
fimtsVector_m . mX = & fimts_m [ 0U ] ; modelParameters_mSolverTolerance =
0.001 ; modelParameters_mFixedStepSize = 0.0 ;
modelParameters_mVariableStepSolver = true ; simulator = ( NeslSimulator * )
rtDW . jjazmhpwwr ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW .
pxp5ilgmi3 ; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
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
simulationData = ( NeslSimulationData * ) rtDW . evijjolyva ; time_m = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_m ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 1 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . citycn5tuj ; simulationData -> mData -> mModeVector . mN = 0 ;
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
jjazmhpwwr ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . pxp5ilgmi3
; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp = ne_simulator_method ( simulator , NESL_SIM_START
, simulationData , diagnosticManager ) ; if ( tmp != 0 ) { tmp =
rtw_diagnostics_message_count ( ) ; if ( tmp == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulator = nesl_lease_simulator (
"friccion_aislada_esferica/Robot Delta/Solver Configuration" , 1 , 1 ) ; rtDW
. dxh0qu5kpi = ( void * ) simulator ; modelParameters_mVariableStepSolver =
pointer_is_null ( rtDW . dxh0qu5kpi ) ; if (
modelParameters_mVariableStepSolver ) {
friccion_aislada_esferica_e48f9f4d_gateway ( ) ; simulator =
nesl_lease_simulator (
"friccion_aislada_esferica/Robot Delta/Solver Configuration" , 1 , 1 ) ; rtDW
. dxh0qu5kpi = ( void * ) simulator ; } simulationData =
nesl_create_simulation_data ( ) ; rtDW . gsrotkxe3w = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
aa1kkeyuws = ( void * ) diagnosticManager ; fimts_g = false ; fimtsVector_g .
mN = 1 ; fimtsVector_g . mX = & fimts_g ; modelParameters_mSolverTolerance =
0.001 ; modelParameters_mFixedStepSize = 0.0 ;
modelParameters_mVariableStepSolver = true ; simulator = ( NeslSimulator * )
rtDW . dxh0qu5kpi ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW .
aa1kkeyuws ; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
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
simulationData = ( NeslSimulationData * ) rtDW . gsrotkxe3w ; time_g = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_g ; simulationData -> mData -> mContStates . mN = 0 ;
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
"friccion_aislada_esferica/Robot Delta/Solver Configuration" , 2 , 3 ) ; rtDW
. flmlbqbmbh = ( void * ) simulator ; modelParameters_mVariableStepSolver =
pointer_is_null ( rtDW . flmlbqbmbh ) ; if (
modelParameters_mVariableStepSolver ) {
friccion_aislada_esferica_e48f9f4d_gateway ( ) ; simulator =
nesl_lease_simulator (
"friccion_aislada_esferica/Robot Delta/Solver Configuration" , 2 , 3 ) ; rtDW
. flmlbqbmbh = ( void * ) simulator ; } simulationData =
nesl_create_simulation_data ( ) ; rtDW . gkm0s0ctrk = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
iob4nznmac = ( void * ) diagnosticManager ; fimts_j [ 0U ] = false ; fimts_j
[ 1U ] = false ; fimts_j [ 2U ] = false ; fimtsVector_j . mN = 3 ;
fimtsVector_j . mX = & fimts_j [ 0U ] ; modelParameters_mSolverTolerance =
0.001 ; modelParameters_mFixedStepSize = 0.0 ;
modelParameters_mVariableStepSolver = true ; simulator = ( NeslSimulator * )
rtDW . flmlbqbmbh ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW .
iob4nznmac ; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
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
simulationData = ( NeslSimulationData * ) rtDW . gkm0s0ctrk ; time_j = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_j ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 1 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . mxwpzq1ids ; simulationData -> mData -> mModeVector . mN = 0 ;
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
flmlbqbmbh ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . iob4nznmac
; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp = ne_simulator_method ( simulator , NESL_SIM_START
, simulationData , diagnosticManager ) ; if ( tmp != 0 ) { tmp =
rtw_diagnostics_message_count ( ) ; if ( tmp == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulator = nesl_lease_simulator (
"friccion_aislada_esferica/Robot Delta/Solver Configuration" , 1 , 2 ) ; rtDW
. ahd5nxo5ee = ( void * ) simulator ; modelParameters_mVariableStepSolver =
pointer_is_null ( rtDW . ahd5nxo5ee ) ; if (
modelParameters_mVariableStepSolver ) {
friccion_aislada_esferica_e48f9f4d_gateway ( ) ; simulator =
nesl_lease_simulator (
"friccion_aislada_esferica/Robot Delta/Solver Configuration" , 1 , 2 ) ; rtDW
. ahd5nxo5ee = ( void * ) simulator ; } simulationData =
nesl_create_simulation_data ( ) ; rtDW . hwdzla2kb2 = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
l25nib43el = ( void * ) diagnosticManager ; fimts_f = false ; fimtsVector_f .
mN = 1 ; fimtsVector_f . mX = & fimts_f ; modelParameters_mSolverTolerance =
0.001 ; modelParameters_mFixedStepSize = 0.0 ;
modelParameters_mVariableStepSolver = true ; simulator = ( NeslSimulator * )
rtDW . ahd5nxo5ee ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW .
l25nib43el ; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
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
simulationData = ( NeslSimulationData * ) rtDW . hwdzla2kb2 ; time_f = ssGetT
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
ahd5nxo5ee ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . l25nib43el
; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp = ne_simulator_method ( simulator , NESL_SIM_START
, simulationData , diagnosticManager ) ; if ( tmp != 0 ) { tmp =
rtw_diagnostics_message_count ( ) ; if ( tmp == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulator = nesl_lease_simulator (
"friccion_aislada_esferica/Robot Delta/Solver Configuration" , 3 , 2 ) ; rtDW
. de0spn04mt = ( void * ) simulator ; modelParameters_mVariableStepSolver =
pointer_is_null ( rtDW . de0spn04mt ) ; if (
modelParameters_mVariableStepSolver ) {
friccion_aislada_esferica_e48f9f4d_gateway ( ) ; simulator =
nesl_lease_simulator (
"friccion_aislada_esferica/Robot Delta/Solver Configuration" , 3 , 2 ) ; rtDW
. de0spn04mt = ( void * ) simulator ; } simulationData =
nesl_create_simulation_data ( ) ; rtDW . gftgep1sjl = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
c2oj5ebuij = ( void * ) diagnosticManager ; fimts_c = false ; fimtsVector_c .
mN = 1 ; fimtsVector_c . mX = & fimts_c ; modelParameters_mSolverTolerance =
0.001 ; modelParameters_mFixedStepSize = 0.0 ;
modelParameters_mVariableStepSolver = true ; simulator = ( NeslSimulator * )
rtDW . de0spn04mt ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW .
c2oj5ebuij ; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
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
simulationData = ( NeslSimulationData * ) rtDW . gftgep1sjl ; time_c = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_c ; simulationData -> mData -> mContStates . mN = 0 ;
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
"friccion_aislada_esferica/Robot Delta/Solver Configuration" , 2 , 0 ) ; rtDW
. gpf31qpv5x = ( void * ) simulator ; modelParameters_mVariableStepSolver =
pointer_is_null ( rtDW . gpf31qpv5x ) ; if (
modelParameters_mVariableStepSolver ) {
friccion_aislada_esferica_e48f9f4d_gateway ( ) ; simulator =
nesl_lease_simulator (
"friccion_aislada_esferica/Robot Delta/Solver Configuration" , 2 , 0 ) ; rtDW
. gpf31qpv5x = ( void * ) simulator ; } simulationData =
nesl_create_simulation_data ( ) ; rtDW . jrmucmc5l0 = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
eow2enys5v = ( void * ) diagnosticManager ; fimts_k [ 0U ] = false ; fimts_k
[ 1U ] = false ; fimts_k [ 2U ] = false ; fimtsVector_k . mN = 3 ;
fimtsVector_k . mX = & fimts_k [ 0U ] ; modelParameters_mSolverTolerance =
0.001 ; modelParameters_mFixedStepSize = 0.0 ;
modelParameters_mVariableStepSolver = true ; simulator = ( NeslSimulator * )
rtDW . gpf31qpv5x ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW .
eow2enys5v ; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
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
simulationData = ( NeslSimulationData * ) rtDW . jrmucmc5l0 ; time_k = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_k ; simulationData -> mData -> mContStates . mN = 0 ;
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
"friccion_aislada_esferica/Robot Delta/Solver Configuration" , 3 , 0 ) ; rtDW
. mu0wco4dhv = ( void * ) simulator ; modelParameters_mVariableStepSolver =
pointer_is_null ( rtDW . mu0wco4dhv ) ; if (
modelParameters_mVariableStepSolver ) {
friccion_aislada_esferica_e48f9f4d_gateway ( ) ; simulator =
nesl_lease_simulator (
"friccion_aislada_esferica/Robot Delta/Solver Configuration" , 3 , 0 ) ; rtDW
. mu0wco4dhv = ( void * ) simulator ; } simulationData =
nesl_create_simulation_data ( ) ; rtDW . mw4azdjt0i = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
hpobr5dnto = ( void * ) diagnosticManager ; fimts_b = false ; fimtsVector_b .
mN = 1 ; fimtsVector_b . mX = & fimts_b ; modelParameters_mSolverTolerance =
0.001 ; modelParameters_mFixedStepSize = 0.0 ;
modelParameters_mVariableStepSolver = true ; simulator = ( NeslSimulator * )
rtDW . mu0wco4dhv ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW .
hpobr5dnto ; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; expl_temp_b . mVariableStepSolver =
modelParameters_mVariableStepSolver ; expl_temp_b . mUseSimState = false ;
expl_temp_b . mStartTime = 0.0 ; expl_temp_b . mSolverType =
NE_SOLVER_TYPE_ODE ; expl_temp_b . mSolverTolerance =
modelParameters_mSolverTolerance ; expl_temp_b . mLoggingMode =
SSC_LOGGING_NONE ; expl_temp_b . mLoadInitialState = false ; expl_temp_b .
mLinTrimCompile = false ; expl_temp_b . mFixedStepSize =
modelParameters_mFixedStepSize ; tmp = nesl_initialize_simulator ( simulator
, expl_temp_b , & fimtsVector_b , diagnosticManager ) ; if ( tmp != 0 ) { tmp
= rtw_diagnostics_message_count ( ) ; if ( tmp == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . mw4azdjt0i ; time_b = ssGetT
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
mu0wco4dhv ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . hpobr5dnto
; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp = ne_simulator_method ( simulator , NESL_SIM_START
, simulationData , diagnosticManager ) ; if ( tmp != 0 ) { tmp =
rtw_diagnostics_message_count ( ) ; if ( tmp == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulator = nesl_lease_simulator (
"friccion_aislada_esferica/Robot Delta/Solver Configuration" , 2 , 2 ) ; rtDW
. j5smstjan3 = ( void * ) simulator ; modelParameters_mVariableStepSolver =
pointer_is_null ( rtDW . j5smstjan3 ) ; if (
modelParameters_mVariableStepSolver ) {
friccion_aislada_esferica_e48f9f4d_gateway ( ) ; simulator =
nesl_lease_simulator (
"friccion_aislada_esferica/Robot Delta/Solver Configuration" , 2 , 2 ) ; rtDW
. j5smstjan3 = ( void * ) simulator ; } simulationData =
nesl_create_simulation_data ( ) ; rtDW . dntzyn5tmg = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
pinay1nrr3 = ( void * ) diagnosticManager ; fimts_n [ 0U ] = false ; fimts_n
[ 1U ] = false ; fimts_n [ 2U ] = false ; fimtsVector_n . mN = 3 ;
fimtsVector_n . mX = & fimts_n [ 0U ] ; modelParameters_mSolverTolerance =
0.001 ; modelParameters_mFixedStepSize = 0.0 ;
modelParameters_mVariableStepSolver = true ; simulator = ( NeslSimulator * )
rtDW . j5smstjan3 ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW .
pinay1nrr3 ; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; expl_temp_n . mVariableStepSolver =
modelParameters_mVariableStepSolver ; expl_temp_n . mUseSimState = false ;
expl_temp_n . mStartTime = 0.0 ; expl_temp_n . mSolverType =
NE_SOLVER_TYPE_ODE ; expl_temp_n . mSolverTolerance =
modelParameters_mSolverTolerance ; expl_temp_n . mLoggingMode =
SSC_LOGGING_NONE ; expl_temp_n . mLoadInitialState = false ; expl_temp_n .
mLinTrimCompile = false ; expl_temp_n . mFixedStepSize =
modelParameters_mFixedStepSize ; tmp = nesl_initialize_simulator ( simulator
, expl_temp_n , & fimtsVector_n , diagnosticManager ) ; if ( tmp != 0 ) { tmp
= rtw_diagnostics_message_count ( ) ; if ( tmp == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . dntzyn5tmg ; time_n = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_n ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 1 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . lqg4ib442l ; simulationData -> mData -> mModeVector . mN = 0 ;
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
"friccion_aislada_esferica/Robot Delta/Solver Configuration" , 3 , 1 ) ; rtDW
. nviurbkyfu = ( void * ) simulator ; modelParameters_mVariableStepSolver =
pointer_is_null ( rtDW . nviurbkyfu ) ; if (
modelParameters_mVariableStepSolver ) {
friccion_aislada_esferica_e48f9f4d_gateway ( ) ; simulator =
nesl_lease_simulator (
"friccion_aislada_esferica/Robot Delta/Solver Configuration" , 3 , 1 ) ; rtDW
. nviurbkyfu = ( void * ) simulator ; } simulationData =
nesl_create_simulation_data ( ) ; rtDW . gksf2y3xqu = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
nyzomkvmej = ( void * ) diagnosticManager ; fimts_l = false ; fimtsVector_l .
mN = 1 ; fimtsVector_l . mX = & fimts_l ; modelParameters_mSolverTolerance =
0.001 ; modelParameters_mFixedStepSize = 0.0 ;
modelParameters_mVariableStepSolver = true ; simulator = ( NeslSimulator * )
rtDW . nviurbkyfu ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW .
nyzomkvmej ; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
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
simulationData = ( NeslSimulationData * ) rtDW . gksf2y3xqu ; time_l = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_l ; simulationData -> mData -> mContStates . mN = 0 ;
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
nviurbkyfu ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . nyzomkvmej
; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp = ne_simulator_method ( simulator , NESL_SIM_START
, simulationData , diagnosticManager ) ; if ( tmp != 0 ) { tmp =
rtw_diagnostics_message_count ( ) ; if ( tmp == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulator = nesl_lease_simulator (
"friccion_aislada_esferica/Robot Delta/Solver Configuration" , 2 , 1 ) ; rtDW
. ndnwrahj5v = ( void * ) simulator ; modelParameters_mVariableStepSolver =
pointer_is_null ( rtDW . ndnwrahj5v ) ; if (
modelParameters_mVariableStepSolver ) {
friccion_aislada_esferica_e48f9f4d_gateway ( ) ; simulator =
nesl_lease_simulator (
"friccion_aislada_esferica/Robot Delta/Solver Configuration" , 2 , 1 ) ; rtDW
. ndnwrahj5v = ( void * ) simulator ; } simulationData =
nesl_create_simulation_data ( ) ; rtDW . o50nrjnd44 = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
j4zuphpirj = ( void * ) diagnosticManager ; fimts_d [ 0U ] = false ; fimts_d
[ 1U ] = false ; fimts_d [ 2U ] = false ; fimtsVector_d . mN = 3 ;
fimtsVector_d . mX = & fimts_d [ 0U ] ; modelParameters_mSolverTolerance =
0.001 ; modelParameters_mFixedStepSize = 0.0 ;
modelParameters_mVariableStepSolver = true ; simulator = ( NeslSimulator * )
rtDW . ndnwrahj5v ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW .
j4zuphpirj ; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; expl_temp_d . mVariableStepSolver =
modelParameters_mVariableStepSolver ; expl_temp_d . mUseSimState = false ;
expl_temp_d . mStartTime = 0.0 ; expl_temp_d . mSolverType =
NE_SOLVER_TYPE_ODE ; expl_temp_d . mSolverTolerance =
modelParameters_mSolverTolerance ; expl_temp_d . mLoggingMode =
SSC_LOGGING_NONE ; expl_temp_d . mLoadInitialState = false ; expl_temp_d .
mLinTrimCompile = false ; expl_temp_d . mFixedStepSize =
modelParameters_mFixedStepSize ; tmp = nesl_initialize_simulator ( simulator
, expl_temp_d , & fimtsVector_d , diagnosticManager ) ; if ( tmp != 0 ) { tmp
= rtw_diagnostics_message_count ( ) ; if ( tmp == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . o50nrjnd44 ; time_d = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_d ; simulationData -> mData -> mContStates . mN = 0 ;
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
"friccion_aislada_esferica/Robot Delta/Solver Configuration" , 1 , 3 ) ; rtDW
. jxk3l5lam0 = ( void * ) simulator ; modelParameters_mVariableStepSolver =
pointer_is_null ( rtDW . jxk3l5lam0 ) ; if (
modelParameters_mVariableStepSolver ) {
friccion_aislada_esferica_e48f9f4d_gateway ( ) ; simulator =
nesl_lease_simulator (
"friccion_aislada_esferica/Robot Delta/Solver Configuration" , 1 , 3 ) ; rtDW
. jxk3l5lam0 = ( void * ) simulator ; } simulationData =
nesl_create_simulation_data ( ) ; rtDW . atpqvqjfs5 = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
ac2uu54gd3 = ( void * ) diagnosticManager ; fimts_o [ 0U ] = false ; fimts_o
[ 1U ] = false ; fimts_o [ 2U ] = false ; fimts_o [ 3U ] = false ; fimts_o [
4U ] = false ; fimts_o [ 5U ] = false ; fimts_o [ 6U ] = false ;
fimtsVector_o . mN = 7 ; fimtsVector_o . mX = & fimts_o [ 0U ] ;
modelParameters_mSolverTolerance = 0.001 ; modelParameters_mFixedStepSize =
0.0 ; modelParameters_mVariableStepSolver = true ; simulator = (
NeslSimulator * ) rtDW . jxk3l5lam0 ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . ac2uu54gd3 ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; expl_temp_o .
mVariableStepSolver = modelParameters_mVariableStepSolver ; expl_temp_o .
mUseSimState = false ; expl_temp_o . mStartTime = 0.0 ; expl_temp_o .
mSolverType = NE_SOLVER_TYPE_ODE ; expl_temp_o . mSolverTolerance =
modelParameters_mSolverTolerance ; expl_temp_o . mLoggingMode =
SSC_LOGGING_NONE ; expl_temp_o . mLoadInitialState = false ; expl_temp_o .
mLinTrimCompile = false ; expl_temp_o . mFixedStepSize =
modelParameters_mFixedStepSize ; tmp = nesl_initialize_simulator ( simulator
, expl_temp_o , & fimtsVector_o , diagnosticManager ) ; if ( tmp != 0 ) { tmp
= rtw_diagnostics_message_count ( ) ; if ( tmp == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . atpqvqjfs5 ; time_o = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_o ; simulationData -> mData -> mContStates . mN = 0 ;
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
jxk3l5lam0 ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . ac2uu54gd3
; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp = ne_simulator_method ( simulator , NESL_SIM_START
, simulationData , diagnosticManager ) ; if ( tmp != 0 ) { tmp =
rtw_diagnostics_message_count ( ) ; if ( tmp == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulator = nesl_lease_simulator (
"friccion_aislada_esferica/Robot Delta/Solver Configuration" , 0 , 0 ) ; rtDW
. nyiiqtb3pj = ( void * ) simulator ; modelParameters_mVariableStepSolver =
pointer_is_null ( rtDW . nyiiqtb3pj ) ; if (
modelParameters_mVariableStepSolver ) {
friccion_aislada_esferica_e48f9f4d_gateway ( ) ; simulator =
nesl_lease_simulator (
"friccion_aislada_esferica/Robot Delta/Solver Configuration" , 0 , 0 ) ; rtDW
. nyiiqtb3pj = ( void * ) simulator ; } simulationData =
nesl_create_simulation_data ( ) ; rtDW . gcums0dzz2 = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
lhf2yly352 = ( void * ) diagnosticManager ; fimts_dz = false ; fimtsVector_dz
. mN = 1 ; fimtsVector_dz . mX = & fimts_dz ;
modelParameters_mSolverTolerance = 0.001 ; modelParameters_mFixedStepSize =
0.0 ; modelParameters_mVariableStepSolver = true ; simulator = (
NeslSimulator * ) rtDW . nyiiqtb3pj ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . lhf2yly352 ; diagnosticTree =
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
simulationData = ( NeslSimulationData * ) rtDW . gcums0dzz2 ; time_dz =
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
nyiiqtb3pj ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . lhf2yly352
; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp = ne_simulator_method ( simulator , NESL_SIM_START
, simulationData , diagnosticManager ) ; if ( tmp != 0 ) { tmp =
rtw_diagnostics_message_count ( ) ; if ( tmp == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulator = nesl_lease_simulator (
"friccion_aislada_esferica/Robot Delta/Solver Configuration" , 0 , 1 ) ; rtDW
. ku2cbhbb3u = ( void * ) simulator ; modelParameters_mVariableStepSolver =
pointer_is_null ( rtDW . ku2cbhbb3u ) ; if (
modelParameters_mVariableStepSolver ) {
friccion_aislada_esferica_e48f9f4d_gateway ( ) ; simulator =
nesl_lease_simulator (
"friccion_aislada_esferica/Robot Delta/Solver Configuration" , 0 , 1 ) ; rtDW
. ku2cbhbb3u = ( void * ) simulator ; } simulationData =
nesl_create_simulation_data ( ) ; rtDW . f4ygo2hyze = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
g3mxxyfx5h = ( void * ) diagnosticManager ; fimts_fs = false ; fimtsVector_fs
. mN = 1 ; fimtsVector_fs . mX = & fimts_fs ;
modelParameters_mSolverTolerance = 0.001 ; modelParameters_mFixedStepSize =
0.0 ; modelParameters_mVariableStepSolver = true ; simulator = (
NeslSimulator * ) rtDW . ku2cbhbb3u ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . g3mxxyfx5h ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; expl_temp_fs
. mVariableStepSolver = modelParameters_mVariableStepSolver ; expl_temp_fs .
mUseSimState = false ; expl_temp_fs . mStartTime = 0.0 ; expl_temp_fs .
mSolverType = NE_SOLVER_TYPE_ODE ; expl_temp_fs . mSolverTolerance =
modelParameters_mSolverTolerance ; expl_temp_fs . mLoggingMode =
SSC_LOGGING_NONE ; expl_temp_fs . mLoadInitialState = false ; expl_temp_fs .
mLinTrimCompile = false ; expl_temp_fs . mFixedStepSize =
modelParameters_mFixedStepSize ; tmp = nesl_initialize_simulator ( simulator
, expl_temp_fs , & fimtsVector_fs , diagnosticManager ) ; if ( tmp != 0 ) {
tmp = rtw_diagnostics_message_count ( ) ; if ( tmp == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . f4ygo2hyze ; time_fs =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_fs ; simulationData -> mData -> mContStates .
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
ku2cbhbb3u ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . g3mxxyfx5h
; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp = ne_simulator_method ( simulator , NESL_SIM_START
, simulationData , diagnosticManager ) ; if ( tmp != 0 ) { tmp =
rtw_diagnostics_message_count ( ) ; if ( tmp == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulator = nesl_lease_simulator (
"friccion_aislada_esferica/Robot Delta/Solver Configuration" , 0 , 2 ) ; rtDW
. avoetnry4f = ( void * ) simulator ; modelParameters_mVariableStepSolver =
pointer_is_null ( rtDW . avoetnry4f ) ; if (
modelParameters_mVariableStepSolver ) {
friccion_aislada_esferica_e48f9f4d_gateway ( ) ; simulator =
nesl_lease_simulator (
"friccion_aislada_esferica/Robot Delta/Solver Configuration" , 0 , 2 ) ; rtDW
. avoetnry4f = ( void * ) simulator ; } simulationData =
nesl_create_simulation_data ( ) ; rtDW . j3w0jjg10i = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
nzmye2eqv0 = ( void * ) diagnosticManager ; fimts_ck = false ; fimtsVector_ck
. mN = 1 ; fimtsVector_ck . mX = & fimts_ck ;
modelParameters_mSolverTolerance = 0.001 ; modelParameters_mFixedStepSize =
0.0 ; modelParameters_mVariableStepSolver = true ; simulator = (
NeslSimulator * ) rtDW . avoetnry4f ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . nzmye2eqv0 ; diagnosticTree =
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
simulationData = ( NeslSimulationData * ) rtDW . j3w0jjg10i ; time_ck =
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
avoetnry4f ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . nzmye2eqv0
; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp = ne_simulator_method ( simulator , NESL_SIM_START
, simulationData , diagnosticManager ) ; if ( tmp != 0 ) { tmp =
rtw_diagnostics_message_count ( ) ; if ( tmp == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
MdlInitialize ( ) ; } void MdlOutputs ( int_T tid ) { real_T katwlividx ;
real_T ocjga0uv4u ; real_T akmqn3a4eg ; real_T d4bw4e4r4g ; real_T itszgm543j
; NeslSimulationData * simulationData ; real_T time ; boolean_T tmp ; real_T
tmp_p [ 24 ] ; int_T tmp_e [ 7 ] ; NeslSimulator * simulator ;
NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree * diagnosticTree
; char * msg ; real_T time_p ; real_T tmp_i [ 38 ] ; int_T tmp_m [ 8 ] ;
real_T time_e ; real_T tmp_g [ 3 ] ; int_T tmp_j [ 4 ] ; real_T time_i ;
real_T tmp_f [ 4 ] ; int_T tmp_c [ 2 ] ; real_T time_m ; real_T tmp_k [ 3 ] ;
int_T tmp_b [ 4 ] ; real_T time_g ; real_T tmp_n [ 4 ] ; int_T tmp_l [ 2 ] ;
real_T time_j ; real_T tmp_d [ 3 ] ; int_T tmp_o [ 4 ] ; real_T time_f ;
real_T tmp_dz [ 4 ] ; int_T tmp_fs [ 2 ] ; real_T time_c ; real_T tmp_ck [ 4
] ; int_T tmp_f2 [ 2 ] ; real_T time_k ; real_T tmp_kt [ 3 ] ; int_T tmp_lt [
4 ] ; real_T time_b ; real_T tmp_hn [ 4 ] ; int_T tmp_ap [ 2 ] ; real_T
time_n ; real_T tmp_pj [ 3 ] ; int_T tmp_po [ 4 ] ; real_T time_l ; real_T
tmp_pk [ 4 ] ; int_T tmp_d0 [ 2 ] ; real_T time_d ; real_T tmp_kh [ 3 ] ;
int_T tmp_m0 [ 4 ] ; real_T time_o ; real_T tmp_fv [ 38 ] ; int_T tmp_m4 [ 8
] ; real_T time_dz ; real_T tmp_nf [ 4 ] ; int_T tmp_mi [ 2 ] ; real_T
time_fs ; real_T tmp_b0 [ 4 ] ; int_T tmp_cc [ 2 ] ; real_T time_ck ; real_T
tmp_gw [ 4 ] ; int_T tmp_iz [ 2 ] ; real_T PC1 [ 3 ] ; real_T PC2 [ 3 ] ;
real_T PC3 [ 3 ] ; real_T C31 ; real_T C32 ; real_T C33 ; real_T theta3_1 ;
real_T theta3_2 ; real_T theta3_3 ; real_T theta2_1 ; static const real_T b [
3 ] = { - 66.0387 , 0.0 , 0.0 } ; static const int8_T b_a [ 9 ] = { 1 , 0 , 0
, 0 , 1 , 0 , 0 , 0 , 1 } ; static const real_T c_a [ 9 ] = { -
0.49999999999999978 , 0.86602540378443871 , 0.0 , - 0.86602540378443871 , -
0.49999999999999978 , 0.0 , 0.0 , 0.0 , 1.0 } ; static const real_T d_a [ 9 ]
= { - 0.50000000000000044 , - 0.86602540378443849 , 0.0 , 0.86602540378443849
, - 0.50000000000000044 , 0.0 , 0.0 , 0.0 , 1.0 } ; real_T tmp_kv [ 4 ] ;
real_T tmp_go [ 4 ] ; real_T tmp_pd [ 4 ] ; real_T tmp_fd [ 4 ] ; int32_T i ;
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
tmp_pd [ 0 ] = 302.0 * muDoubleScalarSin ( theta3_1 ) * muDoubleScalarCos (
theta2_1 ) + 150.0 ; tmp_pd [ 2 ] = - 302.0 * muDoubleScalarSin ( theta3_1 )
* muDoubleScalarSin ( theta2_1 ) ; tmp_pd [ 1 ] = 302.0 * muDoubleScalarSin (
theta3_1 ) * muDoubleScalarSin ( theta2_1 ) ; tmp_pd [ 3 ] = 302.0 *
muDoubleScalarSin ( theta3_1 ) * muDoubleScalarCos ( theta2_1 ) + 150.0 ;
kodygifx4z ( tmp_pd , tmp_fd ) ; tmp_go [ 0 ] = 302.0 * muDoubleScalarSin (
theta3_2 ) * muDoubleScalarCos ( C32 ) + 150.0 ; tmp_go [ 2 ] = - 302.0 *
muDoubleScalarSin ( theta3_2 ) * muDoubleScalarSin ( C32 ) ; tmp_go [ 1 ] =
302.0 * muDoubleScalarSin ( theta3_2 ) * muDoubleScalarSin ( C32 ) ; tmp_go [
3 ] = 302.0 * muDoubleScalarSin ( theta3_2 ) * muDoubleScalarCos ( C32 ) +
150.0 ; kodygifx4z ( tmp_go , tmp_pd ) ; tmp_kv [ 0 ] = 302.0 *
muDoubleScalarSin ( theta3_3 ) * muDoubleScalarCos ( C31 ) + 150.0 ; tmp_kv [
2 ] = - 302.0 * muDoubleScalarSin ( theta3_3 ) * muDoubleScalarSin ( C31 ) ;
tmp_kv [ 1 ] = 302.0 * muDoubleScalarSin ( theta3_3 ) * muDoubleScalarSin (
C31 ) ; tmp_kv [ 3 ] = 302.0 * muDoubleScalarSin ( theta3_3 ) *
muDoubleScalarCos ( C31 ) + 150.0 ; kodygifx4z ( tmp_kv , tmp_go ) ; C31 =
muDoubleScalarAtan2 ( tmp_fd [ 1 ] * PC1 [ 0 ] + tmp_fd [ 3 ] * PC1 [ 1 ] ,
tmp_fd [ 0 ] * PC1 [ 0 ] + tmp_fd [ 2 ] * PC1 [ 1 ] ) ; rtB . osjgev2jfz =
muDoubleScalarAtan2 ( tmp_pd [ 1 ] * PC2 [ 0 ] + tmp_pd [ 3 ] * PC2 [ 1 ] ,
tmp_pd [ 0 ] * PC2 [ 0 ] + tmp_pd [ 2 ] * PC2 [ 1 ] ) ; rtB . iier5jnm1g =
muDoubleScalarAtan2 ( tmp_go [ 1 ] * PC3 [ 0 ] + tmp_go [ 3 ] * PC3 [ 1 ] ,
tmp_go [ 0 ] * PC3 [ 0 ] + tmp_go [ 2 ] * PC3 [ 1 ] ) ; rtB . al3p3wiuhl =
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
NeslSimulationData * ) rtDW . piiowhvoq3 ; time = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time ; simulationData -> mData -> mContStates . mN = 14 ;
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
; tmp_p [ 0U ] = rtB . mken4d3mf5 [ 0 ] ; tmp_p [ 1U ] = rtB . mken4d3mf5 [ 1
] ; tmp_p [ 2U ] = rtB . mken4d3mf5 [ 2 ] ; tmp_p [ 3U ] = rtB . mken4d3mf5 [
3 ] ; tmp_e [ 1U ] = 4 ; tmp_p [ 4U ] = rtB . cl1j1vhnfj [ 0 ] ; tmp_p [ 5U ]
= rtB . cl1j1vhnfj [ 1 ] ; tmp_p [ 6U ] = rtB . cl1j1vhnfj [ 2 ] ; tmp_p [ 7U
] = rtB . cl1j1vhnfj [ 3 ] ; tmp_e [ 2U ] = 8 ; tmp_p [ 8U ] = rtB .
p5kqpkokgo [ 0 ] ; tmp_p [ 9U ] = rtB . p5kqpkokgo [ 1 ] ; tmp_p [ 10U ] =
rtB . p5kqpkokgo [ 2 ] ; tmp_p [ 11U ] = rtB . p5kqpkokgo [ 3 ] ; tmp_e [ 3U
] = 12 ; tmp_p [ 12U ] = rtB . ioszdbstmn [ 0 ] ; tmp_p [ 13U ] = rtB .
ioszdbstmn [ 1 ] ; tmp_p [ 14U ] = rtB . ioszdbstmn [ 2 ] ; tmp_p [ 15U ] =
rtB . ioszdbstmn [ 3 ] ; tmp_e [ 4U ] = 16 ; tmp_p [ 16U ] = rtB . euf53gdk1f
[ 0 ] ; tmp_p [ 17U ] = rtB . euf53gdk1f [ 1 ] ; tmp_p [ 18U ] = rtB .
euf53gdk1f [ 2 ] ; tmp_p [ 19U ] = rtB . euf53gdk1f [ 3 ] ; tmp_e [ 5U ] = 20
; tmp_p [ 20U ] = rtB . itv2k1nlsr [ 0 ] ; tmp_p [ 21U ] = rtB . itv2k1nlsr [
1 ] ; tmp_p [ 22U ] = rtB . itv2k1nlsr [ 2 ] ; tmp_p [ 23U ] = rtB .
itv2k1nlsr [ 3 ] ; tmp_e [ 6U ] = 24 ; simulationData -> mData ->
mInputValues . mN = 24 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0U ] ; simulationData -> mData -> mInputOffsets . mN = 7 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0U ] ;
simulationData -> mData -> mOutputs . mN = 14 ; simulationData -> mData ->
mOutputs . mX = & rtB . hay0z4ydom [ 0U ] ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulator = (
NeslSimulator * ) rtDW . oh2nksyqvj ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . n0nnoz5d3k ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; i =
ne_simulator_method ( simulator , NESL_SIM_OUTPUTS , simulationData ,
diagnosticManager ) ; if ( i != 0 ) { i = rtw_diagnostics_message_count ( ) ;
if ( i == 0 ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ;
ssSetErrorStatus ( rtS , msg ) ; } } simulationData = ( NeslSimulationData *
) rtDW . i4aru4d13y ; time_p = ssGetT ( rtS ) ; simulationData -> mData ->
mTime . mN = 1 ; simulationData -> mData -> mTime . mX = & time_p ;
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
) ; simulationData -> mData -> mIsSolverRequestingReset = tmp ; tmp_m [ 0U ]
= 0 ; tmp_i [ 0U ] = rtB . od0xpltfi4 [ 0 ] ; tmp_i [ 1U ] = rtB . od0xpltfi4
[ 1 ] ; tmp_i [ 2U ] = rtB . od0xpltfi4 [ 2 ] ; tmp_i [ 3U ] = rtB .
od0xpltfi4 [ 3 ] ; tmp_m [ 1U ] = 4 ; tmp_i [ 4U ] = rtB . khdrz5d30a [ 0 ] ;
tmp_i [ 5U ] = rtB . khdrz5d30a [ 1 ] ; tmp_i [ 6U ] = rtB . khdrz5d30a [ 2 ]
; tmp_i [ 7U ] = rtB . khdrz5d30a [ 3 ] ; tmp_m [ 2U ] = 8 ; tmp_i [ 8U ] =
rtB . ipafxshnxq [ 0 ] ; tmp_i [ 9U ] = rtB . ipafxshnxq [ 1 ] ; tmp_i [ 10U
] = rtB . ipafxshnxq [ 2 ] ; tmp_i [ 11U ] = rtB . ipafxshnxq [ 3 ] ; tmp_m [
3U ] = 12 ; tmp_i [ 12U ] = rtB . ioszdbstmn [ 0 ] ; tmp_i [ 13U ] = rtB .
ioszdbstmn [ 1 ] ; tmp_i [ 14U ] = rtB . ioszdbstmn [ 2 ] ; tmp_i [ 15U ] =
rtB . ioszdbstmn [ 3 ] ; tmp_m [ 4U ] = 16 ; tmp_i [ 16U ] = rtB . euf53gdk1f
[ 0 ] ; tmp_i [ 17U ] = rtB . euf53gdk1f [ 1 ] ; tmp_i [ 18U ] = rtB .
euf53gdk1f [ 2 ] ; tmp_i [ 19U ] = rtB . euf53gdk1f [ 3 ] ; tmp_m [ 5U ] = 20
; tmp_i [ 20U ] = rtB . itv2k1nlsr [ 0 ] ; tmp_i [ 21U ] = rtB . itv2k1nlsr [
1 ] ; tmp_i [ 22U ] = rtB . itv2k1nlsr [ 2 ] ; tmp_i [ 23U ] = rtB .
itv2k1nlsr [ 3 ] ; tmp_m [ 6U ] = 24 ; tmp_i [ 24U ] = rtB . hay0z4ydom [ 0 ]
; tmp_i [ 25U ] = rtB . hay0z4ydom [ 1 ] ; tmp_i [ 26U ] = rtB . hay0z4ydom [
2 ] ; tmp_i [ 27U ] = rtB . hay0z4ydom [ 3 ] ; tmp_i [ 28U ] = rtB .
hay0z4ydom [ 4 ] ; tmp_i [ 29U ] = rtB . hay0z4ydom [ 5 ] ; tmp_i [ 30U ] =
rtB . hay0z4ydom [ 6 ] ; tmp_i [ 31U ] = rtB . hay0z4ydom [ 7 ] ; tmp_i [ 32U
] = rtB . hay0z4ydom [ 8 ] ; tmp_i [ 33U ] = rtB . hay0z4ydom [ 9 ] ; tmp_i [
34U ] = rtB . hay0z4ydom [ 10 ] ; tmp_i [ 35U ] = rtB . hay0z4ydom [ 11 ] ;
tmp_i [ 36U ] = rtB . hay0z4ydom [ 12 ] ; tmp_i [ 37U ] = rtB . hay0z4ydom [
13 ] ; tmp_m [ 7U ] = 38 ; simulationData -> mData -> mInputValues . mN = 38
; simulationData -> mData -> mInputValues . mX = & tmp_i [ 0U ] ;
simulationData -> mData -> mInputOffsets . mN = 8 ; simulationData -> mData
-> mInputOffsets . mX = & tmp_m [ 0U ] ; simulationData -> mData -> mOutputs
. mN = 6 ; simulationData -> mData -> mOutputs . mX = & rtB . l2jfs00ccy [ 0U
] ; simulationData -> mData -> mSampleHits . mN = 0 ; simulationData -> mData
-> mSampleHits . mX = NULL ; simulationData -> mData ->
mIsFundamentalSampleHit = false ; simulator = ( NeslSimulator * ) rtDW .
m5lvlhykau ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . psaiktqsay
; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; i = ne_simulator_method ( simulator , NESL_SIM_OUTPUTS
, simulationData , diagnosticManager ) ; if ( i != 0 ) { i =
rtw_diagnostics_message_count ( ) ; if ( i == 0 ) { msg = rtw_diagnostics_msg
( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } } simulationData = (
NeslSimulationData * ) rtDW . jstvsrdxec ; time_e = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_e ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 1 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . g0ybx5ny0s ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = NULL ; tmp = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData
-> mIsMajorTimeStep = true ; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags .
solverAssertCheck == 1U ) ; simulationData -> mData -> mIsSolverAssertCheck =
tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; simulationData -> mData -> mIsComputingJacobian
= false ; tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData
-> mIsSolverRequestingReset = tmp ; tmp_j [ 0U ] = 0 ; tmp_g [ 0U ] = rtB .
l2jfs00ccy [ 4 ] ; tmp_j [ 1U ] = 1 ; tmp_g [ 1U ] = 0.0 ; tmp_j [ 2U ] = 2 ;
tmp_g [ 2U ] = 0.0 ; tmp_j [ 3U ] = 3 ; simulationData -> mData ->
mInputValues . mN = 3 ; simulationData -> mData -> mInputValues . mX = &
tmp_g [ 0U ] ; simulationData -> mData -> mInputOffsets . mN = 4 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_j [ 0U ] ;
simulationData -> mData -> mOutputs . mN = 4 ; simulationData -> mData ->
mOutputs . mX = & rtB . crsv2a03b0 [ 0U ] ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulator = (
NeslSimulator * ) rtDW . kswjmadgur ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . bwrk1jrfjh ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; i =
ne_simulator_method ( simulator , NESL_SIM_OUTPUTS , simulationData ,
diagnosticManager ) ; if ( i != 0 ) { i = rtw_diagnostics_message_count ( ) ;
if ( i == 0 ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ;
ssSetErrorStatus ( rtS , msg ) ; } } simulationData = ( NeslSimulationData *
) rtDW . bzrmjhnabu ; time_i = ssGetT ( rtS ) ; simulationData -> mData ->
mTime . mN = 1 ; simulationData -> mData -> mTime . mX = & time_i ;
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
) ; simulationData -> mData -> mIsSolverRequestingReset = tmp ; tmp_c [ 0U ]
= 0 ; tmp_f [ 0U ] = rtB . crsv2a03b0 [ 0 ] ; tmp_f [ 1U ] = rtB . crsv2a03b0
[ 1 ] ; tmp_f [ 2U ] = rtB . crsv2a03b0 [ 2 ] ; tmp_f [ 3U ] = rtB .
crsv2a03b0 [ 3 ] ; tmp_c [ 1U ] = 4 ; simulationData -> mData -> mInputValues
. mN = 4 ; simulationData -> mData -> mInputValues . mX = & tmp_f [ 0U ] ;
simulationData -> mData -> mInputOffsets . mN = 2 ; simulationData -> mData
-> mInputOffsets . mX = & tmp_c [ 0U ] ; simulationData -> mData -> mOutputs
. mN = 0 ; simulationData -> mData -> mOutputs . mX = NULL ; simulationData
-> mData -> mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits .
mX = NULL ; simulationData -> mData -> mIsFundamentalSampleHit = false ;
simulator = ( NeslSimulator * ) rtDW . gtt25diae4 ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . is3dc1o4zz ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; i =
ne_simulator_method ( simulator , NESL_SIM_OUTPUTS , simulationData ,
diagnosticManager ) ; if ( i != 0 ) { i = rtw_diagnostics_message_count ( ) ;
if ( i == 0 ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ;
ssSetErrorStatus ( rtS , msg ) ; } } simulationData = ( NeslSimulationData *
) rtDW . evijjolyva ; time_m = ssGetT ( rtS ) ; simulationData -> mData ->
mTime . mN = 1 ; simulationData -> mData -> mTime . mX = & time_m ;
simulationData -> mData -> mContStates . mN = 0 ; simulationData -> mData ->
mContStates . mX = NULL ; simulationData -> mData -> mDiscStates . mN = 1 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . citycn5tuj ;
simulationData -> mData -> mModeVector . mN = 0 ; simulationData -> mData ->
mModeVector . mX = NULL ; tmp = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData -> mData
-> mFoundZcEvents = tmp ; simulationData -> mData -> mIsMajorTimeStep = true
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; simulationData -> mData -> mIsComputingJacobian
= false ; tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData
-> mIsSolverRequestingReset = tmp ; tmp_b [ 0U ] = 0 ; tmp_k [ 0U ] = rtB .
l2jfs00ccy [ 5 ] ; tmp_b [ 1U ] = 1 ; tmp_k [ 1U ] = 0.0 ; tmp_b [ 2U ] = 2 ;
tmp_k [ 2U ] = 0.0 ; tmp_b [ 3U ] = 3 ; simulationData -> mData ->
mInputValues . mN = 3 ; simulationData -> mData -> mInputValues . mX = &
tmp_k [ 0U ] ; simulationData -> mData -> mInputOffsets . mN = 4 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_b [ 0U ] ;
simulationData -> mData -> mOutputs . mN = 4 ; simulationData -> mData ->
mOutputs . mX = & rtB . mopdhxqse4 [ 0U ] ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulator = (
NeslSimulator * ) rtDW . jjazmhpwwr ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . pxp5ilgmi3 ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; i =
ne_simulator_method ( simulator , NESL_SIM_OUTPUTS , simulationData ,
diagnosticManager ) ; if ( i != 0 ) { i = rtw_diagnostics_message_count ( ) ;
if ( i == 0 ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ;
ssSetErrorStatus ( rtS , msg ) ; } } simulationData = ( NeslSimulationData *
) rtDW . gsrotkxe3w ; time_g = ssGetT ( rtS ) ; simulationData -> mData ->
mTime . mN = 1 ; simulationData -> mData -> mTime . mX = & time_g ;
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
) ; simulationData -> mData -> mIsSolverRequestingReset = tmp ; tmp_l [ 0U ]
= 0 ; tmp_n [ 0U ] = rtB . mopdhxqse4 [ 0 ] ; tmp_n [ 1U ] = rtB . mopdhxqse4
[ 1 ] ; tmp_n [ 2U ] = rtB . mopdhxqse4 [ 2 ] ; tmp_n [ 3U ] = rtB .
mopdhxqse4 [ 3 ] ; tmp_l [ 1U ] = 4 ; simulationData -> mData -> mInputValues
. mN = 4 ; simulationData -> mData -> mInputValues . mX = & tmp_n [ 0U ] ;
simulationData -> mData -> mInputOffsets . mN = 2 ; simulationData -> mData
-> mInputOffsets . mX = & tmp_l [ 0U ] ; simulationData -> mData -> mOutputs
. mN = 0 ; simulationData -> mData -> mOutputs . mX = NULL ; simulationData
-> mData -> mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits .
mX = NULL ; simulationData -> mData -> mIsFundamentalSampleHit = false ;
simulator = ( NeslSimulator * ) rtDW . dxh0qu5kpi ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . aa1kkeyuws ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; i =
ne_simulator_method ( simulator , NESL_SIM_OUTPUTS , simulationData ,
diagnosticManager ) ; if ( i != 0 ) { i = rtw_diagnostics_message_count ( ) ;
if ( i == 0 ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ;
ssSetErrorStatus ( rtS , msg ) ; } } simulationData = ( NeslSimulationData *
) rtDW . gkm0s0ctrk ; time_j = ssGetT ( rtS ) ; simulationData -> mData ->
mTime . mN = 1 ; simulationData -> mData -> mTime . mX = & time_j ;
simulationData -> mData -> mContStates . mN = 0 ; simulationData -> mData ->
mContStates . mX = NULL ; simulationData -> mData -> mDiscStates . mN = 1 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . mxwpzq1ids ;
simulationData -> mData -> mModeVector . mN = 0 ; simulationData -> mData ->
mModeVector . mX = NULL ; tmp = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData -> mData
-> mFoundZcEvents = tmp ; simulationData -> mData -> mIsMajorTimeStep = true
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; simulationData -> mData -> mIsComputingJacobian
= false ; tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData
-> mIsSolverRequestingReset = tmp ; tmp_o [ 0U ] = 0 ; tmp_d [ 0U ] = rtB .
l2jfs00ccy [ 3 ] ; tmp_o [ 1U ] = 1 ; tmp_d [ 1U ] = 0.0 ; tmp_o [ 2U ] = 2 ;
tmp_d [ 2U ] = 0.0 ; tmp_o [ 3U ] = 3 ; simulationData -> mData ->
mInputValues . mN = 3 ; simulationData -> mData -> mInputValues . mX = &
tmp_d [ 0U ] ; simulationData -> mData -> mInputOffsets . mN = 4 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_o [ 0U ] ;
simulationData -> mData -> mOutputs . mN = 4 ; simulationData -> mData ->
mOutputs . mX = & rtB . kcfetpaoaj [ 0U ] ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulator = (
NeslSimulator * ) rtDW . flmlbqbmbh ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . iob4nznmac ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; i =
ne_simulator_method ( simulator , NESL_SIM_OUTPUTS , simulationData ,
diagnosticManager ) ; if ( i != 0 ) { i = rtw_diagnostics_message_count ( ) ;
if ( i == 0 ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ;
ssSetErrorStatus ( rtS , msg ) ; } } simulationData = ( NeslSimulationData *
) rtDW . hwdzla2kb2 ; time_f = ssGetT ( rtS ) ; simulationData -> mData ->
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
= 0 ; tmp_dz [ 0U ] = rtB . kcfetpaoaj [ 0 ] ; tmp_dz [ 1U ] = rtB .
kcfetpaoaj [ 1 ] ; tmp_dz [ 2U ] = rtB . kcfetpaoaj [ 2 ] ; tmp_dz [ 3U ] =
rtB . kcfetpaoaj [ 3 ] ; tmp_fs [ 1U ] = 4 ; simulationData -> mData ->
mInputValues . mN = 4 ; simulationData -> mData -> mInputValues . mX = &
tmp_dz [ 0U ] ; simulationData -> mData -> mInputOffsets . mN = 2 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_fs [ 0U ] ;
simulationData -> mData -> mOutputs . mN = 0 ; simulationData -> mData ->
mOutputs . mX = NULL ; simulationData -> mData -> mSampleHits . mN = 0 ;
simulationData -> mData -> mSampleHits . mX = NULL ; simulationData -> mData
-> mIsFundamentalSampleHit = false ; simulator = ( NeslSimulator * ) rtDW .
ahd5nxo5ee ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . l25nib43el
; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; i = ne_simulator_method ( simulator , NESL_SIM_OUTPUTS
, simulationData , diagnosticManager ) ; if ( i != 0 ) { i =
rtw_diagnostics_message_count ( ) ; if ( i == 0 ) { msg = rtw_diagnostics_msg
( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } } rtB . jky4z1enk0 [
0 ] = 0.0 ; rtB . jky4z1enk0 [ 1 ] = 0.0 ; rtB . jky4z1enk0 [ 2 ] = 0.0 ; rtB
. jky4z1enk0 [ 3 ] = 0.0 ; rtB . lbr4oxwevp [ 0 ] = 0.0 ; rtB . lbr4oxwevp [
1 ] = 0.0 ; rtB . lbr4oxwevp [ 2 ] = 0.0 ; rtB . lbr4oxwevp [ 3 ] = 0.0 ; rtB
. cwm3tftnlg [ 0 ] = 0.0 ; rtB . cwm3tftnlg [ 1 ] = 0.0 ; rtB . cwm3tftnlg [
2 ] = 0.0 ; rtB . cwm3tftnlg [ 3 ] = 0.0 ; simulationData = (
NeslSimulationData * ) rtDW . gftgep1sjl ; time_c = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_c ; simulationData -> mData -> mContStates . mN = 0 ;
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
-> mIsSolverRequestingReset = tmp ; tmp_f2 [ 0U ] = 0 ; tmp_ck [ 0U ] = rtB .
kcfetpaoaj [ 0 ] ; tmp_ck [ 1U ] = rtB . kcfetpaoaj [ 1 ] ; tmp_ck [ 2U ] =
rtB . kcfetpaoaj [ 2 ] ; tmp_ck [ 3U ] = rtB . kcfetpaoaj [ 3 ] ; tmp_f2 [ 1U
] = 4 ; simulationData -> mData -> mInputValues . mN = 4 ; simulationData ->
mData -> mInputValues . mX = & tmp_ck [ 0U ] ; simulationData -> mData ->
mInputOffsets . mN = 2 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_f2 [ 0U ] ; simulationData -> mData -> mOutputs . mN = 1 ; simulationData
-> mData -> mOutputs . mX = & rtB . pjx0kmxjmu ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulator = (
NeslSimulator * ) rtDW . de0spn04mt ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . c2oj5ebuij ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; i =
ne_simulator_method ( simulator , NESL_SIM_OUTPUTS , simulationData ,
diagnosticManager ) ; if ( i != 0 ) { i = rtw_diagnostics_message_count ( ) ;
if ( i == 0 ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ;
ssSetErrorStatus ( rtS , msg ) ; } } simulationData = ( NeslSimulationData *
) rtDW . jrmucmc5l0 ; time_k = ssGetT ( rtS ) ; simulationData -> mData ->
mTime . mN = 1 ; simulationData -> mData -> mTime . mX = & time_k ;
simulationData -> mData -> mContStates . mN = 0 ; simulationData -> mData ->
mContStates . mX = NULL ; simulationData -> mData -> mDiscStates . mN = 1 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . hofd5gl0lv ;
simulationData -> mData -> mModeVector . mN = 0 ; simulationData -> mData ->
mModeVector . mX = NULL ; tmp = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData -> mData
-> mFoundZcEvents = tmp ; simulationData -> mData -> mIsMajorTimeStep = true
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; simulationData -> mData -> mIsComputingJacobian
= false ; tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData
-> mIsSolverRequestingReset = tmp ; tmp_lt [ 0U ] = 0 ; tmp_kt [ 0U ] = rtB .
pjx0kmxjmu ; tmp_lt [ 1U ] = 1 ; tmp_kt [ 1U ] = 0.0 ; tmp_lt [ 2U ] = 2 ;
tmp_kt [ 2U ] = 0.0 ; tmp_lt [ 3U ] = 3 ; simulationData -> mData ->
mInputValues . mN = 3 ; simulationData -> mData -> mInputValues . mX = &
tmp_kt [ 0U ] ; simulationData -> mData -> mInputOffsets . mN = 4 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_lt [ 0U ] ;
simulationData -> mData -> mOutputs . mN = 4 ; simulationData -> mData ->
mOutputs . mX = & rtB . ioszdbstmn [ 0U ] ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulator = (
NeslSimulator * ) rtDW . gpf31qpv5x ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . eow2enys5v ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; i =
ne_simulator_method ( simulator , NESL_SIM_OUTPUTS , simulationData ,
diagnosticManager ) ; if ( i != 0 ) { i = rtw_diagnostics_message_count ( ) ;
if ( i == 0 ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ;
ssSetErrorStatus ( rtS , msg ) ; } } simulationData = ( NeslSimulationData *
) rtDW . mw4azdjt0i ; time_b = ssGetT ( rtS ) ; simulationData -> mData ->
mTime . mN = 1 ; simulationData -> mData -> mTime . mX = & time_b ;
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
) ; simulationData -> mData -> mIsSolverRequestingReset = tmp ; tmp_ap [ 0U ]
= 0 ; tmp_hn [ 0U ] = rtB . crsv2a03b0 [ 0 ] ; tmp_hn [ 1U ] = rtB .
crsv2a03b0 [ 1 ] ; tmp_hn [ 2U ] = rtB . crsv2a03b0 [ 2 ] ; tmp_hn [ 3U ] =
rtB . crsv2a03b0 [ 3 ] ; tmp_ap [ 1U ] = 4 ; simulationData -> mData ->
mInputValues . mN = 4 ; simulationData -> mData -> mInputValues . mX = &
tmp_hn [ 0U ] ; simulationData -> mData -> mInputOffsets . mN = 2 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_ap [ 0U ] ;
simulationData -> mData -> mOutputs . mN = 1 ; simulationData -> mData ->
mOutputs . mX = & rtB . od0udch0bu ; simulationData -> mData -> mSampleHits .
mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ; simulationData
-> mData -> mIsFundamentalSampleHit = false ; simulator = ( NeslSimulator * )
rtDW . mu0wco4dhv ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW .
hpobr5dnto ; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; i = ne_simulator_method ( simulator , NESL_SIM_OUTPUTS
, simulationData , diagnosticManager ) ; if ( i != 0 ) { i =
rtw_diagnostics_message_count ( ) ; if ( i == 0 ) { msg = rtw_diagnostics_msg
( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } } simulationData = (
NeslSimulationData * ) rtDW . dntzyn5tmg ; time_n = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_n ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 1 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . lqg4ib442l ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = NULL ; tmp = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData
-> mIsMajorTimeStep = true ; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags .
solverAssertCheck == 1U ) ; simulationData -> mData -> mIsSolverAssertCheck =
tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; simulationData -> mData -> mIsComputingJacobian
= false ; tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData
-> mIsSolverRequestingReset = tmp ; tmp_po [ 0U ] = 0 ; tmp_pj [ 0U ] = rtB .
od0udch0bu ; tmp_po [ 1U ] = 1 ; tmp_pj [ 1U ] = 0.0 ; tmp_po [ 2U ] = 2 ;
tmp_pj [ 2U ] = 0.0 ; tmp_po [ 3U ] = 3 ; simulationData -> mData ->
mInputValues . mN = 3 ; simulationData -> mData -> mInputValues . mX = &
tmp_pj [ 0U ] ; simulationData -> mData -> mInputOffsets . mN = 4 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_po [ 0U ] ;
simulationData -> mData -> mOutputs . mN = 4 ; simulationData -> mData ->
mOutputs . mX = & rtB . euf53gdk1f [ 0U ] ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulator = (
NeslSimulator * ) rtDW . j5smstjan3 ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . pinay1nrr3 ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; i =
ne_simulator_method ( simulator , NESL_SIM_OUTPUTS , simulationData ,
diagnosticManager ) ; if ( i != 0 ) { i = rtw_diagnostics_message_count ( ) ;
if ( i == 0 ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ;
ssSetErrorStatus ( rtS , msg ) ; } } simulationData = ( NeslSimulationData *
) rtDW . gksf2y3xqu ; time_l = ssGetT ( rtS ) ; simulationData -> mData ->
mTime . mN = 1 ; simulationData -> mData -> mTime . mX = & time_l ;
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
) ; simulationData -> mData -> mIsSolverRequestingReset = tmp ; tmp_d0 [ 0U ]
= 0 ; tmp_pk [ 0U ] = rtB . mopdhxqse4 [ 0 ] ; tmp_pk [ 1U ] = rtB .
mopdhxqse4 [ 1 ] ; tmp_pk [ 2U ] = rtB . mopdhxqse4 [ 2 ] ; tmp_pk [ 3U ] =
rtB . mopdhxqse4 [ 3 ] ; tmp_d0 [ 1U ] = 4 ; simulationData -> mData ->
mInputValues . mN = 4 ; simulationData -> mData -> mInputValues . mX = &
tmp_pk [ 0U ] ; simulationData -> mData -> mInputOffsets . mN = 2 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_d0 [ 0U ] ;
simulationData -> mData -> mOutputs . mN = 1 ; simulationData -> mData ->
mOutputs . mX = & rtB . jpvxooq51q ; simulationData -> mData -> mSampleHits .
mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ; simulationData
-> mData -> mIsFundamentalSampleHit = false ; simulator = ( NeslSimulator * )
rtDW . nviurbkyfu ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW .
nyzomkvmej ; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; i = ne_simulator_method ( simulator , NESL_SIM_OUTPUTS
, simulationData , diagnosticManager ) ; if ( i != 0 ) { i =
rtw_diagnostics_message_count ( ) ; if ( i == 0 ) { msg = rtw_diagnostics_msg
( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } } simulationData = (
NeslSimulationData * ) rtDW . o50nrjnd44 ; time_d = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_d ; simulationData -> mData -> mContStates . mN = 0 ;
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
-> mIsSolverRequestingReset = tmp ; tmp_m0 [ 0U ] = 0 ; tmp_kh [ 0U ] = rtB .
jpvxooq51q ; tmp_m0 [ 1U ] = 1 ; tmp_kh [ 1U ] = 0.0 ; tmp_m0 [ 2U ] = 2 ;
tmp_kh [ 2U ] = 0.0 ; tmp_m0 [ 3U ] = 3 ; simulationData -> mData ->
mInputValues . mN = 3 ; simulationData -> mData -> mInputValues . mX = &
tmp_kh [ 0U ] ; simulationData -> mData -> mInputOffsets . mN = 4 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_m0 [ 0U ] ;
simulationData -> mData -> mOutputs . mN = 4 ; simulationData -> mData ->
mOutputs . mX = & rtB . itv2k1nlsr [ 0U ] ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulator = (
NeslSimulator * ) rtDW . ndnwrahj5v ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . j4zuphpirj ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; i =
ne_simulator_method ( simulator , NESL_SIM_OUTPUTS , simulationData ,
diagnosticManager ) ; if ( i != 0 ) { i = rtw_diagnostics_message_count ( ) ;
if ( i == 0 ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ;
ssSetErrorStatus ( rtS , msg ) ; } } simulationData = ( NeslSimulationData *
) rtDW . atpqvqjfs5 ; time_o = ssGetT ( rtS ) ; simulationData -> mData ->
mTime . mN = 1 ; simulationData -> mData -> mTime . mX = & time_o ;
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
) ; simulationData -> mData -> mIsSolverRequestingReset = tmp ; tmp_m4 [ 0U ]
= 0 ; tmp_fv [ 0U ] = rtB . jky4z1enk0 [ 0 ] ; tmp_fv [ 1U ] = rtB .
jky4z1enk0 [ 1 ] ; tmp_fv [ 2U ] = rtB . jky4z1enk0 [ 2 ] ; tmp_fv [ 3U ] =
rtB . jky4z1enk0 [ 3 ] ; tmp_m4 [ 1U ] = 4 ; tmp_fv [ 4U ] = rtB . lbr4oxwevp
[ 0 ] ; tmp_fv [ 5U ] = rtB . lbr4oxwevp [ 1 ] ; tmp_fv [ 6U ] = rtB .
lbr4oxwevp [ 2 ] ; tmp_fv [ 7U ] = rtB . lbr4oxwevp [ 3 ] ; tmp_m4 [ 2U ] = 8
; tmp_fv [ 8U ] = rtB . cwm3tftnlg [ 0 ] ; tmp_fv [ 9U ] = rtB . cwm3tftnlg [
1 ] ; tmp_fv [ 10U ] = rtB . cwm3tftnlg [ 2 ] ; tmp_fv [ 11U ] = rtB .
cwm3tftnlg [ 3 ] ; tmp_m4 [ 3U ] = 12 ; tmp_fv [ 12U ] = rtB . ioszdbstmn [ 0
] ; tmp_fv [ 13U ] = rtB . ioszdbstmn [ 1 ] ; tmp_fv [ 14U ] = rtB .
ioszdbstmn [ 2 ] ; tmp_fv [ 15U ] = rtB . ioszdbstmn [ 3 ] ; tmp_m4 [ 4U ] =
16 ; tmp_fv [ 16U ] = rtB . euf53gdk1f [ 0 ] ; tmp_fv [ 17U ] = rtB .
euf53gdk1f [ 1 ] ; tmp_fv [ 18U ] = rtB . euf53gdk1f [ 2 ] ; tmp_fv [ 19U ] =
rtB . euf53gdk1f [ 3 ] ; tmp_m4 [ 5U ] = 20 ; tmp_fv [ 20U ] = rtB .
itv2k1nlsr [ 0 ] ; tmp_fv [ 21U ] = rtB . itv2k1nlsr [ 1 ] ; tmp_fv [ 22U ] =
rtB . itv2k1nlsr [ 2 ] ; tmp_fv [ 23U ] = rtB . itv2k1nlsr [ 3 ] ; tmp_m4 [
6U ] = 24 ; tmp_fv [ 24U ] = rtB . hay0z4ydom [ 0 ] ; tmp_fv [ 25U ] = rtB .
hay0z4ydom [ 1 ] ; tmp_fv [ 26U ] = rtB . hay0z4ydom [ 2 ] ; tmp_fv [ 27U ] =
rtB . hay0z4ydom [ 3 ] ; tmp_fv [ 28U ] = rtB . hay0z4ydom [ 4 ] ; tmp_fv [
29U ] = rtB . hay0z4ydom [ 5 ] ; tmp_fv [ 30U ] = rtB . hay0z4ydom [ 6 ] ;
tmp_fv [ 31U ] = rtB . hay0z4ydom [ 7 ] ; tmp_fv [ 32U ] = rtB . hay0z4ydom [
8 ] ; tmp_fv [ 33U ] = rtB . hay0z4ydom [ 9 ] ; tmp_fv [ 34U ] = rtB .
hay0z4ydom [ 10 ] ; tmp_fv [ 35U ] = rtB . hay0z4ydom [ 11 ] ; tmp_fv [ 36U ]
= rtB . hay0z4ydom [ 12 ] ; tmp_fv [ 37U ] = rtB . hay0z4ydom [ 13 ] ; tmp_m4
[ 7U ] = 38 ; simulationData -> mData -> mInputValues . mN = 38 ;
simulationData -> mData -> mInputValues . mX = & tmp_fv [ 0U ] ;
simulationData -> mData -> mInputOffsets . mN = 8 ; simulationData -> mData
-> mInputOffsets . mX = & tmp_m4 [ 0U ] ; simulationData -> mData -> mOutputs
. mN = 0 ; simulationData -> mData -> mOutputs . mX = NULL ; simulationData
-> mData -> mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits .
mX = NULL ; simulationData -> mData -> mIsFundamentalSampleHit = false ;
simulator = ( NeslSimulator * ) rtDW . jxk3l5lam0 ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . ac2uu54gd3 ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; i =
ne_simulator_method ( simulator , NESL_SIM_OUTPUTS , simulationData ,
diagnosticManager ) ; if ( i != 0 ) { i = rtw_diagnostics_message_count ( ) ;
if ( i == 0 ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ;
ssSetErrorStatus ( rtS , msg ) ; } } simulationData = ( NeslSimulationData *
) rtDW . gcums0dzz2 ; time_dz = ssGetT ( rtS ) ; simulationData -> mData ->
mTime . mN = 1 ; simulationData -> mData -> mTime . mX = & time_dz ;
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
) ; simulationData -> mData -> mIsSolverRequestingReset = tmp ; tmp_mi [ 0U ]
= 0 ; tmp_nf [ 0U ] = rtB . crsv2a03b0 [ 0 ] ; tmp_nf [ 1U ] = rtB .
crsv2a03b0 [ 1 ] ; tmp_nf [ 2U ] = rtB . crsv2a03b0 [ 2 ] ; tmp_nf [ 3U ] =
rtB . crsv2a03b0 [ 3 ] ; tmp_mi [ 1U ] = 4 ; simulationData -> mData ->
mInputValues . mN = 4 ; simulationData -> mData -> mInputValues . mX = &
tmp_nf [ 0U ] ; simulationData -> mData -> mInputOffsets . mN = 2 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_mi [ 0U ] ;
simulationData -> mData -> mOutputs . mN = 0 ; simulationData -> mData ->
mOutputs . mX = NULL ; simulationData -> mData -> mSampleHits . mN = 0 ;
simulationData -> mData -> mSampleHits . mX = NULL ; simulationData -> mData
-> mIsFundamentalSampleHit = false ; simulator = ( NeslSimulator * ) rtDW .
nyiiqtb3pj ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . lhf2yly352
; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; i = ne_simulator_method ( simulator , NESL_SIM_OUTPUTS
, simulationData , diagnosticManager ) ; if ( i != 0 ) { i =
rtw_diagnostics_message_count ( ) ; if ( i == 0 ) { msg = rtw_diagnostics_msg
( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } } simulationData = (
NeslSimulationData * ) rtDW . f4ygo2hyze ; time_fs = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_fs ; simulationData -> mData -> mContStates . mN = 0 ;
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
-> mIsSolverRequestingReset = tmp ; tmp_cc [ 0U ] = 0 ; tmp_b0 [ 0U ] = rtB .
mopdhxqse4 [ 0 ] ; tmp_b0 [ 1U ] = rtB . mopdhxqse4 [ 1 ] ; tmp_b0 [ 2U ] =
rtB . mopdhxqse4 [ 2 ] ; tmp_b0 [ 3U ] = rtB . mopdhxqse4 [ 3 ] ; tmp_cc [ 1U
] = 4 ; simulationData -> mData -> mInputValues . mN = 4 ; simulationData ->
mData -> mInputValues . mX = & tmp_b0 [ 0U ] ; simulationData -> mData ->
mInputOffsets . mN = 2 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_cc [ 0U ] ; simulationData -> mData -> mOutputs . mN = 0 ; simulationData
-> mData -> mOutputs . mX = NULL ; simulationData -> mData -> mSampleHits .
mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ; simulationData
-> mData -> mIsFundamentalSampleHit = false ; simulator = ( NeslSimulator * )
rtDW . ku2cbhbb3u ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW .
g3mxxyfx5h ; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; i = ne_simulator_method ( simulator , NESL_SIM_OUTPUTS
, simulationData , diagnosticManager ) ; if ( i != 0 ) { i =
rtw_diagnostics_message_count ( ) ; if ( i == 0 ) { msg = rtw_diagnostics_msg
( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } } simulationData = (
NeslSimulationData * ) rtDW . j3w0jjg10i ; time_ck = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_ck ; simulationData -> mData -> mContStates . mN = 0 ;
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
-> mIsSolverRequestingReset = tmp ; tmp_iz [ 0U ] = 0 ; tmp_gw [ 0U ] = rtB .
kcfetpaoaj [ 0 ] ; tmp_gw [ 1U ] = rtB . kcfetpaoaj [ 1 ] ; tmp_gw [ 2U ] =
rtB . kcfetpaoaj [ 2 ] ; tmp_gw [ 3U ] = rtB . kcfetpaoaj [ 3 ] ; tmp_iz [ 1U
] = 4 ; simulationData -> mData -> mInputValues . mN = 4 ; simulationData ->
mData -> mInputValues . mX = & tmp_gw [ 0U ] ; simulationData -> mData ->
mInputOffsets . mN = 2 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_iz [ 0U ] ; simulationData -> mData -> mOutputs . mN = 0 ; simulationData
-> mData -> mOutputs . mX = NULL ; simulationData -> mData -> mSampleHits .
mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ; simulationData
-> mData -> mIsFundamentalSampleHit = false ; simulator = ( NeslSimulator * )
rtDW . avoetnry4f ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW .
nzmye2eqv0 ; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; i = ne_simulator_method ( simulator , NESL_SIM_OUTPUTS
, simulationData , diagnosticManager ) ; if ( i != 0 ) { i =
rtw_diagnostics_message_count ( ) ; if ( i == 0 ) { msg = rtw_diagnostics_msg
( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } } rtB . od0xpltfi4 [
0 ] = 0.0 ; rtB . od0xpltfi4 [ 1 ] = 0.0 ; rtB . od0xpltfi4 [ 2 ] = 0.0 ; rtB
. od0xpltfi4 [ 3 ] = 0.0 ; rtB . khdrz5d30a [ 0 ] = 0.0 ; rtB . khdrz5d30a [
1 ] = 0.0 ; rtB . khdrz5d30a [ 2 ] = 0.0 ; rtB . khdrz5d30a [ 3 ] = 0.0 ; rtB
. ipafxshnxq [ 0 ] = 0.0 ; rtB . ipafxshnxq [ 1 ] = 0.0 ; rtB . ipafxshnxq [
2 ] = 0.0 ; rtB . ipafxshnxq [ 3 ] = 0.0 ; rtB . mken4d3mf5 [ 0 ] = 0.0 ; rtB
. mken4d3mf5 [ 1 ] = 0.0 ; rtB . mken4d3mf5 [ 2 ] = 0.0 ; rtB . mken4d3mf5 [
3 ] = 0.0 ; rtB . cl1j1vhnfj [ 0 ] = 0.0 ; rtB . cl1j1vhnfj [ 1 ] = 0.0 ; rtB
. cl1j1vhnfj [ 2 ] = 0.0 ; rtB . cl1j1vhnfj [ 3 ] = 0.0 ; rtB . p5kqpkokgo [
0 ] = 0.0 ; rtB . p5kqpkokgo [ 1 ] = 0.0 ; rtB . p5kqpkokgo [ 2 ] = 0.0 ; rtB
. p5kqpkokgo [ 3 ] = 0.0 ; UNUSED_PARAMETER ( tid ) ; } void MdlUpdate (
int_T tid ) { UNUSED_PARAMETER ( tid ) ; } void MdlDerivatives ( void ) {
NeslSimulationData * simulationData ; real_T time ; boolean_T tmp ; real_T
tmp_p [ 24 ] ; int_T tmp_e [ 7 ] ; NeslSimulator * simulator ;
NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree * diagnosticTree
; int32_T tmp_i ; char * msg ; XDot * _rtXdot ; _rtXdot = ( ( XDot * )
ssGetdX ( rtS ) ) ; { ( ( XDot * ) ssGetdX ( rtS ) ) -> c4heiwjyo0 = rtB .
mvfxom43g2 ; } { ( ( XDot * ) ssGetdX ( rtS ) ) -> cytsrnzz24 = rtB .
aptbtwirg2 ; } { ( ( XDot * ) ssGetdX ( rtS ) ) -> e5ilpltgaf = rtB .
gepgtl2di2 ; } { ( ( XDot * ) ssGetdX ( rtS ) ) -> ldm2uo30vp = rtB .
b2kmtindra ; } { ( ( XDot * ) ssGetdX ( rtS ) ) -> o0ls511edu = rtB .
glyfzrufqc ; } { ( ( XDot * ) ssGetdX ( rtS ) ) -> pcw0d3bv0m = rtB .
f1mgl1s1xb ; } simulationData = ( NeslSimulationData * ) rtDW . piiowhvoq3 ;
time = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ;
simulationData -> mData -> mTime . mX = & time ; simulationData -> mData ->
mContStates . mN = 14 ; simulationData -> mData -> mContStates . mX = (
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
mken4d3mf5 [ 0 ] ; tmp_p [ 1U ] = rtB . mken4d3mf5 [ 1 ] ; tmp_p [ 2U ] = rtB
. mken4d3mf5 [ 2 ] ; tmp_p [ 3U ] = rtB . mken4d3mf5 [ 3 ] ; tmp_e [ 1U ] = 4
; tmp_p [ 4U ] = rtB . cl1j1vhnfj [ 0 ] ; tmp_p [ 5U ] = rtB . cl1j1vhnfj [ 1
] ; tmp_p [ 6U ] = rtB . cl1j1vhnfj [ 2 ] ; tmp_p [ 7U ] = rtB . cl1j1vhnfj [
3 ] ; tmp_e [ 2U ] = 8 ; tmp_p [ 8U ] = rtB . p5kqpkokgo [ 0 ] ; tmp_p [ 9U ]
= rtB . p5kqpkokgo [ 1 ] ; tmp_p [ 10U ] = rtB . p5kqpkokgo [ 2 ] ; tmp_p [
11U ] = rtB . p5kqpkokgo [ 3 ] ; tmp_e [ 3U ] = 12 ; tmp_p [ 12U ] = rtB .
ioszdbstmn [ 0 ] ; tmp_p [ 13U ] = rtB . ioszdbstmn [ 1 ] ; tmp_p [ 14U ] =
rtB . ioszdbstmn [ 2 ] ; tmp_p [ 15U ] = rtB . ioszdbstmn [ 3 ] ; tmp_e [ 4U
] = 16 ; tmp_p [ 16U ] = rtB . euf53gdk1f [ 0 ] ; tmp_p [ 17U ] = rtB .
euf53gdk1f [ 1 ] ; tmp_p [ 18U ] = rtB . euf53gdk1f [ 2 ] ; tmp_p [ 19U ] =
rtB . euf53gdk1f [ 3 ] ; tmp_e [ 5U ] = 20 ; tmp_p [ 20U ] = rtB . itv2k1nlsr
[ 0 ] ; tmp_p [ 21U ] = rtB . itv2k1nlsr [ 1 ] ; tmp_p [ 22U ] = rtB .
itv2k1nlsr [ 2 ] ; tmp_p [ 23U ] = rtB . itv2k1nlsr [ 3 ] ; tmp_e [ 6U ] = 24
; simulationData -> mData -> mInputValues . mN = 24 ; simulationData -> mData
-> mInputValues . mX = & tmp_p [ 0U ] ; simulationData -> mData ->
mInputOffsets . mN = 7 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_e [ 0U ] ; simulationData -> mData -> mDx . mN = 14 ; simulationData ->
mData -> mDx . mX = ( real_T * ) & _rtXdot -> cjklakdih0 ; simulator = (
NeslSimulator * ) rtDW . oh2nksyqvj ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . n0nnoz5d3k ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( simulator , NESL_SIM_DERIVATIVES , simulationData ,
diagnosticManager ) ; if ( tmp_i != 0 ) { tmp_i =
rtw_diagnostics_message_count ( ) ; if ( tmp_i == 0 ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
} void MdlProjection ( void ) { NeslSimulationData * simulationData ; real_T
time ; boolean_T tmp ; real_T tmp_p [ 24 ] ; int_T tmp_e [ 7 ] ;
NeslSimulator * simulator ; NeuDiagnosticManager * diagnosticManager ;
NeuDiagnosticTree * diagnosticTree ; int32_T tmp_i ; char * msg ;
simulationData = ( NeslSimulationData * ) rtDW . piiowhvoq3 ; time = ssGetT (
rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time ; simulationData -> mData -> mContStates . mN = 14 ;
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
; tmp_p [ 0U ] = rtB . mken4d3mf5 [ 0 ] ; tmp_p [ 1U ] = rtB . mken4d3mf5 [ 1
] ; tmp_p [ 2U ] = rtB . mken4d3mf5 [ 2 ] ; tmp_p [ 3U ] = rtB . mken4d3mf5 [
3 ] ; tmp_e [ 1U ] = 4 ; tmp_p [ 4U ] = rtB . cl1j1vhnfj [ 0 ] ; tmp_p [ 5U ]
= rtB . cl1j1vhnfj [ 1 ] ; tmp_p [ 6U ] = rtB . cl1j1vhnfj [ 2 ] ; tmp_p [ 7U
] = rtB . cl1j1vhnfj [ 3 ] ; tmp_e [ 2U ] = 8 ; tmp_p [ 8U ] = rtB .
p5kqpkokgo [ 0 ] ; tmp_p [ 9U ] = rtB . p5kqpkokgo [ 1 ] ; tmp_p [ 10U ] =
rtB . p5kqpkokgo [ 2 ] ; tmp_p [ 11U ] = rtB . p5kqpkokgo [ 3 ] ; tmp_e [ 3U
] = 12 ; tmp_p [ 12U ] = rtB . ioszdbstmn [ 0 ] ; tmp_p [ 13U ] = rtB .
ioszdbstmn [ 1 ] ; tmp_p [ 14U ] = rtB . ioszdbstmn [ 2 ] ; tmp_p [ 15U ] =
rtB . ioszdbstmn [ 3 ] ; tmp_e [ 4U ] = 16 ; tmp_p [ 16U ] = rtB . euf53gdk1f
[ 0 ] ; tmp_p [ 17U ] = rtB . euf53gdk1f [ 1 ] ; tmp_p [ 18U ] = rtB .
euf53gdk1f [ 2 ] ; tmp_p [ 19U ] = rtB . euf53gdk1f [ 3 ] ; tmp_e [ 5U ] = 20
; tmp_p [ 20U ] = rtB . itv2k1nlsr [ 0 ] ; tmp_p [ 21U ] = rtB . itv2k1nlsr [
1 ] ; tmp_p [ 22U ] = rtB . itv2k1nlsr [ 2 ] ; tmp_p [ 23U ] = rtB .
itv2k1nlsr [ 3 ] ; tmp_e [ 6U ] = 24 ; simulationData -> mData ->
mInputValues . mN = 24 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0U ] ; simulationData -> mData -> mInputOffsets . mN = 7 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0U ] ; simulator =
( NeslSimulator * ) rtDW . oh2nksyqvj ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . n0nnoz5d3k ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( simulator , NESL_SIM_PROJECTION , simulationData ,
diagnosticManager ) ; if ( tmp_i != 0 ) { tmp_i =
rtw_diagnostics_message_count ( ) ; if ( tmp_i == 0 ) { msg =
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
neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW . n0nnoz5d3k
) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW . piiowhvoq3
) ; nesl_erase_simulator (
"friccion_aislada_esferica/Robot Delta/Solver Configuration" ) ;
neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW . psaiktqsay
) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW . i4aru4d13y
) ; nesl_erase_simulator (
"friccion_aislada_esferica/Robot Delta/Solver Configuration" ) ;
neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW . bwrk1jrfjh
) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW . jstvsrdxec
) ; nesl_erase_simulator (
"friccion_aislada_esferica/Robot Delta/Solver Configuration" ) ;
neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW . is3dc1o4zz
) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW . bzrmjhnabu
) ; nesl_erase_simulator (
"friccion_aislada_esferica/Robot Delta/Solver Configuration" ) ;
neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW . pxp5ilgmi3
) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW . evijjolyva
) ; nesl_erase_simulator (
"friccion_aislada_esferica/Robot Delta/Solver Configuration" ) ;
neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW . aa1kkeyuws
) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW . gsrotkxe3w
) ; nesl_erase_simulator (
"friccion_aislada_esferica/Robot Delta/Solver Configuration" ) ;
neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW . iob4nznmac
) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW . gkm0s0ctrk
) ; nesl_erase_simulator (
"friccion_aislada_esferica/Robot Delta/Solver Configuration" ) ;
neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW . l25nib43el
) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW . hwdzla2kb2
) ; nesl_erase_simulator (
"friccion_aislada_esferica/Robot Delta/Solver Configuration" ) ;
neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW . c2oj5ebuij
) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW . gftgep1sjl
) ; nesl_erase_simulator (
"friccion_aislada_esferica/Robot Delta/Solver Configuration" ) ;
neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW . eow2enys5v
) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW . jrmucmc5l0
) ; nesl_erase_simulator (
"friccion_aislada_esferica/Robot Delta/Solver Configuration" ) ;
neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW . hpobr5dnto
) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW . mw4azdjt0i
) ; nesl_erase_simulator (
"friccion_aislada_esferica/Robot Delta/Solver Configuration" ) ;
neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW . pinay1nrr3
) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW . dntzyn5tmg
) ; nesl_erase_simulator (
"friccion_aislada_esferica/Robot Delta/Solver Configuration" ) ;
neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW . nyzomkvmej
) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW . gksf2y3xqu
) ; nesl_erase_simulator (
"friccion_aislada_esferica/Robot Delta/Solver Configuration" ) ;
neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW . j4zuphpirj
) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW . o50nrjnd44
) ; nesl_erase_simulator (
"friccion_aislada_esferica/Robot Delta/Solver Configuration" ) ;
neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW . ac2uu54gd3
) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW . atpqvqjfs5
) ; nesl_erase_simulator (
"friccion_aislada_esferica/Robot Delta/Solver Configuration" ) ;
neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW . lhf2yly352
) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW . gcums0dzz2
) ; nesl_erase_simulator (
"friccion_aislada_esferica/Robot Delta/Solver Configuration" ) ;
neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW . g3mxxyfx5h
) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW . f4ygo2hyze
) ; nesl_erase_simulator (
"friccion_aislada_esferica/Robot Delta/Solver Configuration" ) ;
neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW . nzmye2eqv0
) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW . j3w0jjg10i
) ; nesl_erase_simulator (
"friccion_aislada_esferica/Robot Delta/Solver Configuration" ) ; } void
MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS , 20 ) ; ssSetNumY (
rtS , 0 ) ; ssSetNumU ( rtS , 0 ) ; ssSetDirectFeedThrough ( rtS , 0 ) ;
ssSetNumSampleTimes ( rtS , 1 ) ; ssSetNumBlocks ( rtS , 140 ) ;
ssSetNumBlockIO ( rtS , 38 ) ; ssSetNumBlockParams ( rtS , 26 ) ; } void
MdlInitializeSampleTimes ( void ) { ssSetSampleTime ( rtS , 0 , 0.0 ) ;
ssSetOffsetTime ( rtS , 0 , 0.0 ) ; } void raccel_set_checksum ( SimStruct *
rtS ) { ssSetChecksumVal ( rtS , 0 , 1536412683U ) ; ssSetChecksumVal ( rtS ,
1 , 1853398603U ) ; ssSetChecksumVal ( rtS , 2 , 262656827U ) ;
ssSetChecksumVal ( rtS , 3 , 4265661439U ) ; } SimStruct *
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
dtInfo . P = & rtPTransTable ; }
friccion_aislada_esferica_InitializeDataMapInfo ( rtS ) ;
ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ;
ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS ,
"friccion_aislada_esferica" ) ; ssSetPath ( rtS , "friccion_aislada_esferica"
) ; ssSetTStart ( rtS , 0.0 ) ; ssSetTFinal ( rtS , 13.0 ) ; { static
RTWLogInfo rt_DataLoggingInfo ; ssSetRTWLogInfo ( rtS , & rt_DataLoggingInfo
) ; } { { static int_T rt_LoggedStateWidths [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 4
, 3 , 4 , 3 , 1 , 1 , 1 , 1 , 1 , 1 } ; static int_T
rt_LoggedStateNumDimensions [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 } ; static int_T rt_LoggedStateDimensions [ ] = { 1 , 1 ,
1 , 1 , 1 , 1 , 4 , 3 , 4 , 3 , 1 , 1 , 1 , 1 , 1 , 1 } ; static boolean_T
rt_LoggedStateIsVarDims [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 } ; static BuiltInDTypeId rt_LoggedStateDataTypeIds [ ] = {
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE } ; static int_T
rt_LoggedStateComplexSignals [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 } ; static const char_T * rt_LoggedStateLabels [ ] = {
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "DiscStates" , "DiscStates" , "DiscStates" ,
"DiscStates" , "DiscStates" , "DiscStates" } ; static const char_T *
rt_LoggedStateBlockNames [ ] = {
"friccion_aislada_esferica/Subsystem/Control M1/PID Controller1/Integrator" ,
"friccion_aislada_esferica/Subsystem/Control M1/PID Controller1/Filter" ,
"friccion_aislada_esferica/Subsystem/Control M2/PID Controller1/Integrator" ,
"friccion_aislada_esferica/Subsystem/Control M2/PID Controller1/Filter" ,
"friccion_aislada_esferica/Subsystem/Control M3/PID Controller1/Integrator" ,
"friccion_aislada_esferica/Subsystem/Control M3/PID Controller1/Filter" ,
"friccion_aislada_esferica/Robot Delta/Spherical1" ,
"friccion_aislada_esferica/Robot Delta/Spherical1" ,
"friccion_aislada_esferica/Robot Delta/Spherical3" ,
"friccion_aislada_esferica/Robot Delta/Spherical3" ,
 "friccion_aislada_esferica/Robot Delta/Solver\nConfiguration/EVAL_KEY/EXEC_INPUT_21"
,
 "friccion_aislada_esferica/Robot Delta/Solver\nConfiguration/EVAL_KEY/EXEC_INPUT_22"
,
 "friccion_aislada_esferica/Robot Delta/Solver\nConfiguration/EVAL_KEY/EXEC_INPUT_20"
,
 "friccion_aislada_esferica/Robot Delta/Solver\nConfiguration/EVAL_KEY/EXEC_INPUT_17"
,
 "friccion_aislada_esferica/Robot Delta/Solver\nConfiguration/EVAL_KEY/EXEC_INPUT_19"
,
 "friccion_aislada_esferica/Robot Delta/Solver\nConfiguration/EVAL_KEY/EXEC_INPUT_18"
} ; static const char_T * rt_LoggedStateNames [ ] = { "" , "" , "" , "" , ""
, "" , "Robot_Delta.Spherical1.S.Q" , "Robot_Delta.Spherical1.S.w" ,
"Robot_Delta.Spherical3.S.Q" , "Robot_Delta.Spherical3.S.w" , "" , "" , "" ,
"" , "" , "" } ; static boolean_T rt_LoggedStateCrossMdlRef [ ] = { 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static
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
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } } ; static RTWLogSignalInfo
rt_LoggedStateSignalInfo = { 16 , rt_LoggedStateWidths ,
rt_LoggedStateNumDimensions , rt_LoggedStateDimensions ,
rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , { rt_LoggedStateLabels } , ( NULL )
, ( NULL ) , ( NULL ) , { rt_LoggedStateBlockNames } , { rt_LoggedStateNames
} , rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert } ; static void *
rt_LoggedStateSignalPtrs [ 16 ] ; rtliSetLogXSignalPtrs ( ssGetRTWLogInfo (
rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtX . c4heiwjyo0 ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtX . cytsrnzz24 ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtX . e5ilpltgaf ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) & rtX . ldm2uo30vp ;
rt_LoggedStateSignalPtrs [ 4 ] = ( void * ) & rtX . o0ls511edu ;
rt_LoggedStateSignalPtrs [ 5 ] = ( void * ) & rtX . pcw0d3bv0m ;
rt_LoggedStateSignalPtrs [ 6 ] = ( void * ) & rtX . cjklakdih0 [ 0 ] ;
rt_LoggedStateSignalPtrs [ 7 ] = ( void * ) & rtX . cjklakdih0 [ 4 ] ;
rt_LoggedStateSignalPtrs [ 8 ] = ( void * ) & rtX . cjklakdih0 [ 7 ] ;
rt_LoggedStateSignalPtrs [ 9 ] = ( void * ) & rtX . cjklakdih0 [ 11 ] ;
rt_LoggedStateSignalPtrs [ 10 ] = ( void * ) & rtDW . g0ybx5ny0s ;
rt_LoggedStateSignalPtrs [ 11 ] = ( void * ) & rtDW . citycn5tuj ;
rt_LoggedStateSignalPtrs [ 12 ] = ( void * ) & rtDW . mxwpzq1ids ;
rt_LoggedStateSignalPtrs [ 13 ] = ( void * ) & rtDW . hofd5gl0lv ;
rt_LoggedStateSignalPtrs [ 14 ] = ( void * ) & rtDW . lqg4ib442l ;
rt_LoggedStateSignalPtrs [ 15 ] = ( void * ) & rtDW . kmxvynb5xg ; }
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
mdlMethods2 ; static boolean_T contStatesDisabled [ 20 ] ; static real_T
absTol [ 20 ] = { 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 } ; static uint8_T
absTolControl [ 20 ] = { 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U } ; static uint8_T zcAttributes
[ 6 ] = { ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) } ; ssSetSolverRelTol (
rtS , 0.001 ) ; ssSetStepSize ( rtS , 0.0 ) ; ssSetMinStepSize ( rtS , 0.0 )
; ssSetMaxNumMinSteps ( rtS , - 1 ) ; ssSetMinStepViolatedError ( rtS , 0 ) ;
ssSetMaxStepSize ( rtS , 0.26 ) ; ssSetSolverMaxOrder ( rtS , - 1 ) ;
ssSetSolverRefineFactor ( rtS , 1 ) ; ssSetOutputTimes ( rtS , ( NULL ) ) ;
ssSetNumOutputTimes ( rtS , 0 ) ; ssSetOutputTimesOnly ( rtS , 0 ) ;
ssSetOutputTimesIndex ( rtS , 0 ) ; ssSetZCCacheNeedsReset ( rtS , 1 ) ;
ssSetDerivCacheNeedsReset ( rtS , 0 ) ; ssSetNumNonContDerivSigInfos ( rtS ,
0 ) ; ssSetNonContDerivSigInfos ( rtS , ( NULL ) ) ; ssSetSolverInfo ( rtS ,
& slvrInfo ) ; ssSetSolverName ( rtS , "ode45" ) ; ssSetVariableStepSolver (
rtS , 1 ) ; ssSetSolverConsistencyChecking ( rtS , 0 ) ;
ssSetSolverAdaptiveZcDetection ( rtS , 0 ) ; ssSetSolverRobustResetMethod (
rtS , 0 ) ; _ssSetSolverUpdateJacobianAtReset ( rtS , true ) ;
ssSetAbsTolVector ( rtS , absTol ) ; ssSetAbsTolControlVector ( rtS ,
absTolControl ) ; ssSetSolverAbsTol_Obsolete ( rtS , absTol ) ;
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
ssSetChecksumVal ( rtS , 0 , 1536412683U ) ; ssSetChecksumVal ( rtS , 1 ,
1853398603U ) ; ssSetChecksumVal ( rtS , 2 , 262656827U ) ; ssSetChecksumVal
( rtS , 3 , 4265661439U ) ; { static const sysRanDType rtAlwaysEnabled =
SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo rt_ExtModeInfo ; static const
sysRanDType * systemRan [ 3 ] ; ssSetRTWExtModeInfo ( rtS , & rt_ExtModeInfo
) ; rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo , systemRan ) ;
systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = & rtAlwaysEnabled ;
systemRan [ 2 ] = & rtAlwaysEnabled ; rteiSetModelMappingInfoPtr (
ssGetRTWExtModeInfo ( rtS ) , & ssGetModelMappingInfo ( rtS ) ) ;
rteiSetChecksumsPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetChecksums ( rtS ) )
; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetTPtr ( rtS ) ) ; } return
rtS ; }
