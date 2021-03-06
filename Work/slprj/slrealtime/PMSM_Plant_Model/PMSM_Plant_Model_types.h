/*
 * PMSM_Plant_Model_types.h
 *
 * Sponsored Third Party Support License -- for use only to support
 * products interfaced to MathWorks software under terms specified in your
 * company's restricted use license agreement.
 *
 * Code generation for model "PMSM_Plant_Model".
 *
 * Model version              : 2.0
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C++ source code generated on : Wed Mar  3 11:45:06 2021
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_PMSM_Plant_Model_types_h_
#define RTW_HEADER_PMSM_Plant_Model_types_h_
#include "rtwtypes.h"

/* Model Code Variants */
#ifndef DEFINED_TYPEDEF_FOR_physicalInputs_
#define DEFINED_TYPEDEF_FOR_physicalInputs_

typedef struct {
  real_T torqueLoad;
  boolean_T connectCurrentSensor;
  boolean_T motorBrake;
} physicalInputs;

#endif

#ifndef DEFINED_TYPEDEF_FOR_motorCommands_
#define DEFINED_TYPEDEF_FOR_motorCommands_

typedef struct {
  boolean_T inverterEnable;
  uint16_T pwmCompare[3];
} motorCommands;

#endif

#ifndef DEFINED_TYPEDEF_FOR_controllerFeedback_
#define DEFINED_TYPEDEF_FOR_controllerFeedback_

typedef struct {
  real32_T transducerVoltage[2];
  uint16_T encoderIndexFound;
  uint16_T encoderCount;
} controllerFeedback;

#endif

#ifndef DEFINED_TYPEDEF_FOR_motorMeasurements_
#define DEFINED_TYPEDEF_FOR_motorMeasurements_

typedef struct {
  real_T phaseCurrentA;
  real_T phaseCurrentB;
  real_T phaseCurrentC;
  real_T directCurrent;
  real_T quadratureCurrent;
  real_T electromagneticTorque;
  real_T rotorPosition;
  real_T electricalPosition;
  real_T rotorVelocity;
  real_T electricalVelocity;
} motorMeasurements;

#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_PMSM_Plant_Model_T RT_MODEL_PMSM_Plant_Model_T;

#endif                                /* RTW_HEADER_PMSM_Plant_Model_types_h_ */
