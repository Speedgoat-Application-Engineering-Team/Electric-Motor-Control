#ifndef RTW_HEADER_PMSM_Plant_Model_cal_h_
#define RTW_HEADER_PMSM_Plant_Model_cal_h_
#include "rtwtypes.h"
#include "PMSM_Plant_Model_types.h"
#ifndef PMSM_Plant_Model_MDLREF_HIDE_CHILD_

/* Storage class 'PageSwitching', for model 'PMSM_Plant_Model' */
typedef struct {
  real_T Zero_Value;                   /* Expression: 0
                                        * Referenced by: '<S2>/Zero'
                                        */
  real_T Encoder_Index_Position_Value;
                            /* Expression: mod(encoderRotorPositionAtIndex,2*pi)
                             * Referenced by: '<S5>/Encoder_Index_Position'
                             */
  real_T Pi_Div_Two1_Value;            /* Expression: pi
                                        * Referenced by: '<S5>/Pi_Div_Two1'
                                        */
  real_T Neg_Pi_Div_Two_Value;         /* Expression: -pi
                                        * Referenced by: '<S5>/Neg_Pi_Div_Two'
                                        */
  real_T Gain_Gain;                    /* Expression: -1
                                        * Referenced by: '<S27>/Gain'
                                        */
  real_T Bias1_Bias;                   /* Expression: 1
                                        * Referenced by: '<S27>/Bias1'
                                        */
  real_T Gain1_Gain;                   /* Expression: K2
                                        * Referenced by: '<S22>/Gain1'
                                        */
  real_T Two_Pi_Value;                 /* Expression: 2*pi
                                        * Referenced by: '<S6>/Two_Pi'
                                        */
  real_T Count_Per_Radian_Gain;  /* Expression: encoderCountPerRevolution/(2*pi)
                                  * Referenced by: '<S3>/Count_Per_Radian'
                                  */
  uint16_T ModIndex_Gain;              /* Computed Parameter: ModIndex_Gain
                                        * Referenced by: '<S27>/Mod. Index'
                                        */
  uint16_T Constant2_Value;            /* Computed Parameter: Constant2_Value
                                        * Referenced by: '<S1>/Constant2'
                                        */
  uint16_T Constant_Value;             /* Expression: cntsPerRevolution
                                        * Referenced by: '<S1>/Constant'
                                        */
  boolean_T One_Value;                 /* Computed Parameter: One_Value
                                        * Referenced by: '<S7>/One'
                                        */
  boolean_T Memory_InitialCondition;
                                  /* Computed Parameter: Memory_InitialCondition
                                   * Referenced by: '<S7>/Memory'
                                   */
} PMSM_Plant_Model_cal_type;

#endif                                 /*PMSM_Plant_Model_MDLREF_HIDE_CHILD_*/

/* Storage class 'PageSwitching' */

/* Storage class 'PageSwitching' */
#ifndef PMSM_Plant_Model_MDLREF_HIDE_CHILD_

extern PMSM_Plant_Model_cal_type PMSM_Plant_Model_cal_impl;
extern PMSM_Plant_Model_cal_type *PMSM_Plant_Model_cal;

#endif                                 /*PMSM_Plant_Model_MDLREF_HIDE_CHILD_*/
#endif                                 /* RTW_HEADER_PMSM_Plant_Model_cal_h_ */
