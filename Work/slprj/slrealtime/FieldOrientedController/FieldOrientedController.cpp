/*
 * Code generation for system model 'FieldOrientedController'
 *
 * Model                      : FieldOrientedController
 * Model version              : 1.609
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C++ source code generated on : Wed Mar  3 10:48:55 2021
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "FieldOrientedController.h"
#include "FieldOrientedController_private.h"
#include "rt_modf_snf.h"

/* Named constants for Chart: '<S2>/Mode_Scheduler' */
const uint32_T FieldOrientedController_IN_Calibrate_Encoder_Offset = 1U;
const uint32_T FieldOrientedController_IN_Closed_Loop = 2U;
const uint32_T FieldOrientedController_IN_Disabled = 3U;
const uint32_T FieldOrientedController_IN_Enable_Inverter = 1U;
const uint32_T FieldOrientedController_IN_Error = 2U;
const uint32_T FieldOrientedController_IN_Find_Encoder_Index = 1U;
const uint32_T FieldOrientedController_IN_Open_Loop = 4U;
const uint32_T FieldOrientedController_IN_Open_Loop_Command = 2U;
const uint32_T FieldOrientedController_IN_Stand_By = 3U;

/* Named constants for Chart: '<S9>/Detect_Over_Current_Error' */
const uint32_T FieldOrientedController_IN_Error_f = 1U;
const uint32_T FieldOrientedController_IN_No_Error = 2U;
const uint32_T FieldOrientedController_IN_Wait_For_Reset = 3U;
int_T FieldOrientedController_GlobalTID[2];
const rtTimingBridge *FieldOrientedController_TimingBrdg;
MdlrefDW_FieldOrientedController_T FieldOrientedController_MdlrefDW;

/* Block signals (default storage) */
B_FieldOrientedController_c_T FieldOrientedController_B;

/* Block states (default storage) */
DW_FieldOrientedController_f_T FieldOrientedController_DW;

/* Forward declaration for local functions */
static void FieldOrientedController_exit_internal_Enable_Inverter
  (modeSchedulerEnum *rty_controllerInfo_mode);
static void FieldOrientedController_enter_internal_Enable_Inverter(const
  commandTypeEnum *rtu_userInputs_commandType, modeSchedulerEnum
  *rty_controllerInfo_mode);

/* Function for Chart: '<S2>/Mode_Scheduler' */
static void FieldOrientedController_exit_internal_Enable_Inverter
  (modeSchedulerEnum *rty_controllerInfo_mode)
{
  /* Exit Internal 'Enable_Inverter': '<S7>:372' */
  FieldOrientedController_B.calibrateEncoder = false;
  FieldOrientedController_B.closedLoop = false;

  /* Exit Internal 'Open_Loop': '<S7>:377' */
  FieldOrientedController_B.Find_Encoder_Index_e = false;

  /* Chart: '<S2>/Mode_Scheduler' */
  *rty_controllerInfo_mode = None;
  FieldOrientedController_DW.is_Open_Loop = 0U;
  FieldOrientedController_B.openLoop = false;
  FieldOrientedController_DW.is_Enable_Inverter = 0U;
}

/* Function for Chart: '<S2>/Mode_Scheduler' */
static void FieldOrientedController_enter_internal_Enable_Inverter(const
  commandTypeEnum *rtu_userInputs_commandType, modeSchedulerEnum
  *rty_controllerInfo_mode)
{
  boolean_T sf_internal_predicateOutput;

  /* Chart: '<S2>/Mode_Scheduler' */
  /* Entry Internal 'Enable_Inverter': '<S7>:372' */
  /* Transition: '<S7>:657' */
  if (*rtu_userInputs_commandType == commandTypeEnum_OpenLoop) {
    /* Transition: '<S7>:379' */
    FieldOrientedController_DW.is_Enable_Inverter =
      FieldOrientedController_IN_Open_Loop;
    FieldOrientedController_B.openLoop = true;

    /* Entry 'Open_Loop': '<S7>:377' */
    FieldOrientedController_DW.is_Open_Loop =
      FieldOrientedController_IN_Open_Loop_Command;
    *rty_controllerInfo_mode = Open_Loop_Command;

    /* Entry 'Open_Loop_Command': '<S7>:623' */
  } else {
    /* Transition: '<S7>:625' */
    sf_internal_predicateOutput = ((*rtu_userInputs_commandType ==
      commandTypeEnum_CalibrateEncoder) ||
      ((FieldOrientedController_DW.calibrateAtStartup != 0.0) &&
       (!FieldOrientedController_B.RateTransition1)));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S7>:621' */
      if (!FieldOrientedController_B.RateTransition6) {
        /* Transition: '<S7>:639' */
        FieldOrientedController_DW.is_Enable_Inverter =
          FieldOrientedController_IN_Open_Loop;
        FieldOrientedController_B.openLoop = true;

        /* Entry 'Open_Loop': '<S7>:377' */
        FieldOrientedController_DW.is_Open_Loop =
          FieldOrientedController_IN_Find_Encoder_Index;
        FieldOrientedController_B.Find_Encoder_Index_e = true;
        *rty_controllerInfo_mode = Find_Encoder_Index;

        /* Entry 'Find_Encoder_Index': '<S7>:622' */
      } else {
        /* Transition: '<S7>:641' */
        FieldOrientedController_DW.is_Enable_Inverter =
          FieldOrientedController_IN_Calibrate_Encoder_Offset;
        FieldOrientedController_B.calibrateEncoder = true;
        *rty_controllerInfo_mode = Calibrate_Encoder_Offset;

        /* Entry 'Calibrate_Encoder_Offset': '<S7>:599' */
      }
    } else {
      /* Transition: '<S7>:606' */
      /* Transition: '<S7>:570' */
      if (*rtu_userInputs_commandType == commandTypeEnum_ClosedLoop) {
        /* Transition: '<S7>:162' */
        FieldOrientedController_DW.is_Enable_Inverter =
          FieldOrientedController_IN_Closed_Loop;
        FieldOrientedController_B.closedLoop = true;
        *rty_controllerInfo_mode = Closed_Loop;

        /* Entry 'Closed_Loop': '<S7>:108' */
      } else {
        /* Transition: '<S7>:659' */
        FieldOrientedController_DW.is_Enable_Inverter =
          FieldOrientedController_IN_Disabled;
        *rty_controllerInfo_mode = Disabled;
      }
    }
  }

  /* End of Chart: '<S2>/Mode_Scheduler' */
}

/* System initialize for referenced model: 'FieldOrientedController' */
void FieldOrientedController_Init(modeSchedulerEnum *rty_controllerInfo_mode)
{
  int32_T i;

  /* InitializeConditions for UnitDelay: '<Root>/Unit Delay' */
  FieldOrientedController_DW.encoderOffset =
    rtP_paramEncoderRotorPositionAtZeroCount;

  /* InitializeConditions for Delay: '<S93>/Delay4' */
  FieldOrientedController_DW.Delay4_DSTATE =
    FieldOrientedController_cal->Delay4_InitialCondition;

  /* InitializeConditions for Delay: '<S93>/Delay2' */
  FieldOrientedController_DW.Delay2_DSTATE =
    FieldOrientedController_cal->Delay2_InitialCondition_k;

  /* InitializeConditions for UnitDelay: '<S97>/Delay Input1' */
  FieldOrientedController_DW.DelayInput1_DSTATE =
    FieldOrientedController_cal->Detect_Change_vinit;

  /* InitializeConditions for Delay: '<S93>/Delay3' */
  FieldOrientedController_DW.Delay3_DSTATE =
    FieldOrientedController_cal->Delay3_InitialCondition;

  /* InitializeConditions for Delay: '<S93>/Last_Valid_Position_Delta' */
  FieldOrientedController_DW.Last_Valid_Position_Delta_DSTATE =
    FieldOrientedController_cal->Last_Valid_Position_Delta_InitialCondition;

  /* InitializeConditions for DiscreteFilter: '<S3>/FilterTs15mS' */
  FieldOrientedController_DW.FilterTs15mS_states =
    FieldOrientedController_cal->FilterTs15mS_InitialStates;

  /* InitializeConditions for Delay: '<S93>/Delay1' */
  FieldOrientedController_DW.Delay1_DSTATE_p =
    FieldOrientedController_cal->Delay1_InitialCondition_f;

  /* InitializeConditions for RateTransition: '<Root>/Rate Transition' */
  FieldOrientedController_DW.RateTransition_Buf[0] =
    FieldOrientedController_cal->RateTransition_InitialCondition;
  FieldOrientedController_DW.RateTransition_WrBufIdx = 0;
  FieldOrientedController_DW.RateTransition_RdBufIdx = 1;

  /* SystemInitialize for Enabled SubSystem: '<S2>/Calibrate_Encoder_Offset' */
  /* InitializeConditions for Delay: '<S12>/Delay' */
  FieldOrientedController_DW.Delay_DSTATE_e =
    FieldOrientedController_cal->Delay_InitialCondition;

  /* InitializeConditions for Delay: '<S13>/Delay1' */
  FieldOrientedController_DW.Delay1_DSTATE_j =
    FieldOrientedController_cal->Delay1_InitialCondition_p;

  /* InitializeConditions for Delay: '<S13>/Delay' */
  FieldOrientedController_DW.Delay_DSTATE_a =
    FieldOrientedController_cal->Delay_InitialCondition_i;

  /* InitializeConditions for Delay: '<S12>/Delay1' */
  FieldOrientedController_DW.Delay1_DSTATE =
    FieldOrientedController_cal->Delay1_InitialCondition;

  /* InitializeConditions for Delay: '<S12>/Delay2' */
  FieldOrientedController_DW.Delay2_DSTATE_n =
    FieldOrientedController_cal->Delay2_InitialCondition;

  /* SystemInitialize for Logic: '<S12>/Logical_OR' incorporates:
   *  Outport: '<S5>/Position_At_Zero_Count_Valid'
   */
  FieldOrientedController_B.latchPosition =
    FieldOrientedController_cal->Position_At_Zero_Count_Valid_Y0;

  /* SystemInitialize for Switch: '<S12>/Switch1' incorporates:
   *  Outport: '<S5>/Position_At_Zero_Count'
   */
  FieldOrientedController_B.Switch1_j = rtP_paramEncoderRotorPositionAtZeroCount;

  /* End of SystemInitialize for SubSystem: '<S2>/Calibrate_Encoder_Offset' */

  /* SystemInitialize for Enabled SubSystem: '<S2>/Current_Control' */
  /* InitializeConditions for UnitDelay: '<S23>/Unit_Delay' */
  FieldOrientedController_DW.Unit_Delay_DSTATE =
    FieldOrientedController_cal->Unit_Delay_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S24>/Unit_Delay' */
  FieldOrientedController_DW.Unit_Delay_DSTATE_h =
    FieldOrientedController_cal->Unit_Delay_InitialCondition_g;

  /* End of SystemInitialize for SubSystem: '<S2>/Current_Control' */

  /* SystemInitialize for Enabled SubSystem: '<S2>/Open_Loop_Velocity_Control' */
  /* InitializeConditions for Delay: '<S33>/Delay' */
  FieldOrientedController_DW.Delay_DSTATE =
    FieldOrientedController_cal->Delay_InitialCondition_if;

  /* InitializeConditions for Delay: '<S30>/Delay' */
  FieldOrientedController_DW.Delay_DSTATE_o =
    FieldOrientedController_cal->Delay_InitialCondition_d;

  /* InitializeConditions for Delay: '<S37>/Delay' */
  FieldOrientedController_DW.Delay_DSTATE_h =
    FieldOrientedController_cal->Delay_InitialCondition_j;

  /* InitializeConditions for Delay: '<S36>/Delay1' */
  FieldOrientedController_DW.Delay1_DSTATE_n =
    FieldOrientedController_cal->Delay1_InitialCondition_n;

  /* End of SystemInitialize for SubSystem: '<S2>/Open_Loop_Velocity_Control' */

  /* SystemInitialize for Merge: '<S2>/Merge' */
  FieldOrientedController_B.Merge[0] =
    FieldOrientedController_cal->Merge_InitialOutput;
  FieldOrientedController_B.Merge[1] =
    FieldOrientedController_cal->Merge_InitialOutput;
  FieldOrientedController_B.Merge[2] =
    FieldOrientedController_cal->Merge_InitialOutput;

  /* SystemInitialize for Chart: '<S2>/Mode_Scheduler' */
  FieldOrientedController_DW.is_Enable_Inverter = 0U;
  FieldOrientedController_DW.is_Open_Loop = 0U;
  FieldOrientedController_DW.is_active_c1_FieldOrientedController = 0U;
  FieldOrientedController_DW.is_c1_FieldOrientedController = 0U;
  FieldOrientedController_DW.calibrateAtStartup = 1.0;
  *rty_controllerInfo_mode = None;
  FieldOrientedController_B.enableInverter = false;
  FieldOrientedController_B.openLoop = false;
  FieldOrientedController_B.Find_Encoder_Index_e = false;
  FieldOrientedController_B.calibrateEncoder = false;
  FieldOrientedController_B.closedLoop = false;

  /* SystemInitialize for Chart: '<S9>/Detect_Over_Current_Error' */
  FieldOrientedController_DW.is_active_c2_FieldOrientedController = 0U;
  FieldOrientedController_DW.is_c2_FieldOrientedController = 0U;
  FieldOrientedController_DW.chartAbsoluteTimeCounter = 0;

  /* SystemInitialize for Enabled SubSystem: '<S2>/Velocity_Control' */
  /* InitializeConditions for DiscreteIntegrator: '<S74>/Integrator' */
  FieldOrientedController_DW.Integrator_DSTATE =
    FieldOrientedController_cal->Velocity_PID_Controller_InitialConditionForIntegrator;

  /* SystemInitialize for Saturate: '<S81>/Saturation' incorporates:
   *  Outport: '<S11>/Q_Current_Command'
   */
  FieldOrientedController_B.Saturation_n =
    FieldOrientedController_cal->Q_Current_Command_Y0;

  /* End of SystemInitialize for SubSystem: '<S2>/Velocity_Control' */

  /* SystemInitialize for MATLAB Function: '<S92>/Rotor_Position_Delta_To_Velocity' */
  for (i = 0; i < 8; i++) {
    FieldOrientedController_DW.positionDeltaBuffer[i] = 0.0F;
  }

  FieldOrientedController_DW.bufferIndex = 0;

  /* End of SystemInitialize for MATLAB Function: '<S92>/Rotor_Position_Delta_To_Velocity' */
}

