/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "nTECSInfo_tCelltypeInfo_tecsgen.h"
#include "nTECSInfo_tCelltypeInfo_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eCelltypeInfo */
struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES {
    const struct tag_nTECSInfo_sCelltypeInfo_VMT *vmt;
    tCelltypeInfo_IDX  idx;
};

/* ������������ȥ�ؿ� #_EPSF_# */
/* eCelltypeInfo */
ER             nTECSInfo_tCelltypeInfo_eCelltypeInfo_getName_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd, char_t* name, int_t max_len)
{
    struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *)epd;
    return nTECSInfo_tCelltypeInfo_eCelltypeInfo_getName( lepd->idx, name, max_len );
}
uint16_t       nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNameLength_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd)
{
    struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *)epd;
    return nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNameLength( lepd->idx );
}
uint32_t       nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNAttr_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd)
{
    struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *)epd;
    return nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNAttr( lepd->idx );
}
ER             nTECSInfo_tCelltypeInfo_eCelltypeInfo_getAttrInfo_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd, uint32_t ith, Descriptor( nTECSInfo_sVarDeclInfo )* desc)
{
    struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *)epd;
    return nTECSInfo_tCelltypeInfo_eCelltypeInfo_getAttrInfo( lepd->idx, ith, desc );
}
uint32_t       nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNVar_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd)
{
    struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *)epd;
    return nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNVar( lepd->idx );
}
ER             nTECSInfo_tCelltypeInfo_eCelltypeInfo_getVarInfo_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd, uint32_t ith, Descriptor( nTECSInfo_sVarDeclInfo )* desc)
{
    struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *)epd;
    return nTECSInfo_tCelltypeInfo_eCelltypeInfo_getVarInfo( lepd->idx, ith, desc );
}
uint32_t       nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNCall_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd)
{
    struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *)epd;
    return nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNCall( lepd->idx );
}
ER             nTECSInfo_tCelltypeInfo_eCelltypeInfo_getCallInfo_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd, uint32_t ith, Descriptor( nTECSInfo_sCallInfo )* desc)
{
    struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *)epd;
    return nTECSInfo_tCelltypeInfo_eCelltypeInfo_getCallInfo( lepd->idx, ith, desc );
}
uint32_t       nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNEntry_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd)
{
    struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *)epd;
    return nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNEntry( lepd->idx );
}
ER             nTECSInfo_tCelltypeInfo_eCelltypeInfo_getEntryInfo_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd, uint32_t ith, Descriptor( nTECSInfo_sEntryInfo )* desc)
{
    struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *)epd;
    return nTECSInfo_tCelltypeInfo_eCelltypeInfo_getEntryInfo( lepd->idx, ith, desc );
}
bool_t         nTECSInfo_tCelltypeInfo_eCelltypeInfo_isSingleton_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd)
{
    struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *)epd;
    return nTECSInfo_tCelltypeInfo_eCelltypeInfo_isSingleton( lepd->idx );
}
bool_t         nTECSInfo_tCelltypeInfo_eCelltypeInfo_isIDX_is_ID_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd)
{
    struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *)epd;
    return nTECSInfo_tCelltypeInfo_eCelltypeInfo_isIDX_is_ID( lepd->idx );
}
uint32_t       nTECSInfo_tCelltypeInfo_eCelltypeInfo_sizeOfCB_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd)
{
    struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *)epd;
    return nTECSInfo_tCelltypeInfo_eCelltypeInfo_sizeOfCB( lepd->idx );
}
uint32_t       nTECSInfo_tCelltypeInfo_eCelltypeInfo_sizeOfINIB_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd)
{
    struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *)epd;
    return nTECSInfo_tCelltypeInfo_eCelltypeInfo_sizeOfINIB( lepd->idx );
}

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eCelltypeInfo */
const struct tag_nTECSInfo_sCelltypeInfo_VMT nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_ = {
    nTECSInfo_tCelltypeInfo_eCelltypeInfo_getName_skel,
    nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNameLength_skel,
    nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNAttr_skel,
    nTECSInfo_tCelltypeInfo_eCelltypeInfo_getAttrInfo_skel,
    nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNVar_skel,
    nTECSInfo_tCelltypeInfo_eCelltypeInfo_getVarInfo_skel,
    nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNCall_skel,
    nTECSInfo_tCelltypeInfo_eCelltypeInfo_getCallInfo_skel,
    nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNEntry_skel,
    nTECSInfo_tCelltypeInfo_eCelltypeInfo_getEntryInfo_skel,
    nTECSInfo_tCelltypeInfo_eCelltypeInfo_isSingleton_skel,
    nTECSInfo_tCelltypeInfo_eCelltypeInfo_isIDX_is_ID_skel,
    nTECSInfo_tCelltypeInfo_eCelltypeInfo_sizeOfCB_skel,
    nTECSInfo_tCelltypeInfo_eCelltypeInfo_sizeOfINIB_skel,
};

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */
extern struct tag_nTECSInfo_sEntryInfo_VDES rDomainEV3_rTECSInfo_tTask_eTaskEntryInfo_eEntryInfo_des;
extern struct tag_nTECSInfo_sEntryInfo_VDES rDomainEV3_rTECSInfo_tTask_eiTaskEntryInfo_eEntryInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_tTask_cBodyCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_tTask_cExceptionBodyCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_tTask_idVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_tTask_taskAttributeVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_tTask_exceptionAttributeVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_tTask_priorityVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_tTask_stackSizeVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_tTask_systemStackSizeVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_tTask_userStackSizeVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_tTask_accessPatternVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sEntryInfo_VDES rDomainEV3_rTECSInfo_tKernel_eKernelEntryInfo_eEntryInfo_des;
extern struct tag_nTECSInfo_sEntryInfo_VDES rDomainEV3_rTECSInfo_tKernel_eiKernelEntryInfo_eEntryInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_tKernel_accessPatternVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sEntryInfo_VDES rDomainEV3_rTECSInfo_tUltrasonicSensor_eUltrasonicSensorEntryInfo_eEntryInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_tUltrasonicSensor_portVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sEntryInfo_VDES rDomainEV3_rTECSInfo_tColorSensor_eColorSensorEntryInfo_eEntryInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_tColorSensor_portVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sEntryInfo_VDES rDomainEV3_rTECSInfo_tTouchSensor_eTouchSensorEntryInfo_eEntryInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_tTouchSensor_portVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sEntryInfo_VDES rDomainEV3_rTECSInfo_tGyroSensor_eGyroSensorEntryInfo_eEntryInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_tGyroSensor_portVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sEntryInfo_VDES rDomainEV3_rTECSInfo_tMotor_eMotorEntryInfo_eEntryInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_tMotor_portVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sEntryInfo_VDES rDomainEV3_rTECSInfo_tButton_eButtonEntryInfo_eEntryInfo_des;

extern struct tag_nTECSInfo_sEntryInfo_VDES rDomainEV3_rTECSInfo_tLCD_eLCDEntryInfo_eEntryInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_tLCD_cButtonCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_tLCD_currentFontVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sEntryInfo_VDES rDomainEV3_rTECSInfo_tLED_eLEDEntryInfo_eEntryInfo_des;

extern struct tag_nTECSInfo_sEntryInfo_VDES rDomainEV3_rTECSInfo_tBattery_eBatteryEntryInfo_eEntryInfo_des;

extern struct tag_nTECSInfo_sEntryInfo_VDES rDomainEV3_rTECSInfo_tSpeaker_eSpeakerEntryInfo_eEntryInfo_des;

extern struct tag_nTECSInfo_sEntryInfo_VDES rDomainEV3_rTECSInfo_tEV3Platform_eTaskBodyEntryInfo_eEntryInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_tEV3Platform_cRiteVMCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_tEV3Platform_cTaskCallInfo_eCallInfo_des;

extern struct tag_nTECSInfo_sEntryInfo_VDES rDomainEV3_rTECSInfo_tBalancer_eBalancerEntryInfo_eEntryInfo_des;

extern struct tag_nTECSInfo_sEntryInfo_VDES rDomainEV3_rTECSInfo_tSharedMemory_eSharedMemoryEntryInfo_eEntryInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_tSharedMemory_sizeVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_tSharedMemory_dataVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sEntryInfo_VDES rDomainEV3_rTECSInfo_tTarget1_eTarget1EntryInfo_eEntryInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_tTarget1_cLCDCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_tTarget1_cButtonCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_tTarget1_cKernelCallInfo_eCallInfo_des;

extern struct tag_nTECSInfo_sEntryInfo_VDES rDomainEV3_rTECSInfo_tTarget2_eTarget2EntryInfo_eEntryInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_tTarget2_cLCDCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_tTarget2_cButtonCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_tTarget2_cKernelCallInfo_eCallInfo_des;

extern struct tag_nTECSInfo_sEntryInfo_VDES rDomainEV3_rTECSInfo_tTarget3_eTarget3EntryInfo_eEntryInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_tTarget3_cLCDCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_tTarget3_cButtonCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_tTarget3_cKernelCallInfo_eCallInfo_des;

extern struct tag_nTECSInfo_sEntryInfo_VDES rDomainEV3_rTECSInfo_tTaskMain_eBodyEntryInfo_eEntryInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_tTaskMain_cKernelCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_tTaskMain_cLCDCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_tTaskMain_cButtonCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_tTaskMain_cTECSInfoCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_tTaskMain_cNSInfoCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_tTaskMain_cRegionInfoCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_tTaskMain_cCellInfoCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_tTaskMain_cSignatureInfoCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_tTaskMain_cCelltypeInfoCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_tTaskMain_cVarDeclInfoCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_tTaskMain_cTypeInfoCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_tTaskMain_cTarget1CallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_tTaskMain_cREDInfoCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_tTaskMain_cEntryInfoCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_tTaskMain_NAME_LENVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_tTaskMain_target_pathVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_tTaskMain_rawDescVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sEntryInfo_VDES rDomainEV3_rTECSInfo_nMruby_tTECSInitializer_eInitializeEntryInfo_eEntryInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_nMruby_tTECSInitializer_cInitializeCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_nMruby_tTECSInitializer_TECSVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sEntryInfo_VDES rDomainEV3_rTECSInfo_nMruby_tCharPointer_eInitializeEntryInfo_eEntryInfo_des;

extern struct tag_nTECSInfo_sEntryInfo_VDES rDomainEV3_rTECSInfo_nMruby_tInt8Pointer_eInitializeEntryInfo_eEntryInfo_des;

