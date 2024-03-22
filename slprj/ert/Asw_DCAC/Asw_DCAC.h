/*
 * File: Asw_DCAC.h
 *
 * Code generated for Simulink model 'Asw_DCAC'.
 *
 * Model version                  : 1.29
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Fri Mar 22 10:44:19 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
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
#include "model_reference_types.h"

/* Block states (default storage) for model 'Asw_DCAC' */
typedef struct {
  real_T lastSin;                      /* '<Root>/Sine Wave5' */
  real_T lastCos;                      /* '<Root>/Sine Wave5' */
  int32_T systemEnable;                /* '<Root>/Sine Wave5' */
} DW_Asw_DCAC_f_T;

/* Real-time Model Data Structure */
struct tag_RTM_Asw_DCAC_T {
  const char_T **errorStatus;
  const rtTimingBridge *timingBridge;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    int_T mdlref_GlobalTID[1];
  } Timing;
};

typedef struct {
  DW_Asw_DCAC_f_T rtdw;
  RT_MODEL_Asw_DCAC_T rtm;
} MdlrefDW_Asw_DCAC_T;

/* Model reference registration function */
extern void Asw_DCAC_initialize(const char_T **rt_errorStatus, const
  rtTimingBridge *timingBridge, int_T mdlref_TID0, RT_MODEL_Asw_DCAC_T *const
  Asw_DCAC_M);
