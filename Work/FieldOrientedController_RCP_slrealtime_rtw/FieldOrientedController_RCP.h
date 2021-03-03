/*
 * FieldOrientedController_RCP.h
 *
 * Sponsored Third Party Support License -- for use only to support
 * products interfaced to MathWorks software under terms specified in your
 * company's restricted use license agreement.
 *
 * Code generation for model "FieldOrientedController_RCP".
 *
 * Model version              : 2.10
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C++ source code generated on : Wed Mar  3 10:56:14 2021
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_FieldOrientedController_RCP_h_
#define RTW_HEADER_FieldOrientedController_RCP_h_
#include <cmath>
#include <stddef.h>
#include <cstring>
#include <logsrv.h>
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "verify/verifyIntrf.h"
#include "sg_fpga_io30x_setup_util.h"
#include "sg_fpga_io31x_io32x_setup_util.h"
#include "sg_fpga_io33x_setup_util.h"
#include "sg_fpga_io39x_setup_util.h"
#include "sg_common.h"
#include "sg_printf.h"
#include "FieldOrientedController_RCP_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "model_reference_types.h"

/* Child system includes */
#define FieldOrientedController_MDLREF_HIDE_CHILD_
#include "FieldOrientedController.h"
#include "FieldOrientedController_RCP_cal.h"
#include "rt_nonfinite.h"

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

#ifndef rtmCounterLimit
#define rtmCounterLimit(rtm, idx)      ((rtm)->Timing.TaskCounters.cLimit[(idx)])
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

#ifndef rtmStepTask
#define rtmStepTask(rtm, idx)          ((rtm)->Timing.TaskCounters.TID[(idx)] == 0)
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

#ifndef rtmTaskCounter
#define rtmTaskCounter(rtm, idx)       ((rtm)->Timing.TaskCounters.TID[(idx)])
#endif

#ifndef rtmGetTimeOfLastOutput
#define rtmGetTimeOfLastOutput(rtm)    ((rtm)->Timing.timeOfLastOutput)
#endif

/* Block signals (default storage) */
typedef struct {
  userInputs BusCreator2;              /* '<S1>/Bus Creator2' */
  userInputs userInputs_a;             /* '<S3>/fromWS_Signal 1' */
  userInputs userInputs_e;             /* '<Root>/switch' */
  real_T IO397AnalogInput_o1;          /* '<S6>/IO397 Analog Input' */
  real_T IO397AnalogInput_o2;          /* '<S6>/IO397 Analog Input' */
  real_T userInputs_j;
  real_T UnitDelay;                    /* '<S6>/Unit Delay' */
  real_T DataTypeConversion1;          /* '<S6>/Data Type Conversion1' */
  real_T Enableinv;                    /* '<S6>/Data Type Conversion2' */
  real_T pwmDutyCycle[3];              /* '<S6>/Gain' */
  real_T PWMDutyCycle[3];              /* '<S6>/Saturation' */
  uint32_T encoderCountRaw;            /* '<S6>/QAD (3)' */
  uint32_T MathFunction;               /* '<S7>/Math Function' */
  uint32_T y;                          /* '<S7>/Wrap to Positive' */
  real32_T SignalCopy;                 /* '<S6>/Signal Copy' */
  real32_T transducerVoltages[2];      /* '<S6>/Data Type Conversion' */
  real32_T velocityCommand;            /* '<S1>/velocityCmd' */
  real32_T rotorVelocity;              /* '<Root>/FieldOrientedController' */
  real32_T rotorVelocityCopy;          /* '<S5>/rotorVelocityCopy' */
  modeSchedulerEnum mode;              /* '<Root>/FieldOrientedController' */
  modeSchedulerEnum mode_j;            /* '<S5>/modeCopy' */
  uint16_T DataTypeConversion1_e;      /* '<S7>/Data Type Conversion1' */
  uint16_T pwmCompare[3];              /* '<Root>/FieldOrientedController' */
  boolean_T Constant;                  /* '<S6>/Constant' */
  boolean_T enInverter;                /* '<Root>/FieldOrientedController' */
  boolean_T userInputs1;
  boolean_T NOT;                       /* '<S6>/NOT' */
} B_FieldOrientedController_RCP_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T UnitDelay_DSTATE;             /* '<S6>/Unit Delay' */
  real_T userInputs_Buf[2];            /* synthesized block */
  void *IO397AnalogInput_PWORK[2];     /* '<S6>/IO397 Analog Input' */
  void *QAD3_PWORK;                    /* '<S6>/QAD (3)' */
  struct {
    void *AQHandles[4];
  } TAQSigLogging_InsertedFor_MotorDrive_at_outport_0_1_PWORK;/* synthesized block */

  void *Digitaloutput_PWORK;           /* '<S6>/Digital output' */
  void *PWMgeneration5_PWORK;          /* '<S6>/PWM generation (5)' */
  struct {
    void *USERIO_P_IND;
    void *PROG_SPACE_P_IND;
    void *CONFIG_REGISTER_P_IND;
    void *CONDITIONING_MODULE_IO3xx_2x_P_IND;
    void *DEVICENAME_P_IND;
  } Setup1_PWORK;                      /* '<S6>/Setup1' */

  struct {
    void *TimePtr[5];
    void *DataPtr[5];
    void *RSimInfoPtr[5];
  } fromWS_Signal1_PWORK;              /* '<S3>/fromWS_Signal 1' */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_modeCopy_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_rotorVelocityCopy_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_velocityCmd_at_outport_0_PWORK;/* synthesized block */

  int_T PWMgeneration5_IWORK[2];       /* '<S6>/PWM generation (5)' */
  struct {
    int_T MODULEARCHITECTURE_I_IND;
  } Setup1_IWORK;                      /* '<S6>/Setup1' */

  struct {
    int_T PrevIndex[5];
  } fromWS_Signal1_IWORK;              /* '<S3>/fromWS_Signal 1' */

  int8_T userInputs_RdBufIdx;          /* synthesized block */
  int8_T userInputs_WrBufIdx;          /* synthesized block */
  int8_T userInputs1_RdBufIdx;         /* synthesized block */
  int8_T userInputs1_WrBufIdx;         /* synthesized block */
  boolean_T userInputs1_Buf[2];        /* synthesized block */
} DW_FieldOrientedController_RCP_T;

