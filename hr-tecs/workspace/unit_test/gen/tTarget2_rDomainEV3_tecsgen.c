/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tTarget2_tecsgen.h"
#include "tTarget2_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eTarget2 */
struct tag_tTarget2_eTarget2_DES {
    const struct tag_sTarget2_VMT *vmt;
    int           idx;
};

/* ������������ȥ�ؿ� #_EPSF_# */
/* eTarget2 */
int            tTarget2_eTarget2_add_skel( const struct tag_sTarget2_VDES *epd, int arg1, int arg2)
{
    struct tag_tTarget2_eTarget2_DES *lepd
        = (struct tag_tTarget2_eTarget2_DES *)epd;
    return tTarget2_eTarget2_add( lepd->idx, arg1, arg2 );
}

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eTarget2 */
const struct tag_sTarget2_VMT tTarget2_eTarget2_MT_ = {
    tTarget2_eTarget2_add_skel,
};

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
extern const struct tag_sTarget2_VMT tTarget2_eTarget2_MT_;
/* �������ǥ�������ץ� #_EPD_# */
extern const struct tag_tTarget2_eTarget2_DES rDomainEV3_Target2_eTarget2_des;
const struct tag_tTarget2_eTarget2_DES rDomainEV3_Target2_eTarget2_des = {
    &tTarget2_eTarget2_MT_,
    0,
};
/* CB ����������� #_CIC_# */
void
tTarget2_CB_initialize()
{
    tTarget2_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
