/*
 * File: Asw_DCAC.c
 *
 * Code generated for Simulink model 'Asw_DCAC'.
 *
 * Model version                  : 1.113
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Fri Jul 19 16:45:48 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Asw_DCAC.h"
#include <math.h>
#include <stdint.h>

/* Exported data definition */

/* Data with Exported storage */
int32_t Asw_DCAC_BSW_Curr_Induct;      /* '<Root>/BSW_Curr_Induct' */
int32_t Asw_DCAC_BSW_Curr_Load;        /* '<Root>/BSW_Curr_Load' */
int32_t Asw_DCAC_BSW_Curr_cap;         /* '<Root>/BSW_Curr_cap' */
int32_t Asw_DCAC_BSW_Volt_Load;        /* '<Root>/BSW_Volt_Load' */
float Asw_DCAC_Bottom_High_Frequency;  /* '<Root>/Bottom_High_Frequency' */
float Asw_DCAC_Low_Frequency;          /* '<Root>/Low_Frequency' */
float Asw_DCAC_Top_High_Frequency;     /* '<Root>/Top_High_Frequency' */

/* Block signals (default storage) */
B_Asw_DCAC_T Asw_DCAC_B;

/* Block states (default storage) */
DW_Asw_DCAC_T Asw_DCAC_DW;

/* Real-time model */
static RT_MODEL_Asw_DCAC_T Asw_DCAC_M_;
RT_MODEL_Asw_DCAC_T *const Asw_DCAC_M = &Asw_DCAC_M_;

