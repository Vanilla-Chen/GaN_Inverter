/*
 * File: Asw_DCAC.c
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
  real32_T Integrator_n;
  real32_T rtb_Gain4;
  real32_T rtb_Gain7_h;
  real32_T rtb_Sum3;
  real32_T rtb_Sum7;
  real32_T rtb_Top_High_Frequency;

  /* Gain: '<S3>/Gain7' incorporates:
   *  Constant: '<S3>/Constant3'
   *  DataTypeConversion: '<S3>/Data Type Conversion1'
   *  Gain: '<S3>/Gain6'
   *  Inport: '<Root>/BSW_Volt_Load'
   *  Sum: '<S3>/Add'
   */
  rtb_Gain7_h = (0.000805664051F * (real32_T)Asw_DCAC_U.BSW_Volt_Load - 1.65F) *
    32.3333321F;

  /* Sin: '<S5>/Sine Wave3' */
  if (Asw_DCAC_DW.systemEnable != 0) {
    lastSin_tmp = 6283.1853071795858 * (((Asw_DCAC_M->Timing.clockTick1+
      Asw_DCAC_M->Timing.clockTickH1* 4294967296.0)) * 1.0E-6);
    Asw_DCAC_DW.lastSin = sin(lastSin_tmp);
    Asw_DCAC_DW.lastCos = cos(lastSin_tmp);
    Asw_DCAC_DW.systemEnable = 0;
  }

  /* Sum: '<S5>/Sum3' incorporates:
   *  Constant: '<Root>/Constant'
   *  DataTypeConversion: '<S5>/Data Type Conversion2'
   *  Product: '<S5>/Product'
   *  Sin: '<S5>/Sine Wave3'
   */
  rtb_Sum3 = (real32_T)((Asw_DCAC_DW.lastSin * 0.99998026085613712 +
    Asw_DCAC_DW.lastCos * -0.00628314396555895) * 0.99998026085613712 +
                        (Asw_DCAC_DW.lastCos * 0.99998026085613712 -
    Asw_DCAC_DW.lastSin * -0.00628314396555895) * 0.00628314396555895) * 15.0F -
    rtb_Gain7_h;

  /* DiscreteIntegrator: '<S39>/Integrator' */
  Integrator = 5.0E-7F * rtb_Sum3 + Asw_DCAC_DW.Integrator_DSTATE;

  /* Sum: '<S5>/Sum7' incorporates:
   *  Constant: '<S1>/Constant3'
   *  Constant: '<S2>/Constant3'
   *  DataTypeConversion: '<S1>/Data Type Conversion1'
   *  DataTypeConversion: '<S2>/Data Type Conversion1'
   *  Gain: '<S1>/Gain6'
   *  Gain: '<S1>/Gain7'
   *  Gain: '<S1>/Gain8'
   *  Gain: '<S2>/Gain6'
   *  Gain: '<S2>/Gain7'
   *  Gain: '<S2>/Gain8'
   *  Gain: '<S44>/Proportional Gain'
   *  Inport: '<Root>/BSW_Curr_Induct'
   *  Inport: '<Root>/BSW_Curr_Load'
   *  Sum: '<S1>/Add'
   *  Sum: '<S2>/Add'
   *  Sum: '<S48>/Sum'
   *  Sum: '<S5>/Sum6'
   */
  rtb_Sum7 = ((0.000805664051F * (real32_T)Asw_DCAC_U.BSW_Curr_Load - 1.65F) *
              0.01F * 66.6666641F + (3.5F * rtb_Sum3 + Integrator)) -
    (0.000805664051F * (real32_T)Asw_DCAC_U.BSW_Curr_Induct - 1.65F) * 0.01F *
    66.6666641F;

  /* DiscreteIntegrator: '<S87>/Integrator' */
  Integrator_n = 5.0E-7F * rtb_Sum7 + Asw_DCAC_DW.Integrator_DSTATE_d;

  /* Gain: '<S5>/Gain2' incorporates:
   *  Gain: '<S92>/Proportional Gain'
   *  Sum: '<S5>/Sum8'
   *  Sum: '<S96>/Sum'
   */
  rtb_Gain7_h = ((2.0F * rtb_Sum7 + Integrator_n) + rtb_Gain7_h) * 0.0333333351F;

  /* Saturate: '<S5>/Saturation' */
  if (rtb_Gain7_h > 1.0F) {
    rtb_Gain7_h = 1.0F;
  } else if (rtb_Gain7_h < -1.0F) {
    rtb_Gain7_h = -1.0F;
  }

  /* Gain: '<Root>/Gain4' incorporates:
   *  Saturate: '<S5>/Saturation'
   */
  rtb_Gain4 = 2720.0F * rtb_Gain7_h;

  /* MATLAB Function: '<Root>/Unipolar fast and slow modulation' */
  rtb_Top_High_Frequency = 0.0F;
  rtb_Gain7_h = 0.0F;
  if (rtb_Gain4 >= 0.0F) {
    rtb_Top_High_Frequency = rtb_Gain4;

    /* Outport: '<Root>/Low_Frequency' */
    Asw_DCAC_Y.Low_Frequency = 0.0F;
  } else {
    rtb_Gain7_h = -rtb_Gain4;

    /* Outport: '<Root>/Low_Frequency' */
    Asw_DCAC_Y.Low_Frequency = 1.0F;
  }

  /* End of MATLAB Function: '<Root>/Unipolar fast and slow modulation' */

  /* Outport: '<Root>/Top_High_Frequency' incorporates:
   *  Gain: '<Root>/Gain2'
   */
  Asw_DCAC_Y.Top_High_Frequency = 0.000367647066F * rtb_Top_High_Frequency;

  /* Outport: '<Root>/Bottom_High_Frequency' incorporates:
   *  Gain: '<Root>/Gain3'
   */
  Asw_DCAC_Y.Bottom_High_Frequency = 0.000367647066F * rtb_Gain7_h;

  /* Update for Sin: '<S5>/Sine Wave3' */
  lastSin_tmp = Asw_DCAC_DW.lastSin;
  Asw_DCAC_DW.lastSin = Asw_DCAC_DW.lastSin * 0.99998026085613712 +
    Asw_DCAC_DW.lastCos * 0.00628314396555895;
  Asw_DCAC_DW.lastCos = Asw_DCAC_DW.lastCos * 0.99998026085613712 - lastSin_tmp *
    0.00628314396555895;

  /* Update for DiscreteIntegrator: '<S39>/Integrator' */
  Asw_DCAC_DW.Integrator_DSTATE = 5.0E-7F * rtb_Sum3 + Integrator;

  /* Update for DiscreteIntegrator: '<S87>/Integrator' */
  Asw_DCAC_DW.Integrator_DSTATE_d = 5.0E-7F * rtb_Sum7 + Integrator_n;

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

  /* Enable for Sin: '<S5>/Sine Wave3' */
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
