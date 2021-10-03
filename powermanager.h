#pragma once

#include <stdint.h>
#include <stdbool.h>

#define MAX_BATTARIES 2

#define FIELD_INT(name) bool name##Capable; int32_t name
#define FIELD_BOOL(name) bool name##Capable; bool name

typedef struct BatteryInfo {
	bool ChargeThresholdCapable, ChargeThresholdEnabled;
	int32_t ChargeThresholdStart_pct, ChargeThresholdStop_pct;

	FIELD_INT(DesignCapacity_mWh);
	FIELD_INT(FullChargeCapacity_mWh);
	FIELD_INT(RemainingCapacity_mWh);

	FIELD_BOOL(IsOnAcAdapter);
	FIELD_INT(AcAdapterWattage_W);

	FIELD_INT(Voltage_mV);
	FIELD_INT(Current_mA);
} BatteryInfo;

typedef struct PowerInfo {
	// Internal fields, do not use
	void* binding;
	void* ctx;

	// Error during the last operation if not NULL
	wchar_t* errorStr;

	FIELD_BOOL(AlwaysOnUsb);

	size_t numBatteries;
	BatteryInfo battaries[MAX_BATTARIES];
} PowerInfo;

#undef FIELD_INT
#undef FIELD_BOOL


// Connect to the power manager service and get power data
PowerInfo *GetPowerInfo(void);

// Get new power data on an existing connection to the power manager
void UpdatePowerInfo(PowerInfo* p);

// Disconnect from the power manager and free data
void FreePowerInfo(PowerInfo* p);
