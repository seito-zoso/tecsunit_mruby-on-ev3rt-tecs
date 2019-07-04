/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tTarget3_tecsgen.h"
#include "tTarget3_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eTarget3 */
struct tag_tTarget3_eTarget3_DES {
    const struct tag_sTarget3_VMT *vmt;
    int           idx;
};

/* ������������ȥ�ؿ� #_EPSF_# */
/* eTarget3 */
ER             tTarget3_eTarget3_send_skel( const struct tag_sTarget3_VDES *epd, const int8_t* buf, int8_t len)
{
    struct tag_tTarget3_eTarget3_DES *lepd
        = (struct tag_tTarget3_eTarget3_DES *)epd;
    return tTarget3_eTarget3_send( lepd->idx, buf, len );
}
ER             tTarget3_eTarget3_sendMessage_skel( const struct tag_sTarget3_VDES *epd, const char_t* buf, int8_t len)
{
    struct tag_tTarget3_eTarget3_DES *lepd
        = (struct tag_tTarget3_eTarget3_DES *)epd;
    return tTarget3_eTarget3_sendMessage( lepd->idx, buf, len );
}
ER             tTarget3_eTarget3_receiveMessage_skel( const struct tag_sTarget3_VDES *epd, char_t* buf, int8_t len)
{
    struct tag_tTarget3_eTarget3_DES *lepd
        = (struct tag_tTarget3_eTarget3_DES *)epd;
    return tTarget3_eTarget3_receiveMessage( lepd->idx, buf, len );
}
ER             tTarget3_eTarget3_checkER_skel( const struct tag_sTarget3_VDES *epd, ER eroor)
{
    struct tag_tTarget3_eTarget3_DES *lepd
        = (struct tag_tTarget3_eTarget3_DES *)epd;
    return tTarget3_eTarget3_checkER( lepd->idx, eroor );
}

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eTarget3 */
const struct tag_sTarget3_VMT tTarget3_eTarget3_MT_ = {
    tTarget3_eTarget3_send_skel,
    tTarget3_eTarget3_sendMessage_skel,
    tTarget3_eTarget3_receiveMessage_skel,
    tTarget3_eTarget3_checkER_skel,
};

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
/* �������ǥ�������ץ� #_EPD_# */
extern const struct tag_tTarget3_eTarget3_DES Target3_eTarget3_des;
const struct tag_tTarget3_eTarget3_DES Target3_eTarget3_des = {
    &tTarget3_eTarget3_MT_,
    0,
};
/* CB ����������� #_CIC_# */
void
tTarget3_CB_initialize()
{
    tTarget3_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