/* Real-time Model Data Structure */
struct tag_RTM_FieldOrientedController_RCP_T {
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
    time_T *taskTimePtrs[2];
    SimStruct childSFunctions[4];
    SimStruct *childSFunctionPtrs[4];
    struct _ssBlkInfo2 blkInfo2[4];
    struct _ssSFcnModelMethods2 methods2[4];
    struct _ssSFcnModelMethods3 methods3[4];
    struct _ssSFcnModelMethods4 methods4[4];
    struct _ssStatesInfo2 statesInfo2[4];
    ssPeriodicStatesInfo periodicStatesInfo[4];
    struct _ssPortInfo2 inputOutputPortInfo2[4];
    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[2];
      struct _ssOutPortUnit outputPortUnits[2];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[2];
      uint_T attribs[7];
      mxArray *params[7];
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
      uint_T attribs[21];
      mxArray *params[21];
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
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[37];
      mxArray *params[37];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn3;
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
    uint32_T clockTick1;
    uint32_T clockTickH1;
    struct {
      uint32_T TID[2];
      uint32_T cLimit[2];
    } TaskCounters;

    struct {
      uint32_T TID0_1;
      boolean_T b_TID0_1;
    } RateInteraction;

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
    time_T sampleTimesArray[2];
    time_T offsetTimesArray[2];
    int_T sampleTimeTaskIDArray[2];
    int_T sampleHitArray[2];
    int_T perTaskSampleHitsArray[4];
    time_T tArray[2];
  } Timing;
};

/* Block signals (default storage) */
#ifdef __cplusplus

extern "C" {

#endif

  extern B_FieldOrientedController_RCP_T FieldOrientedController_RCP_B;

#ifdef __cplusplus

}
#endif

/* Block states (default storage) */
extern DW_FieldOrientedController_RCP_T FieldOrientedController_RCP_DW;

/* External data declarations for dependent source files */
extern const userInputs FieldOrientedController_RCP_rtZuserInputs;/* userInputs ground */

/* Model block global parameters (default storage) */
extern real_T rtP_paramOverCurrentDuration;/* Variable: paramOverCurrentDuration
                                            * Referenced by: '<Root>/FieldOrientedController'
                                            */
extern real_T rtP_paramOverCurrentLimit;/* Variable: paramOverCurrentLimit
                                         * Referenced by: '<Root>/FieldOrientedController'
                                         */
extern real32_T rtP_PolePairs;         /* Variable: PolePairs
                                        * Referenced by: '<Root>/FieldOrientedController'
                                        */
extern real32_T rtP_paramAdcAmperePerTransducerVolt[2];
                                    /* Variable: paramAdcAmperePerTransducerVolt
                                     * Referenced by: '<Root>/FieldOrientedController'
                                     */
extern real32_T rtP_paramAdcTransducerVoltAtZeroAmpere[2];
                                 /* Variable: paramAdcTransducerVoltAtZeroAmpere
                                  * Referenced by: '<Root>/FieldOrientedController'
                                  */
extern real32_T rtP_paramCurrentControlI;/* Variable: paramCurrentControlI
                                          * Referenced by: '<Root>/FieldOrientedController'
                                          */
