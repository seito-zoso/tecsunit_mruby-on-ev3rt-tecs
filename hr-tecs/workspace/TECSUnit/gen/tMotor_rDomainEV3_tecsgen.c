/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tMotor_tecsgen.h"
#include "tMotor_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eMotor */
struct tag_tMotor_eMotor_DES {
    const struct tag_sMotor_VMT *vmt;
    tMotor_IDX  idx;
};

/* ������������ȥ�ؿ� #_EPSF_# */
/* eMotor */
ER_UINT        tMotor_eMotor_getType_skel( const struct tag_sMotor_VDES *epd)
{
    struct tag_tMotor_eMotor_DES *lepd
        = (struct tag_tMotor_eMotor_DES *)epd;
    return tMotor_eMotor_getType( lepd->idx );
}
int32_t        tMotor_eMotor_getCounts_skel( const struct tag_sMotor_VDES *epd)
{
    struct tag_tMotor_eMotor_DES *lepd
        = (struct tag_tMotor_eMotor_DES *)epd;
    return tMotor_eMotor_getCounts( lepd->idx );
}
int            tMotor_eMotor_getPower_skel( const struct tag_sMotor_VDES *epd)
{
    struct tag_tMotor_eMotor_DES *lepd
        = (struct tag_tMotor_eMotor_DES *)epd;
    return tMotor_eMotor_getPower( lepd->idx );
}
ER             tMotor_eMotor_resetCounts_skel( const struct tag_sMotor_VDES *epd)
{
    struct tag_tMotor_eMotor_DES *lepd
        = (struct tag_tMotor_eMotor_DES *)epd;
    return tMotor_eMotor_resetCounts( lepd->idx );
}
ER             tMotor_eMotor_setPower_skel( const struct tag_sMotor_VDES *epd, int power)
{
    struct tag_tMotor_eMotor_DES *lepd
        = (struct tag_tMotor_eMotor_DES *)epd;
    return tMotor_eMotor_setPower( lepd->idx, power );
}
ER             tMotor_eMotor_stop_skel( const struct tag_sMotor_VDES *epd, bool_t brake)
{
    struct tag_tMotor_eMotor_DES *lepd
        = (struct tag_tMotor_eMotor_DES *)epd;
    return tMotor_eMotor_stop( lepd->idx, brake );
}
ER             tMotor_eMotor_rotate_skel( const struct tag_sMotor_VDES *epd, int degrees, uint32_t speed_abs, bool_t blocking)
{
    struct tag_tMotor_eMotor_DES *lepd
        = (struct tag_tMotor_eMotor_DES *)epd;
    return tMotor_eMotor_rotate( lepd->idx, degrees, speed_abs, blocking );
}
void           tMotor_eMotor_initializePort_skel( const struct tag_sMotor_VDES *epd, int32_t type)
{
    struct tag_tMotor_eMotor_DES *lepd
        = (struct tag_tMotor_eMotor_DES *)epd;
    tMotor_eMotor_initializePort( lepd->idx, type );
}

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eMotor */
const struct tag_sMotor_VMT tMotor_eMotor_MT_ = {
    tMotor_eMotor_getType_skel,
    tMotor_eMotor_getCounts_skel,
    tMotor_eMotor_getPower_skel,
    tMotor_eMotor_resetCounts_skel,
    tMotor_eMotor_setPower_skel,
    tMotor_eMotor_stop_skel,
    tMotor_eMotor_rotate_skel,
    tMotor_eMotor_initializePort_skel,
};

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */




/* �ƤӸ����� #_CPA_# */




/* °�����ѿ������� #_AVAI_# */
/* ���� INIB #_INIB_# */
tMotor_INIB tMotor_INIB_tab[] = {
    /* cell: tMotor_CB_tab[0]:  MotorA id=1 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        EV3_PORT_A,                              /* port */
    },
    /* cell: tMotor_CB_tab[1]:  MotorB id=2 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        EV3_PORT_B,                              /* port */
    },
    /* cell: tMotor_CB_tab[2]:  MotorC id=3 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        EV3_PORT_C,                              /* port */
    },
    /* cell: tMotor_CB_tab[3]:  MotorD id=4 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        EV3_PORT_D,                              /* port */
    },
};

extern const struct tag_sMotor_VMT tMotor_eMotor_MT_;
/* �������ǥ�������ץ� #_EPD_# */
extern const struct tag_tMotor_eMotor_DES rDomainEV3_MotorA_eMotor_des;
const struct tag_tMotor_eMotor_DES rDomainEV3_MotorA_eMotor_des = {
    &tMotor_eMotor_MT_,
    &tMotor_INIB_tab[0],      /* INIB 3 */
};
extern const struct tag_tMotor_eMotor_DES rDomainEV3_MotorB_eMotor_des;
const struct tag_tMotor_eMotor_DES rDomainEV3_MotorB_eMotor_des = {
    &tMotor_eMotor_MT_,
    &tMotor_INIB_tab[1],      /* INIB 3 */
};
extern const struct tag_tMotor_eMotor_DES rDomainEV3_MotorC_eMotor_des;
const struct tag_tMotor_eMotor_DES rDomainEV3_MotorC_eMotor_des = {
    &tMotor_eMotor_MT_,
    &tMotor_INIB_tab[2],      /* INIB 3 */
};
extern const struct tag_tMotor_eMotor_DES rDomainEV3_MotorD_eMotor_des;
const struct tag_tMotor_eMotor_DES rDomainEV3_MotorD_eMotor_des = {
    &tMotor_eMotor_MT_,
    &tMotor_INIB_tab[3],      /* INIB 3 */
};
/* CB ����������� #_CIC_# */
void
tMotor_CB_initialize()
{
    tMotor_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
