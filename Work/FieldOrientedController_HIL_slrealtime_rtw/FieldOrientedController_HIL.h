/*
 * FieldOrientedController_HIL.h
 *
 * Sponsored Third Party Support License -- for use only to support
 * products interfaced to MathWorks software under terms specified in your
 * company's restricted use license agreement.
 *
 * Code generation for model "FieldOrientedController_HIL".
 *
 * Model version              : 2.17
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C++ source code generated on : Wed Mar  3 13:16:12 2021
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_FieldOrientedController_HIL_h_
#define RTW_HEADER_FieldOrientedController_HIL_h_
#include <stddef.h>
#include <cstring>
#include <cmath>
#include <logsrv.h>
#include <chrono>
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "Clock.hpp"
#include "ModelInfo.hpp"
#include "StartCallbackAPI.h"
#include "sg_fpga_io30x_setup_util.h"
#include "sg_fpga_io31x_io32x_setup_util.h"
#include "sg_fpga_io33x_setup_util.h"
#include "sg_fpga_io39x_setup_util.h"
#include "sg_common.h"
#include "sg_printf.h"
#include "sys/siginfo.h"
#include "sys/neutrino.h"
#include "Logger.hpp"
#include "FieldOrientedController_HIL_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "model_reference_types.h"

/* Child system includes */
#define PMSM_Plant_Model_MDLREF_HIDE_CHILD_
#include "PMSM_Plant_Model.h"
#include "FieldOrientedController_HIL_cal.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
#define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
#define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetSampleHitArray
#define rtmGetSampleHitArray(rtm)      ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmGetStepSize
#define rtmGetStepSize(rtm)            ((rtm)->Timing.stepSize)
#endif

#ifndef rtmGetZCCacheNeedsReset
#define rtmGetZCCacheNeedsReset(rtm)   ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
#define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
#define rtmGet_TimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetErrorStatusPointer
#define rtmGetErrorStatusPointer(rtm)  ((const char_T **)(&((rtm)->errorStatus)))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

#ifndef rtmGetTStart
#define rtmGetTStart(rtm)              ((rtm)->Timing.tStart)
#endif

#ifndef rtmGetTimeOfLastOutput
#define rtmGetTimeOfLastOutput(rtm)    ((rtm)->Timing.timeOfLastOutput)
#endif

