/*
 * Code generation for system model 'FieldOrientedController'
 * For more details, see corresponding source file FieldOrientedController.c
 *
 */

#ifndef RTW_HEADER_FieldOrientedController_h_
#define RTW_HEADER_FieldOrientedController_h_
#include <cmath>
#include <cstring>
#include <logsrv.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "verify/verifyIntrf.h"
#include "FieldOrientedController_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "model_reference_types.h"

/* Child system includes */
#include "FieldOrientedController_cal.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Block signals for model 'FieldOrientedController' */
#ifndef FieldOrientedController_MDLREF_HIDE_CHILD_

typedef struct {
  real32_T Add[2];                     /* '<S1>/Add' */
  real32_T PhaseCurrent[2];            /* '<S1>/Product' */
  real32_T Data_Type_Convert;          /* '<S91>/Data_Type_Convert' */
  real32_T Rotor_Position_Per_Count;   /* '<S91>/Rotor_Position_Per_Count' */
  real32_T UnitDelay;                  /* '<Root>/Unit Delay' */
  real32_T Add_i;                      /* '<S91>/Add' */
  real32_T Switch;                     /* '<S95>/Switch' */
  real32_T RateTransition9;            /* '<S2>/Rate Transition9' */
  real32_T Gain;                       /* '<S94>/Gain' */
  real32_T Mod;                        /* '<S99>/Mod' */
  real32_T Abs[2];                     /* '<S9>/Abs' */
  real32_T RateTransition7;            /* '<S2>/Rate Transition7' */
  real32_T Merge[3];                   /* '<S2>/Merge' */
  real32_T Delay4;                     /* '<S93>/Delay4' */
  real32_T Uk1;                        /* '<S97>/Delay Input1' */
  real32_T Last_Valid_Position_Delta;  /* '<S93>/Last_Valid_Position_Delta' */
  real32_T Switch_d;                   /* '<S93>/Switch' */
  real32_T FilterTs15mS;               /* '<S3>/FilterTs15mS' */
  real32_T Slope[3];                   /* '<S4>/Slope' */
  real32_T Add_k[3];                   /* '<S4>/Add' */
  real32_T Saturation[3];              /* '<S4>/Saturation' */
  real32_T Switch_c;                   /* '<S2>/Switch' */
  real32_T RateTransition8;            /* '<S2>/Rate Transition8' */
  real32_T positionDelta;              /* '<S93>/Subtract' */
  real32_T Switch1;                    /* '<S98>/Switch1' */
  real32_T Switch2;                    /* '<S98>/Switch2' */
  real32_T wrapPositionNegPii;         /* '<S98>/Add1' */
  real32_T wrapPositionPi;             /* '<S98>/Add' */
  real32_T rotorVelocity;         /* '<S92>/Rotor_Position_Delta_To_Velocity' */
  real32_T Switch1_b;                  /* '<S95>/Switch1' */
  real32_T Add2;                       /* '<S95>/Add2' */
  real32_T Add1;                       /* '<S95>/Add1' */
  real32_T Subtract;                   /* '<S11>/Subtract' */
  real32_T ProportionalGain;           /* '<S79>/Proportional Gain' */
  real32_T Integrator;                 /* '<S74>/Integrator' */
  real32_T Sum;                        /* '<S83>/Sum' */
  real32_T ZeroGain;                   /* '<S65>/ZeroGain' */
  real32_T DeadZone;                   /* '<S67>/DeadZone' */
  real32_T SignPreSat;                 /* '<S65>/SignPreSat' */
  real32_T IntegralGain;               /* '<S71>/Integral Gain' */
  real32_T SignPreIntegrator;          /* '<S65>/SignPreIntegrator' */
  real32_T Switch_i;                   /* '<S65>/Switch' */
  real32_T Saturation_n;               /* '<S81>/Saturation' */
  real32_T Delay;                      /* '<S33>/Delay' */
  real32_T Number_Of_Pole_Pairs;       /* '<S33>/Number_Of_Pole_Pairs' */
  real32_T Gain_j;                     /* '<S30>/Gain' */
  real32_T Delay_o;                    /* '<S30>/Delay' */
  real32_T Add_n;                      /* '<S30>/Add' */
  real32_T Switch_l;                   /* '<S35>/Switch' */
  real32_T Sine_Cosine_o1;             /* '<S29>/Sine_Cosine' */
  real32_T Sine_Cosine_o2;             /* '<S29>/Sine_Cosine' */
  real32_T Product1;                   /* '<S32>/Product1' */
  real32_T Abs_a;                      /* '<S34>/Abs' */
  real32_T Frequency_To_Voltage;       /* '<S34>/Frequency_To_Voltage' */
  real32_T Add_j;                      /* '<S34>/Add' */
  real32_T Product2;                   /* '<S32>/Product2' */
  real32_T Add1_l;                     /* '<S32>/Add1' */
  real32_T Gain_k;                     /* '<S31>/Gain' */
  real32_T Product3;                   /* '<S32>/Product3' */
  real32_T Product4;                   /* '<S32>/Product4' */
  real32_T Add2_j;                     /* '<S32>/Add2' */
  real32_T Gain1;                      /* '<S31>/Gain1' */
  real32_T Add_kw;                     /* '<S31>/Add' */
  real32_T Add1_m;                     /* '<S31>/Add1' */
  real32_T Delay_c;                    /* '<S37>/Delay' */
  real32_T Add_f;                      /* '<S37>/Add' */
  real32_T Switch_Stop;                /* '<S36>/Switch_Stop' */
  real32_T Gain_k3;                    /* '<S33>/Gain' */
  real32_T Sum_k;                      /* '<S33>/Sum' */
  real32_T accleration;                /* '<S36>/Switch_Dir' */
  real32_T Unary_Minus;                /* '<S36>/Unary_Minus' */
  real32_T Switch1_n;                  /* '<S35>/Switch1' */
  real32_T Add2_o;                     /* '<S35>/Add2' */
  real32_T Add1_k;                     /* '<S35>/Add1' */
  real32_T Alpha_Gain;                 /* '<S17>/Alpha_Gain' */
  real32_T Beta_Gain;                  /* '<S17>/Beta_Gain' */
  real32_T Add_a;                      /* '<S17>/Add' */
  real32_T sinCoefficient;             /* '<S16>/Sine_Cosine' */
  real32_T cosCoefficient;             /* '<S16>/Sine_Cosine' */
  real32_T Product1_l;                 /* '<S21>/Product1' */
  real32_T Product2_c;                 /* '<S21>/Product2' */
  real32_T Add1_e;                     /* '<S21>/Add1' */
  real32_T currentControlError;        /* '<S23>/Error' */
  real32_T currentControlPTerm;        /* '<S23>/Proportional_Gain' */
  real32_T currentControlITerm;        /* '<S23>/Unit_Delay' */
  real32_T preSatVoltage;              /* '<S23>/Add1' */
  real32_T Negate;                     /* '<S25>/Negate' */
  real32_T Switch_c1;                  /* '<S26>/Switch' */
  real32_T Switch2_e;                  /* '<S26>/Switch2' */
  real32_T Switch_ig;                  /* '<S23>/Switch' */
  real32_T Add_e;                      /* '<S23>/Add' */
  real32_T Product3_n;                 /* '<S21>/Product3' */
  real32_T Product4_n;                 /* '<S21>/Product4' */
  real32_T Add2_d;                     /* '<S21>/Add2' */
  real32_T currentControlError_l;      /* '<S24>/Error' */
  real32_T currentControlPTerm_g;      /* '<S24>/Proportional_Gain' */
  real32_T currentControlITerm_k;      /* '<S24>/Unit_Delay' */
  real32_T preSatVoltage_n;            /* '<S24>/Add1' */
  real32_T Negate_f;                   /* '<S27>/Negate' */
  real32_T Switch_m;                   /* '<S28>/Switch' */
  real32_T Switch2_l;                  /* '<S28>/Switch2' */
  real32_T Switch_cn;                  /* '<S24>/Switch' */
  real32_T Add_p;                      /* '<S24>/Add' */
  real32_T Product1_k;                 /* '<S20>/Product1' */
  real32_T Product2_g;                 /* '<S20>/Product2' */
  real32_T Add1_e5;                    /* '<S20>/Add1' */
  real32_T Gain_i;                     /* '<S19>/Gain' */
  real32_T Product3_m;                 /* '<S20>/Product3' */
  real32_T Product4_b;                 /* '<S20>/Product4' */
  real32_T Add2_jl;                    /* '<S20>/Add2' */
  real32_T Gain1_b;                    /* '<S19>/Gain1' */
  real32_T Add_d;                      /* '<S19>/Add' */
  real32_T Add1_d;                     /* '<S19>/Add1' */
  real32_T Max;                        /* '<S22>/Max' */
  real32_T Min;                        /* '<S22>/Min' */
  real32_T Add_do;                     /* '<S22>/Add' */
  real32_T Gain_jw;                    /* '<S22>/Gain' */
  real32_T Sample_Time;                /* '<S24>/Sample_Time' */
  real32_T Integral_Gain;              /* '<S24>/Integral_Gain' */
  real32_T Sample_Time_m;              /* '<S23>/Sample_Time' */
  real32_T Integral_Gain_e;            /* '<S23>/Integral_Gain' */
  real32_T Delay_on;                   /* '<S12>/Delay' */
  real32_T Difference;                 /* '<S12>/Difference' */
  real32_T Switch1_nj;                 /* '<S15>/Switch1' */
  real32_T Abs_o;                      /* '<S12>/Abs' */
  real32_T Delay_l;                    /* '<S13>/Delay' */
  real32_T Switch_k;                   /* '<S13>/Switch' */
  real32_T Sample_Frequency;           /* '<S12>/Sample_Frequency' */
  real32_T Delay1;                     /* '<S12>/Delay1' */
  real32_T Switch_iz;                  /* '<S12>/Switch' */
  real32_T Switch1_j;                  /* '<S12>/Switch1' */
  real32_T Switch2_d;                  /* '<S15>/Switch2' */
  real32_T wrapPositionNegPii_i;       /* '<S15>/Add1' */
  real32_T wrapPositionPi_f;           /* '<S15>/Add' */
  real32_T negativeIn;                 /* '<S14>/Subtract' */
  real32_T Switch1_jw;                 /* '<S13>/Switch1' */
  real32_T Add_h;                      /* '<S13>/Add' */
  int8_T DataTypeConv1;                /* '<S65>/DataTypeConv1' */
  int8_T DataTypeConv2;                /* '<S65>/DataTypeConv2' */
  boolean_T Greater_Than;              /* '<S95>/Greater_Than' */
  boolean_T RateTransition3;           /* '<S2>/Rate Transition3' */
  boolean_T RateTransition4;           /* '<S2>/Rate Transition4' */
  boolean_T RateTransition2;           /* '<S2>/Rate Transition2' */
  boolean_T AND;                       /* '<S9>/AND' */
  boolean_T RateTransition5;           /* '<S2>/Rate Transition5' */
  boolean_T NOT;                       /* '<S9>/NOT' */
  boolean_T Delay2;                    /* '<S93>/Delay2' */
  boolean_T FixPtRelationalOperator;   /* '<S97>/FixPt Relational Operator' */
  boolean_T No_Change_Detected;        /* '<S93>/No_Change_Detected' */
  boolean_T Delay3;                    /* '<S93>/Delay3' */
  boolean_T Detect_Rise;               /* '<S93>/Detect_Rise' */
  boolean_T No_Rise_Detected;          /* '<S93>/No_Rise_Detected' */
  boolean_T positionDeltaValid;        /* '<S93>/Logical_AND' */
  boolean_T Delay1_k;                  /* '<S93>/Delay1' */
  boolean_T RateTransition6;           /* '<S2>/Rate Transition6' */
  boolean_T RateTransition1;           /* '<S2>/Rate Transition1' */
  boolean_T RateTransition10;          /* '<S2>/Rate Transition10' */
  boolean_T positionGreaterThanPii;    /* '<S98>/Greater_Than' */
  boolean_T positionLessThanPi;        /* '<S98>/Less_Than' */
  boolean_T Less_Than;                 /* '<S95>/Less_Than' */
  boolean_T NotEqual;                  /* '<S65>/NotEqual' */
  boolean_T Equal1;                    /* '<S65>/Equal1' */
  boolean_T AND3;                      /* '<S65>/AND3' */
  boolean_T error;                     /* '<S9>/Detect_Over_Current_Error' */
  boolean_T Greater_Than_p;            /* '<S35>/Greater_Than' */
  boolean_T currentLessThanTarget;     /* '<S36>/Greater_Than' */
  boolean_T currentGreaterThanTarget;  /* '<S36>/NOT1' */
  boolean_T Compare;                   /* '<S38>/Compare' */
  boolean_T Delay1_g;                  /* '<S36>/Delay1' */
  boolean_T positiveDirection;         /* '<S36>/Latch_Target' */
  boolean_T stopPositiveAcceleration;  /* '<S36>/AND_Pos' */
  boolean_T negativeDirection;         /* '<S36>/NOT2' */
  boolean_T stopNegativeAcceleration;  /* '<S36>/AND_Neg' */
  boolean_T stopAccelerating;          /* '<S36>/OR' */
  boolean_T Less_Than_k;               /* '<S35>/Less_Than' */
  boolean_T enableInverter;            /* '<S2>/Mode_Scheduler' */
  boolean_T openLoop;                  /* '<S2>/Mode_Scheduler' */
  boolean_T Find_Encoder_Index_e;      /* '<S2>/Mode_Scheduler' */
  boolean_T calibrateEncoder;          /* '<S2>/Mode_Scheduler' */
  boolean_T closedLoop;                /* '<S2>/Mode_Scheduler' */
  boolean_T LowerRelop1;               /* '<S26>/LowerRelop1' */
  boolean_T UpperRelop;                /* '<S26>/UpperRelop' */
  boolean_T Not_Equal;                 /* '<S23>/Not_Equal' */
  boolean_T LowerRelop1_h;             /* '<S28>/LowerRelop1' */
  boolean_T UpperRelop_f;              /* '<S28>/UpperRelop' */
  boolean_T Not_Equal_n;               /* '<S24>/Not_Equal' */
  boolean_T positionGreaterThanPii_b;  /* '<S15>/Greater_Than' */
  boolean_T Delay1_gb;                 /* '<S13>/Delay1' */
  boolean_T Greater_Than_j;            /* '<S12>/Greater_Than' */
  boolean_T Greater_Or_Equal;          /* '<S13>/Greater_Or_Equal' */
  boolean_T Delay2_e;                  /* '<S12>/Delay2' */
  boolean_T latchPosition;             /* '<S12>/Logical_OR' */
  boolean_T positionLessThanPi_c;      /* '<S15>/Less_Than' */
} B_FieldOrientedController_c_T;

