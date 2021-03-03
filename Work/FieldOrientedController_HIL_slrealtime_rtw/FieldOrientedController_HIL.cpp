/*
 * FieldOrientedController_HIL.cpp
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

#include "FieldOrientedController_HIL.h"
#include "FieldOrientedController_HIL_private.h"
#include "plook_u32f_bincka.h"

rtTimingBridge FieldOrientedController_HIL_TimingBrdg;

/* Block signals (default storage) */
B_FieldOrientedController_HIL_T FieldOrientedController_HIL_B;

/* Block states (default storage) */
DW_FieldOrientedController_HIL_T FieldOrientedController_HIL_DW;

/* External inputs (root inport signals with default storage) */
ExtU_FieldOrientedController_HIL_T FieldOrientedController_HIL_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_FieldOrientedController_HIL_T FieldOrientedController_HIL_Y;

/* Real-time model */
RT_MODEL_FieldOrientedController_HIL_T FieldOrientedController_HIL_M_ =
  RT_MODEL_FieldOrientedController_HIL_T();
RT_MODEL_FieldOrientedController_HIL_T *const FieldOrientedController_HIL_M =
  &FieldOrientedController_HIL_M_;
const controllerInputs FieldOrientedController_HIL_rtZcontrollerInputs = { false,/* motorOn */
  commandTypeEnum_Error,               /* commandType */
  0.0F                                 /* velocityCommand */
};

void Root_InterruptSetup_callback(void)
{
  // 2.  Call the framework to get the msg receive coid to use in the pulse send in the ISR
  Root_InterruptSetup_D.coid = slrealtime::taskConnectionID( 0 );
  IO397_50k_v2_start_public( Root_InterruptSetup_D.context, 0 );
}

const struct sigevent *Root_InterruptSetup_ISR(void *data, int id)
{
  // For the real interrupt, call the boardISR here
  bool needService = IO397_50k_v2_isr_public( Root_InterruptSetup_D.context );
  if (needService ) {
    Root_InterruptSetup_D.count++;

    // Call the INIT macro again to send the current count.
    SIGEV_PULSE_INT_INIT( &Root_InterruptSetup_D.sig_pulse,
                         Root_InterruptSetup_D.coid,
                         Root_InterruptSetup_D.pri,
                         _PULSE_CODE_MINAVAIL,
                         Root_InterruptSetup_D.count );
    return &Root_InterruptSetup_D.sig_pulse;
  }

  // return a sigevent none if the board didn't interrupt.
  return &Root_InterruptSetup_D.sig_none;
}

