/*
 * FieldOrientedController_RCP.cpp
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

#include "FieldOrientedController_RCP.h"
#include "FieldOrientedController_RCP_private.h"
#include "rt_roundd_snf.h"

rtTimingBridge FieldOrientedController_RCP_TimingBrdg;
const userInputs FieldOrientedController_RCP_rtZuserInputs = {
  0.0,                                 /* torqueLoad */
  false,                               /* enCurrentSensor */
  false,                               /* motorOn */
  commandTypeEnum_Error,               /* commandType */
  0.0F                                 /* velocityCommand */
} ;                                    /* userInputs ground */

/* Block signals (default storage) */
B_FieldOrientedController_RCP_T FieldOrientedController_RCP_B;

/* Block states (default storage) */
DW_FieldOrientedController_RCP_T FieldOrientedController_RCP_DW;

/* Real-time model */
RT_MODEL_FieldOrientedController_RCP_T FieldOrientedController_RCP_M_ =
  RT_MODEL_FieldOrientedController_RCP_T();
RT_MODEL_FieldOrientedController_RCP_T *const FieldOrientedController_RCP_M =
  &FieldOrientedController_RCP_M_;

/*
 *   This function updates active task flag for each subrate.
 * The function is called in the model base rate function.
 * It maintains SampleHit information to allow scheduling
 * of the subrates from the base rate function.
 */
void rate_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (FieldOrientedController_RCP_M->Timing.TaskCounters.TID[1])++;
  if ((FieldOrientedController_RCP_M->Timing.TaskCounters.TID[1]) > 19) {/* Sample time: [0.001s, 0.0s] */
    FieldOrientedController_RCP_M->Timing.TaskCounters.TID[1] = 0;
  }
}

/* Model step function for TID0 */
void FieldOrientedController_RCP_step0(void) /* Sample time: [5.0E-5s, 0.0s] */
{
  real_T u0;
  uint32_T u0_0;
  uint32_T u1;

  /* Update the flag to indicate when data transfers from
   *  Sample time: [5.0E-5s, 0.0s] to Sample time: [0.001s, 0.0s]  */
  FieldOrientedController_RCP_M->Timing.perTaskSampleHits[1] =
    (FieldOrientedController_RCP_M->Timing.RateInteraction.TID0_1 == 0);
  FieldOrientedController_RCP_M->Timing.RateInteraction.b_TID0_1 =
    (FieldOrientedController_RCP_M->Timing.RateInteraction.TID0_1 == 0);
  (FieldOrientedController_RCP_M->Timing.RateInteraction.TID0_1)++;
  if ((FieldOrientedController_RCP_M->Timing.RateInteraction.TID0_1) > 19) {
    FieldOrientedController_RCP_M->Timing.RateInteraction.TID0_1 = 0;
  }

  /* SignalConversion: '<S6>/Signal Copy' */
  FieldOrientedController_RCP_B.SignalCopy = 0.0F;

  /* S-Function (sg_fpga_IO397_ad): '<S6>/IO397 Analog Input' */

  /* Level2 S-Function Block: '<S6>/IO397 Analog Input' (sg_fpga_IO397_ad) */
  {
    SimStruct *rts = FieldOrientedController_RCP_M->childSfunctions[0];
    sfcnOutputs(rts,0);
  }

  /* DataTypeConversion: '<S6>/Data Type Conversion' */
  FieldOrientedController_RCP_B.transducerVoltages[0] = static_cast<real32_T>
    (FieldOrientedController_RCP_B.IO397AnalogInput_o1);
  FieldOrientedController_RCP_B.transducerVoltages[1] = static_cast<real32_T>
    (FieldOrientedController_RCP_B.IO397AnalogInput_o2);

  /* Constant: '<S6>/Constant' */
  FieldOrientedController_RCP_B.Constant =
    FieldOrientedController_RCP_cal->Constant_Value_h;

  /* S-Function (sg_fpga_qad_sf_3): '<S6>/QAD (3)' */

  /* Level2 S-Function Block: '<S6>/QAD (3)' (sg_fpga_qad_sf_3) */
  {
    SimStruct *rts = FieldOrientedController_RCP_M->childSfunctions[1];
    sfcnOutputs(rts,0);
  }

  /* Math: '<S7>/Math Function' incorporates:
   *  Constant: '<S7>/Constant'
   */
  u0_0 = FieldOrientedController_RCP_B.encoderCountRaw;
  u1 = FieldOrientedController_RCP_cal->Constant_Value;
  if (u1 == 0U) {
    /* Math: '<S7>/Math Function' */
    FieldOrientedController_RCP_B.MathFunction = u0_0;
  } else {
    /* Math: '<S7>/Math Function' */
    FieldOrientedController_RCP_B.MathFunction = u0_0 % u1;
  }

  /* End of Math: '<S7>/Math Function' */

  /* MATLAB Function: '<S7>/Wrap to Positive' */
  /* MATLAB Function 'MotorDrive/New Kit/Condition Encoder/Wrap to Positive': '<S8>:1' */
  /* '<S8>:1:6' */
  FieldOrientedController_RCP_B.y = FieldOrientedController_RCP_B.MathFunction;
  if (FieldOrientedController_RCP_cal->ConditionEncoder_positiveDirection != 1.0)
  {
    /* '<S8>:1:25' */
    /* '<S8>:1:26' */
    u0 = rt_roundd_snf
      ((FieldOrientedController_RCP_cal->ConditionEncoder_cntsPerRevolution -
        1.0) - static_cast<real_T>(FieldOrientedController_RCP_B.MathFunction));
    if (u0 < 4.294967296E+9) {
      if (u0 >= 0.0) {
        u0_0 = static_cast<uint32_T>(u0);
      } else {
        u0_0 = 0U;
      }
    } else {
      u0_0 = MAX_uint32_T;
    }

    FieldOrientedController_RCP_B.y = u0_0;
  }

  /* End of MATLAB Function: '<S7>/Wrap to Positive' */

  /* DataTypeConversion: '<S7>/Data Type Conversion1' */
  FieldOrientedController_RCP_B.DataTypeConversion1_e = static_cast<uint16_T>
    (FieldOrientedController_RCP_B.y);

  /* ModelReference generated from: '<Root>/FieldOrientedController' */
  FieldOrientedControllerTID0(&FieldOrientedController_RCP_B.transducerVoltages
    [0], &FieldOrientedController_RCP_B.Constant,
    &FieldOrientedController_RCP_B.DataTypeConversion1_e,
    &FieldOrientedController_RCP_B.enInverter,
    &FieldOrientedController_RCP_B.pwmCompare[0]);

  /* RateTransition generated from: '<Root>/FieldOrientedController' */
  if (FieldOrientedController_RCP_M->Timing.RateInteraction.TID0_1 == 1) {
    FieldOrientedController_RCP_DW.userInputs_RdBufIdx = static_cast<int8_T>
      (FieldOrientedController_RCP_DW.userInputs_RdBufIdx == 0);
  }

  /* RateTransition generated from: '<Root>/FieldOrientedController' */
  FieldOrientedController_RCP_B.userInputs_j =
    FieldOrientedController_RCP_DW.userInputs_Buf[FieldOrientedController_RCP_DW.userInputs_RdBufIdx];

  /* RateTransition generated from: '<Root>/FieldOrientedController' */
  if (FieldOrientedController_RCP_M->Timing.RateInteraction.TID0_1 == 1) {
    FieldOrientedController_RCP_DW.userInputs1_RdBufIdx = static_cast<int8_T>
      (FieldOrientedController_RCP_DW.userInputs1_RdBufIdx == 0);
  }

  /* RateTransition generated from: '<Root>/FieldOrientedController' */
  FieldOrientedController_RCP_B.userInputs1 =
    FieldOrientedController_RCP_DW.userInputs1_Buf[FieldOrientedController_RCP_DW.userInputs1_RdBufIdx];

  /* UnitDelay: '<S6>/Unit Delay' */
  FieldOrientedController_RCP_B.UnitDelay =
    FieldOrientedController_RCP_DW.UnitDelay_DSTATE;

  /* DataTypeConversion: '<S6>/Data Type Conversion1' */
  FieldOrientedController_RCP_B.DataTypeConversion1 =
    FieldOrientedController_RCP_B.enInverter;

  /* Logic: '<S6>/NOT' */
  FieldOrientedController_RCP_B.NOT =
    !(FieldOrientedController_RCP_B.DataTypeConversion1 != 0.0);

  /* DataTypeConversion: '<S6>/Data Type Conversion2' */
  FieldOrientedController_RCP_B.Enableinv = FieldOrientedController_RCP_B.NOT;

  /* S-Function (sg_fpga_do_sf_a2): '<S6>/Digital output' */

  /* Level2 S-Function Block: '<S6>/Digital output' (sg_fpga_do_sf_a2) */
  {
    SimStruct *rts = FieldOrientedController_RCP_M->childSfunctions[2];
    sfcnOutputs(rts,0);
  }

  /* Gain: '<S6>/Gain' */
  FieldOrientedController_RCP_B.pwmDutyCycle[0] = static_cast<real_T>
    (FieldOrientedController_RCP_cal->Gain_Gain) * 1.4901161193847656E-8 *
    static_cast<real_T>(FieldOrientedController_RCP_B.pwmCompare[0]);
  FieldOrientedController_RCP_B.pwmDutyCycle[1] = static_cast<real_T>
    (FieldOrientedController_RCP_cal->Gain_Gain) * 1.4901161193847656E-8 *
    static_cast<real_T>(FieldOrientedController_RCP_B.pwmCompare[1]);
  FieldOrientedController_RCP_B.pwmDutyCycle[2] = static_cast<real_T>
    (FieldOrientedController_RCP_cal->Gain_Gain) * 1.4901161193847656E-8 *
    static_cast<real_T>(FieldOrientedController_RCP_B.pwmCompare[2]);

  /* Saturate: '<S6>/Saturation' */
  u0 = FieldOrientedController_RCP_B.pwmDutyCycle[0];
  if (u0 > FieldOrientedController_RCP_cal->Saturation_UpperSat) {
    u0 = FieldOrientedController_RCP_cal->Saturation_UpperSat;
  } else {
    if (u0 < FieldOrientedController_RCP_cal->Saturation_LowerSat) {
      u0 = FieldOrientedController_RCP_cal->Saturation_LowerSat;
    }
  }

  /* Saturate: '<S6>/Saturation' */
  FieldOrientedController_RCP_B.PWMDutyCycle[0] = u0;

  /* Saturate: '<S6>/Saturation' */
  u0 = FieldOrientedController_RCP_B.pwmDutyCycle[1];
  if (u0 > FieldOrientedController_RCP_cal->Saturation_UpperSat) {
    u0 = FieldOrientedController_RCP_cal->Saturation_UpperSat;
  } else {
    if (u0 < FieldOrientedController_RCP_cal->Saturation_LowerSat) {
      u0 = FieldOrientedController_RCP_cal->Saturation_LowerSat;
    }
  }

  /* Saturate: '<S6>/Saturation' */
  FieldOrientedController_RCP_B.PWMDutyCycle[1] = u0;

  /* Saturate: '<S6>/Saturation' */
  u0 = FieldOrientedController_RCP_B.pwmDutyCycle[2];
  if (u0 > FieldOrientedController_RCP_cal->Saturation_UpperSat) {
    u0 = FieldOrientedController_RCP_cal->Saturation_UpperSat;
  } else {
    if (u0 < FieldOrientedController_RCP_cal->Saturation_LowerSat) {
      u0 = FieldOrientedController_RCP_cal->Saturation_LowerSat;
    }
  }

  /* Saturate: '<S6>/Saturation' */
  FieldOrientedController_RCP_B.PWMDutyCycle[2] = u0;

  /* S-Function (sg_fpga_pwm_sf_5): '<S6>/PWM generation (5)' */

  /* Level2 S-Function Block: '<S6>/PWM generation (5)' (sg_fpga_pwm_sf_5) */
  {
    SimStruct *rts = FieldOrientedController_RCP_M->childSfunctions[3];
    sfcnOutputs(rts,0);
  }

  /* Update for UnitDelay: '<S6>/Unit Delay' incorporates:
   *  Constant: '<S6>/rstInvtrFlt'
   */
  FieldOrientedController_RCP_DW.UnitDelay_DSTATE =
    FieldOrientedController_RCP_cal->rstInvtrFlt_Value;

  /* Update absolute time */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++FieldOrientedController_RCP_M->Timing.clockTick0)) {
    ++FieldOrientedController_RCP_M->Timing.clockTickH0;
  }

  FieldOrientedController_RCP_M->Timing.t[0] =
    FieldOrientedController_RCP_M->Timing.clockTick0 *
    FieldOrientedController_RCP_M->Timing.stepSize0 +
    FieldOrientedController_RCP_M->Timing.clockTickH0 *
    FieldOrientedController_RCP_M->Timing.stepSize0 * 4294967296.0;
}