#endif                            /*FieldOrientedController_MDLREF_HIDE_CHILD_*/

/* Block states (default storage) for model 'FieldOrientedController' */
#ifndef FieldOrientedController_MDLREF_HIDE_CHILD_

typedef struct {
  real_T calibrateAtStartup;           /* '<S2>/Mode_Scheduler' */
  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_ADC_TransducerVoltageToCurrent_at_ou;/* synthesized block */

  real32_T encoderOffset;              /* '<Root>/Unit Delay' */
  real32_T Delay4_DSTATE;              /* '<S93>/Delay4' */
  real32_T DelayInput1_DSTATE;         /* '<S97>/Delay Input1' */
  real32_T Last_Valid_Position_Delta_DSTATE;/* '<S93>/Last_Valid_Position_Delta' */
  real32_T FilterTs15mS_states;        /* '<S3>/FilterTs15mS' */
  real32_T Integrator_DSTATE;          /* '<S74>/Integrator' */
  real32_T Delay_DSTATE;               /* '<S33>/Delay' */
  real32_T Delay_DSTATE_o;             /* '<S30>/Delay' */
  real32_T Delay_DSTATE_h;             /* '<S37>/Delay' */
  real32_T Unit_Delay_DSTATE;          /* '<S23>/Unit_Delay' */
  real32_T Unit_Delay_DSTATE_h;        /* '<S24>/Unit_Delay' */
  real32_T Delay_DSTATE_e;             /* '<S12>/Delay' */
  real32_T Delay_DSTATE_a;             /* '<S13>/Delay' */
  real32_T Delay1_DSTATE;              /* '<S12>/Delay1' */
  real32_T FilterTs15mS_tmp;           /* '<S3>/FilterTs15mS' */
  real32_T RateTransition_Buf[2];      /* '<Root>/Rate Transition' */
  real32_T positionDeltaBuffer[8];/* '<S92>/Rotor_Position_Delta_To_Velocity' */
  int32_T bufferIndex;            /* '<S92>/Rotor_Position_Delta_To_Velocity' */
  int32_T chartAbsoluteTimeCounter;    /* '<S9>/Detect_Over_Current_Error' */
  int32_T durationLastReferenceTick_1; /* '<S9>/Detect_Over_Current_Error' */
  uint32_T is_c2_FieldOrientedController;/* '<S9>/Detect_Over_Current_Error' */
  uint32_T is_c1_FieldOrientedController;/* '<S2>/Mode_Scheduler' */
  uint32_T is_Enable_Inverter;         /* '<S2>/Mode_Scheduler' */
  uint32_T is_Open_Loop;               /* '<S2>/Mode_Scheduler' */
  boolean_T Delay2_DSTATE;             /* '<S93>/Delay2' */
  boolean_T Delay3_DSTATE;             /* '<S93>/Delay3' */
  boolean_T Delay1_DSTATE_p;           /* '<S93>/Delay1' */
  boolean_T Delay1_DSTATE_n;           /* '<S36>/Delay1' */
  boolean_T Delay1_DSTATE_j;           /* '<S13>/Delay1' */
  boolean_T Delay2_DSTATE_n;           /* '<S12>/Delay2' */
  int8_T RateTransition_RdBufIdx;      /* '<Root>/Rate Transition' */
  int8_T RateTransition_WrBufIdx;      /* '<Root>/Rate Transition' */
  uint8_T is_active_c2_FieldOrientedController;/* '<S9>/Detect_Over_Current_Error' */
  uint8_T is_active_c1_FieldOrientedController;/* '<S2>/Mode_Scheduler' */
  boolean_T condWasTrueAtLastTimeStep_1;/* '<S9>/Detect_Over_Current_Error' */
  boolean_T Velocity_Control_MODE;     /* '<S2>/Velocity_Control' */
  boolean_T Open_Loop_Velocity_Control_MODE;/* '<S2>/Open_Loop_Velocity_Control' */
  boolean_T Current_Control_MODE;      /* '<S2>/Current_Control' */
  boolean_T Calibrate_Encoder_Offset_MODE;/* '<S2>/Calibrate_Encoder_Offset' */
} DW_FieldOrientedController_f_T;

