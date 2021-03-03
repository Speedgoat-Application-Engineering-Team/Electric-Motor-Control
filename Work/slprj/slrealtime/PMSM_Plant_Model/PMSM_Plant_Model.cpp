/*
 * Code generation for system model 'PMSM_Plant_Model'
 *
 * Model                      : PMSM_Plant_Model
 * Model version              : 2.0
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C++ source code generated on : Wed Mar  3 09:40:20 2021
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "PMSM_Plant_Model.h"
#include "PMSM_Plant_Model_private.h"
#include "rt_modd_snf.h"

int_T PMSM_Plant_Model_GlobalTID[1];
const rtTimingBridge *PMSM_Plant_Model_TimingBrdg;
MdlrefDW_PMSM_Plant_Model_T PMSM_Plant_Model_MdlrefDW;

/* Block signals (default storage) */
B_PMSM_Plant_Model_c_T PMSM_Plant_Model_B;

/* Block states (default storage) */
DW_PMSM_Plant_Model_f_T PMSM_Plant_Model_DW;

/* System initialize for referenced model: 'PMSM_Plant_Model' */
void PMSM_Plant_Model_Init(void)
{
  RT_MODEL_PMSM_Plant_Model_T *const PMSM_Plant_Model_M =
    &(PMSM_Plant_Model_MdlrefDW.rtm);
  NeModelParameters modelParameters;
  NeModelParameters modelParameters_0;
  NeslRtpManager *manager;
  NeslSimulationData *tmp_0;
  NeslSimulator *simulator;
  NeuDiagnosticManager *diagnosticManager;
  NeuDiagnosticTree *diagnosticTree;
  char *msg;
  real_T tmp_1;
  int32_T tmp_2;
  boolean_T tmp;

  /* Start for SimscapeRtp: '<S13>/RTP_1' */
  manager = nesl_lease_rtp_manager(
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/Solver_Configuration_1",
    0);
  tmp = pointer_is_null(manager);
  if (tmp) {
    PMSM_Plant_Model_e54d855d_1_gateway();
    manager = nesl_lease_rtp_manager(
      "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/Solver_Configuration_1",
      0);
  }

  PMSM_Plant_Model_DW.RTP_1_RtpManager = (void *)manager;
  PMSM_Plant_Model_DW.RTP_1_SetParametersNeeded = true;

  /* End of Start for SimscapeRtp: '<S13>/RTP_1' */

  /* Start for SimscapeExecutionBlock: '<S42>/STATE_1' */
  simulator = nesl_lease_simulator(
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/Solver_Configuration_1",
    0, 0);
  PMSM_Plant_Model_DW.STATE_1_Simulator = (void *)simulator;
  tmp = pointer_is_null(PMSM_Plant_Model_DW.STATE_1_Simulator);
  if (tmp) {
    PMSM_Plant_Model_e54d855d_1_gateway();
    simulator = nesl_lease_simulator(
      "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/Solver_Configuration_1",
      0, 0);
    PMSM_Plant_Model_DW.STATE_1_Simulator = (void *)simulator;
  }

  tmp_0 = nesl_create_simulation_data();
  PMSM_Plant_Model_DW.STATE_1_SimData = (void *)tmp_0;
  diagnosticManager = rtw_create_diagnostics();
  PMSM_Plant_Model_DW.STATE_1_DiagMgr = (void *)diagnosticManager;
  modelParameters.mSolverType = NE_SOLVER_TYPE_DAE;
  modelParameters.mSolverTolerance = 0.001;
  modelParameters.mVariableStepSolver = false;
  modelParameters.mIsUsingODEN = false;
  modelParameters.mFixedStepSize = 0.001;
  modelParameters.mStartTime = 0.0;
  modelParameters.mLoadInitialState = false;
  modelParameters.mUseSimState = false;
  modelParameters.mLinTrimCompile = false;
  modelParameters.mLoggingMode = SSC_LOGGING_NONE;
  modelParameters.mRTWModifiedTimeStamp = 5.360927E+8;
  tmp_1 = 0.001;
  modelParameters.mSolverTolerance = tmp_1;
  tmp_1 = 0.00025;
  modelParameters.mFixedStepSize = tmp_1;
  tmp = false;
  modelParameters.mVariableStepSolver = tmp;
  tmp = false;
  modelParameters.mIsUsingODEN = tmp;
  modelParameters.mLoadInitialState = false;
  simulator = (NeslSimulator *)PMSM_Plant_Model_DW.STATE_1_Simulator;
  diagnosticManager = (NeuDiagnosticManager *)
    PMSM_Plant_Model_DW.STATE_1_DiagMgr;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_2 = nesl_initialize_simulator(simulator, &modelParameters,
    diagnosticManager);
  if (tmp_2 != 0) {
    tmp = error_buffer_is_empty(rtmGetErrorStatus(PMSM_Plant_Model_M));
    if (tmp) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(PMSM_Plant_Model_M, msg);
    }
  }

  /* End of Start for SimscapeExecutionBlock: '<S42>/STATE_1' */

  /* Start for SimscapeExecutionBlock: '<S42>/OUTPUT_1_0' */
  simulator = nesl_lease_simulator(
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/Solver_Configuration_1",
    1, 0);
  PMSM_Plant_Model_DW.OUTPUT_1_0_Simulator = (void *)simulator;
  tmp = pointer_is_null(PMSM_Plant_Model_DW.OUTPUT_1_0_Simulator);
  if (tmp) {
    PMSM_Plant_Model_e54d855d_1_gateway();
    simulator = nesl_lease_simulator(
      "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/Solver_Configuration_1",
      1, 0);
    PMSM_Plant_Model_DW.OUTPUT_1_0_Simulator = (void *)simulator;
  }

  tmp_0 = nesl_create_simulation_data();
  PMSM_Plant_Model_DW.OUTPUT_1_0_SimData = (void *)tmp_0;
  diagnosticManager = rtw_create_diagnostics();
  PMSM_Plant_Model_DW.OUTPUT_1_0_DiagMgr = (void *)diagnosticManager;
  modelParameters_0.mSolverType = NE_SOLVER_TYPE_DAE;
  modelParameters_0.mSolverTolerance = 0.001;
  modelParameters_0.mVariableStepSolver = false;
  modelParameters_0.mIsUsingODEN = false;
  modelParameters_0.mFixedStepSize = 0.001;
  modelParameters_0.mStartTime = 0.0;
  modelParameters_0.mLoadInitialState = false;
  modelParameters_0.mUseSimState = false;
  modelParameters_0.mLinTrimCompile = false;
  modelParameters_0.mLoggingMode = SSC_LOGGING_NONE;
  modelParameters_0.mRTWModifiedTimeStamp = 5.360927E+8;
  tmp_1 = 0.001;
  modelParameters_0.mSolverTolerance = tmp_1;
  tmp_1 = 0.00025;
  modelParameters_0.mFixedStepSize = tmp_1;
  tmp = false;
  modelParameters_0.mVariableStepSolver = tmp;
  tmp = false;
  modelParameters_0.mIsUsingODEN = tmp;
  modelParameters_0.mLoadInitialState = false;
  simulator = (NeslSimulator *)PMSM_Plant_Model_DW.OUTPUT_1_0_Simulator;
  diagnosticManager = (NeuDiagnosticManager *)
    PMSM_Plant_Model_DW.OUTPUT_1_0_DiagMgr;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_2 = nesl_initialize_simulator(simulator, &modelParameters_0,
    diagnosticManager);
  if (tmp_2 != 0) {
    tmp = error_buffer_is_empty(rtmGetErrorStatus(PMSM_Plant_Model_M));
    if (tmp) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(PMSM_Plant_Model_M, msg);
    }
  }

  /* End of Start for SimscapeExecutionBlock: '<S42>/OUTPUT_1_0' */

  /* InitializeConditions for Memory: '<S7>/Memory' */
  PMSM_Plant_Model_DW.Memory_PreviousInput_h =
    PMSM_Plant_Model_cal->Memory_InitialCondition;

  /* InitializeConditions for Memory: '<S5>/Memory' */
  PMSM_Plant_Model_DW.Memory_PreviousInput = rtP_pmsmRotorPositionInit;
}

/* System reset for referenced model: 'PMSM_Plant_Model' */
void PMSM_Plant_Model_Reset(void)
{
  /* InitializeConditions for Memory: '<S7>/Memory' */
  PMSM_Plant_Model_DW.Memory_PreviousInput_h =
    PMSM_Plant_Model_cal->Memory_InitialCondition;

  /* InitializeConditions for Memory: '<S5>/Memory' */
  PMSM_Plant_Model_DW.Memory_PreviousInput = rtP_pmsmRotorPositionInit;
}