/* System reset for referenced model: 'FieldOrientedController' */
void FieldOrientedController_Reset(modeSchedulerEnum *rty_controllerInfo_mode)
{
  int32_T i;

  /* InitializeConditions for UnitDelay: '<Root>/Unit Delay' */
  FieldOrientedController_DW.encoderOffset =
    rtP_paramEncoderRotorPositionAtZeroCount;

  /* InitializeConditions for Delay: '<S93>/Delay4' */
  FieldOrientedController_DW.Delay4_DSTATE =
    FieldOrientedController_cal->Delay4_InitialCondition;

  /* InitializeConditions for Delay: '<S93>/Delay2' */
  FieldOrientedController_DW.Delay2_DSTATE =
    FieldOrientedController_cal->Delay2_InitialCondition_k;

  /* InitializeConditions for UnitDelay: '<S97>/Delay Input1' */
  FieldOrientedController_DW.DelayInput1_DSTATE =
    FieldOrientedController_cal->Detect_Change_vinit;

  /* InitializeConditions for Delay: '<S93>/Delay3' */
  FieldOrientedController_DW.Delay3_DSTATE =
    FieldOrientedController_cal->Delay3_InitialCondition;

  /* InitializeConditions for Delay: '<S93>/Last_Valid_Position_Delta' */
  FieldOrientedController_DW.Last_Valid_Position_Delta_DSTATE =
    FieldOrientedController_cal->Last_Valid_Position_Delta_InitialCondition;

  /* InitializeConditions for DiscreteFilter: '<S3>/FilterTs15mS' */
  FieldOrientedController_DW.FilterTs15mS_states =
    FieldOrientedController_cal->FilterTs15mS_InitialStates;

  /* InitializeConditions for Delay: '<S93>/Delay1' */
  FieldOrientedController_DW.Delay1_DSTATE_p =
    FieldOrientedController_cal->Delay1_InitialCondition_f;

  /* InitializeConditions for RateTransition: '<Root>/Rate Transition' */
  FieldOrientedController_DW.RateTransition_Buf[0] =
    FieldOrientedController_cal->RateTransition_InitialCondition;
  FieldOrientedController_DW.RateTransition_WrBufIdx = 0;
  FieldOrientedController_DW.RateTransition_RdBufIdx = 1;

  /* SystemReset for Chart: '<S9>/Detect_Over_Current_Error' */
  FieldOrientedController_DW.is_active_c2_FieldOrientedController = 0U;
  FieldOrientedController_DW.is_c2_FieldOrientedController = 0U;
  FieldOrientedController_DW.chartAbsoluteTimeCounter = 0;

  /* SystemReset for MATLAB Function: '<S92>/Rotor_Position_Delta_To_Velocity' */
  for (i = 0; i < 8; i++) {
    FieldOrientedController_DW.positionDeltaBuffer[i] = 0.0F;
  }

  FieldOrientedController_DW.bufferIndex = 0;

  /* End of SystemReset for MATLAB Function: '<S92>/Rotor_Position_Delta_To_Velocity' */

  /* SystemReset for Chart: '<S2>/Mode_Scheduler' */
  FieldOrientedController_DW.is_Enable_Inverter = 0U;
  FieldOrientedController_DW.is_Open_Loop = 0U;
  FieldOrientedController_DW.is_active_c1_FieldOrientedController = 0U;
  FieldOrientedController_DW.is_c1_FieldOrientedController = 0U;
  FieldOrientedController_DW.calibrateAtStartup = 1.0;
  *rty_controllerInfo_mode = None;
  FieldOrientedController_B.enableInverter = false;
  FieldOrientedController_B.openLoop = false;
  FieldOrientedController_B.Find_Encoder_Index_e = false;
  FieldOrientedController_B.calibrateEncoder = false;
  FieldOrientedController_B.closedLoop = false;
}

/* Disable for referenced model: 'FieldOrientedController' */
void FieldOrientedController_Disable(void)
{
  /* Disable for Enabled SubSystem: '<S2>/Calibrate_Encoder_Offset' */
  FieldOrientedController_DW.Calibrate_Encoder_Offset_MODE = false;

  /* End of Disable for SubSystem: '<S2>/Calibrate_Encoder_Offset' */

  /* Disable for Enabled SubSystem: '<S2>/Current_Control' */
  FieldOrientedController_DW.Current_Control_MODE = false;

  /* End of Disable for SubSystem: '<S2>/Current_Control' */

  /* Disable for Enabled SubSystem: '<S2>/Open_Loop_Velocity_Control' */
  FieldOrientedController_DW.Open_Loop_Velocity_Control_MODE = false;

  /* End of Disable for SubSystem: '<S2>/Open_Loop_Velocity_Control' */

  /* Disable for Enabled SubSystem: '<S2>/Velocity_Control' */
  FieldOrientedController_DW.Velocity_Control_MODE = false;

  /* End of Disable for SubSystem: '<S2>/Velocity_Control' */
}

