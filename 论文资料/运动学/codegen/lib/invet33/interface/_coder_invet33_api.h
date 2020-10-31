/*
 * File: _coder_invet33_api.h
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 11-Feb-2020 19:27:32
 */

#ifndef _CODER_INVET33_API_H
#define _CODER_INVET33_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_invet33_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern void invet33(real32_T A[4], real32_T *dA, real32_T inA[4]);
extern void invet33_api(const mxArray * const prhs[1], int32_T nlhs, const
  mxArray *plhs[2]);
extern void invet33_atexit(void);
extern void invet33_initialize(void);
extern void invet33_terminate(void);
extern void invet33_xil_terminate(void);

#endif

/*
 * File trailer for _coder_invet33_api.h
 *
 * [EOF]
 */
