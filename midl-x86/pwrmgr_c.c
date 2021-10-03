

/* this ALWAYS GENERATED file contains the RPC client stubs */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for pwrmgr.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_)


#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#include <string.h>

#include "pwrmgr_h.h"

#define TYPE_FORMAT_STRING_SIZE   59                                
#define PROC_FORMAT_STRING_SIZE   3821                              
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


extern const pwrmgr_MIDL_TYPE_FORMAT_STRING pwrmgr__MIDL_TypeFormatString;
extern const pwrmgr_MIDL_PROC_FORMAT_STRING pwrmgr__MIDL_ProcFormatString;
extern const pwrmgr_MIDL_EXPR_FORMAT_STRING pwrmgr__MIDL_ExprFormatString;

#define GENERIC_BINDING_TABLE_SIZE   0            


/* Standard interface: LenPowCtl, ver. 1.0,
   GUID={0xaf8abfc6,0x2132,0x4870,{0xbf,0x8d,0xbc,0xa5,0x41,0xff,0xcf,0x0b}} */



static const RPC_CLIENT_INTERFACE LenPowCtl___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0xaf8abfc6,0x2132,0x4870,{0xbf,0x8d,0xbc,0xa5,0x41,0xff,0xcf,0x0b}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    0,
    0,
    0,
    0,
    0x00000000
    };
RPC_IF_HANDLE LenPowCtl_v1_0_c_ifspec = (RPC_IF_HANDLE)& LenPowCtl___RpcClientInterface;

extern const MIDL_STUB_DESC LenPowCtl_StubDesc;

static RPC_BINDING_HANDLE LenPowCtl__MIDL_AutoBindHandle;


void LpcCreateContext( 
    /* [in] */ handle_t Binding,
    /* [context_handle][out] */ void **Context)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[0],
                  ( unsigned char * )&Binding);
    
}


void LpcFreeContext( 
    /* [context_handle][out][in] */ void **Context)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[34],
                  ( unsigned char * )&Context);
    
}


void LpcIsEasyResumeCapable( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ short *Capable)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[70],
                  ( unsigned char * )&Context);
    
}


void LpcIsApsInformationCapable( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ short *Capable)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[112],
                  ( unsigned char * )&Context);
    
}


void LpcIsCoolModeCapable( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ short *Capable)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[154],
                  ( unsigned char * )&Context);
    
}


void LpcIsIntelligentCoolingCapable( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ short *Capable)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[196],
                  ( unsigned char * )&Context);
    
}


void LpcIsIntelligentCoolingAutoModeSupport( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ short *Capable)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[238],
                  ( unsigned char * )&Context);
    
}


void Proc7( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ short *arg_1)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[280],
                  ( unsigned char * )&Context);
    
}


void LpcIsAirplanePowerModeCapable( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ short *Capable)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[322],
                  ( unsigned char * )&Context);
    
}


void LpcIsAlwaysOnUsbCapable( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ short *Capable)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[364],
                  ( unsigned char * )&Context);
    
}


void Proc10( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ short *arg_1)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[406],
                  ( unsigned char * )&Context);
    
}


void Proc11( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ short *arg_1)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[448],
                  ( unsigned char * )&Context);
    
}


void Proc12( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ long *arg_1)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[490],
                  ( unsigned char * )&Context);
    
}


void Proc13( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ long *arg_1)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[532],
                  ( unsigned char * )&Context);
    
}


void Proc14( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ long *arg_1)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[574],
                  ( unsigned char * )&Context);
    
}


void LpcGetAlwaysOnUSBValue( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ long *Value)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[616],
                  ( unsigned char * )&Context);
    
}


void Proc16( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ long *arg_1)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[658],
                  ( unsigned char * )&Context);
    
}


void Proc17( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ short *arg_1)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[700],
                  ( unsigned char * )&Context);
    
}


void Proc18( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ short *arg_1)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[742],
                  ( unsigned char * )&Context);
    
}


void LpcGetAirplanePowerModeAutoDetection( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ short *Value)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[784],
                  ( unsigned char * )&Context);
    
}


void LpcGetAirplanePowerMode( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ short *Value)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[826],
                  ( unsigned char * )&Context);
    
}


void LpcGetIntelligentCoolingAutoMode( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ short *Value)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[868],
                  ( unsigned char * )&Context);
    
}


void LpcGetIntelligentCooling( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ short *Value)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[910],
                  ( unsigned char * )&Context);
    
}


void LpcGetCoolMode( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ short *Value)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[952],
                  ( unsigned char * )&Context);
    
}


void Proc24( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ short *arg_1)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[994],
                  ( unsigned char * )&Context);
    
}


void Proc25( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ short arg_1)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[1036],
                  ( unsigned char * )&Context);
    
}


void Proc26( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ short arg_1)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[1078],
                  ( unsigned char * )&Context);
    
}


void LpcSetAirplanePowerModeAutoDetection( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ short Value)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[1120],
                  ( unsigned char * )&Context);
    
}


void LpcSetAirplanePowerMode( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ short Value)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[1162],
                  ( unsigned char * )&Context);
    
}


void LpcSetIntelligentCoolingAutoMode( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ short Value)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[1204],
                  ( unsigned char * )&Context);
    
}


void LpcSetIntelligentCooling( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ short Value)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[1246],
                  ( unsigned char * )&Context);
    
}


void LpcSetCoolMode( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ short Value)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[1288],
                  ( unsigned char * )&Context);
    
}


void Proc32( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ short arg_1)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[1330],
                  ( unsigned char * )&Context);
    
}


void LpcSetAlwaysOnUSB( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long Value)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[1372],
                  ( unsigned char * )&Context);
    
}


void LpcQueryGaugeResetCapability( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ short *Value,
    /* [in] */ long BatteryNum)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[1414],
                  ( unsigned char * )&Context);
    
}


void LpcGetChargeThreshold( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ short *Capable,
    /* [out] */ short *Enabled,
    /* [out] */ long *Start,
    /* [out] */ long *Stop)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[1462],
                  ( unsigned char * )&Context);
    
}


void LpcGetReconditionState( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ long *Battery,
    /* [out] */ long *Stage,
    /* [out] */ long *StageNum)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[1528],
                  ( unsigned char * )&Context);
    
}


void LpcGetResetResult( 
    /* [context_handle][in] */ void *Context,
    /* [string][in] */ wchar_t *BarCode,
    /* [out] */ long *ErrorValue,
    /* [out] */ long *TickHigh,
    /* [out] */ long *TickLow)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[1582],
                  ( unsigned char * )&Context);
    
}


void LpcStartBatteryGaugeReset( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[1642],
                  ( unsigned char * )&Context);
    
}


void LpcStopBatteryGaugeReset( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[1684],
                  ( unsigned char * )&Context);
    
}


void LpcSetChargeThreshold( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [in] */ long Start,
    /* [in] */ long Stop)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[1726],
                  ( unsigned char * )&Context);
    
}


void LpcGetFullChargeCapacity( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *Value,
    /* [out] */ short *Capable)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[1780],
                  ( unsigned char * )&Context);
    
}