#endif                            /*FieldOrientedController_MDLREF_HIDE_CHILD_*/

#ifndef FieldOrientedController_MDLREF_HIDE_CHILD_

/* Real-time Model Data Structure */
struct tag_RTM_FieldOrientedController_T {
  const char_T **errorStatus;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    struct {
      uint32_T TID0_1;
    } RateInteraction;

    boolean_T *stopRequestedFlag;
  } Timing;
};

#endif                            /*FieldOrientedController_MDLREF_HIDE_CHILD_*/

#ifndef FieldOrientedController_MDLREF_HIDE_CHILD_

typedef struct {
  RT_MODEL_FieldOrientedController_T rtm;
} MdlrefDW_FieldOrientedController_T;

#endif                            /*FieldOrientedController_MDLREF_HIDE_CHILD_*/

/* Model block global parameters (default storage) */
extern real_T rtP_paramOverCurrentDuration;/* Variable: paramOverCurrentDuration
                                            * Referenced by: '<S9>/Detect_Over_Current_Error'
                                            */
extern real_T rtP_paramOverCurrentLimit;/* Variable: paramOverCurrentLimit
                                         * Referenced by: '<S9>/Detect_Over_Current_Error'
                                         */
extern real32_T rtP_PolePairs;         /* Variable: PolePairs
                                        * Referenced by:
                                        *   '<S94>/Gain'
                                        *   '<S33>/Number_Of_Pole_Pairs'
                                        */
