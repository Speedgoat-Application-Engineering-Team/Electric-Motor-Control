#ifndef RTW_HEADER_FieldOrientedController_cal_h_
#define RTW_HEADER_FieldOrientedController_cal_h_
#include "rtwtypes.h"
#include "FieldOrientedController_types.h"
#ifndef FieldOrientedController_MDLREF_HIDE_CHILD_

/* Storage class 'PageSwitching', for model 'FieldOrientedController' */
typedef struct {
  real32_T Gain_Gain[3];               /* Computed Parameter: Gain_Gain
                                        * Referenced by: '<S12>/Gain'
                                        */
  real32_T Constant_Value_j[3];        /* Computed Parameter: Constant_Value_j
                                        * Referenced by: '<S10>/Constant'
                                        */
  real32_T FilterTs15mS_DenCoef[2];  /* Computed Parameter: FilterTs15mS_DenCoef
                                      * Referenced by: '<S3>/FilterTs15mS'
                                      */
  real32_T Velocity_PID_Controller_InitialConditionForIntegrator;
        /* Mask Parameter: Velocity_PID_Controller_InitialConditionForIntegrator
         * Referenced by: '<S74>/Integrator'
         */
  real32_T Velocity_PID_Controller_LowerSaturationLimit;
                 /* Mask Parameter: Velocity_PID_Controller_LowerSaturationLimit
                  * Referenced by:
                  *   '<S81>/Saturation'
                  *   '<S67>/DeadZone'
                  */
  real32_T Detect_Change_vinit;        /* Mask Parameter: Detect_Change_vinit
                                        * Referenced by: '<S97>/Delay Input1'
                                        */
  real32_T Reset_Count_Value;          /* Computed Parameter: Reset_Count_Value
                                        * Referenced by: '<S13>/Reset_Count'
                                        */
  real32_T Stop_Count_Value;           /* Computed Parameter: Stop_Count_Value
                                        * Referenced by: '<S13>/Stop_Count'
                                        */
  real32_T Continue_Count_Value;     /* Computed Parameter: Continue_Count_Value
                                      * Referenced by: '<S13>/Continue_Count'
                                      */
  real32_T Zero_During_Calibration_Value;
                            /* Computed Parameter: Zero_During_Calibration_Value
                             * Referenced by: '<S12>/Zero_During_Calibration'
                             */
  real32_T Two_Pi_Value;               /* Computed Parameter: Two_Pi_Value
                                        * Referenced by: '<S14>/Two_Pi'
                                        */
  real32_T Two_Pi_Value_o;             /* Computed Parameter: Two_Pi_Value_o
                                        * Referenced by: '<S15>/Two_Pi'
                                        */
  real32_T Two_Pi2_Value;              /* Computed Parameter: Two_Pi2_Value
                                        * Referenced by: '<S15>/Two_Pi2'
                                        */
  real32_T Neg_Pi_Value;               /* Computed Parameter: Neg_Pi_Value
                                        * Referenced by: '<S15>/Neg_Pi'
                                        */
  real32_T Delay_InitialCondition; /* Computed Parameter: Delay_InitialCondition
                                    * Referenced by: '<S12>/Delay'
                                    */
  real32_T PI_Value;                   /* Computed Parameter: PI_Value
                                        * Referenced by: '<S15>/PI'
                                        */
  real32_T Delay_InitialCondition_i;
                                 /* Computed Parameter: Delay_InitialCondition_i
                                  * Referenced by: '<S13>/Delay'
                                  */
  real32_T Sample_Frequency_Gain;   /* Computed Parameter: Sample_Frequency_Gain
                                     * Referenced by: '<S12>/Sample_Frequency'
                                     */
  real32_T Delay1_InitialCondition;
                                  /* Computed Parameter: Delay1_InitialCondition
                                   * Referenced by: '<S12>/Delay1'
                                   */
  real32_T Zero_Value;                 /* Computed Parameter: Zero_Value
                                        * Referenced by: '<S23>/Zero'
                                        */
  real32_T Sample_Time_Gain;           /* Expression: sampleTime.CurrentControl
                                        * Referenced by: '<S23>/Sample_Time'
                                        */
  real32_T Zero_Value_m;               /* Computed Parameter: Zero_Value_m
                                        * Referenced by: '<S24>/Zero'
                                        */
  real32_T Sample_Time_Gain_a;         /* Expression: sampleTime.CurrentControl
                                        * Referenced by: '<S24>/Sample_Time'
                                        */
  real32_T Alpha_Gain_Gain;            /* Computed Parameter: Alpha_Gain_Gain
                                        * Referenced by: '<S17>/Alpha_Gain'
                                        */
  real32_T Beta_Gain_Gain;             /* Computed Parameter: Beta_Gain_Gain
                                        * Referenced by: '<S17>/Beta_Gain'
                                        */
  real32_T D_Command_Value;            /* Computed Parameter: D_Command_Value
                                        * Referenced by: '<S18>/D_Command'
                                        */
  real32_T Unit_Delay_InitialCondition;
                              /* Computed Parameter: Unit_Delay_InitialCondition
                               * Referenced by: '<S23>/Unit_Delay'
                               */
  real32_T Unit_Delay_InitialCondition_g;
                            /* Computed Parameter: Unit_Delay_InitialCondition_g
                             * Referenced by: '<S24>/Unit_Delay'
                             */
  real32_T Gain_Gain_m;                /* Computed Parameter: Gain_Gain_m
                                        * Referenced by: '<S19>/Gain'
                                        */
  real32_T Gain1_Gain;                 /* Computed Parameter: Gain1_Gain
                                        * Referenced by: '<S19>/Gain1'
                                        */
  real32_T Gain_Gain_m1;               /* Computed Parameter: Gain_Gain_m1
                                        * Referenced by: '<S22>/Gain'
                                        */
  real32_T Two_Pi_Value_k;             /* Computed Parameter: Two_Pi_Value_k
                                        * Referenced by: '<S35>/Two_Pi'
                                        */
  real32_T Two_Pi2_Value_l;            /* Computed Parameter: Two_Pi2_Value_l
                                        * Referenced by: '<S35>/Two_Pi2'
                                        */
  real32_T Zero_Value_b;               /* Computed Parameter: Zero_Value_b
                                        * Referenced by: '<S35>/Zero'
                                        */
  real32_T Zero_Value_c;               /* Computed Parameter: Zero_Value_c
                                        * Referenced by: '<S36>/Zero'
                                        */
  real32_T Constant_Value;             /* Computed Parameter: Constant_Value
                                        * Referenced by: '<S38>/Constant'
                                        */
  real32_T Direct_Voltage_Value;     /* Computed Parameter: Direct_Voltage_Value
                                      * Referenced by: '<S29>/Direct_Voltage'
                                      */
  real32_T Delay_InitialCondition_if;
                                /* Computed Parameter: Delay_InitialCondition_if
                                 * Referenced by: '<S33>/Delay'
                                 */
  real32_T Gain_Gain_k;        /* Expression: sampleTime.OpenLoopVelocityControl
                                * Referenced by: '<S30>/Gain'
                                */
  real32_T Delay_InitialCondition_d;
                                 /* Computed Parameter: Delay_InitialCondition_d
                                  * Referenced by: '<S30>/Delay'
                                  */
  real32_T Two_Pi1_Value;              /* Computed Parameter: Two_Pi1_Value
                                        * Referenced by: '<S35>/Two_Pi1'
                                        */
  real32_T Gain_Gain_d;                /* Computed Parameter: Gain_Gain_d
                                        * Referenced by: '<S31>/Gain'
                                        */
  real32_T Gain1_Gain_f;               /* Computed Parameter: Gain1_Gain_f
                                        * Referenced by: '<S31>/Gain1'
                                        */
  real32_T Delay_InitialCondition_j;
                                 /* Computed Parameter: Delay_InitialCondition_j
                                  * Referenced by: '<S37>/Delay'
                                  */
  real32_T Gain_Gain_f;        /* Expression: sampleTime.OpenLoopVelocityControl
                                * Referenced by: '<S33>/Gain'
                                */
  real32_T Constant_Value_g;           /* Computed Parameter: Constant_Value_g
                                        * Referenced by: '<S2>/Constant'
                                        */
  real32_T Q_Current_Command_Y0;     /* Computed Parameter: Q_Current_Command_Y0
                                      * Referenced by: '<S11>/Q_Current_Command'
                                      */
  real32_T Constant1_Value;            /* Computed Parameter: Constant1_Value
                                        * Referenced by: '<S65>/Constant1'
                                        */
  real32_T Integrator_gainval;         /* Computed Parameter: Integrator_gainval
                                        * Referenced by: '<S74>/Integrator'
                                        */
  real32_T ZeroGain_Gain;              /* Computed Parameter: ZeroGain_Gain
                                        * Referenced by: '<S65>/ZeroGain'
                                        */
  real32_T Two_Pi_Value_f;             /* Computed Parameter: Two_Pi_Value_f
                                        * Referenced by: '<S95>/Two_Pi'
                                        */
  real32_T Two_Pi2_Value_m;            /* Computed Parameter: Two_Pi2_Value_m
                                        * Referenced by: '<S95>/Two_Pi2'
                                        */
  real32_T Zero_Value_f;               /* Computed Parameter: Zero_Value_f
                                        * Referenced by: '<S95>/Zero'
                                        */
  real32_T Two_Pi_Value_d;             /* Computed Parameter: Two_Pi_Value_d
                                        * Referenced by: '<S98>/Two_Pi'
                                        */
  real32_T Two_Pi2_Value_p;            /* Computed Parameter: Two_Pi2_Value_p
                                        * Referenced by: '<S98>/Two_Pi2'
                                        */
  real32_T Neg_Pi_Value_j;             /* Computed Parameter: Neg_Pi_Value_j
                                        * Referenced by: '<S98>/Neg_Pi'
                                        */
  real32_T PI_Value_p;                 /* Computed Parameter: PI_Value_p
                                        * Referenced by: '<S98>/PI'
                                        */
  real32_T Two_Pi1_Value_a;            /* Computed Parameter: Two_Pi1_Value_a
                                        * Referenced by: '<S95>/Two_Pi1'
                                        */
  real32_T Two_Pi_Value_h;             /* Computed Parameter: Two_Pi_Value_h
                                        * Referenced by: '<S99>/Two_Pi'
                                        */
  real32_T Merge_InitialOutput;       /* Computed Parameter: Merge_InitialOutput
                                       * Referenced by: '<S2>/Merge'
                                       */
  real32_T Delay4_InitialCondition;
                                  /* Computed Parameter: Delay4_InitialCondition
                                   * Referenced by: '<S93>/Delay4'
                                   */
  real32_T Last_Valid_Position_Delta_InitialCondition;
               /* Computed Parameter: Last_Valid_Position_Delta_InitialCondition
                * Referenced by: '<S93>/Last_Valid_Position_Delta'
                */
  real32_T FilterTs15mS_NumCoef;     /* Computed Parameter: FilterTs15mS_NumCoef
                                      * Referenced by: '<S3>/FilterTs15mS'
                                      */
  real32_T FilterTs15mS_InitialStates;
                               /* Computed Parameter: FilterTs15mS_InitialStates
                                * Referenced by: '<S3>/FilterTs15mS'
                                */
  real32_T RateTransition_InitialCondition;
                          /* Computed Parameter: RateTransition_InitialCondition
                           * Referenced by: '<Root>/Rate Transition'
                           */
  real32_T Saturation_LowerSat;       /* Computed Parameter: Saturation_LowerSat
                                       * Referenced by: '<S4>/Saturation'
                                       */
  boolean_T Position_At_Zero_Count_Valid_Y0;
                          /* Computed Parameter: Position_At_Zero_Count_Valid_Y0
                           * Referenced by: '<S5>/Position_At_Zero_Count_Valid'
                           */
  boolean_T Delay1_InitialCondition_p;
                                /* Computed Parameter: Delay1_InitialCondition_p
                                 * Referenced by: '<S13>/Delay1'
                                 */
  boolean_T Delay2_InitialCondition;
                                  /* Computed Parameter: Delay2_InitialCondition
                                   * Referenced by: '<S12>/Delay2'
                                   */
  boolean_T Delay1_InitialCondition_n;
                                /* Computed Parameter: Delay1_InitialCondition_n
                                 * Referenced by: '<S36>/Delay1'
                                 */
  boolean_T Delay2_InitialCondition_k;
                                /* Computed Parameter: Delay2_InitialCondition_k
                                 * Referenced by: '<S93>/Delay2'
                                 */
  boolean_T Delay3_InitialCondition;
                                  /* Computed Parameter: Delay3_InitialCondition
                                   * Referenced by: '<S93>/Delay3'
                                   */
  boolean_T Constant_Value_gk;         /* Computed Parameter: Constant_Value_gk
                                        * Referenced by: '<S93>/Constant'
                                        */
  boolean_T Delay1_InitialCondition_f;
                                /* Computed Parameter: Delay1_InitialCondition_f
                                 * Referenced by: '<S93>/Delay1'
                                 */
} FieldOrientedController_cal_type;

#endif                            /*FieldOrientedController_MDLREF_HIDE_CHILD_*/

/* Storage class 'PageSwitching' */

/* Storage class 'PageSwitching' */
#ifndef FieldOrientedController_MDLREF_HIDE_CHILD_

extern FieldOrientedController_cal_type FieldOrientedController_cal_impl;
extern FieldOrientedController_cal_type *FieldOrientedController_cal;

#endif                            /*FieldOrientedController_MDLREF_HIDE_CHILD_*/
#endif                           /* RTW_HEADER_FieldOrientedController_cal_h_ */
