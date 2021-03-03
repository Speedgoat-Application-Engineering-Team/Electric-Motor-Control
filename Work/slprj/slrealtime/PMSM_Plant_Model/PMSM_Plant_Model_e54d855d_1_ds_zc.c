/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/Solver_Configuration'.
 */

#include "ne_ds.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_zc.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_sys_struct.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_externals.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T PMSM_Plant_Model_e54d855d_1_ds_zc(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t12, NeDsMethodOutput *t13)
{
  PmRealVector out;
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
  real_T t10;
  real_T t8;
  real_T t9;
  int32_T M_idx_0;
  int32_T M_idx_11;
  int32_T M_idx_13;
  int32_T M_idx_2;
  int32_T M_idx_7;
  int32_T M_idx_8;
  int32_T M_idx_9;
  boolean_T t0;
  boolean_T t1;
  boolean_T t2;
  (void)LC;
  M_idx_0 = t12->mM.mX[0];
  M_idx_2 = t12->mM.mX[2];
  M_idx_7 = t12->mM.mX[7];
  M_idx_8 = t12->mM.mX[8];
  M_idx_9 = t12->mM.mX[9];
  M_idx_11 = t12->mM.mX[11];
  M_idx_13 = t12->mM.mX[13];
  U_idx_0 = t12->mU.mX[0];
  U_idx_2 = t12->mU.mX[2];
  U_idx_3 = t12->mU.mX[3];
  U_idx_4 = t12->mU.mX[4];
  U_idx_5 = t12->mU.mX[5];
  U_idx_6 = t12->mU.mX[6];
  U_idx_7 = t12->mU.mX[7];
  U_idx_8 = t12->mU.mX[8];
  U_idx_9 = t12->mU.mX[9];
  U_idx_10 = t12->mU.mX[10];
  X_idx_0 = t12->mX.mX[0];
  X_idx_1 = t12->mX.mX[1];
  out = t13->mZC;
  if (U_idx_2 >= 1.0) {
    t8 = 1.0;
  } else {
    t8 = U_idx_2 <= 0.0 ? 0.0 : U_idx_2;
  }

  if (U_idx_3 >= 1.0) {
    t9 = 1.0;
  } else {
    t9 = U_idx_3 <= 0.0 ? 0.0 : U_idx_3;
  }

  if (U_idx_4 >= 1.0) {
    t10 = 1.0;
  } else {
    t10 = U_idx_4 <= 0.0 ? 0.0 : U_idx_4;
  }

  if (U_idx_5 >= 1.0) {
    U_idx_3 = 1.0;
  } else {
    U_idx_3 = U_idx_5 <= 0.0 ? 0.0 : U_idx_5;
  }

  if (U_idx_6 >= 1.0) {
    U_idx_4 = 1.0;
  } else {
    U_idx_4 = U_idx_6 <= 0.0 ? 0.0 : U_idx_6;
  }

  if (U_idx_7 >= 1.0) {
    U_idx_2 = 1.0;
  } else {
    U_idx_2 = U_idx_7 <= 0.0 ? 0.0 : U_idx_7;
  }

  if (M_idx_11 == 0) {
    if (t8 > 0.0) {
      t0 = true;
    } else {
      t0 = (t9 > 0.0);
    }
  } else {
    t0 = false;
  }

  if (M_idx_13 == 0) {
    if (t10 > 0.0) {
      t1 = true;
    } else {
      t1 = (U_idx_3 > 0.0);
    }
  } else {
    t1 = false;
  }

  if (M_idx_2 == 0) {
    if (U_idx_4 > 0.0) {
      t2 = true;
    } else {
      t2 = (U_idx_2 > 0.0);
    }
  } else {
    t2 = false;
  }

  if (M_idx_7 == 0) {
    U_idx_5 = 0.0001 - fabs(X_idx_0);
  } else {
    U_idx_5 = 0.0;
  }

  U_idx_6 = (t8 + t9) - 2.0;
  U_idx_7 = 2.0 - (t8 + t9);
  t9 = (t10 + U_idx_3) - 2.0;
  t8 = 2.0 - (t10 + U_idx_3);
  U_idx_3 = t9 > t8 ? t8 : t9;
  t9 = (U_idx_4 + U_idx_2) - 2.0;
  t10 = 2.0 - (U_idx_4 + U_idx_2);
  U_idx_2 = fabs(X_idx_1 / 6.2831853071795862) - 2.147483647E+9;
  out.mX[0] = U_idx_6 > U_idx_7 ? U_idx_7 : U_idx_6;
  out.mX[1] = (real_T)t0;
  out.mX[2] = U_idx_3;
  out.mX[3] = (real_T)t1;
  out.mX[4] = t9 > t10 ? t10 : t9;
  out.mX[5] = (real_T)t2;
  out.mX[6] = -U_idx_0;
  out.mX[7] = U_idx_5;
  out.mX[8] = (M_idx_7 == 0) && (M_idx_8 == 0) ? X_idx_0 : 0.0;
  out.mX[9] = (M_idx_7 == 0) && (M_idx_8 == 0) && (M_idx_9 == 0) ? X_idx_0 : 0.0;
  out.mX[10] = X_idx_1 / 6.2831853071795862 - ((real_T)M_idx_0 + 1.0);
  out.mX[11] = U_idx_2;
  out.mX[12] = (real_T)M_idx_0 - X_idx_1 / 6.2831853071795862;
  out.mX[13] = U_idx_8;
  out.mX[14] = U_idx_9;
  out.mX[15] = U_idx_10;
  (void)LC;
  (void)t13;
  return 0;
}