void LpcGetDesignCapacity( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *Value,
    /* [out] */ short *Capable)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[1834],
                  ( unsigned char * )&Context);
    
}


void LpcGetDesignVoltage( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *Value,
    /* [out] */ short *Capable)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[1888],
                  ( unsigned char * )&Context);
    
}


void LpcGetSerialNumber( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *Value,
    /* [out] */ short *Capable)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[1942],
                  ( unsigned char * )&Context);
    
}


void LpcGetAcAdapterWattage( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *Value,
    /* [out] */ short *Capable)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[1996],
                  ( unsigned char * )&Context);
    
}


void LpcGetVoltage( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *Value,
    /* [out] */ short *Capable)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[2050],
                  ( unsigned char * )&Context);
    
}


void LpcGetCurrent( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *Value,
    /* [out] */ short *Capable)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[2104],
                  ( unsigned char * )&Context);
    
}


void LpcGetTemperature( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *Value,
    /* [out] */ short *Capable)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[2158],
                  ( unsigned char * )&Context);
    
}


void LpcGetCycleCount( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *Value,
    /* [out] */ short *Capable)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[2212],
                  ( unsigned char * )&Context);
    
}


void LpcGetRemainingPercentage( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *Value,
    /* [out] */ short *Capable)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[2266],
                  ( unsigned char * )&Context);
    
}


void LpcGetRemainingCapacity( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *Value,
    /* [out] */ short *Capable)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[2320],
                  ( unsigned char * )&Context);
    
}


void LpcGetRemainingTime( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *Value,
    /* [out] */ short *Capable)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[2374],
                  ( unsigned char * )&Context);
    
}


void LpcGetChargeCompletionTime( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *Value,
    /* [out] */ short *Capable)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[2428],
                  ( unsigned char * )&Context);
    
}


void LpcGetChargeStatus( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *Value,
    /* [out] */ short *Capable)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[2482],
                  ( unsigned char * )&Context);
    
}


void LpcGetDeviceChemistry( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *Value,
    /* [out] */ short *Capable)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[2536],
                  ( unsigned char * )&Context);
    
}


void LpcGetHealthStatus( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *Value,
    /* [out] */ short *Capable)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[2590],
                  ( unsigned char * )&Context);
    
}


void LpcGetIsAcAttached( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ short *Value)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[2644],
                  ( unsigned char * )&Context);
    
}


void LpcGetIsOnLowerThreshold( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ short *Value)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[2692],
                  ( unsigned char * )&Context);
    
}


void LpcGetCondition( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *Value)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[2740],
                  ( unsigned char * )&Context);
    
}


void LpcGetControllerType( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *Value)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[2788],
                  ( unsigned char * )&Context);
    
}


void LpcGetWarrantyInfo( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *Value)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[2836],
                  ( unsigned char * )&Context);
    
}


void LpcGetDeviceName( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *BufferLen,
    /* [size_is][size_is][ref][out] */ wchar_t **Buffer,
    /* [out] */ short *Capable)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[2884],
                  ( unsigned char * )&Context);
    
}


void LpcGetBarCodeNumber( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *BufferLen,
    /* [size_is][size_is][ref][out] */ wchar_t **Buffer,
    /* [out] */ short *Capable)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[2944],
                  ( unsigned char * )&Context);
    
}


void LpcGetFirstUsedDate( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *BufferLen,
    /* [size_is][size_is][ref][out] */ wchar_t **Buffer,
    /* [out] */ short *Capable)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[3004],
                  ( unsigned char * )&Context);
    
}


void LpcGetManufacturerName( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *BufferLen,
    /* [size_is][size_is][ref][out] */ wchar_t **Buffer)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[3064],
                  ( unsigned char * )&Context);
    
}


void LpcGetLastConditionDate( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *BufferLen,
    /* [size_is][size_is][ref][out] */ wchar_t **Buffer)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[3118],
                  ( unsigned char * )&Context);
    
}


void LpcGetManufactureDate( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *BufferLen,
    /* [size_is][size_is][ref][out] */ wchar_t **Buffer)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[3172],
                  ( unsigned char * )&Context);
    
}


void LpcGetSpecificationInfo( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *Version,
    /* [out] */ long *Revision,
    /* [out] */ short *Capable)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[3226],
                  ( unsigned char * )&Context);
    
}


void LpcGetSBSExData( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ long *ACSourceInfo,
    /* [out] */ short *WarrantyValid,
    /* [out] */ short *NonReplaceableBattery)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[3286],
                  ( unsigned char * )&Context);
    
}


void LpcUpdateSmartBatteryStatus( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[3346],
                  ( unsigned char * )&Context);
    
}


void LpcGetFirmwareVersion( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out][in] */ long *BufferLen,
    /* [size_is][size_is][ref][out] */ wchar_t **Buffer)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[3388],
                  ( unsigned char * )&Context);
    
}


void LpcSetEasyResumeEnabled( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ short Value)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[3442],
                  ( unsigned char * )&Context);
    
}


void LpcSetEasyResumeLockTimeout( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long Value)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[3484],
                  ( unsigned char * )&Context);
    
}


void LpcGetEasyResumeEnabled( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ short *Value)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[3526],
                  ( unsigned char * )&Context);
    
}


void LpcGetEasyResumeLockTimeout( 
    /* [context_handle][in] */ void *Context,
    /* [out] */ long *Value)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[3568],
                  ( unsigned char * )&Context);
    
}


void LpcGetResetStartTime( 
    /* [context_handle][in] */ void *Context,
    /* [string][in] */ wchar_t *Barcode,
    /* [out] */ long *StartHigh,
    /* [out] */ long *StartLow)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[3610],
                  ( unsigned char * )&Context);
    
}


void LpcGetFCCValue( 
    /* [context_handle][in] */ void *Context,
    /* [string][in] */ wchar_t *Barcode,
    /* [out] */ long *FCCBeforeReset,
    /* [out] */ long *FCCAfterReset,
    /* [out] */ long *DesignCapacity)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[3664],
                  ( unsigned char * )&Context);
    
}


void LpcGetTemporaryChargeMode( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ short *Value)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[3724],
                  ( unsigned char * )&Context);
    
}


void LpcGetDlsPiCapability( 
    /* [context_handle][in] */ void *Context,
    /* [in] */ long BatteryNum,
    /* [out] */ short *Value)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&LenPowCtl_StubDesc,
                  (PFORMAT_STRING) &pwrmgr__MIDL_ProcFormatString.Format[3772],
                  ( unsigned char * )&Context);
    
}


#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif
#if !(TARGET_IS_NT60_OR_LATER)
#error You need Windows Vista or later to run this stub because it uses these features:
#error   compiled for Windows Vista.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
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
/*  8 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 12 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 14 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16 */	NdrFcShort( 0x38 ),	/* 56 */
/* 18 */	0x40,		/* Oi2 Flags:  has ext, */
			0x1,		/* 1 */
/* 20 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */
/* 26 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 28 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 30 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 32 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Procedure LpcFreeContext */

