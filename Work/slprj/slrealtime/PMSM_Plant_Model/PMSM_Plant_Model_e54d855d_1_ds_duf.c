/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/Solver_Configuration'.
 */

#include "ne_ds.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_duf.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_sys_struct.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_externals.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T PMSM_Plant_Model_e54d855d_1_ds_duf(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t10, NeDsMethodOutput *t11)
{
  PmRealVector out;
  real_T U_idx_2;
  real_T U_idx_3;
  real_T U_idx_4;
  real_T U_idx_5;
  real_T U_idx_6;
  real_T U_idx_7;
  real_T X_idx_10;
  real_T X_idx_14;
  real_T X_idx_15;
  real_T X_idx_20;
  real_T X_idx_22;
  real_T X_idx_24;
  real_T X_idx_26;
  real_T X_idx_27;
  real_T X_idx_28;
  real_T intermediate_der34;
  real_T t2;
  real_T t3;
  real_T t4;
  real_T t5;
  int32_T M_idx_11;
  int32_T M_idx_12;
  int32_T M_idx_13;
  int32_T M_idx_14;
  int32_T M_idx_2;
  int32_T M_idx_3;
  (void)LC;
  M_idx_2 = t10->mM.mX[2];
  M_idx_3 = t10->mM.mX[3];
  M_idx_11 = t10->mM.mX[11];
  M_idx_12 = t10->mM.mX[12];
  M_idx_13 = t10->mM.mX[13];
  M_idx_14 = t10->mM.mX[14];
  U_idx_2 = t10->mU.mX[2];
  U_idx_3 = t10->mU.mX[3];
  U_idx_4 = t10->mU.mX[4];
  U_idx_5 = t10->mU.mX[5];
  U_idx_6 = t10->mU.mX[6];
  U_idx_7 = t10->mU.mX[7];
  X_idx_10 = t10->mX.mX[10];
  X_idx_14 = t10->mX.mX[14];
  X_idx_15 = t10->mX.mX[15];
  X_idx_20 = t10->mX.mX[20];
  X_idx_22 = t10->mX.mX[22];
  X_idx_24 = t10->mX.mX[24];
  X_idx_26 = t10->mX.mX[26];
  X_idx_27 = t10->mX.mX[27];
  X_idx_28 = t10->mX.mX[28];
  out = t11->mDUF;
  t3 = (X_idx_10 * 1.0010000000000002E-9 + -X_idx_14) + -X_idx_15;
  if (U_idx_2 >= 1.0) {
    t2 = 0.0;
  } else {
    t2 = (real_T)!(U_idx_2 <= 0.0);
  }

  if (U_idx_3 >= 1.0) {
    t4 = 0.0;
  } else {
    t4 = (real_T)!(U_idx_3 <= 0.0);
  }

  if (U_idx_4 >= 1.0) {
    t5 = 0.0;
  } else {
    t5 = (real_T)!(U_idx_4 <= 0.0);
  }

  if (U_idx_5 >= 1.0) {
    intermediate_der34 = 0.0;
  } else {
    intermediate_der34 = (real_T)!(U_idx_5 <= 0.0);
  }

  if (U_idx_6 >= 1.0) {
    U_idx_5 = 0.0;
  } else {
    U_idx_5 = (real_T)!(U_idx_6 <= 0.0);
  }

  if (U_idx_7 >= 1.0) {
    U_idx_2 = 0.0;
  } else {
    U_idx_2 = (real_T)!(U_idx_7 <= 0.0);
  }

  if (M_idx_11 != 0) {
    U_idx_3 = 0.0;
  } else if (M_idx_12 != 0) {
    U_idx_3 = -((((-t3 - X_idx_20) + X_idx_26) * 0.001 + 24.0) * t2);
  } else {
    U_idx_3 = 0.0;
  }

  if (M_idx_11 != 0) {
    U_idx_4 = 0.0;
  } else {
    U_idx_4 = -(((t3 + X_idx_20) - X_idx_26) * t2);
  }

  if (M_idx_11 != 0) {
    t2 = 0.0;
  } else if (M_idx_12 != 0) {
    t2 = -(((-t3 + X_idx_26) - X_idx_20) * t4 * 0.001);
  } else {
    t2 = 0.0;
  }

  if (M_idx_13 != 0) {
    t3 = 0.0;
  } else if (M_idx_14 != 0) {
    t3 = -((((-X_idx_14 - X_idx_22) + X_idx_27) * 0.001 + 24.0) * t5);
  } else {
    t3 = 0.0;
  }

  if (M_idx_13 != 0) {
    t4 = 0.0;
  } else {
    t4 = -(((X_idx_14 + X_idx_22) - X_idx_27) * t5);
  }

  if (M_idx_13 != 0) {
    t5 = 0.0;
  } else if (M_idx_14 != 0) {
    t5 = -(((-X_idx_14 + X_idx_27) - X_idx_22) * intermediate_der34 * 0.001);
  } else {
    t5 = 0.0;
  }

  if (M_idx_2 != 0) {
    intermediate_der34 = 0.0;
  } else if (M_idx_3 != 0) {
    intermediate_der34 = -((((-X_idx_15 - X_idx_24) + X_idx_28) * 0.001 + 24.0) *
      U_idx_5);
  } else {
    intermediate_der34 = 0.0;
  }

  if (M_idx_2 != 0) {
    X_idx_10 = 0.0;
  } else {
    X_idx_10 = -(((X_idx_15 + X_idx_24) - X_idx_28) * U_idx_5);
  }

  if (M_idx_2 != 0) {
    U_idx_5 = 0.0;
  } else if (M_idx_3 != 0) {
    U_idx_5 = -(((-X_idx_15 + X_idx_28) - X_idx_24) * U_idx_2 * 0.001);
  } else {
    U_idx_5 = 0.0;
  }

  out.mX[0] = U_idx_3;
  out.mX[1] = U_idx_4;
  out.mX[2] = t2;
  out.mX[3] = t3;
  out.mX[4] = t4;
  out.mX[5] = t5;
  out.mX[6] = intermediate_der34;
  out.mX[7] = X_idx_10;
  out.mX[8] = U_idx_5;
  (void)LC;
  (void)t11;
  return 0;
}
