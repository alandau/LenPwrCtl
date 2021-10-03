

/* this ALWAYS GENERATED file contains the RPC client stubs */


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

#if defined(_M_AMD64)


#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/

#include <string.h>

#include "pwrmgr_h.h"

#define TYPE_FORMAT_STRING_SIZE   59                                
#define PROC_FORMAT_STRING_SIZE   3981                              
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _pwrmgr_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } pwrmgr_MIDL_TYPE_FORMAT_STRING;

typedef struct _pwrmgr_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } pwrmgr_MIDL_PROC_FORMAT_STRING;

typedef struct _pwrmgr_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } pwrmgr_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};

static const RPC_SYNTAX_IDENTIFIER  _NDR64_RpcTransferSyntax = 
{{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}};



extern const pwrmgr_MIDL_TYPE_FORMAT_STRING pwrmgr__MIDL_TypeFormatString;
extern const pwrmgr_MIDL_PROC_FORMAT_STRING pwrmgr__MIDL_ProcFormatString;
extern const pwrmgr_MIDL_EXPR_FORMAT_STRING pwrmgr__MIDL_ExprFormatString;

#define GENERIC_BINDING_TABLE_SIZE   0            


/* Standard interface: LenPowCtl, ver. 1.0,
   GUID={0xaf8abfc6,0x2132,0x4870,{0xbf,0x8d,0xbc,0xa5,0x41,0xff,0xcf,0x0b}} */

 extern const MIDL_STUBLESS_PROXY_INFO LenPowCtl_ProxyInfo;


static const RPC_CLIENT_INTERFACE LenPowCtl___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0xaf8abfc6,0x2132,0x4870,{0xbf,0x8d,0xbc,0xa5,0x41,0xff,0xcf,0x0b}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    0,
    0,
    0,
    &LenPowCtl_ProxyInfo,
    0x02000000
    };
RPC_IF_HANDLE LenPowCtl_v1_0_c_ifspec = (RPC_IF_HANDLE)& LenPowCtl___RpcClientInterface;

extern const MIDL_STUB_DESC LenPowCtl_StubDesc;

static RPC_BINDING_HANDLE LenPowCtl__MIDL_AutoBindHandle;


void LpcCreateContext( 
    /* [in] */ handle_t Binding,
    /* [context_handle][out] */ void **Context)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  0,
                  0,
                  Binding,
                  Context);
    
}


void LpcFreeContext( 
    /* [context_handle][out][in] */ void **Context)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  1,
                  0,
                  Context);
    
}


void LpcIsEasyResumeCapable( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ short *Capable)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  2,
                  0,
                  Context,
                  Capable);
    
}


void LpcIsApsInformationCapable( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ short *Capable)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  3,
                  0,
                  Context,
                  Capable);
    
}


void LpcIsCoolModeCapable( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ short *Capable)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  4,
                  0,
                  Context,
                  Capable);
    
}


void LpcIsIntelligentCoolingCapable( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ short *Capable)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  5,
                  0,
                  Context,
                  Capable);
    
}


void LpcIsIntelligentCoolingAutoModeSupport( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ short *Capable)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  6,
                  0,
                  Context,
                  Capable);
    
}


void Proc7( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ short *arg_1)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  7,
                  0,
                  Context,
                  arg_1);
    
}


void LpcIsAirplanePowerModeCapable( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ short *Capable)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  8,
                  0,
                  Context,
                  Capable);
    
}


void LpcIsAlwaysOnUsbCapable( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ short *Capable)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  9,
                  0,
                  Context,
                  Capable);
    
}


void Proc10( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ short *arg_1)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  10,
                  0,
                  Context,
                  arg_1);
    
}


void Proc11( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ short *arg_1)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  11,
                  0,
                  Context,
                  arg_1);
    
}


void Proc12( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ long *arg_1)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  12,
                  0,
                  Context,
                  arg_1);
    
}


void Proc13( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ long *arg_1)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  13,
                  0,
                  Context,
                  arg_1);
    
}


void Proc14( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ long *arg_1)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  14,
                  0,
                  Context,
                  arg_1);
    
}


void LpcGetAlwaysOnUSBValue( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ long *Value)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  15,
                  0,
                  Context,
                  Value);
    
}


void Proc16( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ long *arg_1)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  16,
                  0,
                  Context,
                  arg_1);
    
}


void Proc17( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ short *arg_1)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  17,
                  0,
                  Context,
                  arg_1);
    
}


void Proc18( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ short *arg_1)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  18,
                  0,
                  Context,
                  arg_1);
    
}


void LpcGetAirplanePowerModeAutoDetection( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ short *Value)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  19,
                  0,
                  Context,
                  Value);
    
}


void LpcGetAirplanePowerMode( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ short *Value)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  20,
                  0,
                  Context,
                  Value);
    
}


void LpcGetIntelligentCoolingAutoMode( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ short *Value)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  21,
                  0,
                  Context,
                  Value);
    
}


void LpcGetIntelligentCooling( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ short *Value)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  22,
                  0,
                  Context,
                  Value);
    
}


void LpcGetCoolMode( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ short *Value)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  23,
                  0,
                  Context,
                  Value);
    
}


void Proc24( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ short *arg_1)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  24,
                  0,
                  Context,
                  arg_1);
    
}


void Proc25( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ short arg_1)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  25,
                  0,
                  Context,
                  arg_1);
    
}


void Proc26( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ short arg_1)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  26,
                  0,
                  Context,
                  arg_1);
    
}


void LpcSetAirplanePowerModeAutoDetection( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ short Value)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  27,
                  0,
                  Context,
                  Value);
    
}


void LpcSetAirplanePowerMode( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ short Value)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  28,
                  0,
                  Context,
                  Value);
    
}


void LpcSetIntelligentCoolingAutoMode( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ short Value)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  29,
                  0,
                  Context,
                  Value);
    
}


void LpcSetIntelligentCooling( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ short Value)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  30,
                  0,
                  Context,
                  Value);
    
}


void LpcSetCoolMode( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ short Value)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  31,
                  0,
                  Context,
                  Value);
    
}


void Proc32( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ short arg_1)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  32,
                  0,
                  Context,
                  arg_1);
    
}


void LpcSetAlwaysOnUSB( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long Value)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  33,
                  0,
                  Context,
                  Value);
    
}


void LpcQueryGaugeResetCapability( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ short *Value,
    /* [in] */ long BatteryNum)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  34,
                  0,
                  Context,
                  Value,
                  BatteryNum);
    
}


void LpcGetChargeThreshold( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ short *Capable,
    /* [out] */ short *Enabled,
    /* [out] */ long *Start,
    /* [out] */ long *Stop)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  35,
                  0,
                  Context,
                  BatteryNum,
                  Capable,
                  Enabled,
                  Start,
                  Stop);
    
}


void LpcGetReconditionState( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ long *Battery,
    /* [out] */ long *Stage,
    /* [out] */ long *StageNum)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  36,
                  0,
                  Context,
                  Battery,
                  Stage,
                  StageNum);
    
}


void LpcGetResetResult( 
    /* [context_handle][in] */ void *Context,
    /* [string][in] */ wchar_t *BarCode,
    /* [out] */ long *ErrorValue,
    /* [out] */ long *TickHigh,
    /* [out] */ long *TickLow)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  37,
                  0,
                  Context,
                  BarCode,
                  ErrorValue,
                  TickHigh,
                  TickLow);
    
}


void LpcStartBatteryGaugeReset( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  38,
                  0,
                  Context,
                  BatteryNum);
    
}


void LpcStopBatteryGaugeReset( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  39,
                  0,
                  Context,
                  BatteryNum);
    
}


void LpcSetChargeThreshold( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [in] */ long Start,
    /* [in] */ long Stop)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  40,
                  0,
                  Context,
                  BatteryNum,
                  Start,
                  Stop);
    
}


void LpcGetFullChargeCapacity( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *Value,
    /* [out] */ short *Capable)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  41,
                  0,
                  Context,
                  BatteryNum,
                  Value,
                  Capable);
    
}


void LpcGetDesignCapacity( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *Value,
    /* [out] */ short *Capable)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  42,
                  0,
                  Context,
                  BatteryNum,
                  Value,
                  Capable);
    
}


void LpcGetDesignVoltage( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *Value,
    /* [out] */ short *Capable)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  43,
                  0,
                  Context,
                  BatteryNum,
                  Value,
                  Capable);
    
}


void LpcGetSerialNumber( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *Value,
    /* [out] */ short *Capable)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  44,
                  0,
                  Context,
                  BatteryNum,
                  Value,
                  Capable);
    
}


void LpcGetAcAdapterWattage( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *Value,
    /* [out] */ short *Capable)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  45,
                  0,
                  Context,
                  BatteryNum,
                  Value,
                  Capable);
    
}


void LpcGetVoltage( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *Value,
    /* [out] */ short *Capable)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  46,
                  0,
                  Context,
                  BatteryNum,
                  Value,
                  Capable);
    
}


void LpcGetCurrent( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *Value,
    /* [out] */ short *Capable)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  47,
                  0,
                  Context,
                  BatteryNum,
                  Value,
                  Capable);
    
}


void LpcGetTemperature( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *Value,
    /* [out] */ short *Capable)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  48,
                  0,
                  Context,
                  BatteryNum,
                  Value,
                  Capable);
    
}


void LpcGetCycleCount( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *Value,
    /* [out] */ short *Capable)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  49,
                  0,
                  Context,
                  BatteryNum,
                  Value,
                  Capable);
    
}


void LpcGetRemainingPercentage( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *Value,
    /* [out] */ short *Capable)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  50,
                  0,
                  Context,
                  BatteryNum,
                  Value,
                  Capable);
    
}


void LpcGetRemainingCapacity( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *Value,
    /* [out] */ short *Capable)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  51,
                  0,
                  Context,
                  BatteryNum,
                  Value,
                  Capable);
    
}


void LpcGetRemainingTime( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *Value,
    /* [out] */ short *Capable)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  52,
                  0,
                  Context,
                  BatteryNum,
                  Value,
                  Capable);
    
}


void LpcGetChargeCompletionTime( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *Value,
    /* [out] */ short *Capable)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  53,
                  0,
                  Context,
                  BatteryNum,
                  Value,
                  Capable);
    
}


void LpcGetChargeStatus( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *Value,
    /* [out] */ short *Capable)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  54,
                  0,
                  Context,
                  BatteryNum,
                  Value,
                  Capable);
    
}


void LpcGetDeviceChemistry( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *Value,
    /* [out] */ short *Capable)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  55,
                  0,
                  Context,
                  BatteryNum,
                  Value,
                  Capable);
    
}


void LpcGetHealthStatus( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *Value,
    /* [out] */ short *Capable)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  56,
                  0,
                  Context,
                  BatteryNum,
                  Value,
                  Capable);
    
}


