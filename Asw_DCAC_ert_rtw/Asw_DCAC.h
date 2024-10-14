/*
 * File: Asw_DCAC.h
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

#ifndef RTW_HEADER_Asw_DCAC_h_
#define RTW_HEADER_Asw_DCAC_h_
#ifndef Asw_DCAC_COMMON_INCLUDES_
#define Asw_DCAC_COMMON_INCLUDES_
#include <stdbool.h>
#include <stdint.h>
#include "complex_types.h"
#endif                                 /* Asw_DCAC_COMMON_INCLUDES_ */

#include "Asw_DCAC_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  double z;                            /* '<S2>/MATLAB Function' */
  double mode;                         /* '<S10>/MATLAB Function' */
  double mode_p;                       /* '<S9>/MATLAB Function' */
  float DataTypeConversion1;           /* '<S5>/Data Type Conversion1' */
  float Gain6;                         /* '<S5>/Gain6' */
  float Add;                           /* '<S5>/Add' */
  float Volt_Load;                     /* '<S5>/Volt_Load' */
  float Delay;                         /* '<S308>/Delay' */
  float Sum;                           /* '<S308>/Sum' */
  float Gain;                          /* '<S308>/Gain' */
  float Delay1;                        /* '<S308>/Delay1' */
  float Sum2;                          /* '<S308>/Sum2' */
  float Delay1_k;                      /* '<S2>/Delay1' */
  float Product;                       /* '<S308>/Product' */
  float Integrator;                    /* '<S308>/Integrator' */
  float Integrator1;                   /* '<S308>/Integrator1' */
  float Product1;                      /* '<S308>/Product1' */
  float Delay_a;                       /* '<S2>/Delay' */
  float Integrator_d;                  /* '<S340>/Integrator' */
  float Sum_c;                         /* '<S349>/Sum' */
  float Sum4;                          /* '<S2>/Sum4' */
  float Integrator_dy;                 /* '<S2>/Integrator' */
  float MathFunction3;                 /* '<S2>/Math Function3' */
  float DataTypeConversion1_m;         /* '<S4>/Data Type Conversion1' */
  float Gain6_m;                       /* '<S4>/Gain6' */
  float Add_c;                         /* '<S4>/Add' */
  float OPA_Curr_Induct;               /* '<S4>/OPA_Curr_Induct' */
  float Curr_Induct;                   /* '<S4>/Curr_Induct' */
  float DataTypeConversion1_n;         /* '<S3>/Data Type Conversion1' */
  float Gain6_k;                       /* '<S3>/Gain6' */
  float Add_k;                         /* '<S3>/Add' */
  float OPA_Curr_Load;                 /* '<S3>/OPA_Curr_Load' */
  float Curr_Load;                     /* '<S3>/Curr_Load' */
  float Sin1;                          /* '<S1>/Sin1' */
  float U_SET;                         /* '<S1>/U_SET' */
  float U_PID_ERR;                     /* '<S1>/U_PID_ERR' */
  float IntegralGain;                  /* '<S190>/Integral Gain' */
  float Integrator_n;                  /* '<S193>/Integrator' */
  float IntegralGain_j;                /* '<S238>/Integral Gain' */
  float Integrator_h;                  /* '<S241>/Integrator' */
  float MultiportSwitch;               /* '<S10>/Multiport Switch' */
  float I_L_SET1;                      /* '<S1>/I_L_SET1' */
  float I_PID_ERR;                     /* '<S1>/I_PID_ERR' */
  float IntegralGain_e;                /* '<S91>/Integral Gain' */
  float Integrator_k;                  /* '<S94>/Integrator' */
  float IntegralGain_c;                /* '<S139>/Integral Gain' */
  float Integrator_j;                  /* '<S142>/Integrator' */
  float MultiportSwitch_h;             /* '<S9>/Multiport Switch' */
  float FeedForward;                   /* '<S1>/FeedForward' */
  float VBUS_Normalization;            /* '<S1>/VBUS_Normalization' */
  float Limit;                         /* '<S1>/Limit' */
  float Normal2TIM;                    /* '<Root>/Normal2TIM' */
  float Top_High_Frequency;     /* '<Root>/Unipolar fast and slow modulation' */
  float Bottom_High_Frequency;  /* '<Root>/Unipolar fast and slow modulation' */
  float d;                             /* '<S2>/MATLAB Function' */
  float q;                             /* '<S2>/MATLAB Function' */
  float ProportionalGain;              /* '<S246>/Proportional Gain' */
  float Sum_e;                         /* '<S250>/Sum' */
  float ProportionalGain_g;            /* '<S198>/Proportional Gain' */
  float Sum_f;                         /* '<S202>/Sum' */
  float ProportionalGain_d;            /* '<S147>/Proportional Gain' */
  float Sum_b;                         /* '<S151>/Sum' */
  float ProportionalGain_j;            /* '<S99>/Proportional Gain' */
  float Sum_p;                         /* '<S103>/Sum' */
  int16_t DataTypeConversion1_j;       /* '<Root>/Data Type Conversion1' */
} B_Asw_DCAC_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  float Delay_DSTATE;                  /* '<S308>/Delay' */
  float Delay1_DSTATE;                 /* '<S308>/Delay1' */
  float Delay1_DSTATE_d;               /* '<S2>/Delay1' */
  float Integrator_DSTATE;             /* '<S308>/Integrator' */
  float Integrator1_DSTATE;            /* '<S308>/Integrator1' */
  float Delay_DSTATE_g;                /* '<S2>/Delay' */
  float Integrator_DSTATE_i;           /* '<S340>/Integrator' */
  float Integrator_DSTATE_j;           /* '<S2>/Integrator' */
  float Integrator_DSTATE_p;           /* '<S193>/Integrator' */
  float Integrator_DSTATE_h;           /* '<S241>/Integrator' */
  float Integrator_DSTATE_e;           /* '<S94>/Integrator' */
  float Integrator_DSTATE_o;           /* '<S142>/Integrator' */
  uint8_t Integrator_SYSTEM_ENABLE;    /* '<S308>/Integrator' */
  uint8_t Integrator1_SYSTEM_ENABLE;   /* '<S308>/Integrator1' */
  uint8_t Integrator_SYSTEM_ENABLE_f;  /* '<S2>/Integrator' */
} DW_Asw_DCAC_T;

/* Real-time Model Data Structure */
struct tag_RTM_Asw_DCAC_T {
  const char * volatile errorStatus;
};

/* Block signals (default storage) */
extern B_Asw_DCAC_T Asw_DCAC_B;

/* Block states (default storage) */
extern DW_Asw_DCAC_T Asw_DCAC_DW;

