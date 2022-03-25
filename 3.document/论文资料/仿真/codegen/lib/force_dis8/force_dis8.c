/*
 * File: force_dis8.c
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 08-Oct-2019 08:52:54
 */

/* Include Files */
#include <math.h>
#include "rt_nonfinite.h"
#include "force_dis8.h"

/* Function Declarations */
static void invNxN(const double x[16], double y[16]);

/* Function Definitions */

/*
 * Arguments    : const double x[16]
 *                double y[16]
 * Return Type  : void
 */
static void invNxN(const double x[16], double y[16])
{
  int i2;
  double b_x[16];
  int j;
  signed char ipiv[4];
  int c;
  int iy;
  int k;
  signed char p[4];
  int ix;
  double smax;
  double s;
  int jy;
  int i;
  for (i2 = 0; i2 < 16; i2++) {
    y[i2] = 0.0;
    b_x[i2] = x[i2];
  }

  for (i2 = 0; i2 < 4; i2++) {
    ipiv[i2] = (signed char)(1 + i2);
  }

  for (j = 0; j < 3; j++) {
    c = j * 5;
    iy = 0;
    ix = c;
    smax = fabs(b_x[c]);
    for (k = 2; k <= 4 - j; k++) {
      ix++;
      s = fabs(b_x[ix]);
      if (s > smax) {
        iy = k - 1;
        smax = s;
      }
    }

    if (b_x[c + iy] != 0.0) {
      if (iy != 0) {
        ipiv[j] = (signed char)((j + iy) + 1);
        ix = j;
        iy += j;
        for (k = 0; k < 4; k++) {
          smax = b_x[ix];
          b_x[ix] = b_x[iy];
          b_x[iy] = smax;
          ix += 4;
          iy += 4;
        }
      }

      i2 = (c - j) + 4;
      for (i = c + 1; i < i2; i++) {
        b_x[i] /= b_x[c];
      }
    }

    iy = c;
    jy = c + 4;
    for (i = 1; i <= 3 - j; i++) {
      smax = b_x[jy];
      if (b_x[jy] != 0.0) {
        ix = c + 1;
        i2 = (iy - j) + 8;
        for (k = 5 + iy; k < i2; k++) {
          b_x[k] += b_x[ix] * -smax;
          ix++;
        }
      }

      jy += 4;
      iy += 4;
    }
  }

  for (i2 = 0; i2 < 4; i2++) {
    p[i2] = (signed char)(1 + i2);
  }

  for (k = 0; k < 3; k++) {
    if (ipiv[k] > 1 + k) {
      iy = p[ipiv[k] - 1];
      p[ipiv[k] - 1] = p[k];
      p[k] = (signed char)iy;
    }
  }

  for (k = 0; k < 4; k++) {
    c = p[k] - 1;
    y[k + ((p[k] - 1) << 2)] = 1.0;
    for (j = k; j + 1 < 5; j++) {
      if (y[j + (c << 2)] != 0.0) {
        for (i = j + 1; i + 1 < 5; i++) {
          y[i + (c << 2)] -= y[j + (c << 2)] * b_x[i + (j << 2)];
        }
      }
    }
  }

  for (j = 0; j < 4; j++) {
    iy = j << 2;
    for (k = 3; k >= 0; k--) {
      jy = k << 2;
      if (y[k + iy] != 0.0) {
        y[k + iy] /= b_x[k + jy];
        for (i = 0; i < k; i++) {
          y[i + iy] -= y[k + iy] * b_x[i + jy];
        }
      }
    }
  }
}

/*
 * Arguments    : const double FALL[3]
 *                const double TALL[3]
 *                const double Fp[2]
 *                const double PC[3]
 *                const double P1[3]
 *                const double P2[3]
 *                const double P3[3]
 *                const double P4[3]
 *                const char G[4]
 *                const double W[2]
 *                double F1c[3]
 *                double F2c[3]
 *                double F3c[3]
 *                double F4c[3]
 *                double F[3]
 *                double T[3]
 *                double *detA
 * Return Type  : void
 */
