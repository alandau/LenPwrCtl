

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for pwrmgr.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __pwrmgr_h_h__
#define __pwrmgr_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __LenPowCtl_INTERFACE_DEFINED__
#define __LenPowCtl_INTERFACE_DEFINED__

/* interface LenPowCtl */
/* [version][uuid] */ 

void LpcCreateContext( 
    /* [in] */ handle_t Binding,
    /* [context_handle][out] */ void **Context);

void LpcFreeContext( 
    /* [context_handle][out][in] */ void **Context);

void LpcIsEasyResumeCapable( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ short *Capable);

void LpcIsApsInformationCapable( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ short *Capable);

void LpcIsCoolModeCapable( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ short *Capable);

void LpcIsIntelligentCoolingCapable( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ short *Capable);

void LpcIsIntelligentCoolingAutoModeSupport( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ short *Capable);

void Proc7( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ short *arg_1);

void LpcIsAirplanePowerModeCapable( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ short *Capable);

void LpcIsAlwaysOnUsbCapable( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ short *Capable);

void Proc10( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ short *arg_1);

void Proc11( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ short *arg_1);

void Proc12( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ long *arg_1);

void Proc13( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ long *arg_1);

void Proc14( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ long *arg_1);

void LpcGetAlwaysOnUSBValue( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ long *Value);

void Proc16( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ long *arg_1);

void Proc17( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ short *arg_1);

void Proc18( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ short *arg_1);

void LpcGetAirplanePowerModeAutoDetection( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ short *Value);

void LpcGetAirplanePowerMode( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ short *Value);

void LpcGetIntelligentCoolingAutoMode( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ short *Value);

void LpcGetIntelligentCooling( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ short *Value);

void LpcGetCoolMode( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ short *Value);

void Proc24( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ short *arg_1);

void Proc25( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ short arg_1);

void Proc26( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ short arg_1);

void LpcSetAirplanePowerModeAutoDetection( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ short Value);

void LpcSetAirplanePowerMode( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ short Value);

void LpcSetIntelligentCoolingAutoMode( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ short Value);

void LpcSetIntelligentCooling( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ short Value);

void LpcSetCoolMode( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ short Value);

void Proc32( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ short arg_1);

void LpcSetAlwaysOnUSB( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long Value);

void LpcQueryGaugeResetCapability( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ short *Value,
    /* [in] */ long BatteryNum);

void LpcGetChargeThreshold( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ short *Capable,
    /* [out] */ short *Enabled,
    /* [out] */ long *Start,
    /* [out] */ long *Stop);

void LpcGetReconditionState( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ long *Battery,
    /* [out] */ long *Stage,
    /* [out] */ long *StageNum);

void LpcGetResetResult( 
    /* [context_handle][in] */ void *Context,
    /* [string][in] */ wchar_t *BarCode,
    /* [out] */ long *ErrorValue,
    /* [out] */ long *TickHigh,
    /* [out] */ long *TickLow);

void LpcStartBatteryGaugeReset( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum);

void LpcStopBatteryGaugeReset( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum);

void LpcSetChargeThreshold( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [in] */ long Start,
    /* [in] */ long Stop);

void LpcGetFullChargeCapacity( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *Value,
    /* [out] */ short *Capable);

void LpcGetDesignCapacity( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *Value,
    /* [out] */ short *Capable);

void LpcGetDesignVoltage( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *Value,
    /* [out] */ short *Capable);

void LpcGetSerialNumber( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *Value,
    /* [out] */ short *Capable);

void LpcGetAcAdapterWattage( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *Value,
    /* [out] */ short *Capable);

void LpcGetVoltage( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *Value,
    /* [out] */ short *Capable);

void LpcGetCurrent( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *Value,
    /* [out] */ short *Capable);

void LpcGetTemperature( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *Value,
    /* [out] */ short *Capable);

void LpcGetCycleCount( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *Value,
    /* [out] */ short *Capable);

void LpcGetRemainingPercentage( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *Value,
    /* [out] */ short *Capable);

void LpcGetRemainingCapacity( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *Value,
    /* [out] */ short *Capable);

void LpcGetRemainingTime( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *Value,
    /* [out] */ short *Capable);

void LpcGetChargeCompletionTime( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *Value,
    /* [out] */ short *Capable);

void LpcGetChargeStatus( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *Value,
    /* [out] */ short *Capable);

void LpcGetDeviceChemistry( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *Value,
    /* [out] */ short *Capable);

void LpcGetHealthStatus( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *Value,
    /* [out] */ short *Capable);

void LpcGetIsAcAttached( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ short *Value);

void LpcGetIsOnLowerThreshold( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ short *Value);

void LpcGetCondition( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *Value);

void LpcGetControllerType( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *Value);

void LpcGetWarrantyInfo( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *Value);

void LpcGetDeviceName( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *BufferLen,
    /* [size_is][size_is][ref][out] */ wchar_t **Buffer,
    /* [out] */ short *Capable);

void LpcGetBarCodeNumber( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *BufferLen,
    /* [size_is][size_is][ref][out] */ wchar_t **Buffer,
    /* [out] */ short *Capable);

void LpcGetFirstUsedDate( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *BufferLen,
    /* [size_is][size_is][ref][out] */ wchar_t **Buffer,
    /* [out] */ short *Capable);

void LpcGetManufacturerName( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *BufferLen,
    /* [size_is][size_is][ref][out] */ wchar_t **Buffer);

void LpcGetLastConditionDate( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *BufferLen,
    /* [size_is][size_is][ref][out] */ wchar_t **Buffer);

void LpcGetManufactureDate( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *BufferLen,
    /* [size_is][size_is][ref][out] */ wchar_t **Buffer);

void LpcGetSpecificationInfo( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *Version,
    /* [out] */ long *Revision,
    /* [out] */ short *Capable);

void LpcGetSBSExData( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *ACSourceInfo,
    /* [out] */ short *WarrantyValid,
    /* [out] */ short *NonReplaceableBattery);

void LpcUpdateSmartBatteryStatus( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum);

void LpcGetFirmwareVersion( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out][in] */ long *BufferLen,
    /* [size_is][size_is][ref][out] */ wchar_t **Buffer);

void LpcSetEasyResumeEnabled( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ short Value);

void LpcSetEasyResumeLockTimeout( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long Value);

void LpcGetEasyResumeEnabled( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ short *Value);

void LpcGetEasyResumeLockTimeout( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ long *Value);

void LpcGetResetStartTime( 
    /* [context_handle][in] */ void *Context,
    /* [string][in] */ wchar_t *Barcode,
    /* [out] */ long *StartHigh,
    /* [out] */ long *StartLow);

void LpcGetFCCValue( 
    /* [context_handle][in] */ void *Context,
    /* [string][in] */ wchar_t *Barcode,
    /* [out] */ long *FCCBeforeReset,
    /* [out] */ long *FCCAfterReset,
    /* [out] */ long *DesignCapacity);

void LpcGetTemporaryChargeMode( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ short *Value);

void LpcGetDlsPiCapability( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ short *Value);



extern RPC_IF_HANDLE LenPowCtl_v1_0_c_ifspec;
extern RPC_IF_HANDLE LenPowCtl_v1_0_s_ifspec;
#endif /* __LenPowCtl_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


