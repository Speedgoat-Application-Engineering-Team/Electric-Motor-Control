/* Main generated for Simulink Real-Time model FieldOrientedController_HIL */
#include <ModelInfo.hpp>
#include "FieldOrientedController_HIL.h"
#include "FieldOrientedController_HIL_calintf.h"

/* Task descriptors */
slrealtime::TaskInfo task_1( 0u, std::bind(FieldOrientedController_HIL_step), slrealtime::TaskInfo::PERIODIC, 0.00025, 0, 40);

/* Model descriptor */
slrealtime::ModelInfo FieldOrientedController_HIL_Info =
{
    "FieldOrientedController_HIL",
    FieldOrientedController_HIL_initialize,
    FieldOrientedController_HIL_terminate,
    []()->char const*& { return FieldOrientedController_HIL_M->errorStatus; },
    []()->unsigned char& { return FieldOrientedController_HIL_M->Timing.stopRequestedFlag; },
    { task_1 },
    slrealtime::getSegmentVector()
};

int main(int argc, char *argv[]) {
    return slrealtime::runModel(argc, argv, FieldOrientedController_HIL_Info);
}
