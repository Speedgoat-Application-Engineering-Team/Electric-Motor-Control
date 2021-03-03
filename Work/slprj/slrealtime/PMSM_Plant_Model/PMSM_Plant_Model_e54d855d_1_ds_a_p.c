/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/Solver_Configuration'.
 */

#include "ne_ds.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_a_p.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_sys_struct.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_externals.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T PMSM_Plant_Model_e54d855d_1_ds_a_p(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mA_P;
  out.mNumCol = 29ULL;
  out.mNumRow = 29ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 3;
  out.mJc[2] = 3;
  out.mJc[3] = 3;
  out.mJc[4] = 6;
  out.mJc[5] = 7;
  out.mJc[6] = 8;
  out.mJc[7] = 9;
  out.mJc[8] = 10;
  out.mJc[9] = 12;
  out.mJc[10] = 14;
  out.mJc[11] = 15;
  out.mJc[12] = 16;
  out.mJc[13] = 17;
  out.mJc[14] = 18;
  out.mJc[15] = 20;
  out.mJc[16] = 22;
  out.mJc[17] = 24;
  out.mJc[18] = 24;
  out.mJc[19] = 24;
  out.mJc[20] = 24;
  out.mJc[21] = 25;
  out.mJc[22] = 25;
  out.mJc[23] = 26;
  out.mJc[24] = 26;
  out.mJc[25] = 27;
  out.mJc[26] = 27;
  out.mJc[27] = 28;
  out.mJc[28] = 29;
  out.mJc[29] = 30;
  out.mIr[0] = 1;
  out.mIr[1] = 8;
  out.mIr[2] = 13;
  out.mIr[3] = 2;
  out.mIr[4] = 6;
  out.mIr[5] = 8;
  out.mIr[6] = 5;
  out.mIr[7] = 3;
  out.mIr[8] = 4;
  out.mIr[9] = 0;
  out.mIr[10] = 0;
  out.mIr[11] = 6;
  out.mIr[12] = 0;
  out.mIr[13] = 13;
  out.mIr[14] = 9;
  out.mIr[15] = 5;
  out.mIr[16] = 5;
  out.mIr[17] = 5;
  out.mIr[18] = 9;
  out.mIr[19] = 10;
  out.mIr[20] = 9;
  out.mIr[21] = 11;
  out.mIr[22] = 6;
  out.mIr[23] = 12;
  out.mIr[24] = 14;
  out.mIr[25] = 15;
  out.mIr[26] = 16;
  out.mIr[27] = 17;
  out.mIr[28] = 18;
  out.mIr[29] = 19;
  (void)LC;
  (void)t2;
  return 0;
}
