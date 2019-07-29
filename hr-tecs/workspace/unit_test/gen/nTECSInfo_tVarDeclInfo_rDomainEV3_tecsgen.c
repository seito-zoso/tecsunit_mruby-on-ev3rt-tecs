/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "nTECSInfo_tVarDeclInfo_tecsgen.h"
#include "nTECSInfo_tVarDeclInfo_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eVarDeclInfo */
struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES {
    const struct tag_nTECSInfo_sVarDeclInfo_VMT *vmt;
    tVarDeclInfo_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eVarDeclInfo */
ER             nTECSInfo_tVarDeclInfo_eVarDeclInfo_getName_skel( const struct tag_nTECSInfo_sVarDeclInfo_VDES *epd, char_t* name, int_t max_len)
{
    struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES *lepd
        = (struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES *)epd;
    return nTECSInfo_tVarDeclInfo_eVarDeclInfo_getName( lepd->idx, name, max_len );
}
uint16_t       nTECSInfo_tVarDeclInfo_eVarDeclInfo_getNameLength_skel( const struct tag_nTECSInfo_sVarDeclInfo_VDES *epd)
{
    struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES *lepd
        = (struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES *)epd;
    return nTECSInfo_tVarDeclInfo_eVarDeclInfo_getNameLength( lepd->idx );
}
void           nTECSInfo_tVarDeclInfo_eVarDeclInfo_getLocationInfo_skel( const struct tag_nTECSInfo_sVarDeclInfo_VDES *epd, uint32_t* offset, int8_t* place)
{
    struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES *lepd
        = (struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES *)epd;
    nTECSInfo_tVarDeclInfo_eVarDeclInfo_getLocationInfo( lepd->idx, offset, place );
}
void           nTECSInfo_tVarDeclInfo_eVarDeclInfo_getTypeInfo_skel( const struct tag_nTECSInfo_sVarDeclInfo_VDES *epd, Descriptor( nTECSInfo_sTypeInfo )* desc)
{
    struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES *lepd
        = (struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES *)epd;
    nTECSInfo_tVarDeclInfo_eVarDeclInfo_getTypeInfo( lepd->idx, desc );
}
void           nTECSInfo_tVarDeclInfo_eVarDeclInfo_getSizeIsExpr_skel( const struct tag_nTECSInfo_sVarDeclInfo_VDES *epd, char_t* expr_str, int32_t max_len)
{
    struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES *lepd
        = (struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES *)epd;
    nTECSInfo_tVarDeclInfo_eVarDeclInfo_getSizeIsExpr( lepd->idx, expr_str, max_len );
}
ER             nTECSInfo_tVarDeclInfo_eVarDeclInfo_getSizeIs_skel( const struct tag_nTECSInfo_sVarDeclInfo_VDES *epd, uint32_t* size, const void* p_cb)
{
    struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES *lepd
        = (struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES *)epd;
    return nTECSInfo_tVarDeclInfo_eVarDeclInfo_getSizeIs( lepd->idx, size, p_cb );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eVarDeclInfo */
const struct tag_nTECSInfo_sVarDeclInfo_VMT nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_ = {
    nTECSInfo_tVarDeclInfo_eVarDeclInfo_getName_skel,
    nTECSInfo_tVarDeclInfo_eVarDeclInfo_getNameLength_skel,
    nTECSInfo_tVarDeclInfo_eVarDeclInfo_getLocationInfo_skel,
    nTECSInfo_tVarDeclInfo_eVarDeclInfo_getTypeInfo_skel,
    nTECSInfo_tVarDeclInfo_eVarDeclInfo_getSizeIsExpr_skel,
    nTECSInfo_tVarDeclInfo_eVarDeclInfo_getSizeIs_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_STATTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_PRITypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_PRITypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_STATTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_TMOTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_bool_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_bool_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_STATTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_TEXPTNTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_STATTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_OVRTIMTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_STATTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_RELTIMTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_STATTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_RELTIMTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_FLGPTNTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_SIZETypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_ATRTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_ATRTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_PRITypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_SIZETypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_SIZETypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_SIZETypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_ACPTN_Array4_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_ACPTN_Array4_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_lcdfont_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int16_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_void_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_struct__RClass_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

/* 呼び口配列 #_CPA_# */



















































































/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
nTECSInfo_tVarDeclInfo_INIB nTECSInfo_tVarDeclInfo_INIB_tab[] = {
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[0]:  struct__t_rtsk_tskstatVarDeclInfo id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_STATTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tskstat",                               /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rtsk_tskstat,         /* place */
        OFFSET_OF_struct__t_rtsk_tskstat,        /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[1]:  struct__t_rtsk_tskpriVarDeclInfo id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_PRITypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tskpri",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rtsk_tskpri,          /* place */
        OFFSET_OF_struct__t_rtsk_tskpri,         /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[2]:  struct__t_rtsk_tskbpriVarDeclInfo id=3 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_PRITypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tskbpri",                               /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rtsk_tskbpri,         /* place */
        OFFSET_OF_struct__t_rtsk_tskbpri,        /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[3]:  struct__t_rtsk_tskwaitVarDeclInfo id=4 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_STATTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tskwait",                               /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rtsk_tskwait,         /* place */
        OFFSET_OF_struct__t_rtsk_tskwait,        /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[4]:  struct__t_rtsk_wobjidVarDeclInfo id=5 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "wobjid",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rtsk_wobjid,          /* place */
        OFFSET_OF_struct__t_rtsk_wobjid,         /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[5]:  struct__t_rtsk_lefttmoVarDeclInfo id=6 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_TMOTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "lefttmo",                               /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rtsk_lefttmo,         /* place */
        OFFSET_OF_struct__t_rtsk_lefttmo,        /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[6]:  struct__t_rtsk_actcntVarDeclInfo id=7 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "actcnt",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rtsk_actcnt,          /* place */
        OFFSET_OF_struct__t_rtsk_actcnt,         /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[7]:  struct__t_rtsk_wupcntVarDeclInfo id=8 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "wupcnt",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rtsk_wupcnt,          /* place */
        OFFSET_OF_struct__t_rtsk_wupcnt,         /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[8]:  struct__t_rtsk_texmskVarDeclInfo id=9 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_bool_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "texmsk",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rtsk_texmsk,          /* place */
        OFFSET_OF_struct__t_rtsk_texmsk,         /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[9]:  struct__t_rtsk_waifbdVarDeclInfo id=10 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_bool_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "waifbd",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rtsk_waifbd,          /* place */
        OFFSET_OF_struct__t_rtsk_waifbd,         /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[10]:  struct__t_rtsk_svclevelVarDeclInfo id=11 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "svclevel",                              /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rtsk_svclevel,        /* place */
        OFFSET_OF_struct__t_rtsk_svclevel,       /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[11]:  struct__t_rtex_texstatVarDeclInfo id=12 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_STATTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "texstat",                               /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rtex_texstat,         /* place */
        OFFSET_OF_struct__t_rtex_texstat,        /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[12]:  struct__t_rtex_pndptnVarDeclInfo id=13 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_TEXPTNTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "pndptn",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rtex_pndptn,          /* place */
        OFFSET_OF_struct__t_rtex_pndptn,         /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[13]:  struct__t_rovr_ovrstatVarDeclInfo id=14 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_STATTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ovrstat",                               /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rovr_ovrstat,         /* place */
        OFFSET_OF_struct__t_rovr_ovrstat,        /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[14]:  struct__t_rovr_leftotmVarDeclInfo id=15 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_OVRTIMTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "leftotm",                               /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rovr_leftotm,         /* place */
        OFFSET_OF_struct__t_rovr_leftotm,        /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[15]:  struct__t_rcyc_cycstatVarDeclInfo id=16 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_STATTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cycstat",                               /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rcyc_cycstat,         /* place */
        OFFSET_OF_struct__t_rcyc_cycstat,        /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[16]:  struct__t_rcyc_lefttimVarDeclInfo id=17 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_RELTIMTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "lefttim",                               /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rcyc_lefttim,         /* place */
        OFFSET_OF_struct__t_rcyc_lefttim,        /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[17]:  struct__t_ralm_almstatVarDeclInfo id=18 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_STATTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "almstat",                               /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_ralm_almstat,         /* place */
        OFFSET_OF_struct__t_ralm_almstat,        /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[18]:  struct__t_ralm_lefttimVarDeclInfo id=19 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_RELTIMTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "lefttim",                               /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_ralm_lefttim,         /* place */
        OFFSET_OF_struct__t_ralm_lefttim,        /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[19]:  struct__t_rsem_wtskidVarDeclInfo id=20 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "wtskid",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rsem_wtskid,          /* place */
        OFFSET_OF_struct__t_rsem_wtskid,         /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[20]:  struct__t_rsem_semcntVarDeclInfo id=21 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "semcnt",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rsem_semcnt,          /* place */
        OFFSET_OF_struct__t_rsem_semcnt,         /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[21]:  struct__t_rflg_wtskidVarDeclInfo id=22 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "wtskid",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rflg_wtskid,          /* place */
        OFFSET_OF_struct__t_rflg_wtskid,         /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[22]:  struct__t_rflg_flgptnVarDeclInfo id=23 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_FLGPTNTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "flgptn",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rflg_flgptn,          /* place */
        OFFSET_OF_struct__t_rflg_flgptn,         /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[23]:  struct__t_rdtq_stskidVarDeclInfo id=24 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "stskid",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rdtq_stskid,          /* place */
        OFFSET_OF_struct__t_rdtq_stskid,         /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[24]:  struct__t_rdtq_rtskidVarDeclInfo id=25 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "rtskid",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rdtq_rtskid,          /* place */
        OFFSET_OF_struct__t_rdtq_rtskid,         /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[25]:  struct__t_rdtq_sdtqcntVarDeclInfo id=26 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "sdtqcnt",                               /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rdtq_sdtqcnt,         /* place */
        OFFSET_OF_struct__t_rdtq_sdtqcnt,        /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[26]:  struct__t_rpdq_stskidVarDeclInfo id=27 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "stskid",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rpdq_stskid,          /* place */
        OFFSET_OF_struct__t_rpdq_stskid,         /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[27]:  struct__t_rpdq_rtskidVarDeclInfo id=28 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "rtskid",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rpdq_rtskid,          /* place */
        OFFSET_OF_struct__t_rpdq_rtskid,         /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[28]:  struct__t_rpdq_spdqcntVarDeclInfo id=29 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "spdqcnt",                               /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rpdq_spdqcnt,         /* place */
        OFFSET_OF_struct__t_rpdq_spdqcnt,        /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[29]:  struct__t_rmpf_wtskidVarDeclInfo id=30 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "wtskid",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rmpf_wtskid,          /* place */
        OFFSET_OF_struct__t_rmpf_wtskid,         /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[30]:  struct__t_rmpf_fblkcntVarDeclInfo id=31 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "fblkcnt",                               /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rmpf_fblkcnt,         /* place */
        OFFSET_OF_struct__t_rmpf_fblkcnt,        /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[31]:  struct__t_rmbf_stskidVarDeclInfo id=32 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "stskid",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rmbf_stskid,          /* place */
        OFFSET_OF_struct__t_rmbf_stskid,         /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[32]:  struct__t_rmbf_rtskidVarDeclInfo id=33 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "rtskid",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rmbf_rtskid,          /* place */
        OFFSET_OF_struct__t_rmbf_rtskid,         /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[33]:  struct__t_rmbf_smbfcntVarDeclInfo id=34 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "smbfcnt",                               /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rmbf_smbfcnt,         /* place */
        OFFSET_OF_struct__t_rmbf_smbfcnt,        /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[34]:  struct__t_rmbf_fmbfszVarDeclInfo id=35 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_SIZETypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "fmbfsz",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__t_rmbf_fmbfsz,          /* place */
        OFFSET_OF_struct__t_rmbf_fmbfsz,         /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[35]:  tTask_idVarDeclInfo id=36 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "id",                                    /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_tTask_id,                       /* place */
        OFFSET_OF_tTask_id,                      /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[36]:  tTask_taskAttributeVarDeclInfo id=37 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_ATRTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "taskAttribute",                         /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_tTask_taskAttribute,            /* place */
        OFFSET_OF_tTask_taskAttribute,           /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[37]:  tTask_exceptionAttributeVarDeclInfo id=38 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_ATRTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "exceptionAttribute",                    /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_tTask_exceptionAttribute,       /* place */
        OFFSET_OF_tTask_exceptionAttribute,      /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[38]:  tTask_priorityVarDeclInfo id=39 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_PRITypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "priority",                              /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_tTask_priority,                 /* place */
        OFFSET_OF_tTask_priority,                /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[39]:  tTask_stackSizeVarDeclInfo id=40 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_SIZETypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "stackSize",                             /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_tTask_stackSize,                /* place */
        OFFSET_OF_tTask_stackSize,               /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[40]:  tTask_systemStackSizeVarDeclInfo id=41 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_SIZETypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "systemStackSize",                       /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_tTask_systemStackSize,          /* place */
        OFFSET_OF_tTask_systemStackSize,         /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[41]:  tTask_userStackSizeVarDeclInfo id=42 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_SIZETypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "userStackSize",                         /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_tTask_userStackSize,            /* place */
        OFFSET_OF_tTask_userStackSize,           /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[42]:  tTask_accessPatternVarDeclInfo id=43 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_ACPTN_Array4_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "accessPattern",                         /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_tTask_accessPattern,            /* place */
        OFFSET_OF_tTask_accessPattern,           /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[43]:  tKernel_accessPatternVarDeclInfo id=44 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_ACPTN_Array4_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "accessPattern",                         /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_tKernel_accessPattern,          /* place */
        OFFSET_OF_tKernel_accessPattern,         /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[44]:  tUltrasonicSensor_portVarDeclInfo id=45 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "port",                                  /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_tUltrasonicSensor_port,         /* place */
        OFFSET_OF_tUltrasonicSensor_port,        /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[45]:  tColorSensor_portVarDeclInfo id=46 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "port",                                  /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_tColorSensor_port,              /* place */
        OFFSET_OF_tColorSensor_port,             /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[46]:  tTouchSensor_portVarDeclInfo id=47 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "port",                                  /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_tTouchSensor_port,              /* place */
        OFFSET_OF_tTouchSensor_port,             /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[47]:  tGyroSensor_portVarDeclInfo id=48 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "port",                                  /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_tGyroSensor_port,               /* place */
        OFFSET_OF_tGyroSensor_port,              /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[48]:  tMotor_portVarDeclInfo id=49 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "port",                                  /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_tMotor_port,                    /* place */
        OFFSET_OF_tMotor_port,                   /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[49]:  tLCD_currentFontVarDeclInfo id=50 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_lcdfont_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "currentFont",                           /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_tLCD_currentFont,               /* place */
        OFFSET_OF_tLCD_currentFont,              /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[50]:  tSharedMemory_sizeVarDeclInfo id=51 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "size",                                  /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_tSharedMemory_size,             /* place */
        OFFSET_OF_tSharedMemory_size,            /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[51]:  tSharedMemory_dataVarDeclInfo id=52 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "data",                                  /* name */
        "mikan",                                 /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_tSharedMemory_data,             /* place */
        OFFSET_OF_tSharedMemory_data,            /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[52]:  tTaskMain_NAME_LENVarDeclInfo id=53 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int16_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "NAME_LEN",                              /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_tTaskMain_NAME_LEN,             /* place */
        OFFSET_OF_tTaskMain_NAME_LEN,            /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[53]:  tTaskMain_target_pathVarDeclInfo id=54 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "target_path",                           /* name */
        "mikan",                                 /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_tTaskMain_target_path,          /* place */
        OFFSET_OF_tTaskMain_target_path,         /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[54]:  tTaskMain_rawDescVarDeclInfo id=55 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_void_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "rawDesc",                               /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_tTaskMain_rawDesc,              /* place */
        OFFSET_OF_tTaskMain_rawDesc,             /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[55]:  struct__RClass_gcnextVarDeclInfo id=56 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "gcnext",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        PLACE_OF_struct__RClass_gcnext,          /* place */
        OFFSET_OF_struct__RClass_gcnext,         /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[56]:  nMruby_tTECSInitializer_TECSVarDeclInfo id=57 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_struct__RClass_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "TECS",                                  /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        3,                                       /* declType */
        PLACE_OF_nMruby_tTECSInitializer_TECS,   /* place */
        OFFSET_OF_nMruby_tTECSInitializer_TECS,  /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[57]:  nMruby_tsKernel_VMnameVarDeclInfo id=58 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "VMname",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_nMruby_tsKernel_VMname,         /* place */
        OFFSET_OF_nMruby_tsKernel_VMname,        /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[58]:  nMruby_tsKernel_bridgeNameVarDeclInfo id=59 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "bridgeName",                            /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_nMruby_tsKernel_bridgeName,     /* place */
        OFFSET_OF_nMruby_tsKernel_bridgeName,    /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[59]:  nMruby_tsMotor_VMnameVarDeclInfo id=60 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "VMname",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_nMruby_tsMotor_VMname,          /* place */
        OFFSET_OF_nMruby_tsMotor_VMname,         /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[60]:  nMruby_tsMotor_bridgeNameVarDeclInfo id=61 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "bridgeName",                            /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_nMruby_tsMotor_bridgeName,      /* place */
        OFFSET_OF_nMruby_tsMotor_bridgeName,     /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[61]:  nMruby_tsLCD_VMnameVarDeclInfo id=62 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "VMname",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_nMruby_tsLCD_VMname,            /* place */
        OFFSET_OF_nMruby_tsLCD_VMname,           /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[62]:  nMruby_tsLCD_bridgeNameVarDeclInfo id=63 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "bridgeName",                            /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_nMruby_tsLCD_bridgeName,        /* place */
        OFFSET_OF_nMruby_tsLCD_bridgeName,       /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[63]:  nMruby_tsLED_VMnameVarDeclInfo id=64 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "VMname",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_nMruby_tsLED_VMname,            /* place */
        OFFSET_OF_nMruby_tsLED_VMname,           /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[64]:  nMruby_tsLED_bridgeNameVarDeclInfo id=65 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "bridgeName",                            /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_nMruby_tsLED_bridgeName,        /* place */
        OFFSET_OF_nMruby_tsLED_bridgeName,       /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[65]:  nMruby_tsButton_VMnameVarDeclInfo id=66 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "VMname",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_nMruby_tsButton_VMname,         /* place */
        OFFSET_OF_nMruby_tsButton_VMname,        /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[66]:  nMruby_tsButton_bridgeNameVarDeclInfo id=67 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "bridgeName",                            /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_nMruby_tsButton_bridgeName,     /* place */
        OFFSET_OF_nMruby_tsButton_bridgeName,    /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[67]:  nMruby_tsBattery_VMnameVarDeclInfo id=68 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "VMname",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_nMruby_tsBattery_VMname,        /* place */
        OFFSET_OF_nMruby_tsBattery_VMname,       /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[68]:  nMruby_tsBattery_bridgeNameVarDeclInfo id=69 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "bridgeName",                            /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_nMruby_tsBattery_bridgeName,    /* place */
        OFFSET_OF_nMruby_tsBattery_bridgeName,   /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[69]:  nMruby_tsSpeaker_VMnameVarDeclInfo id=70 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "VMname",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_nMruby_tsSpeaker_VMname,        /* place */
        OFFSET_OF_nMruby_tsSpeaker_VMname,       /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[70]:  nMruby_tsSpeaker_bridgeNameVarDeclInfo id=71 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "bridgeName",                            /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_nMruby_tsSpeaker_bridgeName,    /* place */
        OFFSET_OF_nMruby_tsSpeaker_bridgeName,   /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[71]:  nMruby_tsUltrasonicSensor_VMnameVarDeclInfo id=72 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "VMname",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_nMruby_tsUltrasonicSensor_VMname, /* place */
        OFFSET_OF_nMruby_tsUltrasonicSensor_VMname, /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[72]:  nMruby_tsUltrasonicSensor_bridgeNameVarDeclInfo id=73 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "bridgeName",                            /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_nMruby_tsUltrasonicSensor_bridgeName, /* place */
        OFFSET_OF_nMruby_tsUltrasonicSensor_bridgeName, /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[73]:  nMruby_tsGyroSensor_VMnameVarDeclInfo id=74 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "VMname",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_nMruby_tsGyroSensor_VMname,     /* place */
        OFFSET_OF_nMruby_tsGyroSensor_VMname,    /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[74]:  nMruby_tsGyroSensor_bridgeNameVarDeclInfo id=75 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "bridgeName",                            /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_nMruby_tsGyroSensor_bridgeName, /* place */
        OFFSET_OF_nMruby_tsGyroSensor_bridgeName, /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[75]:  nMruby_tsColorSensor_VMnameVarDeclInfo id=76 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "VMname",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_nMruby_tsColorSensor_VMname,    /* place */
        OFFSET_OF_nMruby_tsColorSensor_VMname,   /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[76]:  nMruby_tsColorSensor_bridgeNameVarDeclInfo id=77 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "bridgeName",                            /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_nMruby_tsColorSensor_bridgeName, /* place */
        OFFSET_OF_nMruby_tsColorSensor_bridgeName, /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[77]:  nMruby_tsTouchSensor_VMnameVarDeclInfo id=78 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "VMname",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_nMruby_tsTouchSensor_VMname,    /* place */
        OFFSET_OF_nMruby_tsTouchSensor_VMname,   /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[78]:  nMruby_tsTouchSensor_bridgeNameVarDeclInfo id=79 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "bridgeName",                            /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_nMruby_tsTouchSensor_bridgeName, /* place */
        OFFSET_OF_nMruby_tsTouchSensor_bridgeName, /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[79]:  nMruby_tsBalancer_VMnameVarDeclInfo id=80 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "VMname",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_nMruby_tsBalancer_VMname,       /* place */
        OFFSET_OF_nMruby_tsBalancer_VMname,      /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[80]:  nMruby_tsBalancer_bridgeNameVarDeclInfo id=81 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "bridgeName",                            /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_nMruby_tsBalancer_bridgeName,   /* place */
        OFFSET_OF_nMruby_tsBalancer_bridgeName,  /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[81]:  nMruby_tsSharedMemory_VMnameVarDeclInfo id=82 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "VMname",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_nMruby_tsSharedMemory_VMname,   /* place */
        OFFSET_OF_nMruby_tsSharedMemory_VMname,  /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[82]:  nMruby_tsSharedMemory_bridgeNameVarDeclInfo id=83 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "bridgeName",                            /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        2,                                       /* declType */
        PLACE_OF_nMruby_tsSharedMemory_bridgeName, /* place */
        OFFSET_OF_nMruby_tsSharedMemory_bridgeName, /* offset */
    },
};

extern const struct tag_nTECSInfo_sVarDeclInfo_VMT nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_;
/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rtsk_tskstatVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rtsk_tskstatVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[0],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rtsk_tskpriVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rtsk_tskpriVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[1],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rtsk_tskbpriVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rtsk_tskbpriVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[2],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rtsk_tskwaitVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rtsk_tskwaitVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[3],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rtsk_wobjidVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rtsk_wobjidVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[4],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rtsk_lefttmoVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rtsk_lefttmoVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[5],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rtsk_actcntVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rtsk_actcntVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[6],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rtsk_wupcntVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rtsk_wupcntVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[7],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rtsk_texmskVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rtsk_texmskVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[8],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rtsk_waifbdVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rtsk_waifbdVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[9],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rtsk_svclevelVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rtsk_svclevelVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[10],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rtex_texstatVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rtex_texstatVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[11],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rtex_pndptnVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rtex_pndptnVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[12],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rovr_ovrstatVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rovr_ovrstatVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[13],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rovr_leftotmVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rovr_leftotmVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[14],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rcyc_cycstatVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rcyc_cycstatVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[15],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rcyc_lefttimVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rcyc_lefttimVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[16],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_ralm_almstatVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_ralm_almstatVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[17],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_ralm_lefttimVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_ralm_lefttimVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[18],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rsem_wtskidVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rsem_wtskidVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[19],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rsem_semcntVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rsem_semcntVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[20],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rflg_wtskidVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rflg_wtskidVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[21],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rflg_flgptnVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rflg_flgptnVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[22],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rdtq_stskidVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rdtq_stskidVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[23],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rdtq_rtskidVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rdtq_rtskidVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[24],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rdtq_sdtqcntVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rdtq_sdtqcntVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[25],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rpdq_stskidVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rpdq_stskidVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[26],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rpdq_rtskidVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rpdq_rtskidVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[27],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rpdq_spdqcntVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rpdq_spdqcntVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[28],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rmpf_wtskidVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rmpf_wtskidVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[29],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rmpf_fblkcntVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rmpf_fblkcntVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[30],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rmbf_stskidVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rmbf_stskidVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[31],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rmbf_rtskidVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rmbf_rtskidVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[32],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rmbf_smbfcntVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rmbf_smbfcntVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[33],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rmbf_fmbfszVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__t_rmbf_fmbfszVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[34],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTask_idVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTask_idVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[35],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTask_taskAttributeVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTask_taskAttributeVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[36],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTask_exceptionAttributeVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTask_exceptionAttributeVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[37],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTask_priorityVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTask_priorityVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[38],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTask_stackSizeVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTask_stackSizeVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[39],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTask_systemStackSizeVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTask_systemStackSizeVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[40],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTask_userStackSizeVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTask_userStackSizeVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[41],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTask_accessPatternVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTask_accessPatternVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[42],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tKernel_accessPatternVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tKernel_accessPatternVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[43],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tUltrasonicSensor_portVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tUltrasonicSensor_portVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[44],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tColorSensor_portVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tColorSensor_portVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[45],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTouchSensor_portVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTouchSensor_portVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[46],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tGyroSensor_portVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tGyroSensor_portVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[47],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tMotor_portVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tMotor_portVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[48],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tLCD_currentFontVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tLCD_currentFontVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[49],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tSharedMemory_sizeVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tSharedMemory_sizeVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[50],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tSharedMemory_dataVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tSharedMemory_dataVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[51],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_NAME_LENVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_NAME_LENVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[52],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_target_pathVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_target_pathVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[53],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_rawDescVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_rawDescVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[54],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__RClass_gcnextVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_struct__RClass_gcnextVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[55],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tTECSInitializer_TECSVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tTECSInitializer_TECSVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[56],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsKernel_VMnameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsKernel_VMnameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[57],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsKernel_bridgeNameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsKernel_bridgeNameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[58],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsMotor_VMnameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsMotor_VMnameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[59],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsMotor_bridgeNameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsMotor_bridgeNameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[60],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsLCD_VMnameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsLCD_VMnameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[61],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsLCD_bridgeNameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsLCD_bridgeNameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[62],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsLED_VMnameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsLED_VMnameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[63],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsLED_bridgeNameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsLED_bridgeNameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[64],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsButton_VMnameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsButton_VMnameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[65],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsButton_bridgeNameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsButton_bridgeNameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[66],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsBattery_VMnameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsBattery_VMnameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[67],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsBattery_bridgeNameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsBattery_bridgeNameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[68],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsSpeaker_VMnameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsSpeaker_VMnameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[69],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsSpeaker_bridgeNameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsSpeaker_bridgeNameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[70],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsUltrasonicSensor_VMnameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsUltrasonicSensor_VMnameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[71],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsUltrasonicSensor_bridgeNameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsUltrasonicSensor_bridgeNameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[72],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsGyroSensor_VMnameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsGyroSensor_VMnameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[73],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsGyroSensor_bridgeNameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsGyroSensor_bridgeNameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[74],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsColorSensor_VMnameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsColorSensor_VMnameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[75],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsColorSensor_bridgeNameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsColorSensor_bridgeNameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[76],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsTouchSensor_VMnameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsTouchSensor_VMnameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[77],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsTouchSensor_bridgeNameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsTouchSensor_bridgeNameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[78],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsBalancer_VMnameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsBalancer_VMnameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[79],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsBalancer_bridgeNameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsBalancer_bridgeNameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[80],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsSharedMemory_VMnameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsSharedMemory_VMnameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[81],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsSharedMemory_bridgeNameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsSharedMemory_bridgeNameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[82],      /* INIB 3 */
};
/* CB 初期化コード #_CIC_# */
void
nTECSInfo_tVarDeclInfo_CB_initialize()
{
    nTECSInfo_tVarDeclInfo_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
