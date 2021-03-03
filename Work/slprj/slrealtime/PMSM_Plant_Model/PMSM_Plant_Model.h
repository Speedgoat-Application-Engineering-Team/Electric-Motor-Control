/*
 * Code generation for system model 'PMSM_Plant_Model'
 * For more details, see corresponding source file PMSM_Plant_Model.c
 *
 */

#ifndef RTW_HEADER_PMSM_Plant_Model_h_
#define RTW_HEADER_PMSM_Plant_Model_h_
#include <cmath>
#include <cstring>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "nesl_rtw.h"
#include "PMSM_Plant_Model_e54d855d_1_gateway.h"
#include "nesl_rtw_rtp.h"
#include "PMSM_Plant_Model_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "model_reference_types.h"

/* Child system includes */
#include "PMSM_Plant_Model_cal.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Block signals for model 'PMSM_Plant_Model' */
#ifndef PMSM_Plant_Model_MDLREF_HIDE_CHILD_

typedef struct {
  real_T CastToDouble;                 /* '<S8>/Cast To Double' */
  real_T INPUT_1_1_1[4];               /* '<S42>/INPUT_1_1_1' */
  real_T INPUT_9_1_1[4];               /* '<S42>/INPUT_9_1_1' */
  real_T ModIndex[3];                  /* '<S27>/Mod. Index' */
  real_T INPUT_3_1_1[4];               /* '<S42>/INPUT_3_1_1' */
  real_T Gain[3];                      /* '<S27>/Gain' */
  real_T Bias1[3];                     /* '<S27>/Bias1' */
  real_T INPUT_4_1_1[4];               /* '<S42>/INPUT_4_1_1' */
  real_T INPUT_5_1_1[4];               /* '<S42>/INPUT_5_1_1' */
  real_T INPUT_6_1_1[4];               /* '<S42>/INPUT_6_1_1' */
  real_T INPUT_7_1_1[4];               /* '<S42>/INPUT_7_1_1' */
  real_T INPUT_8_1_1[4];               /* '<S42>/INPUT_8_1_1' */
  real_T CastToDouble_b[3];            /* '<S12>/Cast To Double' */
  real_T INPUT_2_1_1[4];               /* '<S42>/INPUT_2_1_1' */
  real_T INPUT_2_1_2[4];               /* '<S42>/INPUT_2_1_2' */
  real_T INPUT_2_1_3[4];               /* '<S42>/INPUT_2_1_3' */
  real_T RTP_1;                        /* '<S13>/RTP_1' */
  real_T STATE_1[44];                  /* '<S42>/STATE_1' */
  real_T OUTPUT_1_0[6];                /* '<S42>/OUTPUT_1_0' */
  real_T d;                            /* '<S22>/d' */
  real_T q;                            /* '<S22>/q' */
  real_T u;                            /* '<S22>/0' */
  real_T Gain1[3];                     /* '<S22>/Gain1' */
  real_T previousPosition;             /* '<S5>/Memory' */
  real_T Switch1;                      /* '<S3>/Switch1' */
  real_T Add;                          /* '<S3>/Add' */
  real_T Mod;                          /* '<S6>/Mod' */
  real_T Count_Per_Radian;             /* '<S3>/Count_Per_Radian' */
  real_T Position_Difference;          /* '<S5>/Position_Difference' */
  real_T Product[2];                   /* '<S2>/Product' */
  real_T enabled[2];                   /* '<S2>/Add' */
  uint16_T Count_Data_Type;            /* '<S3>/Count_Data_Type' */
  uint16_T MathFunction;               /* '<S1>/Math Function' */
  uint16_T Switch;                     /* '<S1>/Switch' */
  uint16_T Subtract1;                  /* '<S1>/Subtract1' */
  uint16_T Sum;                        /* '<S1>/Sum' */
  boolean_T Memory;                    /* '<S7>/Memory' */
  boolean_T Switch_o;                  /* '<S7>/Switch' */
  boolean_T Logical_OR;                /* '<S3>/Logical_OR' */
  boolean_T currentLessThanIndex;      /* '<S5>/Current_Less_Than_Index' */
  boolean_T wrapNegativeDirection;     /* '<S5>/Wrap_Negative_Direction' */
  boolean_T wrapPositiveDirection;     /* '<S5>/Wrap_Positive_Direction' */
  boolean_T wrapped;                   /* '<S5>/Wrapped' */
  boolean_T previousLessThanIndex;     /* '<S5>/Previous_Less_Than_Index' */
  boolean_T wrapAroundIndexGreaterThanPi;/* '<S5>/AND4' */
  boolean_T previousGreaterThanIndex;  /* '<S5>/Previous_Greater_Than_Index' */
  boolean_T currentGreaterThanIndex;   /* '<S5>/Current_Greater_Than_Index' */
  boolean_T wrapAroundIndexLessThanPi; /* '<S5>/AND3' */
  boolean_T notWrapped;                /* '<S5>/Not_Wrapped' */
  boolean_T passedNegativeDirection;   /* '<S5>/AND2' */
  boolean_T passedPositiveDirection;   /* '<S5>/AND1' */
  boolean_T encoderPassedIndexPulse;   /* '<S5>/OR' */
} B_PMSM_Plant_Model_c_T;

