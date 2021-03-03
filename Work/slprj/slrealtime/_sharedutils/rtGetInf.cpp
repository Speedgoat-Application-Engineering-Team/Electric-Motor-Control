/*
 * rtGetInf.cpp
 *
 * Sponsored Third Party Support License -- for use only to support
 * products interfaced to MathWorks software under terms specified in your
 * company's restricted use license agreement.
 *
 * Code generation for model "PMSM_Plant_Model".
 *
 * Model version              : 2.0
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C++ source code generated on : Wed Mar  3 09:40:20 2021
 */

/*
 * Abstract:
 *      Function to initialize non-finite, Inf
 */
#include "rtGetInf.h"
#define NumBitsPerChar                 8U

extern "C" {
  /*
   * Initialize rtInf needed by the generated code.
   * Inf is initialized as non-signaling. Assumes IEEE.
   */
  real_T rtGetInf(void)
  {
    size_t bitsPerReal = sizeof(real_T) * (NumBitsPerChar);
    real_T inf = 0.0;
    if (bitsPerReal == 32U) {
      inf = rtGetInfF();
    } else {
      uint16_T one = 1U;
      enum {
        LittleEndian,
        BigEndian
      } machByteOrder = (*((uint8_T *) &one) == 1U) ? LittleEndian : BigEndian;
      switch (machByteOrder) {
       case LittleEndian:
        {
          union {
            LittleEndianIEEEDouble bitVal;
            real_T fltVal;
          } tmpVal;

          tmpVal.bitVal.words.wordH = 0x7FF00000U;
          tmpVal.bitVal.words.wordL = 0x00000000U;
          inf = tmpVal.fltVal;
          break;
        }

       case BigEndian:
        {
          union {
            BigEndianIEEEDouble bitVal;
            real_T fltVal;
          } tmpVal;

          tmpVal.bitVal.words.wordH = 0x7FF00000U;
          tmpVal.bitVal.words.wordL = 0x00000000U;
          inf = tmpVal.fltVal;
          break;
        }
      }
    }

    return inf;
  }

  /*
   * Initialize rtInfF needed by the generated code.
   * Inf is initialized as non-signaling. Assumes IEEE.
   */
  real32_T rtGetInfF(void)
  {
    IEEESingle infF;
    infF.wordL.wordLuint = 0x7F800000U;
    return infF.wordL.wordLreal;
  }

  /*
   * Initialize rtMinusInf needed by the generated code.
   * Inf is initialized as non-signaling. Assumes IEEE.
   */
  real_T rtGetMinusInf(void)
  {
    size_t bitsPerReal = sizeof(real_T) * (NumBitsPerChar);
    real_T minf = 0.0;
    if (bitsPerReal == 32U) {
      minf = rtGetMinusInfF();
    } else {
      uint16_T one = 1U;
      enum {
        LittleEndian,
        BigEndian
      } machByteOrder = (*((uint8_T *) &one) == 1U) ? LittleEndian : BigEndian;
      switch (machByteOrder) {
       case LittleEndian:
        {
          union {
            LittleEndianIEEEDouble bitVal;
            real_T fltVal;
          } tmpVal;

          tmpVal.bitVal.words.wordH = 0xFFF00000U;
          tmpVal.bitVal.words.wordL = 0x00000000U;
          minf = tmpVal.fltVal;
          break;
        }

       case BigEndian:
        {
          union {
            BigEndianIEEEDouble bitVal;
            real_T fltVal;
          } tmpVal;

          tmpVal.bitVal.words.wordH = 0xFFF00000U;
          tmpVal.bitVal.words.wordL = 0x00000000U;
          minf = tmpVal.fltVal;
          break;
        }
      }
    }

    return minf;
  }

  /*
   * Initialize rtMinusInfF needed by the generated code.
   * Inf is initialized as non-signaling. Assumes IEEE.
   */
  real32_T rtGetMinusInfF(void)
  {
    IEEESingle minfF;
    minfF.wordL.wordLuint = 0xFF800000U;
    return minfF.wordL.wordLreal;
  }
}
