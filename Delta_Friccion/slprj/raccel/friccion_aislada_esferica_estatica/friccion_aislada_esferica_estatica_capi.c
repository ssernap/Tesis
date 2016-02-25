#include "__cf_friccion_aislada_esferica_estatica.h"
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "friccion_aislada_esferica_estatica_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "friccion_aislada_esferica_estatica.h"
#include "friccion_aislada_esferica_estatica_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 1 , TARGET_STRING (
"friccion_aislada_esferica_estatica/Cinematica Inversa" ) , TARGET_STRING (
"" ) , 1 , 0 , 0 , 0 , 0 } , { 1 , 1 , TARGET_STRING (
"friccion_aislada_esferica_estatica/Cinematica Inversa" ) , TARGET_STRING (
"" ) , 2 , 0 , 0 , 0 , 0 } , { 2 , 2 , TARGET_STRING (
"friccion_aislada_esferica_estatica/Posicion " ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 0 } , { 3 , 2 , TARGET_STRING (
"friccion_aislada_esferica_estatica/Posicion " ) , TARGET_STRING ( "" ) , 1 ,
0 , 0 , 0 , 0 } , { 4 , 2 , TARGET_STRING (
"friccion_aislada_esferica_estatica/Posicion " ) , TARGET_STRING ( "" ) , 2 ,
0 , 0 , 0 , 0 } , { 5 , 0 , TARGET_STRING (
"friccion_aislada_esferica_estatica/Gain" ) , TARGET_STRING ( "" ) , 0 , 0 ,
0 , 0 , 0 } , { 6 , 0 , TARGET_STRING (
 "friccion_aislada_esferica_estatica/Robot Delta/PS-Simulink Converter/EVAL_KEY/reshape"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 7 , 0 , TARGET_STRING (
 "friccion_aislada_esferica_estatica/Robot Delta/PS-Simulink Converter1/EVAL_KEY/reshape"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 8 , 0 , TARGET_STRING (
 "friccion_aislada_esferica_estatica/Robot Delta/Solver Configuration/EVAL_KEY/BUILTIN_RateTransition_17"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 9 , 0 , TARGET_STRING (
 "friccion_aislada_esferica_estatica/Robot Delta/Solver Configuration/EVAL_KEY/BUILTIN_RateTransition_19"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 10 , 0 , TARGET_STRING (
 "friccion_aislada_esferica_estatica/Robot Delta/Solver Configuration/EVAL_KEY/BUILTIN_RateTransition_21"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 11 , 0 , TARGET_STRING (
 "friccion_aislada_esferica_estatica/Robot Delta/Solver Configuration/EVAL_KEY/BUILTIN_RateTransition_23"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 12 , 0 , TARGET_STRING (
 "friccion_aislada_esferica_estatica/Robot Delta/Solver Configuration/EVAL_KEY/BUILTIN_RateTransition_25"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 13 , 0 , TARGET_STRING (
 "friccion_aislada_esferica_estatica/Robot Delta/Solver Configuration/EVAL_KEY/BUILTIN_RateTransition_27"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 14 , 0 , TARGET_STRING (
 "friccion_aislada_esferica_estatica/Robot Delta/Solver Configuration/EVAL_KEY/EXEC_INPUT_18"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 15 , 0 , TARGET_STRING (
 "friccion_aislada_esferica_estatica/Robot Delta/Solver Configuration/EVAL_KEY/EXEC_INPUT_20"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 16 , 0 , TARGET_STRING (
 "friccion_aislada_esferica_estatica/Robot Delta/Solver Configuration/EVAL_KEY/EXEC_INPUT_22"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 17 , 0 , TARGET_STRING (
 "friccion_aislada_esferica_estatica/Robot Delta/Solver Configuration/EVAL_KEY/EXEC_INPUT_24"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 2 } , { 18 , 0 , TARGET_STRING (
 "friccion_aislada_esferica_estatica/Robot Delta/Solver Configuration/EVAL_KEY/EXEC_INPUT_26"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 2 } , { 19 , 0 , TARGET_STRING (
 "friccion_aislada_esferica_estatica/Robot Delta/Solver Configuration/EVAL_KEY/EXEC_INPUT_28"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 2 } , { 20 , 0 , TARGET_STRING (
 "friccion_aislada_esferica_estatica/Robot Delta/Solver Configuration/EVAL_KEY/EXEC_OUTPUT_11"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 21 , 0 , TARGET_STRING (
 "friccion_aislada_esferica_estatica/Robot Delta/Solver Configuration/EVAL_KEY/EXEC_OUTPUT_13"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 22 , 0 , TARGET_STRING (
 "friccion_aislada_esferica_estatica/Robot Delta/Solver Configuration/EVAL_KEY/EXEC_OUTPUT_9"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 23 , 0 , TARGET_STRING (
 "friccion_aislada_esferica_estatica/Robot Delta/Solver Configuration/EVAL_KEY/EXEC_STATE_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 2 } , { 24 , 0 , TARGET_STRING (
 "friccion_aislada_esferica_estatica/Robot Delta/Solver Configuration/EVAL_KEY/EXEC_STATE_2"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 2 } , { 25 , 0 , TARGET_STRING (
 "friccion_aislada_esferica_estatica/Robot Delta/Solver Configuration/EVAL_KEY/EXEC_STATE_3"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 2 } , { 26 , 0 , TARGET_STRING (
 "friccion_aislada_esferica_estatica/Robot Delta/Solver Configuration/EVAL_KEY/EXEC_STATE_4"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 27 , 0 , TARGET_STRING (
 "friccion_aislada_esferica_estatica/Subsystem/Control M1/PID Controller1/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 28 , 0 , TARGET_STRING (
 "friccion_aislada_esferica_estatica/Subsystem/Control M1/PID Controller1/Integral Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 29 , 0 , TARGET_STRING (
 "friccion_aislada_esferica_estatica/Subsystem/Control M1/PID Controller1/Saturation"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 30 , 0 , TARGET_STRING (
"friccion_aislada_esferica_estatica/Subsystem/Control M1/PID Controller1/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 31 , 0 , TARGET_STRING (
 "friccion_aislada_esferica_estatica/Subsystem/Control M2/PID Controller1/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 32 , 0 , TARGET_STRING (
 "friccion_aislada_esferica_estatica/Subsystem/Control M2/PID Controller1/Integral Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 33 , 0 , TARGET_STRING (
 "friccion_aislada_esferica_estatica/Subsystem/Control M2/PID Controller1/Saturation"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 34 , 0 , TARGET_STRING (
"friccion_aislada_esferica_estatica/Subsystem/Control M2/PID Controller1/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 35 , 0 , TARGET_STRING (
 "friccion_aislada_esferica_estatica/Subsystem/Control M3/PID Controller1/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 36 , 0 , TARGET_STRING (
 "friccion_aislada_esferica_estatica/Subsystem/Control M3/PID Controller1/Integral Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 37 , 0 , TARGET_STRING (
 "friccion_aislada_esferica_estatica/Subsystem/Control M3/PID Controller1/Saturation"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 38 , 0 , TARGET_STRING (
"friccion_aislada_esferica_estatica/Subsystem/Control M3/PID Controller1/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL
) , 0 , 0 , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . osjgev2jfz , & rtB . iier5jnm1g ,
& rtB . pljjj452mj , & rtB . iczpsbisae , & rtB . o4nsjknro4 , & rtB .
al3p3wiuhl , & rtB . lqlbnkdbfc , & rtB . ppwjb2mgez , & rtB . d5wdh45q4j , &
rtB . gmk2mqmnrv , & rtB . baafwnqhzg , & rtB . fiqjxgaeqv , & rtB .
b1apntsclq , & rtB . bc1ywsncjv , & rtB . itv2k1nlsr [ 0 ] , & rtB .
kcfetpaoaj [ 0 ] , & rtB . mopdhxqse4 [ 0 ] , & rtB . jjklppy5k2 [ 0 ] , &
rtB . guyeh3e3kz [ 0 ] , & rtB . nx50lbvr12 [ 0 ] , & rtB . jpvxooq51q , &
rtB . pjx0kmxjmu , & rtB . od0udch0bu , & rtB . n1oykolxud [ 0 ] , & rtB .
jjfsxd2pht [ 0 ] , & rtB . jrta0gtdwd [ 0 ] , & rtB . hay0z4ydom [ 0 ] , &
rtB . aptbtwirg2 , & rtB . mvfxom43g2 , & rtB . iuntmk0pqm , & rtB .
jrnsoabm5v , & rtB . b2kmtindra , & rtB . gepgtl2di2 , & rtB . b1nojvudsr , &
rtB . hq20auavrt , & rtB . f1mgl1s1xb , & rtB . glyfzrufqc , & rtB .
oawkdb23jw , & rtB . dvhl00qx2u , } ; static int32_T * rtVarDimsAddrMap [ ] =
{ ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , SS_DOUBLE , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } , { rtwCAPI_VECTOR , 6 , 2 , 0 } } ; static
const uint_T rtDimensionArray [ ] = { 1 , 1 , 4 , 1 , 3 , 1 , 14 , 1 } ;
static const real_T rtcapiStoredFloats [ ] = { 0.0 , 1.0 , 0.001 } ; static
const rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static const rtwCAPI_SampleTimeMap
rtSampleTimeMap [ ] = { { ( const void * ) & rtcapiStoredFloats [ 0 ] , (
const void * ) & rtcapiStoredFloats [ 0 ] , 0 , 0 } , { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , 1 ,
0 } , { ( const void * ) & rtcapiStoredFloats [ 2 ] , ( const void * ) &
rtcapiStoredFloats [ 0 ] , 2 , 0 } } ; static rtwCAPI_ModelMappingStaticInfo
mmiStatic = { { rtBlockSignals , 39 , ( NULL ) , 0 , ( NULL ) , 0 } , { (
NULL ) , 0 , ( NULL ) , 0 } , { ( NULL ) , 0 } , { rtDataTypeMap ,
rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap ,
rtDimensionArray } , "float" , { 1599401393U , 3640155459U , 4139718532U ,
1236896111U } , ( NULL ) , 0 } ; const rtwCAPI_ModelMappingStaticInfo *
friccion_aislada_esferica_estatica_GetCAPIStaticMap ( ) { return & mmiStatic
; }
#ifndef HOST_CAPI_BUILD
void friccion_aislada_esferica_estatica_InitializeDataMapInfo ( SimStruct *
const rtS ) { rtwCAPI_SetVersion ( ( * rt_dataMapInfoPtr ) . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( ( * rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetDataAddressMap ( ( * rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ;
rtwCAPI_SetVarDimsAddressMap ( ( * rt_dataMapInfoPtr ) . mmi ,
rtVarDimsAddrMap ) ; rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr )
. mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi
, ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi ,
0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void friccion_aislada_esferica_estatica_host_InitializeDataMapInfo (
friccion_aislada_esferica_estatica_host_DataMapInfo_T * dataMap , const char
* path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap (
dataMap -> mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi ,
NULL ) ; rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetPath ( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap ->
mmi , NULL ) ; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
