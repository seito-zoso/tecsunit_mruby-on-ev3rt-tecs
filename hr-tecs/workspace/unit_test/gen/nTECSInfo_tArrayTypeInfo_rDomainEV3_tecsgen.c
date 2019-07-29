/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "nTECSInfo_tArrayTypeInfo_tecsgen.h"
#include "nTECSInfo_tArrayTypeInfo_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eTypeInfo */
struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES {
    const struct tag_nTECSInfo_sTypeInfo_VMT *vmt;
    tArrayTypeInfo_IDX  idx;
};

/* ������������ȥ�ؿ� #_EPSF_# */
/* eTypeInfo */
ER             nTECSInfo_tArrayTypeInfo_eTypeInfo_getName_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, char_t* name, int_t max_len)
{
    struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tArrayTypeInfo_eTypeInfo_getName( lepd->idx, name, max_len );
}
uint16_t       nTECSInfo_tArrayTypeInfo_eTypeInfo_getNameLength_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd)
{
    struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tArrayTypeInfo_eTypeInfo_getNameLength( lepd->idx );
}
uint32_t       nTECSInfo_tArrayTypeInfo_eTypeInfo_getSize_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd)
{
    struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tArrayTypeInfo_eTypeInfo_getSize( lepd->idx );
}
int8_t         nTECSInfo_tArrayTypeInfo_eTypeInfo_getKind_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd)
{
    struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tArrayTypeInfo_eTypeInfo_getKind( lepd->idx );
}
uint32_t       nTECSInfo_tArrayTypeInfo_eTypeInfo_getNType_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd)
{
    struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tArrayTypeInfo_eTypeInfo_getNType( lepd->idx );
}
ER             nTECSInfo_tArrayTypeInfo_eTypeInfo_getTypeInfo_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, Descriptor( nTECSInfo_sTypeInfo )* desc)
{
    struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tArrayTypeInfo_eTypeInfo_getTypeInfo( lepd->idx, desc );
}
uint32_t       nTECSInfo_tArrayTypeInfo_eTypeInfo_getNMember_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd)
{
    struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tArrayTypeInfo_eTypeInfo_getNMember( lepd->idx );
}
ER             nTECSInfo_tArrayTypeInfo_eTypeInfo_getMemberInfo_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, uint32_t ith, Descriptor( nTECSInfo_sVarDeclInfo )* desc)
{
    struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tArrayTypeInfo_eTypeInfo_getMemberInfo( lepd->idx, ith, desc );
}

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eTypeInfo */
const struct tag_nTECSInfo_sTypeInfo_VMT nTECSInfo_tArrayTypeInfo_eTypeInfo_MT_ = {
    nTECSInfo_tArrayTypeInfo_eTypeInfo_getName_skel,
    nTECSInfo_tArrayTypeInfo_eTypeInfo_getNameLength_skel,
    nTECSInfo_tArrayTypeInfo_eTypeInfo_getSize_skel,
    nTECSInfo_tArrayTypeInfo_eTypeInfo_getKind_skel,
    nTECSInfo_tArrayTypeInfo_eTypeInfo_getNType_skel,
    nTECSInfo_tArrayTypeInfo_eTypeInfo_getTypeInfo_skel,
    nTECSInfo_tArrayTypeInfo_eTypeInfo_getNMember_skel,
    nTECSInfo_tArrayTypeInfo_eTypeInfo_getMemberInfo_skel,
};

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */
extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_ACPTNTypeInfo_eTypeInfo_des;

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
/* ���� INIB #_INIB_# */
nTECSInfo_tArrayTypeInfo_INIB nTECSInfo_tArrayTypeInfo_INIB_tab[] = {
    /* cell: nTECSInfo_tArrayTypeInfo_CB_tab[0]:  ACPTN_Array4_TypeInfo id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_ACPTNTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ACPTN[4]",                              /* name */
        5,                                       /* typeKind */
        sizeof(ACPTN[4]),                        /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
};

extern const struct tag_nTECSInfo_sTypeInfo_VMT nTECSInfo_tArrayTypeInfo_eTypeInfo_MT_;
/* �������ǥ�������ץ� #_EPD_# */
extern const struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_ACPTN_Array4_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_ACPTN_Array4_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tArrayTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tArrayTypeInfo_INIB_tab[0],      /* INIB 3 */
};
/* CB ����������� #_CIC_# */
void
nTECSInfo_tArrayTypeInfo_CB_initialize()
{
    nTECSInfo_tArrayTypeInfo_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
