#include <gtest/gtest.h>
extern "C" {
#include "./thermal_management_types.h"
#include "./thresholds.h"
}

// ----------- STEP 3 -----------------
// Distinguish thresholds per cooling type

TEST(ThresholdTest, CoolingDependentThresholds) {
    float passiveLimit = maxTemperatureForCoolingType(PASSIVE);
    float hiActiveLimit = maxTemperatureForCoolingType(ACTIVE);
    float medActiveLimit = maxTemperatureForCoolingType(HYBRID);

    ASSERT_TRUE(passiveLimit < medActiveLimit);
    ASSERT_TRUE(medActiveLimit < hiActiveLimit);
}

// ----------- STEP 3 code ends -------