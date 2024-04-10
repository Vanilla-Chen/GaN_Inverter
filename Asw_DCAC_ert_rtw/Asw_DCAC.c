/*
 * File: Asw_DCAC.c
 *
 * Code generated for Simulink model 'Asw_DCAC'.
 *
 * Model version                  : 1.67
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Sun Apr  7 20:03:04 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
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

/* Model step function for TID0 */
void Asw_DCAC_step0(void)              /* Sample time: [1.0E-8s, 0.0s] */
{
  /* (no output/update code required) */
}

/* Model step function for TID1 */
void Asw_DCAC_step1(void)              /* Sample time: [1.0E-6s, 0.0s] */
{
  real_T lastSin_tmp;
  real32_T Integrator;
  real32_T rtb_I_L_err;
  real32_T rtb_Saturation;

  /* Sin: '<S1>/Sine Wave' */
  if (Asw_DCAC_DW.systemEnable != 0) {
    lastSin_tmp = 6283.1853071795858 * (((Asw_DCAC_M->Timing.clockTick1+
      Asw_DCAC_M->Timing.clockTickH1* 4294967296.0)) * 1.0E-6);
    Asw_DCAC_DW.lastSin = sin(lastSin_tmp);
    Asw_DCAC_DW.lastCos = cos(lastSin_tmp);
    Asw_DCAC_DW.systemEnable = 0;
  }

  /* Sum: '<S1>/I_L_err' incorporates:
   *  Constant: '<Root>/Constant1'
   *  DataTypeConversion: '<S1>/Data Type Conversion'
   *  Inport: '<Root>/I_C'
   *  Inport: '<Root>/I_L'
   *  Product: '<S1>/Product'
   *  Sin: '<S1>/Sine Wave'
   *  Sum: '<S1>/I_L_SET'
   */
  rtb_I_L_err = ((real32_T)((Asw_DCAC_DW.lastSin * 0.99998026085613712 +
    Asw_DCAC_DW.lastCos * -0.00628314396555895) * 0.99998026085613712 +
    (Asw_DCAC_DW.lastCos * 0.99998026085613712 - Asw_DCAC_DW.lastSin *
     -0.00628314396555895) * 0.00628314396555895) * 10.0F + Asw_DCAC_U.I_C) -
    Asw_DCAC_U.I_L;

  /* DiscreteIntegrator: '<S36>/Integrator' */
  Integrator = 5.0E-7F * rtb_I_L_err + Asw_DCAC_DW.Integrator_DSTATE;

  /* Gain: '<S1>/Normalization' incorporates:
   *  Gain: '<S41>/Proportional Gain'
   *  Inport: '<Root>/U_Load'
   *  Sum: '<S1>/Sum8'
   *  Sum: '<S45>/Sum'
   */
  rtb_Saturation = ((5.0F * rtb_I_L_err + Integrator) + Asw_DCAC_U.U_Load) *
    0.01F;

  /* Saturate: '<S1>/Saturation' */
  if (rtb_Saturation > 1.0F) {
    rtb_Saturation = 1.0F;
  } else if (rtb_Saturation < -1.0F) {
    rtb_Saturation = -1.0F;
  }

  /* End of Saturate: '<S1>/Saturation' */

  /* Outport: '<Root>/Top_High_Frequency' incorporates:
   *  MATLAB Function: '<Root>/Unipolar fast and slow modulation'
   */
  Asw_DCAC_Y.Top_High_Frequency = 0.0F;

  /* Outport: '<Root>/Bottom_High_Frequency' incorporates:
   *  MATLAB Function: '<Root>/Unipolar fast and slow modulation'
   */
  Asw_DCAC_Y.Bottom_High_Frequency = 0.0F;

  /* MATLAB Function: '<Root>/Unipolar fast and slow modulation' */
  if (rtb_Saturation >= 0.0F) {
    /* Outport: '<Root>/Top_High_Frequency' */
    Asw_DCAC_Y.Top_High_Frequency = rtb_Saturation;

    /* Outport: '<Root>/Low_Frequency' */
    Asw_DCAC_Y.Low_Frequency = 0.0F;
  } else {
    /* Outport: '<Root>/Bottom_High_Frequency' */
    Asw_DCAC_Y.Bottom_High_Frequency = -rtb_Saturation;

    /* Outport: '<Root>/Low_Frequency' */
    Asw_DCAC_Y.Low_Frequency = 1.0F;
  }

  /* Update for Sin: '<S1>/Sine Wave' */
  lastSin_tmp = Asw_DCAC_DW.lastSin;
  Asw_DCAC_DW.lastSin = Asw_DCAC_DW.lastSin * 0.99998026085613712 +
    Asw_DCAC_DW.lastCos * 0.00628314396555895;
  Asw_DCAC_DW.lastCos = Asw_DCAC_DW.lastCos * 0.99998026085613712 - lastSin_tmp *
    0.00628314396555895;

  /* Update for DiscreteIntegrator: '<S36>/Integrator' */
  Asw_DCAC_DW.Integrator_DSTATE = 5.0E-7F * rtb_I_L_err + Integrator;

  /* Update absolute time */
  /* The "clockTick1" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 1.0E-6, which is the step size
   * of the task. Size of "clockTick1" ensures timer will not overflow during the
   * application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick1 and the high bits
   * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
   */
  Asw_DCAC_M->Timing.clockTick1++;
  if (!Asw_DCAC_M->Timing.clockTick1) {
    Asw_DCAC_M->Timing.clockTickH1++;
  }
}

/* Model initialize function */
void Asw_DCAC_initialize(void)
{
  /* Registration code */

  /* Set task counter limit used by the static main program */
  (Asw_DCAC_M)->Timing.TaskCounters.cLimit[0] = 1;
  (Asw_DCAC_M)->Timing.TaskCounters.cLimit[1] = 100;

  /* Enable for Sin: '<S1>/Sine Wave' */
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
