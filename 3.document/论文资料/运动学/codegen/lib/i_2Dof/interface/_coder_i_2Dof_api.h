/*
 * File: _coder_i_2Dof_api.h
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 15-Dec-2019 11:34:58
 */

#ifndef _CODER_I_2DOF_API_H
#define _CODER_I_2DOF_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_i_2Dof_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern void i_2Dof(real32_T x, real32_T y, real32_T Param[6], real_T *Alpha1,
                   real_T *Alpha2);
extern void i_2Dof_api(const mxArray * const prhs[3], int32_T nlhs, const
  mxArray *plhs[2]);
extern void i_2Dof_atexit(void);
extern void i_2Dof_initialize(void);
extern void i_2Dof_terminate(void);
extern void i_2Dof_xil_terminate(void);

#endif

/*
 * File trailer for _coder_i_2Dof_api.h
 *
 * [EOF]
 */
