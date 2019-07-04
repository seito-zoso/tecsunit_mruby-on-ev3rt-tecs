/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tBattery_tecsgen.h"
#include "tBattery_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eBattery */
struct tag_tBattery_eBattery_DES {
    const struct tag_sBattery_VMT *vmt;
    int           idx;
};

/* ������������ȥ�ؿ� #_EPSF_# */
/* eBattery */
int            tBattery_eBattery_current_mA_skel( const struct tag_sBattery_VDES *epd)
{
    struct tag_tBattery_eBattery_DES *lepd
        = (struct tag_tBattery_eBattery_DES *)epd;
    return tBattery_eBattery_current_mA( lepd->idx );
}
int            tBattery_eBattery_voltage_mV_skel( const struct tag_sBattery_VDES *epd)
{
    struct tag_tBattery_eBattery_DES *lepd
        = (struct tag_tBattery_eBattery_DES *)epd;
    return tBattery_eBattery_voltage_mV( lepd->idx );
}

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eBattery */
const struct tag_sBattery_VMT tBattery_eBattery_MT_ = {
    tBattery_eBattery_current_mA_skel,
    tBattery_eBattery_voltage_mV_skel,
};

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
extern const struct tag_sBattery_VMT tBattery_eBattery_MT_;
/* �������ǥ�������ץ� #_EPD_# */
extern const struct tag_tBattery_eBattery_DES rDomainEV3_Battery_eBattery_des;
const struct tag_tBattery_eBattery_DES rDomainEV3_Battery_eBattery_des = {
    &tBattery_eBattery_MT_,
    0,
};
/* CB ����������� #_CIC_# */
void
tBattery_CB_initialize()
{
    tBattery_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