/* 34 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 36 */	NdrFcLong( 0x0 ),	/* 0 */
/* 40 */	NdrFcShort( 0x1 ),	/* 1 */
/* 42 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 44 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* Ctxt flags:  via ptr, in, out, */
/* 46 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 48 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 50 */	NdrFcShort( 0x38 ),	/* 56 */
/* 52 */	NdrFcShort( 0x38 ),	/* 56 */
/* 54 */	0x40,		/* Oi2 Flags:  has ext, */
			0x1,		/* 1 */
/* 56 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 58 */	NdrFcShort( 0x0 ),	/* 0 */
/* 60 */	NdrFcShort( 0x0 ),	/* 0 */
/* 62 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 64 */	NdrFcShort( 0x118 ),	/* Flags:  in, out, simple ref, */
/* 66 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 68 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Procedure LpcIsEasyResumeCapable */

/* 70 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 72 */	NdrFcLong( 0x0 ),	/* 0 */
/* 76 */	NdrFcShort( 0x2 ),	/* 2 */
/* 78 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 80 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 82 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 84 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 86 */	NdrFcShort( 0x24 ),	/* 36 */
/* 88 */	NdrFcShort( 0x1a ),	/* 26 */
/* 90 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 92 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 94 */	NdrFcShort( 0x0 ),	/* 0 */
/* 96 */	NdrFcShort( 0x0 ),	/* 0 */
/* 98 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 100 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 102 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 104 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter Capable */

/* 106 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 108 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 110 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcIsApsInformationCapable */

/* 112 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 114 */	NdrFcLong( 0x0 ),	/* 0 */
/* 118 */	NdrFcShort( 0x3 ),	/* 3 */
/* 120 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 122 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 124 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 126 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 128 */	NdrFcShort( 0x24 ),	/* 36 */
/* 130 */	NdrFcShort( 0x1a ),	/* 26 */
/* 132 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 134 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 140 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 142 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 144 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 146 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter Capable */

/* 148 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 150 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 152 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcIsCoolModeCapable */

/* 154 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 156 */	NdrFcLong( 0x0 ),	/* 0 */
/* 160 */	NdrFcShort( 0x4 ),	/* 4 */
/* 162 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 164 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 166 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 168 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 170 */	NdrFcShort( 0x24 ),	/* 36 */
/* 172 */	NdrFcShort( 0x1a ),	/* 26 */
/* 174 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 176 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 182 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 184 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 186 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 188 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter Capable */

/* 190 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 192 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 194 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcIsIntelligentCoolingCapable */

/* 196 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 198 */	NdrFcLong( 0x0 ),	/* 0 */
/* 202 */	NdrFcShort( 0x5 ),	/* 5 */
/* 204 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 206 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 208 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 210 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 212 */	NdrFcShort( 0x24 ),	/* 36 */
/* 214 */	NdrFcShort( 0x1a ),	/* 26 */
/* 216 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 218 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 224 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 226 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 228 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 230 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter Capable */

/* 232 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 234 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 236 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcIsIntelligentCoolingAutoModeSupport */

/* 238 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 240 */	NdrFcLong( 0x0 ),	/* 0 */
/* 244 */	NdrFcShort( 0x6 ),	/* 6 */
/* 246 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 248 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 250 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 252 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 254 */	NdrFcShort( 0x24 ),	/* 36 */
/* 256 */	NdrFcShort( 0x1a ),	/* 26 */
/* 258 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 260 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 262 */	NdrFcShort( 0x0 ),	/* 0 */
/* 264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 266 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 268 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 270 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 272 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter Capable */

/* 274 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 276 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 278 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure Proc7 */

/* 280 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 282 */	NdrFcLong( 0x0 ),	/* 0 */
/* 286 */	NdrFcShort( 0x7 ),	/* 7 */
/* 288 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 290 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 292 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 294 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 296 */	NdrFcShort( 0x24 ),	/* 36 */
/* 298 */	NdrFcShort( 0x1a ),	/* 26 */
/* 300 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 302 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 308 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 310 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 312 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 314 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter arg_1 */

/* 316 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 318 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 320 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcIsAirplanePowerModeCapable */

/* 322 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 324 */	NdrFcLong( 0x0 ),	/* 0 */
/* 328 */	NdrFcShort( 0x8 ),	/* 8 */
/* 330 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 332 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 334 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 336 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 338 */	NdrFcShort( 0x24 ),	/* 36 */
/* 340 */	NdrFcShort( 0x1a ),	/* 26 */
/* 342 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 344 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 348 */	NdrFcShort( 0x0 ),	/* 0 */
/* 350 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 352 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 354 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 356 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter Capable */

/* 358 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 360 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 362 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcIsAlwaysOnUsbCapable */

/* 364 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 366 */	NdrFcLong( 0x0 ),	/* 0 */
/* 370 */	NdrFcShort( 0x9 ),	/* 9 */
/* 372 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 374 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 376 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 378 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 380 */	NdrFcShort( 0x24 ),	/* 36 */
/* 382 */	NdrFcShort( 0x1a ),	/* 26 */
/* 384 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 386 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 388 */	NdrFcShort( 0x0 ),	/* 0 */
/* 390 */	NdrFcShort( 0x0 ),	/* 0 */
/* 392 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 394 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 396 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 398 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter Capable */

/* 400 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 402 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 404 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure Proc10 */

/* 406 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 408 */	NdrFcLong( 0x0 ),	/* 0 */
/* 412 */	NdrFcShort( 0xa ),	/* 10 */
/* 414 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 416 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 418 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 420 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 422 */	NdrFcShort( 0x24 ),	/* 36 */
/* 424 */	NdrFcShort( 0x1a ),	/* 26 */
/* 426 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 428 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 432 */	NdrFcShort( 0x0 ),	/* 0 */
/* 434 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 436 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 438 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 440 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter arg_1 */

/* 442 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 444 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 446 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure Proc11 */

/* 448 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 450 */	NdrFcLong( 0x0 ),	/* 0 */
/* 454 */	NdrFcShort( 0xb ),	/* 11 */
/* 456 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 458 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 460 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 462 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 464 */	NdrFcShort( 0x24 ),	/* 36 */
/* 466 */	NdrFcShort( 0x1a ),	/* 26 */
/* 468 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 470 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 476 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 478 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 480 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 482 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter arg_1 */

/* 484 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 486 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 488 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure Proc12 */

/* 490 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 492 */	NdrFcLong( 0x0 ),	/* 0 */
/* 496 */	NdrFcShort( 0xc ),	/* 12 */
/* 498 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 500 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 502 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 504 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 506 */	NdrFcShort( 0x24 ),	/* 36 */
/* 508 */	NdrFcShort( 0x1c ),	/* 28 */
/* 510 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 512 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 514 */	NdrFcShort( 0x0 ),	/* 0 */
/* 516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 518 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 520 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 522 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 524 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter arg_1 */

/* 526 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 528 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 530 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc13 */

/* 532 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 534 */	NdrFcLong( 0x0 ),	/* 0 */
/* 538 */	NdrFcShort( 0xd ),	/* 13 */
/* 540 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 542 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 544 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 546 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 548 */	NdrFcShort( 0x24 ),	/* 36 */
/* 550 */	NdrFcShort( 0x1c ),	/* 28 */
/* 552 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 554 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 560 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 562 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 564 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 566 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter arg_1 */

