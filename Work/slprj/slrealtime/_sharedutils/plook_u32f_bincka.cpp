/*
 * plook_u32f_bincka.cpp
 *
 * Sponsored Third Party Support License -- for use only to support
 * products interfaced to MathWorks software under terms specified in your
 * company's restricted use license agreement.
 *
 * Code generation for model "FieldOrientedController_HIL".
 *
 * Model version              : 2.10
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C++ source code generated on : Wed Mar  3 09:40:55 2021
 * Created for block: FieldOrientedController_HIL
 */

#include "rtwtypes.h"
#include "binsearch_u32f.h"
#include "plook_u32f_bincka.h"

uint32_T plook_u32f_bincka(real32_T u, const real32_T bp[], uint32_T maxIndex)
{
  uint32_T bpIndex;

  /* Prelookup - Index only
     Index Search method: 'binary'
     Extrapolation method: 'Clip'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'on'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u <= bp[0U]) {
    bpIndex = 0U;
  } else if (u < bp[maxIndex]) {
    bpIndex = binsearch_u32f(u, bp, maxIndex >> 1U, maxIndex);
  } else {
    bpIndex = maxIndex;
  }

  return bpIndex;
}
