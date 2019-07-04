/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef nTECSInfo_tIntTypeInfo_TECSGEN_H
#define nTECSInfo_tIntTypeInfo_TECSGEN_H

/*
 * celltype          :  tIntTypeInfo
 * global name       :  nTECSInfo_tIntTypeInfo
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
#include "nTECSInfo_sTypeInfo_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� INIB ����� #_CIP_# */
typedef const struct tag_nTECSInfo_tIntTypeInfo_INIB {
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    char_t*        name;
    int8_t         typeKind;
    uint32_t       size;
    bool_t         b_const;
    bool_t         b_volatile;
}  nTECSInfo_tIntTypeInfo_INIB;

/* CB ��¸�ߤ��ʤ���INIB �� CB ������˻��Ѥ��뤿��� define #_DCI_# */
#define nTECSInfo_tIntTypeInfo_CB_tab           nTECSInfo_tIntTypeInfo_INIB_tab
#define nTECSInfo_tIntTypeInfo_CB               nTECSInfo_tIntTypeInfo_INIB
#define tag_nTECSInfo_tIntTypeInfo_CB           tag_nTECSInfo_tIntTypeInfo_INIB

/* ���󥰥�ȥ󥻥� CB �ץ�ȥ�������� #_MCPB_# */
extern nTECSInfo_tIntTypeInfo_INIB  nTECSInfo_tIntTypeInfo_INIB_tab[];

/* ���륿���פ�IDX�� #_CTIX_# */
typedef const struct tag_nTECSInfo_tIntTypeInfo_INIB *nTECSInfo_tIntTypeInfo_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* nTECSInfo_sTypeInfo */
ER           nTECSInfo_tIntTypeInfo_eTypeInfo_getName(nTECSInfo_tIntTypeInfo_IDX idx, char_t* name, int_t max_len);
uint16_t     nTECSInfo_tIntTypeInfo_eTypeInfo_getNameLength(nTECSInfo_tIntTypeInfo_IDX idx);
uint32_t     nTECSInfo_tIntTypeInfo_eTypeInfo_getSize(nTECSInfo_tIntTypeInfo_IDX idx);
int8_t       nTECSInfo_tIntTypeInfo_eTypeInfo_getKind(nTECSInfo_tIntTypeInfo_IDX idx);
uint32_t     nTECSInfo_tIntTypeInfo_eTypeInfo_getNType(nTECSInfo_tIntTypeInfo_IDX idx);
ER           nTECSInfo_tIntTypeInfo_eTypeInfo_getTypeInfo(nTECSInfo_tIntTypeInfo_IDX idx, Descriptor( nTECSInfo_sTypeInfo )* desc);
uint32_t     nTECSInfo_tIntTypeInfo_eTypeInfo_getNMember(nTECSInfo_tIntTypeInfo_IDX idx);
ER           nTECSInfo_tIntTypeInfo_eTypeInfo_getMemberInfo(nTECSInfo_tIntTypeInfo_IDX idx, uint32_t ith, Descriptor( nTECSInfo_sVarDeclInfo )* desc);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define nTECSInfo_tIntTypeInfo_ID_BASE        (1)  /* ID �Υ١���  #_NIDB_# */
#define nTECSInfo_tIntTypeInfo_N_CELL       (17)  /* ����θĿ�  #_NCEL_# */

/* IDX�������������å��ޥ��� #_CVI_# */
#define nTECSInfo_tIntTypeInfo_VALID_IDX(IDX) (1)


/* ����CB������ޥ��� #_GCB_# */
#define nTECSInfo_tIntTypeInfo_GET_CELLCB(idx) (idx)

/* °�����������ޥ��� #_AAM_# */
#define nTECSInfo_tIntTypeInfo_ATTR_name( p_that )	((p_that)->name)
#define nTECSInfo_tIntTypeInfo_ATTR_typeKind( p_that )	((p_that)->typeKind)
#define nTECSInfo_tIntTypeInfo_ATTR_size( p_that )	((p_that)->size)
#define nTECSInfo_tIntTypeInfo_ATTR_b_const( p_that )	((p_that)->b_const)
#define nTECSInfo_tIntTypeInfo_ATTR_b_volatile( p_that )	((p_that)->b_volatile)