extern struct tag_nTECSInfo_sEntryInfo_VDES rDomainEV3_rTECSInfo_nMruby_tInt32Pointer_eInitializeEntryInfo_eEntryInfo_des;

extern struct tag_nTECSInfo_sEntryInfo_VDES rDomainEV3_rTECSInfo_nMruby_tUInt16Pointer_eInitializeEntryInfo_eEntryInfo_des;

extern struct tag_nTECSInfo_sEntryInfo_VDES rDomainEV3_rTECSInfo_nMruby_tIntPointer_eInitializeEntryInfo_eEntryInfo_des;

extern struct tag_nTECSInfo_sEntryInfo_VDES rDomainEV3_rTECSInfo_nMruby_tULongPointer_eInitializeEntryInfo_eEntryInfo_des;

extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsKernel_cTECSCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsKernel_VMnameVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsKernel_bridgeNameVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sEntryInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsKernel_Initializer_eInitializeEntryInfo_eEntryInfo_des;

extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsMotor_cTECSCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsMotor_VMnameVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsMotor_bridgeNameVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sEntryInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsMotor_Initializer_eInitializeEntryInfo_eEntryInfo_des;

extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsLCD_cTECSCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsLCD_VMnameVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsLCD_bridgeNameVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sEntryInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsLCD_Initializer_eInitializeEntryInfo_eEntryInfo_des;

extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsLED_cTECSCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsLED_VMnameVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsLED_bridgeNameVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sEntryInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsLED_Initializer_eInitializeEntryInfo_eEntryInfo_des;

extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsButton_cTECSCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsButton_VMnameVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsButton_bridgeNameVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sEntryInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsButton_Initializer_eInitializeEntryInfo_eEntryInfo_des;

extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsBattery_cTECSCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsBattery_VMnameVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsBattery_bridgeNameVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sEntryInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsBattery_Initializer_eInitializeEntryInfo_eEntryInfo_des;

extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsSpeaker_cTECSCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsSpeaker_VMnameVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsSpeaker_bridgeNameVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sEntryInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsSpeaker_Initializer_eInitializeEntryInfo_eEntryInfo_des;

extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsUltrasonicSensor_cTECSCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsUltrasonicSensor_VMnameVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsUltrasonicSensor_bridgeNameVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sEntryInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsUltrasonicSensor_Initializer_eInitializeEntryInfo_eEntryInfo_des;

extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsGyroSensor_cTECSCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsGyroSensor_VMnameVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsGyroSensor_bridgeNameVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sEntryInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsGyroSensor_Initializer_eInitializeEntryInfo_eEntryInfo_des;

extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsColorSensor_cTECSCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsColorSensor_VMnameVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsColorSensor_bridgeNameVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sEntryInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsColorSensor_Initializer_eInitializeEntryInfo_eEntryInfo_des;

extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsTouchSensor_cTECSCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsTouchSensor_VMnameVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsTouchSensor_bridgeNameVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sEntryInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsTouchSensor_Initializer_eInitializeEntryInfo_eEntryInfo_des;

extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsBalancer_cTECSCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsBalancer_VMnameVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsBalancer_bridgeNameVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sEntryInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsBalancer_Initializer_eInitializeEntryInfo_eEntryInfo_des;

extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsSharedMemory_cTECSCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsSharedMemory_VMnameVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsSharedMemory_bridgeNameVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sEntryInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsSharedMemory_Initializer_eInitializeEntryInfo_eEntryInfo_des;

extern struct tag_nTECSInfo_sEntryInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_tTECSInfo_eTECSInfoEntryInfo_eEntryInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_tTECSInfo_cTECSInfoCallInfo_eCallInfo_des;

