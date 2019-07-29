/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tLED_tecsgen.h"
#include "tLED_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eLED */
struct tag_tLED_eLED_DES {
    const struct tag_sLED_VMT *vmt;
    int           idx;
};

/* ������������ȥ�ؿ� #_EPSF_# */
/* eLED */
ER             tLED_eLED_setColor_skel( const struct tag_sLED_VDES *epd, ledcolor_t color)
{
    struct tag_tLED_eLED_DES *lepd
        = (struct tag_tLED_eLED_DES *)epd;
    return tLED_eLED_setColor( lepd->idx, color );
}
ER             tLED_eLED_off_skel( const struct tag_sLED_VDES *epd)
{
    struct tag_tLED_eLED_DES *lepd
        = (struct tag_tLED_eLED_DES *)epd;
    return tLED_eLED_off( lepd->idx );
}

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eLED */
const struct tag_sLED_VMT tLED_eLED_MT_ = {
    tLED_eLED_setColor_skel,
    tLED_eLED_off_skel,
};

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
extern const struct tag_sLED_VMT tLED_eLED_MT_;
/* �������ǥ�������ץ� #_EPD_# */
extern const struct tag_tLED_eLED_DES rDomainEV3_LED_eLED_des;
const struct tag_tLED_eLED_DES rDomainEV3_LED_eLED_des = {
    &tLED_eLED_MT_,
    0,
};
/* CB ����������� #_CIC_# */
void
tLED_CB_initialize()
{
    tLED_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
