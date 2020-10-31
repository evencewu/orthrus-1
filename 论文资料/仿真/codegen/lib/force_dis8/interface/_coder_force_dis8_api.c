/*
 * File: _coder_force_dis8_api.c
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 08-Oct-2019 08:52:54
 */

/* Include Files */
#include "tmwtypes.h"
#include "_coder_force_dis8_api.h"
#include "_coder_force_dis8_mex.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
emlrtContext emlrtContextGlobal = { true,/* bFirstTime */
  false,                               /* bInitialized */
  131466U,                             /* fVersionInfo */
  NULL,                                /* fErrorFunction */
  "force_dis8",                        /* fFunctionName */
  NULL,                                /* fRTCallStack */
  false,                               /* bDebugMode */
  { 2045744189U, 2170104910U, 2743257031U, 4284093946U },/* fSigWrd */
  NULL                                 /* fSigMem */
};

/* Function Declarations */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[3];
static const mxArray *b_emlrt_marshallOut(const real_T u);
static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Fp,
  const char_T *identifier))[2];
static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[2];
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *G, const
  char_T *identifier, char_T y[4]);
static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *FALL,
  const char_T *identifier))[3];
static const mxArray *emlrt_marshallOut(const real_T u[3]);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[4]);
static real_T (*g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[3];
static real_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[2];
static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[4]);

/* Function Definitions */

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : real_T (*)[3]
 */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[3]
{
  real_T (*y)[3];
  y = g_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
/*
 * Arguments    : const real_T u
 * Return Type  : const mxArray *
 */
  static const mxArray *b_emlrt_marshallOut(const real_T u)
{
  const mxArray *y;
  const mxArray *m1;
  y = NULL;
  m1 = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m1);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *Fp
 *                const char_T *identifier
 * Return Type  : real_T (*)[2]
 */
static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Fp,
  const char_T *identifier))[2]
{
  real_T (*y)[2];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(Fp), &thisId);
  emlrtDestroyArray(&Fp);
  return y;
}
/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : real_T (*)[2]
 */
  static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[2]
{
  real_T (*y)[2];
  y = h_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *G
 *                const char_T *identifier
 *                char_T y[4]
 * Return Type  : void
 */
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *G, const
  char_T *identifier, char_T y[4])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  f_emlrt_marshallIn(sp, emlrtAlias(G), &thisId, y);
  emlrtDestroyArray(&G);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *FALL
 *                const char_T *identifier
 * Return Type  : real_T (*)[3]
 */
static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *FALL,
  const char_T *identifier))[3]
{
  real_T (*y)[3];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(FALL), &thisId);
  emlrtDestroyArray(&FALL);
  return y;
}
/*
 * Arguments    : const real_T u[3]
 * Return Type  : const mxArray *
 */
  static const mxArray *emlrt_marshallOut(const real_T u[3])
{
  const mxArray *y;
  const mxArray *m0;
  static const int32_T iv0[2] = { 0, 0 };

  static const int32_T iv1[2] = { 1, 3 };

  y = NULL;
  m0 = emlrtCreateNumericArray(2, iv0, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m0, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m0, iv1, 2);
  emlrtAssign(&y, m0);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 *                char_T y[4]
 * Return Type  : void
 */
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[4])
{
  i_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 * Return Type  : real_T (*)[3]
 */
static real_T (*g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[3]
{
  real_T (*ret)[3];
  static const int32_T dims[2] = { 1, 3 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  ret = (real_T (*)[3])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 * Return Type  : real_T (*)[2]
 */
  static real_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[2]
{
  real_T (*ret)[2];
  static const int32_T dims[2] = { 1, 2 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  ret = (real_T (*)[2])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 *                char_T ret[4]
 * Return Type  : void
 */
static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[4])
{
  static const int32_T dims[2] = { 1, 4 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "char", false, 2U, dims);
  emlrtImportCharArrayR2015b(sp, src, &ret[0], 4);
  emlrtDestroyArray(&src);
}

/*
 * Arguments    : const mxArray * const prhs[10]
 *                int32_T nlhs
 *                const mxArray *plhs[7]
 * Return Type  : void
 */
void force_dis8_api(const mxArray * const prhs[10], int32_T nlhs, const mxArray *
                    plhs[7])
{
  real_T (*F1c)[3];
  real_T (*F2c)[3];
  real_T (*F3c)[3];
  real_T (*F4c)[3];
  real_T (*F)[3];
  real_T (*T)[3];
  real_T (*FALL)[3];
  real_T (*TALL)[3];
  real_T (*Fp)[2];
  real_T (*PC)[3];
  real_T (*P1)[3];
  real_T (*P2)[3];
  real_T (*P3)[3];
  real_T (*P4)[3];
  char_T G[4];
  real_T (*W)[2];
  real_T detA;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  F1c = (real_T (*)[3])mxMalloc(sizeof(real_T [3]));
  F2c = (real_T (*)[3])mxMalloc(sizeof(real_T [3]));
  F3c = (real_T (*)[3])mxMalloc(sizeof(real_T [3]));
  F4c = (real_T (*)[3])mxMalloc(sizeof(real_T [3]));
  F = (real_T (*)[3])mxMalloc(sizeof(real_T [3]));
  T = (real_T (*)[3])mxMalloc(sizeof(real_T [3]));

  /* Marshall function inputs */
  FALL = emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "FALL");
  TALL = emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "TALL");
  Fp = c_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "Fp");
  PC = emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "PC");
  P1 = emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "P1");
  P2 = emlrt_marshallIn(&st, emlrtAlias(prhs[5]), "P2");
  P3 = emlrt_marshallIn(&st, emlrtAlias(prhs[6]), "P3");
  P4 = emlrt_marshallIn(&st, emlrtAlias(prhs[7]), "P4");
  e_emlrt_marshallIn(&st, emlrtAliasP(prhs[8]), "G", G);
  W = c_emlrt_marshallIn(&st, emlrtAlias(prhs[9]), "W");

  /* Invoke the target function */
  force_dis8(*FALL, *TALL, *Fp, *PC, *P1, *P2, *P3, *P4, G, *W, *F1c, *F2c, *F3c,
             *F4c, *F, *T, &detA);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(*F1c);
  if (nlhs > 1) {
    plhs[1] = emlrt_marshallOut(*F2c);
  }

  if (nlhs > 2) {
    plhs[2] = emlrt_marshallOut(*F3c);
  }

  if (nlhs > 3) {
    plhs[3] = emlrt_marshallOut(*F4c);
  }

  if (nlhs > 4) {
    plhs[4] = emlrt_marshallOut(*F);
  }

  if (nlhs > 5) {
    plhs[5] = emlrt_marshallOut(*T);
  }

  if (nlhs > 6) {
    plhs[6] = b_emlrt_marshallOut(detA);
  }
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void force_dis8_atexit(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  force_dis8_xil_terminate();
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void force_dis8_initialize(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void force_dis8_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/*
 * File trailer for _coder_force_dis8_api.c
 *
 * [EOF]
 */
