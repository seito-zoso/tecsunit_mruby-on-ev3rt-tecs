/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "nTECSInfo_tCallInfo_tecsgen.h"
#include "nTECSInfo_tCallInfo_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eCallInfo */
struct tag_nTECSInfo_tCallInfo_eCallInfo_DES {
    const struct tag_nTECSInfo_sCallInfo_VMT *vmt;
    tCallInfo_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eCallInfo */
ER             nTECSInfo_tCallInfo_eCallInfo_getName_skel( const struct tag_nTECSInfo_sCallInfo_VDES *epd, char_t* name, int_t max_len)
{
    struct tag_nTECSInfo_tCallInfo_eCallInfo_DES *lepd
        = (struct tag_nTECSInfo_tCallInfo_eCallInfo_DES *)epd;
    return nTECSInfo_tCallInfo_eCallInfo_getName( lepd->idx, name, max_len );
}
uint16_t       nTECSInfo_tCallInfo_eCallInfo_getNameLength_skel( const struct tag_nTECSInfo_sCallInfo_VDES *epd)
{
    struct tag_nTECSInfo_tCallInfo_eCallInfo_DES *lepd
        = (struct tag_nTECSInfo_tCallInfo_eCallInfo_DES *)epd;
    return nTECSInfo_tCallInfo_eCallInfo_getNameLength( lepd->idx );
}
void           nTECSInfo_tCallInfo_eCallInfo_getSignatureInfo_skel( const struct tag_nTECSInfo_sCallInfo_VDES *epd, Descriptor( nTECSInfo_sSignatureInfo )* desc)
{
    struct tag_nTECSInfo_tCallInfo_eCallInfo_DES *lepd
        = (struct tag_nTECSInfo_tCallInfo_eCallInfo_DES *)epd;
    nTECSInfo_tCallInfo_eCallInfo_getSignatureInfo( lepd->idx, desc );
}
uint32_t       nTECSInfo_tCallInfo_eCallInfo_getArraySize_skel( const struct tag_nTECSInfo_sCallInfo_VDES *epd)
{
    struct tag_nTECSInfo_tCallInfo_eCallInfo_DES *lepd
        = (struct tag_nTECSInfo_tCallInfo_eCallInfo_DES *)epd;
    return nTECSInfo_tCallInfo_eCallInfo_getArraySize( lepd->idx );
}
void           nTECSInfo_tCallInfo_eCallInfo_getSpecifierInfo_skel( const struct tag_nTECSInfo_sCallInfo_VDES *epd, bool_t* b_optional, bool_t* b_dynamic, bool_t* b_ref_desc, bool_t* b_omit)
{
    struct tag_nTECSInfo_tCallInfo_eCallInfo_DES *lepd
        = (struct tag_nTECSInfo_tCallInfo_eCallInfo_DES *)epd;
    nTECSInfo_tCallInfo_eCallInfo_getSpecifierInfo( lepd->idx, b_optional, b_dynamic, b_ref_desc, b_omit );
}
void           nTECSInfo_tCallInfo_eCallInfo_getInternalInfo_skel( const struct tag_nTECSInfo_sCallInfo_VDES *epd, bool_t* b_allocator_port, bool_t* b_require_port)
{
    struct tag_nTECSInfo_tCallInfo_eCallInfo_DES *lepd
        = (struct tag_nTECSInfo_tCallInfo_eCallInfo_DES *)epd;
    nTECSInfo_tCallInfo_eCallInfo_getInternalInfo( lepd->idx, b_allocator_port, b_require_port );
}
void           nTECSInfo_tCallInfo_eCallInfo_getLocationInfo_skel( const struct tag_nTECSInfo_sCallInfo_VDES *epd, uint32_t* offset, int8_t* place)
{
    struct tag_nTECSInfo_tCallInfo_eCallInfo_DES *lepd
        = (struct tag_nTECSInfo_tCallInfo_eCallInfo_DES *)epd;
    nTECSInfo_tCallInfo_eCallInfo_getLocationInfo( lepd->idx, offset, place );
}
void           nTECSInfo_tCallInfo_eCallInfo_getOptimizeInfo_skel( const struct tag_nTECSInfo_sCallInfo_VDES *epd, bool_t* b_VMT_useless, bool_t* b_skelton_useless, bool_t* b_cell_unique)
{
    struct tag_nTECSInfo_tCallInfo_eCallInfo_DES *lepd
        = (struct tag_nTECSInfo_tCallInfo_eCallInfo_DES *)epd;
    nTECSInfo_tCallInfo_eCallInfo_getOptimizeInfo( lepd->idx, b_VMT_useless, b_skelton_useless, b_cell_unique );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eCallInfo */
const struct tag_nTECSInfo_sCallInfo_VMT nTECSInfo_tCallInfo_eCallInfo_MT_ = {
    nTECSInfo_tCallInfo_eCallInfo_getName_skel,
    nTECSInfo_tCallInfo_eCallInfo_getNameLength_skel,
    nTECSInfo_tCallInfo_eCallInfo_getSignatureInfo_skel,
    nTECSInfo_tCallInfo_eCallInfo_getArraySize_skel,
    nTECSInfo_tCallInfo_eCallInfo_getSpecifierInfo_skel,
    nTECSInfo_tCallInfo_eCallInfo_getInternalInfo_skel,
    nTECSInfo_tCallInfo_eCallInfo_getLocationInfo_skel,
    nTECSInfo_tCallInfo_eCallInfo_getOptimizeInfo_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sTaskBodySignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sTaskExceptionBodySignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sButtonSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sRiteVMSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sTaskSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sLCDSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sButtonSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sKernelSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sLCDSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sButtonSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sKernelSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sLCDSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sButtonSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sKernelSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sKernelSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sLCDSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sButtonSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sNamespaceInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sRegionInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sCellInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sSignatureInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sCelltypeInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sVarDeclInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sTypeInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sTarget1SignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sRawEntryDescriptorInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sEntryInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nMruby_sInitializeTECSBridgeSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sKernelSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sMotorSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sLCDSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sLEDSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sButtonSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sBatterySignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sSpeakerSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sUltrasonicSensorSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sGyroSensorSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sColorSensorSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sTouchSensorSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sBalancerSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sSharedMemorySignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfoSignatureInfo_eSignatureInfo_des;

/* 呼び口配列 #_CPA_# */











































/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
nTECSInfo_tCallInfo_INIB nTECSInfo_tCallInfo_INIB_tab[] = {
    /* cell: nTECSInfo_tCallInfo_CB_tab[0]:  tTask_cBodyCallInfo id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sTaskBodySignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cBody",                                 /* name */
        tTask_cBody__offset,                     /* offset */
        tTask_cBody__array_size,                 /* array_size */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTask_cBody__place,                      /* place */
        tTask_cBody__b_VMT_useless,              /* b_VMT_useless */
        tTask_cBody__b_skelton_useless,          /* b_skelton_useless */
        tTask_cBody__b_cell_unique,              /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[1]:  tTask_cExceptionBodyCallInfo id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sTaskExceptionBodySignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cExceptionBody",                        /* name */
        tTask_cExceptionBody__offset,            /* offset */
        tTask_cExceptionBody__array_size,        /* array_size */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTask_cExceptionBody__place,             /* place */
        tTask_cExceptionBody__b_VMT_useless,     /* b_VMT_useless */
        tTask_cExceptionBody__b_skelton_useless, /* b_skelton_useless */
        tTask_cExceptionBody__b_cell_unique,     /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[2]:  tLCD_cButtonCallInfo id=3 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sButtonSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cButton",                               /* name */
        tLCD_cButton__offset,                    /* offset */
        tLCD_cButton__array_size,                /* array_size */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tLCD_cButton__place,                     /* place */
        tLCD_cButton__b_VMT_useless,             /* b_VMT_useless */
        tLCD_cButton__b_skelton_useless,         /* b_skelton_useless */
        tLCD_cButton__b_cell_unique,             /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[3]:  tEV3Platform_cRiteVMCallInfo id=4 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sRiteVMSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cRiteVM",                               /* name */
        tEV3Platform_cRiteVM__offset,            /* offset */
        tEV3Platform_cRiteVM__array_size,        /* array_size */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tEV3Platform_cRiteVM__place,             /* place */
        tEV3Platform_cRiteVM__b_VMT_useless,     /* b_VMT_useless */
        tEV3Platform_cRiteVM__b_skelton_useless, /* b_skelton_useless */
        tEV3Platform_cRiteVM__b_cell_unique,     /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[4]:  tEV3Platform_cTaskCallInfo id=5 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sTaskSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cTask",                                 /* name */
        tEV3Platform_cTask__offset,              /* offset */
        tEV3Platform_cTask__array_size,          /* array_size */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tEV3Platform_cTask__place,               /* place */
        tEV3Platform_cTask__b_VMT_useless,       /* b_VMT_useless */
        tEV3Platform_cTask__b_skelton_useless,   /* b_skelton_useless */
        tEV3Platform_cTask__b_cell_unique,       /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[5]:  tTarget1_cLCDCallInfo id=6 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sLCDSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cLCD",                                  /* name */
        tTarget1_cLCD__offset,                   /* offset */
        tTarget1_cLCD__array_size,               /* array_size */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTarget1_cLCD__place,                    /* place */
        tTarget1_cLCD__b_VMT_useless,            /* b_VMT_useless */
        tTarget1_cLCD__b_skelton_useless,        /* b_skelton_useless */
        tTarget1_cLCD__b_cell_unique,            /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[6]:  tTarget1_cButtonCallInfo id=7 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sButtonSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cButton",                               /* name */
        tTarget1_cButton__offset,                /* offset */
        tTarget1_cButton__array_size,            /* array_size */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTarget1_cButton__place,                 /* place */
        tTarget1_cButton__b_VMT_useless,         /* b_VMT_useless */
        tTarget1_cButton__b_skelton_useless,     /* b_skelton_useless */
        tTarget1_cButton__b_cell_unique,         /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[7]:  tTarget1_cKernelCallInfo id=8 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sKernelSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cKernel",                               /* name */
        tTarget1_cKernel__offset,                /* offset */
        tTarget1_cKernel__array_size,            /* array_size */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTarget1_cKernel__place,                 /* place */
        tTarget1_cKernel__b_VMT_useless,         /* b_VMT_useless */
        tTarget1_cKernel__b_skelton_useless,     /* b_skelton_useless */
        tTarget1_cKernel__b_cell_unique,         /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[8]:  tTarget2_cLCDCallInfo id=9 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sLCDSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cLCD",                                  /* name */
        tTarget2_cLCD__offset,                   /* offset */
        tTarget2_cLCD__array_size,               /* array_size */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTarget2_cLCD__place,                    /* place */
        tTarget2_cLCD__b_VMT_useless,            /* b_VMT_useless */
        tTarget2_cLCD__b_skelton_useless,        /* b_skelton_useless */
        tTarget2_cLCD__b_cell_unique,            /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[9]:  tTarget2_cButtonCallInfo id=10 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sButtonSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cButton",                               /* name */
        tTarget2_cButton__offset,                /* offset */
        tTarget2_cButton__array_size,            /* array_size */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTarget2_cButton__place,                 /* place */
        tTarget2_cButton__b_VMT_useless,         /* b_VMT_useless */
        tTarget2_cButton__b_skelton_useless,     /* b_skelton_useless */
        tTarget2_cButton__b_cell_unique,         /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[10]:  tTarget2_cKernelCallInfo id=11 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sKernelSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cKernel",                               /* name */
        tTarget2_cKernel__offset,                /* offset */
        tTarget2_cKernel__array_size,            /* array_size */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTarget2_cKernel__place,                 /* place */
        tTarget2_cKernel__b_VMT_useless,         /* b_VMT_useless */
        tTarget2_cKernel__b_skelton_useless,     /* b_skelton_useless */
        tTarget2_cKernel__b_cell_unique,         /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[11]:  tTarget3_cLCDCallInfo id=12 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sLCDSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cLCD",                                  /* name */
        tTarget3_cLCD__offset,                   /* offset */
        tTarget3_cLCD__array_size,               /* array_size */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTarget3_cLCD__place,                    /* place */
        tTarget3_cLCD__b_VMT_useless,            /* b_VMT_useless */
        tTarget3_cLCD__b_skelton_useless,        /* b_skelton_useless */
        tTarget3_cLCD__b_cell_unique,            /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[12]:  tTarget3_cButtonCallInfo id=13 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sButtonSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cButton",                               /* name */
        tTarget3_cButton__offset,                /* offset */
        tTarget3_cButton__array_size,            /* array_size */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTarget3_cButton__place,                 /* place */
        tTarget3_cButton__b_VMT_useless,         /* b_VMT_useless */
        tTarget3_cButton__b_skelton_useless,     /* b_skelton_useless */
        tTarget3_cButton__b_cell_unique,         /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[13]:  tTarget3_cKernelCallInfo id=14 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sKernelSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cKernel",                               /* name */
        tTarget3_cKernel__offset,                /* offset */
        tTarget3_cKernel__array_size,            /* array_size */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTarget3_cKernel__place,                 /* place */
        tTarget3_cKernel__b_VMT_useless,         /* b_VMT_useless */
        tTarget3_cKernel__b_skelton_useless,     /* b_skelton_useless */
        tTarget3_cKernel__b_cell_unique,         /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[14]:  tTaskMain_cKernelCallInfo id=15 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sKernelSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cKernel",                               /* name */
        tTaskMain_cKernel__offset,               /* offset */
        tTaskMain_cKernel__array_size,           /* array_size */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTaskMain_cKernel__place,                /* place */
        tTaskMain_cKernel__b_VMT_useless,        /* b_VMT_useless */
        tTaskMain_cKernel__b_skelton_useless,    /* b_skelton_useless */
        tTaskMain_cKernel__b_cell_unique,        /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[15]:  tTaskMain_cLCDCallInfo id=16 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sLCDSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cLCD",                                  /* name */
        tTaskMain_cLCD__offset,                  /* offset */
        tTaskMain_cLCD__array_size,              /* array_size */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTaskMain_cLCD__place,                   /* place */
        tTaskMain_cLCD__b_VMT_useless,           /* b_VMT_useless */
        tTaskMain_cLCD__b_skelton_useless,       /* b_skelton_useless */
        tTaskMain_cLCD__b_cell_unique,           /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[16]:  tTaskMain_cButtonCallInfo id=17 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sButtonSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cButton",                               /* name */
        tTaskMain_cButton__offset,               /* offset */
        tTaskMain_cButton__array_size,           /* array_size */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTaskMain_cButton__place,                /* place */
        tTaskMain_cButton__b_VMT_useless,        /* b_VMT_useless */
        tTaskMain_cButton__b_skelton_useless,    /* b_skelton_useless */
        tTaskMain_cButton__b_cell_unique,        /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[17]:  tTaskMain_cTECSInfoCallInfo id=18 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cTECSInfo",                             /* name */
        tTaskMain_cTECSInfo__offset,             /* offset */
        tTaskMain_cTECSInfo__array_size,         /* array_size */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTaskMain_cTECSInfo__place,              /* place */
        tTaskMain_cTECSInfo__b_VMT_useless,      /* b_VMT_useless */
        tTaskMain_cTECSInfo__b_skelton_useless,  /* b_skelton_useless */
        tTaskMain_cTECSInfo__b_cell_unique,      /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[18]:  tTaskMain_cNSInfoCallInfo id=19 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nTECSInfo_sNamespaceInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cNSInfo",                               /* name */
        tTaskMain_cNSInfo__offset,               /* offset */
        tTaskMain_cNSInfo__array_size,           /* array_size */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        true,                                    /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTaskMain_cNSInfo__place,                /* place */
        tTaskMain_cNSInfo__b_VMT_useless,        /* b_VMT_useless */
        tTaskMain_cNSInfo__b_skelton_useless,    /* b_skelton_useless */
        tTaskMain_cNSInfo__b_cell_unique,        /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[19]:  tTaskMain_cRegionInfoCallInfo id=20 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nTECSInfo_sRegionInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cRegionInfo",                           /* name */
        tTaskMain_cRegionInfo__offset,           /* offset */
        tTaskMain_cRegionInfo__array_size,       /* array_size */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        true,                                    /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTaskMain_cRegionInfo__place,            /* place */
        tTaskMain_cRegionInfo__b_VMT_useless,    /* b_VMT_useless */
        tTaskMain_cRegionInfo__b_skelton_useless, /* b_skelton_useless */
        tTaskMain_cRegionInfo__b_cell_unique,    /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[20]:  tTaskMain_cCellInfoCallInfo id=21 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nTECSInfo_sCellInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cCellInfo",                             /* name */
        tTaskMain_cCellInfo__offset,             /* offset */
        tTaskMain_cCellInfo__array_size,         /* array_size */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        true,                                    /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTaskMain_cCellInfo__place,              /* place */
        tTaskMain_cCellInfo__b_VMT_useless,      /* b_VMT_useless */
        tTaskMain_cCellInfo__b_skelton_useless,  /* b_skelton_useless */
        tTaskMain_cCellInfo__b_cell_unique,      /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[21]:  tTaskMain_cSignatureInfoCallInfo id=22 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nTECSInfo_sSignatureInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cSignatureInfo",                        /* name */
        tTaskMain_cSignatureInfo__offset,        /* offset */
        tTaskMain_cSignatureInfo__array_size,    /* array_size */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        true,                                    /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTaskMain_cSignatureInfo__place,         /* place */
        tTaskMain_cSignatureInfo__b_VMT_useless, /* b_VMT_useless */
        tTaskMain_cSignatureInfo__b_skelton_useless, /* b_skelton_useless */
        tTaskMain_cSignatureInfo__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[22]:  tTaskMain_cCelltypeInfoCallInfo id=23 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nTECSInfo_sCelltypeInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cCelltypeInfo",                         /* name */
        tTaskMain_cCelltypeInfo__offset,         /* offset */
        tTaskMain_cCelltypeInfo__array_size,     /* array_size */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        true,                                    /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTaskMain_cCelltypeInfo__place,          /* place */
        tTaskMain_cCelltypeInfo__b_VMT_useless,  /* b_VMT_useless */
        tTaskMain_cCelltypeInfo__b_skelton_useless, /* b_skelton_useless */
        tTaskMain_cCelltypeInfo__b_cell_unique,  /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[23]:  tTaskMain_cVarDeclInfoCallInfo id=24 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nTECSInfo_sVarDeclInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cVarDeclInfo",                          /* name */
        tTaskMain_cVarDeclInfo__offset,          /* offset */
        tTaskMain_cVarDeclInfo__array_size,      /* array_size */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        true,                                    /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTaskMain_cVarDeclInfo__place,           /* place */
        tTaskMain_cVarDeclInfo__b_VMT_useless,   /* b_VMT_useless */
        tTaskMain_cVarDeclInfo__b_skelton_useless, /* b_skelton_useless */
        tTaskMain_cVarDeclInfo__b_cell_unique,   /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[24]:  tTaskMain_cTypeInfoCallInfo id=25 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nTECSInfo_sTypeInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cTypeInfo",                             /* name */
        tTaskMain_cTypeInfo__offset,             /* offset */
        tTaskMain_cTypeInfo__array_size,         /* array_size */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        true,                                    /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTaskMain_cTypeInfo__place,              /* place */
        tTaskMain_cTypeInfo__b_VMT_useless,      /* b_VMT_useless */
        tTaskMain_cTypeInfo__b_skelton_useless,  /* b_skelton_useless */
        tTaskMain_cTypeInfo__b_cell_unique,      /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[25]:  tTaskMain_cTarget1CallInfo id=26 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sTarget1SignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cTarget1",                              /* name */
        tTaskMain_cTarget1__offset,              /* offset */
        tTaskMain_cTarget1__array_size,          /* array_size */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        true,                                    /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTaskMain_cTarget1__place,               /* place */
        tTaskMain_cTarget1__b_VMT_useless,       /* b_VMT_useless */
        tTaskMain_cTarget1__b_skelton_useless,   /* b_skelton_useless */
        tTaskMain_cTarget1__b_cell_unique,       /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[26]:  tTaskMain_cREDInfoCallInfo id=27 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nTECSInfo_sRawEntryDescriptorInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cREDInfo",                              /* name */
        tTaskMain_cREDInfo__offset,              /* offset */
        tTaskMain_cREDInfo__array_size,          /* array_size */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        true,                                    /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTaskMain_cREDInfo__place,               /* place */
        tTaskMain_cREDInfo__b_VMT_useless,       /* b_VMT_useless */
        tTaskMain_cREDInfo__b_skelton_useless,   /* b_skelton_useless */
        tTaskMain_cREDInfo__b_cell_unique,       /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[27]:  tTaskMain_cEntryInfoCallInfo id=28 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nTECSInfo_sEntryInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cEntryInfo",                            /* name */
        tTaskMain_cEntryInfo__offset,            /* offset */
        tTaskMain_cEntryInfo__array_size,        /* array_size */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        true,                                    /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTaskMain_cEntryInfo__place,             /* place */
        tTaskMain_cEntryInfo__b_VMT_useless,     /* b_VMT_useless */
        tTaskMain_cEntryInfo__b_skelton_useless, /* b_skelton_useless */
        tTaskMain_cEntryInfo__b_cell_unique,     /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[28]:  nMruby_tTECSInitializer_cInitializeCallInfo id=29 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nMruby_sInitializeTECSBridgeSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cInitialize",                           /* name */
        nMruby_tTECSInitializer_cInitialize__offset, /* offset */
        nMruby_tTECSInitializer_cInitialize__array_size, /* array_size */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        nMruby_tTECSInitializer_cInitialize__place, /* place */
        nMruby_tTECSInitializer_cInitialize__b_VMT_useless, /* b_VMT_useless */
        nMruby_tTECSInitializer_cInitialize__b_skelton_useless, /* b_skelton_useless */
        nMruby_tTECSInitializer_cInitialize__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[29]:  nMruby_tsKernel_cTECSCallInfo id=30 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sKernelSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cTECS",                                 /* name */
        nMruby_tsKernel_cTECS__offset,           /* offset */
        nMruby_tsKernel_cTECS__array_size,       /* array_size */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        nMruby_tsKernel_cTECS__place,            /* place */
        nMruby_tsKernel_cTECS__b_VMT_useless,    /* b_VMT_useless */
        nMruby_tsKernel_cTECS__b_skelton_useless, /* b_skelton_useless */
        nMruby_tsKernel_cTECS__b_cell_unique,    /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[30]:  nMruby_tsMotor_cTECSCallInfo id=31 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sMotorSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cTECS",                                 /* name */
        nMruby_tsMotor_cTECS__offset,            /* offset */
        nMruby_tsMotor_cTECS__array_size,        /* array_size */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        nMruby_tsMotor_cTECS__place,             /* place */
        nMruby_tsMotor_cTECS__b_VMT_useless,     /* b_VMT_useless */
        nMruby_tsMotor_cTECS__b_skelton_useless, /* b_skelton_useless */
        nMruby_tsMotor_cTECS__b_cell_unique,     /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[31]:  nMruby_tsLCD_cTECSCallInfo id=32 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sLCDSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cTECS",                                 /* name */
        nMruby_tsLCD_cTECS__offset,              /* offset */
        nMruby_tsLCD_cTECS__array_size,          /* array_size */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        nMruby_tsLCD_cTECS__place,               /* place */
        nMruby_tsLCD_cTECS__b_VMT_useless,       /* b_VMT_useless */
        nMruby_tsLCD_cTECS__b_skelton_useless,   /* b_skelton_useless */
        nMruby_tsLCD_cTECS__b_cell_unique,       /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[32]:  nMruby_tsLED_cTECSCallInfo id=33 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sLEDSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cTECS",                                 /* name */
        nMruby_tsLED_cTECS__offset,              /* offset */
        nMruby_tsLED_cTECS__array_size,          /* array_size */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        nMruby_tsLED_cTECS__place,               /* place */
        nMruby_tsLED_cTECS__b_VMT_useless,       /* b_VMT_useless */
        nMruby_tsLED_cTECS__b_skelton_useless,   /* b_skelton_useless */
        nMruby_tsLED_cTECS__b_cell_unique,       /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[33]:  nMruby_tsButton_cTECSCallInfo id=34 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sButtonSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cTECS",                                 /* name */
        nMruby_tsButton_cTECS__offset,           /* offset */
        nMruby_tsButton_cTECS__array_size,       /* array_size */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        nMruby_tsButton_cTECS__place,            /* place */
        nMruby_tsButton_cTECS__b_VMT_useless,    /* b_VMT_useless */
        nMruby_tsButton_cTECS__b_skelton_useless, /* b_skelton_useless */
        nMruby_tsButton_cTECS__b_cell_unique,    /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[34]:  nMruby_tsBattery_cTECSCallInfo id=35 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sBatterySignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cTECS",                                 /* name */
        nMruby_tsBattery_cTECS__offset,          /* offset */
        nMruby_tsBattery_cTECS__array_size,      /* array_size */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        nMruby_tsBattery_cTECS__place,           /* place */
        nMruby_tsBattery_cTECS__b_VMT_useless,   /* b_VMT_useless */
        nMruby_tsBattery_cTECS__b_skelton_useless, /* b_skelton_useless */
        nMruby_tsBattery_cTECS__b_cell_unique,   /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[35]:  nMruby_tsSpeaker_cTECSCallInfo id=36 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sSpeakerSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cTECS",                                 /* name */
        nMruby_tsSpeaker_cTECS__offset,          /* offset */
        nMruby_tsSpeaker_cTECS__array_size,      /* array_size */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        nMruby_tsSpeaker_cTECS__place,           /* place */
        nMruby_tsSpeaker_cTECS__b_VMT_useless,   /* b_VMT_useless */
        nMruby_tsSpeaker_cTECS__b_skelton_useless, /* b_skelton_useless */
        nMruby_tsSpeaker_cTECS__b_cell_unique,   /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[36]:  nMruby_tsUltrasonicSensor_cTECSCallInfo id=37 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sUltrasonicSensorSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cTECS",                                 /* name */
        nMruby_tsUltrasonicSensor_cTECS__offset, /* offset */
        nMruby_tsUltrasonicSensor_cTECS__array_size, /* array_size */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        nMruby_tsUltrasonicSensor_cTECS__place,  /* place */
        nMruby_tsUltrasonicSensor_cTECS__b_VMT_useless, /* b_VMT_useless */
        nMruby_tsUltrasonicSensor_cTECS__b_skelton_useless, /* b_skelton_useless */
        nMruby_tsUltrasonicSensor_cTECS__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[37]:  nMruby_tsGyroSensor_cTECSCallInfo id=38 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sGyroSensorSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cTECS",                                 /* name */
        nMruby_tsGyroSensor_cTECS__offset,       /* offset */
        nMruby_tsGyroSensor_cTECS__array_size,   /* array_size */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        nMruby_tsGyroSensor_cTECS__place,        /* place */
        nMruby_tsGyroSensor_cTECS__b_VMT_useless, /* b_VMT_useless */
        nMruby_tsGyroSensor_cTECS__b_skelton_useless, /* b_skelton_useless */
        nMruby_tsGyroSensor_cTECS__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[38]:  nMruby_tsColorSensor_cTECSCallInfo id=39 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sColorSensorSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cTECS",                                 /* name */
        nMruby_tsColorSensor_cTECS__offset,      /* offset */
        nMruby_tsColorSensor_cTECS__array_size,  /* array_size */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        nMruby_tsColorSensor_cTECS__place,       /* place */
        nMruby_tsColorSensor_cTECS__b_VMT_useless, /* b_VMT_useless */
        nMruby_tsColorSensor_cTECS__b_skelton_useless, /* b_skelton_useless */
        nMruby_tsColorSensor_cTECS__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[39]:  nMruby_tsTouchSensor_cTECSCallInfo id=40 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sTouchSensorSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cTECS",                                 /* name */
        nMruby_tsTouchSensor_cTECS__offset,      /* offset */
        nMruby_tsTouchSensor_cTECS__array_size,  /* array_size */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        nMruby_tsTouchSensor_cTECS__place,       /* place */
        nMruby_tsTouchSensor_cTECS__b_VMT_useless, /* b_VMT_useless */
        nMruby_tsTouchSensor_cTECS__b_skelton_useless, /* b_skelton_useless */
        nMruby_tsTouchSensor_cTECS__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[40]:  nMruby_tsBalancer_cTECSCallInfo id=41 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sBalancerSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cTECS",                                 /* name */
        nMruby_tsBalancer_cTECS__offset,         /* offset */
        nMruby_tsBalancer_cTECS__array_size,     /* array_size */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        nMruby_tsBalancer_cTECS__place,          /* place */
        nMruby_tsBalancer_cTECS__b_VMT_useless,  /* b_VMT_useless */
        nMruby_tsBalancer_cTECS__b_skelton_useless, /* b_skelton_useless */
        nMruby_tsBalancer_cTECS__b_cell_unique,  /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[41]:  nMruby_tsSharedMemory_cTECSCallInfo id=42 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sSharedMemorySignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cTECS",                                 /* name */
        nMruby_tsSharedMemory_cTECS__offset,     /* offset */
        nMruby_tsSharedMemory_cTECS__array_size, /* array_size */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        nMruby_tsSharedMemory_cTECS__place,      /* place */
        nMruby_tsSharedMemory_cTECS__b_VMT_useless, /* b_VMT_useless */
        nMruby_tsSharedMemory_cTECS__b_skelton_useless, /* b_skelton_useless */
        nMruby_tsSharedMemory_cTECS__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[42]:  nTECSInfo_tTECSInfo_cTECSInfoCallInfo id=43 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cTECSInfo",                             /* name */
        nTECSInfo_tTECSInfo_cTECSInfo__offset,   /* offset */
        nTECSInfo_tTECSInfo_cTECSInfo__array_size, /* array_size */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        nTECSInfo_tTECSInfo_cTECSInfo__place,    /* place */
        nTECSInfo_tTECSInfo_cTECSInfo__b_VMT_useless, /* b_VMT_useless */
        nTECSInfo_tTECSInfo_cTECSInfo__b_skelton_useless, /* b_skelton_useless */
        nTECSInfo_tTECSInfo_cTECSInfo__b_cell_unique, /* b_cell_unique */
    },
};

extern const struct tag_nTECSInfo_sCallInfo_VMT nTECSInfo_tCallInfo_eCallInfo_MT_;
/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTask_cBodyCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTask_cBodyCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[0],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTask_cExceptionBodyCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTask_cExceptionBodyCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[1],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tLCD_cButtonCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tLCD_cButtonCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[2],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tEV3Platform_cRiteVMCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tEV3Platform_cRiteVMCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[3],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tEV3Platform_cTaskCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tEV3Platform_cTaskCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[4],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTarget1_cLCDCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTarget1_cLCDCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[5],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTarget1_cButtonCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTarget1_cButtonCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[6],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTarget1_cKernelCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTarget1_cKernelCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[7],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTarget2_cLCDCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTarget2_cLCDCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[8],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTarget2_cButtonCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTarget2_cButtonCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[9],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTarget2_cKernelCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTarget2_cKernelCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[10],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTarget3_cLCDCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTarget3_cLCDCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[11],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTarget3_cButtonCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTarget3_cButtonCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[12],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTarget3_cKernelCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTarget3_cKernelCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[13],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cKernelCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cKernelCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[14],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cLCDCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cLCDCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[15],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cButtonCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cButtonCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[16],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cTECSInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cTECSInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[17],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cNSInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cNSInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[18],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cRegionInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cRegionInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[19],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cCellInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cCellInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[20],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cSignatureInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cSignatureInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[21],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cCelltypeInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cCelltypeInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[22],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cVarDeclInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cVarDeclInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[23],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cTypeInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cTypeInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[24],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cTarget1CallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cTarget1CallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[25],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cREDInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cREDInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[26],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cEntryInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cEntryInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[27],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tTECSInitializer_cInitializeCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tTECSInitializer_cInitializeCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[28],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsKernel_cTECSCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsKernel_cTECSCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[29],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsMotor_cTECSCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsMotor_cTECSCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[30],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsLCD_cTECSCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsLCD_cTECSCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[31],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsLED_cTECSCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsLED_cTECSCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[32],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsButton_cTECSCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsButton_cTECSCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[33],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsBattery_cTECSCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsBattery_cTECSCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[34],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsSpeaker_cTECSCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsSpeaker_cTECSCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[35],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsUltrasonicSensor_cTECSCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsUltrasonicSensor_cTECSCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[36],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsGyroSensor_cTECSCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsGyroSensor_cTECSCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[37],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsColorSensor_cTECSCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsColorSensor_cTECSCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[38],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsTouchSensor_cTECSCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsTouchSensor_cTECSCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[39],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsBalancer_cTECSCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsBalancer_cTECSCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[40],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsSharedMemory_cTECSCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsSharedMemory_cTECSCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[41],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_tTECSInfo_cTECSInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_tTECSInfo_cTECSInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[42],      /* INIB 3 */
};
/* CB 初期化コード #_CIC_# */
void
nTECSInfo_tCallInfo_CB_initialize()
{
    nTECSInfo_tCallInfo_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
