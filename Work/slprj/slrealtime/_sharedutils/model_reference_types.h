/*
 * model_reference_types.h
 *
 * Sponsored Third Party Support License -- for use only to support
 * products interfaced to MathWorks software under terms specified in your
 * company's restricted use license agreement.
 *
 * Code generation for model "PMSM_Plant_Model".
 *
 * Model version              : 2.0
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C++ source code generated on : Wed Mar  3 09:40:20 2021
 */

#ifndef MODEL_REFERENCE_TYPES_H
#define MODEL_REFERENCE_TYPES_H
#include "rtwtypes.h"
#ifndef MODEL_REFERENCE_TYPES
#define MODEL_REFERENCE_TYPES

/*===========================================================================*
 * Model reference type definitions                                          *
 *===========================================================================*/
/*
 * This structure is used by model reference to
 * communicate timing information through the hierarchy.
 */
typedef struct _rtTimingBridge_tag rtTimingBridge;
struct _rtTimingBridge_tag {
  uint32_T nTasks;
  uint32_T** clockTick;
  uint32_T** clockTickH;
  uint32_T* taskCounter;
  real_T** taskTime;
  boolean_T** rateTransition;
  boolean_T *firstInitCond;
};

/*
 * This structure is used by model reference to
 * communicate variable discrete rate timing information through the hierarchy.
 */
typedef struct _rtCtrlRateMdlRefTiming_tag rtCtrlRateMdlRefTiming;
struct _rtCtrlRateMdlRefTiming_tag {
  uint32_T firstCtrlRateTID;
  uint32_T* numTicksToNextHitForCtrlRate;
};

#endif                                 /* MODEL_REFERENCE_TYPES */
#endif                                 /* MODEL_REFERENCE_TYPES_H */
