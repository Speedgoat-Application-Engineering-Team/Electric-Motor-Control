/*
 * FieldOrientedController_RCP_types.h
 *
 * Sponsored Third Party Support License -- for use only to support
 * products interfaced to MathWorks software under terms specified in your
 * company's restricted use license agreement.
 *
 * Code generation for model "FieldOrientedController_RCP".
 *
 * Model version              : 2.10
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C++ source code generated on : Wed Mar  3 13:46:27 2021
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_FieldOrientedController_RCP_types_h_
#define RTW_HEADER_FieldOrientedController_RCP_types_h_
#include "rtwtypes.h"

/* Model Code Variants */
#ifndef DEFINED_TYPEDEF_FOR_commandTypeEnum_
#define DEFINED_TYPEDEF_FOR_commandTypeEnum_

typedef enum {
  commandTypeEnum_Error = 0,           /* Default value */
  commandTypeEnum_OpenLoop,
  commandTypeEnum_CalibrateEncoder,
  commandTypeEnum_ClosedLoop
} commandTypeEnum;

#endif

#ifndef DEFINED_TYPEDEF_FOR_motorCommands_
#define DEFINED_TYPEDEF_FOR_motorCommands_

typedef struct {
  boolean_T enInverter;
  uint16_T pwmCompare[3];
} motorCommands;

#endif

#ifndef DEFINED_TYPEDEF_FOR_modeSchedulerEnum_
#define DEFINED_TYPEDEF_FOR_modeSchedulerEnum_

typedef enum {
  None = 0,                            /* Default value */
  Stand_By,
  Open_Loop_Command,
  Find_Encoder_Index,
  Calibrate_Encoder_Offset,
  Closed_Loop,
  Error,
  Disabled
} modeSchedulerEnum;

#endif

#ifndef DEFINED_TYPEDEF_FOR_controllerInfo_
#define DEFINED_TYPEDEF_FOR_controllerInfo_

typedef struct {
  modeSchedulerEnum mode;
  real32_T rotorVelocity;
} controllerInfo;

#endif

#ifndef DEFINED_TYPEDEF_FOR_userInputs_
#define DEFINED_TYPEDEF_FOR_userInputs_

typedef struct {
  real_T torqueLoad;
  boolean_T enCurrentSensor;
  boolean_T motorOn;
  commandTypeEnum commandType;
  real32_T velocityCommand;
} userInputs;

#endif

#ifndef DEFINED_TYPEDEF_FOR_controllerFeedback_
#define DEFINED_TYPEDEF_FOR_controllerFeedback_

typedef struct {
  real32_T rotorVelocity;
  real32_T transducerVoltage[2];
  boolean_T encoderIndexFound;
  uint16_T encoderCount;
} controllerFeedback;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_n06VD1KecF6DrEY2WIEKoD_
#define DEFINED_TYPEDEF_FOR_struct_n06VD1KecF6DrEY2WIEKoD_

typedef struct {
  real_T TimePerCount;
  real_T Period;
  real_T CounterMax;
  real_T CountPerPeriod;
  real_T AdcTriggerOnTime;
  real_T AdcTriggerOnCount;
  real_T CountAtZeroVolt;
  real_T CountPerVolt;
} struct_n06VD1KecF6DrEY2WIEKoD;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_FIKxWID557Jh6y3t9kAuqF_
#define DEFINED_TYPEDEF_FOR_struct_FIKxWID557Jh6y3t9kAuqF_

typedef struct {
  real_T CurrentControl;
  real_T VelocityControl;
  real_T OpenLoopVelocityControl;
  real_T OverCurrentDetector;
  real_T EncoderPosition;
  real_T EncoderCalibration;
} struct_FIKxWID557Jh6y3t9kAuqF;

#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_FieldOrientedController_RCP_T
  RT_MODEL_FieldOrientedController_RCP_T;

#endif                     /* RTW_HEADER_FieldOrientedController_RCP_types_h_ */
