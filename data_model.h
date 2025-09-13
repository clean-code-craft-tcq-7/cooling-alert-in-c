#pragma once

#include "./thermal_management_types.h"

typedef enum {
    BATTERY_OK,
    BATTERY_WARNING,
    BATTERY_ALERT
} BatteryState;

typedef struct {
    ThermalManagementType thermalManagementType;
    int temperature;
} BatteryDataModel;
