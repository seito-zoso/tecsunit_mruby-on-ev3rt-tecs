/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tTaskMain_tecsgen.h"
#include "tTaskMain_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eBody */
struct tag_tTaskMain_eBody_DES {
    const struct tag_sTaskBody_VMT *vmt;
    tTaskMain_IDX  idx;
};

/* ������������ȥ�ؿ� #_EPSF_# */
/* eBody */
void           tTaskMain_eBody_main_skel( const struct tag_sTaskBody_VDES *epd)
{
    struct tag_tTaskMain_eBody_DES *lepd
        = (struct tag_tTaskMain_eBody_DES *)epd;
    tTaskMain_eBody_main( lepd->idx );
}

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eBody */
const struct tag_sTaskBody_VMT tTaskMain_eBody_MT_ = {
    tTaskMain_eBody_main_skel,
};

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
char_t tTaskMain_TaskMain_CB_target_path_INIT[128];
/* ���� INIB #_INIB_# */
tTaskMain_INIB tTaskMain_INIB_tab[] = {
    /* cell: tTaskMain_CB_tab[0]:  TaskMain id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        0,                                       /* #_CCP5_# */
        0,                                       /* #_CCP5_# */
        0,                                       /* #_CCP5_# */
        0,                                       /* #_CCP5_# */
        0,                                       /* #_CCP5_# */
        0,                                       /* #_CCP5_# */
        0,                                       /* #_CCP5_# */
        0,                                       /* #_CCP5_# */
        0,                                       /* #_CCP5_# */
        0,                                       /* #_CCP5_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        128,                                     /* NAME_LEN */
        tTaskMain_TaskMain_CB_target_path_INIT,  /* target_path */
    },
};

/* ���� CB #_CB_# */
struct tag_tTaskMain_CB tTaskMain_CB_tab[1];
extern const struct tag_sTaskBody_VMT tTaskMain_eBody_MT_;
/* �������ǥ�������ץ� #_EPD_# */
extern const struct tag_tTaskMain_eBody_DES rDomainEV3_TaskMain_eBody_des;
const struct tag_tTaskMain_eBody_DES rDomainEV3_TaskMain_eBody_des = {
    &tTaskMain_eBody_MT_,
    &tTaskMain_CB_tab[0],      /* CB 3 */
};
/* CB ����������� #_CIC_# */
void
tTaskMain_CB_initialize()
{
    tTaskMain_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
