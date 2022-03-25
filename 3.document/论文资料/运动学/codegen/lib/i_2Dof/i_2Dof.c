/*
 * File: i_2Dof.c
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 15-Dec-2019 11:34:58
 */

/* Include Files */
#include <math.h>
#include "rt_nonfinite.h"
#include "i_2Dof.h"
#include "sin.h"
#include "cos.h"
#include "sqrt.h"

/* Function Definitions */

/*
 * Arguments    : float x
 *                float y
 *                const float Param[6]
 *                double *Alpha1
 *                double *Alpha2
 * Return Type  : void
 */
void i_2Dof(float x, float y, const float Param[6], double *Alpha1, double
            *Alpha2)
{
  float a;
  float b;
  float c;
  float b_y;
  double Alpha10[2];
  int i0;
  double dv0[2];
  float Xb[2];
  float Yb[2];
  float d[2];
  double Alpha20_idx_1;
  float e[2];
  y = -y;
  a = 2.0F * x * Param[0];
  b = 2.0F * y * Param[0];
  c = Param[1] + Param[5];
  c = ((x * x + y * y) + Param[0] * Param[0]) - c * c;
  b_y = (a * a + b * b) - c * c;
  b_sqrt(&b_y);
  Alpha10[0] = 2.0F * (float)atan((b + b_y) / (a + c));
  b_y = (a * a + b * b) - c * c;
  b_sqrt(&b_y);
  Alpha10[1] = 2.0F * (float)atan((b - b_y) / (a + c));
  c = Param[1] + Param[5];
  for (i0 = 0; i0 < 2; i0++) {
    dv0[i0] = Alpha10[i0];
  }

  b_cos(dv0);
  b = Param[1] + Param[5];
  for (i0 = 0; i0 < 2; i0++) {
    Xb[i0] = x - Param[5] * ((x - Param[0] * (float)dv0[i0]) / c);
    dv0[i0] = Alpha10[i0];
  }

  b_sin(dv0);
  c = 2.0F * Param[3];
  b_y = 2.0F * Param[3];
  for (i0 = 0; i0 < 2; i0++) {
    a = y - Param[5] * ((y - Param[0] * (float)dv0[i0]) / b);
    d[i0] = c * (Xb[i0] - Param[4]);
    e[i0] = b_y * a;
    Yb[i0] = a;
  }

  a = Xb[0] - Param[4];
  Xb[0] = ((a * a + Param[3] * Param[3]) + Yb[0] * Yb[0]) - Param[2] * Param[2];
  Alpha20_idx_1 = 2.0F * (float)atan((e[0] - (float)sqrt((d[0] * d[0] + e[0] *
    e[0]) - Xb[0] * Xb[0])) / (d[0] + Xb[0]));
  if (Alpha10[0] < 0.0) {
    Alpha10[0] += 6.2831853071795862;
  }

  if (Alpha20_idx_1 < 0.0) {
    Alpha20_idx_1 += 6.2831853071795862;
  }

  *Alpha1 = Alpha10[0] * 57.3;
  *Alpha2 = Alpha20_idx_1 * 57.3;
}

/*
 * File trailer for i_2Dof.c
 *
 * [EOF]
 */
