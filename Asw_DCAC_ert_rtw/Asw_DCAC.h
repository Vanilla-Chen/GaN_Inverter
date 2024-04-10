/*
 * File: Asw_DCAC.h
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

#ifndef RTW_HEADER_Asw_DCAC_h_
#define RTW_HEADER_Asw_DCAC_h_
#ifndef Asw_DCAC_COMMON_INCLUDES_
#define Asw_DCAC_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Asw_DCAC_COMMON_INCLUDES_ */

#include "Asw_DCAC_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmCounterLimit
#define rtmCounterLimit(rtm, idx)      ((rtm)->Timing.TaskCounters.cLimit[(idx)])
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmStepTask
#define rtmStepTask(rtm, idx)          ((rtm)->Timing.TaskCounters.TID[(idx)] == 0)
#endif

#ifndef rtmTaskCounter
#define rtmTaskCounter(rtm, idx)       ((rtm)->Timing.TaskCounters.TID[(idx)])
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T lastSin;                      /* '<S1>/Sine Wave' */
  real_T lastCos;                      /* '<S1>/Sine Wave' */
  real32_T Integrator_DSTATE;          /* '<S36>/Integrator' */
  int32_T systemEnable;                /* '<S1>/Sine Wave' */
} DW_Asw_DCAC_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real32_T U_Load;                     /* '<Root>/U_Load' */
  real32_T I_L;                        /* '<Root>/I_L' */
  real32_T I_Load;                     /* '<Root>/I_Load' */
  real32_T I_C;                        /* '<Root>/I_C' */
} ExtU_Asw_DCAC_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real32_T Top_High_Frequency;         /* '<Root>/Top_High_Frequency' */
  real32_T Bottom_High_Frequency;      /* '<Root>/Bottom_High_Frequency' */
  real32_T Low_Frequency;              /* '<Root>/Low_Frequency' */
} ExtY_Asw_DCAC_T;

/* Real-time Model Data Structure */
struct tag_RTM_Asw_DCAC_T {
  const char_T * volatile errorStatus;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick1;
    uint32_T clockTickH1;
    struct {
      uint8_T TID[2];
      uint8_T cLimit[2];
    } TaskCounters;
  } Timing;
};

/* Block states (default storage) */
extern DW_Asw_DCAC_T Asw_DCAC_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_Asw_DCAC_T Asw_DCAC_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Asw_DCAC_T Asw_DCAC_Y;

