/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef nTECSInfo_tCellInfo_TECSGEN_H
#define nTECSInfo_tCellInfo_TECSGEN_H

/*
 * celltype          :  tCellInfo
 * global name       :  nTECSInfo_tCellInfo
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
#include "nTECSInfo_sCelltypeInfo_tecsgen.h"
#include "nTECSInfo_sRawEntryDescriptorInfo_tecsgen.h"
#include "nTECSInfo_sCellInfo_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� INIB ����� #_CIP_# */
typedef const struct tag_nTECSInfo_tCellInfo_INIB {
    /* call port #_TCP_# */
    struct tag_nTECSInfo_sCelltypeInfo_VDES const*cCelltypeInfo;
    struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES *const*cRawEntryDescriptor;
    int_t n_cRawEntryDescriptor;
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    char_t*        name;
    void*          cbp;
    void*          inibp;
}  nTECSInfo_tCellInfo_INIB;

/* CB ��¸�ߤ��ʤ���INIB �� CB ������˻��Ѥ��뤿��� define #_DCI_# */
#define nTECSInfo_tCellInfo_CB_tab           nTECSInfo_tCellInfo_INIB_tab
#define nTECSInfo_tCellInfo_CB               nTECSInfo_tCellInfo_INIB
#define tag_nTECSInfo_tCellInfo_CB           tag_nTECSInfo_tCellInfo_INIB

/* ���󥰥�ȥ󥻥� CB �ץ�ȥ�������� #_MCPB_# */
extern nTECSInfo_tCellInfo_INIB  nTECSInfo_tCellInfo_INIB_tab[];

/* ���륿���פ�IDX�� #_CTIX_# */
typedef const struct tag_nTECSInfo_tCellInfo_INIB *nTECSInfo_tCellInfo_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* nTECSInfo_sCellInfo */
ER           nTECSInfo_tCellInfo_eCellInfo_getName(nTECSInfo_tCellInfo_IDX idx, char_t* name, int_t max_len);
uint16_t     nTECSInfo_tCellInfo_eCellInfo_getNameLength(nTECSInfo_tCellInfo_IDX idx);
uint32_t     nTECSInfo_tCellInfo_eCellInfo_getNRawEntryDescriptorInfo(nTECSInfo_tCellInfo_IDX idx);
ER           nTECSInfo_tCellInfo_eCellInfo_getRawEntryDescriptorInfo(nTECSInfo_tCellInfo_IDX idx, int_t index, Descriptor( nTECSInfo_sRawEntryDescriptorInfo )* desc);
void         nTECSInfo_tCellInfo_eCellInfo_getCelltypeInfo(nTECSInfo_tCellInfo_IDX idx, Descriptor( nTECSInfo_sCelltypeInfo )* desc);
void         nTECSInfo_tCellInfo_eCellInfo_getCBP(nTECSInfo_tCellInfo_IDX idx, void** cbp);
void         nTECSInfo_tCellInfo_eCellInfo_getINIBP(nTECSInfo_tCellInfo_IDX idx, void** inibp);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define nTECSInfo_tCellInfo_ID_BASE        (1)  /* ID �Υ١���  #_NIDB_# */
#define nTECSInfo_tCellInfo_N_CELL       (64)  /* ����θĿ�  #_NCEL_# */

/* IDX�������������å��ޥ��� #_CVI_# */
#define nTECSInfo_tCellInfo_VALID_IDX(IDX) (1)

/* �ƤӸ�������礭��������ޥ��� #_NCPA_# */
#define N_CP_cRawEntryDescriptor(p_that)  ((p_that)->n_cRawEntryDescriptor)
#define NCP_cRawEntryDescriptor           (N_CP_cRawEntryDescriptor(p_cellcb))
/* optional �ƤӸ���ƥ��Ȥ���ޥ��� #_TOCP_# */
#define nTECSInfo_tCellInfo_is_cRawEntryDescriptor_joined(p_that,subscript) \
	  (((p_that)->cRawEntryDescriptor!=0)\
	  &&((p_that)->cRawEntryDescriptor[subscript]!=0))

/* ����CB������ޥ��� #_GCB_# */
#define nTECSInfo_tCellInfo_GET_CELLCB(idx) (idx)

