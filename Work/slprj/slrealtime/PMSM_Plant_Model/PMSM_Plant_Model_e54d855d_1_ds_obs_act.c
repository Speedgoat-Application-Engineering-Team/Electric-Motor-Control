/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/Solver_Configuration'.
 */

#include "ne_ds.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_obs_act.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_sys_struct.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_externals.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T PMSM_Plant_Model_e54d855d_1_ds_obs_act(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t38, NeDsMethodOutput *t39)
{
  PmRealVector out;
  real_T t0[254];
  real_T PMSM_Physical_Model_PMSM_Simscape_Model_PWM_Peripheral_And_In0[12];
  real_T t3[12];
  real_T PMSM_Physical_Model_PMSM_Simscape_Model_PMSM_A_v;
  real_T PMSM_Physical_Model_PMSM_Simscape_Model_PMSM_B_v;
  real_T PMSM_Physical_Model_PMSM_Simscape_Model_PMSM_C_v;
  real_T PMSM_Physical_Model_PMSM_Simscape_Model_PMSM_Gmin_i;
  real_T PMSM_Physical_Model_PMSM_Simscape_Model_PMSM_Permanent_Magnet_2;
  real_T PMSM_Physical_Model_PMSM_Simscape_Model_PWM_Peripheral_And_In9;
  real_T U_idx_0;
  real_T U_idx_1;
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
  real_T X_idx_10;
  real_T X_idx_11;
  real_T X_idx_12;
  real_T X_idx_13;
  real_T X_idx_14;
  real_T X_idx_15;
  real_T X_idx_16;
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
  real_T X_idx_8;
  real_T X_idx_9;
  real_T t28;
  real_T t37;
  size_t t17;
  int32_T M_idx_0;
  int32_T M_idx_1;
  M_idx_0 = t38->mM.mX[0];
  M_idx_1 = t38->mM.mX[1];
  U_idx_0 = t38->mU.mX[0];
  U_idx_1 = t38->mU.mX[1];
  U_idx_2 = t38->mU.mX[2];
  U_idx_3 = t38->mU.mX[3];
  U_idx_4 = t38->mU.mX[4];
  U_idx_5 = t38->mU.mX[5];
  U_idx_6 = t38->mU.mX[6];
  U_idx_7 = t38->mU.mX[7];
  U_idx_8 = t38->mU.mX[8];
  U_idx_9 = t38->mU.mX[9];
  U_idx_10 = t38->mU.mX[10];
  X_idx_0 = t38->mX.mX[0];
  X_idx_1 = t38->mX.mX[1];
  X_idx_2 = t38->mX.mX[2];
  X_idx_3 = t38->mX.mX[3];
  X_idx_4 = t38->mX.mX[4];
  X_idx_5 = t38->mX.mX[5];
  X_idx_6 = t38->mX.mX[6];
  X_idx_7 = t38->mX.mX[7];
  X_idx_8 = t38->mX.mX[8];
  X_idx_9 = t38->mX.mX[9];
  X_idx_10 = t38->mX.mX[10];
  X_idx_11 = t38->mX.mX[11];
  X_idx_12 = t38->mX.mX[12];
  X_idx_13 = t38->mX.mX[13];
  X_idx_14 = t38->mX.mX[14];
  X_idx_15 = t38->mX.mX[15];
  X_idx_16 = t38->mX.mX[16];
  X_idx_17 = t38->mX.mX[17];
  X_idx_18 = t38->mX.mX[18];
  X_idx_19 = t38->mX.mX[19];
  X_idx_20 = t38->mX.mX[20];
  X_idx_21 = t38->mX.mX[21];
  X_idx_22 = t38->mX.mX[22];
  X_idx_23 = t38->mX.mX[23];
  X_idx_24 = t38->mX.mX[24];
  X_idx_25 = t38->mX.mX[25];
  X_idx_26 = t38->mX.mX[26];
  X_idx_27 = t38->mX.mX[27];
  X_idx_28 = t38->mX.mX[28];
  out = t39->mOBS_ACT;
  PMSM_Physical_Model_PMSM_Simscape_Model_PMSM_A_v = X_idx_10 + X_idx_11;
  PMSM_Physical_Model_PMSM_Simscape_Model_PMSM_B_v = X_idx_10 + X_idx_12;
  PMSM_Physical_Model_PMSM_Simscape_Model_PMSM_C_v = X_idx_10 + X_idx_13;
  t28 = (X_idx_10 * 1.0010000000000002E-9 + -X_idx_14) + -X_idx_15;
  PMSM_Physical_Model_PMSM_Simscape_Model_PMSM_Gmin_i = X_idx_10 * -1.0E-9;
  PMSM_Physical_Model_PMSM_Simscape_Model_PMSM_Permanent_Magnet_2 = (X_idx_10 *
    -1.0010000000000002E-9 + X_idx_14) + X_idx_15;
  t3[0ULL] = U_idx_2;
  t3[1ULL] = 0.0;
  t3[2ULL] = U_idx_3;
  t3[3ULL] = 0.0;
  t3[4ULL] = U_idx_4;
  t3[5ULL] = 0.0;
  t3[6ULL] = U_idx_5;
  t3[7ULL] = 0.0;
  t3[8ULL] = U_idx_6;
  t3[9ULL] = 0.0;
  t3[10ULL] = U_idx_7;
  t3[11ULL] = 0.0;
  for (t17 = 0ULL; t17 < 12ULL; t17++) {
    PMSM_Physical_Model_PMSM_Simscape_Model_PWM_Peripheral_And_In0[t17] = t3[t17];
  }

  PMSM_Physical_Model_PMSM_Simscape_Model_PWM_Peripheral_And_In9 = ((((-X_idx_20
    + -X_idx_22) + -X_idx_24) + X_idx_21) + X_idx_23) + X_idx_25;
  t37 = -(X_idx_1 - (floor(X_idx_1 / 6.2831853071795862) * (real_T)(M_idx_1 != 0)
                     + (real_T)(M_idx_1 == 0) * (real_T)M_idx_0) *
          6.2831853071795862);
  t0[0ULL] = X_idx_0;
  t0[1ULL] = 0.0;
  t0[2ULL] = 0.0;
  t0[3ULL] = X_idx_0;
  t0[4ULL] = X_idx_7;
  t0[5ULL] = X_idx_0;
  t0[6ULL] = U_idx_0;
  t0[7ULL] = X_idx_0;
  t0[8ULL] = X_idx_0;
  t0[9ULL] = ((-X_idx_7 + -X_idx_9) + X_idx_8) + U_idx_1;
  t0[10ULL] = X_idx_0;
  t0[11ULL] = X_idx_0;
  t0[12ULL] = PMSM_Physical_Model_PMSM_Simscape_Model_PMSM_A_v;
  t0[13ULL] = PMSM_Physical_Model_PMSM_Simscape_Model_PMSM_B_v;
  t0[14ULL] = PMSM_Physical_Model_PMSM_Simscape_Model_PMSM_C_v;
  t0[15ULL] = t28;
  t0[16ULL] = X_idx_14;
  t0[17ULL] = X_idx_15;
  t0[18ULL] = t28;
  t0[19ULL] = X_idx_14;
  t0[20ULL] = X_idx_15;
  t0[21ULL] = PMSM_Physical_Model_PMSM_Simscape_Model_PMSM_A_v;
  t0[22ULL] = PMSM_Physical_Model_PMSM_Simscape_Model_PMSM_B_v;
  t0[23ULL] = PMSM_Physical_Model_PMSM_Simscape_Model_PMSM_C_v;
  t0[24ULL] = PMSM_Physical_Model_PMSM_Simscape_Model_PMSM_A_v;
  t0[25ULL] = PMSM_Physical_Model_PMSM_Simscape_Model_PMSM_B_v;
  t0[26ULL] = PMSM_Physical_Model_PMSM_Simscape_Model_PMSM_C_v;
  t0[27ULL] = 0.0;
  t0[28ULL] = PMSM_Physical_Model_PMSM_Simscape_Model_PMSM_Gmin_i;
  t0[29ULL] = X_idx_10;
  t0[30ULL] = 0.0;
  t0[31ULL] = PMSM_Physical_Model_PMSM_Simscape_Model_PMSM_Gmin_i * 1.0E+9;
  t0[32ULL] = t37 / -1.0;
  t0[33ULL] = 0.0;
  t0[34ULL] = X_idx_0;
  t0[35ULL] = X_idx_0;
  t0[36ULL] = X_idx_1;
  t0[37ULL] = X_idx_0;
  t0[38ULL] = X_idx_0;
  t0[39ULL] = X_idx_8;
  t0[40ULL] = X_idx_8;
  t0[41ULL] = 0.0;
  t0[42ULL] = 0.0;
  t0[43ULL] = PMSM_Physical_Model_PMSM_Simscape_Model_PMSM_A_v;
  t0[44ULL] = PMSM_Physical_Model_PMSM_Simscape_Model_PMSM_B_v;
  t0[45ULL] = PMSM_Physical_Model_PMSM_Simscape_Model_PMSM_C_v;
  t0[46ULL] = X_idx_0;
  t0[47ULL] = X_idx_2;
  t0[48ULL] = X_idx_3;
  t0[49ULL] = X_idx_5;
  t0[50ULL] = X_idx_6;
  t0[51ULL] = X_idx_10;
  t0[52ULL] = t28;
  t0[53ULL] = X_idx_14;
  t0[54ULL] = X_idx_15;
  t0[55ULL] = PMSM_Physical_Model_PMSM_Simscape_Model_PMSM_A_v;
  t0[56ULL] = PMSM_Physical_Model_PMSM_Simscape_Model_PMSM_B_v;
  t0[57ULL] = PMSM_Physical_Model_PMSM_Simscape_Model_PMSM_C_v;
  t0[58ULL] = PMSM_Physical_Model_PMSM_Simscape_Model_PMSM_A_v;
  t0[59ULL] = PMSM_Physical_Model_PMSM_Simscape_Model_PMSM_B_v;
  t0[60ULL] = PMSM_Physical_Model_PMSM_Simscape_Model_PMSM_C_v;
  t0[61ULL] = PMSM_Physical_Model_PMSM_Simscape_Model_PMSM_Permanent_Magnet_2;
  t0[62ULL] = -X_idx_14;
  t0[63ULL] = -X_idx_15;
  t0[64ULL] = 0.0;
  t0[65ULL] = X_idx_0;
  t0[66ULL] = PMSM_Physical_Model_PMSM_Simscape_Model_PMSM_A_v;
  t0[67ULL] = X_idx_2 * 57.295779513082323;
  t0[68ULL] = X_idx_2;
  t0[69ULL] = X_idx_3 * 9.5492965855137211;
  t0[70ULL] = PMSM_Physical_Model_PMSM_Simscape_Model_PMSM_B_v;
  t0[71ULL] = PMSM_Physical_Model_PMSM_Simscape_Model_PMSM_C_v;
  t0[72ULL] = X_idx_16;
  t0[73ULL] = X_idx_4;
  t0[74ULL] = -PMSM_Physical_Model_PMSM_Simscape_Model_PMSM_Permanent_Magnet_2;
  t0[75ULL] = X_idx_14;
  t0[76ULL] = X_idx_15;
  t0[77ULL] = X_idx_5;
  t0[78ULL] = PMSM_Physical_Model_PMSM_Simscape_Model_PMSM_Gmin_i;
  t0[79ULL] = X_idx_6;
  t0[80ULL] = X_idx_10;
  t0[81ULL] =
    -(((PMSM_Physical_Model_PMSM_Simscape_Model_PMSM_Permanent_Magnet_2 *
        PMSM_Physical_Model_PMSM_Simscape_Model_PMSM_Permanent_Magnet_2 +
        -X_idx_14 * -X_idx_14) + -X_idx_15 * -X_idx_15) * 0.00029299999999999997)
    / -1.0 * 1000.0;
  t0[82ULL] = -X_idx_8;
  t0[83ULL] = X_idx_11;
  t0[84ULL] = X_idx_12;
  t0[85ULL] = X_idx_13;
  t0[86ULL] = -X_idx_8;
  t0[87ULL] = -t28;
  t0[88ULL] = -X_idx_14;
  t0[89ULL] = -X_idx_15;
  t0[90ULL] = PMSM_Physical_Model_PMSM_Simscape_Model_PMSM_A_v;
  t0[91ULL] = PMSM_Physical_Model_PMSM_Simscape_Model_PMSM_B_v;
  t0[92ULL] = PMSM_Physical_Model_PMSM_Simscape_Model_PMSM_C_v;
  t0[93ULL] = PMSM_Physical_Model_PMSM_Simscape_Model_PMSM_A_v;
  t0[94ULL] = PMSM_Physical_Model_PMSM_Simscape_Model_PMSM_B_v;
  t0[95ULL] = PMSM_Physical_Model_PMSM_Simscape_Model_PMSM_C_v;
  t0[96ULL] = t28;
  t0[97ULL] = X_idx_14;
  t0[98ULL] = X_idx_15;
  t0[99ULL] = X_idx_0;
  t0[100ULL] = 0.0;
  t0[101ULL] = X_idx_0;
  t0[102ULL] = X_idx_9;
  t0[103ULL] = X_idx_0;
  t0[104ULL] = PMSM_Physical_Model_PMSM_Simscape_Model_PMSM_A_v;
  t0[105ULL] = PMSM_Physical_Model_PMSM_Simscape_Model_PMSM_B_v;
  t0[106ULL] = PMSM_Physical_Model_PMSM_Simscape_Model_PMSM_C_v;
  for (t17 = 0ULL; t17 < 12ULL; t17++) {
    t0[t17 + 107ULL] =
      PMSM_Physical_Model_PMSM_Simscape_Model_PWM_Peripheral_And_In0[t17];
  }

  t0[119ULL] = X_idx_17;
  t0[120ULL] = X_idx_18;
  t0[121ULL] = X_idx_19;
  t0[122ULL] = U_idx_2;
  t0[123ULL] = 0.0;
  t0[124ULL] = U_idx_2;
  t0[125ULL] = U_idx_3;
  t0[126ULL] = 0.0;
  t0[127ULL] = U_idx_3;
  t0[128ULL] = U_idx_4;
  t0[129ULL] = 0.0;
  t0[130ULL] = U_idx_4;
  t0[131ULL] = U_idx_5;
  t0[132ULL] = 0.0;
  t0[133ULL] = U_idx_5;
  t0[134ULL] = U_idx_6;
  t0[135ULL] = 0.0;
  t0[136ULL] = U_idx_6;
  t0[137ULL] = U_idx_7;
  t0[138ULL] = 0.0;
  t0[139ULL] = U_idx_7;
  for (t17 = 0ULL; t17 < 12ULL; t17++) {
    t0[t17 + 140ULL] = ((_NeDynamicSystem*)(LC))->mTable0[t17];
  }

  t0[152ULL] = 0.0;
  t0[153ULL] = 0.0;
  t0[154ULL] = 0.0;
  t0[155ULL] = 0.0;
  t0[156ULL] = 0.0;
  t0[157ULL] = 0.0;
  t0[158ULL] = 0.0;
  t0[159ULL] = 0.0;
  t0[160ULL] = 0.0;
  t0[161ULL] = 0.0;
  t0[162ULL] = 0.0;
  t0[163ULL] = 0.0;
  for (t17 = 0ULL; t17 < 12ULL; t17++) {
    t0[t17 + 164ULL] =
      PMSM_Physical_Model_PMSM_Simscape_Model_PWM_Peripheral_And_In0[t17];
  }

  t0[176ULL] = PMSM_Physical_Model_PMSM_Simscape_Model_PWM_Peripheral_And_In9;
  t0[177ULL] = -t28;
  t0[178ULL] = X_idx_20;
  t0[179ULL] = X_idx_26;
  t0[180ULL] = X_idx_21;
  t0[181ULL] = -X_idx_14;
  t0[182ULL] = X_idx_22;
  t0[183ULL] = X_idx_27;
  t0[184ULL] = X_idx_23;
  t0[185ULL] = -X_idx_15;
  t0[186ULL] = X_idx_24;
  t0[187ULL] = X_idx_28;
  t0[188ULL] = X_idx_25;
  t0[189ULL] = 0.0;
  t0[190ULL] = 24.0;
  t0[191ULL] = -PMSM_Physical_Model_PMSM_Simscape_Model_PWM_Peripheral_And_In9;
  t0[192ULL] = 0.0;
  t0[193ULL] = 24.0;
  t0[194ULL] = 24.0;
  t0[195ULL] = 0.0;
  t0[196ULL] = -t28;
  t0[197ULL] = X_idx_17;
  t0[198ULL] = PMSM_Physical_Model_PMSM_Simscape_Model_PMSM_A_v;
  t0[199ULL] = (-X_idx_17 + X_idx_10) + X_idx_11;
  t0[200ULL] = U_idx_8;
  t0[201ULL] = -X_idx_14;
  t0[202ULL] = X_idx_18;
  t0[203ULL] = PMSM_Physical_Model_PMSM_Simscape_Model_PMSM_B_v;
  t0[204ULL] = (-X_idx_18 + X_idx_10) + X_idx_12;
  t0[205ULL] = U_idx_9;
  t0[206ULL] = -X_idx_15;
  t0[207ULL] = X_idx_19;
  t0[208ULL] = PMSM_Physical_Model_PMSM_Simscape_Model_PMSM_C_v;
  t0[209ULL] = (-X_idx_19 + X_idx_10) + X_idx_13;
  t0[210ULL] = U_idx_10;
  t0[211ULL] = U_idx_2;
  t0[212ULL] = U_idx_3;
  t0[213ULL] = U_idx_4;
  t0[214ULL] = U_idx_5;
  t0[215ULL] = U_idx_6;
  t0[216ULL] = U_idx_7;
  for (t17 = 0ULL; t17 < 12ULL; t17++) {
    t0[t17 + 217ULL] = -((_NeDynamicSystem*)(LC))->mTable0[t17];
  }

  for (t17 = 0ULL; t17 < 12ULL; t17++) {
    t0[t17 + 229ULL] =
      PMSM_Physical_Model_PMSM_Simscape_Model_PWM_Peripheral_And_In0[t17];
  }

  t0[241ULL] = U_idx_8;
  t0[242ULL] = U_idx_8;
  t0[243ULL] = U_idx_9;
  t0[244ULL] = U_idx_10;
  t0[245ULL] = U_idx_9;
  t0[246ULL] = U_idx_10;
  t0[247ULL] = 0.0;
  t0[248ULL] = X_idx_0;
  t0[249ULL] = U_idx_1;
  t0[250ULL] = -U_idx_1;
  t0[251ULL] = X_idx_0 / -1.0;
  t0[252ULL] = 0.0;
  t0[253ULL] = X_idx_0;
  for (M_idx_0 = 0; M_idx_0 < 254; M_idx_0++) {
    out.mX[M_idx_0] = t0[M_idx_0];
  }

  (void)LC;
  (void)t39;
  return 0;
}
