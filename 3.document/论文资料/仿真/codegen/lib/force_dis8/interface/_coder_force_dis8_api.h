/*
 * File: _coder_force_dis8_api.h
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 08-Oct-2019 08:52:54
 */

#ifndef _CODER_FORCE_DIS8_API_H
#define _CODER_FORCE_DIS8_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_force_dis8_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern void force_dis8(real_T FALL[3], real_T TALL[3], real_T Fp[2], real_T PC[3],
  real_T P1[3], real_T P2[3], real_T P3[3], real_T P4[3], char_T G[4], real_T W
  [2], real_T F1c[3], real_T F2c[3], real_T F3c[3], real_T F4c[3], real_T F[3],
  real_T T[3], real_T *detA);
extern void force_dis8_api(const mxArray * const prhs[10], int32_T nlhs, const
  mxArray *plhs[7]);
extern void force_dis8_atexit(void);
extern void force_dis8_initialize(void);
extern void force_dis8_terminate(void);
extern void force_dis8_xil_terminate(void);

#endif

/*
 * File trailer for _coder_force_dis8_api.h
 *
 * [EOF]
 */
