/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "nTECSInfo_tTECSInfo_tecsgen.h"
#include "nTECSInfo_tTECSInfo_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eTECSInfo */
struct tag_nTECSInfo_tTECSInfo_eTECSInfo_DES {
    const struct tag_nTECSInfo_sTECSInfo_VMT *vmt;
    int           idx;
};

/* ������������ȥ�ؿ� #_EPSF_# */
/* eTECSInfo */
ER             nTECSInfo_tTECSInfo_eTECSInfo_findNamespace_skel( const struct tag_nTECSInfo_sTECSInfo_VDES *epd, const char_t* namespace_path, Descriptor( nTECSInfo_sNamespaceInfo )* nsDesc)
{
    return nTECSInfo_tTECSInfo_eTECSInfo_findNamespace( namespace_path, nsDesc );
}
ER             nTECSInfo_tTECSInfo_eTECSInfo_findRegion_skel( const struct tag_nTECSInfo_sTECSInfo_VDES *epd, const char_t* namespace_path, Descriptor( nTECSInfo_sRegionInfo )* regionDesc)
{
    return nTECSInfo_tTECSInfo_eTECSInfo_findRegion( namespace_path, regionDesc );
}
ER             nTECSInfo_tTECSInfo_eTECSInfo_findSignature_skel( const struct tag_nTECSInfo_sTECSInfo_VDES *epd, const char_t* namespace_path, Descriptor( nTECSInfo_sSignatureInfo )* signatureDesc)
{
    return nTECSInfo_tTECSInfo_eTECSInfo_findSignature( namespace_path, signatureDesc );
}
ER             nTECSInfo_tTECSInfo_eTECSInfo_findCelltype_skel( const struct tag_nTECSInfo_sTECSInfo_VDES *epd, const char_t* namespace_path, Descriptor( nTECSInfo_sCelltypeInfo )* celltypeDesc)
{
    return nTECSInfo_tTECSInfo_eTECSInfo_findCelltype( namespace_path, celltypeDesc );
}
ER             nTECSInfo_tTECSInfo_eTECSInfo_findCell_skel( const struct tag_nTECSInfo_sTECSInfo_VDES *epd, const char_t* namespace_path, Descriptor( nTECSInfo_sCellInfo )* cellDesc)
{
    return nTECSInfo_tTECSInfo_eTECSInfo_findCell( namespace_path, cellDesc );
}
ER             nTECSInfo_tTECSInfo_eTECSInfo_findRawEntryDescriptor_skel( const struct tag_nTECSInfo_sTECSInfo_VDES *epd, const char_t* namespace_path, Descriptor( nTECSInfo_sRawEntryDescriptorInfo )* rawEntryDescDesc, Descriptor( nTECSInfo_sEntryInfo )* entryDesc)
{
    return nTECSInfo_tTECSInfo_eTECSInfo_findRawEntryDescriptor( namespace_path, rawEntryDescDesc, entryDesc );
}
ER             nTECSInfo_tTECSInfo_eTECSInfo_findRawEntryDescriptor_unsafe_skel( const struct tag_nTECSInfo_sTECSInfo_VDES *epd, const char_t* namespace_path, uint32_t subsc, void** rawDesc)
{
    return nTECSInfo_tTECSInfo_eTECSInfo_findRawEntryDescriptor_unsafe( namespace_path, subsc, rawDesc );
}

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eTECSInfo */
const struct tag_nTECSInfo_sTECSInfo_VMT nTECSInfo_tTECSInfo_eTECSInfo_MT_ = {
    nTECSInfo_tTECSInfo_eTECSInfo_findNamespace_skel,
    nTECSInfo_tTECSInfo_eTECSInfo_findRegion_skel,
    nTECSInfo_tTECSInfo_eTECSInfo_findSignature_skel,
    nTECSInfo_tTECSInfo_eTECSInfo_findCelltype_skel,
    nTECSInfo_tTECSInfo_eTECSInfo_findCell_skel,
    nTECSInfo_tTECSInfo_eTECSInfo_findRawEntryDescriptor_skel,
    nTECSInfo_tTECSInfo_eTECSInfo_findRawEntryDescriptor_unsafe_skel,
};

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
extern const struct tag_nTECSInfo_sTECSInfo_VMT nTECSInfo_tTECSInfo_eTECSInfo_MT_;
/* �������ǥ�������ץ� #_EPD_# */
extern const struct tag_nTECSInfo_tTECSInfo_eTECSInfo_DES rDomainEV3_TECSInfo_eTECSInfo_des;
const struct tag_nTECSInfo_tTECSInfo_eTECSInfo_DES rDomainEV3_TECSInfo_eTECSInfo_des = {
    &nTECSInfo_tTECSInfo_eTECSInfo_MT_,
    0,
};
/* CB ����������� #_CIC_# */
void
nTECSInfo_tTECSInfo_CB_initialize()
{
    SET_CB_INIB_POINTER(i,p_cb)
    INITIALIZE_CB()
}