#endif                                 /*PMSM_Plant_Model_MDLREF_HIDE_CHILD_*/

/* Block states (default storage) for model 'PMSM_Plant_Model' */
#ifndef PMSM_Plant_Model_MDLREF_HIDE_CHILD_

typedef struct {
  real_T INPUT_1_1_1_Discrete[2];      /* '<S42>/INPUT_1_1_1' */
  real_T INPUT_9_1_1_Discrete[2];      /* '<S42>/INPUT_9_1_1' */
  real_T INPUT_3_1_1_Discrete[2];      /* '<S42>/INPUT_3_1_1' */
  real_T INPUT_4_1_1_Discrete[2];      /* '<S42>/INPUT_4_1_1' */
  real_T INPUT_5_1_1_Discrete[2];      /* '<S42>/INPUT_5_1_1' */
  real_T INPUT_6_1_1_Discrete[2];      /* '<S42>/INPUT_6_1_1' */
  real_T INPUT_7_1_1_Discrete[2];      /* '<S42>/INPUT_7_1_1' */
  real_T INPUT_8_1_1_Discrete[2];      /* '<S42>/INPUT_8_1_1' */
  real_T INPUT_2_1_1_Discrete[2];      /* '<S42>/INPUT_2_1_1' */
  real_T INPUT_2_1_2_Discrete[2];      /* '<S42>/INPUT_2_1_2' */
  real_T INPUT_2_1_3_Discrete[2];      /* '<S42>/INPUT_2_1_3' */
  real_T STATE_1_Discrete[29];         /* '<S42>/STATE_1' */
  real_T OUTPUT_1_0_Discrete;          /* '<S42>/OUTPUT_1_0' */
  real_T Memory_PreviousInput;         /* '<S5>/Memory' */
  void* RTP_1_RtpManager;              /* '<S13>/RTP_1' */
  void* STATE_1_Simulator;             /* '<S42>/STATE_1' */
  void* STATE_1_SimData;               /* '<S42>/STATE_1' */
  void* STATE_1_DiagMgr;               /* '<S42>/STATE_1' */
  void* STATE_1_ZcLogger;              /* '<S42>/STATE_1' */
  void* STATE_1_TsIndex;               /* '<S42>/STATE_1' */
  void* OUTPUT_1_0_Simulator;          /* '<S42>/OUTPUT_1_0' */
  void* OUTPUT_1_0_SimData;            /* '<S42>/OUTPUT_1_0' */
  void* OUTPUT_1_0_DiagMgr;            /* '<S42>/OUTPUT_1_0' */
  void* OUTPUT_1_0_ZcLogger;           /* '<S42>/OUTPUT_1_0' */
  void* OUTPUT_1_0_TsIndex;            /* '<S42>/OUTPUT_1_0' */
  int_T STATE_1_Modes[15];             /* '<S42>/STATE_1' */
  int_T OUTPUT_1_0_Modes;              /* '<S42>/OUTPUT_1_0' */
  uint16_T Sum_DWORK1;                 /* '<S1>/Sum' */
  boolean_T RTP_1_SetParametersNeeded; /* '<S13>/RTP_1' */
  boolean_T STATE_1_FirstOutput;       /* '<S42>/STATE_1' */
  boolean_T OUTPUT_1_0_FirstOutput;    /* '<S42>/OUTPUT_1_0' */
  boolean_T Memory_PreviousInput_h;    /* '<S7>/Memory' */
} DW_PMSM_Plant_Model_f_T;