void LpcGetIsAcAttached( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ short *Value)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  57,
                  0,
                  Context,
                  BatteryNum,
                  Value);
    
}


void LpcGetIsOnLowerThreshold( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ short *Value)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  58,
                  0,
                  Context,
                  BatteryNum,
                  Value);
    
}


void LpcGetCondition( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *Value)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  59,
                  0,
                  Context,
                  BatteryNum,
                  Value);
    
}


void LpcGetControllerType( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *Value)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  60,
                  0,
                  Context,
                  BatteryNum,
                  Value);
    
}


void LpcGetWarrantyInfo( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *Value)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  61,
                  0,
                  Context,
                  BatteryNum,
                  Value);
    
}


void LpcGetDeviceName( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *BufferLen,
    /* [size_is][size_is][ref][out] */ wchar_t **Buffer,
    /* [out] */ short *Capable)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  62,
                  0,
                  Context,
                  BatteryNum,
                  BufferLen,
                  Buffer,
                  Capable);
    
}


void LpcGetBarCodeNumber( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *BufferLen,
    /* [size_is][size_is][ref][out] */ wchar_t **Buffer,
    /* [out] */ short *Capable)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  63,
                  0,
                  Context,
                  BatteryNum,
                  BufferLen,
                  Buffer,
                  Capable);
    
}


void LpcGetFirstUsedDate( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *BufferLen,
    /* [size_is][size_is][ref][out] */ wchar_t **Buffer,
    /* [out] */ short *Capable)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  64,
                  0,
                  Context,
                  BatteryNum,
                  BufferLen,
                  Buffer,
                  Capable);
    
}


void LpcGetManufacturerName( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *BufferLen,
    /* [size_is][size_is][ref][out] */ wchar_t **Buffer)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  65,
                  0,
                  Context,
                  BatteryNum,
                  BufferLen,
                  Buffer);
    
}


void LpcGetLastConditionDate( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *BufferLen,
    /* [size_is][size_is][ref][out] */ wchar_t **Buffer)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  66,
                  0,
                  Context,
                  BatteryNum,
                  BufferLen,
                  Buffer);
    
}


void LpcGetManufactureDate( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *BufferLen,
    /* [size_is][size_is][ref][out] */ wchar_t **Buffer)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  67,
                  0,
                  Context,
                  BatteryNum,
                  BufferLen,
                  Buffer);
    
}


void LpcGetSpecificationInfo( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *Version,
    /* [out] */ long *Revision,
    /* [out] */ short *Capable)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  68,
                  0,
                  Context,
                  BatteryNum,
                  Version,
                  Revision,
                  Capable);
    
}


void LpcGetSBSExData( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *ACSourceInfo,
    /* [out] */ short *WarrantyValid,
    /* [out] */ short *NonReplaceableBattery)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  69,
                  0,
                  Context,
                  BatteryNum,
                  ACSourceInfo,
                  WarrantyValid,
                  NonReplaceableBattery);
    
}


void LpcUpdateSmartBatteryStatus( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  70,
                  0,
                  Context,
                  BatteryNum);
    
}


void LpcGetFirmwareVersion( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out][in] */ long *BufferLen,
    /* [size_is][size_is][ref][out] */ wchar_t **Buffer)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  71,
                  0,
                  Context,
                  BatteryNum,
                  BufferLen,
                  Buffer);
    
}


void LpcSetEasyResumeEnabled( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ short Value)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  72,
                  0,
                  Context,
                  Value);
    
}


void LpcSetEasyResumeLockTimeout( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long Value)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  73,
                  0,
                  Context,
                  Value);
    
}


void LpcGetEasyResumeEnabled( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ short *Value)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  74,
                  0,
                  Context,
                  Value);
    
}


void LpcGetEasyResumeLockTimeout( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ long *Value)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  75,
                  0,
                  Context,
                  Value);
    
}


void LpcGetResetStartTime( 
    /* [context_handle][in] */ void *Context,
    /* [string][in] */ wchar_t *Barcode,
    /* [out] */ long *StartHigh,
    /* [out] */ long *StartLow)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  76,
                  0,
                  Context,
                  Barcode,
                  StartHigh,
                  StartLow);
    
}


void LpcGetFCCValue( 
    /* [context_handle][in] */ void *Context,
    /* [string][in] */ wchar_t *Barcode,
    /* [out] */ long *FCCBeforeReset,
    /* [out] */ long *FCCAfterReset,
    /* [out] */ long *DesignCapacity)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  77,
                  0,
                  Context,
                  Barcode,
                  FCCBeforeReset,
                  FCCAfterReset,
                  DesignCapacity);
    
}


void LpcGetTemporaryChargeMode( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ short *Value)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  78,
                  0,
                  Context,
                  BatteryNum,
                  Value);
    
}


void LpcGetDlsPiCapability( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ short *Value)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&LenPowCtl_ProxyInfo,
                  79,
                  0,
                  Context,
                  BatteryNum,
                  Value);
    
}


#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif

static const pwrmgr_MIDL_PROC_FORMAT_STRING pwrmgr__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure LpcCreateContext */

			0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 12 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 14 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16 */	NdrFcShort( 0x38 ),	/* 56 */
/* 18 */	0x40,		/* Oi2 Flags:  has ext, */
			0x1,		/* 1 */
/* 20 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */
/* 26 */	NdrFcShort( 0x0 ),	/* 0 */
/* 28 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 30 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 32 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 34 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Procedure LpcFreeContext */

/* 36 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 38 */	NdrFcLong( 0x0 ),	/* 0 */
/* 42 */	NdrFcShort( 0x1 ),	/* 1 */
/* 44 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 46 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* Ctxt flags:  via ptr, in, out, */
/* 48 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 50 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 52 */	NdrFcShort( 0x38 ),	/* 56 */
/* 54 */	NdrFcShort( 0x38 ),	/* 56 */
/* 56 */	0x40,		/* Oi2 Flags:  has ext, */
			0x1,		/* 1 */
/* 58 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 60 */	NdrFcShort( 0x0 ),	/* 0 */
/* 62 */	NdrFcShort( 0x0 ),	/* 0 */
/* 64 */	NdrFcShort( 0x0 ),	/* 0 */
/* 66 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 68 */	NdrFcShort( 0x118 ),	/* Flags:  in, out, simple ref, */
/* 70 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 72 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Procedure LpcIsEasyResumeCapable */

/* 74 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 76 */	NdrFcLong( 0x0 ),	/* 0 */
/* 80 */	NdrFcShort( 0x2 ),	/* 2 */
/* 82 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 84 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 86 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 88 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 90 */	NdrFcShort( 0x24 ),	/* 36 */
/* 92 */	NdrFcShort( 0x1a ),	/* 26 */
/* 94 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 96 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 98 */	NdrFcShort( 0x0 ),	/* 0 */
/* 100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 104 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 106 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 108 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 110 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter Capable */

/* 112 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 114 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 116 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcIsApsInformationCapable */

/* 118 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 120 */	NdrFcLong( 0x0 ),	/* 0 */
/* 124 */	NdrFcShort( 0x3 ),	/* 3 */
/* 126 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 128 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 130 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 132 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 134 */	NdrFcShort( 0x24 ),	/* 36 */
/* 136 */	NdrFcShort( 0x1a ),	/* 26 */
/* 138 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 140 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 148 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 150 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 152 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 154 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter Capable */

/* 156 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 158 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 160 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcIsCoolModeCapable */

/* 162 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 164 */	NdrFcLong( 0x0 ),	/* 0 */
/* 168 */	NdrFcShort( 0x4 ),	/* 4 */
/* 170 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 172 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 174 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 176 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 178 */	NdrFcShort( 0x24 ),	/* 36 */
/* 180 */	NdrFcShort( 0x1a ),	/* 26 */
/* 182 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 184 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 192 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 194 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 196 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 198 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter Capable */

/* 200 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 202 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 204 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcIsIntelligentCoolingCapable */

/* 206 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 208 */	NdrFcLong( 0x0 ),	/* 0 */
/* 212 */	NdrFcShort( 0x5 ),	/* 5 */
/* 214 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 216 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 218 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 220 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 222 */	NdrFcShort( 0x24 ),	/* 36 */
/* 224 */	NdrFcShort( 0x1a ),	/* 26 */
/* 226 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 228 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 230 */	NdrFcShort( 0x0 ),	/* 0 */
/* 232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 236 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 238 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 240 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 242 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter Capable */

/* 244 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 246 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 248 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcIsIntelligentCoolingAutoModeSupport */

/* 250 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 252 */	NdrFcLong( 0x0 ),	/* 0 */
/* 256 */	NdrFcShort( 0x6 ),	/* 6 */
/* 258 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 260 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 262 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 264 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 266 */	NdrFcShort( 0x24 ),	/* 36 */
/* 268 */	NdrFcShort( 0x1a ),	/* 26 */
/* 270 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 272 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 274 */	NdrFcShort( 0x0 ),	/* 0 */
/* 276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 280 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 282 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 284 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 286 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter Capable */

/* 288 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 290 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 292 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure Proc7 */

/* 294 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 296 */	NdrFcLong( 0x0 ),	/* 0 */
/* 300 */	NdrFcShort( 0x7 ),	/* 7 */
/* 302 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 304 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 306 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 308 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 310 */	NdrFcShort( 0x24 ),	/* 36 */
/* 312 */	NdrFcShort( 0x1a ),	/* 26 */
/* 314 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 316 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 324 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 326 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 328 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 330 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter arg_1 */

/* 332 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 334 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 336 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcIsAirplanePowerModeCapable */

/* 338 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 340 */	NdrFcLong( 0x0 ),	/* 0 */
/* 344 */	NdrFcShort( 0x8 ),	/* 8 */
/* 346 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 348 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 350 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 352 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 354 */	NdrFcShort( 0x24 ),	/* 36 */
/* 356 */	NdrFcShort( 0x1a ),	/* 26 */
/* 358 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 360 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 368 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 370 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 372 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 374 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter Capable */

/* 376 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 378 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 380 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcIsAlwaysOnUsbCapable */

/* 382 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 384 */	NdrFcLong( 0x0 ),	/* 0 */
/* 388 */	NdrFcShort( 0x9 ),	/* 9 */
/* 390 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 392 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 394 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 396 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 398 */	NdrFcShort( 0x24 ),	/* 36 */
/* 400 */	NdrFcShort( 0x1a ),	/* 26 */
/* 402 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 404 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 412 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 414 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 416 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 418 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter Capable */

/* 420 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 422 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 424 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure Proc10 */

