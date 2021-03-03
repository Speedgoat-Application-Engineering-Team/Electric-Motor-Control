#include "FieldOrientedController_HIL_calintf.h"
#include "PMSM_Plant_Model_cal.h"
#include "FieldOrientedController_HIL_cal.h"

extern PMSM_Plant_Model_cal_type PMSM_Plant_Model_cal_impl;
extern FieldOrientedController_HIL_cal_type FieldOrientedController_HIL_cal_impl;
namespace slrealtime
{
  /* Description of SEGMENTS */
  SegmentVector segmentInfo {
    {
      (void*)&FieldOrientedController_HIL_cal_impl, (void**)
        &FieldOrientedController_HIL_cal, sizeof
        (FieldOrientedController_HIL_cal_type), 2
    },
    {
      (void*)&PMSM_Plant_Model_cal_impl, (void**)&PMSM_Plant_Model_cal, sizeof
        (PMSM_Plant_Model_cal_type), 2
    }
  }

    ;
    SegmentVector &getSegmentVector(void)
    {
      return segmentInfo;
    }
  }                                    // slrealtime
