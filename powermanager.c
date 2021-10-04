#define _CRT_SECURE_NO_WARNINGS

#include "powermanager.h"
#include <stdlib.h>
#include <stdio.h>

#ifdef _WIN64
#include "midl-x64/pwrmgr_h.h"
#else
#include "midl-x86/pwrmgr_h.h"
#endif

void* __RPC_USER midl_user_allocate(size_t bytes)
{
    return malloc(bytes);
}

void __RPC_USER midl_user_free(void __RPC_FAR* p)
{
    free(p);
}

PowerInfo* GetPowerInfo(void)
{
    PowerInfo* p = calloc(1, sizeof(*p));
    if (!p) {
        return NULL;
    }

    RPC_STATUS status;
    RPC_WSTR StringBinding;
    RPC_BINDING_HANDLE Binding;

    status = RpcStringBindingCompose(
        NULL,                       // Interface's GUID, will be handled by NdrClientCall
        (RPC_WSTR)L"ncalrpc",       // Protocol sequence
        NULL,                       // Network address
        (RPC_WSTR)L"BaseModuleRpcEndpoint_0", // Endpoint
        NULL,                       // No options here
        &StringBinding              // Output string binding
    );

    if (status != RPC_S_OK) {
        p->errorStr = malloc(100);
        _snwprintf(p->errorStr, 100, L"RpcStringBindingCompose failed: %d", status);
        return p;
    }

    status = RpcBindingFromStringBinding(
        StringBinding,              // Previously created string binding
        &Binding                    // Output binding handle
    );

    RpcStringFree(&StringBinding);

    if (status != RPC_S_OK) {
        p->errorStr = malloc(100);
        _snwprintf(p->errorStr, 100, L"RpcBindingFromStringBinding failed: %d", status);
        return p;
    }

    p->binding = Binding;
    UpdatePowerInfo(p);

    return p;
}

static void FreeBatteryStrings(PowerInfo* p)
{
    for (size_t i = 0; i < p->numBatteries; i++) {
        BatteryInfo* b = &p->battaries[i];
        free(b->DeviceName); b->DeviceName = NULL;
        free(b->BarcodeNumber); b->BarcodeNumber = NULL;
        free(b->FirstUseDate); b->FirstUseDate = NULL;
        free(b->Manufacturer); b->Manufacturer = NULL;
        free(b->ManufactureDate); b->ManufactureDate = NULL;
        free(b->FirmwareVersion); b->FirmwareVersion = NULL;
        free(b->LastConditionDate); b->LastConditionDate = NULL;
    }
}

void FreePowerInfo(PowerInfo* p)
{
    if (p == NULL) {
        return;
    }
    RpcBindingFree(&p->binding);
    FreeBatteryStrings(p);
    free(p->errorStr);
	free(p);
}

void UpdatePowerInfo(PowerInfo* p)
{
    RpcTryExcept
    {
        void* ctx;
        if (p->ctx != NULL) {
            ctx = p->ctx;
        } else {
            // Create context used for the rest of the calls
            LpcCreateContext(p->binding, &ctx);
            p->ctx = ctx;
        }

        short capable, enabled;
        long value, start, stop, len;

        LpcIsAlwaysOnUsbCapable(ctx, &capable);
        p->AlwaysOnUsbCapable = capable;
        if (capable) {
            LpcGetAlwaysOnUSBValue(ctx, &value);
            p->AlwaysOnUsb = value;
        }

#define INT_FIELD(name, func) do { \
    func(ctx, batt, &value, &capable); \
    b->name##Capable = capable; \
    b->name = value; \
    } while (0)

#define BOOL_FIELD(name, func) do { \
    func(ctx, batt, &enabled, &capable); \
    b->name##Capable = capable; \
    b->name = enabled; \
    } while (0)

#define STR_FIELD(name, func) do { \
    func(ctx, batt, &len, &b->name, &capable); \
    if (!capable) { \
        free(b->name); \
        b->name = NULL; \
    } \
    } while (0)

        FreeBatteryStrings(p);
        p->numBatteries = 0;
        for (int batt = 1; batt <= MAX_BATTARIES; batt++) {
            BatteryInfo* b = &p->battaries[p->numBatteries];
                LpcUpdateSmartBatteryStatus(ctx, batt);

            LpcGetCurrent(ctx, batt, &value, &capable);
            if (!capable) {
                // No more batteries
                break;
            }
            b->Current_mACapable = true;
            b->Current_mA = value;

            INT_FIELD(Voltage_mV, LpcGetVoltage);

            if (b->Current_mACapable && b->Voltage_mVCapable) {
                b->Wattage_mWCapable = true;
                b->Wattage_mW = b->Current_mA * b->Voltage_mV / 1000;
            } else {
                b->Wattage_mWCapable = false;
            }

            INT_FIELD(DesignVoltage_mV, LpcGetDesignVoltage);
            INT_FIELD(DesignCapacity_mWh, LpcGetDesignCapacity);
            INT_FIELD(FullChargeCapacity_mWh, LpcGetFullChargeCapacity);
            INT_FIELD(RemainingCapacity_mWh, LpcGetRemainingCapacity);
            LpcGetIsAcAttached(ctx, batt, &enabled);
            b->IsOnAcAdapterCapable = true;
            b->IsOnAcAdapter = enabled;
            INT_FIELD(AcAdapterWattage_W, LpcGetAcAdapterWattage);

            LpcGetChargeThreshold(ctx, batt, &capable, &enabled, &start, &stop);
            b->ChargeThresholdCapable = capable;
            b->ChargeThresholdEnabled = enabled;
            b->ChargeThresholdStart_pct = start;
            b->ChargeThresholdStop_pct = stop;

            INT_FIELD(SerialNumber, LpcGetSerialNumber);
            INT_FIELD(Temperature_C, LpcGetTemperature);
            INT_FIELD(CycleCount, LpcGetCycleCount);

            INT_FIELD(RemainingPercentage_pct, LpcGetRemainingPercentage);
            INT_FIELD(RemainingTime_min, LpcGetRemainingTime);
            INT_FIELD(ChargeCompletionTime_min, LpcGetChargeCompletionTime);
            INT_FIELD(ChargeStatus, LpcGetChargeStatus);
            INT_FIELD(Chemistry, LpcGetDeviceChemistry);
            INT_FIELD(HealthStatus, LpcGetHealthStatus);

            STR_FIELD(DeviceName, LpcGetDeviceName);
            STR_FIELD(BarcodeNumber, LpcGetBarCodeNumber);
            STR_FIELD(FirstUseDate, LpcGetFirstUsedDate);
            LpcGetManufacturerName(ctx, batt, &len, &b->Manufacturer);
            LpcGetManufactureDate(ctx, batt, &len, &b->ManufactureDate);
            LpcGetFirmwareVersion(ctx, batt, &len, &b->FirmwareVersion);
            LpcGetLastConditionDate(ctx, batt, &len, &b->LastConditionDate);

            p->numBatteries++;
        }
#undef INT_FIELD
#undef BOOL_FIELD
#undef STR_FIELD

    }
    RpcExcept(EXCEPTION_EXECUTE_HANDLER)
    {
        p->errorStr = malloc(500);
        _snwprintf(p->errorStr, 500,
            L"Exception: %ld - 0x%lx. Couldn't connect to power manager service.\n"
            L"Is 'Lenovo Power and Battery' (old name : 'Lenovo Power Manager') "
            L"installed in Device Manager->System devices?", RpcExceptionCode(), RpcExceptionCode());
    }
    RpcEndExcept
}
