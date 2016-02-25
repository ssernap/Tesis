/* Include files */

#include "friccion_aislada_esferica_estatica_sfun.h"
#include "friccion_aislada_esferica_estatica_sfun_debug_macros.h"
#include "c1_friccion_aislada_esferica_estatica.h"
#include "c2_friccion_aislada_esferica_estatica.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
uint32_T _friccion_aislada_esferica_estaticaMachineNumber_;

/* Function Declarations */

/* Function Definitions */
void friccion_aislada_esferica_estatica_initializer(void)
{
}

void friccion_aislada_esferica_estatica_terminator(void)
{
}

/* SFunction Glue Code */
unsigned int sf_friccion_aislada_esferica_estatica_method_dispatcher(SimStruct
  *simstructPtr, unsigned int chartFileNumber, const char* specsCksum, int_T
  method, void *data)
{
  if (chartFileNumber==1) {
    c1_friccion_aislada_esferica_estatica_method_dispatcher(simstructPtr, method,
      data);
    return 1;
  }

  if (chartFileNumber==2) {
    c2_friccion_aislada_esferica_estatica_method_dispatcher(simstructPtr, method,
      data);
    return 1;
  }

  return 0;
}

unsigned int sf_friccion_aislada_esferica_estatica_process_testpoint_info_call
  ( int nlhs, mxArray * plhs[], int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[32];
  char machineName[128];
  if (nrhs < 3 || !mxIsChar(prhs[0]) || !mxIsChar(prhs[1]))
    return 0;

  /* Possible call to get testpoint info. */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_testpoint_info"))
    return 0;
  mxGetString(prhs[1], machineName, sizeof(machineName)/sizeof(char));
  machineName[(sizeof(machineName)/sizeof(char)-1)] = '\0';
  if (!strcmp(machineName, "friccion_aislada_esferica_estatica")) {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[2]);
    switch (chartFileNumber) {
     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }

    return 1;
  }

  return 0;

#else

  return 0;

#endif

}

