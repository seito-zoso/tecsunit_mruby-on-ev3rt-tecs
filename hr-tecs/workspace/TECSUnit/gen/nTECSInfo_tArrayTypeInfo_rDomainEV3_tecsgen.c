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
extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_charTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_ACPTNTypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_char_t_Array128_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_tTypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_int32_t_Array64_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_double64_t_Array32_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_double64_tTypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_char_t_Array256_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_tTypeInfo_eTypeInfo_des;

/* �ƤӸ����� #_CPA_# */










/* °�����ѿ������� #_AVAI_# */
/* ���� INIB #_INIB_# */
nTECSInfo_tArrayTypeInfo_INIB nTECSInfo_tArrayTypeInfo_INIB_tab[] = {
    /* cell: nTECSInfo_tArrayTypeInfo_CB_tab[0]:  char_Array32_TypeInfo id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_charTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "char[32]",                              /* name */
        5,                                       /* typeKind */
        sizeof(char[32]),                        /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tArrayTypeInfo_CB_tab[1]:  ACPTN_Array4_TypeInfo id=2 */
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
    /* cell: nTECSInfo_tArrayTypeInfo_CB_tab[2]:  char_t_Array128__Array32_TypeInfo id=3 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rDomainEV3_rTECSInfo_char_t_Array128_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "char_t[32][128]",                       /* name */
        5,                                       /* typeKind */
        sizeof(char_t[32][128]),                 /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tArrayTypeInfo_CB_tab[3]:  char_t_Array128_TypeInfo id=4 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "char_t[128]",                           /* name */
        5,                                       /* typeKind */
        sizeof(char_t[128]),                     /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tArrayTypeInfo_CB_tab[4]:  int32_t_Array64__Array16_TypeInfo id=5 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rDomainEV3_rTECSInfo_int32_t_Array64_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "int32_t[16][64]",                       /* name */
        5,                                       /* typeKind */
        sizeof(int32_t[16][64]),                 /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tArrayTypeInfo_CB_tab[5]:  int32_t_Array64_TypeInfo id=6 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "int32_t[64]",                           /* name */
        5,                                       /* typeKind */
        sizeof(int32_t[64]),                     /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tArrayTypeInfo_CB_tab[6]:  double64_t_Array32__Array16_TypeInfo id=7 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rDomainEV3_rTECSInfo_double64_t_Array32_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "double64_t[16][32]",                    /* name */
        5,                                       /* typeKind */
        sizeof(double64_t[16][32]),              /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tArrayTypeInfo_CB_tab[7]:  double64_t_Array32_TypeInfo id=8 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_double64_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "double64_t[32]",                        /* name */
        5,                                       /* typeKind */
        sizeof(double64_t[32]),                  /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tArrayTypeInfo_CB_tab[8]:  char_t_Array256__Array16_TypeInfo id=9 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rDomainEV3_rTECSInfo_char_t_Array256_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "char_t[16][256]",                       /* name */
        5,                                       /* typeKind */
        sizeof(char_t[16][256]),                 /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tArrayTypeInfo_CB_tab[9]:  char_t_Array256_TypeInfo id=10 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "char_t[256]",                           /* name */
        5,                                       /* typeKind */
        sizeof(char_t[256]),                     /* size */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
};

extern const struct tag_nTECSInfo_sTypeInfo_VMT nTECSInfo_tArrayTypeInfo_eTypeInfo_MT_;
/* �������ǥ�������ץ� #_EPD_# */
extern const struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_char_Array32_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_char_Array32_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tArrayTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tArrayTypeInfo_INIB_tab[0],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_ACPTN_Array4_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_ACPTN_Array4_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tArrayTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tArrayTypeInfo_INIB_tab[1],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_char_t_Array128__Array32_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_char_t_Array128__Array32_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tArrayTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tArrayTypeInfo_INIB_tab[2],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_char_t_Array128_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_char_t_Array128_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tArrayTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tArrayTypeInfo_INIB_tab[3],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_int32_t_Array64__Array16_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_int32_t_Array64__Array16_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tArrayTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tArrayTypeInfo_INIB_tab[4],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_int32_t_Array64_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_int32_t_Array64_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tArrayTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tArrayTypeInfo_INIB_tab[5],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_double64_t_Array32__Array16_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_double64_t_Array32__Array16_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tArrayTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tArrayTypeInfo_INIB_tab[6],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_double64_t_Array32_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_double64_t_Array32_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tArrayTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tArrayTypeInfo_INIB_tab[7],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_char_t_Array256__Array16_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_char_t_Array256__Array16_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tArrayTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tArrayTypeInfo_INIB_tab[8],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_char_t_Array256_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_char_t_Array256_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tArrayTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tArrayTypeInfo_INIB_tab[9],      /* INIB 3 */
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