/* Model entry point functions */
extern void Asw_DCAC_initialize(void);
extern void Asw_DCAC_step(void);
extern void Asw_DCAC_terminate(void);

/* Exported data declaration */

/* Data with Exported storage */
extern int32_t Asw_DCAC_BSW_Curr_Induct;/* '<Root>/BSW_Curr_Induct' */
extern int32_t Asw_DCAC_BSW_Curr_Load; /* '<Root>/BSW_Curr_Load' */
extern int32_t Asw_DCAC_BSW_Curr_cap;  /* '<Root>/BSW_Curr_cap' */
extern int32_t Asw_DCAC_BSW_Volt_Load; /* '<Root>/BSW_Volt_Load' */
extern float Asw_DCAC_Bottom_High_Frequency;/* '<Root>/Bottom_High_Frequency' */
extern float Asw_DCAC_Low_Frequency;   /* '<Root>/Low_Frequency' */
extern float Asw_DCAC_Top_High_Frequency;/* '<Root>/Top_High_Frequency' */

/* Real-time Model object */
extern RT_MODEL_Asw_DCAC_T *const Asw_DCAC_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Constant' : Unused code path elimination
 * Block '<Root>/Data Type Conversion' : Unused code path elimination
 * Block '<S40>/Integral Gain' : Unused code path elimination
 * Block '<S43>/Integrator' : Unused code path elimination
 * Block '<S48>/Proportional Gain' : Unused code path elimination
 * Block '<S52>/Sum' : Unused code path elimination
 * Block '<S286>/Integral Gain' : Unused code path elimination
 * Block '<S289>/Integrator' : Unused code path elimination
 * Block '<S294>/Proportional Gain' : Unused code path elimination
 * Block '<S298>/Sum' : Unused code path elimination
 * Block '<S2>/Gain' : Unused code path elimination
 * Block '<S2>/Gain1' : Unused code path elimination
 * Block '<Root>/Scope' : Unused code path elimination
 * Block '<Root>/Sine Wave5' : Unused code path elimination
 * Block '<S7>/Data Type Conversion2' : Unused code path elimination
 * Block '<S7>/FeedForward' : Unused code path elimination
 * Block '<S7>/I_L_SET' : Unused code path elimination
 * Block '<S387>/Integral Gain' : Unused code path elimination
 * Block '<S390>/Integrator' : Unused code path elimination
 * Block '<S395>/Proportional Gain' : Unused code path elimination
 * Block '<S399>/Sum' : Unused code path elimination
 * Block '<S7>/I_PID_ERR' : Unused code path elimination
 * Block '<S7>/Limit' : Unused code path elimination
 * Block '<S7>/Sine Wave' : Unused code path elimination
 * Block '<S435>/Integral Gain' : Unused code path elimination
 * Block '<S438>/Integrator' : Unused code path elimination
 * Block '<S443>/Proportional Gain' : Unused code path elimination
 * Block '<S447>/Sum' : Unused code path elimination
 * Block '<S7>/U_PID_ERR' : Unused code path elimination
 * Block '<S7>/U_SET' : Unused code path elimination
 * Block '<S7>/VBUS_Normalization' : Unused code path elimination
 * Block '<S1>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S337>/Integral Gain' : Eliminated nontunable gain of 1
 * Block '<S345>/Proportional Gain' : Eliminated nontunable gain of 1
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Asw_DCAC'
 * '<S1>'   : 'Asw_DCAC/Load Current closed loop PLL control'
 * '<S2>'   : 'Asw_DCAC/PLL'
 * '<S3>'   : 'Asw_DCAC/Subsystem'
 * '<S4>'   : 'Asw_DCAC/Subsystem1'
 * '<S5>'   : 'Asw_DCAC/Subsystem2'
 * '<S6>'   : 'Asw_DCAC/Unipolar fast and slow modulation'
 * '<S7>'   : 'Asw_DCAC/Voltage closed loop'
 * '<S8>'   : 'Asw_DCAC/Load Current closed loop PLL control/I_PID_Controller1'
 * '<S9>'   : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1'
 * '<S10>'  : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2'
 * '<S11>'  : 'Asw_DCAC/Load Current closed loop PLL control/U_PID_Controller_0'
 * '<S12>'  : 'Asw_DCAC/Load Current closed loop PLL control/I_PID_Controller1/Anti-windup'
 * '<S13>'  : 'Asw_DCAC/Load Current closed loop PLL control/I_PID_Controller1/D Gain'
 * '<S14>'  : 'Asw_DCAC/Load Current closed loop PLL control/I_PID_Controller1/Filter'
 * '<S15>'  : 'Asw_DCAC/Load Current closed loop PLL control/I_PID_Controller1/Filter ICs'
 * '<S16>'  : 'Asw_DCAC/Load Current closed loop PLL control/I_PID_Controller1/I Gain'
 * '<S17>'  : 'Asw_DCAC/Load Current closed loop PLL control/I_PID_Controller1/Ideal P Gain'
 * '<S18>'  : 'Asw_DCAC/Load Current closed loop PLL control/I_PID_Controller1/Ideal P Gain Fdbk'
 * '<S19>'  : 'Asw_DCAC/Load Current closed loop PLL control/I_PID_Controller1/Integrator'
 * '<S20>'  : 'Asw_DCAC/Load Current closed loop PLL control/I_PID_Controller1/Integrator ICs'
 * '<S21>'  : 'Asw_DCAC/Load Current closed loop PLL control/I_PID_Controller1/N Copy'
 * '<S22>'  : 'Asw_DCAC/Load Current closed loop PLL control/I_PID_Controller1/N Gain'
 * '<S23>'  : 'Asw_DCAC/Load Current closed loop PLL control/I_PID_Controller1/P Copy'
 * '<S24>'  : 'Asw_DCAC/Load Current closed loop PLL control/I_PID_Controller1/Parallel P Gain'
 * '<S25>'  : 'Asw_DCAC/Load Current closed loop PLL control/I_PID_Controller1/Reset Signal'
 * '<S26>'  : 'Asw_DCAC/Load Current closed loop PLL control/I_PID_Controller1/Saturation'
 * '<S27>'  : 'Asw_DCAC/Load Current closed loop PLL control/I_PID_Controller1/Saturation Fdbk'
 * '<S28>'  : 'Asw_DCAC/Load Current closed loop PLL control/I_PID_Controller1/Sum'
 * '<S29>'  : 'Asw_DCAC/Load Current closed loop PLL control/I_PID_Controller1/Sum Fdbk'
 * '<S30>'  : 'Asw_DCAC/Load Current closed loop PLL control/I_PID_Controller1/Tracking Mode'
 * '<S31>'  : 'Asw_DCAC/Load Current closed loop PLL control/I_PID_Controller1/Tracking Mode Sum'
 * '<S32>'  : 'Asw_DCAC/Load Current closed loop PLL control/I_PID_Controller1/Tsamp - Integral'
 * '<S33>'  : 'Asw_DCAC/Load Current closed loop PLL control/I_PID_Controller1/Tsamp - Ngain'
 * '<S34>'  : 'Asw_DCAC/Load Current closed loop PLL control/I_PID_Controller1/postSat Signal'
 * '<S35>'  : 'Asw_DCAC/Load Current closed loop PLL control/I_PID_Controller1/preSat Signal'
 * '<S36>'  : 'Asw_DCAC/Load Current closed loop PLL control/I_PID_Controller1/Anti-windup/Passthrough'
 * '<S37>'  : 'Asw_DCAC/Load Current closed loop PLL control/I_PID_Controller1/D Gain/Disabled'
 * '<S38>'  : 'Asw_DCAC/Load Current closed loop PLL control/I_PID_Controller1/Filter/Disabled'
 * '<S39>'  : 'Asw_DCAC/Load Current closed loop PLL control/I_PID_Controller1/Filter ICs/Disabled'
 * '<S40>'  : 'Asw_DCAC/Load Current closed loop PLL control/I_PID_Controller1/I Gain/Internal Parameters'
 * '<S41>'  : 'Asw_DCAC/Load Current closed loop PLL control/I_PID_Controller1/Ideal P Gain/Passthrough'
 * '<S42>'  : 'Asw_DCAC/Load Current closed loop PLL control/I_PID_Controller1/Ideal P Gain Fdbk/Disabled'
 * '<S43>'  : 'Asw_DCAC/Load Current closed loop PLL control/I_PID_Controller1/Integrator/Discrete'
 * '<S44>'  : 'Asw_DCAC/Load Current closed loop PLL control/I_PID_Controller1/Integrator ICs/Internal IC'
 * '<S45>'  : 'Asw_DCAC/Load Current closed loop PLL control/I_PID_Controller1/N Copy/Disabled wSignal Specification'
 * '<S46>'  : 'Asw_DCAC/Load Current closed loop PLL control/I_PID_Controller1/N Gain/Disabled'
 * '<S47>'  : 'Asw_DCAC/Load Current closed loop PLL control/I_PID_Controller1/P Copy/Disabled'
 * '<S48>'  : 'Asw_DCAC/Load Current closed loop PLL control/I_PID_Controller1/Parallel P Gain/Internal Parameters'
 * '<S49>'  : 'Asw_DCAC/Load Current closed loop PLL control/I_PID_Controller1/Reset Signal/Disabled'
 * '<S50>'  : 'Asw_DCAC/Load Current closed loop PLL control/I_PID_Controller1/Saturation/Passthrough'
 * '<S51>'  : 'Asw_DCAC/Load Current closed loop PLL control/I_PID_Controller1/Saturation Fdbk/Disabled'
 * '<S52>'  : 'Asw_DCAC/Load Current closed loop PLL control/I_PID_Controller1/Sum/Sum_PI'
 * '<S53>'  : 'Asw_DCAC/Load Current closed loop PLL control/I_PID_Controller1/Sum Fdbk/Disabled'
 * '<S54>'  : 'Asw_DCAC/Load Current closed loop PLL control/I_PID_Controller1/Tracking Mode/Disabled'
 * '<S55>'  : 'Asw_DCAC/Load Current closed loop PLL control/I_PID_Controller1/Tracking Mode Sum/Passthrough'
 * '<S56>'  : 'Asw_DCAC/Load Current closed loop PLL control/I_PID_Controller1/Tsamp - Integral/TsSignalSpecification'
 * '<S57>'  : 'Asw_DCAC/Load Current closed loop PLL control/I_PID_Controller1/Tsamp - Ngain/Passthrough'
 * '<S58>'  : 'Asw_DCAC/Load Current closed loop PLL control/I_PID_Controller1/postSat Signal/Forward_Path'
 * '<S59>'  : 'Asw_DCAC/Load Current closed loop PLL control/I_PID_Controller1/preSat Signal/Forward_Path'
 * '<S60>'  : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller'
 * '<S61>'  : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller1'
 * '<S62>'  : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/MATLAB Function'
 * '<S63>'  : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller/Anti-windup'
 * '<S64>'  : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller/D Gain'
 * '<S65>'  : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller/Filter'
 * '<S66>'  : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller/Filter ICs'
 * '<S67>'  : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller/I Gain'
 * '<S68>'  : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller/Ideal P Gain'
 * '<S69>'  : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller/Ideal P Gain Fdbk'
 * '<S70>'  : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller/Integrator'
 * '<S71>'  : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller/Integrator ICs'
 * '<S72>'  : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller/N Copy'
 * '<S73>'  : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller/N Gain'
 * '<S74>'  : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller/P Copy'
 * '<S75>'  : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller/Parallel P Gain'
 * '<S76>'  : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller/Reset Signal'
 * '<S77>'  : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller/Saturation'
 * '<S78>'  : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller/Saturation Fdbk'
 * '<S79>'  : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller/Sum'
 * '<S80>'  : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller/Sum Fdbk'
 * '<S81>'  : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller/Tracking Mode'
 * '<S82>'  : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller/Tracking Mode Sum'
 * '<S83>'  : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller/Tsamp - Integral'
 * '<S84>'  : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller/Tsamp - Ngain'
 * '<S85>'  : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller/postSat Signal'
 * '<S86>'  : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller/preSat Signal'
 * '<S87>'  : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller/Anti-windup/Passthrough'
 * '<S88>'  : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller/D Gain/Disabled'
 * '<S89>'  : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller/Filter/Disabled'
 * '<S90>'  : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller/Filter ICs/Disabled'
 * '<S91>'  : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller/I Gain/Internal Parameters'
 * '<S92>'  : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller/Ideal P Gain/Passthrough'
 * '<S93>'  : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller/Ideal P Gain Fdbk/Disabled'
 * '<S94>'  : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller/Integrator/Discrete'
 * '<S95>'  : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller/Integrator ICs/Internal IC'
 * '<S96>'  : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller/N Copy/Disabled wSignal Specification'
 * '<S97>'  : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller/N Gain/Disabled'
 * '<S98>'  : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller/P Copy/Disabled'
 * '<S99>'  : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller/Parallel P Gain/Internal Parameters'
 * '<S100>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller/Reset Signal/Disabled'
 * '<S101>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller/Saturation/Passthrough'
 * '<S102>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller/Saturation Fdbk/Disabled'
 * '<S103>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller/Sum/Sum_PI'
 * '<S104>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller/Sum Fdbk/Disabled'
 * '<S105>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller/Tracking Mode/Disabled'
 * '<S106>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller/Tracking Mode Sum/Passthrough'
 * '<S107>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller/Tsamp - Integral/TsSignalSpecification'
 * '<S108>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller/Tsamp - Ngain/Passthrough'
 * '<S109>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller/postSat Signal/Forward_Path'
 * '<S110>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller/preSat Signal/Forward_Path'
 * '<S111>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller1/Anti-windup'
 * '<S112>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller1/D Gain'
 * '<S113>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller1/Filter'
 * '<S114>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller1/Filter ICs'
 * '<S115>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller1/I Gain'
 * '<S116>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller1/Ideal P Gain'
 * '<S117>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller1/Ideal P Gain Fdbk'
 * '<S118>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller1/Integrator'
 * '<S119>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller1/Integrator ICs'
 * '<S120>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller1/N Copy'
 * '<S121>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller1/N Gain'
 * '<S122>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller1/P Copy'
 * '<S123>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller1/Parallel P Gain'
 * '<S124>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller1/Reset Signal'
 * '<S125>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller1/Saturation'
 * '<S126>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller1/Saturation Fdbk'
 * '<S127>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller1/Sum'
 * '<S128>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller1/Sum Fdbk'
 * '<S129>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller1/Tracking Mode'
 * '<S130>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller1/Tracking Mode Sum'
 * '<S131>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller1/Tsamp - Integral'
 * '<S132>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller1/Tsamp - Ngain'
 * '<S133>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller1/postSat Signal'
 * '<S134>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller1/preSat Signal'
 * '<S135>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller1/Anti-windup/Passthrough'
 * '<S136>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller1/D Gain/Disabled'
 * '<S137>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller1/Filter/Disabled'
 * '<S138>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller1/Filter ICs/Disabled'
 * '<S139>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller1/I Gain/Internal Parameters'
 * '<S140>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller1/Ideal P Gain/Passthrough'
 * '<S141>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller1/Ideal P Gain Fdbk/Disabled'
 * '<S142>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller1/Integrator/Discrete'
 * '<S143>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller1/Integrator ICs/Internal IC'
 * '<S144>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller1/N Copy/Disabled wSignal Specification'
 * '<S145>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller1/N Gain/Disabled'
 * '<S146>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller1/P Copy/Disabled'
 * '<S147>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller1/Parallel P Gain/Internal Parameters'
 * '<S148>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller1/Reset Signal/Disabled'
 * '<S149>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller1/Saturation/Passthrough'
 * '<S150>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller1/Saturation Fdbk/Disabled'
 * '<S151>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller1/Sum/Sum_PI'
 * '<S152>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller1/Sum Fdbk/Disabled'
 * '<S153>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller1/Tracking Mode/Disabled'
 * '<S154>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller1/Tracking Mode Sum/Passthrough'
 * '<S155>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller1/Tsamp - Integral/TsSignalSpecification'
 * '<S156>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller1/Tsamp - Ngain/Passthrough'
 * '<S157>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller1/postSat Signal/Forward_Path'
 * '<S158>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem1/I_PID_Controller1/preSat Signal/Forward_Path'
 * '<S159>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/MATLAB Function'
 * '<S160>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller'
 * '<S161>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller1'
 * '<S162>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller/Anti-windup'
 * '<S163>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller/D Gain'
 * '<S164>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller/Filter'
 * '<S165>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller/Filter ICs'
 * '<S166>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller/I Gain'
 * '<S167>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller/Ideal P Gain'
 * '<S168>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller/Ideal P Gain Fdbk'
 * '<S169>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller/Integrator'
 * '<S170>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller/Integrator ICs'
 * '<S171>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller/N Copy'
 * '<S172>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller/N Gain'
 * '<S173>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller/P Copy'
 * '<S174>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller/Parallel P Gain'
 * '<S175>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller/Reset Signal'
 * '<S176>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller/Saturation'
 * '<S177>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller/Saturation Fdbk'
 * '<S178>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller/Sum'
 * '<S179>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller/Sum Fdbk'
 * '<S180>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller/Tracking Mode'
 * '<S181>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller/Tracking Mode Sum'
 * '<S182>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller/Tsamp - Integral'
 * '<S183>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller/Tsamp - Ngain'
 * '<S184>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller/postSat Signal'
 * '<S185>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller/preSat Signal'
 * '<S186>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller/Anti-windup/Passthrough'
 * '<S187>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller/D Gain/Disabled'
 * '<S188>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller/Filter/Disabled'
 * '<S189>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller/Filter ICs/Disabled'
 * '<S190>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller/I Gain/Internal Parameters'
 * '<S191>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller/Ideal P Gain/Passthrough'
 * '<S192>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller/Ideal P Gain Fdbk/Disabled'
 * '<S193>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller/Integrator/Discrete'
 * '<S194>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller/Integrator ICs/Internal IC'
 * '<S195>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller/N Copy/Disabled wSignal Specification'
 * '<S196>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller/N Gain/Disabled'
 * '<S197>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller/P Copy/Disabled'
 * '<S198>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller/Parallel P Gain/Internal Parameters'
 * '<S199>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller/Reset Signal/Disabled'
 * '<S200>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller/Saturation/Passthrough'
 * '<S201>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller/Saturation Fdbk/Disabled'
 * '<S202>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller/Sum/Sum_PI'
 * '<S203>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller/Sum Fdbk/Disabled'
 * '<S204>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller/Tracking Mode/Disabled'
 * '<S205>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller/Tracking Mode Sum/Passthrough'
 * '<S206>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller/Tsamp - Integral/TsSignalSpecification'
 * '<S207>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller/Tsamp - Ngain/Passthrough'
 * '<S208>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller/postSat Signal/Forward_Path'
 * '<S209>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller/preSat Signal/Forward_Path'
 * '<S210>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller1/Anti-windup'
 * '<S211>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller1/D Gain'
 * '<S212>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller1/Filter'
 * '<S213>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller1/Filter ICs'
 * '<S214>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller1/I Gain'
 * '<S215>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller1/Ideal P Gain'
 * '<S216>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller1/Ideal P Gain Fdbk'
 * '<S217>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller1/Integrator'
 * '<S218>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller1/Integrator ICs'
 * '<S219>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller1/N Copy'
 * '<S220>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller1/N Gain'
 * '<S221>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller1/P Copy'
 * '<S222>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller1/Parallel P Gain'
 * '<S223>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller1/Reset Signal'
 * '<S224>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller1/Saturation'
 * '<S225>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller1/Saturation Fdbk'
 * '<S226>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller1/Sum'
 * '<S227>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller1/Sum Fdbk'
 * '<S228>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller1/Tracking Mode'
 * '<S229>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller1/Tracking Mode Sum'
 * '<S230>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller1/Tsamp - Integral'
 * '<S231>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller1/Tsamp - Ngain'
 * '<S232>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller1/postSat Signal'
 * '<S233>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller1/preSat Signal'
 * '<S234>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller1/Anti-windup/Passthrough'
 * '<S235>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller1/D Gain/Disabled'
 * '<S236>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller1/Filter/Disabled'
 * '<S237>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller1/Filter ICs/Disabled'
 * '<S238>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller1/I Gain/Internal Parameters'
 * '<S239>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller1/Ideal P Gain/Passthrough'
 * '<S240>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller1/Ideal P Gain Fdbk/Disabled'
 * '<S241>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller1/Integrator/Discrete'
 * '<S242>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller1/Integrator ICs/Internal IC'
 * '<S243>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller1/N Copy/Disabled wSignal Specification'
 * '<S244>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller1/N Gain/Disabled'
 * '<S245>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller1/P Copy/Disabled'
 * '<S246>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller1/Parallel P Gain/Internal Parameters'
 * '<S247>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller1/Reset Signal/Disabled'
 * '<S248>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller1/Saturation/Passthrough'
 * '<S249>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller1/Saturation Fdbk/Disabled'
 * '<S250>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller1/Sum/Sum_PI'
 * '<S251>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller1/Sum Fdbk/Disabled'
 * '<S252>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller1/Tracking Mode/Disabled'
 * '<S253>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller1/Tracking Mode Sum/Passthrough'
 * '<S254>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller1/Tsamp - Integral/TsSignalSpecification'
 * '<S255>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller1/Tsamp - Ngain/Passthrough'
 * '<S256>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller1/postSat Signal/Forward_Path'
 * '<S257>' : 'Asw_DCAC/Load Current closed loop PLL control/Subsystem2/U_PID_Controller1/preSat Signal/Forward_Path'
 * '<S258>' : 'Asw_DCAC/Load Current closed loop PLL control/U_PID_Controller_0/Anti-windup'
 * '<S259>' : 'Asw_DCAC/Load Current closed loop PLL control/U_PID_Controller_0/D Gain'
 * '<S260>' : 'Asw_DCAC/Load Current closed loop PLL control/U_PID_Controller_0/Filter'
 * '<S261>' : 'Asw_DCAC/Load Current closed loop PLL control/U_PID_Controller_0/Filter ICs'
 * '<S262>' : 'Asw_DCAC/Load Current closed loop PLL control/U_PID_Controller_0/I Gain'
 * '<S263>' : 'Asw_DCAC/Load Current closed loop PLL control/U_PID_Controller_0/Ideal P Gain'
 * '<S264>' : 'Asw_DCAC/Load Current closed loop PLL control/U_PID_Controller_0/Ideal P Gain Fdbk'
 * '<S265>' : 'Asw_DCAC/Load Current closed loop PLL control/U_PID_Controller_0/Integrator'
 * '<S266>' : 'Asw_DCAC/Load Current closed loop PLL control/U_PID_Controller_0/Integrator ICs'
 * '<S267>' : 'Asw_DCAC/Load Current closed loop PLL control/U_PID_Controller_0/N Copy'
 * '<S268>' : 'Asw_DCAC/Load Current closed loop PLL control/U_PID_Controller_0/N Gain'
 * '<S269>' : 'Asw_DCAC/Load Current closed loop PLL control/U_PID_Controller_0/P Copy'
 * '<S270>' : 'Asw_DCAC/Load Current closed loop PLL control/U_PID_Controller_0/Parallel P Gain'
 * '<S271>' : 'Asw_DCAC/Load Current closed loop PLL control/U_PID_Controller_0/Reset Signal'
 * '<S272>' : 'Asw_DCAC/Load Current closed loop PLL control/U_PID_Controller_0/Saturation'
 * '<S273>' : 'Asw_DCAC/Load Current closed loop PLL control/U_PID_Controller_0/Saturation Fdbk'
 * '<S274>' : 'Asw_DCAC/Load Current closed loop PLL control/U_PID_Controller_0/Sum'
 * '<S275>' : 'Asw_DCAC/Load Current closed loop PLL control/U_PID_Controller_0/Sum Fdbk'
 * '<S276>' : 'Asw_DCAC/Load Current closed loop PLL control/U_PID_Controller_0/Tracking Mode'
 * '<S277>' : 'Asw_DCAC/Load Current closed loop PLL control/U_PID_Controller_0/Tracking Mode Sum'
 * '<S278>' : 'Asw_DCAC/Load Current closed loop PLL control/U_PID_Controller_0/Tsamp - Integral'
 * '<S279>' : 'Asw_DCAC/Load Current closed loop PLL control/U_PID_Controller_0/Tsamp - Ngain'
 * '<S280>' : 'Asw_DCAC/Load Current closed loop PLL control/U_PID_Controller_0/postSat Signal'
 * '<S281>' : 'Asw_DCAC/Load Current closed loop PLL control/U_PID_Controller_0/preSat Signal'
 * '<S282>' : 'Asw_DCAC/Load Current closed loop PLL control/U_PID_Controller_0/Anti-windup/Passthrough'
 * '<S283>' : 'Asw_DCAC/Load Current closed loop PLL control/U_PID_Controller_0/D Gain/Disabled'
 * '<S284>' : 'Asw_DCAC/Load Current closed loop PLL control/U_PID_Controller_0/Filter/Disabled'
 * '<S285>' : 'Asw_DCAC/Load Current closed loop PLL control/U_PID_Controller_0/Filter ICs/Disabled'
 * '<S286>' : 'Asw_DCAC/Load Current closed loop PLL control/U_PID_Controller_0/I Gain/Internal Parameters'
 * '<S287>' : 'Asw_DCAC/Load Current closed loop PLL control/U_PID_Controller_0/Ideal P Gain/Passthrough'
 * '<S288>' : 'Asw_DCAC/Load Current closed loop PLL control/U_PID_Controller_0/Ideal P Gain Fdbk/Disabled'
 * '<S289>' : 'Asw_DCAC/Load Current closed loop PLL control/U_PID_Controller_0/Integrator/Discrete'
 * '<S290>' : 'Asw_DCAC/Load Current closed loop PLL control/U_PID_Controller_0/Integrator ICs/Internal IC'
 * '<S291>' : 'Asw_DCAC/Load Current closed loop PLL control/U_PID_Controller_0/N Copy/Disabled wSignal Specification'
 * '<S292>' : 'Asw_DCAC/Load Current closed loop PLL control/U_PID_Controller_0/N Gain/Disabled'
 * '<S293>' : 'Asw_DCAC/Load Current closed loop PLL control/U_PID_Controller_0/P Copy/Disabled'
 * '<S294>' : 'Asw_DCAC/Load Current closed loop PLL control/U_PID_Controller_0/Parallel P Gain/Internal Parameters'
 * '<S295>' : 'Asw_DCAC/Load Current closed loop PLL control/U_PID_Controller_0/Reset Signal/Disabled'
 * '<S296>' : 'Asw_DCAC/Load Current closed loop PLL control/U_PID_Controller_0/Saturation/Passthrough'
 * '<S297>' : 'Asw_DCAC/Load Current closed loop PLL control/U_PID_Controller_0/Saturation Fdbk/Disabled'
 * '<S298>' : 'Asw_DCAC/Load Current closed loop PLL control/U_PID_Controller_0/Sum/Sum_PI'
 * '<S299>' : 'Asw_DCAC/Load Current closed loop PLL control/U_PID_Controller_0/Sum Fdbk/Disabled'
 * '<S300>' : 'Asw_DCAC/Load Current closed loop PLL control/U_PID_Controller_0/Tracking Mode/Disabled'
 * '<S301>' : 'Asw_DCAC/Load Current closed loop PLL control/U_PID_Controller_0/Tracking Mode Sum/Passthrough'
 * '<S302>' : 'Asw_DCAC/Load Current closed loop PLL control/U_PID_Controller_0/Tsamp - Integral/TsSignalSpecification'
 * '<S303>' : 'Asw_DCAC/Load Current closed loop PLL control/U_PID_Controller_0/Tsamp - Ngain/Passthrough'
 * '<S304>' : 'Asw_DCAC/Load Current closed loop PLL control/U_PID_Controller_0/postSat Signal/Forward_Path'
 * '<S305>' : 'Asw_DCAC/Load Current closed loop PLL control/U_PID_Controller_0/preSat Signal/Forward_Path'
 * '<S306>' : 'Asw_DCAC/PLL/MATLAB Function'
 * '<S307>' : 'Asw_DCAC/PLL/PID Controller2'
 * '<S308>' : 'Asw_DCAC/PLL/SOGI'
 * '<S309>' : 'Asw_DCAC/PLL/PID Controller2/Anti-windup'
 * '<S310>' : 'Asw_DCAC/PLL/PID Controller2/D Gain'
 * '<S311>' : 'Asw_DCAC/PLL/PID Controller2/Filter'
 * '<S312>' : 'Asw_DCAC/PLL/PID Controller2/Filter ICs'
 * '<S313>' : 'Asw_DCAC/PLL/PID Controller2/I Gain'
 * '<S314>' : 'Asw_DCAC/PLL/PID Controller2/Ideal P Gain'
 * '<S315>' : 'Asw_DCAC/PLL/PID Controller2/Ideal P Gain Fdbk'
 * '<S316>' : 'Asw_DCAC/PLL/PID Controller2/Integrator'
 * '<S317>' : 'Asw_DCAC/PLL/PID Controller2/Integrator ICs'
 * '<S318>' : 'Asw_DCAC/PLL/PID Controller2/N Copy'
 * '<S319>' : 'Asw_DCAC/PLL/PID Controller2/N Gain'
 * '<S320>' : 'Asw_DCAC/PLL/PID Controller2/P Copy'
 * '<S321>' : 'Asw_DCAC/PLL/PID Controller2/Parallel P Gain'
 * '<S322>' : 'Asw_DCAC/PLL/PID Controller2/Reset Signal'
 * '<S323>' : 'Asw_DCAC/PLL/PID Controller2/Saturation'
 * '<S324>' : 'Asw_DCAC/PLL/PID Controller2/Saturation Fdbk'
 * '<S325>' : 'Asw_DCAC/PLL/PID Controller2/Sum'
 * '<S326>' : 'Asw_DCAC/PLL/PID Controller2/Sum Fdbk'
 * '<S327>' : 'Asw_DCAC/PLL/PID Controller2/Tracking Mode'
 * '<S328>' : 'Asw_DCAC/PLL/PID Controller2/Tracking Mode Sum'
 * '<S329>' : 'Asw_DCAC/PLL/PID Controller2/Tsamp - Integral'
 * '<S330>' : 'Asw_DCAC/PLL/PID Controller2/Tsamp - Ngain'
 * '<S331>' : 'Asw_DCAC/PLL/PID Controller2/postSat Signal'
 * '<S332>' : 'Asw_DCAC/PLL/PID Controller2/preSat Signal'
 * '<S333>' : 'Asw_DCAC/PLL/PID Controller2/Anti-windup/Passthrough'
 * '<S334>' : 'Asw_DCAC/PLL/PID Controller2/D Gain/Disabled'
 * '<S335>' : 'Asw_DCAC/PLL/PID Controller2/Filter/Disabled'
 * '<S336>' : 'Asw_DCAC/PLL/PID Controller2/Filter ICs/Disabled'
 * '<S337>' : 'Asw_DCAC/PLL/PID Controller2/I Gain/Internal Parameters'
 * '<S338>' : 'Asw_DCAC/PLL/PID Controller2/Ideal P Gain/Passthrough'
 * '<S339>' : 'Asw_DCAC/PLL/PID Controller2/Ideal P Gain Fdbk/Disabled'
 * '<S340>' : 'Asw_DCAC/PLL/PID Controller2/Integrator/Discrete'
 * '<S341>' : 'Asw_DCAC/PLL/PID Controller2/Integrator ICs/Internal IC'
 * '<S342>' : 'Asw_DCAC/PLL/PID Controller2/N Copy/Disabled wSignal Specification'
 * '<S343>' : 'Asw_DCAC/PLL/PID Controller2/N Gain/Disabled'
 * '<S344>' : 'Asw_DCAC/PLL/PID Controller2/P Copy/Disabled'
 * '<S345>' : 'Asw_DCAC/PLL/PID Controller2/Parallel P Gain/Internal Parameters'
 * '<S346>' : 'Asw_DCAC/PLL/PID Controller2/Reset Signal/Disabled'
 * '<S347>' : 'Asw_DCAC/PLL/PID Controller2/Saturation/Passthrough'
 * '<S348>' : 'Asw_DCAC/PLL/PID Controller2/Saturation Fdbk/Disabled'
 * '<S349>' : 'Asw_DCAC/PLL/PID Controller2/Sum/Sum_PI'
 * '<S350>' : 'Asw_DCAC/PLL/PID Controller2/Sum Fdbk/Disabled'
 * '<S351>' : 'Asw_DCAC/PLL/PID Controller2/Tracking Mode/Disabled'
 * '<S352>' : 'Asw_DCAC/PLL/PID Controller2/Tracking Mode Sum/Passthrough'
 * '<S353>' : 'Asw_DCAC/PLL/PID Controller2/Tsamp - Integral/TsSignalSpecification'
 * '<S354>' : 'Asw_DCAC/PLL/PID Controller2/Tsamp - Ngain/Passthrough'
 * '<S355>' : 'Asw_DCAC/PLL/PID Controller2/postSat Signal/Forward_Path'
 * '<S356>' : 'Asw_DCAC/PLL/PID Controller2/preSat Signal/Forward_Path'
 * '<S357>' : 'Asw_DCAC/Voltage closed loop/I_PID_Controller'
 * '<S358>' : 'Asw_DCAC/Voltage closed loop/U_PID_Controller'
 * '<S359>' : 'Asw_DCAC/Voltage closed loop/I_PID_Controller/Anti-windup'
 * '<S360>' : 'Asw_DCAC/Voltage closed loop/I_PID_Controller/D Gain'
 * '<S361>' : 'Asw_DCAC/Voltage closed loop/I_PID_Controller/Filter'
 * '<S362>' : 'Asw_DCAC/Voltage closed loop/I_PID_Controller/Filter ICs'
 * '<S363>' : 'Asw_DCAC/Voltage closed loop/I_PID_Controller/I Gain'
 * '<S364>' : 'Asw_DCAC/Voltage closed loop/I_PID_Controller/Ideal P Gain'
 * '<S365>' : 'Asw_DCAC/Voltage closed loop/I_PID_Controller/Ideal P Gain Fdbk'
 * '<S366>' : 'Asw_DCAC/Voltage closed loop/I_PID_Controller/Integrator'
 * '<S367>' : 'Asw_DCAC/Voltage closed loop/I_PID_Controller/Integrator ICs'
 * '<S368>' : 'Asw_DCAC/Voltage closed loop/I_PID_Controller/N Copy'
 * '<S369>' : 'Asw_DCAC/Voltage closed loop/I_PID_Controller/N Gain'
 * '<S370>' : 'Asw_DCAC/Voltage closed loop/I_PID_Controller/P Copy'
 * '<S371>' : 'Asw_DCAC/Voltage closed loop/I_PID_Controller/Parallel P Gain'
 * '<S372>' : 'Asw_DCAC/Voltage closed loop/I_PID_Controller/Reset Signal'
 * '<S373>' : 'Asw_DCAC/Voltage closed loop/I_PID_Controller/Saturation'
 * '<S374>' : 'Asw_DCAC/Voltage closed loop/I_PID_Controller/Saturation Fdbk'
 * '<S375>' : 'Asw_DCAC/Voltage closed loop/I_PID_Controller/Sum'
 * '<S376>' : 'Asw_DCAC/Voltage closed loop/I_PID_Controller/Sum Fdbk'
 * '<S377>' : 'Asw_DCAC/Voltage closed loop/I_PID_Controller/Tracking Mode'
 * '<S378>' : 'Asw_DCAC/Voltage closed loop/I_PID_Controller/Tracking Mode Sum'
 * '<S379>' : 'Asw_DCAC/Voltage closed loop/I_PID_Controller/Tsamp - Integral'
 * '<S380>' : 'Asw_DCAC/Voltage closed loop/I_PID_Controller/Tsamp - Ngain'
 * '<S381>' : 'Asw_DCAC/Voltage closed loop/I_PID_Controller/postSat Signal'
 * '<S382>' : 'Asw_DCAC/Voltage closed loop/I_PID_Controller/preSat Signal'
 * '<S383>' : 'Asw_DCAC/Voltage closed loop/I_PID_Controller/Anti-windup/Passthrough'
 * '<S384>' : 'Asw_DCAC/Voltage closed loop/I_PID_Controller/D Gain/Disabled'
 * '<S385>' : 'Asw_DCAC/Voltage closed loop/I_PID_Controller/Filter/Disabled'
 * '<S386>' : 'Asw_DCAC/Voltage closed loop/I_PID_Controller/Filter ICs/Disabled'
 * '<S387>' : 'Asw_DCAC/Voltage closed loop/I_PID_Controller/I Gain/Internal Parameters'
 * '<S388>' : 'Asw_DCAC/Voltage closed loop/I_PID_Controller/Ideal P Gain/Passthrough'
 * '<S389>' : 'Asw_DCAC/Voltage closed loop/I_PID_Controller/Ideal P Gain Fdbk/Disabled'
 * '<S390>' : 'Asw_DCAC/Voltage closed loop/I_PID_Controller/Integrator/Discrete'
 * '<S391>' : 'Asw_DCAC/Voltage closed loop/I_PID_Controller/Integrator ICs/Internal IC'
 * '<S392>' : 'Asw_DCAC/Voltage closed loop/I_PID_Controller/N Copy/Disabled wSignal Specification'
 * '<S393>' : 'Asw_DCAC/Voltage closed loop/I_PID_Controller/N Gain/Disabled'
 * '<S394>' : 'Asw_DCAC/Voltage closed loop/I_PID_Controller/P Copy/Disabled'
 * '<S395>' : 'Asw_DCAC/Voltage closed loop/I_PID_Controller/Parallel P Gain/Internal Parameters'
 * '<S396>' : 'Asw_DCAC/Voltage closed loop/I_PID_Controller/Reset Signal/Disabled'
 * '<S397>' : 'Asw_DCAC/Voltage closed loop/I_PID_Controller/Saturation/Passthrough'
 * '<S398>' : 'Asw_DCAC/Voltage closed loop/I_PID_Controller/Saturation Fdbk/Disabled'
 * '<S399>' : 'Asw_DCAC/Voltage closed loop/I_PID_Controller/Sum/Sum_PI'
 * '<S400>' : 'Asw_DCAC/Voltage closed loop/I_PID_Controller/Sum Fdbk/Disabled'
 * '<S401>' : 'Asw_DCAC/Voltage closed loop/I_PID_Controller/Tracking Mode/Disabled'
 * '<S402>' : 'Asw_DCAC/Voltage closed loop/I_PID_Controller/Tracking Mode Sum/Passthrough'
 * '<S403>' : 'Asw_DCAC/Voltage closed loop/I_PID_Controller/Tsamp - Integral/TsSignalSpecification'
 * '<S404>' : 'Asw_DCAC/Voltage closed loop/I_PID_Controller/Tsamp - Ngain/Passthrough'
 * '<S405>' : 'Asw_DCAC/Voltage closed loop/I_PID_Controller/postSat Signal/Forward_Path'
 * '<S406>' : 'Asw_DCAC/Voltage closed loop/I_PID_Controller/preSat Signal/Forward_Path'
 * '<S407>' : 'Asw_DCAC/Voltage closed loop/U_PID_Controller/Anti-windup'
 * '<S408>' : 'Asw_DCAC/Voltage closed loop/U_PID_Controller/D Gain'
 * '<S409>' : 'Asw_DCAC/Voltage closed loop/U_PID_Controller/Filter'
 * '<S410>' : 'Asw_DCAC/Voltage closed loop/U_PID_Controller/Filter ICs'
 * '<S411>' : 'Asw_DCAC/Voltage closed loop/U_PID_Controller/I Gain'
 * '<S412>' : 'Asw_DCAC/Voltage closed loop/U_PID_Controller/Ideal P Gain'
 * '<S413>' : 'Asw_DCAC/Voltage closed loop/U_PID_Controller/Ideal P Gain Fdbk'
 * '<S414>' : 'Asw_DCAC/Voltage closed loop/U_PID_Controller/Integrator'
 * '<S415>' : 'Asw_DCAC/Voltage closed loop/U_PID_Controller/Integrator ICs'
 * '<S416>' : 'Asw_DCAC/Voltage closed loop/U_PID_Controller/N Copy'
 * '<S417>' : 'Asw_DCAC/Voltage closed loop/U_PID_Controller/N Gain'
 * '<S418>' : 'Asw_DCAC/Voltage closed loop/U_PID_Controller/P Copy'
 * '<S419>' : 'Asw_DCAC/Voltage closed loop/U_PID_Controller/Parallel P Gain'
 * '<S420>' : 'Asw_DCAC/Voltage closed loop/U_PID_Controller/Reset Signal'
 * '<S421>' : 'Asw_DCAC/Voltage closed loop/U_PID_Controller/Saturation'
 * '<S422>' : 'Asw_DCAC/Voltage closed loop/U_PID_Controller/Saturation Fdbk'
 * '<S423>' : 'Asw_DCAC/Voltage closed loop/U_PID_Controller/Sum'
 * '<S424>' : 'Asw_DCAC/Voltage closed loop/U_PID_Controller/Sum Fdbk'
 * '<S425>' : 'Asw_DCAC/Voltage closed loop/U_PID_Controller/Tracking Mode'
 * '<S426>' : 'Asw_DCAC/Voltage closed loop/U_PID_Controller/Tracking Mode Sum'
 * '<S427>' : 'Asw_DCAC/Voltage closed loop/U_PID_Controller/Tsamp - Integral'
 * '<S428>' : 'Asw_DCAC/Voltage closed loop/U_PID_Controller/Tsamp - Ngain'
 * '<S429>' : 'Asw_DCAC/Voltage closed loop/U_PID_Controller/postSat Signal'
 * '<S430>' : 'Asw_DCAC/Voltage closed loop/U_PID_Controller/preSat Signal'
 * '<S431>' : 'Asw_DCAC/Voltage closed loop/U_PID_Controller/Anti-windup/Passthrough'
 * '<S432>' : 'Asw_DCAC/Voltage closed loop/U_PID_Controller/D Gain/Disabled'
 * '<S433>' : 'Asw_DCAC/Voltage closed loop/U_PID_Controller/Filter/Disabled'
 * '<S434>' : 'Asw_DCAC/Voltage closed loop/U_PID_Controller/Filter ICs/Disabled'
 * '<S435>' : 'Asw_DCAC/Voltage closed loop/U_PID_Controller/I Gain/Internal Parameters'
 * '<S436>' : 'Asw_DCAC/Voltage closed loop/U_PID_Controller/Ideal P Gain/Passthrough'
 * '<S437>' : 'Asw_DCAC/Voltage closed loop/U_PID_Controller/Ideal P Gain Fdbk/Disabled'
 * '<S438>' : 'Asw_DCAC/Voltage closed loop/U_PID_Controller/Integrator/Discrete'
 * '<S439>' : 'Asw_DCAC/Voltage closed loop/U_PID_Controller/Integrator ICs/Internal IC'
 * '<S440>' : 'Asw_DCAC/Voltage closed loop/U_PID_Controller/N Copy/Disabled wSignal Specification'
 * '<S441>' : 'Asw_DCAC/Voltage closed loop/U_PID_Controller/N Gain/Disabled'
 * '<S442>' : 'Asw_DCAC/Voltage closed loop/U_PID_Controller/P Copy/Disabled'
 * '<S443>' : 'Asw_DCAC/Voltage closed loop/U_PID_Controller/Parallel P Gain/Internal Parameters'
 * '<S444>' : 'Asw_DCAC/Voltage closed loop/U_PID_Controller/Reset Signal/Disabled'
 * '<S445>' : 'Asw_DCAC/Voltage closed loop/U_PID_Controller/Saturation/Passthrough'
 * '<S446>' : 'Asw_DCAC/Voltage closed loop/U_PID_Controller/Saturation Fdbk/Disabled'
 * '<S447>' : 'Asw_DCAC/Voltage closed loop/U_PID_Controller/Sum/Sum_PI'
 * '<S448>' : 'Asw_DCAC/Voltage closed loop/U_PID_Controller/Sum Fdbk/Disabled'
 * '<S449>' : 'Asw_DCAC/Voltage closed loop/U_PID_Controller/Tracking Mode/Disabled'
 * '<S450>' : 'Asw_DCAC/Voltage closed loop/U_PID_Controller/Tracking Mode Sum/Passthrough'
 * '<S451>' : 'Asw_DCAC/Voltage closed loop/U_PID_Controller/Tsamp - Integral/TsSignalSpecification'
 * '<S452>' : 'Asw_DCAC/Voltage closed loop/U_PID_Controller/Tsamp - Ngain/Passthrough'
 * '<S453>' : 'Asw_DCAC/Voltage closed loop/U_PID_Controller/postSat Signal/Forward_Path'
 * '<S454>' : 'Asw_DCAC/Voltage closed loop/U_PID_Controller/preSat Signal/Forward_Path'
 */
#endif                                 /* RTW_HEADER_Asw_DCAC_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