/* Model step function for TID1 */
void FieldOrientedController_RCP_step1(void) /* Sample time: [0.001s, 0.0s] */
{
  /* Constant: '<S1>/velocityCmd' */
  FieldOrientedController_RCP_B.velocityCommand =
    FieldOrientedController_RCP_cal->velocityCmd_Value;

  /* BusCreator: '<S1>/Bus Creator2' incorporates:
   *  Constant: '<S1>/MotorOn'
   *  Constant: '<S1>/commandType'
   *  Constant: '<S1>/enCurrentSensor'
   *  Constant: '<S1>/torqueLoad'
   */
  FieldOrientedController_RCP_B.BusCreator2.torqueLoad =
    FieldOrientedController_RCP_cal->torqueLoad_Value;
  FieldOrientedController_RCP_B.BusCreator2.enCurrentSensor =
    FieldOrientedController_RCP_cal->enCurrentSensor_Value;
  FieldOrientedController_RCP_B.BusCreator2.motorOn =
    FieldOrientedController_RCP_cal->MotorOn_Value;
  FieldOrientedController_RCP_B.BusCreator2.commandType =
    FieldOrientedController_RCP_cal->commandType_Value;
  FieldOrientedController_RCP_B.BusCreator2.velocityCommand =
    FieldOrientedController_RCP_B.velocityCommand;

  /* FromWorkspace: '<S3>/fromWS_Signal 1' */
  {
    real_T t = (((FieldOrientedController_RCP_M->Timing.clockTick1+
                  FieldOrientedController_RCP_M->Timing.clockTickH1*
                  4294967296.0)) * 0.001);
    real_T *pTimeValues = static_cast<real_T *>
      (FieldOrientedController_RCP_DW.fromWS_Signal1_PWORK.TimePtr[0]);
    real_T *pDataValues = static_cast<real_T *>
      (FieldOrientedController_RCP_DW.fromWS_Signal1_PWORK.DataPtr[0]);
    if (t < pTimeValues[0]) {
      FieldOrientedController_RCP_B.userInputs_a.torqueLoad =
        FieldOrientedController_RCP_rtZuserInputs.torqueLoad;
    } else if (t >= pTimeValues[1]) {
      FieldOrientedController_RCP_B.userInputs_a.torqueLoad = pDataValues[1];
    } else {
      int_T currTimeIndex =
        FieldOrientedController_RCP_DW.fromWS_Signal1_IWORK.PrevIndex[0];
      if (t < pTimeValues[currTimeIndex]) {
        while (t < pTimeValues[currTimeIndex]) {
          currTimeIndex--;
        }
      } else {
        while (t >= pTimeValues[currTimeIndex + 1]) {
          currTimeIndex++;
        }
      }

      FieldOrientedController_RCP_B.userInputs_a.torqueLoad =
        pDataValues[currTimeIndex];
      FieldOrientedController_RCP_DW.fromWS_Signal1_IWORK.PrevIndex[0] =
        currTimeIndex;
    }
  }

  {
    real_T t = (((FieldOrientedController_RCP_M->Timing.clockTick1+
                  FieldOrientedController_RCP_M->Timing.clockTickH1*
                  4294967296.0)) * 0.001);
    real_T *pTimeValues = static_cast<real_T *>
      (FieldOrientedController_RCP_DW.fromWS_Signal1_PWORK.TimePtr[1]);
    boolean_T *pDataValues = static_cast<boolean_T *>
      (FieldOrientedController_RCP_DW.fromWS_Signal1_PWORK.DataPtr[1]);
    if (t < pTimeValues[0]) {
      FieldOrientedController_RCP_B.userInputs_a.enCurrentSensor =
        FieldOrientedController_RCP_rtZuserInputs.enCurrentSensor;
    } else if (t >= pTimeValues[1]) {
      FieldOrientedController_RCP_B.userInputs_a.enCurrentSensor = pDataValues[1];
    } else {
      int_T currTimeIndex =
        FieldOrientedController_RCP_DW.fromWS_Signal1_IWORK.PrevIndex[1];
      if (t < pTimeValues[currTimeIndex]) {
        while (t < pTimeValues[currTimeIndex]) {
          currTimeIndex--;
        }
      } else {
        while (t >= pTimeValues[currTimeIndex + 1]) {
          currTimeIndex++;
        }
      }

      FieldOrientedController_RCP_B.userInputs_a.enCurrentSensor =
        pDataValues[currTimeIndex];
      FieldOrientedController_RCP_DW.fromWS_Signal1_IWORK.PrevIndex[1] =
        currTimeIndex;
    }
  }

  {
    real_T t = (((FieldOrientedController_RCP_M->Timing.clockTick1+
                  FieldOrientedController_RCP_M->Timing.clockTickH1*
                  4294967296.0)) * 0.001);
    real_T *pTimeValues = static_cast<real_T *>
      (FieldOrientedController_RCP_DW.fromWS_Signal1_PWORK.TimePtr[2]);
    boolean_T *pDataValues = static_cast<boolean_T *>
      (FieldOrientedController_RCP_DW.fromWS_Signal1_PWORK.DataPtr[2]);
    if (t < pTimeValues[0]) {
      FieldOrientedController_RCP_B.userInputs_a.motorOn =
        FieldOrientedController_RCP_rtZuserInputs.motorOn;
    } else if (t >= pTimeValues[5]) {
      FieldOrientedController_RCP_B.userInputs_a.motorOn = pDataValues[5];
    } else {
      int_T currTimeIndex =
        FieldOrientedController_RCP_DW.fromWS_Signal1_IWORK.PrevIndex[2];
      if (t < pTimeValues[currTimeIndex]) {
        while (t < pTimeValues[currTimeIndex]) {
          currTimeIndex--;
        }
      } else {
        while (t >= pTimeValues[currTimeIndex + 1]) {
          currTimeIndex++;
        }
      }

      FieldOrientedController_RCP_B.userInputs_a.motorOn =
        pDataValues[currTimeIndex];
      FieldOrientedController_RCP_DW.fromWS_Signal1_IWORK.PrevIndex[2] =
        currTimeIndex;
    }
  }

  {
    real_T t = (((FieldOrientedController_RCP_M->Timing.clockTick1+
                  FieldOrientedController_RCP_M->Timing.clockTickH1*
                  4294967296.0)) * 0.001);
    real_T *pTimeValues = static_cast<real_T *>
      (FieldOrientedController_RCP_DW.fromWS_Signal1_PWORK.TimePtr[3]);
    commandTypeEnum *pDataValues = static_cast<commandTypeEnum *>
      (FieldOrientedController_RCP_DW.fromWS_Signal1_PWORK.DataPtr[3]);
    if (t < pTimeValues[0]) {
      FieldOrientedController_RCP_B.userInputs_a.commandType =
        FieldOrientedController_RCP_rtZuserInputs.commandType;
    } else if (t >= pTimeValues[3]) {
      FieldOrientedController_RCP_B.userInputs_a.commandType = pDataValues[3];
    } else {
      int_T currTimeIndex =
        FieldOrientedController_RCP_DW.fromWS_Signal1_IWORK.PrevIndex[3];
      if (t < pTimeValues[currTimeIndex]) {
        while (t < pTimeValues[currTimeIndex]) {
          currTimeIndex--;
        }
      } else {
        while (t >= pTimeValues[currTimeIndex + 1]) {
          currTimeIndex++;
        }
      }

      FieldOrientedController_RCP_B.userInputs_a.commandType =
        pDataValues[currTimeIndex];
      FieldOrientedController_RCP_DW.fromWS_Signal1_IWORK.PrevIndex[3] =
        currTimeIndex;
    }
  }

  {
    real_T t = (((FieldOrientedController_RCP_M->Timing.clockTick1+
                  FieldOrientedController_RCP_M->Timing.clockTickH1*
                  4294967296.0)) * 0.001);
    real_T *pTimeValues = static_cast<real_T *>
      (FieldOrientedController_RCP_DW.fromWS_Signal1_PWORK.TimePtr[4]);
    real32_T *pDataValues = static_cast<real32_T *>
      (FieldOrientedController_RCP_DW.fromWS_Signal1_PWORK.DataPtr[4]);
    if (t < pTimeValues[0]) {
      FieldOrientedController_RCP_B.userInputs_a.velocityCommand =
        FieldOrientedController_RCP_rtZuserInputs.velocityCommand;
    } else if (t >= pTimeValues[8]) {
      FieldOrientedController_RCP_B.userInputs_a.velocityCommand = pDataValues[8];
    } else {
      int_T currTimeIndex =
        FieldOrientedController_RCP_DW.fromWS_Signal1_IWORK.PrevIndex[4];
      if (t < pTimeValues[currTimeIndex]) {
        while (t < pTimeValues[currTimeIndex]) {
          currTimeIndex--;
        }
      } else {
        while (t >= pTimeValues[currTimeIndex + 1]) {
          currTimeIndex++;
        }
      }

      FieldOrientedController_RCP_B.userInputs_a.velocityCommand =
        pDataValues[currTimeIndex];
      FieldOrientedController_RCP_DW.fromWS_Signal1_IWORK.PrevIndex[4] =
        currTimeIndex;
    }
  }

  /* Switch: '<Root>/switch' incorporates:
   *  Constant: '<Root>/enManualTestInputs'
   */
  if (FieldOrientedController_RCP_cal->enManualTestInputs_Value) {
    /* Switch: '<Root>/switch' */
    FieldOrientedController_RCP_B.userInputs_e =
      FieldOrientedController_RCP_B.BusCreator2;
  } else {
    /* Switch: '<Root>/switch' */
    FieldOrientedController_RCP_B.userInputs_e =
      FieldOrientedController_RCP_B.userInputs_a;
  }

  /* End of Switch: '<Root>/switch' */

  /* ModelReference generated from: '<Root>/FieldOrientedController' */
  FieldOrientedControllerTID1
    (&FieldOrientedController_RCP_B.userInputs_e.motorOn,
     &FieldOrientedController_RCP_B.userInputs_e.commandType,
     &FieldOrientedController_RCP_B.userInputs_e.velocityCommand,
     &FieldOrientedController_RCP_B.Constant,
     &FieldOrientedController_RCP_B.mode,
     &FieldOrientedController_RCP_B.rotorVelocity);

  /* SignalConversion: '<S5>/modeCopy' */
  FieldOrientedController_RCP_B.mode_j = FieldOrientedController_RCP_B.mode;

  /* SignalConversion: '<S5>/rotorVelocityCopy' */
  FieldOrientedController_RCP_B.rotorVelocityCopy =
    FieldOrientedController_RCP_B.rotorVelocity;

  /* RateTransition generated from: '<Root>/FieldOrientedController' */
  FieldOrientedController_RCP_DW.userInputs_WrBufIdx = static_cast<int8_T>
    (FieldOrientedController_RCP_DW.userInputs_WrBufIdx == 0);
  FieldOrientedController_RCP_DW.userInputs_Buf[FieldOrientedController_RCP_DW.userInputs_WrBufIdx]
    = FieldOrientedController_RCP_B.userInputs_e.torqueLoad;

  /* RateTransition generated from: '<Root>/FieldOrientedController' */
  FieldOrientedController_RCP_DW.userInputs1_WrBufIdx = static_cast<int8_T>
    (FieldOrientedController_RCP_DW.userInputs1_WrBufIdx == 0);
  FieldOrientedController_RCP_DW.userInputs1_Buf[FieldOrientedController_RCP_DW.userInputs1_WrBufIdx]
    = FieldOrientedController_RCP_B.userInputs_e.enCurrentSensor;

  /* Update absolute time */
  /* The "clockTick1" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 0.001, which is the step size
   * of the task. Size of "clockTick1" ensures timer will not overflow during the
   * application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick1 and the high bits
   * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
   */
  FieldOrientedController_RCP_M->Timing.clockTick1++;
  if (!FieldOrientedController_RCP_M->Timing.clockTick1) {
    FieldOrientedController_RCP_M->Timing.clockTickH1++;
  }
}

