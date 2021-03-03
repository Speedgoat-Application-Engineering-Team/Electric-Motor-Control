/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/Solver_Configuration'.
 */

#include "ne_ds.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_tduf_p.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_sys_struct.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_externals.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T PMSM_Plant_Model_e54d855d_1_ds_tduf_p(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mTDUF_P;
  out.mNumCol = 11ULL;
  out.mNumRow = 29ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 1;
  out.mJc[2] = 2;
  out.mJc[3] = 4;
  out.mJc[4] = 6;
  out.mJc[5] = 8;
  out.mJc[6] = 10;
  out.mJc[7] = 12;
  out.mJc[8] = 14;
  out.mJc[9] = 17;
  out.mJc[10] = 20;
  out.mJc[11] = 23;
  out.mIr[0] = 7;
  out.mIr[1] = 0;
  out.mIr[2] = 20;
  out.mIr[3] = 23;
  out.mIr[4] = 20;
  out.mIr[5] = 23;
  out.mIr[6] = 21;
  out.mIr[7] = 24;
  out.mIr[8] = 21;
  out.mIr[9] = 24;
  out.mIr[10] = 22;
  out.mIr[11] = 25;
  out.mIr[12] = 22;
  out.mIr[13] = 25;
  out.mIr[14] = 26;
  out.mIr[15] = 27;
  out.mIr[16] = 28;
  out.mIr[17] = 26;
  out.mIr[18] = 27;
  out.mIr[19] = 28;
  out.mIr[20] = 26;
  out.mIr[21] = 27;
  out.mIr[22] = 28;
  (void)LC;
  (void)t2;
  return 0;
}
