/*
 * File: cos.c
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 15-Dec-2019 11:34:58
 */

/* Include Files */
#include <math.h>
#include "rt_nonfinite.h"
#include "i_2Dof.h"
#include "cos.h"

/* Function Definitions */

/*
 * Arguments    : double x[2]
 * Return Type  : void
 */
void b_cos(double x[2])
{
  int k;
  for (k = 0; k < 2; k++) {
    x[k] = cos(x[k]);
  }
}

/*
 * File trailer for cos.c
 *
 * [EOF]
 */