extern real32_T rtP_paramCurrentControlP;/* Variable: paramCurrentControlP
                                          * Referenced by: '<Root>/FieldOrientedController'
                                          */
extern real32_T rtP_paramCurrentControlSatVoltage;
                                      /* Variable: paramCurrentControlSatVoltage
                                       * Referenced by: '<Root>/FieldOrientedController'
                                       */
extern real32_T rtP_paramEncoderCalibrationDuration;
                                    /* Variable: paramEncoderCalibrationDuration
                                     * Referenced by: '<Root>/FieldOrientedController'
                                     */
extern real32_T rtP_paramEncoderCalibrationMaxError;
                                    /* Variable: paramEncoderCalibrationMaxError
                                     * Referenced by: '<Root>/FieldOrientedController'
                                     */
extern real32_T rtP_paramEncoderCalibrationVoltage;
                                     /* Variable: paramEncoderCalibrationVoltage
                                      * Referenced by: '<Root>/FieldOrientedController'
                                      */
extern real32_T rtP_paramEncoderRotorPositionAtZeroCount;
                               /* Variable: paramEncoderRotorPositionAtZeroCount
                                * Referenced by: '<Root>/FieldOrientedController'
                                */
extern real32_T rtP_paramEncoderRotorPositionPerCount;
                                  /* Variable: paramEncoderRotorPositionPerCount
                                   * Referenced by: '<Root>/FieldOrientedController'
                                   */
extern real32_T rtP_paramOpenLoopVelocityAcceleration;
                                  /* Variable: paramOpenLoopVelocityAcceleration
                                   * Referenced by: '<Root>/FieldOrientedController'
                                   */
extern real32_T rtP_paramOpenLoopVelocityToVoltsBias;
                                   /* Variable: paramOpenLoopVelocityToVoltsBias
                                    * Referenced by: '<Root>/FieldOrientedController'
                                    */
extern real32_T rtP_paramOpenLoopVelocityToVoltsScalar;
                                 /* Variable: paramOpenLoopVelocityToVoltsScalar
                                  * Referenced by: '<Root>/FieldOrientedController'
                                  */
extern real32_T rtP_paramPwmCompareAtZeroVolt;/* Variable: paramPwmCompareAtZeroVolt
                                               * Referenced by: '<Root>/FieldOrientedController'
                                               */
extern real32_T rtP_paramPwmCompareMax;/* Variable: paramPwmCompareMax
                                        * Referenced by: '<Root>/FieldOrientedController'
                                        */
extern real32_T rtP_paramPwmComparePerVolt;/* Variable: paramPwmComparePerVolt
                                            * Referenced by: '<Root>/FieldOrientedController'
                                            */
extern real32_T rtP_paramVelocityControlI;/* Variable: paramVelocityControlI
                                           * Referenced by: '<Root>/FieldOrientedController'
                                           */
extern real32_T rtP_paramVelocityControlP;/* Variable: paramVelocityControlP
                                           * Referenced by: '<Root>/FieldOrientedController'
                                           */
extern real32_T rtP_paramVelocityControlSatCurrent;
                                     /* Variable: paramVelocityControlSatCurrent
                                      * Referenced by: '<Root>/FieldOrientedController'
                                      */
extern boolean_T rtP_paramOverCurrentEnable;/* Variable: paramOverCurrentEnable
                                             * Referenced by: '<Root>/FieldOrientedController'
                                             */
extern void rate_scheduler(void);

#ifdef __cplusplus

extern "C" {

#endif

  /* Model entry point functions */
  extern void FieldOrientedController_RCP_initialize(void);
  extern void FieldOrientedController_RCP_step(int_T tid);
  extern void FieldOrientedController_RCP_terminate(void);

#ifdef __cplusplus

}
#endif

/* Real-time Model object */
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_FieldOrientedController_RCP_T *const
    FieldOrientedController_RCP_M;

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
 * '<Root>' : 'FieldOrientedController_RCP'
 * '<S1>'   : 'FieldOrientedController_RCP/ManualTestInputs'
 * '<S2>'   : 'FieldOrientedController_RCP/MotorDrive'
 * '<S3>'   : 'FieldOrientedController_RCP/SignalEditor_Experiments'
 * '<S4>'   : 'FieldOrientedController_RCP/UserInterface'
 * '<S5>'   : 'FieldOrientedController_RCP/log'
 * '<S6>'   : 'FieldOrientedController_RCP/MotorDrive/New Kit'
 * '<S7>'   : 'FieldOrientedController_RCP/MotorDrive/New Kit/Condition Encoder'
 * '<S8>'   : 'FieldOrientedController_RCP/MotorDrive/New Kit/Condition Encoder/Wrap to Positive'
 */
#endif                           /* RTW_HEADER_FieldOrientedController_RCP_h_ */
