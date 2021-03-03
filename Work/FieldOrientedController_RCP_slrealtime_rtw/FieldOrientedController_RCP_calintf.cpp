#include "FieldOrientedController_RCP_calintf.h"
#include "FieldOrientedController_cal.h"
#include "FieldOrientedController_RCP_cal.h"

extern FieldOrientedController_cal_type FieldOrientedController_cal_impl;
extern FieldOrientedController_RCP_cal_type FieldOrientedController_RCP_cal_impl;
namespace slrealtime
{
  /* Description of SEGMENTS */
  SegmentVector segmentInfo {
    {
      (void*)&FieldOrientedController_RCP_cal_impl, (void**)
        &FieldOrientedController_RCP_cal, sizeof
        (FieldOrientedController_RCP_cal_type), 2
    },
    {
      (void*)&FieldOrientedController_cal_impl, (void**)
        &FieldOrientedController_cal, sizeof(FieldOrientedController_cal_type),
        2
    }
  }

    ;
    SegmentVector &getSegmentVector(void)
    {
      return segmentInfo;
    }
  }                                    // slrealtime
