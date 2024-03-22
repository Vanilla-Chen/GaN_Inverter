/*
 * File: Asw_DCAC.c
 *
 * Code generated for Simulink model 'Asw_DCAC'.
 *
 * Model version                  : 1.59
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Fri Mar 22 19:46:00 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Asw_DCAC.h"
#include "rtwtypes.h"
#include <string.h>

/* Block states (default storage) */
DW_Asw_DCAC_T Asw_DCAC_DW;

/* External inputs (root inport signals with default storage) */
ExtU_Asw_DCAC_T Asw_DCAC_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Asw_DCAC_T Asw_DCAC_Y;

/* Real-time model */
static RT_MODEL_Asw_DCAC_T Asw_DCAC_M_;
RT_MODEL_Asw_DCAC_T *const Asw_DCAC_M = &Asw_DCAC_M_;
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
  (Asw_DCAC_M->Timing.TaskCounters.TID[1])++;
  if ((Asw_DCAC_M->Timing.TaskCounters.TID[1]) > 99) {/* Sample time: [1.0E-6s, 0.0s] */
    Asw_DCAC_M->Timing.TaskCounters.TID[1] = 0;
  }
}

/* Model step function */
void Asw_DCAC_step(void)
{
  real_T Integrator;
  real_T Integrator_n;
  real_T rtb_Saturation;
  real_T rtb_Sum3;
  real_T rtb_Sum7;
  if (Asw_DCAC_M->Timing.TaskCounters.TID[1] == 0) {
    /* MATLAB Function: '<Root>/MATLAB Function' */
    if (Asw_DCAC_DW.add < 1000.0) {
      Asw_DCAC_DW.add++;
    } else {
      Asw_DCAC_DW.add = 1.0;
    }

    /* Sum: '<Root>/Sum3' incorporates:
     *  Constant: '<Root>/Constant'
     *  Inport: '<Root>/U_Load'
     *  MATLAB Function: '<Root>/MATLAB Function'
     *  Product: '<Root>/Product'
     */
    rtb_Sum3 = (real32_T)Asw_DCAC_DW.SINE[(int32_T)Asw_DCAC_DW.add - 1] * 50.0 -
      Asw_DCAC_U.U_Load;

    /* DiscreteIntegrator: '<S36>/Integrator' */
    Integrator = 5.0E-7 * rtb_Sum3 + Asw_DCAC_DW.Integrator_DSTATE;

    /* Sum: '<Root>/Sum7' incorporates:
     *  Gain: '<S41>/Proportional Gain'
     *  Inport: '<Root>/I_L'
     *  Inport: '<Root>/I_Load'
     *  Sum: '<Root>/Sum6'
     *  Sum: '<S45>/Sum'
     */
    rtb_Sum7 = ((3.5 * rtb_Sum3 + Integrator) + Asw_DCAC_U.I_Load) -
      Asw_DCAC_U.I_L;

    /* DiscreteIntegrator: '<S84>/Integrator' */
    Integrator_n = 5.0E-7 * rtb_Sum7 + Asw_DCAC_DW.Integrator_DSTATE_d;

    /* Gain: '<Root>/Gain2' incorporates:
     *  Inport: '<Root>/U_Load'
     *  Sum: '<Root>/Sum8'
     *  Sum: '<S93>/Sum'
     */
    rtb_Saturation = ((rtb_Sum7 + Integrator_n) + Asw_DCAC_U.U_Load) * 0.01;

    /* Saturate: '<Root>/Saturation' */
    if (rtb_Saturation > 1.0) {
      rtb_Saturation = 1.0;
    } else if (rtb_Saturation < -1.0) {
      rtb_Saturation = -1.0;
    }

    /* End of Saturate: '<Root>/Saturation' */

    /* Outport: '<Root>/Top_High_Frequency' incorporates:
     *  MATLAB Function: '<Root>/单极性快慢调制1'
     */
    Asw_DCAC_Y.Top_High_Frequency = 0.0F;

    /* Outport: '<Root>/Bottom_High_Frequency' incorporates:
     *  MATLAB Function: '<Root>/单极性快慢调制1'
     */
    Asw_DCAC_Y.Bottom_High_Frequency = 0.0F;

    /* MATLAB Function: '<Root>/单极性快慢调制1' incorporates:
     *  DataTypeConversion: '<Root>/Data Type Conversion1'
     */
    if ((real32_T)rtb_Saturation >= 0.0F) {
      /* Outport: '<Root>/Top_High_Frequency' */
      Asw_DCAC_Y.Top_High_Frequency = (real32_T)rtb_Saturation;

      /* Outport: '<Root>/Low_Frequency' */
      Asw_DCAC_Y.Low_Frequency = 0.0F;
    } else {
      /* Outport: '<Root>/Bottom_High_Frequency' */
      Asw_DCAC_Y.Bottom_High_Frequency = -(real32_T)rtb_Saturation;

      /* Outport: '<Root>/Low_Frequency' */
      Asw_DCAC_Y.Low_Frequency = 1.0F;
    }

    /* Update for DiscreteIntegrator: '<S36>/Integrator' */
    Asw_DCAC_DW.Integrator_DSTATE = 5.0E-7 * rtb_Sum3 + Integrator;

    /* Update for DiscreteIntegrator: '<S84>/Integrator' */
    Asw_DCAC_DW.Integrator_DSTATE_d = 5.0E-7 * rtb_Sum7 + Integrator_n;
  }

  rate_scheduler();
}

