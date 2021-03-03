/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/Solver_Configuration'.
 */

#include "ne_ds.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_assert.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_sys_struct.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_externals.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T PMSM_Plant_Model_e54d855d_1_ds_assert(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmIntVector out;
  real_T U_idx_2;
  real_T U_idx_3;
  real_T U_idx_4;
  real_T U_idx_5;
  real_T U_idx_6;
  real_T U_idx_7;
  real_T intrm_sf_mf_14;
  real_T intrm_sf_mf_15;
  real_T intrm_sf_mf_16;
  real_T intrm_sf_mf_17;
  real_T intrm_sf_mf_18;
  real_T intrm_sf_mf_19;
  boolean_T intrm_sf_mf_20;
  (void)LC;
  U_idx_2 = t1->mU.mX[2];
  U_idx_3 = t1->mU.mX[3];
  U_idx_4 = t1->mU.mX[4];
  U_idx_5 = t1->mU.mX[5];
  U_idx_6 = t1->mU.mX[6];
  U_idx_7 = t1->mU.mX[7];
  out = t2->mASSERT;
  if (U_idx_2 >= 1.0) {
    intrm_sf_mf_14 = 1.0;
  } else {
    intrm_sf_mf_14 = U_idx_2 <= 0.0 ? 0.0 : U_idx_2;
  }

  if (U_idx_3 >= 1.0) {
    intrm_sf_mf_15 = 1.0;
  } else {
    intrm_sf_mf_15 = U_idx_3 <= 0.0 ? 0.0 : U_idx_3;
  }

  if (U_idx_4 >= 1.0) {
    intrm_sf_mf_16 = 1.0;
  } else {
    intrm_sf_mf_16 = U_idx_4 <= 0.0 ? 0.0 : U_idx_4;
  }

  if (U_idx_5 >= 1.0) {
    intrm_sf_mf_17 = 1.0;
  } else {
    intrm_sf_mf_17 = U_idx_5 <= 0.0 ? 0.0 : U_idx_5;
  }

  if (U_idx_6 >= 1.0) {
    intrm_sf_mf_18 = 1.0;
  } else {
    intrm_sf_mf_18 = U_idx_6 <= 0.0 ? 0.0 : U_idx_6;
  }

  if (U_idx_7 >= 1.0) {
    intrm_sf_mf_19 = 1.0;
  } else {
    intrm_sf_mf_19 = U_idx_7 <= 0.0 ? 0.0 : U_idx_7;
  }

  intrm_sf_mf_20 = ((fabs(intrm_sf_mf_14 - U_idx_2) > 0.001) || (fabs
    (intrm_sf_mf_15 - U_idx_3) > 0.001) || (fabs(intrm_sf_mf_16 - U_idx_4) >
    0.001) || (fabs(intrm_sf_mf_17 - U_idx_5) > 0.001) || (fabs(intrm_sf_mf_18 -
    U_idx_6) > 0.001) || (fabs(intrm_sf_mf_19 - U_idx_7) > 0.001));
  out.mX[0] = (int32_T)!intrm_sf_mf_20;
  out.mX[1] = 1;
  out.mX[2] = 1;
  out.mX[3] = 1;
  out.mX[4] = 1;
  out.mX[5] = 1;
  out.mX[6] = 1;
  out.mX[7] = 1;
  out.mX[8] = 1;
  out.mX[9] = 1;
  out.mX[10] = 1;
  out.mX[11] = 1;
  out.mX[12] = 1;
  out.mX[13] = 1;
  out.mX[14] = 1;
  out.mX[15] = 1;
  (void)LC;
  (void)t2;
  return 0;
}