extern void Asw_DCAC_Enable(DW_Asw_DCAC_f_T *localDW);
extern void Asw_DCAC(RT_MODEL_Asw_DCAC_T * const Asw_DCAC_M, real32_T
                     *rty_Top_High_Frequency, real32_T
                     *rty_Bottom_High_Frequency, real32_T *rty_Low_Frequency,
                     DW_Asw_DCAC_f_T *localDW);

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Gain' : Unused code path elimination
 * Block '<S29>/Derivative Gain' : Unused code path elimination
 * Block '<S30>/DTDup' : Unused code path elimination
 * Block '<S30>/Diff' : Unused code path elimination
 * Block '<S32>/Tsamp' : Unused code path elimination
 * Block '<S30>/UD' : Unused code path elimination
 * Block '<S34>/Integral Gain' : Unused code path elimination
 * Block '<S37>/Integrator' : Unused code path elimination
 * Block '<S42>/Proportional Gain' : Unused code path elimination
 * Block '<S46>/Sum' : Unused code path elimination
 * Block '<Root>/Sine Wave1' : Unused code path elimination
 * Block '<Root>/Sum1' : Unused code path elimination
 * Block '<Root>/Sum5' : Unused code path elimination
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
 * '<S1>'   : 'Asw_DCAC/MATLAB Function'
 * '<S2>'   : 'Asw_DCAC/PID Controller1'
 * '<S3>'   : 'Asw_DCAC/单极性快慢调制1'
 * '<S4>'   : 'Asw_DCAC/PID Controller1/Anti-windup'
 * '<S5>'   : 'Asw_DCAC/PID Controller1/D Gain'
 * '<S6>'   : 'Asw_DCAC/PID Controller1/Filter'
 * '<S7>'   : 'Asw_DCAC/PID Controller1/Filter ICs'
 * '<S8>'   : 'Asw_DCAC/PID Controller1/I Gain'
 * '<S9>'   : 'Asw_DCAC/PID Controller1/Ideal P Gain'
 * '<S10>'  : 'Asw_DCAC/PID Controller1/Ideal P Gain Fdbk'
 * '<S11>'  : 'Asw_DCAC/PID Controller1/Integrator'
 * '<S12>'  : 'Asw_DCAC/PID Controller1/Integrator ICs'
 * '<S13>'  : 'Asw_DCAC/PID Controller1/N Copy'
 * '<S14>'  : 'Asw_DCAC/PID Controller1/N Gain'
 * '<S15>'  : 'Asw_DCAC/PID Controller1/P Copy'
 * '<S16>'  : 'Asw_DCAC/PID Controller1/Parallel P Gain'
 * '<S17>'  : 'Asw_DCAC/PID Controller1/Reset Signal'
 * '<S18>'  : 'Asw_DCAC/PID Controller1/Saturation'
 * '<S19>'  : 'Asw_DCAC/PID Controller1/Saturation Fdbk'
 * '<S20>'  : 'Asw_DCAC/PID Controller1/Sum'
 * '<S21>'  : 'Asw_DCAC/PID Controller1/Sum Fdbk'
 * '<S22>'  : 'Asw_DCAC/PID Controller1/Tracking Mode'
 * '<S23>'  : 'Asw_DCAC/PID Controller1/Tracking Mode Sum'
 * '<S24>'  : 'Asw_DCAC/PID Controller1/Tsamp - Integral'
 * '<S25>'  : 'Asw_DCAC/PID Controller1/Tsamp - Ngain'
 * '<S26>'  : 'Asw_DCAC/PID Controller1/postSat Signal'
 * '<S27>'  : 'Asw_DCAC/PID Controller1/preSat Signal'
 * '<S28>'  : 'Asw_DCAC/PID Controller1/Anti-windup/Passthrough'
 * '<S29>'  : 'Asw_DCAC/PID Controller1/D Gain/Internal Parameters'
 * '<S30>'  : 'Asw_DCAC/PID Controller1/Filter/Differentiator'
 * '<S31>'  : 'Asw_DCAC/PID Controller1/Filter/Differentiator/Tsamp'
 * '<S32>'  : 'Asw_DCAC/PID Controller1/Filter/Differentiator/Tsamp/Internal Ts'
 * '<S33>'  : 'Asw_DCAC/PID Controller1/Filter ICs/Internal IC - Differentiator'
 * '<S34>'  : 'Asw_DCAC/PID Controller1/I Gain/Internal Parameters'
 * '<S35>'  : 'Asw_DCAC/PID Controller1/Ideal P Gain/Passthrough'
 * '<S36>'  : 'Asw_DCAC/PID Controller1/Ideal P Gain Fdbk/Disabled'
 * '<S37>'  : 'Asw_DCAC/PID Controller1/Integrator/Discrete'
 * '<S38>'  : 'Asw_DCAC/PID Controller1/Integrator ICs/Internal IC'
 * '<S39>'  : 'Asw_DCAC/PID Controller1/N Copy/Disabled wSignal Specification'
 * '<S40>'  : 'Asw_DCAC/PID Controller1/N Gain/Passthrough'
 * '<S41>'  : 'Asw_DCAC/PID Controller1/P Copy/Disabled'
 * '<S42>'  : 'Asw_DCAC/PID Controller1/Parallel P Gain/Internal Parameters'
 * '<S43>'  : 'Asw_DCAC/PID Controller1/Reset Signal/Disabled'
 * '<S44>'  : 'Asw_DCAC/PID Controller1/Saturation/Passthrough'
 * '<S45>'  : 'Asw_DCAC/PID Controller1/Saturation Fdbk/Disabled'
 * '<S46>'  : 'Asw_DCAC/PID Controller1/Sum/Sum_PID'
 * '<S47>'  : 'Asw_DCAC/PID Controller1/Sum Fdbk/Disabled'
 * '<S48>'  : 'Asw_DCAC/PID Controller1/Tracking Mode/Disabled'
 * '<S49>'  : 'Asw_DCAC/PID Controller1/Tracking Mode Sum/Passthrough'
 * '<S50>'  : 'Asw_DCAC/PID Controller1/Tsamp - Integral/TsSignalSpecification'
 * '<S51>'  : 'Asw_DCAC/PID Controller1/Tsamp - Ngain/Passthrough'
 * '<S52>'  : 'Asw_DCAC/PID Controller1/postSat Signal/Forward_Path'
 * '<S53>'  : 'Asw_DCAC/PID Controller1/preSat Signal/Forward_Path'
 */
#endif                                 /* RTW_HEADER_Asw_DCAC_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
