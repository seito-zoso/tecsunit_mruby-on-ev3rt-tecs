/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tTECSUnit_tecsgen.h"
#include "tTECSUnit_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eUnit */
struct tag_tTECSUnit_eUnit_DES {
    const struct tag_sTECSUnit_VMT *vmt;
    tTECSUnit_IDX  idx;
};

/* ������������ȥ�ؿ� #_EPSF_# */
/* eUnit */
void           tTECSUnit_eUnit_main_skel( const struct tag_sTECSUnit_VDES *epd, const char_t* cell_path, const char_t* entry_path, const char_t* signature_path, const char_t* function_path, const struct tecsunit_obj* arguments, const struct tecsunit_obj* exp_val)
{
    struct tag_tTECSUnit_eUnit_DES *lepd
        = (struct tag_tTECSUnit_eUnit_DES *)epd;
    tTECSUnit_eUnit_main( lepd->idx, cell_path, entry_path, signature_path, function_path, arguments, exp_val );
}

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eUnit */
const struct tag_sTECSUnit_VMT tTECSUnit_eUnit_MT_ = {
    tTECSUnit_eUnit_main_skel,
};

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
char tTECSUnit_TECSUnit_CB_cell_entry_INIT[256];
/* ���� INIB #_INIB_# */
tTECSUnit_INIB tTECSUnit_INIB_tab[] = {
    /* cell: tTECSUnit_CB_tab[0]:  TECSUnit id=1 */
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
        256,                                     /* LEN */
        tTECSUnit_TECSUnit_CB_cell_entry_INIT,   /* cell_entry */
    },
};

/* ���� CB #_CB_# */
struct tag_tTECSUnit_CB tTECSUnit_CB_tab[1];
extern const struct tag_sTECSUnit_VMT tTECSUnit_eUnit_MT_;
/* �������ǥ�������ץ� #_EPD_# */
extern const struct tag_tTECSUnit_eUnit_DES rDomainEV3_TECSUnit_eUnit_des;
const struct tag_tTECSUnit_eUnit_DES rDomainEV3_TECSUnit_eUnit_des = {
    &tTECSUnit_eUnit_MT_,
    &tTECSUnit_CB_tab[0],      /* CB 3 */
};
/* CB ����������� #_CIC_# */
void
tTECSUnit_CB_initialize()
{
    tTECSUnit_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
