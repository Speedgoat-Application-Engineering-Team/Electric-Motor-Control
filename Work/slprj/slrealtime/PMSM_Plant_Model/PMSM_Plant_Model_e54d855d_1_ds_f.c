/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/Solver_Configuration'.
 */

#include "ne_ds.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_f.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_sys_struct.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_externals.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T PMSM_Plant_Model_e54d855d_1_ds_f(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t50, NeDsMethodOutput *t51)
{
  PmRealVector out;
  real_T PMSM_Physical_Model_PMSM_Simscape_Model_PWM_Peripheral_And_In13;
  real_T PMSM_Physical_Model_PMSM_Simscape_Model_PWM_Peripheral_And_In15;
  real_T U_idx_2;
  real_T U_idx_3;
  real_T U_idx_4;
  real_T U_idx_5;
  real_T U_idx_6;
  real_T U_idx_7;
  real_T X_idx_0;
  real_T X_idx_10;
  real_T X_idx_11;
  real_T X_idx_12;
  real_T X_idx_13;
  real_T X_idx_14;
  real_T X_idx_15;
  real_T X_idx_17;
  real_T X_idx_18;
  real_T X_idx_19;
  real_T X_idx_2;
  real_T X_idx_20;
  real_T X_idx_21;
  real_T X_idx_22;
  real_T X_idx_23;
  real_T X_idx_24;
  real_T X_idx_25;
  real_T X_idx_26;
  real_T X_idx_27;
  real_T X_idx_28;
  real_T X_idx_3;
  real_T X_idx_4;
  real_T X_idx_5;
  real_T X_idx_6;
  real_T X_idx_7;
  real_T intrm_sf_mf_11;
  real_T intrm_sf_mf_12;
  real_T t10;
  real_T t11;
  real_T t12;
  real_T t14;
  real_T t15;
  real_T t26;
  real_T t27;
  real_T t29;
  real_T t30;
  real_T t31;
  real_T t32;
  real_T t33;
  real_T t35;
  real_T t36;
  real_T t38;
  real_T t39;
  real_T t48;
  real_T t8;
  real_T t9;
  int32_T M_idx_10;
  int32_T M_idx_11;
  int32_T M_idx_12;
  int32_T M_idx_13;
  int32_T M_idx_14;
  int32_T M_idx_2;
  int32_T M_idx_3;
  int32_T M_idx_4;
  int32_T M_idx_5;
  int32_T M_idx_6;
  int32_T M_idx_7;
  int32_T M_idx_8;
  int32_T M_idx_9;
  (void)LC;
  M_idx_2 = t50->mM.mX[2];
  M_idx_3 = t50->mM.mX[3];
  M_idx_4 = t50->mM.mX[4];
  M_idx_5 = t50->mM.mX[5];
  M_idx_6 = t50->mM.mX[6];
  M_idx_7 = t50->mM.mX[7];
  M_idx_8 = t50->mM.mX[8];
  M_idx_9 = t50->mM.mX[9];
  M_idx_10 = t50->mM.mX[10];
  M_idx_11 = t50->mM.mX[11];
  M_idx_12 = t50->mM.mX[12];
  M_idx_13 = t50->mM.mX[13];
  M_idx_14 = t50->mM.mX[14];
  U_idx_2 = t50->mU.mX[2];
  U_idx_3 = t50->mU.mX[3];
  U_idx_4 = t50->mU.mX[4];
  U_idx_5 = t50->mU.mX[5];
  U_idx_6 = t50->mU.mX[6];
  U_idx_7 = t50->mU.mX[7];
  X_idx_0 = t50->mX.mX[0];
  X_idx_2 = t50->mX.mX[2];
  X_idx_3 = t50->mX.mX[3];
  X_idx_4 = t50->mX.mX[4];
  X_idx_5 = t50->mX.mX[5];
  X_idx_6 = t50->mX.mX[6];
  X_idx_7 = t50->mX.mX[7];
  X_idx_10 = t50->mX.mX[10];
  X_idx_11 = t50->mX.mX[11];
  X_idx_12 = t50->mX.mX[12];
  X_idx_13 = t50->mX.mX[13];
  X_idx_14 = t50->mX.mX[14];
  X_idx_15 = t50->mX.mX[15];
  X_idx_17 = t50->mX.mX[17];
  X_idx_18 = t50->mX.mX[18];
  X_idx_19 = t50->mX.mX[19];
  X_idx_20 = t50->mX.mX[20];
  X_idx_21 = t50->mX.mX[21];
  X_idx_22 = t50->mX.mX[22];
  X_idx_23 = t50->mX.mX[23];
  X_idx_24 = t50->mX.mX[24];
  X_idx_25 = t50->mX.mX[25];
  X_idx_26 = t50->mX.mX[26];
  X_idx_27 = t50->mX.mX[27];
  X_idx_28 = t50->mX.mX[28];
  out = t51->mF;
  t14 = (X_idx_10 * 1.0010000000000002E-9 + -X_idx_14) + -X_idx_15;
  t48 = (-X_idx_17 + X_idx_10) + X_idx_11;
  PMSM_Physical_Model_PMSM_Simscape_Model_PWM_Peripheral_And_In13 = (-X_idx_18 +
    X_idx_10) + X_idx_12;
  PMSM_Physical_Model_PMSM_Simscape_Model_PWM_Peripheral_And_In15 = (-X_idx_19 +
    X_idx_10) + X_idx_13;
  X_idx_2 *= 7.0;
  intrm_sf_mf_11 = X_idx_5 * 0.000279 + 0.0075;
  intrm_sf_mf_12 = X_idx_6 * 0.000279;
  if (U_idx_2 >= 1.0) {
    t11 = 1.0;
  } else {
    t11 = U_idx_2 <= 0.0 ? 0.0 : U_idx_2;
  }

  if (U_idx_3 >= 1.0) {
    t8 = 1.0;
  } else {
    t8 = U_idx_3 <= 0.0 ? 0.0 : U_idx_3;
  }

  if (U_idx_4 >= 1.0) {
    t12 = 1.0;
  } else {
    t12 = U_idx_4 <= 0.0 ? 0.0 : U_idx_4;
  }

  if (U_idx_5 >= 1.0) {
    t9 = 1.0;
  } else {
    t9 = U_idx_5 <= 0.0 ? 0.0 : U_idx_5;
  }

  if (U_idx_6 >= 1.0) {
    t15 = 1.0;
  } else {
    t15 = U_idx_6 <= 0.0 ? 0.0 : U_idx_6;
  }

  if (U_idx_7 >= 1.0) {
    t10 = 1.0;
  } else {
    t10 = U_idx_7 <= 0.0 ? 0.0 : U_idx_7;
  }

  t26 = cos(X_idx_2) * 0.66666666666666663;
  t27 = cos(X_idx_2 + -2.0943951023931953) * 0.66666666666666663;
  X_idx_10 = cos(X_idx_2 + 2.0943951023931953) * 0.66666666666666663;
  t29 = -sin(X_idx_2) * 0.66666666666666663;
  t30 = -sin(X_idx_2 + -2.0943951023931953) * 0.66666666666666663;
  t31 = -sin(X_idx_2 + 2.0943951023931953) * 0.66666666666666663;
  t32 = cos(X_idx_2);
  t33 = -sin(X_idx_2);
  t35 = cos(X_idx_2 + -2.0943951023931953);
  t36 = -sin(X_idx_2 + -2.0943951023931953);
  t38 = cos(X_idx_2 + 2.0943951023931953);
  t39 = -sin(X_idx_2 + 2.0943951023931953);
  U_idx_2 = (t26 * X_idx_11 + t27 * X_idx_12) + X_idx_10 * X_idx_13;
  if (M_idx_7 != 0) {
  } else if (M_idx_8 != 0) {
    X_idx_7 -= X_idx_0 * 24.995002599166877 / 0.0001;
  } else if (M_idx_9 != 0) {
    X_idx_7 -= (X_idx_0 * 0.001 + exp(X_idx_0 * -10.0) * 5.0) + 20.0;
  } else {
    X_idx_7 -= (X_idx_0 * 0.001 - 20.0) - exp(((real_T)(M_idx_10 != 0) * 2.0 -
      1.0) * X_idx_0 * -10.0) * 5.0;
  }

  if (X_idx_17 > 24.8) {
    U_idx_3 = ((X_idx_17 - 24.0) - 0.799999992) * 1000.0;
  } else {
    U_idx_3 = (X_idx_17 - 24.0) * 1.0E-5;
  }

  if (X_idx_18 > 24.8) {
    U_idx_4 = ((X_idx_18 - 24.0) - 0.799999992) * 1000.0;
  } else {
    U_idx_4 = (X_idx_18 - 24.0) * 1.0E-5;
  }

  if (X_idx_19 > 24.8) {
    U_idx_5 = ((X_idx_19 - 24.0) - 0.799999992) * 1000.0;
  } else {
    U_idx_5 = (X_idx_19 - 24.0) * 1.0E-5;
  }

  if (0.0 > X_idx_17 + 0.8) {
    U_idx_6 = (-X_idx_17 - 0.799999992) * 1000.0;
  } else {
    U_idx_6 = -X_idx_17 * 1.0E-5;
  }

  if (0.0 > X_idx_18 + 0.8) {
    U_idx_7 = (-X_idx_18 - 0.799999992) * 1000.0;
  } else {
    U_idx_7 = -X_idx_18 * 1.0E-5;
  }

  if (0.0 > X_idx_19 + 0.8) {
    t26 = (-X_idx_19 - 0.799999992) * 1000.0;
  } else {
    t26 = -X_idx_19 * 1.0E-5;
  }

  if (M_idx_11 != 0) {
    t27 = X_idx_17 * 2.0 - (((-t14 - X_idx_20) + X_idx_26) * 0.001 + 24.0);
  } else if (M_idx_12 != 0) {
    t27 = X_idx_17 - ((((-t14 - X_idx_20) + X_idx_26) * 0.001 + 24.0) * t11 + ((
      -t14 + X_idx_26) - X_idx_20) * t8 * 0.001);
  } else {
    t27 = -t14 - (X_idx_20 - X_idx_26);
  }

  if (M_idx_13 != 0) {
    t8 = X_idx_18 * 2.0 - (((-X_idx_14 - X_idx_22) + X_idx_27) * 0.001 + 24.0);
  } else if (M_idx_14 != 0) {
    t8 = X_idx_18 - ((((-X_idx_14 - X_idx_22) + X_idx_27) * 0.001 + 24.0) * t12
                     + ((-X_idx_14 + X_idx_27) - X_idx_22) * t9 * 0.001);
  } else {
    t8 = -X_idx_14 - (X_idx_22 - X_idx_27);
  }

  if (M_idx_2 != 0) {
    t9 = X_idx_19 * 2.0 - (((-X_idx_15 - X_idx_24) + X_idx_28) * 0.001 + 24.0);
  } else if (M_idx_3 != 0) {
    t9 = X_idx_19 - ((((-X_idx_15 - X_idx_24) + X_idx_28) * 0.001 + 24.0) * t15
                     + ((-X_idx_15 + X_idx_28) - X_idx_24) * t10 * 0.001);
  } else {
    t9 = -X_idx_15 - (X_idx_24 - X_idx_28);
  }

  if (M_idx_11 != 0) {
    t10 = X_idx_21 - (24.0 - X_idx_17) / 0.001;
  } else {
    t10 = X_idx_21 - ((t14 + X_idx_20) - X_idx_26) * t11;
  }

  if (M_idx_13 != 0) {
    t11 = X_idx_23 - (24.0 - X_idx_18) / 0.001;
  } else {
    t11 = X_idx_23 - ((X_idx_14 + X_idx_22) - X_idx_27) * t12;
  }

  if (M_idx_2 != 0) {
    t12 = X_idx_25 - (24.0 - X_idx_19) / 0.001;
  } else {
    t12 = X_idx_25 - ((X_idx_15 + X_idx_24) - X_idx_28) * t15;
  }

  if (M_idx_4 != 0) {
    X_idx_2 = t48 - t14 * -0.0001;
  } else {
    X_idx_2 = t48 - -t14 / 1.0E-5;
  }

  if (M_idx_5 != 0) {
    t14 = PMSM_Physical_Model_PMSM_Simscape_Model_PWM_Peripheral_And_In13 -
      X_idx_14 * -0.0001;
  } else {
    t14 = PMSM_Physical_Model_PMSM_Simscape_Model_PWM_Peripheral_And_In13 -
      -X_idx_14 / 1.0E-5;
  }

  if (M_idx_6 != 0) {
    t15 = PMSM_Physical_Model_PMSM_Simscape_Model_PWM_Peripheral_And_In15 -
      X_idx_15 * -0.0001;
  } else {
    t15 = PMSM_Physical_Model_PMSM_Simscape_Model_PWM_Peripheral_And_In15 -
      -X_idx_15 / 1.0E-5;
  }

  X_idx_10 = -(X_idx_0 / 0.085733868791744147 * exp(-(X_idx_0 /
    0.085733868791744147 * (X_idx_0 / 0.085733868791744147))) *
               0.2308327541781153 + tanh(X_idx_0 / 0.0060623000000000005) *
               0.001);
  out.mX[0] = -0.0;
  out.mX[1] = -0.0;
  out.mX[2] = -0.0;
  out.mX[3] = -((U_idx_2 - (-(X_idx_3 * intrm_sf_mf_12 * 7.0))) /
                0.66666666666666663);
  out.mX[4] = -((((t29 * X_idx_11 + t30 * X_idx_12) + t31 * X_idx_13) - X_idx_3 *
                 intrm_sf_mf_11 * 7.0) / 0.57735026918962573);
  out.mX[5] = -0.0;
  out.mX[6] = -0.0;
  out.mX[7] = X_idx_7;
  out.mX[8] = 0.0;
  out.mX[9] = -((t32 * X_idx_5 + t33 * X_idx_6) + X_idx_4);
  out.mX[10] = -((t35 * X_idx_5 + t36 * X_idx_6) + X_idx_4);
  out.mX[11] = -((t38 * X_idx_5 + t39 * X_idx_6) + X_idx_4);
  out.mX[12] = -((X_idx_6 * intrm_sf_mf_11 - X_idx_5 * intrm_sf_mf_12) * 10.5);
  out.mX[13] = X_idx_10;
  out.mX[14] = -U_idx_3;
  out.mX[15] = -U_idx_4;
  out.mX[16] = -U_idx_5;
  out.mX[17] = -U_idx_6;
  out.mX[18] = -U_idx_7;
  out.mX[19] = -t26;
  out.mX[20] = t27;
  out.mX[21] = t8;
  out.mX[22] = t9;
  out.mX[23] = t10;
  out.mX[24] = t11;
  out.mX[25] = t12;
  out.mX[26] = X_idx_2 / 99999.999999999985;
  out.mX[27] = t14 / 99999.999999999985;
  out.mX[28] = t15 / 99999.999999999985;
  (void)LC;
  (void)t51;
  return 0;
}
