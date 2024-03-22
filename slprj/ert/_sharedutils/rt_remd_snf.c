/*
 * File: rt_remd_snf.c
 *
 * Code generated for Simulink model 'DCAC'.
 *
 * Model version                  : 2.23
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Fri Mar 22 10:46:47 2024
 */

#include "rtwtypes.h"
#include "rt_remd_snf.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <float.h>

real_T rt_remd_snf(real_T u0, real_T u1)
{
  real_T y;
  if (rtIsNaN(u0) || rtIsNaN(u1) || rtIsInf(u0)) {
    y = (rtNaN);
  } else if (rtIsInf(u1)) {
    y = u0;
  } else if ((u1 != 0.0) && (u1 != trunc(u1))) {
    real_T q;
    q = fabs(u0 / u1);
    if (!(fabs(q - floor(q + 0.5)) > DBL_EPSILON * q)) {
      y = 0.0 * u0;
    } else {
      y = fmod(u0, u1);
    }
  } else {
    y = fmod(u0, u1);
  }

  return y;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
