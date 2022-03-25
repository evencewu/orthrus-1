/*
 * File: f_2Dof.c
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 01-Jan-2020 14:37:33
 */

/* Include Files */
#include <math.h>
#include "rt_nonfinite.h"
#include <float.h>
#include "f_2Dof.h"

/* Function Declarations */
static void b_cosd(float *x);
static void b_sind(float *x);
static float rt_remf_snf(float u0, float u1);

/* Function Definitions */

/*
 * Arguments    : float *x
 * Return Type  : void
 */
static void b_cosd(float *x)
{
  float absx;
  signed char n;
  if (!((!rtIsInfF(*x)) && (!rtIsNaNF(*x)))) {
    *x = ((real32_T)rtNaN);
  } else {
    *x = rt_remf_snf(*x, 360.0F);
    absx = (float)fabs(*x);
    if (absx > 180.0F) {
      if (*x > 0.0F) {
        *x -= 360.0F;
      } else {
        *x += 360.0F;
      }

      absx = (float)fabs(*x);
    }

    if (absx <= 45.0F) {
      *x *= 0.0174532924F;
      n = 0;
    } else if (absx <= 135.0F) {
      if (*x > 0.0F) {
        *x = 0.0174532924F * (*x - 90.0F);
        n = 1;
      } else {
        *x = 0.0174532924F * (*x + 90.0F);
        n = -1;
      }
    } else if (*x > 0.0F) {
      *x = 0.0174532924F * (*x - 180.0F);
      n = 2;
    } else {
      *x = 0.0174532924F * (*x + 180.0F);
      n = -2;
    }

    if (n == 0) {
      *x = (float)cos(*x);
    } else if (n == 1) {
      *x = -(float)sin(*x);
    } else if (n == -1) {
      *x = (float)sin(*x);
    } else {
      *x = -(float)cos(*x);
    }
  }
}

/*
 * Arguments    : float *x
 * Return Type  : void
 */
static void b_sind(float *x)
{
  float absx;
  signed char n;
  if (!((!rtIsInfF(*x)) && (!rtIsNaNF(*x)))) {
    *x = ((real32_T)rtNaN);
  } else {
    *x = rt_remf_snf(*x, 360.0F);
    absx = (float)fabs(*x);
    if (absx > 180.0F) {
      if (*x > 0.0F) {
        *x -= 360.0F;
      } else {
        *x += 360.0F;
      }

      absx = (float)fabs(*x);
    }

    if (absx <= 45.0F) {
      *x *= 0.0174532924F;
      n = 0;
    } else if (absx <= 135.0F) {
      if (*x > 0.0F) {
        *x = 0.0174532924F * (*x - 90.0F);
        n = 1;
      } else {
        *x = 0.0174532924F * (*x + 90.0F);
        n = -1;
      }
    } else if (*x > 0.0F) {
      *x = 0.0174532924F * (*x - 180.0F);
      n = 2;
    } else {
      *x = 0.0174532924F * (*x + 180.0F);
      n = -2;
    }

    if (n == 0) {
      *x = (float)sin(*x);
    } else if (n == 1) {
      *x = (float)cos(*x);
    } else if (n == -1) {
      *x = -(float)cos(*x);
    } else {
      *x = -(float)sin(*x);
    }
  }
}

/*
 * Arguments    : float u0
 *                float u1
 * Return Type  : float
 */
static float rt_remf_snf(float u0, float u1)
{
  float y;
  float b_u1;
  float q;
  if (!((!rtIsNaNF(u0)) && (!rtIsInfF(u0)) && ((!rtIsNaNF(u1)) && (!rtIsInfF(u1)))))
  {
    y = ((real32_T)rtNaN);
  } else {
    if (u1 < 0.0F) {
      b_u1 = (float)ceil(u1);
    } else {
      b_u1 = (float)floor(u1);
    }

    if ((u1 != 0.0F) && (u1 != b_u1)) {
      q = (float)fabs(u0 / u1);
      if ((float)fabs(q - (float)floor(q + 0.5F)) <= FLT_EPSILON * q) {
        y = 0.0F * u0;
      } else {
        y = (float)fmod(u0, u1);
      }
    } else {
      y = (float)fmod(u0, u1);
    }
  }

  return y;
}

/*
 * Arguments    : float Alpha1
 *                float Alpha2
 *                const float Param[6]
 *                float *Xe
 *                float *Ye
 * Return Type  : void
 */
void f_2Dof(float Alpha1, float Alpha2, const float Param[6], float *Xe, float
            *Ye)
{
  float lengthAC;
  float Xa;
  float Ya;
  float Xc;
  float Yc;
  float B;
  lengthAC = Alpha1;
  b_cosd(&lengthAC);
  Xa = Param[0] * lengthAC;
  lengthAC = Alpha1;
  b_sind(&lengthAC);
  Ya = Param[0] * lengthAC;
  lengthAC = Alpha2;
  b_cosd(&lengthAC);
  Xc = Param[4] + Param[3] * lengthAC;
  lengthAC = Alpha2;
  b_sind(&lengthAC);
  Yc = Param[3] * lengthAC;
  lengthAC = Xc - Xa;
  B = Yc - Ya;
  lengthAC = (float)sqrt(lengthAC * lengthAC + B * B);
  Xc = 2.0F * Param[1] * (Xc - Xa);
  B = 2.0F * Param[1] * (Yc - Ya);
  lengthAC = (Param[1] * Param[1] + lengthAC * lengthAC) - Param[2] * Param[2];
  B = 2.0F * (57.2957802F * (float)atan((B + (float)sqrt((Xc * Xc + B * B) -
    lengthAC * lengthAC)) / (Xc + lengthAC)));

  /* if isreal(theta1) */
  lengthAC = B;
  b_cosd(&lengthAC);
  *Xe = Xa + (Param[1] + Param[5]) * lengthAC;

  /*  else */
  /*      Xe=Xa+(L2+L6)*cos(theta2); */
  /*      Ye=Ya+(L2+L6)*sin(theta2); */
  /*  end */
  /* O */
  /* D */
  /* A */
  /* C */
  /* B */
  /* E */
  b_sind(&B);
  *Ye = -(Ya + (Param[1] + Param[5]) * B);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void f_2Dof_initialize(void)
{
  rt_InitInfAndNaN(8U);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void f_2Dof_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for f_2Dof.c
 *
 * [EOF]
 */
