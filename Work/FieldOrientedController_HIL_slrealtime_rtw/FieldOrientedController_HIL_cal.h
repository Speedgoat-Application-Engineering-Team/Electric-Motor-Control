#ifndef RTW_HEADER_FieldOrientedController_HIL_cal_h_
#define RTW_HEADER_FieldOrientedController_HIL_cal_h_
#include "rtwtypes.h"
#include "FieldOrientedController_HIL_types.h"

/* Storage class 'PageSwitching', for system '<Root>' */
typedef struct {
  uint32_T OverloadOptions_maxOverload;
                                  /* Mask Parameter: OverloadOptions_maxOverload
                                   * Referenced by: '<S11>/Overload Options Core'
                                   */
  uint32_T OverloadOptions_startupDur;
                                   /* Mask Parameter: OverloadOptions_startupDur
                                    * Referenced by: '<S11>/Overload Options Core'
                                    */
  real_T TorqueLoad_Value;             /* Expression: 0
                                        * Referenced by: '<S6>/Torque Load'
                                        */
  real_T Digitalinput_P1_Size[2];    /* Computed Parameter: Digitalinput_P1_Size
                                      * Referenced by: '<S7>/Digital input'
                                      */
  real_T Digitalinput_P1;              /* Expression: boardType
                                        * Referenced by: '<S7>/Digital input'
                                        */
  real_T Digitalinput_P2_Size[2];    /* Computed Parameter: Digitalinput_P2_Size
                                      * Referenced by: '<S7>/Digital input'
                                      */
  real_T Digitalinput_P2;              /* Expression: id
                                        * Referenced by: '<S7>/Digital input'
                                        */
  real_T Digitalinput_P3_Size[2];    /* Computed Parameter: Digitalinput_P3_Size
                                      * Referenced by: '<S7>/Digital input'
                                      */
  real_T Digitalinput_P3;              /* Expression: chan
                                        * Referenced by: '<S7>/Digital input'
                                        */
  real_T Digitalinput_P4_Size[2];    /* Computed Parameter: Digitalinput_P4_Size
                                      * Referenced by: '<S7>/Digital input'
                                      */
  real_T Digitalinput_P4;              /* Expression: vectorizeOutput
                                        * Referenced by: '<S7>/Digital input'
                                        */
  real_T Digitalinput_P5_Size[2];    /* Computed Parameter: Digitalinput_P5_Size
                                      * Referenced by: '<S7>/Digital input'
                                      */
  real_T Digitalinput_P5;              /* Expression: ts
                                        * Referenced by: '<S7>/Digital input'
                                        */
  real_T Digitalinput_P6_Size[2];    /* Computed Parameter: Digitalinput_P6_Size
                                      * Referenced by: '<S7>/Digital input'
                                      */
  real_T Digitalinput_P6;              /* Expression: pciSlot
                                        * Referenced by: '<S7>/Digital input'
                                        */
  real_T PWMCapture_P1_Size[2];        /* Computed Parameter: PWMCapture_P1_Size
                                        * Referenced by: '<S7>/PWM Capture'
                                        */
  real_T PWMCapture_P1;                /* Expression: boardType
                                        * Referenced by: '<S7>/PWM Capture'
                                        */
  real_T PWMCapture_P2_Size[2];        /* Computed Parameter: PWMCapture_P2_Size
                                        * Referenced by: '<S7>/PWM Capture'
                                        */
  real_T PWMCapture_P2;                /* Expression: id
                                        * Referenced by: '<S7>/PWM Capture'
                                        */
  real_T PWMCapture_P3_Size[2];        /* Computed Parameter: PWMCapture_P3_Size
                                        * Referenced by: '<S7>/PWM Capture'
                                        */
  real_T PWMCapture_P3[3];             /* Expression: chan
                                        * Referenced by: '<S7>/PWM Capture'
                                        */
  real_T PWMCapture_P4_Size[2];        /* Computed Parameter: PWMCapture_P4_Size
                                        * Referenced by: '<S7>/PWM Capture'
                                        */
  real_T PWMCapture_P4;                /* Expression: showHighDuration
                                        * Referenced by: '<S7>/PWM Capture'
                                        */
  real_T PWMCapture_P5_Size[2];        /* Computed Parameter: PWMCapture_P5_Size
                                        * Referenced by: '<S7>/PWM Capture'
                                        */
  real_T PWMCapture_P5;                /* Expression: showLowDuration
                                        * Referenced by: '<S7>/PWM Capture'
                                        */
  real_T PWMCapture_P6_Size[2];        /* Computed Parameter: PWMCapture_P6_Size
                                        * Referenced by: '<S7>/PWM Capture'
                                        */
  real_T PWMCapture_P6;                /* Expression: showDC16
                                        * Referenced by: '<S7>/PWM Capture'
                                        */
  real_T PWMCapture_P7_Size[2];        /* Computed Parameter: PWMCapture_P7_Size
                                        * Referenced by: '<S7>/PWM Capture'
                                        */
  real_T PWMCapture_P7;                /* Expression: showDC8
                                        * Referenced by: '<S7>/PWM Capture'
                                        */
  real_T PWMCapture_P8_Size[2];        /* Computed Parameter: PWMCapture_P8_Size
                                        * Referenced by: '<S7>/PWM Capture'
                                        */
  real_T PWMCapture_P8;                /* Expression: showTOn
                                        * Referenced by: '<S7>/PWM Capture'
                                        */
  real_T PWMCapture_P9_Size[2];        /* Computed Parameter: PWMCapture_P9_Size
                                        * Referenced by: '<S7>/PWM Capture'
                                        */
  real_T PWMCapture_P9;                /* Expression: showTOff
                                        * Referenced by: '<S7>/PWM Capture'
                                        */
  real_T PWMCapture_P10_Size[2];      /* Computed Parameter: PWMCapture_P10_Size
                                       * Referenced by: '<S7>/PWM Capture'
                                       */
  real_T PWMCapture_P10;               /* Expression: showPeriod
                                        * Referenced by: '<S7>/PWM Capture'
                                        */
  real_T PWMCapture_P11_Size[2];      /* Computed Parameter: PWMCapture_P11_Size
                                       * Referenced by: '<S7>/PWM Capture'
                                       */
  real_T PWMCapture_P11;               /* Expression: showValidData
                                        * Referenced by: '<S7>/PWM Capture'
                                        */
  real_T PWMCapture_P12_Size[2];      /* Computed Parameter: PWMCapture_P12_Size
                                       * Referenced by: '<S7>/PWM Capture'
                                       */
  real_T PWMCapture_P12[3];            /* Expression: captureMode
                                        * Referenced by: '<S7>/PWM Capture'
                                        */
  real_T PWMCapture_P13_Size[2];      /* Computed Parameter: PWMCapture_P13_Size
                                       * Referenced by: '<S7>/PWM Capture'
                                       */
  real_T PWMCapture_P13[3];            /* Expression: captureTimeout
                                        * Referenced by: '<S7>/PWM Capture'
                                        */
  real_T PWMCapture_P14_Size[2];      /* Computed Parameter: PWMCapture_P14_Size
                                       * Referenced by: '<S7>/PWM Capture'
                                       */
  real_T PWMCapture_P14;               /* Expression: ts
                                        * Referenced by: '<S7>/PWM Capture'
                                        */
  real_T PWMCapture_P15_Size[2];      /* Computed Parameter: PWMCapture_P15_Size
                                       * Referenced by: '<S7>/PWM Capture'
                                       */
  real_T PWMCapture_P15;               /* Expression: pciSlot
                                        * Referenced by: '<S7>/PWM Capture'
                                        */
  real_T velocityCommandmotorOn_P1_Size[2];
                           /* Computed Parameter: velocityCommandmotorOn_P1_Size
                            * Referenced by: '<S8>/velocityCommand, motorOn'
                            */
  real_T velocityCommandmotorOn_P1;    /* Expression: boardType
                                        * Referenced by: '<S8>/velocityCommand, motorOn'
                                        */
  real_T velocityCommandmotorOn_P2_Size[2];
                           /* Computed Parameter: velocityCommandmotorOn_P2_Size
                            * Referenced by: '<S8>/velocityCommand, motorOn'
                            */
  real_T velocityCommandmotorOn_P2;    /* Expression: id
                                        * Referenced by: '<S8>/velocityCommand, motorOn'
                                        */
  real_T velocityCommandmotorOn_P3_Size[2];
                           /* Computed Parameter: velocityCommandmotorOn_P3_Size
                            * Referenced by: '<S8>/velocityCommand, motorOn'
                            */
  real_T velocityCommandmotorOn_P3[3]; /* Expression: chan
                                        * Referenced by: '<S8>/velocityCommand, motorOn'
                                        */
  real_T velocityCommandmotorOn_P4_Size[2];
                           /* Computed Parameter: velocityCommandmotorOn_P4_Size
                            * Referenced by: '<S8>/velocityCommand, motorOn'
                            */
  real_T velocityCommandmotorOn_P4;    /* Expression: vectorizeInput
                                        * Referenced by: '<S8>/velocityCommand, motorOn'
                                        */
  real_T velocityCommandmotorOn_P5_Size[2];
                           /* Computed Parameter: velocityCommandmotorOn_P5_Size
                            * Referenced by: '<S8>/velocityCommand, motorOn'
                            */
  real_T velocityCommandmotorOn_P5[3]; /* Expression: reset
                                        * Referenced by: '<S8>/velocityCommand, motorOn'
                                        */
  real_T velocityCommandmotorOn_P6_Size[2];
                           /* Computed Parameter: velocityCommandmotorOn_P6_Size
                            * Referenced by: '<S8>/velocityCommand, motorOn'
                            */
  real_T velocityCommandmotorOn_P6[3]; /* Expression: init
                                        * Referenced by: '<S8>/velocityCommand, motorOn'
                                        */
  real_T velocityCommandmotorOn_P7_Size[2];
                           /* Computed Parameter: velocityCommandmotorOn_P7_Size
                            * Referenced by: '<S8>/velocityCommand, motorOn'
                            */
  real_T velocityCommandmotorOn_P7;    /* Expression: ts
                                        * Referenced by: '<S8>/velocityCommand, motorOn'
                                        */
  real_T velocityCommandmotorOn_P8_Size[2];
                           /* Computed Parameter: velocityCommandmotorOn_P8_Size
                            * Referenced by: '<S8>/velocityCommand, motorOn'
                            */
  real_T velocityCommandmotorOn_P8;    /* Expression: pciSlot
                                        * Referenced by: '<S8>/velocityCommand, motorOn'
                                        */
  real_T ADCPhaseCurrentCount_P1_Size[2];
                             /* Computed Parameter: ADCPhaseCurrentCount_P1_Size
                              * Referenced by: '<S8>/ADCPhaseCurrentCount'
                              */
  real_T ADCPhaseCurrentCount_P1;      /* Expression: boardType
                                        * Referenced by: '<S8>/ADCPhaseCurrentCount'
                                        */
  real_T ADCPhaseCurrentCount_P2_Size[2];
                             /* Computed Parameter: ADCPhaseCurrentCount_P2_Size
                              * Referenced by: '<S8>/ADCPhaseCurrentCount'
                              */
  real_T ADCPhaseCurrentCount_P2;      /* Expression: id
                                        * Referenced by: '<S8>/ADCPhaseCurrentCount'
                                        */
  real_T ADCPhaseCurrentCount_P3_Size[2];
                             /* Computed Parameter: ADCPhaseCurrentCount_P3_Size
                              * Referenced by: '<S8>/ADCPhaseCurrentCount'
                              */
  real_T ADCPhaseCurrentCount_P3[2];   /* Expression: chan
                                        * Referenced by: '<S8>/ADCPhaseCurrentCount'
                                        */
  real_T ADCPhaseCurrentCount_P4_Size[2];
                             /* Computed Parameter: ADCPhaseCurrentCount_P4_Size
                              * Referenced by: '<S8>/ADCPhaseCurrentCount'
                              */
  real_T ADCPhaseCurrentCount_P4[2];   /* Expression: initVal
                                        * Referenced by: '<S8>/ADCPhaseCurrentCount'
                                        */
  real_T ADCPhaseCurrentCount_P5_Size[2];
                             /* Computed Parameter: ADCPhaseCurrentCount_P5_Size
                              * Referenced by: '<S8>/ADCPhaseCurrentCount'
                              */
  real_T ADCPhaseCurrentCount_P5[2];   /* Expression: resetVal
                                        * Referenced by: '<S8>/ADCPhaseCurrentCount'
                                        */
  real_T ADCPhaseCurrentCount_P6_Size[2];
                             /* Computed Parameter: ADCPhaseCurrentCount_P6_Size
                              * Referenced by: '<S8>/ADCPhaseCurrentCount'
                              */
  real_T ADCPhaseCurrentCount_P6;      /* Expression: ts
                                        * Referenced by: '<S8>/ADCPhaseCurrentCount'
                                        */
  real_T ADCPhaseCurrentCount_P7_Size[2];
                             /* Computed Parameter: ADCPhaseCurrentCount_P7_Size
                              * Referenced by: '<S8>/ADCPhaseCurrentCount'
                              */
  real_T ADCPhaseCurrentCount_P7;      /* Expression: pciSlot
                                        * Referenced by: '<S8>/ADCPhaseCurrentCount'
                                        */
  real_T ADCPhaseCurrentCount_P8_Size[2];
                             /* Computed Parameter: ADCPhaseCurrentCount_P8_Size
                              * Referenced by: '<S8>/ADCPhaseCurrentCount'
                              */
  real_T ADCPhaseCurrentCount_P8;      /* Expression: span
                                        * Referenced by: '<S8>/ADCPhaseCurrentCount'
                                        */
  real_T QAE2_P1_Size[2];              /* Computed Parameter: QAE2_P1_Size
                                        * Referenced by: '<S8>/QAE (2)'
                                        */
  real_T QAE2_P1;                      /* Expression: boardType
                                        * Referenced by: '<S8>/QAE (2)'
                                        */
  real_T QAE2_P2_Size[2];              /* Computed Parameter: QAE2_P2_Size
                                        * Referenced by: '<S8>/QAE (2)'
                                        */
  real_T QAE2_P2;                      /* Expression: id
                                        * Referenced by: '<S8>/QAE (2)'
                                        */
  real_T QAE2_P3_Size[2];              /* Computed Parameter: QAE2_P3_Size
                                        * Referenced by: '<S8>/QAE (2)'
                                        */
  real_T QAE2_P3;                      /* Expression: channel
                                        * Referenced by: '<S8>/QAE (2)'
                                        */
  real_T QAE2_P4_Size[2];              /* Computed Parameter: QAE2_P4_Size
                                        * Referenced by: '<S8>/QAE (2)'
                                        */
  real_T QAE2_P4;                      /* Expression: fpga_frequency
                                        * Referenced by: '<S8>/QAE (2)'
                                        */
  real_T QAE2_P5_Size[2];              /* Computed Parameter: QAE2_P5_Size
                                        * Referenced by: '<S8>/QAE (2)'
                                        */
  real_T QAE2_P5;                      /* Expression: showOutputPosition
                                        * Referenced by: '<S8>/QAE (2)'
                                        */
  real_T QAE2_P6_Size[2];              /* Computed Parameter: QAE2_P6_Size
                                        * Referenced by: '<S8>/QAE (2)'
                                        */
  real_T QAE2_P6;                      /* Expression: showInputPosition
                                        * Referenced by: '<S8>/QAE (2)'
                                        */
  real_T QAE2_P7_Size[2];              /* Computed Parameter: QAE2_P7_Size
                                        * Referenced by: '<S8>/QAE (2)'
                                        */
  real_T QAE2_P7;                      /* Expression: showInputSpeed
                                        * Referenced by: '<S8>/QAE (2)'
                                        */
  real_T QAE2_P8_Size[2];              /* Computed Parameter: QAE2_P8_Size
                                        * Referenced by: '<S8>/QAE (2)'
                                        */
  real_T QAE2_P8;                      /* Expression: freeWheel
                                        * Referenced by: '<S8>/QAE (2)'
                                        */
  real_T QAE2_P9_Size[2];              /* Computed Parameter: QAE2_P9_Size
                                        * Referenced by: '<S8>/QAE (2)'
                                        */
  real_T QAE2_P9;                      /* Expression: phaseAngle
                                        * Referenced by: '<S8>/QAE (2)'
                                        */
  real_T QAE2_P10_Size[2];             /* Computed Parameter: QAE2_P10_Size
                                        * Referenced by: '<S8>/QAE (2)'
                                        */
  real_T QAE2_P10;                     /* Expression: initPos
                                        * Referenced by: '<S8>/QAE (2)'
                                        */
  real_T QAE2_P11_Size[2];             /* Computed Parameter: QAE2_P11_Size
                                        * Referenced by: '<S8>/QAE (2)'
                                        */
  real_T QAE2_P11;                     /* Expression: initSpeed
                                        * Referenced by: '<S8>/QAE (2)'
                                        */
  real_T QAE2_P12_Size[2];             /* Computed Parameter: QAE2_P12_Size
                                        * Referenced by: '<S8>/QAE (2)'
                                        */
  real_T QAE2_P12;                     /* Expression: numSeg
                                        * Referenced by: '<S8>/QAE (2)'
                                        */
  real_T QAE2_P13_Size[2];             /* Computed Parameter: QAE2_P13_Size
                                        * Referenced by: '<S8>/QAE (2)'
                                        */
  real_T QAE2_P13;                     /* Expression: ts
                                        * Referenced by: '<S8>/QAE (2)'
                                        */
  real_T QAE2_P14_Size[2];             /* Computed Parameter: QAE2_P14_Size
                                        * Referenced by: '<S8>/QAE (2)'
                                        */
  real_T QAE2_P14;                     /* Expression: pciSlot
                                        * Referenced by: '<S8>/QAE (2)'
                                        */
  real_T CoSInterrupt2_P1_Size[2];  /* Computed Parameter: CoSInterrupt2_P1_Size
                                     * Referenced by: '<S8>/CoS Interrupt (2)'
                                     */
  real_T CoSInterrupt2_P1;             /* Expression: boardType
                                        * Referenced by: '<S8>/CoS Interrupt (2)'
                                        */
  real_T CoSInterrupt2_P2_Size[2];  /* Computed Parameter: CoSInterrupt2_P2_Size
                                     * Referenced by: '<S8>/CoS Interrupt (2)'
                                     */
  real_T CoSInterrupt2_P2;             /* Expression: id
                                        * Referenced by: '<S8>/CoS Interrupt (2)'
                                        */
  real_T CoSInterrupt2_P3_Size[2];  /* Computed Parameter: CoSInterrupt2_P3_Size
                                     * Referenced by: '<S8>/CoS Interrupt (2)'
                                     */
  real_T CoSInterrupt2_P3;             /* Expression: channel
                                        * Referenced by: '<S8>/CoS Interrupt (2)'
                                        */
  real_T CoSInterrupt2_P4_Size[2];  /* Computed Parameter: CoSInterrupt2_P4_Size
                                     * Referenced by: '<S8>/CoS Interrupt (2)'
                                     */
  real_T CoSInterrupt2_P4;             /* Expression: debounce
                                        * Referenced by: '<S8>/CoS Interrupt (2)'
                                        */
  real_T CoSInterrupt2_P5_Size[2];  /* Computed Parameter: CoSInterrupt2_P5_Size
                                     * Referenced by: '<S8>/CoS Interrupt (2)'
                                     */
  real_T CoSInterrupt2_P5;             /* Expression: delay
                                        * Referenced by: '<S8>/CoS Interrupt (2)'
                                        */
  real_T CoSInterrupt2_P6_Size[2];  /* Computed Parameter: CoSInterrupt2_P6_Size
                                     * Referenced by: '<S8>/CoS Interrupt (2)'
                                     */
  real_T CoSInterrupt2_P6;             /* Expression: mode
                                        * Referenced by: '<S8>/CoS Interrupt (2)'
                                        */
  real_T CoSInterrupt2_P7_Size[2];  /* Computed Parameter: CoSInterrupt2_P7_Size
                                     * Referenced by: '<S8>/CoS Interrupt (2)'
                                     */
  real_T CoSInterrupt2_P7;             /* Expression: multiplication
                                        * Referenced by: '<S8>/CoS Interrupt (2)'
                                        */
  real_T CoSInterrupt2_P8_Size[2];  /* Computed Parameter: CoSInterrupt2_P8_Size
                                     * Referenced by: '<S8>/CoS Interrupt (2)'
                                     */
  real_T CoSInterrupt2_P8;             /* Expression: gap
                                        * Referenced by: '<S8>/CoS Interrupt (2)'
                                        */
  real_T CoSInterrupt2_P9_Size[2];  /* Computed Parameter: CoSInterrupt2_P9_Size
                                     * Referenced by: '<S8>/CoS Interrupt (2)'
                                     */
  real_T CoSInterrupt2_P9;             /* Expression: division
                                        * Referenced by: '<S8>/CoS Interrupt (2)'
                                        */
  real_T CoSInterrupt2_P10_Size[2];/* Computed Parameter: CoSInterrupt2_P10_Size
                                    * Referenced by: '<S8>/CoS Interrupt (2)'
                                    */
  real_T CoSInterrupt2_P10;            /* Expression: timestamp
                                        * Referenced by: '<S8>/CoS Interrupt (2)'
                                        */
  real_T CoSInterrupt2_P11_Size[2];/* Computed Parameter: CoSInterrupt2_P11_Size
                                    * Referenced by: '<S8>/CoS Interrupt (2)'
                                    */
  real_T CoSInterrupt2_P11;            /* Expression: flag
                                        * Referenced by: '<S8>/CoS Interrupt (2)'
                                        */
  real_T CoSInterrupt2_P12_Size[2];/* Computed Parameter: CoSInterrupt2_P12_Size
                                    * Referenced by: '<S8>/CoS Interrupt (2)'
                                    */
  real_T CoSInterrupt2_P12;            /* Expression: pciSlot
                                        * Referenced by: '<S8>/CoS Interrupt (2)'
                                        */
  real_T CoSInterrupt2_P13_Size[2];/* Computed Parameter: CoSInterrupt2_P13_Size
                                    * Referenced by: '<S8>/CoS Interrupt (2)'
                                    */
  real_T CoSInterrupt2_P13;            /* Expression: ts
                                        * Referenced by: '<S8>/CoS Interrupt (2)'
                                        */
  real_T CoSInterrupt2_P14_Size[2];/* Computed Parameter: CoSInterrupt2_P14_Size
                                    * Referenced by: '<S8>/CoS Interrupt (2)'
                                    */
  real_T CoSInterrupt2_P14;            /* Expression: fpga_frequency
                                        * Referenced by: '<S8>/CoS Interrupt (2)'
                                        */
  real_T CoSInterrupt2_P15_Size[2];/* Computed Parameter: CoSInterrupt2_P15_Size
                                    * Referenced by: '<S8>/CoS Interrupt (2)'
                                    */
  real_T CoSInterrupt2_P15;            /* Expression: event
                                        * Referenced by: '<S8>/CoS Interrupt (2)'
                                        */
  real_T CoSInterrupt2_P16_Size[2];/* Computed Parameter: CoSInterrupt2_P16_Size
                                    * Referenced by: '<S8>/CoS Interrupt (2)'
                                    */
  real_T CoSInterrupt2_P16;            /* Expression: int_freq
                                        * Referenced by: '<S8>/CoS Interrupt (2)'
                                        */
  real32_T VelocityCommand_Value;   /* Computed Parameter: VelocityCommand_Value
                                     * Referenced by: '<S6>/Velocity Command'
                                     */
  boolean_T ConnectCurrentSensor_Value;
                               /* Computed Parameter: ConnectCurrentSensor_Value
                                * Referenced by: '<S6>/Connect Current Sensor'
                                */
  boolean_T EngageMotorBrake_Value;/* Computed Parameter: EngageMotorBrake_Value
                                    * Referenced by: '<S6>/Engage Motor Brake'
                                    */
  boolean_T MotorStatus_Value;         /* Computed Parameter: MotorStatus_Value
                                        * Referenced by: '<S6>/Motor Status'
                                        */
  uint8_T CommandType_Value;           /* Computed Parameter: CommandType_Value
                                        * Referenced by: '<S6>/Command Type'
                                        */
  uint8_T uDLookupTable_tableData[4];
                                  /* Computed Parameter: uDLookupTable_tableData
                                   * Referenced by: '<S8>/1-D Lookup Table'
                                   */
} FieldOrientedController_HIL_cal_type;

/* Storage class 'PageSwitching' */

/* Storage class 'PageSwitching' */
extern FieldOrientedController_HIL_cal_type FieldOrientedController_HIL_cal_impl;
extern FieldOrientedController_HIL_cal_type *FieldOrientedController_HIL_cal;

#endif                       /* RTW_HEADER_FieldOrientedController_HIL_cal_h_ */
