/*
 * File: force_dis8.h
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 08-Oct-2019 08:52:54
 */

#ifndef FORCE_DIS8_H
#define FORCE_DIS8_H

/* Include Files */
#include <stddef.h>
#include <stdlib.h>
#include "rtwtypes.h"
#include "force_dis8_types.h"

/* Function Declarations */
extern void force_dis8(const double FALL[3], const double TALL[3], const double
  Fp[2], const double PC[3], const double P1[3], const double P2[3], const
  double P3[3], const double P4[3], const char G[4], const double W[2], double
  F1c[3], double F2c[3], double F3c[3], double F4c[3], double F[3], double T[3],
  double *detA);
extern void force_dis8_initialize(void);
extern void force_dis8_terminate(void);

#endif

/*
 * File trailer for force_dis8.h
 *
 * [EOF]
 */