/* 568 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 570 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 572 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc14 */

/* 574 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 576 */	NdrFcLong( 0x0 ),	/* 0 */
/* 580 */	NdrFcShort( 0xe ),	/* 14 */
/* 582 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 584 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 586 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 588 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 590 */	NdrFcShort( 0x24 ),	/* 36 */
/* 592 */	NdrFcShort( 0x1c ),	/* 28 */
/* 594 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 596 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 598 */	NdrFcShort( 0x0 ),	/* 0 */
/* 600 */	NdrFcShort( 0x0 ),	/* 0 */
/* 602 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 604 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 606 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 608 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter arg_1 */

/* 610 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 612 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 614 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LpcGetAlwaysOnUSBValue */

/* 616 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 618 */	NdrFcLong( 0x0 ),	/* 0 */
/* 622 */	NdrFcShort( 0xf ),	/* 15 */
/* 624 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 626 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 628 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 630 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 632 */	NdrFcShort( 0x24 ),	/* 36 */
/* 634 */	NdrFcShort( 0x1c ),	/* 28 */
/* 636 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 638 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 640 */	NdrFcShort( 0x0 ),	/* 0 */
/* 642 */	NdrFcShort( 0x0 ),	/* 0 */
/* 644 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 646 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 648 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 650 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter Value */

/* 652 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 654 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 656 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc16 */

/* 658 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 660 */	NdrFcLong( 0x0 ),	/* 0 */
/* 664 */	NdrFcShort( 0x10 ),	/* 16 */
/* 666 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 668 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 670 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 672 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 674 */	NdrFcShort( 0x24 ),	/* 36 */
/* 676 */	NdrFcShort( 0x1c ),	/* 28 */
/* 678 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 680 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 686 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 688 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 690 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 692 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter arg_1 */

/* 694 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 696 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 698 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc17 */

/* 700 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 702 */	NdrFcLong( 0x0 ),	/* 0 */
/* 706 */	NdrFcShort( 0x11 ),	/* 17 */
/* 708 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 710 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 712 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 714 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 716 */	NdrFcShort( 0x24 ),	/* 36 */
/* 718 */	NdrFcShort( 0x1a ),	/* 26 */
/* 720 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 722 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 724 */	NdrFcShort( 0x0 ),	/* 0 */
/* 726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 728 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 730 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 732 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 734 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter arg_1 */

/* 736 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 738 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 740 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure Proc18 */

/* 742 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 744 */	NdrFcLong( 0x0 ),	/* 0 */
/* 748 */	NdrFcShort( 0x12 ),	/* 18 */
/* 750 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 752 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 754 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 756 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 758 */	NdrFcShort( 0x24 ),	/* 36 */
/* 760 */	NdrFcShort( 0x1a ),	/* 26 */
/* 762 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 764 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 770 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 772 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 774 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 776 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter arg_1 */

/* 778 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 780 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 782 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcGetAirplanePowerModeAutoDetection */

/* 784 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 786 */	NdrFcLong( 0x0 ),	/* 0 */
/* 790 */	NdrFcShort( 0x13 ),	/* 19 */
/* 792 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 794 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 796 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 798 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 800 */	NdrFcShort( 0x24 ),	/* 36 */
/* 802 */	NdrFcShort( 0x1a ),	/* 26 */
/* 804 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 806 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 812 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 814 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 816 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 818 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter Value */

/* 820 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 822 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 824 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcGetAirplanePowerMode */

/* 826 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 828 */	NdrFcLong( 0x0 ),	/* 0 */
/* 832 */	NdrFcShort( 0x14 ),	/* 20 */
/* 834 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 836 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 838 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 840 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 842 */	NdrFcShort( 0x24 ),	/* 36 */
/* 844 */	NdrFcShort( 0x1a ),	/* 26 */
/* 846 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 848 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 854 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 856 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 858 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 860 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter Value */

/* 862 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 864 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 866 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcGetIntelligentCoolingAutoMode */

/* 868 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 870 */	NdrFcLong( 0x0 ),	/* 0 */
/* 874 */	NdrFcShort( 0x15 ),	/* 21 */
/* 876 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 878 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 880 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 882 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 884 */	NdrFcShort( 0x24 ),	/* 36 */
/* 886 */	NdrFcShort( 0x1a ),	/* 26 */
/* 888 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 890 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 892 */	NdrFcShort( 0x0 ),	/* 0 */
/* 894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 896 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 898 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 900 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 902 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter Value */

/* 904 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 906 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 908 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcGetIntelligentCooling */

/* 910 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 912 */	NdrFcLong( 0x0 ),	/* 0 */
/* 916 */	NdrFcShort( 0x16 ),	/* 22 */
/* 918 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 920 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 922 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 924 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 926 */	NdrFcShort( 0x24 ),	/* 36 */
/* 928 */	NdrFcShort( 0x1a ),	/* 26 */
/* 930 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 932 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 934 */	NdrFcShort( 0x0 ),	/* 0 */
/* 936 */	NdrFcShort( 0x0 ),	/* 0 */
/* 938 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 940 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 942 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 944 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter Value */

/* 946 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 948 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 950 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcGetCoolMode */

/* 952 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 954 */	NdrFcLong( 0x0 ),	/* 0 */
/* 958 */	NdrFcShort( 0x17 ),	/* 23 */
/* 960 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 962 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 964 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 966 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 968 */	NdrFcShort( 0x24 ),	/* 36 */
/* 970 */	NdrFcShort( 0x1a ),	/* 26 */
/* 972 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 974 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 976 */	NdrFcShort( 0x0 ),	/* 0 */
/* 978 */	NdrFcShort( 0x0 ),	/* 0 */
/* 980 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 982 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 984 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 986 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter Value */

/* 988 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 990 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 992 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure Proc24 */

/* 994 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 996 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1000 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1002 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1004 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1006 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1008 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1010 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1012 */	NdrFcShort( 0x1a ),	/* 26 */
/* 1014 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 1016 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1018 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1020 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1022 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 1024 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1026 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1028 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter arg_1 */

/* 1030 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1032 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1034 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure Proc25 */

/* 1036 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1038 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1042 */	NdrFcShort( 0x19 ),	/* 25 */
/* 1044 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1046 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1048 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1050 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1052 */	NdrFcShort( 0x2a ),	/* 42 */
/* 1054 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1056 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 1058 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1060 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1062 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1064 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 1066 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1068 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1070 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter arg_1 */

/* 1072 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1074 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1076 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure Proc26 */

/* 1078 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1080 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1084 */	NdrFcShort( 0x1a ),	/* 26 */
/* 1086 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1088 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1090 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1092 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1094 */	NdrFcShort( 0x2a ),	/* 42 */
/* 1096 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1098 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 1100 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1106 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 1108 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1110 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1112 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter arg_1 */

/* 1114 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1116 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1118 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcSetAirplanePowerModeAutoDetection */

/* 1120 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1122 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1126 */	NdrFcShort( 0x1b ),	/* 27 */
/* 1128 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1130 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1132 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1134 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1136 */	NdrFcShort( 0x2a ),	/* 42 */
/* 1138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1140 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 1142 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1148 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 1150 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1152 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1154 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter Value */