/* Model step function */
void FieldOrientedController_HIL_step(void)
{
  real_T tmp;
  uint32_T bpIdx;

  /* SignalConversion: '<Root>/AP mode' */
  FieldOrientedController_HIL_B.APmode = 0.0;

  /* Outport: '<Root>/mode' */
  FieldOrientedController_HIL_Y.mode = FieldOrientedController_HIL_B.APmode;

  /* Constant: '<S6>/Torque Load' */
  FieldOrientedController_HIL_B.TorqueLoad =
    FieldOrientedController_HIL_cal->TorqueLoad_Value;

  /* Constant: '<S6>/Connect Current Sensor' */
  FieldOrientedController_HIL_B.ConnectCurrentSensor =
    FieldOrientedController_HIL_cal->ConnectCurrentSensor_Value;

  /* Constant: '<S6>/Engage Motor Brake' */
  FieldOrientedController_HIL_B.EngageMotorBrake =
    FieldOrientedController_HIL_cal->EngageMotorBrake_Value;

  /* S-Function (sg_fpga_di_sf_a2): '<S7>/Digital input' */

  /* Level2 S-Function Block: '<S7>/Digital input' (sg_fpga_di_sf_a2) */
  {
    SimStruct *rts = FieldOrientedController_HIL_M->childSfunctions[0];
    sfcnOutputs(rts,0);
  }

  /* DataTypeConversion: '<S7>/Cast To Boolean' */
  FieldOrientedController_HIL_B.CastToBoolean =
    (FieldOrientedController_HIL_B.Digitalinput != 0.0);

  /* S-Function (sg_fpga_cap_sf_1): '<S7>/PWM Capture' */

  /* Level2 S-Function Block: '<S7>/PWM Capture' (sg_fpga_cap_sf_1) */
  {
    SimStruct *rts = FieldOrientedController_HIL_M->childSfunctions[1];
    sfcnOutputs(rts,0);
  }

  /* Gain: '<S7>/DutyCycle2PWMCompare' */
  tmp = std::floor(rtP_pwmCounterMax * FieldOrientedController_HIL_B.PWMDuty[0]);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 65536.0);
  }

  /* Gain: '<S7>/DutyCycle2PWMCompare' */
  FieldOrientedController_HIL_B.DutyCycle2PWMCompare[0] = static_cast<uint16_T>
    (tmp < 0.0 ? static_cast<int32_T>(static_cast<uint16_T>(-static_cast<int16_T>
       (static_cast<uint16_T>(-tmp)))) : static_cast<int32_T>
     (static_cast<uint16_T>(tmp)));

  /* Gain: '<S7>/DutyCycle2PWMCompare' */
  tmp = std::floor(rtP_pwmCounterMax * FieldOrientedController_HIL_B.PWMDuty[1]);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 65536.0);
  }

  /* Gain: '<S7>/DutyCycle2PWMCompare' */
  FieldOrientedController_HIL_B.DutyCycle2PWMCompare[1] = static_cast<uint16_T>
    (tmp < 0.0 ? static_cast<int32_T>(static_cast<uint16_T>(-static_cast<int16_T>
       (static_cast<uint16_T>(-tmp)))) : static_cast<int32_T>
     (static_cast<uint16_T>(tmp)));

  /* Gain: '<S7>/DutyCycle2PWMCompare' */
  tmp = std::floor(rtP_pwmCounterMax * FieldOrientedController_HIL_B.PWMDuty[2]);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 65536.0);
  }

  /* Gain: '<S7>/DutyCycle2PWMCompare' */
  FieldOrientedController_HIL_B.DutyCycle2PWMCompare[2] = static_cast<uint16_T>
    (tmp < 0.0 ? static_cast<int32_T>(static_cast<uint16_T>(-static_cast<int16_T>
       (static_cast<uint16_T>(-tmp)))) : static_cast<int32_T>
     (static_cast<uint16_T>(tmp)));

  /* ModelReference generated from: '<Root>/PMSMPlantModel' */
  PMSM_Plant_Model(&FieldOrientedController_HIL_B.TorqueLoad,
                   &FieldOrientedController_HIL_B.ConnectCurrentSensor,
                   &FieldOrientedController_HIL_B.EngageMotorBrake,
                   &FieldOrientedController_HIL_B.CastToBoolean,
                   &FieldOrientedController_HIL_B.DutyCycle2PWMCompare[0],
                   &FieldOrientedController_HIL_B.phaseCurrentA,
                   &FieldOrientedController_HIL_B.phaseCurrentB,
                   &FieldOrientedController_HIL_B.phaseCurrentC,
                   &FieldOrientedController_HIL_B.directCurrent,
                   &FieldOrientedController_HIL_B.quadratureCurrent,
                   &FieldOrientedController_HIL_B.electromagneticTorque,
                   &FieldOrientedController_HIL_B.rotorPosition,
                   &FieldOrientedController_HIL_B.electricalPosition,
                   &FieldOrientedController_HIL_B.rotorVelocity,
                   &FieldOrientedController_HIL_B.electricalVelocity,
                   &FieldOrientedController_HIL_B.transducerVoltage[0],
                   &FieldOrientedController_HIL_B.encoderIndexFound,
                   &FieldOrientedController_HIL_B.encoderCount);

  /* SignalConversion: '<Root>/AP rotorVelocity' */
  FieldOrientedController_HIL_B.rotorVelocity_l =
    FieldOrientedController_HIL_B.rotorVelocity;

  /* Outport: '<Root>/rotorVelocity' */
  FieldOrientedController_HIL_Y.rotorVelocity =
    FieldOrientedController_HIL_B.rotorVelocity_l;

  /* Constant: '<S6>/Motor Status' */
  FieldOrientedController_HIL_B.MotorStatus =
    FieldOrientedController_HIL_cal->MotorStatus_Value;

  /* DataTypeConversion: '<S6>/Data Type Conversion' incorporates:
   *  Constant: '<S6>/Command Type'
   */
  FieldOrientedController_HIL_B.DataTypeConversion = static_cast<commandTypeEnum>
    (FieldOrientedController_HIL_cal->CommandType_Value);

  /* Constant: '<S6>/Velocity Command' */
  FieldOrientedController_HIL_B.VelocityCommand =
    FieldOrientedController_HIL_cal->VelocityCommand_Value;

  /* SignalConversion: '<S8>/Signal Copy' */
  FieldOrientedController_HIL_B.velocityCommand =
    FieldOrientedController_HIL_B.VelocityCommand;

  /* Lookup_n-D: '<S8>/1-D Lookup Table' incorporates:
   *  SignalConversion: '<S8>/Signal Copy'
   */
  bpIdx = plook_u32f_bincka(FieldOrientedController_HIL_B.velocityCommand,
    rtP_velCmdVec, 3U);

  /* Lookup_n-D: '<S8>/1-D Lookup Table' */
  FieldOrientedController_HIL_B.uDLookupTable =
    FieldOrientedController_HIL_cal->uDLookupTable_tableData[bpIdx];

  /* DataTypeConversion: '<S9>/Extract Desired Bits' */
  FieldOrientedController_HIL_B.ExtractDesiredBits = static_cast<uint8_T>(
    static_cast<int32_T>(static_cast<uint32_T>
    (FieldOrientedController_HIL_B.uDLookupTable) >> 1) & 1);

  /* DataTypeConversion: '<S9>/Modify Scaling Only' incorporates:
   *  DataTypeConversion: '<S9>/Extract Desired Bits'
   */
  FieldOrientedController_HIL_B.ModifyScalingOnly =
    FieldOrientedController_HIL_B.ExtractDesiredBits;

  /* DataTypeConversion: '<S8>/Cast To Double' incorporates:
   *  DataTypeConversion: '<S9>/Modify Scaling Only'
   */
  FieldOrientedController_HIL_B.CastToDouble = static_cast<real_T>
    (FieldOrientedController_HIL_B.ModifyScalingOnly) * 2.0;

  /* DataTypeConversion: '<S10>/Extract Desired Bits' */
  FieldOrientedController_HIL_B.ExtractDesiredBits_d = static_cast<uint8_T>
    (FieldOrientedController_HIL_B.uDLookupTable & 1);

  /* DataTypeConversion: '<S10>/Modify Scaling Only' incorporates:
   *  DataTypeConversion: '<S10>/Extract Desired Bits'
   */
  FieldOrientedController_HIL_B.ModifyScalingOnly_c =
    FieldOrientedController_HIL_B.ExtractDesiredBits_d;

  /* DataTypeConversion: '<S8>/Cast To Double1' incorporates:
   *  DataTypeConversion: '<S10>/Modify Scaling Only'
   */
  FieldOrientedController_HIL_B.CastToDouble1 =
    FieldOrientedController_HIL_B.ModifyScalingOnly_c;

  /* DataTypeConversion: '<S8>/Cast To Double2' */
  FieldOrientedController_HIL_B.CastToDouble2 =
    FieldOrientedController_HIL_B.MotorStatus;

  /* S-Function (sg_fpga_do_sf_a2): '<S8>/velocityCommand, motorOn' */

  /* Level2 S-Function Block: '<S8>/velocityCommand, motorOn' (sg_fpga_do_sf_a2) */
  {
    SimStruct *rts = FieldOrientedController_HIL_M->childSfunctions[2];
    sfcnOutputs(rts,0);
  }

  /* DataTypeConversion: '<S8>/Cast To Double3' */
  FieldOrientedController_HIL_B.CastToDouble3[0] =
    FieldOrientedController_HIL_B.transducerVoltage[0];
  FieldOrientedController_HIL_B.CastToDouble3[1] =
    FieldOrientedController_HIL_B.transducerVoltage[1];

  /* S-Function (sg_fpga_IO397_da): '<S8>/ADCPhaseCurrentCount' */

  /* Level2 S-Function Block: '<S8>/ADCPhaseCurrentCount' (sg_fpga_IO397_da) */
  {
    SimStruct *rts = FieldOrientedController_HIL_M->childSfunctions[3];
    sfcnOutputs(rts,0);
  }

  /* UnitConversion: '<S8>/Unit Conversion' */
  /* Unit Conversion - from: rad/sec to: rpm
     Expression: output = (9.5493*input) + (0) */
  FieldOrientedController_HIL_B.UnitConversion = 9.5492965855137211 *
    FieldOrientedController_HIL_B.rotorVelocity;

  /* S-Function (sg_fpga_qae_sf_2): '<S8>/QAE (2)' */

  /* Level2 S-Function Block: '<S8>/QAE (2)' (sg_fpga_qae_sf_2) */
  {
    SimStruct *rts = FieldOrientedController_HIL_M->childSfunctions[4];
    sfcnOutputs(rts,0);
  }

  /* S-Function (overloadoptions): '<S11>/Overload Options Core' */
  *(unsigned int*)FieldOrientedController_HIL_DW.OverloadOptionsCore_PWORK[0] =
    FieldOrientedController_HIL_cal->OverloadOptions_startupDur;
  *(unsigned int*)FieldOrientedController_HIL_DW.OverloadOptionsCore_PWORK[1] =
    FieldOrientedController_HIL_cal->OverloadOptions_maxOverload;
  FieldOrientedController_HIL_B.OverloadOptionsCore = *(unsigned int*)
    FieldOrientedController_HIL_DW.OverloadOptionsCore_PWORK[2];

  /* S-Function (sg_fpga_inta_sf_2): '<S8>/CoS Interrupt (2)' */

  /* Level2 S-Function Block: '<S8>/CoS Interrupt (2)' (sg_fpga_inta_sf_2) */
  {
    SimStruct *rts = FieldOrientedController_HIL_M->childSfunctions[5];
    sfcnOutputs(rts,0);
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++FieldOrientedController_HIL_M->Timing.clockTick0)) {
    ++FieldOrientedController_HIL_M->Timing.clockTickH0;
  }

  FieldOrientedController_HIL_M->Timing.t[0] =
    FieldOrientedController_HIL_M->Timing.clockTick0 *
    FieldOrientedController_HIL_M->Timing.stepSize0 +
    FieldOrientedController_HIL_M->Timing.clockTickH0 *
    FieldOrientedController_HIL_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void FieldOrientedController_HIL_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));
  rtsiSetSolverName(&FieldOrientedController_HIL_M->solverInfo,
                    "FixedStepDiscrete");
  FieldOrientedController_HIL_M->solverInfoPtr =
    (&FieldOrientedController_HIL_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap =
      FieldOrientedController_HIL_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    FieldOrientedController_HIL_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    FieldOrientedController_HIL_M->Timing.sampleTimes =
      (&FieldOrientedController_HIL_M->Timing.sampleTimesArray[0]);
    FieldOrientedController_HIL_M->Timing.offsetTimes =
      (&FieldOrientedController_HIL_M->Timing.offsetTimesArray[0]);

    /* task periods */
    FieldOrientedController_HIL_M->Timing.sampleTimes[0] = (0.00025);

    /* task offsets */
    FieldOrientedController_HIL_M->Timing.offsetTimes[0] = (0.0);
  }

  rtmSetTPtr(FieldOrientedController_HIL_M,
             &FieldOrientedController_HIL_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = FieldOrientedController_HIL_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    FieldOrientedController_HIL_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(FieldOrientedController_HIL_M, -1);
  FieldOrientedController_HIL_M->Timing.stepSize0 = 0.00025;
  FieldOrientedController_HIL_M->solverInfoPtr =
    (&FieldOrientedController_HIL_M->solverInfo);
  FieldOrientedController_HIL_M->Timing.stepSize = (0.00025);
  rtsiSetFixedStepSize(&FieldOrientedController_HIL_M->solverInfo, 0.00025);
  rtsiSetSolverMode(&FieldOrientedController_HIL_M->solverInfo,
                    SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  (void) std::memset((static_cast<void *>(&FieldOrientedController_HIL_B)), 0,
                     sizeof(B_FieldOrientedController_HIL_T));

  {
    FieldOrientedController_HIL_B.DataTypeConversion = commandTypeEnum_Error;
  }

  /* states (dwork) */
  (void) std::memset(static_cast<void *>(&FieldOrientedController_HIL_DW), 0,
                     sizeof(DW_FieldOrientedController_HIL_T));

  /* external inputs */
  (void)std::memset(&FieldOrientedController_HIL_U, 0, sizeof
                    (ExtU_FieldOrientedController_HIL_T));
  FieldOrientedController_HIL_U.controllerInputs_h =
    FieldOrientedController_HIL_rtZcontrollerInputs;

  /* external outputs */
  (void) std::memset(static_cast<void *>(&FieldOrientedController_HIL_Y), 0,
                     sizeof(ExtY_FieldOrientedController_HIL_T));

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo =
      &FieldOrientedController_HIL_M->NonInlinedSFcns.sfcnInfo;
    FieldOrientedController_HIL_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus
      (FieldOrientedController_HIL_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo,
      &FieldOrientedController_HIL_M->Sizes.numSampTimes);
    FieldOrientedController_HIL_M->NonInlinedSFcns.taskTimePtrs[0] =
      &(rtmGetTPtr(FieldOrientedController_HIL_M)[0]);
    rtssSetTPtrPtr(sfcnInfo,
                   FieldOrientedController_HIL_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(FieldOrientedController_HIL_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(FieldOrientedController_HIL_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (FieldOrientedController_HIL_M));
    rtssSetStepSizePtr(sfcnInfo, &FieldOrientedController_HIL_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested
      (FieldOrientedController_HIL_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &FieldOrientedController_HIL_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &FieldOrientedController_HIL_M->zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &FieldOrientedController_HIL_M->CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo,
                         &FieldOrientedController_HIL_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &FieldOrientedController_HIL_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &FieldOrientedController_HIL_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &FieldOrientedController_HIL_M->solverInfoPtr);
  }

  FieldOrientedController_HIL_M->Sizes.numSFcns = (6);

  /* register each child */
  {
    (void) std::memset(static_cast<void *>
                       (&FieldOrientedController_HIL_M->NonInlinedSFcns.childSFunctions
                        [0]), 0,
                       6*sizeof(SimStruct));
    FieldOrientedController_HIL_M->childSfunctions =
      (&FieldOrientedController_HIL_M->NonInlinedSFcns.childSFunctionPtrs[0]);

    {
      int_T i;
      for (i = 0; i < 6; i++) {
        FieldOrientedController_HIL_M->childSfunctions[i] =
          (&FieldOrientedController_HIL_M->NonInlinedSFcns.childSFunctions[i]);
      }
    }

    /* Level2 S-Function Block: FieldOrientedController_HIL/<S7>/Digital input (sg_fpga_di_sf_a2) */
    {
      SimStruct *rts = FieldOrientedController_HIL_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod =
        FieldOrientedController_HIL_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset =
        FieldOrientedController_HIL_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap =
        FieldOrientedController_HIL_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &FieldOrientedController_HIL_M->NonInlinedSFcns.blkInfo2
                         [0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &FieldOrientedController_HIL_M->NonInlinedSFcns.inputOutputPortInfo2[0]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, FieldOrientedController_HIL_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &FieldOrientedController_HIL_M->NonInlinedSFcns.methods2
                           [0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &FieldOrientedController_HIL_M->NonInlinedSFcns.methods3
                           [0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &FieldOrientedController_HIL_M->NonInlinedSFcns.methods4
                           [0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &FieldOrientedController_HIL_M->NonInlinedSFcns.statesInfo2
                         [0]);
        ssSetPeriodicStatesInfo(rts,
          &FieldOrientedController_HIL_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &FieldOrientedController_HIL_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &FieldOrientedController_HIL_M->NonInlinedSFcns.Sfcn0.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 2);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &FieldOrientedController_HIL_M->NonInlinedSFcns.Sfcn0.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &FieldOrientedController_HIL_B.Digitalinput));
        }
      }

      /* path info */
      ssSetModelName(rts, "Digital input");
      ssSetPath(rts,
                "FieldOrientedController_HIL/TIC2000/Speedgoat_inputs/Digital input");
      ssSetRTModel(rts,FieldOrientedController_HIL_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &FieldOrientedController_HIL_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       FieldOrientedController_HIL_cal->Digitalinput_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       FieldOrientedController_HIL_cal->Digitalinput_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       FieldOrientedController_HIL_cal->Digitalinput_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       FieldOrientedController_HIL_cal->Digitalinput_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       FieldOrientedController_HIL_cal->Digitalinput_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       FieldOrientedController_HIL_cal->Digitalinput_P6_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **)
                 &FieldOrientedController_HIL_DW.Digitalinput_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &FieldOrientedController_HIL_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &FieldOrientedController_HIL_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &FieldOrientedController_HIL_DW.Digitalinput_PWORK);
      }

      /* registration */
      sg_fpga_di_sf_a2(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00025);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: FieldOrientedController_HIL/<S7>/PWM Capture (sg_fpga_cap_sf_1) */
    {
      SimStruct *rts = FieldOrientedController_HIL_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod =
        FieldOrientedController_HIL_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset =
        FieldOrientedController_HIL_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap =
        FieldOrientedController_HIL_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &FieldOrientedController_HIL_M->NonInlinedSFcns.blkInfo2
                         [1]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &FieldOrientedController_HIL_M->NonInlinedSFcns.inputOutputPortInfo2[1]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, FieldOrientedController_HIL_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &FieldOrientedController_HIL_M->NonInlinedSFcns.methods2
                           [1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &FieldOrientedController_HIL_M->NonInlinedSFcns.methods3
                           [1]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &FieldOrientedController_HIL_M->NonInlinedSFcns.methods4
                           [1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &FieldOrientedController_HIL_M->NonInlinedSFcns.statesInfo2
                         [1]);
        ssSetPeriodicStatesInfo(rts,
          &FieldOrientedController_HIL_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &FieldOrientedController_HIL_M->NonInlinedSFcns.Sfcn1.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &FieldOrientedController_HIL_M->NonInlinedSFcns.Sfcn1.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &FieldOrientedController_HIL_M->NonInlinedSFcns.Sfcn1.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 3);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            FieldOrientedController_HIL_B.PWMDuty));
        }
      }

      /* path info */
      ssSetModelName(rts, "PWM Capture");
      ssSetPath(rts,
                "FieldOrientedController_HIL/TIC2000/Speedgoat_inputs/PWM Capture");
      ssSetRTModel(rts,FieldOrientedController_HIL_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &FieldOrientedController_HIL_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 15);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       FieldOrientedController_HIL_cal->PWMCapture_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       FieldOrientedController_HIL_cal->PWMCapture_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       FieldOrientedController_HIL_cal->PWMCapture_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       FieldOrientedController_HIL_cal->PWMCapture_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       FieldOrientedController_HIL_cal->PWMCapture_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       FieldOrientedController_HIL_cal->PWMCapture_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       FieldOrientedController_HIL_cal->PWMCapture_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       FieldOrientedController_HIL_cal->PWMCapture_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)
                       FieldOrientedController_HIL_cal->PWMCapture_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)
                       FieldOrientedController_HIL_cal->PWMCapture_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)
                       FieldOrientedController_HIL_cal->PWMCapture_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)
                       FieldOrientedController_HIL_cal->PWMCapture_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)
                       FieldOrientedController_HIL_cal->PWMCapture_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)
                       FieldOrientedController_HIL_cal->PWMCapture_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)
                       FieldOrientedController_HIL_cal->PWMCapture_P15_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &FieldOrientedController_HIL_DW.PWMCapture_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &FieldOrientedController_HIL_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &FieldOrientedController_HIL_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &FieldOrientedController_HIL_DW.PWMCapture_PWORK);
      }

      /* registration */
      sg_fpga_cap_sf_1(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00025);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: FieldOrientedController_HIL/<S8>/velocityCommand, motorOn (sg_fpga_do_sf_a2) */
    {
      SimStruct *rts = FieldOrientedController_HIL_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod =
        FieldOrientedController_HIL_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset =
        FieldOrientedController_HIL_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap =
        FieldOrientedController_HIL_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &FieldOrientedController_HIL_M->NonInlinedSFcns.blkInfo2
                         [2]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &FieldOrientedController_HIL_M->NonInlinedSFcns.inputOutputPortInfo2[2]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, FieldOrientedController_HIL_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &FieldOrientedController_HIL_M->NonInlinedSFcns.methods2
                           [2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &FieldOrientedController_HIL_M->NonInlinedSFcns.methods3
                           [2]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &FieldOrientedController_HIL_M->NonInlinedSFcns.methods4
                           [2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &FieldOrientedController_HIL_M->NonInlinedSFcns.statesInfo2
                         [2]);
        ssSetPeriodicStatesInfo(rts,
          &FieldOrientedController_HIL_M->NonInlinedSFcns.periodicStatesInfo[2]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 3);
        ssSetPortInfoForInputs(rts,
          &FieldOrientedController_HIL_M->NonInlinedSFcns.Sfcn2.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &FieldOrientedController_HIL_M->NonInlinedSFcns.Sfcn2.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        ssSetInputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &FieldOrientedController_HIL_M->NonInlinedSFcns.Sfcn2.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);
        ssSetInputPortIsContinuousQuantity(rts, 1, 0);
        ssSetInputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               &FieldOrientedController_HIL_B.CastToDouble);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1,
                               &FieldOrientedController_HIL_B.CastToDouble1);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }

        /* port 2 */
        {
          ssSetInputPortRequiredContiguous(rts, 2, 1);
          ssSetInputPortSignal(rts, 2,
                               &FieldOrientedController_HIL_B.CastToDouble2);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "velocityCommand, motorOn");
      ssSetPath(rts,
                "FieldOrientedController_HIL/TIC2000/Speedgoat_outputs/velocityCommand, motorOn");
      ssSetRTModel(rts,FieldOrientedController_HIL_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &FieldOrientedController_HIL_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 8);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       FieldOrientedController_HIL_cal->velocityCommandmotorOn_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       FieldOrientedController_HIL_cal->velocityCommandmotorOn_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       FieldOrientedController_HIL_cal->velocityCommandmotorOn_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       FieldOrientedController_HIL_cal->velocityCommandmotorOn_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       FieldOrientedController_HIL_cal->velocityCommandmotorOn_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       FieldOrientedController_HIL_cal->velocityCommandmotorOn_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       FieldOrientedController_HIL_cal->velocityCommandmotorOn_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       FieldOrientedController_HIL_cal->velocityCommandmotorOn_P8_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **)
                 &FieldOrientedController_HIL_DW.velocityCommandmotorOn_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &FieldOrientedController_HIL_M->NonInlinedSFcns.Sfcn2.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &FieldOrientedController_HIL_M->NonInlinedSFcns.Sfcn2.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &FieldOrientedController_HIL_DW.velocityCommandmotorOn_PWORK);
      }

      /* registration */
      sg_fpga_do_sf_a2(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00025);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);
      _ssSetInputPortConnected(rts, 2, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
      ssSetInputPortBufferDstPort(rts, 2, -1);
    }

    /* Level2 S-Function Block: FieldOrientedController_HIL/<S8>/ADCPhaseCurrentCount (sg_fpga_IO397_da) */
    {
      SimStruct *rts = FieldOrientedController_HIL_M->childSfunctions[3];

      /* timing info */
      time_T *sfcnPeriod =
        FieldOrientedController_HIL_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset =
        FieldOrientedController_HIL_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap =
        FieldOrientedController_HIL_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &FieldOrientedController_HIL_M->NonInlinedSFcns.blkInfo2
                         [3]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &FieldOrientedController_HIL_M->NonInlinedSFcns.inputOutputPortInfo2[3]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, FieldOrientedController_HIL_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &FieldOrientedController_HIL_M->NonInlinedSFcns.methods2
                           [3]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &FieldOrientedController_HIL_M->NonInlinedSFcns.methods3
                           [3]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &FieldOrientedController_HIL_M->NonInlinedSFcns.methods4
                           [3]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &FieldOrientedController_HIL_M->NonInlinedSFcns.statesInfo2
                         [3]);
        ssSetPeriodicStatesInfo(rts,
          &FieldOrientedController_HIL_M->NonInlinedSFcns.periodicStatesInfo[3]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 2);
        ssSetPortInfoForInputs(rts,
          &FieldOrientedController_HIL_M->NonInlinedSFcns.Sfcn3.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &FieldOrientedController_HIL_M->NonInlinedSFcns.Sfcn3.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 5);
        ssSetInputPortUnit(rts, 1, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &FieldOrientedController_HIL_M->NonInlinedSFcns.Sfcn3.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);
        ssSetInputPortIsContinuousQuantity(rts, 1, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               &FieldOrientedController_HIL_B.CastToDouble3[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1,
                               &FieldOrientedController_HIL_B.CastToDouble3[1]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "ADCPhaseCurrentCount");
      ssSetPath(rts,
                "FieldOrientedController_HIL/TIC2000/Speedgoat_outputs/ADCPhaseCurrentCount");
      ssSetRTModel(rts,FieldOrientedController_HIL_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &FieldOrientedController_HIL_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 8);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       FieldOrientedController_HIL_cal->ADCPhaseCurrentCount_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       FieldOrientedController_HIL_cal->ADCPhaseCurrentCount_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       FieldOrientedController_HIL_cal->ADCPhaseCurrentCount_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       FieldOrientedController_HIL_cal->ADCPhaseCurrentCount_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       FieldOrientedController_HIL_cal->ADCPhaseCurrentCount_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       FieldOrientedController_HIL_cal->ADCPhaseCurrentCount_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       FieldOrientedController_HIL_cal->ADCPhaseCurrentCount_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       FieldOrientedController_HIL_cal->ADCPhaseCurrentCount_P8_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &FieldOrientedController_HIL_DW.ADCPhaseCurrentCount_IWORK);
      ssSetPWork(rts, (void **)
                 &FieldOrientedController_HIL_DW.ADCPhaseCurrentCount_PWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &FieldOrientedController_HIL_M->NonInlinedSFcns.Sfcn3.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &FieldOrientedController_HIL_M->NonInlinedSFcns.Sfcn3.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &FieldOrientedController_HIL_DW.ADCPhaseCurrentCount_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 2);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1,
                   &FieldOrientedController_HIL_DW.ADCPhaseCurrentCount_PWORK[0]);
      }

      /* registration */
      sg_fpga_IO397_da(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00025);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
    }

    /* Level2 S-Function Block: FieldOrientedController_HIL/<S8>/QAE (2) (sg_fpga_qae_sf_2) */
    {
      SimStruct *rts = FieldOrientedController_HIL_M->childSfunctions[4];

      /* timing info */
      time_T *sfcnPeriod =
        FieldOrientedController_HIL_M->NonInlinedSFcns.Sfcn4.sfcnPeriod;
      time_T *sfcnOffset =
        FieldOrientedController_HIL_M->NonInlinedSFcns.Sfcn4.sfcnOffset;
      int_T *sfcnTsMap =
        FieldOrientedController_HIL_M->NonInlinedSFcns.Sfcn4.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &FieldOrientedController_HIL_M->NonInlinedSFcns.blkInfo2
                         [4]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &FieldOrientedController_HIL_M->NonInlinedSFcns.inputOutputPortInfo2[4]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, FieldOrientedController_HIL_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &FieldOrientedController_HIL_M->NonInlinedSFcns.methods2
                           [4]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &FieldOrientedController_HIL_M->NonInlinedSFcns.methods3
                           [4]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &FieldOrientedController_HIL_M->NonInlinedSFcns.methods4
                           [4]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &FieldOrientedController_HIL_M->NonInlinedSFcns.statesInfo2
                         [4]);
        ssSetPeriodicStatesInfo(rts,
          &FieldOrientedController_HIL_M->NonInlinedSFcns.periodicStatesInfo[4]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &FieldOrientedController_HIL_M->NonInlinedSFcns.Sfcn4.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &FieldOrientedController_HIL_M->NonInlinedSFcns.Sfcn4.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 15);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &FieldOrientedController_HIL_M->NonInlinedSFcns.Sfcn4.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               &FieldOrientedController_HIL_B.UnitConversion);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "QAE (2)");
      ssSetPath(rts,
                "FieldOrientedController_HIL/TIC2000/Speedgoat_outputs/QAE (2)");
      ssSetRTModel(rts,FieldOrientedController_HIL_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &FieldOrientedController_HIL_M->NonInlinedSFcns.Sfcn4.params;
        ssSetSFcnParamsCount(rts, 14);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       FieldOrientedController_HIL_cal->QAE2_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       FieldOrientedController_HIL_cal->QAE2_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       FieldOrientedController_HIL_cal->QAE2_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       FieldOrientedController_HIL_cal->QAE2_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       FieldOrientedController_HIL_cal->QAE2_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       FieldOrientedController_HIL_cal->QAE2_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       FieldOrientedController_HIL_cal->QAE2_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       FieldOrientedController_HIL_cal->QAE2_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)
                       FieldOrientedController_HIL_cal->QAE2_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)
                       FieldOrientedController_HIL_cal->QAE2_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)
                       FieldOrientedController_HIL_cal->QAE2_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)
                       FieldOrientedController_HIL_cal->QAE2_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)
                       FieldOrientedController_HIL_cal->QAE2_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)
                       FieldOrientedController_HIL_cal->QAE2_P14_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &FieldOrientedController_HIL_DW.QAE2_RWORK[0]);
      ssSetPWork(rts, (void **) &FieldOrientedController_HIL_DW.QAE2_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &FieldOrientedController_HIL_M->NonInlinedSFcns.Sfcn4.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &FieldOrientedController_HIL_M->NonInlinedSFcns.Sfcn4.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &FieldOrientedController_HIL_DW.QAE2_RWORK[0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &FieldOrientedController_HIL_DW.QAE2_PWORK);
      }

      /* registration */
      sg_fpga_qae_sf_2(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00025);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: FieldOrientedController_HIL/<S8>/CoS Interrupt (2) (sg_fpga_inta_sf_2) */
    {
      SimStruct *rts = FieldOrientedController_HIL_M->childSfunctions[5];

      /* timing info */
      time_T *sfcnPeriod =
        FieldOrientedController_HIL_M->NonInlinedSFcns.Sfcn5.sfcnPeriod;
      time_T *sfcnOffset =
        FieldOrientedController_HIL_M->NonInlinedSFcns.Sfcn5.sfcnOffset;
      int_T *sfcnTsMap =
        FieldOrientedController_HIL_M->NonInlinedSFcns.Sfcn5.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &FieldOrientedController_HIL_M->NonInlinedSFcns.blkInfo2
                         [5]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &FieldOrientedController_HIL_M->NonInlinedSFcns.inputOutputPortInfo2[5]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, FieldOrientedController_HIL_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &FieldOrientedController_HIL_M->NonInlinedSFcns.methods2
                           [5]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &FieldOrientedController_HIL_M->NonInlinedSFcns.methods3
                           [5]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &FieldOrientedController_HIL_M->NonInlinedSFcns.methods4
                           [5]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &FieldOrientedController_HIL_M->NonInlinedSFcns.statesInfo2
                         [5]);
        ssSetPeriodicStatesInfo(rts,
          &FieldOrientedController_HIL_M->NonInlinedSFcns.periodicStatesInfo[5]);
      }

      /* path info */
      ssSetModelName(rts, "CoS Interrupt (2)");
      ssSetPath(rts,
                "FieldOrientedController_HIL/TIC2000/Speedgoat_outputs/CoS Interrupt (2)");
      ssSetRTModel(rts,FieldOrientedController_HIL_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &FieldOrientedController_HIL_M->NonInlinedSFcns.Sfcn5.params;
        ssSetSFcnParamsCount(rts, 16);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       FieldOrientedController_HIL_cal->CoSInterrupt2_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       FieldOrientedController_HIL_cal->CoSInterrupt2_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       FieldOrientedController_HIL_cal->CoSInterrupt2_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       FieldOrientedController_HIL_cal->CoSInterrupt2_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       FieldOrientedController_HIL_cal->CoSInterrupt2_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       FieldOrientedController_HIL_cal->CoSInterrupt2_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       FieldOrientedController_HIL_cal->CoSInterrupt2_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       FieldOrientedController_HIL_cal->CoSInterrupt2_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)
                       FieldOrientedController_HIL_cal->CoSInterrupt2_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)
                       FieldOrientedController_HIL_cal->CoSInterrupt2_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)
                       FieldOrientedController_HIL_cal->CoSInterrupt2_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)
                       FieldOrientedController_HIL_cal->CoSInterrupt2_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)
                       FieldOrientedController_HIL_cal->CoSInterrupt2_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)
                       FieldOrientedController_HIL_cal->CoSInterrupt2_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)
                       FieldOrientedController_HIL_cal->CoSInterrupt2_P15_Size);
        ssSetSFcnParam(rts, 15, (mxArray*)
                       FieldOrientedController_HIL_cal->CoSInterrupt2_P16_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &FieldOrientedController_HIL_DW.CoSInterrupt2_RWORK[0]);
      ssSetIWork(rts, (int_T *)
                 &FieldOrientedController_HIL_DW.CoSInterrupt2_IWORK);
      ssSetPWork(rts, (void **)
                 &FieldOrientedController_HIL_DW.CoSInterrupt2_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &FieldOrientedController_HIL_M->NonInlinedSFcns.Sfcn5.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &FieldOrientedController_HIL_M->NonInlinedSFcns.Sfcn5.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 3);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 16);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &FieldOrientedController_HIL_DW.CoSInterrupt2_RWORK[0]);

        /* IWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &FieldOrientedController_HIL_DW.CoSInterrupt2_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 2, 1);
        ssSetDWorkDataType(rts, 2,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 2, 0);
        ssSetDWork(rts, 2, &FieldOrientedController_HIL_DW.CoSInterrupt2_PWORK);
      }

      /* registration */
      sg_fpga_inta_sf_2(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00025);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      /* Update the BufferDstPort flags for each input port */
    }
  }

  {
    static uint32_T *clockTickPtrs[1];
    static uint32_T *clockTickHPtrs[1];
    static real_T *taskTimePtrs[1];
    FieldOrientedController_HIL_TimingBrdg.nTasks = 1;
    clockTickPtrs[0] = &(FieldOrientedController_HIL_M->Timing.clockTick0);
    clockTickHPtrs[0] = &(FieldOrientedController_HIL_M->Timing.clockTickH0);
    FieldOrientedController_HIL_TimingBrdg.clockTick = clockTickPtrs;
    FieldOrientedController_HIL_TimingBrdg.clockTickH = clockTickHPtrs;
    taskTimePtrs[0] = &(FieldOrientedController_HIL_M->Timing.t[0]);
    FieldOrientedController_HIL_TimingBrdg.taskTime = taskTimePtrs;
  }

  /* Model Initialize function for ModelReference Block: '<Root>/PMSMPlantModel' */
  PMSM_Plant_Model_initialize(rtmGetErrorStatusPointer
    (FieldOrientedController_HIL_M), &FieldOrientedController_HIL_TimingBrdg, 0);

  {
    /* user code (Start function Header) */
    {
      uint16_t moduleArchitecture;
      int32_t ErrCode;
      uint32_t *bitstream, i;
      uint8_t *fpgacode;
      char *devname;
      sg_fpga_io3xxModuleIdT moduleId;
      FILE *mcs;
      static char mcsFileName[200];

      //Get the bitstream length and start of the array.

      //Create the MCS File and then add it to the mldatx
#ifdef _MSC_BUILD

      sprintf(mcsFileName, "\\private\\fpga\\speedgoat_IO397_50k_CI_02168.mcs");

#else

      //find the location of the mcs file
      FILE *find_cmd = popen(
        "find /home/slrt/applications -name speedgoat_IO397_50k_CI_02168.mcs -print | head -n 1",
        "r");
      if (find_cmd == NULL) {
        sprintf(msg, "Could not open file search comand.\n");
        rtmSetErrorStatus(FieldOrientedController_HIL_M, msg);
        return;
      }

      fscanf(find_cmd,"%s",mcsFileName);
      if (pclose(find_cmd) < 0) {
        sprintf(msg, "Could not close file search comand.\n");
        rtmSetErrorStatus(FieldOrientedController_HIL_M, msg);
        return;
      }

      SG_PRINTF(DEBUG, "Found bitstream at: %s\n",mcsFileName);

#endif

#ifdef _MSC_BUILD

      if (sg_isModelInit()) {

#endif

        if ((mcs = fopen(mcsFileName, "r")) == NULL) {
          sprintf(msg, "Bitstream file not found at %s.\n", mcsFileName);
          rtmSetErrorStatus(FieldOrientedController_HIL_M, msg);
          SG_PRINTF(ERROR,msg);
          return;
        }

        bitstream = (uint32_t *) malloc(2192012*sizeof(uint32_t));
        fpgacode = (uint8_t *) malloc(2192012*sizeof(uint8_t));
        for (i = 0; i<2192012; i++) {
          fscanf(mcs,"%d\n",&bitstream[i]);
          fpgacode[i] = bitstream[i];
        }

        fclose(mcs);

        // Get Module ID's (PIC info)
        SG_PRINTF(INFO,"Getting module information.\n");
        ErrCode = (int32_t)sg_fpga_IO3xxGetModuleId(39750, &moduleId);
        if (ErrCode >= 0) {
          devname = moduleId.devname;
          moduleArchitecture = moduleId.moduleArchitecture;
          SG_PRINTF(DEBUG, "boardType: %d\n", 39750);
          SG_PRINTF(DEBUG, "ErrCode: %d\n", ErrCode);
          SG_PRINTF(DEBUG, "******************************************\n");
          SG_PRINTF(DEBUG, "moduleId->devname: %s\n", moduleId.devname);
          SG_PRINTF(DEBUG, "moduleId->vendorid: 0x%x\n", moduleId.vendorid);
          SG_PRINTF(DEBUG, "moduleId->subvendorid: 0x%x\n", moduleId.subvendorid);
          SG_PRINTF(DEBUG, "moduleId->deviceid: 0x%x\n", moduleId.deviceid);
          SG_PRINTF(DEBUG, "moduleId->subdeviceid: 0x%x\n", moduleId.subdeviceid);
          SG_PRINTF(DEBUG, "moduleId.moduleArchitecture: %d\n",
                    moduleId.moduleArchitecture);
        } else {
          sprintf(msg, "setup block: board type unknown.");
          rtmSetErrorStatus(FieldOrientedController_HIL_M, msg);
          SG_PRINTF(ERROR,msg);
          return;
        }

        //support for different architecture:
        SG_PRINTF(INFO,"Running board specific programming file.\n");
        switch (moduleArchitecture)
        {
         case TEWS_TPMC:
          ErrCode = IO30x_programFPGA(devname, (int16_t) -1 , (int16_t) -1 ,
            (int32_t) 1, (int32_t) 1 , (int32_t) 0, (uint32_t) 2192012,
            bitstream, &moduleId);
          break;

         case TEWS_TXMC:
          ErrCode = IO31x_IO32x_programmFPGA(devname, (int16_t) -1 , (int16_t) -
            1 , (int32_t) 1, (int32_t) 1 , (int32_t) 0, (uint32_t) 2192012,
            fpgacode, &moduleId, (uint32_t) 85);
          break;

         case ACROMAG_PMC:
          ErrCode = IO331_programmFPGA(devname, (int16_t) -1 , (int16_t) -1 ,
            (int32_t) 1, (int32_t) 1 , (uint32_t) 2192012, bitstream, &moduleId);
          break;

         case ACROMAG_XMC:
          if (39750 == 332) {
            ErrCode = IO332_programmFPGA(devname, (int16_t) -1 , (int16_t) -1 ,
              (int32_t) 1, (int32_t) 1 , (uint32_t) 2192012, bitstream,(uint32_t)
              -735530908, &moduleId);
          } else                       // IO333
          {
            ErrCode = IO333_programmFPGA(devname, (int16_t) -1 , (int16_t) -1 ,
              (int32_t) 1, (int32_t) 1 , (uint32_t) 2192012, bitstream,(uint32_t)
              -735530908, &moduleId);
          }
          break;

         case TEWS_MPCIE:
          ErrCode = IO39x_programmFPGA(devname, (int16_t) -1, (int16_t) -1 ,
            (int32_t) 1, (int32_t) 1, (uint32_t) 2192012, fpgacode, (uint32_t)
            85, &moduleId);
          break;

         default:
          sprintf(msg, "setup block: module architecture incorrect.");
          rtmSetErrorStatus(FieldOrientedController_HIL_M, msg);

          //Free the Bitstream allocation
          SG_PRINTF(ERROR,msg);
          free(bitstream);
          free(fpgacode);
          return;
        }

        //Free the Bitstream allocation
        free(bitstream);
        free(fpgacode);

        //Handle any error states
        switch (ErrCode)
        {
         case NO_ERR:
          {
            //Nothing to do.
            break;
          }

         case BOARD_NOT_FOUND:
          {
            sprintf(msg, "setup block %s: Board could not be found.\n",devname);
            rtmSetErrorStatus(FieldOrientedController_HIL_M, msg);
            SG_PRINTF(ERROR,msg);
            return;
            break;
          }

         case EEPROM_ERROR:
          {
            sprintf(msg, "setup block %s: Error updating board EEPROM.\n",
                    devname);
            rtmSetErrorStatus(FieldOrientedController_HIL_M, msg);
            SG_PRINTF(ERROR,msg);
            return;
            break;
          }

         case REPROG_ERROR:
          {
            sprintf(msg,
                    "setup block %s: Error writing new bitstream to FPGA.\n",
                    devname);
            rtmSetErrorStatus(FieldOrientedController_HIL_M, msg);
            SG_PRINTF(ERROR,msg);
            return;
            break;
          }

         case FLASH_ERROR:
          {
            sprintf(msg, "setup block %s: Bitstream flash storage error.\n",
                    devname);
            rtmSetErrorStatus(FieldOrientedController_HIL_M, msg);
            SG_PRINTF(ERROR,msg);
            return;
            break;
          }

         case BIST_ERROR:
          {
            sprintf(msg, "setup block %s: Built in self test error.\n", devname);
            rtmSetErrorStatus(FieldOrientedController_HIL_M, msg);
            SG_PRINTF(ERROR,msg);
            return;
            break;
          }

         case ICAP_RECONF_FAILED:
          {
            sprintf(msg,
                    "setup block %s: ICAP Reconfiguration was not successful.\n",
                    devname);
            rtmSetErrorStatus(FieldOrientedController_HIL_M, msg);
            SG_PRINTF(ERROR,msg);
            return;
            break;
          }

         case BOARD_TYPE_UNKNOWN:
          {
            sprintf(msg, "setup block %s: The board type selected is unknown.\n",
                    devname);
            rtmSetErrorStatus(FieldOrientedController_HIL_M, msg);
            SG_PRINTF(ERROR,msg);
            return;
            break;
          }

         default:
          {
            sprintf(msg, "setup block %s: An unknown error occurred.\n",devname);
            rtmSetErrorStatus(FieldOrientedController_HIL_M, msg);
            SG_PRINTF(ERROR,msg);
            return;
            break;
          }
        }

        if (1 == 2) {
          IO3xx_21_update(devname, 1, 0, 0, 0);
        } else if (1 == 3) {
          IO3xx_22_update(devname, 1, 0, 0, 0);
        }

#ifdef _MSC_BUILD

      }

#endif

    }

    /* Start for S-Function (sg_fpga_di_sf_a2): '<S7>/Digital input' */
    /* Level2 S-Function Block: '<S7>/Digital input' (sg_fpga_di_sf_a2) */
    {
      SimStruct *rts = FieldOrientedController_HIL_M->childSfunctions[0];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (sg_fpga_cap_sf_1): '<S7>/PWM Capture' */
    /* Level2 S-Function Block: '<S7>/PWM Capture' (sg_fpga_cap_sf_1) */
    {
      SimStruct *rts = FieldOrientedController_HIL_M->childSfunctions[1];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (sg_fpga_do_sf_a2): '<S8>/velocityCommand, motorOn' */
    /* Level2 S-Function Block: '<S8>/velocityCommand, motorOn' (sg_fpga_do_sf_a2) */
    {
      SimStruct *rts = FieldOrientedController_HIL_M->childSfunctions[2];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (sg_fpga_IO397_da): '<S8>/ADCPhaseCurrentCount' */
    /* Level2 S-Function Block: '<S8>/ADCPhaseCurrentCount' (sg_fpga_IO397_da) */
    {
      SimStruct *rts = FieldOrientedController_HIL_M->childSfunctions[3];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (sg_fpga_qae_sf_2): '<S8>/QAE (2)' */
    /* Level2 S-Function Block: '<S8>/QAE (2)' (sg_fpga_qae_sf_2) */
    {
      SimStruct *rts = FieldOrientedController_HIL_M->childSfunctions[4];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (overloadoptions): '<S11>/Overload Options Core' */
    {
      slrealtime::ModelInfo& modelInstanceModelInfo = slrealtime::
        getModelInstanceModelInfo();
      FieldOrientedController_HIL_DW.OverloadOptionsCore_PWORK[0] =
        &modelInstanceModelInfo.tasks_[0].overload_.startupDur_;
      FieldOrientedController_HIL_DW.OverloadOptionsCore_PWORK[1] =
        &modelInstanceModelInfo.tasks_[0].overload_.max_;
      FieldOrientedController_HIL_DW.OverloadOptionsCore_PWORK[2] =
        &modelInstanceModelInfo.tasks_[0].overload_.count_;
      FieldOrientedController_HIL_DW.OverloadOptionsCore_PWORK[3] = NULL;
      auto initializeOverloadOpsFcn = [](unsigned int* dst1, unsigned int* src1,
        unsigned int* dst2, unsigned int* src2)
      {
        *dst1 = *src1;
        *dst2 = *src2;
      }

      ;
      slrealtime::StartCallbackService::registerCB(std::bind
        (initializeOverloadOpsFcn, (unsigned int*)
         FieldOrientedController_HIL_DW.OverloadOptionsCore_PWORK[0],
         &FieldOrientedController_HIL_cal->OverloadOptions_startupDur,(unsigned
        int*)FieldOrientedController_HIL_DW.OverloadOptionsCore_PWORK[1],
         &FieldOrientedController_HIL_cal->OverloadOptions_maxOverload));
    }

    /* Start for S-Function (sg_fpga_inta_sf_2): '<S8>/CoS Interrupt (2)' */
    /* Level2 S-Function Block: '<S8>/CoS Interrupt (2)' (sg_fpga_inta_sf_2) */
    {
      SimStruct *rts = FieldOrientedController_HIL_M->childSfunctions[5];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (slhwinterrupt): '<Root>/Interrupt Setup' */

    // Initialize the sigevent structs.  One for no wakeup and the other
    // when the board did interrupt.
    SIGEV_NONE_INIT( &Root_InterruptSetup_D.sig_none );

    // Root_InterruptSetup_D.sig_pulse is initialized each time the interrupt
    // occurs so we can send the incrementing count.

    // With a defined PCI map function, use the IRQ from QNX.
    // Need to test for error return here.  Since the hook function
    // can be in C, an error won't throw, but will return a negative number.
    // *_D.context gets a pointer to a context, which would be pci addresses
    // mapped to virtual memory for a hardware board.
    // For interrupt mode with hardware, IRQ is meaningful and .context
    // will contain mapped addresses to talk to the board.
    // For polling hardware, IRQ is not used and .context is still mapped
    // addresses to talk to the board.
    // For polling XCP or some other out-of-model condition, then IRQ
    // is also ignored and .context is a pointer to context for that other
    // condition we want to find.  If this 'software device' doesn't
    // need any context, then just specify mapper as "none".

    // We call the map function if it exists for all 4 permutations.
    // Int or polling, function or model.
    Root_InterruptSetup_D.IRQ = IO397_50k_v2_map_public
      ( &Root_InterruptSetup_D.context, 1 );
    if (Root_InterruptSetup_D.IRQ < 0 ) {
      sprintf( Root_InterruptSetup_errmsg,
              "Fatal error when configuring the interrupt or polling source in $<Name>\n"
              );
      rtmSetErrorStatus(FieldOrientedController_HIL_M,
                        Root_InterruptSetup_errmsg);
    }

    // Priority is ignored in the sigevent because the connection is set up with priority
    // inheritance turned off.  But since we need to send it to codegen
    // adding it to the sigevent incurs no extra overhead.
    Root_InterruptSetup_D.pri = 254;

    // TaskID is 0 for Root_InterruptSetup_fc
    {
      // 1.  Attach the ISR to the IRQ we got from the map function
      uint32_T ret = InterruptAttach_r( Root_InterruptSetup_D.IRQ,
        Root_InterruptSetup_ISR,
        nullptr,
        0,
        0);
      if (ret >= 0 )                // ret is the interrupt ID, needed by detach
        Root_InterruptSetup_D.intrID = ret;
      else                            // ret is the negative of the error number
      {
        sprintf( Root_InterruptSetup_errmsg,
                "Error attaching interrupt for block <Root>/Interrupt Setup: %s\n",
                strerror( -1*ret ) );
        rtmSetErrorStatus(FieldOrientedController_HIL_M,
                          Root_InterruptSetup_errmsg);
      }

      slrealtime::SetInterruptMode( 0 );
      slrealtime::StartCallbackService::registerCB( std::bind
        ( Root_InterruptSetup_callback ), -100 );
    }
  }

  /* SystemInitialize for ModelReference generated from: '<Root>/PMSMPlantModel' */
  PMSM_Plant_Model_Init();
}

/* Model terminate function */
void FieldOrientedController_HIL_terminate(void)
{
  /* user code (Terminate function Header) */
  {
    // stop the board from interrupting, changing status or doing DMA transfers.
    IO397_50k_v2_stop_public( Root_InterruptSetup_D.context );

    // Detach the interrupt
    uint32_T ret = InterruptDetach_r( Root_InterruptSetup_D.intrID );
    if (ret != EOK ) {
      sprintf( Root_InterruptSetup_errmsg,
              "Error detaching interrupt for block <Root>/Interrupt Setup: %s\n",
              strerror( ret ) );
      rtmSetErrorStatus(FieldOrientedController_HIL_M,
                        Root_InterruptSetup_errmsg);
    }
  }

  /* Terminate for S-Function (sg_fpga_di_sf_a2): '<S7>/Digital input' */
  /* Level2 S-Function Block: '<S7>/Digital input' (sg_fpga_di_sf_a2) */
  {
    SimStruct *rts = FieldOrientedController_HIL_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_fpga_cap_sf_1): '<S7>/PWM Capture' */
  /* Level2 S-Function Block: '<S7>/PWM Capture' (sg_fpga_cap_sf_1) */
  {
    SimStruct *rts = FieldOrientedController_HIL_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Terminate for ModelReference generated from: '<Root>/PMSMPlantModel' */
  PMSM_Plant_Model_Term();

  /* Terminate for S-Function (sg_fpga_do_sf_a2): '<S8>/velocityCommand, motorOn' */
  /* Level2 S-Function Block: '<S8>/velocityCommand, motorOn' (sg_fpga_do_sf_a2) */
  {
    SimStruct *rts = FieldOrientedController_HIL_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_fpga_IO397_da): '<S8>/ADCPhaseCurrentCount' */
  /* Level2 S-Function Block: '<S8>/ADCPhaseCurrentCount' (sg_fpga_IO397_da) */
  {
    SimStruct *rts = FieldOrientedController_HIL_M->childSfunctions[3];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_fpga_qae_sf_2): '<S8>/QAE (2)' */
  /* Level2 S-Function Block: '<S8>/QAE (2)' (sg_fpga_qae_sf_2) */
  {
    SimStruct *rts = FieldOrientedController_HIL_M->childSfunctions[4];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_fpga_inta_sf_2): '<S8>/CoS Interrupt (2)' */
  /* Level2 S-Function Block: '<S8>/CoS Interrupt (2)' (sg_fpga_inta_sf_2) */
  {
    SimStruct *rts = FieldOrientedController_HIL_M->childSfunctions[5];
    sfcnTerminate(rts);
  }

  /* user code (Terminate function Trailer) */
  {
    volatile io3xx_pull *ptrIO31x_pull;
    volatile io3xx_2x *ptrio3xx_2x;
    uint16_t moduleArchitecture;
    sg_fpga_io3xxModuleIdT moduleId;

#ifdef _MSC_BUILD

    if (!sg_isModelInit()) {

#endif

      // Get Module ID's (PIC info)
      sg_fpga_IO3xxGetModuleId(39750, &moduleId);
      moduleArchitecture = moduleId.moduleArchitecture;
      SG_PRINTF(DEBUG, "moduleArchitecture %d\n",moduleArchitecture);
      if (moduleArchitecture == TEWS_TXMC) {
        //get pointer to io31x_pull
        ptrIO31x_pull= (io3xx_pull *)((uintptr_t)io3xxGetAddressSgLib((int32_t)
          1, BAR2) + IO3xx_PULL_BASE);

        //disable pull resistors
        ptrIO31x_pull->enable = 0x0;   //disable
      }

      // pull down and disable dio's
      if (1 >= 2) {
        ptrio3xx_2x = (io3xx_2x *)((uintptr_t)io3xxGetAddressSgLib((int32_t) 1,
          BAR2) + IO3xx_2x_BASE);
        ptrio3xx_2x->pull = 0xffffffff;//pull down
        ptrio3xx_2x->dir = 0x0;        //input
        ptrio3xx_2x->update = 0x1;
        sg_wait_s(WAIT_TIME_100us);
        ptrio3xx_2x->update = 0x0;
        sg_wait_s(WAIT_TIME_1ms);

#if DEBUGGING

        //for Debugging Output Port Register of IO-Expander
        sg_wait_s(WAIT_TIME_100ms);
        SG_PRINTF(INFO, "last configuration from mdl start\n");
        SG_PRINTF(INFO, "rxData of Expander1: 0x%X\n",
                  ptrio3xx_2x->rxDataExpander1);
        SG_PRINTF(INFO, "rxData of Expander2: 0x%X\n",
                  ptrio3xx_2x->rxDataExpander2);
        SG_PRINTF(INFO, "rxData of Expander3: 0x%X\n",
                  ptrio3xx_2x->rxDataExpander3);
        SG_PRINTF(INFO, "rxData of Expander4: 0x%X\n",
                  ptrio3xx_2x->rxDataExpander4);

#endif

      }

#ifdef _MSC_BUILD

    }

#endif

  }
}