/* Output and update for referenced model: 'FieldOrientedController' */
void FieldOrientedControllerTID0(const real32_T
  rtu_controllerFeedback_transducerVoltage[2], const boolean_T
  *rtu_controllerFeedback_encoderIndexFound, const uint16_T
  *rtu_controllerFeedback_encoderCount, boolean_T *rty_motorCommands_enInverter,
  uint16_T rty_motorCommands_pwmCompare[3])
{
  int_T tid = 0;
  int32_T sigIdx;
  real32_T Bias;
  real32_T cosOut;
  real32_T tmpForInput_idx_2;
  boolean_T hoisted_cond;

  /* Sum: '<S1>/Add' incorporates:
   *  Constant: '<S1>/Bias_To_Remove'
   */
  FieldOrientedController_B.Add[0] = rtu_controllerFeedback_transducerVoltage[0]
    - rtP_paramAdcTransducerVoltAtZeroAmpere[0];
  FieldOrientedController_B.Add[1] = rtu_controllerFeedback_transducerVoltage[1]
    - rtP_paramAdcTransducerVoltAtZeroAmpere[1];

  /* Product: '<S1>/Product' incorporates:
   *  Constant: '<S1>/Scalar'
   */
  FieldOrientedController_B.PhaseCurrent[0] = FieldOrientedController_B.Add[0] *
    rtP_paramAdcAmperePerTransducerVolt[0];
  FieldOrientedController_B.PhaseCurrent[1] = FieldOrientedController_B.Add[1] *
    rtP_paramAdcAmperePerTransducerVolt[1];

  /* DataTypeConversion: '<S91>/Data_Type_Convert' */
  FieldOrientedController_B.Data_Type_Convert =
    *rtu_controllerFeedback_encoderCount;

  /* Gain: '<S91>/Rotor_Position_Per_Count' */
  FieldOrientedController_B.Rotor_Position_Per_Count =
    rtP_paramEncoderRotorPositionPerCount *
    FieldOrientedController_B.Data_Type_Convert;

  /* UnitDelay: '<Root>/Unit Delay' */
  FieldOrientedController_B.UnitDelay = FieldOrientedController_DW.encoderOffset;

  /* Sum: '<S91>/Add' */
  FieldOrientedController_B.Add_i =
    FieldOrientedController_B.Rotor_Position_Per_Count +
    FieldOrientedController_B.UnitDelay;

  /* RelationalOperator: '<S95>/Greater_Than' incorporates:
   *  Constant: '<S95>/Two_Pi1'
   */
  FieldOrientedController_B.Greater_Than = (FieldOrientedController_B.Add_i >=
    FieldOrientedController_cal->Two_Pi1_Value_a);

  /* Switch: '<S95>/Switch' */
  if (FieldOrientedController_B.Greater_Than) {
    /* Sum: '<S95>/Add1' incorporates:
     *  Constant: '<S95>/Two_Pi'
     */
    FieldOrientedController_B.Add1 = FieldOrientedController_B.Add_i -
      FieldOrientedController_cal->Two_Pi_Value_f;

    /* Switch: '<S95>/Switch' */
    FieldOrientedController_B.Switch = FieldOrientedController_B.Add1;
  } else {
    /* RelationalOperator: '<S95>/Less_Than' incorporates:
     *  Constant: '<S95>/Zero'
     */
    FieldOrientedController_B.Less_Than = (FieldOrientedController_B.Add_i <
      FieldOrientedController_cal->Zero_Value_f);

    /* Switch: '<S95>/Switch1' */
    if (FieldOrientedController_B.Less_Than) {
      /* Sum: '<S95>/Add2' incorporates:
       *  Constant: '<S95>/Two_Pi2'
       */
      FieldOrientedController_B.Add2 = FieldOrientedController_B.Add_i +
        FieldOrientedController_cal->Two_Pi2_Value_m;

      /* Switch: '<S95>/Switch1' */
      FieldOrientedController_B.Switch1_b = FieldOrientedController_B.Add2;
    } else {
      /* Switch: '<S95>/Switch1' */
      FieldOrientedController_B.Switch1_b = FieldOrientedController_B.Add_i;
    }

    /* End of Switch: '<S95>/Switch1' */

    /* Switch: '<S95>/Switch' */
    FieldOrientedController_B.Switch = FieldOrientedController_B.Switch1_b;
  }

  /* End of Switch: '<S95>/Switch' */

  /* RateTransition: '<S2>/Rate Transition3' */
  FieldOrientedController_B.RateTransition3 =
    FieldOrientedController_B.calibrateEncoder;

  /* Outputs for Enabled SubSystem: '<S2>/Calibrate_Encoder_Offset' incorporates:
   *  EnablePort: '<S5>/Enable'
   */
  if (FieldOrientedController_B.RateTransition3) {
    if (!FieldOrientedController_DW.Calibrate_Encoder_Offset_MODE) {
      /* InitializeConditions for Delay: '<S12>/Delay' */
      FieldOrientedController_DW.Delay_DSTATE_e =
        FieldOrientedController_cal->Delay_InitialCondition;

      /* InitializeConditions for Delay: '<S13>/Delay1' */
      FieldOrientedController_DW.Delay1_DSTATE_j =
        FieldOrientedController_cal->Delay1_InitialCondition_p;

      /* InitializeConditions for Delay: '<S13>/Delay' */
      FieldOrientedController_DW.Delay_DSTATE_a =
        FieldOrientedController_cal->Delay_InitialCondition_i;

      /* InitializeConditions for Delay: '<S12>/Delay1' */
      FieldOrientedController_DW.Delay1_DSTATE =
        FieldOrientedController_cal->Delay1_InitialCondition;

      /* InitializeConditions for Delay: '<S12>/Delay2' */
      FieldOrientedController_DW.Delay2_DSTATE_n =
        FieldOrientedController_cal->Delay2_InitialCondition;
      FieldOrientedController_DW.Calibrate_Encoder_Offset_MODE = true;
    }

    /* Merge: '<S2>/Merge' incorporates:
     *  Constant: '<S12>/Phase_Voltage_Amplitude'
     *  Gain: '<S12>/Gain'
     */
    FieldOrientedController_B.Merge[0] = FieldOrientedController_cal->Gain_Gain
      [0] * rtP_paramEncoderCalibrationVoltage;
    FieldOrientedController_B.Merge[1] = FieldOrientedController_cal->Gain_Gain
      [1] * rtP_paramEncoderCalibrationVoltage;
    FieldOrientedController_B.Merge[2] = FieldOrientedController_cal->Gain_Gain
      [2] * rtP_paramEncoderCalibrationVoltage;

    /* Delay: '<S12>/Delay' */
    FieldOrientedController_B.Delay_on =
      FieldOrientedController_DW.Delay_DSTATE_e;

    /* Sum: '<S12>/Difference' */
    FieldOrientedController_B.Difference = FieldOrientedController_B.Switch -
      FieldOrientedController_B.Delay_on;

    /* RelationalOperator: '<S15>/Greater_Than' incorporates:
     *  Constant: '<S15>/PI'
     */
    FieldOrientedController_B.positionGreaterThanPii_b =
      (FieldOrientedController_B.Difference >=
       FieldOrientedController_cal->PI_Value);

    /* Switch: '<S15>/Switch1' */
    if (FieldOrientedController_B.positionGreaterThanPii_b) {
      /* Sum: '<S15>/Add' incorporates:
       *  Constant: '<S15>/Two_Pi'
       */
      FieldOrientedController_B.wrapPositionPi_f =
        FieldOrientedController_B.Difference -
        FieldOrientedController_cal->Two_Pi_Value_o;

      /* Switch: '<S15>/Switch1' */
      FieldOrientedController_B.Switch1_nj =
        FieldOrientedController_B.wrapPositionPi_f;
    } else {
      /* RelationalOperator: '<S15>/Less_Than' incorporates:
       *  Constant: '<S15>/Neg_Pi'
       */
      FieldOrientedController_B.positionLessThanPi_c =
        (FieldOrientedController_B.Difference <
         FieldOrientedController_cal->Neg_Pi_Value);

      /* Switch: '<S15>/Switch2' */
      if (FieldOrientedController_B.positionLessThanPi_c) {
        /* Sum: '<S15>/Add1' incorporates:
         *  Constant: '<S15>/Two_Pi2'
         */
        FieldOrientedController_B.wrapPositionNegPii_i =
          FieldOrientedController_B.Difference +
          FieldOrientedController_cal->Two_Pi2_Value;

        /* Switch: '<S15>/Switch2' */
        FieldOrientedController_B.Switch2_d =
          FieldOrientedController_B.wrapPositionNegPii_i;
      } else {
        /* Switch: '<S15>/Switch2' */
        FieldOrientedController_B.Switch2_d =
          FieldOrientedController_B.Difference;
      }

      /* End of Switch: '<S15>/Switch2' */

      /* Switch: '<S15>/Switch1' */
      FieldOrientedController_B.Switch1_nj = FieldOrientedController_B.Switch2_d;
    }

    /* End of Switch: '<S15>/Switch1' */

    /* Abs: '<S12>/Abs' */
    FieldOrientedController_B.Abs_o = std::abs
      (FieldOrientedController_B.Switch1_nj);

    /* Delay: '<S13>/Delay1' */
    FieldOrientedController_B.Delay1_gb =
      FieldOrientedController_DW.Delay1_DSTATE_j;

    /* Delay: '<S13>/Delay' */
    FieldOrientedController_B.Delay_l =
      FieldOrientedController_DW.Delay_DSTATE_a;

    /* RelationalOperator: '<S12>/Greater_Than' incorporates:
     *  Constant: '<S12>/Max_Abs_Error'
     */
    FieldOrientedController_B.Greater_Than_j = (FieldOrientedController_B.Abs_o >
      rtP_paramEncoderCalibrationMaxError);

    /* Switch: '<S13>/Switch' incorporates:
     *  Switch: '<S13>/Switch1'
     */
    if (FieldOrientedController_B.Greater_Than_j) {
      /* Switch: '<S13>/Switch' incorporates:
       *  Constant: '<S13>/Reset_Count'
       */
      FieldOrientedController_B.Switch_k =
        FieldOrientedController_cal->Reset_Count_Value;
    } else {
      if (FieldOrientedController_B.Delay1_gb) {
        /* Switch: '<S13>/Switch1' incorporates:
         *  Constant: '<S13>/Stop_Count'
         */
        FieldOrientedController_B.Switch1_jw =
          FieldOrientedController_cal->Stop_Count_Value;
      } else {
        /* Switch: '<S13>/Switch1' incorporates:
         *  Constant: '<S13>/Continue_Count'
         */
        FieldOrientedController_B.Switch1_jw =
          FieldOrientedController_cal->Continue_Count_Value;
      }

      /* Sum: '<S13>/Add' */
      FieldOrientedController_B.Add_h = FieldOrientedController_B.Switch1_jw +
        FieldOrientedController_B.Delay_l;

      /* Switch: '<S13>/Switch' */
      FieldOrientedController_B.Switch_k = FieldOrientedController_B.Add_h;
    }

    /* End of Switch: '<S13>/Switch' */

    /* Gain: '<S12>/Sample_Frequency' incorporates:
     *  Constant: '<S12>/Duration'
     */
    FieldOrientedController_B.Sample_Frequency =
      FieldOrientedController_cal->Sample_Frequency_Gain *
      rtP_paramEncoderCalibrationDuration;

    /* RelationalOperator: '<S13>/Greater_Or_Equal' */
    FieldOrientedController_B.Greater_Or_Equal =
      (FieldOrientedController_B.Switch_k >=
       FieldOrientedController_B.Sample_Frequency);

    /* Delay: '<S12>/Delay1' */
    FieldOrientedController_B.Delay1 = FieldOrientedController_DW.Delay1_DSTATE;

    /* Delay: '<S12>/Delay2' */
    FieldOrientedController_B.Delay2_e =
      FieldOrientedController_DW.Delay2_DSTATE_n;

    /* Logic: '<S12>/Logical_OR' */
    FieldOrientedController_B.latchPosition =
      (FieldOrientedController_B.Greater_Or_Equal ||
       FieldOrientedController_B.Delay2_e);

    /* Switch: '<S12>/Switch' incorporates:
     *  Switch: '<S12>/Switch1'
     */
    if (FieldOrientedController_B.latchPosition) {
      /* Switch: '<S12>/Switch' */
      FieldOrientedController_B.Switch_iz = FieldOrientedController_B.Delay1;

      /* Switch: '<S12>/Switch1' */
      FieldOrientedController_B.Switch1_j = FieldOrientedController_B.Switch_iz;
    } else {
      /* Sum: '<S14>/Subtract' incorporates:
       *  Constant: '<S14>/Two_Pi'
       */
      FieldOrientedController_B.negativeIn =
        FieldOrientedController_cal->Two_Pi_Value -
        FieldOrientedController_B.Switch;

      /* Switch: '<S12>/Switch' */
      FieldOrientedController_B.Switch_iz = FieldOrientedController_B.negativeIn;

      /* Switch: '<S12>/Switch1' incorporates:
       *  Constant: '<S12>/Zero_During_Calibration'
       */
      FieldOrientedController_B.Switch1_j =
        FieldOrientedController_cal->Zero_During_Calibration_Value;
    }

    /* End of Switch: '<S12>/Switch' */

    /* Update for Delay: '<S12>/Delay' */
    FieldOrientedController_DW.Delay_DSTATE_e = FieldOrientedController_B.Switch;

    /* Update for Delay: '<S13>/Delay1' */
    FieldOrientedController_DW.Delay1_DSTATE_j =
      FieldOrientedController_B.Greater_Or_Equal;

    /* Update for Delay: '<S13>/Delay' */
    FieldOrientedController_DW.Delay_DSTATE_a =
      FieldOrientedController_B.Switch_k;

    /* Update for Delay: '<S12>/Delay1' */
    FieldOrientedController_DW.Delay1_DSTATE =
      FieldOrientedController_B.Switch_iz;

    /* Update for Delay: '<S12>/Delay2' */
    FieldOrientedController_DW.Delay2_DSTATE_n =
      FieldOrientedController_B.latchPosition;
  } else {
    FieldOrientedController_DW.Calibrate_Encoder_Offset_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S2>/Calibrate_Encoder_Offset' */

  /* RateTransition: '<S2>/Rate Transition9' */
  FieldOrientedController_B.RateTransition9 =
    FieldOrientedController_B.Saturation_n;

  /* Gain: '<S94>/Gain' */
  FieldOrientedController_B.Gain = rtP_PolePairs *
    FieldOrientedController_B.Switch;

  /* Math: '<S99>/Mod' incorporates:
   *  Constant: '<S99>/Two_Pi'
   */
  FieldOrientedController_B.Mod = rt_modf_snf(FieldOrientedController_B.Gain,
    FieldOrientedController_cal->Two_Pi_Value_h);

  /* RateTransition: '<S2>/Rate Transition4' */
  FieldOrientedController_B.RateTransition4 =
    FieldOrientedController_B.closedLoop;

  /* Outputs for Enabled SubSystem: '<S2>/Current_Control' incorporates:
   *  EnablePort: '<S6>/Enable'
   */
  if (FieldOrientedController_B.RateTransition4) {
    if (!FieldOrientedController_DW.Current_Control_MODE) {
      /* InitializeConditions for UnitDelay: '<S23>/Unit_Delay' */
      FieldOrientedController_DW.Unit_Delay_DSTATE =
        FieldOrientedController_cal->Unit_Delay_InitialCondition;

      /* InitializeConditions for UnitDelay: '<S24>/Unit_Delay' */
      FieldOrientedController_DW.Unit_Delay_DSTATE_h =
        FieldOrientedController_cal->Unit_Delay_InitialCondition_g;
      FieldOrientedController_DW.Current_Control_MODE = true;
    }

    /* Gain: '<S17>/Alpha_Gain' */
    FieldOrientedController_B.Alpha_Gain =
      FieldOrientedController_cal->Alpha_Gain_Gain *
      FieldOrientedController_B.PhaseCurrent[0];

    /* Gain: '<S17>/Beta_Gain' */
    FieldOrientedController_B.Beta_Gain =
      FieldOrientedController_cal->Beta_Gain_Gain *
      FieldOrientedController_B.PhaseCurrent[1];

    /* Sum: '<S17>/Add' */
    FieldOrientedController_B.Add_a = FieldOrientedController_B.Alpha_Gain +
      FieldOrientedController_B.Beta_Gain;

    /* Trigonometry: '<S16>/Sine_Cosine' */
    cosOut = FieldOrientedController_B.Mod;
    Bias = std::sin(cosOut);
    cosOut = std::cos(cosOut);

    /* Trigonometry: '<S16>/Sine_Cosine' */
    FieldOrientedController_B.sinCoefficient = Bias;

    /* Trigonometry: '<S16>/Sine_Cosine' */
    FieldOrientedController_B.cosCoefficient = cosOut;

    /* Product: '<S21>/Product1' */
    FieldOrientedController_B.Product1_l =
      FieldOrientedController_B.PhaseCurrent[0] *
      FieldOrientedController_B.cosCoefficient;

    /* Product: '<S21>/Product2' */
    FieldOrientedController_B.Product2_c = FieldOrientedController_B.Add_a *
      FieldOrientedController_B.sinCoefficient;

    /* Sum: '<S21>/Add1' */
    FieldOrientedController_B.Add1_e = FieldOrientedController_B.Product1_l +
      FieldOrientedController_B.Product2_c;

    /* Sum: '<S23>/Error' incorporates:
     *  Constant: '<S18>/D_Command'
     */
    FieldOrientedController_B.currentControlError =
      FieldOrientedController_cal->D_Command_Value -
      FieldOrientedController_B.Add1_e;

    /* Gain: '<S23>/Proportional_Gain' */
    FieldOrientedController_B.currentControlPTerm = rtP_paramCurrentControlP *
      FieldOrientedController_B.currentControlError;

    /* UnitDelay: '<S23>/Unit_Delay' */
    FieldOrientedController_B.currentControlITerm =
      FieldOrientedController_DW.Unit_Delay_DSTATE;

    /* Sum: '<S23>/Add1' */
    FieldOrientedController_B.preSatVoltage =
      FieldOrientedController_B.currentControlPTerm +
      FieldOrientedController_B.currentControlITerm;

    /* RelationalOperator: '<S26>/LowerRelop1' incorporates:
     *  Constant: '<S25>/Saturation_Magntidue'
     */
    FieldOrientedController_B.LowerRelop1 =
      (FieldOrientedController_B.preSatVoltage >
       rtP_paramCurrentControlSatVoltage);

    /* UnaryMinus: '<S25>/Negate' incorporates:
     *  Constant: '<S25>/Saturation_Magntidue'
     */
    FieldOrientedController_B.Negate = -rtP_paramCurrentControlSatVoltage;

    /* RelationalOperator: '<S26>/UpperRelop' */
    FieldOrientedController_B.UpperRelop =
      (FieldOrientedController_B.preSatVoltage <
       FieldOrientedController_B.Negate);

    /* Switch: '<S26>/Switch' */
    if (FieldOrientedController_B.UpperRelop) {
      /* Switch: '<S26>/Switch' */
      FieldOrientedController_B.Switch_c1 = FieldOrientedController_B.Negate;
    } else {
      /* Switch: '<S26>/Switch' */
      FieldOrientedController_B.Switch_c1 =
        FieldOrientedController_B.preSatVoltage;
    }

    /* End of Switch: '<S26>/Switch' */

    /* Switch: '<S26>/Switch2' */
    if (FieldOrientedController_B.LowerRelop1) {
      /* Switch: '<S26>/Switch2' incorporates:
       *  Constant: '<S25>/Saturation_Magntidue'
       */
      FieldOrientedController_B.Switch2_e = rtP_paramCurrentControlSatVoltage;
    } else {
      /* Switch: '<S26>/Switch2' */
      FieldOrientedController_B.Switch2_e = FieldOrientedController_B.Switch_c1;
    }

    /* End of Switch: '<S26>/Switch2' */

    /* RelationalOperator: '<S23>/Not_Equal' */
    FieldOrientedController_B.Not_Equal =
      (FieldOrientedController_B.preSatVoltage !=
       FieldOrientedController_B.Switch2_e);

    /* Switch: '<S23>/Switch' */
    if (FieldOrientedController_B.Not_Equal) {
      /* Switch: '<S23>/Switch' incorporates:
       *  Constant: '<S23>/Zero'
       */
      FieldOrientedController_B.Switch_ig =
        FieldOrientedController_cal->Zero_Value;
    } else {
      /* Gain: '<S23>/Sample_Time' */
      FieldOrientedController_B.Sample_Time_m =
        FieldOrientedController_cal->Sample_Time_Gain *
        FieldOrientedController_B.currentControlError;

      /* Gain: '<S23>/Integral_Gain' */
      FieldOrientedController_B.Integral_Gain_e = rtP_paramCurrentControlI *
        FieldOrientedController_B.Sample_Time_m;

      /* Switch: '<S23>/Switch' */
      FieldOrientedController_B.Switch_ig =
        FieldOrientedController_B.Integral_Gain_e;
    }

    /* End of Switch: '<S23>/Switch' */

    /* Sum: '<S23>/Add' */
    FieldOrientedController_B.Add_e = FieldOrientedController_B.Switch_ig +
      FieldOrientedController_B.currentControlITerm;

    /* Product: '<S21>/Product3' */
    FieldOrientedController_B.Product3_n =
      FieldOrientedController_B.PhaseCurrent[0] *
      FieldOrientedController_B.sinCoefficient;

    /* Product: '<S21>/Product4' */
    FieldOrientedController_B.Product4_n = FieldOrientedController_B.Add_a *
      FieldOrientedController_B.cosCoefficient;

    /* Sum: '<S21>/Add2' */
    FieldOrientedController_B.Add2_d = FieldOrientedController_B.Product4_n -
      FieldOrientedController_B.Product3_n;

    /* Sum: '<S24>/Error' */
    FieldOrientedController_B.currentControlError_l =
      FieldOrientedController_B.RateTransition9 -
      FieldOrientedController_B.Add2_d;

    /* Gain: '<S24>/Proportional_Gain' */
    FieldOrientedController_B.currentControlPTerm_g = rtP_paramCurrentControlP *
      FieldOrientedController_B.currentControlError_l;

    /* UnitDelay: '<S24>/Unit_Delay' */
    FieldOrientedController_B.currentControlITerm_k =
      FieldOrientedController_DW.Unit_Delay_DSTATE_h;

    /* Sum: '<S24>/Add1' */
    FieldOrientedController_B.preSatVoltage_n =
      FieldOrientedController_B.currentControlPTerm_g +
      FieldOrientedController_B.currentControlITerm_k;

    /* RelationalOperator: '<S28>/LowerRelop1' incorporates:
     *  Constant: '<S27>/Saturation_Magntidue'
     */
    FieldOrientedController_B.LowerRelop1_h =
      (FieldOrientedController_B.preSatVoltage_n >
       rtP_paramCurrentControlSatVoltage);

    /* UnaryMinus: '<S27>/Negate' incorporates:
     *  Constant: '<S27>/Saturation_Magntidue'
     */
    FieldOrientedController_B.Negate_f = -rtP_paramCurrentControlSatVoltage;

    /* RelationalOperator: '<S28>/UpperRelop' */
    FieldOrientedController_B.UpperRelop_f =
      (FieldOrientedController_B.preSatVoltage_n <
       FieldOrientedController_B.Negate_f);

    /* Switch: '<S28>/Switch' */
    if (FieldOrientedController_B.UpperRelop_f) {
      /* Switch: '<S28>/Switch' */
      FieldOrientedController_B.Switch_m = FieldOrientedController_B.Negate_f;
    } else {
      /* Switch: '<S28>/Switch' */
      FieldOrientedController_B.Switch_m =
        FieldOrientedController_B.preSatVoltage_n;
    }

    /* End of Switch: '<S28>/Switch' */

    /* Switch: '<S28>/Switch2' */
    if (FieldOrientedController_B.LowerRelop1_h) {
      /* Switch: '<S28>/Switch2' incorporates:
       *  Constant: '<S27>/Saturation_Magntidue'
       */
      FieldOrientedController_B.Switch2_l = rtP_paramCurrentControlSatVoltage;
    } else {
      /* Switch: '<S28>/Switch2' */
      FieldOrientedController_B.Switch2_l = FieldOrientedController_B.Switch_m;
    }

    /* End of Switch: '<S28>/Switch2' */

    /* RelationalOperator: '<S24>/Not_Equal' */
    FieldOrientedController_B.Not_Equal_n =
      (FieldOrientedController_B.preSatVoltage_n !=
       FieldOrientedController_B.Switch2_l);

    /* Switch: '<S24>/Switch' */
    if (FieldOrientedController_B.Not_Equal_n) {
      /* Switch: '<S24>/Switch' incorporates:
       *  Constant: '<S24>/Zero'
       */
      FieldOrientedController_B.Switch_cn =
        FieldOrientedController_cal->Zero_Value_m;
    } else {
      /* Gain: '<S24>/Sample_Time' */
      FieldOrientedController_B.Sample_Time =
        FieldOrientedController_cal->Sample_Time_Gain_a *
        FieldOrientedController_B.currentControlError_l;

      /* Gain: '<S24>/Integral_Gain' */
      FieldOrientedController_B.Integral_Gain = rtP_paramCurrentControlI *
        FieldOrientedController_B.Sample_Time;

      /* Switch: '<S24>/Switch' */
      FieldOrientedController_B.Switch_cn =
        FieldOrientedController_B.Integral_Gain;
    }

    /* End of Switch: '<S24>/Switch' */

    /* Sum: '<S24>/Add' */
    FieldOrientedController_B.Add_p = FieldOrientedController_B.Switch_cn +
      FieldOrientedController_B.currentControlITerm_k;

    /* Product: '<S20>/Product1' */
    FieldOrientedController_B.Product1_k = FieldOrientedController_B.Switch2_e *
      FieldOrientedController_B.cosCoefficient;

    /* Product: '<S20>/Product2' */
    FieldOrientedController_B.Product2_g = FieldOrientedController_B.Switch2_l *
      FieldOrientedController_B.sinCoefficient;

    /* Sum: '<S20>/Add1' */
    FieldOrientedController_B.Add1_e5 = FieldOrientedController_B.Product1_k -
      FieldOrientedController_B.Product2_g;

    /* Gain: '<S19>/Gain' */
    FieldOrientedController_B.Gain_i = FieldOrientedController_cal->Gain_Gain_m *
      FieldOrientedController_B.Add1_e5;

    /* Product: '<S20>/Product3' */
    FieldOrientedController_B.Product3_m = FieldOrientedController_B.Switch2_e *
      FieldOrientedController_B.sinCoefficient;

    /* Product: '<S20>/Product4' */
    FieldOrientedController_B.Product4_b = FieldOrientedController_B.Switch2_l *
      FieldOrientedController_B.cosCoefficient;

    /* Sum: '<S20>/Add2' */
    FieldOrientedController_B.Add2_jl = FieldOrientedController_B.Product3_m +
      FieldOrientedController_B.Product4_b;

    /* Gain: '<S19>/Gain1' */
    FieldOrientedController_B.Gain1_b = FieldOrientedController_cal->Gain1_Gain *
      FieldOrientedController_B.Add2_jl;

    /* Sum: '<S19>/Add' */
    FieldOrientedController_B.Add_d = FieldOrientedController_B.Gain1_b -
      FieldOrientedController_B.Gain_i;

    /* Sum: '<S19>/Add1' */
    FieldOrientedController_B.Add1_d = (0.0F - FieldOrientedController_B.Gain_i)
      - FieldOrientedController_B.Gain1_b;

    /* MinMax: '<S22>/Max' */
    Bias = FieldOrientedController_B.Add1_e5;
    cosOut = FieldOrientedController_B.Add_d;
    tmpForInput_idx_2 = FieldOrientedController_B.Add1_d;
    if ((!(Bias > cosOut)) && (!rtIsNaNF(cosOut))) {
      Bias = cosOut;
    }

    if ((!(Bias > tmpForInput_idx_2)) && (!rtIsNaNF(tmpForInput_idx_2))) {
      Bias = tmpForInput_idx_2;
    }

    /* MinMax: '<S22>/Max' */
    FieldOrientedController_B.Max = Bias;

    /* MinMax: '<S22>/Min' */
    Bias = FieldOrientedController_B.Add1_e5;
    cosOut = FieldOrientedController_B.Add_d;
    tmpForInput_idx_2 = FieldOrientedController_B.Add1_d;
    if ((!(Bias < cosOut)) && (!rtIsNaNF(cosOut))) {
      Bias = cosOut;
    }

    if ((!(Bias < tmpForInput_idx_2)) && (!rtIsNaNF(tmpForInput_idx_2))) {
      Bias = tmpForInput_idx_2;
    }

    /* MinMax: '<S22>/Min' */
    FieldOrientedController_B.Min = Bias;

    /* Sum: '<S22>/Add' */
    FieldOrientedController_B.Add_do = FieldOrientedController_B.Max +
      FieldOrientedController_B.Min;

    /* Gain: '<S22>/Gain' */
    FieldOrientedController_B.Gain_jw =
      FieldOrientedController_cal->Gain_Gain_m1 *
      FieldOrientedController_B.Add_do;

    /* Merge: '<S2>/Merge' incorporates:
     *  Sum: '<S22>/Add1'
     */
    FieldOrientedController_B.Merge[0] = FieldOrientedController_B.Add1_e5 -
      FieldOrientedController_B.Gain_jw;
    FieldOrientedController_B.Merge[1] = FieldOrientedController_B.Add_d -
      FieldOrientedController_B.Gain_jw;
    FieldOrientedController_B.Merge[2] = FieldOrientedController_B.Add1_d -
      FieldOrientedController_B.Gain_jw;

    /* Update for UnitDelay: '<S23>/Unit_Delay' */
    FieldOrientedController_DW.Unit_Delay_DSTATE =
      FieldOrientedController_B.Add_e;

    /* Update for UnitDelay: '<S24>/Unit_Delay' */
    FieldOrientedController_DW.Unit_Delay_DSTATE_h =
      FieldOrientedController_B.Add_p;
  } else {
    FieldOrientedController_DW.Current_Control_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S2>/Current_Control' */

  /* RateTransition: '<S2>/Rate Transition2' */
  FieldOrientedController_B.RateTransition2 =
    FieldOrientedController_B.enableInverter;

  /* Logic: '<S9>/AND' incorporates:
   *  Constant: '<S9>/Enable_Over_Current_Detection'
   */
  FieldOrientedController_B.AND = (FieldOrientedController_B.RateTransition2 &&
    rtP_paramOverCurrentEnable);

  /* Abs: '<S9>/Abs' */
  FieldOrientedController_B.Abs[0] = std::abs
    (FieldOrientedController_B.PhaseCurrent[0]);
  FieldOrientedController_B.Abs[1] = std::abs
    (FieldOrientedController_B.PhaseCurrent[1]);

  /* Chart: '<S9>/Detect_Over_Current_Error' */
  FieldOrientedController_DW.chartAbsoluteTimeCounter++;
  if ((FieldOrientedController_B.Abs[0] >= rtP_paramOverCurrentLimit) ||
      (FieldOrientedController_B.Abs[1] >= rtP_paramOverCurrentLimit)) {
    /* '<S39>:5:1' */
    /* '<S39>:5:2' */
    hoisted_cond = true;
  } else {
    hoisted_cond = false;
  }

  if ((!hoisted_cond) ||
      (!FieldOrientedController_DW.condWasTrueAtLastTimeStep_1)) {
    FieldOrientedController_DW.durationLastReferenceTick_1 =
      FieldOrientedController_DW.chartAbsoluteTimeCounter;
  }

  FieldOrientedController_DW.condWasTrueAtLastTimeStep_1 = hoisted_cond;

  /* Gateway: Controller_Modes/Over_Current_Detector/Detect_Over_Current_Error */
  /* During: Controller_Modes/Over_Current_Detector/Detect_Over_Current_Error */
  if (FieldOrientedController_DW.is_active_c2_FieldOrientedController == 0U) {
    /* Entry: Controller_Modes/Over_Current_Detector/Detect_Over_Current_Error */
    FieldOrientedController_DW.chartAbsoluteTimeCounter = 0;
    FieldOrientedController_DW.is_active_c2_FieldOrientedController = 1U;

    /* Entry Internal: Controller_Modes/Over_Current_Detector/Detect_Over_Current_Error */
    /* Transition: '<S39>:3' */
    FieldOrientedController_DW.durationLastReferenceTick_1 =
      FieldOrientedController_DW.chartAbsoluteTimeCounter;
    FieldOrientedController_DW.is_c2_FieldOrientedController =
      FieldOrientedController_IN_No_Error;

    /* Entry 'No_Error': '<S39>:2' */
    FieldOrientedController_B.error = false;
    if ((FieldOrientedController_B.Abs[0] >= rtP_paramOverCurrentLimit) ||
        (FieldOrientedController_B.Abs[1] >= rtP_paramOverCurrentLimit)) {
      /* '<S39>:5:1' */
      /* '<S39>:5:2' */
      hoisted_cond = true;
    } else {
      hoisted_cond = false;
    }

    FieldOrientedController_DW.condWasTrueAtLastTimeStep_1 = hoisted_cond;
  } else {
    switch (FieldOrientedController_DW.is_c2_FieldOrientedController) {
     case FieldOrientedController_IN_Error_f:
      FieldOrientedController_B.error = true;

      /* During 'Error': '<S39>:7' */
      if (!FieldOrientedController_B.AND) {
        /* Transition: '<S39>:10' */
        FieldOrientedController_DW.is_c2_FieldOrientedController =
          FieldOrientedController_IN_Wait_For_Reset;
      }
      break;

     case FieldOrientedController_IN_No_Error:
      FieldOrientedController_B.error = false;

      /* During 'No_Error': '<S39>:2' */
      if (FieldOrientedController_B.AND) {
        if ((FieldOrientedController_B.Abs[0] >= rtP_paramOverCurrentLimit) ||
            (FieldOrientedController_B.Abs[1] >= rtP_paramOverCurrentLimit)) {
          /* '<S39>:5:1' */
          /* '<S39>:5:2' */
          hoisted_cond = true;
        } else {
          hoisted_cond = false;
        }

        if ((!hoisted_cond) ||
            (!FieldOrientedController_DW.condWasTrueAtLastTimeStep_1)) {
          FieldOrientedController_DW.durationLastReferenceTick_1 =
            FieldOrientedController_DW.chartAbsoluteTimeCounter;
        }

        FieldOrientedController_DW.condWasTrueAtLastTimeStep_1 = hoisted_cond;
        if (static_cast<int64_T>
            (FieldOrientedController_DW.chartAbsoluteTimeCounter -
             FieldOrientedController_DW.durationLastReferenceTick_1) >
            static_cast<uint32_T>(std::ceil(rtP_paramOverCurrentDuration /
              5.0E-5 - 5.0E-13))) {
          /* Transition: '<S39>:5' */
          FieldOrientedController_DW.is_c2_FieldOrientedController =
            FieldOrientedController_IN_Error_f;

          /* Entry 'Error': '<S39>:7' */
          FieldOrientedController_B.error = true;
        }
      }
      break;

     default:
      /* During 'Wait_For_Reset': '<S39>:23' */
      if (FieldOrientedController_B.AND) {
        /* Transition: '<S39>:11' */
        FieldOrientedController_DW.durationLastReferenceTick_1 =
          FieldOrientedController_DW.chartAbsoluteTimeCounter;
        FieldOrientedController_DW.is_c2_FieldOrientedController =
          FieldOrientedController_IN_No_Error;

        /* Entry 'No_Error': '<S39>:2' */
        FieldOrientedController_B.error = false;
        if ((FieldOrientedController_B.Abs[0] >= rtP_paramOverCurrentLimit) ||
            (FieldOrientedController_B.Abs[1] >= rtP_paramOverCurrentLimit)) {
          /* '<S39>:5:1' */
          /* '<S39>:5:2' */
          hoisted_cond = true;
        } else {
          hoisted_cond = false;
        }

        FieldOrientedController_DW.condWasTrueAtLastTimeStep_1 = hoisted_cond;
      }
      break;
    }
  }

  /* End of Chart: '<S9>/Detect_Over_Current_Error' */

  /* Outputs for Enabled SubSystem: '<S2>/StandBy' incorporates:
   *  EnablePort: '<S10>/Enable'
   */
  if (FieldOrientedController_B.error) {
    /* Merge: '<S2>/Merge' incorporates:
     *  Constant: '<S10>/Constant'
     *  SignalConversion generated from: '<S10>/Phase Voltage'
     */
    FieldOrientedController_B.Merge[0] =
      FieldOrientedController_cal->Constant_Value_j[0];
    FieldOrientedController_B.Merge[1] =
      FieldOrientedController_cal->Constant_Value_j[1];
    FieldOrientedController_B.Merge[2] =
      FieldOrientedController_cal->Constant_Value_j[2];
  }

  /* End of Outputs for SubSystem: '<S2>/StandBy' */

  /* RateTransition: '<S2>/Rate Transition7' */
  FieldOrientedController_B.RateTransition7 = FieldOrientedController_B.Switch_c;

  /* RateTransition: '<S2>/Rate Transition5' */
  FieldOrientedController_B.RateTransition5 = FieldOrientedController_B.openLoop;

  /* Outputs for Enabled SubSystem: '<S2>/Open_Loop_Velocity_Control' incorporates:
   *  EnablePort: '<S8>/Enable'
   */
  if (FieldOrientedController_B.RateTransition5) {
    if (!FieldOrientedController_DW.Open_Loop_Velocity_Control_MODE) {
      /* InitializeConditions for Delay: '<S33>/Delay' */
      FieldOrientedController_DW.Delay_DSTATE =
        FieldOrientedController_cal->Delay_InitialCondition_if;

      /* InitializeConditions for Delay: '<S30>/Delay' */
      FieldOrientedController_DW.Delay_DSTATE_o =
        FieldOrientedController_cal->Delay_InitialCondition_d;

      /* InitializeConditions for Delay: '<S37>/Delay' */
      FieldOrientedController_DW.Delay_DSTATE_h =
        FieldOrientedController_cal->Delay_InitialCondition_j;

      /* InitializeConditions for Delay: '<S36>/Delay1' */
      FieldOrientedController_DW.Delay1_DSTATE_n =
        FieldOrientedController_cal->Delay1_InitialCondition_n;
      FieldOrientedController_DW.Open_Loop_Velocity_Control_MODE = true;
    }

    /* Delay: '<S33>/Delay' */
    FieldOrientedController_B.Delay = FieldOrientedController_DW.Delay_DSTATE;

    /* Gain: '<S33>/Number_Of_Pole_Pairs' */
    FieldOrientedController_B.Number_Of_Pole_Pairs = rtP_PolePairs *
      FieldOrientedController_B.Delay;

    /* Gain: '<S30>/Gain' */
    FieldOrientedController_B.Gain_j = FieldOrientedController_cal->Gain_Gain_k *
      FieldOrientedController_B.Number_Of_Pole_Pairs;

    /* Delay: '<S30>/Delay' */
    FieldOrientedController_B.Delay_o =
      FieldOrientedController_DW.Delay_DSTATE_o;

    /* Sum: '<S30>/Add' */
    FieldOrientedController_B.Add_n = FieldOrientedController_B.Gain_j +
      FieldOrientedController_B.Delay_o;

    /* RelationalOperator: '<S35>/Greater_Than' incorporates:
     *  Constant: '<S35>/Two_Pi1'
     */
    FieldOrientedController_B.Greater_Than_p = (FieldOrientedController_B.Add_n >=
      FieldOrientedController_cal->Two_Pi1_Value);

    /* Switch: '<S35>/Switch' */
    if (FieldOrientedController_B.Greater_Than_p) {
      /* Sum: '<S35>/Add1' incorporates:
       *  Constant: '<S35>/Two_Pi'
       */
      FieldOrientedController_B.Add1_k = FieldOrientedController_B.Add_n -
        FieldOrientedController_cal->Two_Pi_Value_k;

      /* Switch: '<S35>/Switch' */
      FieldOrientedController_B.Switch_l = FieldOrientedController_B.Add1_k;
    } else {
      /* RelationalOperator: '<S35>/Less_Than' incorporates:
       *  Constant: '<S35>/Zero'
       */
      FieldOrientedController_B.Less_Than_k = (FieldOrientedController_B.Add_n <
        FieldOrientedController_cal->Zero_Value_b);

      /* Switch: '<S35>/Switch1' */
      if (FieldOrientedController_B.Less_Than_k) {
        /* Sum: '<S35>/Add2' incorporates:
         *  Constant: '<S35>/Two_Pi2'
         */
        FieldOrientedController_B.Add2_o = FieldOrientedController_B.Add_n +
          FieldOrientedController_cal->Two_Pi2_Value_l;

        /* Switch: '<S35>/Switch1' */
        FieldOrientedController_B.Switch1_n = FieldOrientedController_B.Add2_o;
      } else {
        /* Switch: '<S35>/Switch1' */
        FieldOrientedController_B.Switch1_n = FieldOrientedController_B.Add_n;
      }

      /* End of Switch: '<S35>/Switch1' */

      /* Switch: '<S35>/Switch' */
      FieldOrientedController_B.Switch_l = FieldOrientedController_B.Switch1_n;
    }

    /* End of Switch: '<S35>/Switch' */

    /* Trigonometry: '<S29>/Sine_Cosine' */
    cosOut = FieldOrientedController_B.Delay_o;
    Bias = std::sin(cosOut);
    cosOut = std::cos(cosOut);

    /* Trigonometry: '<S29>/Sine_Cosine' */
    FieldOrientedController_B.Sine_Cosine_o1 = Bias;

    /* Trigonometry: '<S29>/Sine_Cosine' */
    FieldOrientedController_B.Sine_Cosine_o2 = cosOut;

    /* Product: '<S32>/Product1' incorporates:
     *  Constant: '<S29>/Direct_Voltage'
     */
    FieldOrientedController_B.Product1 =
      FieldOrientedController_cal->Direct_Voltage_Value *
      FieldOrientedController_B.Sine_Cosine_o2;

    /* Abs: '<S34>/Abs' */
    FieldOrientedController_B.Abs_a = std::abs(FieldOrientedController_B.Delay);

    /* Gain: '<S34>/Frequency_To_Voltage' */
    FieldOrientedController_B.Frequency_To_Voltage =
      rtP_paramOpenLoopVelocityToVoltsScalar * FieldOrientedController_B.Abs_a;

    /* Sum: '<S34>/Add' incorporates:
     *  Constant: '<S34>/Voltage_Bias'
     */
    FieldOrientedController_B.Add_j = rtP_paramOpenLoopVelocityToVoltsBias +
      FieldOrientedController_B.Frequency_To_Voltage;

    /* Product: '<S32>/Product2' */
    FieldOrientedController_B.Product2 = FieldOrientedController_B.Add_j *
      FieldOrientedController_B.Sine_Cosine_o1;

    /* Sum: '<S32>/Add1' */
    FieldOrientedController_B.Add1_l = FieldOrientedController_B.Product1 -
      FieldOrientedController_B.Product2;

    /* Gain: '<S31>/Gain' */
    FieldOrientedController_B.Gain_k = FieldOrientedController_cal->Gain_Gain_d *
      FieldOrientedController_B.Add1_l;

    /* Product: '<S32>/Product3' incorporates:
     *  Constant: '<S29>/Direct_Voltage'
     */
    FieldOrientedController_B.Product3 =
      FieldOrientedController_cal->Direct_Voltage_Value *
      FieldOrientedController_B.Sine_Cosine_o1;

    /* Product: '<S32>/Product4' */
    FieldOrientedController_B.Product4 = FieldOrientedController_B.Add_j *
      FieldOrientedController_B.Sine_Cosine_o2;

    /* Sum: '<S32>/Add2' */
    FieldOrientedController_B.Add2_j = FieldOrientedController_B.Product3 +
      FieldOrientedController_B.Product4;

    /* Gain: '<S31>/Gain1' */
    FieldOrientedController_B.Gain1 = FieldOrientedController_cal->Gain1_Gain_f *
      FieldOrientedController_B.Add2_j;

    /* Sum: '<S31>/Add' */
    FieldOrientedController_B.Add_kw = FieldOrientedController_B.Gain1 -
      FieldOrientedController_B.Gain_k;

    /* Sum: '<S31>/Add1' */
    FieldOrientedController_B.Add1_m = (0.0F - FieldOrientedController_B.Gain_k)
      - FieldOrientedController_B.Gain1;

    /* RelationalOperator: '<S36>/Greater_Than' */
    FieldOrientedController_B.currentLessThanTarget =
      (FieldOrientedController_B.RateTransition7 >
       FieldOrientedController_B.Delay);

    /* Logic: '<S36>/NOT1' */
    FieldOrientedController_B.currentGreaterThanTarget =
      !FieldOrientedController_B.currentLessThanTarget;

    /* Delay: '<S37>/Delay' */
    FieldOrientedController_B.Delay_c =
      FieldOrientedController_DW.Delay_DSTATE_h;

    /* Sum: '<S37>/Add' */
    FieldOrientedController_B.Add_f = FieldOrientedController_B.RateTransition7
      - FieldOrientedController_B.Delay_c;

    /* RelationalOperator: '<S38>/Compare' incorporates:
     *  Constant: '<S38>/Constant'
     */
    FieldOrientedController_B.Compare = (FieldOrientedController_B.Add_f !=
      FieldOrientedController_cal->Constant_Value);

    /* Delay: '<S36>/Delay1' */
    FieldOrientedController_B.Delay1_g =
      FieldOrientedController_DW.Delay1_DSTATE_n;

    /* Switch: '<S36>/Latch_Target' */
    if (FieldOrientedController_B.Compare) {
      /* Switch: '<S36>/Latch_Target' */
      FieldOrientedController_B.positiveDirection =
        FieldOrientedController_B.currentLessThanTarget;
    } else {
      /* Switch: '<S36>/Latch_Target' */
      FieldOrientedController_B.positiveDirection =
        FieldOrientedController_B.Delay1_g;
    }

    /* End of Switch: '<S36>/Latch_Target' */

    /* Logic: '<S36>/AND_Pos' */
    FieldOrientedController_B.stopPositiveAcceleration =
      (FieldOrientedController_B.currentGreaterThanTarget &&
       FieldOrientedController_B.positiveDirection);

    /* Logic: '<S36>/NOT2' */
    FieldOrientedController_B.negativeDirection =
      !FieldOrientedController_B.positiveDirection;

    /* Logic: '<S36>/AND_Neg' */
    FieldOrientedController_B.stopNegativeAcceleration =
      (FieldOrientedController_B.currentLessThanTarget &&
       FieldOrientedController_B.negativeDirection);

    /* Logic: '<S36>/OR' */
    FieldOrientedController_B.stopAccelerating =
      (FieldOrientedController_B.stopPositiveAcceleration ||
       FieldOrientedController_B.stopNegativeAcceleration);

    /* Switch: '<S36>/Switch_Stop' incorporates:
     *  Switch: '<S36>/Switch_Dir'
     */
    if (FieldOrientedController_B.stopAccelerating) {
      /* Switch: '<S36>/Switch_Stop' incorporates:
       *  Constant: '<S36>/Zero'
       */
      FieldOrientedController_B.Switch_Stop =
        FieldOrientedController_cal->Zero_Value_c;
    } else {
      if (FieldOrientedController_B.positiveDirection) {
        /* Switch: '<S36>/Switch_Dir' incorporates:
         *  Constant: '<S36>/Acceleration'
         */
        FieldOrientedController_B.accleration =
          rtP_paramOpenLoopVelocityAcceleration;
      } else {
        /* UnaryMinus: '<S36>/Unary_Minus' incorporates:
         *  Constant: '<S36>/Acceleration'
         *  Switch: '<S36>/Switch_Dir'
         */
        FieldOrientedController_B.Unary_Minus =
          -rtP_paramOpenLoopVelocityAcceleration;

        /* Switch: '<S36>/Switch_Dir' */
        FieldOrientedController_B.accleration =
          FieldOrientedController_B.Unary_Minus;
      }

      /* Switch: '<S36>/Switch_Stop' */
      FieldOrientedController_B.Switch_Stop =
        FieldOrientedController_B.accleration;
    }

    /* End of Switch: '<S36>/Switch_Stop' */

    /* Gain: '<S33>/Gain' */
    FieldOrientedController_B.Gain_k3 = FieldOrientedController_cal->Gain_Gain_f
      * FieldOrientedController_B.Switch_Stop;

    /* Sum: '<S33>/Sum' */
    FieldOrientedController_B.Sum_k = FieldOrientedController_B.Gain_k3 +
      FieldOrientedController_B.Delay;

    /* Merge: '<S2>/Merge' incorporates:
     *  SignalConversion: '<S8>/Signal Conversion'
     */
    FieldOrientedController_B.Merge[0] = FieldOrientedController_B.Add1_l;
    FieldOrientedController_B.Merge[1] = FieldOrientedController_B.Add_kw;
    FieldOrientedController_B.Merge[2] = FieldOrientedController_B.Add1_m;

    /* Update for Delay: '<S33>/Delay' */
    FieldOrientedController_DW.Delay_DSTATE = FieldOrientedController_B.Sum_k;

    /* Update for Delay: '<S30>/Delay' */
    FieldOrientedController_DW.Delay_DSTATE_o =
      FieldOrientedController_B.Switch_l;

    /* Update for Delay: '<S37>/Delay' */
    FieldOrientedController_DW.Delay_DSTATE_h =
      FieldOrientedController_B.RateTransition7;

    /* Update for Delay: '<S36>/Delay1' */
    FieldOrientedController_DW.Delay1_DSTATE_n =
      FieldOrientedController_B.positiveDirection;
  } else {
    FieldOrientedController_DW.Open_Loop_Velocity_Control_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S2>/Open_Loop_Velocity_Control' */

  /* Logic: '<S9>/NOT' */
  FieldOrientedController_B.NOT = !FieldOrientedController_B.error;

  /* Logic: '<S9>/AND1' */
  *rty_motorCommands_enInverter = (FieldOrientedController_B.RateTransition2 &&
    FieldOrientedController_B.NOT);

  /* Delay: '<S93>/Delay4' */
  FieldOrientedController_B.Delay4 = FieldOrientedController_DW.Delay4_DSTATE;

  /* Delay: '<S93>/Delay2' */
  FieldOrientedController_B.Delay2 = FieldOrientedController_DW.Delay2_DSTATE;

  /* UnitDelay: '<S97>/Delay Input1' */
  FieldOrientedController_B.Uk1 = FieldOrientedController_DW.DelayInput1_DSTATE;

  /* RelationalOperator: '<S97>/FixPt Relational Operator' */
  FieldOrientedController_B.FixPtRelationalOperator =
    (FieldOrientedController_B.UnitDelay != FieldOrientedController_B.Uk1);

  /* Logic: '<S93>/No_Change_Detected' */
  FieldOrientedController_B.No_Change_Detected =
    !FieldOrientedController_B.FixPtRelationalOperator;

  /* Delay: '<S93>/Delay3' */
  FieldOrientedController_B.Delay3 = FieldOrientedController_DW.Delay3_DSTATE;

  /* RelationalOperator: '<S93>/Detect_Rise' */
  FieldOrientedController_B.Detect_Rise = (static_cast<int32_T>
    (*rtu_controllerFeedback_encoderIndexFound) > static_cast<int32_T>
    (FieldOrientedController_B.Delay3));

  /* Logic: '<S93>/No_Rise_Detected' */
  FieldOrientedController_B.No_Rise_Detected =
    !FieldOrientedController_B.Detect_Rise;

  /* Logic: '<S93>/Logical_AND' */
  FieldOrientedController_B.positionDeltaValid =
    (FieldOrientedController_B.Delay2 &&
     FieldOrientedController_B.No_Change_Detected &&
     FieldOrientedController_B.No_Rise_Detected);

  /* Delay: '<S93>/Last_Valid_Position_Delta' */
  FieldOrientedController_B.Last_Valid_Position_Delta =
    FieldOrientedController_DW.Last_Valid_Position_Delta_DSTATE;

  /* Switch: '<S93>/Switch' */
  if (FieldOrientedController_B.positionDeltaValid) {
    /* Sum: '<S93>/Subtract' */
    FieldOrientedController_B.positionDelta = FieldOrientedController_B.Switch -
      FieldOrientedController_B.Delay4;

    /* RelationalOperator: '<S98>/Greater_Than' incorporates:
     *  Constant: '<S98>/PI'
     */
    FieldOrientedController_B.positionGreaterThanPii =
      (FieldOrientedController_B.positionDelta >=
       FieldOrientedController_cal->PI_Value_p);

    /* Switch: '<S98>/Switch1' */
    if (FieldOrientedController_B.positionGreaterThanPii) {
      /* Sum: '<S98>/Add' incorporates:
       *  Constant: '<S98>/Two_Pi'
       */
      FieldOrientedController_B.wrapPositionPi =
        FieldOrientedController_B.positionDelta -
        FieldOrientedController_cal->Two_Pi_Value_d;

      /* Switch: '<S98>/Switch1' */
      FieldOrientedController_B.Switch1 =
        FieldOrientedController_B.wrapPositionPi;
    } else {
      /* RelationalOperator: '<S98>/Less_Than' incorporates:
       *  Constant: '<S98>/Neg_Pi'
       */
      FieldOrientedController_B.positionLessThanPi =
        (FieldOrientedController_B.positionDelta <
         FieldOrientedController_cal->Neg_Pi_Value_j);

      /* Switch: '<S98>/Switch2' */
      if (FieldOrientedController_B.positionLessThanPi) {
        /* Sum: '<S98>/Add1' incorporates:
         *  Constant: '<S98>/Two_Pi2'
         */
        FieldOrientedController_B.wrapPositionNegPii =
          FieldOrientedController_B.positionDelta +
          FieldOrientedController_cal->Two_Pi2_Value_p;

        /* Switch: '<S98>/Switch2' */
        FieldOrientedController_B.Switch2 =
          FieldOrientedController_B.wrapPositionNegPii;
      } else {
        /* Switch: '<S98>/Switch2' */
        FieldOrientedController_B.Switch2 =
          FieldOrientedController_B.positionDelta;
      }

      /* End of Switch: '<S98>/Switch2' */

      /* Switch: '<S98>/Switch1' */
      FieldOrientedController_B.Switch1 = FieldOrientedController_B.Switch2;
    }

    /* End of Switch: '<S98>/Switch1' */

    /* Switch: '<S93>/Switch' */
    FieldOrientedController_B.Switch_d = FieldOrientedController_B.Switch1;
  } else {
    /* Switch: '<S93>/Switch' */
    FieldOrientedController_B.Switch_d =
      FieldOrientedController_B.Last_Valid_Position_Delta;
  }

  /* End of Switch: '<S93>/Switch' */

  /* MATLAB Function: '<S92>/Rotor_Position_Delta_To_Velocity' */
  /* MATLAB Function 'EncoderToPositionAndVelocity/Position_Delta_To_Velocity/Rotor_Position_Delta_To_Velocity': '<S96>:1' */
  /* '<S96>:1:29' */
  FieldOrientedController_DW.bufferIndex =
    (FieldOrientedController_DW.bufferIndex + 1) & 7;

  /* '<S96>:1:30' */
  FieldOrientedController_DW.positionDeltaBuffer[FieldOrientedController_DW.bufferIndex]
    = FieldOrientedController_B.Switch_d;

  /* '<S96>:1:33' */
  Bias = FieldOrientedController_DW.positionDeltaBuffer[0];
  for (sigIdx = 0; sigIdx < 7; sigIdx++) {
    Bias += FieldOrientedController_DW.positionDeltaBuffer[sigIdx + 1];
  }

  /* '<S96>:1:34' */
  FieldOrientedController_B.rotorVelocity = Bias * 20000.0F * 0.125F;

  /* End of MATLAB Function: '<S92>/Rotor_Position_Delta_To_Velocity' */

  /* DiscreteFilter: '<S3>/FilterTs15mS' */
  Bias = FieldOrientedController_B.rotorVelocity;
  Bias -= FieldOrientedController_cal->FilterTs15mS_DenCoef[1] *
    FieldOrientedController_DW.FilterTs15mS_states;
  Bias /= FieldOrientedController_cal->FilterTs15mS_DenCoef[0];
  FieldOrientedController_DW.FilterTs15mS_tmp = Bias;
  Bias = FieldOrientedController_cal->FilterTs15mS_NumCoef *
    FieldOrientedController_DW.FilterTs15mS_tmp;

  /* DiscreteFilter: '<S3>/FilterTs15mS' */
  FieldOrientedController_B.FilterTs15mS = Bias;

  /* Delay: '<S93>/Delay1' */
  FieldOrientedController_B.Delay1_k =
    FieldOrientedController_DW.Delay1_DSTATE_p;

  /* RateTransition: '<Root>/Rate Transition' */
  if (rtmIsSpecialSampleHit(1, 0, tid)) {
    FieldOrientedController_DW.RateTransition_WrBufIdx = static_cast<int8_T>
      (FieldOrientedController_DW.RateTransition_WrBufIdx == 0);
  }

  FieldOrientedController_DW.RateTransition_Buf[FieldOrientedController_DW.RateTransition_WrBufIdx]
    = FieldOrientedController_B.FilterTs15mS;

  /* End of RateTransition: '<Root>/Rate Transition' */

  /* Gain: '<S4>/Slope' */
  FieldOrientedController_B.Slope[0] = rtP_paramPwmComparePerVolt *
    FieldOrientedController_B.Merge[0];

  /* Sum: '<S4>/Add' incorporates:
   *  Constant: '<S4>/Bias'
   */
  FieldOrientedController_B.Add_k[0] = FieldOrientedController_B.Slope[0] +
    rtP_paramPwmCompareAtZeroVolt;

  /* Saturate: '<S4>/Saturation' */
  Bias = FieldOrientedController_B.Add_k[0];
  if (Bias > rtP_paramPwmCompareMax) {
    Bias = rtP_paramPwmCompareMax;
  } else {
    if (Bias < FieldOrientedController_cal->Saturation_LowerSat) {
      Bias = FieldOrientedController_cal->Saturation_LowerSat;
    }
  }

  /* Saturate: '<S4>/Saturation' */
  FieldOrientedController_B.Saturation[0] = Bias;

  /* DataTypeConversion: '<S4>/Data_Type_Conversion' */
  rty_motorCommands_pwmCompare[0] = static_cast<uint16_T>
    (FieldOrientedController_B.Saturation[0]);

  /* Gain: '<S4>/Slope' */
  FieldOrientedController_B.Slope[1] = rtP_paramPwmComparePerVolt *
    FieldOrientedController_B.Merge[1];

  /* Sum: '<S4>/Add' incorporates:
   *  Constant: '<S4>/Bias'
   */
  FieldOrientedController_B.Add_k[1] = FieldOrientedController_B.Slope[1] +
    rtP_paramPwmCompareAtZeroVolt;

  /* Saturate: '<S4>/Saturation' */
  Bias = FieldOrientedController_B.Add_k[1];
  if (Bias > rtP_paramPwmCompareMax) {
    Bias = rtP_paramPwmCompareMax;
  } else {
    if (Bias < FieldOrientedController_cal->Saturation_LowerSat) {
      Bias = FieldOrientedController_cal->Saturation_LowerSat;
    }
  }

  /* Saturate: '<S4>/Saturation' */
  FieldOrientedController_B.Saturation[1] = Bias;

  /* DataTypeConversion: '<S4>/Data_Type_Conversion' */
  rty_motorCommands_pwmCompare[1] = static_cast<uint16_T>
    (FieldOrientedController_B.Saturation[1]);

  /* Gain: '<S4>/Slope' */
  FieldOrientedController_B.Slope[2] = rtP_paramPwmComparePerVolt *
    FieldOrientedController_B.Merge[2];

  /* Sum: '<S4>/Add' incorporates:
   *  Constant: '<S4>/Bias'
   */
  FieldOrientedController_B.Add_k[2] = FieldOrientedController_B.Slope[2] +
    rtP_paramPwmCompareAtZeroVolt;

  /* Saturate: '<S4>/Saturation' */
  Bias = FieldOrientedController_B.Add_k[2];
  if (Bias > rtP_paramPwmCompareMax) {
    Bias = rtP_paramPwmCompareMax;
  } else {
    if (Bias < FieldOrientedController_cal->Saturation_LowerSat) {
      Bias = FieldOrientedController_cal->Saturation_LowerSat;
    }
  }

  /* Saturate: '<S4>/Saturation' */
  FieldOrientedController_B.Saturation[2] = Bias;

  /* DataTypeConversion: '<S4>/Data_Type_Conversion' */
  rty_motorCommands_pwmCompare[2] = static_cast<uint16_T>
    (FieldOrientedController_B.Saturation[2]);

  /* Update for UnitDelay: '<Root>/Unit Delay' */
  FieldOrientedController_DW.encoderOffset = FieldOrientedController_B.Switch1_j;

  /* Update for Delay: '<S93>/Delay4' */
  FieldOrientedController_DW.Delay4_DSTATE = FieldOrientedController_B.Switch;

  /* Update for Delay: '<S93>/Delay2' */
  FieldOrientedController_DW.Delay2_DSTATE = FieldOrientedController_B.Delay1_k;

  /* Update for UnitDelay: '<S97>/Delay Input1' */
  FieldOrientedController_DW.DelayInput1_DSTATE =
    FieldOrientedController_B.UnitDelay;

  /* Update for Delay: '<S93>/Delay3' */
  FieldOrientedController_DW.Delay3_DSTATE =
    *rtu_controllerFeedback_encoderIndexFound;

  /* Update for Delay: '<S93>/Last_Valid_Position_Delta' */
  FieldOrientedController_DW.Last_Valid_Position_Delta_DSTATE =
    FieldOrientedController_B.Switch_d;

  /* Update for DiscreteFilter: '<S3>/FilterTs15mS' */
  FieldOrientedController_DW.FilterTs15mS_states =
    FieldOrientedController_DW.FilterTs15mS_tmp;

  /* Update for Delay: '<S93>/Delay1' incorporates:
   *  Constant: '<S93>/Constant'
   */
  FieldOrientedController_DW.Delay1_DSTATE_p =
    FieldOrientedController_cal->Constant_Value_gk;

  /* If subsystem generates rate grouping Output functions,
   * when tid is used in Output function for one rate,
   * all Output functions include tid as a local variable.
   * As result, some Output functions may have unused tid.
   */
  (void) (tid);
}

/* Output and update for referenced model: 'FieldOrientedController' */
void FieldOrientedControllerTID1(const boolean_T *rtu_userInputs_motorOn, const
  commandTypeEnum *rtu_userInputs_commandType, const real32_T
  *rtu_userInputs_velocityCommand, const boolean_T
  *rtu_controllerFeedback_encoderIndexFound, modeSchedulerEnum
  *rty_controllerInfo_mode, real32_T *rty_controllerInfo_rotorVelocity)
{
  int_T tid = 1;
  real32_T u;
  boolean_T sf_internal_predicateOutput;

  /* RateTransition: '<S2>/Rate Transition6' */
  FieldOrientedController_B.RateTransition6 =
    *rtu_controllerFeedback_encoderIndexFound;

  /* RateTransition: '<S2>/Rate Transition1' */
  FieldOrientedController_B.RateTransition1 =
    FieldOrientedController_B.latchPosition;

  /* RateTransition: '<S2>/Rate Transition10' */
  FieldOrientedController_B.RateTransition10 = FieldOrientedController_B.error;

  /* Chart: '<S2>/Mode_Scheduler' */
  /* Gateway: Controller_Modes/Mode_Scheduler */
  /* During: Controller_Modes/Mode_Scheduler */
  if (FieldOrientedController_DW.is_active_c1_FieldOrientedController == 0U) {
    /* Entry: Controller_Modes/Mode_Scheduler */
    FieldOrientedController_DW.is_active_c1_FieldOrientedController = 1U;

    /* Entry Internal: Controller_Modes/Mode_Scheduler */
    /* Transition: '<S7>:9' */
    FieldOrientedController_DW.is_c1_FieldOrientedController =
      FieldOrientedController_IN_Stand_By;
    *rty_controllerInfo_mode = Stand_By;

    /* Entry 'Stand_By': '<S7>:154' */
  } else {
    switch (FieldOrientedController_DW.is_c1_FieldOrientedController) {
     case FieldOrientedController_IN_Enable_Inverter:
      /* During 'Enable_Inverter': '<S7>:372' */
      if (!*rtu_userInputs_motorOn) {
        /* Transition: '<S7>:474' */
        FieldOrientedController_exit_internal_Enable_Inverter
          (rty_controllerInfo_mode);
        FieldOrientedController_B.enableInverter = false;
        FieldOrientedController_DW.is_c1_FieldOrientedController =
          FieldOrientedController_IN_Stand_By;
        *rty_controllerInfo_mode = Stand_By;

        /* Entry 'Stand_By': '<S7>:154' */
      } else if (FieldOrientedController_B.RateTransition10 ||
                 (*rtu_userInputs_commandType == commandTypeEnum_Error)) {
        /* Transition: '<S7>:561' */
        /* Transition: '<S7>:649' */
        FieldOrientedController_exit_internal_Enable_Inverter
          (rty_controllerInfo_mode);
        FieldOrientedController_B.enableInverter = false;
        FieldOrientedController_DW.is_c1_FieldOrientedController =
          FieldOrientedController_IN_Error;
        *rty_controllerInfo_mode = Error;

        /* Entry 'Error': '<S7>:374' */
      } else {
        switch (FieldOrientedController_DW.is_Enable_Inverter) {
         case FieldOrientedController_IN_Calibrate_Encoder_Offset:
          /* During 'Calibrate_Encoder_Offset': '<S7>:599' */
          sf_internal_predicateOutput =
            (FieldOrientedController_B.RateTransition1 &&
             (*rtu_userInputs_commandType != commandTypeEnum_CalibrateEncoder));
          if (sf_internal_predicateOutput) {
            /* Transition: '<S7>:602' */
            /* Transition: '<S7>:570' */
            if (*rtu_userInputs_commandType == commandTypeEnum_ClosedLoop) {
              /* Transition: '<S7>:162' */
              FieldOrientedController_B.calibrateEncoder = false;
              FieldOrientedController_DW.is_Enable_Inverter =
                FieldOrientedController_IN_Closed_Loop;
              FieldOrientedController_B.closedLoop = true;
              *rty_controllerInfo_mode = Closed_Loop;

              /* Entry 'Closed_Loop': '<S7>:108' */
            } else {
              /* Transition: '<S7>:659' */
              FieldOrientedController_B.calibrateEncoder = false;
              FieldOrientedController_DW.is_Enable_Inverter =
                FieldOrientedController_IN_Disabled;
              *rty_controllerInfo_mode = Disabled;
            }
          } else {
            if (*rtu_userInputs_commandType != commandTypeEnum_CalibrateEncoder)
            {
              /* Transition: '<S7>:663' */
              FieldOrientedController_B.calibrateEncoder = false;
              *rty_controllerInfo_mode = None;
              FieldOrientedController_enter_internal_Enable_Inverter
                (rtu_userInputs_commandType, rty_controllerInfo_mode);
            }
          }
          break;

         case FieldOrientedController_IN_Closed_Loop:
          /* During 'Closed_Loop': '<S7>:108' */
          if (*rtu_userInputs_commandType != commandTypeEnum_ClosedLoop) {
            /* Transition: '<S7>:629' */
            FieldOrientedController_B.closedLoop = false;
            *rty_controllerInfo_mode = None;
            FieldOrientedController_enter_internal_Enable_Inverter
              (rtu_userInputs_commandType, rty_controllerInfo_mode);
          }
          break;

         case FieldOrientedController_IN_Disabled:
          /* During 'Disabled': '<S7>:654' */
          break;

         default:
          /* During 'Open_Loop': '<S7>:377' */
          if (FieldOrientedController_DW.is_Open_Loop ==
              FieldOrientedController_IN_Find_Encoder_Index) {
            /* During 'Find_Encoder_Index': '<S7>:622' */
            if (FieldOrientedController_B.RateTransition6) {
              /* Transition: '<S7>:157' */
              FieldOrientedController_B.Find_Encoder_Index_e = false;
              FieldOrientedController_DW.is_Open_Loop = 0U;
              FieldOrientedController_B.openLoop = false;
              FieldOrientedController_DW.is_Enable_Inverter =
                FieldOrientedController_IN_Calibrate_Encoder_Offset;
              FieldOrientedController_B.calibrateEncoder = true;
              *rty_controllerInfo_mode = Calibrate_Encoder_Offset;

              /* Entry 'Calibrate_Encoder_Offset': '<S7>:599' */
            }
          } else {
            /* During 'Open_Loop_Command': '<S7>:623' */
            if (*rtu_userInputs_commandType != commandTypeEnum_OpenLoop) {
              /* Transition: '<S7>:626' */
              *rty_controllerInfo_mode = None;
              FieldOrientedController_DW.is_Open_Loop = 0U;
              FieldOrientedController_B.openLoop = false;
              FieldOrientedController_enter_internal_Enable_Inverter
                (rtu_userInputs_commandType, rty_controllerInfo_mode);
            }
          }
          break;
        }
      }
      break;

     case FieldOrientedController_IN_Error:
      /* During 'Error': '<S7>:374' */
      if (!*rtu_userInputs_motorOn) {
        /* Transition: '<S7>:375' */
        FieldOrientedController_DW.is_c1_FieldOrientedController =
          FieldOrientedController_IN_Stand_By;
        *rty_controllerInfo_mode = Stand_By;

        /* Entry 'Stand_By': '<S7>:154' */
      }
      break;

     default:
      /* During 'Stand_By': '<S7>:154' */
      if (*rtu_userInputs_motorOn) {
        /* Transition: '<S7>:164' */
        *rty_controllerInfo_mode = None;
        FieldOrientedController_DW.is_c1_FieldOrientedController =
          FieldOrientedController_IN_Enable_Inverter;
        FieldOrientedController_B.enableInverter = true;
        FieldOrientedController_enter_internal_Enable_Inverter
          (rtu_userInputs_commandType, rty_controllerInfo_mode);
      }
      break;
    }
  }

  /* End of Chart: '<S2>/Mode_Scheduler' */

  /* Switch: '<S2>/Switch' */
  if (FieldOrientedController_B.Find_Encoder_Index_e) {
    /* Switch: '<S2>/Switch' incorporates:
     *  Constant: '<S2>/Constant'
     */
    FieldOrientedController_B.Switch_c =
      FieldOrientedController_cal->Constant_Value_g;
  } else {
    /* Switch: '<S2>/Switch' */
    FieldOrientedController_B.Switch_c = *rtu_userInputs_velocityCommand;
  }

  /* End of Switch: '<S2>/Switch' */

  /* RateTransition: '<S2>/Rate Transition8' */
  FieldOrientedController_B.RateTransition8 =
    FieldOrientedController_B.FilterTs15mS;

  /* Outputs for Enabled SubSystem: '<S2>/Velocity_Control' incorporates:
   *  EnablePort: '<S11>/Enable'
   */
  if (FieldOrientedController_B.closedLoop) {
    if (!FieldOrientedController_DW.Velocity_Control_MODE) {
      /* InitializeConditions for DiscreteIntegrator: '<S74>/Integrator' */
      FieldOrientedController_DW.Integrator_DSTATE =
        FieldOrientedController_cal->Velocity_PID_Controller_InitialConditionForIntegrator;
      FieldOrientedController_DW.Velocity_Control_MODE = true;
    }

    /* Sum: '<S11>/Subtract' */
    FieldOrientedController_B.Subtract = *rtu_userInputs_velocityCommand -
      FieldOrientedController_B.RateTransition8;

    /* Gain: '<S79>/Proportional Gain' */
    FieldOrientedController_B.ProportionalGain = rtP_paramVelocityControlP *
      FieldOrientedController_B.Subtract;

    /* DiscreteIntegrator: '<S74>/Integrator' */
    FieldOrientedController_B.Integrator =
      FieldOrientedController_DW.Integrator_DSTATE;

    /* Sum: '<S83>/Sum' */
    FieldOrientedController_B.Sum = FieldOrientedController_B.ProportionalGain +
      FieldOrientedController_B.Integrator;

    /* Gain: '<S65>/ZeroGain' */
    FieldOrientedController_B.ZeroGain =
      FieldOrientedController_cal->ZeroGain_Gain * FieldOrientedController_B.Sum;

    /* DeadZone: '<S67>/DeadZone' */
    if (FieldOrientedController_B.Sum > rtP_paramVelocityControlSatCurrent) {
      /* DeadZone: '<S67>/DeadZone' */
      FieldOrientedController_B.DeadZone = FieldOrientedController_B.Sum -
        rtP_paramVelocityControlSatCurrent;
    } else if (FieldOrientedController_B.Sum >=
               FieldOrientedController_cal->Velocity_PID_Controller_LowerSaturationLimit)
    {
      /* DeadZone: '<S67>/DeadZone' */
      FieldOrientedController_B.DeadZone = 0.0F;
    } else {
      /* DeadZone: '<S67>/DeadZone' */
      FieldOrientedController_B.DeadZone = FieldOrientedController_B.Sum -
        FieldOrientedController_cal->Velocity_PID_Controller_LowerSaturationLimit;
    }

    /* End of DeadZone: '<S67>/DeadZone' */

    /* RelationalOperator: '<S65>/NotEqual' */
    FieldOrientedController_B.NotEqual = (FieldOrientedController_B.ZeroGain !=
      FieldOrientedController_B.DeadZone);

    /* Signum: '<S65>/SignPreSat' */
    u = FieldOrientedController_B.DeadZone;
    if (u < 0.0F) {
      /* Signum: '<S65>/SignPreSat' */
      FieldOrientedController_B.SignPreSat = -1.0F;
    } else if (u > 0.0F) {
      /* Signum: '<S65>/SignPreSat' */
      FieldOrientedController_B.SignPreSat = 1.0F;
    } else if (u == 0.0F) {
      /* Signum: '<S65>/SignPreSat' */
      FieldOrientedController_B.SignPreSat = 0.0F;
    } else {
      /* Signum: '<S65>/SignPreSat' */
      FieldOrientedController_B.SignPreSat = (rtNaNF);
    }

    /* End of Signum: '<S65>/SignPreSat' */

    /* DataTypeConversion: '<S65>/DataTypeConv1' */
    FieldOrientedController_B.DataTypeConv1 = static_cast<int8_T>(std::floor
      (FieldOrientedController_B.SignPreSat));

    /* Gain: '<S71>/Integral Gain' */
    FieldOrientedController_B.IntegralGain = rtP_paramVelocityControlI *
      FieldOrientedController_B.Subtract;

    /* Signum: '<S65>/SignPreIntegrator' */
    u = FieldOrientedController_B.IntegralGain;
    if (u < 0.0F) {
      /* Signum: '<S65>/SignPreIntegrator' */
      FieldOrientedController_B.SignPreIntegrator = -1.0F;
    } else if (u > 0.0F) {
      /* Signum: '<S65>/SignPreIntegrator' */
      FieldOrientedController_B.SignPreIntegrator = 1.0F;
    } else if (u == 0.0F) {
      /* Signum: '<S65>/SignPreIntegrator' */
      FieldOrientedController_B.SignPreIntegrator = 0.0F;
    } else {
      /* Signum: '<S65>/SignPreIntegrator' */
      FieldOrientedController_B.SignPreIntegrator = (rtNaNF);
    }

    /* End of Signum: '<S65>/SignPreIntegrator' */

    /* DataTypeConversion: '<S65>/DataTypeConv2' */
    FieldOrientedController_B.DataTypeConv2 = static_cast<int8_T>(std::floor
      (FieldOrientedController_B.SignPreIntegrator));

    /* RelationalOperator: '<S65>/Equal1' */
    FieldOrientedController_B.Equal1 = (FieldOrientedController_B.DataTypeConv1 ==
      FieldOrientedController_B.DataTypeConv2);

    /* Logic: '<S65>/AND3' */
    FieldOrientedController_B.AND3 = (FieldOrientedController_B.NotEqual &&
      FieldOrientedController_B.Equal1);

    /* Switch: '<S65>/Switch' */
    if (FieldOrientedController_B.AND3) {
      /* Switch: '<S65>/Switch' incorporates:
       *  Constant: '<S65>/Constant1'
       */
      FieldOrientedController_B.Switch_i =
        FieldOrientedController_cal->Constant1_Value;
    } else {
      /* Switch: '<S65>/Switch' */
      FieldOrientedController_B.Switch_i =
        FieldOrientedController_B.IntegralGain;
    }

    /* End of Switch: '<S65>/Switch' */

    /* Saturate: '<S81>/Saturation' */
    if (FieldOrientedController_B.Sum > rtP_paramVelocityControlSatCurrent) {
      /* Saturate: '<S81>/Saturation' */
      FieldOrientedController_B.Saturation_n =
        rtP_paramVelocityControlSatCurrent;
    } else if (FieldOrientedController_B.Sum <
               FieldOrientedController_cal->Velocity_PID_Controller_LowerSaturationLimit)
    {
      /* Saturate: '<S81>/Saturation' */
      FieldOrientedController_B.Saturation_n =
        FieldOrientedController_cal->Velocity_PID_Controller_LowerSaturationLimit;
    } else {
      /* Saturate: '<S81>/Saturation' */
      FieldOrientedController_B.Saturation_n = FieldOrientedController_B.Sum;
    }

    /* End of Saturate: '<S81>/Saturation' */

    /* Update for DiscreteIntegrator: '<S74>/Integrator' */
    FieldOrientedController_DW.Integrator_DSTATE +=
      FieldOrientedController_cal->Integrator_gainval *
      FieldOrientedController_B.Switch_i;
  } else {
    FieldOrientedController_DW.Velocity_Control_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S2>/Velocity_Control' */

  /* RateTransition: '<Root>/Rate Transition' */
  FieldOrientedController_DW.RateTransition_RdBufIdx = static_cast<int8_T>
    (FieldOrientedController_DW.RateTransition_RdBufIdx == 0);
  *rty_controllerInfo_rotorVelocity =
    FieldOrientedController_DW.RateTransition_Buf[FieldOrientedController_DW.RateTransition_RdBufIdx];

  /* If subsystem generates rate grouping Output functions,
   * when tid is used in Output function for one rate,
   * all Output functions include tid as a local variable.
   * As result, some Output functions may have unused tid.
   */
  (void) (tid);
}

/* Model initialize function */
void FieldOrientedController_initialize(const char_T **rt_errorStatus, const
  rtTimingBridge *timingBridge, int_T mdlref_TID0, int_T mdlref_TID1)
{
  RT_MODEL_FieldOrientedController_T *const FieldOrientedController_M =
    &(FieldOrientedController_MdlrefDW.rtm);

  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* setup the global timing engine */
  FieldOrientedController_GlobalTID[0] = mdlref_TID0;
  FieldOrientedController_GlobalTID[1] = mdlref_TID1;
  FieldOrientedController_TimingBrdg = timingBridge;

  /* initialize error status */
  rtmSetErrorStatusPointer(FieldOrientedController_M, rt_errorStatus);

  /* block I/O */
  (void) std::memset((static_cast<void *>(&FieldOrientedController_B)), 0,
                     sizeof(B_FieldOrientedController_c_T));

  {
    FieldOrientedController_B.Add[0] = 0.0F;
    FieldOrientedController_B.Add[1] = 0.0F;
    FieldOrientedController_B.PhaseCurrent[0] = 0.0F;
    FieldOrientedController_B.PhaseCurrent[1] = 0.0F;
    FieldOrientedController_B.Data_Type_Convert = 0.0F;
    FieldOrientedController_B.Rotor_Position_Per_Count = 0.0F;
    FieldOrientedController_B.UnitDelay = 0.0F;
    FieldOrientedController_B.Add_i = 0.0F;
    FieldOrientedController_B.Switch = 0.0F;
    FieldOrientedController_B.RateTransition9 = 0.0F;
    FieldOrientedController_B.Gain = 0.0F;
    FieldOrientedController_B.Mod = 0.0F;
    FieldOrientedController_B.Abs[0] = 0.0F;
    FieldOrientedController_B.Abs[1] = 0.0F;
    FieldOrientedController_B.RateTransition7 = 0.0F;
    FieldOrientedController_B.Merge[0] = 0.0F;
    FieldOrientedController_B.Merge[1] = 0.0F;
    FieldOrientedController_B.Merge[2] = 0.0F;
    FieldOrientedController_B.Delay4 = 0.0F;
    FieldOrientedController_B.Uk1 = 0.0F;
    FieldOrientedController_B.Last_Valid_Position_Delta = 0.0F;
    FieldOrientedController_B.Switch_d = 0.0F;
    FieldOrientedController_B.FilterTs15mS = 0.0F;
    FieldOrientedController_B.Slope[0] = 0.0F;
    FieldOrientedController_B.Slope[1] = 0.0F;
    FieldOrientedController_B.Slope[2] = 0.0F;
    FieldOrientedController_B.Add_k[0] = 0.0F;
    FieldOrientedController_B.Add_k[1] = 0.0F;
    FieldOrientedController_B.Add_k[2] = 0.0F;
    FieldOrientedController_B.Saturation[0] = 0.0F;
    FieldOrientedController_B.Saturation[1] = 0.0F;
    FieldOrientedController_B.Saturation[2] = 0.0F;
    FieldOrientedController_B.Switch_c = 0.0F;
    FieldOrientedController_B.RateTransition8 = 0.0F;
    FieldOrientedController_B.positionDelta = 0.0F;
    FieldOrientedController_B.Switch1 = 0.0F;
    FieldOrientedController_B.Switch2 = 0.0F;
    FieldOrientedController_B.wrapPositionNegPii = 0.0F;
    FieldOrientedController_B.wrapPositionPi = 0.0F;
    FieldOrientedController_B.rotorVelocity = 0.0F;
    FieldOrientedController_B.Switch1_b = 0.0F;
    FieldOrientedController_B.Add2 = 0.0F;
    FieldOrientedController_B.Add1 = 0.0F;
    FieldOrientedController_B.Subtract = 0.0F;
    FieldOrientedController_B.ProportionalGain = 0.0F;
    FieldOrientedController_B.Integrator = 0.0F;
    FieldOrientedController_B.Sum = 0.0F;
    FieldOrientedController_B.ZeroGain = 0.0F;
    FieldOrientedController_B.DeadZone = 0.0F;
    FieldOrientedController_B.SignPreSat = 0.0F;
    FieldOrientedController_B.IntegralGain = 0.0F;
    FieldOrientedController_B.SignPreIntegrator = 0.0F;
    FieldOrientedController_B.Switch_i = 0.0F;
    FieldOrientedController_B.Saturation_n = 0.0F;
    FieldOrientedController_B.Delay = 0.0F;
    FieldOrientedController_B.Number_Of_Pole_Pairs = 0.0F;
    FieldOrientedController_B.Gain_j = 0.0F;
    FieldOrientedController_B.Delay_o = 0.0F;
    FieldOrientedController_B.Add_n = 0.0F;
    FieldOrientedController_B.Switch_l = 0.0F;
    FieldOrientedController_B.Sine_Cosine_o1 = 0.0F;
    FieldOrientedController_B.Sine_Cosine_o2 = 0.0F;
    FieldOrientedController_B.Product1 = 0.0F;
    FieldOrientedController_B.Abs_a = 0.0F;
    FieldOrientedController_B.Frequency_To_Voltage = 0.0F;
    FieldOrientedController_B.Add_j = 0.0F;
    FieldOrientedController_B.Product2 = 0.0F;
    FieldOrientedController_B.Add1_l = 0.0F;
    FieldOrientedController_B.Gain_k = 0.0F;
    FieldOrientedController_B.Product3 = 0.0F;
    FieldOrientedController_B.Product4 = 0.0F;
    FieldOrientedController_B.Add2_j = 0.0F;
    FieldOrientedController_B.Gain1 = 0.0F;
    FieldOrientedController_B.Add_kw = 0.0F;
    FieldOrientedController_B.Add1_m = 0.0F;
    FieldOrientedController_B.Delay_c = 0.0F;
    FieldOrientedController_B.Add_f = 0.0F;
    FieldOrientedController_B.Switch_Stop = 0.0F;
    FieldOrientedController_B.Gain_k3 = 0.0F;
    FieldOrientedController_B.Sum_k = 0.0F;
    FieldOrientedController_B.accleration = 0.0F;
    FieldOrientedController_B.Unary_Minus = 0.0F;
    FieldOrientedController_B.Switch1_n = 0.0F;
    FieldOrientedController_B.Add2_o = 0.0F;
    FieldOrientedController_B.Add1_k = 0.0F;
    FieldOrientedController_B.Alpha_Gain = 0.0F;
    FieldOrientedController_B.Beta_Gain = 0.0F;
    FieldOrientedController_B.Add_a = 0.0F;
    FieldOrientedController_B.sinCoefficient = 0.0F;
    FieldOrientedController_B.cosCoefficient = 0.0F;
    FieldOrientedController_B.Product1_l = 0.0F;
    FieldOrientedController_B.Product2_c = 0.0F;
    FieldOrientedController_B.Add1_e = 0.0F;
    FieldOrientedController_B.currentControlError = 0.0F;
    FieldOrientedController_B.currentControlPTerm = 0.0F;
    FieldOrientedController_B.currentControlITerm = 0.0F;
    FieldOrientedController_B.preSatVoltage = 0.0F;
    FieldOrientedController_B.Negate = 0.0F;
    FieldOrientedController_B.Switch_c1 = 0.0F;
    FieldOrientedController_B.Switch2_e = 0.0F;
    FieldOrientedController_B.Switch_ig = 0.0F;
    FieldOrientedController_B.Add_e = 0.0F;
    FieldOrientedController_B.Product3_n = 0.0F;
    FieldOrientedController_B.Product4_n = 0.0F;
    FieldOrientedController_B.Add2_d = 0.0F;
    FieldOrientedController_B.currentControlError_l = 0.0F;
    FieldOrientedController_B.currentControlPTerm_g = 0.0F;
    FieldOrientedController_B.currentControlITerm_k = 0.0F;
    FieldOrientedController_B.preSatVoltage_n = 0.0F;
    FieldOrientedController_B.Negate_f = 0.0F;
    FieldOrientedController_B.Switch_m = 0.0F;
    FieldOrientedController_B.Switch2_l = 0.0F;
    FieldOrientedController_B.Switch_cn = 0.0F;
    FieldOrientedController_B.Add_p = 0.0F;
    FieldOrientedController_B.Product1_k = 0.0F;
    FieldOrientedController_B.Product2_g = 0.0F;
    FieldOrientedController_B.Add1_e5 = 0.0F;
    FieldOrientedController_B.Gain_i = 0.0F;
    FieldOrientedController_B.Product3_m = 0.0F;
    FieldOrientedController_B.Product4_b = 0.0F;
    FieldOrientedController_B.Add2_jl = 0.0F;
    FieldOrientedController_B.Gain1_b = 0.0F;
    FieldOrientedController_B.Add_d = 0.0F;
    FieldOrientedController_B.Add1_d = 0.0F;
    FieldOrientedController_B.Max = 0.0F;
    FieldOrientedController_B.Min = 0.0F;
    FieldOrientedController_B.Add_do = 0.0F;
    FieldOrientedController_B.Gain_jw = 0.0F;
    FieldOrientedController_B.Sample_Time = 0.0F;
    FieldOrientedController_B.Integral_Gain = 0.0F;
    FieldOrientedController_B.Sample_Time_m = 0.0F;
    FieldOrientedController_B.Integral_Gain_e = 0.0F;
    FieldOrientedController_B.Delay_on = 0.0F;
    FieldOrientedController_B.Difference = 0.0F;
    FieldOrientedController_B.Switch1_nj = 0.0F;
    FieldOrientedController_B.Abs_o = 0.0F;
    FieldOrientedController_B.Delay_l = 0.0F;
    FieldOrientedController_B.Switch_k = 0.0F;
    FieldOrientedController_B.Sample_Frequency = 0.0F;
    FieldOrientedController_B.Delay1 = 0.0F;
    FieldOrientedController_B.Switch_iz = 0.0F;
    FieldOrientedController_B.Switch1_j = 0.0F;
    FieldOrientedController_B.Switch2_d = 0.0F;
    FieldOrientedController_B.wrapPositionNegPii_i = 0.0F;
    FieldOrientedController_B.wrapPositionPi_f = 0.0F;
    FieldOrientedController_B.negativeIn = 0.0F;
    FieldOrientedController_B.Switch1_jw = 0.0F;
    FieldOrientedController_B.Add_h = 0.0F;
  }

  /* states (dwork) */
  (void) std::memset(static_cast<void *>(&FieldOrientedController_DW), 0,
                     sizeof(DW_FieldOrientedController_f_T));
  FieldOrientedController_DW.calibrateAtStartup = 0.0;
  FieldOrientedController_DW.encoderOffset = 0.0F;
  FieldOrientedController_DW.Delay4_DSTATE = 0.0F;
  FieldOrientedController_DW.DelayInput1_DSTATE = 0.0F;
  FieldOrientedController_DW.Last_Valid_Position_Delta_DSTATE = 0.0F;
  FieldOrientedController_DW.FilterTs15mS_states = 0.0F;
  FieldOrientedController_DW.Integrator_DSTATE = 0.0F;
  FieldOrientedController_DW.Delay_DSTATE = 0.0F;
  FieldOrientedController_DW.Delay_DSTATE_o = 0.0F;
  FieldOrientedController_DW.Delay_DSTATE_h = 0.0F;
  FieldOrientedController_DW.Unit_Delay_DSTATE = 0.0F;
  FieldOrientedController_DW.Unit_Delay_DSTATE_h = 0.0F;
  FieldOrientedController_DW.Delay_DSTATE_e = 0.0F;
  FieldOrientedController_DW.Delay_DSTATE_a = 0.0F;
  FieldOrientedController_DW.Delay1_DSTATE = 0.0F;
  FieldOrientedController_DW.FilterTs15mS_tmp = 0.0F;
  FieldOrientedController_DW.RateTransition_Buf[0] = 0.0F;
  FieldOrientedController_DW.RateTransition_Buf[1] = 0.0F;

  {
    int32_T i;
    for (i = 0; i < 8; i++) {
      FieldOrientedController_DW.positionDeltaBuffer[i] = 0.0F;
    }
  }
}