/* 1156 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1158 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1160 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcSetAirplanePowerMode */

/* 1162 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1164 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1168 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1170 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1172 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1174 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1176 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1178 */	NdrFcShort( 0x2a ),	/* 42 */
/* 1180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1182 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 1184 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1190 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 1192 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1194 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1196 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter Value */

/* 1198 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1200 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1202 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcSetIntelligentCoolingAutoMode */

/* 1204 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1206 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1210 */	NdrFcShort( 0x1d ),	/* 29 */
/* 1212 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1214 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1216 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1218 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1220 */	NdrFcShort( 0x2a ),	/* 42 */
/* 1222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1224 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 1226 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1230 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1232 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 1234 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1236 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1238 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter Value */

/* 1240 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1242 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1244 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcSetIntelligentCooling */

/* 1246 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1248 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1252 */	NdrFcShort( 0x1e ),	/* 30 */
/* 1254 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1256 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1258 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1260 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1262 */	NdrFcShort( 0x2a ),	/* 42 */
/* 1264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1266 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 1268 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1274 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 1276 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1278 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1280 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter Value */

/* 1282 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1284 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1286 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcSetCoolMode */

/* 1288 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1290 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1294 */	NdrFcShort( 0x1f ),	/* 31 */
/* 1296 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1298 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1300 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1302 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1304 */	NdrFcShort( 0x2a ),	/* 42 */
/* 1306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1308 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 1310 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1316 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 1318 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1320 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1322 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter Value */

/* 1324 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1326 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1328 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure Proc32 */

/* 1330 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1332 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1336 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1338 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1340 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1342 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1344 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1346 */	NdrFcShort( 0x2a ),	/* 42 */
/* 1348 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1350 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 1352 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1358 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 1360 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1362 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1364 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter arg_1 */

/* 1366 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1368 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1370 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcSetAlwaysOnUSB */

/* 1372 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1374 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1378 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1380 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1382 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1384 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1386 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1388 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1390 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1392 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 1394 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1400 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 1402 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1404 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1406 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter Value */

/* 1408 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1410 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1412 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LpcQueryGaugeResetCapability */

/* 1414 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1416 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1420 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1422 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1424 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1426 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1428 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1430 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1432 */	NdrFcShort( 0x1a ),	/* 26 */
/* 1434 */	0x40,		/* Oi2 Flags:  has ext, */
			0x3,		/* 3 */
/* 1436 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1440 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1442 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 1444 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1446 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1448 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter Value */

/* 1450 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1452 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1454 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter BatteryNum */

/* 1456 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1458 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1460 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LpcGetChargeThreshold */

/* 1462 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1464 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1468 */	NdrFcShort( 0x23 ),	/* 35 */
/* 1470 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1472 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1474 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1476 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1478 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1480 */	NdrFcShort( 0x6c ),	/* 108 */
/* 1482 */	0x40,		/* Oi2 Flags:  has ext, */
			0x6,		/* 6 */
/* 1484 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1488 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1490 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 1492 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1494 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1496 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 1498 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1500 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1502 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Capable */

/* 1504 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1506 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1508 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter Enabled */

/* 1510 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1512 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1514 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter Start */

/* 1516 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1518 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1520 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Stop */

/* 1522 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1524 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1526 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LpcGetReconditionState */

/* 1528 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1530 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1534 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1536 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1538 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1540 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1542 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1544 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1546 */	NdrFcShort( 0x54 ),	/* 84 */
/* 1548 */	0x40,		/* Oi2 Flags:  has ext, */
			0x4,		/* 4 */
/* 1550 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1554 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1556 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 1558 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1560 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1562 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter Battery */

/* 1564 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1566 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1568 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Stage */

/* 1570 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1572 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1574 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter StageNum */

/* 1576 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1578 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1580 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LpcGetResetResult */

/* 1582 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1584 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1588 */	NdrFcShort( 0x25 ),	/* 37 */
/* 1590 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1592 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1594 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1596 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1598 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1600 */	NdrFcShort( 0x54 ),	/* 84 */
/* 1602 */	0x42,		/* Oi2 Flags:  clt must size, has ext, */
			0x5,		/* 5 */
/* 1604 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1610 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 1612 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1614 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1616 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BarCode */

/* 1618 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1620 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1622 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Parameter ErrorValue */

/* 1624 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1626 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1628 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter TickHigh */

/* 1630 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1632 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1634 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter TickLow */

/* 1636 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1638 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1640 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LpcStartBatteryGaugeReset */

/* 1642 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1644 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1648 */	NdrFcShort( 0x26 ),	/* 38 */
/* 1650 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1652 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1654 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1656 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1658 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1660 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1662 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 1664 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1670 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 1672 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1674 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1676 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 1678 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1680 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1682 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LpcStopBatteryGaugeReset */

/* 1684 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1686 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1690 */	NdrFcShort( 0x27 ),	/* 39 */
/* 1692 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1694 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1696 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1698 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1700 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1704 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 1706 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1712 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 1714 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1716 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1718 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 1720 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1722 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1724 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LpcSetChargeThreshold */

/* 1726 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1728 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1732 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1734 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1736 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1738 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1740 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1742 */	NdrFcShort( 0x3c ),	/* 60 */
/* 1744 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1746 */	0x40,		/* Oi2 Flags:  has ext, */
			0x4,		/* 4 */
/* 1748 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1752 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1754 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 1756 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1758 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1760 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 1762 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1764 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1766 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Start */

/* 1768 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1770 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1772 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Stop */

/* 1774 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1776 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1778 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LpcGetFullChargeCapacity */

/* 1780 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1782 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1786 */	NdrFcShort( 0x29 ),	/* 41 */
/* 1788 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1790 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1792 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1794 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1796 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1798 */	NdrFcShort( 0x36 ),	/* 54 */
/* 1800 */	0x40,		/* Oi2 Flags:  has ext, */
			0x4,		/* 4 */
/* 1802 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1808 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 1810 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1812 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1814 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 1816 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1818 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1820 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Value */

/* 1822 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1824 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1826 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Capable */

/* 1828 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1830 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1832 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcGetDesignCapacity */

/* 1834 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1836 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1840 */	NdrFcShort( 0x2a ),	/* 42 */
/* 1842 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1844 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1846 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1848 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1850 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1852 */	NdrFcShort( 0x36 ),	/* 54 */
/* 1854 */	0x40,		/* Oi2 Flags:  has ext, */
			0x4,		/* 4 */
/* 1856 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1862 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 1864 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1866 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1868 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 1870 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1872 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1874 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Value */

/* 1876 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1878 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1880 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Capable */

/* 1882 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1884 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1886 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcGetDesignVoltage */

/* 1888 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1890 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1894 */	NdrFcShort( 0x2b ),	/* 43 */
/* 1896 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1898 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1900 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1902 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1904 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1906 */	NdrFcShort( 0x36 ),	/* 54 */
/* 1908 */	0x40,		/* Oi2 Flags:  has ext, */
			0x4,		/* 4 */
