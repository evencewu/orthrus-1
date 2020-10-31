/*
 * File: _coder_f_2Dof_api.h
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 01-Jan-2020 14:37:33
 */

#ifndef _CODER_F_2DOF_API_H
#define _CODER_F_2DOF_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_f_2Dof_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern void f_2Dof(real32_T Alpha1, real32_T Alpha2, real32_T Param[6], real32_T
                   *Xe, real32_T *Ye);
extern void f_2Dof_api(const mxArray * const prhs[3], int32_T nlhs, const
  mxArray *plhs[2]);
extern void f_2Dof_atexit(void);
extern void f_2Dof_initialize(void);
extern void f_2Dof_terminate(void);
extern void f_2Dof_xil_terminate(void);

#endif

/*
 * File trailer for _coder_f_2Dof_api.h
 *
 * [EOF]
 */
