#include <gtest/gtest.h>
extern "C" {
#include "./thermal_management_types.h"
#include "./thresholds.h"
}

// ----------- STEP 4 -----------------
// Distinguish thresholds per cooling type

TEST(ThresholdTest, CoolingDependentThresholds) {
    float passiveLimit = alertTemperatureForCoolingType(PASSIVE);
    float hiActiveLimit = alertTemperatureForCoolingType(ACTIVE);
    float medActiveLimit = alertTemperatureForCoolingType(HYBRID);

    ASSERT_TRUE(passiveLimit < medActiveLimit);
    ASSERT_TRUE(medActiveLimit < hiActiveLimit);
}

// ----------- STEP 4 code ends -------
