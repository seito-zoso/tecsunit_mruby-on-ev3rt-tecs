/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tButton_tecsgen.h"
#include "tButton_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eButton */
struct tag_tButton_eButton_DES {
    const struct tag_sButton_VMT *vmt;
    int           idx;
};

/* ������������ȥ�ؿ� #_EPSF_# */
/* eButton */
bool_t         tButton_eButton_isPressed_skel( const struct tag_sButton_VDES *epd, button_t button)
{
    struct tag_tButton_eButton_DES *lepd
        = (struct tag_tButton_eButton_DES *)epd;
    return tButton_eButton_isPressed( lepd->idx, button );
}

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eButton */
const struct tag_sButton_VMT tButton_eButton_MT_ = {
    tButton_eButton_isPressed_skel,
};

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
extern const struct tag_sButton_VMT tButton_eButton_MT_;
/* �������ǥ�������ץ� #_EPD_# */
extern const struct tag_tButton_eButton_DES rDomainEV3_Button_eButton_des;
const struct tag_tButton_eButton_DES rDomainEV3_Button_eButton_des = {
    &tButton_eButton_MT_,
    0,
};
/* CB ����������� #_CIC_# */
void
tButton_CB_initialize()
{
    tButton_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
