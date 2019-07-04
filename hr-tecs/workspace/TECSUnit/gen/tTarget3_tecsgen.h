/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef tTarget3_TECSGEN_H
#define tTarget3_TECSGEN_H

/*
 * celltype          :  tTarget3
 * global name       :  tTarget3
 * multi-domain      :  no
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  no
 * has_INIB          :  no
 * rom               :  yes
 * CB initializer    :  yes
 */

/* �����Х�إå� #_IGH_# */
#include "global_tecsgen.h"

/* �����˥���إå� #_ISH_# */
#include "sTarget3_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� CB (���ߡ�)����� #_CCDP_# */
typedef struct tag_tTarget3_CB {
    int  dummy;
} tTarget3_CB;
/* ���󥰥�ȥ󥻥� CB �ץ�ȥ�������� #_MCPB_# */

/* ���륿���פ�IDX�� #_CTIX_# */
typedef int   tTarget3_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* sTarget3 */
ER           tTarget3_eTarget3_send(tTarget3_IDX idx, const int8_t* buf, int8_t len);
ER           tTarget3_eTarget3_sendMessage(tTarget3_IDX idx, const char_t* buf, int8_t len);
ER           tTarget3_eTarget3_receiveMessage(tTarget3_IDX idx, char_t* buf, int8_t len);
ER           tTarget3_eTarget3_checkER(tTarget3_IDX idx, ER eroor);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tTarget3_ID_BASE            (1)  /* ID �Υ١���  #_NIDB_# */
#define tTarget3_N_CELL             (1)  /* ����θĿ�  #_NCEL_# */

/* IDX�������������å��ޥ��� #_CVI_# */
#define tTarget3_VALID_IDX(IDX) (1)


/* ����CB������ޥ��� #_GCB_# */
#define tTarget3_GET_CELLCB(idx) ((void *)0)
#ifndef TECSFLOW
#else  /* TECSFLOW */
#endif /* TECSFLOW */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* ������������ȥ�ؿ��ץ�ȥ����������VMT���׺�Ŭ���ˤ�껲�Ȥ����Ρ� #_EPSP_# */
/* eTarget3 */
ER             tTarget3_eTarget3_send_skel( const struct tag_sTarget3_VDES *epd, const int8_t* buf, int8_t len);
ER             tTarget3_eTarget3_sendMessage_skel( const struct tag_sTarget3_VDES *epd, const char_t* buf, int8_t len);
ER             tTarget3_eTarget3_receiveMessage_skel( const struct tag_sTarget3_VDES *epd, char_t* buf, int8_t len);
ER             tTarget3_eTarget3_checkER_skel( const struct tag_sTarget3_VDES *epd, ER eroor);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDX�������������å��ޥ����û�̷��� #_CVIA_# */
#define VALID_IDX(IDX)  tTarget3_VALID_IDX(IDX)


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  tTarget3_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	tTarget3_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	tTarget3_IDX




/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eTarget3_send    tTarget3_eTarget3_send
#define eTarget3_sendMessage tTarget3_eTarget3_sendMessage
#define eTarget3_receiveMessage tTarget3_eTarget3_receiveMessage
#define eTarget3_checkER tTarget3_eTarget3_checkER

/* ���ƥ졼�������� (FOREACH_CELL)������(CB,INIB ��¸�ߤ��ʤ�) #_NFEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for((i)=0;(i)<0;(i)++){

#define END_FOREACH_CELL   }

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tTarget3_TECSGENH */