extern real32_T rtP_paramAdcAmperePerTransducerVolt[2];
                                    /* Variable: paramAdcAmperePerTransducerVolt
                                     * Referenced by: '<S1>/Scalar'
                                     */
extern real32_T rtP_paramAdcTransducerVoltAtZeroAmpere[2];
                                 /* Variable: paramAdcTransducerVoltAtZeroAmpere
                                  * Referenced by: '<S1>/Bias_To_Remove'
                                  */
extern real32_T rtP_paramCurrentControlI;/* Variable: paramCurrentControlI
                                          * Referenced by:
                                          *   '<S23>/Integral_Gain'
                                          *   '<S24>/Integral_Gain'
                                          */
extern real32_T rtP_paramCurrentControlP;/* Variable: paramCurrentControlP
                                          * Referenced by:
                                          *   '<S23>/Proportional_Gain'
                                          *   '<S24>/Proportional_Gain'
                                          */
extern real32_T rtP_paramCurrentControlSatVoltage;
                                      /* Variable: paramCurrentControlSatVoltage
                                       * Referenced by:
                                       *   '<S25>/Saturation_Magntidue'
                                       *   '<S27>/Saturation_Magntidue'
                                       */
extern real32_T rtP_paramEncoderCalibrationDuration;
                                    /* Variable: paramEncoderCalibrationDuration
                                     * Referenced by: '<S12>/Duration'
                                     */
