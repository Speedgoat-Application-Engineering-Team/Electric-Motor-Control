/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/Solver_Configuration'.
 */

#include "ne_ds.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_dxf_p.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_sys_struct.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_externals.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T PMSM_Plant_Model_e54d855d_1_ds_dxf_p(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mDXF_P;
  out.mNumCol = 29ULL;
  out.mNumRow = 29ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 2;
  out.mJc[2] = 2;
  out.mJc[3] = 7;
  out.mJc[4] = 9;
  out.mJc[5] = 12;
  out.mJc[6] = 17;
  out.mJc[7] = 22;
  out.mJc[8] = 23;
  out.mJc[9] = 23;
  out.mJc[10] = 23;
  out.mJc[11] = 28;
  out.mJc[12] = 31;
  out.mJc[13] = 34;
  out.mJc[14] = 37;
  out.mJc[15] = 43;
  out.mJc[16] = 49;
  out.mJc[17] = 49;
  out.mJc[18] = 54;
  out.mJc[19] = 59;
  out.mJc[20] = 64;
  out.mJc[21] = 66;
  out.mJc[22] = 67;
  out.mJc[23] = 69;
  out.mJc[24] = 70;
  out.mJc[25] = 72;
  out.mJc[26] = 73;
  out.mJc[27] = 75;
  out.mJc[28] = 77;
  out.mJc[29] = 79;
  out.mIr[0] = 7;
  out.mIr[1] = 13;
  out.mIr[2] = 3;
  out.mIr[3] = 4;
  out.mIr[4] = 9;
  out.mIr[5] = 10;
  out.mIr[6] = 11;
  out.mIr[7] = 3;
  out.mIr[8] = 4;
  out.mIr[9] = 9;
  out.mIr[10] = 10;
  out.mIr[11] = 11;
  out.mIr[12] = 4;
  out.mIr[13] = 9;
  out.mIr[14] = 10;
  out.mIr[15] = 11;
  out.mIr[16] = 12;
  out.mIr[17] = 3;
  out.mIr[18] = 9;
  out.mIr[19] = 10;
  out.mIr[20] = 11;
  out.mIr[21] = 12;
  out.mIr[22] = 7;
  out.mIr[23] = 20;
  out.mIr[24] = 23;
  out.mIr[25] = 26;
  out.mIr[26] = 27;
  out.mIr[27] = 28;
  out.mIr[28] = 3;
  out.mIr[29] = 4;
  out.mIr[30] = 26;
  out.mIr[31] = 3;
  out.mIr[32] = 4;
  out.mIr[33] = 27;
  out.mIr[34] = 3;
  out.mIr[35] = 4;
  out.mIr[36] = 28;
  out.mIr[37] = 20;
  out.mIr[38] = 21;
  out.mIr[39] = 23;
  out.mIr[40] = 24;
  out.mIr[41] = 26;
  out.mIr[42] = 27;
  out.mIr[43] = 20;
  out.mIr[44] = 22;
  out.mIr[45] = 23;
  out.mIr[46] = 25;
  out.mIr[47] = 26;
  out.mIr[48] = 28;
  out.mIr[49] = 14;
  out.mIr[50] = 17;
  out.mIr[51] = 20;
  out.mIr[52] = 23;
  out.mIr[53] = 26;
  out.mIr[54] = 15;
  out.mIr[55] = 18;
  out.mIr[56] = 21;
  out.mIr[57] = 24;
  out.mIr[58] = 27;
  out.mIr[59] = 16;
  out.mIr[60] = 19;
  out.mIr[61] = 22;
  out.mIr[62] = 25;
  out.mIr[63] = 28;
  out.mIr[64] = 20;
  out.mIr[65] = 23;
  out.mIr[66] = 23;
  out.mIr[67] = 21;
  out.mIr[68] = 24;
  out.mIr[69] = 24;
  out.mIr[70] = 22;
  out.mIr[71] = 25;
  out.mIr[72] = 25;
  out.mIr[73] = 20;
  out.mIr[74] = 23;
  out.mIr[75] = 21;
  out.mIr[76] = 24;
  out.mIr[77] = 22;
  out.mIr[78] = 25;
  (void)LC;
  (void)t2;
  return 0;
}