/* Output and update for referenced model: 'PMSM_Plant_Model' */
void PMSM_Plant_Model(const real_T *rtu_inputs_torqueLoad, const boolean_T
                      *rtu_inputs_connectCurrentSensor, const boolean_T
                      *rtu_inputs_motorBrake, const boolean_T
                      *rtu_commands_inverterEnable, const uint16_T
                      rtu_commands_pwmCompare[3], real_T
                      *rty_motorMeasurements_phaseCurrentA, real_T
                      *rty_motorMeasurements_phaseCurrentB, real_T
                      *rty_motorMeasurements_phaseCurrentC, real_T
                      *rty_motorMeasurements_directCurrent, real_T
                      *rty_motorMeasurements_quadratureCurrent, real_T
                      *rty_motorMeasurements_electromagneticTorque, real_T
                      *rty_motorMeasurements_rotorPosition, real_T
                      *rty_motorMeasurements_electricalPosition, real_T
                      *rty_motorMeasurements_rotorVelocity, real_T
                      *rty_motorMeasurements_electricalVelocity, real32_T
                      rty_feedback_transducerVoltage[2], uint16_T
                      *rty_feedback_encoderIndexFound, uint16_T
                      *rty_feedback_encoderCount)
{
  RT_MODEL_PMSM_Plant_Model_T *const PMSM_Plant_Model_M =
    &(PMSM_Plant_Model_MdlrefDW.rtm);
  NeParameterBundle expl_temp;
  NeslRtpManager *rtpManager;
  NeslSimulationData *simulationData;
  NeslSimulator *simulator;
  NeuDiagnosticManager *diag;
  NeuDiagnosticTree *diagTree;
  char *msg;
  real_T tmp_2[88];
  real_T tmp_0[44];
  real_T tmp_4[44];
  real_T tmp[3];
  real_T time;
  real_T time_0;
  real_T time_1;
  real_T tmp_6;
  real_T *parameterBundle_mRealParameters_mX;
  int_T tmp_3[13];
  int_T tmp_1[12];
  int_T tmp_5[12];
  int_T parameterBundle_mLogicalParameters_mN;
  uint16_T u0;
  uint16_T u1;
  boolean_T ok;

  /* DataTypeConversion: '<S8>/Cast To Double' */
  PMSM_Plant_Model_B.CastToDouble = *rtu_inputs_motorBrake;

  /* SimscapeInputBlock: '<S42>/INPUT_1_1_1' */
  PMSM_Plant_Model_B.INPUT_1_1_1[0] = PMSM_Plant_Model_B.CastToDouble;
  PMSM_Plant_Model_B.INPUT_1_1_1[1] = 0.0;
  PMSM_Plant_Model_B.INPUT_1_1_1[2] = 0.0;
  PMSM_Plant_Model_DW.INPUT_1_1_1_Discrete[0] =
    !(PMSM_Plant_Model_B.INPUT_1_1_1[0] ==
      PMSM_Plant_Model_DW.INPUT_1_1_1_Discrete[1]);
  PMSM_Plant_Model_DW.INPUT_1_1_1_Discrete[1] = PMSM_Plant_Model_B.INPUT_1_1_1[0];
  PMSM_Plant_Model_B.INPUT_1_1_1[0] = PMSM_Plant_Model_DW.INPUT_1_1_1_Discrete[1];
  PMSM_Plant_Model_B.INPUT_1_1_1[3] = PMSM_Plant_Model_DW.INPUT_1_1_1_Discrete[0];

  /* SimscapeInputBlock: '<S42>/INPUT_9_1_1' */
  PMSM_Plant_Model_B.INPUT_9_1_1[0] = *rtu_inputs_torqueLoad;
  PMSM_Plant_Model_B.INPUT_9_1_1[1] = 0.0;
  PMSM_Plant_Model_B.INPUT_9_1_1[2] = 0.0;
  PMSM_Plant_Model_DW.INPUT_9_1_1_Discrete[0] =
    !(PMSM_Plant_Model_B.INPUT_9_1_1[0] ==
      PMSM_Plant_Model_DW.INPUT_9_1_1_Discrete[1]);
  PMSM_Plant_Model_DW.INPUT_9_1_1_Discrete[1] = PMSM_Plant_Model_B.INPUT_9_1_1[0];
  PMSM_Plant_Model_B.INPUT_9_1_1[0] = PMSM_Plant_Model_DW.INPUT_9_1_1_Discrete[1];
  PMSM_Plant_Model_B.INPUT_9_1_1[3] = PMSM_Plant_Model_DW.INPUT_9_1_1_Discrete[0];

  /* Gain: '<S27>/Mod. Index' */
  PMSM_Plant_Model_B.ModIndex[0] = static_cast<real_T>
    (PMSM_Plant_Model_cal->ModIndex_Gain) * 1.4901161193847656E-8 * static_cast<
    real_T>(rtu_commands_pwmCompare[0]);
  PMSM_Plant_Model_B.ModIndex[1] = static_cast<real_T>
    (PMSM_Plant_Model_cal->ModIndex_Gain) * 1.4901161193847656E-8 * static_cast<
    real_T>(rtu_commands_pwmCompare[1]);
  PMSM_Plant_Model_B.ModIndex[2] = static_cast<real_T>
    (PMSM_Plant_Model_cal->ModIndex_Gain) * 1.4901161193847656E-8 * static_cast<
    real_T>(rtu_commands_pwmCompare[2]);

  /* SimscapeInputBlock: '<S42>/INPUT_3_1_1' */
  PMSM_Plant_Model_B.INPUT_3_1_1[0] = PMSM_Plant_Model_B.ModIndex[0];
  PMSM_Plant_Model_B.INPUT_3_1_1[1] = 0.0;
  PMSM_Plant_Model_B.INPUT_3_1_1[2] = 0.0;
  PMSM_Plant_Model_DW.INPUT_3_1_1_Discrete[0] =
    !(PMSM_Plant_Model_B.INPUT_3_1_1[0] ==
      PMSM_Plant_Model_DW.INPUT_3_1_1_Discrete[1]);
  PMSM_Plant_Model_DW.INPUT_3_1_1_Discrete[1] = PMSM_Plant_Model_B.INPUT_3_1_1[0];
  PMSM_Plant_Model_B.INPUT_3_1_1[0] = PMSM_Plant_Model_DW.INPUT_3_1_1_Discrete[1];
  PMSM_Plant_Model_B.INPUT_3_1_1[3] = PMSM_Plant_Model_DW.INPUT_3_1_1_Discrete[0];

  /* Gain: '<S27>/Gain' */
  PMSM_Plant_Model_B.Gain[0] = PMSM_Plant_Model_cal->Gain_Gain *
    PMSM_Plant_Model_B.ModIndex[0];

  /* Bias: '<S27>/Bias1' */
  PMSM_Plant_Model_B.Bias1[0] = PMSM_Plant_Model_B.Gain[0] +
    PMSM_Plant_Model_cal->Bias1_Bias;

  /* Gain: '<S27>/Gain' */
  PMSM_Plant_Model_B.Gain[1] = PMSM_Plant_Model_cal->Gain_Gain *
    PMSM_Plant_Model_B.ModIndex[1];

  /* Bias: '<S27>/Bias1' */
  PMSM_Plant_Model_B.Bias1[1] = PMSM_Plant_Model_B.Gain[1] +
    PMSM_Plant_Model_cal->Bias1_Bias;

  /* Gain: '<S27>/Gain' */
  PMSM_Plant_Model_B.Gain[2] = PMSM_Plant_Model_cal->Gain_Gain *
    PMSM_Plant_Model_B.ModIndex[2];

  /* Bias: '<S27>/Bias1' */
  PMSM_Plant_Model_B.Bias1[2] = PMSM_Plant_Model_B.Gain[2] +
    PMSM_Plant_Model_cal->Bias1_Bias;

  /* SimscapeInputBlock: '<S42>/INPUT_4_1_1' */
  PMSM_Plant_Model_B.INPUT_4_1_1[0] = PMSM_Plant_Model_B.Bias1[0];
  PMSM_Plant_Model_B.INPUT_4_1_1[1] = 0.0;
  PMSM_Plant_Model_B.INPUT_4_1_1[2] = 0.0;
  PMSM_Plant_Model_DW.INPUT_4_1_1_Discrete[0] =
    !(PMSM_Plant_Model_B.INPUT_4_1_1[0] ==
      PMSM_Plant_Model_DW.INPUT_4_1_1_Discrete[1]);
  PMSM_Plant_Model_DW.INPUT_4_1_1_Discrete[1] = PMSM_Plant_Model_B.INPUT_4_1_1[0];
  PMSM_Plant_Model_B.INPUT_4_1_1[0] = PMSM_Plant_Model_DW.INPUT_4_1_1_Discrete[1];
  PMSM_Plant_Model_B.INPUT_4_1_1[3] = PMSM_Plant_Model_DW.INPUT_4_1_1_Discrete[0];

  /* SimscapeInputBlock: '<S42>/INPUT_5_1_1' */
  PMSM_Plant_Model_B.INPUT_5_1_1[0] = PMSM_Plant_Model_B.ModIndex[1];
  PMSM_Plant_Model_B.INPUT_5_1_1[1] = 0.0;
  PMSM_Plant_Model_B.INPUT_5_1_1[2] = 0.0;
  PMSM_Plant_Model_DW.INPUT_5_1_1_Discrete[0] =
    !(PMSM_Plant_Model_B.INPUT_5_1_1[0] ==
      PMSM_Plant_Model_DW.INPUT_5_1_1_Discrete[1]);
  PMSM_Plant_Model_DW.INPUT_5_1_1_Discrete[1] = PMSM_Plant_Model_B.INPUT_5_1_1[0];
  PMSM_Plant_Model_B.INPUT_5_1_1[0] = PMSM_Plant_Model_DW.INPUT_5_1_1_Discrete[1];
  PMSM_Plant_Model_B.INPUT_5_1_1[3] = PMSM_Plant_Model_DW.INPUT_5_1_1_Discrete[0];

  /* SimscapeInputBlock: '<S42>/INPUT_6_1_1' */
  PMSM_Plant_Model_B.INPUT_6_1_1[0] = PMSM_Plant_Model_B.Bias1[1];
  PMSM_Plant_Model_B.INPUT_6_1_1[1] = 0.0;
  PMSM_Plant_Model_B.INPUT_6_1_1[2] = 0.0;
  PMSM_Plant_Model_DW.INPUT_6_1_1_Discrete[0] =
    !(PMSM_Plant_Model_B.INPUT_6_1_1[0] ==
      PMSM_Plant_Model_DW.INPUT_6_1_1_Discrete[1]);
  PMSM_Plant_Model_DW.INPUT_6_1_1_Discrete[1] = PMSM_Plant_Model_B.INPUT_6_1_1[0];
  PMSM_Plant_Model_B.INPUT_6_1_1[0] = PMSM_Plant_Model_DW.INPUT_6_1_1_Discrete[1];
  PMSM_Plant_Model_B.INPUT_6_1_1[3] = PMSM_Plant_Model_DW.INPUT_6_1_1_Discrete[0];

  /* SimscapeInputBlock: '<S42>/INPUT_7_1_1' */
  PMSM_Plant_Model_B.INPUT_7_1_1[0] = PMSM_Plant_Model_B.ModIndex[2];
  PMSM_Plant_Model_B.INPUT_7_1_1[1] = 0.0;
  PMSM_Plant_Model_B.INPUT_7_1_1[2] = 0.0;
  PMSM_Plant_Model_DW.INPUT_7_1_1_Discrete[0] =
    !(PMSM_Plant_Model_B.INPUT_7_1_1[0] ==
      PMSM_Plant_Model_DW.INPUT_7_1_1_Discrete[1]);
  PMSM_Plant_Model_DW.INPUT_7_1_1_Discrete[1] = PMSM_Plant_Model_B.INPUT_7_1_1[0];
  PMSM_Plant_Model_B.INPUT_7_1_1[0] = PMSM_Plant_Model_DW.INPUT_7_1_1_Discrete[1];
  PMSM_Plant_Model_B.INPUT_7_1_1[3] = PMSM_Plant_Model_DW.INPUT_7_1_1_Discrete[0];

  /* SimscapeInputBlock: '<S42>/INPUT_8_1_1' */
  PMSM_Plant_Model_B.INPUT_8_1_1[0] = PMSM_Plant_Model_B.Bias1[2];
  PMSM_Plant_Model_B.INPUT_8_1_1[1] = 0.0;
  PMSM_Plant_Model_B.INPUT_8_1_1[2] = 0.0;
  PMSM_Plant_Model_DW.INPUT_8_1_1_Discrete[0] =
    !(PMSM_Plant_Model_B.INPUT_8_1_1[0] ==
      PMSM_Plant_Model_DW.INPUT_8_1_1_Discrete[1]);
  PMSM_Plant_Model_DW.INPUT_8_1_1_Discrete[1] = PMSM_Plant_Model_B.INPUT_8_1_1[0];
  PMSM_Plant_Model_B.INPUT_8_1_1[0] = PMSM_Plant_Model_DW.INPUT_8_1_1_Discrete[1];
  PMSM_Plant_Model_B.INPUT_8_1_1[3] = PMSM_Plant_Model_DW.INPUT_8_1_1_Discrete[0];

  /* DataTypeConversion: '<S12>/Cast To Double' */
  PMSM_Plant_Model_B.CastToDouble_b[0] = *rtu_commands_inverterEnable;
  PMSM_Plant_Model_B.CastToDouble_b[1] = *rtu_commands_inverterEnable;
  PMSM_Plant_Model_B.CastToDouble_b[2] = *rtu_commands_inverterEnable;

  /* SimscapeInputBlock: '<S42>/INPUT_2_1_1' */
  PMSM_Plant_Model_B.INPUT_2_1_1[0] = PMSM_Plant_Model_B.CastToDouble_b[0];
  PMSM_Plant_Model_B.INPUT_2_1_1[1] = 0.0;
  PMSM_Plant_Model_B.INPUT_2_1_1[2] = 0.0;
  PMSM_Plant_Model_DW.INPUT_2_1_1_Discrete[0] =
    !(PMSM_Plant_Model_B.INPUT_2_1_1[0] ==
      PMSM_Plant_Model_DW.INPUT_2_1_1_Discrete[1]);
  PMSM_Plant_Model_DW.INPUT_2_1_1_Discrete[1] = PMSM_Plant_Model_B.INPUT_2_1_1[0];
  PMSM_Plant_Model_B.INPUT_2_1_1[0] = PMSM_Plant_Model_DW.INPUT_2_1_1_Discrete[1];
  PMSM_Plant_Model_B.INPUT_2_1_1[3] = PMSM_Plant_Model_DW.INPUT_2_1_1_Discrete[0];

  /* SimscapeInputBlock: '<S42>/INPUT_2_1_2' */
  PMSM_Plant_Model_B.INPUT_2_1_2[0] = PMSM_Plant_Model_B.CastToDouble_b[1];
  PMSM_Plant_Model_B.INPUT_2_1_2[1] = 0.0;
  PMSM_Plant_Model_B.INPUT_2_1_2[2] = 0.0;
  PMSM_Plant_Model_DW.INPUT_2_1_2_Discrete[0] =
    !(PMSM_Plant_Model_B.INPUT_2_1_2[0] ==
      PMSM_Plant_Model_DW.INPUT_2_1_2_Discrete[1]);
  PMSM_Plant_Model_DW.INPUT_2_1_2_Discrete[1] = PMSM_Plant_Model_B.INPUT_2_1_2[0];
  PMSM_Plant_Model_B.INPUT_2_1_2[0] = PMSM_Plant_Model_DW.INPUT_2_1_2_Discrete[1];
  PMSM_Plant_Model_B.INPUT_2_1_2[3] = PMSM_Plant_Model_DW.INPUT_2_1_2_Discrete[0];

  /* SimscapeInputBlock: '<S42>/INPUT_2_1_3' */
  PMSM_Plant_Model_B.INPUT_2_1_3[0] = PMSM_Plant_Model_B.CastToDouble_b[2];
  PMSM_Plant_Model_B.INPUT_2_1_3[1] = 0.0;
  PMSM_Plant_Model_B.INPUT_2_1_3[2] = 0.0;
  PMSM_Plant_Model_DW.INPUT_2_1_3_Discrete[0] =
    !(PMSM_Plant_Model_B.INPUT_2_1_3[0] ==
      PMSM_Plant_Model_DW.INPUT_2_1_3_Discrete[1]);
  PMSM_Plant_Model_DW.INPUT_2_1_3_Discrete[1] = PMSM_Plant_Model_B.INPUT_2_1_3[0];
  PMSM_Plant_Model_B.INPUT_2_1_3[0] = PMSM_Plant_Model_DW.INPUT_2_1_3_Discrete[1];
  PMSM_Plant_Model_B.INPUT_2_1_3[3] = PMSM_Plant_Model_DW.INPUT_2_1_3_Discrete[0];

  /* SimscapeRtp: '<S13>/RTP_1' incorporates:
   *  Constant: '<S10>/Subsystem_around_RTP_48260B4E_inertia'
   *  Constant: '<S11>/Subsystem_around_RTP_E65F8A5B_angular_position'
   *  Constant: '<S11>/Subsystem_around_RTP_E65F8A5B_angular_velocity'
   */
  if (PMSM_Plant_Model_DW.RTP_1_SetParametersNeeded) {
    tmp[0] = rtP_discInertia;
    tmp[1] = rtP_pmsmRotorPositionInit;
    tmp[2] = rtP_pmsmRotorVelocityInit;
    parameterBundle_mRealParameters_mX = &tmp[0];
    rtpManager = (NeslRtpManager *)PMSM_Plant_Model_DW.RTP_1_RtpManager;
    diag = rtw_create_diagnostics();
    diagTree = neu_diagnostic_manager_get_initial_tree(diag);
    expl_temp.mRealParameters.mN = 3;
    expl_temp.mRealParameters.mX = parameterBundle_mRealParameters_mX;
    expl_temp.mLogicalParameters.mN = 0;
    expl_temp.mLogicalParameters.mX = NULL;
    expl_temp.mIntegerParameters.mN = 0;
    expl_temp.mIntegerParameters.mX = NULL;
    expl_temp.mIndexParameters.mN = 0;
    expl_temp.mIndexParameters.mX = NULL;
    ok = nesl_rtp_manager_set_rtps(rtpManager, (( rtmGetClockTick0() +
      rtmGetClockTickH0()*4294967296.0 ) * 0.00025), expl_temp, diag);
    if (!ok) {
      ok = error_buffer_is_empty(rtmGetErrorStatus(PMSM_Plant_Model_M));
      if (ok) {
        msg = rtw_diagnostics_msg(diagTree);
        rtmSetErrorStatus(PMSM_Plant_Model_M, msg);
      }
    }
  }

  PMSM_Plant_Model_DW.RTP_1_SetParametersNeeded = false;

  /* End of SimscapeRtp: '<S13>/RTP_1' */

  /* SimscapeExecutionBlock: '<S42>/STATE_1' */
  simulationData = (NeslSimulationData *)PMSM_Plant_Model_DW.STATE_1_SimData;
  time = (( rtmGetClockTick0() + rtmGetClockTickH0()*4294967296.0 ) * 0.00025);
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time;
  simulationData->mData->mContStates.mN = 0;
  simulationData->mData->mContStates.mX = NULL;
  simulationData->mData->mDiscStates.mN = 29;
  simulationData->mData->mDiscStates.mX = &PMSM_Plant_Model_DW.STATE_1_Discrete
    [0];
  simulationData->mData->mModeVector.mN = 15;
  simulationData->mData->mModeVector.mX = &PMSM_Plant_Model_DW.STATE_1_Modes[0];
  ok = false;
  simulationData->mData->mFoundZcEvents = ok;
  simulationData->mData->mIsMajorTimeStep = true;
  ok = false;
  simulationData->mData->mIsSolverAssertCheck = ok;
  simulationData->mData->mIsSolverCheckingCIC = false;
  simulationData->mData->mIsComputingJacobian = false;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  tmp_1[0] = 0;
  tmp_0[0] = PMSM_Plant_Model_B.INPUT_1_1_1[0];
  tmp_0[1] = PMSM_Plant_Model_B.INPUT_1_1_1[1];
  tmp_0[2] = PMSM_Plant_Model_B.INPUT_1_1_1[2];
  tmp_0[3] = PMSM_Plant_Model_B.INPUT_1_1_1[3];
  tmp_1[1] = 4;
  tmp_0[4] = PMSM_Plant_Model_B.INPUT_9_1_1[0];
  tmp_0[5] = PMSM_Plant_Model_B.INPUT_9_1_1[1];
  tmp_0[6] = PMSM_Plant_Model_B.INPUT_9_1_1[2];
  tmp_0[7] = PMSM_Plant_Model_B.INPUT_9_1_1[3];
  tmp_1[2] = 8;
  tmp_0[8] = PMSM_Plant_Model_B.INPUT_3_1_1[0];
  tmp_0[9] = PMSM_Plant_Model_B.INPUT_3_1_1[1];
  tmp_0[10] = PMSM_Plant_Model_B.INPUT_3_1_1[2];
  tmp_0[11] = PMSM_Plant_Model_B.INPUT_3_1_1[3];
  tmp_1[3] = 12;
  tmp_0[12] = PMSM_Plant_Model_B.INPUT_4_1_1[0];
  tmp_0[13] = PMSM_Plant_Model_B.INPUT_4_1_1[1];
  tmp_0[14] = PMSM_Plant_Model_B.INPUT_4_1_1[2];
  tmp_0[15] = PMSM_Plant_Model_B.INPUT_4_1_1[3];
  tmp_1[4] = 16;
  tmp_0[16] = PMSM_Plant_Model_B.INPUT_5_1_1[0];
  tmp_0[17] = PMSM_Plant_Model_B.INPUT_5_1_1[1];
  tmp_0[18] = PMSM_Plant_Model_B.INPUT_5_1_1[2];
  tmp_0[19] = PMSM_Plant_Model_B.INPUT_5_1_1[3];
  tmp_1[5] = 20;
  tmp_0[20] = PMSM_Plant_Model_B.INPUT_6_1_1[0];
  tmp_0[21] = PMSM_Plant_Model_B.INPUT_6_1_1[1];
  tmp_0[22] = PMSM_Plant_Model_B.INPUT_6_1_1[2];
  tmp_0[23] = PMSM_Plant_Model_B.INPUT_6_1_1[3];
  tmp_1[6] = 24;
  tmp_0[24] = PMSM_Plant_Model_B.INPUT_7_1_1[0];
  tmp_0[25] = PMSM_Plant_Model_B.INPUT_7_1_1[1];
  tmp_0[26] = PMSM_Plant_Model_B.INPUT_7_1_1[2];
  tmp_0[27] = PMSM_Plant_Model_B.INPUT_7_1_1[3];
  tmp_1[7] = 28;
  tmp_0[28] = PMSM_Plant_Model_B.INPUT_8_1_1[0];
  tmp_0[29] = PMSM_Plant_Model_B.INPUT_8_1_1[1];
  tmp_0[30] = PMSM_Plant_Model_B.INPUT_8_1_1[2];
  tmp_0[31] = PMSM_Plant_Model_B.INPUT_8_1_1[3];
  tmp_1[8] = 32;
  tmp_0[32] = PMSM_Plant_Model_B.INPUT_2_1_1[0];
  tmp_0[33] = PMSM_Plant_Model_B.INPUT_2_1_1[1];
  tmp_0[34] = PMSM_Plant_Model_B.INPUT_2_1_1[2];
  tmp_0[35] = PMSM_Plant_Model_B.INPUT_2_1_1[3];
  tmp_1[9] = 36;
  tmp_0[36] = PMSM_Plant_Model_B.INPUT_2_1_2[0];
  tmp_0[37] = PMSM_Plant_Model_B.INPUT_2_1_2[1];
  tmp_0[38] = PMSM_Plant_Model_B.INPUT_2_1_2[2];
  tmp_0[39] = PMSM_Plant_Model_B.INPUT_2_1_2[3];
  tmp_1[10] = 40;
  tmp_0[40] = PMSM_Plant_Model_B.INPUT_2_1_3[0];
  tmp_0[41] = PMSM_Plant_Model_B.INPUT_2_1_3[1];
  tmp_0[42] = PMSM_Plant_Model_B.INPUT_2_1_3[2];
  tmp_0[43] = PMSM_Plant_Model_B.INPUT_2_1_3[3];
  tmp_1[11] = 44;
  simulationData->mData->mInputValues.mN = 44;
  simulationData->mData->mInputValues.mX = &tmp_0[0];
  simulationData->mData->mInputOffsets.mN = 12;
  simulationData->mData->mInputOffsets.mX = &tmp_1[0];
  simulationData->mData->mOutputs.mN = 44;
  simulationData->mData->mOutputs.mX = &PMSM_Plant_Model_B.STATE_1[0];
  simulationData->mData->mSampleHits.mN = 0;
  simulationData->mData->mSampleHits.mX = NULL;
  ok = 1;
  simulationData->mData->mIsFundamentalSampleHit = ok;
  simulationData->mData->mTolerances.mN = 0;
  simulationData->mData->mTolerances.mX = NULL;
  simulationData->mData->mCstateHasChanged = false;
  simulator = (NeslSimulator *)PMSM_Plant_Model_DW.STATE_1_Simulator;
  diag = (NeuDiagnosticManager *)PMSM_Plant_Model_DW.STATE_1_DiagMgr;
  diagTree = neu_diagnostic_manager_get_initial_tree(diag);
  parameterBundle_mLogicalParameters_mN = ne_simulator_method(simulator,
    NESL_SIM_OUTPUTS, simulationData, diag);
  if (parameterBundle_mLogicalParameters_mN != 0) {
    ok = error_buffer_is_empty(rtmGetErrorStatus(PMSM_Plant_Model_M));
    if (ok) {
      msg = rtw_diagnostics_msg(diagTree);
      rtmSetErrorStatus(PMSM_Plant_Model_M, msg);
    }
  }

  /* End of SimscapeExecutionBlock: '<S42>/STATE_1' */

  /* SimscapeExecutionBlock: '<S42>/OUTPUT_1_0' */
  simulationData = (NeslSimulationData *)PMSM_Plant_Model_DW.OUTPUT_1_0_SimData;
  time_0 = (( rtmGetClockTick0() + rtmGetClockTickH0()*4294967296.0 ) * 0.00025);
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_0;
  simulationData->mData->mContStates.mN = 0;
  simulationData->mData->mContStates.mX = NULL;
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX =
    &PMSM_Plant_Model_DW.OUTPUT_1_0_Discrete;
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX = &PMSM_Plant_Model_DW.OUTPUT_1_0_Modes;
  ok = false;
  simulationData->mData->mFoundZcEvents = ok;
  simulationData->mData->mIsMajorTimeStep = true;
  ok = false;
  simulationData->mData->mIsSolverAssertCheck = ok;
  simulationData->mData->mIsSolverCheckingCIC = false;
  simulationData->mData->mIsComputingJacobian = false;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  tmp_3[0] = 0;
  tmp_2[0] = PMSM_Plant_Model_B.INPUT_1_1_1[0];
  tmp_2[1] = PMSM_Plant_Model_B.INPUT_1_1_1[1];
  tmp_2[2] = PMSM_Plant_Model_B.INPUT_1_1_1[2];
  tmp_2[3] = PMSM_Plant_Model_B.INPUT_1_1_1[3];
  tmp_3[1] = 4;
  tmp_2[4] = PMSM_Plant_Model_B.INPUT_9_1_1[0];
  tmp_2[5] = PMSM_Plant_Model_B.INPUT_9_1_1[1];
  tmp_2[6] = PMSM_Plant_Model_B.INPUT_9_1_1[2];
  tmp_2[7] = PMSM_Plant_Model_B.INPUT_9_1_1[3];
  tmp_3[2] = 8;
  tmp_2[8] = PMSM_Plant_Model_B.INPUT_3_1_1[0];
  tmp_2[9] = PMSM_Plant_Model_B.INPUT_3_1_1[1];
  tmp_2[10] = PMSM_Plant_Model_B.INPUT_3_1_1[2];
  tmp_2[11] = PMSM_Plant_Model_B.INPUT_3_1_1[3];
  tmp_3[3] = 12;
  tmp_2[12] = PMSM_Plant_Model_B.INPUT_4_1_1[0];
  tmp_2[13] = PMSM_Plant_Model_B.INPUT_4_1_1[1];
  tmp_2[14] = PMSM_Plant_Model_B.INPUT_4_1_1[2];
  tmp_2[15] = PMSM_Plant_Model_B.INPUT_4_1_1[3];
  tmp_3[4] = 16;
  tmp_2[16] = PMSM_Plant_Model_B.INPUT_5_1_1[0];
  tmp_2[17] = PMSM_Plant_Model_B.INPUT_5_1_1[1];
  tmp_2[18] = PMSM_Plant_Model_B.INPUT_5_1_1[2];
  tmp_2[19] = PMSM_Plant_Model_B.INPUT_5_1_1[3];
  tmp_3[5] = 20;
  tmp_2[20] = PMSM_Plant_Model_B.INPUT_6_1_1[0];
  tmp_2[21] = PMSM_Plant_Model_B.INPUT_6_1_1[1];
  tmp_2[22] = PMSM_Plant_Model_B.INPUT_6_1_1[2];
  tmp_2[23] = PMSM_Plant_Model_B.INPUT_6_1_1[3];
  tmp_3[6] = 24;
  tmp_2[24] = PMSM_Plant_Model_B.INPUT_7_1_1[0];
  tmp_2[25] = PMSM_Plant_Model_B.INPUT_7_1_1[1];
  tmp_2[26] = PMSM_Plant_Model_B.INPUT_7_1_1[2];
  tmp_2[27] = PMSM_Plant_Model_B.INPUT_7_1_1[3];
  tmp_3[7] = 28;
  tmp_2[28] = PMSM_Plant_Model_B.INPUT_8_1_1[0];
  tmp_2[29] = PMSM_Plant_Model_B.INPUT_8_1_1[1];
  tmp_2[30] = PMSM_Plant_Model_B.INPUT_8_1_1[2];
  tmp_2[31] = PMSM_Plant_Model_B.INPUT_8_1_1[3];
  tmp_3[8] = 32;
  tmp_2[32] = PMSM_Plant_Model_B.INPUT_2_1_1[0];
  tmp_2[33] = PMSM_Plant_Model_B.INPUT_2_1_1[1];
  tmp_2[34] = PMSM_Plant_Model_B.INPUT_2_1_1[2];
  tmp_2[35] = PMSM_Plant_Model_B.INPUT_2_1_1[3];
  tmp_3[9] = 36;
  tmp_2[36] = PMSM_Plant_Model_B.INPUT_2_1_2[0];
  tmp_2[37] = PMSM_Plant_Model_B.INPUT_2_1_2[1];
  tmp_2[38] = PMSM_Plant_Model_B.INPUT_2_1_2[2];
  tmp_2[39] = PMSM_Plant_Model_B.INPUT_2_1_2[3];
  tmp_3[10] = 40;
  tmp_2[40] = PMSM_Plant_Model_B.INPUT_2_1_3[0];
  tmp_2[41] = PMSM_Plant_Model_B.INPUT_2_1_3[1];
  tmp_2[42] = PMSM_Plant_Model_B.INPUT_2_1_3[2];
  tmp_2[43] = PMSM_Plant_Model_B.INPUT_2_1_3[3];
  tmp_3[11] = 44;
  std::memcpy(&tmp_2[44], &PMSM_Plant_Model_B.STATE_1[0], 44U * sizeof(real_T));
  tmp_3[12] = 88;
  simulationData->mData->mInputValues.mN = 88;
  simulationData->mData->mInputValues.mX = &tmp_2[0];
  simulationData->mData->mInputOffsets.mN = 13;
  simulationData->mData->mInputOffsets.mX = &tmp_3[0];
  simulationData->mData->mOutputs.mN = 6;
  simulationData->mData->mOutputs.mX = &PMSM_Plant_Model_B.OUTPUT_1_0[0];
  simulationData->mData->mSampleHits.mN = 0;
  simulationData->mData->mSampleHits.mX = NULL;
  ok = 1;
  simulationData->mData->mIsFundamentalSampleHit = ok;
  simulationData->mData->mTolerances.mN = 0;
  simulationData->mData->mTolerances.mX = NULL;
  simulationData->mData->mCstateHasChanged = false;
  simulator = (NeslSimulator *)PMSM_Plant_Model_DW.OUTPUT_1_0_Simulator;
  diag = (NeuDiagnosticManager *)PMSM_Plant_Model_DW.OUTPUT_1_0_DiagMgr;
  diagTree = neu_diagnostic_manager_get_initial_tree(diag);
  parameterBundle_mLogicalParameters_mN = ne_simulator_method(simulator,
    NESL_SIM_OUTPUTS, simulationData, diag);
  if (parameterBundle_mLogicalParameters_mN != 0) {
    ok = error_buffer_is_empty(rtmGetErrorStatus(PMSM_Plant_Model_M));
    if (ok) {
      msg = rtw_diagnostics_msg(diagTree);
      rtmSetErrorStatus(PMSM_Plant_Model_M, msg);
    }
  }

  /* End of SimscapeExecutionBlock: '<S42>/OUTPUT_1_0' */

  /* SignalConversion generated from: '<Root>/motorMeasurements' */
  *rty_motorMeasurements_phaseCurrentA = PMSM_Plant_Model_B.OUTPUT_1_0[0];

  /* SignalConversion generated from: '<Root>/motorMeasurements' */
  *rty_motorMeasurements_phaseCurrentB = PMSM_Plant_Model_B.OUTPUT_1_0[1];

  /* SignalConversion generated from: '<Root>/motorMeasurements' */
  *rty_motorMeasurements_phaseCurrentC = PMSM_Plant_Model_B.OUTPUT_1_0[2];

  /* Gain: '<S17>/Gain1' */
  *rty_motorMeasurements_electricalPosition = rtP_pmsmPolePairs *
    PMSM_Plant_Model_B.OUTPUT_1_0[3];

  /* Fcn: '<S22>/d' */
  PMSM_Plant_Model_B.d = (std::sin((*rty_motorMeasurements_electricalPosition +
    1.5707963267948966) - 2.0943951023931953) * PMSM_Plant_Model_B.OUTPUT_1_0[1]
    + std::sin(*rty_motorMeasurements_electricalPosition + 1.5707963267948966) *
    PMSM_Plant_Model_B.OUTPUT_1_0[0]) + std::sin
    ((*rty_motorMeasurements_electricalPosition + 1.5707963267948966) +
     2.0943951023931953) * PMSM_Plant_Model_B.OUTPUT_1_0[2];

  /* Fcn: '<S22>/q' */
  PMSM_Plant_Model_B.q = (std::cos((*rty_motorMeasurements_electricalPosition +
    1.5707963267948966) - 2.0943951023931953) * PMSM_Plant_Model_B.OUTPUT_1_0[1]
    + std::cos(*rty_motorMeasurements_electricalPosition + 1.5707963267948966) *
    PMSM_Plant_Model_B.OUTPUT_1_0[0]) + std::cos
    ((*rty_motorMeasurements_electricalPosition + 1.5707963267948966) +
     2.0943951023931953) * PMSM_Plant_Model_B.OUTPUT_1_0[2];

  /* Fcn: '<S22>/0' */
  PMSM_Plant_Model_B.u = ((PMSM_Plant_Model_B.OUTPUT_1_0[0] +
    PMSM_Plant_Model_B.OUTPUT_1_0[1]) + PMSM_Plant_Model_B.OUTPUT_1_0[2]) * 0.5;

  /* Gain: '<S22>/Gain1' */
  PMSM_Plant_Model_B.Gain1[0] = PMSM_Plant_Model_cal->Gain1_Gain *
    PMSM_Plant_Model_B.d;
  PMSM_Plant_Model_B.Gain1[1] = PMSM_Plant_Model_cal->Gain1_Gain *
    PMSM_Plant_Model_B.q;
  PMSM_Plant_Model_B.Gain1[2] = PMSM_Plant_Model_cal->Gain1_Gain *
    PMSM_Plant_Model_B.u;

  /* SignalConversion generated from: '<Root>/motorMeasurements' */
  *rty_motorMeasurements_directCurrent = PMSM_Plant_Model_B.Gain1[0];

  /* SignalConversion generated from: '<Root>/motorMeasurements' */
  *rty_motorMeasurements_quadratureCurrent = PMSM_Plant_Model_B.Gain1[1];

  /* SignalConversion generated from: '<Root>/motorMeasurements' */
  *rty_motorMeasurements_electromagneticTorque = PMSM_Plant_Model_B.OUTPUT_1_0[5];

  /* SignalConversion generated from: '<Root>/motorMeasurements' */
  *rty_motorMeasurements_rotorPosition = PMSM_Plant_Model_B.OUTPUT_1_0[3];

  /* SignalConversion generated from: '<Root>/motorMeasurements' */
  *rty_motorMeasurements_rotorVelocity = PMSM_Plant_Model_B.OUTPUT_1_0[4];

  /* Memory: '<S7>/Memory' */
  PMSM_Plant_Model_B.Memory = PMSM_Plant_Model_DW.Memory_PreviousInput_h;

  /* Memory: '<S5>/Memory' */
  PMSM_Plant_Model_B.previousPosition = PMSM_Plant_Model_DW.Memory_PreviousInput;

  /* Switch: '<S7>/Switch' */
  if (PMSM_Plant_Model_B.Memory) {
    /* Switch: '<S7>/Switch' incorporates:
     *  Constant: '<S7>/One'
     */
    PMSM_Plant_Model_B.Switch_o = PMSM_Plant_Model_cal->One_Value;
  } else {
    /* RelationalOperator: '<S5>/Current_Less_Than_Index' incorporates:
     *  Constant: '<S5>/Encoder_Index_Position'
     */
    PMSM_Plant_Model_B.currentLessThanIndex = (PMSM_Plant_Model_B.OUTPUT_1_0[3] <=
      PMSM_Plant_Model_cal->Encoder_Index_Position_Value);

    /* Sum: '<S5>/Position_Difference' */
    PMSM_Plant_Model_B.Position_Difference = PMSM_Plant_Model_B.OUTPUT_1_0[3] -
      PMSM_Plant_Model_B.previousPosition;

    /* RelationalOperator: '<S5>/Wrap_Negative_Direction' incorporates:
     *  Constant: '<S5>/Pi_Div_Two1'
     */
    PMSM_Plant_Model_B.wrapNegativeDirection =
      (PMSM_Plant_Model_B.Position_Difference >=
       PMSM_Plant_Model_cal->Pi_Div_Two1_Value);

    /* RelationalOperator: '<S5>/Wrap_Positive_Direction' incorporates:
     *  Constant: '<S5>/Neg_Pi_Div_Two'
     */
    PMSM_Plant_Model_B.wrapPositiveDirection =
      (PMSM_Plant_Model_B.Position_Difference <=
       PMSM_Plant_Model_cal->Neg_Pi_Div_Two_Value);

    /* Logic: '<S5>/Wrapped' */
    PMSM_Plant_Model_B.wrapped = (PMSM_Plant_Model_B.wrapPositiveDirection ||
      PMSM_Plant_Model_B.wrapNegativeDirection);

    /* RelationalOperator: '<S5>/Previous_Less_Than_Index' incorporates:
     *  Constant: '<S5>/Encoder_Index_Position'
     */
    PMSM_Plant_Model_B.previousLessThanIndex =
      (PMSM_Plant_Model_B.previousPosition <=
       PMSM_Plant_Model_cal->Encoder_Index_Position_Value);

    /* Logic: '<S5>/AND4' */
    PMSM_Plant_Model_B.wrapAroundIndexGreaterThanPi =
      (PMSM_Plant_Model_B.currentLessThanIndex &&
       PMSM_Plant_Model_B.previousLessThanIndex && PMSM_Plant_Model_B.wrapped);

    /* RelationalOperator: '<S5>/Previous_Greater_Than_Index' incorporates:
     *  Constant: '<S5>/Encoder_Index_Position'
     */
    PMSM_Plant_Model_B.previousGreaterThanIndex =
      (PMSM_Plant_Model_B.previousPosition >=
       PMSM_Plant_Model_cal->Encoder_Index_Position_Value);

    /* RelationalOperator: '<S5>/Current_Greater_Than_Index' incorporates:
     *  Constant: '<S5>/Encoder_Index_Position'
     */
    PMSM_Plant_Model_B.currentGreaterThanIndex = (PMSM_Plant_Model_B.OUTPUT_1_0
      [3] >= PMSM_Plant_Model_cal->Encoder_Index_Position_Value);

    /* Logic: '<S5>/AND3' */
    PMSM_Plant_Model_B.wrapAroundIndexLessThanPi =
      (PMSM_Plant_Model_B.currentGreaterThanIndex &&
       PMSM_Plant_Model_B.previousGreaterThanIndex && PMSM_Plant_Model_B.wrapped);

    /* Logic: '<S5>/Not_Wrapped' */
    PMSM_Plant_Model_B.notWrapped = !PMSM_Plant_Model_B.wrapped;

    /* Logic: '<S5>/AND2' */
    PMSM_Plant_Model_B.passedNegativeDirection =
      (PMSM_Plant_Model_B.currentLessThanIndex &&
       PMSM_Plant_Model_B.previousGreaterThanIndex &&
       PMSM_Plant_Model_B.notWrapped);

    /* Logic: '<S5>/AND1' */
    PMSM_Plant_Model_B.passedPositiveDirection =
      (PMSM_Plant_Model_B.currentGreaterThanIndex &&
       PMSM_Plant_Model_B.previousLessThanIndex && PMSM_Plant_Model_B.notWrapped);

    /* Logic: '<S5>/OR' */
    PMSM_Plant_Model_B.encoderPassedIndexPulse =
      (PMSM_Plant_Model_B.passedPositiveDirection ||
       PMSM_Plant_Model_B.passedNegativeDirection ||
       PMSM_Plant_Model_B.wrapAroundIndexLessThanPi ||
       PMSM_Plant_Model_B.wrapAroundIndexGreaterThanPi);

    /* Switch: '<S7>/Switch' */
    PMSM_Plant_Model_B.Switch_o = PMSM_Plant_Model_B.encoderPassedIndexPulse;
  }

  /* End of Switch: '<S7>/Switch' */

  /* Logic: '<S3>/Logical_OR' incorporates:
   *  Constant: '<S3>/Encoder_Position_Valid_At_Startup'
   */
  PMSM_Plant_Model_B.Logical_OR = (PMSM_Plant_Model_B.Switch_o ||
    rtP_encoderPositionValidAtStartup);

  /* Switch: '<S3>/Switch1' */
  if (PMSM_Plant_Model_B.Logical_OR) {
    /* Switch: '<S3>/Switch1' incorporates:
     *  Constant: '<S3>/Bias_After_Index_Found'
     */
    PMSM_Plant_Model_B.Switch1 = rtP_encoderRotorPositionAtIndex;
  } else {
    /* Switch: '<S3>/Switch1' incorporates:
     *  Constant: '<S3>/Bias_Before_Index_Found'
     */
    PMSM_Plant_Model_B.Switch1 = rtP_pmsmRotorPositionInit;
  }

  /* End of Switch: '<S3>/Switch1' */

  /* Sum: '<S3>/Add' */
  PMSM_Plant_Model_B.Add = PMSM_Plant_Model_B.OUTPUT_1_0[3] -
    PMSM_Plant_Model_B.Switch1;

  /* Math: '<S6>/Mod' incorporates:
   *  Constant: '<S6>/Two_Pi'
   */
  PMSM_Plant_Model_B.Mod = rt_modd_snf(PMSM_Plant_Model_B.Add,
    PMSM_Plant_Model_cal->Two_Pi_Value);

  /* Gain: '<S3>/Count_Per_Radian' */
  PMSM_Plant_Model_B.Count_Per_Radian =
    PMSM_Plant_Model_cal->Count_Per_Radian_Gain * PMSM_Plant_Model_B.Mod;

  /* DataTypeConversion: '<S3>/Count_Data_Type' */
  tmp_6 = std::floor(PMSM_Plant_Model_B.Count_Per_Radian);
  if (rtIsNaN(tmp_6) || rtIsInf(tmp_6)) {
    tmp_6 = 0.0;
  } else {
    tmp_6 = std::fmod(tmp_6, 65536.0);
  }

  /* DataTypeConversion: '<S3>/Count_Data_Type' */
  PMSM_Plant_Model_B.Count_Data_Type = static_cast<uint16_T>(tmp_6 < 0.0 ?
    static_cast<int32_T>(static_cast<uint16_T>(-static_cast<int16_T>(
    static_cast<uint16_T>(-tmp_6)))) : static_cast<int32_T>(static_cast<uint16_T>
    (tmp_6)));

  /* Math: '<S1>/Math Function' incorporates:
   *  Constant: '<S1>/Constant'
   */
  u0 = PMSM_Plant_Model_B.Count_Data_Type;
  u1 = PMSM_Plant_Model_cal->Constant_Value;
  if (u1 == 0) {
    /* Math: '<S1>/Math Function' */
    PMSM_Plant_Model_B.MathFunction = u0;
  } else {
    /* Math: '<S1>/Math Function' */
    PMSM_Plant_Model_B.MathFunction = static_cast<uint16_T>(u0 % u1);
  }

  /* End of Math: '<S1>/Math Function' */

  /* Switch: '<S1>/Switch' incorporates:
   *  Constant: '<S1>/Constant1'
   */
  if (rtP_encoderALeadsB) {
    /* Switch: '<S1>/Switch' */
    PMSM_Plant_Model_B.Switch = PMSM_Plant_Model_B.MathFunction;
  } else {
    /* Sum: '<S1>/Subtract1' incorporates:
     *  Constant: '<S1>/Constant'
     *  Constant: '<S1>/Constant2'
     */
    PMSM_Plant_Model_B.Subtract1 = static_cast<uint16_T>(static_cast<uint32_T>
      (PMSM_Plant_Model_cal->Constant_Value) -
      PMSM_Plant_Model_cal->Constant2_Value);

    /* Sum: '<S1>/Sum' */
    PMSM_Plant_Model_B.Sum = static_cast<uint16_T>(static_cast<uint32_T>
      (PMSM_Plant_Model_B.Subtract1) - PMSM_Plant_Model_B.MathFunction);

    /* Switch: '<S1>/Switch' */
    PMSM_Plant_Model_B.Switch = PMSM_Plant_Model_B.Sum;
  }

  /* End of Switch: '<S1>/Switch' */

  /* DataTypeConversion: '<S1>/Data Type Conversion' */
  *rty_feedback_encoderCount = PMSM_Plant_Model_B.Switch;

  /* Switch: '<S2>/Switch' incorporates:
   *  Constant: '<S2>/Zero'
   */
  if (*rtu_inputs_connectCurrentSensor) {
    /* Product: '<S2>/Product' incorporates:
     *  Constant: '<S2>/ADC_Transducer_Volt_Per_Ampere'
     */
    PMSM_Plant_Model_B.Product[0] = PMSM_Plant_Model_B.OUTPUT_1_0[0] *
      rtP_adcTransducerVoltPerAmpere;
    PMSM_Plant_Model_B.Product[1] = PMSM_Plant_Model_B.OUTPUT_1_0[1] *
      rtP_adcTransducerVoltPerAmpere;

    /* Sum: '<S2>/Add' incorporates:
     *  Constant: '<S2>/ADC_Transducer_Volt_At_Zero_Ampere'
     */
    PMSM_Plant_Model_B.enabled[0] = PMSM_Plant_Model_B.Product[0] +
      rtP_adcTransducerVoltAtZeroAmpere[0];
    PMSM_Plant_Model_B.enabled[1] = PMSM_Plant_Model_B.Product[1] +
      rtP_adcTransducerVoltAtZeroAmpere[1];
    rty_feedback_transducerVoltage[0] = static_cast<real32_T>
      (PMSM_Plant_Model_B.enabled[0]);
    rty_feedback_transducerVoltage[1] = static_cast<real32_T>
      (PMSM_Plant_Model_B.enabled[1]);
  } else {
    rty_feedback_transducerVoltage[0] = static_cast<real32_T>
      (PMSM_Plant_Model_cal->Zero_Value);
    rty_feedback_transducerVoltage[1] = static_cast<real32_T>
      (PMSM_Plant_Model_cal->Zero_Value);
  }

  /* End of Switch: '<S2>/Switch' */

  /* DataTypeConversion: '<S3>/Count_Data_Type1' */
  *rty_feedback_encoderIndexFound = PMSM_Plant_Model_B.Logical_OR;

  /* Gain: '<S17>/Gain2' */
  *rty_motorMeasurements_electricalVelocity = rtP_pmsmPolePairs *
    PMSM_Plant_Model_B.OUTPUT_1_0[4];

  /* Update for SimscapeExecutionBlock: '<S42>/STATE_1' */
  simulationData = (NeslSimulationData *)PMSM_Plant_Model_DW.STATE_1_SimData;
  time_1 = (( rtmGetClockTick0() + rtmGetClockTickH0()*4294967296.0 ) * 0.00025);
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_1;
  simulationData->mData->mContStates.mN = 0;
  simulationData->mData->mContStates.mX = NULL;
  simulationData->mData->mDiscStates.mN = 29;
  simulationData->mData->mDiscStates.mX = &PMSM_Plant_Model_DW.STATE_1_Discrete
    [0];
  simulationData->mData->mModeVector.mN = 15;
  simulationData->mData->mModeVector.mX = &PMSM_Plant_Model_DW.STATE_1_Modes[0];
  ok = false;
  simulationData->mData->mFoundZcEvents = ok;
  simulationData->mData->mIsMajorTimeStep = true;
  ok = false;
  simulationData->mData->mIsSolverAssertCheck = ok;
  simulationData->mData->mIsSolverCheckingCIC = false;
  simulationData->mData->mIsComputingJacobian = false;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  tmp_5[0] = 0;
  tmp_4[0] = PMSM_Plant_Model_B.INPUT_1_1_1[0];
  tmp_4[1] = PMSM_Plant_Model_B.INPUT_1_1_1[1];
  tmp_4[2] = PMSM_Plant_Model_B.INPUT_1_1_1[2];
  tmp_4[3] = PMSM_Plant_Model_B.INPUT_1_1_1[3];
  tmp_5[1] = 4;
  tmp_4[4] = PMSM_Plant_Model_B.INPUT_9_1_1[0];
  tmp_4[5] = PMSM_Plant_Model_B.INPUT_9_1_1[1];
  tmp_4[6] = PMSM_Plant_Model_B.INPUT_9_1_1[2];
  tmp_4[7] = PMSM_Plant_Model_B.INPUT_9_1_1[3];
  tmp_5[2] = 8;
  tmp_4[8] = PMSM_Plant_Model_B.INPUT_3_1_1[0];
  tmp_4[9] = PMSM_Plant_Model_B.INPUT_3_1_1[1];
  tmp_4[10] = PMSM_Plant_Model_B.INPUT_3_1_1[2];
  tmp_4[11] = PMSM_Plant_Model_B.INPUT_3_1_1[3];
  tmp_5[3] = 12;
  tmp_4[12] = PMSM_Plant_Model_B.INPUT_4_1_1[0];
  tmp_4[13] = PMSM_Plant_Model_B.INPUT_4_1_1[1];
  tmp_4[14] = PMSM_Plant_Model_B.INPUT_4_1_1[2];
  tmp_4[15] = PMSM_Plant_Model_B.INPUT_4_1_1[3];
  tmp_5[4] = 16;
  tmp_4[16] = PMSM_Plant_Model_B.INPUT_5_1_1[0];
  tmp_4[17] = PMSM_Plant_Model_B.INPUT_5_1_1[1];
  tmp_4[18] = PMSM_Plant_Model_B.INPUT_5_1_1[2];
  tmp_4[19] = PMSM_Plant_Model_B.INPUT_5_1_1[3];
  tmp_5[5] = 20;
  tmp_4[20] = PMSM_Plant_Model_B.INPUT_6_1_1[0];
  tmp_4[21] = PMSM_Plant_Model_B.INPUT_6_1_1[1];
  tmp_4[22] = PMSM_Plant_Model_B.INPUT_6_1_1[2];
  tmp_4[23] = PMSM_Plant_Model_B.INPUT_6_1_1[3];
  tmp_5[6] = 24;
  tmp_4[24] = PMSM_Plant_Model_B.INPUT_7_1_1[0];
  tmp_4[25] = PMSM_Plant_Model_B.INPUT_7_1_1[1];
  tmp_4[26] = PMSM_Plant_Model_B.INPUT_7_1_1[2];
  tmp_4[27] = PMSM_Plant_Model_B.INPUT_7_1_1[3];
  tmp_5[7] = 28;
  tmp_4[28] = PMSM_Plant_Model_B.INPUT_8_1_1[0];
  tmp_4[29] = PMSM_Plant_Model_B.INPUT_8_1_1[1];
  tmp_4[30] = PMSM_Plant_Model_B.INPUT_8_1_1[2];
  tmp_4[31] = PMSM_Plant_Model_B.INPUT_8_1_1[3];
  tmp_5[8] = 32;
  tmp_4[32] = PMSM_Plant_Model_B.INPUT_2_1_1[0];
  tmp_4[33] = PMSM_Plant_Model_B.INPUT_2_1_1[1];
  tmp_4[34] = PMSM_Plant_Model_B.INPUT_2_1_1[2];
  tmp_4[35] = PMSM_Plant_Model_B.INPUT_2_1_1[3];
  tmp_5[9] = 36;
  tmp_4[36] = PMSM_Plant_Model_B.INPUT_2_1_2[0];
  tmp_4[37] = PMSM_Plant_Model_B.INPUT_2_1_2[1];
  tmp_4[38] = PMSM_Plant_Model_B.INPUT_2_1_2[2];
  tmp_4[39] = PMSM_Plant_Model_B.INPUT_2_1_2[3];
  tmp_5[10] = 40;
  tmp_4[40] = PMSM_Plant_Model_B.INPUT_2_1_3[0];
  tmp_4[41] = PMSM_Plant_Model_B.INPUT_2_1_3[1];
  tmp_4[42] = PMSM_Plant_Model_B.INPUT_2_1_3[2];
  tmp_4[43] = PMSM_Plant_Model_B.INPUT_2_1_3[3];
  tmp_5[11] = 44;
  simulationData->mData->mInputValues.mN = 44;
  simulationData->mData->mInputValues.mX = &tmp_4[0];
  simulationData->mData->mInputOffsets.mN = 12;
  simulationData->mData->mInputOffsets.mX = &tmp_5[0];
  simulator = (NeslSimulator *)PMSM_Plant_Model_DW.STATE_1_Simulator;
  diag = (NeuDiagnosticManager *)PMSM_Plant_Model_DW.STATE_1_DiagMgr;
  diagTree = neu_diagnostic_manager_get_initial_tree(diag);
  parameterBundle_mLogicalParameters_mN = ne_simulator_method(simulator,
    NESL_SIM_UPDATE, simulationData, diag);
  if (parameterBundle_mLogicalParameters_mN != 0) {
    ok = error_buffer_is_empty(rtmGetErrorStatus(PMSM_Plant_Model_M));
    if (ok) {
      msg = rtw_diagnostics_msg(diagTree);
      rtmSetErrorStatus(PMSM_Plant_Model_M, msg);
    }
  }

  /* End of Update for SimscapeExecutionBlock: '<S42>/STATE_1' */

  /* Update for Memory: '<S7>/Memory' */
  PMSM_Plant_Model_DW.Memory_PreviousInput_h = PMSM_Plant_Model_B.Switch_o;

  /* Update for Memory: '<S5>/Memory' */
  PMSM_Plant_Model_DW.Memory_PreviousInput = PMSM_Plant_Model_B.OUTPUT_1_0[3];
}