/* �ƤӸ����� #_CPA_# */
struct tag_nTECSInfo_sEntryInfo_VDES * const rDomainEV3_rTECSInfo_tTaskCelltypeInfo_cEntryInfo[] = {
    &rDomainEV3_rTECSInfo_tTask_eTaskEntryInfo_eEntryInfo_des,
    &rDomainEV3_rTECSInfo_tTask_eiTaskEntryInfo_eEntryInfo_des,
};
struct tag_nTECSInfo_sCallInfo_VDES * const rDomainEV3_rTECSInfo_tTaskCelltypeInfo_cCallInfo[] = {
    &rDomainEV3_rTECSInfo_tTask_cBodyCallInfo_eCallInfo_des,
    &rDomainEV3_rTECSInfo_tTask_cExceptionBodyCallInfo_eCallInfo_des,
};
struct tag_nTECSInfo_sVarDeclInfo_VDES * const rDomainEV3_rTECSInfo_tTaskCelltypeInfo_cAttrInfo[] = {
    &rDomainEV3_rTECSInfo_tTask_idVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_tTask_taskAttributeVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_tTask_exceptionAttributeVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_tTask_priorityVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_tTask_stackSizeVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_tTask_systemStackSizeVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_tTask_userStackSizeVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_tTask_accessPatternVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sEntryInfo_VDES * const rDomainEV3_rTECSInfo_tKernelCelltypeInfo_cEntryInfo[] = {
    &rDomainEV3_rTECSInfo_tKernel_eKernelEntryInfo_eEntryInfo_des,
    &rDomainEV3_rTECSInfo_tKernel_eiKernelEntryInfo_eEntryInfo_des,
};
struct tag_nTECSInfo_sVarDeclInfo_VDES * const rDomainEV3_rTECSInfo_tKernelCelltypeInfo_cAttrInfo[] = {
    &rDomainEV3_rTECSInfo_tKernel_accessPatternVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sEntryInfo_VDES * const rDomainEV3_rTECSInfo_tUltrasonicSensorCelltypeInfo_cEntryInfo[] = {
    &rDomainEV3_rTECSInfo_tUltrasonicSensor_eUltrasonicSensorEntryInfo_eEntryInfo_des,
};
struct tag_nTECSInfo_sVarDeclInfo_VDES * const rDomainEV3_rTECSInfo_tUltrasonicSensorCelltypeInfo_cAttrInfo[] = {
    &rDomainEV3_rTECSInfo_tUltrasonicSensor_portVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sEntryInfo_VDES * const rDomainEV3_rTECSInfo_tColorSensorCelltypeInfo_cEntryInfo[] = {
    &rDomainEV3_rTECSInfo_tColorSensor_eColorSensorEntryInfo_eEntryInfo_des,
};
struct tag_nTECSInfo_sVarDeclInfo_VDES * const rDomainEV3_rTECSInfo_tColorSensorCelltypeInfo_cAttrInfo[] = {
    &rDomainEV3_rTECSInfo_tColorSensor_portVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sEntryInfo_VDES * const rDomainEV3_rTECSInfo_tTouchSensorCelltypeInfo_cEntryInfo[] = {
    &rDomainEV3_rTECSInfo_tTouchSensor_eTouchSensorEntryInfo_eEntryInfo_des,
};
struct tag_nTECSInfo_sVarDeclInfo_VDES * const rDomainEV3_rTECSInfo_tTouchSensorCelltypeInfo_cAttrInfo[] = {
    &rDomainEV3_rTECSInfo_tTouchSensor_portVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sEntryInfo_VDES * const rDomainEV3_rTECSInfo_tGyroSensorCelltypeInfo_cEntryInfo[] = {
    &rDomainEV3_rTECSInfo_tGyroSensor_eGyroSensorEntryInfo_eEntryInfo_des,
};
struct tag_nTECSInfo_sVarDeclInfo_VDES * const rDomainEV3_rTECSInfo_tGyroSensorCelltypeInfo_cAttrInfo[] = {
    &rDomainEV3_rTECSInfo_tGyroSensor_portVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sEntryInfo_VDES * const rDomainEV3_rTECSInfo_tMotorCelltypeInfo_cEntryInfo[] = {
    &rDomainEV3_rTECSInfo_tMotor_eMotorEntryInfo_eEntryInfo_des,
};
struct tag_nTECSInfo_sVarDeclInfo_VDES * const rDomainEV3_rTECSInfo_tMotorCelltypeInfo_cAttrInfo[] = {
    &rDomainEV3_rTECSInfo_tMotor_portVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sEntryInfo_VDES * const rDomainEV3_rTECSInfo_tButtonCelltypeInfo_cEntryInfo[] = {
    &rDomainEV3_rTECSInfo_tButton_eButtonEntryInfo_eEntryInfo_des,
};

struct tag_nTECSInfo_sEntryInfo_VDES * const rDomainEV3_rTECSInfo_tLCDCelltypeInfo_cEntryInfo[] = {
    &rDomainEV3_rTECSInfo_tLCD_eLCDEntryInfo_eEntryInfo_des,
};
struct tag_nTECSInfo_sCallInfo_VDES * const rDomainEV3_rTECSInfo_tLCDCelltypeInfo_cCallInfo[] = {
    &rDomainEV3_rTECSInfo_tLCD_cButtonCallInfo_eCallInfo_des,
};
struct tag_nTECSInfo_sVarDeclInfo_VDES * const rDomainEV3_rTECSInfo_tLCDCelltypeInfo_cVarInfo[] = {
    &rDomainEV3_rTECSInfo_tLCD_currentFontVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sEntryInfo_VDES * const rDomainEV3_rTECSInfo_tLEDCelltypeInfo_cEntryInfo[] = {
    &rDomainEV3_rTECSInfo_tLED_eLEDEntryInfo_eEntryInfo_des,
};

struct tag_nTECSInfo_sEntryInfo_VDES * const rDomainEV3_rTECSInfo_tBatteryCelltypeInfo_cEntryInfo[] = {
    &rDomainEV3_rTECSInfo_tBattery_eBatteryEntryInfo_eEntryInfo_des,
};

struct tag_nTECSInfo_sEntryInfo_VDES * const rDomainEV3_rTECSInfo_tSpeakerCelltypeInfo_cEntryInfo[] = {
    &rDomainEV3_rTECSInfo_tSpeaker_eSpeakerEntryInfo_eEntryInfo_des,
};

struct tag_nTECSInfo_sEntryInfo_VDES * const rDomainEV3_rTECSInfo_tEV3PlatformCelltypeInfo_cEntryInfo[] = {
    &rDomainEV3_rTECSInfo_tEV3Platform_eTaskBodyEntryInfo_eEntryInfo_des,
};
struct tag_nTECSInfo_sCallInfo_VDES * const rDomainEV3_rTECSInfo_tEV3PlatformCelltypeInfo_cCallInfo[] = {
    &rDomainEV3_rTECSInfo_tEV3Platform_cRiteVMCallInfo_eCallInfo_des,
    &rDomainEV3_rTECSInfo_tEV3Platform_cTaskCallInfo_eCallInfo_des,
};

struct tag_nTECSInfo_sEntryInfo_VDES * const rDomainEV3_rTECSInfo_tBalancerCelltypeInfo_cEntryInfo[] = {
    &rDomainEV3_rTECSInfo_tBalancer_eBalancerEntryInfo_eEntryInfo_des,
};

struct tag_nTECSInfo_sEntryInfo_VDES * const rDomainEV3_rTECSInfo_tSharedMemoryCelltypeInfo_cEntryInfo[] = {
    &rDomainEV3_rTECSInfo_tSharedMemory_eSharedMemoryEntryInfo_eEntryInfo_des,
};
struct tag_nTECSInfo_sVarDeclInfo_VDES * const rDomainEV3_rTECSInfo_tSharedMemoryCelltypeInfo_cAttrInfo[] = {
    &rDomainEV3_rTECSInfo_tSharedMemory_sizeVarDeclInfo_eVarDeclInfo_des,
};
struct tag_nTECSInfo_sVarDeclInfo_VDES * const rDomainEV3_rTECSInfo_tSharedMemoryCelltypeInfo_cVarInfo[] = {
    &rDomainEV3_rTECSInfo_tSharedMemory_dataVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sEntryInfo_VDES * const rDomainEV3_rTECSInfo_tTarget1CelltypeInfo_cEntryInfo[] = {
    &rDomainEV3_rTECSInfo_tTarget1_eTarget1EntryInfo_eEntryInfo_des,
};
struct tag_nTECSInfo_sCallInfo_VDES * const rDomainEV3_rTECSInfo_tTarget1CelltypeInfo_cCallInfo[] = {
    &rDomainEV3_rTECSInfo_tTarget1_cLCDCallInfo_eCallInfo_des,
    &rDomainEV3_rTECSInfo_tTarget1_cButtonCallInfo_eCallInfo_des,
    &rDomainEV3_rTECSInfo_tTarget1_cKernelCallInfo_eCallInfo_des,
};

struct tag_nTECSInfo_sEntryInfo_VDES * const rDomainEV3_rTECSInfo_tTarget2CelltypeInfo_cEntryInfo[] = {
    &rDomainEV3_rTECSInfo_tTarget2_eTarget2EntryInfo_eEntryInfo_des,
};
struct tag_nTECSInfo_sCallInfo_VDES * const rDomainEV3_rTECSInfo_tTarget2CelltypeInfo_cCallInfo[] = {
    &rDomainEV3_rTECSInfo_tTarget2_cLCDCallInfo_eCallInfo_des,
    &rDomainEV3_rTECSInfo_tTarget2_cButtonCallInfo_eCallInfo_des,
    &rDomainEV3_rTECSInfo_tTarget2_cKernelCallInfo_eCallInfo_des,
};

struct tag_nTECSInfo_sEntryInfo_VDES * const rDomainEV3_rTECSInfo_tTarget3CelltypeInfo_cEntryInfo[] = {
    &rDomainEV3_rTECSInfo_tTarget3_eTarget3EntryInfo_eEntryInfo_des,
};
struct tag_nTECSInfo_sCallInfo_VDES * const rDomainEV3_rTECSInfo_tTarget3CelltypeInfo_cCallInfo[] = {
    &rDomainEV3_rTECSInfo_tTarget3_cLCDCallInfo_eCallInfo_des,
    &rDomainEV3_rTECSInfo_tTarget3_cButtonCallInfo_eCallInfo_des,
    &rDomainEV3_rTECSInfo_tTarget3_cKernelCallInfo_eCallInfo_des,
};

struct tag_nTECSInfo_sEntryInfo_VDES * const rDomainEV3_rTECSInfo_tTaskMainCelltypeInfo_cEntryInfo[] = {
    &rDomainEV3_rTECSInfo_tTaskMain_eBodyEntryInfo_eEntryInfo_des,
};
struct tag_nTECSInfo_sCallInfo_VDES * const rDomainEV3_rTECSInfo_tTaskMainCelltypeInfo_cCallInfo[] = {
    &rDomainEV3_rTECSInfo_tTaskMain_cKernelCallInfo_eCallInfo_des,
    &rDomainEV3_rTECSInfo_tTaskMain_cLCDCallInfo_eCallInfo_des,
    &rDomainEV3_rTECSInfo_tTaskMain_cButtonCallInfo_eCallInfo_des,
    &rDomainEV3_rTECSInfo_tTaskMain_cTECSInfoCallInfo_eCallInfo_des,
    &rDomainEV3_rTECSInfo_tTaskMain_cNSInfoCallInfo_eCallInfo_des,
    &rDomainEV3_rTECSInfo_tTaskMain_cRegionInfoCallInfo_eCallInfo_des,
    &rDomainEV3_rTECSInfo_tTaskMain_cCellInfoCallInfo_eCallInfo_des,
    &rDomainEV3_rTECSInfo_tTaskMain_cSignatureInfoCallInfo_eCallInfo_des,
    &rDomainEV3_rTECSInfo_tTaskMain_cCelltypeInfoCallInfo_eCallInfo_des,
    &rDomainEV3_rTECSInfo_tTaskMain_cVarDeclInfoCallInfo_eCallInfo_des,
    &rDomainEV3_rTECSInfo_tTaskMain_cTypeInfoCallInfo_eCallInfo_des,
    &rDomainEV3_rTECSInfo_tTaskMain_cTarget1CallInfo_eCallInfo_des,
    &rDomainEV3_rTECSInfo_tTaskMain_cREDInfoCallInfo_eCallInfo_des,
    &rDomainEV3_rTECSInfo_tTaskMain_cEntryInfoCallInfo_eCallInfo_des,
};
struct tag_nTECSInfo_sVarDeclInfo_VDES * const rDomainEV3_rTECSInfo_tTaskMainCelltypeInfo_cAttrInfo[] = {
    &rDomainEV3_rTECSInfo_tTaskMain_NAME_LENVarDeclInfo_eVarDeclInfo_des,
};
struct tag_nTECSInfo_sVarDeclInfo_VDES * const rDomainEV3_rTECSInfo_tTaskMainCelltypeInfo_cVarInfo[] = {
    &rDomainEV3_rTECSInfo_tTaskMain_target_pathVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_tTaskMain_rawDescVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sEntryInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tTECSInitializerCelltypeInfo_cEntryInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tTECSInitializer_eInitializeEntryInfo_eEntryInfo_des,
};
struct tag_nTECSInfo_sCallInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tTECSInitializerCelltypeInfo_cCallInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tTECSInitializer_cInitializeCallInfo_eCallInfo_des,
};
struct tag_nTECSInfo_sVarDeclInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tTECSInitializerCelltypeInfo_cVarInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tTECSInitializer_TECSVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sEntryInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tCharPointerCelltypeInfo_cEntryInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tCharPointer_eInitializeEntryInfo_eEntryInfo_des,
};

struct tag_nTECSInfo_sEntryInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tInt8PointerCelltypeInfo_cEntryInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tInt8Pointer_eInitializeEntryInfo_eEntryInfo_des,
};

struct tag_nTECSInfo_sEntryInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tInt32PointerCelltypeInfo_cEntryInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tInt32Pointer_eInitializeEntryInfo_eEntryInfo_des,
};

struct tag_nTECSInfo_sEntryInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tUInt16PointerCelltypeInfo_cEntryInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tUInt16Pointer_eInitializeEntryInfo_eEntryInfo_des,
};

struct tag_nTECSInfo_sEntryInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tIntPointerCelltypeInfo_cEntryInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tIntPointer_eInitializeEntryInfo_eEntryInfo_des,
};

struct tag_nTECSInfo_sEntryInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tULongPointerCelltypeInfo_cEntryInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tULongPointer_eInitializeEntryInfo_eEntryInfo_des,
};

struct tag_nTECSInfo_sCallInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tsKernelCelltypeInfo_cCallInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tsKernel_cTECSCallInfo_eCallInfo_des,
};
struct tag_nTECSInfo_sVarDeclInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tsKernelCelltypeInfo_cAttrInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tsKernel_VMnameVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_nMruby_tsKernel_bridgeNameVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sEntryInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tsKernel_InitializerCelltypeInfo_cEntryInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tsKernel_Initializer_eInitializeEntryInfo_eEntryInfo_des,
};

struct tag_nTECSInfo_sCallInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tsMotorCelltypeInfo_cCallInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tsMotor_cTECSCallInfo_eCallInfo_des,
};
struct tag_nTECSInfo_sVarDeclInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tsMotorCelltypeInfo_cAttrInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tsMotor_VMnameVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_nMruby_tsMotor_bridgeNameVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sEntryInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tsMotor_InitializerCelltypeInfo_cEntryInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tsMotor_Initializer_eInitializeEntryInfo_eEntryInfo_des,
};

struct tag_nTECSInfo_sCallInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tsLCDCelltypeInfo_cCallInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tsLCD_cTECSCallInfo_eCallInfo_des,
};
struct tag_nTECSInfo_sVarDeclInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tsLCDCelltypeInfo_cAttrInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tsLCD_VMnameVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_nMruby_tsLCD_bridgeNameVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sEntryInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tsLCD_InitializerCelltypeInfo_cEntryInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tsLCD_Initializer_eInitializeEntryInfo_eEntryInfo_des,
};

struct tag_nTECSInfo_sCallInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tsLEDCelltypeInfo_cCallInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tsLED_cTECSCallInfo_eCallInfo_des,
};
struct tag_nTECSInfo_sVarDeclInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tsLEDCelltypeInfo_cAttrInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tsLED_VMnameVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_nMruby_tsLED_bridgeNameVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sEntryInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tsLED_InitializerCelltypeInfo_cEntryInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tsLED_Initializer_eInitializeEntryInfo_eEntryInfo_des,
};

struct tag_nTECSInfo_sCallInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tsButtonCelltypeInfo_cCallInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tsButton_cTECSCallInfo_eCallInfo_des,
};
struct tag_nTECSInfo_sVarDeclInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tsButtonCelltypeInfo_cAttrInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tsButton_VMnameVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_nMruby_tsButton_bridgeNameVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sEntryInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tsButton_InitializerCelltypeInfo_cEntryInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tsButton_Initializer_eInitializeEntryInfo_eEntryInfo_des,
};