#endif                                 /*PMSM_Plant_Model_MDLREF_HIDE_CHILD_*/

#ifndef PMSM_Plant_Model_MDLREF_HIDE_CHILD_

/* Real-time Model Data Structure */
struct tag_RTM_PMSM_Plant_Model_T {
  const char_T **errorStatus;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    boolean_T *stopRequestedFlag;
  } Timing;
};

#endif                                 /*PMSM_Plant_Model_MDLREF_HIDE_CHILD_*/

#ifndef PMSM_Plant_Model_MDLREF_HIDE_CHILD_

typedef struct {
  RT_MODEL_PMSM_Plant_Model_T rtm;
} MdlrefDW_PMSM_Plant_Model_T;

#endif                                 /*PMSM_Plant_Model_MDLREF_HIDE_CHILD_*/

/* Model block global parameters (default storage) */
extern real_T rtP_adcTransducerVoltAtZeroAmpere[2];
                                      /* Variable: adcTransducerVoltAtZeroAmpere
                                       * Referenced by: '<S2>/ADC_Transducer_Volt_At_Zero_Ampere'
                                       */
extern real_T rtP_adcTransducerVoltPerAmpere;/* Variable: adcTransducerVoltPerAmpere
                                              * Referenced by: '<S2>/ADC_Transducer_Volt_Per_Ampere'
                                              */
extern real_T rtP_discInertia;         /* Variable: discInertia
                                        * Referenced by: '<S10>/Subsystem_around_RTP_48260B4E_inertia'
                                        */
extern real_T rtP_encoderRotorPositionAtIndex;/* Variable: encoderRotorPositionAtIndex
                                               * Referenced by: '<S3>/Bias_After_Index_Found'
                                               */
extern real_T rtP_pmsmPolePairs;       /* Variable: pmsmPolePairs
                                        * Referenced by:
                                        *   '<S17>/Gain1'
                                        *   '<S17>/Gain2'
                                        */
extern real_T rtP_pmsmRotorPositionInit;/* Variable: pmsmRotorPositionInit
                                         * Referenced by:
                                         *   '<S3>/Bias_Before_Index_Found'
                                         *   '<S5>/Memory'
                                         *   '<S11>/Subsystem_around_RTP_E65F8A5B_angular_position'
                                         */
extern real_T rtP_pmsmRotorVelocityInit;/* Variable: pmsmRotorVelocityInit
                                         * Referenced by: '<S11>/Subsystem_around_RTP_E65F8A5B_angular_velocity'
                                         */
extern boolean_T rtP_encoderALeadsB;   /* Variable: encoderALeadsB
                                        * Referenced by: '<S1>/Constant1'
                                        */
extern boolean_T rtP_encoderPositionValidAtStartup;
                                      /* Variable: encoderPositionValidAtStartup
                                       * Referenced by: '<S3>/Encoder_Position_Valid_At_Startup'
                                       */
extern void PMSM_Plant_Model_Init(void);
extern void PMSM_Plant_Model_Reset(void);
extern void PMSM_Plant_Model(const real_T *rtu_inputs_torqueLoad, const
  boolean_T *rtu_inputs_connectCurrentSensor, const boolean_T
  *rtu_inputs_motorBrake, const boolean_T *rtu_commands_inverterEnable, const
  uint16_T rtu_commands_pwmCompare[3], real_T
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
  rty_feedback_transducerVoltage[2], uint16_T *rty_feedback_encoderIndexFound,
  uint16_T *rty_feedback_encoderCount);
extern void PMSM_Plant_Model_Term(void);

/* Model reference registration function */
extern void PMSM_Plant_Model_initialize(const char_T **rt_errorStatus, const
  rtTimingBridge *timingBridge, int_T mdlref_TID0);

#ifndef PMSM_Plant_Model_MDLREF_HIDE_CHILD_

extern MdlrefDW_PMSM_Plant_Model_T PMSM_Plant_Model_MdlrefDW;

#endif                                 /*PMSM_Plant_Model_MDLREF_HIDE_CHILD_*/

