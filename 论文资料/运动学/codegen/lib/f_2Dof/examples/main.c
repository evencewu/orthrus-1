/*
 * File: main.c
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 01-Jan-2020 14:37:33
 */

/*************************************************************************/
/* This automatically generated example C main file shows how to call    */
/* entry-point functions that MATLAB Coder generated. You must customize */
/* this file for your application. Do not modify this file directly.     */
/* Instead, make a copy of this file, modify it, and integrate it into   */
/* your development environment.                                         */
/*                                                                       */
/* This file initializes entry-point function arguments to a default     */
/* size and value before calling the entry-point functions. It does      */
/* not store or use any values returned from the entry-point functions.  */
/* If necessary, it does pre-allocate memory for returned values.        */
/* You can use this file as a starting point for a main function that    */
/* you can deploy in your application.                                   */
/*                                                                       */
/* After you copy the file, and before you deploy it, you must make the  */
/* following changes:                                                    */
/* * For variable-size function arguments, change the example sizes to   */
/* the sizes that your application requires.                             */
/* * Change the example values of function arguments to the values that  */
/* your application requires.                                            */
/* * If the entry-point functions return values, store these values or   */
/* otherwise use them as required by your application.                   */
/*                                                                       */
/*************************************************************************/
/* Include Files */
#include "rt_nonfinite.h"
#include "f_2Dof.h"
#include "main.h"

/* Function Declarations */
static void argInit_1x6_real32_T(float result[6]);
static float argInit_real32_T(void);
static void main_f_2Dof(void);

/* Function Definitions */

/*
 * Arguments    : float result[6]
 * Return Type  : void
 */
static void argInit_1x6_real32_T(float result[6])
{
  int idx1;

  /* Loop over the array to initialize each element. */
  for (idx1 = 0; idx1 < 6; idx1++) {
    /* Set the value of the array element.
       Change this value to the value that the application requires. */
    result[idx1] = argInit_real32_T();
  }
}

/*
 * Arguments    : void
 * Return Type  : float
 */
static float argInit_real32_T(void)
{
  return 0.0F;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
static void main_f_2Dof(void)
{
  float fv0[6];
  float Xe;
  float Ye;

  /* Initialize function 'f_2Dof' input arguments. */
  /* Initialize function input argument 'Param'. */
  /* Call the entry-point 'f_2Dof'. */
  argInit_1x6_real32_T(fv0);
  f_2Dof(argInit_real32_T(), argInit_real32_T(), fv0, &Xe, &Ye);
}

/*
 * Arguments    : int argc
 *                const char * const argv[]
 * Return Type  : int
 */
int main(int argc, const char * const argv[])
{
  (void)argc;
  (void)argv;

  /* Initialize the application.
     You do not need to do this more than one time. */
  f_2Dof_initialize();

  /* Invoke the entry-point functions.
     You can call entry-point functions multiple times. */
  main_f_2Dof();

  /* Terminate the application.
     You do not need to do this more than one time. */
  f_2Dof_terminate();
  return 0;
}

/*
 * File trailer for main.c
 *
 * [EOF]
 */
