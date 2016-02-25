#include "__cf_friccion_aislada_esferica.h"
#include <math.h>
#include "friccion_aislada_esferica_acc.h"
#include "friccion_aislada_esferica_acc_private.h"
#include <stdio.h>
#include "simstruc.h"
#include "fixedpoint.h"
#define CodeFormat S-Function
#define AccDefine1 Accelerator_S-Function
static void mdlOutputs ( SimStruct * S , int_T tid ) { real_T pax4p2cbyv ;
real_T bqfrmfwde4 ; real_T htdzroszgf ; real_T pt3mkdg4sw ; real_T kpm24leglt
; real_T hwqj5fibrf ; real_T flbppl3lac ; n3qi1whofz * _rtB ; loikxjbxjg *
_rtP ; ew10rzwqr2 * _rtDW ; _rtDW = ( ( ew10rzwqr2 * ) ssGetRootDWork ( S ) )
; _rtP = ( ( loikxjbxjg * ) ssGetDefaultParam ( S ) ) ; _rtB = ( ( n3qi1whofz
* ) _ssGetBlockIO ( S ) ) ; _rtB -> c1xp3cdlxf = ssGetT ( S ) ;
ssCallAccelRunBlock ( S , 1 , 0 , SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock
( S , 0 , 0 , SS_CALL_MDL_OUTPUTS ) ; _rtB -> cvjuaflxyt = _rtP -> P_0 * _rtB
-> nfdsodnxl1 ; ssCallAccelRunBlock ( S , 2 , 4 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 2 , 5 , SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock
( S , 2 , 6 , SS_CALL_MDL_OUTPUTS ) ; kpm24leglt = _rtP -> P_1 * _rtB ->
nfdsodnxl1 - 0.0 ; hwqj5fibrf = _rtP -> P_2 * kpm24leglt ; pt3mkdg4sw = ( (
f1xhd02yjc * ) ssGetContStates ( S ) ) -> c4heiwjyo0 ; flbppl3lac = _rtP ->
P_4 * kpm24leglt ; bqfrmfwde4 = ( ( f1xhd02yjc * ) ssGetContStates ( S ) ) ->
cytsrnzz24 ; _rtB -> ghmz2rnv54 = ( flbppl3lac - bqfrmfwde4 ) * _rtP -> P_6 ;
_rtB -> g31iehdcmo = ( hwqj5fibrf + pt3mkdg4sw ) + _rtB -> ghmz2rnv54 ; if (
ssIsMajorTimeStep ( S ) ) { _rtDW -> nvlp11rn3a = _rtB -> g31iehdcmo >= _rtP
-> P_7 ? 1 : _rtB -> g31iehdcmo > _rtP -> P_8 ? 0 : - 1 ; } _rtB ->
cvjuaflxyt = _rtDW -> nvlp11rn3a == 1 ? _rtP -> P_7 : _rtDW -> nvlp11rn3a ==
- 1 ? _rtP -> P_8 : _rtB -> g31iehdcmo ; bqfrmfwde4 = _rtB -> ffn5t1pps4 -
0.0 ; hwqj5fibrf = _rtP -> P_9 * bqfrmfwde4 ; pt3mkdg4sw = ( ( f1xhd02yjc * )
ssGetContStates ( S ) ) -> e5ilpltgaf ; flbppl3lac = _rtP -> P_11 *
bqfrmfwde4 ; htdzroszgf = ( ( f1xhd02yjc * ) ssGetContStates ( S ) ) ->
ldm2uo30vp ; _rtB -> nxjlov1eck = ( flbppl3lac - htdzroszgf ) * _rtP -> P_13
; _rtB -> i03avry3c1 = ( hwqj5fibrf + pt3mkdg4sw ) + _rtB -> nxjlov1eck ; if
( ssIsMajorTimeStep ( S ) ) { _rtDW -> nusy4aj0zr = _rtB -> i03avry3c1 >=
_rtP -> P_14 ? 1 : _rtB -> i03avry3c1 > _rtP -> P_15 ? 0 : - 1 ; } _rtB ->
ijopvsqxdg = _rtDW -> nusy4aj0zr == 1 ? _rtP -> P_14 : _rtDW -> nusy4aj0zr ==
- 1 ? _rtP -> P_15 : _rtB -> i03avry3c1 ; htdzroszgf = _rtB -> iqx1lr55cc -
0.0 ; hwqj5fibrf = _rtP -> P_16 * htdzroszgf ; pt3mkdg4sw = ( ( f1xhd02yjc *
) ssGetContStates ( S ) ) -> o0ls511edu ; flbppl3lac = _rtP -> P_18 *
htdzroszgf ; pax4p2cbyv = ( ( f1xhd02yjc * ) ssGetContStates ( S ) ) ->
pcw0d3bv0m ; _rtB -> jnpe1b10m0 = ( flbppl3lac - pax4p2cbyv ) * _rtP -> P_20
; _rtB -> ep4lbiddze = ( hwqj5fibrf + pt3mkdg4sw ) + _rtB -> jnpe1b10m0 ; if
( ssIsMajorTimeStep ( S ) ) { _rtDW -> i33y5j4e2i = _rtB -> ep4lbiddze >=
_rtP -> P_21 ? 1 : _rtB -> ep4lbiddze > _rtP -> P_22 ? 0 : - 1 ; } _rtB ->
mldjwohjns = _rtDW -> i33y5j4e2i == 1 ? _rtP -> P_21 : _rtDW -> i33y5j4e2i ==
- 1 ? _rtP -> P_22 : _rtB -> ep4lbiddze ; ssCallAccelRunBlock ( S , 2 , 35 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 2 , 36 ,
SS_CALL_MDL_OUTPUTS ) ; _rtB -> brhvlgm14l = _rtP -> P_23 * kpm24leglt ; _rtB
-> j31mhdj5iz = _rtP -> P_24 * bqfrmfwde4 ; _rtB -> idiygc5s0m = _rtP -> P_25
* htdzroszgf ; ssCallAccelRunBlock ( S , 2 , 102 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 2 , 103 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 2 , 104 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 2 , 105 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 2 , 106 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 2 , 107 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 2 , 108 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 2 , 109 , SS_CALL_MDL_OUTPUTS ) ; _rtB ->
fzjcqjjttd [ 0 ] = 0.0 ; _rtB -> fzjcqjjttd [ 1 ] = 0.0 ; _rtB -> fzjcqjjttd
[ 2 ] = 0.0 ; _rtB -> fzjcqjjttd [ 3 ] = 0.0 ; _rtB -> k3wpdhurmd [ 0 ] = 0.0
; _rtB -> k3wpdhurmd [ 1 ] = 0.0 ; _rtB -> k3wpdhurmd [ 2 ] = 0.0 ; _rtB ->
k3wpdhurmd [ 3 ] = 0.0 ; _rtB -> lvkv0aag4u [ 0 ] = 0.0 ; _rtB -> lvkv0aag4u
[ 1 ] = 0.0 ; _rtB -> lvkv0aag4u [ 2 ] = 0.0 ; _rtB -> lvkv0aag4u [ 3 ] = 0.0
; ssCallAccelRunBlock ( S , 2 , 113 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 2 , 114 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 2 , 115 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 2 , 116 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 2 , 117 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 2 , 118 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 2 , 119 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 2 , 120 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 2 , 121 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 2 , 122 , SS_CALL_MDL_OUTPUTS ) ; _rtB ->
mm2ojlrtri [ 0 ] = 0.0 ; _rtB -> mm2ojlrtri [ 1 ] = 0.0 ; _rtB -> mm2ojlrtri
[ 2 ] = 0.0 ; _rtB -> mm2ojlrtri [ 3 ] = 0.0 ; _rtB -> bc2j02dxyy [ 0 ] = 0.0
; _rtB -> bc2j02dxyy [ 1 ] = 0.0 ; _rtB -> bc2j02dxyy [ 2 ] = 0.0 ; _rtB ->
bc2j02dxyy [ 3 ] = 0.0 ; _rtB -> cu0nar1gsb [ 0 ] = 0.0 ; _rtB -> cu0nar1gsb
[ 1 ] = 0.0 ; _rtB -> cu0nar1gsb [ 2 ] = 0.0 ; _rtB -> cu0nar1gsb [ 3 ] = 0.0
; _rtB -> mrsrpz4n1l [ 0 ] = 0.0 ; _rtB -> mrsrpz4n1l [ 1 ] = 0.0 ; _rtB ->
mrsrpz4n1l [ 2 ] = 0.0 ; _rtB -> mrsrpz4n1l [ 3 ] = 0.0 ; _rtB -> lgjgwrmrok
[ 0 ] = 0.0 ; _rtB -> lgjgwrmrok [ 1 ] = 0.0 ; _rtB -> lgjgwrmrok [ 2 ] = 0.0
; _rtB -> lgjgwrmrok [ 3 ] = 0.0 ; _rtB -> k4jwwk1y3u [ 0 ] = 0.0 ; _rtB ->
k4jwwk1y3u [ 1 ] = 0.0 ; _rtB -> k4jwwk1y3u [ 2 ] = 0.0 ; _rtB -> k4jwwk1y3u
[ 3 ] = 0.0 ; UNUSED_PARAMETER ( tid ) ; }
#define MDL_UPDATE
static void mdlUpdate ( SimStruct * S , int_T tid ) { n3qi1whofz * _rtB ;
loikxjbxjg * _rtP ; _rtP = ( ( loikxjbxjg * ) ssGetDefaultParam ( S ) ) ;
_rtB = ( ( n3qi1whofz * ) _ssGetBlockIO ( S ) ) ; UNUSED_PARAMETER ( tid ) ;
}
#define MDL_DERIVATIVES
static void mdlDerivatives ( SimStruct * S ) { n3qi1whofz * _rtB ; loikxjbxjg
* _rtP ; _rtP = ( ( loikxjbxjg * ) ssGetDefaultParam ( S ) ) ; _rtB = ( (
n3qi1whofz * ) _ssGetBlockIO ( S ) ) ; { ( ( pqmvzr1kvu * ) ssGetdX ( S ) )
-> c4heiwjyo0 = _rtB -> brhvlgm14l ; } { ( ( pqmvzr1kvu * ) ssGetdX ( S ) )
-> cytsrnzz24 = _rtB -> ghmz2rnv54 ; } { ( ( pqmvzr1kvu * ) ssGetdX ( S ) )
-> e5ilpltgaf = _rtB -> j31mhdj5iz ; } { ( ( pqmvzr1kvu * ) ssGetdX ( S ) )
-> ldm2uo30vp = _rtB -> nxjlov1eck ; } { ( ( pqmvzr1kvu * ) ssGetdX ( S ) )
-> o0ls511edu = _rtB -> idiygc5s0m ; } { ( ( pqmvzr1kvu * ) ssGetdX ( S ) )
-> pcw0d3bv0m = _rtB -> jnpe1b10m0 ; } ssCallAccelRunBlock ( S , 2 , 102 ,
SS_CALL_MDL_DERIVATIVES ) ; }
#define MDL_PROJECTION
static void mdlProjection ( SimStruct * S ) { ssCallAccelRunBlock ( S , 2 ,
102 , SS_CALL_MDL_PROJECTION ) ; }
#define MDL_ZERO_CROSSINGS
static void mdlZeroCrossings ( SimStruct * S ) { n3qi1whofz * _rtB ;
loikxjbxjg * _rtP ; d15n1ti4kq * _rtZCSV ; _rtZCSV = ( ( d15n1ti4kq * )
ssGetSolverZcSignalVector ( S ) ) ; _rtP = ( ( loikxjbxjg * )
ssGetDefaultParam ( S ) ) ; _rtB = ( ( n3qi1whofz * ) _ssGetBlockIO ( S ) ) ;
_rtZCSV -> mwqoushr4t = _rtB -> g31iehdcmo - _rtP -> P_7 ; _rtZCSV ->
ktu22l2ybc = _rtB -> g31iehdcmo - _rtP -> P_8 ; _rtZCSV -> injupbslsr = _rtB
-> i03avry3c1 - _rtP -> P_14 ; _rtZCSV -> mpwhqk1v0r = _rtB -> i03avry3c1 -
_rtP -> P_15 ; _rtZCSV -> lrqup5u2mg = _rtB -> ep4lbiddze - _rtP -> P_21 ;
_rtZCSV -> pkjggipfmr = _rtB -> ep4lbiddze - _rtP -> P_22 ; } static void
mdlInitializeSizes ( SimStruct * S ) { ssSetChecksumVal ( S , 0 , 2870805115U
) ; ssSetChecksumVal ( S , 1 , 556051998U ) ; ssSetChecksumVal ( S , 2 ,
465559925U ) ; ssSetChecksumVal ( S , 3 , 462023910U ) ; { mxArray *
slVerStructMat = NULL ; mxArray * slStrMat = mxCreateString ( "simulink" ) ;
char slVerChar [ 10 ] ; int status = mexCallMATLAB ( 1 , & slVerStructMat , 1
, & slStrMat , "ver" ) ; if ( status == 0 ) { mxArray * slVerMat = mxGetField
( slVerStructMat , 0 , "Version" ) ; if ( slVerMat == NULL ) { status = 1 ; }
else { status = mxGetString ( slVerMat , slVerChar , 10 ) ; } }
mxDestroyArray ( slStrMat ) ; mxDestroyArray ( slVerStructMat ) ; if ( (
status == 1 ) || ( strcmp ( slVerChar , "8.3" ) != 0 ) ) { return ; } }
ssSetOptions ( S , SS_OPTION_EXCEPTION_FREE_CODE ) ; if ( ssGetSizeofDWork (
S ) != sizeof ( ew10rzwqr2 ) ) { ssSetErrorStatus ( S ,
"Unexpected error: Internal DWork sizes do "
"not match for accelerator mex file." ) ; } if ( ssGetSizeofGlobalBlockIO ( S
) != sizeof ( n3qi1whofz ) ) { ssSetErrorStatus ( S ,
"Unexpected error: Internal BlockIO sizes do "
"not match for accelerator mex file." ) ; } { int ssSizeofParams ;
ssGetSizeofParams ( S , & ssSizeofParams ) ; if ( ssSizeofParams != sizeof (
loikxjbxjg ) ) { static char msg [ 256 ] ; sprintf ( msg ,
"Unexpected error: Internal Parameters sizes do "
"not match for accelerator mex file." ) ; } } _ssSetDefaultParam ( S , (
real_T * ) & o2iu0a2jke ) ; rt_InitInfAndNaN ( sizeof ( real_T ) ) ; } static
void mdlInitializeSampleTimes ( SimStruct * S ) { { SimStruct * childS ;
SysOutputFcn * callSysFcns ; childS = ssGetSFunction ( S , 0 ) ; callSysFcns
= ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 1 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; } } static void mdlTerminate ( SimStruct * S ) { }
#include "simulink.c"