#define nTECSInfo_tIntTypeInfo_GET_name(p_that)	((p_that)->name)
#define nTECSInfo_tIntTypeInfo_GET_typeKind(p_that)	((p_that)->typeKind)
#define nTECSInfo_tIntTypeInfo_GET_size(p_that)	((p_that)->size)
#define nTECSInfo_tIntTypeInfo_GET_b_const(p_that)	((p_that)->b_const)
#define nTECSInfo_tIntTypeInfo_GET_b_volatile(p_that)	((p_that)->b_volatile)



#ifndef TECSFLOW
#else  /* TECSFLOW */
#endif /* TECSFLOW */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* ������������ȥ�ؿ��ץ�ȥ����������VMT���׺�Ŭ���ˤ�껲�Ȥ����Ρ� #_EPSP_# */
/* eTypeInfo */
ER             nTECSInfo_tIntTypeInfo_eTypeInfo_getName_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, char_t* name, int_t max_len);
uint16_t       nTECSInfo_tIntTypeInfo_eTypeInfo_getNameLength_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd);
uint32_t       nTECSInfo_tIntTypeInfo_eTypeInfo_getSize_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd);
int8_t         nTECSInfo_tIntTypeInfo_eTypeInfo_getKind_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd);
uint32_t       nTECSInfo_tIntTypeInfo_eTypeInfo_getNType_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd);
ER             nTECSInfo_tIntTypeInfo_eTypeInfo_getTypeInfo_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, Descriptor( nTECSInfo_sTypeInfo )* desc);
uint32_t       nTECSInfo_tIntTypeInfo_eTypeInfo_getNMember_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd);
ER             nTECSInfo_tIntTypeInfo_eTypeInfo_getMemberInfo_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, uint32_t ith, Descriptor( nTECSInfo_sVarDeclInfo )* desc);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDX�������������å��ޥ����û�̷��� #_CVIA_# */
#define VALID_IDX(IDX)  nTECSInfo_tIntTypeInfo_VALID_IDX(IDX)


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  nTECSInfo_tIntTypeInfo_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	nTECSInfo_tIntTypeInfo_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	nTECSInfo_tIntTypeInfo_IDX

#define tIntTypeInfo_IDX  nTECSInfo_tIntTypeInfo_IDX

/* °�����������ޥ���(û�̷�) #_AAMA_# */
#define ATTR_name            nTECSInfo_tIntTypeInfo_ATTR_name( p_cellcb )
#define ATTR_typeKind        nTECSInfo_tIntTypeInfo_ATTR_typeKind( p_cellcb )
#define ATTR_size            nTECSInfo_tIntTypeInfo_ATTR_size( p_cellcb )
#define ATTR_b_const         nTECSInfo_tIntTypeInfo_ATTR_b_const( p_cellcb )
#define ATTR_b_volatile      nTECSInfo_tIntTypeInfo_ATTR_b_volatile( p_cellcb )





/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eTypeInfo_getName nTECSInfo_tIntTypeInfo_eTypeInfo_getName
#define eTypeInfo_getNameLength nTECSInfo_tIntTypeInfo_eTypeInfo_getNameLength
#define eTypeInfo_getSize nTECSInfo_tIntTypeInfo_eTypeInfo_getSize
#define eTypeInfo_getKind nTECSInfo_tIntTypeInfo_eTypeInfo_getKind
#define eTypeInfo_getNType nTECSInfo_tIntTypeInfo_eTypeInfo_getNType
#define eTypeInfo_getTypeInfo nTECSInfo_tIntTypeInfo_eTypeInfo_getTypeInfo
#define eTypeInfo_getNMember nTECSInfo_tIntTypeInfo_eTypeInfo_getNMember
#define eTypeInfo_getMemberInfo nTECSInfo_tIntTypeInfo_eTypeInfo_getMemberInfo

/* ���ƥ졼�������� (FOREACH_CELL)������ #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < nTECSInfo_tIntTypeInfo_N_CELL; (i)++ ){ \
       (p_cb) = &nTECSInfo_tIntTypeInfo_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* nTECSInfo_tIntTypeInfo_TECSGENH */