unsigned int sf_friccion_aislada_esferica_estatica_process_check_sum_call( int
  nlhs, mxArray * plhs[], int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[20];
  if (nrhs<1 || !mxIsChar(prhs[0]) )
    return 0;

  /* Possible call to get the checksum */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"sf_get_check_sum"))
    return 0;
  plhs[0] = mxCreateDoubleMatrix( 1,4,mxREAL);
  if (nrhs>1 && mxIsChar(prhs[1])) {
    mxGetString(prhs[1], commandName,sizeof(commandName)/sizeof(char));
    commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
    if (!strcmp(commandName,"machine")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3013717207U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2024919640U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3649672168U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(72404963U);
    } else if (!strcmp(commandName,"exportedFcn")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(0U);
    } else if (!strcmp(commandName,"makefile")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2844726599U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2572081246U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(284924891U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1693959864U);
    } else if (nrhs==3 && !strcmp(commandName,"chart")) {
      unsigned int chartFileNumber;
      chartFileNumber = (unsigned int)mxGetScalar(prhs[2]);
      switch (chartFileNumber) {
       case 1:
        {
          extern void sf_c1_friccion_aislada_esferica_estatica_get_check_sum
            (mxArray *plhs[]);
          sf_c1_friccion_aislada_esferica_estatica_get_check_sum(plhs);
          break;
        }

       case 2:
        {
          extern void sf_c2_friccion_aislada_esferica_estatica_get_check_sum
            (mxArray *plhs[]);
          sf_c2_friccion_aislada_esferica_estatica_get_check_sum(plhs);
          break;
        }

       default:
        ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(0.0);
      }
    } else if (!strcmp(commandName,"target")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3084158392U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2524169757U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2812955680U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(245732821U);
    } else {
      return 0;
    }
  } else {
    ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(222020237U);
    ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1959287888U);
    ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2443742202U);
    ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(922218037U);
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_friccion_aislada_esferica_estatica_autoinheritance_info( int
  nlhs, mxArray * plhs[], int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[32];
  char aiChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]) )
    return 0;

  /* Possible call to get the autoinheritance_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_autoinheritance_info"))
    return 0;
  mxGetString(prhs[2], aiChksum,sizeof(aiChksum)/sizeof(char));
  aiChksum[(sizeof(aiChksum)/sizeof(char)-1)] = '\0';

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 1:
      {
        if (strcmp(aiChksum, "uf2W7F7qMEXZeXFYr2RLuF") == 0) {
          extern mxArray
            *sf_c1_friccion_aislada_esferica_estatica_get_autoinheritance_info
            (void);
          plhs[0] =
            sf_c1_friccion_aislada_esferica_estatica_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 2:
      {
        if (strcmp(aiChksum, "6Tf78uFmf2h4g2raXBwNsE") == 0) {
          extern mxArray
            *sf_c2_friccion_aislada_esferica_estatica_get_autoinheritance_info
            (void);
          plhs[0] =
            sf_c2_friccion_aislada_esferica_estatica_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int
  sf_friccion_aislada_esferica_estatica_get_eml_resolved_functions_info( int
  nlhs, mxArray * plhs[], int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[64];
  if (nrhs<2 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the get_eml_resolved_functions_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_eml_resolved_functions_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 1:
      {
        extern const mxArray
          *sf_c1_friccion_aislada_esferica_estatica_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c1_friccion_aislada_esferica_estatica_get_eml_resolved_functions_info
          ();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 2:
      {
        extern const mxArray
          *sf_c2_friccion_aislada_esferica_estatica_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c2_friccion_aislada_esferica_estatica_get_eml_resolved_functions_info
          ();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_friccion_aislada_esferica_estatica_third_party_uses_info( int
  nlhs, mxArray * plhs[], int nrhs, const mxArray * prhs[] )
{
  char commandName[64];
  char tpChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the third_party_uses_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  mxGetString(prhs[2], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_third_party_uses_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 1:
      {
        if (strcmp(tpChksum, "hNjQPxEKnowomHGTm41iAG") == 0) {
          extern mxArray
            *sf_c1_friccion_aislada_esferica_estatica_third_party_uses_info(void);
          plhs[0] =
            sf_c1_friccion_aislada_esferica_estatica_third_party_uses_info();
          break;
        }
      }

     case 2:
      {
        if (strcmp(tpChksum, "s9f4sGitVTea9dFnF68GZF") == 0) {
          extern mxArray
            *sf_c2_friccion_aislada_esferica_estatica_third_party_uses_info(void);
          plhs[0] =
            sf_c2_friccion_aislada_esferica_estatica_third_party_uses_info();
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

unsigned int sf_friccion_aislada_esferica_estatica_updateBuildInfo_args_info
  ( int nlhs, mxArray * plhs[], int nrhs, const mxArray * prhs[] )
{
  char commandName[64];
  char tpChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the updateBuildInfo_args_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  mxGetString(prhs[2], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_updateBuildInfo_args_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 1:
      {
        if (strcmp(tpChksum, "hNjQPxEKnowomHGTm41iAG") == 0) {
          extern mxArray
            *sf_c1_friccion_aislada_esferica_estatica_updateBuildInfo_args_info
            (void);
          plhs[0] =
            sf_c1_friccion_aislada_esferica_estatica_updateBuildInfo_args_info();
          break;
        }
      }

     case 2:
      {
        if (strcmp(tpChksum, "s9f4sGitVTea9dFnF68GZF") == 0) {
          extern mxArray
            *sf_c2_friccion_aislada_esferica_estatica_updateBuildInfo_args_info
            (void);
          plhs[0] =
            sf_c2_friccion_aislada_esferica_estatica_updateBuildInfo_args_info();
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

void friccion_aislada_esferica_estatica_debug_initialize(struct
  SfDebugInstanceStruct* debugInstance)
{
  _friccion_aislada_esferica_estaticaMachineNumber_ =
    sf_debug_initialize_machine(debugInstance,
    "friccion_aislada_esferica_estatica","sfun",0,2,0,0,0);
  sf_debug_set_machine_event_thresholds(debugInstance,
    _friccion_aislada_esferica_estaticaMachineNumber_,0,0);
  sf_debug_set_machine_data_thresholds(debugInstance,
    _friccion_aislada_esferica_estaticaMachineNumber_,0);
}

void friccion_aislada_esferica_estatica_register_exported_symbols(SimStruct* S)
{
}

static mxArray* sRtwOptimizationInfoStruct= NULL;
mxArray* load_friccion_aislada_esferica_estatica_optimization_info(void)
{
  if (sRtwOptimizationInfoStruct==NULL) {
    sRtwOptimizationInfoStruct = sf_load_rtw_optimization_info(
      "friccion_aislada_esferica_estatica", "friccion_aislada_esferica_estatica");
    mexMakeArrayPersistent(sRtwOptimizationInfoStruct);
  }

  return(sRtwOptimizationInfoStruct);
}

void unload_friccion_aislada_esferica_estatica_optimization_info(void)
{
  if (sRtwOptimizationInfoStruct!=NULL) {
    mxDestroyArray(sRtwOptimizationInfoStruct);
    sRtwOptimizationInfoStruct = NULL;
  }
}