/* °�����������ޥ��� #_AAM_# */
#define nTECSInfo_tCellInfo_ATTR_name( p_that )	((p_that)->name)
#define nTECSInfo_tCellInfo_ATTR_cbp( p_that )	((p_that)->cbp)
#define nTECSInfo_tCellInfo_ATTR_inibp( p_that )	((p_that)->inibp)

#define nTECSInfo_tCellInfo_GET_name(p_that)	((p_that)->name)
#define nTECSInfo_tCellInfo_GET_cbp(p_that)	((p_that)->cbp)
#define nTECSInfo_tCellInfo_GET_inibp(p_that)	((p_that)->inibp)



#ifndef TECSFLOW
 /* �ƤӸ��ؿ��ޥ��� #_CPM_# */
#define nTECSInfo_tCellInfo_cCelltypeInfo_getName( p_that, name, max_len ) \
	  (p_that)->cCelltypeInfo->VMT->getName__T( \
	   (p_that)->cCelltypeInfo, (name), (max_len) )
#define nTECSInfo_tCellInfo_cCelltypeInfo_getNameLength( p_that ) \
	  (p_that)->cCelltypeInfo->VMT->getNameLength__T( \
	   (p_that)->cCelltypeInfo )
#define nTECSInfo_tCellInfo_cCelltypeInfo_getNAttr( p_that ) \
	  (p_that)->cCelltypeInfo->VMT->getNAttr__T( \
	   (p_that)->cCelltypeInfo )
#define nTECSInfo_tCellInfo_cCelltypeInfo_getAttrInfo( p_that, ith, desc ) \
	  (p_that)->cCelltypeInfo->VMT->getAttrInfo__T( \
	   (p_that)->cCelltypeInfo, (ith), (desc) )
#define nTECSInfo_tCellInfo_cCelltypeInfo_getNVar( p_that ) \
	  (p_that)->cCelltypeInfo->VMT->getNVar__T( \
	   (p_that)->cCelltypeInfo )
#define nTECSInfo_tCellInfo_cCelltypeInfo_getVarInfo( p_that, ith, desc ) \
	  (p_that)->cCelltypeInfo->VMT->getVarInfo__T( \
	   (p_that)->cCelltypeInfo, (ith), (desc) )
#define nTECSInfo_tCellInfo_cCelltypeInfo_getNCall( p_that ) \
	  (p_that)->cCelltypeInfo->VMT->getNCall__T( \
	   (p_that)->cCelltypeInfo )
#define nTECSInfo_tCellInfo_cCelltypeInfo_getCallInfo( p_that, ith, desc ) \
	  (p_that)->cCelltypeInfo->VMT->getCallInfo__T( \
	   (p_that)->cCelltypeInfo, (ith), (desc) )
#define nTECSInfo_tCellInfo_cCelltypeInfo_getNEntry( p_that ) \
	  (p_that)->cCelltypeInfo->VMT->getNEntry__T( \
	   (p_that)->cCelltypeInfo )
#define nTECSInfo_tCellInfo_cCelltypeInfo_getEntryInfo( p_that, ith, desc ) \
	  (p_that)->cCelltypeInfo->VMT->getEntryInfo__T( \
	   (p_that)->cCelltypeInfo, (ith), (desc) )
#define nTECSInfo_tCellInfo_cCelltypeInfo_isSingleton( p_that ) \
	  (p_that)->cCelltypeInfo->VMT->isSingleton__T( \
	   (p_that)->cCelltypeInfo )
#define nTECSInfo_tCellInfo_cCelltypeInfo_isIDX_is_ID( p_that ) \
	  (p_that)->cCelltypeInfo->VMT->isIDX_is_ID__T( \
	   (p_that)->cCelltypeInfo )
#define nTECSInfo_tCellInfo_cCelltypeInfo_sizeOfCB( p_that ) \
	  (p_that)->cCelltypeInfo->VMT->sizeOfCB__T( \
	   (p_that)->cCelltypeInfo )
#define nTECSInfo_tCellInfo_cCelltypeInfo_sizeOfINIB( p_that ) \
	  (p_that)->cCelltypeInfo->VMT->sizeOfINIB__T( \
	   (p_that)->cCelltypeInfo )