/* Termination for referenced model: 'PMSM_Plant_Model' */
void PMSM_Plant_Model_Term(void)
{
  NeslSimulationData *simulationData;
  NeuDiagnosticManager *diagnosticManager;

  /* Terminate for SimscapeExecutionBlock: '<S42>/STATE_1' */
  diagnosticManager = (NeuDiagnosticManager *)
    PMSM_Plant_Model_DW.STATE_1_DiagMgr;
  neu_destroy_diagnostic_manager(diagnosticManager);
  simulationData = (NeslSimulationData *)PMSM_Plant_Model_DW.STATE_1_SimData;
  nesl_destroy_simulation_data(simulationData);
  nesl_erase_simulator("PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/Solver_Configuration_1");
  nesl_destroy_registry();

  /* Terminate for SimscapeExecutionBlock: '<S42>/OUTPUT_1_0' */
  diagnosticManager = (NeuDiagnosticManager *)
    PMSM_Plant_Model_DW.OUTPUT_1_0_DiagMgr;
  neu_destroy_diagnostic_manager(diagnosticManager);
  simulationData = (NeslSimulationData *)PMSM_Plant_Model_DW.OUTPUT_1_0_SimData;
  nesl_destroy_simulation_data(simulationData);
  nesl_erase_simulator("PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/Solver_Configuration_1");
  nesl_destroy_registry();
}

/* Model initialize function */
void PMSM_Plant_Model_initialize(const char_T **rt_errorStatus, const
  rtTimingBridge *timingBridge, int_T mdlref_TID0)
{
  RT_MODEL_PMSM_Plant_Model_T *const PMSM_Plant_Model_M =
    &(PMSM_Plant_Model_MdlrefDW.rtm);

  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* setup the global timing engine */
  PMSM_Plant_Model_GlobalTID[0] = mdlref_TID0;
  PMSM_Plant_Model_TimingBrdg = timingBridge;

  /* initialize error status */
  rtmSetErrorStatusPointer(PMSM_Plant_Model_M, rt_errorStatus);

  /* block I/O */
  (void) std::memset((static_cast<void *>(&PMSM_Plant_Model_B)), 0,
                     sizeof(B_PMSM_Plant_Model_c_T));

  /* states (dwork) */
  (void) std::memset(static_cast<void *>(&PMSM_Plant_Model_DW), 0,
                     sizeof(DW_PMSM_Plant_Model_f_T));
}
