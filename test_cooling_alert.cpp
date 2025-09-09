#include <gtest/gtest.h>
extern "C" {
#include "./cooling_alert.h"
}

// ----------- STEP 2 -----------------
// Establish one "straight forward" interface (happy flow):
//   - Function name
//   - Input parameters data-model
//   - Expected output data-model

// TEST(CoolingAlertTest, PassiveCoolingAlertToEmail) {
//     Action action = battery_data_to_action(PASSIVE_COOLING, 45.0f);
//     ASSERT_EQ(action.actionType, ALERT_EMAIL);
//     ASSERT_STREQ(action.actionBody, "Temperature alert: 45.0F");
// }

// TEST(CoolingAlertTest, NoAlert) {
//     Action action = battery_data_to_action(PASSIVE_COOLING, 32.0f);
//     ASSERT_EQ(action.actionType, NO_ALERT);
// }

// ----------- STEP 2 code ends -------