/* 426 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 428 */	NdrFcLong( 0x0 ),	/* 0 */
/* 432 */	NdrFcShort( 0xa ),	/* 10 */
/* 434 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 436 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 438 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 440 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 442 */	NdrFcShort( 0x24 ),	/* 36 */
/* 444 */	NdrFcShort( 0x1a ),	/* 26 */
/* 446 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 448 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 450 */	NdrFcShort( 0x0 ),	/* 0 */
/* 452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 454 */	NdrFcShort( 0x0 ),	/* 0 */
/* 456 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 458 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 460 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 462 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter arg_1 */

/* 464 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 466 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 468 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure Proc11 */

/* 470 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 472 */	NdrFcLong( 0x0 ),	/* 0 */
/* 476 */	NdrFcShort( 0xb ),	/* 11 */
/* 478 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 480 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 482 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 484 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 486 */	NdrFcShort( 0x24 ),	/* 36 */
/* 488 */	NdrFcShort( 0x1a ),	/* 26 */
/* 490 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 492 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 500 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 502 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 504 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 506 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter arg_1 */

/* 508 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 510 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 512 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure Proc12 */

/* 514 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 516 */	NdrFcLong( 0x0 ),	/* 0 */
/* 520 */	NdrFcShort( 0xc ),	/* 12 */
/* 522 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 524 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 526 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 528 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 530 */	NdrFcShort( 0x24 ),	/* 36 */
/* 532 */	NdrFcShort( 0x1c ),	/* 28 */
/* 534 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 536 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 544 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 546 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 548 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 550 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter arg_1 */

/* 552 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 554 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 556 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc13 */

/* 558 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 560 */	NdrFcLong( 0x0 ),	/* 0 */
/* 564 */	NdrFcShort( 0xd ),	/* 13 */
/* 566 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 568 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 570 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 572 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 574 */	NdrFcShort( 0x24 ),	/* 36 */
/* 576 */	NdrFcShort( 0x1c ),	/* 28 */
/* 578 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 580 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 584 */	NdrFcShort( 0x0 ),	/* 0 */
/* 586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 588 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 590 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 592 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 594 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter arg_1 */

/* 596 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 598 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 600 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc14 */

/* 602 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 604 */	NdrFcLong( 0x0 ),	/* 0 */
/* 608 */	NdrFcShort( 0xe ),	/* 14 */
/* 610 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 612 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 614 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 616 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 618 */	NdrFcShort( 0x24 ),	/* 36 */
/* 620 */	NdrFcShort( 0x1c ),	/* 28 */
/* 622 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 624 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 628 */	NdrFcShort( 0x0 ),	/* 0 */
/* 630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 632 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 634 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 636 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 638 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter arg_1 */

/* 640 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 642 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 644 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LpcGetAlwaysOnUSBValue */

/* 646 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 648 */	NdrFcLong( 0x0 ),	/* 0 */
/* 652 */	NdrFcShort( 0xf ),	/* 15 */
/* 654 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 656 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 658 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 660 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 662 */	NdrFcShort( 0x24 ),	/* 36 */
/* 664 */	NdrFcShort( 0x1c ),	/* 28 */
/* 666 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 668 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 676 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 678 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 680 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 682 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter Value */

/* 684 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 686 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 688 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc16 */

/* 690 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 692 */	NdrFcLong( 0x0 ),	/* 0 */
/* 696 */	NdrFcShort( 0x10 ),	/* 16 */
/* 698 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 700 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 702 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 704 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 706 */	NdrFcShort( 0x24 ),	/* 36 */
/* 708 */	NdrFcShort( 0x1c ),	/* 28 */
/* 710 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 712 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 714 */	NdrFcShort( 0x0 ),	/* 0 */
/* 716 */	NdrFcShort( 0x0 ),	/* 0 */
/* 718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 720 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 722 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 724 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 726 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter arg_1 */

/* 728 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 730 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 732 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc17 */

/* 734 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 736 */	NdrFcLong( 0x0 ),	/* 0 */
/* 740 */	NdrFcShort( 0x11 ),	/* 17 */
/* 742 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 744 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 746 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 748 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 750 */	NdrFcShort( 0x24 ),	/* 36 */
/* 752 */	NdrFcShort( 0x1a ),	/* 26 */
/* 754 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 756 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 764 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 766 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 768 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 770 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter arg_1 */

/* 772 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 774 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 776 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure Proc18 */

/* 778 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 780 */	NdrFcLong( 0x0 ),	/* 0 */
/* 784 */	NdrFcShort( 0x12 ),	/* 18 */
/* 786 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 788 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 790 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 792 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 794 */	NdrFcShort( 0x24 ),	/* 36 */
/* 796 */	NdrFcShort( 0x1a ),	/* 26 */
/* 798 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 800 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 802 */	NdrFcShort( 0x0 ),	/* 0 */
/* 804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 808 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 810 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 812 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 814 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter arg_1 */

/* 816 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 818 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 820 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcGetAirplanePowerModeAutoDetection */

/* 822 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 824 */	NdrFcLong( 0x0 ),	/* 0 */
/* 828 */	NdrFcShort( 0x13 ),	/* 19 */
/* 830 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 832 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 834 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 836 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 838 */	NdrFcShort( 0x24 ),	/* 36 */
/* 840 */	NdrFcShort( 0x1a ),	/* 26 */
/* 842 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 844 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 846 */	NdrFcShort( 0x0 ),	/* 0 */
/* 848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 852 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 854 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 856 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 858 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter Value */

/* 860 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 862 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 864 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcGetAirplanePowerMode */

/* 866 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 868 */	NdrFcLong( 0x0 ),	/* 0 */
/* 872 */	NdrFcShort( 0x14 ),	/* 20 */
/* 874 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 876 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 878 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 880 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 882 */	NdrFcShort( 0x24 ),	/* 36 */
/* 884 */	NdrFcShort( 0x1a ),	/* 26 */
/* 886 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 888 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 892 */	NdrFcShort( 0x0 ),	/* 0 */
/* 894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 896 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 898 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 900 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 902 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter Value */

/* 904 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 906 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 908 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcGetIntelligentCoolingAutoMode */

/* 910 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 912 */	NdrFcLong( 0x0 ),	/* 0 */
/* 916 */	NdrFcShort( 0x15 ),	/* 21 */
/* 918 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 920 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 922 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 924 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 926 */	NdrFcShort( 0x24 ),	/* 36 */
/* 928 */	NdrFcShort( 0x1a ),	/* 26 */
/* 930 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 932 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 934 */	NdrFcShort( 0x0 ),	/* 0 */
/* 936 */	NdrFcShort( 0x0 ),	/* 0 */
/* 938 */	NdrFcShort( 0x0 ),	/* 0 */
/* 940 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 942 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 944 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 946 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter Value */

/* 948 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 950 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 952 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcGetIntelligentCooling */

/* 954 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 956 */	NdrFcLong( 0x0 ),	/* 0 */
/* 960 */	NdrFcShort( 0x16 ),	/* 22 */
/* 962 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 964 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 966 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 968 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 970 */	NdrFcShort( 0x24 ),	/* 36 */
/* 972 */	NdrFcShort( 0x1a ),	/* 26 */
/* 974 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 976 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 978 */	NdrFcShort( 0x0 ),	/* 0 */
/* 980 */	NdrFcShort( 0x0 ),	/* 0 */
/* 982 */	NdrFcShort( 0x0 ),	/* 0 */
/* 984 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 986 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 988 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 990 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter Value */

/* 992 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 994 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 996 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcGetCoolMode */

/* 998 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1000 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1004 */	NdrFcShort( 0x17 ),	/* 23 */
/* 1006 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1008 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1010 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1012 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1014 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1016 */	NdrFcShort( 0x1a ),	/* 26 */
/* 1018 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 1020 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1022 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1024 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1028 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 1030 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1032 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1034 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter Value */

/* 1036 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1038 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1040 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure Proc24 */

/* 1042 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1044 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1048 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1050 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1052 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1054 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1056 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1058 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1060 */	NdrFcShort( 0x1a ),	/* 26 */
/* 1062 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 1064 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1066 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1068 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1070 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1072 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 1074 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1076 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1078 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter arg_1 */

/* 1080 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1082 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1084 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure Proc25 */

/* 1086 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1088 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1092 */	NdrFcShort( 0x19 ),	/* 25 */
/* 1094 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1096 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1098 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1100 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1102 */	NdrFcShort( 0x2a ),	/* 42 */
/* 1104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1106 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 1108 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1114 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1116 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 1118 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1120 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1122 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter arg_1 */

/* 1124 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1126 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1128 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure Proc26 */

/* 1130 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1132 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1136 */	NdrFcShort( 0x1a ),	/* 26 */
/* 1138 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1140 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1142 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1144 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1146 */	NdrFcShort( 0x2a ),	/* 42 */
/* 1148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1150 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 1152 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1160 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 1162 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1164 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1166 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter arg_1 */

/* 1168 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1170 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1172 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcSetAirplanePowerModeAutoDetection */

/* 1174 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1176 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1180 */	NdrFcShort( 0x1b ),	/* 27 */
/* 1182 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1184 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1186 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1188 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1190 */	NdrFcShort( 0x2a ),	/* 42 */
/* 1192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1194 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 1196 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1204 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 1206 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1208 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1210 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter Value */

/* 1212 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1214 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1216 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcSetAirplanePowerMode */

/* 1218 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1220 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1224 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1226 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1228 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1230 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1232 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1234 */	NdrFcShort( 0x2a ),	/* 42 */
/* 1236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1238 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 1240 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1248 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 1250 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1252 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1254 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter Value */

/* 1256 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1258 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1260 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcSetIntelligentCoolingAutoMode */

/* 1262 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1264 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1268 */	NdrFcShort( 0x1d ),	/* 29 */
/* 1270 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1272 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1274 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1276 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1278 */	NdrFcShort( 0x2a ),	/* 42 */
/* 1280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1282 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 1284 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1292 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 1294 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1296 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1298 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter Value */

/* 1300 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1302 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1304 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcSetIntelligentCooling */

/* 1306 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1308 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1312 */	NdrFcShort( 0x1e ),	/* 30 */
/* 1314 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1316 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1318 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1320 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1322 */	NdrFcShort( 0x2a ),	/* 42 */
/* 1324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1326 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 1328 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1336 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 1338 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1340 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1342 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter Value */

/* 1344 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1346 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1348 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcSetCoolMode */

/* 1350 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1352 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1356 */	NdrFcShort( 0x1f ),	/* 31 */
/* 1358 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1360 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1362 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1364 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1366 */	NdrFcShort( 0x2a ),	/* 42 */
/* 1368 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1370 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 1372 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1378 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1380 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 1382 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1384 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1386 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter Value */

/* 1388 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1390 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1392 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure Proc32 */