#define nTECSInfo_tCellInfo_cRawEntryDescriptor_getNRawEntryDescriptorInfo( p_that, subscript ) \
	  (p_that)->cRawEntryDescriptor[subscript]->VMT->getNRawEntryDescriptorInfo__T( \
	   (p_that)->cRawEntryDescriptor[subscript] )
#define nTECSInfo_tCellInfo_cRawEntryDescriptor_getRawDescriptor( p_that, subscript, subsc, rawDesc ) \
	  (p_that)->cRawEntryDescriptor[subscript]->VMT->getRawDescriptor__T( \
	   (p_that)->cRawEntryDescriptor[subscript], (subsc), (rawDesc) )

#else  /* TECSFLOW */
#define nTECSInfo_tCellInfo_cCelltypeInfo_getName( p_that, name, max_len ) \
	  (p_that)->cCelltypeInfo.getName__T( \
 (name), (max_len) )
#define nTECSInfo_tCellInfo_cCelltypeInfo_getNameLength( p_that ) \
	  (p_that)->cCelltypeInfo.getNameLength__T( \
 )
#define nTECSInfo_tCellInfo_cCelltypeInfo_getNAttr( p_that ) \
	  (p_that)->cCelltypeInfo.getNAttr__T( \
 )
#define nTECSInfo_tCellInfo_cCelltypeInfo_getAttrInfo( p_that, ith, desc ) \
	  (p_that)->cCelltypeInfo.getAttrInfo__T( \
 (ith), (desc) )
#define nTECSInfo_tCellInfo_cCelltypeInfo_getNVar( p_that ) \
	  (p_that)->cCelltypeInfo.getNVar__T( \
 )
#define nTECSInfo_tCellInfo_cCelltypeInfo_getVarInfo( p_that, ith, desc ) \
	  (p_that)->cCelltypeInfo.getVarInfo__T( \
 (ith), (desc) )
#define nTECSInfo_tCellInfo_cCelltypeInfo_getNCall( p_that ) \
	  (p_that)->cCelltypeInfo.getNCall__T( \
 )
#define nTECSInfo_tCellInfo_cCelltypeInfo_getCallInfo( p_that, ith, desc ) \
	  (p_that)->cCelltypeInfo.getCallInfo__T( \
 (ith), (desc) )
#define nTECSInfo_tCellInfo_cCelltypeInfo_getNEntry( p_that ) \
	  (p_that)->cCelltypeInfo.getNEntry__T( \
 )
#define nTECSInfo_tCellInfo_cCelltypeInfo_getEntryInfo( p_that, ith, desc ) \
	  (p_that)->cCelltypeInfo.getEntryInfo__T( \
 (ith), (desc) )
#define nTECSInfo_tCellInfo_cCelltypeInfo_isSingleton( p_that ) \
	  (p_that)->cCelltypeInfo.isSingleton__T( \
 )
#define nTECSInfo_tCellInfo_cCelltypeInfo_isIDX_is_ID( p_that ) \
	  (p_that)->cCelltypeInfo.isIDX_is_ID__T( \
 )
#define nTECSInfo_tCellInfo_cCelltypeInfo_sizeOfCB( p_that ) \
	  (p_that)->cCelltypeInfo.sizeOfCB__T( \
 )
#define nTECSInfo_tCellInfo_cCelltypeInfo_sizeOfINIB( p_that ) \
	  (p_that)->cCelltypeInfo.sizeOfINIB__T( \
 )
#define nTECSInfo_tCellInfo_cRawEntryDescriptor_getNRawEntryDescriptorInfo( p_that, subscript ) \
	  (p_that)->cRawEntryDescriptor[subscript].getNRawEntryDescriptorInfo__T( \
 )
#define nTECSInfo_tCellInfo_cRawEntryDescriptor_getRawDescriptor( p_that, subscript, subsc, rawDesc ) \
	  (p_that)->cRawEntryDescriptor[subscript].getRawDescriptor__T( \
 (subsc), (rawDesc) )

