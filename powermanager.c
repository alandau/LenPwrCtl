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

void FreePowerInfo(PowerInfo* p)
{
    if (p == NULL) {
        return;
    }
    RpcBindingFree(&p->binding);
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
        long value, start, stop;

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

            p->numBatteries++;
        }
#undef INT_FIELD
#undef BOOL_FIELD

#if 0
        LpcGetAirplanePowerMode(ctx, &result);
        LpcUpdateSmartBatteryStatus(ctx, 1);
        LpcGetCurrent(ctx, 1, &val, &result);
        wprintf(L"Current=%ld, result=%d\n", val, result);
        LpcGetVoltage(ctx, 1, &val, &result);
        wprintf(L"Voltage=%ld, result=%d\n", val, result);
        LpcGetAcAdapterWattage(ctx, 1, &val, &result);
        wprintf(L"AC adapter %ld W, result=%d\n", val, result);
        LpcGetFullChargeCapacity(ctx, 1, &val, &result);
        wprintf(L"Full charge capacity=%ld mWh, result=%d\n", val, result);
        LpcGetDesignCapacity(ctx, 1, &val, &result);
        wprintf(L"Design capacity=%ld mWh, result=%d\n", val, result);
        LpcGetRemainingCapacity(ctx, 1, &val, &result);
        wprintf(L"Remaining capacity=%ld mWh, result=%d\n", val, result);
        LpcGetCycleCount(ctx, 1, &val, &result);
        wprintf(L"Cycle count=%ld, result=%d\n", val, result);
        LpcGetChargeStatus(ctx, 1, &val, &result);
        wprintf(L"Charge status %ld, result=%d\n", val, result);
        LpcGetDeviceChemistry(ctx, 1, &val, &result);
        wprintf(L"Chemistry %ld, result=%d\n", val, result);
        //LpcSetChargeThreshold(ctx, 1, 85, 90); // set thresholds
        LpcGetChargeThreshold(ctx, 1, &result, &is_enabled, &start, &stop);
        wprintf(L"start=%d, stop=%d, enabled=%ld, result=%ld\n", start, stop, is_enabled, result);
        LpcGetIsAcAttached(ctx, 1, &result);
        wprintf(L"Is on AC adapter result=%d\n", result);
        LpcGetFirmwareVersion(ctx, 1, &len, &buf);
        printf("Firmware version '%ls'\n", buf);
        free(buf);
        buf = NULL;
        LpcGetDeviceName(ctx, 1, &len, &buf, &result);
        printf("Device name '%ls', result=%d\n", buf, result);
        free(buf); buf = NULL;
        LpcGetBarCodeNumber(ctx, 1, &len, &buf, &result);
        printf("Barcode '%ls', result=%d\n", buf, result);
        free(buf); buf = NULL;
        LpcGetFirstUsedDate(ctx, 1, &len, &buf, &result);
        printf("First used date '%ls', result=%d\n", buf, result);
        free(buf); buf = NULL;
        LpcGetManufacturerName(ctx, 1, &len, &buf);
        printf("Manufacturer '%ls'\n", buf);
        free(buf); buf = NULL;
        LpcGetManufactureDate(ctx, 1, &len, &buf);
        printf("Manufacture date '%ls'\n", buf);
        free(buf); buf = NULL;

        long version, revision;
        LpcGetSpecificationInfo(ctx, 1, &version, &revision, &result);
        printf("version=%d, revision=%d, result=%d\n", version, revision, result);
        long acsourceinfo;
        short warrantyvalid, nonreplaceable;
        LpcGetSBSExData(ctx, 1, &acsourceinfo, &warrantyvalid, &nonreplaceable);
        printf("AC source info=%d, Warranty valid=%d, Non-replaceable=%d\n", acsourceinfo, warrantyvalid, nonreplaceable);
#endif
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
