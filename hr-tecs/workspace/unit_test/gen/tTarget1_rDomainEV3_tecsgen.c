/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tTarget1_tecsgen.h"
#include "tTarget1_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eTarget1 */
struct tag_tTarget1_eTarget1_DES {
    const struct tag_sTarget1_VMT *vmt;
    int           idx;
};

/* ������������ȥ�ؿ� #_EPSF_# */
/* eTarget1 */
int            tTarget1_eTarget1_double_skel( const struct tag_sTarget1_VDES *epd, int arg)
{
    struct tag_tTarget1_eTarget1_DES *lepd
        = (struct tag_tTarget1_eTarget1_DES *)epd;
    return tTarget1_eTarget1_double( lepd->idx, arg );
}

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eTarget1 */
const struct tag_sTarget1_VMT tTarget1_eTarget1_MT_ = {
    tTarget1_eTarget1_double_skel,
};

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
extern const struct tag_sTarget1_VMT tTarget1_eTarget1_MT_;
/* �������ǥ�������ץ� #_EPD_# */
extern const struct tag_tTarget1_eTarget1_DES rDomainEV3_Target1_eTarget1_des;
const struct tag_tTarget1_eTarget1_DES rDomainEV3_Target1_eTarget1_des = {
    &tTarget1_eTarget1_MT_,
    0,
};
/* CB ����������� #_CIC_# */
void
tTarget1_CB_initialize()
{
    tTarget1_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
