/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tSpeaker_tecsgen.h"
#include "tSpeaker_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eSpeaker */
struct tag_tSpeaker_eSpeaker_DES {
    const struct tag_sSpeaker_VMT *vmt;
    int           idx;
};

/* ������������ȥ�ؿ� #_EPSF_# */
/* eSpeaker */
ER             tSpeaker_eSpeaker_setVolume_skel( const struct tag_sSpeaker_VDES *epd, uint8_t volume)
{
    return tSpeaker_eSpeaker_setVolume( volume );
}
ER             tSpeaker_eSpeaker_playTone_skel( const struct tag_sSpeaker_VDES *epd, uint16_t frequency, int32_t duration)
{
    return tSpeaker_eSpeaker_playTone( frequency, duration );
}
ER             tSpeaker_eSpeaker_stop_skel( const struct tag_sSpeaker_VDES *epd)
{
    return tSpeaker_eSpeaker_stop( );
}

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eSpeaker */
const struct tag_sSpeaker_VMT tSpeaker_eSpeaker_MT_ = {
    tSpeaker_eSpeaker_setVolume_skel,
    tSpeaker_eSpeaker_playTone_skel,
    tSpeaker_eSpeaker_stop_skel,
};

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
extern const struct tag_sSpeaker_VMT tSpeaker_eSpeaker_MT_;
/* �������ǥ�������ץ� #_EPD_# */
extern const struct tag_tSpeaker_eSpeaker_DES rDomainEV3_Speaker_eSpeaker_des;
const struct tag_tSpeaker_eSpeaker_DES rDomainEV3_Speaker_eSpeaker_des = {
    &tSpeaker_eSpeaker_MT_,
    0,
};
/* CB ����������� #_CIC_# */
void
tSpeaker_CB_initialize()
{
    SET_CB_INIB_POINTER(i,p_cb)
    INITIALIZE_CB()
}
