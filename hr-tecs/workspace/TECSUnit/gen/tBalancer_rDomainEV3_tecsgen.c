/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tBalancer_tecsgen.h"
#include "tBalancer_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eBalancer */
struct tag_tBalancer_eBalancer_DES {
    const struct tag_sBalancer_VMT *vmt;
    int           idx;
};

/* ������������ȥ�ؿ� #_EPSF_# */
/* eBalancer */
void           tBalancer_eBalancer_control_skel( const struct tag_sBalancer_VDES *epd, int16_t forward, int16_t turn, int16_t gyro, int16_t gyroOffset, int32_t leftRevolution, int32_t rightRevolution, int16_t battery, int8_t* pwm_l, int8_t* pwm_r, int32_t backlashhalf)
{
    tBalancer_eBalancer_control( forward, turn, gyro, gyroOffset, leftRevolution, rightRevolution, battery, pwm_l, pwm_r, backlashhalf );
}
void           tBalancer_eBalancer_init_skel( const struct tag_sBalancer_VDES *epd)
{
    tBalancer_eBalancer_init( );
}

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eBalancer */
const struct tag_sBalancer_VMT tBalancer_eBalancer_MT_ = {
    tBalancer_eBalancer_control_skel,
    tBalancer_eBalancer_init_skel,
};

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
extern const struct tag_sBalancer_VMT tBalancer_eBalancer_MT_;
/* �������ǥ�������ץ� #_EPD_# */
extern const struct tag_tBalancer_eBalancer_DES rDomainEV3_Balancer_eBalancer_des;
const struct tag_tBalancer_eBalancer_DES rDomainEV3_Balancer_eBalancer_des = {
    &tBalancer_eBalancer_MT_,
    0,
};
/* CB ����������� #_CIC_# */
void
tBalancer_CB_initialize()
{
    SET_CB_INIB_POINTER(i,p_cb)
    INITIALIZE_CB()
}
