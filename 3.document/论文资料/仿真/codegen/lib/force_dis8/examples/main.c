/*
 * File: main.c
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 08-Oct-2019 08:52:54
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
#include "force_dis8.h"
#include "main.h"

/* Function Declarations */
static void argInit_1x2_real_T(double result[2]);
static void argInit_1x3_real_T(double result[3]);
static void argInit_1x4_char_T(char result[4]);
static char argInit_char_T(void);
static double argInit_real_T(void);
static void main_force_dis8(void);

/* Function Definitions */

/*
 * Arguments    : double result[2]
 * Return Type  : void
 */
static void argInit_1x2_real_T(double result[2])
{
  int idx1;

  /* Loop over the array to initialize each element. */
  for (idx1 = 0; idx1 < 2; idx1++) {
    /* Set the value of the array element.
       Change this value to the value that the application requires. */
    result[idx1] = argInit_real_T();
  }
}

/*
 * Arguments    : double result[3]
 * Return Type  : void
 */
static void argInit_1x3_real_T(double result[3])
{
  int idx1;

  /* Loop over the array to initialize each element. */
  for (idx1 = 0; idx1 < 3; idx1++) {
    /* Set the value of the array element.
       Change this value to the value that the application requires. */
    result[idx1] = argInit_real_T();
  }
}

/*
 * Arguments    : char result[4]
 * Return Type  : void
 */
static void argInit_1x4_char_T(char result[4])
{
  int idx1;

  /* Loop over the array to initialize each element. */
  for (idx1 = 0; idx1 < 4; idx1++) {
    /* Set the value of the array element.
       Change this value to the value that the application requires. */
    result[idx1] = argInit_char_T();
  }
}

/*
 * Arguments    : void
 * Return Type  : char
 */
static char argInit_char_T(void)
{
  return '?';
}

/*
 * Arguments    : void
 * Return Type  : double
 */
static double argInit_real_T(void)
{
  return 0.0;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
static void main_force_dis8(void)
{
  double dv2[3];
  double dv3[3];
  double dv4[2];
  double dv5[3];
  double dv6[3];
  double dv7[3];
  double dv8[3];
  double dv9[3];
  char cv0[4];
  double dv10[2];
  double F1c[3];
  double F2c[3];
  double F3c[3];
  double F4c[3];
  double F[3];
  double T[3];
  double detA;

  /* Initialize function 'force_dis8' input arguments. */
  /* Initialize function input argument 'FALL'. */
  /* Initialize function input argument 'TALL'. */
  /* Initialize function input argument 'Fp'. */
  /* Initialize function input argument 'PC'. */
  /* Initialize function input argument 'P1'. */
  /* Initialize function input argument 'P2'. */
  /* Initialize function input argument 'P3'. */
  /* Initialize function input argument 'P4'. */
  /* Initialize function input argument 'G'. */
  /* Initialize function input argument 'W'. */
  /* Call the entry-point 'force_dis8'. */
  argInit_1x3_real_T(dv2);
  argInit_1x3_real_T(dv3);
  argInit_1x2_real_T(dv4);
  argInit_1x3_real_T(dv5);
  argInit_1x3_real_T(dv6);
  argInit_1x3_real_T(dv7);
  argInit_1x3_real_T(dv8);
  argInit_1x3_real_T(dv9);
  argInit_1x4_char_T(cv0);
  argInit_1x2_real_T(dv10);
  force_dis8(dv2, dv3, dv4, dv5, dv6, dv7, dv8, dv9, cv0, dv10, F1c, F2c, F3c,
             F4c, F, T, &detA);
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
  force_dis8_initialize();

  /* Invoke the entry-point functions.
     You can call entry-point functions multiple times. */
  main_force_dis8();

  /* Terminate the application.
     You do not need to do this more than one time. */
  force_dis8_terminate();
  return 0;
}

/*
 * File trailer for main.c
 *
 * [EOF]
 */
