/*
 * File: main.c
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 11-Feb-2020 19:27:32
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
#include "invet33.h"
#include "main.h"

/* Function Declarations */
static void argInit_2x2_real32_T(float result[4]);
static float argInit_real32_T(void);
static void main_invet33(void);

/* Function Definitions */

/*
 * Arguments    : float result[4]
 * Return Type  : void
 */
static void argInit_2x2_real32_T(float result[4])
{
  int idx0;
  int idx1;

  /* Loop over the array to initialize each element. */
  for (idx0 = 0; idx0 < 2; idx0++) {
    for (idx1 = 0; idx1 < 2; idx1++) {
      /* Set the value of the array element.
         Change this value to the value that the application requires. */
      result[idx0 + (idx1 << 1)] = argInit_real32_T();
    }
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
static void main_invet33(void)
{
  float fv0[4];
  float dA;
  float inA[4];

  /* Initialize function 'invet33' input arguments. */
  /* Initialize function input argument 'A'. */
  /* Call the entry-point 'invet33'. */
  argInit_2x2_real32_T(fv0);
  invet33(fv0, &dA, inA);
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
  invet33_initialize();

  /* Invoke the entry-point functions.
     You can call entry-point functions multiple times. */
  main_invet33();

  /* Terminate the application.
     You do not need to do this more than one time. */
  invet33_terminate();
  return 0;
}

/*
 * File trailer for main.c
 *
 * [EOF]
 */
