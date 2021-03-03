/* Main generated for Simulink Real-Time model FieldOrientedController_RCP */
#include <ModelInfo.hpp>
#include "FieldOrientedController_RCP.h"
#include "FieldOrientedController_RCP_calintf.h"

/* Task descriptors */
slrealtime::TaskInfo task_1( 0u, std::bind(FieldOrientedController_RCP_step, 0), slrealtime::TaskInfo::PERIODIC, 5e-05, 0, 40);
slrealtime::TaskInfo task_2( 1u, std::bind(FieldOrientedController_RCP_step, 1), slrealtime::TaskInfo::PERIODIC, 0.001, 0, 39);

/* Model descriptor */
slrealtime::ModelInfo FieldOrientedController_RCP_Info =
{
    "FieldOrientedController_RCP",
    FieldOrientedController_RCP_initialize,
    FieldOrientedController_RCP_terminate,
    []()->char const*& { return FieldOrientedController_RCP_M->errorStatus; },
    []()->unsigned char& { return FieldOrientedController_RCP_M->Timing.stopRequestedFlag; },
    { task_1, task_2 },
    slrealtime::getSegmentVector()
};

int main(int argc, char *argv[]) {
    return slrealtime::runModel(argc, argv, FieldOrientedController_RCP_Info);
}
