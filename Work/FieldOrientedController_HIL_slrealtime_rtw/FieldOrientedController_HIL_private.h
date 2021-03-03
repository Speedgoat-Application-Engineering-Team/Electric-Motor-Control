/*
 * FieldOrientedController_HIL_private.h
 *
 * Sponsored Third Party Support License -- for use only to support
 * products interfaced to MathWorks software under terms specified in your
 * company's restricted use license agreement.
 *
 * Code generation for model "FieldOrientedController_HIL".
 *
 * Model version              : 2.17
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C++ source code generated on : Wed Mar  3 11:56:34 2021
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_FieldOrientedController_HIL_private_h_
#define RTW_HEADER_FieldOrientedController_HIL_private_h_
#include "rtwtypes.h"
#include "model_reference_types.h"
#include "multiword_types.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmSetTFinal
#define rtmSetTFinal(rtm, val)         ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmSetTPtr
#define rtmSetTPtr(rtm, val)           ((rtm)->Timing.t = (val))
#endif

#ifndef UCHAR_MAX
#include <limits.h>
#endif

#if ( UCHAR_MAX != (0xFFU) ) || ( SCHAR_MAX != (0x7F) )
#error Code was generated for compiler with different sized uchar/char. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( USHRT_MAX != (0xFFFFU) ) || ( SHRT_MAX != (0x7FFF) )
#error Code was generated for compiler with different sized ushort/short. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( UINT_MAX != (0xFFFFFFFFU) ) || ( INT_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized uint/int. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

/* Skipping ulong/long check: insufficient preprocessor integer range. */

/* Skipping ulong_long/long_long check: insufficient preprocessor integer range. */
struct {
  void *context;
  uint32_T IRQ;
  struct sigevent sig_none;
  struct sigevent sig_pulse;
  uint32_T coid;
  uint32_T pri;
  uint32_T count;
  uint32_T intrID;
} Root_InterruptSetup_D;

// Define a static error message buffer for this instance
static char Root_InterruptSetup_errmsg[256];

//
extern "C"
{
  void IO397_50k_v2_start_public( void *, bool );
  void IO397_50k_v2_stop_public( void * );
  bool IO397_50k_v2_isr_public( void * );
  int32_T IO397_50k_v2_map_public( void **, uint32_T );
}
//
  const struct sigevent *Root_InterruptSetup_ISR(void *data, int id);

extern rtTimingBridge FieldOrientedController_HIL_TimingBrdg;
extern void* slrtRegisterSignalToLoggingService(uintptr_t sigAddr);
extern "C" void sg_fpga_di_sf_a2(SimStruct *rts);
extern "C" void sg_fpga_cap_sf_1(SimStruct *rts);
extern "C" void sg_fpga_do_sf_a2(SimStruct *rts);
extern "C" void sg_fpga_IO397_da(SimStruct *rts);
extern "C" void sg_fpga_qae_sf_2(SimStruct *rts);
extern "C" void sg_fpga_inta_sf_2(SimStruct *rts);

#endif                   /* RTW_HEADER_FieldOrientedController_HIL_private_h_ */
