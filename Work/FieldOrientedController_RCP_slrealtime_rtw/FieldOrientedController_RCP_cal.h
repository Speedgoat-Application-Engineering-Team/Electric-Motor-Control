#ifndef RTW_HEADER_FieldOrientedController_RCP_cal_h_
#define RTW_HEADER_FieldOrientedController_RCP_cal_h_
#include "rtwtypes.h"
#include "FieldOrientedController_RCP_types.h"

/* Storage class 'PageSwitching', for system '<Root>' */
typedef struct {
  real_T ConditionEncoder_cntsPerRevolution;
                           /* Mask Parameter: ConditionEncoder_cntsPerRevolution
                            * Referenced by: '<S7>/Wrap to Positive'
                            */
  real_T ConditionEncoder_positiveDirection;
                           /* Mask Parameter: ConditionEncoder_positiveDirection
                            * Referenced by: '<S7>/Wrap to Positive'
                            */
  real_T IO397AnalogInput_P1_Size[2];
                                 /* Computed Parameter: IO397AnalogInput_P1_Size
                                  * Referenced by: '<S6>/IO397 Analog Input'
                                  */
  real_T IO397AnalogInput_P1;          /* Expression: boardType
                                        * Referenced by: '<S6>/IO397 Analog Input'
                                        */
  real_T IO397AnalogInput_P2_Size[2];
                                 /* Computed Parameter: IO397AnalogInput_P2_Size
                                  * Referenced by: '<S6>/IO397 Analog Input'
                                  */
  real_T IO397AnalogInput_P2;          /* Expression: id
                                        * Referenced by: '<S6>/IO397 Analog Input'
                                        */
  real_T IO397AnalogInput_P3_Size[2];
                                 /* Computed Parameter: IO397AnalogInput_P3_Size
                                  * Referenced by: '<S6>/IO397 Analog Input'
                                  */
  real_T IO397AnalogInput_P3[2];       /* Expression: chan
                                        * Referenced by: '<S6>/IO397 Analog Input'
                                        */
  real_T IO397AnalogInput_P4_Size[2];
                                 /* Computed Parameter: IO397AnalogInput_P4_Size
                                  * Referenced by: '<S6>/IO397 Analog Input'
                                  */
  real_T IO397AnalogInput_P4;          /* Expression: trigger
                                        * Referenced by: '<S6>/IO397 Analog Input'
                                        */
  real_T IO397AnalogInput_P5_Size[2];
                                 /* Computed Parameter: IO397AnalogInput_P5_Size
                                  * Referenced by: '<S6>/IO397 Analog Input'
                                  */
  real_T IO397AnalogInput_P5;          /* Expression: range
                                        * Referenced by: '<S6>/IO397 Analog Input'
                                        */
  real_T IO397AnalogInput_P6_Size[2];
                                 /* Computed Parameter: IO397AnalogInput_P6_Size
                                  * Referenced by: '<S6>/IO397 Analog Input'
                                  */
  real_T IO397AnalogInput_P6;          /* Expression: ts
                                        * Referenced by: '<S6>/IO397 Analog Input'
                                        */
  real_T IO397AnalogInput_P7_Size[2];
                                 /* Computed Parameter: IO397AnalogInput_P7_Size
                                  * Referenced by: '<S6>/IO397 Analog Input'
                                  */
  real_T IO397AnalogInput_P7;          /* Expression: pciSlot
                                        * Referenced by: '<S6>/IO397 Analog Input'
                                        */
  real_T QAD3_P1_Size[2];              /* Computed Parameter: QAD3_P1_Size
                                        * Referenced by: '<S6>/QAD (3)'
                                        */
  real_T QAD3_P1;                      /* Expression: boardType
                                        * Referenced by: '<S6>/QAD (3)'
                                        */
  real_T QAD3_P2_Size[2];              /* Computed Parameter: QAD3_P2_Size
                                        * Referenced by: '<S6>/QAD (3)'
                                        */
  real_T QAD3_P2;                      /* Expression: id
                                        * Referenced by: '<S6>/QAD (3)'
                                        */
  real_T QAD3_P3_Size[2];              /* Computed Parameter: QAD3_P3_Size
                                        * Referenced by: '<S6>/QAD (3)'
                                        */
  real_T QAD3_P3;                      /* Expression: ts
                                        * Referenced by: '<S6>/QAD (3)'
                                        */
  real_T QAD3_P4_Size[2];              /* Computed Parameter: QAD3_P4_Size
                                        * Referenced by: '<S6>/QAD (3)'
                                        */
  real_T QAD3_P4;                      /* Expression: pciSlot
                                        * Referenced by: '<S6>/QAD (3)'
                                        */
  real_T QAD3_P5_Size[2];              /* Computed Parameter: QAD3_P5_Size
                                        * Referenced by: '<S6>/QAD (3)'
                                        */
  real_T QAD3_P5;                      /* Expression: chan
                                        * Referenced by: '<S6>/QAD (3)'
                                        */
  real_T QAD3_P6_Size[2];              /* Computed Parameter: QAD3_P6_Size
                                        * Referenced by: '<S6>/QAD (3)'
                                        */
  real_T QAD3_P6;                      /* Expression: operatingMode
                                        * Referenced by: '<S6>/QAD (3)'
                                        */
  real_T QAD3_P7_Size[2];              /* Computed Parameter: QAD3_P7_Size
                                        * Referenced by: '<S6>/QAD (3)'
                                        */
  real_T QAD3_P7;                      /* Expression: resolution
                                        * Referenced by: '<S6>/QAD (3)'
                                        */
  real_T QAD3_P8_Size[2];              /* Computed Parameter: QAD3_P8_Size
                                        * Referenced by: '<S6>/QAD (3)'
                                        */
  real_T QAD3_P8;                      /* Expression: indexControlMode
                                        * Referenced by: '<S6>/QAD (3)'
                                        */
  real_T QAD3_P9_Size[2];              /* Computed Parameter: QAD3_P9_Size
                                        * Referenced by: '<S6>/QAD (3)'
                                        */
  real_T QAD3_P9;                      /* Expression: stepsPerRevolution
                                        * Referenced by: '<S6>/QAD (3)'
                                        */
  real_T QAD3_P10_Size[2];             /* Computed Parameter: QAD3_P10_Size
                                        * Referenced by: '<S6>/QAD (3)'
                                        */
  real_T QAD3_P10;                     /* Expression: latchMode
                                        * Referenced by: '<S6>/QAD (3)'
                                        */
  real_T QAD3_P11_Size[2];             /* Computed Parameter: QAD3_P11_Size
                                        * Referenced by: '<S6>/QAD (3)'
                                        */
  real_T QAD3_P11;                     /* Expression: resetOnStart
                                        * Referenced by: '<S6>/QAD (3)'
                                        */
  real_T QAD3_P12_Size[2];             /* Computed Parameter: QAD3_P12_Size
                                        * Referenced by: '<S6>/QAD (3)'
                                        */
  real_T QAD3_P12;                     /* Expression: interpolatePosition
                                        * Referenced by: '<S6>/QAD (3)'
                                        */
  real_T QAD3_P13_Size[2];             /* Computed Parameter: QAD3_P13_Size
                                        * Referenced by: '<S6>/QAD (3)'
                                        */
  real_T QAD3_P13;                     /* Expression: invertAB
                                        * Referenced by: '<S6>/QAD (3)'
                                        */
  real_T QAD3_P14_Size[2];             /* Computed Parameter: QAD3_P14_Size
                                        * Referenced by: '<S6>/QAD (3)'
                                        */
  real_T QAD3_P14;                     /* Expression: showClearPositionInput
                                        * Referenced by: '<S6>/QAD (3)'
                                        */
  real_T QAD3_P15_Size[2];             /* Computed Parameter: QAD3_P15_Size
                                        * Referenced by: '<S6>/QAD (3)'
                                        */
  real_T QAD3_P15;                     /* Expression: showClearIndexFoundInput
                                        * Referenced by: '<S6>/QAD (3)'
                                        */
  real_T QAD3_P16_Size[2];             /* Computed Parameter: QAD3_P16_Size
                                        * Referenced by: '<S6>/QAD (3)'
                                        */
  real_T QAD3_P16;                     /* Expression: showPositionOutput
                                        * Referenced by: '<S6>/QAD (3)'
                                        */
  real_T QAD3_P17_Size[2];             /* Computed Parameter: QAD3_P17_Size
                                        * Referenced by: '<S6>/QAD (3)'
                                        */
  real_T QAD3_P17;                     /* Expression: showTurnOutput
                                        * Referenced by: '<S6>/QAD (3)'
                                        */
  real_T QAD3_P18_Size[2];             /* Computed Parameter: QAD3_P18_Size
                                        * Referenced by: '<S6>/QAD (3)'
                                        */
  real_T QAD3_P18;                     /* Expression: showDirectionOutput
                                        * Referenced by: '<S6>/QAD (3)'
                                        */
  real_T QAD3_P19_Size[2];             /* Computed Parameter: QAD3_P19_Size
                                        * Referenced by: '<S6>/QAD (3)'
                                        */
  real_T QAD3_P19;                     /* Expression: showIndexFoundOutput
                                        * Referenced by: '<S6>/QAD (3)'
                                        */
  real_T QAD3_P20_Size[2];             /* Computed Parameter: QAD3_P20_Size
                                        * Referenced by: '<S6>/QAD (3)'
                                        */
  real_T QAD3_P20;                     /* Expression: showSpeedOutput
                                        * Referenced by: '<S6>/QAD (3)'
                                        */
  real_T QAD3_P21_Size[2];             /* Computed Parameter: QAD3_P21_Size
                                        * Referenced by: '<S6>/QAD (3)'
                                        */
  real_T QAD3_P21;                     /* Expression: fpga_frequency
                                        * Referenced by: '<S6>/QAD (3)'
                                        */
  real_T userInputs_InitialCondition;  /* Expression: 0
                                        * Referenced by: synthesized block
                                        */
  real_T UnitDelay_InitialCondition;   /* Expression: 1
                                        * Referenced by: '<S6>/Unit Delay'
                                        */
  real_T Digitaloutput_P1_Size[2];  /* Computed Parameter: Digitaloutput_P1_Size
                                     * Referenced by: '<S6>/Digital output'
                                     */
  real_T Digitaloutput_P1;             /* Expression: boardType
                                        * Referenced by: '<S6>/Digital output'
                                        */
  real_T Digitaloutput_P2_Size[2];  /* Computed Parameter: Digitaloutput_P2_Size
                                     * Referenced by: '<S6>/Digital output'
                                     */
  real_T Digitaloutput_P2;             /* Expression: id
                                        * Referenced by: '<S6>/Digital output'
                                        */
  real_T Digitaloutput_P3_Size[2];  /* Computed Parameter: Digitaloutput_P3_Size
                                     * Referenced by: '<S6>/Digital output'
                                     */
  real_T Digitaloutput_P3[3];          /* Expression: chan
                                        * Referenced by: '<S6>/Digital output'
                                        */
  real_T Digitaloutput_P4_Size[2];  /* Computed Parameter: Digitaloutput_P4_Size
                                     * Referenced by: '<S6>/Digital output'
                                     */
  real_T Digitaloutput_P4;             /* Expression: vectorizeInput
                                        * Referenced by: '<S6>/Digital output'
                                        */
  real_T Digitaloutput_P5_Size[2];  /* Computed Parameter: Digitaloutput_P5_Size
                                     * Referenced by: '<S6>/Digital output'
                                     */
  real_T Digitaloutput_P5[3];          /* Expression: reset
                                        * Referenced by: '<S6>/Digital output'
                                        */
  real_T Digitaloutput_P6_Size[2];  /* Computed Parameter: Digitaloutput_P6_Size
                                     * Referenced by: '<S6>/Digital output'
                                     */
  real_T Digitaloutput_P6[3];          /* Expression: init
                                        * Referenced by: '<S6>/Digital output'
                                        */
  real_T Digitaloutput_P7_Size[2];  /* Computed Parameter: Digitaloutput_P7_Size
                                     * Referenced by: '<S6>/Digital output'
                                     */
  real_T Digitaloutput_P7;             /* Expression: ts
                                        * Referenced by: '<S6>/Digital output'
                                        */
  real_T Digitaloutput_P8_Size[2];  /* Computed Parameter: Digitaloutput_P8_Size
                                     * Referenced by: '<S6>/Digital output'
                                     */
  real_T Digitaloutput_P8;             /* Expression: pciSlot
                                        * Referenced by: '<S6>/Digital output'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 1
                                        * Referenced by: '<S6>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: 0
                                        * Referenced by: '<S6>/Saturation'
                                        */
  real_T PWMgeneration5_P1_Size[2];/* Computed Parameter: PWMgeneration5_P1_Size
                                    * Referenced by: '<S6>/PWM generation (5)'
                                    */
  real_T PWMgeneration5_P1;            /* Expression: boardType
                                        * Referenced by: '<S6>/PWM generation (5)'
                                        */
  real_T PWMgeneration5_P2_Size[2];/* Computed Parameter: PWMgeneration5_P2_Size
                                    * Referenced by: '<S6>/PWM generation (5)'
                                    */
  real_T PWMgeneration5_P2;            /* Expression: id
                                        * Referenced by: '<S6>/PWM generation (5)'
                                        */
  real_T PWMgeneration5_P3_Size[2];/* Computed Parameter: PWMgeneration5_P3_Size
                                    * Referenced by: '<S6>/PWM generation (5)'
                                    */
  real_T PWMgeneration5_P3[3];         /* Expression: chan
                                        * Referenced by: '<S6>/PWM generation (5)'
                                        */
  real_T PWMgeneration5_P4_Size[2];/* Computed Parameter: PWMgeneration5_P4_Size
                                    * Referenced by: '<S6>/PWM generation (5)'
                                    */
  real_T PWMgeneration5_P4;            /* Expression: fpga_frequency
                                        * Referenced by: '<S6>/PWM generation (5)'
                                        */
  real_T PWMgeneration5_P5_Size[2];/* Computed Parameter: PWMgeneration5_P5_Size
                                    * Referenced by: '<S6>/PWM generation (5)'
                                    */
  real_T PWMgeneration5_P5;            /* Expression: symmetric
                                        * Referenced by: '<S6>/PWM generation (5)'
                                        */
  real_T PWMgeneration5_P6_Size[2];/* Computed Parameter: PWMgeneration5_P6_Size
                                    * Referenced by: '<S6>/PWM generation (5)'
                                    */
  real_T PWMgeneration5_P6[3];         /* Expression: invert_a
                                        * Referenced by: '<S6>/PWM generation (5)'
                                        */
  real_T PWMgeneration5_P7_Size[2];/* Computed Parameter: PWMgeneration5_P7_Size
                                    * Referenced by: '<S6>/PWM generation (5)'
                                    */
  real_T PWMgeneration5_P7[3];         /* Expression: invert_b
                                        * Referenced by: '<S6>/PWM generation (5)'
                                        */
  real_T PWMgeneration5_P8_Size[2];/* Computed Parameter: PWMgeneration5_P8_Size
                                    * Referenced by: '<S6>/PWM generation (5)'
                                    */
  real_T PWMgeneration5_P8[3];         /* Expression: invert_c
                                        * Referenced by: '<S6>/PWM generation (5)'
                                        */
  real_T PWMgeneration5_P9_Size[2];/* Computed Parameter: PWMgeneration5_P9_Size
                                    * Referenced by: '<S6>/PWM generation (5)'
                                    */
  real_T PWMgeneration5_P9;            /* Expression: bit_width_pwm_gen
                                        * Referenced by: '<S6>/PWM generation (5)'
                                        */
  real_T PWMgeneration5_P10_Size[2];
                                  /* Computed Parameter: PWMgeneration5_P10_Size
                                   * Referenced by: '<S6>/PWM generation (5)'
                                   */
  real_T PWMgeneration5_P10[3];        /* Expression: period
                                        * Referenced by: '<S6>/PWM generation (5)'
                                        */
  real_T PWMgeneration5_P11_Size[2];
                                  /* Computed Parameter: PWMgeneration5_P11_Size
                                   * Referenced by: '<S6>/PWM generation (5)'
                                   */
  real_T PWMgeneration5_P11;           /* Expression: a_on
                                        * Referenced by: '<S6>/PWM generation (5)'
                                        */
  real_T PWMgeneration5_P12_Size[2];
                                  /* Computed Parameter: PWMgeneration5_P12_Size
                                   * Referenced by: '<S6>/PWM generation (5)'
                                   */
  real_T PWMgeneration5_P12;           /* Expression: a_off
                                        * Referenced by: '<S6>/PWM generation (5)'
                                        */
  real_T PWMgeneration5_P13_Size[2];
                                  /* Computed Parameter: PWMgeneration5_P13_Size
                                   * Referenced by: '<S6>/PWM generation (5)'
                                   */
  real_T PWMgeneration5_P13;           /* Expression: b_on
                                        * Referenced by: '<S6>/PWM generation (5)'
                                        */
  real_T PWMgeneration5_P14_Size[2];
                                  /* Computed Parameter: PWMgeneration5_P14_Size
                                   * Referenced by: '<S6>/PWM generation (5)'
                                   */
  real_T PWMgeneration5_P14;           /* Expression: b_off
                                        * Referenced by: '<S6>/PWM generation (5)'
                                        */
  real_T PWMgeneration5_P15_Size[2];
                                  /* Computed Parameter: PWMgeneration5_P15_Size
                                   * Referenced by: '<S6>/PWM generation (5)'
                                   */
  real_T PWMgeneration5_P15[3];        /* Expression: c_on
                                        * Referenced by: '<S6>/PWM generation (5)'
                                        */
  real_T PWMgeneration5_P16_Size[2];
                                  /* Computed Parameter: PWMgeneration5_P16_Size
                                   * Referenced by: '<S6>/PWM generation (5)'
                                   */
  real_T PWMgeneration5_P16[3];        /* Expression: c_off
                                        * Referenced by: '<S6>/PWM generation (5)'
                                        */
  real_T PWMgeneration5_P17_Size[2];
                                  /* Computed Parameter: PWMgeneration5_P17_Size
                                   * Referenced by: '<S6>/PWM generation (5)'
                                   */
  real_T PWMgeneration5_P17[3];        /* Expression: trigger_duration
                                        * Referenced by: '<S6>/PWM generation (5)'
                                        */
  real_T PWMgeneration5_P18_Size[2];
                                  /* Computed Parameter: PWMgeneration5_P18_Size
                                   * Referenced by: '<S6>/PWM generation (5)'
                                   */
  real_T PWMgeneration5_P18[3];        /* Expression: protection
                                        * Referenced by: '<S6>/PWM generation (5)'
                                        */
  real_T PWMgeneration5_P19_Size[2];
                                  /* Computed Parameter: PWMgeneration5_P19_Size
                                   * Referenced by: '<S6>/PWM generation (5)'
                                   */
  real_T PWMgeneration5_P19[3];        /* Expression: enable_latch_half_period
                                        * Referenced by: '<S6>/PWM generation (5)'
                                        */
  real_T PWMgeneration5_P20_Size[2];
                                  /* Computed Parameter: PWMgeneration5_P20_Size
                                   * Referenced by: '<S6>/PWM generation (5)'
                                   */
  real_T PWMgeneration5_P20[3];        /* Expression: trigger_source
                                        * Referenced by: '<S6>/PWM generation (5)'
                                        */
  real_T PWMgeneration5_P21_Size[2];
                                  /* Computed Parameter: PWMgeneration5_P21_Size
                                   * Referenced by: '<S6>/PWM generation (5)'
                                   */
  real_T PWMgeneration5_P21[3];        /* Expression: idle_a
                                        * Referenced by: '<S6>/PWM generation (5)'
                                        */
  real_T PWMgeneration5_P22_Size[2];
                                  /* Computed Parameter: PWMgeneration5_P22_Size
                                   * Referenced by: '<S6>/PWM generation (5)'
                                   */
  real_T PWMgeneration5_P22[3];        /* Expression: idle_b
                                        * Referenced by: '<S6>/PWM generation (5)'
                                        */
  real_T PWMgeneration5_P23_Size[2];
                                  /* Computed Parameter: PWMgeneration5_P23_Size
                                   * Referenced by: '<S6>/PWM generation (5)'
                                   */
  real_T PWMgeneration5_P23[3];        /* Expression: idle_c
                                        * Referenced by: '<S6>/PWM generation (5)'
                                        */
  real_T PWMgeneration5_P24_Size[2];
                                  /* Computed Parameter: PWMgeneration5_P24_Size
                                   * Referenced by: '<S6>/PWM generation (5)'
                                   */
  real_T PWMgeneration5_P24[3];        /* Expression: deadband
                                        * Referenced by: '<S6>/PWM generation (5)'
                                        */
  real_T PWMgeneration5_P25_Size[2];
                                  /* Computed Parameter: PWMgeneration5_P25_Size
                                   * Referenced by: '<S6>/PWM generation (5)'
                                   */
  real_T PWMgeneration5_P25;           /* Expression: show_a_input
                                        * Referenced by: '<S6>/PWM generation (5)'
                                        */
  real_T PWMgeneration5_P26_Size[2];
                                  /* Computed Parameter: PWMgeneration5_P26_Size
                                   * Referenced by: '<S6>/PWM generation (5)'
                                   */
  real_T PWMgeneration5_P26;           /* Expression: show_b_input
                                        * Referenced by: '<S6>/PWM generation (5)'
                                        */
  real_T PWMgeneration5_P27_Size[2];
                                  /* Computed Parameter: PWMgeneration5_P27_Size
                                   * Referenced by: '<S6>/PWM generation (5)'
                                   */
  real_T PWMgeneration5_P27;           /* Expression: show_c_input
                                        * Referenced by: '<S6>/PWM generation (5)'
                                        */
  real_T PWMgeneration5_P28_Size[2];
                                  /* Computed Parameter: PWMgeneration5_P28_Size
                                   * Referenced by: '<S6>/PWM generation (5)'
                                   */
  real_T PWMgeneration5_P28;           /* Expression: show_period_input
                                        * Referenced by: '<S6>/PWM generation (5)'
                                        */
  real_T PWMgeneration5_P29_Size[2];
                                  /* Computed Parameter: PWMgeneration5_P29_Size
                                   * Referenced by: '<S6>/PWM generation (5)'
                                   */
  real_T PWMgeneration5_P29[3];        /* Expression: b_is_complement_of_a
                                        * Referenced by: '<S6>/PWM generation (5)'
                                        */
  real_T PWMgeneration5_P30_Size[2];
                                  /* Computed Parameter: PWMgeneration5_P30_Size
                                   * Referenced by: '<S6>/PWM generation (5)'
                                   */
  real_T PWMgeneration5_P30[3];        /* Expression: pwm_a_dc
                                        * Referenced by: '<S6>/PWM generation (5)'
                                        */
  real_T PWMgeneration5_P31_Size[2];
                                  /* Computed Parameter: PWMgeneration5_P31_Size
                                   * Referenced by: '<S6>/PWM generation (5)'
                                   */
  real_T PWMgeneration5_P31;           /* Expression: pwm_b_dc
                                        * Referenced by: '<S6>/PWM generation (5)'
                                        */
  real_T PWMgeneration5_P32_Size[2];
                                  /* Computed Parameter: PWMgeneration5_P32_Size
                                   * Referenced by: '<S6>/PWM generation (5)'
                                   */
  real_T PWMgeneration5_P32;           /* Expression: show_force_stop_input
                                        * Referenced by: '<S6>/PWM generation (5)'
                                        */
  real_T PWMgeneration5_P33_Size[2];
                                  /* Computed Parameter: PWMgeneration5_P33_Size
                                   * Referenced by: '<S6>/PWM generation (5)'
                                   */
  real_T PWMgeneration5_P33[3];        /* Expression: cancels_pwm_generation
                                        * Referenced by: '<S6>/PWM generation (5)'
                                        */
  real_T PWMgeneration5_P34_Size[2];
                                  /* Computed Parameter: PWMgeneration5_P34_Size
                                   * Referenced by: '<S6>/PWM generation (5)'
                                   */
  real_T PWMgeneration5_P34[3];        /* Expression: delay
                                        * Referenced by: '<S6>/PWM generation (5)'
                                        */
  real_T PWMgeneration5_P35_Size[2];
                                  /* Computed Parameter: PWMgeneration5_P35_Size
                                   * Referenced by: '<S6>/PWM generation (5)'
                                   */
  real_T PWMgeneration5_P35[3];        /* Expression: enable_natural_pwm
                                        * Referenced by: '<S6>/PWM generation (5)'
                                        */
  real_T PWMgeneration5_P36_Size[2];
                                  /* Computed Parameter: PWMgeneration5_P36_Size
                                   * Referenced by: '<S6>/PWM generation (5)'
                                   */
  real_T PWMgeneration5_P36;           /* Expression: ts
                                        * Referenced by: '<S6>/PWM generation (5)'
                                        */
  real_T PWMgeneration5_P37_Size[2];
                                  /* Computed Parameter: PWMgeneration5_P37_Size
                                   * Referenced by: '<S6>/PWM generation (5)'
                                   */
  real_T PWMgeneration5_P37;           /* Expression: pciSlot
                                        * Referenced by: '<S6>/PWM generation (5)'
                                        */
  real_T rstInvtrFlt_Value;            /* Expression: 0
                                        * Referenced by: '<S6>/rstInvtrFlt'
                                        */
  real_T torqueLoad_Value;             /* Expression: 0
                                        * Referenced by: '<S1>/torqueLoad'
                                        */
  commandTypeEnum commandType_Value;   /* Expression: commandTypeEnum(3)
                                        * Referenced by: '<S1>/commandType'
                                        */
  real32_T velocityCmd_Value;          /* Computed Parameter: velocityCmd_Value
                                        * Referenced by: '<S1>/velocityCmd'
                                        */
  uint32_T Constant_Value;             /* Computed Parameter: Constant_Value
                                        * Referenced by: '<S7>/Constant'
                                        */
  uint16_T Gain_Gain;                  /* Computed Parameter: Gain_Gain
                                        * Referenced by: '<S6>/Gain'
                                        */
  boolean_T Constant_Value_h;          /* Expression: true
                                        * Referenced by: '<S6>/Constant'
                                        */
  boolean_T userInputs1_InitialCondition;
                             /* Computed Parameter: userInputs1_InitialCondition
                              * Referenced by: synthesized block
                              */
  boolean_T enCurrentSensor_Value;     /* Expression: logical(1)
                                        * Referenced by: '<S1>/enCurrentSensor'
                                        */
  boolean_T MotorOn_Value;             /* Expression: logical(1)
                                        * Referenced by: '<S1>/MotorOn'
                                        */
  boolean_T enManualTestInputs_Value;
                                 /* Computed Parameter: enManualTestInputs_Value
                                  * Referenced by: '<Root>/enManualTestInputs'
                                  */
} FieldOrientedController_RCP_cal_type;

/* Storage class 'PageSwitching' */

/* Storage class 'PageSwitching' */
extern FieldOrientedController_RCP_cal_type FieldOrientedController_RCP_cal_impl;
extern FieldOrientedController_RCP_cal_type *FieldOrientedController_RCP_cal;

#endif                       /* RTW_HEADER_FieldOrientedController_RCP_cal_h_ */