/* 1910 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1912 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1914 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1916 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 1918 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1920 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1922 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 1924 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1926 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1928 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Value */

/* 1930 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1932 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1934 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Capable */

/* 1936 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1938 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1940 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcGetSerialNumber */

/* 1942 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1944 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1948 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1950 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1952 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1954 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1956 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1958 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1960 */	NdrFcShort( 0x36 ),	/* 54 */
/* 1962 */	0x40,		/* Oi2 Flags:  has ext, */
			0x4,		/* 4 */
/* 1964 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1970 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 1972 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1974 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1976 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 1978 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1980 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1982 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Value */

/* 1984 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1986 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1988 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Capable */

/* 1990 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1992 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1994 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcGetAcAdapterWattage */

/* 1996 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1998 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2002 */	NdrFcShort( 0x2d ),	/* 45 */
/* 2004 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2006 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2008 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2010 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2012 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2014 */	NdrFcShort( 0x36 ),	/* 54 */
/* 2016 */	0x40,		/* Oi2 Flags:  has ext, */
			0x4,		/* 4 */
/* 2018 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2020 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2022 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2024 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 2026 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2028 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2030 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 2032 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2034 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2036 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Value */

/* 2038 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2040 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2042 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Capable */

/* 2044 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2046 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2048 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcGetVoltage */

/* 2050 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2052 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2056 */	NdrFcShort( 0x2e ),	/* 46 */
/* 2058 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2060 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2062 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2064 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2066 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2068 */	NdrFcShort( 0x36 ),	/* 54 */
/* 2070 */	0x40,		/* Oi2 Flags:  has ext, */
			0x4,		/* 4 */
/* 2072 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2076 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2078 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 2080 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2082 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2084 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 2086 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2088 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2090 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Value */

/* 2092 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2094 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2096 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Capable */

/* 2098 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2100 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2102 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcGetCurrent */

/* 2104 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2106 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2110 */	NdrFcShort( 0x2f ),	/* 47 */
/* 2112 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2114 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2116 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2118 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2120 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2122 */	NdrFcShort( 0x36 ),	/* 54 */
/* 2124 */	0x40,		/* Oi2 Flags:  has ext, */
			0x4,		/* 4 */
/* 2126 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2132 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 2134 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2136 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2138 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 2140 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2142 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2144 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Value */

/* 2146 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2148 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2150 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Capable */

/* 2152 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2154 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2156 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcGetTemperature */

/* 2158 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2160 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2164 */	NdrFcShort( 0x30 ),	/* 48 */
/* 2166 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2168 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2170 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2172 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2174 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2176 */	NdrFcShort( 0x36 ),	/* 54 */
/* 2178 */	0x40,		/* Oi2 Flags:  has ext, */
			0x4,		/* 4 */
/* 2180 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2186 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 2188 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2190 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2192 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 2194 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2196 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2198 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Value */

/* 2200 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2202 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2204 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Capable */

/* 2206 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2208 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2210 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcGetCycleCount */

/* 2212 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2214 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2218 */	NdrFcShort( 0x31 ),	/* 49 */
/* 2220 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2222 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2224 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2226 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2228 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2230 */	NdrFcShort( 0x36 ),	/* 54 */
/* 2232 */	0x40,		/* Oi2 Flags:  has ext, */
			0x4,		/* 4 */
/* 2234 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2238 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2240 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 2242 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2244 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2246 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 2248 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2250 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2252 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Value */

/* 2254 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2256 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2258 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Capable */

/* 2260 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2262 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2264 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcGetRemainingPercentage */

/* 2266 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2268 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2272 */	NdrFcShort( 0x32 ),	/* 50 */
/* 2274 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2276 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2278 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2280 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2282 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2284 */	NdrFcShort( 0x36 ),	/* 54 */
/* 2286 */	0x40,		/* Oi2 Flags:  has ext, */
			0x4,		/* 4 */
/* 2288 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2294 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 2296 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2298 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2300 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 2302 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2304 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2306 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Value */

/* 2308 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2310 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2312 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Capable */

/* 2314 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2316 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2318 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcGetRemainingCapacity */

/* 2320 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2322 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2326 */	NdrFcShort( 0x33 ),	/* 51 */
/* 2328 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2330 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2332 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2334 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2336 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2338 */	NdrFcShort( 0x36 ),	/* 54 */
/* 2340 */	0x40,		/* Oi2 Flags:  has ext, */
			0x4,		/* 4 */
/* 2342 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2348 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 2350 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2352 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2354 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 2356 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2358 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2360 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Value */

/* 2362 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2364 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2366 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Capable */

/* 2368 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2370 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2372 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcGetRemainingTime */

/* 2374 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2376 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2380 */	NdrFcShort( 0x34 ),	/* 52 */
/* 2382 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2384 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2386 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2388 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2390 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2392 */	NdrFcShort( 0x36 ),	/* 54 */
/* 2394 */	0x40,		/* Oi2 Flags:  has ext, */
			0x4,		/* 4 */
/* 2396 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2402 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 2404 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2406 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2408 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 2410 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2412 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2414 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Value */

/* 2416 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2418 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2420 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Capable */

/* 2422 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2424 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2426 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcGetChargeCompletionTime */

/* 2428 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2430 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2434 */	NdrFcShort( 0x35 ),	/* 53 */
/* 2436 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2438 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2440 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2442 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2444 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2446 */	NdrFcShort( 0x36 ),	/* 54 */
/* 2448 */	0x40,		/* Oi2 Flags:  has ext, */
			0x4,		/* 4 */
/* 2450 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2454 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2456 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 2458 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2460 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2462 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 2464 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2466 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2468 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Value */

/* 2470 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2472 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2474 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Capable */

/* 2476 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2478 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2480 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcGetChargeStatus */

/* 2482 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2484 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2488 */	NdrFcShort( 0x36 ),	/* 54 */
/* 2490 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2492 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2494 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2496 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2498 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2500 */	NdrFcShort( 0x36 ),	/* 54 */
/* 2502 */	0x40,		/* Oi2 Flags:  has ext, */
			0x4,		/* 4 */
/* 2504 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2510 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 2512 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2514 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2516 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 2518 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2520 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2522 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Value */

/* 2524 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2526 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2528 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Capable */

/* 2530 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2532 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2534 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcGetDeviceChemistry */

/* 2536 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2538 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2542 */	NdrFcShort( 0x37 ),	/* 55 */
/* 2544 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2546 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2548 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2550 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2552 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2554 */	NdrFcShort( 0x36 ),	/* 54 */
/* 2556 */	0x40,		/* Oi2 Flags:  has ext, */
			0x4,		/* 4 */
/* 2558 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2560 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2562 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2564 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 2566 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2568 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2570 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 2572 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2574 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2576 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Value */

/* 2578 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2580 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2582 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Capable */

/* 2584 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2586 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2588 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcGetHealthStatus */

/* 2590 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2592 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2596 */	NdrFcShort( 0x38 ),	/* 56 */
/* 2598 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2600 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2602 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2604 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2606 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2608 */	NdrFcShort( 0x36 ),	/* 54 */
/* 2610 */	0x40,		/* Oi2 Flags:  has ext, */
			0x4,		/* 4 */
