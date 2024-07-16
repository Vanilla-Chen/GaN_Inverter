/*
 * File: Asw_DCAC.h
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
  real_T lastSin;                      /* '<S5>/Sine Wave3' */
  real_T lastCos;                      /* '<S5>/Sine Wave3' */
  real32_T Integrator_DSTATE;          /* '<S39>/Integrator' */
  real32_T Integrator_DSTATE_d;        /* '<S87>/Integrator' */
  int32_T systemEnable;                /* '<S5>/Sine Wave3' */
} DW_Asw_DCAC_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  int32_T BSW_Curr_Load;               /* '<Root>/BSW_Curr_Load' */
  int32_T BSW_Curr_Induct;             /* '<Root>/BSW_Curr_Induct' */
  int32_T BSW_Volt_Load;               /* '<Root>/BSW_Volt_Load' */
  real32_T BSW_Curr_cap;               /* '<Root>/BSW_Curr_cap' */
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
 * Block '<Root>/Sine Wave5' : Unused code path elimination
 * Block '<S36>/Integral Gain' : Eliminated nontunable gain of 1
 * Block '<S84>/Integral Gain' : Eliminated nontunable gain of 1
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
 * '<S1>'   : 'Asw_DCAC/Subsystem'
 * '<S2>'   : 'Asw_DCAC/Subsystem1'
 * '<S3>'   : 'Asw_DCAC/Subsystem2'
 * '<S4>'   : 'Asw_DCAC/Unipolar fast and slow modulation'
 * '<S5>'   : 'Asw_DCAC/Voltage closed loop'
 * '<S6>'   : 'Asw_DCAC/Voltage closed loop/PID Controller3'
 * '<S7>'   : 'Asw_DCAC/Voltage closed loop/PID Controller4'
 * '<S8>'   : 'Asw_DCAC/Voltage closed loop/PID Controller3/Anti-windup'
 * '<S9>'   : 'Asw_DCAC/Voltage closed loop/PID Controller3/D Gain'
 * '<S10>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/Filter'
 * '<S11>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/Filter ICs'
 * '<S12>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/I Gain'
 * '<S13>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/Ideal P Gain'
 * '<S14>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/Ideal P Gain Fdbk'
 * '<S15>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/Integrator'
 * '<S16>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/Integrator ICs'
 * '<S17>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/N Copy'
 * '<S18>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/N Gain'
 * '<S19>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/P Copy'
 * '<S20>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/Parallel P Gain'
 * '<S21>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/Reset Signal'
 * '<S22>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/Saturation'
 * '<S23>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/Saturation Fdbk'
 * '<S24>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/Sum'
 * '<S25>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/Sum Fdbk'
 * '<S26>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/Tracking Mode'
 * '<S27>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/Tracking Mode Sum'
 * '<S28>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/Tsamp - Integral'
 * '<S29>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/Tsamp - Ngain'
 * '<S30>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/postSat Signal'
 * '<S31>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/preSat Signal'
 * '<S32>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/Anti-windup/Passthrough'
 * '<S33>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/D Gain/Disabled'
 * '<S34>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/Filter/Disabled'
 * '<S35>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/Filter ICs/Disabled'
 * '<S36>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/I Gain/Internal Parameters'
 * '<S37>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/Ideal P Gain/Passthrough'
 * '<S38>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/Ideal P Gain Fdbk/Disabled'
 * '<S39>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/Integrator/Discrete'
 * '<S40>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/Integrator ICs/Internal IC'
 * '<S41>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/N Copy/Disabled wSignal Specification'
 * '<S42>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/N Gain/Disabled'
 * '<S43>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/P Copy/Disabled'
 * '<S44>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/Parallel P Gain/Internal Parameters'
 * '<S45>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/Reset Signal/Disabled'
 * '<S46>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/Saturation/Passthrough'
 * '<S47>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/Saturation Fdbk/Disabled'
 * '<S48>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/Sum/Sum_PI'
 * '<S49>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/Sum Fdbk/Disabled'
 * '<S50>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/Tracking Mode/Disabled'
 * '<S51>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/Tracking Mode Sum/Passthrough'
 * '<S52>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/Tsamp - Integral/TsSignalSpecification'
 * '<S53>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/Tsamp - Ngain/Passthrough'
 * '<S54>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/postSat Signal/Forward_Path'
 * '<S55>'  : 'Asw_DCAC/Voltage closed loop/PID Controller3/preSat Signal/Forward_Path'
 * '<S56>'  : 'Asw_DCAC/Voltage closed loop/PID Controller4/Anti-windup'
 * '<S57>'  : 'Asw_DCAC/Voltage closed loop/PID Controller4/D Gain'
 * '<S58>'  : 'Asw_DCAC/Voltage closed loop/PID Controller4/Filter'
 * '<S59>'  : 'Asw_DCAC/Voltage closed loop/PID Controller4/Filter ICs'
 * '<S60>'  : 'Asw_DCAC/Voltage closed loop/PID Controller4/I Gain'
 * '<S61>'  : 'Asw_DCAC/Voltage closed loop/PID Controller4/Ideal P Gain'
 * '<S62>'  : 'Asw_DCAC/Voltage closed loop/PID Controller4/Ideal P Gain Fdbk'
 * '<S63>'  : 'Asw_DCAC/Voltage closed loop/PID Controller4/Integrator'
 * '<S64>'  : 'Asw_DCAC/Voltage closed loop/PID Controller4/Integrator ICs'
 * '<S65>'  : 'Asw_DCAC/Voltage closed loop/PID Controller4/N Copy'
 * '<S66>'  : 'Asw_DCAC/Voltage closed loop/PID Controller4/N Gain'
 * '<S67>'  : 'Asw_DCAC/Voltage closed loop/PID Controller4/P Copy'
 * '<S68>'  : 'Asw_DCAC/Voltage closed loop/PID Controller4/Parallel P Gain'
 * '<S69>'  : 'Asw_DCAC/Voltage closed loop/PID Controller4/Reset Signal'
 * '<S70>'  : 'Asw_DCAC/Voltage closed loop/PID Controller4/Saturation'
 * '<S71>'  : 'Asw_DCAC/Voltage closed loop/PID Controller4/Saturation Fdbk'
 * '<S72>'  : 'Asw_DCAC/Voltage closed loop/PID Controller4/Sum'
 * '<S73>'  : 'Asw_DCAC/Voltage closed loop/PID Controller4/Sum Fdbk'
 * '<S74>'  : 'Asw_DCAC/Voltage closed loop/PID Controller4/Tracking Mode'
 * '<S75>'  : 'Asw_DCAC/Voltage closed loop/PID Controller4/Tracking Mode Sum'
 * '<S76>'  : 'Asw_DCAC/Voltage closed loop/PID Controller4/Tsamp - Integral'
 * '<S77>'  : 'Asw_DCAC/Voltage closed loop/PID Controller4/Tsamp - Ngain'
 * '<S78>'  : 'Asw_DCAC/Voltage closed loop/PID Controller4/postSat Signal'
 * '<S79>'  : 'Asw_DCAC/Voltage closed loop/PID Controller4/preSat Signal'
 * '<S80>'  : 'Asw_DCAC/Voltage closed loop/PID Controller4/Anti-windup/Passthrough'
 * '<S81>'  : 'Asw_DCAC/Voltage closed loop/PID Controller4/D Gain/Disabled'
 * '<S82>'  : 'Asw_DCAC/Voltage closed loop/PID Controller4/Filter/Disabled'
 * '<S83>'  : 'Asw_DCAC/Voltage closed loop/PID Controller4/Filter ICs/Disabled'
 * '<S84>'  : 'Asw_DCAC/Voltage closed loop/PID Controller4/I Gain/Internal Parameters'
 * '<S85>'  : 'Asw_DCAC/Voltage closed loop/PID Controller4/Ideal P Gain/Passthrough'
 * '<S86>'  : 'Asw_DCAC/Voltage closed loop/PID Controller4/Ideal P Gain Fdbk/Disabled'
 * '<S87>'  : 'Asw_DCAC/Voltage closed loop/PID Controller4/Integrator/Discrete'
 * '<S88>'  : 'Asw_DCAC/Voltage closed loop/PID Controller4/Integrator ICs/Internal IC'
 * '<S89>'  : 'Asw_DCAC/Voltage closed loop/PID Controller4/N Copy/Disabled wSignal Specification'
 * '<S90>'  : 'Asw_DCAC/Voltage closed loop/PID Controller4/N Gain/Disabled'
 * '<S91>'  : 'Asw_DCAC/Voltage closed loop/PID Controller4/P Copy/Disabled'
 * '<S92>'  : 'Asw_DCAC/Voltage closed loop/PID Controller4/Parallel P Gain/Internal Parameters'
 * '<S93>'  : 'Asw_DCAC/Voltage closed loop/PID Controller4/Reset Signal/Disabled'
 * '<S94>'  : 'Asw_DCAC/Voltage closed loop/PID Controller4/Saturation/Passthrough'
 * '<S95>'  : 'Asw_DCAC/Voltage closed loop/PID Controller4/Saturation Fdbk/Disabled'
 * '<S96>'  : 'Asw_DCAC/Voltage closed loop/PID Controller4/Sum/Sum_PI'
 * '<S97>'  : 'Asw_DCAC/Voltage closed loop/PID Controller4/Sum Fdbk/Disabled'
 * '<S98>'  : 'Asw_DCAC/Voltage closed loop/PID Controller4/Tracking Mode/Disabled'
 * '<S99>'  : 'Asw_DCAC/Voltage closed loop/PID Controller4/Tracking Mode Sum/Passthrough'
 * '<S100>' : 'Asw_DCAC/Voltage closed loop/PID Controller4/Tsamp - Integral/TsSignalSpecification'
 * '<S101>' : 'Asw_DCAC/Voltage closed loop/PID Controller4/Tsamp - Ngain/Passthrough'
 * '<S102>' : 'Asw_DCAC/Voltage closed loop/PID Controller4/postSat Signal/Forward_Path'
 * '<S103>' : 'Asw_DCAC/Voltage closed loop/PID Controller4/preSat Signal/Forward_Path'
 */
#endif                                 /* RTW_HEADER_Asw_DCAC_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
