#include "__cf_friccion_aislada_esferica_estatica.h"
#ifndef RTW_HEADER_friccion_aislada_esferica_estatica_h_
#define RTW_HEADER_friccion_aislada_esferica_estatica_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap.h"
#ifndef friccion_aislada_esferica_estatica_COMMON_INCLUDES_
#define friccion_aislada_esferica_estatica_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "rt_logging.h"
#include "dt_info.h"
#include "ext_work.h"
#include "nesl_rtw.h"
#include "friccion_aislada_esferica_estatica_86e574d6_gateway.h"
#endif
#include "friccion_aislada_esferica_estatica_types.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rt_defines.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME friccion_aislada_esferica_estatica
#define NSAMPLE_TIMES (3) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (48) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (20)   
#elif NCSTATES != 20
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
mvfxom43g2 ; real_T gepgtl2di2 ; real_T glyfzrufqc ; real_T hay0z4ydom [ 14 ]
; real_T lqlbnkdbfc ; real_T ppwjb2mgez ; real_T b1apntsclq ; real_T
guyeh3e3kz [ 4 ] ; real_T n1oykolxud [ 3 ] ; real_T bc1ywsncjv ; real_T
nx50lbvr12 [ 4 ] ; real_T jjfsxd2pht [ 3 ] ; real_T fiqjxgaeqv ; real_T
jjklppy5k2 [ 4 ] ; real_T jrta0gtdwd [ 3 ] ; real_T jky4z1enk0 [ 4 ] ; real_T
lbr4oxwevp [ 4 ] ; real_T cwm3tftnlg [ 4 ] ; real_T d5wdh45q4j ; real_T
itv2k1nlsr [ 4 ] ; real_T baafwnqhzg ; real_T mopdhxqse4 [ 4 ] ; real_T
gmk2mqmnrv ; real_T kcfetpaoaj [ 4 ] ; real_T jpvxooq51q ; real_T pjx0kmxjmu
; real_T od0udch0bu ; real_T od0xpltfi4 [ 4 ] ; real_T khdrz5d30a [ 4 ] ;
real_T ipafxshnxq [ 4 ] ; real_T mken4d3mf5 [ 4 ] ; real_T cl1j1vhnfj [ 4 ] ;
real_T p5kqpkokgo [ 4 ] ; real_T pljjj452mj ; real_T iczpsbisae ; real_T
o4nsjknro4 ; real_T osjgev2jfz ; real_T iier5jnm1g ; } B ; typedef struct {
real_T cgfm5yu3vf ; real_T oqhtism5uc ; real_T npo5cpgitx ; real_T oyqemtyfbv
; real_T kuxoufoxlv ; real_T emwh4pijl3 ; real_T kmxvynb5xg ; real_T
citycn5tuj ; real_T mxwpzq1ids ; real_T juy1cxpanf ; real_T hartzycbqu ;
real_T f3jo3fugre ; struct { void * LoggedData ; } b4ags411aw ; struct { void
* LoggedData ; } bp22cutfje ; struct { void * LoggedData ; } etebikasf0 ;
struct { void * LoggedData ; } nxlxutql3x ; struct { void * LoggedData ; }
b4ibq4fiew ; void * oh2nksyqvj ; void * piiowhvoq3 ; void * n0nnoz5d3k ; void
* d3mtquumef ; void * ojbdkm3g3k ; void * m5lvlhykau ; void * i4aru4d13y ;
void * psaiktqsay ; void * bf0cesukef ; void * hsfvbv5cr3 ; struct { void *
LoggedData ; } bphabyrdhs ; struct { void * LoggedData ; } p4qala5dxx ; void
* knt2jcevxn ; void * eyurikeucn ; void * a5embkrp0u ; void * lh04ozorvo ;
void * f04eeuwpls ; void * nyiiqtb3pj ; void * gcums0dzz2 ; void * lhf2yly352
; void * aabtyyllyb ; void * g03azz2emd ; void * gtt25diae4 ; void *
bzrmjhnabu ; void * is3dc1o4zz ; void * nwimzqy5ar ; void * nb1qo1noy1 ; void
* gxjoulpb2m ; void * fau1pec2yx ; void * piada000ef ; void * igchwvemyk ;
void * m0usptq44k ; void * ku2cbhbb3u ; void * f4ygo2hyze ; void * g3mxxyfx5h
; void * mdbfuljwns ; void * ha0jipw4xl ; void * dxh0qu5kpi ; void *
gsrotkxe3w ; void * aa1kkeyuws ; void * lsvhhiyuzl ; void * gnkz3gjw5b ; void
* b4wblkxudx ; void * hum4puctey ; void * py0x5xqxsn ; void * gumb4mtpd4 ;
void * ouwqkrvapp ; void * avoetnry4f ; void * j3w0jjg10i ; void * nzmye2eqv0
; void * azmsy2zntv ; void * bnqfvsepi0 ; void * ahd5nxo5ee ; void *
hwdzla2kb2 ; void * l25nib43el ; void * ptzwk443bp ; void * gn4pfafhsz ; void
* ndnwrahj5v ; void * o50nrjnd44 ; void * j4zuphpirj ; void * hcsxuwehmb ;
void * bm2gxumckz ; void * jjazmhpwwr ; void * evijjolyva ; void * pxp5ilgmi3
; void * jezkree5dg ; void * bkak5fqmq4 ; void * flmlbqbmbh ; void *
gkm0s0ctrk ; void * iob4nznmac ; void * gcanzh043u ; void * phud5qd132 ; void
* jxk3l5lam0 ; void * atpqvqjfs5 ; void * ac2uu54gd3 ; void * mw5olxwdvr ;
void * bslfr4ae1c ; void * nviurbkyfu ; void * gksf2y3xqu ; void * nyzomkvmej
; void * ast1vf5n54 ; void * jionimgfgx ; void * de0spn04mt ; void *
gftgep1sjl ; void * c2oj5ebuij ; void * f5q1bnr2od ; void * lpvwxxwypj ; void
* mu0wco4dhv ; void * mw4azdjt0i ; void * hpobr5dnto ; void * cayqsmxyey ;
void * b4ylysn521 ; int_T edr3xhipix [ 2 ] ; int_T bbw2skrhgj [ 2 ] ; int_T
h4qlg5tcho [ 2 ] ; int_T nvlp11rn3a ; int_T nusy4aj0zr ; int_T i33y5j4e2i ; }
DW ; typedef struct { real_T c4heiwjyo0 ; real_T cytsrnzz24 ; real_T
e5ilpltgaf ; real_T ldm2uo30vp ; real_T o0ls511edu ; real_T pcw0d3bv0m ;
real_T cjklakdih0 [ 14 ] ; } X ; typedef struct { real_T c4heiwjyo0 ; real_T
cytsrnzz24 ; real_T e5ilpltgaf ; real_T ldm2uo30vp ; real_T o0ls511edu ;
real_T pcw0d3bv0m ; real_T cjklakdih0 [ 14 ] ; } XDot ; typedef struct {
boolean_T c4heiwjyo0 ; boolean_T cytsrnzz24 ; boolean_T e5ilpltgaf ;
boolean_T ldm2uo30vp ; boolean_T o0ls511edu ; boolean_T pcw0d3bv0m ;
boolean_T cjklakdih0 [ 14 ] ; } XDis ; typedef struct { real_T c4heiwjyo0 ;
real_T cytsrnzz24 ; real_T e5ilpltgaf ; real_T ldm2uo30vp ; real_T o0ls511edu
; real_T pcw0d3bv0m ; real_T cjklakdih0 [ 14 ] ; } CStateAbsTol ; typedef
struct { real_T mwqoushr4t ; real_T ktu22l2ybc ; real_T injupbslsr ; real_T
mpwhqk1v0r ; real_T lrqup5u2mg ; real_T pkjggipfmr ; } ZCV ; typedef struct {
ZCSigState iwf2ottd0g ; ZCSigState lbtolrcvfy ; ZCSigState iipv1afcrt ;
ZCSigState ewwn5jfkfk ; ZCSigState azeupfq3jg ; ZCSigState mqljqece55 ; }
PrevZCX ; typedef struct { rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ;
struct P_ { real_T Gain_Gain ; real_T Gain_Gain_j13fe42xcx ; real_T
ProportionalGain_Gain ; real_T Integrator_IC ; real_T DerivativeGain_Gain ;
real_T Filter_IC ; real_T FilterCoefficient_Gain ; real_T Saturation_UpperSat
; real_T Saturation_LowerSat ; real_T ProportionalGain_Gain_opm0dtoc1v ;
real_T Integrator_IC_efr3g1wrer ; real_T DerivativeGain_Gain_pfs2epusuf ;
real_T Filter_IC_gdoix51u4z ; real_T FilterCoefficient_Gain_ediatr1iqq ;
real_T Saturation_UpperSat_e2lmnhs4sw ; real_T Saturation_LowerSat_b5ltm0ubpa
; real_T ProportionalGain_Gain_o1sqswnaqc ; real_T Integrator_IC_cvaudhvmvm ;
real_T DerivativeGain_Gain_hru04pbg0s ; real_T Filter_IC_ajlfi3u02h ; real_T
FilterCoefficient_Gain_hiknh0un1z ; real_T Saturation_UpperSat_mneiexavww ;
real_T Saturation_LowerSat_bhtm255dky ; real_T IntegralGain_Gain ; real_T
IntegralGain_Gain_cjxryeebdo ; real_T IntegralGain_Gain_c2fz3dj4be ; real_T
BUILTIN_RateTransition_17_X0 ; real_T BUILTIN_RateTransition_21_X0 ; real_T
BUILTIN_RateTransition_19_X0 ; } ; extern P rtP ; extern const char *
RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X rtX ; extern DW rtDW ;
extern PrevZCX rtPrevZCX ; extern const rtwCAPI_ModelMappingStaticInfo *
friccion_aislada_esferica_estatica_GetCAPIStaticMap ( void ) ; extern
SimStruct * const rtS ; extern const int_T gblNumToFiles ; extern const int_T
gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ; extern rtInportTUtable
* gblInportTUtables ; extern const char * gblInportFileName ; extern const
int_T gblNumRootInportBlks ; extern const int_T gblNumModelInputs ; extern
const int_T gblInportDataTypeIdx [ ] ; extern const int_T gblInportDims [ ] ;
extern const int_T gblInportComplex [ ] ; extern const int_T
gblInportInterpoFlag [ ] ; extern const int_T gblInportContinuous [ ] ;
extern DataMapInfo * rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo *
rt_modelMapInfoPtr ;
#endif