/* Block signals (default storage) */
typedef struct {
  real_T APmode;                       /* '<Root>/AP mode' */
  real_T TorqueLoad;                   /* '<S6>/Torque Load' */
  real_T Digitalinput;                 /* '<S7>/Digital input' */
  real_T PWMDuty[3];                   /* '<S7>/PWM Capture' */
  real_T phaseCurrentA;                /* '<Root>/PMSMPlantModel' */
  real_T phaseCurrentB;                /* '<Root>/PMSMPlantModel' */
  real_T phaseCurrentC;                /* '<Root>/PMSMPlantModel' */
  real_T directCurrent;                /* '<Root>/PMSMPlantModel' */
  real_T quadratureCurrent;            /* '<Root>/PMSMPlantModel' */
  real_T electromagneticTorque;        /* '<Root>/PMSMPlantModel' */
  real_T rotorPosition;                /* '<Root>/PMSMPlantModel' */
  real_T electricalPosition;           /* '<Root>/PMSMPlantModel' */
  real_T rotorVelocity;                /* '<Root>/PMSMPlantModel' */
  real_T electricalVelocity;           /* '<Root>/PMSMPlantModel' */
  real_T rotorVelocity_l;              /* '<Root>/AP rotorVelocity' */
  real_T CastToDouble;                 /* '<S8>/Cast To Double' */
  real_T CastToDouble1;                /* '<S8>/Cast To Double1' */
  real_T CastToDouble2;                /* '<S8>/Cast To Double2' */
  real_T CastToDouble3[2];             /* '<S8>/Cast To Double3' */
  real_T UnitConversion;               /* '<S8>/Unit Conversion' */
  uint32_T OverloadOptionsCore;        /* '<S11>/Overload Options Core' */
  real32_T transducerVoltage[2];       /* '<Root>/PMSMPlantModel' */
  real32_T VelocityCommand;            /* '<S6>/Velocity Command' */
  real32_T velocityCommand;            /* '<S8>/Signal Copy' */
  commandTypeEnum DataTypeConversion;  /* '<S6>/Data Type Conversion' */
  uint16_T DutyCycle2PWMCompare[3];    /* '<S7>/DutyCycle2PWMCompare' */
  uint16_T encoderIndexFound;          /* '<Root>/PMSMPlantModel' */
  uint16_T encoderCount;               /* '<Root>/PMSMPlantModel' */
  uint8_T uDLookupTable;               /* '<S8>/1-D Lookup Table' */
  uint8_T ExtractDesiredBits;          /* '<S9>/Extract Desired Bits' */
  uint8_T ModifyScalingOnly;           /* '<S9>/Modify Scaling Only' */
  uint8_T ExtractDesiredBits_d;        /* '<S10>/Extract Desired Bits' */
  uint8_T ModifyScalingOnly_c;         /* '<S10>/Modify Scaling Only' */
  boolean_T ConnectCurrentSensor;      /* '<S6>/Connect Current Sensor' */
  boolean_T EngageMotorBrake;          /* '<S6>/Engage Motor Brake' */
  boolean_T CastToBoolean;             /* '<S7>/Cast To Boolean' */
  boolean_T MotorStatus;               /* '<S6>/Motor Status' */
} B_FieldOrientedController_HIL_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T QAE2_RWORK[2];                /* '<S8>/QAE (2)' */
  real_T CoSInterrupt2_RWORK[16];      /* '<S8>/CoS Interrupt (2)' */
  void *Digitalinput_PWORK;            /* '<S7>/Digital input' */
  void *PWMCapture_PWORK;              /* '<S7>/PWM Capture' */
  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_AProtorVelocity_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles[3];
  } TAQSigLogging_InsertedFor_Inputs_at_outport_0_1_PWORK;/* synthesized block */

  struct {
    void *AQHandles[3];
  } TAQSigLogging_InsertedFor_Inputs_at_outport_1_1_PWORK;/* synthesized block */

  struct {
    void *AQHandles[10];
  } TAQSigLogging_InsertedFor_PMSMPlantModel_at_outport_0_1_PWORK;/* synthesized block */

  struct {
    void *AQHandles[3];
  } TAQSigLogging_InsertedFor_PMSMPlantModel_at_outport_1_1_PWORK;/* synthesized block */

  struct {
    void *AQHandles[2];
  } TAQSigLogging_InsertedFor_TIC2000_at_outport_1_1_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_VelocityCommand_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_SignalCopy_at_outport_0_PWORK;/* synthesized block */

  void *velocityCommandmotorOn_PWORK;  /* '<S8>/velocityCommand, motorOn' */
  void *ADCPhaseCurrentCount_PWORK[2]; /* '<S8>/ADCPhaseCurrentCount' */
  void *QAE2_PWORK;                    /* '<S8>/QAE (2)' */
  void *OverloadOptionsCore_PWORK[4];  /* '<S11>/Overload Options Core' */
  void *CoSInterrupt2_PWORK;           /* '<S8>/CoS Interrupt (2)' */
  struct {
    void *USERIO_P_IND;
    void *PROG_SPACE_P_IND;
    void *CONFIG_REGISTER_P_IND;
    void *CONDITIONING_MODULE_IO3xx_2x_P_IND;
    void *DEVICENAME_P_IND;
  } Setup_PWORK;                       /* '<S8>/Setup' */

  int_T ADCPhaseCurrentCount_IWORK;    /* '<S8>/ADCPhaseCurrentCount' */
  int_T CoSInterrupt2_IWORK;           /* '<S8>/CoS Interrupt (2)' */
  struct {
    int_T MODULEARCHITECTURE_I_IND;
  } Setup_IWORK;                       /* '<S8>/Setup' */
} DW_FieldOrientedController_HIL_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  physicalInputs physicalInputs_f;     /* '<Root>/physicalInputs' */
  controllerInputs controllerInputs_h; /* '<Root>/controllerInputs' */
} ExtU_FieldOrientedController_HIL_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T mode;                         /* '<Root>/mode' */
  real_T rotorVelocity;                /* '<Root>/rotorVelocity' */
} ExtY_FieldOrientedController_HIL_T;

/* Real-time Model Data Structure */
struct tag_RTM_FieldOrientedController_HIL_T {
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;

  /*
   * NonInlinedSFcns:
   * The following substructure contains information regarding
   * non-inlined s-functions used in the model.
   */
  struct {
    RTWSfcnInfo sfcnInfo;
    time_T *taskTimePtrs[1];
    SimStruct childSFunctions[6];
    SimStruct *childSFunctionPtrs[6];
    struct _ssBlkInfo2 blkInfo2[6];
    struct _ssSFcnModelMethods2 methods2[6];
    struct _ssSFcnModelMethods3 methods3[6];
    struct _ssSFcnModelMethods4 methods4[6];
    struct _ssStatesInfo2 statesInfo2[6];
    ssPeriodicStatesInfo periodicStatesInfo[6];
    struct _ssPortInfo2 inputOutputPortInfo2[6];
    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[6];
      mxArray *params[6];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn0;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[15];
      mxArray *params[15];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn1;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[3];
      struct _ssInPortUnit inputPortUnits[3];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[3];
      uint_T attribs[8];
      mxArray *params[8];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn2;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      uint_T attribs[8];
      mxArray *params[8];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn3;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[14];
      mxArray *params[14];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn4;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      uint_T attribs[16];
      mxArray *params[16];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn5;
  } NonInlinedSFcns;

  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T options;
    int_T numContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[1];
    time_T offsetTimesArray[1];
    int_T sampleTimeTaskIDArray[1];
    int_T sampleHitArray[1];
    int_T perTaskSampleHitsArray[1];
    time_T tArray[1];
  } Timing;
};