/* Model step function */
void Asw_DCAC_step(void)
{
  double HoldCosine;
  double lastSin_tmp;
  float u0;

  /* DataTypeConversion: '<S3>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/BSW_Volt_Load'
   */
  Asw_DCAC_B.DataTypeConversion1 = (float)Asw_DCAC_BSW_Volt_Load;

  /* Gain: '<S3>/Gain6' */
  Asw_DCAC_B.Gain6 = 0.000805664051F * Asw_DCAC_B.DataTypeConversion1;

  /* Sum: '<S3>/Add' incorporates:
   *  Constant: '<S3>/Constant3'
   */
  Asw_DCAC_B.Add = Asw_DCAC_B.Gain6 - 1.65F;

  /* Gain: '<S3>/Volt_Load' */
  Asw_DCAC_B.Volt_Load = 32.3333321F * Asw_DCAC_B.Add;

  /* DataTypeConversion: '<S2>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/BSW_Curr_Induct'
   */
  Asw_DCAC_B.DataTypeConversion1_m = (float)Asw_DCAC_BSW_Curr_Induct;

  /* Gain: '<S2>/Gain6' */
  Asw_DCAC_B.Gain6_m = 0.000805664051F * Asw_DCAC_B.DataTypeConversion1_m;

  /* Sum: '<S2>/Add' incorporates:
   *  Constant: '<S2>/Constant3'
   */
  Asw_DCAC_B.Add_c = Asw_DCAC_B.Gain6_m - 1.65F;

  /* Gain: '<S2>/OPA_Curr_Induct' */
  Asw_DCAC_B.OPA_Curr_Induct = 0.01F * Asw_DCAC_B.Add_c;

  /* Gain: '<S2>/Curr_Induct' */
  Asw_DCAC_B.Curr_Induct = 66.6666641F * Asw_DCAC_B.OPA_Curr_Induct;

  /* DataTypeConversion: '<S1>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/BSW_Curr_Load'
   */
  Asw_DCAC_B.DataTypeConversion1_n = (float)Asw_DCAC_BSW_Curr_Load;

  /* Gain: '<S1>/Gain6' */
  Asw_DCAC_B.Gain6_k = 0.000805664051F * Asw_DCAC_B.DataTypeConversion1_n;

  /* Sum: '<S1>/Add' incorporates:
   *  Constant: '<S1>/Constant3'
   */
  Asw_DCAC_B.Add_k = Asw_DCAC_B.Gain6_k - 1.65F;

  /* Gain: '<S1>/OPA_Curr_Load' */
  Asw_DCAC_B.OPA_Curr_Load = 0.01F * Asw_DCAC_B.Add_k;

  /* Gain: '<S1>/Curr_Load' */
  Asw_DCAC_B.Curr_Load = 66.6666641F * Asw_DCAC_B.OPA_Curr_Load;

  /* Sin: '<S5>/Sine Wave' */
  if (Asw_DCAC_DW.systemEnable != 0) {
    lastSin_tmp = 6283.1853071795858 * (((Asw_DCAC_M->Timing.clockTick0+
      Asw_DCAC_M->Timing.clockTickH0* 4294967296.0)) * 1.0E-5);
    Asw_DCAC_DW.lastSin = sin(lastSin_tmp);
    Asw_DCAC_DW.lastCos = cos(lastSin_tmp);
    Asw_DCAC_DW.systemEnable = 0;
  }

  /* Sin: '<S5>/Sine Wave' */
  Asw_DCAC_B.SineWave = (Asw_DCAC_DW.lastSin * 0.99802672842827156 +
    Asw_DCAC_DW.lastCos * -0.062790519529313374) * 0.99802672842827156 +
    (Asw_DCAC_DW.lastCos * 0.99802672842827156 - Asw_DCAC_DW.lastSin *
     -0.062790519529313374) * 0.062790519529313374;

  /* DataTypeConversion: '<S5>/Data Type Conversion2' */
  Asw_DCAC_B.DataTypeConversion2 = (float)Asw_DCAC_B.SineWave;

  /* Product: '<S5>/U_SET' incorporates:
   *  Constant: '<Root>/Constant'
   */
  Asw_DCAC_B.U_SET = Asw_DCAC_B.DataTypeConversion2 * 50.0F;

  /* Sum: '<S5>/U_PID_ERR' */
  Asw_DCAC_B.U_PID_ERR = Asw_DCAC_B.U_SET - Asw_DCAC_B.Volt_Load;

  /* Gain: '<S92>/Proportional Gain' */
  Asw_DCAC_B.ProportionalGain = 1.1F * Asw_DCAC_B.U_PID_ERR;

  /* Gain: '<S84>/Integral Gain' */
  Asw_DCAC_B.IntegralGain = 0.0001F * Asw_DCAC_B.U_PID_ERR;

  /* DiscreteIntegrator: '<S87>/Integrator' */
  Asw_DCAC_B.Integrator = 5.0E-6F * Asw_DCAC_B.IntegralGain +
    Asw_DCAC_DW.Integrator_DSTATE;

  /* Sum: '<S96>/Sum' */
  Asw_DCAC_B.Sum = Asw_DCAC_B.ProportionalGain + Asw_DCAC_B.Integrator;

  /* Sum: '<S5>/I_L_SET' */
  Asw_DCAC_B.I_L_SET = Asw_DCAC_B.Curr_Load + Asw_DCAC_B.Sum;

  /* Sum: '<S5>/I_PID_ERR' */
  Asw_DCAC_B.I_PID_ERR = Asw_DCAC_B.I_L_SET - Asw_DCAC_B.Curr_Induct;

  /* Gain: '<S44>/Proportional Gain' */
  Asw_DCAC_B.ProportionalGain_e = 1.6F * Asw_DCAC_B.I_PID_ERR;

  /* Gain: '<S36>/Integral Gain' */
  Asw_DCAC_B.IntegralGain_f = 0.0001F * Asw_DCAC_B.I_PID_ERR;

  /* DiscreteIntegrator: '<S39>/Integrator' */
  Asw_DCAC_B.Integrator_n = 5.0E-6F * Asw_DCAC_B.IntegralGain_f +
    Asw_DCAC_DW.Integrator_DSTATE_d;

  /* Sum: '<S48>/Sum' */
  Asw_DCAC_B.Sum_l = Asw_DCAC_B.ProportionalGain_e + Asw_DCAC_B.Integrator_n;

  /* Sum: '<S5>/FeedForward' */
  Asw_DCAC_B.FeedForward = Asw_DCAC_B.Volt_Load + Asw_DCAC_B.Sum_l;

  /* Gain: '<S5>/VBUS_Normalization' */
  Asw_DCAC_B.VBUS_Normalization = 0.0166666675F * Asw_DCAC_B.FeedForward;

  /* Saturate: '<S5>/Limit' */
  u0 = Asw_DCAC_B.VBUS_Normalization;
  if (u0 > 1.0F) {
    /* Saturate: '<S5>/Limit' */
    Asw_DCAC_B.Limit = 1.0F;
  } else if (u0 < -1.0F) {
    /* Saturate: '<S5>/Limit' */
    Asw_DCAC_B.Limit = -1.0F;
  } else {
    /* Saturate: '<S5>/Limit' */
    Asw_DCAC_B.Limit = u0;
  }

  /* End of Saturate: '<S5>/Limit' */

  /* Gain: '<Root>/Normal2TIM' */
  Asw_DCAC_B.Normal2TIM = 380.0F * Asw_DCAC_B.Limit;

  /* MATLAB Function: '<Root>/Unipolar fast and slow modulation' */
  if (Asw_DCAC_B.Normal2TIM >= 0.0F) {
    Asw_DCAC_B.Top_High_Frequency = Asw_DCAC_B.Normal2TIM;
    Asw_DCAC_B.Bottom_High_Frequency = 0.0F;

    /* Outport: '<Root>/Low_Frequency' */
    Asw_DCAC_Low_Frequency = 0.0F;
  } else {
    Asw_DCAC_B.Bottom_High_Frequency = -Asw_DCAC_B.Normal2TIM;
    Asw_DCAC_B.Top_High_Frequency = 0.0F;

    /* Outport: '<Root>/Low_Frequency' */
    Asw_DCAC_Low_Frequency = 1.0F;
  }

  /* End of MATLAB Function: '<Root>/Unipolar fast and slow modulation' */

  /* Outport: '<Root>/Top_High_Frequency' incorporates:
   *  Gain: '<Root>/TIM2Pulse_TopHF'
   */
  Asw_DCAC_Top_High_Frequency = 0.00263157906F * Asw_DCAC_B.Top_High_Frequency;

  /* Outport: '<Root>/Bottom_High_Frequency' incorporates:
   *  Gain: '<Root>/TIM2Pulse_BotHF'
   */
  Asw_DCAC_Bottom_High_Frequency = 0.00263157906F *
    Asw_DCAC_B.Bottom_High_Frequency;

  /* Update for Sin: '<S5>/Sine Wave' */
  lastSin_tmp = Asw_DCAC_DW.lastSin;
  HoldCosine = Asw_DCAC_DW.lastCos;
  Asw_DCAC_DW.lastSin = lastSin_tmp * 0.99802672842827156 + HoldCosine *
    0.062790519529313374;
  Asw_DCAC_DW.lastCos = HoldCosine * 0.99802672842827156 - lastSin_tmp *
    0.062790519529313374;

  /* Update for DiscreteIntegrator: '<S87>/Integrator' */
  Asw_DCAC_DW.Integrator_DSTATE = 5.0E-6F * Asw_DCAC_B.IntegralGain +
    Asw_DCAC_B.Integrator;

  /* Update for DiscreteIntegrator: '<S39>/Integrator' */
  Asw_DCAC_DW.Integrator_DSTATE_d = 5.0E-6F * Asw_DCAC_B.IntegralGain_f +
    Asw_DCAC_B.Integrator_n;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 1.0E-5, which is the step size
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
  /* Enable for Sin: '<S5>/Sine Wave' */
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
