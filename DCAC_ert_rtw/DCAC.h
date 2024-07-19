/*
 * File: DCAC.h
 *
 * Code generated for Simulink model 'DCAC'.
 *
 * Model version                  : 2.34
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Fri Mar 22 19:45:20 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_DCAC_h_
#define RTW_HEADER_DCAC_h_
#ifndef DCAC_COMMON_INCLUDES_
#define DCAC_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* DCAC_COMMON_INCLUDES_ */

#include "DCAC_types.h"
#include "Asw_DCAC.h"
#include "rtGetNaN.h"
#include "model_reference_types.h"
#include "rt_nonfinite.h"
#include <stddef.h>

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetErrorStatusPointer
#define rtmGetErrorStatusPointer(rtm)  ((const char_T **)(&((rtm)->errorStatus)))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

/* Block signals (default storage) */
typedef struct {
  real_T StateSpace_o1[19];            /* '<S55>/State-Space' */
  real_T StateSpace_o2[8];             /* '<S55>/State-Space' */
  real_T DataTypeConversion;           /* '<S22>/Data Type Conversion' */
  real_T DataTypeConversion_d;         /* '<S29>/Data Type Conversion' */
  real_T DataTypeConversion_p;         /* '<S43>/Data Type Conversion' */
  real_T DataTypeConversion_k;         /* '<S36>/Data Type Conversion' */
  real32_T DataTypeConversion1;        /* '<Root>/Data Type Conversion1' */
  real32_T DataTypeConversion3;        /* '<Root>/Data Type Conversion3' */
  real32_T DataTypeConversion2;        /* '<Root>/Data Type Conversion2' */
  real32_T Top_High_Frequency;         /* '<Root>/ASW' */
  real32_T Bottom_High_Frequency;      /* '<Root>/ASW' */
  real32_T Low_Frequency;              /* '<Root>/ASW' */
} B_DCAC_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T StateSpace_DSTATE[3];         /* '<S55>/State-Space' */
  struct {
    void *AS;
    void *BS;
    void *CS;
    void *DS;
    void *DX_COL;
    void *BD_COL;
    void *TMP1;
    void *TMP2;
    void *XTMP;
    void *SWITCH_STATUS;
    void *SWITCH_STATUS_INIT;
    void *SW_CHG;
    void *G_STATE;
    void *USWLAST;
    void *XKM12;
    void *XKP12;
    void *XLAST;
    void *ULAST;
    void *IDX_SW_CHG;
    void *Y_SWITCH;
    void *SWITCH_TYPES;
    void *IDX_OUT_SW;
    void *SWITCH_TOPO_SAVED_IDX;
    void *SWITCH_MAP;
  } StateSpace_PWORK;                  /* '<S55>/State-Space' */

  int_T StateSpace_IWORK[11];          /* '<S55>/State-Space' */
  MdlrefDW_Asw_DCAC_T ASW_InstanceData;/* '<Root>/ASW' */
} DW_DCAC_T;

/* Real-time Model Data Structure */
struct tag_RTM_DCAC_T {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    struct {
      uint32_T TID[3];
    } TaskCounters;

    SimTimeStep simTimeStep;
    time_T *t;
    time_T tArray[3];
  } Timing;
};

/* Block signals (default storage) */
extern B_DCAC_T DCAC_B;

/* Block states (default storage) */
extern DW_DCAC_T DCAC_DW;

/* Model entry point functions */
extern void DCAC_initialize(void);
extern void DCAC_step(void);
extern void DCAC_terminate(void);

