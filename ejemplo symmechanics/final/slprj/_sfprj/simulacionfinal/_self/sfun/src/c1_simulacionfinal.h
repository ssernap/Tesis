#ifndef __c1_simulacionfinal_h__
#define __c1_simulacionfinal_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc1_simulacionfinalInstanceStruct
#define typedef_SFc1_simulacionfinalInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c1_sfEvent;
  boolean_T c1_isStable;
  boolean_T c1_doneDoubleBufferReInit;
  uint8_T c1_is_active_c1_simulacionfinal;
} SFc1_simulacionfinalInstanceStruct;

#endif                                 /*typedef_SFc1_simulacionfinalInstanceStruct*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c1_simulacionfinal_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c1_simulacionfinal_get_check_sum(mxArray *plhs[]);
extern void c1_simulacionfinal_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
