/*
 * File: rtmodel.c
 *
 * Code generated for Simulink model 'Asw_DCAC'.
 *
 * Model version                  : 1.95
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Tue Jun 25 19:08:03 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rtmodel.h"

/* Use this function only if you need to maintain compatibility with an existing static main program. */
void Asw_DCAC_step(int_T tid)
{
  switch (tid) {
   case 0 :
    Asw_DCAC_step0();
    break;

   case 1 :
    Asw_DCAC_step1();
    break;

   default :
    /* do nothing */
    break;
  }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
