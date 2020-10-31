/*
 * File: _coder_force_dis8_mex.c
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 08-Oct-2019 08:52:54
 */

/* Include Files */
#include "_coder_force_dis8_api.h"
#include "_coder_force_dis8_mex.h"

/* Function Declarations */
static void force_dis8_mexFunction(int32_T nlhs, mxArray *plhs[7], int32_T nrhs,
  const mxArray *prhs[10]);

/* Function Definitions */

/*
 * Arguments    : int32_T nlhs
 *                mxArray *plhs[7]
 *                int32_T nrhs
 *                const mxArray *prhs[10]
 * Return Type  : void
 */
static void force_dis8_mexFunction(int32_T nlhs, mxArray *plhs[7], int32_T nrhs,
  const mxArray *prhs[10])
{
  const mxArray *outputs[7];
  int32_T b_nlhs;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 10) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 10, 4,
                        10, "force_dis8");
  }

  if (nlhs > 7) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 10,
                        "force_dis8");
  }

  /* Call the function. */
  force_dis8_api(prhs, nlhs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  force_dis8_terminate();
}

/*
 * Arguments    : int32_T nlhs
 *                mxArray * const plhs[]
 *                int32_T nrhs
 *                const mxArray * const prhs[]
 * Return Type  : void
 */
void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  mexAtExit(force_dis8_atexit);

  /* Initialize the memory manager. */
  /* Module initialization. */
  force_dis8_initialize();

  /* Dispatch the entry-point. */
  force_dis8_mexFunction(nlhs, plhs, nrhs, prhs);
}

/*
 * Arguments    : void
 * Return Type  : emlrtCTX
 */
emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/*
 * File trailer for _coder_force_dis8_mex.c
 *
 * [EOF]
 */
