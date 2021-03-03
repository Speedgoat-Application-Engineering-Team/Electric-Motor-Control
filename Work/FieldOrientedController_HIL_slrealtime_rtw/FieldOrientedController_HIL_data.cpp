/*
 * FieldOrientedController_HIL_data.cpp
 *
 * Sponsored Third Party Support License -- for use only to support
 * products interfaced to MathWorks software under terms specified in your
 * company's restricted use license agreement.
 *
 * Code generation for model "FieldOrientedController_HIL".
 *
 * Model version              : 2.16
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C++ source code generated on : Wed Mar  3 11:07:23 2021
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "FieldOrientedController_HIL.h"
#include "FieldOrientedController_HIL_private.h"

/* Model block global parameters (default storage) */
real_T rtP_adcTransducerVoltAtZeroAmpere[2] = { 0.0015, 0.023 } ;
                                      /* Variable: adcTransducerVoltAtZeroAmpere
                                       * Referenced by: '<Root>/PMSMPlantModel'
                                       */

real_T rtP_adcTransducerVoltPerAmpere = -0.0667;/* Variable: adcTransducerVoltPerAmpere
                                                 * Referenced by: '<Root>/PMSMPlantModel'
                                                 */
real_T rtP_discInertia = 8.0E-5;       /* Variable: discInertia
                                        * Referenced by: '<Root>/PMSMPlantModel'
                                        */
real_T rtP_encoderRotorPositionAtIndex = 0.5;/* Variable: encoderRotorPositionAtIndex
                                              * Referenced by: '<Root>/PMSMPlantModel'
                                              */
real_T rtP_pmsmPolePairs = 7.0;        /* Variable: pmsmPolePairs
                                        * Referenced by: '<Root>/PMSMPlantModel'
                                        */
real_T rtP_pmsmRotorPositionInit = 0.0;/* Variable: pmsmRotorPositionInit
                                        * Referenced by: '<Root>/PMSMPlantModel'
                                        */
real_T rtP_pmsmRotorVelocityInit = 0.0;/* Variable: pmsmRotorVelocityInit
                                        * Referenced by: '<Root>/PMSMPlantModel'
                                        */
real_T rtP_pwmCounterMax = 1500.0;     /* Variable: pwmCounterMax
                                        * Referenced by: '<S7>/DutyCycle2PWMCompare'
                                        */
real32_T rtP_velCmdVec[4] = { -50.0F, 0.0F, 50.0F, 100.0F } ;/* Variable: velCmdVec
                                                              * Referenced by: '<S8>/1-D Lookup Table'
                                                              */

boolean_T rtP_encoderALeadsB = 1;      /* Variable: encoderALeadsB
                                        * Referenced by: '<Root>/PMSMPlantModel'
                                        */
boolean_T rtP_encoderPositionValidAtStartup = 1;
                                      /* Variable: encoderPositionValidAtStartup
                                       * Referenced by: '<Root>/PMSMPlantModel'
                                       */
