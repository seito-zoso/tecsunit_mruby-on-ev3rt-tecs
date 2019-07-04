/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef tTarget2_TECSGEN_H
#define tTarget2_TECSGEN_H

/*
 * celltype          :  tTarget2
 * global name       :  tTarget2
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
#include "sTarget2_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� CB (���ߡ�)����� #_CCDP_# */
typedef struct tag_tTarget2_CB {
    int  dummy;
} tTarget2_CB;
/* ���󥰥�ȥ󥻥� CB �ץ�ȥ�������� #_MCPB_# */

/* ���륿���פ�IDX�� #_CTIX_# */
typedef int   tTarget2_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* sTarget2 */
int          tTarget2_eTarget2_add(tTarget2_IDX idx, int arg1, int arg2);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tTarget2_ID_BASE            (1)  /* ID �Υ١���  #_NIDB_# */
#define tTarget2_N_CELL             (1)  /* ����θĿ�  #_NCEL_# */

/* IDX�������������å��ޥ��� #_CVI_# */
#define tTarget2_VALID_IDX(IDX) (1)


/* ����CB������ޥ��� #_GCB_# */
#define tTarget2_GET_CELLCB(idx) ((void *)0)
#ifndef TECSFLOW
#else  /* TECSFLOW */
#endif /* TECSFLOW */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* ������������ȥ�ؿ��ץ�ȥ����������VMT���׺�Ŭ���ˤ�껲�Ȥ����Ρ� #_EPSP_# */
/* eTarget2 */
int            tTarget2_eTarget2_add_skel( const struct tag_sTarget2_VDES *epd, int arg1, int arg2);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDX�������������å��ޥ����û�̷��� #_CVIA_# */
#define VALID_IDX(IDX)  tTarget2_VALID_IDX(IDX)


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  tTarget2_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	tTarget2_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	tTarget2_IDX




/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eTarget2_add     tTarget2_eTarget2_add

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

#endif /* tTarget2_TECSGENH */
