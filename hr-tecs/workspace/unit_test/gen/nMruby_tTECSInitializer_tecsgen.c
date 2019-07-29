/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "nMruby_tTECSInitializer_tecsgen.h"
#include "nMruby_tTECSInitializer_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eInitialize */
struct tag_nMruby_tTECSInitializer_eInitialize_DES {
    const struct tag_nMruby_sInitializeBridge_VMT *vmt;
    tTECSInitializer_IDX  idx;
};

/* ������������ȥ�ؿ� #_EPSF_# */
/* eInitialize */
void           nMruby_tTECSInitializer_eInitialize_initializeBridge_skel( const struct tag_nMruby_sInitializeBridge_VDES *epd, const mrb_state* mrb)
{
    struct tag_nMruby_tTECSInitializer_eInitialize_DES *lepd
        = (struct tag_nMruby_tTECSInitializer_eInitialize_DES *)epd;
    nMruby_tTECSInitializer_eInitialize_initializeBridge( lepd->idx, mrb );
}

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eInitialize */
const struct tag_nMruby_sInitializeBridge_VMT nMruby_tTECSInitializer_eInitialize_MT_ = {
    nMruby_tTECSInitializer_eInitialize_initializeBridge_skel,
};

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */
extern struct tag_nMruby_sInitializeTECSBridge_VDES VM_tsKernel_Initializer_eInitialize_des;
extern struct tag_nMruby_sInitializeTECSBridge_VDES VM_tsMotor_Initializer_eInitialize_des;
extern struct tag_nMruby_sInitializeTECSBridge_VDES VM_tsLCD_Initializer_eInitialize_des;
extern struct tag_nMruby_sInitializeTECSBridge_VDES VM_tsLED_Initializer_eInitialize_des;
extern struct tag_nMruby_sInitializeTECSBridge_VDES VM_tsButton_Initializer_eInitialize_des;
extern struct tag_nMruby_sInitializeTECSBridge_VDES VM_tsBattery_Initializer_eInitialize_des;
extern struct tag_nMruby_sInitializeTECSBridge_VDES VM_tsSpeaker_Initializer_eInitialize_des;
extern struct tag_nMruby_sInitializeTECSBridge_VDES VM_tsUltrasonicSensor_Initializer_eInitialize_des;
extern struct tag_nMruby_sInitializeTECSBridge_VDES VM_tsGyroSensor_Initializer_eInitialize_des;
extern struct tag_nMruby_sInitializeTECSBridge_VDES VM_tsColorSensor_Initializer_eInitialize_des;
extern struct tag_nMruby_sInitializeTECSBridge_VDES VM_tsTouchSensor_Initializer_eInitialize_des;
extern struct tag_nMruby_sInitializeTECSBridge_VDES VM_tsBalancer_Initializer_eInitialize_des;
extern struct tag_nMruby_sInitializeTECSBridge_VDES VM_tsSharedMemory_Initializer_eInitialize_des;
extern struct tag_nMruby_sInitializeTECSBridge_VDES CtIntPointer_eInitialize_des;
extern struct tag_nMruby_sInitializeTECSBridge_VDES CtULongPointer_eInitialize_des;
extern struct tag_nMruby_sInitializeTECSBridge_VDES CtInt32Pointer_eInitialize_des;
extern struct tag_nMruby_sInitializeTECSBridge_VDES CtCharPointer_eInitialize_des;
extern struct tag_nMruby_sInitializeTECSBridge_VDES CtUInt16Pointer_eInitialize_des;
extern struct tag_nMruby_sInitializeTECSBridge_VDES CtInt8Pointer_eInitialize_des;

/* �ƤӸ����� #_CPA_# */
struct tag_nMruby_sInitializeTECSBridge_VDES * const VM_TECSInitializer_cInitialize[] = {
    &VM_tsKernel_Initializer_eInitialize_des,
    &VM_tsMotor_Initializer_eInitialize_des,
    &VM_tsLCD_Initializer_eInitialize_des,
    &VM_tsLED_Initializer_eInitialize_des,
    &VM_tsButton_Initializer_eInitialize_des,
    &VM_tsBattery_Initializer_eInitialize_des,
    &VM_tsSpeaker_Initializer_eInitialize_des,
    &VM_tsUltrasonicSensor_Initializer_eInitialize_des,
    &VM_tsGyroSensor_Initializer_eInitialize_des,
    &VM_tsColorSensor_Initializer_eInitialize_des,
    &VM_tsTouchSensor_Initializer_eInitialize_des,
    &VM_tsBalancer_Initializer_eInitialize_des,
    &VM_tsSharedMemory_Initializer_eInitialize_des,
    &CtIntPointer_eInitialize_des,
    &CtULongPointer_eInitialize_des,
    &CtInt32Pointer_eInitialize_des,
    &CtCharPointer_eInitialize_des,
    &CtUInt16Pointer_eInitialize_des,
    &CtInt8Pointer_eInitialize_des,
};

/* °�����ѿ������� #_AVAI_# */
/* ���� INIB #_INIB_# */
nMruby_tTECSInitializer_INIB nMruby_tTECSInitializer_INIB_tab[] = {
    /* cell: nMruby_tTECSInitializer_CB_tab[0]:  VM_TECSInitializer id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        VM_TECSInitializer_cInitialize,          /* #_CCP3B_# */
        19,                                      /* length of cInitialize (n_cInitialize) #_CCP4_# */
        /* entry port #_EP_# */ 
    },
};

/* ���� CB #_CB_# */
struct tag_nMruby_tTECSInitializer_CB nMruby_tTECSInitializer_CB_tab[1];
/* �������ǥ�������ץ� #_EPD_# */
extern const struct tag_nMruby_tTECSInitializer_eInitialize_DES VM_TECSInitializer_eInitialize_des;
const struct tag_nMruby_tTECSInitializer_eInitialize_DES VM_TECSInitializer_eInitialize_des = {
    &nMruby_tTECSInitializer_eInitialize_MT_,
    &nMruby_tTECSInitializer_CB_tab[0],      /* CB 3 */
};
/* CB ����������� #_CIC_# */
void
nMruby_tTECSInitializer_CB_initialize()
{
    nMruby_tTECSInitializer_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
