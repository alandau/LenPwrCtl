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

	FIELD_INT(DesignVoltage_mV);
	FIELD_INT(Voltage_mV);
	FIELD_INT(Current_mA);
	FIELD_INT(Wattage_mW);

	FIELD_INT(SerialNumber);
	FIELD_INT(Temperature_C);
	FIELD_INT(CycleCount);

	FIELD_INT(RemainingPercentage_pct);
	FIELD_INT(RemainingTime_min);
	FIELD_INT(ChargeCompletionTime_min);
	FIELD_INT(ChargeStatus);
	FIELD_INT(Chemistry);
	FIELD_INT(HealthStatus);

	wchar_t* DeviceName;
	wchar_t* BarcodeNumber;
	wchar_t* FirstUseDate;
	wchar_t* Manufacturer;
	wchar_t* ManufactureDate;
	wchar_t* FirmwareVersion;
	wchar_t* LastConditionDate;
} BatteryInfo;

typedef struct PowerInfo {
	// Internal fields, do not use
	void* binding;
	void* ctx;

	// Error during the last operation if not NULL
	wchar_t* errorStr;

	FIELD_BOOL(AlwaysOnUsb);

	FIELD_BOOL(AirplanePowerMode);
	FIELD_BOOL(AirplanePowerModeAutoDetection);

	FIELD_BOOL(CoolMode);
	FIELD_BOOL(IntelligentCooling);
	FIELD_BOOL(IntelligentCoolingAutoMode);

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

// Set charge thresholds on a battery
void PowerInfoSetChargeThresholds(PowerInfo* p, size_t batteryIndex, bool enabled, int32_t start, int32_t stop);
