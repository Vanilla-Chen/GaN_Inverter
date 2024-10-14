/*
 * File: Asw_DCAC.c
 *
 * Code generated for Simulink model 'Asw_DCAC'.
 *
 * Model version                  : 1.135
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Mon Sep 30 13:37:54 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Asw_DCAC.h"
#include "Asw_DCAC_private.h"
#include <math.h>
#include "rt_nonfinite.h"
#include <stdint.h>
#include <float.h>
#include <stdbool.h>

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

/*
 * Output and update for atomic system:
 *    '<S9>/MATLAB Function'
 *    '<S10>/MATLAB Function'
 */
void Asw_DCAC_MATLABFunction(float rtu_wt, double *rty_mode)
{
  *rty_mode = (((rtu_wt >= 0.0F) && (rtu_wt < 0.039269908169872414)) || ((rtu_wt
    >= 3.1023227454199209) && (rtu_wt < 3.1808625617596653)) || ((rtu_wt >=
    6.2439153990097136) && (rtu_wt < 6.2831853071795862)));
}

float rt_modf_snf(float u0, float u1)
{
  float y;
  y = u0;
  if (u1 == 0.0F) {
    if (u0 == 0.0F) {
      y = u1;
    }
  } else if (rtIsNaNF(u0) || rtIsNaNF(u1) || rtIsInfF(u0)) {
    y = (rtNaNF);
  } else if (u0 == 0.0F) {
    y = 0.0F / u1;
  } else if (rtIsInfF(u1)) {
    if ((u1 < 0.0F) != (u0 < 0.0F)) {
      y = u1;
    }
  } else {
    bool yEq;
    y = fmodf(u0, u1);
    yEq = (y == 0.0F);
    if ((!yEq) && (u1 > floorf(u1))) {
      float q;
      q = fabsf(u0 / u1);
      yEq = !(fabsf(q - floorf(q + 0.5F)) > FLT_EPSILON * q);
    }

    if (yEq) {
      y = u1 * 0.0F;
    } else if ((u0 < 0.0F) != (u1 < 0.0F)) {
      y += u1;
    }
  }

  return y;
}

