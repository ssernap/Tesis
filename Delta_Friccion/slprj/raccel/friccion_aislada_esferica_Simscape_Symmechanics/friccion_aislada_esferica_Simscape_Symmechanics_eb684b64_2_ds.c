#include "__cf_friccion_aislada_esferica_Simscape_Symmechanics.h"
#include "ne_ds.h"
#include "friccion_aislada_esferica_Simscape_Symmechanics_eb684b64_2_ds.h"
#ifndef struct__NeDynamicSystemTag
#define struct__NeDynamicSystemTag
typedef struct _NeDynamicSystemTag { NeDynamicSystem mBase ; int32_T mRefCnt
; NeAllocator mAlloc ; } _NeDynamicSystem ;
#else
typedef struct _NeDynamicSystemTag _NeDynamicSystem ;
#endif
static int32_T ds_s ( const NeDynamicSystem * ds , const NeDynamicSystemInput
* in , NeDsMethodOutput * out ) ; static int32_T ds_m_p ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_a_p ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T ds_a (
const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_b_p ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_b ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_c_p ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_f ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_vmf ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_slf ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dxf_p ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dxf ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_duf_p ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dtf_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_ddf_p ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_tduf_p ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_tdxf_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_y ( const NeDynamicSystem * ds ,
const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dxy_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dxy ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_duy_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dty_p ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_mode ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_zc ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_r ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_assert ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T stub_method ( const NeDynamicSystem * ds , const NeDynamicSystemInput
* in , NeDsMethodOutput * out ) ; static NeDsMethodOutput * ds_output_s (
const NeDynamicSystem * ds , NeAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_m_p ( const NeDynamicSystem * ds , NeAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_m ( const NeDynamicSystem *
ds , NeAllocator * allocator ) ; static NeDsMethodOutput * ds_output_vmm (
const NeDynamicSystem * ds , NeAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dxm_p ( const NeDynamicSystem * ds , NeAllocator
* allocator ) ; static NeDsMethodOutput * ds_output_dxm ( const
NeDynamicSystem * ds , NeAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dum_p ( const NeDynamicSystem * ds , NeAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dum ( const NeDynamicSystem * ds ,
NeAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dtm_p ( const
NeDynamicSystem * ds , NeAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dtm ( const NeDynamicSystem * ds , NeAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_a_p ( const NeDynamicSystem * ds ,
NeAllocator * allocator ) ; static NeDsMethodOutput * ds_output_a ( const
NeDynamicSystem * ds , NeAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_b_p ( const NeDynamicSystem * ds , NeAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_b ( const NeDynamicSystem * ds ,
NeAllocator * allocator ) ; static NeDsMethodOutput * ds_output_c_p ( const
NeDynamicSystem * ds , NeAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_c ( const NeDynamicSystem * ds , NeAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_f ( const NeDynamicSystem * ds , NeAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_vmf ( const NeDynamicSystem
* ds , NeAllocator * allocator ) ; static NeDsMethodOutput * ds_output_slf (
const NeDynamicSystem * ds , NeAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dxf_p ( const NeDynamicSystem * ds , NeAllocator
* allocator ) ; static NeDsMethodOutput * ds_output_dxf ( const
NeDynamicSystem * ds , NeAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_duf_p ( const NeDynamicSystem * ds , NeAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_duf ( const NeDynamicSystem * ds ,
NeAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dtf_p ( const
NeDynamicSystem * ds , NeAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dtf ( const NeDynamicSystem * ds , NeAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_ddf_p ( const NeDynamicSystem * ds ,
NeAllocator * allocator ) ; static NeDsMethodOutput * ds_output_ddf ( const
NeDynamicSystem * ds , NeAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_tduf_p ( const NeDynamicSystem * ds , NeAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_tdxf_p ( const NeDynamicSystem * ds ,
NeAllocator * allocator ) ; static NeDsMethodOutput * ds_output_y ( const
NeDynamicSystem * ds , NeAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dxy_p ( const NeDynamicSystem * ds , NeAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dxy ( const NeDynamicSystem * ds ,
NeAllocator * allocator ) ; static NeDsMethodOutput * ds_output_duy_p ( const
NeDynamicSystem * ds , NeAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_duy ( const NeDynamicSystem * ds , NeAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dty_p ( const NeDynamicSystem * ds ,
NeAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dty ( const
NeDynamicSystem * ds , NeAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_mode ( const NeDynamicSystem * ds , NeAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_zc ( const NeDynamicSystem * ds ,
NeAllocator * allocator ) ; static NeDsMethodOutput * ds_output_cache ( const
NeDynamicSystem * ds , NeAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_update_r ( const NeDynamicSystem * ds , NeAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_update_i ( const NeDynamicSystem * ds ,
NeAllocator * allocator ) ; static NeDsMethodOutput * ds_output_sfo ( const
NeDynamicSystem * ds , NeAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_sfp ( const NeDynamicSystem * ds , NeAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_init_r ( const NeDynamicSystem * ds ,
NeAllocator * allocator ) ; static NeDsMethodOutput * ds_output_init_i (
const NeDynamicSystem * ds , NeAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_r ( const NeDynamicSystem * ds , NeAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_log ( const NeDynamicSystem
* ds , NeAllocator * allocator ) ; static NeDsMethodOutput * ds_output_assert
( const NeDynamicSystem * ds , NeAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_del_t ( const NeDynamicSystem * ds , NeAllocator
* allocator ) ; static NeDsMethodOutput * ds_output_del_v ( const
NeDynamicSystem * ds , NeAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_del_v0 ( const NeDynamicSystem * ds , NeAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_del_tmax ( const NeDynamicSystem * ds ,
NeAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dxdelt_p (
const NeDynamicSystem * ds , NeAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dxdelt ( const NeDynamicSystem * ds ,
NeAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dudelt_p (
const NeDynamicSystem * ds , NeAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dudelt ( const NeDynamicSystem * ds ,
NeAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dtdelt_p (
const NeDynamicSystem * ds , NeAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dtdelt ( const NeDynamicSystem * ds ,
NeAllocator * allocator ) ; static void release_reference ( NeDynamicSystem *
ds ) ; static void get_reference ( NeDynamicSystem * ds ) ; static
NeEquationData s_equation_data [ 9 ] = { {
 "friccion_aislada_esferica_Simscape_Symmechanics.Robot_Delta.Rotational_Friction2"
, 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Rotational Friction2"
, 1U , 0U , TRUE , 1.0 } , {
 "friccion_aislada_esferica_Simscape_Symmechanics.Robot_Delta.Rotational_Friction2"
, 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Rotational Friction2"
, 1U , 1U , FALSE , 0.00066677732392467941 } , {
 "friccion_aislada_esferica_Simscape_Symmechanics.Robot_Delta.Mechanical_Rotational_Reference2"
, 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Mechanical Rotational Reference2"
, 1U , 2U , TRUE , 1.0 } , {
 "friccion_aislada_esferica_Simscape_Symmechanics.Robot_Delta.Rotational_Simscape_Intf2.Ideal_Torque_Sensor"
, 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Rotational Simscape Intf2/Ideal Torque Sensor"
, 1U , 3U , TRUE , 1.0 } , {
 "friccion_aislada_esferica_Simscape_Symmechanics.Robot_Delta.Rotational_Simscape_Intf2.Ideal_Torque_Sensor"
, 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Rotational Simscape Intf2/Ideal Torque Sensor"
, 1U , 4U , TRUE , 1.0 } , {
 "friccion_aislada_esferica_Simscape_Symmechanics.Robot_Delta.Rotational_Simscape_Intf2.Ideal_Torque_Sensor"
, 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Rotational Simscape Intf2/Ideal Torque Sensor"
, 1U , 5U , TRUE , 1.0 } , {
 "friccion_aislada_esferica_Simscape_Symmechanics.Robot_Delta.Rotational_Simscape_Intf2.Ideal_Angular_Velocity_Source"
, 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Rotational Simscape Intf2/Ideal Angular Velocity Source"
, 1U , 6U , TRUE , 1.0 } , {
 "friccion_aislada_esferica_Simscape_Symmechanics.Robot_Delta.Rotational_Simscape_Intf2.Ideal_Angular_Velocity_Source"
, 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Rotational Simscape Intf2/Ideal Angular Velocity Source"
, 1U , 7U , TRUE , 1.0 } , {
 "friccion_aislada_esferica_Simscape_Symmechanics.Robot_Delta.Mechanical_Rotational_Reference2_W"
, 0U , 33 , NE_EQUATION_DOMAIN_TIME ,
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Mechanical\nRotational Reference2"
, 0U , 8U , FALSE , 1.0 } } ; static NeVariableData s_variable_data [ 9 ] = {
{
 "friccion_aislada_esferica_Simscape_Symmechanics.Robot_Delta.Mechanical_Rotational_Reference2.t"
, 0U , 0 ,
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Mechanical Rotational Reference2"
, 1.0 , "N*m" , 0.0 , FALSE , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Torque"
} , {
 "friccion_aislada_esferica_Simscape_Symmechanics.Robot_Delta.Rotational_Friction2.C.w"
, 0U , 1 ,
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Rotational Friction2"
, 1.0 , "rad/s" , 0.0 , FALSE , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "w" } ,
{
 "friccion_aislada_esferica_Simscape_Symmechanics.Robot_Delta.Rotational_Friction2.R.w"
, 0U , 1 ,
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Rotational Friction2"
, 1.0 , "rad/s" , 0.0 , FALSE , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "w" } ,
{
 "friccion_aislada_esferica_Simscape_Symmechanics.Robot_Delta.Rotational_Friction2.t"
, 0U , 0 ,
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Rotational Friction2"
, 1.0 , "N*m" , 0.0 , FALSE , FALSE , 1U , 1U , NE_INIT_MODE_MANDATORY ,
"Torque" } , {
 "friccion_aislada_esferica_Simscape_Symmechanics.Robot_Delta.Rotational_Friction2.w"
, 0U , 0 ,
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Rotational Friction2"
, 1.0 , "rad/s" , 0.0 , FALSE , FALSE , 1U , 1U , NE_INIT_MODE_MANDATORY ,
"Rotational velocity" } , {
 "friccion_aislada_esferica_Simscape_Symmechanics.Robot_Delta.Rotational_Simscape_Intf2.Ideal_Angular_Velocity_Source.w"
, 0U , 0 ,
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Rotational Simscape Intf2/Ideal Angular Velocity Source"
, 1.0 , "rad/s" , 0.0 , FALSE , FALSE , 1U , 1U , NE_INIT_MODE_NONE ,
"Angular velocity" } , {
 "friccion_aislada_esferica_Simscape_Symmechanics.Robot_Delta.Rotational_Simscape_Intf2.Ideal_Torque_Sensor.R.w"
, 0U , 1 ,
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Rotational Simscape Intf2/Ideal Torque Sensor"
, 1.0 , "rad/s" , 0.0 , FALSE , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "w" } ,
{
 "friccion_aislada_esferica_Simscape_Symmechanics.Robot_Delta.Rotational_Simscape_Intf2.Ideal_Torque_Sensor.w"
, 0U , 0 ,
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Rotational Simscape Intf2/Ideal Torque Sensor"
, 1.0 , "rad/s" , 0.0 , FALSE , FALSE , 1U , 1U , NE_INIT_MODE_NONE ,
"Angular velocity" } , {
 "friccion_aislada_esferica_Simscape_Symmechanics.Robot_Delta.Rotational_Simscape_Intf2.Ideal_Torque_Sensor.T"
, 0U , 2 ,
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Rotational\nSimscape Intf2/Ideal Torque Sensor"
, 1.0 , "N*m" , 0.0 , FALSE , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "T" } } ;
static NeVariableData * s_discrete_data = NULL ; static NeModeData *
s_major_mode_data = NULL ; static NeZCData s_zc_data [ 3 ] = { {
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Rotational Friction2"
, 1U , 0U ,
 "friccion_aislada_esferica_Simscape_Symmechanics.Robot_Delta.Rotational_Friction2"
, "Rotational Friction" , NE_ZC_TYPE_TRUE } , {
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Rotational Friction2"
, 1U , 1U ,
 "friccion_aislada_esferica_Simscape_Symmechanics.Robot_Delta.Rotational_Friction2"
, "Rotational Friction" , NE_ZC_TYPE_FALSE } , {
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Rotational Friction2"
, 2U , 2U ,
 "friccion_aislada_esferica_Simscape_Symmechanics.Robot_Delta.Rotational_Friction2"
, "Rotational Friction" , NE_ZC_TYPE_FALSE } } ; static NeRange s_range [ 4 ]
= { {
 "C:/Program Files/MATLAB/R2014a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/friction.ssc"
, 55U , 9U , 55U , 26U , NE_RANGE_TYPE_NORMAL } , { "" , 0U , 0U , 0U , 0U ,
NE_RANGE_TYPE_NA } , {
 "C:/Program Files/MATLAB/R2014a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/friction.ssc"
, 58U , 12U , 58U , 17U , NE_RANGE_TYPE_NORMAL } , {
 "C:/Program Files/MATLAB/R2014a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/friction.ssc"
, 63U , 55U , 63U , 60U , NE_RANGE_TYPE_NORMAL } } ; static NeAssertData
s_assert_data [ 1 ] = { {
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Rotational Friction2"
, 1U , 0U ,
 "friccion_aislada_esferica_Simscape_Symmechanics.Robot_Delta.Rotational_Friction2"
, "Rotational Friction" , FALSE , "Input must be non zero" ,
"equation_language:matrix:NonZeroInputRequired" } } ; static NeRange
s_assert_range [ 1 ] = { {
 "C:/Program Files/MATLAB/R2014a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/friction.ssc"
, 57U , 33U , 57U , 40U , NE_RANGE_TYPE_NORMAL } } ; static NeRange
s_equation_range [ 8 ] = { {
 "C:/Program Files/MATLAB/R2014a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/branch.ssc"
, 23U , 5U , 23U , 19U , NE_RANGE_TYPE_NORMAL } , {
 "C:/Program Files/MATLAB/R2014a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/friction.ssc"
, 55U , 8U , 63U , 61U , NE_RANGE_TYPE_NORMAL } , {
 "C:/Program Files/MATLAB/R2014a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/reference.ssc"
, 22U , 5U , 22U , 13U , NE_RANGE_TYPE_NORMAL } , {
 "C:/Program Files/MATLAB/R2014a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sensors/torque.ssc"
, 36U , 5U , 36U , 19U , NE_RANGE_TYPE_NORMAL } , {
 "C:/Program Files/MATLAB/R2014a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sensors/torque.ssc"
, 37U , 5U , 37U , 11U , NE_RANGE_TYPE_NORMAL } , {
 "C:/Program Files/MATLAB/R2014a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sensors/torque.ssc"
, 38U , 5U , 38U , 11U , NE_RANGE_TYPE_NORMAL } , {
 "C:/Program Files/MATLAB/R2014a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sources/angular_velocity.ssc"
, 36U , 5U , 36U , 19U , NE_RANGE_TYPE_NORMAL } , {
 "C:/Program Files/MATLAB/R2014a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sources/angular_velocity.ssc"
, 37U , 5U , 37U , 11U , NE_RANGE_TYPE_NORMAL } } ; static int32_T ds_s (
const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out1 ) { NeIntVector local0 ; ( void ) in ; local0 = out1
-> mS ; local0 . mX [ 0ULL ] = 0 ; local0 . mX [ 1ULL ] = 0 ; local0 . mX [
2ULL ] = 0 ; local0 . mX [ 3ULL ] = 0 ; local0 . mX [ 4ULL ] = 0 ; local0 .
mX [ 5ULL ] = 0 ; local0 . mX [ 6ULL ] = 0 ; local0 . mX [ 7ULL ] = 0 ;
local0 . mX [ 8ULL ] = 0 ; ( void ) ds ; ( void ) in ; return 0 ; } static
int32_T ds_m_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out1 ) { NeSparsityPattern local0 ; ( void ) in ; local0
= out1 -> mM_P ; local0 . mJc [ 0ULL ] = 0 ; local0 . mJc [ 1ULL ] = 0 ;
local0 . mJc [ 2ULL ] = 0 ; local0 . mJc [ 3ULL ] = 0 ; local0 . mJc [ 4ULL ]
= 0 ; local0 . mJc [ 5ULL ] = 0 ; local0 . mJc [ 6ULL ] = 0 ; local0 . mJc [
7ULL ] = 0 ; local0 . mJc [ 8ULL ] = 0 ; local0 . mJc [ 9ULL ] = 0 ; ( void )
ds ; ( void ) in ; return 0 ; } static int32_T ds_a_p ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out1 ) {
NeSparsityPattern local0 ; ( void ) in ; local0 = out1 -> mA_P ; local0 . mJc
[ 0ULL ] = 0 ; local0 . mJc [ 1ULL ] = 1 ; local0 . mJc [ 2ULL ] = 4 ; local0
. mJc [ 3ULL ] = 6 ; local0 . mJc [ 4ULL ] = 8 ; local0 . mJc [ 5ULL ] = 9 ;
local0 . mJc [ 6ULL ] = 11 ; local0 . mJc [ 7ULL ] = 13 ; local0 . mJc [ 8ULL
] = 15 ; local0 . mJc [ 9ULL ] = 16 ; local0 . mIr [ 0ULL ] = 8 ; local0 .
mIr [ 1ULL ] = 0 ; local0 . mIr [ 2ULL ] = 2 ; local0 . mIr [ 3ULL ] = 3 ;
local0 . mIr [ 4ULL ] = 0 ; local0 . mIr [ 5ULL ] = 6 ; local0 . mIr [ 6ULL ]
= 5 ; local0 . mIr [ 7ULL ] = 8 ; local0 . mIr [ 8ULL ] = 0 ; local0 . mIr [
9ULL ] = 6 ; local0 . mIr [ 10ULL ] = 7 ; local0 . mIr [ 11ULL ] = 3 ; local0
. mIr [ 12ULL ] = 6 ; local0 . mIr [ 13ULL ] = 3 ; local0 . mIr [ 14ULL ] = 4
; local0 . mIr [ 15ULL ] = 5 ; ( void ) ds ; ( void ) in ; return 0 ; }
static int32_T ds_a ( const NeDynamicSystem * ds , const NeDynamicSystemInput
* in , NeDsMethodOutput * out1 ) { NeRealVector local0 ; ( void ) in ; local0
= out1 -> mA ; local0 . mX [ 0ULL ] = 1.0 ; local0 . mX [ 1ULL ] = 1.0 ;
local0 . mX [ 2ULL ] = - 1.0 ; local0 . mX [ 3ULL ] = 1.0 ; local0 . mX [
4ULL ] = - 1.0 ; local0 . mX [ 5ULL ] = - 1.0 ; local0 . mX [ 6ULL ] = 1.0 ;
local0 . mX [ 7ULL ] = 0.0 ; local0 . mX [ 8ULL ] = 1.0 ; local0 . mX [ 9ULL
] = 1.0 ; local0 . mX [ 10ULL ] = - 1.0 ; local0 . mX [ 11ULL ] = - 1.0 ;
local0 . mX [ 12ULL ] = 1.0 ; local0 . mX [ 13ULL ] = 1.0 ; local0 . mX [
14ULL ] = - 1.0 ; local0 . mX [ 15ULL ] = 1.0 ; ( void ) ds ; ( void ) in ;
return 0 ; } static int32_T ds_b_p ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out1 ) { NeSparsityPattern
local0 ; ( void ) in ; local0 = out1 -> mB_P ; local0 . mJc [ 0ULL ] = 0 ;
local0 . mJc [ 1ULL ] = 1 ; local0 . mIr [ 0ULL ] = 7 ; ( void ) ds ; ( void
) in ; return 0 ; } static int32_T ds_b ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out1 ) { NeRealVector local0 ;
( void ) in ; local0 = out1 -> mB ; local0 . mX [ 0ULL ] = 1.0 ; ( void ) ds
; ( void ) in ; return 0 ; } static int32_T ds_c_p ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out1 ) {
NeSparsityPattern local0 ; ( void ) in ; local0 = out1 -> mC_P ; local0 . mJc
[ 0ULL ] = 0 ; local0 . mJc [ 1ULL ] = 0 ; ( void ) ds ; ( void ) in ; return
0 ; } static int32_T ds_f ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out1 ) { NeRealVector local0 ;
real_T x [ 9 ] ; size_t idx ; real_T t9 ; int32_T M_idx_0 ; int32_T M_idx_1 ;
int32_T M_idx_2 ; real_T X_idx_4 ; real_T X_idx_3 ; M_idx_0 = in -> mM . mX [
0 ] ; M_idx_1 = in -> mM . mX [ 1 ] ; M_idx_2 = in -> mM . mX [ 2 ] ; X_idx_3
= in -> mX . mX [ 3 ] ; X_idx_4 = in -> mX . mX [ 4 ] ; local0 = out1 -> mF ;
for ( idx = 0ULL ; idx < 9ULL ; idx ++ ) { x [ idx ] = 0.0 ; } t9 = 0.001 *
X_idx_4 - 0.1 - 0.049999999999999989 * exp ( - 5.0 * ( ( boolean_T ) M_idx_2
? X_idx_4 : - X_idx_4 ) ) ; t9 = ( boolean_T ) M_idx_1 ? X_idx_3 - ( 0.001 *
X_idx_4 + 0.1 + 0.049999999999999989 * exp ( - 5.0 * X_idx_4 ) ) : X_idx_3 -
t9 ; local0 . mX [ 0ULL ] = x [ 0ULL ] ; local0 . mX [ 1ULL ] =
0.00066677732392467941 * ( ( boolean_T ) M_idx_0 ? X_idx_3 -
0.14997510624895846 * X_idx_4 / 0.0001 : t9 ) ; local0 . mX [ 2ULL ] = x [
2ULL ] ; local0 . mX [ 3ULL ] = x [ 3ULL ] ; local0 . mX [ 4ULL ] = x [ 4ULL
] ; local0 . mX [ 5ULL ] = x [ 5ULL ] ; local0 . mX [ 6ULL ] = x [ 6ULL ] ;
local0 . mX [ 7ULL ] = x [ 7ULL ] ; local0 . mX [ 8ULL ] = x [ 8ULL ] ; (
void ) ds ; ( void ) in ; return 0 ; } static int32_T ds_vmf ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out1 ) { NeBoolVector local0 ; boolean_T x [ 9 ] ; size_t idx ; ( void ) in ;
local0 = out1 -> mVMF ; for ( idx = 0ULL ; idx < 9ULL ; idx ++ ) { x [ idx ]
= false ; } local0 . mX [ 0 ] = x [ 0 ] ; local0 . mX [ 1 ] = true ; local0 .
mX [ 2 ] = x [ 2 ] ; local0 . mX [ 3 ] = x [ 3 ] ; local0 . mX [ 4 ] = x [ 4
] ; local0 . mX [ 5 ] = x [ 5 ] ; local0 . mX [ 6 ] = x [ 6 ] ; local0 . mX [
7 ] = x [ 7 ] ; local0 . mX [ 8 ] = x [ 8 ] ; ( void ) ds ; ( void ) in ;
return 0 ; } static int32_T ds_slf ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out1 ) { NeBoolVector local0 ;
boolean_T x [ 9 ] ; size_t idx ; ( void ) in ; local0 = out1 -> mSLF ; for (
idx = 0ULL ; idx < 9ULL ; idx ++ ) { x [ idx ] = false ; } local0 . mX [ 0 ]
= x [ 0 ] ; local0 . mX [ 1 ] = x [ 1 ] ; local0 . mX [ 2 ] = x [ 2 ] ;
local0 . mX [ 3 ] = x [ 3 ] ; local0 . mX [ 4 ] = x [ 4 ] ; local0 . mX [ 5 ]
= x [ 5 ] ; local0 . mX [ 6 ] = x [ 6 ] ; local0 . mX [ 7 ] = x [ 7 ] ;
local0 . mX [ 8 ] = x [ 8 ] ; ( void ) ds ; ( void ) in ; return 0 ; } static
int32_T ds_dxf_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out1 ) { NeSparsityPattern local0 ; ( void ) in ;
local0 = out1 -> mDXF_P ; local0 . mJc [ 0ULL ] = 0 ; local0 . mJc [ 1ULL ] =
0 ; local0 . mJc [ 2ULL ] = 0 ; local0 . mJc [ 3ULL ] = 0 ; local0 . mJc [
4ULL ] = 1 ; local0 . mJc [ 5ULL ] = 2 ; local0 . mJc [ 6ULL ] = 2 ; local0 .
mJc [ 7ULL ] = 2 ; local0 . mJc [ 8ULL ] = 2 ; local0 . mJc [ 9ULL ] = 2 ;
local0 . mIr [ 0ULL ] = 1 ; local0 . mIr [ 1ULL ] = 1 ; ( void ) ds ; ( void
) in ; return 0 ; } static int32_T ds_dxf ( const NeDynamicSystem * ds ,
const NeDynamicSystemInput * in , NeDsMethodOutput * out1 ) { NeRealVector
local0 ; real_T t8 ; int32_T M_idx_0 ; int32_T M_idx_1 ; int32_T M_idx_2 ;
real_T X_idx_4 ; M_idx_0 = in -> mM . mX [ 0 ] ; M_idx_1 = in -> mM . mX [ 1
] ; M_idx_2 = in -> mM . mX [ 2 ] ; X_idx_4 = in -> mX . mX [ 4 ] ; local0 =
out1 -> mDXF ; t8 = exp ( - 5.0 * ( ( boolean_T ) M_idx_2 ? X_idx_4 : -
X_idx_4 ) ) * ( - 5.0 * ( ( boolean_T ) M_idx_2 ? 1.0 : - 1.0 ) ) ; X_idx_4 =
( boolean_T ) M_idx_1 ? - ( 0.001 + 0.049999999999999989 * ( exp ( - 5.0 *
X_idx_4 ) * - 5.0 ) ) : - ( 0.001 - 0.049999999999999989 * t8 ) ; t8 = 1.0E-8
; local0 . mX [ 0ULL ] = 0.00066677732392467941 ; local0 . mX [ 1ULL ] = ( (
boolean_T ) M_idx_0 ? - ( 1.4997510624895847E-5 / ( t8 == 0.0 ? 1.0E-16 : t8
) ) : X_idx_4 ) * 0.00066677732392467941 ; ( void ) ds ; ( void ) in ; return
0 ; } static int32_T ds_duf_p ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out1 ) { NeSparsityPattern
local0 ; ( void ) in ; local0 = out1 -> mDUF_P ; local0 . mJc [ 0ULL ] = 0 ;
local0 . mJc [ 1ULL ] = 0 ; ( void ) ds ; ( void ) in ; return 0 ; } static
int32_T ds_dtf_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out1 ) { NeSparsityPattern local0 ; ( void ) in ;
local0 = out1 -> mDTF_P ; local0 . mJc [ 0ULL ] = 0 ; local0 . mJc [ 1ULL ] =
0 ; ( void ) ds ; ( void ) in ; return 0 ; } static int32_T ds_ddf_p ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out1 ) { NeSparsityPattern local0 ; ( void ) in ; local0 = out1 -> mDDF_P ;
local0 . mJc [ 0ULL ] = 0 ; ( void ) ds ; ( void ) in ; return 0 ; } static
int32_T ds_tduf_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out1 ) { NeSparsityPattern local0 ; ( void ) in ;
local0 = out1 -> mTDUF_P ; local0 . mJc [ 0ULL ] = 0 ; local0 . mJc [ 1ULL ]
= 1 ; local0 . mIr [ 0ULL ] = 7 ; ( void ) ds ; ( void ) in ; return 0 ; }
static int32_T ds_tdxf_p ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out1 ) { NeSparsityPattern
local0 ; ( void ) in ; local0 = out1 -> mTDXF_P ; local0 . mJc [ 0ULL ] = 0 ;
local0 . mJc [ 1ULL ] = 1 ; local0 . mJc [ 2ULL ] = 4 ; local0 . mJc [ 3ULL ]
= 6 ; local0 . mJc [ 4ULL ] = 9 ; local0 . mJc [ 5ULL ] = 11 ; local0 . mJc [
6ULL ] = 13 ; local0 . mJc [ 7ULL ] = 15 ; local0 . mJc [ 8ULL ] = 17 ;
local0 . mJc [ 9ULL ] = 18 ; local0 . mIr [ 0ULL ] = 8 ; local0 . mIr [ 1ULL
] = 0 ; local0 . mIr [ 2ULL ] = 2 ; local0 . mIr [ 3ULL ] = 3 ; local0 . mIr
[ 4ULL ] = 0 ; local0 . mIr [ 5ULL ] = 6 ; local0 . mIr [ 6ULL ] = 1 ; local0
. mIr [ 7ULL ] = 5 ; local0 . mIr [ 8ULL ] = 8 ; local0 . mIr [ 9ULL ] = 0 ;
local0 . mIr [ 10ULL ] = 1 ; local0 . mIr [ 11ULL ] = 6 ; local0 . mIr [
12ULL ] = 7 ; local0 . mIr [ 13ULL ] = 3 ; local0 . mIr [ 14ULL ] = 6 ;
local0 . mIr [ 15ULL ] = 3 ; local0 . mIr [ 16ULL ] = 4 ; local0 . mIr [
17ULL ] = 5 ; ( void ) ds ; ( void ) in ; return 0 ; } static int32_T ds_y (
const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out1 ) { NeRealVector local0 ; real_T X_idx_8 ; X_idx_8 =
in -> mX . mX [ 8 ] ; local0 = out1 -> mY ; local0 . mX [ 0ULL ] = X_idx_8 ;
( void ) ds ; ( void ) in ; return 0 ; } static int32_T ds_dxy_p ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out1 ) { NeSparsityPattern local0 ; ( void ) in ; local0 = out1 -> mDXY_P ;
local0 . mJc [ 0ULL ] = 0 ; local0 . mJc [ 1ULL ] = 0 ; local0 . mJc [ 2ULL ]
= 0 ; local0 . mJc [ 3ULL ] = 0 ; local0 . mJc [ 4ULL ] = 0 ; local0 . mJc [
5ULL ] = 0 ; local0 . mJc [ 6ULL ] = 0 ; local0 . mJc [ 7ULL ] = 0 ; local0 .
mJc [ 8ULL ] = 0 ; local0 . mJc [ 9ULL ] = 1 ; local0 . mIr [ 0ULL ] = 0 ; (
void ) ds ; ( void ) in ; return 0 ; } static int32_T ds_dxy ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out1 ) { NeRealVector local0 ; ( void ) in ; local0 = out1 -> mDXY ; local0 .
mX [ 0ULL ] = 1.0 ; ( void ) ds ; ( void ) in ; return 0 ; } static int32_T
ds_duy_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out1 ) { NeSparsityPattern local0 ; ( void ) in ; local0 =
out1 -> mDUY_P ; local0 . mJc [ 0ULL ] = 0 ; local0 . mJc [ 1ULL ] = 0 ; (
void ) ds ; ( void ) in ; return 0 ; } static int32_T ds_dty_p ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out1 ) { NeSparsityPattern local0 ; ( void ) in ; local0 = out1 -> mDTY_P ;
local0 . mJc [ 0ULL ] = 0 ; local0 . mJc [ 1ULL ] = 0 ; ( void ) ds ; ( void
) in ; return 0 ; } static int32_T ds_mode ( const NeDynamicSystem * ds ,
const NeDynamicSystemInput * in , NeDsMethodOutput * out1 ) { NeIntVector
local0 ; real_T X_idx_4 ; X_idx_4 = in -> mX . mX [ 4 ] ; local0 = out1 ->
mMODE ; local0 . mX [ 0ULL ] = ( int32_T ) ( ( X_idx_4 >= 0.0 ? X_idx_4 : -
X_idx_4 ) <= 0.0001 ) ; local0 . mX [ 1ULL ] = ( int32_T ) ( X_idx_4 > 0.0 )
; local0 . mX [ 2ULL ] = ( int32_T ) ( X_idx_4 >= 0.0 ) ; local0 . mX [ 3ULL
] = 1 ; ( void ) ds ; ( void ) in ; return 0 ; } static int32_T ds_zc ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out1 ) { NeRealVector local0 ; real_T t4 ; int32_T M_idx_0 ; int32_T M_idx_1
; real_T X_idx_4 ; M_idx_0 = in -> mM . mX [ 0 ] ; M_idx_1 = in -> mM . mX [
1 ] ; X_idx_4 = in -> mX . mX [ 4 ] ; local0 = out1 -> mZC ; t4 = X_idx_4 >=
0.0 ? X_idx_4 : - X_idx_4 ; local0 . mX [ 0ULL ] = 0.0001 - t4 ; local0 . mX
[ 1ULL ] = - ( 0.0001 - t4 ) > 0.0001 ? - ( 0.0001 - t4 ) : 0.0001 ; local0 .
mX [ 2ULL ] = ! ( boolean_T ) M_idx_0 || ( ! ( boolean_T ) M_idx_0 && ! (
boolean_T ) M_idx_1 ) ? X_idx_4 : 0.0 ; ( void ) ds ; ( void ) in ; return 0
; } static int32_T ds_r ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out1 ) { NeRealVector local0 ;
( void ) in ; local0 = out1 -> mR ; local0 . mX [ 0ULL ] = 1.0 ; local0 . mX
[ 1ULL ] = 0.0 ; local0 . mX [ 2ULL ] = 0.0 ; local0 . mX [ 3ULL ] = 3.0 ;
local0 . mX [ 4ULL ] = 0.0 ; local0 . mX [ 5ULL ] = 0.0 ; local0 . mX [ 6ULL
] = 0.0 ; local0 . mX [ 7ULL ] = 0.0 ; local0 . mX [ 8ULL ] = 0.0 ; ( void )
ds ; ( void ) in ; return 0 ; } static int32_T ds_assert ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out1 ) { NeIntVector local0 ; int32_T M_idx_0 ; int32_T M_idx_3 ; M_idx_0 =
in -> mM . mX [ 0 ] ; M_idx_3 = in -> mM . mX [ 3 ] ; local0 = out1 ->
mASSERT ; local0 . mX [ 0ULL ] = ( int32_T ) ( ( ( boolean_T ) M_idx_0 ? (
boolean_T ) M_idx_3 ? 1.0 : 0.0 : 1.0 ) != 0.0 ) ; ( void ) ds ; ( void ) in
; return 0 ; } static int32_T stub_method ( const NeDynamicSystem * ds ,
const NeDynamicSystemInput * in , NeDsMethodOutput * out ) { ( void ) ds ; (
void ) in ; ( void ) out ; return 0 ; } static NeDsMethodOutput * ds_output_s
( const NeDynamicSystem * ds , NeAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mS . mN = 9 ; out ->
mS . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 9 ) ; return out ; } static NeDsMethodOutput * ds_output_m_p (
const NeDynamicSystem * ds , NeAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mM_P . mNumCol = 9 ;
out -> mM_P . mNumRow = 9 ; out -> mM_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 10 ) ; out -> mM_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_m ( const NeDynamicSystem
* ds , NeAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out
= ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mM . mN = 0 ; out -> mM . mX = ( real_T * )
allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_vmm ( const NeDynamicSystem * ds ,
NeAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mVMM . mN = 0 ; out -> mVMM . mX = (
boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof ( boolean_T ) , 0
) ; return out ; } static NeDsMethodOutput * ds_output_dxm_p ( const
NeDynamicSystem * ds , NeAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXM_P . mNumCol = 9 ; out ->
mDXM_P . mNumRow = 0 ; out -> mDXM_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 10 ) ; out -> mDXM_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dxm ( const
NeDynamicSystem * ds , NeAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXM . mN = 0 ; out -> mDXM . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dum_p ( const
NeDynamicSystem * ds , NeAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUM_P . mNumCol = 1 ; out ->
mDUM_P . mNumRow = 0 ; out -> mDUM_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out -> mDUM_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dum ( const
NeDynamicSystem * ds , NeAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUM . mN = 0 ; out -> mDUM . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dtm_p ( const
NeDynamicSystem * ds , NeAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTM_P . mNumCol = 1 ; out ->
mDTM_P . mNumRow = 0 ; out -> mDTM_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out -> mDTM_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dtm ( const
NeDynamicSystem * ds , NeAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTM . mN = 0 ; out -> mDTM . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_a_p ( const
NeDynamicSystem * ds , NeAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mA_P . mNumCol = 9 ; out -> mA_P
. mNumRow = 9 ; out -> mA_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 10 ) ; out -> mA_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 16 ) ; return out
; } static NeDsMethodOutput * ds_output_a ( const NeDynamicSystem * ds ,
NeAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mA . mN = 16 ; out -> mA . mX = ( real_T *
) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 16 ) ; return out
; } static NeDsMethodOutput * ds_output_b_p ( const NeDynamicSystem * ds ,
NeAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mB_P . mNumCol = 1 ; out -> mB_P . mNumRow
= 9 ; out -> mB_P . mJc = ( int32_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( int32_T ) , 2 ) ; out -> mB_P . mIr = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ; return out ; } static
NeDsMethodOutput * ds_output_b ( const NeDynamicSystem * ds , NeAllocator *
allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput
* ) allocator -> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ;
out -> mB . mN = 1 ; out -> mB . mX = ( real_T * ) allocator -> mCallocFcn (
allocator , sizeof ( real_T ) , 1 ) ; return out ; } static NeDsMethodOutput
* ds_output_c_p ( const NeDynamicSystem * ds , NeAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mC_P .
mNumCol = 1 ; out -> mC_P . mNumRow = 9 ; out -> mC_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out -> mC_P
. mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T
) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_c ( const
NeDynamicSystem * ds , NeAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mC . mN = 0 ; out -> mC . mX = (
real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_f ( const NeDynamicSystem
* ds , NeAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out
= ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mF . mN = 9 ; out -> mF . mX = ( real_T * )
allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 9 ) ; return out ;
} static NeDsMethodOutput * ds_output_vmf ( const NeDynamicSystem * ds ,
NeAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mVMF . mN = 9 ; out -> mVMF . mX = (
boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof ( boolean_T ) , 9
) ; return out ; } static NeDsMethodOutput * ds_output_slf ( const
NeDynamicSystem * ds , NeAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mSLF . mN = 9 ; out -> mSLF . mX
= ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof ( boolean_T )
, 9 ) ; return out ; } static NeDsMethodOutput * ds_output_dxf_p ( const
NeDynamicSystem * ds , NeAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXF_P . mNumCol = 9 ; out ->
mDXF_P . mNumRow = 9 ; out -> mDXF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 10 ) ; out -> mDXF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ;
return out ; } static NeDsMethodOutput * ds_output_dxf ( const
NeDynamicSystem * ds , NeAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXF . mN = 2 ; out -> mDXF . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 2 )
; return out ; } static NeDsMethodOutput * ds_output_duf_p ( const
NeDynamicSystem * ds , NeAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUF_P . mNumCol = 1 ; out ->
mDUF_P . mNumRow = 9 ; out -> mDUF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out -> mDUF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_duf ( const
NeDynamicSystem * ds , NeAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUF . mN = 0 ; out -> mDUF . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dtf_p ( const
NeDynamicSystem * ds , NeAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTF_P . mNumCol = 1 ; out ->
mDTF_P . mNumRow = 9 ; out -> mDTF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out -> mDTF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dtf ( const
NeDynamicSystem * ds , NeAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTF . mN = 0 ; out -> mDTF . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_ddf_p ( const
NeDynamicSystem * ds , NeAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDF_P . mNumCol = 0 ; out ->
mDDF_P . mNumRow = 9 ; out -> mDDF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ; out -> mDDF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_ddf ( const
NeDynamicSystem * ds , NeAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDF . mN = 0 ; out -> mDDF . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_tduf_p ( const
NeDynamicSystem * ds , NeAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mTDUF_P . mNumCol = 1 ; out ->
mTDUF_P . mNumRow = 9 ; out -> mTDUF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out -> mTDUF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ;
return out ; } static NeDsMethodOutput * ds_output_tdxf_p ( const
NeDynamicSystem * ds , NeAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mTDXF_P . mNumCol = 9 ; out ->
mTDXF_P . mNumRow = 9 ; out -> mTDXF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 10 ) ; out -> mTDXF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 18 ) ;
return out ; } static NeDsMethodOutput * ds_output_y ( const NeDynamicSystem
* ds , NeAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out
= ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mY . mN = 1 ; out -> mY . mX = ( real_T * )
allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 1 ) ; return out ;
} static NeDsMethodOutput * ds_output_dxy_p ( const NeDynamicSystem * ds ,
NeAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDXY_P . mNumCol = 9 ; out -> mDXY_P .
mNumRow = 1 ; out -> mDXY_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 10 ) ; out -> mDXY_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ; return out ;
} static NeDsMethodOutput * ds_output_dxy ( const NeDynamicSystem * ds ,
NeAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDXY . mN = 1 ; out -> mDXY . mX = ( real_T
* ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 1 ) ; return
out ; } static NeDsMethodOutput * ds_output_duy_p ( const NeDynamicSystem *
ds , NeAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out =
( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDUY_P . mNumCol = 1 ; out -> mDUY_P .
mNumRow = 1 ; out -> mDUY_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 2 ) ; out -> mDUY_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_duy ( const NeDynamicSystem * ds ,
NeAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDUY . mN = 0 ; out -> mDUY . mX = ( real_T
* ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return
out ; } static NeDsMethodOutput * ds_output_dty_p ( const NeDynamicSystem *
ds , NeAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out =
( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDTY_P . mNumCol = 1 ; out -> mDTY_P .
mNumRow = 1 ; out -> mDTY_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 2 ) ; out -> mDTY_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_dty ( const NeDynamicSystem * ds ,
NeAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDTY . mN = 0 ; out -> mDTY . mX = ( real_T
* ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return
out ; } static NeDsMethodOutput * ds_output_mode ( const NeDynamicSystem * ds
, NeAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mMODE . mN = 4 ; out -> mMODE . mX = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 4 ) ;
return out ; } static NeDsMethodOutput * ds_output_zc ( const NeDynamicSystem
* ds , NeAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out
= ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mZC . mN = 3 ; out -> mZC . mX = ( real_T *
) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 3 ) ; return out
; } static NeDsMethodOutput * ds_output_cache ( const NeDynamicSystem * ds ,
NeAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mCACHE . mN = 0 ; out -> mCACHE . mX = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_update_r ( const
NeDynamicSystem * ds , NeAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mUPDATE_R . mN = 0 ; out ->
mUPDATE_R . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_update_i
( const NeDynamicSystem * ds , NeAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mUPDATE_I . mN = 0 ;
out -> mUPDATE_I . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput *
ds_output_sfo ( const NeDynamicSystem * ds , NeAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mSFO .
mN = 0 ; out -> mSFO . mX = ( real_T * ) allocator -> mCallocFcn ( allocator
, sizeof ( real_T ) , 0 ) ; return out ; } static NeDsMethodOutput *
ds_output_sfp ( const NeDynamicSystem * ds , NeAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mSFP .
mN = 0 ; out -> mSFP . mX = ( real_T * ) allocator -> mCallocFcn ( allocator
, sizeof ( real_T ) , 0 ) ; return out ; } static NeDsMethodOutput *
ds_output_init_r ( const NeDynamicSystem * ds , NeAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mINIT_R . mN = 0 ; out -> mINIT_R . mX = ( real_T * ) allocator -> mCallocFcn
( allocator , sizeof ( real_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_init_i ( const NeDynamicSystem * ds ,
NeAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mINIT_I . mN = 0 ; out -> mINIT_I . mX = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_r ( const NeDynamicSystem
* ds , NeAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out
= ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mR . mN = 9 ; out -> mR . mX = ( real_T * )
allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 9 ) ; return out ;
} static NeDsMethodOutput * ds_output_log ( const NeDynamicSystem * ds ,
NeAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mLOG . mN = 0 ; out -> mLOG . mX = ( real_T
* ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return
out ; } static NeDsMethodOutput * ds_output_assert ( const NeDynamicSystem *
ds , NeAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out =
( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mASSERT . mN = 1 ; out -> mASSERT . mX = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ;
return out ; } static NeDsMethodOutput * ds_output_del_t ( const
NeDynamicSystem * ds , NeAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDEL_T . mN = 0 ; out -> mDEL_T
. mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
0 ) ; return out ; } static NeDsMethodOutput * ds_output_del_v ( const
NeDynamicSystem * ds , NeAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDEL_V . mN = 0 ; out -> mDEL_V
. mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
0 ) ; return out ; } static NeDsMethodOutput * ds_output_del_v0 ( const
NeDynamicSystem * ds , NeAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDEL_V0 . mN = 0 ; out ->
mDEL_V0 . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_del_tmax
( const NeDynamicSystem * ds , NeAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDEL_TMAX . mN = 0 ;
out -> mDEL_TMAX . mX = ( real_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( real_T ) , 0 ) ; return out ; } static NeDsMethodOutput *
ds_output_dxdelt_p ( const NeDynamicSystem * ds , NeAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mDXDELT_P . mNumCol = 9 ; out -> mDXDELT_P . mNumRow = 0 ; out -> mDXDELT_P .
mJc = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T )
, 10 ) ; out -> mDXDELT_P . mIr = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput
* ds_output_dxdelt ( const NeDynamicSystem * ds , NeAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mDXDELT . mN = 0 ; out -> mDXDELT . mX = ( real_T * ) allocator -> mCallocFcn
( allocator , sizeof ( real_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_dudelt_p ( const NeDynamicSystem * ds ,
NeAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDUDELT_P . mNumCol = 1 ; out -> mDUDELT_P
. mNumRow = 0 ; out -> mDUDELT_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out -> mDUDELT_P . mIr =
( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dudelt ( const
NeDynamicSystem * ds , NeAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUDELT . mN = 0 ; out ->
mDUDELT . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dtdelt_p
( const NeDynamicSystem * ds , NeAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTDELT_P . mNumCol =
1 ; out -> mDTDELT_P . mNumRow = 0 ; out -> mDTDELT_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out ->
mDTDELT_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof
( int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dtdelt
( const NeDynamicSystem * ds , NeAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTDELT . mN = 0 ; out
-> mDTDELT . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static void release_reference (
NeDynamicSystem * ds ) { _NeDynamicSystem * _ds ; _ds = ( _NeDynamicSystem *
) ds ; if ( -- _ds -> mRefCnt == 0 ) { _ds -> mAlloc . mFreeFcn ( & _ds ->
mAlloc , _ds ) ; } } static void get_reference ( NeDynamicSystem * ds ) {
_NeDynamicSystem * _ds ; _ds = ( _NeDynamicSystem * ) ds ; ++ _ds -> mRefCnt
; } NeDynamicSystem *
friccion_aislada_esferica_Simscape_Symmechanics_eb684b64_2_dae_ds (
NeAllocator * allocator , const void * params ) { NeDynamicSystem * ds ;
_NeDynamicSystem * _ds ; static NeDsIoInfo input_info [ 1 ] ; static
NeDsIoInfo output_info [ 1 ] ; ( void ) params ; _ds = ( _NeDynamicSystem * )
allocator -> mCallocFcn ( allocator , sizeof ( _NeDynamicSystem ) , 1 ) ; _ds
-> mAlloc = * allocator ; _ds -> mRefCnt = 1 ; ds = & _ds -> mBase ; ds ->
mNumVariables = 9 ; ds -> mNumDiscreteRealVariables = 0 ; ds ->
mNumDifferentialVariables = 0 ; ds -> mNumEquations = 9 ; ds -> mNumModes = 4
; ds -> mNumMajorModes = 0 ; ds -> mNumCache = 0 ; ds -> mNumZcs = 3 ; ds ->
mNumAsserts = 1 ; ds -> mNumAssertRanges = 1 ; ds -> mNumRanges = 4 ; ds ->
mNumEquationRanges = 8 ; ds -> mNumFundamentalSamples = 0 ; ds -> mNumDelays
= 0 ; ds -> mIsOutputLinear = 1 ; ds -> mNumIo [ NE_INPUT_IO_TYPE ] = 1 ;
input_info [ 0 ] . mIdentifier =
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Rotational\nSimscape Intf2/Ideal Angular\nVelocity Source_"
; input_info [ 0 ] . mM = 1 ; input_info [ 0 ] . mN = 1 ; input_info [ 0 ] .
mName =
"Robot_Delta.Rotational_Simscape_Intf2.Ideal_Angular_Velocity_Source.S" ;
input_info [ 0 ] . mUnit = "rad/s" ; ds -> mIo [ NE_INPUT_IO_TYPE ] =
input_info ; ds -> mNumIo [ NE_OUTPUT_IO_TYPE ] = 1 ; output_info [ 0 ] .
mIdentifier =
 "friccion_aislada_esferica_Simscape_Symmechanics/Robot Delta/Rotational\nSimscape Intf2/Ideal Torque Sensor_"
; output_info [ 0 ] . mM = 1 ; output_info [ 0 ] . mN = 1 ; output_info [ 0 ]
. mName = "Robot_Delta.Rotational_Simscape_Intf2.Ideal_Torque_Sensor.T" ;
output_info [ 0 ] . mUnit = "N*m" ; ds -> mIo [ NE_OUTPUT_IO_TYPE ] =
output_info ; ds -> mReleaseReference = release_reference ; ds ->
mGetReference = get_reference ; ds -> mMethods [ NE_DS_METHOD_S ] = ds_s ; ds
-> mMakeOutput [ NE_DS_METHOD_S ] = ds_output_s ; ds -> mMethods [
NE_DS_METHOD_M_P ] = ds_m_p ; ds -> mMakeOutput [ NE_DS_METHOD_M_P ] =
ds_output_m_p ; ds -> mMethods [ NE_DS_METHOD_M ] = stub_method ; ds ->
mMakeOutput [ NE_DS_METHOD_M ] = ds_output_m ; ds -> mMethods [
NE_DS_METHOD_VMM ] = stub_method ; ds -> mMakeOutput [ NE_DS_METHOD_VMM ] =
ds_output_vmm ; ds -> mMethods [ NE_DS_METHOD_DXM_P ] = stub_method ; ds ->
mMakeOutput [ NE_DS_METHOD_DXM_P ] = ds_output_dxm_p ; ds -> mMethods [
NE_DS_METHOD_DXM ] = stub_method ; ds -> mMakeOutput [ NE_DS_METHOD_DXM ] =
ds_output_dxm ; ds -> mMethods [ NE_DS_METHOD_DUM_P ] = stub_method ; ds ->
mMakeOutput [ NE_DS_METHOD_DUM_P ] = ds_output_dum_p ; ds -> mMethods [
NE_DS_METHOD_DUM ] = stub_method ; ds -> mMakeOutput [ NE_DS_METHOD_DUM ] =
ds_output_dum ; ds -> mMethods [ NE_DS_METHOD_DTM_P ] = stub_method ; ds ->
mMakeOutput [ NE_DS_METHOD_DTM_P ] = ds_output_dtm_p ; ds -> mMethods [
NE_DS_METHOD_DTM ] = stub_method ; ds -> mMakeOutput [ NE_DS_METHOD_DTM ] =
ds_output_dtm ; ds -> mMethods [ NE_DS_METHOD_A_P ] = ds_a_p ; ds ->
mMakeOutput [ NE_DS_METHOD_A_P ] = ds_output_a_p ; ds -> mMethods [
NE_DS_METHOD_A ] = ds_a ; ds -> mMakeOutput [ NE_DS_METHOD_A ] = ds_output_a
; ds -> mMethods [ NE_DS_METHOD_B_P ] = ds_b_p ; ds -> mMakeOutput [
NE_DS_METHOD_B_P ] = ds_output_b_p ; ds -> mMethods [ NE_DS_METHOD_B ] = ds_b
; ds -> mMakeOutput [ NE_DS_METHOD_B ] = ds_output_b ; ds -> mMethods [
NE_DS_METHOD_C_P ] = ds_c_p ; ds -> mMakeOutput [ NE_DS_METHOD_C_P ] =
ds_output_c_p ; ds -> mMethods [ NE_DS_METHOD_C ] = stub_method ; ds ->
mMakeOutput [ NE_DS_METHOD_C ] = ds_output_c ; ds -> mMethods [
NE_DS_METHOD_F ] = ds_f ; ds -> mMakeOutput [ NE_DS_METHOD_F ] = ds_output_f
; ds -> mMethods [ NE_DS_METHOD_VMF ] = ds_vmf ; ds -> mMakeOutput [
NE_DS_METHOD_VMF ] = ds_output_vmf ; ds -> mMethods [ NE_DS_METHOD_SLF ] =
ds_slf ; ds -> mMakeOutput [ NE_DS_METHOD_SLF ] = ds_output_slf ; ds ->
mMethods [ NE_DS_METHOD_DXF_P ] = ds_dxf_p ; ds -> mMakeOutput [
NE_DS_METHOD_DXF_P ] = ds_output_dxf_p ; ds -> mMethods [ NE_DS_METHOD_DXF ]
= ds_dxf ; ds -> mMakeOutput [ NE_DS_METHOD_DXF ] = ds_output_dxf ; ds ->
mMethods [ NE_DS_METHOD_DUF_P ] = ds_duf_p ; ds -> mMakeOutput [
NE_DS_METHOD_DUF_P ] = ds_output_duf_p ; ds -> mMethods [ NE_DS_METHOD_DUF ]
= stub_method ; ds -> mMakeOutput [ NE_DS_METHOD_DUF ] = ds_output_duf ; ds
-> mMethods [ NE_DS_METHOD_DTF_P ] = ds_dtf_p ; ds -> mMakeOutput [
NE_DS_METHOD_DTF_P ] = ds_output_dtf_p ; ds -> mMethods [ NE_DS_METHOD_DTF ]
= stub_method ; ds -> mMakeOutput [ NE_DS_METHOD_DTF ] = ds_output_dtf ; ds
-> mMethods [ NE_DS_METHOD_DDF_P ] = ds_ddf_p ; ds -> mMakeOutput [
NE_DS_METHOD_DDF_P ] = ds_output_ddf_p ; ds -> mMethods [ NE_DS_METHOD_DDF ]
= stub_method ; ds -> mMakeOutput [ NE_DS_METHOD_DDF ] = ds_output_ddf ; ds
-> mMethods [ NE_DS_METHOD_TDUF_P ] = ds_tduf_p ; ds -> mMakeOutput [
NE_DS_METHOD_TDUF_P ] = ds_output_tduf_p ; ds -> mMethods [
NE_DS_METHOD_TDXF_P ] = ds_tdxf_p ; ds -> mMakeOutput [ NE_DS_METHOD_TDXF_P ]
= ds_output_tdxf_p ; ds -> mMethods [ NE_DS_METHOD_Y ] = ds_y ; ds ->
mMakeOutput [ NE_DS_METHOD_Y ] = ds_output_y ; ds -> mMethods [
NE_DS_METHOD_DXY_P ] = ds_dxy_p ; ds -> mMakeOutput [ NE_DS_METHOD_DXY_P ] =
ds_output_dxy_p ; ds -> mMethods [ NE_DS_METHOD_DXY ] = ds_dxy ; ds ->
mMakeOutput [ NE_DS_METHOD_DXY ] = ds_output_dxy ; ds -> mMethods [
NE_DS_METHOD_DUY_P ] = ds_duy_p ; ds -> mMakeOutput [ NE_DS_METHOD_DUY_P ] =
ds_output_duy_p ; ds -> mMethods [ NE_DS_METHOD_DUY ] = stub_method ; ds ->
mMakeOutput [ NE_DS_METHOD_DUY ] = ds_output_duy ; ds -> mMethods [
NE_DS_METHOD_DTY_P ] = ds_dty_p ; ds -> mMakeOutput [ NE_DS_METHOD_DTY_P ] =
ds_output_dty_p ; ds -> mMethods [ NE_DS_METHOD_DTY ] = stub_method ; ds ->
mMakeOutput [ NE_DS_METHOD_DTY ] = ds_output_dty ; ds -> mMethods [
NE_DS_METHOD_MODE ] = ds_mode ; ds -> mMakeOutput [ NE_DS_METHOD_MODE ] =
ds_output_mode ; ds -> mMethods [ NE_DS_METHOD_ZC ] = ds_zc ; ds ->
mMakeOutput [ NE_DS_METHOD_ZC ] = ds_output_zc ; ds -> mMethods [
NE_DS_METHOD_CACHE ] = stub_method ; ds -> mMakeOutput [ NE_DS_METHOD_CACHE ]
= ds_output_cache ; ds -> mMethods [ NE_DS_METHOD_UPDATE_R ] = stub_method ;
ds -> mMakeOutput [ NE_DS_METHOD_UPDATE_R ] = ds_output_update_r ; ds ->
mMethods [ NE_DS_METHOD_UPDATE_I ] = stub_method ; ds -> mMakeOutput [
NE_DS_METHOD_UPDATE_I ] = ds_output_update_i ; ds -> mMethods [
NE_DS_METHOD_SFO ] = stub_method ; ds -> mMakeOutput [ NE_DS_METHOD_SFO ] =
ds_output_sfo ; ds -> mMethods [ NE_DS_METHOD_SFP ] = stub_method ; ds ->
mMakeOutput [ NE_DS_METHOD_SFP ] = ds_output_sfp ; ds -> mMethods [
NE_DS_METHOD_INIT_R ] = stub_method ; ds -> mMakeOutput [ NE_DS_METHOD_INIT_R
] = ds_output_init_r ; ds -> mMethods [ NE_DS_METHOD_INIT_I ] = stub_method ;
ds -> mMakeOutput [ NE_DS_METHOD_INIT_I ] = ds_output_init_i ; ds -> mMethods
[ NE_DS_METHOD_R ] = ds_r ; ds -> mMakeOutput [ NE_DS_METHOD_R ] =
ds_output_r ; ds -> mMethods [ NE_DS_METHOD_LOG ] = stub_method ; ds ->
mMakeOutput [ NE_DS_METHOD_LOG ] = ds_output_log ; ds -> mMethods [
NE_DS_METHOD_ASSERT ] = ds_assert ; ds -> mMakeOutput [ NE_DS_METHOD_ASSERT ]
= ds_output_assert ; ds -> mMethods [ NE_DS_METHOD_DEL_T ] = stub_method ; ds
-> mMakeOutput [ NE_DS_METHOD_DEL_T ] = ds_output_del_t ; ds -> mMethods [
NE_DS_METHOD_DEL_V ] = stub_method ; ds -> mMakeOutput [ NE_DS_METHOD_DEL_V ]
= ds_output_del_v ; ds -> mMethods [ NE_DS_METHOD_DEL_V0 ] = stub_method ; ds
-> mMakeOutput [ NE_DS_METHOD_DEL_V0 ] = ds_output_del_v0 ; ds -> mMethods [
NE_DS_METHOD_DEL_TMAX ] = stub_method ; ds -> mMakeOutput [
NE_DS_METHOD_DEL_TMAX ] = ds_output_del_tmax ; ds -> mMethods [
NE_DS_METHOD_DXDELT_P ] = stub_method ; ds -> mMakeOutput [
NE_DS_METHOD_DXDELT_P ] = ds_output_dxdelt_p ; ds -> mMethods [
NE_DS_METHOD_DXDELT ] = stub_method ; ds -> mMakeOutput [ NE_DS_METHOD_DXDELT
] = ds_output_dxdelt ; ds -> mMethods [ NE_DS_METHOD_DUDELT_P ] = stub_method
; ds -> mMakeOutput [ NE_DS_METHOD_DUDELT_P ] = ds_output_dudelt_p ; ds ->
mMethods [ NE_DS_METHOD_DUDELT ] = stub_method ; ds -> mMakeOutput [
NE_DS_METHOD_DUDELT ] = ds_output_dudelt ; ds -> mMethods [
NE_DS_METHOD_DTDELT_P ] = stub_method ; ds -> mMakeOutput [
NE_DS_METHOD_DTDELT_P ] = ds_output_dtdelt_p ; ds -> mMethods [
NE_DS_METHOD_DTDELT ] = stub_method ; ds -> mMakeOutput [ NE_DS_METHOD_DTDELT
] = ds_output_dtdelt ; ds -> mEquationData = s_equation_data ; ds ->
mVariableData = s_variable_data ; ds -> mDiscreteData = s_discrete_data ; ds
-> mMajorModeData = s_major_mode_data ; ds -> mZCData = s_zc_data ; ds ->
mRanges = s_range ; ds -> mAssertData = s_assert_data ; ds -> mAssertRanges =
s_assert_range ; ds -> mEquationRanges = s_equation_range ; return (
NeDynamicSystem * ) _ds ; }
