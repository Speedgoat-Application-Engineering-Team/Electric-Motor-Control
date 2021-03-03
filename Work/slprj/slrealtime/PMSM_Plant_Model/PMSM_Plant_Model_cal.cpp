#ifndef PMSM_Plant_Model_MDLREF_HIDE_CHILD_
#include "PMSM_Plant_Model.h"
#endif                                 /*PMSM_Plant_Model_MDLREF_HIDE_CHILD_*/

/* Storage class 'PageSwitching' */

/* Storage class 'PageSwitching' */
#ifndef PMSM_Plant_Model_MDLREF_HIDE_CHILD_

PMSM_Plant_Model_cal_type PMSM_Plant_Model_cal_impl = {
  /* Expression: 0
   * Referenced by: '<S2>/Zero'
   */
  0.0,

  /* Expression: mod(encoderRotorPositionAtIndex,2*pi)
   * Referenced by: '<S5>/Encoder_Index_Position'
   */
  0.5,

  /* Expression: pi
   * Referenced by: '<S5>/Pi_Div_Two1'
   */
  3.1415926535897931,

  /* Expression: -pi
   * Referenced by: '<S5>/Neg_Pi_Div_Two'
   */
  -3.1415926535897931,

  /* Expression: -1
   * Referenced by: '<S27>/Gain'
   */
  -1.0,

  /* Expression: 1
   * Referenced by: '<S27>/Bias1'
   */
  1.0,

  /* Expression: K2
   * Referenced by: '<S22>/Gain1'
   */
  0.66666666666666663,

  /* Expression: 2*pi
   * Referenced by: '<S6>/Two_Pi'
   */
  6.2831853071795862,

  /* Expression: encoderCountPerRevolution/(2*pi)
   * Referenced by: '<S3>/Count_Per_Radian'
   */
  651.89864690440334,

  /* Computed Parameter: ModIndex_Gain
   * Referenced by: '<S27>/Mod. Index'
   */
  44739U,

  /* Computed Parameter: Constant2_Value
   * Referenced by: '<S1>/Constant2'
   */
  1U,

  /* Expression: cntsPerRevolution
   * Referenced by: '<S1>/Constant'
   */
  4096U,

  /* Computed Parameter: One_Value
   * Referenced by: '<S7>/One'
   */
  1,

  /* Computed Parameter: Memory_InitialCondition
   * Referenced by: '<S7>/Memory'
   */
  0
};

PMSM_Plant_Model_cal_type *PMSM_Plant_Model_cal = &PMSM_Plant_Model_cal_impl;

#endif                                 /*PMSM_Plant_Model_MDLREF_HIDE_CHILD_*/
