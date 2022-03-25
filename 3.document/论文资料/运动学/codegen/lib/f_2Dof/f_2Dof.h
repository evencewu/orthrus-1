/*
 * File: f_2Dof.h
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 01-Jan-2020 14:37:33
 */

#ifndef F_2DOF_H
#define F_2DOF_H

/* Include Files */
#include <stddef.h>
#include <stdlib.h>
#include "rtwtypes.h"
#include "f_2Dof_types.h"

/* Function Declarations */
extern void f_2Dof(float Alpha1, float Alpha2, const float Param[6], float *Xe,
                   float *Ye);
extern void f_2Dof_initialize(void);
extern void f_2Dof_terminate(void);

#endif

/*
 * File trailer for f_2Dof.h
 *
 * [EOF]
 */