extern real32_T rtP_paramEncoderCalibrationMaxError;
                                    /* Variable: paramEncoderCalibrationMaxError
                                     * Referenced by: '<S12>/Max_Abs_Error'
                                     */
extern real32_T rtP_paramEncoderCalibrationVoltage;
                                     /* Variable: paramEncoderCalibrationVoltage
                                      * Referenced by: '<S12>/Phase_Voltage_Amplitude'
                                      */
extern real32_T rtP_paramEncoderRotorPositionAtZeroCount;
                               /* Variable: paramEncoderRotorPositionAtZeroCount
                                * Referenced by:
                                *   '<Root>/Unit Delay'
                                *   '<S5>/Position_At_Zero_Count'
                                */
extern real32_T rtP_paramEncoderRotorPositionPerCount;
                                  /* Variable: paramEncoderRotorPositionPerCount
                                   * Referenced by: '<S91>/Rotor_Position_Per_Count'
                                   */
extern real32_T rtP_paramOpenLoopVelocityAcceleration;
                                  /* Variable: paramOpenLoopVelocityAcceleration
                                   * Referenced by: '<S36>/Acceleration'
                                   */
extern real32_T rtP_paramOpenLoopVelocityToVoltsBias;
                                   /* Variable: paramOpenLoopVelocityToVoltsBias
                                    * Referenced by: '<S34>/Voltage_Bias'
                                    */
extern real32_T rtP_paramOpenLoopVelocityToVoltsScalar;
                                 /* Variable: paramOpenLoopVelocityToVoltsScalar
                                  * Referenced by: '<S34>/Frequency_To_Voltage'
                                  */
extern real32_T rtP_paramPwmCompareAtZeroVolt;/* Variable: paramPwmCompareAtZeroVolt
                                               * Referenced by: '<S4>/Bias'
                                               */
extern real32_T rtP_paramPwmCompareMax;/* Variable: paramPwmCompareMax
                                        * Referenced by: '<S4>/Saturation'
                                        */
extern real32_T rtP_paramPwmComparePerVolt;/* Variable: paramPwmComparePerVolt
                                            * Referenced by: '<S4>/Slope'
                                            */
extern real32_T rtP_paramVelocityControlI;/* Variable: paramVelocityControlI
                                           * Referenced by: '<S71>/Integral Gain'
                                           */
extern real32_T rtP_paramVelocityControlP;/* Variable: paramVelocityControlP
                                           * Referenced by: '<S79>/Proportional Gain'
                                           */
extern real32_T rtP_paramVelocityControlSatCurrent;
                                     /* Variable: paramVelocityControlSatCurrent
                                      * Referenced by:
                                      *   '<S81>/Saturation'
                                      *   '<S67>/DeadZone'
                                      */
extern boolean_T rtP_paramOverCurrentEnable;/* Variable: paramOverCurrentEnable
                                             * Referenced by: '<S9>/Enable_Over_Current_Detection'
                                             */
extern void FieldOrientedController_Init(modeSchedulerEnum
  *rty_controllerInfo_mode);
extern void FieldOrientedController_Reset(modeSchedulerEnum
  *rty_controllerInfo_mode);
extern void FieldOrientedController_Disable(void);
extern void FieldOrientedControllerTID0(const real32_T
  rtu_controllerFeedback_transducerVoltage[2], const boolean_T
  *rtu_controllerFeedback_encoderIndexFound, const uint16_T
  *rtu_controllerFeedback_encoderCount, boolean_T *rty_motorCommands_enInverter,
  uint16_T rty_motorCommands_pwmCompare[3]);
extern void FieldOrientedControllerTID1(const boolean_T *rtu_userInputs_motorOn,
  const commandTypeEnum *rtu_userInputs_commandType, const real32_T
  *rtu_userInputs_velocityCommand, const boolean_T
  *rtu_controllerFeedback_encoderIndexFound, modeSchedulerEnum
  *rty_controllerInfo_mode, real32_T *rty_controllerInfo_rotorVelocity);

/* Model reference registration function */
extern void FieldOrientedController_initialize(const char_T **rt_errorStatus,
  const rtTimingBridge *timingBridge, int_T mdlref_TID0, int_T mdlref_TID1);

