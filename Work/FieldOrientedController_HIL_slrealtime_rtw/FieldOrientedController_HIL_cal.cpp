#include "FieldOrientedController_HIL.h"

/* Storage class 'PageSwitching' */

/* Storage class 'PageSwitching' */
FieldOrientedController_HIL_cal_type FieldOrientedController_HIL_cal_impl = {
  /* Mask Parameter: OverloadOptions_maxOverload
   * Referenced by: '<S11>/Overload Options Core'
   */
  10U,

  /* Mask Parameter: OverloadOptions_startupDur
   * Referenced by: '<S11>/Overload Options Core'
   */
  10U,

  /* Expression: 0
   * Referenced by: '<S6>/Torque Load'
   */
  0.0,

  /* Computed Parameter: Digitalinput_P1_Size
   * Referenced by: '<S7>/Digital input'
   */
  { 1.0, 1.0 },

  /* Expression: boardType
   * Referenced by: '<S7>/Digital input'
   */
  39750.0,

  /* Computed Parameter: Digitalinput_P2_Size
   * Referenced by: '<S7>/Digital input'
   */
  { 1.0, 1.0 },

  /* Expression: id
   * Referenced by: '<S7>/Digital input'
   */
  1.0,

  /* Computed Parameter: Digitalinput_P3_Size
   * Referenced by: '<S7>/Digital input'
   */
  { 1.0, 1.0 },

  /* Expression: chan
   * Referenced by: '<S7>/Digital input'
   */
  2.0,

  /* Computed Parameter: Digitalinput_P4_Size
   * Referenced by: '<S7>/Digital input'
   */
  { 1.0, 1.0 },

  /* Expression: vectorizeOutput
   * Referenced by: '<S7>/Digital input'
   */
  0.0,

  /* Computed Parameter: Digitalinput_P5_Size
   * Referenced by: '<S7>/Digital input'
   */
  { 1.0, 1.0 },

  /* Expression: ts
   * Referenced by: '<S7>/Digital input'
   */
  0.00025,

  /* Computed Parameter: Digitalinput_P6_Size
   * Referenced by: '<S7>/Digital input'
   */
  { 1.0, 1.0 },

  /* Expression: pciSlot
   * Referenced by: '<S7>/Digital input'
   */
  -1.0,

  /* Computed Parameter: PWMCapture_P1_Size
   * Referenced by: '<S7>/PWM Capture'
   */
  { 1.0, 1.0 },

  /* Expression: boardType
   * Referenced by: '<S7>/PWM Capture'
   */
  39750.0,

  /* Computed Parameter: PWMCapture_P2_Size
   * Referenced by: '<S7>/PWM Capture'
   */
  { 1.0, 1.0 },

  /* Expression: id
   * Referenced by: '<S7>/PWM Capture'
   */
  1.0,

  /* Computed Parameter: PWMCapture_P3_Size
   * Referenced by: '<S7>/PWM Capture'
   */
  { 1.0, 3.0 },

  /* Expression: chan
   * Referenced by: '<S7>/PWM Capture'
   */
  { 1.0, 2.0, 3.0 },

  /* Computed Parameter: PWMCapture_P4_Size
   * Referenced by: '<S7>/PWM Capture'
   */
  { 1.0, 1.0 },

  /* Expression: showHighDuration
   * Referenced by: '<S7>/PWM Capture'
   */
  0.0,

  /* Computed Parameter: PWMCapture_P5_Size
   * Referenced by: '<S7>/PWM Capture'
   */
  { 1.0, 1.0 },

  /* Expression: showLowDuration
   * Referenced by: '<S7>/PWM Capture'
   */
  0.0,

  /* Computed Parameter: PWMCapture_P6_Size
   * Referenced by: '<S7>/PWM Capture'
   */
  { 1.0, 1.0 },

  /* Expression: showDC16
   * Referenced by: '<S7>/PWM Capture'
   */
  1.0,

  /* Computed Parameter: PWMCapture_P7_Size
   * Referenced by: '<S7>/PWM Capture'
   */
  { 1.0, 1.0 },

  /* Expression: showDC8
   * Referenced by: '<S7>/PWM Capture'
   */
  0.0,

  /* Computed Parameter: PWMCapture_P8_Size
   * Referenced by: '<S7>/PWM Capture'
   */
  { 1.0, 1.0 },

  /* Expression: showTOn
   * Referenced by: '<S7>/PWM Capture'
   */
  0.0,

  /* Computed Parameter: PWMCapture_P9_Size
   * Referenced by: '<S7>/PWM Capture'
   */
  { 1.0, 1.0 },

  /* Expression: showTOff
   * Referenced by: '<S7>/PWM Capture'
   */
  0.0,

  /* Computed Parameter: PWMCapture_P10_Size
   * Referenced by: '<S7>/PWM Capture'
   */
  { 1.0, 1.0 },

  /* Expression: showPeriod
   * Referenced by: '<S7>/PWM Capture'
   */
  0.0,

  /* Computed Parameter: PWMCapture_P11_Size
   * Referenced by: '<S7>/PWM Capture'
   */
  { 1.0, 1.0 },

  /* Expression: showValidData
   * Referenced by: '<S7>/PWM Capture'
   */
  0.0,

  /* Computed Parameter: PWMCapture_P12_Size
   * Referenced by: '<S7>/PWM Capture'
   */
  { 1.0, 3.0 },

  /* Expression: captureMode
   * Referenced by: '<S7>/PWM Capture'
   */
  { 1.0, 1.0, 1.0 },

  /* Computed Parameter: PWMCapture_P13_Size
   * Referenced by: '<S7>/PWM Capture'
   */
  { 1.0, 3.0 },

  /* Expression: captureTimeout
   * Referenced by: '<S7>/PWM Capture'
   */
  { 0.0, 0.0, 0.0 },

  /* Computed Parameter: PWMCapture_P14_Size
   * Referenced by: '<S7>/PWM Capture'
   */
  { 1.0, 1.0 },

  /* Expression: ts
   * Referenced by: '<S7>/PWM Capture'
   */
  0.00025,

  /* Computed Parameter: PWMCapture_P15_Size
   * Referenced by: '<S7>/PWM Capture'
   */
  { 1.0, 1.0 },

  /* Expression: pciSlot
   * Referenced by: '<S7>/PWM Capture'
   */
  -1.0,

  /* Computed Parameter: velocityCommandmotorOn_P1_Size
   * Referenced by: '<S8>/velocityCommand, motorOn'
   */
  { 1.0, 1.0 },

  /* Expression: boardType
   * Referenced by: '<S8>/velocityCommand, motorOn'
   */
  39750.0,

  /* Computed Parameter: velocityCommandmotorOn_P2_Size
   * Referenced by: '<S8>/velocityCommand, motorOn'
   */
  { 1.0, 1.0 },

  /* Expression: id
   * Referenced by: '<S8>/velocityCommand, motorOn'
   */
  1.0,

  /* Computed Parameter: velocityCommandmotorOn_P3_Size
   * Referenced by: '<S8>/velocityCommand, motorOn'
   */
  { 1.0, 3.0 },

  /* Expression: chan
   * Referenced by: '<S8>/velocityCommand, motorOn'
   */
  { 3.0, 4.0, 1.0 },

  /* Computed Parameter: velocityCommandmotorOn_P4_Size
   * Referenced by: '<S8>/velocityCommand, motorOn'
   */
  { 1.0, 1.0 },

  /* Expression: vectorizeInput
   * Referenced by: '<S8>/velocityCommand, motorOn'
   */
  0.0,

  /* Computed Parameter: velocityCommandmotorOn_P5_Size
   * Referenced by: '<S8>/velocityCommand, motorOn'
   */
  { 1.0, 3.0 },

  /* Expression: reset
   * Referenced by: '<S8>/velocityCommand, motorOn'
   */
  { 1.0, 1.0, 1.0 },

  /* Computed Parameter: velocityCommandmotorOn_P6_Size
   * Referenced by: '<S8>/velocityCommand, motorOn'
   */
  { 1.0, 3.0 },

  /* Expression: init
   * Referenced by: '<S8>/velocityCommand, motorOn'
   */
  { 0.0, 0.0, 0.0 },

  /* Computed Parameter: velocityCommandmotorOn_P7_Size
   * Referenced by: '<S8>/velocityCommand, motorOn'
   */
  { 1.0, 1.0 },

  /* Expression: ts
   * Referenced by: '<S8>/velocityCommand, motorOn'
   */
  -1.0,

  /* Computed Parameter: velocityCommandmotorOn_P8_Size
   * Referenced by: '<S8>/velocityCommand, motorOn'
   */
  { 1.0, 1.0 },

  /* Expression: pciSlot
   * Referenced by: '<S8>/velocityCommand, motorOn'
   */
  -1.0,

  /* Computed Parameter: ADCPhaseCurrentCount_P1_Size
   * Referenced by: '<S8>/ADCPhaseCurrentCount'
   */
  { 1.0, 1.0 },

  /* Expression: boardType
   * Referenced by: '<S8>/ADCPhaseCurrentCount'
   */
  39750.0,

  /* Computed Parameter: ADCPhaseCurrentCount_P2_Size
   * Referenced by: '<S8>/ADCPhaseCurrentCount'
   */
  { 1.0, 1.0 },

  /* Expression: id
   * Referenced by: '<S8>/ADCPhaseCurrentCount'
   */
  1.0,

  /* Computed Parameter: ADCPhaseCurrentCount_P3_Size
   * Referenced by: '<S8>/ADCPhaseCurrentCount'
   */
  { 1.0, 2.0 },

  /* Expression: chan
   * Referenced by: '<S8>/ADCPhaseCurrentCount'
   */
  { 1.0, 2.0 },

  /* Computed Parameter: ADCPhaseCurrentCount_P4_Size
   * Referenced by: '<S8>/ADCPhaseCurrentCount'
   */
  { 1.0, 2.0 },

  /* Expression: initVal
   * Referenced by: '<S8>/ADCPhaseCurrentCount'
   */
  { 0.0, 0.0 },

  /* Computed Parameter: ADCPhaseCurrentCount_P5_Size
   * Referenced by: '<S8>/ADCPhaseCurrentCount'
   */
  { 1.0, 2.0 },

  /* Expression: resetVal
   * Referenced by: '<S8>/ADCPhaseCurrentCount'
   */
  { 1.0, 1.0 },

  /* Computed Parameter: ADCPhaseCurrentCount_P6_Size
   * Referenced by: '<S8>/ADCPhaseCurrentCount'
   */
  { 1.0, 1.0 },

  /* Expression: ts
   * Referenced by: '<S8>/ADCPhaseCurrentCount'
   */
  -1.0,

  /* Computed Parameter: ADCPhaseCurrentCount_P7_Size
   * Referenced by: '<S8>/ADCPhaseCurrentCount'
   */
  { 1.0, 1.0 },

  /* Expression: pciSlot
   * Referenced by: '<S8>/ADCPhaseCurrentCount'
   */
  -1.0,

  /* Computed Parameter: ADCPhaseCurrentCount_P8_Size
   * Referenced by: '<S8>/ADCPhaseCurrentCount'
   */
  { 1.0, 1.0 },

  /* Expression: span
   * Referenced by: '<S8>/ADCPhaseCurrentCount'
   */
  2.0,

  /* Computed Parameter: QAE2_P1_Size
   * Referenced by: '<S8>/QAE (2)'
   */
  { 1.0, 1.0 },

  /* Expression: boardType
   * Referenced by: '<S8>/QAE (2)'
   */
  39750.0,

  /* Computed Parameter: QAE2_P2_Size
   * Referenced by: '<S8>/QAE (2)'
   */
  { 1.0, 1.0 },

  /* Expression: id
   * Referenced by: '<S8>/QAE (2)'
   */
  1.0,

  /* Computed Parameter: QAE2_P3_Size
   * Referenced by: '<S8>/QAE (2)'
   */
  { 1.0, 1.0 },

  /* Expression: channel
   * Referenced by: '<S8>/QAE (2)'
   */
  1.0,

  /* Computed Parameter: QAE2_P4_Size
   * Referenced by: '<S8>/QAE (2)'
   */
  { 1.0, 1.0 },

  /* Expression: fpga_frequency
   * Referenced by: '<S8>/QAE (2)'
   */
  7.5E+7,

  /* Computed Parameter: QAE2_P5_Size
   * Referenced by: '<S8>/QAE (2)'
   */
  { 1.0, 1.0 },

  /* Expression: showOutputPosition
   * Referenced by: '<S8>/QAE (2)'
   */
  0.0,

  /* Computed Parameter: QAE2_P6_Size
   * Referenced by: '<S8>/QAE (2)'
   */
  { 1.0, 1.0 },

  /* Expression: showInputPosition
   * Referenced by: '<S8>/QAE (2)'
   */
  0.0,

  /* Computed Parameter: QAE2_P7_Size
   * Referenced by: '<S8>/QAE (2)'
   */
  { 1.0, 1.0 },

  /* Expression: showInputSpeed
   * Referenced by: '<S8>/QAE (2)'
   */
  1.0,

  /* Computed Parameter: QAE2_P8_Size
   * Referenced by: '<S8>/QAE (2)'
   */
  { 1.0, 1.0 },

  /* Expression: freeWheel
   * Referenced by: '<S8>/QAE (2)'
   */
  1.0,

  /* Computed Parameter: QAE2_P9_Size
   * Referenced by: '<S8>/QAE (2)'
   */
  { 1.0, 1.0 },

  /* Expression: phaseAngle
   * Referenced by: '<S8>/QAE (2)'
   */
  90.0,

  /* Computed Parameter: QAE2_P10_Size
   * Referenced by: '<S8>/QAE (2)'
   */
  { 1.0, 1.0 },

  /* Expression: initPos
   * Referenced by: '<S8>/QAE (2)'
   */
  0.0,

  /* Computed Parameter: QAE2_P11_Size
   * Referenced by: '<S8>/QAE (2)'
   */
  { 1.0, 1.0 },

  /* Expression: initSpeed
   * Referenced by: '<S8>/QAE (2)'
   */
  0.0,

  /* Computed Parameter: QAE2_P12_Size
   * Referenced by: '<S8>/QAE (2)'
   */
  { 1.0, 1.0 },

  /* Expression: numSeg
   * Referenced by: '<S8>/QAE (2)'
   */
  2048.0,

  /* Computed Parameter: QAE2_P13_Size
   * Referenced by: '<S8>/QAE (2)'
   */
  { 1.0, 1.0 },

  /* Expression: ts
   * Referenced by: '<S8>/QAE (2)'
   */
  -1.0,

  /* Computed Parameter: QAE2_P14_Size
   * Referenced by: '<S8>/QAE (2)'
   */
  { 1.0, 1.0 },

  /* Expression: pciSlot
   * Referenced by: '<S8>/QAE (2)'
   */
  -1.0,

  /* Computed Parameter: CoSInterrupt2_P1_Size
   * Referenced by: '<S8>/CoS Interrupt (2)'
   */
  { 1.0, 1.0 },

  /* Expression: boardType
   * Referenced by: '<S8>/CoS Interrupt (2)'
   */
  39750.0,

  /* Computed Parameter: CoSInterrupt2_P2_Size
   * Referenced by: '<S8>/CoS Interrupt (2)'
   */
  { 1.0, 1.0 },

  /* Expression: id
   * Referenced by: '<S8>/CoS Interrupt (2)'
   */
  1.0,

  /* Computed Parameter: CoSInterrupt2_P3_Size
   * Referenced by: '<S8>/CoS Interrupt (2)'
   */
  { 1.0, 1.0 },

  /* Expression: channel
   * Referenced by: '<S8>/CoS Interrupt (2)'
   */
  1.0,

  /* Computed Parameter: CoSInterrupt2_P4_Size
   * Referenced by: '<S8>/CoS Interrupt (2)'
   */
  { 1.0, 1.0 },

  /* Expression: debounce
   * Referenced by: '<S8>/CoS Interrupt (2)'
   */
  0.0,

  /* Computed Parameter: CoSInterrupt2_P5_Size
   * Referenced by: '<S8>/CoS Interrupt (2)'
   */
  { 1.0, 1.0 },

  /* Expression: delay
   * Referenced by: '<S8>/CoS Interrupt (2)'
   */
  0.0,

  /* Computed Parameter: CoSInterrupt2_P6_Size
   * Referenced by: '<S8>/CoS Interrupt (2)'
   */
  { 1.0, 1.0 },

  /* Expression: mode
   * Referenced by: '<S8>/CoS Interrupt (2)'
   */
  3.0,

  /* Computed Parameter: CoSInterrupt2_P7_Size
   * Referenced by: '<S8>/CoS Interrupt (2)'
   */
  { 1.0, 1.0 },

  /* Expression: multiplication
   * Referenced by: '<S8>/CoS Interrupt (2)'
   */
  0.0,

  /* Computed Parameter: CoSInterrupt2_P8_Size
   * Referenced by: '<S8>/CoS Interrupt (2)'
   */
  { 1.0, 1.0 },

  /* Expression: gap
   * Referenced by: '<S8>/CoS Interrupt (2)'
   */
  0.001,

  /* Computed Parameter: CoSInterrupt2_P9_Size
   * Referenced by: '<S8>/CoS Interrupt (2)'
   */
  { 1.0, 1.0 },

  /* Expression: division
   * Referenced by: '<S8>/CoS Interrupt (2)'
   */
  0.0,

  /* Computed Parameter: CoSInterrupt2_P10_Size
   * Referenced by: '<S8>/CoS Interrupt (2)'
   */
  { 1.0, 1.0 },

  /* Expression: timestamp
   * Referenced by: '<S8>/CoS Interrupt (2)'
   */
  0.0,

  /* Computed Parameter: CoSInterrupt2_P11_Size
   * Referenced by: '<S8>/CoS Interrupt (2)'
   */
  { 1.0, 1.0 },

  /* Expression: flag
   * Referenced by: '<S8>/CoS Interrupt (2)'
   */
  0.0,

  /* Computed Parameter: CoSInterrupt2_P12_Size
   * Referenced by: '<S8>/CoS Interrupt (2)'
   */
  { 1.0, 1.0 },

  /* Expression: pciSlot
   * Referenced by: '<S8>/CoS Interrupt (2)'
   */
  -1.0,

  /* Computed Parameter: CoSInterrupt2_P13_Size
   * Referenced by: '<S8>/CoS Interrupt (2)'
   */
  { 1.0, 1.0 },

  /* Expression: ts
   * Referenced by: '<S8>/CoS Interrupt (2)'
   */
  -1.0,

  /* Computed Parameter: CoSInterrupt2_P14_Size
   * Referenced by: '<S8>/CoS Interrupt (2)'
   */
  { 1.0, 1.0 },

  /* Expression: fpga_frequency
   * Referenced by: '<S8>/CoS Interrupt (2)'
   */
  7.5E+7,

  /* Computed Parameter: CoSInterrupt2_P15_Size
   * Referenced by: '<S8>/CoS Interrupt (2)'
   */
  { 1.0, 1.0 },

  /* Expression: event
   * Referenced by: '<S8>/CoS Interrupt (2)'
   */
  0.0,

  /* Computed Parameter: CoSInterrupt2_P16_Size
   * Referenced by: '<S8>/CoS Interrupt (2)'
   */
  { 1.0, 1.0 },

  /* Expression: int_freq
   * Referenced by: '<S8>/CoS Interrupt (2)'
   */
  4000.0,

  /* Computed Parameter: VelocityCommand_Value
   * Referenced by: '<S6>/Velocity Command'
   */
  100.0F,

  /* Computed Parameter: ConnectCurrentSensor_Value
   * Referenced by: '<S6>/Connect Current Sensor'
   */
  1,

  /* Computed Parameter: EngageMotorBrake_Value
   * Referenced by: '<S6>/Engage Motor Brake'
   */
  0,

  /* Computed Parameter: MotorStatus_Value
   * Referenced by: '<S6>/Motor Status'
   */
  1,

  /* Computed Parameter: CommandType_Value
   * Referenced by: '<S6>/Command Type'
   */
  3U,

  /* Computed Parameter: uDLookupTable_tableData
   * Referenced by: '<S8>/1-D Lookup Table'
   */
  { 0U, 1U, 2U, 3U }
};

FieldOrientedController_HIL_cal_type *FieldOrientedController_HIL_cal =
  &FieldOrientedController_HIL_cal_impl;