/* 1394 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1396 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1400 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1402 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1404 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1406 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1408 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1410 */	NdrFcShort( 0x2a ),	/* 42 */
/* 1412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1414 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 1416 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1418 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1424 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 1426 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1428 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1430 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter arg_1 */

/* 1432 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1434 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1436 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcSetAlwaysOnUSB */

/* 1438 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1440 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1444 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1446 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1448 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1450 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1452 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1454 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1456 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1458 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 1460 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1468 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 1470 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1472 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1474 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter Value */

/* 1476 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1478 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1480 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LpcQueryGaugeResetCapability */

/* 1482 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1484 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1488 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1490 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1492 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1494 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1496 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1498 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1500 */	NdrFcShort( 0x1a ),	/* 26 */
/* 1502 */	0x40,		/* Oi2 Flags:  has ext, */
			0x3,		/* 3 */
/* 1504 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1512 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 1514 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1516 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1518 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter Value */

/* 1520 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1522 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1524 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter BatteryNum */

/* 1526 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1528 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1530 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LpcGetChargeThreshold */

/* 1532 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1534 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1538 */	NdrFcShort( 0x23 ),	/* 35 */
/* 1540 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1542 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1544 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1546 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1548 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1550 */	NdrFcShort( 0x6c ),	/* 108 */
/* 1552 */	0x40,		/* Oi2 Flags:  has ext, */
			0x6,		/* 6 */
/* 1554 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1560 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1562 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 1564 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1566 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1568 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 1570 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1572 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1574 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Capable */

/* 1576 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1578 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1580 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter Enabled */

/* 1582 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1584 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1586 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter Start */

/* 1588 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1590 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1592 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Stop */

/* 1594 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1596 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1598 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LpcGetReconditionState */

/* 1600 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1602 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1606 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1608 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1610 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1612 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1614 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1616 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1618 */	NdrFcShort( 0x54 ),	/* 84 */
/* 1620 */	0x40,		/* Oi2 Flags:  has ext, */
			0x4,		/* 4 */
/* 1622 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1628 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1630 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 1632 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1634 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1636 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter Battery */

/* 1638 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1640 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1642 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Stage */

/* 1644 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1646 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1648 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter StageNum */

/* 1650 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1652 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1654 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LpcGetResetResult */

/* 1656 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1658 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1662 */	NdrFcShort( 0x25 ),	/* 37 */
/* 1664 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1666 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1668 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1670 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1672 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1674 */	NdrFcShort( 0x54 ),	/* 84 */
/* 1676 */	0x42,		/* Oi2 Flags:  clt must size, has ext, */
			0x5,		/* 5 */
/* 1678 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1680 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1686 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 1688 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1690 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1692 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BarCode */

/* 1694 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1696 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1698 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Parameter ErrorValue */

/* 1700 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1702 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1704 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter TickHigh */

/* 1706 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1708 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1710 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter TickLow */

/* 1712 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1714 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1716 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LpcStartBatteryGaugeReset */

/* 1718 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1720 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1724 */	NdrFcShort( 0x26 ),	/* 38 */
/* 1726 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1728 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1730 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1732 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1734 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1736 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1738 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 1740 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1742 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1744 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1748 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 1750 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1752 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1754 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 1756 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1758 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1760 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LpcStopBatteryGaugeReset */

/* 1762 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1764 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1768 */	NdrFcShort( 0x27 ),	/* 39 */
/* 1770 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1772 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1774 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1776 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1778 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1782 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 1784 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1786 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1790 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1792 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 1794 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1796 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1798 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 1800 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1802 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1804 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LpcSetChargeThreshold */

/* 1806 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1808 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1812 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1814 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1816 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1818 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1820 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1822 */	NdrFcShort( 0x3c ),	/* 60 */
/* 1824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1826 */	0x40,		/* Oi2 Flags:  has ext, */
			0x4,		/* 4 */
/* 1828 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1830 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1832 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1834 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1836 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 1838 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1840 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1842 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 1844 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1846 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1848 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Start */

/* 1850 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1852 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1854 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Stop */

/* 1856 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1858 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1860 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LpcGetFullChargeCapacity */

/* 1862 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1864 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1868 */	NdrFcShort( 0x29 ),	/* 41 */
/* 1870 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1872 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1874 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1876 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1878 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1880 */	NdrFcShort( 0x36 ),	/* 54 */
/* 1882 */	0x40,		/* Oi2 Flags:  has ext, */
			0x4,		/* 4 */
/* 1884 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1892 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 1894 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1896 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1898 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 1900 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1902 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1904 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Value */

/* 1906 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1908 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1910 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Capable */

/* 1912 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1914 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1916 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcGetDesignCapacity */

/* 1918 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1920 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1924 */	NdrFcShort( 0x2a ),	/* 42 */
/* 1926 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1928 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1930 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1932 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1934 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1936 */	NdrFcShort( 0x36 ),	/* 54 */
/* 1938 */	0x40,		/* Oi2 Flags:  has ext, */
			0x4,		/* 4 */
/* 1940 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1942 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1944 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1946 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1948 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 1950 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1952 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1954 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 1956 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1958 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1960 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Value */

/* 1962 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1964 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1966 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Capable */

/* 1968 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1970 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1972 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcGetDesignVoltage */

/* 1974 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1976 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1980 */	NdrFcShort( 0x2b ),	/* 43 */
/* 1982 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1984 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1986 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1988 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1990 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1992 */	NdrFcShort( 0x36 ),	/* 54 */
/* 1994 */	0x40,		/* Oi2 Flags:  has ext, */
			0x4,		/* 4 */
/* 1996 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2000 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2004 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 2006 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2008 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2010 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 2012 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2014 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2016 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Value */

/* 2018 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2020 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2022 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Capable */

/* 2024 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2026 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2028 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcGetSerialNumber */

/* 2030 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2032 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2036 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2038 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2040 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2042 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2044 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2046 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2048 */	NdrFcShort( 0x36 ),	/* 54 */
/* 2050 */	0x40,		/* Oi2 Flags:  has ext, */
			0x4,		/* 4 */
/* 2052 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2054 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2056 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2058 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2060 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 2062 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2064 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2066 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 2068 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2070 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2072 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Value */

/* 2074 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2076 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2078 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Capable */

/* 2080 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2082 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2084 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcGetAcAdapterWattage */

/* 2086 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2088 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2092 */	NdrFcShort( 0x2d ),	/* 45 */
/* 2094 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2096 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2098 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2100 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2102 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2104 */	NdrFcShort( 0x36 ),	/* 54 */
/* 2106 */	0x40,		/* Oi2 Flags:  has ext, */
			0x4,		/* 4 */
/* 2108 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2114 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2116 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 2118 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2120 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2122 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 2124 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2126 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2128 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Value */

/* 2130 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2132 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2134 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Capable */

/* 2136 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2138 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2140 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcGetVoltage */

/* 2142 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2144 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2148 */	NdrFcShort( 0x2e ),	/* 46 */
/* 2150 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2152 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2154 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2156 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2158 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2160 */	NdrFcShort( 0x36 ),	/* 54 */
/* 2162 */	0x40,		/* Oi2 Flags:  has ext, */
			0x4,		/* 4 */
/* 2164 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2172 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 2174 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2176 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2178 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 2180 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2182 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2184 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Value */

/* 2186 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2188 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2190 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Capable */

/* 2192 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2194 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2196 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcGetCurrent */

/* 2198 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2200 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2204 */	NdrFcShort( 0x2f ),	/* 47 */
/* 2206 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2208 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2210 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2212 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2214 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2216 */	NdrFcShort( 0x36 ),	/* 54 */
/* 2218 */	0x40,		/* Oi2 Flags:  has ext, */
			0x4,		/* 4 */
/* 2220 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2228 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 2230 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2232 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2234 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 2236 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2238 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2240 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Value */

/* 2242 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2244 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2246 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Capable */

/* 2248 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2250 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2252 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcGetTemperature */

/* 2254 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2256 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2260 */	NdrFcShort( 0x30 ),	/* 48 */
/* 2262 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2264 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2266 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2268 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2270 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2272 */	NdrFcShort( 0x36 ),	/* 54 */
/* 2274 */	0x40,		/* Oi2 Flags:  has ext, */
			0x4,		/* 4 */
/* 2276 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2284 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 2286 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2288 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2290 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 2292 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2294 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2296 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Value */

/* 2298 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2300 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2302 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Capable */

/* 2304 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2306 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2308 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcGetCycleCount */

/* 2310 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2312 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2316 */	NdrFcShort( 0x31 ),	/* 49 */
/* 2318 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2320 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2322 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2324 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2326 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2328 */	NdrFcShort( 0x36 ),	/* 54 */
/* 2330 */	0x40,		/* Oi2 Flags:  has ext, */
			0x4,		/* 4 */
/* 2332 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2340 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 2342 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2344 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2346 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 2348 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2350 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2352 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Value */

/* 2354 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2356 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2358 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Capable */

/* 2360 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2362 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2364 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcGetRemainingPercentage */

/* 2366 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2368 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2372 */	NdrFcShort( 0x32 ),	/* 50 */
/* 2374 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2376 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2378 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2380 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2382 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2384 */	NdrFcShort( 0x36 ),	/* 54 */
/* 2386 */	0x40,		/* Oi2 Flags:  has ext, */
			0x4,		/* 4 */
/* 2388 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2390 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2392 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2396 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 2398 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2400 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2402 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 2404 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2406 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2408 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Value */

/* 2410 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2412 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2414 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Capable */

/* 2416 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2418 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2420 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcGetRemainingCapacity */

/* 2422 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2424 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2428 */	NdrFcShort( 0x33 ),	/* 51 */
/* 2430 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2432 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2434 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2436 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2438 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2440 */	NdrFcShort( 0x36 ),	/* 54 */
/* 2442 */	0x40,		/* Oi2 Flags:  has ext, */
			0x4,		/* 4 */
/* 2444 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2446 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2448 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2450 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2452 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 2454 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2456 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2458 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 2460 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2462 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2464 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Value */

/* 2466 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2468 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2470 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Capable */

/* 2472 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2474 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2476 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcGetRemainingTime */

/* 2478 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2480 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2484 */	NdrFcShort( 0x34 ),	/* 52 */
/* 2486 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2488 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2490 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2492 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2494 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2496 */	NdrFcShort( 0x36 ),	/* 54 */
/* 2498 */	0x40,		/* Oi2 Flags:  has ext, */
			0x4,		/* 4 */
/* 2500 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2508 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 2510 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2512 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2514 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 2516 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2518 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2520 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Value */

/* 2522 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2524 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2526 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Capable */

/* 2528 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2530 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2532 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcGetChargeCompletionTime */

