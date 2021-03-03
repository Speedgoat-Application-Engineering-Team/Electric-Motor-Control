/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/Solver_Configuration'.
 */

#include "ne_ds.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_dxf.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_sys_struct.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_externals.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T PMSM_Plant_Model_e54d855d_1_ds_dxf(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t150, NeDsMethodOutput *t151)
{
  PmRealVector out;
  real_T t24[79];
  real_T t38[6];
  real_T t39[6];
  real_T t29[5];
  real_T t32[5];
  real_T t33[5];
  real_T t34[5];
  real_T t40[5];
  real_T t41[5];
  real_T t42[5];
  real_T U_idx_2;
  real_T U_idx_3;
  real_T U_idx_4;
  real_T U_idx_5;
  real_T U_idx_6;
  real_T U_idx_7;
  real_T X_idx_0;
  real_T X_idx_11;
  real_T X_idx_12;
  real_T X_idx_13;
  real_T X_idx_17;
  real_T X_idx_18;
  real_T X_idx_19;
  real_T X_idx_2;
  real_T X_idx_3;
  real_T X_idx_4;
  real_T X_idx_5;
  real_T X_idx_6;
  real_T intermediate_der44;
  real_T intrm_sf_mf_14;
  real_T intrm_sf_mf_18;
  real_T intrm_sf_mf_19;
  real_T t104;
  real_T t106;
  real_T t107;
  real_T t108;
  real_T t109;
  real_T t119;
  real_T t120;
  real_T t122;
  real_T t123;
  real_T t125;
  real_T t126;
  real_T t135;
  real_T t136;
  real_T t14;
  real_T t141;
  real_T t142;
  real_T t149;
  real_T t15;
  real_T t16;
  real_T t17;
  real_T t18;
  real_T t19;
  real_T t20;
  real_T t21;
  real_T t22;
  real_T t4;
  real_T t87;
  real_T t88;
  real_T t89;
  real_T t90;
  real_T t91;
  real_T t92;
  real_T t93;
  real_T t95;
  real_T t96;
  real_T t98;
  real_T t99;
  size_t t63;
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
  M_idx_2 = t150->mM.mX[2];
  M_idx_3 = t150->mM.mX[3];
  M_idx_4 = t150->mM.mX[4];
  M_idx_5 = t150->mM.mX[5];
  M_idx_6 = t150->mM.mX[6];
  M_idx_7 = t150->mM.mX[7];
  M_idx_8 = t150->mM.mX[8];
  M_idx_9 = t150->mM.mX[9];
  M_idx_10 = t150->mM.mX[10];
  M_idx_11 = t150->mM.mX[11];
  M_idx_12 = t150->mM.mX[12];
  M_idx_13 = t150->mM.mX[13];
  M_idx_14 = t150->mM.mX[14];
  U_idx_2 = t150->mU.mX[2];
  U_idx_3 = t150->mU.mX[3];
  U_idx_4 = t150->mU.mX[4];
  U_idx_5 = t150->mU.mX[5];
  U_idx_6 = t150->mU.mX[6];
  U_idx_7 = t150->mU.mX[7];
  X_idx_0 = t150->mX.mX[0];
  X_idx_2 = t150->mX.mX[2];
  X_idx_3 = t150->mX.mX[3];
  X_idx_4 = t150->mX.mX[4];
  X_idx_5 = t150->mX.mX[5];
  X_idx_6 = t150->mX.mX[6];
  X_idx_11 = t150->mX.mX[11];
  X_idx_12 = t150->mX.mX[12];
  X_idx_13 = t150->mX.mX[13];
  X_idx_17 = t150->mX.mX[17];
  X_idx_18 = t150->mX.mX[18];
  X_idx_19 = t150->mX.mX[19];
  out = t151->mDXF;
  t4 = X_idx_2 * 7.0;
  t135 = X_idx_5 * 0.000279 + 0.0075;
  t136 = X_idx_6 * 0.000279;
  if (U_idx_2 >= 1.0) {
    intrm_sf_mf_14 = 1.0;
  } else {
    intrm_sf_mf_14 = U_idx_2 <= 0.0 ? 0.0 : U_idx_2;
  }

  if (U_idx_3 >= 1.0) {
    t19 = 1.0;
  } else {
    t19 = U_idx_3 <= 0.0 ? 0.0 : U_idx_3;
  }

  if (U_idx_4 >= 1.0) {
    t149 = 1.0;
  } else {
    t149 = U_idx_4 <= 0.0 ? 0.0 : U_idx_4;
  }

  if (U_idx_5 >= 1.0) {
    t21 = 1.0;
  } else {
    t21 = U_idx_5 <= 0.0 ? 0.0 : U_idx_5;
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

  t142 = cos(t4) * 0.66666666666666663;
  t87 = cos(t4 + -2.0943951023931953) * 0.66666666666666663;
  t88 = cos(t4 + 2.0943951023931953) * 0.66666666666666663;
  t89 = -sin(t4) * 0.66666666666666663;
  t90 = -sin(t4 + -2.0943951023931953) * 0.66666666666666663;
  t91 = -sin(t4 + 2.0943951023931953) * 0.66666666666666663;
  t92 = cos(t4);
  t93 = -sin(t4);
  t95 = cos(t4 + -2.0943951023931953);
  t96 = -sin(t4 + -2.0943951023931953);
  t98 = cos(t4 + 2.0943951023931953);
  t99 = -sin(t4 + 2.0943951023931953);
  t104 = -sin(t4) * 7.0 * 0.66666666666666663;
  t141 = -sin(t4 + -2.0943951023931953) * 7.0 * 0.66666666666666663;
  t106 = -sin(t4 + 2.0943951023931953) * 7.0 * 0.66666666666666663;
  t107 = -(cos(t4) * 7.0) * 0.66666666666666663;
  t108 = -(cos(t4 + -2.0943951023931953) * 7.0) * 0.66666666666666663;
  t109 = -(cos(t4 + 2.0943951023931953) * 7.0) * 0.66666666666666663;
  t119 = -sin(t4) * 7.0;
  t120 = -(cos(t4) * 7.0);
  t122 = -sin(t4 + -2.0943951023931953) * 7.0;
  t123 = -(cos(t4 + -2.0943951023931953) * 7.0);
  t125 = -sin(t4 + 2.0943951023931953) * 7.0;
  t126 = -(cos(t4 + 2.0943951023931953) * 7.0);
  intermediate_der44 = (t104 * X_idx_11 + t141 * X_idx_12) + t106 * X_idx_13;
  U_idx_3 = (t107 * X_idx_11 + t108 * X_idx_12) + t109 * X_idx_13;
  if (M_idx_7 != 0) {
    U_idx_5 = 0.0;
  } else if (M_idx_8 != 0) {
    U_idx_5 = -249950.02599166878;
  } else if (M_idx_9 != 0) {
    U_idx_5 = -(0.001 + exp(X_idx_0 * -10.0) * -50.0);
  } else {
    U_idx_5 = -(0.001 - ((real_T)(M_idx_10 != 0) * 2.0 - 1.0) * exp(((real_T)
      (M_idx_10 != 0) * 2.0 - 1.0) * X_idx_0 * -10.0) * -50.0);
  }

  if (M_idx_11 != 0) {
    U_idx_4 = 1.0010000000000003E-12;
  } else if (M_idx_12 != 0) {
    U_idx_4 = -(1.0010000000000002E-9 * intrm_sf_mf_14 * -0.001 +
                1.0010000000000002E-9 * t19 * -0.001);
  } else {
    U_idx_4 = -1.0010000000000002E-9;
  }

  if (M_idx_11 != 0) {
    t104 = 0.0;
  } else {
    t104 = -(1.0010000000000002E-9 * intrm_sf_mf_14);
  }

  if (M_idx_4 != 0) {
    t141 = 1.0000000000001001;
  } else {
    t141 = 1.0001001;
  }

  if (M_idx_11 != 0) {
    t4 = -0.001;
  } else if (M_idx_12 != 0) {
    t4 = -(-intrm_sf_mf_14 * -0.001 + -t19 * -0.001);
  } else {
    t4 = 1.0;
  }

  if (M_idx_13 != 0) {
    t106 = 0.001;
  } else if (M_idx_14 != 0) {
    t106 = -(t149 * -0.001 + t21 * -0.001);
  } else {
    t106 = -1.0;
  }

  if (M_idx_11 != 0) {
    t107 = 0.0;
  } else {
    t107 = intrm_sf_mf_14;
  }

  if (M_idx_4 != 0) {
    t108 = -0.0001;
  } else {
    t108 = -99999.999999999985;
  }

  if (M_idx_11 != 0) {
    t109 = -0.001;
  } else if (M_idx_12 != 0) {
    t109 = -(-intrm_sf_mf_14 * -0.001 + -t19 * -0.001);
  } else {
    t109 = 1.0;
  }

  if (M_idx_2 != 0) {
    U_idx_6 = 0.001;
  } else if (M_idx_3 != 0) {
    U_idx_6 = -(intrm_sf_mf_18 * -0.001 + intrm_sf_mf_19 * -0.001);
  } else {
    U_idx_6 = -1.0;
  }

  if (M_idx_11 != 0) {
    U_idx_7 = 0.0;
  } else {
    U_idx_7 = intrm_sf_mf_14;
  }

  if (M_idx_4 != 0) {
    X_idx_11 = -0.0001;
  } else {
    X_idx_11 = -99999.999999999985;
  }

  if (M_idx_11 != 0) {
    X_idx_12 = 2.0;
  } else {
    X_idx_12 = (real_T)(M_idx_12 != 0);
  }

  if (M_idx_13 != 0) {
    X_idx_13 = 2.0;
  } else {
    X_idx_13 = (real_T)(M_idx_14 != 0);
  }

  if (M_idx_2 != 0) {
    t14 = 2.0;
  } else {
    t14 = (real_T)(M_idx_3 != 0);
  }

  if (M_idx_11 != 0) {
    t15 = 0.001;
  } else if (M_idx_12 != 0) {
    t15 = -(intrm_sf_mf_14 * -0.001 + t19 * -0.001);
  } else {
    t15 = -1.0;
  }

  if (M_idx_13 != 0) {
    t16 = 0.001;
  } else if (M_idx_14 != 0) {
    t16 = -(t149 * -0.001 + t21 * -0.001);
  } else {
    t16 = -1.0;
  }

  if (M_idx_2 != 0) {
    t17 = 0.001;
  } else if (M_idx_3 != 0) {
    t17 = -(intrm_sf_mf_18 * -0.001 + intrm_sf_mf_19 * -0.001);
  } else {
    t17 = -1.0;
  }

  if (M_idx_11 != 0) {
    t18 = -0.001;
  } else if (M_idx_12 != 0) {
    t18 = -(intrm_sf_mf_14 * 0.001 + t19 * 0.001);
  } else {
    t18 = 1.0;
  }

  if (M_idx_11 != 0) {
    t19 = 0.0;
  } else {
    t19 = intrm_sf_mf_14;
  }

  if (M_idx_13 != 0) {
    t20 = -0.001;
  } else if (M_idx_14 != 0) {
    t20 = -(t149 * 0.001 + t21 * 0.001);
  } else {
    t20 = 1.0;
  }

  if (M_idx_13 != 0) {
    t21 = 0.0;
  } else {
    t21 = t149;
  }

  if (M_idx_2 != 0) {
    t22 = -0.001;
  } else if (M_idx_3 != 0) {
    t22 = -(intrm_sf_mf_18 * 0.001 + intrm_sf_mf_19 * 0.001);
  } else {
    t22 = 1.0;
  }

  if (M_idx_2 != 0) {
    intrm_sf_mf_19 = 0.0;
  } else {
    intrm_sf_mf_19 = intrm_sf_mf_18;
  }

  X_idx_2 = cosh(X_idx_0 / 0.0060623000000000005) * cosh(X_idx_0 /
    0.0060623000000000005);
  U_idx_2 = -((exp(-(X_idx_0 / 0.085733868791744147 * (X_idx_0 /
    0.085733868791744147))) * 11.664001801074633 + -(X_idx_0 /
    0.085733868791744147 * 23.328003602149266) * (X_idx_0 / 0.085733868791744147)
               * exp(-(X_idx_0 / 0.085733868791744147 * (X_idx_0 /
    0.085733868791744147)))) * 0.2308327541781153 + 1.0 / (X_idx_2 == 0.0 ?
    1.0E-16 : X_idx_2) * 0.16495389538623953);
  t29[0ULL] = -(intermediate_der44 * 1.5);
  t29[1ULL] = -(U_idx_3 * 1.7320508075688774);
  t29[2ULL] = -((t119 * X_idx_5 + t120 * X_idx_6) + 0.0 * X_idx_4);
  t29[3ULL] = -((t122 * X_idx_5 + t123 * X_idx_6) + 0.0 * X_idx_4);
  t29[4ULL] = -((t125 * X_idx_5 + t126 * X_idx_6) + 0.0 * X_idx_4);
  t32[0ULL] = -(-(X_idx_3 * 0.000279 * 7.0) * 1.7320508075688774);
  t32[1ULL] = -t92;
  t32[2ULL] = -t95;
  t32[3ULL] = -t98;
  t32[4ULL] = -((X_idx_6 * 0.000279 - t136) * 10.5);
  t33[0ULL] = -(X_idx_3 * 0.000279 * 10.5);
  t33[1ULL] = -t93;
  t33[2ULL] = -t96;
  t33[3ULL] = -t99;
  t33[4ULL] = -((t135 - X_idx_5 * 0.000279) * 10.5);
  t34[0ULL] = U_idx_4;
  t34[1ULL] = t104;
  t34[2ULL] = t141 * 1.0E-5;
  t34[3ULL] = 1.0E-5;
  t34[4ULL] = 1.0E-5;
  X_idx_2 = 1.0E-5;
  t38[0ULL] = t4;
  t38[1ULL] = t106;
  t38[2ULL] = t107;
  t38[3ULL] = M_idx_13 != 0 ? 0.0 : -t149;
  t38[4ULL] = t108 * 1.0E-5;
  t38[5ULL] = (M_idx_5 != 0 ? 0.0001 : 99999.999999999985) * 1.0E-5;
  t39[0ULL] = t109;
  t39[1ULL] = U_idx_6;
  t39[2ULL] = U_idx_7;
  t39[3ULL] = M_idx_2 != 0 ? 0.0 : -intrm_sf_mf_18;
  t39[4ULL] = X_idx_11 * 1.0E-5;
  t39[5ULL] = (M_idx_6 != 0 ? 0.0001 : 99999.999999999985) * 1.0E-5;
  t40[0ULL] = -(X_idx_17 > 24.8 ? 1000.0 : 1.0E-5);
  t40[1ULL] = -(0.0 > X_idx_17 + 0.8 ? -1000.0 : -1.0E-5);
  t40[2ULL] = X_idx_12;
  t40[3ULL] = M_idx_11 != 0 ? 1000.0 : 0.0;
  t40[4ULL] = -1.0E-5;
  t41[0ULL] = -(X_idx_18 > 24.8 ? 1000.0 : 1.0E-5);
  t41[1ULL] = -(0.0 > X_idx_18 + 0.8 ? -1000.0 : -1.0E-5);
  t41[2ULL] = X_idx_13;
  t41[3ULL] = M_idx_13 != 0 ? 1000.0 : 0.0;
  t41[4ULL] = -1.0E-5;
  t42[0ULL] = -(X_idx_19 > 24.8 ? 1000.0 : 1.0E-5);
  t42[1ULL] = -(0.0 > X_idx_19 + 0.8 ? -1000.0 : -1.0E-5);
  t42[2ULL] = t14;
  t42[3ULL] = M_idx_2 != 0 ? 1000.0 : 0.0;
  t42[4ULL] = -1.0E-5;
  t24[0ULL] = U_idx_5;
  t24[1ULL] = U_idx_2;
  for (t63 = 0ULL; t63 < 5ULL; t63++) {
    t24[t63 + 2ULL] = t29[t63];
  }

  t24[7ULL] = -(t136 * 10.5);
  t24[8ULL] = -(-(t135 * 7.0) * 1.7320508075688774);
  t24[9ULL] = -1.0;
  t24[10ULL] = -1.0;
  t24[11ULL] = -1.0;
  for (t63 = 0ULL; t63 < 5ULL; t63++) {
    t24[t63 + 12ULL] = t32[t63];
  }

  for (t63 = 0ULL; t63 < 5ULL; t63++) {
    t24[t63 + 17ULL] = t33[t63];
  }

  t24[22ULL] = 1.0;
  for (t63 = 0ULL; t63 < 5ULL; t63++) {
    t24[t63 + 23ULL] = t34[t63];
  }

  t24[28ULL] = -(t142 * 1.5);
  t24[29ULL] = -(t89 * 1.7320508075688774);
  t24[30ULL] = X_idx_2;
  t24[31ULL] = -(t87 * 1.5);
  t24[32ULL] = -(t90 * 1.7320508075688774);
  t24[33ULL] = X_idx_2;
  t24[34ULL] = -(t88 * 1.5);
  t24[35ULL] = -(t91 * 1.7320508075688774);
  t24[36ULL] = X_idx_2;
  for (t63 = 0ULL; t63 < 6ULL; t63++) {
    t24[t63 + 37ULL] = t38[t63];
  }

  for (t63 = 0ULL; t63 < 6ULL; t63++) {
    t24[t63 + 43ULL] = t39[t63];
  }

  for (t63 = 0ULL; t63 < 5ULL; t63++) {
    t24[t63 + 49ULL] = t40[t63];
  }

  for (t63 = 0ULL; t63 < 5ULL; t63++) {
    t24[t63 + 54ULL] = t41[t63];
  }

  for (t63 = 0ULL; t63 < 5ULL; t63++) {
    t24[t63 + 59ULL] = t42[t63];
  }

  out.mX[0] = t24[0];
  out.mX[1] = t24[1];
  out.mX[2] = t24[2];
  out.mX[3] = t24[3];
  out.mX[4] = t24[4];
  out.mX[5] = t24[5];
  out.mX[6] = t24[6];
  out.mX[7] = t24[7];
  out.mX[8] = t24[8];
  out.mX[9] = t24[9];
  out.mX[10] = t24[10];
  out.mX[11] = t24[11];
  out.mX[12] = t24[12];
  out.mX[13] = t24[13];
  out.mX[14] = t24[14];
  out.mX[15] = t24[15];
  out.mX[16] = t24[16];
  out.mX[17] = t24[17];
  out.mX[18] = t24[18];
  out.mX[19] = t24[19];
  out.mX[20] = t24[20];
  out.mX[21] = t24[21];
  out.mX[22] = t24[22];
  out.mX[23] = t24[23];
  out.mX[24] = t24[24];
  out.mX[25] = t24[25];
  out.mX[26] = t24[26];
  out.mX[27] = t24[27];
  out.mX[28] = t24[28];
  out.mX[29] = t24[29];
  out.mX[30] = t24[30];
  out.mX[31] = t24[31];
  out.mX[32] = t24[32];
  out.mX[33] = t24[33];
  out.mX[34] = t24[34];
  out.mX[35] = t24[35];
  out.mX[36] = t24[36];
  out.mX[37] = t24[37];
  out.mX[38] = t24[38];
  out.mX[39] = t24[39];
  out.mX[40] = t24[40];
  out.mX[41] = t24[41];
  out.mX[42] = t24[42];
  out.mX[43] = t24[43];
  out.mX[44] = t24[44];
  out.mX[45] = t24[45];
  out.mX[46] = t24[46];
  out.mX[47] = t24[47];
  out.mX[48] = t24[48];
  out.mX[49] = t24[49];
  out.mX[50] = t24[50];
  out.mX[51] = t24[51];
  out.mX[52] = t24[52];
  out.mX[53] = t24[53];
  out.mX[54] = t24[54];
  out.mX[55] = t24[55];
  out.mX[56] = t24[56];
  out.mX[57] = t24[57];
  out.mX[58] = t24[58];
  out.mX[59] = t24[59];
  out.mX[60] = t24[60];
  out.mX[61] = t24[61];
  out.mX[62] = t24[62];
  out.mX[63] = t24[63];
  out.mX[64] = t15;
  out.mX[65] = M_idx_11 != 0 ? 0.0 : -intrm_sf_mf_14;
  out.mX[66] = 1.0;
  out.mX[67] = t16;
  out.mX[68] = M_idx_13 != 0 ? 0.0 : -t149;
  out.mX[69] = 1.0;
  out.mX[70] = t17;
  out.mX[71] = M_idx_2 != 0 ? 0.0 : -intrm_sf_mf_18;
  out.mX[72] = 1.0;
  out.mX[73] = t18;
  out.mX[74] = t19;
  out.mX[75] = t20;
  out.mX[76] = t21;
  out.mX[77] = t22;
  out.mX[78] = intrm_sf_mf_19;
  (void)LC;
  (void)t151;
  return 0;
}
