/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef tJSMN_TECSGEN_H
#define tJSMN_TECSGEN_H

/*
 * celltype          :  tJSMN
 * global name       :  tJSMN
 * multi-domain      :  no
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  yes
 * has_INIB          :  yes
 * rom               :  yes
 * CB initializer    :  yes
 */

/* �����Х�إå� #_IGH_# */
#include "global_tecsgen.h"

/* �����˥���إå� #_ISH_# */
#include "sJSMN_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� INIB ����� #_CIP_# */
typedef const struct tag_tJSMN_INIB {
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    int16_t        LEN;
    int16_t        TMP_LEN;
    char_t*        key_cell;
    char_t*        key_entry;
    char_t*        key_function;
    char_t*        key_arg;
    char_t*        key_exp;
    char_t*        json_str;
    char_t*        tmp_str;
}  tJSMN_INIB;
/* ���� CB ����� #_CCTPA_# */
typedef struct tag_tJSMN_CB {
    tJSMN_INIB  *_inib;
    /* call port #_NEP_# */ 
    /* var #_VA_# */ 
    int            counter;
}  tJSMN_CB;
/* ���󥰥�ȥ󥻥� CB �ץ�ȥ�������� #_MCPB_# */
extern tJSMN_CB  tJSMN_CB_tab[];

/* ���륿���פ�IDX�� #_CTIX_# */
typedef struct tag_tJSMN_CB *tJSMN_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* sJSMN */
ER           tJSMN_eJSMN_json_open(tJSMN_IDX idx);
ER           tJSMN_eJSMN_json_parse_path(tJSMN_IDX idx, char_t* c_path, char_t* e_path, char_t* f_path, int target_num, int btr);
ER           tJSMN_eJSMN_json_parse_arg(tJSMN_IDX idx, struct tecsunit_obj* arguments, struct tecsunit_obj* exp_val, int* arg_num, int target_num, int btr);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tJSMN_ID_BASE               (1)  /* ID �Υ١���  #_NIDB_# */
#define tJSMN_N_CELL                (1)  /* ����θĿ�  #_NCEL_# */

/* IDX�������������å��ޥ��� #_CVI_# */
#define tJSMN_VALID_IDX(IDX) (1)


/* ����CB������ޥ��� #_GCB_# */
#define tJSMN_GET_CELLCB(idx) (idx)

/* °�����������ޥ��� #_AAM_# */
#define tJSMN_ATTR_LEN( p_that )	((p_that)->_inib->LEN)
#define tJSMN_ATTR_TMP_LEN( p_that )	((p_that)->_inib->TMP_LEN)
#define tJSMN_ATTR_key_cell( p_that )	((p_that)->_inib->key_cell)
#define tJSMN_ATTR_key_entry( p_that )	((p_that)->_inib->key_entry)
#define tJSMN_ATTR_key_function( p_that )	((p_that)->_inib->key_function)
#define tJSMN_ATTR_key_arg( p_that )	((p_that)->_inib->key_arg)
#define tJSMN_ATTR_key_exp( p_that )	((p_that)->_inib->key_exp)

#define tJSMN_GET_LEN(p_that)	((p_that)->_inib->LEN)
#define tJSMN_GET_TMP_LEN(p_that)	((p_that)->_inib->TMP_LEN)
#define tJSMN_GET_key_cell(p_that)	((p_that)->_inib->key_cell)
#define tJSMN_GET_key_entry(p_that)	((p_that)->_inib->key_entry)
#define tJSMN_GET_key_function(p_that)	((p_that)->_inib->key_function)
#define tJSMN_GET_key_arg(p_that)	((p_that)->_inib->key_arg)
#define tJSMN_GET_key_exp(p_that)	((p_that)->_inib->key_exp)


/* var ���������ޥ��� #_VAM_# */
#define tJSMN_VAR_json_str(p_that)	((p_that)->_inib->json_str)
#define tJSMN_VAR_tmp_str(p_that)	((p_that)->_inib->tmp_str)
#define tJSMN_VAR_counter(p_that)	((p_that)->counter)

#define tJSMN_GET_json_str(p_that)	((p_that)->json_str)
#define tJSMN_SET_json_str(p_that,val)	((p_that)->json_str=(val))
#define tJSMN_GET_tmp_str(p_that)	((p_that)->tmp_str)
#define tJSMN_SET_tmp_str(p_that,val)	((p_that)->tmp_str=(val))
#define tJSMN_GET_counter(p_that)	((p_that)->counter)
#define tJSMN_SET_counter(p_that,val)	((p_that)->counter=(val))

#ifndef TECSFLOW
#else  /* TECSFLOW */
#endif /* TECSFLOW */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* ������������ȥ�ؿ��ץ�ȥ����������VMT���׺�Ŭ���ˤ�껲�Ȥ����Ρ� #_EPSP_# */
/* eJSMN */
ER             tJSMN_eJSMN_json_open_skel( const struct tag_sJSMN_VDES *epd);
ER             tJSMN_eJSMN_json_parse_path_skel( const struct tag_sJSMN_VDES *epd, char_t* c_path, char_t* e_path, char_t* f_path, int target_num, int btr);
ER             tJSMN_eJSMN_json_parse_arg_skel( const struct tag_sJSMN_VDES *epd, struct tecsunit_obj* arguments, struct tecsunit_obj* exp_val, int* arg_num, int target_num, int btr);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDX�������������å��ޥ����û�̷��� #_CVIA_# */
#define VALID_IDX(IDX)  tJSMN_VALID_IDX(IDX)


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  tJSMN_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	tJSMN_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	tJSMN_IDX


/* °�����������ޥ���(û�̷�) #_AAMA_# */
#define ATTR_LEN             tJSMN_ATTR_LEN( p_cellcb )
#define ATTR_TMP_LEN         tJSMN_ATTR_TMP_LEN( p_cellcb )
#define ATTR_key_cell        tJSMN_ATTR_key_cell( p_cellcb )
#define ATTR_key_entry       tJSMN_ATTR_key_entry( p_cellcb )
#define ATTR_key_function    tJSMN_ATTR_key_function( p_cellcb )
#define ATTR_key_arg         tJSMN_ATTR_key_arg( p_cellcb )
#define ATTR_key_exp         tJSMN_ATTR_key_exp( p_cellcb )


/* var ���������ޥ���(û�̷�) #_VAMA_# */
#define VAR_json_str         tJSMN_VAR_json_str( p_cellcb )
#define VAR_tmp_str          tJSMN_VAR_tmp_str( p_cellcb )
#define VAR_counter          tJSMN_VAR_counter( p_cellcb )




/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eJSMN_json_open  tJSMN_eJSMN_json_open
#define eJSMN_json_parse_path tJSMN_eJSMN_json_parse_path
#define eJSMN_json_parse_arg tJSMN_eJSMN_json_parse_arg

/* ���ƥ졼�������� (FOREACH_CELL)������ #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tJSMN_N_CELL; (i)++ ){ \
       (p_cb) = &tJSMN_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB(p_that)\
	(p_that)->counter = 0;
#define SET_CB_INIB_POINTER(i,p_that)\
	(p_that)->_inib = &tJSMN_INIB_tab[(i)];

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tJSMN_TECSGENH */