/* 2534 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2536 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2540 */	NdrFcShort( 0x35 ),	/* 53 */
/* 2542 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2544 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2546 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2548 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2550 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2552 */	NdrFcShort( 0x36 ),	/* 54 */
/* 2554 */	0x40,		/* Oi2 Flags:  has ext, */
			0x4,		/* 4 */
/* 2556 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2560 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2562 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2564 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 2566 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2568 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2570 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 2572 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2574 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2576 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Value */

/* 2578 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2580 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2582 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Capable */

/* 2584 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2586 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2588 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcGetChargeStatus */

/* 2590 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2592 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2596 */	NdrFcShort( 0x36 ),	/* 54 */
/* 2598 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2600 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2602 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2604 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2606 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2608 */	NdrFcShort( 0x36 ),	/* 54 */
/* 2610 */	0x40,		/* Oi2 Flags:  has ext, */
			0x4,		/* 4 */
/* 2612 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2618 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2620 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 2622 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2624 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2626 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 2628 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2630 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2632 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Value */

/* 2634 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2636 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2638 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Capable */

/* 2640 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2642 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2644 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcGetDeviceChemistry */

/* 2646 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2648 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2652 */	NdrFcShort( 0x37 ),	/* 55 */
/* 2654 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2656 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2658 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2660 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2662 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2664 */	NdrFcShort( 0x36 ),	/* 54 */
/* 2666 */	0x40,		/* Oi2 Flags:  has ext, */
			0x4,		/* 4 */
/* 2668 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2676 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 2678 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2680 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2682 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 2684 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2686 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2688 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Value */

/* 2690 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2692 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2694 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Capable */

/* 2696 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2698 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2700 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcGetHealthStatus */

/* 2702 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2704 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2708 */	NdrFcShort( 0x38 ),	/* 56 */
/* 2710 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2712 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2714 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2716 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2718 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2720 */	NdrFcShort( 0x36 ),	/* 54 */
/* 2722 */	0x40,		/* Oi2 Flags:  has ext, */
			0x4,		/* 4 */
/* 2724 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2732 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 2734 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2736 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2738 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 2740 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2742 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2744 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Value */

/* 2746 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2748 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2750 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Capable */

/* 2752 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2754 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2756 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcGetIsAcAttached */

/* 2758 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2760 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2764 */	NdrFcShort( 0x39 ),	/* 57 */
/* 2766 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2768 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2770 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2772 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2774 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2776 */	NdrFcShort( 0x1a ),	/* 26 */
/* 2778 */	0x40,		/* Oi2 Flags:  has ext, */
			0x3,		/* 3 */
/* 2780 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2782 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2784 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2786 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2788 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 2790 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2792 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2794 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 2796 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2798 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2800 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Value */

/* 2802 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2804 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2806 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcGetIsOnLowerThreshold */

/* 2808 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2810 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2814 */	NdrFcShort( 0x3a ),	/* 58 */
/* 2816 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2818 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2820 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2822 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2824 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2826 */	NdrFcShort( 0x1a ),	/* 26 */
/* 2828 */	0x40,		/* Oi2 Flags:  has ext, */
			0x3,		/* 3 */
/* 2830 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2832 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2834 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2838 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 2840 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2842 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2844 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 2846 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2848 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2850 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Value */

/* 2852 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2854 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2856 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcGetCondition */

/* 2858 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2860 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2864 */	NdrFcShort( 0x3b ),	/* 59 */
/* 2866 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2868 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2870 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2872 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2874 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2876 */	NdrFcShort( 0x1c ),	/* 28 */
/* 2878 */	0x40,		/* Oi2 Flags:  has ext, */
			0x3,		/* 3 */
/* 2880 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2882 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2888 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 2890 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2892 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2894 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 2896 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2898 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2900 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Value */

/* 2902 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2904 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2906 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LpcGetControllerType */

/* 2908 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2910 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2914 */	NdrFcShort( 0x3c ),	/* 60 */
/* 2916 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2918 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2920 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2922 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2924 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2926 */	NdrFcShort( 0x1c ),	/* 28 */
/* 2928 */	0x40,		/* Oi2 Flags:  has ext, */
			0x3,		/* 3 */
/* 2930 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2932 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2934 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2936 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2938 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 2940 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2942 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2944 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 2946 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2948 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2950 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Value */

/* 2952 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2954 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2956 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LpcGetWarrantyInfo */

/* 2958 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2960 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2964 */	NdrFcShort( 0x3d ),	/* 61 */
/* 2966 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2968 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2970 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2972 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2974 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2976 */	NdrFcShort( 0x1c ),	/* 28 */
/* 2978 */	0x40,		/* Oi2 Flags:  has ext, */
			0x3,		/* 3 */
/* 2980 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2982 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2984 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2986 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2988 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 2990 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2992 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2994 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 2996 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2998 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3000 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Value */

/* 3002 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3004 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3006 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LpcGetDeviceName */

/* 3008 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3010 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3014 */	NdrFcShort( 0x3e ),	/* 62 */
/* 3016 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3018 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3020 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3022 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3024 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3026 */	NdrFcShort( 0x36 ),	/* 54 */
/* 3028 */	0x41,		/* Oi2 Flags:  srv must size, has ext, */
			0x5,		/* 5 */
/* 3030 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3032 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3034 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3038 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 3040 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3042 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3044 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 3046 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3048 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3050 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter BufferLen */

/* 3052 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3054 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3056 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Buffer */

/* 3058 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 3060 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3062 */	NdrFcShort( 0x22 ),	/* Type Offset=34 */

	/* Parameter Capable */

/* 3064 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3066 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3068 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcGetBarCodeNumber */

/* 3070 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3072 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3076 */	NdrFcShort( 0x3f ),	/* 63 */
/* 3078 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3080 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3082 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3084 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3086 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3088 */	NdrFcShort( 0x36 ),	/* 54 */
/* 3090 */	0x41,		/* Oi2 Flags:  srv must size, has ext, */
			0x5,		/* 5 */
/* 3092 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3094 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3096 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3098 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3100 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 3102 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3104 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3106 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 3108 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3110 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3112 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter BufferLen */

/* 3114 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3116 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3118 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Buffer */

/* 3120 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 3122 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3124 */	NdrFcShort( 0x22 ),	/* Type Offset=34 */

	/* Parameter Capable */

/* 3126 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3128 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3130 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcGetFirstUsedDate */

/* 3132 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3134 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3138 */	NdrFcShort( 0x40 ),	/* 64 */
/* 3140 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3142 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3144 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3146 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3148 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3150 */	NdrFcShort( 0x36 ),	/* 54 */
/* 3152 */	0x41,		/* Oi2 Flags:  srv must size, has ext, */
			0x5,		/* 5 */
/* 3154 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3156 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3162 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 3164 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3166 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3168 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 3170 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3172 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3174 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter BufferLen */

/* 3176 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3178 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3180 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Buffer */

/* 3182 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 3184 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3186 */	NdrFcShort( 0x22 ),	/* Type Offset=34 */

	/* Parameter Capable */

/* 3188 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3190 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3192 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcGetManufacturerName */

/* 3194 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3196 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3200 */	NdrFcShort( 0x41 ),	/* 65 */
/* 3202 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3204 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3206 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3208 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3210 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3212 */	NdrFcShort( 0x1c ),	/* 28 */
/* 3214 */	0x41,		/* Oi2 Flags:  srv must size, has ext, */
			0x4,		/* 4 */
/* 3216 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3218 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3224 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 3226 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3228 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3230 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 3232 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3234 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3236 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter BufferLen */

/* 3238 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3240 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3242 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Buffer */

/* 3244 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 3246 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3248 */	NdrFcShort( 0x22 ),	/* Type Offset=34 */

	/* Procedure LpcGetLastConditionDate */

/* 3250 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3252 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3256 */	NdrFcShort( 0x42 ),	/* 66 */
/* 3258 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3260 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3262 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3264 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3266 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3268 */	NdrFcShort( 0x1c ),	/* 28 */
/* 3270 */	0x41,		/* Oi2 Flags:  srv must size, has ext, */
			0x4,		/* 4 */
/* 3272 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3274 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3280 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 3282 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3284 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3286 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 3288 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3290 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3292 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter BufferLen */

/* 3294 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3296 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3298 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Buffer */

/* 3300 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 3302 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3304 */	NdrFcShort( 0x22 ),	/* Type Offset=34 */

	/* Procedure LpcGetManufactureDate */

/* 3306 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3308 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3312 */	NdrFcShort( 0x43 ),	/* 67 */
/* 3314 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3316 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3318 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3320 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3322 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3324 */	NdrFcShort( 0x1c ),	/* 28 */
/* 3326 */	0x41,		/* Oi2 Flags:  srv must size, has ext, */
			0x4,		/* 4 */
/* 3328 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3330 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3336 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 3338 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3340 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3342 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 3344 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3346 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3348 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter BufferLen */

/* 3350 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3352 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3354 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Buffer */

/* 3356 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 3358 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3360 */	NdrFcShort( 0x22 ),	/* Type Offset=34 */

	/* Procedure LpcGetSpecificationInfo */

/* 3362 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3364 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3368 */	NdrFcShort( 0x44 ),	/* 68 */
/* 3370 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3372 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3374 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3376 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3378 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3380 */	NdrFcShort( 0x52 ),	/* 82 */
/* 3382 */	0x40,		/* Oi2 Flags:  has ext, */
			0x5,		/* 5 */
/* 3384 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3388 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3390 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3392 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 3394 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3396 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3398 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 3400 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3402 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3404 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Version */

/* 3406 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3408 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3410 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Revision */

/* 3412 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3414 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3416 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Capable */

/* 3418 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3420 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3422 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcGetSBSExData */

/* 3424 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3426 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3430 */	NdrFcShort( 0x45 ),	/* 69 */
/* 3432 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3434 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3436 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3438 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3440 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3442 */	NdrFcShort( 0x50 ),	/* 80 */
/* 3444 */	0x40,		/* Oi2 Flags:  has ext, */
			0x5,		/* 5 */
/* 3446 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3448 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3450 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3454 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 3456 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3458 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3460 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 3462 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3464 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3466 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ACSourceInfo */

/* 3468 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3470 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3472 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter WarrantyValid */

/* 3474 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3476 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3478 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter NonReplaceableBattery */

/* 3480 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3482 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3484 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcUpdateSmartBatteryStatus */

/* 3486 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3488 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3492 */	NdrFcShort( 0x46 ),	/* 70 */
/* 3494 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3496 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3498 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3500 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3502 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3506 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 3508 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3512 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3514 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3516 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 3518 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3520 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3522 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 3524 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3526 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3528 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LpcGetFirmwareVersion */