/* 2612 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2618 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 2620 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2622 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2624 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 2626 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2628 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2630 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Value */

/* 2632 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2634 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2636 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Capable */

/* 2638 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2640 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2642 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcGetIsAcAttached */

/* 2644 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2646 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2650 */	NdrFcShort( 0x39 ),	/* 57 */
/* 2652 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2654 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2656 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2658 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2660 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2662 */	NdrFcShort( 0x1a ),	/* 26 */
/* 2664 */	0x40,		/* Oi2 Flags:  has ext, */
			0x3,		/* 3 */
/* 2666 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2672 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 2674 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2676 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2678 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 2680 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2682 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2684 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Value */

/* 2686 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2688 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2690 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcGetIsOnLowerThreshold */

/* 2692 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2694 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2698 */	NdrFcShort( 0x3a ),	/* 58 */
/* 2700 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2702 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2704 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2706 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2708 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2710 */	NdrFcShort( 0x1a ),	/* 26 */
/* 2712 */	0x40,		/* Oi2 Flags:  has ext, */
			0x3,		/* 3 */
/* 2714 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2716 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2720 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 2722 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2724 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2726 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 2728 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2730 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2732 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Value */

/* 2734 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2736 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2738 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcGetCondition */

/* 2740 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2742 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2746 */	NdrFcShort( 0x3b ),	/* 59 */
/* 2748 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2750 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2752 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2754 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2756 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2758 */	NdrFcShort( 0x1c ),	/* 28 */
/* 2760 */	0x40,		/* Oi2 Flags:  has ext, */
			0x3,		/* 3 */
/* 2762 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2768 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 2770 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2772 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2774 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 2776 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2778 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2780 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Value */

/* 2782 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2784 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2786 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LpcGetControllerType */

/* 2788 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2790 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2794 */	NdrFcShort( 0x3c ),	/* 60 */
/* 2796 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2798 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2800 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2802 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2804 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2806 */	NdrFcShort( 0x1c ),	/* 28 */
/* 2808 */	0x40,		/* Oi2 Flags:  has ext, */
			0x3,		/* 3 */
/* 2810 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2816 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 2818 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2820 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2822 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 2824 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2826 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2828 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Value */

/* 2830 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2832 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2834 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LpcGetWarrantyInfo */

/* 2836 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2838 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2842 */	NdrFcShort( 0x3d ),	/* 61 */
/* 2844 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2846 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2848 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2850 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2852 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2854 */	NdrFcShort( 0x1c ),	/* 28 */
/* 2856 */	0x40,		/* Oi2 Flags:  has ext, */
			0x3,		/* 3 */
/* 2858 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2862 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2864 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 2866 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2868 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2870 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 2872 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2874 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2876 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Value */

/* 2878 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2880 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2882 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LpcGetDeviceName */

/* 2884 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2886 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2890 */	NdrFcShort( 0x3e ),	/* 62 */
/* 2892 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2894 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2896 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2898 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2900 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2902 */	NdrFcShort( 0x36 ),	/* 54 */
/* 2904 */	0x41,		/* Oi2 Flags:  srv must size, has ext, */
			0x5,		/* 5 */
/* 2906 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2908 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2910 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2912 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 2914 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2916 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2918 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 2920 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2922 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2924 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter BufferLen */

/* 2926 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2928 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2930 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Buffer */

/* 2932 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 2934 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2936 */	NdrFcShort( 0x22 ),	/* Type Offset=34 */

	/* Parameter Capable */

/* 2938 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2940 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2942 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcGetBarCodeNumber */

/* 2944 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2946 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2950 */	NdrFcShort( 0x3f ),	/* 63 */
/* 2952 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2954 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2956 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2958 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2960 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2962 */	NdrFcShort( 0x36 ),	/* 54 */
/* 2964 */	0x41,		/* Oi2 Flags:  srv must size, has ext, */
			0x5,		/* 5 */
/* 2966 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2968 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2972 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 2974 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2976 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2978 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 2980 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2982 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2984 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter BufferLen */

/* 2986 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2988 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2990 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Buffer */

/* 2992 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 2994 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2996 */	NdrFcShort( 0x22 ),	/* Type Offset=34 */

	/* Parameter Capable */

/* 2998 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3000 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3002 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcGetFirstUsedDate */

/* 3004 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3006 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3010 */	NdrFcShort( 0x40 ),	/* 64 */
/* 3012 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3014 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3016 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3018 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3020 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3022 */	NdrFcShort( 0x36 ),	/* 54 */
/* 3024 */	0x41,		/* Oi2 Flags:  srv must size, has ext, */
			0x5,		/* 5 */
/* 3026 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3028 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3030 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3032 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 3034 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3036 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3038 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 3040 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3042 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3044 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter BufferLen */

/* 3046 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3048 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3050 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Buffer */

/* 3052 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 3054 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3056 */	NdrFcShort( 0x22 ),	/* Type Offset=34 */

	/* Parameter Capable */

/* 3058 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3060 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3062 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcGetManufacturerName */

/* 3064 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3066 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3070 */	NdrFcShort( 0x41 ),	/* 65 */
/* 3072 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3074 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3076 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3078 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3080 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3082 */	NdrFcShort( 0x1c ),	/* 28 */
/* 3084 */	0x41,		/* Oi2 Flags:  srv must size, has ext, */
			0x4,		/* 4 */
/* 3086 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3088 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3090 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3092 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 3094 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3096 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3098 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 3100 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3102 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3104 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter BufferLen */

/* 3106 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3108 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3110 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Buffer */

/* 3112 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 3114 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3116 */	NdrFcShort( 0x22 ),	/* Type Offset=34 */

	/* Procedure LpcGetLastConditionDate */

/* 3118 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3120 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3124 */	NdrFcShort( 0x42 ),	/* 66 */
/* 3126 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3128 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3130 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3132 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3134 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3136 */	NdrFcShort( 0x1c ),	/* 28 */
/* 3138 */	0x41,		/* Oi2 Flags:  srv must size, has ext, */
			0x4,		/* 4 */
/* 3140 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3142 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3146 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 3148 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3150 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3152 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 3154 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3156 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3158 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter BufferLen */

/* 3160 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3162 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3164 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Buffer */

/* 3166 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 3168 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3170 */	NdrFcShort( 0x22 ),	/* Type Offset=34 */

	/* Procedure LpcGetManufactureDate */

/* 3172 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3174 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3178 */	NdrFcShort( 0x43 ),	/* 67 */
/* 3180 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3182 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3184 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3186 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3188 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3190 */	NdrFcShort( 0x1c ),	/* 28 */
/* 3192 */	0x41,		/* Oi2 Flags:  srv must size, has ext, */
			0x4,		/* 4 */
/* 3194 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3196 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3200 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 3202 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3204 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3206 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 3208 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3210 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3212 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter BufferLen */

/* 3214 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3216 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3218 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Buffer */

/* 3220 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 3222 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3224 */	NdrFcShort( 0x22 ),	/* Type Offset=34 */

	/* Procedure LpcGetSpecificationInfo */

