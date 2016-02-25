#include "__cf_friccion_aislada_esferica_Simscape_Symmechanics.h"
#ifndef RTW_HEADER_friccion_aislada_esferica_Simscape_Symmechanics_h_
#define RTW_HEADER_friccion_aislada_esferica_Simscape_Symmechanics_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap.h"
#ifndef friccion_aislada_esferica_Simscape_Symmechanics_COMMON_INCLUDES_
#define friccion_aislada_esferica_Simscape_Symmechanics_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "rt_logging.h"
#include "dt_info.h"
#include "ext_work.h"
#include "nesl_rtw.h"
#include "friccion_aislada_esferica_Simscape_Symmechanics_eb684b64_gateway.h"
#endif
#include "friccion_aislada_esferica_Simscape_Symmechanics_types.h"
#include "multiword_types.h"
#include "rt_defines.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME friccion_aislada_esferica_Simscape_Symmechanics
#define NSAMPLE_TIMES (1) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (18) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (13)   
#elif NCSTATES != 13
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
typedef struct { real_T hay0z4ydom [ 7 ] ; real_T l2jfs00ccy [ 7 ] ; real_T
il3w4ovzm5 ; real_T khywms0clb ; real_T pfk4qbtcfu ; real_T pjhhb5kquv [ 4 ]
; real_T kcfetpaoaj [ 4 ] ; real_T n1oykolxud [ 5 ] ; real_T mopdhxqse4 [ 4 ]
; real_T jjfsxd2pht [ 5 ] ; real_T crsv2a03b0 [ 4 ] ; real_T jrta0gtdwd [ 5 ]
; real_T od0udch0bu ; real_T ioszdbstmn [ 4 ] ; real_T pjx0kmxjmu ; real_T
itv2k1nlsr [ 4 ] ; real_T jpvxooq51q ; real_T euf53gdk1f [ 4 ] ; } B ;
typedef struct { real_T mxwpzq1ids ; real_T citycn5tuj ; real_T g0ybx5ny0s ;
real_T hofd5gl0lv ; real_T kmxvynb5xg ; real_T lqg4ib442l ; void * oh2nksyqvj
; void * piiowhvoq3 ; void * n0nnoz5d3k ; void * d3mtquumef ; void *
ojbdkm3g3k ; void * m5lvlhykau ; void * i4aru4d13y ; void * psaiktqsay ; void
* bf0cesukef ; void * hsfvbv5cr3 ; struct { void * LoggedData ; } mx3esgalu0
; struct { void * LoggedData ; } cngcszp2rx ; struct { void * LoggedData ; }
brfygg1kqo ; struct { void * LoggedData ; } jkbpraaal2 ; void * flmlbqbmbh ;
void * gkm0s0ctrk ; void * iob4nznmac ; void * gcanzh043u ; void * phud5qd132
; void * nyiiqtb3pj ; void * gcums0dzz2 ; void * lhf2yly352 ; void *
aabtyyllyb ; void * g03azz2emd ; void * gtt25diae4 ; void * bzrmjhnabu ; void
* is3dc1o4zz ; void * nwimzqy5ar ; void * nb1qo1noy1 ; void * jjazmhpwwr ;
void * evijjolyva ; void * pxp5ilgmi3 ; void * jezkree5dg ; void * bkak5fqmq4
; void * ku2cbhbb3u ; void * f4ygo2hyze ; void * g3mxxyfx5h ; void *
mdbfuljwns ; void * ha0jipw4xl ; void * dxh0qu5kpi ; void * gsrotkxe3w ; void
* aa1kkeyuws ; void * lsvhhiyuzl ; void * gnkz3gjw5b ; void * kswjmadgur ;
void * jstvsrdxec ; void * bwrk1jrfjh ; void * far445l3om ; void * jama3hkqjv
; void * avoetnry4f ; void * j3w0jjg10i ; void * nzmye2eqv0 ; void *
azmsy2zntv ; void * bnqfvsepi0 ; void * ahd5nxo5ee ; void * hwdzla2kb2 ; void
* l25nib43el ; void * ptzwk443bp ; void * gn4pfafhsz ; void * mu0wco4dhv ;
void * mw4azdjt0i ; void * hpobr5dnto ; void * cayqsmxyey ; void * b4ylysn521
; void * gpf31qpv5x ; void * jrmucmc5l0 ; void * eow2enys5v ; void *
cb0yve1pxy ; void * bz2upk2eq4 ; void * de0spn04mt ; void * gftgep1sjl ; void
* c2oj5ebuij ; void * f5q1bnr2od ; void * lpvwxxwypj ; void * ndnwrahj5v ;
void * o50nrjnd44 ; void * j4zuphpirj ; void * hcsxuwehmb ; void * bm2gxumckz
; void * nviurbkyfu ; void * gksf2y3xqu ; void * nyzomkvmej ; void *
ast1vf5n54 ; void * jionimgfgx ; void * j5smstjan3 ; void * dntzyn5tmg ; void
* pinay1nrr3 ; void * aek3fotj4l ; void * ofysl11eyg ; void * jxk3l5lam0 ;
void * atpqvqjfs5 ; void * ac2uu54gd3 ; void * mw5olxwdvr ; void * bslfr4ae1c
; int_T alrqayrcnu [ 4 ] ; int_T dhe2ccms01 [ 4 ] ; int_T pfel4n10vu [ 4 ] ;
} DW ; typedef struct { real_T cjklakdih0 [ 7 ] ; real_T c150l3qmxn ; real_T
ml5rpxbc10 ; real_T m2txpyziu4 ; real_T pgig0w5z22 ; real_T h15fzyy0rm ;
real_T clcp24atwn ; } X ; typedef struct { real_T cjklakdih0 [ 7 ] ; real_T
c150l3qmxn ; real_T ml5rpxbc10 ; real_T m2txpyziu4 ; real_T pgig0w5z22 ;
real_T h15fzyy0rm ; real_T clcp24atwn ; } XDot ; typedef struct { boolean_T
cjklakdih0 [ 7 ] ; boolean_T c150l3qmxn ; boolean_T ml5rpxbc10 ; boolean_T
m2txpyziu4 ; boolean_T pgig0w5z22 ; boolean_T h15fzyy0rm ; boolean_T
clcp24atwn ; } XDis ; typedef struct { real_T cjklakdih0 [ 7 ] ; real_T
c150l3qmxn ; real_T ml5rpxbc10 ; real_T m2txpyziu4 ; real_T pgig0w5z22 ;
real_T h15fzyy0rm ; real_T clcp24atwn ; } CStateAbsTol ; typedef struct {
real_T e2zlzat00e ; real_T ifd1yrgvbm ; real_T jafldp5djk ; real_T kxvd0bfrwi
; real_T nycfjobnwt ; real_T atsklmh2kl ; real_T drno5mkys3 ; real_T
kxpnjoj5dy ; real_T f3ee0vzeh5 ; } ZCV ; typedef struct { ZCSigState
krzk4ct1fi ; ZCSigState d5ehb5wf3b ; ZCSigState hiiiryeqri ; ZCSigState
o5q3uufel3 ; ZCSigState cgmpwglb30 ; ZCSigState lu4gl4jylj ; ZCSigState
g3a2qmdegc ; ZCSigState bgfrzslr1q ; ZCSigState keq0atx2oa ; } PrevZCX ;
typedef struct { rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; extern const
char * RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X rtX ; extern DW
rtDW ; extern PrevZCX rtPrevZCX ; extern const rtwCAPI_ModelMappingStaticInfo
* friccion_aislada_esferica_Simscape_Symmechanics_GetCAPIStaticMap ( void ) ;
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