struct tag_nTECSInfo_sCallInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tsBatteryCelltypeInfo_cCallInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tsBattery_cTECSCallInfo_eCallInfo_des,
};
struct tag_nTECSInfo_sVarDeclInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tsBatteryCelltypeInfo_cAttrInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tsBattery_VMnameVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_nMruby_tsBattery_bridgeNameVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sEntryInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tsBattery_InitializerCelltypeInfo_cEntryInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tsBattery_Initializer_eInitializeEntryInfo_eEntryInfo_des,
};

struct tag_nTECSInfo_sCallInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tsSpeakerCelltypeInfo_cCallInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tsSpeaker_cTECSCallInfo_eCallInfo_des,
};
struct tag_nTECSInfo_sVarDeclInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tsSpeakerCelltypeInfo_cAttrInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tsSpeaker_VMnameVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_nMruby_tsSpeaker_bridgeNameVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sEntryInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tsSpeaker_InitializerCelltypeInfo_cEntryInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tsSpeaker_Initializer_eInitializeEntryInfo_eEntryInfo_des,
};

struct tag_nTECSInfo_sCallInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tsUltrasonicSensorCelltypeInfo_cCallInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tsUltrasonicSensor_cTECSCallInfo_eCallInfo_des,
};
struct tag_nTECSInfo_sVarDeclInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tsUltrasonicSensorCelltypeInfo_cAttrInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tsUltrasonicSensor_VMnameVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_nMruby_tsUltrasonicSensor_bridgeNameVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sEntryInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tsUltrasonicSensor_InitializerCelltypeInfo_cEntryInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tsUltrasonicSensor_Initializer_eInitializeEntryInfo_eEntryInfo_des,
};

struct tag_nTECSInfo_sCallInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tsGyroSensorCelltypeInfo_cCallInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tsGyroSensor_cTECSCallInfo_eCallInfo_des,
};
struct tag_nTECSInfo_sVarDeclInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tsGyroSensorCelltypeInfo_cAttrInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tsGyroSensor_VMnameVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_nMruby_tsGyroSensor_bridgeNameVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sEntryInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tsGyroSensor_InitializerCelltypeInfo_cEntryInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tsGyroSensor_Initializer_eInitializeEntryInfo_eEntryInfo_des,
};

struct tag_nTECSInfo_sCallInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tsColorSensorCelltypeInfo_cCallInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tsColorSensor_cTECSCallInfo_eCallInfo_des,
};
struct tag_nTECSInfo_sVarDeclInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tsColorSensorCelltypeInfo_cAttrInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tsColorSensor_VMnameVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_nMruby_tsColorSensor_bridgeNameVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sEntryInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tsColorSensor_InitializerCelltypeInfo_cEntryInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tsColorSensor_Initializer_eInitializeEntryInfo_eEntryInfo_des,
};

struct tag_nTECSInfo_sCallInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tsTouchSensorCelltypeInfo_cCallInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tsTouchSensor_cTECSCallInfo_eCallInfo_des,
};
struct tag_nTECSInfo_sVarDeclInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tsTouchSensorCelltypeInfo_cAttrInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tsTouchSensor_VMnameVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_nMruby_tsTouchSensor_bridgeNameVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sEntryInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tsTouchSensor_InitializerCelltypeInfo_cEntryInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tsTouchSensor_Initializer_eInitializeEntryInfo_eEntryInfo_des,
};

struct tag_nTECSInfo_sCallInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tsBalancerCelltypeInfo_cCallInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tsBalancer_cTECSCallInfo_eCallInfo_des,
};
struct tag_nTECSInfo_sVarDeclInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tsBalancerCelltypeInfo_cAttrInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tsBalancer_VMnameVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_nMruby_tsBalancer_bridgeNameVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sEntryInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tsBalancer_InitializerCelltypeInfo_cEntryInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tsBalancer_Initializer_eInitializeEntryInfo_eEntryInfo_des,
};

struct tag_nTECSInfo_sCallInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tsSharedMemoryCelltypeInfo_cCallInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tsSharedMemory_cTECSCallInfo_eCallInfo_des,
};
struct tag_nTECSInfo_sVarDeclInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tsSharedMemoryCelltypeInfo_cAttrInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tsSharedMemory_VMnameVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_nMruby_tsSharedMemory_bridgeNameVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sEntryInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tsSharedMemory_InitializerCelltypeInfo_cEntryInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tsSharedMemory_Initializer_eInitializeEntryInfo_eEntryInfo_des,
};

struct tag_nTECSInfo_sEntryInfo_VDES * const rDomainEV3_rTECSInfo_nTECSInfo_tTECSInfoCelltypeInfo_cEntryInfo[] = {
    &rDomainEV3_rTECSInfo_nTECSInfo_tTECSInfo_eTECSInfoEntryInfo_eEntryInfo_des,
};
struct tag_nTECSInfo_sCallInfo_VDES * const rDomainEV3_rTECSInfo_nTECSInfo_tTECSInfoCelltypeInfo_cCallInfo[] = {
    &rDomainEV3_rTECSInfo_nTECSInfo_tTECSInfo_cTECSInfoCallInfo_eCallInfo_des,
};

