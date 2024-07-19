/*
 * File: DCAC_private.h
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

#ifndef RTW_HEADER_DCAC_private_h_
#define RTW_HEADER_DCAC_private_h_
#include "rtwtypes.h"
#include "model_reference_types.h"
#include "DCAC_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include <math.h>
#include <stdlib.h>

/* Private macros used by the generated code to access rtModel */
#ifndef rtmIsMajorTimeStep
#define rtmIsMajorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
#define rtmIsMinorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmSetTPtr
#define rtmSetTPtr(rtm, val)           ((rtm)->Timing.t = (val))
#endif

#ifndef CodeFormat
#define CodeFormat                     S-Function
#else
#undef CodeFormat
#define CodeFormat                     S-Function
#endif

#ifndef S_FUNCTION_NAME
#define S_FUNCTION_NAME                simulink_only_sfcn
#else
#undef S_FUNCTION_NAME
#define S_FUNCTION_NAME                simulink_only_sfcn
#endif

#ifndef S_FUNCTION_LEVEL
#define S_FUNCTION_LEVEL               2
#else
#undef S_FUNCTION_LEVEL
#define S_FUNCTION_LEVEL               2
#endif

#ifndef RTW_GENERATED_S_FUNCTION
#define RTW_GENERATED_S_FUNCTION
#endif

#ifndef rtmGetDataMapInfo
# define rtmGetDataMapInfo(rtm)        NULL
#endif

#ifndef rtmSetDataMapInfo
# define rtmSetDataMapInfo(rtm, val)
#endif

#if !defined(RTW_SFUNCTION_DEFINES)
#define RTW_SFUNCTION_DEFINES
#ifndef _RTW_COMMON_DEFINES_
#define _RTW_COMMON_DEFINES_
#endif
#endif

extern const real_T rtCP_pooled_Kms2fIndQphW[8];
extern const real_T rtCP_pooled_XVw3ZmiOVFCf[9];
extern const real_T rtCP_pooled_hJq6pInhl2JZ[39];
extern const real_T rtCP_pooled_G2xiNPdyk9bv[57];
extern const real_T rtCP_pooled_rWFeBiD318vr[247];
extern const real_T rtCP_pooled_mzqcERVVkXUg[3];
extern const real_T rtCP_pooled_8PsYv7ASgMl0[3];
extern const real_T rtCP_pooled_UpUrgzs12X5b[3];

#define rtCP_SwitchCurrents_Value      rtCP_pooled_Kms2fIndQphW  /* Expression: zeros(8,1)
                                                                  * Referenced by: '<S57>/SwitchCurrents'
                                                                  */
#define rtCP_StateSpace_AS_param       rtCP_pooled_XVw3ZmiOVFCf  /* Expression: S.A
                                                                  * Referenced by: '<S55>/State-Space'
                                                                  */
#define rtCP_StateSpace_BS_param       rtCP_pooled_hJq6pInhl2JZ  /* Expression: S.B
                                                                  * Referenced by: '<S55>/State-Space'
                                                                  */
#define rtCP_StateSpace_CS_param       rtCP_pooled_G2xiNPdyk9bv  /* Expression: S.C
                                                                  * Referenced by: '<S55>/State-Space'
                                                                  */
#define rtCP_StateSpace_DS_param       rtCP_pooled_rWFeBiD318vr  /* Expression: S.D
                                                                  * Referenced by: '<S55>/State-Space'
                                                                  */
#define rtCP_StateSpace_X0_param       rtCP_pooled_mzqcERVVkXUg  /* Expression: S.x0
                                                                  * Referenced by: '<S55>/State-Space'
                                                                  */
#define rtCP_LookUpTable1_tableData    rtCP_pooled_8PsYv7ASgMl0  /* Expression: rep_seq_y
                                                                  * Referenced by: '<S47>/Look-Up Table1'
                                                                  */
#define rtCP_LookUpTable1_bp01Data     rtCP_pooled_UpUrgzs12X5b  /* Expression: rep_seq_t - min(rep_seq_t)
                                                                  * Referenced by: '<S47>/Look-Up Table1'
                                                                  */

extern rtTimingBridge DCAC_TimingBrdg;

#endif                                 /* RTW_HEADER_DCAC_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
