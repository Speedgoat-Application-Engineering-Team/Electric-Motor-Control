/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/Solver_Configuration'.
 */

#include "ne_ds.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_m_p.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_sys_struct.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_externals.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T PMSM_Plant_Model_e54d855d_1_ds_m_p(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mM_P;
  out.mNumCol = 29ULL;
  out.mNumRow = 29ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 1;
  out.mJc[2] = 2;
  out.mJc[3] = 3;
  out.mJc[4] = 4;
  out.mJc[5] = 5;
  out.mJc[6] = 6;
  out.mJc[7] = 7;
  out.mJc[8] = 7;
  out.mJc[9] = 7;
  out.mJc[10] = 7;
  out.mJc[11] = 7;
  out.mJc[12] = 7;
  out.mJc[13] = 7;
  out.mJc[14] = 7;
  out.mJc[15] = 7;
  out.mJc[16] = 7;
  out.mJc[17] = 7;
  out.mJc[18] = 7;
  out.mJc[19] = 7;
  out.mJc[20] = 7;
  out.mJc[21] = 7;
  out.mJc[22] = 7;
  out.mJc[23] = 7;
  out.mJc[24] = 7;
  out.mJc[25] = 7;
  out.mJc[26] = 7;
  out.mJc[27] = 7;
  out.mJc[28] = 7;
  out.mJc[29] = 7;
  out.mIr[0] = 0;
  out.mIr[1] = 1;
  out.mIr[2] = 2;
  out.mIr[3] = 6;
  out.mIr[4] = 5;
  out.mIr[5] = 3;
  out.mIr[6] = 4;
  (void)LC;
  (void)t2;
  return 0;
}
