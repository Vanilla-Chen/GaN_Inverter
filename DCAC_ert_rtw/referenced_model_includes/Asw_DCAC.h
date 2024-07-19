/*
 * File: Asw_DCAC.h
 *
 * Code generated for Simulink model 'Asw_DCAC'.
 *
 * Model version                  : 1.59
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Fri Mar 22 19:45:12 2024
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
  real_T Integrator_DSTATE;            /* '<S36>/Integrator' */
  real_T Integrator_DSTATE_d;          /* '<S84>/Integrator' */
  real_T SINE[1000];                   /* '<Root>/MATLAB Function' */
  real_T add;                          /* '<Root>/MATLAB Function' */
  boolean_T flag_not_empty;            /* '<Root>/MATLAB Function' */
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
    int_T mdlref_GlobalTID[2];
  } Timing;
};

typedef struct {
  DW_Asw_DCAC_f_T rtdw;
  RT_MODEL_Asw_DCAC_T rtm;
} MdlrefDW_Asw_DCAC_T;

/* Model reference registration function */
extern void Asw_DCAC_initialize(const char_T **rt_errorStatus, const
  rtTimingBridge *timingBridge, int_T mdlref_TID0, int_T mdlref_TID1,
  RT_MODEL_Asw_DCAC_T *const Asw_DCAC_M);
