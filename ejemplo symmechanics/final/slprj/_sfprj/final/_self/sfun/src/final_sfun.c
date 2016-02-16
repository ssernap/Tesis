/* Include files */

#include "final_sfun.h"
#include "final_sfun_debug_macros.h"
#include "c1_final.h"
#include "c2_final.h"
#include "c3_final.h"
#include "c4_final.h"
#include "c5_final.h"
#include "c6_final.h"
#include "c7_final.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
uint32_T _finalMachineNumber_;

/* Function Declarations */

/* Function Definitions */
void final_initializer(void)
{
}

void final_terminator(void)
{
}

/* SFunction Glue Code */
unsigned int sf_final_method_dispatcher(SimStruct *simstructPtr, unsigned int
  chartFileNumber, const char* specsCksum, int_T method, void *data)
{
  if (chartFileNumber==1) {
    c1_final_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==2) {
    c2_final_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==3) {
    c3_final_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==4) {
    c4_final_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==5) {
    c5_final_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==6) {
    c6_final_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==7) {
    c7_final_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  return 0;
}

unsigned int sf_final_process_check_sum_call( int nlhs, mxArray * plhs[], int
  nrhs, const mxArray * prhs[] )
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
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2081063309U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2487629104U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2770419750U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3562291272U);
    } else if (!strcmp(commandName,"exportedFcn")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(0U);
    } else if (!strcmp(commandName,"makefile")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2302304062U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3823988585U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1233943594U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2405671348U);
    } else if (nrhs==3 && !strcmp(commandName,"chart")) {
      unsigned int chartFileNumber;
      chartFileNumber = (unsigned int)mxGetScalar(prhs[2]);
      switch (chartFileNumber) {
       case 1:
        {
          extern void sf_c1_final_get_check_sum(mxArray *plhs[]);
          sf_c1_final_get_check_sum(plhs);
          break;
        }

       case 2:
        {
          extern void sf_c2_final_get_check_sum(mxArray *plhs[]);
          sf_c2_final_get_check_sum(plhs);
          break;
        }

       case 3:
        {
          extern void sf_c3_final_get_check_sum(mxArray *plhs[]);
          sf_c3_final_get_check_sum(plhs);
          break;
        }

       case 4:
        {
          extern void sf_c4_final_get_check_sum(mxArray *plhs[]);
          sf_c4_final_get_check_sum(plhs);
          break;
        }

       case 5:
        {
          extern void sf_c5_final_get_check_sum(mxArray *plhs[]);
          sf_c5_final_get_check_sum(plhs);
          break;
        }

       case 6:
        {
          extern void sf_c6_final_get_check_sum(mxArray *plhs[]);
          sf_c6_final_get_check_sum(plhs);
          break;
        }

       case 7:
        {
          extern void sf_c7_final_get_check_sum(mxArray *plhs[]);
          sf_c7_final_get_check_sum(plhs);
          break;
        }

       default:
        ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(0.0);
      }
    } else if (!strcmp(commandName,"target")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2083502392U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1110276785U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3258378658U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3926592909U);
    } else {
      return 0;
    }
  } else {
    ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(4267768606U);
    ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1925807585U);
    ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2613405950U);
    ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1958913457U);
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_final_autoinheritance_info( int nlhs, mxArray * plhs[], int nrhs,
  const mxArray * prhs[] )
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
        if (strcmp(aiChksum, "E374q1otmG39wguZX9jXpE") == 0) {
          extern mxArray *sf_c1_final_get_autoinheritance_info(void);
          plhs[0] = sf_c1_final_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 2:
      {
        if (strcmp(aiChksum, "HkqP7PIqWycTRzEh3xzhlF") == 0) {
          extern mxArray *sf_c2_final_get_autoinheritance_info(void);
          plhs[0] = sf_c2_final_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 3:
      {
        if (strcmp(aiChksum, "0iytrghZhg92Sv7MPj2QS") == 0) {
          extern mxArray *sf_c3_final_get_autoinheritance_info(void);
          plhs[0] = sf_c3_final_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 4:
      {
        if (strcmp(aiChksum, "HkqP7PIqWycTRzEh3xzhlF") == 0) {
          extern mxArray *sf_c4_final_get_autoinheritance_info(void);
          plhs[0] = sf_c4_final_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 5:
      {
        if (strcmp(aiChksum, "hp9L1IIEUkVg3cRlvcBB4C") == 0) {
          extern mxArray *sf_c5_final_get_autoinheritance_info(void);
          plhs[0] = sf_c5_final_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 6:
      {
        if (strcmp(aiChksum, "HkqP7PIqWycTRzEh3xzhlF") == 0) {
          extern mxArray *sf_c6_final_get_autoinheritance_info(void);
          plhs[0] = sf_c6_final_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 7:
      {
        if (strcmp(aiChksum, "qMONukxOjU4GztYZeAJkeG") == 0) {
          extern mxArray *sf_c7_final_get_autoinheritance_info(void);
          plhs[0] = sf_c7_final_get_autoinheritance_info();
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

unsigned int sf_final_get_eml_resolved_functions_info( int nlhs, mxArray * plhs[],
  int nrhs, const mxArray * prhs[] )
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
        extern const mxArray *sf_c1_final_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c1_final_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 2:
      {
        extern const mxArray *sf_c2_final_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c2_final_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 3:
      {
        extern const mxArray *sf_c3_final_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c3_final_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 4:
      {
        extern const mxArray *sf_c4_final_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c4_final_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 5:
      {
        extern const mxArray *sf_c5_final_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c5_final_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 6:
      {
        extern const mxArray *sf_c6_final_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c6_final_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 7:
      {
        extern const mxArray *sf_c7_final_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c7_final_get_eml_resolved_functions_info();
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

unsigned int sf_final_third_party_uses_info( int nlhs, mxArray * plhs[], int
  nrhs, const mxArray * prhs[] )
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
        if (strcmp(tpChksum, "S99ZO6lx5eeQXDDQuFihL") == 0) {
          extern mxArray *sf_c1_final_third_party_uses_info(void);
          plhs[0] = sf_c1_final_third_party_uses_info();
          break;
        }
      }

     case 2:
      {
        if (strcmp(tpChksum, "rZ2GTq5RvzsZEI7MUtIgi") == 0) {
          extern mxArray *sf_c2_final_third_party_uses_info(void);
          plhs[0] = sf_c2_final_third_party_uses_info();
          break;
        }
      }

     case 3:
      {
        if (strcmp(tpChksum, "awRj7PlwTixmelzFQxNKPH") == 0) {
          extern mxArray *sf_c3_final_third_party_uses_info(void);
          plhs[0] = sf_c3_final_third_party_uses_info();
          break;
        }
      }

     case 4:
      {
        if (strcmp(tpChksum, "rZ2GTq5RvzsZEI7MUtIgi") == 0) {
          extern mxArray *sf_c4_final_third_party_uses_info(void);
          plhs[0] = sf_c4_final_third_party_uses_info();
          break;
        }
      }

     case 5:
      {
        if (strcmp(tpChksum, "RhiYhEe6xFZ1bfZCisHbvD") == 0) {
          extern mxArray *sf_c5_final_third_party_uses_info(void);
          plhs[0] = sf_c5_final_third_party_uses_info();
          break;
        }
      }

     case 6:
      {
        if (strcmp(tpChksum, "rZ2GTq5RvzsZEI7MUtIgi") == 0) {
          extern mxArray *sf_c6_final_third_party_uses_info(void);
          plhs[0] = sf_c6_final_third_party_uses_info();
          break;
        }
      }

     case 7:
      {
        if (strcmp(tpChksum, "EXFfLFZFsSTHRVpUJL0EpD") == 0) {
          extern mxArray *sf_c7_final_third_party_uses_info(void);
          plhs[0] = sf_c7_final_third_party_uses_info();
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

unsigned int sf_final_updateBuildInfo_args_info( int nlhs, mxArray * plhs[], int
  nrhs, const mxArray * prhs[] )
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
        if (strcmp(tpChksum, "S99ZO6lx5eeQXDDQuFihL") == 0) {
          extern mxArray *sf_c1_final_updateBuildInfo_args_info(void);
          plhs[0] = sf_c1_final_updateBuildInfo_args_info();
          break;
        }
      }

     case 2:
      {
        if (strcmp(tpChksum, "rZ2GTq5RvzsZEI7MUtIgi") == 0) {
          extern mxArray *sf_c2_final_updateBuildInfo_args_info(void);
          plhs[0] = sf_c2_final_updateBuildInfo_args_info();
          break;
        }
      }

     case 3:
      {
        if (strcmp(tpChksum, "awRj7PlwTixmelzFQxNKPH") == 0) {
          extern mxArray *sf_c3_final_updateBuildInfo_args_info(void);
          plhs[0] = sf_c3_final_updateBuildInfo_args_info();
          break;
        }
      }

     case 4:
      {
        if (strcmp(tpChksum, "rZ2GTq5RvzsZEI7MUtIgi") == 0) {
          extern mxArray *sf_c4_final_updateBuildInfo_args_info(void);
          plhs[0] = sf_c4_final_updateBuildInfo_args_info();
          break;
        }
      }

     case 5:
      {
        if (strcmp(tpChksum, "RhiYhEe6xFZ1bfZCisHbvD") == 0) {
          extern mxArray *sf_c5_final_updateBuildInfo_args_info(void);
          plhs[0] = sf_c5_final_updateBuildInfo_args_info();
          break;
        }
      }

     case 6:
      {
        if (strcmp(tpChksum, "rZ2GTq5RvzsZEI7MUtIgi") == 0) {
          extern mxArray *sf_c6_final_updateBuildInfo_args_info(void);
          plhs[0] = sf_c6_final_updateBuildInfo_args_info();
          break;
        }
      }

     case 7:
      {
        if (strcmp(tpChksum, "EXFfLFZFsSTHRVpUJL0EpD") == 0) {
          extern mxArray *sf_c7_final_updateBuildInfo_args_info(void);
          plhs[0] = sf_c7_final_updateBuildInfo_args_info();
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

void final_debug_initialize(struct SfDebugInstanceStruct* debugInstance)
{
  _finalMachineNumber_ = sf_debug_initialize_machine(debugInstance,"final",
    "sfun",0,7,0,0,0);
  sf_debug_set_machine_event_thresholds(debugInstance,_finalMachineNumber_,0,0);
  sf_debug_set_machine_data_thresholds(debugInstance,_finalMachineNumber_,0);
}

void final_register_exported_symbols(SimStruct* S)
{
}

static mxArray* sRtwOptimizationInfoStruct= NULL;
mxArray* load_final_optimization_info(void)
{
  if (sRtwOptimizationInfoStruct==NULL) {
    sRtwOptimizationInfoStruct = sf_load_rtw_optimization_info("final", "final");
    mexMakeArrayPersistent(sRtwOptimizationInfoStruct);
  }

  return(sRtwOptimizationInfoStruct);
}

void unload_final_optimization_info(void)
{
  if (sRtwOptimizationInfoStruct!=NULL) {
    mxDestroyArray(sRtwOptimizationInfoStruct);
    sRtwOptimizationInfoStruct = NULL;
  }
}
