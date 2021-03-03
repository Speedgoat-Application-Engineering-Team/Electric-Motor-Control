/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/Solver_Configuration'.
 */

#include "ne_ds.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_tdxf_p.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_sys_struct.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_externals.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T PMSM_Plant_Model_e54d855d_1_ds_tdxf_p(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  static int32_T _cg_const_2[108] = { 1, 7, 8, 13, 3, 4, 9, 10, 11, 2, 3, 4, 6,
    8, 5, 9, 10, 11, 3, 4, 9, 10, 11, 12, 3, 4, 9, 10, 11, 12, 0, 7, 0, 6, 0, 13,
    9, 20, 23, 26, 27, 28, 3, 4, 5, 26, 3, 4, 5, 27, 3, 4, 5, 28, 9, 10, 20, 21,
    23, 24, 26, 27, 9, 11, 20, 22, 23, 25, 26, 28, 6, 12, 14, 17, 20, 23, 26, 15,
    18, 21, 24, 27, 16, 19, 22, 25, 28, 14, 20, 23, 23, 15, 21, 24, 24, 16, 22,
    25, 25, 17, 20, 23, 18, 21, 24, 19, 22, 25 };

  PmSparsityPattern out;
  int32_T b;
  (void)t1;
  (void)LC;
  out = t2->mTDXF_P;
  out.mNumCol = 29ULL;
  out.mNumRow = 29ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 4;
  out.mJc[2] = 4;
  out.mJc[3] = 9;
  out.mJc[4] = 14;
  out.mJc[5] = 18;
  out.mJc[6] = 24;
  out.mJc[7] = 30;
  out.mJc[8] = 32;
  out.mJc[9] = 34;
  out.mJc[10] = 36;
  out.mJc[11] = 42;
  out.mJc[12] = 46;
  out.mJc[13] = 50;
  out.mJc[14] = 54;
  out.mJc[15] = 62;
  out.mJc[16] = 70;
  out.mJc[17] = 72;
  out.mJc[18] = 77;
  out.mJc[19] = 82;
  out.mJc[20] = 87;
  out.mJc[21] = 90;
  out.mJc[22] = 91;
  out.mJc[23] = 94;
  out.mJc[24] = 95;
  out.mJc[25] = 98;
  out.mJc[26] = 99;
  out.mJc[27] = 102;
  out.mJc[28] = 105;
  out.mJc[29] = 108;
  for (b = 0; b < 108; b++) {
    out.mIr[b] = _cg_const_2[b];
  }

  (void)LC;
  (void)t2;
  return 0;
}
