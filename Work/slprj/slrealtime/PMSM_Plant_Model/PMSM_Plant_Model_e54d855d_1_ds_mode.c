/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/Solver_Configuration'.
 */

#include "ne_ds.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_mode.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_sys_struct.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_externals.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T PMSM_Plant_Model_e54d855d_1_ds_mode(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t5, NeDsMethodOutput *t6)
{
  PmIntVector out;
  real_T U_idx_0;
  real_T U_idx_10;
  real_T U_idx_2;
  real_T U_idx_3;
  real_T U_idx_4;
  real_T U_idx_5;
  real_T U_idx_6;
  real_T U_idx_7;
  real_T U_idx_8;
  real_T U_idx_9;
  real_T X_idx_0;
  real_T X_idx_1;
  real_T intrm_sf_mf_14;
  real_T intrm_sf_mf_15;
  real_T intrm_sf_mf_16;
  int32_T t3_idx_0;
  int32_T t3_idx_1;
  int32_T t3_idx_8;
  boolean_T t0;
  boolean_T t1;
  boolean_T t2;
  (void)LC;
  U_idx_0 = t5->mU.mX[0];
  U_idx_2 = t5->mU.mX[2];
  U_idx_3 = t5->mU.mX[3];
  U_idx_4 = t5->mU.mX[4];
  U_idx_5 = t5->mU.mX[5];
  U_idx_6 = t5->mU.mX[6];
  U_idx_7 = t5->mU.mX[7];
  U_idx_8 = t5->mU.mX[8];
  U_idx_9 = t5->mU.mX[9];
  U_idx_10 = t5->mU.mX[10];
  X_idx_0 = t5->mX.mX[0];
  X_idx_1 = t5->mX.mX[1];
  out = t6->mMODE;
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
    U_idx_4 = 1.0;
  } else {
    U_idx_4 = U_idx_5 <= 0.0 ? 0.0 : U_idx_5;
  }

  if (U_idx_6 >= 1.0) {
    U_idx_3 = 1.0;
  } else {
    U_idx_3 = U_idx_6 <= 0.0 ? 0.0 : U_idx_6;
  }

  if (U_idx_7 >= 1.0) {
    U_idx_2 = 1.0;
  } else {
    U_idx_2 = U_idx_7 <= 0.0 ? 0.0 : U_idx_7;
  }

  if (U_idx_3 > 0.0) {
    t0 = true;
  } else {
    t0 = (U_idx_2 > 0.0);
  }

  if (intrm_sf_mf_14 > 0.0) {
    t1 = true;
  } else {
    t1 = (intrm_sf_mf_15 > 0.0);
  }

  if (intrm_sf_mf_16 > 0.0) {
    t2 = true;
  } else {
    t2 = (U_idx_4 > 0.0);
  }

  t3_idx_0 = (int32_T)floor(X_idx_1 / 6.2831853071795862);
  t3_idx_1 = (int32_T)(fabs(X_idx_1 / 6.2831853071795862) > 2.147483647E+9);
  t3_idx_8 = (int32_T)(fabs(X_idx_0) <= 0.0001);
  out.mX[0] = t3_idx_0;
  out.mX[1] = t3_idx_1;
  out.mX[2] = (int32_T)(U_idx_3 + U_idx_2 == 2.0);
  out.mX[3] = (int32_T)t0;
  out.mX[4] = (int32_T)(U_idx_8 > 0.0);
  out.mX[5] = (int32_T)(U_idx_9 > 0.0);
  out.mX[6] = (int32_T)(U_idx_10 > 0.0);
  out.mX[7] = (int32_T)(U_idx_0 <= 0.0);
  out.mX[8] = t3_idx_8;
  out.mX[9] = (int32_T)(X_idx_0 > 0.0);
  out.mX[10] = (int32_T)(X_idx_0 >= 0.0);
  out.mX[11] = (int32_T)(intrm_sf_mf_14 + intrm_sf_mf_15 == 2.0);
  out.mX[12] = (int32_T)t1;
  out.mX[13] = (int32_T)(intrm_sf_mf_16 + U_idx_4 == 2.0);
  out.mX[14] = (int32_T)t2;
  (void)LC;
  (void)t6;
  return 0;
}
