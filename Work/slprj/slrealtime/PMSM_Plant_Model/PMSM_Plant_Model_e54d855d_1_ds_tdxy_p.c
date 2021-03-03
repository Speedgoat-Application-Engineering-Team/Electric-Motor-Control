/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/Solver_Configuration'.
 */

#include "ne_ds.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_tdxy_p.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_sys_struct.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_externals.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T PMSM_Plant_Model_e54d855d_1_ds_tdxy_p(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mTDXY_P;
  out.mNumCol = 29ULL;
  out.mNumRow = 6ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 1;
  out.mJc[2] = 2;
  out.mJc[3] = 2;
  out.mJc[4] = 2;
  out.mJc[5] = 2;
  out.mJc[6] = 2;
  out.mJc[7] = 2;
  out.mJc[8] = 2;
  out.mJc[9] = 3;
  out.mJc[10] = 3;
  out.mJc[11] = 6;
  out.mJc[12] = 6;
  out.mJc[13] = 6;
  out.mJc[14] = 6;
  out.mJc[15] = 9;
  out.mJc[16] = 12;
  out.mJc[17] = 12;
  out.mJc[18] = 12;
  out.mJc[19] = 12;
  out.mJc[20] = 12;
  out.mJc[21] = 12;
  out.mJc[22] = 12;
  out.mJc[23] = 12;
  out.mJc[24] = 12;
  out.mJc[25] = 12;
  out.mJc[26] = 12;
  out.mJc[27] = 12;
  out.mJc[28] = 12;
  out.mJc[29] = 12;
  out.mIr[0] = 4;
  out.mIr[1] = 3;
  out.mIr[2] = 5;
  out.mIr[3] = 0;
  out.mIr[4] = 1;
  out.mIr[5] = 2;
  out.mIr[6] = 0;
  out.mIr[7] = 1;
  out.mIr[8] = 2;
  out.mIr[9] = 0;
  out.mIr[10] = 1;
  out.mIr[11] = 2;
  (void)LC;
  (void)t2;
  return 0;
}