/* Block signals (default storage) */
#ifdef __cplusplus

extern "C" {

#endif

  extern B_FieldOrientedController_HIL_T FieldOrientedController_HIL_B;

#ifdef __cplusplus

}
#endif

/* Block states (default storage) */
extern DW_FieldOrientedController_HIL_T FieldOrientedController_HIL_DW;

#ifdef __cplusplus

extern "C" {

#endif

  /* External inputs (root inport signals with default storage) */
  extern ExtU_FieldOrientedController_HIL_T FieldOrientedController_HIL_U;

  /* External outputs (root outports fed by signals with default storage) */
  extern ExtY_FieldOrientedController_HIL_T FieldOrientedController_HIL_Y;

#ifdef __cplusplus

}
#endif

/* External data declarations for dependent source files */
extern const controllerInputs FieldOrientedController_HIL_rtZcontrollerInputs;/* controllerInputs ground */

/* Model block global parameters (default storage) */
extern real_T rtP_adcTransducerVoltAtZeroAmpere[2];
                                      /* Variable: adcTransducerVoltAtZeroAmpere
                                       * Referenced by: '<Root>/PMSMPlantModel'
                                       */
extern real_T rtP_adcTransducerVoltPerAmpere;/* Variable: adcTransducerVoltPerAmpere
                                              * Referenced by: '<Root>/PMSMPlantModel'
                                              */
extern real_T rtP_discInertia;         /* Variable: discInertia
                                        * Referenced by: '<Root>/PMSMPlantModel'
                                        */
extern real_T rtP_encoderRotorPositionAtIndex;/* Variable: encoderRotorPositionAtIndex
                                               * Referenced by: '<Root>/PMSMPlantModel'
                                               */
extern real_T rtP_pmsmPolePairs;       /* Variable: pmsmPolePairs
                                        * Referenced by: '<Root>/PMSMPlantModel'
                                        */
extern real_T rtP_pmsmRotorPositionInit;/* Variable: pmsmRotorPositionInit
                                         * Referenced by: '<Root>/PMSMPlantModel'
                                         */
extern real_T rtP_pmsmRotorVelocityInit;/* Variable: pmsmRotorVelocityInit
                                         * Referenced by: '<Root>/PMSMPlantModel'
                                         */
extern real_T rtP_pwmCounterMax;       /* Variable: pwmCounterMax
                                        * Referenced by: '<S7>/DutyCycle2PWMCompare'
                                        */
extern real32_T rtP_velCmdVec[4];      /* Variable: velCmdVec
                                        * Referenced by: '<S8>/1-D Lookup Table'
                                        */
extern boolean_T rtP_encoderALeadsB;   /* Variable: encoderALeadsB
                                        * Referenced by: '<Root>/PMSMPlantModel'
                                        */
extern boolean_T rtP_encoderPositionValidAtStartup;
                                      /* Variable: encoderPositionValidAtStartup
                                       * Referenced by: '<Root>/PMSMPlantModel'
                                       */

#ifdef __cplusplus

extern "C" {

#endif

  /* Model entry point functions */
  extern void FieldOrientedController_HIL_initialize(void);
  extern void FieldOrientedController_HIL_step(void);
  extern void FieldOrientedController_HIL_terminate(void);

#ifdef __cplusplus

}
#endif

/* Real-time Model object */
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_FieldOrientedController_HIL_T *const
    FieldOrientedController_HIL_M;

#ifdef __cplusplus

}
#endif

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'FieldOrientedController_HIL'
 * '<S1>'   : 'FieldOrientedController_HIL/ADC'
 * '<S2>'   : 'FieldOrientedController_HIL/DAC'
 * '<S3>'   : 'FieldOrientedController_HIL/Inputs'
 * '<S4>'   : 'FieldOrientedController_HIL/TIC2000'
 * '<S5>'   : 'FieldOrientedController_HIL/UserInterface'
 * '<S6>'   : 'FieldOrientedController_HIL/Inputs/Dashboard'
 * '<S7>'   : 'FieldOrientedController_HIL/TIC2000/Speedgoat_inputs'
 * '<S8>'   : 'FieldOrientedController_HIL/TIC2000/Speedgoat_outputs'
 * '<S9>'   : 'FieldOrientedController_HIL/TIC2000/Speedgoat_outputs/Extract Bits'
 * '<S10>'  : 'FieldOrientedController_HIL/TIC2000/Speedgoat_outputs/Extract Bits1'
 * '<S11>'  : 'FieldOrientedController_HIL/TIC2000/Speedgoat_outputs/Overload Options'
 */
#endif                           /* RTW_HEADER_FieldOrientedController_HIL_h_ */