#endif /* TECSFLOW */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* ������������ȥ�ؿ��ץ�ȥ����������VMT���׺�Ŭ���ˤ�껲�Ȥ����Ρ� #_EPSP_# */
/* eCellInfo */
ER             nTECSInfo_tCellInfo_eCellInfo_getName_skel( const struct tag_nTECSInfo_sCellInfo_VDES *epd, char_t* name, int_t max_len);
uint16_t       nTECSInfo_tCellInfo_eCellInfo_getNameLength_skel( const struct tag_nTECSInfo_sCellInfo_VDES *epd);
uint32_t       nTECSInfo_tCellInfo_eCellInfo_getNRawEntryDescriptorInfo_skel( const struct tag_nTECSInfo_sCellInfo_VDES *epd);
ER             nTECSInfo_tCellInfo_eCellInfo_getRawEntryDescriptorInfo_skel( const struct tag_nTECSInfo_sCellInfo_VDES *epd, int_t index, Descriptor( nTECSInfo_sRawEntryDescriptorInfo )* desc);
void           nTECSInfo_tCellInfo_eCellInfo_getCelltypeInfo_skel( const struct tag_nTECSInfo_sCellInfo_VDES *epd, Descriptor( nTECSInfo_sCelltypeInfo )* desc);
void           nTECSInfo_tCellInfo_eCellInfo_getCBP_skel( const struct tag_nTECSInfo_sCellInfo_VDES *epd, void** cbp);
void           nTECSInfo_tCellInfo_eCellInfo_getINIBP_skel( const struct tag_nTECSInfo_sCellInfo_VDES *epd, void** inibp);

#ifndef TOPPERS_CB_TYPE_ONLY

/* �ǥ�������ץ����ȴؿ� #_CRD_# */
/* [ref_desc] cCelltypeInfo */
Inline Descriptor( nTECSInfo_sCelltypeInfo )
nTECSInfo_tCellInfo_cCelltypeInfo_refer_to_descriptor( nTECSInfo_tCellInfo_CB  *p_that )
{
    Descriptor( nTECSInfo_sCelltypeInfo )  des;
    nTECSInfo_tCellInfo_CB *p_cellcb = p_that;
    /* cast is ncecessary for removing 'const'  */
    des.vdes = (struct tag_nTECSInfo_sCelltypeInfo_VDES *)p_cellcb->cCelltypeInfo;
    return des;
}

/* [ref_desc] cRawEntryDescriptor */
Inline Descriptor( nTECSInfo_sRawEntryDescriptorInfo )
nTECSInfo_tCellInfo_cRawEntryDescriptor_refer_to_descriptor( nTECSInfo_tCellInfo_CB  *p_that, int_t  i  )
{
    Descriptor( nTECSInfo_sRawEntryDescriptorInfo )  des;
    nTECSInfo_tCellInfo_CB *p_cellcb = p_that;
    /* cast is ncecessary for removing 'const'  */
    assert( 0 <= i && i < NCP_cRawEntryDescriptor );
    des.vdes = (struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES *)p_cellcb->cRawEntryDescriptor[ i ];
    return des;
}

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDX�������������å��ޥ����û�̷��� #_CVIA_# */
#define VALID_IDX(IDX)  nTECSInfo_tCellInfo_VALID_IDX(IDX)


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  nTECSInfo_tCellInfo_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	nTECSInfo_tCellInfo_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	nTECSInfo_tCellInfo_IDX

#define tCellInfo_IDX  nTECSInfo_tCellInfo_IDX

/* °�����������ޥ���(û�̷�) #_AAMA_# */
#define ATTR_name            nTECSInfo_tCellInfo_ATTR_name( p_cellcb )
#define ATTR_cbp             nTECSInfo_tCellInfo_ATTR_cbp( p_cellcb )
#define ATTR_inibp           nTECSInfo_tCellInfo_ATTR_inibp( p_cellcb )


/* �ƤӸ��ؿ��ޥ����û�̷���#_CPMA_# */
#define cCelltypeInfo_getName( name, max_len ) \
          nTECSInfo_tCellInfo_cCelltypeInfo_getName( p_cellcb, name, max_len )
#define cCelltypeInfo_getNameLength( ) \
          nTECSInfo_tCellInfo_cCelltypeInfo_getNameLength( p_cellcb )
#define cCelltypeInfo_getNAttr( ) \
          nTECSInfo_tCellInfo_cCelltypeInfo_getNAttr( p_cellcb )
#define cCelltypeInfo_getAttrInfo( ith, desc ) \
          nTECSInfo_tCellInfo_cCelltypeInfo_getAttrInfo( p_cellcb, ith, desc )