/* °�����ѿ������� #_AVAI_# */
/* ���� INIB #_INIB_# */
nTECSInfo_tCelltypeInfo_INIB nTECSInfo_tCelltypeInfo_INIB_tab[] = {
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[0]:  tTaskCelltypeInfo id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_tTaskCelltypeInfo_cEntryInfo, /* #_CCP3B_# */
        2,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP4_# */
        rDomainEV3_rTECSInfo_tTaskCelltypeInfo_cCallInfo, /* #_CCP3B_# */
        2,                                       /* length of cCallInfo (n_cCallInfo) #_CCP4_# */
        rDomainEV3_rTECSInfo_tTaskCelltypeInfo_cAttrInfo, /* #_CCP3B_# */
        8,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tTask",                                 /* name */
        false,                                   /* b_singleton */
        tTask__IDX_is_ID_act,                    /* b_IDX_is_ID_act */
        tTask__sizeOfCB,                         /* sizeOfCB */
        tTask__sizeOfINIB,                       /* sizeOfINIB */
        tTask__NCELLINLINKUNIT,                  /* n_cellInLinkUnit */
        2,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[1]:  tKernelCelltypeInfo id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_tKernelCelltypeInfo_cEntryInfo, /* #_CCP3B_# */
        2,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cCallInfo (n_cCallInfo) #_CCP6_# */
        rDomainEV3_rTECSInfo_tKernelCelltypeInfo_cAttrInfo, /* #_CCP3B_# */
        1,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tKernel",                               /* name */
        true,                                    /* b_singleton */
        tKernel__IDX_is_ID_act,                  /* b_IDX_is_ID_act */
        tKernel__sizeOfCB,                       /* sizeOfCB */
        tKernel__sizeOfINIB,                     /* sizeOfINIB */
        tKernel__NCELLINLINKUNIT,                /* n_cellInLinkUnit */
        1,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[2]:  tUltrasonicSensorCelltypeInfo id=3 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_tUltrasonicSensorCelltypeInfo_cEntryInfo, /* #_CCP3B_# */
        1,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cCallInfo (n_cCallInfo) #_CCP6_# */
        rDomainEV3_rTECSInfo_tUltrasonicSensorCelltypeInfo_cAttrInfo, /* #_CCP3B_# */
        1,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tUltrasonicSensor",                     /* name */
        false,                                   /* b_singleton */
        tUltrasonicSensor__IDX_is_ID_act,        /* b_IDX_is_ID_act */
        tUltrasonicSensor__sizeOfCB,             /* sizeOfCB */
        tUltrasonicSensor__sizeOfINIB,           /* sizeOfINIB */
        tUltrasonicSensor__NCELLINLINKUNIT,      /* n_cellInLinkUnit */
        4,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[3]:  tColorSensorCelltypeInfo id=4 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_tColorSensorCelltypeInfo_cEntryInfo, /* #_CCP3B_# */
        1,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cCallInfo (n_cCallInfo) #_CCP6_# */
        rDomainEV3_rTECSInfo_tColorSensorCelltypeInfo_cAttrInfo, /* #_CCP3B_# */
        1,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tColorSensor",                          /* name */
        false,                                   /* b_singleton */
        tColorSensor__IDX_is_ID_act,             /* b_IDX_is_ID_act */
        tColorSensor__sizeOfCB,                  /* sizeOfCB */
        tColorSensor__sizeOfINIB,                /* sizeOfINIB */
        tColorSensor__NCELLINLINKUNIT,           /* n_cellInLinkUnit */
        4,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[4]:  tTouchSensorCelltypeInfo id=5 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_tTouchSensorCelltypeInfo_cEntryInfo, /* #_CCP3B_# */
        1,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cCallInfo (n_cCallInfo) #_CCP6_# */
        rDomainEV3_rTECSInfo_tTouchSensorCelltypeInfo_cAttrInfo, /* #_CCP3B_# */
        1,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tTouchSensor",                          /* name */
        false,                                   /* b_singleton */
        tTouchSensor__IDX_is_ID_act,             /* b_IDX_is_ID_act */
        tTouchSensor__sizeOfCB,                  /* sizeOfCB */
        tTouchSensor__sizeOfINIB,                /* sizeOfINIB */
        tTouchSensor__NCELLINLINKUNIT,           /* n_cellInLinkUnit */
        4,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[5]:  tGyroSensorCelltypeInfo id=6 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_tGyroSensorCelltypeInfo_cEntryInfo, /* #_CCP3B_# */
        1,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cCallInfo (n_cCallInfo) #_CCP6_# */
        rDomainEV3_rTECSInfo_tGyroSensorCelltypeInfo_cAttrInfo, /* #_CCP3B_# */
        1,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tGyroSensor",                           /* name */
        false,                                   /* b_singleton */
        tGyroSensor__IDX_is_ID_act,              /* b_IDX_is_ID_act */
        tGyroSensor__sizeOfCB,                   /* sizeOfCB */
        tGyroSensor__sizeOfINIB,                 /* sizeOfINIB */
        tGyroSensor__NCELLINLINKUNIT,            /* n_cellInLinkUnit */
        4,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[6]:  tMotorCelltypeInfo id=7 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_tMotorCelltypeInfo_cEntryInfo, /* #_CCP3B_# */
        1,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cCallInfo (n_cCallInfo) #_CCP6_# */
        rDomainEV3_rTECSInfo_tMotorCelltypeInfo_cAttrInfo, /* #_CCP3B_# */
        1,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tMotor",                                /* name */
        false,                                   /* b_singleton */
        tMotor__IDX_is_ID_act,                   /* b_IDX_is_ID_act */
        tMotor__sizeOfCB,                        /* sizeOfCB */
        tMotor__sizeOfINIB,                      /* sizeOfINIB */
        tMotor__NCELLINLINKUNIT,                 /* n_cellInLinkUnit */
        4,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[7]:  tButtonCelltypeInfo id=8 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_tButtonCelltypeInfo_cEntryInfo, /* #_CCP3B_# */
        1,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cCallInfo (n_cCallInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tButton",                               /* name */
        false,                                   /* b_singleton */
        tButton__IDX_is_ID_act,                  /* b_IDX_is_ID_act */
        tButton__sizeOfCB,                       /* sizeOfCB */
        tButton__sizeOfINIB,                     /* sizeOfINIB */
        tButton__NCELLINLINKUNIT,                /* n_cellInLinkUnit */
        1,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[8]:  tLCDCelltypeInfo id=9 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_tLCDCelltypeInfo_cEntryInfo, /* #_CCP3B_# */
        1,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP4_# */
        rDomainEV3_rTECSInfo_tLCDCelltypeInfo_cCallInfo, /* #_CCP3B_# */
        1,                                       /* length of cCallInfo (n_cCallInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP6_# */
        rDomainEV3_rTECSInfo_tLCDCelltypeInfo_cVarInfo, /* #_CCP3B_# */
        1,                                       /* length of cVarInfo (n_cVarInfo) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tLCD",                                  /* name */
        false,                                   /* b_singleton */
        tLCD__IDX_is_ID_act,                     /* b_IDX_is_ID_act */
        tLCD__sizeOfCB,                          /* sizeOfCB */
        tLCD__sizeOfINIB,                        /* sizeOfINIB */
        tLCD__NCELLINLINKUNIT,                   /* n_cellInLinkUnit */
        1,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[9]:  tLEDCelltypeInfo id=10 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_tLEDCelltypeInfo_cEntryInfo, /* #_CCP3B_# */
        1,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cCallInfo (n_cCallInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tLED",                                  /* name */
        false,                                   /* b_singleton */
        tLED__IDX_is_ID_act,                     /* b_IDX_is_ID_act */
        tLED__sizeOfCB,                          /* sizeOfCB */
        tLED__sizeOfINIB,                        /* sizeOfINIB */
        tLED__NCELLINLINKUNIT,                   /* n_cellInLinkUnit */
        1,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[10]:  tBatteryCelltypeInfo id=11 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_tBatteryCelltypeInfo_cEntryInfo, /* #_CCP3B_# */
        1,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cCallInfo (n_cCallInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tBattery",                              /* name */
        false,                                   /* b_singleton */
        tBattery__IDX_is_ID_act,                 /* b_IDX_is_ID_act */
        tBattery__sizeOfCB,                      /* sizeOfCB */
        tBattery__sizeOfINIB,                    /* sizeOfINIB */
        tBattery__NCELLINLINKUNIT,               /* n_cellInLinkUnit */
        1,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[11]:  tSpeakerCelltypeInfo id=12 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_tSpeakerCelltypeInfo_cEntryInfo, /* #_CCP3B_# */
        1,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cCallInfo (n_cCallInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tSpeaker",                              /* name */
        true,                                    /* b_singleton */
        tSpeaker__IDX_is_ID_act,                 /* b_IDX_is_ID_act */
        tSpeaker__sizeOfCB,                      /* sizeOfCB */
        tSpeaker__sizeOfINIB,                    /* sizeOfINIB */
        tSpeaker__NCELLINLINKUNIT,               /* n_cellInLinkUnit */
        1,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[12]:  tEV3PlatformCelltypeInfo id=13 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_tEV3PlatformCelltypeInfo_cEntryInfo, /* #_CCP3B_# */
        1,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP4_# */
        rDomainEV3_rTECSInfo_tEV3PlatformCelltypeInfo_cCallInfo, /* #_CCP3B_# */
        2,                                       /* length of cCallInfo (n_cCallInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tEV3Platform",                          /* name */
        false,                                   /* b_singleton */
        tEV3Platform__IDX_is_ID_act,             /* b_IDX_is_ID_act */
        tEV3Platform__sizeOfCB,                  /* sizeOfCB */
        tEV3Platform__sizeOfINIB,                /* sizeOfINIB */
        tEV3Platform__NCELLINLINKUNIT,           /* n_cellInLinkUnit */
        1,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[13]:  tBalancerCelltypeInfo id=14 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_tBalancerCelltypeInfo_cEntryInfo, /* #_CCP3B_# */
        1,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cCallInfo (n_cCallInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tBalancer",                             /* name */
        true,                                    /* b_singleton */
        tBalancer__IDX_is_ID_act,                /* b_IDX_is_ID_act */
        tBalancer__sizeOfCB,                     /* sizeOfCB */
        tBalancer__sizeOfINIB,                   /* sizeOfINIB */
        tBalancer__NCELLINLINKUNIT,              /* n_cellInLinkUnit */
        1,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[14]:  tSharedMemoryCelltypeInfo id=15 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_tSharedMemoryCelltypeInfo_cEntryInfo, /* #_CCP3B_# */
        1,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cCallInfo (n_cCallInfo) #_CCP6_# */
        rDomainEV3_rTECSInfo_tSharedMemoryCelltypeInfo_cAttrInfo, /* #_CCP3B_# */
        1,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP4_# */
        rDomainEV3_rTECSInfo_tSharedMemoryCelltypeInfo_cVarInfo, /* #_CCP3B_# */
        1,                                       /* length of cVarInfo (n_cVarInfo) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tSharedMemory",                         /* name */
        false,                                   /* b_singleton */
        tSharedMemory__IDX_is_ID_act,            /* b_IDX_is_ID_act */
        tSharedMemory__sizeOfCB,                 /* sizeOfCB */
        tSharedMemory__sizeOfINIB,               /* sizeOfINIB */
        tSharedMemory__NCELLINLINKUNIT,          /* n_cellInLinkUnit */
        1,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[15]:  tTarget1CelltypeInfo id=16 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_tTarget1CelltypeInfo_cEntryInfo, /* #_CCP3B_# */
        1,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP4_# */
        rDomainEV3_rTECSInfo_tTarget1CelltypeInfo_cCallInfo, /* #_CCP3B_# */
        3,                                       /* length of cCallInfo (n_cCallInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tTarget1",                              /* name */
        false,                                   /* b_singleton */
        tTarget1__IDX_is_ID_act,                 /* b_IDX_is_ID_act */
        tTarget1__sizeOfCB,                      /* sizeOfCB */
        tTarget1__sizeOfINIB,                    /* sizeOfINIB */
        tTarget1__NCELLINLINKUNIT,               /* n_cellInLinkUnit */
        1,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[16]:  tTarget2CelltypeInfo id=17 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_tTarget2CelltypeInfo_cEntryInfo, /* #_CCP3B_# */
        1,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP4_# */
        rDomainEV3_rTECSInfo_tTarget2CelltypeInfo_cCallInfo, /* #_CCP3B_# */
        3,                                       /* length of cCallInfo (n_cCallInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tTarget2",                              /* name */
        false,                                   /* b_singleton */
        tTarget2__IDX_is_ID_act,                 /* b_IDX_is_ID_act */
        tTarget2__sizeOfCB,                      /* sizeOfCB */
        tTarget2__sizeOfINIB,                    /* sizeOfINIB */
        tTarget2__NCELLINLINKUNIT,               /* n_cellInLinkUnit */
        1,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[17]:  tTarget3CelltypeInfo id=18 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_tTarget3CelltypeInfo_cEntryInfo, /* #_CCP3B_# */
        1,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP4_# */
        rDomainEV3_rTECSInfo_tTarget3CelltypeInfo_cCallInfo, /* #_CCP3B_# */
        3,                                       /* length of cCallInfo (n_cCallInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tTarget3",                              /* name */
        false,                                   /* b_singleton */
        tTarget3__IDX_is_ID_act,                 /* b_IDX_is_ID_act */
        tTarget3__sizeOfCB,                      /* sizeOfCB */
        tTarget3__sizeOfINIB,                    /* sizeOfINIB */
        tTarget3__NCELLINLINKUNIT,               /* n_cellInLinkUnit */
        1,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[18]:  tTaskMainCelltypeInfo id=19 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_tTaskMainCelltypeInfo_cEntryInfo, /* #_CCP3B_# */
        1,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP4_# */
        rDomainEV3_rTECSInfo_tTaskMainCelltypeInfo_cCallInfo, /* #_CCP3B_# */
        14,                                      /* length of cCallInfo (n_cCallInfo) #_CCP4_# */
        rDomainEV3_rTECSInfo_tTaskMainCelltypeInfo_cAttrInfo, /* #_CCP3B_# */
        1,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP4_# */
        rDomainEV3_rTECSInfo_tTaskMainCelltypeInfo_cVarInfo, /* #_CCP3B_# */
        2,                                       /* length of cVarInfo (n_cVarInfo) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tTaskMain",                             /* name */
        false,                                   /* b_singleton */
        tTaskMain__IDX_is_ID_act,                /* b_IDX_is_ID_act */
        tTaskMain__sizeOfCB,                     /* sizeOfCB */
        tTaskMain__sizeOfINIB,                   /* sizeOfINIB */
        tTaskMain__NCELLINLINKUNIT,              /* n_cellInLinkUnit */
        1,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[19]:  nMruby_tTECSInitializerCelltypeInfo id=20 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_nMruby_tTECSInitializerCelltypeInfo_cEntryInfo, /* #_CCP3B_# */
        1,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP4_# */
        rDomainEV3_rTECSInfo_nMruby_tTECSInitializerCelltypeInfo_cCallInfo, /* #_CCP3B_# */
        1,                                       /* length of cCallInfo (n_cCallInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP6_# */
        rDomainEV3_rTECSInfo_nMruby_tTECSInitializerCelltypeInfo_cVarInfo, /* #_CCP3B_# */
        1,                                       /* length of cVarInfo (n_cVarInfo) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tTECSInitializer",                      /* name */
        false,                                   /* b_singleton */
        nMruby_tTECSInitializer__IDX_is_ID_act,  /* b_IDX_is_ID_act */
        nMruby_tTECSInitializer__sizeOfCB,       /* sizeOfCB */
        nMruby_tTECSInitializer__sizeOfINIB,     /* sizeOfINIB */
        nMruby_tTECSInitializer__NCELLINLINKUNIT, /* n_cellInLinkUnit */
        1,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[20]:  nMruby_tCharPointerCelltypeInfo id=21 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_nMruby_tCharPointerCelltypeInfo_cEntryInfo, /* #_CCP3B_# */
        1,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cCallInfo (n_cCallInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tCharPointer",                          /* name */
        true,                                    /* b_singleton */
        nMruby_tCharPointer__IDX_is_ID_act,      /* b_IDX_is_ID_act */
        nMruby_tCharPointer__sizeOfCB,           /* sizeOfCB */
        nMruby_tCharPointer__sizeOfINIB,         /* sizeOfINIB */
        nMruby_tCharPointer__NCELLINLINKUNIT,    /* n_cellInLinkUnit */
        1,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[21]:  nMruby_tInt8PointerCelltypeInfo id=22 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_nMruby_tInt8PointerCelltypeInfo_cEntryInfo, /* #_CCP3B_# */
        1,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cCallInfo (n_cCallInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tInt8Pointer",                          /* name */
        true,                                    /* b_singleton */
        nMruby_tInt8Pointer__IDX_is_ID_act,      /* b_IDX_is_ID_act */
        nMruby_tInt8Pointer__sizeOfCB,           /* sizeOfCB */
        nMruby_tInt8Pointer__sizeOfINIB,         /* sizeOfINIB */
        nMruby_tInt8Pointer__NCELLINLINKUNIT,    /* n_cellInLinkUnit */
        1,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[22]:  nMruby_tInt32PointerCelltypeInfo id=23 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_nMruby_tInt32PointerCelltypeInfo_cEntryInfo, /* #_CCP3B_# */
        1,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cCallInfo (n_cCallInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tInt32Pointer",                         /* name */
        true,                                    /* b_singleton */
        nMruby_tInt32Pointer__IDX_is_ID_act,     /* b_IDX_is_ID_act */
        nMruby_tInt32Pointer__sizeOfCB,          /* sizeOfCB */
        nMruby_tInt32Pointer__sizeOfINIB,        /* sizeOfINIB */
        nMruby_tInt32Pointer__NCELLINLINKUNIT,   /* n_cellInLinkUnit */
        1,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[23]:  nMruby_tUInt16PointerCelltypeInfo id=24 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_nMruby_tUInt16PointerCelltypeInfo_cEntryInfo, /* #_CCP3B_# */
        1,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cCallInfo (n_cCallInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tUInt16Pointer",                        /* name */
        true,                                    /* b_singleton */
        nMruby_tUInt16Pointer__IDX_is_ID_act,    /* b_IDX_is_ID_act */
        nMruby_tUInt16Pointer__sizeOfCB,         /* sizeOfCB */
        nMruby_tUInt16Pointer__sizeOfINIB,       /* sizeOfINIB */
        nMruby_tUInt16Pointer__NCELLINLINKUNIT,  /* n_cellInLinkUnit */
        1,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[24]:  nMruby_tIntPointerCelltypeInfo id=25 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_nMruby_tIntPointerCelltypeInfo_cEntryInfo, /* #_CCP3B_# */
        1,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cCallInfo (n_cCallInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tIntPointer",                           /* name */
        true,                                    /* b_singleton */
        nMruby_tIntPointer__IDX_is_ID_act,       /* b_IDX_is_ID_act */
        nMruby_tIntPointer__sizeOfCB,            /* sizeOfCB */
        nMruby_tIntPointer__sizeOfINIB,          /* sizeOfINIB */
        nMruby_tIntPointer__NCELLINLINKUNIT,     /* n_cellInLinkUnit */
        1,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[25]:  nMruby_tULongPointerCelltypeInfo id=26 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_nMruby_tULongPointerCelltypeInfo_cEntryInfo, /* #_CCP3B_# */
        1,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cCallInfo (n_cCallInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tULongPointer",                         /* name */
        true,                                    /* b_singleton */
        nMruby_tULongPointer__IDX_is_ID_act,     /* b_IDX_is_ID_act */
        nMruby_tULongPointer__sizeOfCB,          /* sizeOfCB */
        nMruby_tULongPointer__sizeOfINIB,        /* sizeOfINIB */
        nMruby_tULongPointer__NCELLINLINKUNIT,   /* n_cellInLinkUnit */
        1,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[26]:  nMruby_tsKernelCelltypeInfo id=27 */
    {
        /* call port (INIB) #_CP_# */ 
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP6_# */
        rDomainEV3_rTECSInfo_nMruby_tsKernelCelltypeInfo_cCallInfo, /* #_CCP3B_# */
        1,                                       /* length of cCallInfo (n_cCallInfo) #_CCP4_# */
        rDomainEV3_rTECSInfo_nMruby_tsKernelCelltypeInfo_cAttrInfo, /* #_CCP3B_# */
        2,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tsKernel",                              /* name */
        false,                                   /* b_singleton */
        nMruby_tsKernel__IDX_is_ID_act,          /* b_IDX_is_ID_act */
        nMruby_tsKernel__sizeOfCB,               /* sizeOfCB */
        nMruby_tsKernel__sizeOfINIB,             /* sizeOfINIB */
        nMruby_tsKernel__NCELLINLINKUNIT,        /* n_cellInLinkUnit */
        1,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[27]:  nMruby_tsKernel_InitializerCelltypeInfo id=28 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_nMruby_tsKernel_InitializerCelltypeInfo_cEntryInfo, /* #_CCP3B_# */
        1,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cCallInfo (n_cCallInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tsKernel_Initializer",                  /* name */
        false,                                   /* b_singleton */
        nMruby_tsKernel_Initializer__IDX_is_ID_act, /* b_IDX_is_ID_act */
        nMruby_tsKernel_Initializer__sizeOfCB,   /* sizeOfCB */
        nMruby_tsKernel_Initializer__sizeOfINIB, /* sizeOfINIB */
        nMruby_tsKernel_Initializer__NCELLINLINKUNIT, /* n_cellInLinkUnit */
        1,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[28]:  nMruby_tsMotorCelltypeInfo id=29 */
    {
        /* call port (INIB) #_CP_# */ 
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP6_# */
        rDomainEV3_rTECSInfo_nMruby_tsMotorCelltypeInfo_cCallInfo, /* #_CCP3B_# */
        1,                                       /* length of cCallInfo (n_cCallInfo) #_CCP4_# */
        rDomainEV3_rTECSInfo_nMruby_tsMotorCelltypeInfo_cAttrInfo, /* #_CCP3B_# */
        2,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tsMotor",                               /* name */
        false,                                   /* b_singleton */
        nMruby_tsMotor__IDX_is_ID_act,           /* b_IDX_is_ID_act */
        nMruby_tsMotor__sizeOfCB,                /* sizeOfCB */
        nMruby_tsMotor__sizeOfINIB,              /* sizeOfINIB */
        nMruby_tsMotor__NCELLINLINKUNIT,         /* n_cellInLinkUnit */
        4,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[29]:  nMruby_tsMotor_InitializerCelltypeInfo id=30 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_nMruby_tsMotor_InitializerCelltypeInfo_cEntryInfo, /* #_CCP3B_# */
        1,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cCallInfo (n_cCallInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tsMotor_Initializer",                   /* name */
        false,                                   /* b_singleton */
        nMruby_tsMotor_Initializer__IDX_is_ID_act, /* b_IDX_is_ID_act */
        nMruby_tsMotor_Initializer__sizeOfCB,    /* sizeOfCB */
        nMruby_tsMotor_Initializer__sizeOfINIB,  /* sizeOfINIB */
        nMruby_tsMotor_Initializer__NCELLINLINKUNIT, /* n_cellInLinkUnit */
        1,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[30]:  nMruby_tsLCDCelltypeInfo id=31 */
    {
        /* call port (INIB) #_CP_# */ 
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP6_# */
        rDomainEV3_rTECSInfo_nMruby_tsLCDCelltypeInfo_cCallInfo, /* #_CCP3B_# */
        1,                                       /* length of cCallInfo (n_cCallInfo) #_CCP4_# */
        rDomainEV3_rTECSInfo_nMruby_tsLCDCelltypeInfo_cAttrInfo, /* #_CCP3B_# */
        2,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tsLCD",                                 /* name */
        false,                                   /* b_singleton */
        nMruby_tsLCD__IDX_is_ID_act,             /* b_IDX_is_ID_act */
        nMruby_tsLCD__sizeOfCB,                  /* sizeOfCB */
        nMruby_tsLCD__sizeOfINIB,                /* sizeOfINIB */
        nMruby_tsLCD__NCELLINLINKUNIT,           /* n_cellInLinkUnit */
        1,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[31]:  nMruby_tsLCD_InitializerCelltypeInfo id=32 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_nMruby_tsLCD_InitializerCelltypeInfo_cEntryInfo, /* #_CCP3B_# */
        1,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cCallInfo (n_cCallInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tsLCD_Initializer",                     /* name */
        false,                                   /* b_singleton */
        nMruby_tsLCD_Initializer__IDX_is_ID_act, /* b_IDX_is_ID_act */
        nMruby_tsLCD_Initializer__sizeOfCB,      /* sizeOfCB */
        nMruby_tsLCD_Initializer__sizeOfINIB,    /* sizeOfINIB */
        nMruby_tsLCD_Initializer__NCELLINLINKUNIT, /* n_cellInLinkUnit */
        1,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[32]:  nMruby_tsLEDCelltypeInfo id=33 */
    {
        /* call port (INIB) #_CP_# */ 
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP6_# */
        rDomainEV3_rTECSInfo_nMruby_tsLEDCelltypeInfo_cCallInfo, /* #_CCP3B_# */
        1,                                       /* length of cCallInfo (n_cCallInfo) #_CCP4_# */
        rDomainEV3_rTECSInfo_nMruby_tsLEDCelltypeInfo_cAttrInfo, /* #_CCP3B_# */
        2,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tsLED",                                 /* name */
        false,                                   /* b_singleton */
        nMruby_tsLED__IDX_is_ID_act,             /* b_IDX_is_ID_act */
        nMruby_tsLED__sizeOfCB,                  /* sizeOfCB */
        nMruby_tsLED__sizeOfINIB,                /* sizeOfINIB */
        nMruby_tsLED__NCELLINLINKUNIT,           /* n_cellInLinkUnit */
        1,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[33]:  nMruby_tsLED_InitializerCelltypeInfo id=34 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_nMruby_tsLED_InitializerCelltypeInfo_cEntryInfo, /* #_CCP3B_# */
        1,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cCallInfo (n_cCallInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tsLED_Initializer",                     /* name */
        false,                                   /* b_singleton */
        nMruby_tsLED_Initializer__IDX_is_ID_act, /* b_IDX_is_ID_act */
        nMruby_tsLED_Initializer__sizeOfCB,      /* sizeOfCB */
        nMruby_tsLED_Initializer__sizeOfINIB,    /* sizeOfINIB */
        nMruby_tsLED_Initializer__NCELLINLINKUNIT, /* n_cellInLinkUnit */
        1,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[34]:  nMruby_tsButtonCelltypeInfo id=35 */
    {
        /* call port (INIB) #_CP_# */ 
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP6_# */
        rDomainEV3_rTECSInfo_nMruby_tsButtonCelltypeInfo_cCallInfo, /* #_CCP3B_# */
        1,                                       /* length of cCallInfo (n_cCallInfo) #_CCP4_# */
        rDomainEV3_rTECSInfo_nMruby_tsButtonCelltypeInfo_cAttrInfo, /* #_CCP3B_# */
        2,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tsButton",                              /* name */
        false,                                   /* b_singleton */
        nMruby_tsButton__IDX_is_ID_act,          /* b_IDX_is_ID_act */
        nMruby_tsButton__sizeOfCB,               /* sizeOfCB */
        nMruby_tsButton__sizeOfINIB,             /* sizeOfINIB */
        nMruby_tsButton__NCELLINLINKUNIT,        /* n_cellInLinkUnit */
        1,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[35]:  nMruby_tsButton_InitializerCelltypeInfo id=36 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_nMruby_tsButton_InitializerCelltypeInfo_cEntryInfo, /* #_CCP3B_# */
        1,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cCallInfo (n_cCallInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tsButton_Initializer",                  /* name */
        false,                                   /* b_singleton */
        nMruby_tsButton_Initializer__IDX_is_ID_act, /* b_IDX_is_ID_act */
        nMruby_tsButton_Initializer__sizeOfCB,   /* sizeOfCB */
        nMruby_tsButton_Initializer__sizeOfINIB, /* sizeOfINIB */
        nMruby_tsButton_Initializer__NCELLINLINKUNIT, /* n_cellInLinkUnit */
        1,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[36]:  nMruby_tsBatteryCelltypeInfo id=37 */
    {
        /* call port (INIB) #_CP_# */ 
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP6_# */
        rDomainEV3_rTECSInfo_nMruby_tsBatteryCelltypeInfo_cCallInfo, /* #_CCP3B_# */
        1,                                       /* length of cCallInfo (n_cCallInfo) #_CCP4_# */
        rDomainEV3_rTECSInfo_nMruby_tsBatteryCelltypeInfo_cAttrInfo, /* #_CCP3B_# */
        2,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tsBattery",                             /* name */
        false,                                   /* b_singleton */
        nMruby_tsBattery__IDX_is_ID_act,         /* b_IDX_is_ID_act */
        nMruby_tsBattery__sizeOfCB,              /* sizeOfCB */
        nMruby_tsBattery__sizeOfINIB,            /* sizeOfINIB */
        nMruby_tsBattery__NCELLINLINKUNIT,       /* n_cellInLinkUnit */
        1,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[37]:  nMruby_tsBattery_InitializerCelltypeInfo id=38 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_nMruby_tsBattery_InitializerCelltypeInfo_cEntryInfo, /* #_CCP3B_# */
        1,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cCallInfo (n_cCallInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tsBattery_Initializer",                 /* name */
        false,                                   /* b_singleton */
        nMruby_tsBattery_Initializer__IDX_is_ID_act, /* b_IDX_is_ID_act */
        nMruby_tsBattery_Initializer__sizeOfCB,  /* sizeOfCB */
        nMruby_tsBattery_Initializer__sizeOfINIB, /* sizeOfINIB */
        nMruby_tsBattery_Initializer__NCELLINLINKUNIT, /* n_cellInLinkUnit */
        1,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[38]:  nMruby_tsSpeakerCelltypeInfo id=39 */
    {
        /* call port (INIB) #_CP_# */ 
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP6_# */
        rDomainEV3_rTECSInfo_nMruby_tsSpeakerCelltypeInfo_cCallInfo, /* #_CCP3B_# */
        1,                                       /* length of cCallInfo (n_cCallInfo) #_CCP4_# */
        rDomainEV3_rTECSInfo_nMruby_tsSpeakerCelltypeInfo_cAttrInfo, /* #_CCP3B_# */
        2,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tsSpeaker",                             /* name */
        false,                                   /* b_singleton */
        nMruby_tsSpeaker__IDX_is_ID_act,         /* b_IDX_is_ID_act */
        nMruby_tsSpeaker__sizeOfCB,              /* sizeOfCB */
        nMruby_tsSpeaker__sizeOfINIB,            /* sizeOfINIB */
        nMruby_tsSpeaker__NCELLINLINKUNIT,       /* n_cellInLinkUnit */
        1,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[39]:  nMruby_tsSpeaker_InitializerCelltypeInfo id=40 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_nMruby_tsSpeaker_InitializerCelltypeInfo_cEntryInfo, /* #_CCP3B_# */
        1,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cCallInfo (n_cCallInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tsSpeaker_Initializer",                 /* name */
        false,                                   /* b_singleton */
        nMruby_tsSpeaker_Initializer__IDX_is_ID_act, /* b_IDX_is_ID_act */
        nMruby_tsSpeaker_Initializer__sizeOfCB,  /* sizeOfCB */
        nMruby_tsSpeaker_Initializer__sizeOfINIB, /* sizeOfINIB */
        nMruby_tsSpeaker_Initializer__NCELLINLINKUNIT, /* n_cellInLinkUnit */
        1,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[40]:  nMruby_tsUltrasonicSensorCelltypeInfo id=41 */
    {
        /* call port (INIB) #_CP_# */ 
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP6_# */
        rDomainEV3_rTECSInfo_nMruby_tsUltrasonicSensorCelltypeInfo_cCallInfo, /* #_CCP3B_# */
        1,                                       /* length of cCallInfo (n_cCallInfo) #_CCP4_# */
        rDomainEV3_rTECSInfo_nMruby_tsUltrasonicSensorCelltypeInfo_cAttrInfo, /* #_CCP3B_# */
        2,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tsUltrasonicSensor",                    /* name */
        false,                                   /* b_singleton */
        nMruby_tsUltrasonicSensor__IDX_is_ID_act, /* b_IDX_is_ID_act */
        nMruby_tsUltrasonicSensor__sizeOfCB,     /* sizeOfCB */
        nMruby_tsUltrasonicSensor__sizeOfINIB,   /* sizeOfINIB */
        nMruby_tsUltrasonicSensor__NCELLINLINKUNIT, /* n_cellInLinkUnit */
        4,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[41]:  nMruby_tsUltrasonicSensor_InitializerCelltypeInfo id=42 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_nMruby_tsUltrasonicSensor_InitializerCelltypeInfo_cEntryInfo, /* #_CCP3B_# */
        1,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cCallInfo (n_cCallInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tsUltrasonicSensor_Initializer",        /* name */
        false,                                   /* b_singleton */
        nMruby_tsUltrasonicSensor_Initializer__IDX_is_ID_act, /* b_IDX_is_ID_act */
        nMruby_tsUltrasonicSensor_Initializer__sizeOfCB, /* sizeOfCB */
        nMruby_tsUltrasonicSensor_Initializer__sizeOfINIB, /* sizeOfINIB */
        nMruby_tsUltrasonicSensor_Initializer__NCELLINLINKUNIT, /* n_cellInLinkUnit */
        1,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[42]:  nMruby_tsGyroSensorCelltypeInfo id=43 */
    {
        /* call port (INIB) #_CP_# */ 
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP6_# */
        rDomainEV3_rTECSInfo_nMruby_tsGyroSensorCelltypeInfo_cCallInfo, /* #_CCP3B_# */
        1,                                       /* length of cCallInfo (n_cCallInfo) #_CCP4_# */
        rDomainEV3_rTECSInfo_nMruby_tsGyroSensorCelltypeInfo_cAttrInfo, /* #_CCP3B_# */
        2,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tsGyroSensor",                          /* name */
        false,                                   /* b_singleton */
        nMruby_tsGyroSensor__IDX_is_ID_act,      /* b_IDX_is_ID_act */
        nMruby_tsGyroSensor__sizeOfCB,           /* sizeOfCB */
        nMruby_tsGyroSensor__sizeOfINIB,         /* sizeOfINIB */
        nMruby_tsGyroSensor__NCELLINLINKUNIT,    /* n_cellInLinkUnit */
        4,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[43]:  nMruby_tsGyroSensor_InitializerCelltypeInfo id=44 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_nMruby_tsGyroSensor_InitializerCelltypeInfo_cEntryInfo, /* #_CCP3B_# */
        1,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cCallInfo (n_cCallInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tsGyroSensor_Initializer",              /* name */
        false,                                   /* b_singleton */
        nMruby_tsGyroSensor_Initializer__IDX_is_ID_act, /* b_IDX_is_ID_act */
        nMruby_tsGyroSensor_Initializer__sizeOfCB, /* sizeOfCB */
        nMruby_tsGyroSensor_Initializer__sizeOfINIB, /* sizeOfINIB */
        nMruby_tsGyroSensor_Initializer__NCELLINLINKUNIT, /* n_cellInLinkUnit */
        1,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[44]:  nMruby_tsColorSensorCelltypeInfo id=45 */
    {
        /* call port (INIB) #_CP_# */ 
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP6_# */
        rDomainEV3_rTECSInfo_nMruby_tsColorSensorCelltypeInfo_cCallInfo, /* #_CCP3B_# */
        1,                                       /* length of cCallInfo (n_cCallInfo) #_CCP4_# */
        rDomainEV3_rTECSInfo_nMruby_tsColorSensorCelltypeInfo_cAttrInfo, /* #_CCP3B_# */
        2,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tsColorSensor",                         /* name */
        false,                                   /* b_singleton */
        nMruby_tsColorSensor__IDX_is_ID_act,     /* b_IDX_is_ID_act */
        nMruby_tsColorSensor__sizeOfCB,          /* sizeOfCB */
        nMruby_tsColorSensor__sizeOfINIB,        /* sizeOfINIB */
        nMruby_tsColorSensor__NCELLINLINKUNIT,   /* n_cellInLinkUnit */
        4,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[45]:  nMruby_tsColorSensor_InitializerCelltypeInfo id=46 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_nMruby_tsColorSensor_InitializerCelltypeInfo_cEntryInfo, /* #_CCP3B_# */
        1,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cCallInfo (n_cCallInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tsColorSensor_Initializer",             /* name */
        false,                                   /* b_singleton */
        nMruby_tsColorSensor_Initializer__IDX_is_ID_act, /* b_IDX_is_ID_act */
        nMruby_tsColorSensor_Initializer__sizeOfCB, /* sizeOfCB */
        nMruby_tsColorSensor_Initializer__sizeOfINIB, /* sizeOfINIB */
        nMruby_tsColorSensor_Initializer__NCELLINLINKUNIT, /* n_cellInLinkUnit */
        1,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[46]:  nMruby_tsTouchSensorCelltypeInfo id=47 */
    {
        /* call port (INIB) #_CP_# */ 
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP6_# */
        rDomainEV3_rTECSInfo_nMruby_tsTouchSensorCelltypeInfo_cCallInfo, /* #_CCP3B_# */
        1,                                       /* length of cCallInfo (n_cCallInfo) #_CCP4_# */
        rDomainEV3_rTECSInfo_nMruby_tsTouchSensorCelltypeInfo_cAttrInfo, /* #_CCP3B_# */
        2,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tsTouchSensor",                         /* name */
        false,                                   /* b_singleton */
        nMruby_tsTouchSensor__IDX_is_ID_act,     /* b_IDX_is_ID_act */
        nMruby_tsTouchSensor__sizeOfCB,          /* sizeOfCB */
        nMruby_tsTouchSensor__sizeOfINIB,        /* sizeOfINIB */
        nMruby_tsTouchSensor__NCELLINLINKUNIT,   /* n_cellInLinkUnit */
        4,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[47]:  nMruby_tsTouchSensor_InitializerCelltypeInfo id=48 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_nMruby_tsTouchSensor_InitializerCelltypeInfo_cEntryInfo, /* #_CCP3B_# */
        1,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cCallInfo (n_cCallInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tsTouchSensor_Initializer",             /* name */
        false,                                   /* b_singleton */
        nMruby_tsTouchSensor_Initializer__IDX_is_ID_act, /* b_IDX_is_ID_act */
        nMruby_tsTouchSensor_Initializer__sizeOfCB, /* sizeOfCB */
        nMruby_tsTouchSensor_Initializer__sizeOfINIB, /* sizeOfINIB */
        nMruby_tsTouchSensor_Initializer__NCELLINLINKUNIT, /* n_cellInLinkUnit */
        1,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[48]:  nMruby_tsBalancerCelltypeInfo id=49 */
    {
        /* call port (INIB) #_CP_# */ 
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP6_# */
        rDomainEV3_rTECSInfo_nMruby_tsBalancerCelltypeInfo_cCallInfo, /* #_CCP3B_# */
        1,                                       /* length of cCallInfo (n_cCallInfo) #_CCP4_# */
        rDomainEV3_rTECSInfo_nMruby_tsBalancerCelltypeInfo_cAttrInfo, /* #_CCP3B_# */
        2,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tsBalancer",                            /* name */
        false,                                   /* b_singleton */
        nMruby_tsBalancer__IDX_is_ID_act,        /* b_IDX_is_ID_act */
        nMruby_tsBalancer__sizeOfCB,             /* sizeOfCB */
        nMruby_tsBalancer__sizeOfINIB,           /* sizeOfINIB */
        nMruby_tsBalancer__NCELLINLINKUNIT,      /* n_cellInLinkUnit */
        1,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[49]:  nMruby_tsBalancer_InitializerCelltypeInfo id=50 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_nMruby_tsBalancer_InitializerCelltypeInfo_cEntryInfo, /* #_CCP3B_# */
        1,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cCallInfo (n_cCallInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tsBalancer_Initializer",                /* name */
        false,                                   /* b_singleton */
        nMruby_tsBalancer_Initializer__IDX_is_ID_act, /* b_IDX_is_ID_act */
        nMruby_tsBalancer_Initializer__sizeOfCB, /* sizeOfCB */
        nMruby_tsBalancer_Initializer__sizeOfINIB, /* sizeOfINIB */
        nMruby_tsBalancer_Initializer__NCELLINLINKUNIT, /* n_cellInLinkUnit */
        1,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[50]:  nMruby_tsSharedMemoryCelltypeInfo id=51 */
    {
        /* call port (INIB) #_CP_# */ 
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP6_# */
        rDomainEV3_rTECSInfo_nMruby_tsSharedMemoryCelltypeInfo_cCallInfo, /* #_CCP3B_# */
        1,                                       /* length of cCallInfo (n_cCallInfo) #_CCP4_# */
        rDomainEV3_rTECSInfo_nMruby_tsSharedMemoryCelltypeInfo_cAttrInfo, /* #_CCP3B_# */
        2,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tsSharedMemory",                        /* name */
        false,                                   /* b_singleton */
        nMruby_tsSharedMemory__IDX_is_ID_act,    /* b_IDX_is_ID_act */
        nMruby_tsSharedMemory__sizeOfCB,         /* sizeOfCB */
        nMruby_tsSharedMemory__sizeOfINIB,       /* sizeOfINIB */
        nMruby_tsSharedMemory__NCELLINLINKUNIT,  /* n_cellInLinkUnit */
        1,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[51]:  nMruby_tsSharedMemory_InitializerCelltypeInfo id=52 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_nMruby_tsSharedMemory_InitializerCelltypeInfo_cEntryInfo, /* #_CCP3B_# */
        1,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cCallInfo (n_cCallInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tsSharedMemory_Initializer",            /* name */
        false,                                   /* b_singleton */
        nMruby_tsSharedMemory_Initializer__IDX_is_ID_act, /* b_IDX_is_ID_act */
        nMruby_tsSharedMemory_Initializer__sizeOfCB, /* sizeOfCB */
        nMruby_tsSharedMemory_Initializer__sizeOfINIB, /* sizeOfINIB */
        nMruby_tsSharedMemory_Initializer__NCELLINLINKUNIT, /* n_cellInLinkUnit */
        1,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[52]:  nTECSInfo_tTECSInfoCelltypeInfo id=53 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_nTECSInfo_tTECSInfoCelltypeInfo_cEntryInfo, /* #_CCP3B_# */
        1,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP4_# */
        rDomainEV3_rTECSInfo_nTECSInfo_tTECSInfoCelltypeInfo_cCallInfo, /* #_CCP3B_# */
        1,                                       /* length of cCallInfo (n_cCallInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tTECSInfo",                             /* name */
        true,                                    /* b_singleton */
        nTECSInfo_tTECSInfo__IDX_is_ID_act,      /* b_IDX_is_ID_act */
        nTECSInfo_tTECSInfo__sizeOfCB,           /* sizeOfCB */
        nTECSInfo_tTECSInfo__sizeOfINIB,         /* sizeOfINIB */
        nTECSInfo_tTECSInfo__NCELLINLINKUNIT,    /* n_cellInLinkUnit */
        1,                                       /* n_cellInSystem */
    },
};

extern const struct tag_nTECSInfo_sCelltypeInfo_VMT nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_;
/* �������ǥ�������ץ� #_EPD_# */
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tTaskCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tTaskCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[0],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tKernelCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tKernelCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[1],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tUltrasonicSensorCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tUltrasonicSensorCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[2],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tColorSensorCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tColorSensorCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[3],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tTouchSensorCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tTouchSensorCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[4],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tGyroSensorCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tGyroSensorCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[5],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tMotorCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tMotorCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[6],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tButtonCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tButtonCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[7],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tLCDCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tLCDCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[8],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tLEDCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tLEDCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[9],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tBatteryCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tBatteryCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[10],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tSpeakerCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tSpeakerCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[11],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tEV3PlatformCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tEV3PlatformCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[12],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tBalancerCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tBalancerCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[13],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tSharedMemoryCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tSharedMemoryCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[14],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tTarget1CelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tTarget1CelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[15],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tTarget2CelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tTarget2CelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[16],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tTarget3CelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tTarget3CelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[17],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tTaskMainCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tTaskMainCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[18],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tTECSInitializerCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tTECSInitializerCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[19],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tCharPointerCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tCharPointerCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[20],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tInt8PointerCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tInt8PointerCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[21],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tInt32PointerCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tInt32PointerCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[22],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tUInt16PointerCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tUInt16PointerCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[23],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tIntPointerCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tIntPointerCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[24],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tULongPointerCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tULongPointerCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[25],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsKernelCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsKernelCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[26],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsKernel_InitializerCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsKernel_InitializerCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[27],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsMotorCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsMotorCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[28],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsMotor_InitializerCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsMotor_InitializerCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[29],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsLCDCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsLCDCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[30],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsLCD_InitializerCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsLCD_InitializerCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[31],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsLEDCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsLEDCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[32],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsLED_InitializerCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsLED_InitializerCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[33],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsButtonCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsButtonCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[34],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsButton_InitializerCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsButton_InitializerCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[35],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsBatteryCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsBatteryCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[36],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsBattery_InitializerCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsBattery_InitializerCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[37],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsSpeakerCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsSpeakerCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[38],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsSpeaker_InitializerCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsSpeaker_InitializerCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[39],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsUltrasonicSensorCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsUltrasonicSensorCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[40],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsUltrasonicSensor_InitializerCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsUltrasonicSensor_InitializerCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[41],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsGyroSensorCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsGyroSensorCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[42],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsGyroSensor_InitializerCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsGyroSensor_InitializerCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[43],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsColorSensorCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsColorSensorCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[44],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsColorSensor_InitializerCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsColorSensor_InitializerCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[45],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsTouchSensorCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsTouchSensorCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[46],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsTouchSensor_InitializerCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsTouchSensor_InitializerCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[47],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsBalancerCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsBalancerCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[48],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsBalancer_InitializerCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsBalancer_InitializerCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[49],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsSharedMemoryCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsSharedMemoryCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[50],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsSharedMemory_InitializerCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsSharedMemory_InitializerCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[51],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_tTECSInfoCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_tTECSInfoCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[52],      /* INIB 3 */
};
/* CB ����������� #_CIC_# */
void
nTECSInfo_tCelltypeInfo_CB_initialize()
{
    nTECSInfo_tCelltypeInfo_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