/* Model initialize function */
void Asw_DCAC_initialize(void)
{
  {
    static const real_T tmp[1000] = { 0.0, 0.006283144, 0.01256604, 0.01884844,
      0.025130095, 0.031410757, 0.037690181, 0.043968119, 0.050244316,
      0.056518536, 0.06279052, 0.069060028, 0.075326808, 0.081590615,
      0.087851197, 0.094108313, 0.10036171, 0.10661115, 0.11285639, 0.11909716,
      0.12533323, 0.13156436, 0.13779029, 0.14401078, 0.15022559, 0.15643446,
      0.16263716, 0.16883345, 0.17502306, 0.18120576, 0.18738131, 0.19354947,
      0.19970998, 0.20586261, 0.21200711, 0.21814324, 0.22427076, 0.23038943,
      0.236499, 0.24259923, 0.24868989, 0.25477073, 0.26084152, 0.266902,
      0.27295193, 0.2789911, 0.28501925, 0.29103616, 0.29704159, 0.30303526,
      0.309017, 0.31498653, 0.32094362, 0.32688802, 0.33281955, 0.33873793,
      0.34464294, 0.35053432, 0.35641187, 0.36227536, 0.36812454, 0.37395921,
      0.3797791, 0.385584, 0.39137366, 0.39714789, 0.40290645, 0.40864909,
      0.41437557, 0.42008573, 0.42577928, 0.43145606, 0.43711576, 0.44275823,
      0.44838321, 0.45399049, 0.45957986, 0.46515107, 0.47070393, 0.47623819,
      0.48175368, 0.48725012, 0.49272734, 0.4981851, 0.50362319, 0.50904143,
      0.51443952, 0.51981735, 0.52517462, 0.5305112, 0.5358268, 0.54112124,
      0.54639435, 0.55164587, 0.55687565, 0.56208336, 0.56726897, 0.5724321,
      0.5775727, 0.58269048, 0.58778524, 0.59285682, 0.59790498, 0.60292953,
      0.6079303, 0.61290705, 0.6178596, 0.62278777, 0.62769139, 0.63257015,
      0.63742399, 0.64225262, 0.64705598, 0.65183371, 0.65658575, 0.66131186,
      0.66601187, 0.67068559, 0.67533278, 0.6799534, 0.68454713, 0.6891138,
      0.69365329, 0.69816542, 0.70264995, 0.70710677, 0.71153569, 0.71593648,
      0.72030902, 0.72465312, 0.72896862, 0.73325533, 0.73751312, 0.74174178,
      0.74594116, 0.75011104, 0.75425136, 0.75836194, 0.76244253, 0.76649302,
      0.77051324, 0.77450305, 0.77846229, 0.78239083, 0.78628844, 0.79015499,
      0.79399037, 0.79779446, 0.80156696, 0.80530787, 0.809017, 0.81269419,
      0.81633925, 0.81995213, 0.82353258, 0.82708055, 0.83059591, 0.83407843,
      0.83752805, 0.84094459, 0.84432793, 0.84767795, 0.85099447, 0.85427743,
      0.85752666, 0.86074203, 0.86392343, 0.86707067, 0.87018377, 0.87326247,
      0.87630665, 0.87931633, 0.8822912, 0.88523132, 0.88813645, 0.89100653,
      0.89384145, 0.89664102, 0.89940524, 0.90213394, 0.90482706, 0.90748441,
      0.91010594, 0.91269159, 0.91524118, 0.91775465, 0.92023182, 0.92267275,
      0.9250772, 0.92744517, 0.92977649, 0.93207109, 0.93432891, 0.9365499,
      0.93873388, 0.94088078, 0.94299054, 0.94506305, 0.94709831, 0.94909614,
      0.95105654, 0.95297933, 0.95486456, 0.95671207, 0.95852178, 0.96029371,
      0.96202767, 0.96372366, 0.96538162, 0.9670015, 0.96858317, 0.97012657,
      0.97163171, 0.97309852, 0.97452688, 0.97591674, 0.9772681, 0.97858089,
      0.97985506, 0.98109055, 0.98228723, 0.98344523, 0.98456436, 0.98564458,
      0.98668593, 0.98768836, 0.98865175, 0.9895761, 0.99046141, 0.99130762,
      0.99211472, 0.99288261, 0.99361134, 0.99430078, 0.99495101, 0.99556196,
      0.99613363, 0.99666595, 0.99715889, 0.99761254, 0.99802673, 0.99840152,
      0.99873698, 0.99903291, 0.99928945, 0.99950653, 0.99968421, 0.99982238,
      0.99992102, 0.99998027, 1.0, 0.99998027, 0.99992102, 0.99982238,
      0.99968421, 0.99950653, 0.99928945, 0.99903291, 0.99873698, 0.99840152,
      0.99802673, 0.99761254, 0.99715889, 0.99666595, 0.99613363, 0.99556196,
      0.99495101, 0.99430078, 0.99361134, 0.99288261, 0.99211472, 0.99130762,
      0.99046141, 0.9895761, 0.98865175, 0.98768836, 0.98668593, 0.98564458,
      0.98456436, 0.98344523, 0.98228723, 0.98109055, 0.97985506, 0.97858089,
      0.9772681, 0.97591674, 0.97452688, 0.97309852, 0.97163171, 0.97012657,
      0.96858317, 0.9670015, 0.96538162, 0.96372366, 0.96202767, 0.96029371,
      0.95852178, 0.95671207, 0.95486456, 0.95297933, 0.95105654, 0.94909614,
      0.94709831, 0.94506305, 0.94299054, 0.94088078, 0.93873388, 0.9365499,
      0.93432891, 0.93207109, 0.92977649, 0.92744517, 0.9250772, 0.92267275,
      0.92023182, 0.91775465, 0.91524118, 0.91269159, 0.91010594, 0.90748441,
      0.90482706, 0.90213394, 0.89940524, 0.89664102, 0.89384145, 0.89100653,
      0.88813645, 0.88523132, 0.8822912, 0.87931633, 0.87630665, 0.87326247,
      0.87018377, 0.86707067, 0.86392343, 0.86074203, 0.85752666, 0.85427743,
      0.85099447, 0.84767795, 0.84432793, 0.84094459, 0.83752805, 0.83407843,
      0.83059591, 0.82708055, 0.82353258, 0.81995213, 0.81633925, 0.81269419,
      0.809017, 0.80530787, 0.80156696, 0.79779446, 0.79399037, 0.79015499,
      0.78628844, 0.78239083, 0.77846229, 0.77450305, 0.77051324, 0.76649302,
      0.76244253, 0.75836194, 0.75425136, 0.75011104, 0.74594116, 0.74174178,
      0.73751312, 0.73325533, 0.72896862, 0.72465312, 0.72030902, 0.71593648,
      0.71153569, 0.70710677, 0.70264995, 0.69816542, 0.69365329, 0.6891138,
      0.68454713, 0.6799534, 0.67533278, 0.67068559, 0.66601187, 0.66131186,
      0.65658575, 0.65183371, 0.64705598, 0.64225262, 0.63742399, 0.63257015,
      0.62769139, 0.62278777, 0.6178596, 0.61290705, 0.6079303, 0.60292953,
      0.59790498, 0.59285682, 0.58778524, 0.58269048, 0.5775727, 0.5724321,
      0.56726897, 0.56208336, 0.55687565, 0.55164587, 0.54639435, 0.54112124,
      0.5358268, 0.5305112, 0.52517462, 0.51981735, 0.51443952, 0.50904143,
      0.50362319, 0.4981851, 0.49272734, 0.48725012, 0.48175368, 0.47623819,
      0.47070393, 0.46515107, 0.45957986, 0.45399049, 0.44838321, 0.44275823,
      0.43711576, 0.43145606, 0.42577928, 0.42008573, 0.41437557, 0.40864909,
      0.40290645, 0.39714789, 0.39137366, 0.385584, 0.3797791, 0.37395921,
      0.36812454, 0.36227536, 0.35641187, 0.35053432, 0.34464294, 0.33873793,
      0.33281955, 0.32688802, 0.32094362, 0.31498653, 0.309017, 0.30303526,
      0.29704159, 0.29103616, 0.28501925, 0.2789911, 0.27295193, 0.266902,
      0.26084152, 0.25477073, 0.24868989, 0.24259923, 0.236499, 0.23038943,
      0.22427076, 0.21814324, 0.21200711, 0.20586261, 0.19970998, 0.19354947,
      0.18738131, 0.18120576, 0.17502306, 0.16883345, 0.16263716, 0.15643446,
      0.15022559, 0.14401078, 0.13779029, 0.13156436, 0.12533323, 0.11909716,
      0.11285639, 0.10661115, 0.10036171, 0.094108313, 0.087851197, 0.081590615,
      0.075326808, 0.069060028, 0.06279052, 0.056518536, 0.050244316,
      0.043968119, 0.037690181, 0.031410757, 0.025130095, 0.01884844, 0.01256604,
      0.006283144, -3.2162452E-16, -0.006283144, -0.01256604, -0.01884844,
      -0.025130095, -0.031410757, -0.037690181, -0.043968119, -0.050244316,
      -0.056518536, -0.06279052, -0.069060028, -0.075326808, -0.081590615,
      -0.087851197, -0.094108313, -0.10036171, -0.10661115, -0.11285639,
      -0.11909716, -0.12533323, -0.13156436, -0.13779029, -0.14401078,
      -0.15022559, -0.15643446, -0.16263716, -0.16883345, -0.17502306,
      -0.18120576, -0.18738131, -0.19354947, -0.19970998, -0.20586261,
      -0.21200711, -0.21814324, -0.22427076, -0.23038943, -0.236499, -0.24259923,
      -0.24868989, -0.25477073, -0.26084152, -0.266902, -0.27295193, -0.2789911,
      -0.28501925, -0.29103616, -0.29704159, -0.30303526, -0.309017, -0.31498653,
      -0.32094362, -0.32688802, -0.33281955, -0.33873793, -0.34464294,
      -0.35053432, -0.35641187, -0.36227536, -0.36812454, -0.37395921,
      -0.3797791, -0.385584, -0.39137366, -0.39714789, -0.40290645, -0.40864909,
      -0.41437557, -0.42008573, -0.42577928, -0.43145606, -0.43711576,
      -0.44275823, -0.44838321, -0.45399049, -0.45957986, -0.46515107,
      -0.47070393, -0.47623819, -0.48175368, -0.48725012, -0.49272734,
      -0.4981851, -0.50362319, -0.50904143, -0.51443952, -0.51981735,
      -0.52517462, -0.5305112, -0.5358268, -0.54112124, -0.54639435, -0.55164587,
      -0.55687565, -0.56208336, -0.56726897, -0.5724321, -0.5775727, -0.58269048,
      -0.58778524, -0.59285682, -0.59790498, -0.60292953, -0.6079303,
      -0.61290705, -0.6178596, -0.62278777, -0.62769139, -0.63257015,
      -0.63742399, -0.64225262, -0.64705598, -0.65183371, -0.65658575,
      -0.66131186, -0.66601187, -0.67068559, -0.67533278, -0.6799534,
      -0.68454713, -0.6891138, -0.69365329, -0.69816542, -0.70264995,
      -0.70710677, -0.71153569, -0.71593648, -0.72030902, -0.72465312,
      -0.72896862, -0.73325533, -0.73751312, -0.74174178, -0.74594116,
      -0.75011104, -0.75425136, -0.75836194, -0.76244253, -0.76649302,
      -0.77051324, -0.77450305, -0.77846229, -0.78239083, -0.78628844,
      -0.79015499, -0.79399037, -0.79779446, -0.80156696, -0.80530787, -0.809017,
      -0.81269419, -0.81633925, -0.81995213, -0.82353258, -0.82708055,
      -0.83059591, -0.83407843, -0.83752805, -0.84094459, -0.84432793,
      -0.84767795, -0.85099447, -0.85427743, -0.85752666, -0.86074203,
      -0.86392343, -0.86707067, -0.87018377, -0.87326247, -0.87630665,
      -0.87931633, -0.8822912, -0.88523132, -0.88813645, -0.89100653,
      -0.89384145, -0.89664102, -0.89940524, -0.90213394, -0.90482706,
      -0.90748441, -0.91010594, -0.91269159, -0.91524118, -0.91775465,
      -0.92023182, -0.92267275, -0.9250772, -0.92744517, -0.92977649,
      -0.93207109, -0.93432891, -0.9365499, -0.93873388, -0.94088078,
      -0.94299054, -0.94506305, -0.94709831, -0.94909614, -0.95105654,
      -0.95297933, -0.95486456, -0.95671207, -0.95852178, -0.96029371,
      -0.96202767, -0.96372366, -0.96538162, -0.9670015, -0.96858317,
      -0.97012657, -0.97163171, -0.97309852, -0.97452688, -0.97591674,
      -0.9772681, -0.97858089, -0.97985506, -0.98109055, -0.98228723,
      -0.98344523, -0.98456436, -0.98564458, -0.98668593, -0.98768836,
      -0.98865175, -0.9895761, -0.99046141, -0.99130762, -0.99211472,
      -0.99288261, -0.99361134, -0.99430078, -0.99495101, -0.99556196,
      -0.99613363, -0.99666595, -0.99715889, -0.99761254, -0.99802673,
      -0.99840152, -0.99873698, -0.99903291, -0.99928945, -0.99950653,
      -0.99968421, -0.99982238, -0.99992102, -0.99998027, -1.0, -0.99998027,
      -0.99992102, -0.99982238, -0.99968421, -0.99950653, -0.99928945,
      -0.99903291, -0.99873698, -0.99840152, -0.99802673, -0.99761254,
      -0.99715889, -0.99666595, -0.99613363, -0.99556196, -0.99495101,
      -0.99430078, -0.99361134, -0.99288261, -0.99211472, -0.99130762,
      -0.99046141, -0.9895761, -0.98865175, -0.98768836, -0.98668593,
      -0.98564458, -0.98456436, -0.98344523, -0.98228723, -0.98109055,
      -0.97985506, -0.97858089, -0.9772681, -0.97591674, -0.97452688,
      -0.97309852, -0.97163171, -0.97012657, -0.96858317, -0.9670015,
      -0.96538162, -0.96372366, -0.96202767, -0.96029371, -0.95852178,
      -0.95671207, -0.95486456, -0.95297933, -0.95105654, -0.94909614,
      -0.94709831, -0.94506305, -0.94299054, -0.94088078, -0.93873388,
      -0.9365499, -0.93432891, -0.93207109, -0.92977649, -0.92744517, -0.9250772,
      -0.92267275, -0.92023182, -0.91775465, -0.91524118, -0.91269159,
      -0.91010594, -0.90748441, -0.90482706, -0.90213394, -0.89940524,
      -0.89664102, -0.89384145, -0.89100653, -0.88813645, -0.88523132,
      -0.8822912, -0.87931633, -0.87630665, -0.87326247, -0.87018377,
      -0.86707067, -0.86392343, -0.86074203, -0.85752666, -0.85427743,
      -0.85099447, -0.84767795, -0.84432793, -0.84094459, -0.83752805,
      -0.83407843, -0.83059591, -0.82708055, -0.82353258, -0.81995213,
      -0.81633925, -0.81269419, -0.809017, -0.80530787, -0.80156696, -0.79779446,
      -0.79399037, -0.79015499, -0.78628844, -0.78239083, -0.77846229,
      -0.77450305, -0.77051324, -0.76649302, -0.76244253, -0.75836194,
      -0.75425136, -0.75011104, -0.74594116, -0.74174178, -0.73751312,
      -0.73325533, -0.72896862, -0.72465312, -0.72030902, -0.71593648,
      -0.71153569, -0.70710677, -0.70264995, -0.69816542, -0.69365329,
      -0.6891138, -0.68454713, -0.6799534, -0.67533278, -0.67068559, -0.66601187,
      -0.66131186, -0.65658575, -0.65183371, -0.64705598, -0.64225262,
      -0.63742399, -0.63257015, -0.62769139, -0.62278777, -0.6178596,
      -0.61290705, -0.6079303, -0.60292953, -0.59790498, -0.59285682,
      -0.58778524, -0.58269048, -0.5775727, -0.5724321, -0.56726897, -0.56208336,
      -0.55687565, -0.55164587, -0.54639435, -0.54112124, -0.5358268, -0.5305112,
      -0.52517462, -0.51981735, -0.51443952, -0.50904143, -0.50362319,
      -0.4981851, -0.49272734, -0.48725012, -0.48175368, -0.47623819,
      -0.47070393, -0.46515107, -0.45957986, -0.45399049, -0.44838321,
      -0.44275823, -0.43711576, -0.43145606, -0.42577928, -0.42008573,
      -0.41437557, -0.40864909, -0.40290645, -0.39714789, -0.39137366, -0.385584,
      -0.3797791, -0.37395921, -0.36812454, -0.36227536, -0.35641187,
      -0.35053432, -0.34464294, -0.33873793, -0.33281955, -0.32688802,
      -0.32094362, -0.31498653, -0.309017, -0.30303526, -0.29704159, -0.29103616,
      -0.28501925, -0.2789911, -0.27295193, -0.266902, -0.26084152, -0.25477073,
      -0.24868989, -0.24259923, -0.236499, -0.23038943, -0.22427076, -0.21814324,
      -0.21200711, -0.20586261, -0.19970998, -0.19354947, -0.18738131,
      -0.18120576, -0.17502306, -0.16883345, -0.16263716, -0.15643446,
      -0.15022559, -0.14401078, -0.13779029, -0.13156436, -0.12533323,
      -0.11909716, -0.11285639, -0.10661115, -0.10036171, -0.094108313,
      -0.087851197, -0.081590615, -0.075326808, -0.069060028, -0.06279052,
      -0.056518536, -0.050244316, -0.043968119, -0.037690181, -0.031410757,
      -0.025130095, -0.01884844, -0.01256604, -0.006283144 };

    /* SystemInitialize for MATLAB Function: '<Root>/MATLAB Function' */
    memcpy(&Asw_DCAC_DW.SINE[0], &tmp[0], 1000U * sizeof(real_T));
    Asw_DCAC_DW.add = 1.0;
  }
}

/* Model terminate function */
void Asw_DCAC_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
