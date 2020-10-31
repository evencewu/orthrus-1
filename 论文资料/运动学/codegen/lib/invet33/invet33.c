/*
 * File: invet33.c
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 11-Feb-2020 19:27:32
 */

/* Include Files */
#include <math.h>
#include "rt_nonfinite.h"
#include "invet33.h"

/* Function Declarations */
static void inv(const float x[4], float y[4]);

/* Function Definitions */

/*
 * Arguments    : const float x[4]
 *                float y[4]
 * Return Type  : void
 */
static void inv(const float x[4], float y[4])
{
  float r;
  float t;
  if ((float)fabs(x[1]) > (float)fabs(x[0])) {
    r = x[0] / x[1];
    t = 1.0F / (r * x[3] - x[2]);
    y[0] = x[3] / x[1] * t;
    y[1] = -t;
    y[2] = -x[2] / x[1] * t;
    y[3] = r * t;
  } else {
    r = x[1] / x[0];
    t = 1.0F / (x[3] - r * x[2]);
    y[0] = x[3] / x[0] * t;
    y[1] = -r * t;
    y[2] = -x[2] / x[0] * t;
    y[3] = t;
  }
}

/*
 * Arguments    : const float A[4]
 *                float *dA
 *                float inA[4]
 * Return Type  : void
 */
void invet33(const float A[4], float *dA, float inA[4])
{
  int ix;
  float x[4];
  signed char ipiv[2];
  int iy;
  boolean_T isodd;
  int k;
  float temp;
  float b_A[4];
  for (ix = 0; ix < 4; ix++) {
    x[ix] = A[ix];
  }

  for (ix = 0; ix < 2; ix++) {
    ipiv[ix] = (signed char)(1 + ix);
  }

  ix = 0;
  if ((float)fabs(A[1]) > (float)fabs(A[0])) {
    ix = 1;
  }

  if (A[ix] != 0.0F) {
    if (ix != 0) {
      ipiv[0] = 2;
      ix = 0;
      iy = 1;
      for (k = 0; k < 2; k++) {
        temp = x[ix];
        x[ix] = x[iy];
        x[iy] = temp;
        ix += 2;
        iy += 2;
      }
    }

    x[1] /= x[0];
  }

  if (x[2] != 0.0F) {
    x[3] += x[1] * -x[2];
  }

  *dA = x[0] * x[3];
  isodd = false;
  if (ipiv[0] > 1) {
    isodd = true;
  }

  if (isodd) {
    *dA = -*dA;
  }

  if (*dA == 0.0F) {
    for (ix = 0; ix < 2; ix++) {
      for (iy = 0; iy < 2; iy++) {
        b_A[ix + (iy << 1)] = 0.0F;
        for (k = 0; k < 2; k++) {
          b_A[ix + (iy << 1)] += A[k + (ix << 1)] * A[k + (iy << 1)];
        }
      }
    }

    inv(b_A, x);
    for (ix = 0; ix < 2; ix++) {
      for (iy = 0; iy < 2; iy++) {
        inA[ix + (iy << 1)] = 0.0F;
        for (k = 0; k < 2; k++) {
          inA[ix + (iy << 1)] += x[ix + (k << 1)] * A[iy + (k << 1)];
        }
      }
    }
  } else {
    inv(A, inA);
  }
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void invet33_initialize(void)
{
  rt_InitInfAndNaN(8U);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void invet33_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for invet33.c
 *
 * [EOF]
 */
