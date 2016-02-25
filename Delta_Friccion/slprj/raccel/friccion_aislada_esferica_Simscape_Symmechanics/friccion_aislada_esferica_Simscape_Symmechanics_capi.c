#include "__cf_friccion_aislada_esferica_Simscape_Symmechanics.h"
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "friccion_aislada_esferica_Simscape_Symmechanics_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "friccion_aislada_esferica_Simscape_Symmechanics.h"
#include "friccion_aislada_esferica_Simscape_Symmechanics_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/PS-Simulink Converter/EVAL_KEY/reshape"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 1 , 0 , TARGET_STRING (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/PS-Simulink Converter1/EVAL_KEY/reshape"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 2 , 0 , TARGET_STRING (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/PS-Simulink Converter2/EVAL_KEY/reshape"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 3 , 0 , TARGET_STRING (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/PS-Simulink Converter3/EVAL_KEY/reshape"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 4 , 0 , TARGET_STRING (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration/EVAL_KEY/EXEC_INPUT_17"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 5 , 0 , TARGET_STRING (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration/EVAL_KEY/EXEC_INPUT_18"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 6 , 0 , TARGET_STRING (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration/EVAL_KEY/EXEC_INPUT_19"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 7 , 0 , TARGET_STRING (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration/EVAL_KEY/EXEC_INPUT_20"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 8 , 0 , TARGET_STRING (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration/EVAL_KEY/EXEC_INPUT_21"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 9 , 0 , TARGET_STRING (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration/EVAL_KEY/EXEC_INPUT_22"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 10 , 0 , TARGET_STRING (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration/EVAL_KEY/EXEC_OUTPUT_11"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 11 , 0 , TARGET_STRING (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration/EVAL_KEY/EXEC_OUTPUT_13"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 12 , 0 , TARGET_STRING (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration/EVAL_KEY/EXEC_OUTPUT_15"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 13 , 0 , TARGET_STRING (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration/EVAL_KEY/EXEC_OUTPUT_9"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 14 , 0 , TARGET_STRING (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration/EVAL_KEY/EXEC_STATE_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 15 , 0 , TARGET_STRING (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration/EVAL_KEY/EXEC_STATE_2"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 16 , 0 , TARGET_STRING (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration/EVAL_KEY/EXEC_STATE_3"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 17 , 0 , TARGET_STRING (
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Solver Configuration/EVAL_KEY/EXEC_STATE_4"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL
) , 0 , 0 , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . il3w4ovzm5 , & rtB . khywms0clb ,
& rtB . pfk4qbtcfu , & rtB . pjhhb5kquv [ 0 ] , & rtB . ioszdbstmn [ 0 ] , &
rtB . itv2k1nlsr [ 0 ] , & rtB . euf53gdk1f [ 0 ] , & rtB . kcfetpaoaj [ 0 ]
, & rtB . crsv2a03b0 [ 0 ] , & rtB . mopdhxqse4 [ 0 ] , & rtB . jpvxooq51q ,
& rtB . pjx0kmxjmu , & rtB . l2jfs00ccy [ 0 ] , & rtB . od0udch0bu , & rtB .
n1oykolxud [ 0 ] , & rtB . jjfsxd2pht [ 0 ] , & rtB . jrta0gtdwd [ 0 ] , &
rtB . hay0z4ydom [ 0 ] , } ; static int32_T * rtVarDimsAddrMap [ ] = { ( NULL
) } ;
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
const uint_T rtDimensionArray [ ] = { 1 , 1 , 4 , 1 , 7 , 1 , 5 , 1 } ;
static const real_T rtcapiStoredFloats [ ] = { 0.0 } ; static const
rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static const rtwCAPI_SampleTimeMap
rtSampleTimeMap [ ] = { { ( const void * ) & rtcapiStoredFloats [ 0 ] , (
const void * ) & rtcapiStoredFloats [ 0 ] , 0 , 0 } } ; static
rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 18 , ( NULL )
, 0 , ( NULL ) , 0 } , { ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL ) , 0 } , {
rtDataTypeMap , rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap
, rtDimensionArray } , "float" , { 794203140U , 1665204939U , 3883052603U ,
2955421286U } , ( NULL ) , 0 } ; const rtwCAPI_ModelMappingStaticInfo *
friccion_aislada_esferica_Simscape_Symmechanics_GetCAPIStaticMap ( ) { return
& mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void friccion_aislada_esferica_Simscape_Symmechanics_InitializeDataMapInfo (
SimStruct * const rtS ) { rtwCAPI_SetVersion ( ( * rt_dataMapInfoPtr ) . mmi
, 1 ) ; rtwCAPI_SetStaticMap ( ( * rt_dataMapInfoPtr ) . mmi , & mmiStatic )
; rtwCAPI_SetLoggingStaticMap ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
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
void
friccion_aislada_esferica_Simscape_Symmechanics_host_InitializeDataMapInfo (
friccion_aislada_esferica_Simscape_Symmechanics_host_DataMapInfo_T * dataMap
, const char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ;
rtwCAPI_SetStaticMap ( dataMap -> mmi , & mmiStatic ) ;
rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