extern void Asw_DCAC_Init(DW_Asw_DCAC_f_T *localDW);
extern void Asw_DCAC(RT_MODEL_Asw_DCAC_T * const Asw_DCAC_M, const real32_T
                     *rtu_U_Load, const real32_T *rtu_I_L, const real32_T
                     *rtu_I_Load, real32_T *rty_Top_High_Frequency, real32_T
                     *rty_Bottom_High_Frequency, real32_T *rty_Low_Frequency,
                     DW_Asw_DCAC_f_T *localDW);

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Data Type Conversion' : Unused code path elimination
 * Block '<Root>/Sine Wave5' : Unused code path elimination
 * Block '<S33>/Integral Gain' : Eliminated nontunable gain of 1
 * Block '<S81>/Integral Gain' : Eliminated nontunable gain of 1
 * Block '<S89>/Proportional Gain' : Eliminated nontunable gain of 1
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
 * '<S2>'   : 'Asw_DCAC/PID Controller3'
 * '<S3>'   : 'Asw_DCAC/PID Controller4'
 * '<S4>'   : 'Asw_DCAC/单极性快慢调制1'
 * '<S5>'   : 'Asw_DCAC/PID Controller3/Anti-windup'
 * '<S6>'   : 'Asw_DCAC/PID Controller3/D Gain'
 * '<S7>'   : 'Asw_DCAC/PID Controller3/Filter'
 * '<S8>'   : 'Asw_DCAC/PID Controller3/Filter ICs'
 * '<S9>'   : 'Asw_DCAC/PID Controller3/I Gain'
 * '<S10>'  : 'Asw_DCAC/PID Controller3/Ideal P Gain'
 * '<S11>'  : 'Asw_DCAC/PID Controller3/Ideal P Gain Fdbk'
 * '<S12>'  : 'Asw_DCAC/PID Controller3/Integrator'
 * '<S13>'  : 'Asw_DCAC/PID Controller3/Integrator ICs'
 * '<S14>'  : 'Asw_DCAC/PID Controller3/N Copy'
 * '<S15>'  : 'Asw_DCAC/PID Controller3/N Gain'
 * '<S16>'  : 'Asw_DCAC/PID Controller3/P Copy'
 * '<S17>'  : 'Asw_DCAC/PID Controller3/Parallel P Gain'
 * '<S18>'  : 'Asw_DCAC/PID Controller3/Reset Signal'
 * '<S19>'  : 'Asw_DCAC/PID Controller3/Saturation'
 * '<S20>'  : 'Asw_DCAC/PID Controller3/Saturation Fdbk'
 * '<S21>'  : 'Asw_DCAC/PID Controller3/Sum'
 * '<S22>'  : 'Asw_DCAC/PID Controller3/Sum Fdbk'
 * '<S23>'  : 'Asw_DCAC/PID Controller3/Tracking Mode'
 * '<S24>'  : 'Asw_DCAC/PID Controller3/Tracking Mode Sum'
 * '<S25>'  : 'Asw_DCAC/PID Controller3/Tsamp - Integral'
 * '<S26>'  : 'Asw_DCAC/PID Controller3/Tsamp - Ngain'
 * '<S27>'  : 'Asw_DCAC/PID Controller3/postSat Signal'
 * '<S28>'  : 'Asw_DCAC/PID Controller3/preSat Signal'
 * '<S29>'  : 'Asw_DCAC/PID Controller3/Anti-windup/Passthrough'
 * '<S30>'  : 'Asw_DCAC/PID Controller3/D Gain/Disabled'
 * '<S31>'  : 'Asw_DCAC/PID Controller3/Filter/Disabled'
 * '<S32>'  : 'Asw_DCAC/PID Controller3/Filter ICs/Disabled'
 * '<S33>'  : 'Asw_DCAC/PID Controller3/I Gain/Internal Parameters'
 * '<S34>'  : 'Asw_DCAC/PID Controller3/Ideal P Gain/Passthrough'
 * '<S35>'  : 'Asw_DCAC/PID Controller3/Ideal P Gain Fdbk/Disabled'
 * '<S36>'  : 'Asw_DCAC/PID Controller3/Integrator/Discrete'
 * '<S37>'  : 'Asw_DCAC/PID Controller3/Integrator ICs/Internal IC'
 * '<S38>'  : 'Asw_DCAC/PID Controller3/N Copy/Disabled wSignal Specification'
 * '<S39>'  : 'Asw_DCAC/PID Controller3/N Gain/Disabled'
 * '<S40>'  : 'Asw_DCAC/PID Controller3/P Copy/Disabled'
 * '<S41>'  : 'Asw_DCAC/PID Controller3/Parallel P Gain/Internal Parameters'
 * '<S42>'  : 'Asw_DCAC/PID Controller3/Reset Signal/Disabled'
 * '<S43>'  : 'Asw_DCAC/PID Controller3/Saturation/Passthrough'
 * '<S44>'  : 'Asw_DCAC/PID Controller3/Saturation Fdbk/Disabled'
 * '<S45>'  : 'Asw_DCAC/PID Controller3/Sum/Sum_PI'
 * '<S46>'  : 'Asw_DCAC/PID Controller3/Sum Fdbk/Disabled'
 * '<S47>'  : 'Asw_DCAC/PID Controller3/Tracking Mode/Disabled'
 * '<S48>'  : 'Asw_DCAC/PID Controller3/Tracking Mode Sum/Passthrough'
 * '<S49>'  : 'Asw_DCAC/PID Controller3/Tsamp - Integral/TsSignalSpecification'
 * '<S50>'  : 'Asw_DCAC/PID Controller3/Tsamp - Ngain/Passthrough'
 * '<S51>'  : 'Asw_DCAC/PID Controller3/postSat Signal/Forward_Path'
 * '<S52>'  : 'Asw_DCAC/PID Controller3/preSat Signal/Forward_Path'
 * '<S53>'  : 'Asw_DCAC/PID Controller4/Anti-windup'
 * '<S54>'  : 'Asw_DCAC/PID Controller4/D Gain'
 * '<S55>'  : 'Asw_DCAC/PID Controller4/Filter'
 * '<S56>'  : 'Asw_DCAC/PID Controller4/Filter ICs'
 * '<S57>'  : 'Asw_DCAC/PID Controller4/I Gain'
 * '<S58>'  : 'Asw_DCAC/PID Controller4/Ideal P Gain'
 * '<S59>'  : 'Asw_DCAC/PID Controller4/Ideal P Gain Fdbk'
 * '<S60>'  : 'Asw_DCAC/PID Controller4/Integrator'
 * '<S61>'  : 'Asw_DCAC/PID Controller4/Integrator ICs'
 * '<S62>'  : 'Asw_DCAC/PID Controller4/N Copy'
 * '<S63>'  : 'Asw_DCAC/PID Controller4/N Gain'
 * '<S64>'  : 'Asw_DCAC/PID Controller4/P Copy'
 * '<S65>'  : 'Asw_DCAC/PID Controller4/Parallel P Gain'
 * '<S66>'  : 'Asw_DCAC/PID Controller4/Reset Signal'
 * '<S67>'  : 'Asw_DCAC/PID Controller4/Saturation'
 * '<S68>'  : 'Asw_DCAC/PID Controller4/Saturation Fdbk'
 * '<S69>'  : 'Asw_DCAC/PID Controller4/Sum'
 * '<S70>'  : 'Asw_DCAC/PID Controller4/Sum Fdbk'
 * '<S71>'  : 'Asw_DCAC/PID Controller4/Tracking Mode'
 * '<S72>'  : 'Asw_DCAC/PID Controller4/Tracking Mode Sum'
 * '<S73>'  : 'Asw_DCAC/PID Controller4/Tsamp - Integral'
 * '<S74>'  : 'Asw_DCAC/PID Controller4/Tsamp - Ngain'
 * '<S75>'  : 'Asw_DCAC/PID Controller4/postSat Signal'
 * '<S76>'  : 'Asw_DCAC/PID Controller4/preSat Signal'
 * '<S77>'  : 'Asw_DCAC/PID Controller4/Anti-windup/Passthrough'
 * '<S78>'  : 'Asw_DCAC/PID Controller4/D Gain/Disabled'
 * '<S79>'  : 'Asw_DCAC/PID Controller4/Filter/Disabled'
 * '<S80>'  : 'Asw_DCAC/PID Controller4/Filter ICs/Disabled'
 * '<S81>'  : 'Asw_DCAC/PID Controller4/I Gain/Internal Parameters'
 * '<S82>'  : 'Asw_DCAC/PID Controller4/Ideal P Gain/Passthrough'
 * '<S83>'  : 'Asw_DCAC/PID Controller4/Ideal P Gain Fdbk/Disabled'
 * '<S84>'  : 'Asw_DCAC/PID Controller4/Integrator/Discrete'
 * '<S85>'  : 'Asw_DCAC/PID Controller4/Integrator ICs/Internal IC'
 * '<S86>'  : 'Asw_DCAC/PID Controller4/N Copy/Disabled wSignal Specification'
 * '<S87>'  : 'Asw_DCAC/PID Controller4/N Gain/Disabled'
 * '<S88>'  : 'Asw_DCAC/PID Controller4/P Copy/Disabled'
 * '<S89>'  : 'Asw_DCAC/PID Controller4/Parallel P Gain/Internal Parameters'
 * '<S90>'  : 'Asw_DCAC/PID Controller4/Reset Signal/Disabled'
 * '<S91>'  : 'Asw_DCAC/PID Controller4/Saturation/Passthrough'
 * '<S92>'  : 'Asw_DCAC/PID Controller4/Saturation Fdbk/Disabled'
 * '<S93>'  : 'Asw_DCAC/PID Controller4/Sum/Sum_PI'
 * '<S94>'  : 'Asw_DCAC/PID Controller4/Sum Fdbk/Disabled'
 * '<S95>'  : 'Asw_DCAC/PID Controller4/Tracking Mode/Disabled'
 * '<S96>'  : 'Asw_DCAC/PID Controller4/Tracking Mode Sum/Passthrough'
 * '<S97>'  : 'Asw_DCAC/PID Controller4/Tsamp - Integral/TsSignalSpecification'
 * '<S98>'  : 'Asw_DCAC/PID Controller4/Tsamp - Ngain/Passthrough'
 * '<S99>'  : 'Asw_DCAC/PID Controller4/postSat Signal/Forward_Path'
 * '<S100>' : 'Asw_DCAC/PID Controller4/preSat Signal/Forward_Path'
 */
#endif                                 /* RTW_HEADER_Asw_DCAC_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
