/*
 * File: Asw_DCAC.c
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

#include "Asw_DCAC.h"
#include "rtwtypes.h"
#include <math.h>
#include "Asw_DCAC_types.h"
#include "Asw_DCAC_private.h"

/* Enable for referenced model: 'Asw_DCAC' */
void Asw_DCAC_Enable(DW_Asw_DCAC_f_T *localDW)
{
  /* Enable for Sin: '<Root>/Sine Wave5' */
  localDW->systemEnable = 1;
}

/* Output and update for referenced model: 'Asw_DCAC' */
void Asw_DCAC(RT_MODEL_Asw_DCAC_T * const Asw_DCAC_M, real32_T
              *rty_Top_High_Frequency, real32_T *rty_Bottom_High_Frequency,
              real32_T *rty_Low_Frequency, DW_Asw_DCAC_f_T *localDW)
{
  real_T rtb_SineWave5;

  /* Sin: '<Root>/Sine Wave5' */
  if (localDW->systemEnable != 0) {
    rtb_SineWave5 = 6283.1853071795858 * (( rtmGetClockTick0(Asw_DCAC_M) +
      rtmGetClockTickH0(Asw_DCAC_M)*4294967296.0 ) * 1.0E-6);
    localDW->lastSin = sin(rtb_SineWave5);
    localDW->lastCos = cos(rtb_SineWave5);
    localDW->systemEnable = 0;
  }

  rtb_SineWave5 = (localDW->lastSin * 0.99998026085613712 + localDW->lastCos *
                   -0.00628314396555895) * 0.99998026085613712 +
    (localDW->lastCos * 0.99998026085613712 - localDW->lastSin *
     -0.00628314396555895) * 0.00628314396555895;

  /* End of Sin: '<Root>/Sine Wave5' */

  /* MATLAB Function: '<Root>/单极性快慢调制1' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion'
   */
  *rty_Top_High_Frequency = 0.0F;
  *rty_Bottom_High_Frequency = 0.0F;
  if ((real32_T)rtb_SineWave5 >= 0.0F) {
    *rty_Top_High_Frequency = (real32_T)rtb_SineWave5;
    *rty_Low_Frequency = 0.0F;
  } else {
    *rty_Bottom_High_Frequency = -(real32_T)rtb_SineWave5;
    *rty_Low_Frequency = 1.0F;
  }

  /* End of MATLAB Function: '<Root>/单极性快慢调制1' */

  /* Update for Sin: '<Root>/Sine Wave5' */
  rtb_SineWave5 = localDW->lastSin;
  localDW->lastSin = localDW->lastSin * 0.99998026085613712 + localDW->lastCos *
    0.00628314396555895;
  localDW->lastCos = localDW->lastCos * 0.99998026085613712 - rtb_SineWave5 *
    0.00628314396555895;
}

/* Model initialize function */
void Asw_DCAC_initialize(const char_T **rt_errorStatus, const rtTimingBridge
  *timingBridge, int_T mdlref_TID0, RT_MODEL_Asw_DCAC_T *const Asw_DCAC_M)
{
  /* Registration code */

  /* setup the global timing engine */
  Asw_DCAC_M->Timing.mdlref_GlobalTID[0] = mdlref_TID0;
  Asw_DCAC_M->timingBridge = (timingBridge);

  /* initialize error status */
  rtmSetErrorStatusPointer(Asw_DCAC_M, rt_errorStatus);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