/* 3530 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3532 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3536 */	NdrFcShort( 0x47 ),	/* 71 */
/* 3538 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3540 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3542 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3544 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3546 */	NdrFcShort( 0x48 ),	/* 72 */
/* 3548 */	NdrFcShort( 0x1c ),	/* 28 */
/* 3550 */	0x41,		/* Oi2 Flags:  srv must size, has ext, */
			0x4,		/* 4 */
/* 3552 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3554 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3560 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 3562 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3564 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3566 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 3568 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3570 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3572 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter BufferLen */

/* 3574 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 3576 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3578 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Buffer */

/* 3580 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 3582 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3584 */	NdrFcShort( 0x22 ),	/* Type Offset=34 */

	/* Procedure LpcSetEasyResumeEnabled */

/* 3586 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3588 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3592 */	NdrFcShort( 0x48 ),	/* 72 */
/* 3594 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3596 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3598 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3600 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3602 */	NdrFcShort( 0x2a ),	/* 42 */
/* 3604 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3606 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 3608 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3616 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 3618 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3620 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3622 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter Value */

/* 3624 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3626 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3628 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcSetEasyResumeLockTimeout */

/* 3630 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3632 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3636 */	NdrFcShort( 0x49 ),	/* 73 */
/* 3638 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3640 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3642 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3644 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3646 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3650 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 3652 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3654 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3656 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3658 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3660 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 3662 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3664 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3666 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter Value */

/* 3668 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3670 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3672 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LpcGetEasyResumeEnabled */

/* 3674 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3676 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3680 */	NdrFcShort( 0x4a ),	/* 74 */
/* 3682 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3684 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3686 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3688 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3690 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3692 */	NdrFcShort( 0x1a ),	/* 26 */
/* 3694 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 3696 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3700 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3704 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 3706 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3708 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3710 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter Value */

/* 3712 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3714 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3716 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcGetEasyResumeLockTimeout */

/* 3718 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3720 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3724 */	NdrFcShort( 0x4b ),	/* 75 */
/* 3726 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3728 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3730 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3732 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3734 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3736 */	NdrFcShort( 0x1c ),	/* 28 */
/* 3738 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 3740 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3742 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3744 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3748 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 3750 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3752 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3754 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter Value */

/* 3756 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3758 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3760 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LpcGetResetStartTime */

/* 3762 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3764 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3768 */	NdrFcShort( 0x4c ),	/* 76 */
/* 3770 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3772 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3774 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3776 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3778 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3780 */	NdrFcShort( 0x38 ),	/* 56 */
/* 3782 */	0x42,		/* Oi2 Flags:  clt must size, has ext, */
			0x4,		/* 4 */
/* 3784 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3786 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3790 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3792 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 3794 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3796 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3798 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter Barcode */

/* 3800 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3802 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3804 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Parameter StartHigh */

/* 3806 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3808 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3810 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter StartLow */

/* 3812 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3814 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3816 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LpcGetFCCValue */

/* 3818 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3820 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3824 */	NdrFcShort( 0x4d ),	/* 77 */
/* 3826 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3828 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3830 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3832 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3834 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3836 */	NdrFcShort( 0x54 ),	/* 84 */
/* 3838 */	0x42,		/* Oi2 Flags:  clt must size, has ext, */
			0x5,		/* 5 */
/* 3840 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3842 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3844 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3846 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3848 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 3850 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3852 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3854 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter Barcode */

/* 3856 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3858 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3860 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Parameter FCCBeforeReset */

/* 3862 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3864 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3866 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter FCCAfterReset */

/* 3868 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3870 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3872 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter DesignCapacity */

/* 3874 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3876 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3878 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LpcGetTemporaryChargeMode */

/* 3880 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3882 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3886 */	NdrFcShort( 0x4e ),	/* 78 */
/* 3888 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3890 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3892 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3894 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3896 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3898 */	NdrFcShort( 0x1a ),	/* 26 */
/* 3900 */	0x40,		/* Oi2 Flags:  has ext, */
			0x3,		/* 3 */
/* 3902 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3904 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3906 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3908 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3910 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 3912 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3914 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3916 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 3918 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3920 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3922 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Value */

/* 3924 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3926 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3928 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcGetDlsPiCapability */

/* 3930 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3932 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3936 */	NdrFcShort( 0x4f ),	/* 79 */
/* 3938 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3940 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3942 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3944 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3946 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3948 */	NdrFcShort( 0x1a ),	/* 26 */
/* 3950 */	0x40,		/* Oi2 Flags:  has ext, */
			0x3,		/* 3 */
/* 3952 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3954 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3956 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3958 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3960 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 3962 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3964 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3966 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 3968 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3970 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3972 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Value */

/* 3974 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3976 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3978 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

			0x0
        }
    };

static const pwrmgr_MIDL_TYPE_FORMAT_STRING pwrmgr__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/*  4 */	NdrFcShort( 0x2 ),	/* Offset= 2 (6) */
/*  6 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* Ctxt flags:  via ptr, out, */
/*  8 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 10 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 12 */	NdrFcShort( 0x2 ),	/* Offset= 2 (14) */
/* 14 */	0x30,		/* FC_BIND_CONTEXT */
			0xe1,		/* Ctxt flags:  via ptr, in, out, can't be null */
/* 16 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 18 */	0x30,		/* FC_BIND_CONTEXT */
			0x41,		/* Ctxt flags:  in, can't be null */
/* 20 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 22 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 24 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 26 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 28 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 30 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 32 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 34 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 36 */	NdrFcShort( 0x2 ),	/* Offset= 2 (38) */
/* 38 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 40 */	NdrFcShort( 0x2 ),	/* Offset= 2 (42) */
/* 42 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 44 */	NdrFcShort( 0x2 ),	/* 2 */
/* 46 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x54,		/* FC_DEREFERENCE */
/* 48 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 50 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 52 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 54 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 56 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */

			0x0
        }
    };

static const unsigned short LenPowCtl_FormatStringOffsetTable[] =
    {
    0,
    36,
    74,
    118,
    162,
    206,
    250,
    294,
    338,
    382,
    426,
    470,
    514,
    558,
    602,
    646,
    690,
    734,
    778,
    822,
    866,
    910,
    954,
    998,
    1042,
    1086,
    1130,
    1174,
    1218,
    1262,
    1306,
    1350,
    1394,
    1438,
    1482,
    1532,
    1600,
    1656,
    1718,
    1762,
    1806,
    1862,
    1918,
    1974,
    2030,
    2086,
    2142,
    2198,
    2254,
    2310,
    2366,
    2422,
    2478,
    2534,
    2590,
    2646,
    2702,
    2758,
    2808,
    2858,
    2908,
    2958,
    3008,
    3070,
    3132,
    3194,
    3250,
    3306,
    3362,
    3424,
    3486,
    3530,
    3586,
    3630,
    3674,
    3718,
    3762,
    3818,
    3880,
    3930
    };



#endif /* defined(_M_AMD64)*/



/* this ALWAYS GENERATED file contains the RPC client stubs */


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

#if defined(_M_AMD64)




#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif


#include "ndr64types.h"
#include "pshpack8.h"


typedef 
NDR64_FORMAT_CHAR
__midl_frag447_t;
extern const __midl_frag447_t __midl_frag447;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag446_t;
extern const __midl_frag446_t __midl_frag446;

typedef 
NDR64_FORMAT_CHAR
__midl_frag445_t;
extern const __midl_frag445_t __midl_frag445;

typedef 
struct _NDR64_CONTEXT_HANDLE_FORMAT
__midl_frag444_t;
extern const __midl_frag444_t __midl_frag444;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag443_t;
extern const __midl_frag443_t __midl_frag443;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag436_t;
extern const __midl_frag436_t __midl_frag436;

typedef 
struct _NDR64_CONFORMANT_STRING_FORMAT
__midl_frag431_t;
extern const __midl_frag431_t __midl_frag431;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag430_t;
extern const __midl_frag430_t __midl_frag430;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
}
__midl_frag428_t;
extern const __midl_frag428_t __midl_frag428;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag420_t;
extern const __midl_frag420_t __midl_frag420;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag416_t;
extern const __midl_frag416_t __midl_frag416;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag412_t;
extern const __midl_frag412_t __midl_frag412;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag409_t;
extern const __midl_frag409_t __midl_frag409;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag406_t;
extern const __midl_frag406_t __midl_frag406;

typedef 
NDR64_FORMAT_CHAR
__midl_frag405_t;
extern const __midl_frag405_t __midl_frag405;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_OPERATOR frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag404_t;
extern const __midl_frag404_t __midl_frag404;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag403_t;
extern const __midl_frag403_t __midl_frag403;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag402_t;
extern const __midl_frag402_t __midl_frag402;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag401_t;
extern const __midl_frag401_t __midl_frag401;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag399_t;
extern const __midl_frag399_t __midl_frag399;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag396_t;
extern const __midl_frag396_t __midl_frag396;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
}
__midl_frag384_t;
extern const __midl_frag384_t __midl_frag384;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
}
__midl_frag375_t;
extern const __midl_frag375_t __midl_frag375;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag365_t;
extern const __midl_frag365_t __midl_frag365;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
}
__midl_frag333_t;
extern const __midl_frag333_t __midl_frag333;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag304_t;
extern const __midl_frag304_t __midl_frag304;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag277_t;
extern const __midl_frag277_t __midl_frag277;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag167_t;
extern const __midl_frag167_t __midl_frag167;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag143_t;
extern const __midl_frag143_t __midl_frag143;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
}
__midl_frag132_t;
extern const __midl_frag132_t __midl_frag132;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag127_t;
extern const __midl_frag127_t __midl_frag127;

typedef 
struct _NDR64_CONTEXT_HANDLE_FORMAT
__midl_frag7_t;
extern const __midl_frag7_t __midl_frag7;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag6_t;
extern const __midl_frag6_t __midl_frag6;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag5_t;
extern const __midl_frag5_t __midl_frag5;

typedef 
struct _NDR64_CONTEXT_HANDLE_FORMAT
__midl_frag4_t;
extern const __midl_frag4_t __midl_frag4;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag3_t;
extern const __midl_frag3_t __midl_frag3;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag2_t;
extern const __midl_frag2_t __midl_frag2;

typedef 
NDR64_FORMAT_UINT32
__midl_frag1_t;
extern const __midl_frag1_t __midl_frag1;

static const __midl_frag447_t __midl_frag447 =
0x4    /* FC64_INT16 */;

static const __midl_frag446_t __midl_frag446 =
{ 
/* *short */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag447
};

static const __midl_frag445_t __midl_frag445 =
0x5    /* FC64_INT32 */;

static const __midl_frag444_t __midl_frag444 =
{ 
/* struct _NDR64_CONTEXT_HANDLE_FORMAT */
    0x70,    /* FC64_BIND_CONTEXT */
    (NDR64_UINT8) 65 /* 0x41 */,
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT8) 0 /* 0x0 */
};