/* Model step wrapper function for compatibility with a static main program */
void FieldOrientedController_RCP_step(int_T tid)
{
  switch (tid) {
   case 0 :
    FieldOrientedController_RCP_step0();
    break;

   case 1 :
    FieldOrientedController_RCP_step1();
    break;

   default :
    break;
  }
}

/* Model initialize function */
void FieldOrientedController_RCP_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));
  (FieldOrientedController_RCP_M)->Timing.TaskCounters.cLimit[0] = 1;
  (FieldOrientedController_RCP_M)->Timing.TaskCounters.cLimit[1] = 20;
  rtsiSetSolverName(&FieldOrientedController_RCP_M->solverInfo,
                    "FixedStepDiscrete");
  FieldOrientedController_RCP_M->solverInfoPtr =
    (&FieldOrientedController_RCP_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap =
      FieldOrientedController_RCP_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    FieldOrientedController_RCP_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    FieldOrientedController_RCP_M->Timing.sampleTimes =
      (&FieldOrientedController_RCP_M->Timing.sampleTimesArray[0]);
    FieldOrientedController_RCP_M->Timing.offsetTimes =
      (&FieldOrientedController_RCP_M->Timing.offsetTimesArray[0]);

    /* task periods */
    FieldOrientedController_RCP_M->Timing.sampleTimes[0] = (5.0E-5);
    FieldOrientedController_RCP_M->Timing.sampleTimes[1] = (0.001);

    /* task offsets */
    FieldOrientedController_RCP_M->Timing.offsetTimes[0] = (0.0);
    FieldOrientedController_RCP_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(FieldOrientedController_RCP_M,
             &FieldOrientedController_RCP_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = FieldOrientedController_RCP_M->Timing.sampleHitArray;
    int_T *mdlPerTaskSampleHits =
      FieldOrientedController_RCP_M->Timing.perTaskSampleHitsArray;
    FieldOrientedController_RCP_M->Timing.perTaskSampleHits =
      (&mdlPerTaskSampleHits[0]);
    mdlSampleHits[0] = 1;
    FieldOrientedController_RCP_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(FieldOrientedController_RCP_M, -1);
  FieldOrientedController_RCP_M->Timing.stepSize0 = 5.0E-5;
  FieldOrientedController_RCP_M->solverInfoPtr =
    (&FieldOrientedController_RCP_M->solverInfo);
  FieldOrientedController_RCP_M->Timing.stepSize = (5.0E-5);
  rtsiSetFixedStepSize(&FieldOrientedController_RCP_M->solverInfo, 5.0E-5);
  rtsiSetSolverMode(&FieldOrientedController_RCP_M->solverInfo,
                    SOLVER_MODE_MULTITASKING);

  /* block I/O */
  (void) std::memset((static_cast<void *>(&FieldOrientedController_RCP_B)), 0,
                     sizeof(B_FieldOrientedController_RCP_T));

  {
    FieldOrientedController_RCP_B.BusCreator2 =
      FieldOrientedController_RCP_rtZuserInputs;
    FieldOrientedController_RCP_B.userInputs_a =
      FieldOrientedController_RCP_rtZuserInputs;
    FieldOrientedController_RCP_B.userInputs_e =
      FieldOrientedController_RCP_rtZuserInputs;
    FieldOrientedController_RCP_B.IO397AnalogInput_o1 = 0.0;
    FieldOrientedController_RCP_B.IO397AnalogInput_o2 = 0.0;
    FieldOrientedController_RCP_B.userInputs_j = 0.0;
    FieldOrientedController_RCP_B.UnitDelay = 0.0;
    FieldOrientedController_RCP_B.DataTypeConversion1 = 0.0;
    FieldOrientedController_RCP_B.Enableinv = 0.0;
    FieldOrientedController_RCP_B.pwmDutyCycle[0] = 0.0;
    FieldOrientedController_RCP_B.pwmDutyCycle[1] = 0.0;
    FieldOrientedController_RCP_B.pwmDutyCycle[2] = 0.0;
    FieldOrientedController_RCP_B.PWMDutyCycle[0] = 0.0;
    FieldOrientedController_RCP_B.PWMDutyCycle[1] = 0.0;
    FieldOrientedController_RCP_B.PWMDutyCycle[2] = 0.0;
    FieldOrientedController_RCP_B.SignalCopy = 0.0F;
    FieldOrientedController_RCP_B.transducerVoltages[0] = 0.0F;
    FieldOrientedController_RCP_B.transducerVoltages[1] = 0.0F;
    FieldOrientedController_RCP_B.velocityCommand = 0.0F;
    FieldOrientedController_RCP_B.rotorVelocity = 0.0F;
    FieldOrientedController_RCP_B.rotorVelocityCopy = 0.0F;
    FieldOrientedController_RCP_B.mode = None;
    FieldOrientedController_RCP_B.mode_j = None;
  }

  /* states (dwork) */
  (void) std::memset(static_cast<void *>(&FieldOrientedController_RCP_DW), 0,
                     sizeof(DW_FieldOrientedController_RCP_T));
  FieldOrientedController_RCP_DW.UnitDelay_DSTATE = 0.0;
  FieldOrientedController_RCP_DW.userInputs_Buf[0] = 0.0;
  FieldOrientedController_RCP_DW.userInputs_Buf[1] = 0.0;

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo =
      &FieldOrientedController_RCP_M->NonInlinedSFcns.sfcnInfo;
    FieldOrientedController_RCP_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus
      (FieldOrientedController_RCP_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo,
      &FieldOrientedController_RCP_M->Sizes.numSampTimes);
    FieldOrientedController_RCP_M->NonInlinedSFcns.taskTimePtrs[0] =
      &(rtmGetTPtr(FieldOrientedController_RCP_M)[0]);
    FieldOrientedController_RCP_M->NonInlinedSFcns.taskTimePtrs[1] =
      &(rtmGetTPtr(FieldOrientedController_RCP_M)[1]);
    rtssSetTPtrPtr(sfcnInfo,
                   FieldOrientedController_RCP_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(FieldOrientedController_RCP_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(FieldOrientedController_RCP_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (FieldOrientedController_RCP_M));
    rtssSetStepSizePtr(sfcnInfo, &FieldOrientedController_RCP_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested
      (FieldOrientedController_RCP_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &FieldOrientedController_RCP_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &FieldOrientedController_RCP_M->zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &FieldOrientedController_RCP_M->CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo,
                         &FieldOrientedController_RCP_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &FieldOrientedController_RCP_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &FieldOrientedController_RCP_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &FieldOrientedController_RCP_M->solverInfoPtr);
  }

  FieldOrientedController_RCP_M->Sizes.numSFcns = (4);

  /* register each child */
  {
    (void) std::memset(static_cast<void *>
                       (&FieldOrientedController_RCP_M->NonInlinedSFcns.childSFunctions
                        [0]), 0,
                       4*sizeof(SimStruct));
    FieldOrientedController_RCP_M->childSfunctions =
      (&FieldOrientedController_RCP_M->NonInlinedSFcns.childSFunctionPtrs[0]);
    FieldOrientedController_RCP_M->childSfunctions[0] =
      (&FieldOrientedController_RCP_M->NonInlinedSFcns.childSFunctions[0]);
    FieldOrientedController_RCP_M->childSfunctions[1] =
      (&FieldOrientedController_RCP_M->NonInlinedSFcns.childSFunctions[1]);
    FieldOrientedController_RCP_M->childSfunctions[2] =
      (&FieldOrientedController_RCP_M->NonInlinedSFcns.childSFunctions[2]);
    FieldOrientedController_RCP_M->childSfunctions[3] =
      (&FieldOrientedController_RCP_M->NonInlinedSFcns.childSFunctions[3]);

    /* Level2 S-Function Block: FieldOrientedController_RCP/<S6>/IO397 Analog Input (sg_fpga_IO397_ad) */
    {
      SimStruct *rts = FieldOrientedController_RCP_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod =
        FieldOrientedController_RCP_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset =
        FieldOrientedController_RCP_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap =
        FieldOrientedController_RCP_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &FieldOrientedController_RCP_M->NonInlinedSFcns.blkInfo2
                         [0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &FieldOrientedController_RCP_M->NonInlinedSFcns.inputOutputPortInfo2[0]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, FieldOrientedController_RCP_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &FieldOrientedController_RCP_M->NonInlinedSFcns.methods2
                           [0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &FieldOrientedController_RCP_M->NonInlinedSFcns.methods3
                           [0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &FieldOrientedController_RCP_M->NonInlinedSFcns.methods4
                           [0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &FieldOrientedController_RCP_M->NonInlinedSFcns.statesInfo2
                         [0]);
        ssSetPeriodicStatesInfo(rts,
          &FieldOrientedController_RCP_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &FieldOrientedController_RCP_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 2);
        _ssSetPortInfo2ForOutputUnits(rts,
          &FieldOrientedController_RCP_M->NonInlinedSFcns.Sfcn0.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &FieldOrientedController_RCP_M->NonInlinedSFcns.Sfcn0.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &FieldOrientedController_RCP_B.IO397AnalogInput_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &FieldOrientedController_RCP_B.IO397AnalogInput_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "IO397 Analog Input");
      ssSetPath(rts,
                "FieldOrientedController_RCP/MotorDrive/New Kit/IO397 Analog Input");
      ssSetRTModel(rts,FieldOrientedController_RCP_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &FieldOrientedController_RCP_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       FieldOrientedController_RCP_cal->IO397AnalogInput_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       FieldOrientedController_RCP_cal->IO397AnalogInput_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       FieldOrientedController_RCP_cal->IO397AnalogInput_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       FieldOrientedController_RCP_cal->IO397AnalogInput_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       FieldOrientedController_RCP_cal->IO397AnalogInput_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       FieldOrientedController_RCP_cal->IO397AnalogInput_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       FieldOrientedController_RCP_cal->IO397AnalogInput_P7_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **)
                 &FieldOrientedController_RCP_DW.IO397AnalogInput_PWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &FieldOrientedController_RCP_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &FieldOrientedController_RCP_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &FieldOrientedController_RCP_DW.IO397AnalogInput_PWORK[0]);
      }

      /* registration */
      sg_fpga_IO397_ad(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 5.0E-5);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: FieldOrientedController_RCP/<S6>/QAD (3) (sg_fpga_qad_sf_3) */
    {
      SimStruct *rts = FieldOrientedController_RCP_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod =
        FieldOrientedController_RCP_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset =
        FieldOrientedController_RCP_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap =
        FieldOrientedController_RCP_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &FieldOrientedController_RCP_M->NonInlinedSFcns.blkInfo2
                         [1]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &FieldOrientedController_RCP_M->NonInlinedSFcns.inputOutputPortInfo2[1]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, FieldOrientedController_RCP_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &FieldOrientedController_RCP_M->NonInlinedSFcns.methods2
                           [1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &FieldOrientedController_RCP_M->NonInlinedSFcns.methods3
                           [1]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &FieldOrientedController_RCP_M->NonInlinedSFcns.methods4
                           [1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &FieldOrientedController_RCP_M->NonInlinedSFcns.statesInfo2
                         [1]);
        ssSetPeriodicStatesInfo(rts,
          &FieldOrientedController_RCP_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &FieldOrientedController_RCP_M->NonInlinedSFcns.Sfcn1.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &FieldOrientedController_RCP_M->NonInlinedSFcns.Sfcn1.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &FieldOrientedController_RCP_M->NonInlinedSFcns.Sfcn1.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *)
            &FieldOrientedController_RCP_B.encoderCountRaw));
        }
      }

      /* path info */
      ssSetModelName(rts, "QAD (3)");
      ssSetPath(rts, "FieldOrientedController_RCP/MotorDrive/New Kit/QAD (3)");
      ssSetRTModel(rts,FieldOrientedController_RCP_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &FieldOrientedController_RCP_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 21);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       FieldOrientedController_RCP_cal->QAD3_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       FieldOrientedController_RCP_cal->QAD3_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       FieldOrientedController_RCP_cal->QAD3_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       FieldOrientedController_RCP_cal->QAD3_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       FieldOrientedController_RCP_cal->QAD3_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       FieldOrientedController_RCP_cal->QAD3_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       FieldOrientedController_RCP_cal->QAD3_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       FieldOrientedController_RCP_cal->QAD3_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)
                       FieldOrientedController_RCP_cal->QAD3_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)
                       FieldOrientedController_RCP_cal->QAD3_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)
                       FieldOrientedController_RCP_cal->QAD3_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)
                       FieldOrientedController_RCP_cal->QAD3_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)
                       FieldOrientedController_RCP_cal->QAD3_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)
                       FieldOrientedController_RCP_cal->QAD3_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)
                       FieldOrientedController_RCP_cal->QAD3_P15_Size);
        ssSetSFcnParam(rts, 15, (mxArray*)
                       FieldOrientedController_RCP_cal->QAD3_P16_Size);
        ssSetSFcnParam(rts, 16, (mxArray*)
                       FieldOrientedController_RCP_cal->QAD3_P17_Size);
        ssSetSFcnParam(rts, 17, (mxArray*)
                       FieldOrientedController_RCP_cal->QAD3_P18_Size);
        ssSetSFcnParam(rts, 18, (mxArray*)
                       FieldOrientedController_RCP_cal->QAD3_P19_Size);
        ssSetSFcnParam(rts, 19, (mxArray*)
                       FieldOrientedController_RCP_cal->QAD3_P20_Size);
        ssSetSFcnParam(rts, 20, (mxArray*)
                       FieldOrientedController_RCP_cal->QAD3_P21_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &FieldOrientedController_RCP_DW.QAD3_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &FieldOrientedController_RCP_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &FieldOrientedController_RCP_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &FieldOrientedController_RCP_DW.QAD3_PWORK);
      }

      /* registration */
      sg_fpga_qad_sf_3(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 5.0E-5);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: FieldOrientedController_RCP/<S6>/Digital output (sg_fpga_do_sf_a2) */
    {
      SimStruct *rts = FieldOrientedController_RCP_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod =
        FieldOrientedController_RCP_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset =
        FieldOrientedController_RCP_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap =
        FieldOrientedController_RCP_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &FieldOrientedController_RCP_M->NonInlinedSFcns.blkInfo2
                         [2]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &FieldOrientedController_RCP_M->NonInlinedSFcns.inputOutputPortInfo2[2]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, FieldOrientedController_RCP_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &FieldOrientedController_RCP_M->NonInlinedSFcns.methods2
                           [2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &FieldOrientedController_RCP_M->NonInlinedSFcns.methods3
                           [2]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &FieldOrientedController_RCP_M->NonInlinedSFcns.methods4
                           [2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &FieldOrientedController_RCP_M->NonInlinedSFcns.statesInfo2
                         [2]);
        ssSetPeriodicStatesInfo(rts,
          &FieldOrientedController_RCP_M->NonInlinedSFcns.periodicStatesInfo[2]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 3);
        ssSetPortInfoForInputs(rts,
          &FieldOrientedController_RCP_M->NonInlinedSFcns.Sfcn2.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &FieldOrientedController_RCP_M->NonInlinedSFcns.Sfcn2.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        ssSetInputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &FieldOrientedController_RCP_M->NonInlinedSFcns.Sfcn2.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);
        ssSetInputPortIsContinuousQuantity(rts, 1, 0);
        ssSetInputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &FieldOrientedController_RCP_B.UnitDelay);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1,
                               &FieldOrientedController_RCP_B.DataTypeConversion1);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }

        /* port 2 */
        {
          ssSetInputPortRequiredContiguous(rts, 2, 1);
          ssSetInputPortSignal(rts, 2, &FieldOrientedController_RCP_B.Enableinv);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Digital output");
      ssSetPath(rts,
                "FieldOrientedController_RCP/MotorDrive/New Kit/Digital output");
      ssSetRTModel(rts,FieldOrientedController_RCP_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &FieldOrientedController_RCP_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 8);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       FieldOrientedController_RCP_cal->Digitaloutput_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       FieldOrientedController_RCP_cal->Digitaloutput_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       FieldOrientedController_RCP_cal->Digitaloutput_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       FieldOrientedController_RCP_cal->Digitaloutput_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       FieldOrientedController_RCP_cal->Digitaloutput_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       FieldOrientedController_RCP_cal->Digitaloutput_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       FieldOrientedController_RCP_cal->Digitaloutput_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       FieldOrientedController_RCP_cal->Digitaloutput_P8_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **)
                 &FieldOrientedController_RCP_DW.Digitaloutput_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &FieldOrientedController_RCP_M->NonInlinedSFcns.Sfcn2.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &FieldOrientedController_RCP_M->NonInlinedSFcns.Sfcn2.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &FieldOrientedController_RCP_DW.Digitaloutput_PWORK);
      }

      /* registration */
      sg_fpga_do_sf_a2(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 5.0E-5);
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

    /* Level2 S-Function Block: FieldOrientedController_RCP/<S6>/PWM generation (5) (sg_fpga_pwm_sf_5) */
    {
      SimStruct *rts = FieldOrientedController_RCP_M->childSfunctions[3];

      /* timing info */
      time_T *sfcnPeriod =
        FieldOrientedController_RCP_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset =
        FieldOrientedController_RCP_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap =
        FieldOrientedController_RCP_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &FieldOrientedController_RCP_M->NonInlinedSFcns.blkInfo2
                         [3]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &FieldOrientedController_RCP_M->NonInlinedSFcns.inputOutputPortInfo2[3]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, FieldOrientedController_RCP_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &FieldOrientedController_RCP_M->NonInlinedSFcns.methods2
                           [3]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &FieldOrientedController_RCP_M->NonInlinedSFcns.methods3
                           [3]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &FieldOrientedController_RCP_M->NonInlinedSFcns.methods4
                           [3]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &FieldOrientedController_RCP_M->NonInlinedSFcns.statesInfo2
                         [3]);
        ssSetPeriodicStatesInfo(rts,
          &FieldOrientedController_RCP_M->NonInlinedSFcns.periodicStatesInfo[3]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &FieldOrientedController_RCP_M->NonInlinedSFcns.Sfcn3.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &FieldOrientedController_RCP_M->NonInlinedSFcns.Sfcn3.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &FieldOrientedController_RCP_M->NonInlinedSFcns.Sfcn3.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               FieldOrientedController_RCP_B.PWMDutyCycle);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 3);
        }
      }

      /* path info */
      ssSetModelName(rts, "PWM generation (5)");
      ssSetPath(rts,
                "FieldOrientedController_RCP/MotorDrive/New Kit/PWM generation (5)");
      ssSetRTModel(rts,FieldOrientedController_RCP_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &FieldOrientedController_RCP_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 37);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       FieldOrientedController_RCP_cal->PWMgeneration5_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       FieldOrientedController_RCP_cal->PWMgeneration5_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       FieldOrientedController_RCP_cal->PWMgeneration5_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       FieldOrientedController_RCP_cal->PWMgeneration5_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       FieldOrientedController_RCP_cal->PWMgeneration5_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       FieldOrientedController_RCP_cal->PWMgeneration5_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       FieldOrientedController_RCP_cal->PWMgeneration5_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       FieldOrientedController_RCP_cal->PWMgeneration5_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)
                       FieldOrientedController_RCP_cal->PWMgeneration5_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)
                       FieldOrientedController_RCP_cal->PWMgeneration5_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)
                       FieldOrientedController_RCP_cal->PWMgeneration5_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)
                       FieldOrientedController_RCP_cal->PWMgeneration5_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)
                       FieldOrientedController_RCP_cal->PWMgeneration5_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)
                       FieldOrientedController_RCP_cal->PWMgeneration5_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)
                       FieldOrientedController_RCP_cal->PWMgeneration5_P15_Size);
        ssSetSFcnParam(rts, 15, (mxArray*)
                       FieldOrientedController_RCP_cal->PWMgeneration5_P16_Size);
        ssSetSFcnParam(rts, 16, (mxArray*)
                       FieldOrientedController_RCP_cal->PWMgeneration5_P17_Size);
        ssSetSFcnParam(rts, 17, (mxArray*)
                       FieldOrientedController_RCP_cal->PWMgeneration5_P18_Size);
        ssSetSFcnParam(rts, 18, (mxArray*)
                       FieldOrientedController_RCP_cal->PWMgeneration5_P19_Size);
        ssSetSFcnParam(rts, 19, (mxArray*)
                       FieldOrientedController_RCP_cal->PWMgeneration5_P20_Size);
        ssSetSFcnParam(rts, 20, (mxArray*)
                       FieldOrientedController_RCP_cal->PWMgeneration5_P21_Size);
        ssSetSFcnParam(rts, 21, (mxArray*)
                       FieldOrientedController_RCP_cal->PWMgeneration5_P22_Size);
        ssSetSFcnParam(rts, 22, (mxArray*)
                       FieldOrientedController_RCP_cal->PWMgeneration5_P23_Size);
        ssSetSFcnParam(rts, 23, (mxArray*)
                       FieldOrientedController_RCP_cal->PWMgeneration5_P24_Size);
        ssSetSFcnParam(rts, 24, (mxArray*)
                       FieldOrientedController_RCP_cal->PWMgeneration5_P25_Size);
        ssSetSFcnParam(rts, 25, (mxArray*)
                       FieldOrientedController_RCP_cal->PWMgeneration5_P26_Size);
        ssSetSFcnParam(rts, 26, (mxArray*)
                       FieldOrientedController_RCP_cal->PWMgeneration5_P27_Size);
        ssSetSFcnParam(rts, 27, (mxArray*)
                       FieldOrientedController_RCP_cal->PWMgeneration5_P28_Size);
        ssSetSFcnParam(rts, 28, (mxArray*)
                       FieldOrientedController_RCP_cal->PWMgeneration5_P29_Size);
        ssSetSFcnParam(rts, 29, (mxArray*)
                       FieldOrientedController_RCP_cal->PWMgeneration5_P30_Size);
        ssSetSFcnParam(rts, 30, (mxArray*)
                       FieldOrientedController_RCP_cal->PWMgeneration5_P31_Size);
        ssSetSFcnParam(rts, 31, (mxArray*)
                       FieldOrientedController_RCP_cal->PWMgeneration5_P32_Size);
        ssSetSFcnParam(rts, 32, (mxArray*)
                       FieldOrientedController_RCP_cal->PWMgeneration5_P33_Size);
        ssSetSFcnParam(rts, 33, (mxArray*)
                       FieldOrientedController_RCP_cal->PWMgeneration5_P34_Size);
        ssSetSFcnParam(rts, 34, (mxArray*)
                       FieldOrientedController_RCP_cal->PWMgeneration5_P35_Size);
        ssSetSFcnParam(rts, 35, (mxArray*)
                       FieldOrientedController_RCP_cal->PWMgeneration5_P36_Size);
        ssSetSFcnParam(rts, 36, (mxArray*)
                       FieldOrientedController_RCP_cal->PWMgeneration5_P37_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &FieldOrientedController_RCP_DW.PWMgeneration5_IWORK[0]);
      ssSetPWork(rts, (void **)
                 &FieldOrientedController_RCP_DW.PWMgeneration5_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &FieldOrientedController_RCP_M->NonInlinedSFcns.Sfcn3.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &FieldOrientedController_RCP_M->NonInlinedSFcns.Sfcn3.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &FieldOrientedController_RCP_DW.PWMgeneration5_IWORK
                   [0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &FieldOrientedController_RCP_DW.PWMgeneration5_PWORK);
      }

      /* registration */
      sg_fpga_pwm_sf_5(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 5.0E-5);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }
  }

  {
    static uint32_T *clockTickPtrs[2];
    static uint32_T *clockTickHPtrs[2];
    static real_T *taskTimePtrs[2];
    static uint32_T *taskCounterPtrs;
    static boolean_T *rateTransitionPtrs[(2 * 2)];
    FieldOrientedController_RCP_TimingBrdg.nTasks = 2;
    clockTickPtrs[0] = &(FieldOrientedController_RCP_M->Timing.clockTick0);
    clockTickHPtrs[0] = &(FieldOrientedController_RCP_M->Timing.clockTickH0);
    clockTickPtrs[1] = &(FieldOrientedController_RCP_M->Timing.clockTick1);
    clockTickHPtrs[1] = &(FieldOrientedController_RCP_M->Timing.clockTickH1);
    FieldOrientedController_RCP_TimingBrdg.clockTick = clockTickPtrs;
    FieldOrientedController_RCP_TimingBrdg.clockTickH = clockTickHPtrs;
    taskCounterPtrs = &(FieldOrientedController_RCP_M->Timing.TaskCounters.TID[0]);
    FieldOrientedController_RCP_TimingBrdg.taskCounter = taskCounterPtrs;
    rateTransitionPtrs[0*2 + 1] =
      &(FieldOrientedController_RCP_M->Timing.RateInteraction.b_TID0_1);
    FieldOrientedController_RCP_TimingBrdg.rateTransition = rateTransitionPtrs;
    taskTimePtrs[0] = &(FieldOrientedController_RCP_M->Timing.t[0]);
    taskTimePtrs[1] = (NULL);
    FieldOrientedController_RCP_TimingBrdg.taskTime = taskTimePtrs;
  }

  /* Model Initialize function for ModelReference Block: '<Root>/FieldOrientedController' */
  FieldOrientedController_initialize(rtmGetErrorStatusPointer
    (FieldOrientedController_RCP_M), &FieldOrientedController_RCP_TimingBrdg, 0,
    1);

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

      sprintf(mcsFileName, "\\private\\fpga\\speedgoat_IO397_50k_CI_02171.mcs");

