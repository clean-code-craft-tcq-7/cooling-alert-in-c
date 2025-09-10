#include "./thresholds.h"

// ----------- STEP 5 -----------------
// Refactor for duplication. Deprecate old interface in favor of new one.

// float alertTemperatureForCoolingType(ThermalManagementType type) {
//     static const float thresholds[] = {
//         [PASSIVE] = 40.0,
//         [ACTIVE] = 55.0,
//         [HYBRID] = 50.0
//     };
//     if (type >= PASSIVE && type <= HYBRID) {
//         return thresholds[type];
//     }
//     return 0.0;
// }

// ----------- STEP 5 code ends -------