static const __midl_frag443_t __midl_frag443 =
{ 
/* LpcGetDlsPiCapability */
    { 
    /* LpcGetDlsPiCapability */      /* procedure LpcGetDlsPiCapability */
        (NDR64_UINT32) 16777280 /* 0x1000040 */,    /* explicit handle */ /* IsIntrepreted, HasExtensions */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 44 /* 0x2c */,
        (NDR64_UINT32) 30 /* 0x1e */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* Context */      /* parameter Context */
        &__midl_frag444,
        { 
        /* Context */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* BatteryNum */      /* parameter BatteryNum */
        &__midl_frag445,
        { 
        /* BatteryNum */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* Value */      /* parameter Value */
        &__midl_frag447,
        { 
        /* Value */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag436_t __midl_frag436 =
{ 
/* *long */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag445
};

static const __midl_frag431_t __midl_frag431 =
{ 
/* *wchar_t */
    { 
    /* *wchar_t */
        0x64,    /* FC64_CONF_WCHAR_STRING */
        { 
        /* *wchar_t */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT16) 2 /* 0x2 */
    }
};

static const __midl_frag430_t __midl_frag430 =
{ 
/* *wchar_t */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag431
};

static const __midl_frag428_t __midl_frag428 =
{ 
/* LpcGetFCCValue */
    { 
    /* LpcGetFCCValue */      /* procedure LpcGetFCCValue */
        (NDR64_UINT32) 17039424 /* 0x1040040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasExtensions */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 36 /* 0x24 */,
        (NDR64_UINT32) 96 /* 0x60 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* Context */      /* parameter Context */
        &__midl_frag444,
        { 
        /* Context */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* Barcode */      /* parameter Barcode */
        &__midl_frag431,
        { 
        /* Barcode */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* FCCBeforeReset */      /* parameter FCCBeforeReset */
        &__midl_frag445,
        { 
        /* FCCBeforeReset */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* FCCAfterReset */      /* parameter FCCAfterReset */
        &__midl_frag445,
        { 
        /* FCCAfterReset */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* DesignCapacity */      /* parameter DesignCapacity */
        &__midl_frag445,
        { 
        /* DesignCapacity */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag420_t __midl_frag420 =
{ 
/* LpcGetResetStartTime */
    { 
    /* LpcGetResetStartTime */      /* procedure LpcGetResetStartTime */
        (NDR64_UINT32) 17039424 /* 0x1040040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasExtensions */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 36 /* 0x24 */,
        (NDR64_UINT32) 64 /* 0x40 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* Context */      /* parameter Context */
        &__midl_frag444,
        { 
        /* Context */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* Barcode */      /* parameter Barcode */
        &__midl_frag431,
        { 
        /* Barcode */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* StartHigh */      /* parameter StartHigh */
        &__midl_frag445,
        { 
        /* StartHigh */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* StartLow */      /* parameter StartLow */
        &__midl_frag445,
        { 
        /* StartLow */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag416_t __midl_frag416 =
{ 
/* LpcGetEasyResumeLockTimeout */
    { 
    /* LpcGetEasyResumeLockTimeout */      /* procedure LpcGetEasyResumeLockTimeout */
        (NDR64_UINT32) 16777280 /* 0x1000040 */,    /* explicit handle */ /* IsIntrepreted, HasExtensions */
        (NDR64_UINT32) 16 /* 0x10 */ ,  /* Stack size */
        (NDR64_UINT32) 36 /* 0x24 */,
        (NDR64_UINT32) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* Context */      /* parameter Context */
        &__midl_frag444,
        { 
        /* Context */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* Value */      /* parameter Value */
        &__midl_frag445,
        { 
        /* Value */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    }
};

static const __midl_frag412_t __midl_frag412 =
{ 
/* LpcGetEasyResumeEnabled */
    { 
    /* LpcGetEasyResumeEnabled */      /* procedure LpcGetEasyResumeEnabled */
        (NDR64_UINT32) 16777280 /* 0x1000040 */,    /* explicit handle */ /* IsIntrepreted, HasExtensions */
        (NDR64_UINT32) 16 /* 0x10 */ ,  /* Stack size */
        (NDR64_UINT32) 36 /* 0x24 */,
        (NDR64_UINT32) 30 /* 0x1e */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* Context */      /* parameter Context */
        &__midl_frag444,
        { 
        /* Context */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* Value */      /* parameter Value */
        &__midl_frag447,
        { 
        /* Value */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    }
};

static const __midl_frag409_t __midl_frag409 =
{ 
/* LpcSetEasyResumeLockTimeout */
    { 
    /* LpcSetEasyResumeLockTimeout */      /* procedure LpcSetEasyResumeLockTimeout */
        (NDR64_UINT32) 16777280 /* 0x1000040 */,    /* explicit handle */ /* IsIntrepreted, HasExtensions */
        (NDR64_UINT32) 16 /* 0x10 */ ,  /* Stack size */
        (NDR64_UINT32) 44 /* 0x2c */,
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* Context */      /* parameter Context */
        &__midl_frag444,
        { 
        /* Context */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* Value */      /* parameter Value */
        &__midl_frag445,
        { 
        /* Value */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    }
};

static const __midl_frag406_t __midl_frag406 =
{ 
/* LpcSetEasyResumeEnabled */
    { 
    /* LpcSetEasyResumeEnabled */      /* procedure LpcSetEasyResumeEnabled */
        (NDR64_UINT32) 16777280 /* 0x1000040 */,    /* explicit handle */ /* IsIntrepreted, HasExtensions */
        (NDR64_UINT32) 16 /* 0x10 */ ,  /* Stack size */
        (NDR64_UINT32) 42 /* 0x2a */,
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* Context */      /* parameter Context */
        &__midl_frag444,
        { 
        /* Context */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* Value */      /* parameter Value */
        &__midl_frag447,
        { 
        /* Value */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    }
};

static const __midl_frag405_t __midl_frag405 =
0x11    /* FC64_WCHAR */;

static const __midl_frag404_t __midl_frag404 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_OPERATOR */
        0x4,    /* FC_EXPR_OPER */
        0x5,    /* OP_UNARY_INDIRECTION */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT8) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x7,    /* FC64_INT64 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */  /* Offset */
    }
};

static const __midl_frag403_t __midl_frag403 =
{ 
/* *wchar_t */
    { 
    /* *wchar_t */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 1 /* 0x1 */,
        { 
        /* *wchar_t */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag404
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag405
    }
};

static const __midl_frag402_t __midl_frag402 =
{ 
/* *wchar_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 32 /* 0x20 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag403
};

static const __midl_frag401_t __midl_frag401 =
{ 
/* **wchar_t */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 20 /* 0x14 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag402
};

static const __midl_frag399_t __midl_frag399 =
{ 
/* *long */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag445
};

static const __midl_frag396_t __midl_frag396 =
{ 
/* LpcGetFirmwareVersion */
    { 
    /* LpcGetFirmwareVersion */      /* procedure LpcGetFirmwareVersion */
        (NDR64_UINT32) 21102656 /* 0x1420040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 76 /* 0x4c */,
        (NDR64_UINT32) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* Context */      /* parameter Context */
        &__midl_frag444,
        { 
        /* Context */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* BatteryNum */      /* parameter BatteryNum */
        &__midl_frag445,
        { 
        /* BatteryNum */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* BufferLen */      /* parameter BufferLen */
        &__midl_frag445,
        { 
        /* BufferLen */
            0,
            0,
            0,
            1,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], [out], Basetype, SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* Buffer */      /* parameter Buffer */
        &__midl_frag401,
        { 
        /* Buffer */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag384_t __midl_frag384 =
{ 
/* LpcGetSBSExData */
    { 
    /* LpcGetSBSExData */      /* procedure LpcGetSBSExData */
        (NDR64_UINT32) 16777280 /* 0x1000040 */,    /* explicit handle */ /* IsIntrepreted, HasExtensions */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 44 /* 0x2c */,
        (NDR64_UINT32) 92 /* 0x5c */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* Context */      /* parameter Context */
        &__midl_frag444,
        { 
        /* Context */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* BatteryNum */      /* parameter BatteryNum */
        &__midl_frag445,
        { 
        /* BatteryNum */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* ACSourceInfo */      /* parameter ACSourceInfo */
        &__midl_frag445,
        { 
        /* ACSourceInfo */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* WarrantyValid */      /* parameter WarrantyValid */
        &__midl_frag447,
        { 
        /* WarrantyValid */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* NonReplaceableBattery */      /* parameter NonReplaceableBattery */
        &__midl_frag447,
        { 
        /* NonReplaceableBattery */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag375_t __midl_frag375 =
{ 
/* LpcGetSpecificationInfo */
    { 
    /* LpcGetSpecificationInfo */      /* procedure LpcGetSpecificationInfo */
        (NDR64_UINT32) 16777280 /* 0x1000040 */,    /* explicit handle */ /* IsIntrepreted, HasExtensions */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 44 /* 0x2c */,
        (NDR64_UINT32) 94 /* 0x5e */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* Context */      /* parameter Context */
        &__midl_frag444,
        { 
        /* Context */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* BatteryNum */      /* parameter BatteryNum */
        &__midl_frag445,
        { 
        /* BatteryNum */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* Version */      /* parameter Version */
        &__midl_frag445,
        { 
        /* Version */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* Revision */      /* parameter Revision */
        &__midl_frag445,
        { 
        /* Revision */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* Capable */      /* parameter Capable */
        &__midl_frag447,
        { 
        /* Capable */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag365_t __midl_frag365 =
{ 
/* LpcGetManufactureDate */
    { 
    /* LpcGetManufactureDate */      /* procedure LpcGetManufactureDate */
        (NDR64_UINT32) 21102656 /* 0x1420040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 44 /* 0x2c */,
        (NDR64_UINT32) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* Context */      /* parameter Context */
        &__midl_frag444,
        { 
        /* Context */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* BatteryNum */      /* parameter BatteryNum */
        &__midl_frag445,
        { 
        /* BatteryNum */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* BufferLen */      /* parameter BufferLen */
        &__midl_frag445,
        { 
        /* BufferLen */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* Buffer */      /* parameter Buffer */
        &__midl_frag401,
        { 
        /* Buffer */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag333_t __midl_frag333 =
{ 
/* LpcGetFirstUsedDate */
    { 
    /* LpcGetFirstUsedDate */      /* procedure LpcGetFirstUsedDate */
        (NDR64_UINT32) 21102656 /* 0x1420040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 44 /* 0x2c */,
        (NDR64_UINT32) 62 /* 0x3e */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* Context */      /* parameter Context */
        &__midl_frag444,
        { 
        /* Context */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* BatteryNum */      /* parameter BatteryNum */
        &__midl_frag445,
        { 
        /* BatteryNum */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* BufferLen */      /* parameter BufferLen */
        &__midl_frag445,
        { 
        /* BufferLen */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* Buffer */      /* parameter Buffer */
        &__midl_frag401,
        { 
        /* Buffer */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* Capable */      /* parameter Capable */
        &__midl_frag447,
        { 
        /* Capable */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag304_t __midl_frag304 =
{ 
/* LpcGetWarrantyInfo */
    { 
    /* LpcGetWarrantyInfo */      /* procedure LpcGetWarrantyInfo */
        (NDR64_UINT32) 16777280 /* 0x1000040 */,    /* explicit handle */ /* IsIntrepreted, HasExtensions */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 44 /* 0x2c */,
        (NDR64_UINT32) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* Context */      /* parameter Context */
        &__midl_frag444,
        { 
        /* Context */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* BatteryNum */      /* parameter BatteryNum */
        &__midl_frag445,
        { 
        /* BatteryNum */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* Value */      /* parameter Value */
        &__midl_frag445,
        { 
        /* Value */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag277_t __midl_frag277 =
{ 
/* LpcGetHealthStatus */
    { 
    /* LpcGetHealthStatus */      /* procedure LpcGetHealthStatus */
        (NDR64_UINT32) 16777280 /* 0x1000040 */,    /* explicit handle */ /* IsIntrepreted, HasExtensions */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 44 /* 0x2c */,
        (NDR64_UINT32) 62 /* 0x3e */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* Context */      /* parameter Context */
        &__midl_frag444,
        { 
        /* Context */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* BatteryNum */      /* parameter BatteryNum */
        &__midl_frag445,
        { 
        /* BatteryNum */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* Value */      /* parameter Value */
        &__midl_frag445,
        { 
        /* Value */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* Capable */      /* parameter Capable */
        &__midl_frag447,
        { 
        /* Capable */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag167_t __midl_frag167 =
{ 
/* LpcSetChargeThreshold */
    { 
    /* LpcSetChargeThreshold */      /* procedure LpcSetChargeThreshold */
        (NDR64_UINT32) 16777280 /* 0x1000040 */,    /* explicit handle */ /* IsIntrepreted, HasExtensions */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 60 /* 0x3c */,
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* Context */      /* parameter Context */
        &__midl_frag444,
        { 
        /* Context */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* BatteryNum */      /* parameter BatteryNum */
        &__midl_frag445,
        { 
        /* BatteryNum */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* Start */      /* parameter Start */
        &__midl_frag445,
        { 
        /* Start */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* Stop */      /* parameter Stop */
        &__midl_frag445,
        { 
        /* Stop */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag143_t __midl_frag143 =
{ 
/* LpcGetReconditionState */
    { 
    /* LpcGetReconditionState */      /* procedure LpcGetReconditionState */
        (NDR64_UINT32) 16777280 /* 0x1000040 */,    /* explicit handle */ /* IsIntrepreted, HasExtensions */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 36 /* 0x24 */,
        (NDR64_UINT32) 96 /* 0x60 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* Context */      /* parameter Context */
        &__midl_frag444,
        { 
        /* Context */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* Battery */      /* parameter Battery */
        &__midl_frag445,
        { 
        /* Battery */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* Stage */      /* parameter Stage */
        &__midl_frag445,
        { 
        /* Stage */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* StageNum */      /* parameter StageNum */
        &__midl_frag445,
        { 
        /* StageNum */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag132_t __midl_frag132 =
{ 
/* LpcGetChargeThreshold */
    { 
    /* LpcGetChargeThreshold */      /* procedure LpcGetChargeThreshold */
        (NDR64_UINT32) 16777280 /* 0x1000040 */,    /* explicit handle */ /* IsIntrepreted, HasExtensions */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 44 /* 0x2c */,
        (NDR64_UINT32) 124 /* 0x7c */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* Context */      /* parameter Context */
        &__midl_frag444,
        { 
        /* Context */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* BatteryNum */      /* parameter BatteryNum */
        &__midl_frag445,
        { 
        /* BatteryNum */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* Capable */      /* parameter Capable */
        &__midl_frag447,
        { 
        /* Capable */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* Enabled */      /* parameter Enabled */
        &__midl_frag447,
        { 
        /* Enabled */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* Start */      /* parameter Start */
        &__midl_frag445,
        { 
        /* Start */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* Stop */      /* parameter Stop */
        &__midl_frag445,
        { 
        /* Stop */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag127_t __midl_frag127 =
{ 
/* LpcQueryGaugeResetCapability */
    { 
    /* LpcQueryGaugeResetCapability */      /* procedure LpcQueryGaugeResetCapability */
        (NDR64_UINT32) 16777280 /* 0x1000040 */,    /* explicit handle */ /* IsIntrepreted, HasExtensions */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 44 /* 0x2c */,
        (NDR64_UINT32) 30 /* 0x1e */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* Context */      /* parameter Context */
        &__midl_frag444,
        { 
        /* Context */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* Value */      /* parameter Value */
        &__midl_frag447,
        { 
        /* Value */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* BatteryNum */      /* parameter BatteryNum */
        &__midl_frag445,
        { 
        /* BatteryNum */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag7_t __midl_frag7 =
{ 
/* struct _NDR64_CONTEXT_HANDLE_FORMAT */
    0x70,    /* FC64_BIND_CONTEXT */
    (NDR64_UINT8) 225 /* 0xe1 */,
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT8) 0 /* 0x0 */
};

static const __midl_frag6_t __midl_frag6 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag7
};

static const __midl_frag5_t __midl_frag5 =
{ 
/* LpcFreeContext */
    { 
    /* LpcFreeContext */      /* procedure LpcFreeContext */
        (NDR64_UINT32) 16777280 /* 0x1000040 */,    /* explicit handle */ /* IsIntrepreted, HasExtensions */
        (NDR64_UINT32) 8 /* 0x8 */ ,  /* Stack size */
        (NDR64_UINT32) 60 /* 0x3c */,
        (NDR64_UINT32) 60 /* 0x3c */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 1 /* 0x1 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 224 /* 0xe0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* Context */      /* parameter Context */
        &__midl_frag7,
        { 
        /* Context */
            0,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    }
};

static const __midl_frag4_t __midl_frag4 =
{ 
/* struct _NDR64_CONTEXT_HANDLE_FORMAT */
    0x70,    /* FC64_BIND_CONTEXT */
    (NDR64_UINT8) 160 /* 0xa0 */,
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT8) 0 /* 0x0 */
};

static const __midl_frag3_t __midl_frag3 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag4
};

static const __midl_frag2_t __midl_frag2 =
{ 
/* LpcCreateContext */
    { 
    /* LpcCreateContext */      /* procedure LpcCreateContext */
        (NDR64_UINT32) 16777280 /* 0x1000040 */,    /* explicit handle */ /* IsIntrepreted, HasExtensions */
        (NDR64_UINT32) 16 /* 0x10 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 60 /* 0x3c */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 1 /* 0x1 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* Context */      /* parameter Context */
        &__midl_frag4,
        { 
        /* Context */
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    }
};

static const __midl_frag1_t __midl_frag1 =
(NDR64_UINT32) 0 /* 0x0 */;


#include "poppack.h"


static const FormatInfoRef LenPowCtl_Ndr64ProcTable[] =
    {
    &__midl_frag2,
    &__midl_frag5,
    &__midl_frag412,
    &__midl_frag412,
    &__midl_frag412,
    &__midl_frag412,
    &__midl_frag412,
    &__midl_frag412,
    &__midl_frag412,
    &__midl_frag412,
    &__midl_frag412,
    &__midl_frag412,
    &__midl_frag416,
    &__midl_frag416,
    &__midl_frag416,
    &__midl_frag416,
    &__midl_frag416,
    &__midl_frag412,
    &__midl_frag412,
    &__midl_frag412,
    &__midl_frag412,
    &__midl_frag412,
    &__midl_frag412,
    &__midl_frag412,
    &__midl_frag412,
    &__midl_frag406,
    &__midl_frag406,
    &__midl_frag406,
    &__midl_frag406,
    &__midl_frag406,
    &__midl_frag406,
    &__midl_frag406,
    &__midl_frag406,
    &__midl_frag409,
    &__midl_frag127,
    &__midl_frag132,
    &__midl_frag143,
    &__midl_frag428,
    &__midl_frag409,
    &__midl_frag409,
    &__midl_frag167,
    &__midl_frag277,
    &__midl_frag277,
    &__midl_frag277,
    &__midl_frag277,
    &__midl_frag277,
    &__midl_frag277,
    &__midl_frag277,
    &__midl_frag277,
    &__midl_frag277,
    &__midl_frag277,
    &__midl_frag277,
    &__midl_frag277,
    &__midl_frag277,
    &__midl_frag277,
    &__midl_frag277,
    &__midl_frag277,
    &__midl_frag443,
    &__midl_frag443,
    &__midl_frag304,
    &__midl_frag304,
    &__midl_frag304,
    &__midl_frag333,
    &__midl_frag333,
    &__midl_frag333,
    &__midl_frag365,
    &__midl_frag365,
    &__midl_frag365,
    &__midl_frag375,
    &__midl_frag384,
    &__midl_frag409,
    &__midl_frag396,
    &__midl_frag406,
    &__midl_frag409,
    &__midl_frag412,
    &__midl_frag416,
    &__midl_frag420,
    &__midl_frag428,
    &__midl_frag443,
    &__midl_frag443
    };


static const MIDL_STUB_DESC LenPowCtl_StubDesc = 
    {
    (void *)& LenPowCtl___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &LenPowCtl__MIDL_AutoBindHandle,
    0,
    0,
    0,
    0,
    pwrmgr__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x60001, /* Ndr library version */
    0,
    0x801026e, /* MIDL Version 8.1.622 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x2000001, /* MIDL flag */
    0, /* cs routines */
    (void *)& LenPowCtl_ProxyInfo,   /* proxy/server info */
    0
    };

static const MIDL_SYNTAX_INFO LenPowCtl_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    pwrmgr__MIDL_ProcFormatString.Format,
    LenPowCtl_FormatStringOffsetTable,
    pwrmgr__MIDL_TypeFormatString.Format,
    0,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) LenPowCtl_Ndr64ProcTable,
    0,
    0,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO LenPowCtl_ProxyInfo =
    {
    &LenPowCtl_StubDesc,
    pwrmgr__MIDL_ProcFormatString.Format,
    LenPowCtl_FormatStringOffsetTable,
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)LenPowCtl_SyntaxInfo
    
    };

#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* defined(_M_AMD64)*/

