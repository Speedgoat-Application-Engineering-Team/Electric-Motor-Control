/*
 * FieldOrientedController_RCP_data.cpp
 *
 * Sponsored Third Party Support License -- for use only to support
 * products interfaced to MathWorks software under terms specified in your
 * company's restricted use license agreement.
 *
 * Code generation for model "FieldOrientedController_RCP".
 *
 * Model version              : 2.10
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C++ source code generated on : Wed Mar  3 14:14:27 2021
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "FieldOrientedController_RCP.h"
#include "FieldOrientedController_RCP_private.h"

/* Model block global parameters (default storage) */
real_T rtP_paramOverCurrentDuration = 0.001;/* Variable: paramOverCurrentDuration
                                             * Referenced by: '<Root>/FieldOrientedController'
                                             */
real_T rtP_paramOverCurrentLimit = 5.0;/* Variable: paramOverCurrentLimit
                                        * Referenced by: '<Root>/FieldOrientedController'
                                        */
real32_T rtP_PolePairs = 7.0F;         /* Variable: PolePairs
                                        * Referenced by: '<Root>/FieldOrientedController'
                                        */
real32_T rtP_paramAdcAmperePerTransducerVolt[2] = { -15.0150146F, -15.0150146F }
;                                   /* Variable: paramAdcAmperePerTransducerVolt
                                     * Referenced by: '<Root>/FieldOrientedController'
                                     */

real32_T rtP_paramAdcTransducerVoltAtZeroAmpere[2] = { -0.00241875625F,
  0.0235269628F } ;              /* Variable: paramAdcTransducerVoltAtZeroAmpere
                                  * Referenced by: '<Root>/FieldOrientedController'
                                  */

real32_T rtP_paramCurrentControlI = 200.0F;/* Variable: paramCurrentControlI
                                            * Referenced by: '<Root>/FieldOrientedController'
                                            */
real32_T rtP_paramCurrentControlP = 0.5F;/* Variable: paramCurrentControlP
                                          * Referenced by: '<Root>/FieldOrientedController'
                                          */
real32_T rtP_paramCurrentControlSatVoltage = 20.0F;
                                      /* Variable: paramCurrentControlSatVoltage
                                       * Referenced by: '<Root>/FieldOrientedController'
                                       */
real32_T rtP_paramEncoderCalibrationDuration = 0.2F;
                                    /* Variable: paramEncoderCalibrationDuration
                                     * Referenced by: '<Root>/FieldOrientedController'
                                     */
real32_T rtP_paramEncoderCalibrationMaxError = 0.000785398181F;
                                    /* Variable: paramEncoderCalibrationMaxError
                                     * Referenced by: '<Root>/FieldOrientedController'
                                     */
real32_T rtP_paramEncoderCalibrationVoltage = 0.75F;
                                     /* Variable: paramEncoderCalibrationVoltage
                                      * Referenced by: '<Root>/FieldOrientedController'
                                      */
real32_T rtP_paramEncoderRotorPositionAtZeroCount = 0.22933F;
                               /* Variable: paramEncoderRotorPositionAtZeroCount
                                * Referenced by: '<Root>/FieldOrientedController'
                                */
real32_T rtP_paramEncoderRotorPositionPerCount = 0.0003835F;
                                  /* Variable: paramEncoderRotorPositionPerCount
                                   * Referenced by: '<Root>/FieldOrientedController'
                                   */
real32_T rtP_paramOpenLoopVelocityAcceleration = 75.0F;
                                  /* Variable: paramOpenLoopVelocityAcceleration
                                   * Referenced by: '<Root>/FieldOrientedController'
                                   */
real32_T rtP_paramOpenLoopVelocityToVoltsBias = 0.5F;
                                   /* Variable: paramOpenLoopVelocityToVoltsBias
                                    * Referenced by: '<Root>/FieldOrientedController'
                                    */
real32_T rtP_paramOpenLoopVelocityToVoltsScalar = 0.0325F;
                                 /* Variable: paramOpenLoopVelocityToVoltsScalar
                                  * Referenced by: '<Root>/FieldOrientedController'
                                  */
real32_T rtP_paramPwmCompareAtZeroVolt = 750.0F;/* Variable: paramPwmCompareAtZeroVolt
                                                 * Referenced by: '<Root>/FieldOrientedController'
                                                 */
real32_T rtP_paramPwmCompareMax = 1500.0F;/* Variable: paramPwmCompareMax
                                           * Referenced by: '<Root>/FieldOrientedController'
                                           */
real32_T rtP_paramPwmComparePerVolt = 62.5F;/* Variable: paramPwmComparePerVolt
                                             * Referenced by: '<Root>/FieldOrientedController'
                                             */
real32_T rtP_paramVelocityControlI = 0.1F;/* Variable: paramVelocityControlI
                                           * Referenced by: '<Root>/FieldOrientedController'
                                           */
real32_T rtP_paramVelocityControlP = 0.05F;/* Variable: paramVelocityControlP
                                            * Referenced by: '<Root>/FieldOrientedController'
                                            */
real32_T rtP_paramVelocityControlSatCurrent = 4.0F;
                                     /* Variable: paramVelocityControlSatCurrent
                                      * Referenced by: '<Root>/FieldOrientedController'
                                      */
boolean_T rtP_paramOverCurrentEnable = 0;/* Variable: paramOverCurrentEnable
                                          * Referenced by: '<Root>/FieldOrientedController'
                                          */
