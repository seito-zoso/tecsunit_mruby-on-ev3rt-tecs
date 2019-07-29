/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef nTECSInfo_tRawEntryDescriptorInfo_TECSGEN_H
#define nTECSInfo_tRawEntryDescriptorInfo_TECSGEN_H

/*
 * celltype          :  tRawEntryDescriptorInfo
 * global name       :  nTECSInfo_tRawEntryDescriptorInfo
 * multi-domain      :  no
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  no
 * has_INIB          :  yes
 * rom               :  yes
 * CB initializer    :  yes
 */

/* �����Х�إå� #_IGH_# */
#include "global_tecsgen.h"

/* �����˥���إå� #_ISH_# */
#include "nTECSInfo_sRawEntryDescriptorInfo_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� INIB ����� #_CIP_# */
typedef const struct tag_nTECSInfo_tRawEntryDescriptorInfo_INIB {
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    int_t          size;
    const void**         rawEntryDescriptor;
}  nTECSInfo_tRawEntryDescriptorInfo_INIB;

/* CB ��¸�ߤ��ʤ���INIB �� CB ������˻��Ѥ��뤿��� define #_DCI_# */
#define nTECSInfo_tRawEntryDescriptorInfo_CB_tab           nTECSInfo_tRawEntryDescriptorInfo_INIB_tab
#define nTECSInfo_tRawEntryDescriptorInfo_CB               nTECSInfo_tRawEntryDescriptorInfo_INIB
#define tag_nTECSInfo_tRawEntryDescriptorInfo_CB           tag_nTECSInfo_tRawEntryDescriptorInfo_INIB

/* ���󥰥�ȥ󥻥� CB �ץ�ȥ�������� #_MCPB_# */
extern nTECSInfo_tRawEntryDescriptorInfo_INIB  nTECSInfo_tRawEntryDescriptorInfo_INIB_tab[];

/* ���륿���פ�IDX�� #_CTIX_# */
typedef const struct tag_nTECSInfo_tRawEntryDescriptorInfo_INIB *nTECSInfo_tRawEntryDescriptorInfo_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* nTECSInfo_sRawEntryDescriptorInfo */
uint16_t     nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_getNRawEntryDescriptorInfo(nTECSInfo_tRawEntryDescriptorInfo_IDX idx);
ER           nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_getRawDescriptor(nTECSInfo_tRawEntryDescriptorInfo_IDX idx, int_t subsc, void** rawDesc);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define nTECSInfo_tRawEntryDescriptorInfo_ID_BASE        (1)  /* ID �Υ١���  #_NIDB_# */
#define nTECSInfo_tRawEntryDescriptorInfo_N_CELL       (39)  /* ����θĿ�  #_NCEL_# */

/* IDX�������������å��ޥ��� #_CVI_# */
#define nTECSInfo_tRawEntryDescriptorInfo_VALID_IDX(IDX) (1)


/* ����CB������ޥ��� #_GCB_# */
#define nTECSInfo_tRawEntryDescriptorInfo_GET_CELLCB(idx) (idx)

/* °�����������ޥ��� #_AAM_# */
#define nTECSInfo_tRawEntryDescriptorInfo_ATTR_size( p_that )	((p_that)->size)
#define nTECSInfo_tRawEntryDescriptorInfo_ATTR_rawEntryDescriptor( p_that )	((p_that)->rawEntryDescriptor)

#define nTECSInfo_tRawEntryDescriptorInfo_GET_size(p_that)	((p_that)->size)
#define nTECSInfo_tRawEntryDescriptorInfo_GET_rawEntryDescriptor(p_that)	((p_that)->rawEntryDescriptor)



#ifndef TECSFLOW
#else  /* TECSFLOW */
#endif /* TECSFLOW */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* ������������ȥ�ؿ��ץ�ȥ����������VMT���׺�Ŭ���ˤ�껲�Ȥ����Ρ� #_EPSP_# */
/* eRawEntryDescriptor */
uint16_t       nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_getNRawEntryDescriptorInfo_skel( const struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES *epd);
ER             nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_getRawDescriptor_skel( const struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES *epd, int_t subsc, void** rawDesc);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDX�������������å��ޥ����û�̷��� #_CVIA_# */
#define VALID_IDX(IDX)  nTECSInfo_tRawEntryDescriptorInfo_VALID_IDX(IDX)


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  nTECSInfo_tRawEntryDescriptorInfo_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	nTECSInfo_tRawEntryDescriptorInfo_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	nTECSInfo_tRawEntryDescriptorInfo_IDX

#define tRawEntryDescriptorInfo_IDX  nTECSInfo_tRawEntryDescriptorInfo_IDX

/* °�����������ޥ���(û�̷�) #_AAMA_# */
#define ATTR_size            nTECSInfo_tRawEntryDescriptorInfo_ATTR_size( p_cellcb )
#define ATTR_rawEntryDescriptor nTECSInfo_tRawEntryDescriptorInfo_ATTR_rawEntryDescriptor( p_cellcb )





/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eRawEntryDescriptor_getNRawEntryDescriptorInfo nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_getNRawEntryDescriptorInfo
#define eRawEntryDescriptor_getRawDescriptor nTECSInfo_tRawEntryDescriptorInfo_eRawEntryDescriptor_getRawDescriptor

/* ���ƥ졼�������� (FOREACH_CELL)������ #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < nTECSInfo_tRawEntryDescriptorInfo_N_CELL; (i)++ ){ \
       (p_cb) = &nTECSInfo_tRawEntryDescriptorInfo_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* nTECSInfo_tRawEntryDescriptorInfo_TECSGENH */
