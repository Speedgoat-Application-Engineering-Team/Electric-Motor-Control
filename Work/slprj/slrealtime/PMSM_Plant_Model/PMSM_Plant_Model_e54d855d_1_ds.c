/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/Solver_Configuration'.
 */
/* PMSM_Plant_Model_e54d855d_1_ds.c - body for module PMSM_Plant_Model_e54d855d_1_ds */

#include "ne_ds.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_zc.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_tdxy_p.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_dxy_p.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_obs_il.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_obs_all.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_obs_exp.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_m_p.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_log.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_imax.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_obs_act.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_imin.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_dnf_p.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_tdxf_p.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_tduf_p.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_a_p.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_dxf_p.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_dxf.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_mode.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_f.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_duf.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_assert.h"
#include "PMSM_Plant_Model_e54d855d_1_ds.h"
#include "ssc_ml_fun.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_external_struct.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_sys_struct.h"
#include "PMSM_Plant_Model_e54d855d_1_ds_externals.h"

static int32_T ds_m(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                    NeDsMethodOutput *out);
static int32_T ds_vmm(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dxm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxm(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_ddm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_ddm(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dum_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dum(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dtm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dtm(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dpm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dpm(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_a(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                    NeDsMethodOutput *out);
static int32_T ds_b_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_b(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                    NeDsMethodOutput *out);
static int32_T ds_c_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_c(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                    NeDsMethodOutput *out);
static int32_T ds_vmf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_vpf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_slf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_slf0(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_duf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dtf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dtf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_ddf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_ddf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dpdxf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_dpdxf(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dwf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dwf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dnf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dnf_v_x(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_ic(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static int32_T ds_icr(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_icr_im(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_icr_id(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_icr_il(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxicr(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxicr_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_ddicr(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_ddicr_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_tduicr_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_icrm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_icrm(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_dxicrm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxicrm(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_ddicrm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_ddicrm(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_mduy_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_mdxy_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_tduy_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_y(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                    NeDsMethodOutput *out);
static int32_T ds_dxy(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_duy_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_duy(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dty_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dty(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_cache_r(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_cache_i(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_update_r(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_update_i(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_update2_r(const NeDynamicSystem *ds, const
  NeDynamicSystemInput *in, NeDsMethodOutput *out);
static int32_T ds_update2_i(const NeDynamicSystem *ds, const
  NeDynamicSystemInput *in, NeDsMethodOutput *out);
static int32_T ds_lock_r(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_lock_i(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_lock2_r(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_lock2_i(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_sfo(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_sfp(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_init_r(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_init_i(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_passert(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_iassert(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_del_t(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_del_v(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_del_v0(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_del_tmax(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxdelt_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxdelt(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dudelt_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dudelt(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dtdelt_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dtdelt(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dp_l(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_dp_i(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_dp_j(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_dp_r(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_qx(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static int32_T ds_qu(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static int32_T ds_qt(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static int32_T ds_q1(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static int32_T ds_qx_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_qu_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_qt_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_q1_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_var_tol(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_eq_tol(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_lv(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static int32_T ds_slv(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static NeDsMethodOutput *ds_output_m_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_m(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_vmm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dxm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dxm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_ddm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_ddm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dum_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dum(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dtm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dtm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dpm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dpm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_a_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_a(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_b_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_b(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_c_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_c(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_f(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_vmf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_vpf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_slf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_slf0(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dxf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dxf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_duf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_duf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dtf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dtf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_ddf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_ddf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dpdxf_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dpdxf(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dwf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dwf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_tduf_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_tdxf_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dnf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dnf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dnf_v_x(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_ic(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_icr(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_icr_im(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_icr_id(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_icr_il(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dxicr(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dxicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_ddicr(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_ddicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_tduicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_icrm_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_icrm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dxicrm_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dxicrm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_ddicrm_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_ddicrm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_mduy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_mdxy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_tduy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_tdxy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_y(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dxy_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dxy(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_duy_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_duy(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dty_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dty(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_mode(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_zc(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_cache_r(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_cache_i(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_update_r(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_update_i(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_update2_r(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_update2_i(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_lock_r(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_lock_i(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_lock2_r(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_lock2_i(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_sfo(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_sfp(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_init_r(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_init_i(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_log(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_assert(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_passert(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_iassert(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_del_t(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_del_v(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_del_v0(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_del_tmax(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dxdelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dxdelt(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dudelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dudelt(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dtdelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dtdelt(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_obs_exp(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_obs_act(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_obs_all(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_obs_il(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dp_l(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dp_i(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dp_j(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dp_r(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qx(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qu(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qt(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_q1(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qx_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qu_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qt_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_q1_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_var_tol(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_eq_tol(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_lv(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_slv(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_imin(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_imax(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static void release_reference(NeDynamicSystem *ds);
static void get_reference(NeDynamicSystem *ds);
static NeDynamicSystem *diagnostics(NeDynamicSystem *ds, boolean_T);
static void expand(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                   PmRealVector *out, boolean_T kp);
static NeEquationData s_equation_data[29] = { { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME,
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/Disc_Load/Inertia",
    2U, 0U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Ideal_Rotational_Mot ion_Sensor",
    2U, 2U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    2U, 4U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1U, 6U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1U, 7U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1U, 8U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1U, 9U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/Brake/Rotational Friction Brake",
    7U, 10U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1U, 17U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1U, 18U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1U, 19U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1U, 20U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1U, 21U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Rotational Friction",
    1U, 22U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1U, 23U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1U, 24U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1U, 25U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1U, 26U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1U, 27U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1U, 28U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    5U, 29U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    5U, 34U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    5U, 39U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    3U, 44U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    3U, 47U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    3U, 50U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Ideal_Switch1",
    3U, 53U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Ideal_Switch2",
    3U, 56U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Ideal_Switch3",
    3U, 59U, TRUE, 1.0, "1", } };

static NeICRData s_icr_data[2] = { { "", 0U, 0,
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1U, 0U, }, { "", 0U, 0,
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1U, 1U, } };

static NeVariableData s_variable_data[29] = { {
    "PMSM_Physical_Model.PMSM_Simscape_Model.Disc_Load.Inertia.w", 0U, 0,
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/Disc_Load/Inertia",
    1.0, "1", 0.0, TRUE, FALSE, 1U, 1U, NE_INIT_MODE_MANDATORY,
    "Rotational velocity", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Ideal_Rotational_Mot_ion_Sensor.phi",
    0U, 0,
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Ideal_Rotational_Mot ion_Sensor",
    1.0, "1", 0.0, TRUE, FALSE, 1U, 1U, NE_INIT_MODE_MANDATORY, "Angle", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.angular_position_diff",
    0U, 0,
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1.0, "1", 0.0, TRUE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "angular_position_diff", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.angular_velocity",
    0U, 0,
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1.0, "1", 0.0, TRUE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Rotor speed", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.i_0",
    0U, 0,
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1.0, "1", 0.0, TRUE, FALSE, 1U, 1U, NE_INIT_MODE_MANDATORY,
    "Zero-sequence current", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.i_d",
    0U, 0,
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1.0, "1", 0.0, TRUE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "D-axis current", },
    {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.i_q",
    0U, 0,
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1.0, "1", 0.0, TRUE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Q-axis current", },
    {
    "PMSM_Physical_Model.PMSM_Simscape_Model.Brake.Rotational_Friction_Brake.t",
    0U, 0,
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/Brake/Rotational Friction Brake",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Torque", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Ideal_Torque_Sensor.T", 0U, 0,
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Ideal_Torque_Sensor",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "T", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Rotational_Friction.t", 0U, 0,
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Rotational Friction",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Torque", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Gmin.n.v", 0U, 1,
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Gmin", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Voltage", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.v_a",
    0U, 0,
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "v_a", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.v_b",
    0U, 0,
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "v_b", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.v_c",
    0U, 0,
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "v_c", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Phase_Splitter.i_b", 0U, 0,
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Phase_Splitter",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "i_b", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Phase_Splitter.i_c", 0U, 0,
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Phase_Splitter",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "i_c", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.electrical_torque",
    0U, 0,
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Electrical torque",
  }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase.a.v",
    0U, 1,
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Voltage", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase.b.v",
    0U, 1,
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Voltage", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase.c.v",
    0U, 1,
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Voltage", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase.i_a_dh",
    0U, 0,
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "i_a_dh", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase.i_a_sh",
    0U, 0,
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "i_a_sh", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase.i_b_dh",
    0U, 0,
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "i_b_dh", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase.i_b_sh",
    0U, 0,
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "i_b_sh", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase.i_c_dh",
    0U, 0,
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "i_c_dh", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase.i_c_sh",
    0U, 0,
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "i_c_sh", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase.i_a_dl",
    0U, 0,
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "i_a_dl", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase.i_b_dl",
    0U, 0,
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "i_b_dl", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase.i_c_dl",
    0U, 0,
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "i_c_dl", } };

static NeVariableData *s_discrete_data = NULL;
static NeObservableData s_observable_data[182] = { {
    "PMSM_Physical_Model.PMSM_Simscape_Model.Brake.Brake_Torque.w",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/Brake", 1U, 1U,
    "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.Brake.Mechanical_Rotational_Reference2.W.w",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/Brake/Mechanical Rotational Reference2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.Brake.Rotational_Friction_Brake.C.w",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/Brake/Rotational Friction Brake",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.Brake.Rotational_Friction_Brake.R.w",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/Brake/Rotational Friction Brake",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.Brake.Rotational_Friction_Brake.t",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/Brake/Rotational Friction Brake",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.Brake.Rotational_Friction_Brake.w",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/Brake/Rotational Friction Brake",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.Brake.Rotational_Friction_Brake.S",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/Brake/Rotational Friction Brake",
    1U, 1U, "1", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "S", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.Disc_Load.Inertia.I.w",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/Disc_Load/Inertia",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.Disc_Load.Inertia.J.w",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/Disc_Load/Inertia",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", },
    { "PMSM_Physical_Model.PMSM_Simscape_Model.Disc_Load.Inertia.t",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/Disc_Load/Inertia",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.Disc_Load.Inertia.w",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/Disc_Load/Inertia",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_MANDATORY, FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.Disc_Load.R.w",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/Disc_Load", 1U, 1U,
    "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.A.v",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM", 1U, 1U, "V",
    1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.B.v",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM", 1U, 1U, "V",
    1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.C.v",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM", 1U, 1U, "V",
    1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Current_Sensor.I",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Current_Sensor",
    1U, 3U, "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Current_Sensor.I_output",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Current_Sensor",
    1U, 3U, "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Current_Sensor.N1.V",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Current_Sensor",
    1U, 3U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Current_Sensor.N2.V",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Current_Sensor",
    1U, 3U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Electrical_Reference1.V.v",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Electrical Reference1",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Gmin.i",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Gmin", 1U, 1U,
    "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Gmin.n.v",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Gmin", 1U, 1U,
    "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Gmin.p.v",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Gmin", 1U, 1U,
    "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Gmin.v",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Gmin", 1U, 1U,
    "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Ideal_Rotational_Mot_ion_Sensor.A",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Ideal_Rotational_Mot ion_Sensor",
    1U, 1U, "rad", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "A", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Ideal_Rotational_Mot_ion_Sensor.C.w",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Ideal_Rotational_Mot ion_Sensor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Ideal_Rotational_Mot_ion_Sensor.R.w",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Ideal_Rotational_Mot ion_Sensor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Ideal_Rotational_Mot_ion_Sensor.W",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Ideal_Rotational_Mot ion_Sensor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "W", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Ideal_Rotational_Mot_ion_Sensor.phi",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Ideal_Rotational_Mot ion_Sensor",
    1U, 1U, "rad", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Angle", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Ideal_Torque_Sensor.C.w",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Ideal_Torque_Sensor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Ideal_Torque_Sensor.R.w",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Ideal_Torque_Sensor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Ideal_Torque_Sensor.T",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Ideal_Torque_Sensor",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "T", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Ideal_Torque_Sensor.t",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Ideal_Torque_Sensor",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Mechanical_Rotational_Reference2.W.w",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Mechanical Rotational Reference2",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Permanent_Magnet_Synchronous_Motor.C.w",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Permanent_Magnet_Synchronous_Motor.N.V",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1U, 3U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Permanent_Magnet_Synchronous_Motor.R.w",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Permanent_Magnet_Synchronous_Motor.angular_position",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1U, 1U, "rad", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotor angle", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Permanent_Magnet_Synchronous_Motor.angular_velocity",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_MANDATORY, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotor speed", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Permanent_Magnet_Synchronous_Motor.i_d",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1U, 1U, "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "D-axis current", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Permanent_Magnet_Synchronous_Motor.i_q",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1U, 1U, "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Q-axis current", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Permanent_Magnet_Synchronous_Motor.n.v",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Permanent_Magnet_Synchronous_Motor.phase_splitter.I",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1U, 3U, "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Permanent_Magnet_Synchronous_Motor.phase_splitter.N.V",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1U, 3U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Permanent_Magnet_Synchronous_Motor.phase_splitter.a.v",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Permanent_Magnet_Synchronous_Motor.phase_splitter.b.v",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Permanent_Magnet_Synchronous_Motor.phase_splitter.c.v",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Permanent_Magnet_Synchronous_Motor.phase_splitter.i_a",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1U, 1U, "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_a", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Permanent_Magnet_Synchronous_Motor.phase_splitter.i_b",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1U, 1U, "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_b", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Permanent_Magnet_Synchronous_Motor.phase_splitter.i_c",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1U, 1U, "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_c", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.C.w",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.R.w",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.a.v",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.angular_position",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1U, 1U, "deg", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotor angle", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.angular_position_diff",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1U, 1U, "rad", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "angular_position_diff", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.angular_velocity",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1U, 1U, "rpm", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotor speed", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.b.v",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.c.v",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.electrical_torque",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Electrical torque", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.i_0",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1U, 1U, "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Zero-sequence current", },
    {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.i_a",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1U, 1U, "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_a", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.i_b",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1U, 1U, "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_b", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.i_c",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1U, 1U, "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_c", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.i_d",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1U, 1U, "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "D-axis current", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.i_n",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1U, 1U, "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_n", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.i_q",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1U, 1U, "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Q-axis current", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.n.v",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.power_dissipated",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1U, 1U, "W", 1.0e-6, "kW", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.torque",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.v_a",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v_a", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.v_b",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v_b", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.v_c",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v_c", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.x_Ld",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1U, 1U, "H", 1.0e-6, "H", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "x_Ld", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.x_Lq",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1U, 1U, "H", 1.0e-6, "H", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "x_Lq", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.x_pm_flux_linkage",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1U, 1U, "N*m/A", 1.0e-6, "N*m/A", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "x_pm_flux_linkage", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Permanent_Magnet_Synchronous_Motor.torque",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Phase_Splitter.I",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Phase_Splitter",
    1U, 3U, "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Phase_Splitter.N.V",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Phase_Splitter",
    1U, 3U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Phase_Splitter.a.v",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Phase_Splitter",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Phase_Splitter.b.v",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Phase_Splitter",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Phase_Splitter.c.v",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Phase_Splitter",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Phase_Splitter.i_a",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Phase_Splitter",
    1U, 1U, "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_a", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Phase_Splitter.i_b",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Phase_Splitter",
    1U, 1U, "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_b", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Phase_Splitter.i_c",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Phase_Splitter",
    1U, 1U, "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_c", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.R.w",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM", 1U, 1U,
    "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Rotational_Friction.C.w",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Rotational Friction",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Rotational_Friction.R.w",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Rotational Friction",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Rotational_Friction.t",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Rotational Friction",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Rotational_Friction.w",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Rotational Friction",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.A.v",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.B.v",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.C.v",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase.G.V",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1U, 12U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase.a.v",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase.b.v",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase.c.v",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase.demux_gates.G1",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "G1", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase.demux_gates.G1n.v",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase.demux_gates.G1p.v",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase.demux_gates.G2",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "G2", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase.demux_gates.G2n.v",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase.demux_gates.G2p.v",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase.demux_gates.G3",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "G3", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase.demux_gates.G3n.v",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase.demux_gates.G3p.v",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase.demux_gates.G4",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "G4", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase.demux_gates.G4n.v",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase.demux_gates.G4p.v",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase.demux_gates.G5",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "G5", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase.demux_gates.G5n.v",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase.demux_gates.G5p.v",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase.demux_gates.G6",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "G6", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase.demux_gates.G6n.v",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase.demux_gates.G6p.v",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase.demux_gates.I",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1U, 12U, "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase.demux_gates.i1n",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1U, 1U, "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i1n", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase.demux_gates.i1p",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1U, 1U, "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i1p", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase.demux_gates.i2n",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1U, 1U, "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i2n", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase.demux_gates.i2p",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1U, 1U, "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i2p", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase.demux_gates.i3n",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1U, 1U, "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i3n", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase.demux_gates.i3p",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1U, 1U, "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i3p", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase.demux_gates.i4n",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1U, 1U, "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i4n", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase.demux_gates.i4p",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1U, 1U, "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i4p", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase.demux_gates.i5n",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1U, 1U, "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i5n", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase.demux_gates.i5p",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1U, 1U, "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i5p", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase.demux_gates.i6n",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1U, 1U, "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i6n", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase.demux_gates.i6p",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1U, 1U, "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i6p", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase.demux_gates.p.V",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1U, 12U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase.i",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1U, 1U, "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "DC current", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase.i_a",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1U, 1U, "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current through a-phase", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase.i_a_dh",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1U, 1U, "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "i_a_dh", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase.i_a_dl",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1U, 1U, "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "i_a_dl", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase.i_a_sh",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1U, 1U, "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "i_a_sh", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase.i_b",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1U, 1U, "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current through b-phase", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase.i_b_dh",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1U, 1U, "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "i_b_dh", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase.i_b_dl",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1U, 1U, "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "i_b_dl", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase.i_b_sh",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1U, 1U, "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "i_b_sh", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase.i_c",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1U, 1U, "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current through c-phase", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase.i_c_dh",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1U, 1U, "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "i_c_dh", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase.i_c_dl",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1U, 1U, "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "i_c_dl", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase.i_c_sh",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1U, 1U, "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "i_c_sh", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase.n.v",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase.p.v",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.DC_Voltage_Source.i",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/DC Voltage Source",
    1U, 1U, "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.DC_Voltage_Source.n.v",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/DC Voltage Source",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.DC_Voltage_Source.p.v",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/DC Voltage Source",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.DC_Voltage_Source.v",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/DC Voltage Source",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Electrical_Reference.V.v",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Electrical Reference",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Ideal_Switch1.i",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Ideal_Switch1",
    1U, 1U, "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Ideal_Switch1.n.v",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Ideal_Switch1",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Ideal_Switch1.p.v",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Ideal_Switch1",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Ideal_Switch1.v",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Ideal_Switch1",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Ideal_Switch1.vT",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Ideal_Switch1",
    1U, 1U, "1", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "PS", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Ideal_Switch2.i",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Ideal_Switch2",
    1U, 1U, "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Ideal_Switch2.n.v",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Ideal_Switch2",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Ideal_Switch2.p.v",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Ideal_Switch2",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Ideal_Switch2.v",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Ideal_Switch2",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Ideal_Switch2.vT",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Ideal_Switch2",
    1U, 1U, "1", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "PS", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Ideal_Switch3.i",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Ideal_Switch3",
    1U, 1U, "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Ideal_Switch3.n.v",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Ideal_Switch3",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Ideal_Switch3.p.v",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Ideal_Switch3",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Ideal_Switch3.v",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Ideal_Switch3",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Ideal_Switch3.vT",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Ideal_Switch3",
    1U, 1U, "1", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "PS", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Six_Pulse_Gate_Multiplexer.GaH",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Six-Pulse Gate Multiplexer",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Ga(H)", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Six_Pulse_Gate_Multiplexer.GaL",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Six-Pulse Gate Multiplexer",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Ga(L)", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Six_Pulse_Gate_Multiplexer.GbH",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Six-Pulse Gate Multiplexer",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Gb(H)", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Six_Pulse_Gate_Multiplexer.GbL",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Six-Pulse Gate Multiplexer",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Gb(L)", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Six_Pulse_Gate_Multiplexer.GcH",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Six-Pulse Gate Multiplexer",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Gc(H)", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Six_Pulse_Gate_Multiplexer.GcL",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Six-Pulse Gate Multiplexer",
    1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Gc(L)", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Six_Pulse_Gate_Multiplexer.I",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Six-Pulse Gate Multiplexer",
    1U, 12U, "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Six_Pulse_Gate_Multiplexer.p.V",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Six-Pulse Gate Multiplexer",
    1U, 12U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Three_Element_Demux1.a",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Three Element Demux1",
    1U, 1U, "1", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "a", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Three_Element_Demux1.abc",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Three Element Demux1",
    1U, 3U, "1", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "abc", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Three_Element_Demux1.b",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Three Element Demux1",
    1U, 1U, "1", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "b", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Three_Element_Demux1.c",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Three Element Demux1",
    1U, 1U, "1", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "c", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.Torque_Load.Ideal_Torque_Source.C.w",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/Torque_Load/Ideal_Torque_Source",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.Torque_Load.Ideal_Torque_Source.R.w",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/Torque_Load/Ideal_Torque_Source",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.Torque_Load.Ideal_Torque_Source.S",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/Torque_Load/Ideal_Torque_Source",
    1U, 1U, "N*m", 1.0e-6, "N*m", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "S", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.Torque_Load.Ideal_Torque_Source.t",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/Torque_Load/Ideal_Torque_Source",
    1U, 1U, "N*m", 1.0e-6, "J", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.Torque_Load.Ideal_Torque_Source.w",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/Torque_Load/Ideal_Torque_Source",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Angular velocity", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.Torque_Load.Mechanical_Rotational_Reference.W.w",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/Torque_Load/Mechanical_Rotational_Reference",
    1U, 1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "PMSM_Physical_Model.PMSM_Simscape_Model.Torque_Load.R.w",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/Torque_Load", 1U,
    1U, "rad/s", 1.0e-6, "1/s", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", } };

static NeModeData *s_major_mode_data = NULL;
static NeZCData s_zc_data[16] = { {
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    2U, 0U,
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+converter/Xabc.sscp",
    NE_ZC_TYPE_TRUE, }, {
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1U, 2U,
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+converter/Xabc.sscp",
    NE_ZC_TYPE_FALSE, }, {
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    2U, 3U,
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+converter/Xabc.sscp",
    NE_ZC_TYPE_TRUE, }, {
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1U, 5U,
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+converter/Xabc.sscp",
    NE_ZC_TYPE_FALSE, }, {
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    2U, 6U,
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+converter/Xabc.sscp",
    NE_ZC_TYPE_TRUE, }, {
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1U, 8U,
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+converter/Xabc.sscp",
    NE_ZC_TYPE_FALSE, }, {
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/Brake/Rotational Friction Brake",
    1U, 9U,
    "PMSM_Physical_Model.PMSM_Simscape_Model.Brake.Rotational_Friction_Brake",
    "C:/Workspace/GitHub/Electric-Motor-Control/P-Electric-Motor-Control/Libs/+RotationalFrictionBrake/RotationalFrictionBrake.ssc",
    NE_ZC_TYPE_TRUE, }, {
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/Brake/Rotational Friction Brake",
    1U, 10U,
    "PMSM_Physical_Model.PMSM_Simscape_Model.Brake.Rotational_Friction_Brake",
    "C:/Workspace/GitHub/Electric-Motor-Control/P-Electric-Motor-Control/Libs/+RotationalFrictionBrake/RotationalFrictionBrake.ssc",
    NE_ZC_TYPE_TRUE, }, {
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/Brake/Rotational Friction Brake",
    1U, 11U,
    "PMSM_Physical_Model.PMSM_Simscape_Model.Brake.Rotational_Friction_Brake",
    "C:/Workspace/GitHub/Electric-Motor-Control/P-Electric-Motor-Control/Libs/+RotationalFrictionBrake/RotationalFrictionBrake.ssc",
    NE_ZC_TYPE_FALSE, }, {
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/Brake/Rotational Friction Brake",
    1U, 12U,
    "PMSM_Physical_Model.PMSM_Simscape_Model.Brake.Rotational_Friction_Brake",
    "C:/Workspace/GitHub/Electric-Motor-Control/P-Electric-Motor-Control/Libs/+RotationalFrictionBrake/RotationalFrictionBrake.ssc",
    NE_ZC_TYPE_TRUE, }, {
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Ideal_Rotational_Mot ion_Sensor",
    1U, 13U,
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Ideal_Rotational_Mot_ion_Sensor",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sensors/angular_velocity.ssc",
    NE_ZC_TYPE_TRUE, }, {
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Ideal_Rotational_Mot ion_Sensor",
    1U, 14U,
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Ideal_Rotational_Mot_ion_Sensor",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sensors/angular_velocity.ssc",
    NE_ZC_TYPE_FALSE, }, {
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Ideal_Rotational_Mot ion_Sensor",
    1U, 15U,
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Ideal_Rotational_Mot_ion_Sensor",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sensors/angular_velocity.ssc",
    NE_ZC_TYPE_FALSE, }, {
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Ideal_Switch1",
    1U, 16U,
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Ideal_Switch1",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc",
    NE_ZC_TYPE_FALSE, }, {
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Ideal_Switch2",
    1U, 17U,
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Ideal_Switch2",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc",
    NE_ZC_TYPE_FALSE, }, {
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Ideal_Switch3",
    1U, 18U,
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Ideal_Switch3",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc",
    NE_ZC_TYPE_FALSE, } };

static NeRange s_range[19] = { {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+converter/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+converter/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+converter/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+converter/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+converter/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+converter/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+converter/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+converter/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+converter/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Workspace/GitHub/Electric-Motor-Control/P-Electric-Motor-Control/Libs/+RotationalFrictionBrake/RotationalFrictionBrake.ssc",
    62U, 8U, 62U, 14U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Workspace/GitHub/Electric-Motor-Control/P-Electric-Motor-Control/Libs/+RotationalFrictionBrake/RotationalFrictionBrake.ssc",
    64U, 13U, 64U, 30U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Workspace/GitHub/Electric-Motor-Control/P-Electric-Motor-Control/Libs/+RotationalFrictionBrake/RotationalFrictionBrake.ssc",
    67U, 12U, 67U, 17U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Workspace/GitHub/Electric-Motor-Control/P-Electric-Motor-Control/Libs/+RotationalFrictionBrake/RotationalFrictionBrake.ssc",
    72U, 55U, 72U, 60U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sensors/angular_velocity.ssc",
    37U, 13U, 37U, 35U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sensors/angular_velocity.ssc",
    37U, 13U, 37U, 35U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sensors/angular_velocity.ssc",
    37U, 13U, 37U, 35U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc",
    41U, 8U, 41U, 22U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc",
    41U, 8U, 41U, 22U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc",
    41U, 8U, 41U, 22U, NE_RANGE_TYPE_NORMAL, } };

static NeAssertData s_assert_data[16] = { {
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1U, 0U,
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+converter/Xabc.sscp",
    TRUE,
    "G is not in an acceptable range. G must be between 0 and 1, inclusive. Input is clipped and might give wrong results.",
    "physmod:ee:library:AdjustedInput", }, {
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1U, 1U,
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+pmsm/Xabc.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1U, 2U,
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+pmsm/Xabc.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1U, 3U,
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+pmsm/Xabc.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1U, 4U,
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+pmsm/Xabc.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1U, 5U,
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+pmsm/Xabc.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    1U, 6U,
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+pmsm/Xabc.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/Brake/Rotational Friction Brake",
    1U, 7U,
    "PMSM_Physical_Model.PMSM_Simscape_Model.Brake.Rotational_Friction_Brake",
    "C:/Workspace/GitHub/Electric-Motor-Control/P-Electric-Motor-Control/Libs/+RotationalFrictionBrake/RotationalFrictionBrake.ssc",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Rotational Friction",
    1U, 8U, "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Rotational_Friction",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/friction.ssc",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Rotational Friction",
    1U, 9U, "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Rotational_Friction",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/friction.ssc",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1U, 10U,
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+converter/Xabc.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1U, 11U,
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+converter/Xabc.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Converter (Three-Phase)",
    1U, 12U,
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Converter_Three_Phase",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+converter/Xabc.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Ideal_Switch1",
    1U, 13U,
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Ideal_Switch1",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Ideal_Switch2",
    1U, 14U,
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Ideal_Switch2",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PWM_Peripheral_And_Inverter/Ideal_Switch3",
    1U, 15U,
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Ideal_Switch3",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", } };

static NeRange s_assert_range[16] = { {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+converter/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+pmsm/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+pmsm/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+pmsm/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+pmsm/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+pmsm/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+pmsm/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Workspace/GitHub/Electric-Motor-Control/P-Electric-Motor-Control/Libs/+RotationalFrictionBrake/RotationalFrictionBrake.ssc",
    66U, 33U, 66U, 40U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/friction.ssc",
    38U, 61U, 38U, 62U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/friction.ssc",
    38U, 47U, 38U, 59U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+converter/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+converter/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+converter/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc",
    44U, 16U, 44U, 22U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc",
    44U, 16U, 44U, 22U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc",
    44U, 16U, 44U, 22U, NE_RANGE_TYPE_NORMAL, } };

static NeAssertData s_param_assert_data[1] = { {
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/Disc_Load/Inertia",
    1U, 0U, "PMSM_Physical_Model.PMSM_Simscape_Model.Disc_Load.Inertia",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc",
    FALSE, "Inertia must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", } };

static NeRange s_param_assert_range[1] = { {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc",
    43U, 5U, 43U, 11U, NE_RANGE_TYPE_NORMAL, } };

static NeAssertData *s_initial_assert_data = NULL;
static NeRange *s_initial_assert_range = NULL;
static NeRange s_equation_range[62] = { {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc",
    44U, 5U, 44U, 21U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc",
    44U, 20U, 44U, 25U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sensors/angular_velocity.ssc",
    46U, 5U, 46U, 12U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sensors/angular_velocity.ssc",
    46U, 9U, 46U, 17U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+pmsm/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+pmsm/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+pmsm/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+pmsm/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+pmsm/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+pmsm/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Workspace/GitHub/Electric-Motor-Control/P-Electric-Motor-Control/Libs/+RotationalFrictionBrake/RotationalFrictionBrake.ssc",
    62U, 8U, 62U, 14U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Workspace/GitHub/Electric-Motor-Control/P-Electric-Motor-Control/Libs/+RotationalFrictionBrake/RotationalFrictionBrake.ssc",
    63U, 9U, 63U, 15U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Workspace/GitHub/Electric-Motor-Control/P-Electric-Motor-Control/Libs/+RotationalFrictionBrake/RotationalFrictionBrake.ssc",
    64U, 13U, 64U, 30U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Workspace/GitHub/Electric-Motor-Control/P-Electric-Motor-Control/Libs/+RotationalFrictionBrake/RotationalFrictionBrake.ssc",
    66U, 9U, 66U, 40U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Workspace/GitHub/Electric-Motor-Control/P-Electric-Motor-Control/Libs/+RotationalFrictionBrake/RotationalFrictionBrake.ssc",
    67U, 12U, 67U, 17U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Workspace/GitHub/Electric-Motor-Control/P-Electric-Motor-Control/Libs/+RotationalFrictionBrake/RotationalFrictionBrake.ssc",
    68U, 9U, 69U, 56U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Workspace/GitHub/Electric-Motor-Control/P-Electric-Motor-Control/Libs/+RotationalFrictionBrake/RotationalFrictionBrake.ssc",
    71U, 9U, 72U, 61U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+pmsm/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+pmsm/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+pmsm/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+pmsm/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+pmsm/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/friction.ssc",
    37U, 5U, 39U, 36U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+converter/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+converter/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+converter/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+converter/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+converter/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+converter/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+converter/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+converter/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+converter/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+converter/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+converter/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+converter/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+converter/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+converter/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+converter/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+converter/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+converter/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+converter/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+converter/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+converter/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+converter/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+converter/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+converter/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+converter/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+converter/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+converter/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+converter/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+converter/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+converter/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+converter/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc",
    41U, 8U, 41U, 22U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc",
    42U, 9U, 42U, 24U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc",
    44U, 9U, 44U, 22U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc",
    41U, 8U, 41U, 22U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc",
    42U, 9U, 42U, 24U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc",
    44U, 9U, 44U, 22U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc",
    41U, 8U, 41U, 22U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc",
    42U, 9U, 42U, 24U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/controlled_switch.ssc",
    44U, 9U, 44U, 22U, NE_RANGE_TYPE_NORMAL, } };

static NeRange s_icr_range[2] = { { "", 1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED,
  }, { "", 1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, } };

static NeParameterData *s_logical_parameter_data = NULL;
static NeParameterData *s_integer_parameter_data = NULL;
static NeParameterData *s_index_parameter_data = NULL;
static NeParameterData s_real_parameter_data[3] = { { "RTP_48260B4E_inertia",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/Disc_Load/Inertia",
    "", 0U, 1U, }, { "RTP_E65F8A5B_angular_position",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    "", 0U, 1U, }, { "RTP_E65F8A5B_angular_velocity",
    "PMSM_Plant_Model/PMSM_Physical_Model/PMSM Simscape Model/PMSM/Permanent_Magnet_Synchronous_Motor",
    "", 0U, 1U, } };

static real_T s_constant_table0[12] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
  0.0, 0.0, 0.0, 0.0 };

static NeDsMethodOutput *ds_output_m_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mM_P.mNumCol = 29;
  out->mM_P.mNumRow = 29;
  out->mM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    30);
  out->mM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    7);
  return out;
}

static NeDsMethodOutput *ds_output_m(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mM.mN = 7;
  out->mM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 7);
  return out;
}

static NeDsMethodOutput *ds_output_vmm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVMM.mN = 7;
  out->mVMM.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    7);
  return out;
}

static NeDsMethodOutput *ds_output_dxm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXM_P.mNumCol = 29;
  out->mDXM_P.mNumRow = 7;
  out->mDXM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    30);
  out->mDXM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dxm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXM.mN = 0;
  out->mDXM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_ddm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDM_P.mNumCol = 0;
  out->mDDM_P.mNumRow = 7;
  out->mDDM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    1);
  out->mDDM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_ddm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDM.mN = 0;
  out->mDDM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dum_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUM_P.mNumCol = 11;
  out->mDUM_P.mNumRow = 7;
  out->mDUM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    12);
  out->mDUM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dum(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUM.mN = 0;
  out->mDUM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dtm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTM_P.mNumCol = 1;
  out->mDTM_P.mNumRow = 7;
  out->mDTM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mDTM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dtm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTM.mN = 0;
  out->mDTM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dpm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDPM_P.mNumCol = 3;
  out->mDPM_P.mNumRow = 7;
  out->mDPM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    4);
  out->mDPM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dpm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDPM.mN = 0;
  out->mDPM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_a_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mA_P.mNumCol = 29;
  out->mA_P.mNumRow = 29;
  out->mA_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    30);
  out->mA_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    30);
  return out;
}

static NeDsMethodOutput *ds_output_a(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mA.mN = 30;
  out->mA.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 30);
  return out;
}

static NeDsMethodOutput *ds_output_b_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mB_P.mNumCol = 11;
  out->mB_P.mNumRow = 29;
  out->mB_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    12);
  out->mB_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    1);
  return out;
}

static NeDsMethodOutput *ds_output_b(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mB.mN = 1;
  out->mB.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 1);
  return out;
}

static NeDsMethodOutput *ds_output_c_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mC_P.mNumCol = 1;
  out->mC_P.mNumRow = 29;
  out->mC_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mC_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_c(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mC.mN = 0;
  out->mC.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_f(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mF.mN = 29;
  out->mF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 29);
  return out;
}

static NeDsMethodOutput *ds_output_vmf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVMF.mN = 29;
  out->mVMF.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    29);
  return out;
}

static NeDsMethodOutput *ds_output_vpf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVPF.mN = 29;
  out->mVPF.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    29);
  return out;
}

static NeDsMethodOutput *ds_output_slf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSLF.mN = 29;
  out->mSLF.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    29);
  return out;
}

static NeDsMethodOutput *ds_output_slf0(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSLF0.mN = 29;
  out->mSLF0.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 29);
  return out;
}

static NeDsMethodOutput *ds_output_dxf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXF_P.mNumCol = 29;
  out->mDXF_P.mNumRow = 29;
  out->mDXF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    30);
  out->mDXF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    79);
  return out;
}

static NeDsMethodOutput *ds_output_dxf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXF.mN = 79;
  out->mDXF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 79);
  return out;
}

static NeDsMethodOutput *ds_output_duf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUF_P.mNumCol = 11;
  out->mDUF_P.mNumRow = 29;
  out->mDUF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    12);
  out->mDUF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    9);
  return out;
}

static NeDsMethodOutput *ds_output_duf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUF.mN = 9;
  out->mDUF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 9);
  return out;
}

static NeDsMethodOutput *ds_output_dtf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTF_P.mNumCol = 1;
  out->mDTF_P.mNumRow = 29;
  out->mDTF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mDTF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dtf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTF.mN = 0;
  out->mDTF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_ddf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDF_P.mNumCol = 0;
  out->mDDF_P.mNumRow = 29;
  out->mDDF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    1);
  out->mDDF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_ddf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDF.mN = 0;
  out->mDDF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dpdxf_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDPDXF_P.mNumCol = 3;
  out->mDPDXF_P.mNumRow = 79;
  out->mDPDXF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 4);
  out->mDPDXF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dpdxf(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDPDXF.mN = 0;
  out->mDPDXF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dwf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDWF_P.mNumCol = 0;
  out->mDWF_P.mNumRow = 29;
  out->mDWF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    1);
  out->mDWF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dwf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDWF.mN = 0;
  out->mDWF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_tduf_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDUF_P.mNumCol = 11;
  out->mTDUF_P.mNumRow = 29;
  out->mTDUF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    12);
  out->mTDUF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    23);
  return out;
}

static NeDsMethodOutput *ds_output_tdxf_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDXF_P.mNumCol = 29;
  out->mTDXF_P.mNumRow = 29;
  out->mTDXF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    30);
  out->mTDXF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    108);
  return out;
}

static NeDsMethodOutput *ds_output_dnf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDNF_P.mNumCol = 34;
  out->mDNF_P.mNumRow = 29;
  out->mDNF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    35);
  out->mDNF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dnf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDNF.mN = 0;
  out->mDNF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dnf_v_x(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDNF_V_X.mN = 29;
  out->mDNF_V_X.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 29);
  return out;
}

static NeDsMethodOutput *ds_output_ic(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mIC.mN = 29;
  out->mIC.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 29);
  return out;
}

static NeDsMethodOutput *ds_output_icr(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICR.mN = 2;
  out->mICR.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 2);
  return out;
}

static NeDsMethodOutput *ds_output_icr_im(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICR_IM.mN = 2;
  out->mICR_IM.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  return out;
}

static NeDsMethodOutput *ds_output_icr_id(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICR_ID.mN = 2;
  out->mICR_ID.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 2);
  return out;
}

static NeDsMethodOutput *ds_output_icr_il(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICR_IL.mN = 2;
  out->mICR_IL.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 2);
  return out;
}

static NeDsMethodOutput *ds_output_dxicr(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXICR.mN = 2;
  out->mDXICR.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 2);
  return out;
}

static NeDsMethodOutput *ds_output_dxicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXICR_P.mNumCol = 29;
  out->mDXICR_P.mNumRow = 2;
  out->mDXICR_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 30);
  out->mDXICR_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 2);
  return out;
}

static NeDsMethodOutput *ds_output_ddicr(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDICR.mN = 0;
  out->mDDICR.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_ddicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDICR_P.mNumCol = 0;
  out->mDDICR_P.mNumRow = 2;
  out->mDDICR_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 1);
  out->mDDICR_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_tduicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDUICR_P.mNumCol = 11;
  out->mTDUICR_P.mNumRow = 2;
  out->mTDUICR_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 12);
  out->mTDUICR_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_icrm_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICRM_P.mNumCol = 29;
  out->mICRM_P.mNumRow = 2;
  out->mICRM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    30);
  out->mICRM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_icrm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICRM.mN = 0;
  out->mICRM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dxicrm_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXICRM_P.mNumCol = 29;
  out->mDXICRM_P.mNumRow = 0;
  out->mDXICRM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 30);
  out->mDXICRM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dxicrm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXICRM.mN = 0;
  out->mDXICRM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_ddicrm_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDICRM_P.mNumCol = 0;
  out->mDDICRM_P.mNumRow = 0;
  out->mDDICRM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 1);
  out->mDDICRM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_ddicrm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDICRM.mN = 0;
  out->mDDICRM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_mduy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mMDUY_P.mNumCol = 11;
  out->mMDUY_P.mNumRow = 6;
  out->mMDUY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    12);
  out->mMDUY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_mdxy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mMDXY_P.mNumCol = 29;
  out->mMDXY_P.mNumRow = 6;
  out->mMDXY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    30);
  out->mMDXY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    1);
  return out;
}

static NeDsMethodOutput *ds_output_tduy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDUY_P.mNumCol = 11;
  out->mTDUY_P.mNumRow = 6;
  out->mTDUY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    12);
  out->mTDUY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_tdxy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDXY_P.mNumCol = 29;
  out->mTDXY_P.mNumRow = 6;
  out->mTDXY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    30);
  out->mTDXY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    12);
  return out;
}

static NeDsMethodOutput *ds_output_y(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mY.mN = 6;
  out->mY.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 6);
  return out;
}

static NeDsMethodOutput *ds_output_dxy_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXY_P.mNumCol = 29;
  out->mDXY_P.mNumRow = 6;
  out->mDXY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    30);
  out->mDXY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    12);
  return out;
}

static NeDsMethodOutput *ds_output_dxy(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXY.mN = 12;
  out->mDXY.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 12);
  return out;
}

static NeDsMethodOutput *ds_output_duy_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUY_P.mNumCol = 11;
  out->mDUY_P.mNumRow = 6;
  out->mDUY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    12);
  out->mDUY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_duy(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUY.mN = 0;
  out->mDUY.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dty_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTY_P.mNumCol = 1;
  out->mDTY_P.mNumRow = 6;
  out->mDTY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mDTY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dty(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTY.mN = 0;
  out->mDTY.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_mode(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mMODE.mN = 15;
  out->mMODE.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    15);
  return out;
}

static NeDsMethodOutput *ds_output_zc(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mZC.mN = 16;
  out->mZC.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 16);
  return out;
}

static NeDsMethodOutput *ds_output_cache_r(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mCACHE_R.mN = 0;
  out->mCACHE_R.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_cache_i(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mCACHE_I.mN = 0;
  out->mCACHE_I.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_update_r(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mUPDATE_R.mN = 0;
  out->mUPDATE_R.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_update_i(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mUPDATE_I.mN = 0;
  out->mUPDATE_I.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_update2_r(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mUPDATE2_R.mN = 0;
  out->mUPDATE2_R.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_update2_i(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mUPDATE2_I.mN = 0;
  out->mUPDATE2_I.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_lock_r(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLOCK_R.mN = 0;
  out->mLOCK_R.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_lock_i(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLOCK_I.mN = 0;
  out->mLOCK_I.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_lock2_r(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLOCK2_R.mN = 0;
  out->mLOCK2_R.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_lock2_i(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLOCK2_I.mN = 0;
  out->mLOCK2_I.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_sfo(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSFO.mN = 0;
  out->mSFO.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_sfp(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSFP.mN = 0;
  out->mSFP.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_init_r(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mINIT_R.mN = 0;
  out->mINIT_R.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_init_i(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mINIT_I.mN = 0;
  out->mINIT_I.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_log(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLOG.mN = 257;
  out->mLOG.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 257);
  return out;
}

static NeDsMethodOutput *ds_output_assert(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mASSERT.mN = 16;
  out->mASSERT.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    16);
  return out;
}

static NeDsMethodOutput *ds_output_passert(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mPASSERT.mN = 1;
  out->mPASSERT.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    1);
  return out;
}

static NeDsMethodOutput *ds_output_iassert(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mIASSERT.mN = 0;
  out->mIASSERT.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_del_t(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDEL_T.mN = 0;
  out->mDEL_T.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_del_v(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDEL_V.mN = 0;
  out->mDEL_V.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_del_v0(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDEL_V0.mN = 0;
  out->mDEL_V0.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_del_tmax(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDEL_TMAX.mN = 0;
  out->mDEL_TMAX.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dxdelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXDELT_P.mNumCol = 29;
  out->mDXDELT_P.mNumRow = 0;
  out->mDXDELT_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 30);
  out->mDXDELT_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dxdelt(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXDELT.mN = 0;
  out->mDXDELT.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dudelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUDELT_P.mNumCol = 11;
  out->mDUDELT_P.mNumRow = 0;
  out->mDUDELT_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 12);
  out->mDUDELT_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dudelt(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUDELT.mN = 0;
  out->mDUDELT.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dtdelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTDELT_P.mNumCol = 1;
  out->mDTDELT_P.mNumRow = 0;
  out->mDTDELT_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 2);
  out->mDTDELT_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dtdelt(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTDELT.mN = 0;
  out->mDTDELT.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_obs_exp(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_EXP.mN = 254;
  out->mOBS_EXP.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    254);
  return out;
}

static NeDsMethodOutput *ds_output_obs_act(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_ACT.mN = 254;
  out->mOBS_ACT.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    254);
  return out;
}

static NeDsMethodOutput *ds_output_obs_all(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_ALL.mN = 254;
  out->mOBS_ALL.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    254);
  return out;
}

static NeDsMethodOutput *ds_output_obs_il(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_IL.mN = 254;
  out->mOBS_IL.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 254);
  return out;
}

static NeDsMethodOutput *ds_output_dp_l(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDP_L.mN = 0;
  out->mDP_L.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dp_i(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDP_I.mN = 0;
  out->mDP_I.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dp_j(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDP_J.mN = 0;
  out->mDP_J.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dp_r(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDP_R.mN = 1;
  out->mDP_R.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 1);
  return out;
}

static NeDsMethodOutput *ds_output_qx(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQX.mN = 0;
  out->mQX.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_qu(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQU.mN = 0;
  out->mQU.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_qt(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQT.mN = 0;
  out->mQT.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_q1(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQ1.mN = 0;
  out->mQ1.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_qx_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQX_P.mNumCol = 29;
  out->mQX_P.mNumRow = 29;
  out->mQX_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    30);
  out->mQX_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_qu_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQU_P.mNumCol = 11;
  out->mQU_P.mNumRow = 29;
  out->mQU_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    12);
  out->mQU_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_qt_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQT_P.mNumCol = 1;
  out->mQT_P.mNumRow = 29;
  out->mQT_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mQT_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_q1_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQ1_P.mNumCol = 1;
  out->mQ1_P.mNumRow = 29;
  out->mQ1_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mQ1_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_var_tol(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVAR_TOL.mN = 29;
  out->mVAR_TOL.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    29);
  return out;
}

static NeDsMethodOutput *ds_output_eq_tol(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mEQ_TOL.mN = 29;
  out->mEQ_TOL.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    29);
  return out;
}

static NeDsMethodOutput *ds_output_lv(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLV.mN = 29;
  out->mLV.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    29);
  return out;
}

static NeDsMethodOutput *ds_output_slv(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSLV.mN = 29;
  out->mSLV.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    29);
  return out;
}

static NeDsMethodOutput *ds_output_imin(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mIMIN.mN = 29;
  out->mIMIN.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 29);
  return out;
}

static NeDsMethodOutput *ds_output_imax(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mIMAX.mN = 29;
  out->mIMAX.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 29);
  return out;
}

static void release_reference(NeDynamicSystem *ds)
{
  _NeDynamicSystem *_ds;
  _ds = (_NeDynamicSystem *)ds;
  if (--_ds->mRefCnt == 0) {
    _ds->mAlloc.mFreeFcn(&_ds->mAlloc, _ds);
  }
}

static void get_reference(NeDynamicSystem *ds)
{
  _NeDynamicSystem *_ds;
  _ds = (_NeDynamicSystem *)ds;
  ++_ds->mRefCnt;
}

static NeDynamicSystem *diagnostics(NeDynamicSystem *ds, boolean_T kp)
{
  _NeDynamicSystem *_ds = (_NeDynamicSystem *)ds;
  (void) kp;
  ne_ds_get_reference(&_ds->mBase);
  return &_ds->mBase;
}

static void expand(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                   PmRealVector *out, boolean_T kp)
{
  (void)ds;
  (void)kp;
  memcpy(out->mX, in->mX.mX, sizeof(real_T)*out->mN);
}

NeDynamicSystem *PMSM_Plant_Model_e54d855d_1_dae_ds(PmAllocator *allocator)
{
  NeDynamicSystem *ds;
  _NeDynamicSystem *_ds;
  static NeDsIoInfo input_info[9];
  static NeDsIoInfo output_info[4];

  /* allocate dynamic system data and extended data */
  _ds = (_NeDynamicSystem *)allocator->mCallocFcn( allocator, sizeof
    (_NeDynamicSystem), 1);
  _ds->mAlloc = *allocator;
  _ds->mRefCnt = 1;
  ds = &_ds->mBase;

  /* setup sizes */
  ds->mNumVariables = 29;
  ds->mNumDiscreteRealVariables = 0;
  ds->mNumDifferentialVariables = 7;
  ds->mNumEquations = 29;
  ds->mNumICResiduals = 2;
  ds->mNumModes = 15;
  ds->mNumMajorModes = 0;
  ds->mNumRealCache = 0;
  ds->mNumIntCache = 0;
  ds->mNumObservables = 182;
  ds->mNumObservableElements = 257;
  ds->mNumZcs = 16;
  ds->mNumAsserts = 16;
  ds->mNumAssertRanges = 16;
  ds->mNumParamAsserts = 1;
  ds->mNumParamAssertRanges = 1;
  ds->mNumInitialAsserts = 0;
  ds->mNumInitialAssertRanges = 0;
  ds->mNumRanges = 19;
  ds->mNumEquationRanges = 62;
  ds->mNumICRRanges = 2;
  ds->mNumFundamentalSamples = 0;
  ds->mNumDelays = 0;
  ds->mNumLogicalParameters = 0;
  ds->mNumIntegerParameters = 0;
  ds->mNumIndexParameters = 0;
  ds->mNumRealParameters = 3;
  ds->mNumLogicalDerivedParameters = 0;
  ds->mNumIntegerDerivedParameters = 0;
  ds->mNumIndexDerivedParameters = 0;
  ds->mNumRealDerivedParameters = 1;
  ds->mIsOutputLinear = FALSE;
  ds->mIsOutputSwitchedLinear = FALSE;

  /* setup ios */
  ds->mNumIo[NE_INPUT_IO_TYPE] = 9;
  input_info[0].mIdentifier =
    "PMSM_Physical_Model.PMSM_Simscape_Model.Brake.Rotational_Friction_Brake.S";
  input_info[0].mM = 1;
  input_info[0].mN = 1;
  input_info[0].mName =
    "PMSM_Physical_Model.PMSM_Simscape_Model.Brake.Rotational_Friction_Brake.S";
  input_info[0].mUnit = "1";
  input_info[1].mIdentifier =
    "PMSM_Physical_Model.PMSM_Simscape_Model.Torque_Load.Ideal_Torque_Source.S";
  input_info[1].mM = 1;
  input_info[1].mN = 1;
  input_info[1].mName =
    "PMSM_Physical_Model.PMSM_Simscape_Model.Torque_Load.Ideal_Torque_Source.S";
  input_info[1].mUnit = "N*m";
  input_info[2].mIdentifier =
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Six_Pulse_Gate_Multiplexer.GaH";
  input_info[2].mM = 1;
  input_info[2].mN = 1;
  input_info[2].mName =
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Six_Pulse_Gate_Multiplexer.GaH";
  input_info[2].mUnit = "V";
  input_info[3].mIdentifier =
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Six_Pulse_Gate_Multiplexer.GaL";
  input_info[3].mM = 1;
  input_info[3].mN = 1;
  input_info[3].mName =
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Six_Pulse_Gate_Multiplexer.GaL";
  input_info[3].mUnit = "V";
  input_info[4].mIdentifier =
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Six_Pulse_Gate_Multiplexer.GbH";
  input_info[4].mM = 1;
  input_info[4].mN = 1;
  input_info[4].mName =
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Six_Pulse_Gate_Multiplexer.GbH";
  input_info[4].mUnit = "V";
  input_info[5].mIdentifier =
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Six_Pulse_Gate_Multiplexer.GbL";
  input_info[5].mM = 1;
  input_info[5].mN = 1;
  input_info[5].mName =
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Six_Pulse_Gate_Multiplexer.GbL";
  input_info[5].mUnit = "V";
  input_info[6].mIdentifier =
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Six_Pulse_Gate_Multiplexer.GcH";
  input_info[6].mM = 1;
  input_info[6].mN = 1;
  input_info[6].mName =
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Six_Pulse_Gate_Multiplexer.GcH";
  input_info[6].mUnit = "V";
  input_info[7].mIdentifier =
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Six_Pulse_Gate_Multiplexer.GcL";
  input_info[7].mM = 1;
  input_info[7].mN = 1;
  input_info[7].mName =
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Six_Pulse_Gate_Multiplexer.GcL";
  input_info[7].mUnit = "V";
  input_info[8].mIdentifier =
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Three_Element_Demux1.abc";
  input_info[8].mM = 1;
  input_info[8].mN = 3;
  input_info[8].mName =
    "PMSM_Physical_Model.PMSM_Simscape_Model.PWM_Peripheral_And_Inverter.Three_Element_Demux1.abc";
  input_info[8].mUnit = "1";
  ds->mIo[NE_INPUT_IO_TYPE] = input_info;
  ds->mNumIo[NE_OUTPUT_IO_TYPE] = 4;
  output_info[0].mIdentifier =
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Current_Sensor.I_output";
  output_info[0].mM = 1;
  output_info[0].mN = 3;
  output_info[0].mName =
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Current_Sensor.I_output";
  output_info[0].mUnit = "A";
  output_info[1].mIdentifier =
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Ideal_Rotational_Mot_ion_Sensor.A";
  output_info[1].mM = 1;
  output_info[1].mN = 1;
  output_info[1].mName =
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Ideal_Rotational_Mot_ion_Sensor.A";
  output_info[1].mUnit = "rad";
  output_info[2].mIdentifier =
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Ideal_Rotational_Mot_ion_Sensor.W";
  output_info[2].mM = 1;
  output_info[2].mN = 1;
  output_info[2].mName =
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Ideal_Rotational_Mot_ion_Sensor.W";
  output_info[2].mUnit = "rad/s";
  output_info[3].mIdentifier =
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Ideal_Torque_Sensor.T";
  output_info[3].mM = 1;
  output_info[3].mN = 1;
  output_info[3].mName =
    "PMSM_Physical_Model.PMSM_Simscape_Model.PMSM.Ideal_Torque_Sensor.T";
  output_info[3].mUnit = "N*m";
  ds->mIo[NE_OUTPUT_IO_TYPE] = output_info;

  /* setup administration methods */
  ds->mReleaseReference = release_reference;
  ds->mGetReference = get_reference;
  ds->mDiagnosticsDsFcn = diagnostics;
  ds->mExpandFcn = expand;
  ds->mMethods[NE_DS_METHOD_M_P] = PMSM_Plant_Model_e54d855d_1_ds_m_p;
  ds->mMakeOutput[NE_DS_METHOD_M_P] = ds_output_m_p;
  ds->mMethods[NE_DS_METHOD_M] = ds_m;
  ds->mMakeOutput[NE_DS_METHOD_M] = ds_output_m;
  ds->mMethods[NE_DS_METHOD_VMM] = ds_vmm;
  ds->mMakeOutput[NE_DS_METHOD_VMM] = ds_output_vmm;
  ds->mMethods[NE_DS_METHOD_DXM_P] = ds_dxm_p;
  ds->mMakeOutput[NE_DS_METHOD_DXM_P] = ds_output_dxm_p;
  ds->mMethods[NE_DS_METHOD_DXM] = ds_dxm;
  ds->mMakeOutput[NE_DS_METHOD_DXM] = ds_output_dxm;
  ds->mMethods[NE_DS_METHOD_DDM_P] = ds_ddm_p;
  ds->mMakeOutput[NE_DS_METHOD_DDM_P] = ds_output_ddm_p;
  ds->mMethods[NE_DS_METHOD_DDM] = ds_ddm;
  ds->mMakeOutput[NE_DS_METHOD_DDM] = ds_output_ddm;
  ds->mMethods[NE_DS_METHOD_DUM_P] = ds_dum_p;
  ds->mMakeOutput[NE_DS_METHOD_DUM_P] = ds_output_dum_p;
  ds->mMethods[NE_DS_METHOD_DUM] = ds_dum;
  ds->mMakeOutput[NE_DS_METHOD_DUM] = ds_output_dum;
  ds->mMethods[NE_DS_METHOD_DTM_P] = ds_dtm_p;
  ds->mMakeOutput[NE_DS_METHOD_DTM_P] = ds_output_dtm_p;
  ds->mMethods[NE_DS_METHOD_DTM] = ds_dtm;
  ds->mMakeOutput[NE_DS_METHOD_DTM] = ds_output_dtm;
  ds->mMethods[NE_DS_METHOD_DPM_P] = ds_dpm_p;
  ds->mMakeOutput[NE_DS_METHOD_DPM_P] = ds_output_dpm_p;
  ds->mMethods[NE_DS_METHOD_DPM] = ds_dpm;
  ds->mMakeOutput[NE_DS_METHOD_DPM] = ds_output_dpm;
  ds->mMethods[NE_DS_METHOD_A_P] = PMSM_Plant_Model_e54d855d_1_ds_a_p;
  ds->mMakeOutput[NE_DS_METHOD_A_P] = ds_output_a_p;
  ds->mMethods[NE_DS_METHOD_A] = ds_a;
  ds->mMakeOutput[NE_DS_METHOD_A] = ds_output_a;
  ds->mMethods[NE_DS_METHOD_B_P] = ds_b_p;
  ds->mMakeOutput[NE_DS_METHOD_B_P] = ds_output_b_p;
  ds->mMethods[NE_DS_METHOD_B] = ds_b;
  ds->mMakeOutput[NE_DS_METHOD_B] = ds_output_b;
  ds->mMethods[NE_DS_METHOD_C_P] = ds_c_p;
  ds->mMakeOutput[NE_DS_METHOD_C_P] = ds_output_c_p;
  ds->mMethods[NE_DS_METHOD_C] = ds_c;
  ds->mMakeOutput[NE_DS_METHOD_C] = ds_output_c;
  ds->mMethods[NE_DS_METHOD_F] = PMSM_Plant_Model_e54d855d_1_ds_f;
  ds->mMakeOutput[NE_DS_METHOD_F] = ds_output_f;
  ds->mMethods[NE_DS_METHOD_VMF] = ds_vmf;
  ds->mMakeOutput[NE_DS_METHOD_VMF] = ds_output_vmf;
  ds->mMethods[NE_DS_METHOD_VPF] = ds_vpf;
  ds->mMakeOutput[NE_DS_METHOD_VPF] = ds_output_vpf;
  ds->mMethods[NE_DS_METHOD_SLF] = ds_slf;
  ds->mMakeOutput[NE_DS_METHOD_SLF] = ds_output_slf;
  ds->mMethods[NE_DS_METHOD_SLF0] = ds_slf0;
  ds->mMakeOutput[NE_DS_METHOD_SLF0] = ds_output_slf0;
  ds->mMethods[NE_DS_METHOD_DXF_P] = PMSM_Plant_Model_e54d855d_1_ds_dxf_p;
  ds->mMakeOutput[NE_DS_METHOD_DXF_P] = ds_output_dxf_p;
  ds->mMethods[NE_DS_METHOD_DXF] = PMSM_Plant_Model_e54d855d_1_ds_dxf;
  ds->mMakeOutput[NE_DS_METHOD_DXF] = ds_output_dxf;
  ds->mMethods[NE_DS_METHOD_DUF_P] = ds_duf_p;
  ds->mMakeOutput[NE_DS_METHOD_DUF_P] = ds_output_duf_p;
  ds->mMethods[NE_DS_METHOD_DUF] = PMSM_Plant_Model_e54d855d_1_ds_duf;
  ds->mMakeOutput[NE_DS_METHOD_DUF] = ds_output_duf;
  ds->mMethods[NE_DS_METHOD_DTF_P] = ds_dtf_p;
  ds->mMakeOutput[NE_DS_METHOD_DTF_P] = ds_output_dtf_p;
  ds->mMethods[NE_DS_METHOD_DTF] = ds_dtf;
  ds->mMakeOutput[NE_DS_METHOD_DTF] = ds_output_dtf;
  ds->mMethods[NE_DS_METHOD_DDF_P] = ds_ddf_p;
  ds->mMakeOutput[NE_DS_METHOD_DDF_P] = ds_output_ddf_p;
  ds->mMethods[NE_DS_METHOD_DDF] = ds_ddf;
  ds->mMakeOutput[NE_DS_METHOD_DDF] = ds_output_ddf;
  ds->mMethods[NE_DS_METHOD_DPDXF_P] = ds_dpdxf_p;
  ds->mMakeOutput[NE_DS_METHOD_DPDXF_P] = ds_output_dpdxf_p;
  ds->mMethods[NE_DS_METHOD_DPDXF] = ds_dpdxf;
  ds->mMakeOutput[NE_DS_METHOD_DPDXF] = ds_output_dpdxf;
  ds->mMethods[NE_DS_METHOD_DWF_P] = ds_dwf_p;
  ds->mMakeOutput[NE_DS_METHOD_DWF_P] = ds_output_dwf_p;
  ds->mMethods[NE_DS_METHOD_DWF] = ds_dwf;
  ds->mMakeOutput[NE_DS_METHOD_DWF] = ds_output_dwf;
  ds->mMethods[NE_DS_METHOD_TDUF_P] = PMSM_Plant_Model_e54d855d_1_ds_tduf_p;
  ds->mMakeOutput[NE_DS_METHOD_TDUF_P] = ds_output_tduf_p;
  ds->mMethods[NE_DS_METHOD_TDXF_P] = PMSM_Plant_Model_e54d855d_1_ds_tdxf_p;
  ds->mMakeOutput[NE_DS_METHOD_TDXF_P] = ds_output_tdxf_p;
  ds->mMethods[NE_DS_METHOD_DNF_P] = PMSM_Plant_Model_e54d855d_1_ds_dnf_p;
  ds->mMakeOutput[NE_DS_METHOD_DNF_P] = ds_output_dnf_p;
  ds->mMethods[NE_DS_METHOD_DNF] = ds_dnf;
  ds->mMakeOutput[NE_DS_METHOD_DNF] = ds_output_dnf;
  ds->mMethods[NE_DS_METHOD_DNF_V_X] = ds_dnf_v_x;
  ds->mMakeOutput[NE_DS_METHOD_DNF_V_X] = ds_output_dnf_v_x;
  ds->mMethods[NE_DS_METHOD_IC] = ds_ic;
  ds->mMakeOutput[NE_DS_METHOD_IC] = ds_output_ic;
  ds->mMethods[NE_DS_METHOD_ICR] = ds_icr;
  ds->mMakeOutput[NE_DS_METHOD_ICR] = ds_output_icr;
  ds->mMethods[NE_DS_METHOD_ICR_IM] = ds_icr_im;
  ds->mMakeOutput[NE_DS_METHOD_ICR_IM] = ds_output_icr_im;
  ds->mMethods[NE_DS_METHOD_ICR_ID] = ds_icr_id;
  ds->mMakeOutput[NE_DS_METHOD_ICR_ID] = ds_output_icr_id;
  ds->mMethods[NE_DS_METHOD_ICR_IL] = ds_icr_il;
  ds->mMakeOutput[NE_DS_METHOD_ICR_IL] = ds_output_icr_il;
  ds->mMethods[NE_DS_METHOD_DXICR] = ds_dxicr;
  ds->mMakeOutput[NE_DS_METHOD_DXICR] = ds_output_dxicr;
  ds->mMethods[NE_DS_METHOD_DXICR_P] = ds_dxicr_p;
  ds->mMakeOutput[NE_DS_METHOD_DXICR_P] = ds_output_dxicr_p;
  ds->mMethods[NE_DS_METHOD_DDICR] = ds_ddicr;
  ds->mMakeOutput[NE_DS_METHOD_DDICR] = ds_output_ddicr;
  ds->mMethods[NE_DS_METHOD_DDICR_P] = ds_ddicr_p;
  ds->mMakeOutput[NE_DS_METHOD_DDICR_P] = ds_output_ddicr_p;
  ds->mMethods[NE_DS_METHOD_TDUICR_P] = ds_tduicr_p;
  ds->mMakeOutput[NE_DS_METHOD_TDUICR_P] = ds_output_tduicr_p;
  ds->mMethods[NE_DS_METHOD_ICRM_P] = ds_icrm_p;
  ds->mMakeOutput[NE_DS_METHOD_ICRM_P] = ds_output_icrm_p;
  ds->mMethods[NE_DS_METHOD_ICRM] = ds_icrm;
  ds->mMakeOutput[NE_DS_METHOD_ICRM] = ds_output_icrm;
  ds->mMethods[NE_DS_METHOD_DXICRM_P] = ds_dxicrm_p;
  ds->mMakeOutput[NE_DS_METHOD_DXICRM_P] = ds_output_dxicrm_p;
  ds->mMethods[NE_DS_METHOD_DXICRM] = ds_dxicrm;
  ds->mMakeOutput[NE_DS_METHOD_DXICRM] = ds_output_dxicrm;
  ds->mMethods[NE_DS_METHOD_DDICRM_P] = ds_ddicrm_p;
  ds->mMakeOutput[NE_DS_METHOD_DDICRM_P] = ds_output_ddicrm_p;
  ds->mMethods[NE_DS_METHOD_DDICRM] = ds_ddicrm;
  ds->mMakeOutput[NE_DS_METHOD_DDICRM] = ds_output_ddicrm;
  ds->mMethods[NE_DS_METHOD_MDUY_P] = ds_mduy_p;
  ds->mMakeOutput[NE_DS_METHOD_MDUY_P] = ds_output_mduy_p;
  ds->mMethods[NE_DS_METHOD_MDXY_P] = ds_mdxy_p;
  ds->mMakeOutput[NE_DS_METHOD_MDXY_P] = ds_output_mdxy_p;
  ds->mMethods[NE_DS_METHOD_TDUY_P] = ds_tduy_p;
  ds->mMakeOutput[NE_DS_METHOD_TDUY_P] = ds_output_tduy_p;
  ds->mMethods[NE_DS_METHOD_TDXY_P] = PMSM_Plant_Model_e54d855d_1_ds_tdxy_p;
  ds->mMakeOutput[NE_DS_METHOD_TDXY_P] = ds_output_tdxy_p;
  ds->mMethods[NE_DS_METHOD_Y] = ds_y;
  ds->mMakeOutput[NE_DS_METHOD_Y] = ds_output_y;
  ds->mMethods[NE_DS_METHOD_DXY_P] = PMSM_Plant_Model_e54d855d_1_ds_dxy_p;
  ds->mMakeOutput[NE_DS_METHOD_DXY_P] = ds_output_dxy_p;
  ds->mMethods[NE_DS_METHOD_DXY] = ds_dxy;
  ds->mMakeOutput[NE_DS_METHOD_DXY] = ds_output_dxy;
  ds->mMethods[NE_DS_METHOD_DUY_P] = ds_duy_p;
  ds->mMakeOutput[NE_DS_METHOD_DUY_P] = ds_output_duy_p;
  ds->mMethods[NE_DS_METHOD_DUY] = ds_duy;
  ds->mMakeOutput[NE_DS_METHOD_DUY] = ds_output_duy;
  ds->mMethods[NE_DS_METHOD_DTY_P] = ds_dty_p;
  ds->mMakeOutput[NE_DS_METHOD_DTY_P] = ds_output_dty_p;
  ds->mMethods[NE_DS_METHOD_DTY] = ds_dty;
  ds->mMakeOutput[NE_DS_METHOD_DTY] = ds_output_dty;
  ds->mMethods[NE_DS_METHOD_MODE] = PMSM_Plant_Model_e54d855d_1_ds_mode;
  ds->mMakeOutput[NE_DS_METHOD_MODE] = ds_output_mode;
  ds->mMethods[NE_DS_METHOD_ZC] = PMSM_Plant_Model_e54d855d_1_ds_zc;
  ds->mMakeOutput[NE_DS_METHOD_ZC] = ds_output_zc;
  ds->mMethods[NE_DS_METHOD_CACHE_R] = ds_cache_r;
  ds->mMakeOutput[NE_DS_METHOD_CACHE_R] = ds_output_cache_r;
  ds->mMethods[NE_DS_METHOD_CACHE_I] = ds_cache_i;
  ds->mMakeOutput[NE_DS_METHOD_CACHE_I] = ds_output_cache_i;
  ds->mMethods[NE_DS_METHOD_UPDATE_R] = ds_update_r;
  ds->mMakeOutput[NE_DS_METHOD_UPDATE_R] = ds_output_update_r;
  ds->mMethods[NE_DS_METHOD_UPDATE_I] = ds_update_i;
  ds->mMakeOutput[NE_DS_METHOD_UPDATE_I] = ds_output_update_i;
  ds->mMethods[NE_DS_METHOD_UPDATE2_R] = ds_update2_r;
  ds->mMakeOutput[NE_DS_METHOD_UPDATE2_R] = ds_output_update2_r;
  ds->mMethods[NE_DS_METHOD_UPDATE2_I] = ds_update2_i;
  ds->mMakeOutput[NE_DS_METHOD_UPDATE2_I] = ds_output_update2_i;
  ds->mMethods[NE_DS_METHOD_LOCK_R] = ds_lock_r;
  ds->mMakeOutput[NE_DS_METHOD_LOCK_R] = ds_output_lock_r;
  ds->mMethods[NE_DS_METHOD_LOCK_I] = ds_lock_i;
  ds->mMakeOutput[NE_DS_METHOD_LOCK_I] = ds_output_lock_i;
  ds->mMethods[NE_DS_METHOD_LOCK2_R] = ds_lock2_r;
  ds->mMakeOutput[NE_DS_METHOD_LOCK2_R] = ds_output_lock2_r;
  ds->mMethods[NE_DS_METHOD_LOCK2_I] = ds_lock2_i;
  ds->mMakeOutput[NE_DS_METHOD_LOCK2_I] = ds_output_lock2_i;
  ds->mMethods[NE_DS_METHOD_SFO] = ds_sfo;
  ds->mMakeOutput[NE_DS_METHOD_SFO] = ds_output_sfo;
  ds->mMethods[NE_DS_METHOD_SFP] = ds_sfp;
  ds->mMakeOutput[NE_DS_METHOD_SFP] = ds_output_sfp;
  ds->mMethods[NE_DS_METHOD_INIT_R] = ds_init_r;
  ds->mMakeOutput[NE_DS_METHOD_INIT_R] = ds_output_init_r;
  ds->mMethods[NE_DS_METHOD_INIT_I] = ds_init_i;
  ds->mMakeOutput[NE_DS_METHOD_INIT_I] = ds_output_init_i;
  ds->mMethods[NE_DS_METHOD_LOG] = PMSM_Plant_Model_e54d855d_1_ds_log;
  ds->mMakeOutput[NE_DS_METHOD_LOG] = ds_output_log;
  ds->mMethods[NE_DS_METHOD_ASSERT] = PMSM_Plant_Model_e54d855d_1_ds_assert;
  ds->mMakeOutput[NE_DS_METHOD_ASSERT] = ds_output_assert;
  ds->mMethods[NE_DS_METHOD_PASSERT] = ds_passert;
  ds->mMakeOutput[NE_DS_METHOD_PASSERT] = ds_output_passert;
  ds->mMethods[NE_DS_METHOD_IASSERT] = ds_iassert;
  ds->mMakeOutput[NE_DS_METHOD_IASSERT] = ds_output_iassert;
  ds->mMethods[NE_DS_METHOD_DEL_T] = ds_del_t;
  ds->mMakeOutput[NE_DS_METHOD_DEL_T] = ds_output_del_t;
  ds->mMethods[NE_DS_METHOD_DEL_V] = ds_del_v;
  ds->mMakeOutput[NE_DS_METHOD_DEL_V] = ds_output_del_v;
  ds->mMethods[NE_DS_METHOD_DEL_V0] = ds_del_v0;
  ds->mMakeOutput[NE_DS_METHOD_DEL_V0] = ds_output_del_v0;
  ds->mMethods[NE_DS_METHOD_DEL_TMAX] = ds_del_tmax;
  ds->mMakeOutput[NE_DS_METHOD_DEL_TMAX] = ds_output_del_tmax;
  ds->mMethods[NE_DS_METHOD_DXDELT_P] = ds_dxdelt_p;
  ds->mMakeOutput[NE_DS_METHOD_DXDELT_P] = ds_output_dxdelt_p;
  ds->mMethods[NE_DS_METHOD_DXDELT] = ds_dxdelt;
  ds->mMakeOutput[NE_DS_METHOD_DXDELT] = ds_output_dxdelt;
  ds->mMethods[NE_DS_METHOD_DUDELT_P] = ds_dudelt_p;
  ds->mMakeOutput[NE_DS_METHOD_DUDELT_P] = ds_output_dudelt_p;
  ds->mMethods[NE_DS_METHOD_DUDELT] = ds_dudelt;
  ds->mMakeOutput[NE_DS_METHOD_DUDELT] = ds_output_dudelt;
  ds->mMethods[NE_DS_METHOD_DTDELT_P] = ds_dtdelt_p;
  ds->mMakeOutput[NE_DS_METHOD_DTDELT_P] = ds_output_dtdelt_p;
  ds->mMethods[NE_DS_METHOD_DTDELT] = ds_dtdelt;
  ds->mMakeOutput[NE_DS_METHOD_DTDELT] = ds_output_dtdelt;
  ds->mMethods[NE_DS_METHOD_OBS_EXP] = PMSM_Plant_Model_e54d855d_1_ds_obs_exp;
  ds->mMakeOutput[NE_DS_METHOD_OBS_EXP] = ds_output_obs_exp;
  ds->mMethods[NE_DS_METHOD_OBS_ACT] = PMSM_Plant_Model_e54d855d_1_ds_obs_act;
  ds->mMakeOutput[NE_DS_METHOD_OBS_ACT] = ds_output_obs_act;
  ds->mMethods[NE_DS_METHOD_OBS_ALL] = PMSM_Plant_Model_e54d855d_1_ds_obs_all;
  ds->mMakeOutput[NE_DS_METHOD_OBS_ALL] = ds_output_obs_all;
  ds->mMethods[NE_DS_METHOD_OBS_IL] = PMSM_Plant_Model_e54d855d_1_ds_obs_il;
  ds->mMakeOutput[NE_DS_METHOD_OBS_IL] = ds_output_obs_il;
  ds->mMethods[NE_DS_METHOD_DP_L] = ds_dp_l;
  ds->mMakeOutput[NE_DS_METHOD_DP_L] = ds_output_dp_l;
  ds->mMethods[NE_DS_METHOD_DP_I] = ds_dp_i;
  ds->mMakeOutput[NE_DS_METHOD_DP_I] = ds_output_dp_i;
  ds->mMethods[NE_DS_METHOD_DP_J] = ds_dp_j;
  ds->mMakeOutput[NE_DS_METHOD_DP_J] = ds_output_dp_j;
  ds->mMethods[NE_DS_METHOD_DP_R] = ds_dp_r;
  ds->mMakeOutput[NE_DS_METHOD_DP_R] = ds_output_dp_r;
  ds->mMethods[NE_DS_METHOD_QX] = ds_qx;
  ds->mMakeOutput[NE_DS_METHOD_QX] = ds_output_qx;
  ds->mMethods[NE_DS_METHOD_QU] = ds_qu;
  ds->mMakeOutput[NE_DS_METHOD_QU] = ds_output_qu;
  ds->mMethods[NE_DS_METHOD_QT] = ds_qt;
  ds->mMakeOutput[NE_DS_METHOD_QT] = ds_output_qt;
  ds->mMethods[NE_DS_METHOD_Q1] = ds_q1;
  ds->mMakeOutput[NE_DS_METHOD_Q1] = ds_output_q1;
  ds->mMethods[NE_DS_METHOD_QX_P] = ds_qx_p;
  ds->mMakeOutput[NE_DS_METHOD_QX_P] = ds_output_qx_p;
  ds->mMethods[NE_DS_METHOD_QU_P] = ds_qu_p;
  ds->mMakeOutput[NE_DS_METHOD_QU_P] = ds_output_qu_p;
  ds->mMethods[NE_DS_METHOD_QT_P] = ds_qt_p;
  ds->mMakeOutput[NE_DS_METHOD_QT_P] = ds_output_qt_p;
  ds->mMethods[NE_DS_METHOD_Q1_P] = ds_q1_p;
  ds->mMakeOutput[NE_DS_METHOD_Q1_P] = ds_output_q1_p;
  ds->mMethods[NE_DS_METHOD_VAR_TOL] = ds_var_tol;
  ds->mMakeOutput[NE_DS_METHOD_VAR_TOL] = ds_output_var_tol;
  ds->mMethods[NE_DS_METHOD_EQ_TOL] = ds_eq_tol;
  ds->mMakeOutput[NE_DS_METHOD_EQ_TOL] = ds_output_eq_tol;
  ds->mMethods[NE_DS_METHOD_LV] = ds_lv;
  ds->mMakeOutput[NE_DS_METHOD_LV] = ds_output_lv;
  ds->mMethods[NE_DS_METHOD_SLV] = ds_slv;
  ds->mMakeOutput[NE_DS_METHOD_SLV] = ds_output_slv;
  ds->mMethods[NE_DS_METHOD_IMIN] = PMSM_Plant_Model_e54d855d_1_ds_imin;
  ds->mMakeOutput[NE_DS_METHOD_IMIN] = ds_output_imin;
  ds->mMethods[NE_DS_METHOD_IMAX] = PMSM_Plant_Model_e54d855d_1_ds_imax;
  ds->mMakeOutput[NE_DS_METHOD_IMAX] = ds_output_imax;

  /* equation data */
  ds->mEquationData = s_equation_data;

  /* icr data */
  ds->mICRData = s_icr_data;

  /* continuous variable data */
  ds->mVariableData = s_variable_data;

  /* discrete variable data */
  ds->mDiscreteData = s_discrete_data;

  /* observable data */
  ds->mObservableData = s_observable_data;

  /* major mode data */
  ds->mMajorModeData = s_major_mode_data;

  /* zc data */
  ds->mZCData = s_zc_data;

  /* ranges */
  ds->mRanges = s_range;

  /* assert data */
  ds->mAssertData = s_assert_data;

  /* assert ranges */
  ds->mAssertRanges = s_assert_range;

  /* param assert data */
  ds->mParamAssertData = s_param_assert_data;

  /* param assert ranges */
  ds->mParamAssertRanges = s_param_assert_range;

  /* initial assert data */
  ds->mInitialAssertData = s_initial_assert_data;

  /* initial assert ranges */
  ds->mInitialAssertRanges = s_initial_assert_range;

  /* equation ranges */
  ds->mEquationRanges = s_equation_range;

  /* icr ranges */
  ds->mICRRanges = s_icr_range;

  /* parameters */
  ds->mLogicalParameters = s_logical_parameter_data;
  ds->mIntegerParameters = s_integer_parameter_data;
  ds->mIndexParameters = s_index_parameter_data;
  ds->mRealParameters = s_real_parameter_data;

  /* constant tables */
  _ds->mTable0 = s_constant_table0;
  return (NeDynamicSystem *)_ds;
}

static int32_T ds_passert (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmIntVector out;
  real_T DP_R_idx_0;
  (void)LC;
  DP_R_idx_0 = t1->mDP_R.mX[0];
  out = t2->mPASSERT;
  out.mX[0] = (int32_T)(DP_R_idx_0 > 0.0);
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_iassert (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_del_v (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_del_v0 (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_del_tmax (const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_del_t (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dxdelt (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dxdelt_p (const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mDXDELT_P;
  out.mNumCol = 29ULL;
  out.mNumRow = 0ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  out.mJc[8] = 0;
  out.mJc[9] = 0;
  out.mJc[10] = 0;
  out.mJc[11] = 0;
  out.mJc[12] = 0;
  out.mJc[13] = 0;
  out.mJc[14] = 0;
  out.mJc[15] = 0;
  out.mJc[16] = 0;
  out.mJc[17] = 0;
  out.mJc[18] = 0;
  out.mJc[19] = 0;
  out.mJc[20] = 0;
  out.mJc[21] = 0;
  out.mJc[22] = 0;
  out.mJc[23] = 0;
  out.mJc[24] = 0;
  out.mJc[25] = 0;
  out.mJc[26] = 0;
  out.mJc[27] = 0;
  out.mJc[28] = 0;
  out.mJc[29] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dudelt (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dudelt_p (const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mDUDELT_P;
  out.mNumCol = 11ULL;
  out.mNumRow = 0ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  out.mJc[8] = 0;
  out.mJc[9] = 0;
  out.mJc[10] = 0;
  out.mJc[11] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dtdelt (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dtdelt_p (const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mDTDELT_P;
  out.mNumCol = 1ULL;
  out.mNumRow = 0ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_cache_r (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_init_r (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_update_r (const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_lock_r (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_cache_i (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_init_i (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_update_i (const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_lock_i (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_update2_r (const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_lock2_r (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_update2_i (const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_lock2_i (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_sfp (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_sfo (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_duf_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mDUF_P;
  out.mNumCol = 11ULL;
  out.mNumRow = 29ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 2;
  out.mJc[4] = 3;
  out.mJc[5] = 5;
  out.mJc[6] = 6;
  out.mJc[7] = 8;
  out.mJc[8] = 9;
  out.mJc[9] = 9;
  out.mJc[10] = 9;
  out.mJc[11] = 9;
  out.mIr[0] = 20;
  out.mIr[1] = 23;
  out.mIr[2] = 20;
  out.mIr[3] = 21;
  out.mIr[4] = 24;
  out.mIr[5] = 21;
  out.mIr[6] = 22;
  out.mIr[7] = 25;
  out.mIr[8] = 22;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dtf (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dtf_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mDTF_P;
  out.mNumCol = 1ULL;
  out.mNumRow = 29ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_ddf (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_ddf_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mDDF_P;
  out.mNumCol = 0ULL;
  out.mNumRow = 29ULL;
  out.mJc[0] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_a (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
                     NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  (void)LC;
  out = t2->mA;
  out.mX[0] = 1.0;
  out.mX[1] = -1.0;
  out.mX[2] = -9.0E-5;
  out.mX[3] = -1.0;
  out.mX[4] = -0.0;
  out.mX[5] = 1.0;
  out.mX[6] = 0.879;
  out.mX[7] = 0.4395;
  out.mX[8] = 0.507490886617681;
  out.mX[9] = 1.0;
  out.mX[10] = -1.0;
  out.mX[11] = -1.0;
  out.mX[12] = 1.0;
  out.mX[13] = 1.0;
  out.mX[14] = 1.0010000000000002E-9;
  out.mX[15] = -1.0;
  out.mX[16] = -1.0;
  out.mX[17] = -1.0;
  out.mX[18] = -1.0;
  out.mX[19] = 1.0;
  out.mX[20] = -1.0;
  out.mX[21] = 1.0;
  out.mX[22] = 1.0;
  out.mX[23] = 1.0;
  out.mX[24] = 1.0;
  out.mX[25] = 1.0;
  out.mX[26] = 1.0;
  out.mX[27] = 1.0;
  out.mX[28] = 1.0;
  out.mX[29] = 1.0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_b (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
                     NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  (void)LC;
  out = t2->mB;
  out.mX[0] = -1.0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_b_p (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mB_P;
  out.mNumCol = 11ULL;
  out.mNumRow = 29ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 1;
  out.mJc[3] = 1;
  out.mJc[4] = 1;
  out.mJc[5] = 1;
  out.mJc[6] = 1;
  out.mJc[7] = 1;
  out.mJc[8] = 1;
  out.mJc[9] = 1;
  out.mJc[10] = 1;
  out.mJc[11] = 1;
  out.mIr[0] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_c (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
                     NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_c_p (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mC_P;
  out.mNumCol = 1ULL;
  out.mNumRow = 29ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dwf (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dwf_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mDWF_P;
  out.mNumCol = 0ULL;
  out.mNumRow = 29ULL;
  out.mJc[0] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dpdxf (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dpdxf_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mDPDXF_P;
  out.mNumCol = 3ULL;
  out.mNumRow = 79ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_vmf (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  (void)LC;
  out = t2->mVMF;
  out.mX[0] = false;
  out.mX[1] = false;
  out.mX[2] = false;
  out.mX[3] = true;
  out.mX[4] = true;
  out.mX[5] = false;
  out.mX[6] = false;
  out.mX[7] = true;
  out.mX[8] = false;
  out.mX[9] = true;
  out.mX[10] = true;
  out.mX[11] = true;
  out.mX[12] = true;
  out.mX[13] = true;
  out.mX[14] = true;
  out.mX[15] = true;
  out.mX[16] = true;
  out.mX[17] = true;
  out.mX[18] = true;
  out.mX[19] = true;
  out.mX[20] = true;
  out.mX[21] = true;
  out.mX[22] = true;
  out.mX[23] = true;
  out.mX[24] = true;
  out.mX[25] = true;
  out.mX[26] = true;
  out.mX[27] = true;
  out.mX[28] = true;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_slf (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  (void)LC;
  out = t2->mSLF;
  out.mX[0] = false;
  out.mX[1] = false;
  out.mX[2] = false;
  out.mX[3] = false;
  out.mX[4] = false;
  out.mX[5] = false;
  out.mX[6] = false;
  out.mX[7] = false;
  out.mX[8] = false;
  out.mX[9] = false;
  out.mX[10] = false;
  out.mX[11] = false;
  out.mX[12] = false;
  out.mX[13] = false;
  out.mX[14] = false;
  out.mX[15] = false;
  out.mX[16] = false;
  out.mX[17] = false;
  out.mX[18] = false;
  out.mX[19] = false;
  out.mX[20] = false;
  out.mX[21] = false;
  out.mX[22] = false;
  out.mX[23] = false;
  out.mX[24] = false;
  out.mX[25] = false;
  out.mX[26] = false;
  out.mX[27] = false;
  out.mX[28] = false;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dnf (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dnf_v_x (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  (void)LC;
  out = t2->mDNF_V_X;
  out.mX[0] = true;
  out.mX[1] = true;
  out.mX[2] = true;
  out.mX[3] = true;
  out.mX[4] = true;
  out.mX[5] = true;
  out.mX[6] = true;
  out.mX[7] = true;
  out.mX[8] = false;
  out.mX[9] = true;
  out.mX[10] = true;
  out.mX[11] = true;
  out.mX[12] = true;
  out.mX[13] = true;
  out.mX[14] = true;
  out.mX[15] = true;
  out.mX[16] = true;
  out.mX[17] = true;
  out.mX[18] = true;
  out.mX[19] = true;
  out.mX[20] = true;
  out.mX[21] = true;
  out.mX[22] = true;
  out.mX[23] = true;
  out.mX[24] = true;
  out.mX[25] = true;
  out.mX[26] = true;
  out.mX[27] = true;
  out.mX[28] = true;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_slf0 (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  (void)LC;
  out = t2->mSLF0;
  out.mX[0] = false;
  out.mX[1] = false;
  out.mX[2] = false;
  out.mX[3] = false;
  out.mX[4] = false;
  out.mX[5] = false;
  out.mX[6] = false;
  out.mX[7] = false;
  out.mX[8] = false;
  out.mX[9] = false;
  out.mX[10] = false;
  out.mX[11] = false;
  out.mX[12] = false;
  out.mX[13] = false;
  out.mX[14] = false;
  out.mX[15] = false;
  out.mX[16] = false;
  out.mX[17] = false;
  out.mX[18] = false;
  out.mX[19] = false;
  out.mX[20] = false;
  out.mX[21] = false;
  out.mX[22] = false;
  out.mX[23] = false;
  out.mX[24] = false;
  out.mX[25] = false;
  out.mX[26] = false;
  out.mX[27] = false;
  out.mX[28] = false;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_vpf (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  (void)LC;
  out = t2->mVPF;
  out.mX[0] = false;
  out.mX[1] = false;
  out.mX[2] = false;
  out.mX[3] = false;
  out.mX[4] = false;
  out.mX[5] = false;
  out.mX[6] = false;
  out.mX[7] = false;
  out.mX[8] = false;
  out.mX[9] = false;
  out.mX[10] = false;
  out.mX[11] = false;
  out.mX[12] = false;
  out.mX[13] = false;
  out.mX[14] = false;
  out.mX[15] = false;
  out.mX[16] = false;
  out.mX[17] = false;
  out.mX[18] = false;
  out.mX[19] = false;
  out.mX[20] = false;
  out.mX[21] = false;
  out.mX[22] = false;
  out.mX[23] = false;
  out.mX[24] = false;
  out.mX[25] = false;
  out.mX[26] = false;
  out.mX[27] = false;
  out.mX[28] = false;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_ic (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  (void)LC;
  out = t2->mIC;
  out.mX[0] = 0.0;
  out.mX[1] = 0.0;
  out.mX[2] = 0.0;
  out.mX[3] = 0.0;
  out.mX[4] = 0.0;
  out.mX[5] = 0.0;
  out.mX[6] = 0.0;
  out.mX[7] = 0.0;
  out.mX[8] = 0.0;
  out.mX[9] = 0.0;
  out.mX[10] = 0.0;
  out.mX[11] = 0.0;
  out.mX[12] = 0.0;
  out.mX[13] = 0.0;
  out.mX[14] = 0.0;
  out.mX[15] = 0.0;
  out.mX[16] = 0.0;
  out.mX[17] = 0.0;
  out.mX[18] = 0.0;
  out.mX[19] = 0.0;
  out.mX[20] = 0.0;
  out.mX[21] = 0.0;
  out.mX[22] = 0.0;
  out.mX[23] = 0.0;
  out.mX[24] = 0.0;
  out.mX[25] = 0.0;
  out.mX[26] = 0.0;
  out.mX[27] = 0.0;
  out.mX[28] = 0.0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_icr (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  PmRealVector out;
  real_T P_R_idx_1;
  real_T P_R_idx_2;
  real_T X_idx_2;
  real_T X_idx_3;
  (void)LC;
  X_idx_2 = t1->mX.mX[2];
  X_idx_3 = t1->mX.mX[3];
  P_R_idx_1 = t1->mP_R.mX[1];
  P_R_idx_2 = t1->mP_R.mX[2];
  out = t2->mICR;
  out.mX[0] = X_idx_2 - P_R_idx_1;
  out.mX[1] = X_idx_3 - P_R_idx_2;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_icr_im (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmIntVector out;
  (void)t1;
  (void)LC;
  out = t2->mICR_IM;
  out.mX[0] = 3;
  out.mX[1] = 3;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_icr_id (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  (void)LC;
  out = t2->mICR_ID;
  out.mX[0] = false;
  out.mX[1] = false;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_icr_il (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  (void)LC;
  out = t2->mICR_IL;
  out.mX[0] = true;
  out.mX[1] = true;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dxicr (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  (void)LC;
  out = t2->mDXICR;
  out.mX[0] = 1.0;
  out.mX[1] = 1.0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dxicr_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mDXICR_P;
  out.mNumCol = 29ULL;
  out.mNumRow = 2ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 1;
  out.mJc[4] = 2;
  out.mJc[5] = 2;
  out.mJc[6] = 2;
  out.mJc[7] = 2;
  out.mJc[8] = 2;
  out.mJc[9] = 2;
  out.mJc[10] = 2;
  out.mJc[11] = 2;
  out.mJc[12] = 2;
  out.mJc[13] = 2;
  out.mJc[14] = 2;
  out.mJc[15] = 2;
  out.mJc[16] = 2;
  out.mJc[17] = 2;
  out.mJc[18] = 2;
  out.mJc[19] = 2;
  out.mJc[20] = 2;
  out.mJc[21] = 2;
  out.mJc[22] = 2;
  out.mJc[23] = 2;
  out.mJc[24] = 2;
  out.mJc[25] = 2;
  out.mJc[26] = 2;
  out.mJc[27] = 2;
  out.mJc[28] = 2;
  out.mJc[29] = 2;
  out.mIr[0] = 0;
  out.mIr[1] = 1;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_ddicr (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_ddicr_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mDDICR_P;
  out.mNumCol = 0ULL;
  out.mNumRow = 2ULL;
  out.mJc[0] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_tduicr_p (const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mTDUICR_P;
  out.mNumCol = 11ULL;
  out.mNumRow = 2ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  out.mJc[8] = 0;
  out.mJc[9] = 0;
  out.mJc[10] = 0;
  out.mJc[11] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_icrm (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_icrm_p (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mICRM_P;
  out.mNumCol = 29ULL;
  out.mNumRow = 2ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  out.mJc[8] = 0;
  out.mJc[9] = 0;
  out.mJc[10] = 0;
  out.mJc[11] = 0;
  out.mJc[12] = 0;
  out.mJc[13] = 0;
  out.mJc[14] = 0;
  out.mJc[15] = 0;
  out.mJc[16] = 0;
  out.mJc[17] = 0;
  out.mJc[18] = 0;
  out.mJc[19] = 0;
  out.mJc[20] = 0;
  out.mJc[21] = 0;
  out.mJc[22] = 0;
  out.mJc[23] = 0;
  out.mJc[24] = 0;
  out.mJc[25] = 0;
  out.mJc[26] = 0;
  out.mJc[27] = 0;
  out.mJc[28] = 0;
  out.mJc[29] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dxicrm (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dxicrm_p (const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mDXICRM_P;
  out.mNumCol = 29ULL;
  out.mNumRow = 0ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  out.mJc[8] = 0;
  out.mJc[9] = 0;
  out.mJc[10] = 0;
  out.mJc[11] = 0;
  out.mJc[12] = 0;
  out.mJc[13] = 0;
  out.mJc[14] = 0;
  out.mJc[15] = 0;
  out.mJc[16] = 0;
  out.mJc[17] = 0;
  out.mJc[18] = 0;
  out.mJc[19] = 0;
  out.mJc[20] = 0;
  out.mJc[21] = 0;
  out.mJc[22] = 0;
  out.mJc[23] = 0;
  out.mJc[24] = 0;
  out.mJc[25] = 0;
  out.mJc[26] = 0;
  out.mJc[27] = 0;
  out.mJc[28] = 0;
  out.mJc[29] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_ddicrm (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_ddicrm_p (const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mDDICRM_P;
  out.mNumCol = 0ULL;
  out.mNumRow = 0ULL;
  out.mJc[0] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_m (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
                     NeDsMethodOutput *t2)
{
  PmRealVector out;
  real_T DP_R_idx_0;
  (void)LC;
  DP_R_idx_0 = t1->mDP_R.mX[0];
  out = t2->mM;
  out.mX[0] = -DP_R_idx_0;
  out.mX[1] = 1.0;
  out.mX[2] = -1.0;
  out.mX[3] = 8.35E-5;
  out.mX[4] = -0.00083700000000000007;
  out.mX[5] = -0.00041850000000000004;
  out.mX[6] = -0.0004832421753117168;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dxm (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dxm_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mDXM_P;
  out.mNumCol = 29ULL;
  out.mNumRow = 7ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  out.mJc[8] = 0;
  out.mJc[9] = 0;
  out.mJc[10] = 0;
  out.mJc[11] = 0;
  out.mJc[12] = 0;
  out.mJc[13] = 0;
  out.mJc[14] = 0;
  out.mJc[15] = 0;
  out.mJc[16] = 0;
  out.mJc[17] = 0;
  out.mJc[18] = 0;
  out.mJc[19] = 0;
  out.mJc[20] = 0;
  out.mJc[21] = 0;
  out.mJc[22] = 0;
  out.mJc[23] = 0;
  out.mJc[24] = 0;
  out.mJc[25] = 0;
  out.mJc[26] = 0;
  out.mJc[27] = 0;
  out.mJc[28] = 0;
  out.mJc[29] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_ddm (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_ddm_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mDDM_P;
  out.mNumCol = 0ULL;
  out.mNumRow = 7ULL;
  out.mJc[0] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dum (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dum_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mDUM_P;
  out.mNumCol = 11ULL;
  out.mNumRow = 7ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  out.mJc[8] = 0;
  out.mJc[9] = 0;
  out.mJc[10] = 0;
  out.mJc[11] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dtm (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dtm_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mDTM_P;
  out.mNumCol = 1ULL;
  out.mNumRow = 7ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dpm (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dpm_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mDPM_P;
  out.mNumCol = 3ULL;
  out.mNumRow = 7ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_vmm (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  (void)LC;
  out = t2->mVMM;
  out.mX[0] = true;
  out.mX[1] = false;
  out.mX[2] = false;
  out.mX[3] = false;
  out.mX[4] = false;
  out.mX[5] = false;
  out.mX[6] = false;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dp_l (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dp_i (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dp_j (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dp_r (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  real_T P_R_idx_0;
  (void)LC;
  P_R_idx_0 = t1->mP_R.mX[0];
  out = t2->mDP_R;
  out.mX[0] = P_R_idx_0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_qx (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_qu (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_qt (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_q1 (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_qx_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mQX_P;
  out.mNumCol = 29ULL;
  out.mNumRow = 29ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  out.mJc[8] = 0;
  out.mJc[9] = 0;
  out.mJc[10] = 0;
  out.mJc[11] = 0;
  out.mJc[12] = 0;
  out.mJc[13] = 0;
  out.mJc[14] = 0;
  out.mJc[15] = 0;
  out.mJc[16] = 0;
  out.mJc[17] = 0;
  out.mJc[18] = 0;
  out.mJc[19] = 0;
  out.mJc[20] = 0;
  out.mJc[21] = 0;
  out.mJc[22] = 0;
  out.mJc[23] = 0;
  out.mJc[24] = 0;
  out.mJc[25] = 0;
  out.mJc[26] = 0;
  out.mJc[27] = 0;
  out.mJc[28] = 0;
  out.mJc[29] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_qu_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mQU_P;
  out.mNumCol = 11ULL;
  out.mNumRow = 29ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  out.mJc[8] = 0;
  out.mJc[9] = 0;
  out.mJc[10] = 0;
  out.mJc[11] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_qt_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mQT_P;
  out.mNumCol = 1ULL;
  out.mNumRow = 29ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_q1_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mQ1_P;
  out.mNumCol = 1ULL;
  out.mNumRow = 29ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_var_tol (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  (void)LC;
  out = t2->mVAR_TOL;
  out.mX[0] = 1.0E-9;
  out.mX[1] = 1.0E-9;
  out.mX[2] = 1.0E-9;
  out.mX[3] = 1.0E-9;
  out.mX[4] = 1.0E-9;
  out.mX[5] = 1.0E-9;
  out.mX[6] = 1.0E-9;
  out.mX[7] = 1.0E-9;
  out.mX[8] = 1.0E-9;
  out.mX[9] = 1.0E-9;
  out.mX[10] = 1.0E-9;
  out.mX[11] = 1.0E-9;
  out.mX[12] = 1.0E-9;
  out.mX[13] = 1.0E-9;
  out.mX[14] = 1.0E-9;
  out.mX[15] = 1.0E-9;
  out.mX[16] = 1.0E-9;
  out.mX[17] = 1.0E-9;
  out.mX[18] = 1.0E-9;
  out.mX[19] = 1.0E-9;
  out.mX[20] = 1.0E-9;
  out.mX[21] = 1.0E-9;
  out.mX[22] = 1.0E-9;
  out.mX[23] = 1.0E-9;
  out.mX[24] = 1.0E-9;
  out.mX[25] = 1.0E-9;
  out.mX[26] = 1.0E-9;
  out.mX[27] = 1.0E-9;
  out.mX[28] = 1.0E-9;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_eq_tol (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  (void)LC;
  out = t2->mEQ_TOL;
  out.mX[0] = 1.0E-9;
  out.mX[1] = 1.0E-9;
  out.mX[2] = 1.0E-9;
  out.mX[3] = 1.0E-9;
  out.mX[4] = 1.0E-9;
  out.mX[5] = 1.0E-9;
  out.mX[6] = 1.0E-9;
  out.mX[7] = 1.0E-9;
  out.mX[8] = 1.0E-9;
  out.mX[9] = 1.0E-9;
  out.mX[10] = 1.0E-9;
  out.mX[11] = 1.0E-9;
  out.mX[12] = 1.0E-9;
  out.mX[13] = 1.0E-9;
  out.mX[14] = 1.0E-9;
  out.mX[15] = 1.0E-9;
  out.mX[16] = 1.0E-9;
  out.mX[17] = 1.0E-9;
  out.mX[18] = 1.0E-9;
  out.mX[19] = 1.0E-9;
  out.mX[20] = 1.0E-9;
  out.mX[21] = 1.0E-9;
  out.mX[22] = 1.0E-9;
  out.mX[23] = 1.0E-9;
  out.mX[24] = 1.0E-9;
  out.mX[25] = 1.0E-9;
  out.mX[26] = 1.0E-9;
  out.mX[27] = 1.0E-9;
  out.mX[28] = 1.0E-9;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_lv (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  (void)LC;
  out = t2->mLV;
  out.mX[0] = false;
  out.mX[1] = false;
  out.mX[2] = false;
  out.mX[3] = false;
  out.mX[4] = false;
  out.mX[5] = false;
  out.mX[6] = false;
  out.mX[7] = false;
  out.mX[8] = true;
  out.mX[9] = false;
  out.mX[10] = false;
  out.mX[11] = false;
  out.mX[12] = false;
  out.mX[13] = false;
  out.mX[14] = false;
  out.mX[15] = false;
  out.mX[16] = false;
  out.mX[17] = false;
  out.mX[18] = false;
  out.mX[19] = false;
  out.mX[20] = false;
  out.mX[21] = false;
  out.mX[22] = false;
  out.mX[23] = false;
  out.mX[24] = false;
  out.mX[25] = false;
  out.mX[26] = false;
  out.mX[27] = false;
  out.mX[28] = false;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_slv (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  (void)LC;
  out = t2->mSLV;
  out.mX[0] = false;
  out.mX[1] = false;
  out.mX[2] = false;
  out.mX[3] = false;
  out.mX[4] = false;
  out.mX[5] = false;
  out.mX[6] = false;
  out.mX[7] = false;
  out.mX[8] = true;
  out.mX[9] = false;
  out.mX[10] = false;
  out.mX[11] = false;
  out.mX[12] = false;
  out.mX[13] = false;
  out.mX[14] = false;
  out.mX[15] = false;
  out.mX[16] = false;
  out.mX[17] = false;
  out.mX[18] = false;
  out.mX[19] = false;
  out.mX[20] = false;
  out.mX[21] = false;
  out.mX[22] = false;
  out.mX[23] = false;
  out.mX[24] = false;
  out.mX[25] = false;
  out.mX[26] = false;
  out.mX[27] = false;
  out.mX[28] = false;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_y (const NeDynamicSystem *LC, const NeDynamicSystemInput *t12,
                     NeDsMethodOutput *t13)
{
  PmRealVector out;
  real_T X_idx_0;
  real_T X_idx_1;
  real_T X_idx_10;
  real_T X_idx_14;
  real_T X_idx_15;
  real_T X_idx_8;
  int32_T M_idx_0;
  int32_T M_idx_1;
  (void)LC;
  M_idx_0 = t12->mM.mX[0];
  M_idx_1 = t12->mM.mX[1];
  X_idx_0 = t12->mX.mX[0];
  X_idx_1 = t12->mX.mX[1];
  X_idx_8 = t12->mX.mX[8];
  X_idx_10 = t12->mX.mX[10];
  X_idx_14 = t12->mX.mX[14];
  X_idx_15 = t12->mX.mX[15];
  out = t13->mY;
  X_idx_1 = -(X_idx_1 - (floor(X_idx_1 / 6.2831853071795862) * (real_T)(M_idx_1
    != 0) + (real_T)(M_idx_1 == 0) * (real_T)M_idx_0) * 6.2831853071795862);
  out.mX[0] = (X_idx_10 * 1.0010000000000002E-9 + -X_idx_14) + -X_idx_15;
  out.mX[1] = X_idx_14;
  out.mX[2] = X_idx_15;
  out.mX[3] = X_idx_1 / -1.0;
  out.mX[4] = X_idx_0;
  out.mX[5] = X_idx_8;
  (void)LC;
  (void)t13;
  return 0;
}

static int32_T ds_dxy (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  (void)LC;
  out = t2->mDXY;
  out.mX[0] = 1.0;
  out.mX[1] = 1.0;
  out.mX[2] = 1.0;
  out.mX[3] = 1.0010000000000002E-9;
  out.mX[4] = 0.0;
  out.mX[5] = 0.0;
  out.mX[6] = -1.0;
  out.mX[7] = 1.0;
  out.mX[8] = 0.0;
  out.mX[9] = -1.0;
  out.mX[10] = 0.0;
  out.mX[11] = 1.0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_duy (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_duy_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mDUY_P;
  out.mNumCol = 11ULL;
  out.mNumRow = 6ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  out.mJc[8] = 0;
  out.mJc[9] = 0;
  out.mJc[10] = 0;
  out.mJc[11] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_mduy_p (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mMDUY_P;
  out.mNumCol = 11ULL;
  out.mNumRow = 6ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  out.mJc[8] = 0;
  out.mJc[9] = 0;
  out.mJc[10] = 0;
  out.mJc[11] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_mdxy_p (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mMDXY_P;
  out.mNumCol = 29ULL;
  out.mNumRow = 6ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 1;
  out.mJc[3] = 1;
  out.mJc[4] = 1;
  out.mJc[5] = 1;
  out.mJc[6] = 1;
  out.mJc[7] = 1;
  out.mJc[8] = 1;
  out.mJc[9] = 1;
  out.mJc[10] = 1;
  out.mJc[11] = 1;
  out.mJc[12] = 1;
  out.mJc[13] = 1;
  out.mJc[14] = 1;
  out.mJc[15] = 1;
  out.mJc[16] = 1;
  out.mJc[17] = 1;
  out.mJc[18] = 1;
  out.mJc[19] = 1;
  out.mJc[20] = 1;
  out.mJc[21] = 1;
  out.mJc[22] = 1;
  out.mJc[23] = 1;
  out.mJc[24] = 1;
  out.mJc[25] = 1;
  out.mJc[26] = 1;
  out.mJc[27] = 1;
  out.mJc[28] = 1;
  out.mJc[29] = 1;
  out.mIr[0] = 3;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_tduy_p (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mTDUY_P;
  out.mNumCol = 11ULL;
  out.mNumRow = 6ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  out.mJc[8] = 0;
  out.mJc[9] = 0;
  out.mJc[10] = 0;
  out.mJc[11] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dty (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dty_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mDTY_P;
  out.mNumCol = 1ULL;
  out.mNumRow = 6ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)LC;
  (void)t2;
  return 0;
}
