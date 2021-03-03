/*
 * rt_roundd_snf.cpp
 *
 * Sponsored Third Party Support License -- for use only to support
 * products interfaced to MathWorks software under terms specified in your
 * company's restricted use license agreement.
 *
 * Code generation for model "FieldOrientedController_RCP".
 *
 * Model version              : 2.9
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C++ source code generated on : Wed Mar  3 10:49:25 2021
 * Created for block: FieldOrientedController_RCP
 */

#include "rtwtypes.h"
#include <cmath>
#include "rt_roundd_snf.h"

real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (std::abs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = std::floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = std::ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}
