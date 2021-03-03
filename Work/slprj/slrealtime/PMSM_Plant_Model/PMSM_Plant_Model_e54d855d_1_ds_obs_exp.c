/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/Solver_Configuration'.
 */

#include "ne_ds.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_obs_exp.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_sys_struct.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_externals.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T PMSM_Plant_Model_e54d855d_1_ds_obs_exp(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t19, NeDsMethodOutput *t20)
{
  PmRealVector out;
  real_T t0[254];
  real_T P_R_idx_1;
  real_T P_R_idx_2;
  size_t t14;
  int32_T b;
  P_R_idx_1 = t19->mP_R.mX[1];
  P_R_idx_2 = t19->mP_R.mX[2];
  out = t20->mOBS_EXP;
  t0[0ULL] = 0.0;
  t0[1ULL] = 0.0;
  t0[2ULL] = 0.0;
  t0[3ULL] = 0.0;
  t0[4ULL] = 0.0;
  t0[5ULL] = 0.0;
  t0[6ULL] = 0.0;
  t0[7ULL] = 0.0;
  t0[8ULL] = 0.0;
  t0[9ULL] = 0.0;
  t0[10ULL] = 0.0;
  t0[11ULL] = 0.0;
  t0[12ULL] = 0.0;
  t0[13ULL] = 0.0;
  t0[14ULL] = 0.0;
  t0[15ULL] = 0.0;
  t0[16ULL] = 0.0;
  t0[17ULL] = 0.0;
  t0[18ULL] = 0.0;
  t0[19ULL] = 0.0;
  t0[20ULL] = 0.0;
  t0[21ULL] = 0.0;
  t0[22ULL] = 0.0;
  t0[23ULL] = 0.0;
  t0[24ULL] = 0.0;
  t0[25ULL] = 0.0;
  t0[26ULL] = 0.0;
  t0[27ULL] = 0.0;
  t0[28ULL] = 0.0;
  t0[29ULL] = 0.0;
  t0[30ULL] = 0.0;
  t0[31ULL] = 0.0;
  t0[32ULL] = 0.0;
  t0[33ULL] = 0.0;
  t0[34ULL] = 0.0;
  t0[35ULL] = 0.0;
  t0[36ULL] = 0.0;
  t0[37ULL] = 0.0;
  t0[38ULL] = 0.0;
  t0[39ULL] = 0.0;
  t0[40ULL] = 0.0;
  t0[41ULL] = 0.0;
  t0[42ULL] = 0.0;
  t0[43ULL] = 0.0;
  t0[44ULL] = 0.0;
  t0[45ULL] = 0.0;
  t0[46ULL] = 0.0;
  t0[47ULL] = P_R_idx_1;
  t0[48ULL] = P_R_idx_2;
  t0[49ULL] = 0.0;
  t0[50ULL] = 0.0;
  t0[51ULL] = 0.0;
  t0[52ULL] = 0.0;
  t0[53ULL] = 0.0;
  t0[54ULL] = 0.0;
  t0[55ULL] = 0.0;
  t0[56ULL] = 0.0;
  t0[57ULL] = 0.0;
  t0[58ULL] = 0.0;
  t0[59ULL] = 0.0;
  t0[60ULL] = 0.0;
  t0[61ULL] = 0.0;
  t0[62ULL] = 0.0;
  t0[63ULL] = 0.0;
  t0[64ULL] = 0.0;
  t0[65ULL] = 0.0;
  t0[66ULL] = 0.0;
  t0[67ULL] = 0.0;
  t0[68ULL] = 0.0;
  t0[69ULL] = 0.0;
  t0[70ULL] = 0.0;
  t0[71ULL] = 0.0;
  t0[72ULL] = 0.0;
  t0[73ULL] = 0.0;
  t0[74ULL] = 0.0;
  t0[75ULL] = 0.0;
  t0[76ULL] = 0.0;
  t0[77ULL] = 0.0;
  t0[78ULL] = 0.0;
  t0[79ULL] = 0.0;
  t0[80ULL] = 0.0;
  t0[81ULL] = 0.0;
  t0[82ULL] = 0.0;
  t0[83ULL] = 0.0;
  t0[84ULL] = 0.0;
  t0[85ULL] = 0.0;
  t0[86ULL] = 0.0;
  t0[87ULL] = 0.0;
  t0[88ULL] = 0.0;
  t0[89ULL] = 0.0;
  t0[90ULL] = 0.0;
  t0[91ULL] = 0.0;
  t0[92ULL] = 0.0;
  t0[93ULL] = 0.0;
  t0[94ULL] = 0.0;
  t0[95ULL] = 0.0;
  t0[96ULL] = 0.0;
  t0[97ULL] = 0.0;
  t0[98ULL] = 0.0;
  t0[99ULL] = 0.0;
  t0[100ULL] = 0.0;
  t0[101ULL] = 0.0;
  t0[102ULL] = 0.0;
  t0[103ULL] = 0.0;
  t0[104ULL] = 0.0;
  t0[105ULL] = 0.0;
  t0[106ULL] = 0.0;
  for (t14 = 0ULL; t14 < 12ULL; t14++) {
    t0[t14 + 107ULL] = ((_NeDynamicSystem*)(LC))->mTable0[t14];
  }

  t0[119ULL] = 0.0;
  t0[120ULL] = 0.0;
  t0[121ULL] = 0.0;
  t0[122ULL] = 0.0;
  t0[123ULL] = 0.0;
  t0[124ULL] = 0.0;
  t0[125ULL] = 0.0;
  t0[126ULL] = 0.0;
  t0[127ULL] = 0.0;
  t0[128ULL] = 0.0;
  t0[129ULL] = 0.0;
  t0[130ULL] = 0.0;
  t0[131ULL] = 0.0;
  t0[132ULL] = 0.0;
  t0[133ULL] = 0.0;
  t0[134ULL] = 0.0;
  t0[135ULL] = 0.0;
  t0[136ULL] = 0.0;
  t0[137ULL] = 0.0;
  t0[138ULL] = 0.0;
  t0[139ULL] = 0.0;
  for (t14 = 0ULL; t14 < 12ULL; t14++) {
    t0[t14 + 140ULL] = ((_NeDynamicSystem*)(LC))->mTable0[t14];
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
  for (t14 = 0ULL; t14 < 12ULL; t14++) {
    t0[t14 + 164ULL] = ((_NeDynamicSystem*)(LC))->mTable0[t14];
  }

  t0[176ULL] = 0.0;
  t0[177ULL] = 0.0;
  t0[178ULL] = 0.0;
  t0[179ULL] = 0.0;
  t0[180ULL] = 0.0;
  t0[181ULL] = 0.0;
  t0[182ULL] = 0.0;
  t0[183ULL] = 0.0;
  t0[184ULL] = 0.0;
  t0[185ULL] = 0.0;
  t0[186ULL] = 0.0;
  t0[187ULL] = 0.0;
  t0[188ULL] = 0.0;
  t0[189ULL] = 0.0;
  t0[190ULL] = 0.0;
  t0[191ULL] = 0.0;
  t0[192ULL] = 0.0;
  t0[193ULL] = 0.0;
  t0[194ULL] = 0.0;
  t0[195ULL] = 0.0;
  t0[196ULL] = 0.0;
  t0[197ULL] = 0.0;
  t0[198ULL] = 0.0;
  t0[199ULL] = 0.0;
  t0[200ULL] = 0.0;
  t0[201ULL] = 0.0;
  t0[202ULL] = 0.0;
  t0[203ULL] = 0.0;
  t0[204ULL] = 0.0;
  t0[205ULL] = 0.0;
  t0[206ULL] = 0.0;
  t0[207ULL] = 0.0;
  t0[208ULL] = 0.0;
  t0[209ULL] = 0.0;
  t0[210ULL] = 0.0;
  t0[211ULL] = 0.0;
  t0[212ULL] = 0.0;
  t0[213ULL] = 0.0;
  t0[214ULL] = 0.0;
  t0[215ULL] = 0.0;
  t0[216ULL] = 0.0;
  for (t14 = 0ULL; t14 < 12ULL; t14++) {
    t0[t14 + 217ULL] = ((_NeDynamicSystem*)(LC))->mTable0[t14];
  }

  for (t14 = 0ULL; t14 < 12ULL; t14++) {
    t0[t14 + 229ULL] = ((_NeDynamicSystem*)(LC))->mTable0[t14];
  }

  t0[241ULL] = 0.0;
  t0[242ULL] = 0.0;
  t0[243ULL] = 0.0;
  t0[244ULL] = 0.0;
  t0[245ULL] = 0.0;
  t0[246ULL] = 0.0;
  t0[247ULL] = 0.0;
  t0[248ULL] = 0.0;
  t0[249ULL] = 0.0;
  t0[250ULL] = 0.0;
  t0[251ULL] = 0.0;
  t0[252ULL] = 0.0;
  t0[253ULL] = 0.0;
  for (b = 0; b < 254; b++) {
    out.mX[b] = t0[b];
  }

  (void)LC;
  (void)t20;
  return 0;
}
