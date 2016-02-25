#include "__cf_friccion_aislada.h"
#ifndef RTW_HEADER_friccion_aislada_h_
#define RTW_HEADER_friccion_aislada_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap.h"
#ifndef friccion_aislada_COMMON_INCLUDES_
#define friccion_aislada_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "rt_logging.h"
#include "dt_info.h"
#include "ext_work.h"
#include "nesl_rtw.h"
#include "friccion_aislada_d30b7e43_gateway.h"
#endif
#include "friccion_aislada_types.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rt_defines.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME friccion_aislada
#define NSAMPLE_TIMES (1) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (23) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (8)   
#elif NCSTATES != 8
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
typedef struct { real_T al3p3wiuhl ; real_T aptbtwirg2 ; real_T jrnsoabm5v ;
real_T iuntmk0pqm ; real_T b2kmtindra ; real_T hq20auavrt ; real_T b1nojvudsr
; real_T f1mgl1s1xb ; real_T dvhl00qx2u ; real_T oawkdb23jw ; real_T
mvfxom43g2 ; real_T gepgtl2di2 ; real_T glyfzrufqc ; real_T jjfsxd2pht [ 2 ]
; real_T kpgvwiv1ba ; real_T hyoklokl5z [ 4 ] ; real_T eg4lb0s2bh ; real_T
dccd4mhei1 [ 4 ] ; real_T pljjj452mj ; real_T iczpsbisae ; real_T o4nsjknro4
; real_T osjgev2jfz ; real_T iier5jnm1g ; } B ; typedef struct { real_T
bkz3pip0b3 ; real_T pkuuqhesdo ; struct { void * LoggedData ; } b4ags411aw ;
struct { void * LoggedData ; } bp22cutfje ; struct { void * LoggedData ; }
etebikasf0 ; struct { void * LoggedData ; } nxlxutql3x ; struct { void *
LoggedData ; } b4ibq4fiew ; void * ku2cbhbb3u ; void * f4ygo2hyze ; void *
g3mxxyfx5h ; void * mdbfuljwns ; void * ha0jipw4xl ; void * m1qd0xfu3n ; void
* eqo2lqtdrq ; void * epnuqlho43 ; void * lpbb3ni4mc ; void * bwpjy3sdby ;
void * cra3jb3y0w ; void * cckhbqzmkz ; void * ngaoo2eejn ; void * ghvdvk3tq5
; void * dbi4el4qm5 ; void * javjhfpea0 ; void * c35s3qa5pe ; void *
kihgsxbg1w ; void * cipqhnthls ; void * exvjdxwqel ; void * c52ibvvdh2 ; void
* mcvrzvza0a ; void * fvh45ypqnb ; void * gl1yximjm3 ; void * cgg13ausdb ;
void * kxoqefzlou ; void * oquym14qcv ; void * om1znyxidc ; void * lyunstdcsr
; void * bwmj0acmob ; void * fxum5hjnru ; void * j2oaqyzpyc ; void *
lhhgzjnvtn ; void * eglf5tr0lt ; void * hvbh0rilro ; void * nyiiqtb3pj ; void
* gcums0dzz2 ; void * lhf2yly352 ; void * aabtyyllyb ; void * g03azz2emd ;
int_T nvlp11rn3a ; int_T nusy4aj0zr ; int_T i33y5j4e2i ; } DW ; typedef
struct { real_T c4heiwjyo0 ; real_T cytsrnzz24 ; real_T e5ilpltgaf ; real_T
ldm2uo30vp ; real_T o0ls511edu ; real_T pcw0d3bv0m ; real_T daoi22nz3l [ 2 ]
; } X ; typedef struct { real_T c4heiwjyo0 ; real_T cytsrnzz24 ; real_T
e5ilpltgaf ; real_T ldm2uo30vp ; real_T o0ls511edu ; real_T pcw0d3bv0m ;
real_T daoi22nz3l [ 2 ] ; } XDot ; typedef struct { boolean_T c4heiwjyo0 ;
boolean_T cytsrnzz24 ; boolean_T e5ilpltgaf ; boolean_T ldm2uo30vp ;
boolean_T o0ls511edu ; boolean_T pcw0d3bv0m ; boolean_T daoi22nz3l [ 2 ] ; }
XDis ; typedef struct { real_T c4heiwjyo0 ; real_T cytsrnzz24 ; real_T
e5ilpltgaf ; real_T ldm2uo30vp ; real_T o0ls511edu ; real_T pcw0d3bv0m ;
real_T daoi22nz3l [ 2 ] ; } CStateAbsTol ; typedef struct { real_T mwqoushr4t
; real_T ktu22l2ybc ; real_T injupbslsr ; real_T mpwhqk1v0r ; real_T
lrqup5u2mg ; real_T pkjggipfmr ; } ZCV ; typedef struct { ZCSigState
iwf2ottd0g ; ZCSigState lbtolrcvfy ; ZCSigState iipv1afcrt ; ZCSigState
ewwn5jfkfk ; ZCSigState azeupfq3jg ; ZCSigState mqljqece55 ; } PrevZCX ;
typedef struct { rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct P_ {
real_T Gain_Gain ; real_T Gain_Gain_j13fe42xcx ; real_T ProportionalGain_Gain
; real_T Integrator_IC ; real_T DerivativeGain_Gain ; real_T Filter_IC ;
real_T FilterCoefficient_Gain ; real_T Saturation_UpperSat ; real_T
Saturation_LowerSat ; real_T ProportionalGain_Gain_opm0dtoc1v ; real_T
Integrator_IC_efr3g1wrer ; real_T DerivativeGain_Gain_pfs2epusuf ; real_T
Filter_IC_gdoix51u4z ; real_T FilterCoefficient_Gain_ediatr1iqq ; real_T
Saturation_UpperSat_e2lmnhs4sw ; real_T Saturation_LowerSat_b5ltm0ubpa ;
real_T ProportionalGain_Gain_o1sqswnaqc ; real_T Integrator_IC_cvaudhvmvm ;
real_T DerivativeGain_Gain_hru04pbg0s ; real_T Filter_IC_ajlfi3u02h ; real_T
FilterCoefficient_Gain_hiknh0un1z ; real_T Saturation_UpperSat_mneiexavww ;
real_T Saturation_LowerSat_bhtm255dky ; real_T IntegralGain_Gain ; real_T
IntegralGain_Gain_cjxryeebdo ; real_T IntegralGain_Gain_c2fz3dj4be ; } ;
extern P rtP ; extern const char * RT_MEMORY_ALLOCATION_ERROR ; extern B rtB
; extern X rtX ; extern DW rtDW ; extern PrevZCX rtPrevZCX ; extern const
rtwCAPI_ModelMappingStaticInfo * friccion_aislada_GetCAPIStaticMap ( void ) ;
extern SimStruct * const rtS ; extern const int_T gblNumToFiles ; extern
const int_T gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ; extern
rtInportTUtable * gblInportTUtables ; extern const char * gblInportFileName ;
extern const int_T gblNumRootInportBlks ; extern const int_T
gblNumModelInputs ; extern const int_T gblInportDataTypeIdx [ ] ; extern
const int_T gblInportDims [ ] ; extern const int_T gblInportComplex [ ] ;
extern const int_T gblInportInterpoFlag [ ] ; extern const int_T
gblInportContinuous [ ] ; extern DataMapInfo * rt_dataMapInfoPtr ; extern
rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ;
#endif