#define cCelltypeInfo_getNVar( ) \
          nTECSInfo_tCellInfo_cCelltypeInfo_getNVar( p_cellcb )
#define cCelltypeInfo_getVarInfo( ith, desc ) \
          nTECSInfo_tCellInfo_cCelltypeInfo_getVarInfo( p_cellcb, ith, desc )
#define cCelltypeInfo_getNCall( ) \
          nTECSInfo_tCellInfo_cCelltypeInfo_getNCall( p_cellcb )
#define cCelltypeInfo_getCallInfo( ith, desc ) \
          nTECSInfo_tCellInfo_cCelltypeInfo_getCallInfo( p_cellcb, ith, desc )
#define cCelltypeInfo_getNEntry( ) \
          nTECSInfo_tCellInfo_cCelltypeInfo_getNEntry( p_cellcb )
#define cCelltypeInfo_getEntryInfo( ith, desc ) \
          nTECSInfo_tCellInfo_cCelltypeInfo_getEntryInfo( p_cellcb, ith, desc )
#define cCelltypeInfo_isSingleton( ) \
          nTECSInfo_tCellInfo_cCelltypeInfo_isSingleton( p_cellcb )
#define cCelltypeInfo_isIDX_is_ID( ) \
          nTECSInfo_tCellInfo_cCelltypeInfo_isIDX_is_ID( p_cellcb )
#define cCelltypeInfo_sizeOfCB( ) \
          nTECSInfo_tCellInfo_cCelltypeInfo_sizeOfCB( p_cellcb )
#define cCelltypeInfo_sizeOfINIB( ) \
          nTECSInfo_tCellInfo_cCelltypeInfo_sizeOfINIB( p_cellcb )
#define cRawEntryDescriptor_getNRawEntryDescriptorInfo( subscript ) \
          nTECSInfo_tCellInfo_cRawEntryDescriptor_getNRawEntryDescriptorInfo( p_cellcb, subscript )
#define cRawEntryDescriptor_getRawDescriptor( subscript, subsc, rawDesc ) \
          nTECSInfo_tCellInfo_cRawEntryDescriptor_getRawDescriptor( p_cellcb, subscript, subsc, rawDesc )


/* �ǥ�������ץ����ȥޥ����û�̷��� #_CRDA_# */
#define cCelltypeInfo_refer_to_descriptor()\
          nTECSInfo_tCellInfo_cCelltypeInfo_refer_to_descriptor( p_cellcb )
#define cCelltypeInfo_ref_desc()\
          cCelltypeInfo_refer_to_descriptor()
#define cRawEntryDescriptor_refer_to_descriptor( i )\
          nTECSInfo_tCellInfo_cRawEntryDescriptor_refer_to_descriptor( p_cellcb, i )
#define cRawEntryDescriptor_ref_desc( i )\
          cRawEntryDescriptor_refer_to_descriptor( i )


/* optional �ƤӸ���ƥ��Ȥ���ޥ����û�̷��� #_TOCPA_# */
#define is_cRawEntryDescriptor_joined(subscript)\
		nTECSInfo_tCellInfo_is_cRawEntryDescriptor_joined(p_cellcb,subscript)

/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eCellInfo_getName nTECSInfo_tCellInfo_eCellInfo_getName
#define eCellInfo_getNameLength nTECSInfo_tCellInfo_eCellInfo_getNameLength
#define eCellInfo_getNRawEntryDescriptorInfo nTECSInfo_tCellInfo_eCellInfo_getNRawEntryDescriptorInfo
#define eCellInfo_getRawEntryDescriptorInfo nTECSInfo_tCellInfo_eCellInfo_getRawEntryDescriptorInfo
#define eCellInfo_getCelltypeInfo nTECSInfo_tCellInfo_eCellInfo_getCelltypeInfo
#define eCellInfo_getCBP nTECSInfo_tCellInfo_eCellInfo_getCBP
#define eCellInfo_getINIBP nTECSInfo_tCellInfo_eCellInfo_getINIBP

/* ���ƥ졼�������� (FOREACH_CELL)������ #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < nTECSInfo_tCellInfo_N_CELL; (i)++ ){ \
       (p_cb) = &nTECSInfo_tCellInfo_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* nTECSInfo_tCellInfo_TECSGENH */