#else

      //find the location of the mcs file
      FILE *find_cmd = popen(
        "find /home/slrt/applications -name speedgoat_IO397_50k_CI_02171.mcs -print | head -n 1",
        "r");
      if (find_cmd == NULL) {
        sprintf(msg, "Could not open file search comand.\n");
        rtmSetErrorStatus(FieldOrientedController_RCP_M, msg);
        return;
      }

      fscanf(find_cmd,"%s",mcsFileName);
      if (pclose(find_cmd) < 0) {
        sprintf(msg, "Could not close file search comand.\n");
        rtmSetErrorStatus(FieldOrientedController_RCP_M, msg);
        return;
      }

      SG_PRINTF(DEBUG, "Found bitstream at: %s\n",mcsFileName);

#endif

#ifdef _MSC_BUILD

      if (sg_isModelInit()) {

#endif

        if ((mcs = fopen(mcsFileName, "r")) == NULL) {
          sprintf(msg, "Bitstream file not found at %s.\n", mcsFileName);
          rtmSetErrorStatus(FieldOrientedController_RCP_M, msg);
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
          rtmSetErrorStatus(FieldOrientedController_RCP_M, msg);
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
              -1406632333, &moduleId);
          } else                       // IO333
          {
            ErrCode = IO333_programmFPGA(devname, (int16_t) -1 , (int16_t) -1 ,
              (int32_t) 1, (int32_t) 1 , (uint32_t) 2192012, bitstream,(uint32_t)
              -1406632333, &moduleId);
          }
          break;

         case TEWS_MPCIE:
          ErrCode = IO39x_programmFPGA(devname, (int16_t) -1, (int16_t) -1 ,
            (int32_t) 1, (int32_t) 1, (uint32_t) 2192012, fpgacode, (uint32_t)
            85, &moduleId);
          break;

         default:
          sprintf(msg, "setup block: module architecture incorrect.");
          rtmSetErrorStatus(FieldOrientedController_RCP_M, msg);

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
            rtmSetErrorStatus(FieldOrientedController_RCP_M, msg);
            SG_PRINTF(ERROR,msg);
            return;
            break;
          }

         case EEPROM_ERROR:
          {
            sprintf(msg, "setup block %s: Error updating board EEPROM.\n",
                    devname);
            rtmSetErrorStatus(FieldOrientedController_RCP_M, msg);
            SG_PRINTF(ERROR,msg);
            return;
            break;
          }

         case REPROG_ERROR:
          {
            sprintf(msg,
                    "setup block %s: Error writing new bitstream to FPGA.\n",
                    devname);
            rtmSetErrorStatus(FieldOrientedController_RCP_M, msg);
            SG_PRINTF(ERROR,msg);
            return;
            break;
          }

         case FLASH_ERROR:
          {
            sprintf(msg, "setup block %s: Bitstream flash storage error.\n",
                    devname);
            rtmSetErrorStatus(FieldOrientedController_RCP_M, msg);
            SG_PRINTF(ERROR,msg);
            return;
            break;
          }

         case BIST_ERROR:
          {
            sprintf(msg, "setup block %s: Built in self test error.\n", devname);
            rtmSetErrorStatus(FieldOrientedController_RCP_M, msg);
            SG_PRINTF(ERROR,msg);
            return;
            break;
          }

         case ICAP_RECONF_FAILED:
          {
            sprintf(msg,
                    "setup block %s: ICAP Reconfiguration was not successful.\n",
                    devname);
            rtmSetErrorStatus(FieldOrientedController_RCP_M, msg);
            SG_PRINTF(ERROR,msg);
            return;
            break;
          }

         case BOARD_TYPE_UNKNOWN:
          {
            sprintf(msg, "setup block %s: The board type selected is unknown.\n",
                    devname);
            rtmSetErrorStatus(FieldOrientedController_RCP_M, msg);
            SG_PRINTF(ERROR,msg);
            return;
            break;
          }

         default:
          {
            sprintf(msg, "setup block %s: An unknown error occurred.\n",devname);
            rtmSetErrorStatus(FieldOrientedController_RCP_M, msg);
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

    /* Start for S-Function (sg_fpga_IO397_ad): '<S6>/IO397 Analog Input' */
    /* Level2 S-Function Block: '<S6>/IO397 Analog Input' (sg_fpga_IO397_ad) */
    {
      SimStruct *rts = FieldOrientedController_RCP_M->childSfunctions[0];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (sg_fpga_qad_sf_3): '<S6>/QAD (3)' */
    /* Level2 S-Function Block: '<S6>/QAD (3)' (sg_fpga_qad_sf_3) */
    {
      SimStruct *rts = FieldOrientedController_RCP_M->childSfunctions[1];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (sg_fpga_do_sf_a2): '<S6>/Digital output' */
    /* Level2 S-Function Block: '<S6>/Digital output' (sg_fpga_do_sf_a2) */
    {
      SimStruct *rts = FieldOrientedController_RCP_M->childSfunctions[2];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (sg_fpga_pwm_sf_5): '<S6>/PWM generation (5)' */
    /* Level2 S-Function Block: '<S6>/PWM generation (5)' (sg_fpga_pwm_sf_5) */
    {
      SimStruct *rts = FieldOrientedController_RCP_M->childSfunctions[3];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for FromWorkspace: '<S3>/fromWS_Signal 1' */
    {
      {
        static real_T pTimeValues0[] = { 0.0, 5.0 } ;

        static real_T pDataValues0[] = { 0.0, 0.0 } ;

        FieldOrientedController_RCP_DW.fromWS_Signal1_PWORK.TimePtr[0] =
          static_cast<void *>(pTimeValues0);
        FieldOrientedController_RCP_DW.fromWS_Signal1_PWORK.DataPtr[0] =
          static_cast<void *>(pDataValues0);
      }

      {
        static real_T pTimeValues1[] = { 0.0, 5.0 } ;

        static boolean_T pDataValues1[] = { 1, 1 } ;

        FieldOrientedController_RCP_DW.fromWS_Signal1_PWORK.TimePtr[1] =
          static_cast<void *>(pTimeValues1);
        FieldOrientedController_RCP_DW.fromWS_Signal1_PWORK.DataPtr[1] =
          static_cast<void *>(pDataValues1);
      }

      {
        static real_T pTimeValues2[] = { 0.0, 0.1, 0.1, 3.0, 3.0, 5.0 } ;

        static boolean_T pDataValues2[] = { 0, 0, 1, 1, 0, 0 } ;

        FieldOrientedController_RCP_DW.fromWS_Signal1_PWORK.TimePtr[2] =
          static_cast<void *>(pTimeValues2);
        FieldOrientedController_RCP_DW.fromWS_Signal1_PWORK.DataPtr[2] =
          static_cast<void *>(pDataValues2);
      }

      {
        static real_T pTimeValues3[] = { 0.0, 0.5, 0.5, 5.0 } ;

        static commandTypeEnum pDataValues3[] = {
          commandTypeEnum_CalibrateEncoder, commandTypeEnum_CalibrateEncoder,
          commandTypeEnum_ClosedLoop, commandTypeEnum_ClosedLoop };

        FieldOrientedController_RCP_DW.fromWS_Signal1_PWORK.TimePtr[3] =
          static_cast<void *>(pTimeValues3);
        FieldOrientedController_RCP_DW.fromWS_Signal1_PWORK.DataPtr[3] =
          static_cast<void *>(pDataValues3);
      }

      {
        static real_T pTimeValues4[] = { 0.0, 1.5, 1.5, 2.0, 2.0, 2.5, 2.5, 3.0,
          5.0 } ;

        static real32_T pDataValues4[] = { 50.0F, 50.0F, 100.0F, 100.0F, 150.0F,
          150.0F, 200.0F, 200.0F, 200.0F } ;

        FieldOrientedController_RCP_DW.fromWS_Signal1_PWORK.TimePtr[4] =
          static_cast<void *>(pTimeValues4);
        FieldOrientedController_RCP_DW.fromWS_Signal1_PWORK.DataPtr[4] =
          static_cast<void *>(pDataValues4);
      }

      {
        int_T i1;
        int_T *iw_PrevIndex =
          &FieldOrientedController_RCP_DW.fromWS_Signal1_IWORK.PrevIndex[0];
        void **pw_TimePtr =
          &FieldOrientedController_RCP_DW.fromWS_Signal1_PWORK.TimePtr[0];
        for (i1=0; i1 < 5; i1++) {
          iw_PrevIndex[i1] = 0;
        }
      }
    }
  }

  /* InitializeConditions for RateTransition generated from: '<Root>/FieldOrientedController' */
  FieldOrientedController_RCP_DW.userInputs_Buf[0] =
    FieldOrientedController_RCP_cal->userInputs_InitialCondition;
  FieldOrientedController_RCP_DW.userInputs_WrBufIdx = 0;
  FieldOrientedController_RCP_DW.userInputs_RdBufIdx = 1;

  /* InitializeConditions for RateTransition generated from: '<Root>/FieldOrientedController' */
  FieldOrientedController_RCP_DW.userInputs1_Buf[0] =
    FieldOrientedController_RCP_cal->userInputs1_InitialCondition;
  FieldOrientedController_RCP_DW.userInputs1_WrBufIdx = 0;
  FieldOrientedController_RCP_DW.userInputs1_RdBufIdx = 1;

  /* InitializeConditions for UnitDelay: '<S6>/Unit Delay' */
  FieldOrientedController_RCP_DW.UnitDelay_DSTATE =
    FieldOrientedController_RCP_cal->UnitDelay_InitialCondition;

  /* SystemInitialize for ModelReference generated from: '<Root>/FieldOrientedController' */
  FieldOrientedController_Init(&FieldOrientedController_RCP_B.mode);
}

/* Model terminate function */
void FieldOrientedController_RCP_terminate(void)
{
  /* Terminate for S-Function (sg_fpga_IO397_ad): '<S6>/IO397 Analog Input' */
  /* Level2 S-Function Block: '<S6>/IO397 Analog Input' (sg_fpga_IO397_ad) */
  {
    SimStruct *rts = FieldOrientedController_RCP_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_fpga_qad_sf_3): '<S6>/QAD (3)' */
  /* Level2 S-Function Block: '<S6>/QAD (3)' (sg_fpga_qad_sf_3) */
  {
    SimStruct *rts = FieldOrientedController_RCP_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_fpga_do_sf_a2): '<S6>/Digital output' */
  /* Level2 S-Function Block: '<S6>/Digital output' (sg_fpga_do_sf_a2) */
  {
    SimStruct *rts = FieldOrientedController_RCP_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_fpga_pwm_sf_5): '<S6>/PWM generation (5)' */
  /* Level2 S-Function Block: '<S6>/PWM generation (5)' (sg_fpga_pwm_sf_5) */
  {
    SimStruct *rts = FieldOrientedController_RCP_M->childSfunctions[3];
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