void force_dis8(const double FALL[3], const double TALL[3], const double Fp[2],
                const double PC[3], const double P1[3], const double P2[3],
                const double P3[3], const double P4[3], const char G[4], const
                double W[2], double F1c[3], double F2c[3], double F3c[3], double
                F4c[3], double F[3], double T[3], double *detA)
{
  int B;
  int i0;
  double PFF[3];
  double PHH[3];
  double FH[3];
  double A[6];
  double dv0[16];
  static const signed char iv0[4] = { 0, 1, 0, 1 };

  double b_F[4];
  double b_A[4];
  double r;
  int i1;
  double t;
  double y[4];
  double dv1[16];
  double b_FALL[3];
  double b_F2c[3];
  double c_FALL[3];
  double b_y[6];
  double c_F[2];
  double b_FH[3];
  *detA = 0.0;

  /* v leg */
  if (((unsigned char)G[0] == 1) && ((unsigned char)G[1] == 1)) {
    for (i0 = 0; i0 < 3; i0++) {
      PFF[i0] = P1[i0] * W[0] + P2[i0] * (1.0 - W[0]);
    }
  } else {
    B = (unsigned char)G[0] + (unsigned char)G[1];
    for (i0 = 0; i0 < 3; i0++) {
      PFF[i0] = (P1[i0] * (double)(unsigned char)G[0] + P2[i0] * (double)
                 (unsigned char)G[1]) / (double)B;
    }
  }

  if (((unsigned char)G[2] == 1) && ((unsigned char)G[3] == 1)) {
    for (i0 = 0; i0 < 3; i0++) {
      PHH[i0] = P3[i0] * W[1] + P4[i0] * (1.0 - W[1]);
    }
  } else {
    B = (unsigned char)G[2] + (unsigned char)G[3];
    for (i0 = 0; i0 < 3; i0++) {
      PHH[i0] = (P3[i0] * (double)(unsigned char)G[2] + P4[i0] * (double)
                 (unsigned char)G[3]) / (double)B;
    }
  }

  /* cmd test */
  for (i0 = 0; i0 < 3; i0++) {
    F[i0] = 0.0;
    FH[i0] = 0.0;
    PFF[i0] = PC[i0] - PFF[i0];
    PHH[i0] = PC[i0] - PHH[i0];
  }

  if (((unsigned char)G[0] == 1) && ((unsigned char)G[1] == 1) && ((unsigned
        char)G[2] == 0) && ((unsigned char)G[3] == 0)) {
    /* bound F */
    for (i0 = 0; i0 < 3; i0++) {
      PFF[i0] = PC[i0] - P1[i0];
      PHH[i0] = PC[i0] - P2[i0];
    }

    /* FZ   Ffy */
    /* MX   Ffz */
    /* MY   Fhy */
    /* MZ   Fhz */
    for (i0 = 0; i0 < 4; i0++) {
      dv0[i0 << 2] = iv0[i0];
    }

    dv0[1] = PFF[2];
    dv0[5] = -PFF[1];
    dv0[9] = PHH[2];
    dv0[13] = -PHH[1];
    dv0[2] = 0.0;
    dv0[6] = PFF[0];
    dv0[10] = 0.0;
    dv0[14] = PHH[0];
    dv0[3] = -PFF[0];
    dv0[7] = 0.0;
    dv0[11] = -PHH[0];
    dv0[15] = 0.0;
    invNxN(dv0, dv1);
    b_A[0] = FALL[2];
    for (i0 = 0; i0 < 3; i0++) {
      b_A[i0 + 1] = TALL[i0];
    }

    for (i0 = 0; i0 < 4; i0++) {
      y[i0] = b_A[i0];
    }

    for (i0 = 0; i0 < 4; i0++) {
      b_F[i0] = 0.0;
      for (B = 0; B < 4; B++) {
        b_F[i0] += dv1[i0 + (B << 2)] * y[B];
      }
    }

    F1c[0] = 0.0;
    F1c[1] = b_F[0];
    F1c[2] = b_F[1];
    F2c[0] = 0.0;
    F2c[1] = b_F[2];
    F2c[2] = b_F[3];
    b_FALL[0] = b_F[0] * PFF[2] - b_F[1] * PFF[1];
    b_FALL[1] = b_F[1] * PFF[0] - 0.0 * PFF[2];
    b_FALL[2] = 0.0 * PFF[1] - b_F[0] * PFF[0];
    b_F2c[0] = b_F[2] * PHH[2] - b_F[3] * PHH[1];
    b_F2c[1] = b_F[3] * PHH[0] - 0.0 * PHH[2];
    b_F2c[2] = 0.0 * PHH[1] - b_F[2] * PHH[0];
    for (i0 = 0; i0 < 3; i0++) {
      T[i0] = b_FALL[i0] + b_F2c[i0];
      F3c[i0] = 0.0;
      F4c[i0] = 0.0;
    }
  } else {
    /*  tort  fx is known   */
    /* MX   Ffz */
    /* MY   Fhz */
    for (i0 = 0; i0 < 2; i0++) {
      A[3 * i0] = 1.0;
    }

    A[1] = -PFF[1];
    A[4] = -PHH[1];
    A[2] = PFF[0];
    A[5] = PHH[0];

    /*  dA=det(A) */
    for (i0 = 0; i0 < 2; i0++) {
      for (B = 0; B < 2; B++) {
        b_A[i0 + (B << 1)] = 0.0;
        for (i1 = 0; i1 < 3; i1++) {
          b_A[i0 + (B << 1)] += A[i1 + 3 * i0] * A[i1 + 3 * B];
        }
      }
    }

    for (i0 = 0; i0 < 4; i0++) {
      b_F[i0] = b_A[i0];
    }

    if (fabs(b_F[1]) > fabs(b_F[0])) {
      r = b_F[0] / b_F[1];
      t = 1.0 / (r * b_F[3] - b_F[2]);
      y[0] = b_F[3] / b_F[1] * t;
      y[1] = -t;
      y[2] = -b_F[2] / b_F[1] * t;
      y[3] = r * t;
    } else {
      r = b_F[1] / b_F[0];
      t = 1.0 / (b_F[3] - r * b_F[2]);
      y[0] = b_F[3] / b_F[0] * t;
      y[1] = -r * t;
      y[2] = -b_F[2] / b_F[0] * t;
      y[3] = t;
    }

    b_FALL[0] = FALL[2];
    b_FALL[1] = TALL[0];
    b_FALL[2] = TALL[1];
    b_F2c[0] = 0.0;
    b_F2c[1] = PFF[2] * Fp[0] + PHH[2] * Fp[1];
    b_F2c[2] = 0.0;
    for (i0 = 0; i0 < 2; i0++) {
      for (B = 0; B < 3; B++) {
        b_y[i0 + (B << 1)] = 0.0;
        for (i1 = 0; i1 < 2; i1++) {
          b_y[i0 + (B << 1)] += y[i0 + (i1 << 1)] * A[B + 3 * i1];
        }
      }
    }

    for (i0 = 0; i0 < 3; i0++) {
      c_FALL[i0] = b_FALL[i0] - b_F2c[i0];
    }

    for (i0 = 0; i0 < 2; i0++) {
      c_F[i0] = 0.0;
      for (B = 0; B < 3; B++) {
        c_F[i0] += b_y[i0 + (B << 1)] * c_FALL[B];
      }
    }

    F[0] = 0.0;
    F[1] = Fp[0];
    F[2] = c_F[0];
    FH[0] = 0.0;
    FH[1] = Fp[1];
    FH[2] = c_F[1];
    b_FALL[0] = Fp[0] * PFF[2] - c_F[0] * PFF[1];
    b_FALL[1] = c_F[0] * PFF[0] - 0.0 * PFF[2];
    b_FALL[2] = 0.0 * PFF[1] - Fp[0] * PFF[0];
    b_FH[0] = Fp[1] * PHH[2] - c_F[1] * PHH[1];
    b_FH[1] = c_F[1] * PHH[0] - 0.0 * PHH[2];
    b_FH[2] = 0.0 * PHH[1] - Fp[1] * PHH[0];
    for (i0 = 0; i0 < 3; i0++) {
      T[i0] = b_FALL[i0] + b_FH[i0];
    }

    /* ------------------------------re-distribution---------------------------- */
    if (((unsigned char)G[0] == 1) && ((unsigned char)G[1] == 1)) {
      for (i0 = 0; i0 < 3; i0++) {
        F1c[i0] = F[i0] * W[0];
        F2c[i0] = F[i0] * (1.0 - W[0]);
      }
    } else {
      for (i0 = 0; i0 < 3; i0++) {
        F1c[i0] = F[i0] * (double)(unsigned char)G[0];
        F2c[i0] = F[i0] * (double)(unsigned char)G[1];
      }
    }

    if (((unsigned char)G[2] == 1) && ((unsigned char)G[3] == 1)) {
      for (i0 = 0; i0 < 3; i0++) {
        F3c[i0] = FH[i0] * W[1];
        F4c[i0] = FH[i0] * (1.0 - W[1]);
      }
    } else {
      for (i0 = 0; i0 < 3; i0++) {
        F3c[i0] = FH[i0] * (double)(unsigned char)G[2];
        F4c[i0] = FH[i0] * (double)(unsigned char)G[3];
      }
    }
  }

  for (i0 = 0; i0 < 3; i0++) {
    F[i0] += FH[i0];
  }
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void force_dis8_initialize(void)
{
  rt_InitInfAndNaN(8U);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void force_dis8_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for force_dis8.c
 *
 * [EOF]
 */