/* Model entry point functions */
extern void Asw_DCAC_initialize(void);
extern void Asw_DCAC_step0(void);
extern void Asw_DCAC_step1(void);
extern void Asw_DCAC_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Asw_DCAC_T *const Asw_DCAC_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Constant' : Unused code path elimination
 * Block '<S3>/Data Type Conversion2' : Unused code path elimination
 * Block '<S3>/Gain2' : Unused code path elimination
 * Block '<S83>/Integral Gain' : Unused code path elimination
 * Block '<S86>/Integrator' : Unused code path elimination
 * Block '<S91>/Proportional Gain' : Unused code path elimination
 * Block '<S95>/Sum' : Unused code path elimination
 * Block '<S131>/Integral Gain' : Unused code path elimination
 * Block '<S134>/Integrator' : Unused code path elimination
 * Block '<S139>/Proportional Gain' : Unused code path elimination
 * Block '<S143>/Sum' : Unused code path elimination
 * Block '<S3>/Product' : Unused code path elimination
 * Block '<S3>/Saturation' : Unused code path elimination
 * Block '<S3>/Sine Wave3' : Unused code path elimination
 * Block '<S3>/Sum3' : Unused code path elimination
 * Block '<S3>/Sum6' : Unused code path elimination
 * Block '<S3>/Sum7' : Unused code path elimination
 * Block '<S3>/Sum8' : Unused code path elimination
 * Block '<S33>/Integral Gain' : Eliminated nontunable gain of 1
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
 * '<S1>'   : 'Asw_DCAC/Load Current closed loop'
 * '<S2>'   : 'Asw_DCAC/Unipolar fast and slow modulation'
 * '<S3>'   : 'Asw_DCAC/Voltage closed loop'
 * '<S4>'   : 'Asw_DCAC/Load Current closed loop/PID Controller4'
 * '<S5>'   : 'Asw_DCAC/Load Current closed loop/PID Controller4/Anti-windup'
 * '<S6>'   : 'Asw_DCAC/Load Current closed loop/PID Controller4/D Gain'
 * '<S7>'   : 'Asw_DCAC/Load Current closed loop/PID Controller4/Filter'
 * '<S8>'   : 'Asw_DCAC/Load Current closed loop/PID Controller4/Filter ICs'
 * '<S9>'   : 'Asw_DCAC/Load Current closed loop/PID Controller4/I Gain'
 * '<S10>'  : 'Asw_DCAC/Load Current closed loop/PID Controller4/Ideal P Gain'
 * '<S11>'  : 'Asw_DCAC/Load Current closed loop/PID Controller4/Ideal P Gain Fdbk'
 * '<S12>'  : 'Asw_DCAC/Load Current closed loop/PID Controller4/Integrator'
 * '<S13>'  : 'Asw_DCAC/Load Current closed loop/PID Controller4/Integrator ICs'
 * '<S14>'  : 'Asw_DCAC/Load Current closed loop/PID Controller4/N Copy'
 * '<S15>'  : 'Asw_DCAC/Load Current closed loop/PID Controller4/N Gain'
 * '<S16>'  : 'Asw_DCAC/Load Current closed loop/PID Controller4/P Copy'
 * '<S17>'  : 'Asw_DCAC/Load Current closed loop/PID Controller4/Parallel P Gain'
 * '<S18>'  : 'Asw_DCAC/Load Current closed loop/PID Controller4/Reset Signal'
 * '<S19>'  : 'Asw_DCAC/Load Current closed loop/PID Controller4/Saturation'
 * '<S20>'  : 'Asw_DCAC/Load Current closed loop/PID Controller4/Saturation Fdbk'
 * '<S21>'  : 'Asw_DCAC/Load Current closed loop/PID Controller4/Sum'
 * '<S22>'  : 'Asw_DCAC/Load Current closed loop/PID Controller4/Sum Fdbk'
 * '<S23>'  : 'Asw_DCAC/Load Current closed loop/PID Controller4/Tracking Mode'
 * '<S24>'  : 'Asw_DCAC/Load Current closed loop/PID Controller4/Tracking Mode Sum'
 * '<S25>'  : 'Asw_DCAC/Load Current closed loop/PID Controller4/Tsamp - Integral'
 * '<S26>'  : 'Asw_DCAC/Load Current closed loop/PID Controller4/Tsamp - Ngain'
 * '<S27>'  : 'Asw_DCAC/Load Current closed loop/PID Controller4/postSat Signal'
 * '<S28>'  : 'Asw_DCAC/Load Current closed loop/PID Controller4/preSat Signal'
 * '<S29>'  : 'Asw_DCAC/Load Current closed loop/PID Controller4/Anti-windup/Passthrough'
 * '<S30>'  : 'Asw_DCAC/Load Current closed loop/PID Controller4/D Gain/Disabled'
 * '<S31>'  : 'Asw_DCAC/Load Current closed loop/PID Controller4/Filter/Disabled'
 * '<S32>'  : 'Asw_DCAC/Load Current closed loop/PID Controller4/Filter ICs/Disabled'
 * '<S33>'  : 'Asw_DCAC/Load Current closed loop/PID Controller4/I Gain/Internal Parameters'
 * '<S34>'  : 'Asw_DCAC/Load Current closed loop/PID Controller4/Ideal P Gain/Passthrough'
 * '<S35>'  : 'Asw_DCAC/Load Current closed loop/PID Controller4/Ideal P Gain Fdbk/Disabled'
 * '<S36>'  : 'Asw_DCAC/Load Current closed loop/PID Controller4/Integrator/Discrete'
 * '<S37>'  : 'Asw_DCAC/Load Current closed loop/PID Controller4/Integrator ICs/Internal IC'
 * '<S38>'  : 'Asw_DCAC/Load Current closed loop/PID Controller4/N Copy/Disabled wSignal Specification'
 * '<S39>'  : 'Asw_DCAC/Load Current closed loop/PID Controller4/N Gain/Disabled'
 * '<S40>'  : 'Asw_DCAC/Load Current closed loop/PID Controller4/P Copy/Disabled'
 * '<S41>'  : 'Asw_DCAC/Load Current closed loop/PID Controller4/Parallel P Gain/Internal Parameters'
 * '<S42>'  : 'Asw_DCAC/Load Current closed loop/PID Controller4/Reset Signal/Disabled'
 * '<S43>'  : 'Asw_DCAC/Load Current closed loop/PID Controller4/Saturation/Passthrough'
 * '<S44>'  : 'Asw_DCAC/Load Current closed loop/PID Controller4/Saturation Fdbk/Disabled'
 * '<S45>'  : 'Asw_DCAC/Load Current closed loop/PID Controller4/Sum/Sum_PI'
 * '<S46>'  : 'Asw_DCAC/Load Current closed loop/PID Controller4/Sum Fdbk/Disabled'
 * '<S47>'  : 'Asw_DCAC/Load Current closed loop/PID Controller4/Tracking Mode/Disabled'
 * '<S48>'  : 'Asw_DCAC/Load Current closed loop/PID Controller4/Tracking Mode Sum/Passthrough'
 * '<S49>'  : 'Asw_DCAC/Load Current closed loop/PID Controller4/Tsamp - Integral/TsSignalSpecification'
 * '<S50>'  : 'Asw_DCAC/Load Current closed loop/PID Controller4/Tsamp - Ngain/Passthrough'
 * '<S51>'  : 'Asw_DCAC/Load Current closed loop/PID Controller4/postSat Signal/Forward_Path'
 * '<S52>'  : 'Asw_DCAC/Load Current closed loop/PID Controller4/preSat Signal/Forward_Path'
 * '<S53>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3'
 * '<S54>'  : 'Asw_DCAC/Voltage closed loop/PID Controller4'
 * '<S55>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/Anti-windup'
 * '<S56>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/D Gain'
 * '<S57>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/Filter'
 * '<S58>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/Filter ICs'
 * '<S59>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/I Gain'
 * '<S60>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/Ideal P Gain'
 * '<S61>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/Ideal P Gain Fdbk'
 * '<S62>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/Integrator'
 * '<S63>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/Integrator ICs'
 * '<S64>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/N Copy'
 * '<S65>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/N Gain'
 * '<S66>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/P Copy'
 * '<S67>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/Parallel P Gain'
 * '<S68>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/Reset Signal'
 * '<S69>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/Saturation'
 * '<S70>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/Saturation Fdbk'
 * '<S71>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/Sum'
 * '<S72>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/Sum Fdbk'
 * '<S73>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/Tracking Mode'
 * '<S74>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/Tracking Mode Sum'
 * '<S75>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/Tsamp - Integral'
 * '<S76>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/Tsamp - Ngain'
 * '<S77>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/postSat Signal'
 * '<S78>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/preSat Signal'
 * '<S79>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/Anti-windup/Passthrough'
 * '<S80>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/D Gain/Disabled'
 * '<S81>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/Filter/Disabled'
 * '<S82>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/Filter ICs/Disabled'
 * '<S83>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/I Gain/Internal Parameters'
 * '<S84>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/Ideal P Gain/Passthrough'
 * '<S85>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/Ideal P Gain Fdbk/Disabled'
 * '<S86>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/Integrator/Discrete'
 * '<S87>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/Integrator ICs/Internal IC'
 * '<S88>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/N Copy/Disabled wSignal Specification'
 * '<S89>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/N Gain/Disabled'
 * '<S90>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/P Copy/Disabled'
 * '<S91>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/Parallel P Gain/Internal Parameters'
 * '<S92>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/Reset Signal/Disabled'
 * '<S93>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/Saturation/Passthrough'
 * '<S94>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/Saturation Fdbk/Disabled'
 * '<S95>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/Sum/Sum_PI'
 * '<S96>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/Sum Fdbk/Disabled'
 * '<S97>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/Tracking Mode/Disabled'
 * '<S98>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/Tracking Mode Sum/Passthrough'
 * '<S99>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/Tsamp - Integral/TsSignalSpecification'
 * '<S100>' : 'Asw_DCAC/Voltage closed loop/PID Controller3/Tsamp - Ngain/Passthrough'
 * '<S101>' : 'Asw_DCAC/Voltage closed loop/PID Controller3/postSat Signal/Forward_Path'
 * '<S102>' : 'Asw_DCAC/Voltage closed loop/PID Controller3/preSat Signal/Forward_Path'
 * '<S103>' : 'Asw_DCAC/Voltage closed loop/PID Controller4/Anti-windup'
 * '<S104>' : 'Asw_DCAC/Voltage closed loop/PID Controller4/D Gain'
 * '<S105>' : 'Asw_DCAC/Voltage closed loop/PID Controller4/Filter'
 * '<S106>' : 'Asw_DCAC/Voltage closed loop/PID Controller4/Filter ICs'
 * '<S107>' : 'Asw_DCAC/Voltage closed loop/PID Controller4/I Gain'
 * '<S108>' : 'Asw_DCAC/Voltage closed loop/PID Controller4/Ideal P Gain'
 * '<S109>' : 'Asw_DCAC/Voltage closed loop/PID Controller4/Ideal P Gain Fdbk'
 * '<S110>' : 'Asw_DCAC/Voltage closed loop/PID Controller4/Integrator'
 * '<S111>' : 'Asw_DCAC/Voltage closed loop/PID Controller4/Integrator ICs'
 * '<S112>' : 'Asw_DCAC/Voltage closed loop/PID Controller4/N Copy'
 * '<S113>' : 'Asw_DCAC/Voltage closed loop/PID Controller4/N Gain'
 * '<S114>' : 'Asw_DCAC/Voltage closed loop/PID Controller4/P Copy'
 * '<S115>' : 'Asw_DCAC/Voltage closed loop/PID Controller4/Parallel P Gain'
 * '<S116>' : 'Asw_DCAC/Voltage closed loop/PID Controller4/Reset Signal'
 * '<S117>' : 'Asw_DCAC/Voltage closed loop/PID Controller4/Saturation'
 * '<S118>' : 'Asw_DCAC/Voltage closed loop/PID Controller4/Saturation Fdbk'
 * '<S119>' : 'Asw_DCAC/Voltage closed loop/PID Controller4/Sum'
 * '<S120>' : 'Asw_DCAC/Voltage closed loop/PID Controller4/Sum Fdbk'
 * '<S121>' : 'Asw_DCAC/Voltage closed loop/PID Controller4/Tracking Mode'
 * '<S122>' : 'Asw_DCAC/Voltage closed loop/PID Controller4/Tracking Mode Sum'
 * '<S123>' : 'Asw_DCAC/Voltage closed loop/PID Controller4/Tsamp - Integral'
 * '<S124>' : 'Asw_DCAC/Voltage closed loop/PID Controller4/Tsamp - Ngain'
 * '<S125>' : 'Asw_DCAC/Voltage closed loop/PID Controller4/postSat Signal'
 * '<S126>' : 'Asw_DCAC/Voltage closed loop/PID Controller4/preSat Signal'
 * '<S127>' : 'Asw_DCAC/Voltage closed loop/PID Controller4/Anti-windup/Passthrough'
 * '<S128>' : 'Asw_DCAC/Voltage closed loop/PID Controller4/D Gain/Disabled'
 * '<S129>' : 'Asw_DCAC/Voltage closed loop/PID Controller4/Filter/Disabled'
 * '<S130>' : 'Asw_DCAC/Voltage closed loop/PID Controller4/Filter ICs/Disabled'
 * '<S131>' : 'Asw_DCAC/Voltage closed loop/PID Controller4/I Gain/Internal Parameters'
 * '<S132>' : 'Asw_DCAC/Voltage closed loop/PID Controller4/Ideal P Gain/Passthrough'
 * '<S133>' : 'Asw_DCAC/Voltage closed loop/PID Controller4/Ideal P Gain Fdbk/Disabled'
 * '<S134>' : 'Asw_DCAC/Voltage closed loop/PID Controller4/Integrator/Discrete'
 * '<S135>' : 'Asw_DCAC/Voltage closed loop/PID Controller4/Integrator ICs/Internal IC'
 * '<S136>' : 'Asw_DCAC/Voltage closed loop/PID Controller4/N Copy/Disabled wSignal Specification'
 * '<S137>' : 'Asw_DCAC/Voltage closed loop/PID Controller4/N Gain/Disabled'
 * '<S138>' : 'Asw_DCAC/Voltage closed loop/PID Controller4/P Copy/Disabled'
 * '<S139>' : 'Asw_DCAC/Voltage closed loop/PID Controller4/Parallel P Gain/Internal Parameters'
 * '<S140>' : 'Asw_DCAC/Voltage closed loop/PID Controller4/Reset Signal/Disabled'
 * '<S141>' : 'Asw_DCAC/Voltage closed loop/PID Controller4/Saturation/Passthrough'
 * '<S142>' : 'Asw_DCAC/Voltage closed loop/PID Controller4/Saturation Fdbk/Disabled'
 * '<S143>' : 'Asw_DCAC/Voltage closed loop/PID Controller4/Sum/Sum_PI'
 * '<S144>' : 'Asw_DCAC/Voltage closed loop/PID Controller4/Sum Fdbk/Disabled'
 * '<S145>' : 'Asw_DCAC/Voltage closed loop/PID Controller4/Tracking Mode/Disabled'
 * '<S146>' : 'Asw_DCAC/Voltage closed loop/PID Controller4/Tracking Mode Sum/Passthrough'
 * '<S147>' : 'Asw_DCAC/Voltage closed loop/PID Controller4/Tsamp - Integral/TsSignalSpecification'
 * '<S148>' : 'Asw_DCAC/Voltage closed loop/PID Controller4/Tsamp - Ngain/Passthrough'
 * '<S149>' : 'Asw_DCAC/Voltage closed loop/PID Controller4/postSat Signal/Forward_Path'
 * '<S150>' : 'Asw_DCAC/Voltage closed loop/PID Controller4/preSat Signal/Forward_Path'
 */
#endif                                 /* RTW_HEADER_Asw_DCAC_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
