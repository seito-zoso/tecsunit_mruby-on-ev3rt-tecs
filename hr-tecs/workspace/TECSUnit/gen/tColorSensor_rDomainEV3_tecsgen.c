/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tColorSensor_tecsgen.h"
#include "tColorSensor_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eColorSensor */
struct tag_tColorSensor_eColorSensor_DES {
    const struct tag_sColorSensor_VMT *vmt;
    tColorSensor_IDX  idx;
};

/* ������������ȥ�ؿ� #_EPSF_# */
/* eColorSensor */
colorid_t      tColorSensor_eColorSensor_getColor_skel( const struct tag_sColorSensor_VDES *epd)
{
    struct tag_tColorSensor_eColorSensor_DES *lepd
        = (struct tag_tColorSensor_eColorSensor_DES *)epd;
    return tColorSensor_eColorSensor_getColor( lepd->idx );
}
uint8_t        tColorSensor_eColorSensor_getReflect_skel( const struct tag_sColorSensor_VDES *epd)
{
    struct tag_tColorSensor_eColorSensor_DES *lepd
        = (struct tag_tColorSensor_eColorSensor_DES *)epd;
    return tColorSensor_eColorSensor_getReflect( lepd->idx );
}
uint8_t        tColorSensor_eColorSensor_getAmbient_skel( const struct tag_sColorSensor_VDES *epd)
{
    struct tag_tColorSensor_eColorSensor_DES *lepd
        = (struct tag_tColorSensor_eColorSensor_DES *)epd;
    return tColorSensor_eColorSensor_getAmbient( lepd->idx );
}
void           tColorSensor_eColorSensor_initializePort_skel( const struct tag_sColorSensor_VDES *epd)
{
    struct tag_tColorSensor_eColorSensor_DES *lepd
        = (struct tag_tColorSensor_eColorSensor_DES *)epd;
    tColorSensor_eColorSensor_initializePort( lepd->idx );
}
void           tColorSensor_eColorSensor_getRGBRaw_skel( const struct tag_sColorSensor_VDES *epd, uint16_t* r, uint16_t* g, uint16_t* b)
{
    struct tag_tColorSensor_eColorSensor_DES *lepd
        = (struct tag_tColorSensor_eColorSensor_DES *)epd;
    tColorSensor_eColorSensor_getRGBRaw( lepd->idx, r, g, b );
}

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eColorSensor */
const struct tag_sColorSensor_VMT tColorSensor_eColorSensor_MT_ = {
    tColorSensor_eColorSensor_getColor_skel,
    tColorSensor_eColorSensor_getReflect_skel,
    tColorSensor_eColorSensor_getAmbient_skel,
    tColorSensor_eColorSensor_initializePort_skel,
    tColorSensor_eColorSensor_getRGBRaw_skel,
};

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */




/* �ƤӸ����� #_CPA_# */




/* °�����ѿ������� #_AVAI_# */
/* ���� INIB #_INIB_# */
tColorSensor_INIB tColorSensor_INIB_tab[] = {
    /* cell: tColorSensor_CB_tab[0]:  ColorSensor1 id=1 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        EV3_PORT_1,                              /* port */
    },
    /* cell: tColorSensor_CB_tab[1]:  ColorSensor2 id=2 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        EV3_PORT_2,                              /* port */
    },
    /* cell: tColorSensor_CB_tab[2]:  ColorSensor3 id=3 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        EV3_PORT_3,                              /* port */
    },
    /* cell: tColorSensor_CB_tab[3]:  ColorSensor4 id=4 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        EV3_PORT_4,                              /* port */
    },
};

extern const struct tag_sColorSensor_VMT tColorSensor_eColorSensor_MT_;
/* �������ǥ�������ץ� #_EPD_# */
extern const struct tag_tColorSensor_eColorSensor_DES rDomainEV3_ColorSensor1_eColorSensor_des;
const struct tag_tColorSensor_eColorSensor_DES rDomainEV3_ColorSensor1_eColorSensor_des = {
    &tColorSensor_eColorSensor_MT_,
    &tColorSensor_INIB_tab[0],      /* INIB 3 */
};
extern const struct tag_tColorSensor_eColorSensor_DES rDomainEV3_ColorSensor2_eColorSensor_des;
const struct tag_tColorSensor_eColorSensor_DES rDomainEV3_ColorSensor2_eColorSensor_des = {
    &tColorSensor_eColorSensor_MT_,
    &tColorSensor_INIB_tab[1],      /* INIB 3 */
};
extern const struct tag_tColorSensor_eColorSensor_DES rDomainEV3_ColorSensor3_eColorSensor_des;
const struct tag_tColorSensor_eColorSensor_DES rDomainEV3_ColorSensor3_eColorSensor_des = {
    &tColorSensor_eColorSensor_MT_,
    &tColorSensor_INIB_tab[2],      /* INIB 3 */
};
extern const struct tag_tColorSensor_eColorSensor_DES rDomainEV3_ColorSensor4_eColorSensor_des;
const struct tag_tColorSensor_eColorSensor_DES rDomainEV3_ColorSensor4_eColorSensor_des = {
    &tColorSensor_eColorSensor_MT_,
    &tColorSensor_INIB_tab[3],      /* INIB 3 */
};
/* CB ����������� #_CIC_# */
void
tColorSensor_CB_initialize()
{
    tColorSensor_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
