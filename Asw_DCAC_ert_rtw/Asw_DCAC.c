/*
 * File: Asw_DCAC.c
 *
 * Code generated for Simulink model 'Asw_DCAC'.
 *
 * Model version                  : 1.30
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Fri Mar 22 10:49:17 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Asw_DCAC.h"
#include <math.h>
#include "rtwtypes.h"

/* Block states (default storage) */
DW_Asw_DCAC_T Asw_DCAC_DW;

/* External inputs (root inport signals with default storage) */
ExtU_Asw_DCAC_T Asw_DCAC_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Asw_DCAC_T Asw_DCAC_Y;

/* Real-time model */
static RT_MODEL_Asw_DCAC_T Asw_DCAC_M_;
RT_MODEL_Asw_DCAC_T *const Asw_DCAC_M = &Asw_DCAC_M_;

/* Model step function */
void Asw_DCAC_step(void)
{
  real_T rtb_SineWave5;

  /* Sin: '<Root>/Sine Wave5' */
  if (Asw_DCAC_DW.systemEnable != 0) {
    rtb_SineWave5 = 6283.1853071795858 * (((Asw_DCAC_M->Timing.clockTick0+
      Asw_DCAC_M->Timing.clockTickH0* 4294967296.0)) * 1.0E-6);
    Asw_DCAC_DW.lastSin = sin(rtb_SineWave5);
    Asw_DCAC_DW.lastCos = cos(rtb_SineWave5);
    Asw_DCAC_DW.systemEnable = 0;
  }

  rtb_SineWave5 = (Asw_DCAC_DW.lastSin * 0.99998026085613712 +
                   Asw_DCAC_DW.lastCos * -0.00628314396555895) *
    0.99998026085613712 + (Asw_DCAC_DW.lastCos * 0.99998026085613712 -
    Asw_DCAC_DW.lastSin * -0.00628314396555895) * 0.00628314396555895;

  /* End of Sin: '<Root>/Sine Wave5' */

  /* Outport: '<Root>/Top_High_Frequency' incorporates:
   *  MATLAB Function: '<Root>/单极性快慢调制1'
   */
  Asw_DCAC_Y.Top_High_Frequency = 0.0F;

  /* Outport: '<Root>/Bottom_High_Frequency' incorporates:
   *  MATLAB Function: '<Root>/单极性快慢调制1'
   */
  Asw_DCAC_Y.Bottom_High_Frequency = 0.0F;

  /* MATLAB Function: '<Root>/单极性快慢调制1' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion'
   */
  if ((real32_T)rtb_SineWave5 >= 0.0F) {
    /* Outport: '<Root>/Top_High_Frequency' */
    Asw_DCAC_Y.Top_High_Frequency = (real32_T)rtb_SineWave5;

    /* Outport: '<Root>/Low_Frequency' */
    Asw_DCAC_Y.Low_Frequency = 0.0F;
  } else {
    /* Outport: '<Root>/Bottom_High_Frequency' */
    Asw_DCAC_Y.Bottom_High_Frequency = -(real32_T)rtb_SineWave5;

    /* Outport: '<Root>/Low_Frequency' */
    Asw_DCAC_Y.Low_Frequency = 1.0F;
  }

  /* Update for Sin: '<Root>/Sine Wave5' */
  rtb_SineWave5 = Asw_DCAC_DW.lastSin;
  Asw_DCAC_DW.lastSin = Asw_DCAC_DW.lastSin * 0.99998026085613712 +
    Asw_DCAC_DW.lastCos * 0.00628314396555895;
  Asw_DCAC_DW.lastCos = Asw_DCAC_DW.lastCos * 0.99998026085613712 -
    rtb_SineWave5 * 0.00628314396555895;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 1.0E-6, which is the step size
   * of the task. Size of "clockTick0" ensures timer will not overflow during the
   * application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  Asw_DCAC_M->Timing.clockTick0++;
  if (!Asw_DCAC_M->Timing.clockTick0) {
    Asw_DCAC_M->Timing.clockTickH0++;
  }
}

/* Model initialize function */
void Asw_DCAC_initialize(void)
{
  /* Enable for Sin: '<Root>/Sine Wave5' */
  Asw_DCAC_DW.systemEnable = 1;
}

/* Model terminate function */
void Asw_DCAC_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