/* 3226 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3228 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3232 */	NdrFcShort( 0x44 ),	/* 68 */
/* 3234 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3236 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3238 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3240 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3242 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3244 */	NdrFcShort( 0x52 ),	/* 82 */
/* 3246 */	0x40,		/* Oi2 Flags:  has ext, */
			0x5,		/* 5 */
/* 3248 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3254 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 3256 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3258 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3260 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 3262 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3264 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3266 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Version */

/* 3268 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3270 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3272 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Revision */

/* 3274 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3276 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3278 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Capable */

/* 3280 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3282 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3284 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcGetSBSExData */

/* 3286 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3288 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3292 */	NdrFcShort( 0x45 ),	/* 69 */
/* 3294 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3296 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3298 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3300 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3302 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3304 */	NdrFcShort( 0x50 ),	/* 80 */
/* 3306 */	0x40,		/* Oi2 Flags:  has ext, */
			0x5,		/* 5 */
/* 3308 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3314 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 3316 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3318 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3320 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 3322 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3324 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3326 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ACSourceInfo */

/* 3328 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3330 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3332 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter WarrantyValid */

/* 3334 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3336 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3338 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter NonReplaceableBattery */

/* 3340 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3342 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3344 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcUpdateSmartBatteryStatus */

/* 3346 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3348 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3352 */	NdrFcShort( 0x46 ),	/* 70 */
/* 3354 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3356 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3358 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3360 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3362 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3366 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 3368 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3370 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3374 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 3376 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3378 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3380 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 3382 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3384 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3386 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LpcGetFirmwareVersion */

/* 3388 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3390 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3394 */	NdrFcShort( 0x47 ),	/* 71 */
/* 3396 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3398 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3400 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3402 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3404 */	NdrFcShort( 0x48 ),	/* 72 */
/* 3406 */	NdrFcShort( 0x1c ),	/* 28 */
/* 3408 */	0x41,		/* Oi2 Flags:  srv must size, has ext, */
			0x4,		/* 4 */
/* 3410 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3412 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3416 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 3418 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3420 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3422 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 3424 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3426 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3428 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter BufferLen */

/* 3430 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 3432 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3434 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Buffer */

/* 3436 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 3438 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3440 */	NdrFcShort( 0x22 ),	/* Type Offset=34 */

	/* Procedure LpcSetEasyResumeEnabled */

/* 3442 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3444 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3448 */	NdrFcShort( 0x48 ),	/* 72 */
/* 3450 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3452 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3454 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3456 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3458 */	NdrFcShort( 0x2a ),	/* 42 */
/* 3460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3462 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 3464 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3470 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 3472 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3474 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3476 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter Value */

/* 3478 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3480 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3482 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcSetEasyResumeLockTimeout */

/* 3484 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3486 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3490 */	NdrFcShort( 0x49 ),	/* 73 */
/* 3492 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3494 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3496 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3498 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3500 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3504 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 3506 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3512 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 3514 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3516 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3518 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter Value */

/* 3520 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3522 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3524 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LpcGetEasyResumeEnabled */

/* 3526 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3528 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3532 */	NdrFcShort( 0x4a ),	/* 74 */
/* 3534 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3536 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3538 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3540 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3542 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3544 */	NdrFcShort( 0x1a ),	/* 26 */
/* 3546 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 3548 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3554 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 3556 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3558 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3560 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter Value */

/* 3562 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3564 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3566 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcGetEasyResumeLockTimeout */

/* 3568 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3570 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3574 */	NdrFcShort( 0x4b ),	/* 75 */
/* 3576 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3578 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3580 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3582 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3584 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3586 */	NdrFcShort( 0x1c ),	/* 28 */
/* 3588 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 3590 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3592 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3596 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 3598 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3600 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3602 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter Value */

/* 3604 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3606 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3608 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LpcGetResetStartTime */

/* 3610 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3612 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3616 */	NdrFcShort( 0x4c ),	/* 76 */
/* 3618 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3620 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3622 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3624 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3626 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3628 */	NdrFcShort( 0x38 ),	/* 56 */
/* 3630 */	0x42,		/* Oi2 Flags:  clt must size, has ext, */
			0x4,		/* 4 */
/* 3632 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3634 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3636 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3638 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 3640 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3642 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3644 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter Barcode */

/* 3646 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3648 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3650 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Parameter StartHigh */

/* 3652 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3654 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3656 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter StartLow */

/* 3658 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3660 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3662 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LpcGetFCCValue */

/* 3664 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3666 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3670 */	NdrFcShort( 0x4d ),	/* 77 */
/* 3672 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3674 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3676 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3678 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3680 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3682 */	NdrFcShort( 0x54 ),	/* 84 */
/* 3684 */	0x42,		/* Oi2 Flags:  clt must size, has ext, */
			0x5,		/* 5 */
/* 3686 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3692 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 3694 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3696 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3698 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter Barcode */

/* 3700 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3702 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3704 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Parameter FCCBeforeReset */

/* 3706 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3708 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3710 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter FCCAfterReset */

/* 3712 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3714 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3716 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter DesignCapacity */

/* 3718 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3720 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3722 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LpcGetTemporaryChargeMode */

/* 3724 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3726 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3730 */	NdrFcShort( 0x4e ),	/* 78 */
/* 3732 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3734 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3736 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3738 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3740 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3742 */	NdrFcShort( 0x1a ),	/* 26 */
/* 3744 */	0x40,		/* Oi2 Flags:  has ext, */
			0x3,		/* 3 */
/* 3746 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3752 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 3754 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3756 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3758 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 3760 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3762 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3764 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Value */

/* 3766 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3768 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3770 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure LpcGetDlsPiCapability */

/* 3772 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3774 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3778 */	NdrFcShort( 0x4f ),	/* 79 */
/* 3780 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3782 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3784 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3786 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3788 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3790 */	NdrFcShort( 0x1a ),	/* 26 */
/* 3792 */	0x40,		/* Oi2 Flags:  has ext, */
			0x3,		/* 3 */
/* 3794 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3796 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3798 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3800 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Context */

/* 3802 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3804 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3806 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter BatteryNum */

/* 3808 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3810 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3812 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Value */

/* 3814 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3816 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3818 */	0x6,		/* FC_SHORT */
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
/* 48 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
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
    34,
    70,
    112,
    154,
    196,
    238,
    280,
    322,
    364,
    406,
    448,
    490,
    532,
    574,
    616,
    658,
    700,
    742,
    784,
    826,
    868,
    910,
    952,
    994,
    1036,
    1078,
    1120,
    1162,
    1204,
    1246,
    1288,
    1330,
    1372,
    1414,
    1462,
    1528,
    1582,
    1642,
    1684,
    1726,
    1780,
    1834,
    1888,
    1942,
    1996,
    2050,
    2104,
    2158,
    2212,
    2266,
    2320,
    2374,
    2428,
    2482,
    2536,
    2590,
    2644,
    2692,
    2740,
    2788,
    2836,
    2884,
    2944,
    3004,
    3064,
    3118,
    3172,
    3226,
    3286,
    3346,
    3388,
    3442,
    3484,
    3526,
    3568,
    3610,
    3664,
    3724,
    3772
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
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_) */