/* Real-time Model object */
extern RT_MODEL_DCAC_T *const DCAC_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Add1' : Unused code path elimination
 * Block '<Root>/Data Type Conversion4' : Unused code path elimination
 * Block '<S2>/Add' : Unused code path elimination
 * Block '<S20>/0 1' : Unused code path elimination
 * Block '<S20>/Gain' : Unused code path elimination
 * Block '<S20>/Saturation' : Unused code path elimination
 * Block '<S20>/Sum' : Unused code path elimination
 * Block '<S20>/Switch' : Unused code path elimination
 * Block '<S22>/0 1' : Unused code path elimination
 * Block '<S22>/1//Rsw' : Unused code path elimination
 * Block '<S22>/Switch' : Unused code path elimination
 * Block '<S3>/Add' : Unused code path elimination
 * Block '<S27>/0 1' : Unused code path elimination
 * Block '<S27>/Gain' : Unused code path elimination
 * Block '<S27>/Saturation' : Unused code path elimination
 * Block '<S27>/Sum' : Unused code path elimination
 * Block '<S27>/Switch' : Unused code path elimination
 * Block '<S29>/0 1' : Unused code path elimination
 * Block '<S29>/1//Rsw' : Unused code path elimination
 * Block '<S29>/Switch' : Unused code path elimination
 * Block '<S4>/Add' : Unused code path elimination
 * Block '<S34>/0 1' : Unused code path elimination
 * Block '<S34>/Gain' : Unused code path elimination
 * Block '<S34>/Saturation' : Unused code path elimination
 * Block '<S34>/Sum' : Unused code path elimination
 * Block '<S34>/Switch' : Unused code path elimination
 * Block '<S36>/0 1' : Unused code path elimination
 * Block '<S36>/1//Rsw' : Unused code path elimination
 * Block '<S36>/Switch' : Unused code path elimination
 * Block '<S5>/Add' : Unused code path elimination
 * Block '<S41>/0 1' : Unused code path elimination
 * Block '<S41>/Gain' : Unused code path elimination
 * Block '<S41>/Saturation' : Unused code path elimination
 * Block '<S41>/Sum' : Unused code path elimination
 * Block '<S41>/Switch' : Unused code path elimination
 * Block '<S43>/0 1' : Unused code path elimination
 * Block '<S43>/1//Rsw' : Unused code path elimination
 * Block '<S43>/Switch' : Unused code path elimination
 * Block '<S46>/To Workspace' : Unused code path elimination
 * Block '<Root>/Scope11' : Unused code path elimination
 * Block '<Root>/Scope3' : Unused code path elimination
 * Block '<Root>/Scope6' : Unused code path elimination
 * Block '<S8>/do not delete this gain' : Unused code path elimination
 * Block '<S9>/do not delete this gain' : Unused code path elimination
 * Block '<S10>/do not delete this gain' : Unused code path elimination
 * Block '<S11>/do not delete this gain' : Unused code path elimination
 * Block '<S12>/do not delete this gain' : Unused code path elimination
 * Block '<S13>/do not delete this gain' : Unused code path elimination
 * Block '<S14>/do not delete this gain' : Unused code path elimination
 * Block '<S6>/Sign' : Eliminated nontunable gain of 1
 * Block '<S47>/Output' : Eliminate redundant signal conversion block
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
 * '<Root>' : 'DCAC'
 * '<S1>'   : 'DCAC/DC Vin 1'
 * '<S2>'   : 'DCAC/MOS1'
 * '<S3>'   : 'DCAC/MOS2'
 * '<S4>'   : 'DCAC/MOS3'
 * '<S5>'   : 'DCAC/MOS4'
 * '<S6>'   : 'DCAC/Multimeter1'
 * '<S7>'   : 'DCAC/Unipolar modulation PWM Generator'
 * '<S8>'   : 'DCAC/Voltage Measurement1'
 * '<S9>'   : 'DCAC/Voltage Measurement2'
 * '<S10>'  : 'DCAC/Voltage Measurement3'
 * '<S11>'  : 'DCAC/Voltage Measurement4'
 * '<S12>'  : 'DCAC/Voltage Measurement5'
 * '<S13>'  : 'DCAC/Voltage Measurement6'
 * '<S14>'  : 'DCAC/Voltage Measurement7'
 * '<S15>'  : 'DCAC/powergui'
 * '<S16>'  : 'DCAC/DC Vin 1/Model'
 * '<S17>'  : 'DCAC/MOS1/Diode'
 * '<S18>'  : 'DCAC/MOS1/Ideal Switch'
 * '<S19>'  : 'DCAC/MOS1/Measurement list'
 * '<S20>'  : 'DCAC/MOS1/Diode/Model'
 * '<S21>'  : 'DCAC/MOS1/Diode/Model/Measurement list'
 * '<S22>'  : 'DCAC/MOS1/Ideal Switch/Model'
 * '<S23>'  : 'DCAC/MOS1/Ideal Switch/Model/Measurement list'
 * '<S24>'  : 'DCAC/MOS2/Diode'
 * '<S25>'  : 'DCAC/MOS2/Ideal Switch'
 * '<S26>'  : 'DCAC/MOS2/Measurement list'
 * '<S27>'  : 'DCAC/MOS2/Diode/Model'
 * '<S28>'  : 'DCAC/MOS2/Diode/Model/Measurement list'
 * '<S29>'  : 'DCAC/MOS2/Ideal Switch/Model'
 * '<S30>'  : 'DCAC/MOS2/Ideal Switch/Model/Measurement list'
 * '<S31>'  : 'DCAC/MOS3/Diode'
 * '<S32>'  : 'DCAC/MOS3/Ideal Switch'
 * '<S33>'  : 'DCAC/MOS3/Measurement list'
 * '<S34>'  : 'DCAC/MOS3/Diode/Model'
 * '<S35>'  : 'DCAC/MOS3/Diode/Model/Measurement list'
 * '<S36>'  : 'DCAC/MOS3/Ideal Switch/Model'
 * '<S37>'  : 'DCAC/MOS3/Ideal Switch/Model/Measurement list'
 * '<S38>'  : 'DCAC/MOS4/Diode'
 * '<S39>'  : 'DCAC/MOS4/Ideal Switch'
 * '<S40>'  : 'DCAC/MOS4/Measurement list'
 * '<S41>'  : 'DCAC/MOS4/Diode/Model'
 * '<S42>'  : 'DCAC/MOS4/Diode/Model/Measurement list'
 * '<S43>'  : 'DCAC/MOS4/Ideal Switch/Model'
 * '<S44>'  : 'DCAC/MOS4/Ideal Switch/Model/Measurement list'
 * '<S45>'  : 'DCAC/Multimeter1/Model'
 * '<S46>'  : 'DCAC/Multimeter1/StoreData'
 * '<S47>'  : 'DCAC/Unipolar modulation PWM Generator/Repeating Sequence1'
 * '<S48>'  : 'DCAC/Voltage Measurement1/Model'
 * '<S49>'  : 'DCAC/Voltage Measurement2/Model'
 * '<S50>'  : 'DCAC/Voltage Measurement3/Model'
 * '<S51>'  : 'DCAC/Voltage Measurement4/Model'
 * '<S52>'  : 'DCAC/Voltage Measurement5/Model'
 * '<S53>'  : 'DCAC/Voltage Measurement6/Model'
 * '<S54>'  : 'DCAC/Voltage Measurement7/Model'
 * '<S55>'  : 'DCAC/powergui/EquivalentModel1'
 * '<S56>'  : 'DCAC/powergui/EquivalentModel1/Gates'
 * '<S57>'  : 'DCAC/powergui/EquivalentModel1/Sources'
 * '<S58>'  : 'DCAC/powergui/EquivalentModel1/Status'
 * '<S59>'  : 'DCAC/powergui/EquivalentModel1/Yout'
 */
#endif                                 /* RTW_HEADER_DCAC_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