#ifndef FieldOrientedController_MDLREF_HIDE_CHILD_

extern MdlrefDW_FieldOrientedController_T FieldOrientedController_MdlrefDW;

#endif                            /*FieldOrientedController_MDLREF_HIDE_CHILD_*/

#ifndef FieldOrientedController_MDLREF_HIDE_CHILD_

/* Block signals (default storage) */
extern B_FieldOrientedController_c_T FieldOrientedController_B;

/* Block states (default storage) */
extern DW_FieldOrientedController_f_T FieldOrientedController_DW;

#endif                            /*FieldOrientedController_MDLREF_HIDE_CHILD_*/

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
 * '<Root>' : 'FieldOrientedController'
 * '<S1>'   : 'FieldOrientedController/ADC_TransducerVoltageToCurrent'
 * '<S2>'   : 'FieldOrientedController/Controller_Modes'
 * '<S3>'   : 'FieldOrientedController/EncoderToPositionAndVelocity'
 * '<S4>'   : 'FieldOrientedController/Voltage_To_PWM_Compare'
 * '<S5>'   : 'FieldOrientedController/Controller_Modes/Calibrate_Encoder_Offset'
 * '<S6>'   : 'FieldOrientedController/Controller_Modes/Current_Control'
 * '<S7>'   : 'FieldOrientedController/Controller_Modes/Mode_Scheduler'
 * '<S8>'   : 'FieldOrientedController/Controller_Modes/Open_Loop_Velocity_Control'
 * '<S9>'   : 'FieldOrientedController/Controller_Modes/Over_Current_Detector'
 * '<S10>'  : 'FieldOrientedController/Controller_Modes/StandBy'
 * '<S11>'  : 'FieldOrientedController/Controller_Modes/Velocity_Control'
 * '<S12>'  : 'FieldOrientedController/Controller_Modes/Calibrate_Encoder_Offset/Encoder_Calibration'
 * '<S13>'  : 'FieldOrientedController/Controller_Modes/Calibrate_Encoder_Offset/Encoder_Calibration/Count_To_Limit'
 * '<S14>'  : 'FieldOrientedController/Controller_Modes/Calibrate_Encoder_Offset/Encoder_Calibration/Negate_Zero_To_Two_Pi'
 * '<S15>'  : 'FieldOrientedController/Controller_Modes/Calibrate_Encoder_Offset/Encoder_Calibration/Wrap_Neg_Pi_To_Pi_Once'
 * '<S16>'  : 'FieldOrientedController/Controller_Modes/Current_Control/FOC_Current_Control'
 * '<S17>'  : 'FieldOrientedController/Controller_Modes/Current_Control/FOC_Current_Control/Clarke_Transform'
 * '<S18>'  : 'FieldOrientedController/Controller_Modes/Current_Control/FOC_Current_Control/DQ_Current_Control'
 * '<S19>'  : 'FieldOrientedController/Controller_Modes/Current_Control/FOC_Current_Control/Inverse_Clarke_Transform'
 * '<S20>'  : 'FieldOrientedController/Controller_Modes/Current_Control/FOC_Current_Control/Inverse_Park_Transform'
 * '<S21>'  : 'FieldOrientedController/Controller_Modes/Current_Control/FOC_Current_Control/Park_Transform'
 * '<S22>'  : 'FieldOrientedController/Controller_Modes/Current_Control/FOC_Current_Control/Space_Vector_Modulation1'
 * '<S23>'  : 'FieldOrientedController/Controller_Modes/Current_Control/FOC_Current_Control/DQ_Current_Control/D_Current_Control'
 * '<S24>'  : 'FieldOrientedController/Controller_Modes/Current_Control/FOC_Current_Control/DQ_Current_Control/Q_Current_Control'
 * '<S25>'  : 'FieldOrientedController/Controller_Modes/Current_Control/FOC_Current_Control/DQ_Current_Control/D_Current_Control/Saturate_Output'
 * '<S26>'  : 'FieldOrientedController/Controller_Modes/Current_Control/FOC_Current_Control/DQ_Current_Control/D_Current_Control/Saturate_Output/Saturation_Dynamic'
 * '<S27>'  : 'FieldOrientedController/Controller_Modes/Current_Control/FOC_Current_Control/DQ_Current_Control/Q_Current_Control/Saturate_Output'
 * '<S28>'  : 'FieldOrientedController/Controller_Modes/Current_Control/FOC_Current_Control/DQ_Current_Control/Q_Current_Control/Saturate_Output/Saturation_Dynamic'
 * '<S29>'  : 'FieldOrientedController/Controller_Modes/Open_Loop_Velocity_Control/Open_Loop_Velocity_Control'
 * '<S30>'  : 'FieldOrientedController/Controller_Modes/Open_Loop_Velocity_Control/Open_Loop_Velocity_Control/Electrical_Velocity_To_Position'
 * '<S31>'  : 'FieldOrientedController/Controller_Modes/Open_Loop_Velocity_Control/Open_Loop_Velocity_Control/Inverse_Clarke_Transform'
 * '<S32>'  : 'FieldOrientedController/Controller_Modes/Open_Loop_Velocity_Control/Open_Loop_Velocity_Control/Inverse_Park_Transform'
 * '<S33>'  : 'FieldOrientedController/Controller_Modes/Open_Loop_Velocity_Control/Open_Loop_Velocity_Control/Ramp_Velocity'
 * '<S34>'  : 'FieldOrientedController/Controller_Modes/Open_Loop_Velocity_Control/Open_Loop_Velocity_Control/Rotor_Velocity_To_Volts'
 * '<S35>'  : 'FieldOrientedController/Controller_Modes/Open_Loop_Velocity_Control/Open_Loop_Velocity_Control/Electrical_Velocity_To_Position/Mod_Two_Pi_Once'
 * '<S36>'  : 'FieldOrientedController/Controller_Modes/Open_Loop_Velocity_Control/Open_Loop_Velocity_Control/Ramp_Velocity/Set_Acceleration'
 * '<S37>'  : 'FieldOrientedController/Controller_Modes/Open_Loop_Velocity_Control/Open_Loop_Velocity_Control/Ramp_Velocity/Set_Acceleration/Detect_Change'
 * '<S38>'  : 'FieldOrientedController/Controller_Modes/Open_Loop_Velocity_Control/Open_Loop_Velocity_Control/Ramp_Velocity/Set_Acceleration/Detect_Change/Not_Equal_Zero'
 * '<S39>'  : 'FieldOrientedController/Controller_Modes/Over_Current_Detector/Detect_Over_Current_Error'
 * '<S40>'  : 'FieldOrientedController/Controller_Modes/Velocity_Control/Velocity_PID_Controller'
 * '<S41>'  : 'FieldOrientedController/Controller_Modes/Velocity_Control/Velocity_PID_Controller/Anti-windup'
 * '<S42>'  : 'FieldOrientedController/Controller_Modes/Velocity_Control/Velocity_PID_Controller/D Gain'
 * '<S43>'  : 'FieldOrientedController/Controller_Modes/Velocity_Control/Velocity_PID_Controller/Filter'
 * '<S44>'  : 'FieldOrientedController/Controller_Modes/Velocity_Control/Velocity_PID_Controller/Filter ICs'
 * '<S45>'  : 'FieldOrientedController/Controller_Modes/Velocity_Control/Velocity_PID_Controller/I Gain'
 * '<S46>'  : 'FieldOrientedController/Controller_Modes/Velocity_Control/Velocity_PID_Controller/Ideal P Gain'
 * '<S47>'  : 'FieldOrientedController/Controller_Modes/Velocity_Control/Velocity_PID_Controller/Ideal P Gain Fdbk'
 * '<S48>'  : 'FieldOrientedController/Controller_Modes/Velocity_Control/Velocity_PID_Controller/Integrator'
 * '<S49>'  : 'FieldOrientedController/Controller_Modes/Velocity_Control/Velocity_PID_Controller/Integrator ICs'
 * '<S50>'  : 'FieldOrientedController/Controller_Modes/Velocity_Control/Velocity_PID_Controller/N Copy'
 * '<S51>'  : 'FieldOrientedController/Controller_Modes/Velocity_Control/Velocity_PID_Controller/N Gain'
 * '<S52>'  : 'FieldOrientedController/Controller_Modes/Velocity_Control/Velocity_PID_Controller/P Copy'
 * '<S53>'  : 'FieldOrientedController/Controller_Modes/Velocity_Control/Velocity_PID_Controller/Parallel P Gain'
 * '<S54>'  : 'FieldOrientedController/Controller_Modes/Velocity_Control/Velocity_PID_Controller/Reset Signal'
 * '<S55>'  : 'FieldOrientedController/Controller_Modes/Velocity_Control/Velocity_PID_Controller/Saturation'
 * '<S56>'  : 'FieldOrientedController/Controller_Modes/Velocity_Control/Velocity_PID_Controller/Saturation Fdbk'
 * '<S57>'  : 'FieldOrientedController/Controller_Modes/Velocity_Control/Velocity_PID_Controller/Sum'
 * '<S58>'  : 'FieldOrientedController/Controller_Modes/Velocity_Control/Velocity_PID_Controller/Sum Fdbk'
 * '<S59>'  : 'FieldOrientedController/Controller_Modes/Velocity_Control/Velocity_PID_Controller/Tracking Mode'
 * '<S60>'  : 'FieldOrientedController/Controller_Modes/Velocity_Control/Velocity_PID_Controller/Tracking Mode Sum'
 * '<S61>'  : 'FieldOrientedController/Controller_Modes/Velocity_Control/Velocity_PID_Controller/Tsamp - Integral'
 * '<S62>'  : 'FieldOrientedController/Controller_Modes/Velocity_Control/Velocity_PID_Controller/Tsamp - Ngain'
 * '<S63>'  : 'FieldOrientedController/Controller_Modes/Velocity_Control/Velocity_PID_Controller/postSat Signal'
 * '<S64>'  : 'FieldOrientedController/Controller_Modes/Velocity_Control/Velocity_PID_Controller/preSat Signal'
 * '<S65>'  : 'FieldOrientedController/Controller_Modes/Velocity_Control/Velocity_PID_Controller/Anti-windup/Disc. Clamping Parallel'
 * '<S66>'  : 'FieldOrientedController/Controller_Modes/Velocity_Control/Velocity_PID_Controller/Anti-windup/Disc. Clamping Parallel/Dead Zone'
 * '<S67>'  : 'FieldOrientedController/Controller_Modes/Velocity_Control/Velocity_PID_Controller/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
 * '<S68>'  : 'FieldOrientedController/Controller_Modes/Velocity_Control/Velocity_PID_Controller/D Gain/Disabled'
 * '<S69>'  : 'FieldOrientedController/Controller_Modes/Velocity_Control/Velocity_PID_Controller/Filter/Disabled'
 * '<S70>'  : 'FieldOrientedController/Controller_Modes/Velocity_Control/Velocity_PID_Controller/Filter ICs/Disabled'
 * '<S71>'  : 'FieldOrientedController/Controller_Modes/Velocity_Control/Velocity_PID_Controller/I Gain/Internal Parameters'
 * '<S72>'  : 'FieldOrientedController/Controller_Modes/Velocity_Control/Velocity_PID_Controller/Ideal P Gain/Passthrough'
 * '<S73>'  : 'FieldOrientedController/Controller_Modes/Velocity_Control/Velocity_PID_Controller/Ideal P Gain Fdbk/Disabled'
 * '<S74>'  : 'FieldOrientedController/Controller_Modes/Velocity_Control/Velocity_PID_Controller/Integrator/Discrete'
 * '<S75>'  : 'FieldOrientedController/Controller_Modes/Velocity_Control/Velocity_PID_Controller/Integrator ICs/Internal IC'
 * '<S76>'  : 'FieldOrientedController/Controller_Modes/Velocity_Control/Velocity_PID_Controller/N Copy/Disabled wSignal Specification'
 * '<S77>'  : 'FieldOrientedController/Controller_Modes/Velocity_Control/Velocity_PID_Controller/N Gain/Disabled'
 * '<S78>'  : 'FieldOrientedController/Controller_Modes/Velocity_Control/Velocity_PID_Controller/P Copy/Disabled'
 * '<S79>'  : 'FieldOrientedController/Controller_Modes/Velocity_Control/Velocity_PID_Controller/Parallel P Gain/Internal Parameters'
 * '<S80>'  : 'FieldOrientedController/Controller_Modes/Velocity_Control/Velocity_PID_Controller/Reset Signal/Disabled'
 * '<S81>'  : 'FieldOrientedController/Controller_Modes/Velocity_Control/Velocity_PID_Controller/Saturation/Enabled'
 * '<S82>'  : 'FieldOrientedController/Controller_Modes/Velocity_Control/Velocity_PID_Controller/Saturation Fdbk/Disabled'
 * '<S83>'  : 'FieldOrientedController/Controller_Modes/Velocity_Control/Velocity_PID_Controller/Sum/Sum_PI'
 * '<S84>'  : 'FieldOrientedController/Controller_Modes/Velocity_Control/Velocity_PID_Controller/Sum Fdbk/Disabled'
 * '<S85>'  : 'FieldOrientedController/Controller_Modes/Velocity_Control/Velocity_PID_Controller/Tracking Mode/Disabled'
 * '<S86>'  : 'FieldOrientedController/Controller_Modes/Velocity_Control/Velocity_PID_Controller/Tracking Mode Sum/Passthrough'
 * '<S87>'  : 'FieldOrientedController/Controller_Modes/Velocity_Control/Velocity_PID_Controller/Tsamp - Integral/Passthrough'
 * '<S88>'  : 'FieldOrientedController/Controller_Modes/Velocity_Control/Velocity_PID_Controller/Tsamp - Ngain/Passthrough'
 * '<S89>'  : 'FieldOrientedController/Controller_Modes/Velocity_Control/Velocity_PID_Controller/postSat Signal/Forward_Path'
 * '<S90>'  : 'FieldOrientedController/Controller_Modes/Velocity_Control/Velocity_PID_Controller/preSat Signal/Forward_Path'
 * '<S91>'  : 'FieldOrientedController/EncoderToPositionAndVelocity/Encoder_Count_To_Rotor_Position'
 * '<S92>'  : 'FieldOrientedController/EncoderToPositionAndVelocity/Position_Delta_To_Velocity'
 * '<S93>'  : 'FieldOrientedController/EncoderToPositionAndVelocity/Rotor_Position_Delta'
 * '<S94>'  : 'FieldOrientedController/EncoderToPositionAndVelocity/Rotor_To_Electrical_Position'
 * '<S95>'  : 'FieldOrientedController/EncoderToPositionAndVelocity/Encoder_Count_To_Rotor_Position/Mod_Two_Pi_Once'
 * '<S96>'  : 'FieldOrientedController/EncoderToPositionAndVelocity/Position_Delta_To_Velocity/Rotor_Position_Delta_To_Velocity'
 * '<S97>'  : 'FieldOrientedController/EncoderToPositionAndVelocity/Rotor_Position_Delta/Detect_Change'
 * '<S98>'  : 'FieldOrientedController/EncoderToPositionAndVelocity/Rotor_Position_Delta/Wrap_Neg_Pi_To_Pi_Once'
 * '<S99>'  : 'FieldOrientedController/EncoderToPositionAndVelocity/Rotor_To_Electrical_Position/Mod_Two_Pi'
 */
#endif                               /* RTW_HEADER_FieldOrientedController_h_ */
