/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef nMruby_tsSharedMemory_TECSGEN_H
#define nMruby_tsSharedMemory_TECSGEN_H

/*
 * celltype          :  tsSharedMemory
 * global name       :  nMruby_tsSharedMemory
 * multi-domain      :  yes
 * idx_is_id(actual) :  yes(yes)
 * singleton         :  no
 * has_CB            :  no
 * has_INIB          :  no
 * rom               :  yes
 * CB initializer    :  yes
 */

/* �����Х�إå� #_IGH_# */
#include "global_tecsgen.h"

/* �����˥���إå� #_ISH_# */
#include "sSharedMemory_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� CB (���ߡ�)����� #_CCDP_# */
typedef struct tag_nMruby_tsSharedMemory_CB {
    int  dummy;
} nMruby_tsSharedMemory_CB;
/* ���󥰥�ȥ󥻥� CB �ץ�ȥ�������� #_MCPP_# */

/* ���륿���פ�IDX�� #_CTIX_# */
typedef ID nMruby_tsSharedMemory_IDX;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* ��Ŭ���Τ��Ỳ�Ȥ��륻�륿���פ� CB ������������� #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  nMruby_tsSharedMemory_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tSharedMemory_tecsgen.h"
#ifdef  nMruby_tsSharedMemory_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* nMruby_tsSharedMemory_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define nMruby_tsSharedMemory_ID_BASE        (1)  /* ID �Υ١���  #_NIDB_# */
#define nMruby_tsSharedMemory_N_CELL        (1)  /* ����θĿ�  #_NCEL_# */

/* IDX�������������å��ޥ��� #_CVI_# */
#define nMruby_tsSharedMemory_VALID_IDX(IDX) (nMruby_tsSharedMemory_ID_BASE <= (IDX) && (IDX) < nMruby_tsSharedMemory_ID_BASE+nMruby_tsSharedMemory_N_CELL)


/* ����CB������ޥ��� #_GCB_# */
#define nMruby_tsSharedMemory_GET_CELLCB(idx) ((void *)0)
#ifndef TECSFLOW
 /* �ƤӸ��ؿ��ޥ��� #_CPM_# */
#define nMruby_tsSharedMemory_cTECS_putVal( p_that, index, val ) \
	  tSharedMemory_eSharedMemory_putVal( \
	   &tSharedMemory_INIB_tab[0], (index), (val) )
#define nMruby_tsSharedMemory_cTECS_getVal( p_that, index ) \
	  tSharedMemory_eSharedMemory_getVal( \
	   &tSharedMemory_INIB_tab[0], (index) )
#define nMruby_tsSharedMemory_cTECS_getSize( p_that ) \
	  tSharedMemory_eSharedMemory_getSize( \
	   &tSharedMemory_INIB_tab[0] )

#else  /* TECSFLOW */
#define nMruby_tsSharedMemory_cTECS_putVal( p_that, index, val ) \
	  (p_that)->cTECS.putVal__T( \
 (index), (val) )
#define nMruby_tsSharedMemory_cTECS_getVal( p_that, index ) \
	  (p_that)->cTECS.getVal__T( \
 (index) )
#define nMruby_tsSharedMemory_cTECS_getSize( p_that ) \
	  (p_that)->cTECS.getSize__T( \
 )

#endif /* TECSFLOW */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDX�������������å��ޥ����û�̷��� #_CVIA_# */
#define VALID_IDX(IDX)  nMruby_tsSharedMemory_VALID_IDX(IDX)


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  nMruby_tsSharedMemory_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	nMruby_tsSharedMemory_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	nMruby_tsSharedMemory_IDX

#define tsSharedMemory_IDX  nMruby_tsSharedMemory_IDX
/* �ƤӸ��ؿ��ޥ����û�̷���#_CPMA_# */
#define cTECS_putVal( index, val ) \
          ((void)p_cellcb, nMruby_tsSharedMemory_cTECS_putVal( p_cellcb, index, val ))
#define cTECS_getVal( index ) \
          ((void)p_cellcb, nMruby_tsSharedMemory_cTECS_getVal( p_cellcb, index ))
#define cTECS_getSize( ) \
          ((void)p_cellcb, nMruby_tsSharedMemory_cTECS_getSize( p_cellcb ))



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

#endif /* nMruby_tsSharedMemory_TECSGENH */
