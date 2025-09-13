#include <gtest/gtest.h>
extern "C" {
#include "./classify.h"
}

// ----------- STEP 5 -----------------
// Separation of classification from the email/controller action.

// TEST(ClassifyTest, BatteryOk) {
//     BatteryDataModel batteryData = {THERMAL_PASSIVE, 25};
//     BatteryState state = classify_battery_state(batteryData);
//     ASSERT_EQ(state, BATTERY_OK);
// }

// TEST(ClassifyTest, BatteryAlert) {
//     BatteryDataModel batteryData = {THERMAL_HYBRID, 60};
//     BatteryState state = classify_battery_state(batteryData);
//     ASSERT_EQ(state, BATTERY_ALERT);
// }

// ----------- STEP 5 code ends -------