#ifndef PMSM_Plant_Model_MDLREF_HIDE_CHILD_

/* Block signals (default storage) */
extern B_PMSM_Plant_Model_c_T PMSM_Plant_Model_B;

/* Block states (default storage) */
extern DW_PMSM_Plant_Model_f_T PMSM_Plant_Model_DW;

#endif                                 /*PMSM_Plant_Model_MDLREF_HIDE_CHILD_*/

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
 * '<Root>' : 'PMSM_Plant_Model'
 * '<S1>'   : 'PMSM_Plant_Model/Condition Encoder'
 * '<S2>'   : 'PMSM_Plant_Model/Current_Transducer'
 * '<S3>'   : 'PMSM_Plant_Model/Encoder_Sensor_And_Peripheral'
 * '<S4>'   : 'PMSM_Plant_Model/PMSM_Physical_Model'
 * '<S5>'   : 'PMSM_Plant_Model/Encoder_Sensor_And_Peripheral/Detect_Index_Pulse'
 * '<S6>'   : 'PMSM_Plant_Model/Encoder_Sensor_And_Peripheral/Mod_Two_Pi'
 * '<S7>'   : 'PMSM_Plant_Model/Encoder_Sensor_And_Peripheral/Detect_Index_Pulse/Latch_On_Hi'
 * '<S8>'   : 'PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model'
 * '<S9>'   : 'PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/Brake'
 * '<S10>'  : 'PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/Disc_Load'
 * '<S11>'  : 'PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM'
 * '<S12>'  : 'PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter'
 * '<S13>'  : 'PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/Solver_Configuration'
 * '<S14>'  : 'PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/Torque_Load'
 * '<S15>'  : 'PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/Brake/Simulink-PS Converter'
 * '<S16>'  : 'PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/Brake/Simulink-PS Converter/EVAL_KEY'
 * '<S17>'  : 'PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Measurements'
 * '<S18>'  : 'PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Measurements/PS-Simulink Converter'
 * '<S19>'  : 'PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Measurements/PS-Simulink Converter1'
 * '<S20>'  : 'PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Measurements/PS-Simulink Converter2'
 * '<S21>'  : 'PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Measurements/PS-Simulink Converter3'
 * '<S22>'  : 'PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Measurements/Park Transform'
 * '<S23>'  : 'PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Measurements/PS-Simulink Converter/EVAL_KEY'
 * '<S24>'  : 'PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Measurements/PS-Simulink Converter1/EVAL_KEY'
 * '<S25>'  : 'PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Measurements/PS-Simulink Converter2/EVAL_KEY'
 * '<S26>'  : 'PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Measurements/PS-Simulink Converter3/EVAL_KEY'
 * '<S27>'  : 'PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Gate driver'
 * '<S28>'  : 'PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Simulink-PS Converter1'
 * '<S29>'  : 'PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Simulink-PS Converter2'
 * '<S30>'  : 'PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Simulink-PS Converter3'
 * '<S31>'  : 'PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Simulink-PS Converter4'
 * '<S32>'  : 'PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Simulink-PS Converter5'
 * '<S33>'  : 'PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Simulink-PS Converter6'
 * '<S34>'  : 'PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Simulink-PS Converter7'
 * '<S35>'  : 'PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Simulink-PS Converter1/EVAL_KEY'
 * '<S36>'  : 'PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Simulink-PS Converter2/EVAL_KEY'
 * '<S37>'  : 'PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Simulink-PS Converter3/EVAL_KEY'
 * '<S38>'  : 'PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Simulink-PS Converter4/EVAL_KEY'
 * '<S39>'  : 'PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Simulink-PS Converter5/EVAL_KEY'
 * '<S40>'  : 'PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Simulink-PS Converter6/EVAL_KEY'
 * '<S41>'  : 'PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Simulink-PS Converter7/EVAL_KEY'
 * '<S42>'  : 'PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/Solver_Configuration/EVAL_KEY'
 * '<S43>'  : 'PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/Torque_Load/Simulink_PS_Converter'
 * '<S44>'  : 'PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/Torque_Load/Simulink_PS_Converter/EVAL_KEY'
 */
#endif                                 /* RTW_HEADER_PMSM_Plant_Model_h_ */
