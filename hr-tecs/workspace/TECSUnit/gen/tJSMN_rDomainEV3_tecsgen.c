/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tJSMN_tecsgen.h"
#include "tJSMN_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eJSMN */
struct tag_tJSMN_eJSMN_DES {
    const struct tag_sJSMN_VMT *vmt;
    tJSMN_IDX  idx;
};

/* ������������ȥ�ؿ� #_EPSF_# */
/* eJSMN */
ER             tJSMN_eJSMN_json_open_skel( const struct tag_sJSMN_VDES *epd)
{
    struct tag_tJSMN_eJSMN_DES *lepd
        = (struct tag_tJSMN_eJSMN_DES *)epd;
    return tJSMN_eJSMN_json_open( lepd->idx );
}
ER             tJSMN_eJSMN_json_parse_path_skel( const struct tag_sJSMN_VDES *epd, char_t* c_path, char_t* e_path, char_t* f_path, int target_num, int btr)
{
    struct tag_tJSMN_eJSMN_DES *lepd
        = (struct tag_tJSMN_eJSMN_DES *)epd;
    return tJSMN_eJSMN_json_parse_path( lepd->idx, c_path, e_path, f_path, target_num, btr );
}
ER             tJSMN_eJSMN_json_parse_arg_skel( const struct tag_sJSMN_VDES *epd, struct tecsunit_obj* arguments, struct tecsunit_obj* exp_val, int* arg_num, int target_num, int btr)
{
    struct tag_tJSMN_eJSMN_DES *lepd
        = (struct tag_tJSMN_eJSMN_DES *)epd;
    return tJSMN_eJSMN_json_parse_arg( lepd->idx, arguments, exp_val, arg_num, target_num, btr );
}

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eJSMN */
const struct tag_sJSMN_VMT tJSMN_eJSMN_MT_ = {
    tJSMN_eJSMN_json_open_skel,
    tJSMN_eJSMN_json_parse_path_skel,
    tJSMN_eJSMN_json_parse_arg_skel,
};

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
char_t tJSMN_JSMN_CB_json_str_INIT[1024];
char_t tJSMN_JSMN_CB_tmp_str_INIT[32];
/* ���� INIB #_INIB_# */
tJSMN_INIB tJSMN_INIB_tab[] = {
    /* cell: tJSMN_CB_tab[0]:  JSMN id=1 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        1024,                                    /* LEN */
        32,                                      /* TMP_LEN */
        "cell",                                  /* key_cell */
        "entry",                                 /* key_entry */
        "function",                              /* key_function */
        "argument",                              /* key_arg */
        "exp_val",                               /* key_exp */
        tJSMN_JSMN_CB_json_str_INIT,             /* json_str */
        tJSMN_JSMN_CB_tmp_str_INIT,              /* tmp_str */
    },
};

/* ���� CB #_CB_# */
struct tag_tJSMN_CB tJSMN_CB_tab[1];
extern const struct tag_sJSMN_VMT tJSMN_eJSMN_MT_;
/* �������ǥ�������ץ� #_EPD_# */
extern const struct tag_tJSMN_eJSMN_DES rDomainEV3_JSMN_eJSMN_des;
const struct tag_tJSMN_eJSMN_DES rDomainEV3_JSMN_eJSMN_des = {
    &tJSMN_eJSMN_MT_,
    &tJSMN_CB_tab[0],      /* CB 3 */
};
/* CB ����������� #_CIC_# */
void
tJSMN_CB_initialize()
{
    tJSMN_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
