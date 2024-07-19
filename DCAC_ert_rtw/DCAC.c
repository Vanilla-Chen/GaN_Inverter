/*
 * File: DCAC.c
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

#include "DCAC.h"
#include "rt_remd_snf.h"
#include "rtwtypes.h"
#include "DCAC_private.h"
#include "look1_binlxpw.h"
#include "Asw_DCAC.h"
#include "rt_nonfinite.h"

rtTimingBridge DCAC_TimingBrdg;

/* Block signals (default storage) */
B_DCAC_T DCAC_B;

/* Block states (default storage) */
DW_DCAC_T DCAC_DW;

/* Real-time model */
static RT_MODEL_DCAC_T DCAC_M_;
RT_MODEL_DCAC_T *const DCAC_M = &DCAC_M_;
static void rate_scheduler(void);

/*
 *         This function updates active task flag for each subrate.
 *         The function is called at model base rate, hence the
 *         generated code self-manages all its subrates.
 */
static void rate_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (DCAC_M->Timing.TaskCounters.TID[2])++;
  if ((DCAC_M->Timing.TaskCounters.TID[2]) > 99) {/* Sample time: [1.0E-6s, 0.0s] */
    DCAC_M->Timing.TaskCounters.TID[2] = 0;
  }
}

/* Model step function */
void DCAC_step(void)
{
  real_T rtb_LookUpTable1;
  boolean_T rtb_RelationalOperator2;

  /* S-Function (sfun_spssw_discc): '<S55>/State-Space' incorporates:
   *  Constant: '<S16>/DC'
   *  Constant: '<S20>/eee'
   *  Constant: '<S27>/eee'
   *  Constant: '<S34>/eee'
   *  Constant: '<S41>/eee'
   *  Constant: '<S57>/SwitchCurrents'
   */

  /* S-Function block: <S55>/State-Space */
  {
    real_T accum;

    /* Circuit has switches */
    int_T *switch_status = (int_T*) DCAC_DW.StateSpace_PWORK.SWITCH_STATUS;
    int_T *switch_status_init = (int_T*)
      DCAC_DW.StateSpace_PWORK.SWITCH_STATUS_INIT;
    int_T *SwitchChange = (int_T*) DCAC_DW.StateSpace_PWORK.SW_CHG;
    int_T *gState = (int_T*) DCAC_DW.StateSpace_PWORK.G_STATE;
    real_T *yswitch = (real_T*)DCAC_DW.StateSpace_PWORK.Y_SWITCH;
    int_T *switchTypes = (int_T*) DCAC_DW.StateSpace_PWORK.SWITCH_TYPES;
    int_T *idxOutSw = (int_T*) DCAC_DW.StateSpace_PWORK.IDX_OUT_SW;
    real_T *DxCol = (real_T*)DCAC_DW.StateSpace_PWORK.DX_COL;
    real_T *tmp2 = (real_T*)DCAC_DW.StateSpace_PWORK.TMP2;
    real_T *BDcol = (real_T*)DCAC_DW.StateSpace_PWORK.BD_COL;
    real_T *tmp1 = (real_T*)DCAC_DW.StateSpace_PWORK.TMP1;
    real_T *uswlast = (real_T*)DCAC_DW.StateSpace_PWORK.USWLAST;
    int_T newState;
    int_T swChanged = 0;
    int loopsToDo = 20;
    real_T temp;

    /* keep an initial copy of switch_status*/
    memcpy(switch_status_init, switch_status, 8 * sizeof(int_T));
    memcpy(uswlast, &DCAC_B.StateSpace_o1[0], 8*sizeof(real_T));
    do {
      if (loopsToDo == 1) {            /* Need to reset some variables: */
        swChanged = 0;

        /* return to the original switch status*/
        {
          int_T i1;
          for (i1=0; i1 < 8; i1++) {
            swChanged = ((SwitchChange[i1] = switch_status_init[i1] -
                          switch_status[i1]) != 0) ? 1 : swChanged;
            switch_status[i1] = switch_status_init[i1];
          }
        }
      } else {
        /*
         * Compute outputs:
         * ---------------
         */
        real_T *Cs = (real_T*)DCAC_DW.StateSpace_PWORK.CS;
        real_T *Ds = (real_T*)DCAC_DW.StateSpace_PWORK.DS;

        {
          int_T i1;
          real_T *y0 = &DCAC_B.StateSpace_o1[0];
          for (i1=0; i1 < 19; i1++) {
            accum = 0.0;
            accum += *(Cs++) * DCAC_DW.StateSpace_DSTATE[0];
            accum += *(Cs++) * DCAC_DW.StateSpace_DSTATE[1];
            accum += *(Cs++) * DCAC_DW.StateSpace_DSTATE[2];

            {
              int_T i2;
              const real_T *u0 = rtCP_SwitchCurrents_Value;
              for (i2=0; i2 < 8; i2++) {
                accum += *(Ds++) * u0[i2];
              }

              accum += *(Ds++) * 100.0;
              accum += *(Ds++) * 0.7;
              accum += *(Ds++) * 0.7;
              accum += *(Ds++) * 0.7;
              accum += *(Ds++) * 0.7;
            }

            y0[i1] = accum;
          }
        }

        swChanged = 0;

        {
          int_T i1;
          real_T *y0 = &DCAC_B.StateSpace_o1[0];
          for (i1=0; i1 < 8; i1++) {
            switch (switchTypes[i1]) {
             case 1 :                  /* Ideal switch */
              newState = gState[i1] > 0 ? 1 : 0;
              break;

             case 3 :                  /* Diodes */
              newState = y0[i1] > 0.0 ? 1 : ((y0[i1] < 0.0) ? 0 :
                switch_status[i1]);
              break;
            }

            swChanged = ((SwitchChange[i1] = newState - switch_status[i1]) != 0)
              ? 1 : swChanged;
            switch_status[i1] = newState;/* Keep new state */
          }
        }
      }

      /*
       * Compute new As, Bs, Cs and Ds matrixes:
       * --------------------------------------
       */
      if (swChanged) {
        real_T *As = (real_T*)DCAC_DW.StateSpace_PWORK.AS;
        real_T *Cs = (real_T*)DCAC_DW.StateSpace_PWORK.CS;
        real_T *Bs = (real_T*)DCAC_DW.StateSpace_PWORK.BS;
        real_T *Ds = (real_T*)DCAC_DW.StateSpace_PWORK.DS;
        real_T a1;

        {
          int_T i1;
          for (i1=0; i1 < 8; i1++) {
            if (SwitchChange[i1] != 0) {
              a1 = yswitch[i1]*SwitchChange[i1];
              temp = 1/(1-Ds[i1*14]*a1);

              {
                int_T i2;
                for (i2=0; i2 < 19; i2++) {
                  DxCol[i2]= Ds[i2 * 13 + i1]*temp*a1;
                }
              }

              DxCol[i1] = temp;
              BDcol[0]= Bs[0 + i1]*a1;
              BDcol[1]= Bs[13 + i1]*a1;
              BDcol[2]= Bs[26 + i1]*a1;

              /* Copy row nSw of Cs into tmp1 and zero it out in Cs */
              memcpy(tmp1, &Cs[i1 * 3], 3 * sizeof(real_T));
              memset(&Cs[i1 * 3], '\0', 3 * sizeof(real_T));

              /* Copy row nSw of Ds into tmp2 and zero it out in Ds */
              memcpy(tmp2, &Ds[i1 * 13], 13 * sizeof(real_T));
              memset(&Ds[i1 * 13], '\0', 13 * sizeof(real_T));

              /* Cs = Cs + DxCol * tmp1, Ds = Ds + DxCol * tmp2 *******************/
              {
                int_T i2;
                for (i2=0; i2 < 19; i2++) {
                  a1 = DxCol[i2];
                  Cs[i2 * 3 + 0] += a1 * tmp1[0];
                  Cs[i2 * 3 + 1] += a1 * tmp1[1];
                  Cs[i2 * 3 + 2] += a1 * tmp1[2];

                  {
                    int_T i3;
                    for (i3=0; i3 < 13; i3++) {
                      Ds[i2 * 13 + i3] += a1 * tmp2[i3];
                    }
                  }
                }
              }

              /* As = As + BdCol*Cs(nSw,:), Bs = Bs + BdCol*Ds(nSw,:) *************/
              a1 = BDcol[0];
              As[0 + 0] += a1 * Cs[i1 * 3 + 0];
              As[0 + 1] += a1 * Cs[i1 * 3 + 1];
              As[0 + 2] += a1 * Cs[i1 * 3 + 2];

              {
                int_T i2;
                for (i2=0; i2 < 13; i2++) {
                  Bs[0 + i2] += a1 * Ds[i1 * 13 + i2];
                }
              }

              a1 = BDcol[1];
              As[3 + 0] += a1 * Cs[i1 * 3 + 0];
              As[3 + 1] += a1 * Cs[i1 * 3 + 1];
              As[3 + 2] += a1 * Cs[i1 * 3 + 2];

              {
                int_T i2;
                for (i2=0; i2 < 13; i2++) {
                  Bs[13 + i2] += a1 * Ds[i1 * 13 + i2];
                }
              }

              a1 = BDcol[2];
              As[6 + 0] += a1 * Cs[i1 * 3 + 0];
              As[6 + 1] += a1 * Cs[i1 * 3 + 1];
              As[6 + 2] += a1 * Cs[i1 * 3 + 2];

              {
                int_T i2;
                for (i2=0; i2 < 13; i2++) {
                  Bs[26 + i2] += a1 * Ds[i1 * 13 + i2];
                }
              }
            }
          }
        }
      }                                /* if (swChanged) */
    } while (swChanged > 0 && --loopsToDo > 0);

    if (loopsToDo == 0) {
      real_T *Cs = (real_T*)DCAC_DW.StateSpace_PWORK.CS;
      real_T *Ds = (real_T*)DCAC_DW.StateSpace_PWORK.DS;

      {
        int_T i1;
        real_T *y0 = &DCAC_B.StateSpace_o1[0];
        for (i1=0; i1 < 19; i1++) {
          accum = 0.0;
          accum += *(Cs++) * DCAC_DW.StateSpace_DSTATE[0];
          accum += *(Cs++) * DCAC_DW.StateSpace_DSTATE[1];
          accum += *(Cs++) * DCAC_DW.StateSpace_DSTATE[2];

          {
            int_T i2;
            const real_T *u0 = rtCP_SwitchCurrents_Value;
            for (i2=0; i2 < 8; i2++) {
              accum += *(Ds++) * u0[i2];
            }

            accum += *(Ds++) * 100.0;
            accum += *(Ds++) * 0.7;
            accum += *(Ds++) * 0.7;
            accum += *(Ds++) * 0.7;
            accum += *(Ds++) * 0.7;
          }

          y0[i1] = accum;
        }
      }
    }

    /* Output new switches states */
    {
      int_T i1;
      real_T *y1 = &DCAC_B.StateSpace_o2[0];
      for (i1=0; i1 < 8; i1++) {
        y1[i1] = (real_T)switch_status[i1];
      }
    }
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion1' */
  DCAC_B.DataTypeConversion1 = (real32_T)DCAC_B.StateSpace_o1[16];

  /* DataTypeConversion: '<Root>/Data Type Conversion3' */
  DCAC_B.DataTypeConversion3 = (real32_T)DCAC_B.StateSpace_o1[17];

  /* DataTypeConversion: '<Root>/Data Type Conversion2' */
  DCAC_B.DataTypeConversion2 = (real32_T)DCAC_B.StateSpace_o1[18];

  /* ModelReference: '<Root>/ASW' */
  Asw_DCAC(&(DCAC_DW.ASW_InstanceData.rtm), &DCAC_B.DataTypeConversion1,
           &DCAC_B.DataTypeConversion3, &DCAC_B.DataTypeConversion2,
           &DCAC_B.Top_High_Frequency, &DCAC_B.Bottom_High_Frequency,
           &DCAC_B.Low_Frequency, &(DCAC_DW.ASW_InstanceData.rtdw));

  /* Lookup_n-D: '<S47>/Look-Up Table1' incorporates:
   *  Clock: '<S47>/Clock'
   *  Constant: '<S47>/Constant'
   *  Math: '<S47>/Math Function'
   */
  rtb_LookUpTable1 = look1_binlxpw(rt_remd_snf(DCAC_M->Timing.t[0], 1.0E-6),
    rtCP_LookUpTable1_bp01Data, rtCP_LookUpTable1_tableData, 2U);

  /* DataTypeConversion: '<S22>/Data Type Conversion' incorporates:
   *  RelationalOperator: '<S7>/Relational Operator1'
   */
  DCAC_B.DataTypeConversion = (DCAC_B.Top_High_Frequency >= rtb_LookUpTable1);

  /* RelationalOperator: '<S7>/Relational Operator' */
  rtb_RelationalOperator2 = (DCAC_B.Low_Frequency >= rtb_LookUpTable1);

  /* DataTypeConversion: '<S29>/Data Type Conversion' */
  DCAC_B.DataTypeConversion_d = rtb_RelationalOperator2;

  /* DataTypeConversion: '<S43>/Data Type Conversion' incorporates:
   *  Logic: '<S7>/NOT1'
   */
  DCAC_B.DataTypeConversion_p = !rtb_RelationalOperator2;

  /* DataTypeConversion: '<S36>/Data Type Conversion' incorporates:
   *  RelationalOperator: '<S7>/Relational Operator2'
   */
  DCAC_B.DataTypeConversion_k = (DCAC_B.Bottom_High_Frequency >=
    rtb_LookUpTable1);

  /* Update for S-Function (sfun_spssw_discc): '<S55>/State-Space' incorporates:
   *  Constant: '<S16>/DC'
   *  Constant: '<S20>/eee'
   *  Constant: '<S27>/eee'
   *  Constant: '<S34>/eee'
   *  Constant: '<S41>/eee'
   *  Constant: '<S57>/SwitchCurrents'
   */

  /* S-Function block: <S55>/State-Space */
  {
    const real_T *As = (real_T*)DCAC_DW.StateSpace_PWORK.AS;
    const real_T *Bs = (real_T*)DCAC_DW.StateSpace_PWORK.BS;
    real_T *xtmp = (real_T*)DCAC_DW.StateSpace_PWORK.XTMP;
    real_T accum;

    /* Calculate new states... */
    accum = 0.0;
    accum += *(As++) * DCAC_DW.StateSpace_DSTATE[0];
    accum += *(As++) * DCAC_DW.StateSpace_DSTATE[1];
    accum += *(As++) * DCAC_DW.StateSpace_DSTATE[2];

    {
      int_T i1;
      const real_T *u0 = rtCP_SwitchCurrents_Value;
      for (i1=0; i1 < 8; i1++) {
        accum += *(Bs++) * u0[i1];
      }

      accum += *(Bs++) * 100.0;
      accum += *(Bs++) * 0.7;
      accum += *(Bs++) * 0.7;
      accum += *(Bs++) * 0.7;
      accum += *(Bs++) * 0.7;
    }

    xtmp[0] = accum;
    accum = 0.0;
    accum += *(As++) * DCAC_DW.StateSpace_DSTATE[0];
    accum += *(As++) * DCAC_DW.StateSpace_DSTATE[1];
    accum += *(As++) * DCAC_DW.StateSpace_DSTATE[2];

    {
      int_T i1;
      const real_T *u0 = rtCP_SwitchCurrents_Value;
      for (i1=0; i1 < 8; i1++) {
        accum += *(Bs++) * u0[i1];
      }

      accum += *(Bs++) * 100.0;
      accum += *(Bs++) * 0.7;
      accum += *(Bs++) * 0.7;
      accum += *(Bs++) * 0.7;
      accum += *(Bs++) * 0.7;
    }

    xtmp[1] = accum;
    accum = 0.0;
    accum += *(As++) * DCAC_DW.StateSpace_DSTATE[0];
    accum += *(As++) * DCAC_DW.StateSpace_DSTATE[1];
    accum += *(As++) * DCAC_DW.StateSpace_DSTATE[2];

    {
      int_T i1;
      const real_T *u0 = rtCP_SwitchCurrents_Value;
      for (i1=0; i1 < 8; i1++) {
        accum += *(Bs++) * u0[i1];
      }

      accum += *(Bs++) * 100.0;
      accum += *(Bs++) * 0.7;
      accum += *(Bs++) * 0.7;
      accum += *(Bs++) * 0.7;
      accum += *(Bs++) * 0.7;
    }

    xtmp[2] = accum;
    DCAC_DW.StateSpace_DSTATE[0] = xtmp[0];
    DCAC_DW.StateSpace_DSTATE[1] = xtmp[1];
    DCAC_DW.StateSpace_DSTATE[2] = xtmp[2];

    {
      int_T *gState = (int_T*)DCAC_DW.StateSpace_PWORK.G_STATE;

      /* Store switch gates values for next step */
      *(gState++) = (int_T) DCAC_B.DataTypeConversion;
      *(gState++) = (int_T) DCAC_B.DataTypeConversion_d;
      *(gState++) = (int_T) DCAC_B.DataTypeConversion_k;
      *(gState++) = (int_T) DCAC_B.DataTypeConversion_p;
      *(gState++) = (int_T) 0.0;
      *(gState++) = (int_T) 0.0;
      *(gState++) = (int_T) 0.0;
      *(gState++) = (int_T) 0.0;
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++DCAC_M->Timing.clockTick0)) {
    ++DCAC_M->Timing.clockTickH0;
  }

  DCAC_M->Timing.t[0] = DCAC_M->Timing.clockTick0 * DCAC_M->Timing.stepSize0 +
    DCAC_M->Timing.clockTickH0 * DCAC_M->Timing.stepSize0 * 4294967296.0;

  {
    /* Update absolute timer for sample time: [1.0E-8s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The resolution of this integer timer is 1.0E-8, which is the step size
     * of the task. Size of "clockTick1" ensures timer will not overflow during the
     * application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    DCAC_M->Timing.clockTick1++;
    if (!DCAC_M->Timing.clockTick1) {
      DCAC_M->Timing.clockTickH1++;
    }
  }

  rate_scheduler();
}

/* Model initialize function */
void DCAC_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&DCAC_M->solverInfo, &DCAC_M->Timing.simTimeStep);
    rtsiSetTPtr(&DCAC_M->solverInfo, &rtmGetTPtr(DCAC_M));
    rtsiSetStepSizePtr(&DCAC_M->solverInfo, &DCAC_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&DCAC_M->solverInfo, (&rtmGetErrorStatus(DCAC_M)));
    rtsiSetRTModelPtr(&DCAC_M->solverInfo, DCAC_M);
  }

  rtsiSetSimTimeStep(&DCAC_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&DCAC_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(DCAC_M, &DCAC_M->Timing.tArray[0]);
  DCAC_M->Timing.stepSize0 = 1.0E-8;

  {
    static uint32_T *clockTickPtrs[3];
    static uint32_T *clockTickHPtrs[3];
    static real_T *taskTimePtrs[3];
    static uint32_T *taskCounterPtrs;
    DCAC_TimingBrdg.nTasks = 3;
    clockTickPtrs[0] = &(DCAC_M->Timing.clockTick0);
    clockTickHPtrs[0] = &(DCAC_M->Timing.clockTickH0);
    clockTickPtrs[1] = &(DCAC_M->Timing.clockTick1);
    clockTickHPtrs[1] = &(DCAC_M->Timing.clockTickH1);
    clockTickPtrs[2] = (NULL);
    clockTickHPtrs[2] = (NULL);
    DCAC_TimingBrdg.clockTick = clockTickPtrs;
    DCAC_TimingBrdg.clockTickH = clockTickHPtrs;
    taskCounterPtrs = &(DCAC_M->Timing.TaskCounters.TID[0]);
    DCAC_TimingBrdg.taskCounter = taskCounterPtrs;
    taskTimePtrs[0] = &(DCAC_M->Timing.t[0]);
    taskTimePtrs[1] = (NULL);
    taskTimePtrs[2] = (NULL);
    DCAC_TimingBrdg.taskTime = taskTimePtrs;
  }

  /* Model Initialize function for ModelReference Block: '<Root>/ASW' */
  Asw_DCAC_initialize(rtmGetErrorStatusPointer(DCAC_M), &DCAC_TimingBrdg, 1, 2,
                      &(DCAC_DW.ASW_InstanceData.rtm));

  /* Start for S-Function (sfun_spssw_discc): '<S55>/State-Space' incorporates:
   *  Constant: '<S16>/DC'
   *  Constant: '<S20>/eee'
   *  Constant: '<S27>/eee'
   *  Constant: '<S34>/eee'
   *  Constant: '<S41>/eee'
   *  Constant: '<S57>/SwitchCurrents'
   */

  /* S-Function block: <S55>/State-Space */
  {
    DCAC_DW.StateSpace_PWORK.AS = (real_T*)calloc(3 * 3, sizeof(real_T));
    DCAC_DW.StateSpace_PWORK.BS = (real_T*)calloc(3 * 13, sizeof(real_T));
    DCAC_DW.StateSpace_PWORK.CS = (real_T*)calloc(19 * 3, sizeof(real_T));
    DCAC_DW.StateSpace_PWORK.DS = (real_T*)calloc(19 * 13, sizeof(real_T));
    DCAC_DW.StateSpace_PWORK.DX_COL = (real_T*)calloc(19, sizeof(real_T));
    DCAC_DW.StateSpace_PWORK.TMP2 = (real_T*)calloc(13, sizeof(real_T));
    DCAC_DW.StateSpace_PWORK.BD_COL = (real_T*)calloc(3, sizeof(real_T));
    DCAC_DW.StateSpace_PWORK.TMP1 = (real_T*)calloc(3, sizeof(real_T));
    DCAC_DW.StateSpace_PWORK.XTMP = (real_T*)calloc(3, sizeof(real_T));
    DCAC_DW.StateSpace_PWORK.SWITCH_STATUS = (int_T*)calloc(8, sizeof(int_T));
    DCAC_DW.StateSpace_PWORK.SW_CHG = (int_T*)calloc(8, sizeof(int_T));
    DCAC_DW.StateSpace_PWORK.G_STATE = (int_T*)calloc(8, sizeof(int_T));
    DCAC_DW.StateSpace_PWORK.Y_SWITCH = (real_T*)calloc(8, sizeof(real_T));
    DCAC_DW.StateSpace_PWORK.SWITCH_TYPES = (int_T*)calloc(8, sizeof(int_T));
    DCAC_DW.StateSpace_PWORK.IDX_OUT_SW = (int_T*)calloc(8, sizeof(int_T));
    DCAC_DW.StateSpace_PWORK.SWITCH_STATUS_INIT = (int_T*)calloc(8, sizeof(int_T));
    DCAC_DW.StateSpace_PWORK.USWLAST = (real_T*)calloc(8, sizeof(real_T));
  }

  /* InitializeConditions for S-Function (sfun_spssw_discc): '<S55>/State-Space' incorporates:
   *  Constant: '<S16>/DC'
   *  Constant: '<S20>/eee'
   *  Constant: '<S27>/eee'
   *  Constant: '<S34>/eee'
   *  Constant: '<S41>/eee'
   *  Constant: '<S57>/SwitchCurrents'
   */
  {
    int32_T i, j;
    real_T *As = (real_T*)DCAC_DW.StateSpace_PWORK.AS;
    real_T *Bs = (real_T*)DCAC_DW.StateSpace_PWORK.BS;
    real_T *Cs = (real_T*)DCAC_DW.StateSpace_PWORK.CS;
    real_T *Ds = (real_T*)DCAC_DW.StateSpace_PWORK.DS;
    real_T *X0 = (real_T*)&DCAC_DW.StateSpace_DSTATE[0];
    for (i = 0; i < 3; i++) {
      X0[i] = (rtCP_StateSpace_X0_param[i]);
    }

    /* Copy and transpose A and B */
    for (i=0; i<3; i++) {
      for (j=0; j<3; j++)
        As[i*3 + j] = (rtCP_StateSpace_AS_param[i + j*3]);
      for (j=0; j<13; j++)
        Bs[i*13 + j] = (rtCP_StateSpace_BS_param[i + j*3]);
    }

    /* Copy and transpose C */
    for (i=0; i<19; i++) {
      for (j=0; j<3; j++)
        Cs[i*3 + j] = (rtCP_StateSpace_CS_param[i + j*19]);
    }

    /* Copy and transpose D */
    for (i=0; i<19; i++) {
      for (j=0; j<13; j++)
        Ds[i*13 + j] = (rtCP_StateSpace_DS_param[i + j*19]);
    }

    {
      /* Switches work vectors */
      int_T *switch_status = (int_T*) DCAC_DW.StateSpace_PWORK.SWITCH_STATUS;
      int_T *gState = (int_T*)DCAC_DW.StateSpace_PWORK.G_STATE;
      real_T *yswitch = (real_T*)DCAC_DW.StateSpace_PWORK.Y_SWITCH;
      int_T *switchTypes = (int_T*)DCAC_DW.StateSpace_PWORK.SWITCH_TYPES;
      int_T *idxOutSw = (int_T*)DCAC_DW.StateSpace_PWORK.IDX_OUT_SW;
      int_T *switch_status_init = (int_T*)
        DCAC_DW.StateSpace_PWORK.SWITCH_STATUS_INIT;

      /* Initialize work vectors */
      switch_status[0] = 0;
      switch_status_init[0] = 0;
      gState[0] = (int_T) 0.0;
      yswitch[0] = 1/0.043;
      switchTypes[0] = (int_T)1.0;
      idxOutSw[0] = ((int_T)0.0) - 1;
      switch_status[1] = 0;
      switch_status_init[1] = 0;
      gState[1] = (int_T) 0.0;
      yswitch[1] = 1/0.043;
      switchTypes[1] = (int_T)1.0;
      idxOutSw[1] = ((int_T)0.0) - 1;
      switch_status[2] = 0;
      switch_status_init[2] = 0;
      gState[2] = (int_T) 0.0;
      yswitch[2] = 1/0.043;
      switchTypes[2] = (int_T)1.0;
      idxOutSw[2] = ((int_T)0.0) - 1;
      switch_status[3] = 0;
      switch_status_init[3] = 0;
      gState[3] = (int_T) 0.0;
      yswitch[3] = 1/0.043;
      switchTypes[3] = (int_T)1.0;
      idxOutSw[3] = ((int_T)0.0) - 1;
      switch_status[4] = 0;
      switch_status_init[4] = 0;
      gState[4] = (int_T) 0.0;
      yswitch[4] = 1/0.01;
      switchTypes[4] = (int_T)3.0;
      idxOutSw[4] = ((int_T)0.0) - 1;
      switch_status[5] = 0;
      switch_status_init[5] = 0;
      gState[5] = (int_T) 0.0;
      yswitch[5] = 1/0.01;
      switchTypes[5] = (int_T)3.0;
      idxOutSw[5] = ((int_T)0.0) - 1;
      switch_status[6] = 0;
      switch_status_init[6] = 0;
      gState[6] = (int_T) 0.0;
      yswitch[6] = 1/0.01;
      switchTypes[6] = (int_T)3.0;
      idxOutSw[6] = ((int_T)0.0) - 1;
      switch_status[7] = 0;
      switch_status_init[7] = 0;
      gState[7] = (int_T) 0.0;
      yswitch[7] = 1/0.01;
      switchTypes[7] = (int_T)3.0;
      idxOutSw[7] = ((int_T)0.0) - 1;
    }
  }

  /* SystemInitialize for ModelReference: '<Root>/ASW' */
  Asw_DCAC_Init(&(DCAC_DW.ASW_InstanceData.rtdw));
}

/* Model terminate function */
void DCAC_terminate(void)
{
  /* Terminate for S-Function (sfun_spssw_discc): '<S55>/State-Space' incorporates:
   *  Constant: '<S16>/DC'
   *  Constant: '<S20>/eee'
   *  Constant: '<S27>/eee'
   *  Constant: '<S34>/eee'
   *  Constant: '<S41>/eee'
   *  Constant: '<S57>/SwitchCurrents'
   */

  /* S-Function block: <S55>/State-Space */
  {
    /* Free memory */
    free(DCAC_DW.StateSpace_PWORK.AS);
    free(DCAC_DW.StateSpace_PWORK.BS);
    free(DCAC_DW.StateSpace_PWORK.CS);
    free(DCAC_DW.StateSpace_PWORK.DS);
    free(DCAC_DW.StateSpace_PWORK.DX_COL);
    free(DCAC_DW.StateSpace_PWORK.TMP2);
    free(DCAC_DW.StateSpace_PWORK.BD_COL);
    free(DCAC_DW.StateSpace_PWORK.TMP1);
    free(DCAC_DW.StateSpace_PWORK.XTMP);

    /*
     * Circuit has switches*/
    free(DCAC_DW.StateSpace_PWORK.G_STATE);
    free(DCAC_DW.StateSpace_PWORK.SWITCH_STATUS);
    free(DCAC_DW.StateSpace_PWORK.SW_CHG);
    free(DCAC_DW.StateSpace_PWORK.SWITCH_STATUS_INIT);
  }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