/* Model step function */
void Asw_DCAC_step(void)
{
  float u0;
  float v;

  /* DataTypeConversion: '<S5>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/BSW_Volt_Load'
   */
  Asw_DCAC_B.DataTypeConversion1 = (float)Asw_DCAC_BSW_Volt_Load;

  /* Gain: '<S5>/Gain6' */
  Asw_DCAC_B.Gain6 = 0.000805664051F * Asw_DCAC_B.DataTypeConversion1;

  /* Sum: '<S5>/Add' incorporates:
   *  Constant: '<S5>/Constant3'
   */
  Asw_DCAC_B.Add = Asw_DCAC_B.Gain6 - 1.65F;

  /* Gain: '<S5>/Volt_Load' */
  Asw_DCAC_B.Volt_Load = 32.3333321F * Asw_DCAC_B.Add;

  /* Delay: '<S308>/Delay' */
  Asw_DCAC_B.Delay = Asw_DCAC_DW.Delay_DSTATE;

  /* Sum: '<S308>/Sum' */
  Asw_DCAC_B.Sum = Asw_DCAC_B.Volt_Load - Asw_DCAC_B.Delay;

  /* Gain: '<S308>/Gain' */
  Asw_DCAC_B.Gain = 0.5F * Asw_DCAC_B.Sum;

  /* Delay: '<S308>/Delay1' */
  Asw_DCAC_B.Delay1 = Asw_DCAC_DW.Delay1_DSTATE;

  /* Sum: '<S308>/Sum2' */
  Asw_DCAC_B.Sum2 = Asw_DCAC_B.Gain - Asw_DCAC_B.Delay1;

  /* Delay: '<S2>/Delay1' */
  Asw_DCAC_B.Delay1_k = Asw_DCAC_DW.Delay1_DSTATE_d;

  /* Product: '<S308>/Product' */
  Asw_DCAC_B.Product = Asw_DCAC_B.Sum2 * Asw_DCAC_B.Delay1_k;

  /* DiscreteIntegrator: '<S308>/Integrator' */
  if (Asw_DCAC_DW.Integrator_SYSTEM_ENABLE != 0) {
    /* DiscreteIntegrator: '<S308>/Integrator' */
    Asw_DCAC_B.Integrator = Asw_DCAC_DW.Integrator_DSTATE;
  } else {
    /* DiscreteIntegrator: '<S308>/Integrator' */
    Asw_DCAC_B.Integrator = 1.0E-6F * Asw_DCAC_B.Product +
      Asw_DCAC_DW.Integrator_DSTATE;
  }

  /* End of DiscreteIntegrator: '<S308>/Integrator' */

  /* DiscreteIntegrator: '<S308>/Integrator1' */
  if (Asw_DCAC_DW.Integrator1_SYSTEM_ENABLE != 0) {
    /* DiscreteIntegrator: '<S308>/Integrator1' */
    Asw_DCAC_B.Integrator1 = Asw_DCAC_DW.Integrator1_DSTATE;
  } else {
    /* DiscreteIntegrator: '<S308>/Integrator1' */
    Asw_DCAC_B.Integrator1 = 1.0E-6F * Asw_DCAC_B.Integrator +
      Asw_DCAC_DW.Integrator1_DSTATE;
  }

  /* End of DiscreteIntegrator: '<S308>/Integrator1' */

  /* Product: '<S308>/Product1' */
  Asw_DCAC_B.Product1 = Asw_DCAC_B.Delay1_k * Asw_DCAC_B.Integrator1;

  /* Delay: '<S2>/Delay' */
  Asw_DCAC_B.Delay_a = Asw_DCAC_DW.Delay_DSTATE_g;

  /* MATLAB Function: '<S2>/MATLAB Function' */
  Asw_DCAC_B.d = cosf(Asw_DCAC_B.Delay_a) * Asw_DCAC_B.Integrator + sinf
    (Asw_DCAC_B.Delay_a) * Asw_DCAC_B.Product1;
  Asw_DCAC_B.q = -sinf(Asw_DCAC_B.Delay_a) * Asw_DCAC_B.Integrator + cosf
    (Asw_DCAC_B.Delay_a) * Asw_DCAC_B.Product1;
  Asw_DCAC_B.z = 0.0;

  /* DiscreteIntegrator: '<S340>/Integrator' */
  Asw_DCAC_B.Integrator_d = Asw_DCAC_DW.Integrator_DSTATE_i;

  /* Sum: '<S349>/Sum' */
  Asw_DCAC_B.Sum_c = Asw_DCAC_B.d + Asw_DCAC_B.Integrator_d;

  /* Sum: '<S2>/Sum4' incorporates:
   *  Constant: '<S2>/Constant9'
   */
  Asw_DCAC_B.Sum4 = Asw_DCAC_B.Sum_c + 6283.18555F;

  /* DiscreteIntegrator: '<S2>/Integrator' */
  if (Asw_DCAC_DW.Integrator_SYSTEM_ENABLE_f != 0) {
    /* DiscreteIntegrator: '<S2>/Integrator' */
    Asw_DCAC_B.Integrator_dy = Asw_DCAC_DW.Integrator_DSTATE_j;
  } else {
    /* DiscreteIntegrator: '<S2>/Integrator' */
    Asw_DCAC_B.Integrator_dy = 1.0E-6F * Asw_DCAC_B.Sum4 +
      Asw_DCAC_DW.Integrator_DSTATE_j;
  }

  /* End of DiscreteIntegrator: '<S2>/Integrator' */

  /* Math: '<S2>/Math Function3' incorporates:
   *  Constant: '<S2>/Constant10'
   */
  Asw_DCAC_B.MathFunction3 = rt_modf_snf(Asw_DCAC_B.Integrator_dy, 6.28318548F);

  /* MATLAB Function: '<S9>/MATLAB Function' */
  Asw_DCAC_MATLABFunction(Asw_DCAC_B.MathFunction3, &Asw_DCAC_B.mode_p);

  /* DataTypeConversion: '<S4>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/BSW_Curr_Induct'
   */
  Asw_DCAC_B.DataTypeConversion1_m = (float)Asw_DCAC_BSW_Curr_Induct;

  /* Gain: '<S4>/Gain6' */
  Asw_DCAC_B.Gain6_m = 0.000805664051F * Asw_DCAC_B.DataTypeConversion1_m;

  /* Sum: '<S4>/Add' incorporates:
   *  Constant: '<S4>/Constant3'
   */
  Asw_DCAC_B.Add_c = Asw_DCAC_B.Gain6_m - 1.65F;

  /* Gain: '<S4>/OPA_Curr_Induct' */
  Asw_DCAC_B.OPA_Curr_Induct = 0.01F * Asw_DCAC_B.Add_c;

  /* Gain: '<S4>/Curr_Induct' */
  Asw_DCAC_B.Curr_Induct = 66.6666641F * Asw_DCAC_B.OPA_Curr_Induct;

  /* DataTypeConversion: '<S3>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/BSW_Curr_Load'
   */
  Asw_DCAC_B.DataTypeConversion1_n = (float)Asw_DCAC_BSW_Curr_Load;

  /* Gain: '<S3>/Gain6' */
  Asw_DCAC_B.Gain6_k = 0.000805664051F * Asw_DCAC_B.DataTypeConversion1_n;

  /* Sum: '<S3>/Add' incorporates:
   *  Constant: '<S3>/Constant3'
   */
  Asw_DCAC_B.Add_k = Asw_DCAC_B.Gain6_k - 1.65F;

  /* Gain: '<S3>/OPA_Curr_Load' */
  Asw_DCAC_B.OPA_Curr_Load = 0.01F * Asw_DCAC_B.Add_k;

  /* Gain: '<S3>/Curr_Load' */
  Asw_DCAC_B.Curr_Load = 66.6666641F * Asw_DCAC_B.OPA_Curr_Load;

  /* MATLAB Function: '<S10>/MATLAB Function' */
  Asw_DCAC_MATLABFunction(Asw_DCAC_B.MathFunction3, &Asw_DCAC_B.mode);

  /* Trigonometry: '<S1>/Sin1' */
  Asw_DCAC_B.Sin1 = sinf(Asw_DCAC_B.MathFunction3);

  /* Product: '<S1>/U_SET' incorporates:
   *  Constant: '<Root>/Constant3'
   */
  Asw_DCAC_B.U_SET = Asw_DCAC_B.Sin1 * 50.0F;

  /* Sum: '<S1>/U_PID_ERR' */
  Asw_DCAC_B.U_PID_ERR = Asw_DCAC_B.U_SET - Asw_DCAC_B.Volt_Load;

  /* Gain: '<S190>/Integral Gain' */
  Asw_DCAC_B.IntegralGain = 0.0F * Asw_DCAC_B.U_PID_ERR;

  /* DiscreteIntegrator: '<S193>/Integrator' */
  Asw_DCAC_B.Integrator_n = 1.0E-6F * Asw_DCAC_B.IntegralGain +
    Asw_DCAC_DW.Integrator_DSTATE_p;

  /* Gain: '<S238>/Integral Gain' */
  Asw_DCAC_B.IntegralGain_j = 0.0F * Asw_DCAC_B.U_PID_ERR;

  /* DiscreteIntegrator: '<S241>/Integrator' */
  Asw_DCAC_B.Integrator_h = 1.0E-6F * Asw_DCAC_B.IntegralGain_j +
    Asw_DCAC_DW.Integrator_DSTATE_h;

  /* MultiPortSwitch: '<S10>/Multiport Switch' */
  if ((int32_t)Asw_DCAC_B.mode == 0) {
    /* Gain: '<S198>/Proportional Gain' */
    Asw_DCAC_B.ProportionalGain_g = 0.1F * Asw_DCAC_B.U_PID_ERR;

    /* Sum: '<S202>/Sum' */
    Asw_DCAC_B.Sum_f = Asw_DCAC_B.ProportionalGain_g + Asw_DCAC_B.Integrator_n;

    /* MultiPortSwitch: '<S10>/Multiport Switch' */
    Asw_DCAC_B.MultiportSwitch = Asw_DCAC_B.Sum_f;
  } else {
    /* Gain: '<S246>/Proportional Gain' */
    Asw_DCAC_B.ProportionalGain = 0.1F * Asw_DCAC_B.U_PID_ERR;

    /* Sum: '<S250>/Sum' */
    Asw_DCAC_B.Sum_e = Asw_DCAC_B.ProportionalGain + Asw_DCAC_B.Integrator_h;

    /* MultiPortSwitch: '<S10>/Multiport Switch' */
    Asw_DCAC_B.MultiportSwitch = Asw_DCAC_B.Sum_e;
  }

  /* End of MultiPortSwitch: '<S10>/Multiport Switch' */

  /* Sum: '<S1>/I_L_SET1' */
  Asw_DCAC_B.I_L_SET1 = Asw_DCAC_B.Curr_Load + Asw_DCAC_B.MultiportSwitch;

  /* Sum: '<S1>/I_PID_ERR' */
  Asw_DCAC_B.I_PID_ERR = Asw_DCAC_B.I_L_SET1 - Asw_DCAC_B.Curr_Induct;

  /* Gain: '<S91>/Integral Gain' */
  Asw_DCAC_B.IntegralGain_e = 0.1F * Asw_DCAC_B.I_PID_ERR;

  /* DiscreteIntegrator: '<S94>/Integrator' */
  Asw_DCAC_B.Integrator_k = 1.0E-6F * Asw_DCAC_B.IntegralGain_e +
    Asw_DCAC_DW.Integrator_DSTATE_e;

  /* Gain: '<S139>/Integral Gain' */
  Asw_DCAC_B.IntegralGain_c = 0.1F * Asw_DCAC_B.I_PID_ERR;

  /* DiscreteIntegrator: '<S142>/Integrator' */
  Asw_DCAC_B.Integrator_j = 1.0E-6F * Asw_DCAC_B.IntegralGain_c +
    Asw_DCAC_DW.Integrator_DSTATE_o;

  /* MultiPortSwitch: '<S9>/Multiport Switch' */
  if ((int32_t)Asw_DCAC_B.mode_p == 0) {
    /* Gain: '<S99>/Proportional Gain' */
    Asw_DCAC_B.ProportionalGain_j = 25.036F * Asw_DCAC_B.I_PID_ERR;

    /* Sum: '<S103>/Sum' */
    Asw_DCAC_B.Sum_p = Asw_DCAC_B.ProportionalGain_j + Asw_DCAC_B.Integrator_k;

    /* MultiPortSwitch: '<S9>/Multiport Switch' */
    Asw_DCAC_B.MultiportSwitch_h = Asw_DCAC_B.Sum_p;
  } else {
    /* Gain: '<S147>/Proportional Gain' */
    Asw_DCAC_B.ProportionalGain_d = 10.0F * Asw_DCAC_B.I_PID_ERR;

    /* Sum: '<S151>/Sum' */
    Asw_DCAC_B.Sum_b = Asw_DCAC_B.ProportionalGain_d + Asw_DCAC_B.Integrator_j;

    /* MultiPortSwitch: '<S9>/Multiport Switch' */
    Asw_DCAC_B.MultiportSwitch_h = Asw_DCAC_B.Sum_b;
  }

  /* End of MultiPortSwitch: '<S9>/Multiport Switch' */

  /* Sum: '<S1>/FeedForward' */
  Asw_DCAC_B.FeedForward = Asw_DCAC_B.Volt_Load + Asw_DCAC_B.MultiportSwitch_h;

  /* Gain: '<S1>/VBUS_Normalization' */
  Asw_DCAC_B.VBUS_Normalization = 0.0111111114F * Asw_DCAC_B.FeedForward;

  /* Saturate: '<S1>/Limit' */
  u0 = Asw_DCAC_B.VBUS_Normalization;
  if (u0 > 1.0F) {
    /* Saturate: '<S1>/Limit' */
    Asw_DCAC_B.Limit = 1.0F;
  } else if (u0 < -1.0F) {
    /* Saturate: '<S1>/Limit' */
    Asw_DCAC_B.Limit = -1.0F;
  } else {
    /* Saturate: '<S1>/Limit' */
    Asw_DCAC_B.Limit = u0;
  }

  /* End of Saturate: '<S1>/Limit' */

  /* Gain: '<Root>/Normal2TIM' */
  Asw_DCAC_B.Normal2TIM = 170.0F * Asw_DCAC_B.Limit;

  /* DataTypeConversion: '<Root>/Data Type Conversion1' */
  u0 = Asw_DCAC_B.Normal2TIM;
  v = fabsf(u0);
  if (v < 8.388608E+6F) {
    if (v >= 0.5F) {
      u0 = floorf(u0 + 0.5F);
    } else {
      u0 *= 0.0F;
    }
  }

  if (rtIsNaNF(u0)) {
    u0 = 0.0F;
  } else {
    u0 = fmodf(u0, 65536.0F);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion1' */
  Asw_DCAC_B.DataTypeConversion1_j = (int16_t)(u0 < 0.0F ? (int32_t)(int16_t)-
    (int16_t)(uint16_t)-u0 : (int32_t)(int16_t)(uint16_t)u0);

  /* MATLAB Function: '<Root>/Unipolar fast and slow modulation' */
  if (Asw_DCAC_B.DataTypeConversion1_j >= 0) {
    Asw_DCAC_B.Top_High_Frequency = Asw_DCAC_B.DataTypeConversion1_j;
    Asw_DCAC_B.Bottom_High_Frequency = 0.0F;

    /* Outport: '<Root>/Low_Frequency' */
    Asw_DCAC_Low_Frequency = 0.0F;
  } else {
    Asw_DCAC_B.Bottom_High_Frequency = -(float)Asw_DCAC_B.DataTypeConversion1_j;
    Asw_DCAC_B.Top_High_Frequency = 0.0F;

    /* Outport: '<Root>/Low_Frequency' */
    Asw_DCAC_Low_Frequency = 1.0F;
  }

  /* End of MATLAB Function: '<Root>/Unipolar fast and slow modulation' */

  /* Outport: '<Root>/Top_High_Frequency' incorporates:
   *  Gain: '<Root>/TIM2Pulse_TopHF'
   */
  Asw_DCAC_Top_High_Frequency = 0.00588235306F * Asw_DCAC_B.Top_High_Frequency;

  /* Outport: '<Root>/Bottom_High_Frequency' incorporates:
   *  Gain: '<Root>/TIM2Pulse_BotHF'
   */
  Asw_DCAC_Bottom_High_Frequency = 0.00588235306F *
    Asw_DCAC_B.Bottom_High_Frequency;

  /* Update for Delay: '<S308>/Delay' */
  Asw_DCAC_DW.Delay_DSTATE = Asw_DCAC_B.Integrator;

  /* Update for Delay: '<S308>/Delay1' */
  Asw_DCAC_DW.Delay1_DSTATE = Asw_DCAC_B.Product1;

  /* Update for Delay: '<S2>/Delay1' */
  Asw_DCAC_DW.Delay1_DSTATE_d = Asw_DCAC_B.Sum4;

  /* Update for DiscreteIntegrator: '<S308>/Integrator' */
  Asw_DCAC_DW.Integrator_SYSTEM_ENABLE = 0U;
  Asw_DCAC_DW.Integrator_DSTATE = 1.0E-6F * Asw_DCAC_B.Product +
    Asw_DCAC_B.Integrator;

  /* Update for DiscreteIntegrator: '<S308>/Integrator1' */
  Asw_DCAC_DW.Integrator1_SYSTEM_ENABLE = 0U;
  Asw_DCAC_DW.Integrator1_DSTATE = 1.0E-6F * Asw_DCAC_B.Integrator +
    Asw_DCAC_B.Integrator1;

  /* Update for Delay: '<S2>/Delay' */
  Asw_DCAC_DW.Delay_DSTATE_g = Asw_DCAC_B.MathFunction3;

  /* Update for DiscreteIntegrator: '<S340>/Integrator' */
  Asw_DCAC_DW.Integrator_DSTATE_i += 2.0E-6F * Asw_DCAC_B.d;

  /* Update for DiscreteIntegrator: '<S2>/Integrator' */
  Asw_DCAC_DW.Integrator_SYSTEM_ENABLE_f = 0U;
  Asw_DCAC_DW.Integrator_DSTATE_j = 1.0E-6F * Asw_DCAC_B.Sum4 +
    Asw_DCAC_B.Integrator_dy;

  /* Update for DiscreteIntegrator: '<S193>/Integrator' */
  Asw_DCAC_DW.Integrator_DSTATE_p = 1.0E-6F * Asw_DCAC_B.IntegralGain +
    Asw_DCAC_B.Integrator_n;

  /* Update for DiscreteIntegrator: '<S241>/Integrator' */
  Asw_DCAC_DW.Integrator_DSTATE_h = 1.0E-6F * Asw_DCAC_B.IntegralGain_j +
    Asw_DCAC_B.Integrator_h;

  /* Update for DiscreteIntegrator: '<S94>/Integrator' */
  Asw_DCAC_DW.Integrator_DSTATE_e = 1.0E-6F * Asw_DCAC_B.IntegralGain_e +
    Asw_DCAC_B.Integrator_k;

  /* Update for DiscreteIntegrator: '<S142>/Integrator' */
  Asw_DCAC_DW.Integrator_DSTATE_o = 1.0E-6F * Asw_DCAC_B.IntegralGain_c +
    Asw_DCAC_B.Integrator_j;
}

/* Model initialize function */
void Asw_DCAC_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(double));

  /* Enable for DiscreteIntegrator: '<S308>/Integrator' */
  Asw_DCAC_DW.Integrator_SYSTEM_ENABLE = 1U;

  /* Enable for DiscreteIntegrator: '<S308>/Integrator1' */
  Asw_DCAC_DW.Integrator1_SYSTEM_ENABLE = 1U;

  /* Enable for DiscreteIntegrator: '<S2>/Integrator' */
  Asw_DCAC_DW.Integrator_SYSTEM_ENABLE_f = 1U;
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
