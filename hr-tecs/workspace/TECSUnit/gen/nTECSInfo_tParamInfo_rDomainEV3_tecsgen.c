/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "nTECSInfo_tParamInfo_tecsgen.h"
#include "nTECSInfo_tParamInfo_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eParamInfo */
struct tag_nTECSInfo_tParamInfo_eParamInfo_DES {
    const struct tag_nTECSInfo_sParamInfo_VMT *vmt;
    tParamInfo_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eParamInfo */
ER             nTECSInfo_tParamInfo_eParamInfo_getName_skel( const struct tag_nTECSInfo_sParamInfo_VDES *epd, char_t* name, int_t max_len)
{
    struct tag_nTECSInfo_tParamInfo_eParamInfo_DES *lepd
        = (struct tag_nTECSInfo_tParamInfo_eParamInfo_DES *)epd;
    return nTECSInfo_tParamInfo_eParamInfo_getName( lepd->idx, name, max_len );
}
uint16_t       nTECSInfo_tParamInfo_eParamInfo_getNameLength_skel( const struct tag_nTECSInfo_sParamInfo_VDES *epd)
{
    struct tag_nTECSInfo_tParamInfo_eParamInfo_DES *lepd
        = (struct tag_nTECSInfo_tParamInfo_eParamInfo_DES *)epd;
    return nTECSInfo_tParamInfo_eParamInfo_getNameLength( lepd->idx );
}
ER             nTECSInfo_tParamInfo_eParamInfo_getTypeInfo_skel( const struct tag_nTECSInfo_sParamInfo_VDES *epd, Descriptor( nTECSInfo_sTypeInfo )* desc)
{
    struct tag_nTECSInfo_tParamInfo_eParamInfo_DES *lepd
        = (struct tag_nTECSInfo_tParamInfo_eParamInfo_DES *)epd;
    return nTECSInfo_tParamInfo_eParamInfo_getTypeInfo( lepd->idx, desc );
}
ER             nTECSInfo_tParamInfo_eParamInfo_getDir_skel( const struct tag_nTECSInfo_sParamInfo_VDES *epd, int8_t* dir)
{
    struct tag_nTECSInfo_tParamInfo_eParamInfo_DES *lepd
        = (struct tag_nTECSInfo_tParamInfo_eParamInfo_DES *)epd;
    return nTECSInfo_tParamInfo_eParamInfo_getDir( lepd->idx, dir );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eParamInfo */
const struct tag_nTECSInfo_sParamInfo_VMT nTECSInfo_tParamInfo_eParamInfo_MT_ = {
    nTECSInfo_tParamInfo_eParamInfo_getName_skel,
    nTECSInfo_tParamInfo_eParamInfo_getNameLength_skel,
    nTECSInfo_tParamInfo_eParamInfo_getTypeInfo_skel,
    nTECSInfo_tParamInfo_eParamInfo_getDir_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_TEXPTNTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_PRITypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_PRI_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_T_RTSK_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_TEXPTNTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_T_RTEX_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_OVRTIMTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_T_ROVR_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_TEXPTNTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_OVRTIMTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_T_RCYC_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_RELTIMTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_T_RALM_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_RELTIMTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_TMOTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_T_RSEM_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_FLGPTNTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_FLGPTNTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_FLGPTNTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_MODETypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_FLGPTN_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_FLGPTNTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_MODETypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_FLGPTN_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_FLGPTNTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_MODETypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_FLGPTN_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_TMOTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_T_RFLG_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_FLGPTNTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_TMOTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_intptr_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_intptr_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_intptr_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_TMOTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_T_RDTQ_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_PRITypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_PRITypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_PRITypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_TMOTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_intptr_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_PRI_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_intptr_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_PRI_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_intptr_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_PRI_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_TMOTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_T_RPDQ_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_PRITypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_void_Ptr__Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_void_Ptr__Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_void_Ptr__Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_TMOTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_const__void_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_T_RMPF_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_TMOTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_RELTIMTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_ID_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_PRITypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_SYSTIM_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_SYSUTM_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_PRITypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_PRI_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_ID_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_PRITypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_SYSUTM_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_const__void_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_const__void_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_const__uint8_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_const__uint8_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_const__uint8_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_TMOTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint8_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint8_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint8_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_TMOTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_T_RMBF_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_size_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_size_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_size_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_const__void_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_size_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_const__void_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint16_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint16_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint16_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_intTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_bool_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_intTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_bool_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_button_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_lcdfont_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_lcdfont_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_const__char_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_lcdcolor_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_const__char_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_const__char_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_const__char_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_const__char_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_ledcolor_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint8_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint16_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int16_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int16_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int16_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int16_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int16_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int8_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int8_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_intTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_intTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_intTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_const__int8_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int8_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int8_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int8_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_ERTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_intTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_intTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_struct__tecsunit_obj_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_struct__tecsunit_obj_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_intTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_intTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_struct__tecsunit_obj_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_struct__tecsunit_obj_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_const__mrb_state_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_mrb_state_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_struct__RClass_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_intTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_const__char_Ptr__Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sTypeInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sVarDeclInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint32_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int8_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sTypeInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint32_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_const__void_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sTypeInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int8_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sTypeInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sParamInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sFunctionInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sSignatureInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint32_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int8_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sSignatureInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sVarDeclInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sVarDeclInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sCallInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sEntryInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sRawEntryDescriptorInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sCelltypeInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_void_Ptr__Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_void_Ptr__Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_void_Ptr__Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sNamespaceInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sSignatureInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sCelltypeInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sCellInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sRegionInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sNamespaceInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sRegionInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sSignatureInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sCelltypeInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sCellInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sRawEntryDescriptorInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sEntryInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_void_Ptr__Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint32_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int8_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int8_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int8_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

/* 呼び口配列 #_CPA_# */



























































































































































































































































































































































/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
nTECSInfo_tParamInfo_INIB nTECSInfo_tParamInfo_INIB_tab[] = {
    /* cell: nTECSInfo_tParamInfo_CB_tab[0]:  sTaskExceptionBody_main_patternParamInfo id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_TEXPTNTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "pattern",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[1]:  sTask_changePriority_priorityParamInfo id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_PRITypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "priority",                              /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[2]:  sTask_getPriority_p_priorityParamInfo id=3 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_PRI_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "p_priority",                            /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[3]:  sTask_refer_pk_taskStatusParamInfo id=4 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_T_RTSK_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "pk_taskStatus",                         /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[4]:  sTask_raiseException_patternParamInfo id=5 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_TEXPTNTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "pattern",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[5]:  sTask_referException_pk_rtexParamInfo id=6 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_T_RTEX_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "pk_rtex",                               /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[6]:  sTask_startOverRunHandler_ovrtimParamInfo id=7 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_OVRTIMTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ovrtim",                                /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[7]:  sTask_referOverRunHandler_pk_rovrParamInfo id=8 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_T_ROVR_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "pk_rovr",                               /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[8]:  siTask_raiseException_patternParamInfo id=9 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_TEXPTNTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "pattern",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[9]:  siTask_startOverRunHandler_ovrtimParamInfo id=10 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_OVRTIMTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ovrtim",                                /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[10]:  sCyclic_refer_pk_cyclicHandlerStatusParamInfo id=11 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_T_RCYC_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "pk_cyclicHandlerStatus",                /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[11]:  sAlarm_start_alarmTimeParamInfo id=12 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_RELTIMTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "alarmTime",                             /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[12]:  sAlarm_refer_pk_alarmStatusParamInfo id=13 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_T_RALM_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "pk_alarmStatus",                        /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[13]:  siAlarm_start_alarmTimeParamInfo id=14 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_RELTIMTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "alarmTime",                             /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[14]:  sSemaphore_waitTimeout_timeoutParamInfo id=15 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_TMOTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "timeout",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[15]:  sSemaphore_refer_pk_semaphoreStatusParamInfo id=16 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_T_RSEM_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "pk_semaphoreStatus",                    /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[16]:  sEventflag_set_setPatternParamInfo id=17 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_FLGPTNTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "setPattern",                            /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[17]:  sEventflag_clear_clearPatternParamInfo id=18 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_FLGPTNTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "clearPattern",                          /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[18]:  sEventflag_wait_waitPatternParamInfo id=19 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_FLGPTNTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "waitPattern",                           /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[19]:  sEventflag_wait_waitFlagModeParamInfo id=20 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_MODETypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "waitFlagMode",                          /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[20]:  sEventflag_wait_p_flagPatternParamInfo id=21 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_FLGPTN_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "p_flagPattern",                         /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[21]:  sEventflag_waitPolling_waitPatternParamInfo id=22 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_FLGPTNTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "waitPattern",                           /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[22]:  sEventflag_waitPolling_waitFlagModeParamInfo id=23 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_MODETypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "waitFlagMode",                          /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[23]:  sEventflag_waitPolling_p_flagPatternParamInfo id=24 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_FLGPTN_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "p_flagPattern",                         /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[24]:  sEventflag_waitTimeout_waitPatternParamInfo id=25 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_FLGPTNTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "waitPattern",                           /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[25]:  sEventflag_waitTimeout_waitFlagModeParamInfo id=26 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_MODETypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "waitFlagMode",                          /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[26]:  sEventflag_waitTimeout_p_flagPatternParamInfo id=27 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_FLGPTN_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "p_flagPattern",                         /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[27]:  sEventflag_waitTimeout_timeoutParamInfo id=28 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_TMOTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "timeout",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[28]:  sEventflag_refer_pk_eventflagStatusParamInfo id=29 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_T_RFLG_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "pk_eventflagStatus",                    /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[29]:  siEventflag_set_setPatternParamInfo id=30 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_FLGPTNTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "setPattern",                            /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[30]:  sDataqueue_send_dataParamInfo id=31 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "data",                                  /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[31]:  sDataqueue_sendPolling_dataParamInfo id=32 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "data",                                  /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[32]:  sDataqueue_sendTimeout_dataParamInfo id=33 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "data",                                  /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[33]:  sDataqueue_sendTimeout_timeoutParamInfo id=34 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_TMOTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "timeout",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[34]:  sDataqueue_sendForce_dataParamInfo id=35 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "data",                                  /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[35]:  sDataqueue_receive_p_dataParamInfo id=36 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_intptr_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "p_data",                                /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[36]:  sDataqueue_receivePolling_p_dataParamInfo id=37 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_intptr_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "p_data",                                /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[37]:  sDataqueue_receiveTimeout_p_dataParamInfo id=38 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_intptr_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "p_data",                                /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[38]:  sDataqueue_receiveTimeout_timeoutParamInfo id=39 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_TMOTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "timeout",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[39]:  sDataqueue_refer_pk_dataqueueStatusParamInfo id=40 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_T_RDTQ_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "pk_dataqueueStatus",                    /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[40]:  siDataqueue_sendPolling_dataParamInfo id=41 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "data",                                  /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[41]:  siDataqueue_sendForce_dataParamInfo id=42 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "data",                                  /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[42]:  sPriorityDataqueue_send_dataParamInfo id=43 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "data",                                  /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[43]:  sPriorityDataqueue_send_dataPriorityParamInfo id=44 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_PRITypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "dataPriority",                          /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[44]:  sPriorityDataqueue_sendPolling_dataParamInfo id=45 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "data",                                  /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[45]:  sPriorityDataqueue_sendPolling_dataPriorityParamInfo id=46 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_PRITypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "dataPriority",                          /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[46]:  sPriorityDataqueue_sendTimeout_dataParamInfo id=47 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "data",                                  /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[47]:  sPriorityDataqueue_sendTimeout_dataPriorityParamInfo id=48 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_PRITypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "dataPriority",                          /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[48]:  sPriorityDataqueue_sendTimeout_timeoutParamInfo id=49 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_TMOTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "timeout",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[49]:  sPriorityDataqueue_receive_p_dataParamInfo id=50 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_intptr_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "p_data",                                /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[50]:  sPriorityDataqueue_receive_p_dataPriorityParamInfo id=51 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_PRI_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "p_dataPriority",                        /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[51]:  sPriorityDataqueue_receivePolling_p_dataParamInfo id=52 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_intptr_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "p_data",                                /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[52]:  sPriorityDataqueue_receivePolling_p_dataPriorityParamInfo id=53 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_PRI_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "p_dataPriority",                        /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[53]:  sPriorityDataqueue_receiveTimeout_p_dataParamInfo id=54 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_intptr_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "p_data",                                /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[54]:  sPriorityDataqueue_receiveTimeout_p_dataPriorityParamInfo id=55 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_PRI_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "p_dataPriority",                        /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[55]:  sPriorityDataqueue_receiveTimeout_timeoutParamInfo id=56 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_TMOTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "timeout",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[56]:  sPriorityDataqueue_refer_pk_priorityDataqueueStatusParamInfo id=57 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_T_RPDQ_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "pk_priorityDataqueueStatus",            /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[57]:  siPriorityDataqueue_sendPolling_dataParamInfo id=58 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "data",                                  /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[58]:  siPriorityDataqueue_sendPolling_dataPriorityParamInfo id=59 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_PRITypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "dataPriority",                          /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[59]:  sFixedSizeMemoryPool_get_p_blockParamInfo id=60 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_void_Ptr__Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "p_block",                               /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[60]:  sFixedSizeMemoryPool_getPolling_p_blockParamInfo id=61 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_void_Ptr__Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "p_block",                               /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[61]:  sFixedSizeMemoryPool_getTimeout_p_blockParamInfo id=62 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_void_Ptr__Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "p_block",                               /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[62]:  sFixedSizeMemoryPool_getTimeout_timeoutParamInfo id=63 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_TMOTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "timeout",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[63]:  sFixedSizeMemoryPool_release_blockParamInfo id=64 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_const__void_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "block",                                 /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[64]:  sFixedSizeMemoryPool_refer_pk_memoryPoolFixedSizeStatusParamInfo id=65 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_T_RMPF_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "pk_memoryPoolFixedSizeStatus",          /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[65]:  sKernel_sleepTimeout_timeoutParamInfo id=66 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_TMOTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "timeout",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[66]:  sKernel_delay_delayTimeParamInfo id=67 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_RELTIMTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "delayTime",                             /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[67]:  sKernel_getTaskId_p_taskIdParamInfo id=68 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_ID_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "p_taskId",                              /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[68]:  sKernel_rotateReadyQueue_taskPriorityParamInfo id=69 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_PRITypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "taskPriority",                          /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[69]:  sKernel_getTime_p_systemTimeParamInfo id=70 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_SYSTIM_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "p_systemTime",                          /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[70]:  sKernel_getMicroTime_p_systemMicroTimeParamInfo id=71 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_SYSUTM_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "p_systemMicroTime",                     /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[71]:  sKernel_changeInterruptPriorityMask_interruptPriorityParamInfo id=72 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_PRITypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "interruptPriority",                     /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[72]:  sKernel_getInterruptPriorityMask_p_interruptPriorityParamInfo id=73 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_PRI_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "p_interruptPriority",                   /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[73]:  siKernel_getTaskId_p_taskIdParamInfo id=74 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_ID_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "p_taskId",                              /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[74]:  siKernel_rotateReadyQueue_taskPriorityParamInfo id=75 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_PRITypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "taskPriority",                          /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[75]:  siKernel_getMicroTime_p_systemMicroTimeParamInfo id=76 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_SYSUTM_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "p_systemMicroTime",                     /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[76]:  siKernel_senseDispatchPendingStateCPU_p_exceptionInfomationParamInfo id=77 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_const__void_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "p_exceptionInfomation",                 /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[77]:  siKernel_senseTaskExceptionPendingStateCPU_p_exceptionInfomationParamInfo id=78 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_const__void_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "p_exceptionInfomation",                 /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[78]:  sMessageBuffer_send_messageParamInfo id=79 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_const__uint8_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "message",                               /* name */
        1,                                       /* dir */
        " $1",                                   /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[79]:  sMessageBuffer_send_sizeParamInfo id=80 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "size",                                  /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[80]:  sMessageBuffer_sendPolling_messageParamInfo id=81 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_const__uint8_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "message",                               /* name */
        1,                                       /* dir */
        " $1",                                   /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[81]:  sMessageBuffer_sendPolling_sizeParamInfo id=82 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "size",                                  /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[82]:  sMessageBuffer_sendTimeout_messageParamInfo id=83 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_const__uint8_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "message",                               /* name */
        1,                                       /* dir */
        " $1",                                   /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[83]:  sMessageBuffer_sendTimeout_sizeParamInfo id=84 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "size",                                  /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[84]:  sMessageBuffer_sendTimeout_timeoutParamInfo id=85 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_TMOTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "timeout",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[85]:  sMessageBuffer_receive_messageParamInfo id=86 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint8_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "message",                               /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[86]:  sMessageBuffer_receivePolling_messageParamInfo id=87 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint8_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "message",                               /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[87]:  sMessageBuffer_receiveTimeout_messageParamInfo id=88 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint8_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "message",                               /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[88]:  sMessageBuffer_receiveTimeout_timeoutParamInfo id=89 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_TMOTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "timeout",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[89]:  sMessageBuffer_refer_packetParamInfo id=90 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_T_RMBF_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "packet",                                /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[90]:  sMalloc_calloc_nelemParamInfo id=91 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_size_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "nelem",                                 /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[91]:  sMalloc_calloc_elem_sizeParamInfo id=92 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_size_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "elem_size",                             /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[92]:  sMalloc_malloc_sizeParamInfo id=93 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_size_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "size",                                  /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[93]:  sMalloc_realloc_ptrParamInfo id=94 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_const__void_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ptr",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[94]:  sMalloc_realloc_new_sizeParamInfo id=95 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_size_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "new_size",                              /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[95]:  sMalloc_free_ptrParamInfo id=96 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_const__void_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ptr",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[96]:  sColorSensor_getRGBRaw_rParamInfo id=97 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint16_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "r",                                     /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[97]:  sColorSensor_getRGBRaw_gParamInfo id=98 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint16_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "g",                                     /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[98]:  sColorSensor_getRGBRaw_bParamInfo id=99 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint16_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "b",                                     /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[99]:  sGyroSensor_calibrate_timesParamInfo id=100 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "times",                                 /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[100]:  sMotor_setPower_powerParamInfo id=101 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_intTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "power",                                 /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[101]:  sMotor_stop_brakeParamInfo id=102 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_bool_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "brake",                                 /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[102]:  sMotor_rotate_degreesParamInfo id=103 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_intTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "degrees",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[103]:  sMotor_rotate_speed_absParamInfo id=104 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "speed_abs",                             /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[104]:  sMotor_rotate_blockingParamInfo id=105 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_bool_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "blocking",                              /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[105]:  sMotor_initializePort_typeParamInfo id=106 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "type",                                  /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[106]:  sButton_isPressed_buttonParamInfo id=107 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_button_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "button",                                /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[107]:  sLCD_setFont_fontParamInfo id=108 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_lcdfont_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "font",                                  /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[108]:  sLCD_getFontSize_fontParamInfo id=109 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_lcdfont_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "font",                                  /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[109]:  sLCD_getFontSize_p_widthParamInfo id=110 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "p_width",                               /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[110]:  sLCD_getFontSize_p_heightParamInfo id=111 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "p_height",                              /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[111]:  sLCD_drawString_strParamInfo id=112 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_const__char_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "str",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[112]:  sLCD_drawString_xParamInfo id=113 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "x",                                     /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[113]:  sLCD_drawString_yParamInfo id=114 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "y",                                     /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[114]:  sLCD_fillRect_xParamInfo id=115 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "x",                                     /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[115]:  sLCD_fillRect_yParamInfo id=116 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "y",                                     /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[116]:  sLCD_fillRect_wParamInfo id=117 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "w",                                     /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[117]:  sLCD_fillRect_hParamInfo id=118 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "h",                                     /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[118]:  sLCD_fillRect_colorParamInfo id=119 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_lcdcolor_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "color",                                 /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[119]:  sLCD_drawLine_x0ParamInfo id=120 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "x0",                                    /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[120]:  sLCD_drawLine_y0ParamInfo id=121 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "y0",                                    /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[121]:  sLCD_drawLine_x1ParamInfo id=122 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "x1",                                    /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[122]:  sLCD_drawLine_y1ParamInfo id=123 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "y1",                                    /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[123]:  sLCD_print_strParamInfo id=124 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_const__char_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "str",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[124]:  sLCD_puts_strParamInfo id=125 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_const__char_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "str",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[125]:  sLCD_showMessageBox_titleParamInfo id=126 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_const__char_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "title",                                 /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[126]:  sLCD_showMessageBox_msgParamInfo id=127 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_const__char_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "msg",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[127]:  sLED_setColor_colorParamInfo id=128 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_ledcolor_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "color",                                 /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[128]:  sSpeaker_setVolume_volumeParamInfo id=129 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint8_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "volume",                                /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[129]:  sSpeaker_playTone_frequencyParamInfo id=130 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint16_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "frequency",                             /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[130]:  sSpeaker_playTone_durationParamInfo id=131 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "duration",                              /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[131]:  sBalancer_control_forwardParamInfo id=132 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int16_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "forward",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[132]:  sBalancer_control_turnParamInfo id=133 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int16_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "turn",                                  /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[133]:  sBalancer_control_gyroParamInfo id=134 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int16_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "gyro",                                  /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[134]:  sBalancer_control_gyroOffsetParamInfo id=135 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int16_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "gyroOffset",                            /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[135]:  sBalancer_control_leftRevolutionParamInfo id=136 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "leftRevolution",                        /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[136]:  sBalancer_control_rightRevolutionParamInfo id=137 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "rightRevolution",                       /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[137]:  sBalancer_control_batteryParamInfo id=138 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int16_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "battery",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[138]:  sBalancer_control_pwm_lParamInfo id=139 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int8_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "pwm_l",                                 /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[139]:  sBalancer_control_pwm_rParamInfo id=140 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int8_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "pwm_r",                                 /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[140]:  sBalancer_control_backlashhalfParamInfo id=141 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "backlashhalf",                          /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[141]:  sSharedMemory_putVal_indexParamInfo id=142 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "index",                                 /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[142]:  sSharedMemory_putVal_valParamInfo id=143 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "val",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[143]:  sSharedMemory_getVal_indexParamInfo id=144 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "index",                                 /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[144]:  sTarget1_double_argParamInfo id=145 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_intTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "arg",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[145]:  sTarget2_add_arg1ParamInfo id=146 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_intTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "arg1",                                  /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[146]:  sTarget2_add_arg2ParamInfo id=147 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_intTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "arg2",                                  /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[147]:  sTarget3_send_bufParamInfo id=148 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_const__int8_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "buf",                                   /* name */
        1,                                       /* dir */
        " $1",                                   /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[148]:  sTarget3_send_lenParamInfo id=149 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int8_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "len",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[149]:  sTarget3_sendMessage_bufParamInfo id=150 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "buf",                                   /* name */
        1,                                       /* dir */
        " $1",                                   /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[150]:  sTarget3_sendMessage_lenParamInfo id=151 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int8_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "len",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[151]:  sTarget3_receiveMessage_bufParamInfo id=152 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "buf",                                   /* name */
        2,                                       /* dir */
        " $1",                                   /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[152]:  sTarget3_receiveMessage_lenParamInfo id=153 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int8_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "len",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[153]:  sTarget3_checkER_eroorParamInfo id=154 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_ERTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eroor",                                 /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[154]:  sJSMN_json_parse_path_c_pathParamInfo id=155 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "c_path",                                /* name */
        2,                                       /* dir */
        " $4",                                   /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[155]:  sJSMN_json_parse_path_e_pathParamInfo id=156 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "e_path",                                /* name */
        2,                                       /* dir */
        " $4",                                   /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[156]:  sJSMN_json_parse_path_f_pathParamInfo id=157 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "f_path",                                /* name */
        2,                                       /* dir */
        " $4",                                   /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[157]:  sJSMN_json_parse_path_target_numParamInfo id=158 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_intTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "target_num",                            /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[158]:  sJSMN_json_parse_path_btrParamInfo id=159 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_intTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "btr",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[159]:  sJSMN_json_parse_arg_argumentsParamInfo id=160 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_struct__tecsunit_obj_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "arguments",                             /* name */
        3,                                       /* dir */
        " $4",                                   /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[160]:  sJSMN_json_parse_arg_exp_valParamInfo id=161 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_struct__tecsunit_obj_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "exp_val",                               /* name */
        3,                                       /* dir */
        " $4",                                   /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[161]:  sJSMN_json_parse_arg_arg_numParamInfo id=162 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "arg_num",                               /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[162]:  sJSMN_json_parse_arg_target_numParamInfo id=163 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_intTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "target_num",                            /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[163]:  sJSMN_json_parse_arg_btrParamInfo id=164 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_intTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "btr",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[164]:  sTECSUnit_main_cell_pathParamInfo id=165 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cell_path",                             /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        "",                                      /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[165]:  sTECSUnit_main_entry_pathParamInfo id=166 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "entry_path",                            /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        "",                                      /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[166]:  sTECSUnit_main_signature_pathParamInfo id=167 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "signature_path",                        /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        "",                                      /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[167]:  sTECSUnit_main_function_pathParamInfo id=168 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "function_path",                         /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        "",                                      /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[168]:  sTECSUnit_main_argumentsParamInfo id=169 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_struct__tecsunit_obj_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "arguments",                             /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[169]:  sTECSUnit_main_exp_valParamInfo id=170 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_struct__tecsunit_obj_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "exp_val",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[170]:  nMruby_sInitializeBridge_initializeBridge_mrbParamInfo id=171 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_const__mrb_state_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "mrb",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[171]:  nMruby_sInitializeTECSBridge_initializeBridge_mrbParamInfo id=172 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_mrb_state_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "mrb",                                   /* name */
        3,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[172]:  nMruby_sInitializeTECSBridge_initializeBridge_TECSParamInfo id=173 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_struct__RClass_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "TECS",                                  /* name */
        3,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[173]:  nMruby_sMrubyVM_funcall_nameParamInfo id=174 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "name",                                  /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        "",                                      /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[174]:  nPosix_sMain_main_argcParamInfo id=175 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_intTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "argc",                                  /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[175]:  nPosix_sMain_main_argvParamInfo id=176 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_const__char_Ptr__Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "argv",                                  /* name */
        1,                                       /* dir */
        " $0",                                   /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        "",                                      /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[176]:  nTECSInfo_sTypeInfo_getName_nameParamInfo id=177 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "name",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[177]:  nTECSInfo_sTypeInfo_getName_max_lenParamInfo id=178 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[178]:  nTECSInfo_sTypeInfo_getTypeInfo_descParamInfo id=179 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sTypeInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "desc",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[179]:  nTECSInfo_sTypeInfo_getMemberInfo_ithParamInfo id=180 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ith",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[180]:  nTECSInfo_sTypeInfo_getMemberInfo_descParamInfo id=181 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sVarDeclInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "desc",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[181]:  nTECSInfo_sVarDeclInfo_getName_nameParamInfo id=182 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "name",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[182]:  nTECSInfo_sVarDeclInfo_getName_max_lenParamInfo id=183 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[183]:  nTECSInfo_sVarDeclInfo_getLocationInfo_offsetParamInfo id=184 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint32_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "offset",                                /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[184]:  nTECSInfo_sVarDeclInfo_getLocationInfo_placeParamInfo id=185 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int8_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "place",                                 /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[185]:  nTECSInfo_sVarDeclInfo_getTypeInfo_descParamInfo id=186 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sTypeInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "desc",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[186]:  nTECSInfo_sVarDeclInfo_getSizeIsExpr_expr_strParamInfo id=187 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "expr_str",                              /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[187]:  nTECSInfo_sVarDeclInfo_getSizeIsExpr_max_lenParamInfo id=188 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[188]:  nTECSInfo_sVarDeclInfo_getSizeIs_sizeParamInfo id=189 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint32_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "size",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[189]:  nTECSInfo_sVarDeclInfo_getSizeIs_p_cbParamInfo id=190 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_const__void_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "p_cb",                                  /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[190]:  nTECSInfo_sParamInfo_getName_nameParamInfo id=191 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "name",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[191]:  nTECSInfo_sParamInfo_getName_max_lenParamInfo id=192 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[192]:  nTECSInfo_sParamInfo_getTypeInfo_descParamInfo id=193 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sTypeInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "desc",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[193]:  nTECSInfo_sParamInfo_getDir_dirParamInfo id=194 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int8_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "dir",                                   /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[194]:  nTECSInfo_sFunctionInfo_getName_nameParamInfo id=195 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "name",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[195]:  nTECSInfo_sFunctionInfo_getName_max_lenParamInfo id=196 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[196]:  nTECSInfo_sFunctionInfo_getReturnTypeInfo_descParamInfo id=197 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sTypeInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "desc",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[197]:  nTECSInfo_sFunctionInfo_getParamInfo_ithParamInfo id=198 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ith",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[198]:  nTECSInfo_sFunctionInfo_getParamInfo_paramParamInfo id=199 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sParamInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "param",                                 /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[199]:  nTECSInfo_sSignatureInfo_getName_nameParamInfo id=200 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "name",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[200]:  nTECSInfo_sSignatureInfo_getName_max_lenParamInfo id=201 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[201]:  nTECSInfo_sSignatureInfo_getFunctionInfo_ithParamInfo id=202 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ith",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[202]:  nTECSInfo_sSignatureInfo_getFunctionInfo_descParamInfo id=203 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sFunctionInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "desc",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[203]:  nTECSInfo_sCallInfo_getName_nameParamInfo id=204 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "name",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[204]:  nTECSInfo_sCallInfo_getName_max_lenParamInfo id=205 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[205]:  nTECSInfo_sCallInfo_getSignatureInfo_descParamInfo id=206 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sSignatureInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "desc",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[206]:  nTECSInfo_sCallInfo_getSpecifierInfo_b_optionalParamInfo id=207 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "b_optional",                            /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[207]:  nTECSInfo_sCallInfo_getSpecifierInfo_b_dynamicParamInfo id=208 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "b_dynamic",                             /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[208]:  nTECSInfo_sCallInfo_getSpecifierInfo_b_ref_descParamInfo id=209 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "b_ref_desc",                            /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[209]:  nTECSInfo_sCallInfo_getSpecifierInfo_b_omitParamInfo id=210 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "b_omit",                                /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[210]:  nTECSInfo_sCallInfo_getInternalInfo_b_allocator_portParamInfo id=211 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "b_allocator_port",                      /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[211]:  nTECSInfo_sCallInfo_getInternalInfo_b_require_portParamInfo id=212 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "b_require_port",                        /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[212]:  nTECSInfo_sCallInfo_getLocationInfo_offsetParamInfo id=213 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint32_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "offset",                                /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[213]:  nTECSInfo_sCallInfo_getLocationInfo_placeParamInfo id=214 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int8_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "place",                                 /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[214]:  nTECSInfo_sCallInfo_getOptimizeInfo_b_VMT_uselessParamInfo id=215 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "b_VMT_useless",                         /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[215]:  nTECSInfo_sCallInfo_getOptimizeInfo_b_skelton_uselessParamInfo id=216 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "b_skelton_useless",                     /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[216]:  nTECSInfo_sCallInfo_getOptimizeInfo_b_cell_uniqueParamInfo id=217 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "b_cell_unique",                         /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[217]:  nTECSInfo_sEntryInfo_getName_nameParamInfo id=218 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "name",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[218]:  nTECSInfo_sEntryInfo_getName_max_lenParamInfo id=219 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[219]:  nTECSInfo_sEntryInfo_getSignatureInfo_descParamInfo id=220 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sSignatureInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "desc",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[220]:  nTECSInfo_sCelltypeInfo_getName_nameParamInfo id=221 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "name",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[221]:  nTECSInfo_sCelltypeInfo_getName_max_lenParamInfo id=222 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[222]:  nTECSInfo_sCelltypeInfo_getAttrInfo_ithParamInfo id=223 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ith",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[223]:  nTECSInfo_sCelltypeInfo_getAttrInfo_descParamInfo id=224 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sVarDeclInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "desc",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[224]:  nTECSInfo_sCelltypeInfo_getVarInfo_ithParamInfo id=225 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ith",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[225]:  nTECSInfo_sCelltypeInfo_getVarInfo_descParamInfo id=226 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sVarDeclInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "desc",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[226]:  nTECSInfo_sCelltypeInfo_getCallInfo_ithParamInfo id=227 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ith",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[227]:  nTECSInfo_sCelltypeInfo_getCallInfo_descParamInfo id=228 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sCallInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "desc",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[228]:  nTECSInfo_sCelltypeInfo_getEntryInfo_ithParamInfo id=229 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ith",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[229]:  nTECSInfo_sCelltypeInfo_getEntryInfo_descParamInfo id=230 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sEntryInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "desc",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[230]:  nTECSInfo_sCellInfo_getName_nameParamInfo id=231 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "name",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[231]:  nTECSInfo_sCellInfo_getName_max_lenParamInfo id=232 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[232]:  nTECSInfo_sCellInfo_getRawEntryDescriptorInfo_indexParamInfo id=233 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "index",                                 /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[233]:  nTECSInfo_sCellInfo_getRawEntryDescriptorInfo_descParamInfo id=234 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sRawEntryDescriptorInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "desc",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[234]:  nTECSInfo_sCellInfo_getCelltypeInfo_descParamInfo id=235 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sCelltypeInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "desc",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[235]:  nTECSInfo_sCellInfo_getCBP_cbpParamInfo id=236 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_void_Ptr__Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cbp",                                   /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[236]:  nTECSInfo_sCellInfo_getINIBP_inibpParamInfo id=237 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_void_Ptr__Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "inibp",                                 /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[237]:  nTECSInfo_sRawEntryDescriptorInfo_getRawDescriptor_subscParamInfo id=238 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "subsc",                                 /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[238]:  nTECSInfo_sRawEntryDescriptorInfo_getRawDescriptor_rawDescParamInfo id=239 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_void_Ptr__Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "rawDesc",                               /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[239]:  nTECSInfo_sNamespaceInfo_getName_nameParamInfo id=240 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "name",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[240]:  nTECSInfo_sNamespaceInfo_getName_max_lenParamInfo id=241 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[241]:  nTECSInfo_sNamespaceInfo_getNamespaceInfo_ithParamInfo id=242 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ith",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[242]:  nTECSInfo_sNamespaceInfo_getNamespaceInfo_desParamInfo id=243 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sNamespaceInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "des",                                   /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[243]:  nTECSInfo_sNamespaceInfo_getSignatureInfo_ithParamInfo id=244 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ith",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[244]:  nTECSInfo_sNamespaceInfo_getSignatureInfo_desParamInfo id=245 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sSignatureInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "des",                                   /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[245]:  nTECSInfo_sNamespaceInfo_getCelltypeInfo_ithParamInfo id=246 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ith",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[246]:  nTECSInfo_sNamespaceInfo_getCelltypeInfo_desParamInfo id=247 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sCelltypeInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "des",                                   /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[247]:  nTECSInfo_sRegionInfo_getName_nameParamInfo id=248 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "name",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[248]:  nTECSInfo_sRegionInfo_getName_max_lenParamInfo id=249 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[249]:  nTECSInfo_sRegionInfo_getCellInfo_ithParamInfo id=250 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ith",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[250]:  nTECSInfo_sRegionInfo_getCellInfo_desParamInfo id=251 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sCellInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "des",                                   /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[251]:  nTECSInfo_sRegionInfo_getRegionInfo_ithParamInfo id=252 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ith",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[252]:  nTECSInfo_sRegionInfo_getRegionInfo_desParamInfo id=253 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sRegionInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "des",                                   /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[253]:  nTECSInfo_sTECSInfo_findNamespace_namespace_pathParamInfo id=254 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "namespace_path",                        /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        "",                                      /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[254]:  nTECSInfo_sTECSInfo_findNamespace_nsDescParamInfo id=255 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sNamespaceInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "nsDesc",                                /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[255]:  nTECSInfo_sTECSInfo_findRegion_namespace_pathParamInfo id=256 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "namespace_path",                        /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        "",                                      /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[256]:  nTECSInfo_sTECSInfo_findRegion_regionDescParamInfo id=257 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sRegionInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "regionDesc",                            /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[257]:  nTECSInfo_sTECSInfo_findSignature_namespace_pathParamInfo id=258 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "namespace_path",                        /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        "",                                      /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[258]:  nTECSInfo_sTECSInfo_findSignature_signatureDescParamInfo id=259 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sSignatureInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "signatureDesc",                         /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[259]:  nTECSInfo_sTECSInfo_findCelltype_namespace_pathParamInfo id=260 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "namespace_path",                        /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        "",                                      /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[260]:  nTECSInfo_sTECSInfo_findCelltype_celltypeDescParamInfo id=261 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sCelltypeInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "celltypeDesc",                          /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[261]:  nTECSInfo_sTECSInfo_findCell_namespace_pathParamInfo id=262 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "namespace_path",                        /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        "",                                      /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[262]:  nTECSInfo_sTECSInfo_findCell_cellDescParamInfo id=263 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sCellInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cellDesc",                              /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[263]:  nTECSInfo_sTECSInfo_findRawEntryDescriptor_namespace_pathParamInfo id=264 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "namespace_path",                        /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        "",                                      /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[264]:  nTECSInfo_sTECSInfo_findRawEntryDescriptor_rawEntryDescDescParamInfo id=265 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sRawEntryDescriptorInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "rawEntryDescDesc",                      /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[265]:  nTECSInfo_sTECSInfo_findRawEntryDescriptor_entryDescParamInfo id=266 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sEntryInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "entryDesc",                             /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[266]:  nTECSInfo_sTECSInfo_findRawEntryDescriptor_unsafe_namespace_pathParamInfo id=267 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "namespace_path",                        /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        "",                                      /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[267]:  nTECSInfo_sTECSInfo_findRawEntryDescriptor_unsafe_subscParamInfo id=268 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "subsc",                                 /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[268]:  nTECSInfo_sTECSInfo_findRawEntryDescriptor_unsafe_rawDescParamInfo id=269 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_void_Ptr__Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "rawDesc",                               /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[269]:  nTECSInfo_sAccessor_selectNamespaceInfoByName_namespacePathParamInfo id=270 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "namespacePath",                         /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        "",                                      /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[270]:  nTECSInfo_sAccessor_selectCelltypeInfoByName_celltypePathParamInfo id=271 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "celltypePath",                          /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        "",                                      /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[271]:  nTECSInfo_sAccessor_selectSignatureInfoByName_signaturePathParamInfo id=272 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "signaturePath",                         /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        "",                                      /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[272]:  nTECSInfo_sAccessor_selectRegionInfoByName_regionPathParamInfo id=273 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "regionPath",                            /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        "",                                      /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[273]:  nTECSInfo_sAccessor_selectCellInfoByName_cellPathParamInfo id=274 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cellPath",                              /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        "",                                      /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[274]:  nTECSInfo_sAccessor_getSignatureNameOfCellEntry_cellEntryPathParamInfo id=275 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cellEntryPath",                         /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        "",                                      /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[275]:  nTECSInfo_sAccessor_getSignatureNameOfCellEntry_signatureGlobalNameParamInfo id=276 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "signatureGlobalName",                   /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $2",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[276]:  nTECSInfo_sAccessor_getSignatureNameOfCellEntry_max_lenParamInfo id=277 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[277]:  nTECSInfo_sAccessor_getSelectedNamespaceInfo_nameParamInfo id=278 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "name",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[278]:  nTECSInfo_sAccessor_getSelectedNamespaceInfo_max_lenParamInfo id=279 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[279]:  nTECSInfo_sAccessor_getSelectedNamespaceInfo_num_namespaceParamInfo id=280 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "num_namespace",                         /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[280]:  nTECSInfo_sAccessor_getSelectedNamespaceInfo_num_celltypeParamInfo id=281 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "num_celltype",                          /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[281]:  nTECSInfo_sAccessor_getSelectedNamespaceInfo_num_signatureParamInfo id=282 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "num_signature",                         /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[282]:  nTECSInfo_sAccessor_selectCelltypeInfo_ithParamInfo id=283 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ith",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[283]:  nTECSInfo_sAccessor_selectSignatureInfo_ithParamInfo id=284 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ith",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[284]:  nTECSInfo_sAccessor_selectNamespaceInfo_ithParamInfo id=285 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ith",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[285]:  nTECSInfo_sAccessor_getSelectedCelltypeInfo_nameParamInfo id=286 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "name",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[286]:  nTECSInfo_sAccessor_getSelectedCelltypeInfo_max_lenParamInfo id=287 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[287]:  nTECSInfo_sAccessor_getSelectedCelltypeInfo_num_attrParamInfo id=288 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "num_attr",                              /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[288]:  nTECSInfo_sAccessor_getSelectedCelltypeInfo_num_varParamInfo id=289 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "num_var",                               /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[289]:  nTECSInfo_sAccessor_getSelectedCelltypeInfo_num_callParamInfo id=290 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "num_call",                              /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[290]:  nTECSInfo_sAccessor_getSelectedCelltypeInfo_num_entryParamInfo id=291 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "num_entry",                             /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[291]:  nTECSInfo_sAccessor_selectCallInfo_ithParamInfo id=292 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ith",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[292]:  nTECSInfo_sAccessor_selectEntryInfo_ithParamInfo id=293 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ith",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[293]:  nTECSInfo_sAccessor_selectAttrInfo_ithParamInfo id=294 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ith",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[294]:  nTECSInfo_sAccessor_selectVarInfo_ithParamInfo id=295 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ith",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[295]:  nTECSInfo_sAccessor_getSelectedAttrInfo_nameParamInfo id=296 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "name",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[296]:  nTECSInfo_sAccessor_getSelectedAttrInfo_max_lenParamInfo id=297 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[297]:  nTECSInfo_sAccessor_getSizeIsExprOfAttr_expr_strParamInfo id=298 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "expr_str",                              /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[298]:  nTECSInfo_sAccessor_getSizeIsExprOfAttr_max_lenParamInfo id=299 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[299]:  nTECSInfo_sAccessor_getSelectedVarInfo_nameParamInfo id=300 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "name",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[300]:  nTECSInfo_sAccessor_getSelectedVarInfo_max_lenParamInfo id=301 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[301]:  nTECSInfo_sAccessor_getSizeIsExprOfVar_expr_strParamInfo id=302 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "expr_str",                              /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[302]:  nTECSInfo_sAccessor_getSizeIsExprOfVar_max_lenParamInfo id=303 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[303]:  nTECSInfo_sAccessor_getSelectedCallInfo_nameParamInfo id=304 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "name",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[304]:  nTECSInfo_sAccessor_getSelectedCallInfo_max_lenParamInfo id=305 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[305]:  nTECSInfo_sAccessor_getSelectedCallInfo_array_sizeParamInfo id=306 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "array_size",                            /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[306]:  nTECSInfo_sAccessor_getSelectedCallSpecifierInfo_b_optionalParamInfo id=307 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "b_optional",                            /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[307]:  nTECSInfo_sAccessor_getSelectedCallSpecifierInfo_b_dynamicParamInfo id=308 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "b_dynamic",                             /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[308]:  nTECSInfo_sAccessor_getSelectedCallSpecifierInfo_b_ref_descParamInfo id=309 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "b_ref_desc",                            /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[309]:  nTECSInfo_sAccessor_getSelectedCallSpecifierInfo_b_omitParamInfo id=310 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "b_omit",                                /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[310]:  nTECSInfo_sAccessor_getSelectedCallInternalInfo_b_allocator_portParamInfo id=311 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "b_allocator_port",                      /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[311]:  nTECSInfo_sAccessor_getSelectedCallInternalInfo_b_require_portParamInfo id=312 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "b_require_port",                        /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[312]:  nTECSInfo_sAccessor_getSelectedCallLocationInfo_offsetParamInfo id=313 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint32_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "offset",                                /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[313]:  nTECSInfo_sAccessor_getSelectedCallLocationInfo_placeParamInfo id=314 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int8_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "place",                                 /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[314]:  nTECSInfo_sAccessor_getSelectedCallOptimizeInfo_b_VMT_uselessParamInfo id=315 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "b_VMT_useless",                         /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[315]:  nTECSInfo_sAccessor_getSelectedCallOptimizeInfo_b_skelton_uselessParamInfo id=316 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "b_skelton_useless",                     /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[316]:  nTECSInfo_sAccessor_getSelectedCallOptimizeInfo_b_cell_uniqueParamInfo id=317 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "b_cell_unique",                         /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[317]:  nTECSInfo_sAccessor_getSelectedEntryInfo_nameParamInfo id=318 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "name",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[318]:  nTECSInfo_sAccessor_getSelectedEntryInfo_max_lenParamInfo id=319 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[319]:  nTECSInfo_sAccessor_getSelectedEntryInfo_array_sizeParamInfo id=320 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "array_size",                            /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[320]:  nTECSInfo_sAccessor_getSelectedEntryInlineInfo_b_inlineParamInfo id=321 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "b_inline",                              /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[321]:  nTECSInfo_sAccessor_getSelectedSignatureInfo_nameParamInfo id=322 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "name",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[322]:  nTECSInfo_sAccessor_getSelectedSignatureInfo_max_lenParamInfo id=323 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[323]:  nTECSInfo_sAccessor_getSelectedSignatureInfo_num_functionParamInfo id=324 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "num_function",                          /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[324]:  nTECSInfo_sAccessor_selectFunctionInfoByIndex_ithParamInfo id=325 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ith",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[325]:  nTECSInfo_sAccessor_getSelectedFunctionInfo_nameParamInfo id=326 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "name",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[326]:  nTECSInfo_sAccessor_getSelectedFunctionInfo_max_lenParamInfo id=327 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[327]:  nTECSInfo_sAccessor_getSelectedFunctionInfo_num_argsParamInfo id=328 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "num_args",                              /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[328]:  nTECSInfo_sAccessor_getSelectedParamInfo_nameParamInfo id=329 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "name",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[329]:  nTECSInfo_sAccessor_getSelectedParamInfo_max_lenParamInfo id=330 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[330]:  nTECSInfo_sAccessor_getSelectedParamInfo_dirParamInfo id=331 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int8_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "dir",                                   /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[331]:  nTECSInfo_sAccessor_selectParamInfo_ithParamInfo id=332 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ith",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[332]:  nTECSInfo_sAccessor_getSelectedTypeInfo_nameParamInfo id=333 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "name",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[333]:  nTECSInfo_sAccessor_getSelectedTypeInfo_max_lenParamInfo id=334 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[334]:  nTECSInfo_sAccessor_getSelectedTypeInfo_kindParamInfo id=335 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int8_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "kind",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[335]:  nTECSInfo_sAccessor_getSelectedRegionInfo_nameParamInfo id=336 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "name",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[336]:  nTECSInfo_sAccessor_getSelectedRegionInfo_max_lenParamInfo id=337 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[337]:  nTECSInfo_sAccessor_getSelectedRegionInfo_num_cellParamInfo id=338 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "num_cell",                              /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[338]:  nTECSInfo_sAccessor_getSelectedRegionInfo_num_regionParamInfo id=339 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "num_region",                            /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[339]:  nTECSInfo_sAccessor_selectCellInfo_ithParamInfo id=340 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ith",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[340]:  nTECSInfo_sAccessor_selectRegionInfo_ithParamInfo id=341 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ith",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[341]:  nTECSInfo_sAccessor_getSelectedCellInfo_nameParamInfo id=342 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "name",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[342]:  nTECSInfo_sAccessor_getSelectedCellInfo_max_lenParamInfo id=343 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[343]:  nTECSInfo_sAccessor_getAttrValueInStr_bufParamInfo id=344 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "buf",                                   /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[344]:  nTECSInfo_sAccessor_getAttrValueInStr_max_lenParamInfo id=345 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[345]:  nTECSInfo_sAccessor_getVarValueInStr_bufParamInfo id=346 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "buf",                                   /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[346]:  nTECSInfo_sAccessor_getVarValueInStr_max_lenParamInfo id=347 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
};

extern const struct tag_nTECSInfo_sParamInfo_VMT nTECSInfo_tParamInfo_eParamInfo_MT_;
/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sTaskExceptionBody_main_patternParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sTaskExceptionBody_main_patternParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[0],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sTask_changePriority_priorityParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sTask_changePriority_priorityParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[1],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sTask_getPriority_p_priorityParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sTask_getPriority_p_priorityParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[2],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sTask_refer_pk_taskStatusParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sTask_refer_pk_taskStatusParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[3],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sTask_raiseException_patternParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sTask_raiseException_patternParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[4],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sTask_referException_pk_rtexParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sTask_referException_pk_rtexParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[5],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sTask_startOverRunHandler_ovrtimParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sTask_startOverRunHandler_ovrtimParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[6],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sTask_referOverRunHandler_pk_rovrParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sTask_referOverRunHandler_pk_rovrParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[7],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_siTask_raiseException_patternParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_siTask_raiseException_patternParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[8],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_siTask_startOverRunHandler_ovrtimParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_siTask_startOverRunHandler_ovrtimParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[9],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sCyclic_refer_pk_cyclicHandlerStatusParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sCyclic_refer_pk_cyclicHandlerStatusParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[10],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sAlarm_start_alarmTimeParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sAlarm_start_alarmTimeParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[11],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sAlarm_refer_pk_alarmStatusParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sAlarm_refer_pk_alarmStatusParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[12],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_siAlarm_start_alarmTimeParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_siAlarm_start_alarmTimeParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[13],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sSemaphore_waitTimeout_timeoutParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sSemaphore_waitTimeout_timeoutParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[14],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sSemaphore_refer_pk_semaphoreStatusParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sSemaphore_refer_pk_semaphoreStatusParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[15],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sEventflag_set_setPatternParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sEventflag_set_setPatternParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[16],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sEventflag_clear_clearPatternParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sEventflag_clear_clearPatternParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[17],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sEventflag_wait_waitPatternParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sEventflag_wait_waitPatternParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[18],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sEventflag_wait_waitFlagModeParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sEventflag_wait_waitFlagModeParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[19],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sEventflag_wait_p_flagPatternParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sEventflag_wait_p_flagPatternParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[20],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sEventflag_waitPolling_waitPatternParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sEventflag_waitPolling_waitPatternParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[21],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sEventflag_waitPolling_waitFlagModeParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sEventflag_waitPolling_waitFlagModeParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[22],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sEventflag_waitPolling_p_flagPatternParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sEventflag_waitPolling_p_flagPatternParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[23],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sEventflag_waitTimeout_waitPatternParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sEventflag_waitTimeout_waitPatternParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[24],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sEventflag_waitTimeout_waitFlagModeParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sEventflag_waitTimeout_waitFlagModeParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[25],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sEventflag_waitTimeout_p_flagPatternParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sEventflag_waitTimeout_p_flagPatternParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[26],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sEventflag_waitTimeout_timeoutParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sEventflag_waitTimeout_timeoutParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[27],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sEventflag_refer_pk_eventflagStatusParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sEventflag_refer_pk_eventflagStatusParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[28],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_siEventflag_set_setPatternParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_siEventflag_set_setPatternParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[29],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sDataqueue_send_dataParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sDataqueue_send_dataParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[30],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sDataqueue_sendPolling_dataParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sDataqueue_sendPolling_dataParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[31],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sDataqueue_sendTimeout_dataParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sDataqueue_sendTimeout_dataParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[32],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sDataqueue_sendTimeout_timeoutParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sDataqueue_sendTimeout_timeoutParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[33],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sDataqueue_sendForce_dataParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sDataqueue_sendForce_dataParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[34],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sDataqueue_receive_p_dataParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sDataqueue_receive_p_dataParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[35],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sDataqueue_receivePolling_p_dataParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sDataqueue_receivePolling_p_dataParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[36],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sDataqueue_receiveTimeout_p_dataParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sDataqueue_receiveTimeout_p_dataParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[37],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sDataqueue_receiveTimeout_timeoutParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sDataqueue_receiveTimeout_timeoutParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[38],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sDataqueue_refer_pk_dataqueueStatusParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sDataqueue_refer_pk_dataqueueStatusParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[39],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_siDataqueue_sendPolling_dataParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_siDataqueue_sendPolling_dataParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[40],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_siDataqueue_sendForce_dataParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_siDataqueue_sendForce_dataParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[41],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sPriorityDataqueue_send_dataParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sPriorityDataqueue_send_dataParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[42],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sPriorityDataqueue_send_dataPriorityParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sPriorityDataqueue_send_dataPriorityParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[43],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sPriorityDataqueue_sendPolling_dataParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sPriorityDataqueue_sendPolling_dataParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[44],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sPriorityDataqueue_sendPolling_dataPriorityParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sPriorityDataqueue_sendPolling_dataPriorityParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[45],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sPriorityDataqueue_sendTimeout_dataParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sPriorityDataqueue_sendTimeout_dataParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[46],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sPriorityDataqueue_sendTimeout_dataPriorityParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sPriorityDataqueue_sendTimeout_dataPriorityParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[47],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sPriorityDataqueue_sendTimeout_timeoutParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sPriorityDataqueue_sendTimeout_timeoutParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[48],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sPriorityDataqueue_receive_p_dataParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sPriorityDataqueue_receive_p_dataParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[49],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sPriorityDataqueue_receive_p_dataPriorityParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sPriorityDataqueue_receive_p_dataPriorityParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[50],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sPriorityDataqueue_receivePolling_p_dataParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sPriorityDataqueue_receivePolling_p_dataParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[51],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sPriorityDataqueue_receivePolling_p_dataPriorityParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sPriorityDataqueue_receivePolling_p_dataPriorityParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[52],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sPriorityDataqueue_receiveTimeout_p_dataParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sPriorityDataqueue_receiveTimeout_p_dataParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[53],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sPriorityDataqueue_receiveTimeout_p_dataPriorityParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sPriorityDataqueue_receiveTimeout_p_dataPriorityParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[54],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sPriorityDataqueue_receiveTimeout_timeoutParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sPriorityDataqueue_receiveTimeout_timeoutParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[55],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sPriorityDataqueue_refer_pk_priorityDataqueueStatusParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sPriorityDataqueue_refer_pk_priorityDataqueueStatusParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[56],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_siPriorityDataqueue_sendPolling_dataParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_siPriorityDataqueue_sendPolling_dataParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[57],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_siPriorityDataqueue_sendPolling_dataPriorityParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_siPriorityDataqueue_sendPolling_dataPriorityParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[58],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sFixedSizeMemoryPool_get_p_blockParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sFixedSizeMemoryPool_get_p_blockParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[59],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sFixedSizeMemoryPool_getPolling_p_blockParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sFixedSizeMemoryPool_getPolling_p_blockParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[60],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sFixedSizeMemoryPool_getTimeout_p_blockParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sFixedSizeMemoryPool_getTimeout_p_blockParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[61],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sFixedSizeMemoryPool_getTimeout_timeoutParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sFixedSizeMemoryPool_getTimeout_timeoutParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[62],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sFixedSizeMemoryPool_release_blockParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sFixedSizeMemoryPool_release_blockParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[63],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sFixedSizeMemoryPool_refer_pk_memoryPoolFixedSizeStatusParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sFixedSizeMemoryPool_refer_pk_memoryPoolFixedSizeStatusParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[64],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sKernel_sleepTimeout_timeoutParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sKernel_sleepTimeout_timeoutParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[65],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sKernel_delay_delayTimeParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sKernel_delay_delayTimeParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[66],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sKernel_getTaskId_p_taskIdParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sKernel_getTaskId_p_taskIdParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[67],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sKernel_rotateReadyQueue_taskPriorityParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sKernel_rotateReadyQueue_taskPriorityParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[68],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sKernel_getTime_p_systemTimeParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sKernel_getTime_p_systemTimeParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[69],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sKernel_getMicroTime_p_systemMicroTimeParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sKernel_getMicroTime_p_systemMicroTimeParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[70],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sKernel_changeInterruptPriorityMask_interruptPriorityParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sKernel_changeInterruptPriorityMask_interruptPriorityParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[71],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sKernel_getInterruptPriorityMask_p_interruptPriorityParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sKernel_getInterruptPriorityMask_p_interruptPriorityParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[72],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_siKernel_getTaskId_p_taskIdParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_siKernel_getTaskId_p_taskIdParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[73],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_siKernel_rotateReadyQueue_taskPriorityParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_siKernel_rotateReadyQueue_taskPriorityParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[74],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_siKernel_getMicroTime_p_systemMicroTimeParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_siKernel_getMicroTime_p_systemMicroTimeParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[75],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_siKernel_senseDispatchPendingStateCPU_p_exceptionInfomationParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_siKernel_senseDispatchPendingStateCPU_p_exceptionInfomationParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[76],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_siKernel_senseTaskExceptionPendingStateCPU_p_exceptionInfomationParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_siKernel_senseTaskExceptionPendingStateCPU_p_exceptionInfomationParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[77],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMessageBuffer_send_messageParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMessageBuffer_send_messageParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[78],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMessageBuffer_send_sizeParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMessageBuffer_send_sizeParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[79],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMessageBuffer_sendPolling_messageParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMessageBuffer_sendPolling_messageParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[80],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMessageBuffer_sendPolling_sizeParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMessageBuffer_sendPolling_sizeParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[81],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMessageBuffer_sendTimeout_messageParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMessageBuffer_sendTimeout_messageParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[82],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMessageBuffer_sendTimeout_sizeParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMessageBuffer_sendTimeout_sizeParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[83],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMessageBuffer_sendTimeout_timeoutParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMessageBuffer_sendTimeout_timeoutParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[84],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMessageBuffer_receive_messageParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMessageBuffer_receive_messageParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[85],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMessageBuffer_receivePolling_messageParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMessageBuffer_receivePolling_messageParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[86],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMessageBuffer_receiveTimeout_messageParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMessageBuffer_receiveTimeout_messageParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[87],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMessageBuffer_receiveTimeout_timeoutParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMessageBuffer_receiveTimeout_timeoutParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[88],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMessageBuffer_refer_packetParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMessageBuffer_refer_packetParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[89],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMalloc_calloc_nelemParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMalloc_calloc_nelemParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[90],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMalloc_calloc_elem_sizeParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMalloc_calloc_elem_sizeParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[91],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMalloc_malloc_sizeParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMalloc_malloc_sizeParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[92],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMalloc_realloc_ptrParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMalloc_realloc_ptrParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[93],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMalloc_realloc_new_sizeParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMalloc_realloc_new_sizeParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[94],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMalloc_free_ptrParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMalloc_free_ptrParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[95],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sColorSensor_getRGBRaw_rParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sColorSensor_getRGBRaw_rParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[96],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sColorSensor_getRGBRaw_gParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sColorSensor_getRGBRaw_gParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[97],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sColorSensor_getRGBRaw_bParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sColorSensor_getRGBRaw_bParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[98],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sGyroSensor_calibrate_timesParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sGyroSensor_calibrate_timesParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[99],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMotor_setPower_powerParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMotor_setPower_powerParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[100],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMotor_stop_brakeParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMotor_stop_brakeParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[101],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMotor_rotate_degreesParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMotor_rotate_degreesParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[102],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMotor_rotate_speed_absParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMotor_rotate_speed_absParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[103],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMotor_rotate_blockingParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMotor_rotate_blockingParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[104],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMotor_initializePort_typeParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMotor_initializePort_typeParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[105],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sButton_isPressed_buttonParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sButton_isPressed_buttonParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[106],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_setFont_fontParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_setFont_fontParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[107],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_getFontSize_fontParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_getFontSize_fontParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[108],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_getFontSize_p_widthParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_getFontSize_p_widthParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[109],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_getFontSize_p_heightParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_getFontSize_p_heightParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[110],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_drawString_strParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_drawString_strParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[111],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_drawString_xParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_drawString_xParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[112],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_drawString_yParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_drawString_yParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[113],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_fillRect_xParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_fillRect_xParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[114],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_fillRect_yParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_fillRect_yParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[115],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_fillRect_wParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_fillRect_wParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[116],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_fillRect_hParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_fillRect_hParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[117],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_fillRect_colorParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_fillRect_colorParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[118],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_drawLine_x0ParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_drawLine_x0ParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[119],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_drawLine_y0ParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_drawLine_y0ParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[120],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_drawLine_x1ParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_drawLine_x1ParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[121],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_drawLine_y1ParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_drawLine_y1ParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[122],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_print_strParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_print_strParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[123],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_puts_strParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_puts_strParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[124],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_showMessageBox_titleParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_showMessageBox_titleParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[125],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_showMessageBox_msgParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_showMessageBox_msgParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[126],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLED_setColor_colorParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLED_setColor_colorParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[127],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sSpeaker_setVolume_volumeParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sSpeaker_setVolume_volumeParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[128],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sSpeaker_playTone_frequencyParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sSpeaker_playTone_frequencyParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[129],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sSpeaker_playTone_durationParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sSpeaker_playTone_durationParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[130],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sBalancer_control_forwardParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sBalancer_control_forwardParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[131],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sBalancer_control_turnParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sBalancer_control_turnParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[132],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sBalancer_control_gyroParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sBalancer_control_gyroParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[133],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sBalancer_control_gyroOffsetParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sBalancer_control_gyroOffsetParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[134],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sBalancer_control_leftRevolutionParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sBalancer_control_leftRevolutionParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[135],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sBalancer_control_rightRevolutionParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sBalancer_control_rightRevolutionParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[136],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sBalancer_control_batteryParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sBalancer_control_batteryParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[137],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sBalancer_control_pwm_lParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sBalancer_control_pwm_lParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[138],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sBalancer_control_pwm_rParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sBalancer_control_pwm_rParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[139],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sBalancer_control_backlashhalfParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sBalancer_control_backlashhalfParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[140],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sSharedMemory_putVal_indexParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sSharedMemory_putVal_indexParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[141],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sSharedMemory_putVal_valParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sSharedMemory_putVal_valParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[142],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sSharedMemory_getVal_indexParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sSharedMemory_getVal_indexParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[143],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sTarget1_double_argParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sTarget1_double_argParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[144],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sTarget2_add_arg1ParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sTarget2_add_arg1ParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[145],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sTarget2_add_arg2ParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sTarget2_add_arg2ParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[146],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sTarget3_send_bufParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sTarget3_send_bufParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[147],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sTarget3_send_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sTarget3_send_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[148],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sTarget3_sendMessage_bufParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sTarget3_sendMessage_bufParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[149],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sTarget3_sendMessage_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sTarget3_sendMessage_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[150],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sTarget3_receiveMessage_bufParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sTarget3_receiveMessage_bufParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[151],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sTarget3_receiveMessage_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sTarget3_receiveMessage_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[152],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sTarget3_checkER_eroorParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sTarget3_checkER_eroorParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[153],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sJSMN_json_parse_path_c_pathParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sJSMN_json_parse_path_c_pathParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[154],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sJSMN_json_parse_path_e_pathParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sJSMN_json_parse_path_e_pathParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[155],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sJSMN_json_parse_path_f_pathParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sJSMN_json_parse_path_f_pathParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[156],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sJSMN_json_parse_path_target_numParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sJSMN_json_parse_path_target_numParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[157],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sJSMN_json_parse_path_btrParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sJSMN_json_parse_path_btrParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[158],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sJSMN_json_parse_arg_argumentsParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sJSMN_json_parse_arg_argumentsParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[159],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sJSMN_json_parse_arg_exp_valParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sJSMN_json_parse_arg_exp_valParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[160],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sJSMN_json_parse_arg_arg_numParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sJSMN_json_parse_arg_arg_numParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[161],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sJSMN_json_parse_arg_target_numParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sJSMN_json_parse_arg_target_numParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[162],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sJSMN_json_parse_arg_btrParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sJSMN_json_parse_arg_btrParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[163],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sTECSUnit_main_cell_pathParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sTECSUnit_main_cell_pathParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[164],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sTECSUnit_main_entry_pathParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sTECSUnit_main_entry_pathParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[165],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sTECSUnit_main_signature_pathParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sTECSUnit_main_signature_pathParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[166],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sTECSUnit_main_function_pathParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sTECSUnit_main_function_pathParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[167],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sTECSUnit_main_argumentsParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sTECSUnit_main_argumentsParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[168],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sTECSUnit_main_exp_valParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sTECSUnit_main_exp_valParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[169],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nMruby_sInitializeBridge_initializeBridge_mrbParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nMruby_sInitializeBridge_initializeBridge_mrbParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[170],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nMruby_sInitializeTECSBridge_initializeBridge_mrbParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nMruby_sInitializeTECSBridge_initializeBridge_mrbParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[171],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nMruby_sInitializeTECSBridge_initializeBridge_TECSParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nMruby_sInitializeTECSBridge_initializeBridge_TECSParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[172],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nMruby_sMrubyVM_funcall_nameParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nMruby_sMrubyVM_funcall_nameParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[173],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nPosix_sMain_main_argcParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nPosix_sMain_main_argcParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[174],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nPosix_sMain_main_argvParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nPosix_sMain_main_argvParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[175],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTypeInfo_getName_nameParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTypeInfo_getName_nameParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[176],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTypeInfo_getName_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTypeInfo_getName_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[177],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTypeInfo_getTypeInfo_descParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTypeInfo_getTypeInfo_descParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[178],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTypeInfo_getMemberInfo_ithParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTypeInfo_getMemberInfo_ithParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[179],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTypeInfo_getMemberInfo_descParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTypeInfo_getMemberInfo_descParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[180],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sVarDeclInfo_getName_nameParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sVarDeclInfo_getName_nameParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[181],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sVarDeclInfo_getName_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sVarDeclInfo_getName_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[182],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sVarDeclInfo_getLocationInfo_offsetParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sVarDeclInfo_getLocationInfo_offsetParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[183],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sVarDeclInfo_getLocationInfo_placeParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sVarDeclInfo_getLocationInfo_placeParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[184],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sVarDeclInfo_getTypeInfo_descParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sVarDeclInfo_getTypeInfo_descParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[185],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sVarDeclInfo_getSizeIsExpr_expr_strParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sVarDeclInfo_getSizeIsExpr_expr_strParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[186],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sVarDeclInfo_getSizeIsExpr_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sVarDeclInfo_getSizeIsExpr_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[187],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sVarDeclInfo_getSizeIs_sizeParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sVarDeclInfo_getSizeIs_sizeParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[188],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sVarDeclInfo_getSizeIs_p_cbParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sVarDeclInfo_getSizeIs_p_cbParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[189],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sParamInfo_getName_nameParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sParamInfo_getName_nameParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[190],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sParamInfo_getName_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sParamInfo_getName_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[191],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sParamInfo_getTypeInfo_descParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sParamInfo_getTypeInfo_descParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[192],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sParamInfo_getDir_dirParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sParamInfo_getDir_dirParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[193],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sFunctionInfo_getName_nameParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sFunctionInfo_getName_nameParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[194],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sFunctionInfo_getName_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sFunctionInfo_getName_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[195],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sFunctionInfo_getReturnTypeInfo_descParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sFunctionInfo_getReturnTypeInfo_descParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[196],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sFunctionInfo_getParamInfo_ithParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sFunctionInfo_getParamInfo_ithParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[197],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sFunctionInfo_getParamInfo_paramParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sFunctionInfo_getParamInfo_paramParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[198],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sSignatureInfo_getName_nameParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sSignatureInfo_getName_nameParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[199],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sSignatureInfo_getName_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sSignatureInfo_getName_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[200],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sSignatureInfo_getFunctionInfo_ithParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sSignatureInfo_getFunctionInfo_ithParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[201],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sSignatureInfo_getFunctionInfo_descParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sSignatureInfo_getFunctionInfo_descParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[202],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCallInfo_getName_nameParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCallInfo_getName_nameParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[203],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCallInfo_getName_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCallInfo_getName_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[204],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCallInfo_getSignatureInfo_descParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCallInfo_getSignatureInfo_descParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[205],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCallInfo_getSpecifierInfo_b_optionalParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCallInfo_getSpecifierInfo_b_optionalParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[206],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCallInfo_getSpecifierInfo_b_dynamicParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCallInfo_getSpecifierInfo_b_dynamicParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[207],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCallInfo_getSpecifierInfo_b_ref_descParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCallInfo_getSpecifierInfo_b_ref_descParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[208],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCallInfo_getSpecifierInfo_b_omitParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCallInfo_getSpecifierInfo_b_omitParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[209],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCallInfo_getInternalInfo_b_allocator_portParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCallInfo_getInternalInfo_b_allocator_portParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[210],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCallInfo_getInternalInfo_b_require_portParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCallInfo_getInternalInfo_b_require_portParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[211],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCallInfo_getLocationInfo_offsetParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCallInfo_getLocationInfo_offsetParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[212],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCallInfo_getLocationInfo_placeParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCallInfo_getLocationInfo_placeParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[213],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCallInfo_getOptimizeInfo_b_VMT_uselessParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCallInfo_getOptimizeInfo_b_VMT_uselessParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[214],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCallInfo_getOptimizeInfo_b_skelton_uselessParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCallInfo_getOptimizeInfo_b_skelton_uselessParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[215],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCallInfo_getOptimizeInfo_b_cell_uniqueParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCallInfo_getOptimizeInfo_b_cell_uniqueParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[216],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sEntryInfo_getName_nameParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sEntryInfo_getName_nameParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[217],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sEntryInfo_getName_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sEntryInfo_getName_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[218],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sEntryInfo_getSignatureInfo_descParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sEntryInfo_getSignatureInfo_descParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[219],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCelltypeInfo_getName_nameParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCelltypeInfo_getName_nameParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[220],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCelltypeInfo_getName_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCelltypeInfo_getName_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[221],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCelltypeInfo_getAttrInfo_ithParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCelltypeInfo_getAttrInfo_ithParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[222],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCelltypeInfo_getAttrInfo_descParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCelltypeInfo_getAttrInfo_descParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[223],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCelltypeInfo_getVarInfo_ithParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCelltypeInfo_getVarInfo_ithParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[224],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCelltypeInfo_getVarInfo_descParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCelltypeInfo_getVarInfo_descParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[225],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCelltypeInfo_getCallInfo_ithParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCelltypeInfo_getCallInfo_ithParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[226],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCelltypeInfo_getCallInfo_descParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCelltypeInfo_getCallInfo_descParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[227],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCelltypeInfo_getEntryInfo_ithParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCelltypeInfo_getEntryInfo_ithParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[228],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCelltypeInfo_getEntryInfo_descParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCelltypeInfo_getEntryInfo_descParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[229],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCellInfo_getName_nameParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCellInfo_getName_nameParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[230],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCellInfo_getName_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCellInfo_getName_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[231],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCellInfo_getRawEntryDescriptorInfo_indexParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCellInfo_getRawEntryDescriptorInfo_indexParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[232],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCellInfo_getRawEntryDescriptorInfo_descParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCellInfo_getRawEntryDescriptorInfo_descParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[233],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCellInfo_getCelltypeInfo_descParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCellInfo_getCelltypeInfo_descParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[234],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCellInfo_getCBP_cbpParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCellInfo_getCBP_cbpParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[235],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCellInfo_getINIBP_inibpParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCellInfo_getINIBP_inibpParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[236],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sRawEntryDescriptorInfo_getRawDescriptor_subscParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sRawEntryDescriptorInfo_getRawDescriptor_subscParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[237],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sRawEntryDescriptorInfo_getRawDescriptor_rawDescParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sRawEntryDescriptorInfo_getRawDescriptor_rawDescParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[238],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sNamespaceInfo_getName_nameParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sNamespaceInfo_getName_nameParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[239],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sNamespaceInfo_getName_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sNamespaceInfo_getName_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[240],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sNamespaceInfo_getNamespaceInfo_ithParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sNamespaceInfo_getNamespaceInfo_ithParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[241],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sNamespaceInfo_getNamespaceInfo_desParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sNamespaceInfo_getNamespaceInfo_desParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[242],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sNamespaceInfo_getSignatureInfo_ithParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sNamespaceInfo_getSignatureInfo_ithParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[243],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sNamespaceInfo_getSignatureInfo_desParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sNamespaceInfo_getSignatureInfo_desParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[244],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sNamespaceInfo_getCelltypeInfo_ithParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sNamespaceInfo_getCelltypeInfo_ithParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[245],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sNamespaceInfo_getCelltypeInfo_desParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sNamespaceInfo_getCelltypeInfo_desParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[246],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sRegionInfo_getName_nameParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sRegionInfo_getName_nameParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[247],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sRegionInfo_getName_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sRegionInfo_getName_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[248],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sRegionInfo_getCellInfo_ithParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sRegionInfo_getCellInfo_ithParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[249],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sRegionInfo_getCellInfo_desParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sRegionInfo_getCellInfo_desParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[250],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sRegionInfo_getRegionInfo_ithParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sRegionInfo_getRegionInfo_ithParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[251],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sRegionInfo_getRegionInfo_desParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sRegionInfo_getRegionInfo_desParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[252],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfo_findNamespace_namespace_pathParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfo_findNamespace_namespace_pathParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[253],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfo_findNamespace_nsDescParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfo_findNamespace_nsDescParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[254],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfo_findRegion_namespace_pathParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfo_findRegion_namespace_pathParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[255],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfo_findRegion_regionDescParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfo_findRegion_regionDescParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[256],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfo_findSignature_namespace_pathParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfo_findSignature_namespace_pathParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[257],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfo_findSignature_signatureDescParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfo_findSignature_signatureDescParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[258],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfo_findCelltype_namespace_pathParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfo_findCelltype_namespace_pathParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[259],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfo_findCelltype_celltypeDescParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfo_findCelltype_celltypeDescParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[260],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfo_findCell_namespace_pathParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfo_findCell_namespace_pathParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[261],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfo_findCell_cellDescParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfo_findCell_cellDescParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[262],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfo_findRawEntryDescriptor_namespace_pathParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfo_findRawEntryDescriptor_namespace_pathParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[263],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfo_findRawEntryDescriptor_rawEntryDescDescParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfo_findRawEntryDescriptor_rawEntryDescDescParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[264],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfo_findRawEntryDescriptor_entryDescParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfo_findRawEntryDescriptor_entryDescParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[265],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfo_findRawEntryDescriptor_unsafe_namespace_pathParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfo_findRawEntryDescriptor_unsafe_namespace_pathParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[266],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfo_findRawEntryDescriptor_unsafe_subscParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfo_findRawEntryDescriptor_unsafe_subscParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[267],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfo_findRawEntryDescriptor_unsafe_rawDescParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfo_findRawEntryDescriptor_unsafe_rawDescParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[268],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_selectNamespaceInfoByName_namespacePathParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_selectNamespaceInfoByName_namespacePathParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[269],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_selectCelltypeInfoByName_celltypePathParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_selectCelltypeInfoByName_celltypePathParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[270],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_selectSignatureInfoByName_signaturePathParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_selectSignatureInfoByName_signaturePathParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[271],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_selectRegionInfoByName_regionPathParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_selectRegionInfoByName_regionPathParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[272],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_selectCellInfoByName_cellPathParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_selectCellInfoByName_cellPathParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[273],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSignatureNameOfCellEntry_cellEntryPathParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSignatureNameOfCellEntry_cellEntryPathParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[274],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSignatureNameOfCellEntry_signatureGlobalNameParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSignatureNameOfCellEntry_signatureGlobalNameParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[275],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSignatureNameOfCellEntry_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSignatureNameOfCellEntry_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[276],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedNamespaceInfo_nameParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedNamespaceInfo_nameParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[277],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedNamespaceInfo_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedNamespaceInfo_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[278],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedNamespaceInfo_num_namespaceParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedNamespaceInfo_num_namespaceParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[279],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedNamespaceInfo_num_celltypeParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedNamespaceInfo_num_celltypeParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[280],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedNamespaceInfo_num_signatureParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedNamespaceInfo_num_signatureParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[281],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_selectCelltypeInfo_ithParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_selectCelltypeInfo_ithParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[282],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_selectSignatureInfo_ithParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_selectSignatureInfo_ithParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[283],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_selectNamespaceInfo_ithParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_selectNamespaceInfo_ithParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[284],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedCelltypeInfo_nameParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedCelltypeInfo_nameParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[285],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedCelltypeInfo_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedCelltypeInfo_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[286],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedCelltypeInfo_num_attrParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedCelltypeInfo_num_attrParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[287],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedCelltypeInfo_num_varParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedCelltypeInfo_num_varParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[288],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedCelltypeInfo_num_callParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedCelltypeInfo_num_callParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[289],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedCelltypeInfo_num_entryParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedCelltypeInfo_num_entryParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[290],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_selectCallInfo_ithParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_selectCallInfo_ithParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[291],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_selectEntryInfo_ithParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_selectEntryInfo_ithParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[292],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_selectAttrInfo_ithParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_selectAttrInfo_ithParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[293],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_selectVarInfo_ithParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_selectVarInfo_ithParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[294],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedAttrInfo_nameParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedAttrInfo_nameParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[295],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedAttrInfo_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedAttrInfo_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[296],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSizeIsExprOfAttr_expr_strParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSizeIsExprOfAttr_expr_strParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[297],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSizeIsExprOfAttr_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSizeIsExprOfAttr_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[298],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedVarInfo_nameParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedVarInfo_nameParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[299],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedVarInfo_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedVarInfo_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[300],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSizeIsExprOfVar_expr_strParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSizeIsExprOfVar_expr_strParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[301],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSizeIsExprOfVar_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSizeIsExprOfVar_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[302],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedCallInfo_nameParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedCallInfo_nameParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[303],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedCallInfo_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedCallInfo_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[304],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedCallInfo_array_sizeParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedCallInfo_array_sizeParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[305],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedCallSpecifierInfo_b_optionalParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedCallSpecifierInfo_b_optionalParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[306],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedCallSpecifierInfo_b_dynamicParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedCallSpecifierInfo_b_dynamicParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[307],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedCallSpecifierInfo_b_ref_descParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedCallSpecifierInfo_b_ref_descParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[308],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedCallSpecifierInfo_b_omitParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedCallSpecifierInfo_b_omitParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[309],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedCallInternalInfo_b_allocator_portParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedCallInternalInfo_b_allocator_portParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[310],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedCallInternalInfo_b_require_portParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedCallInternalInfo_b_require_portParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[311],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedCallLocationInfo_offsetParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedCallLocationInfo_offsetParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[312],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedCallLocationInfo_placeParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedCallLocationInfo_placeParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[313],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedCallOptimizeInfo_b_VMT_uselessParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedCallOptimizeInfo_b_VMT_uselessParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[314],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedCallOptimizeInfo_b_skelton_uselessParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedCallOptimizeInfo_b_skelton_uselessParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[315],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedCallOptimizeInfo_b_cell_uniqueParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedCallOptimizeInfo_b_cell_uniqueParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[316],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedEntryInfo_nameParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedEntryInfo_nameParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[317],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedEntryInfo_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedEntryInfo_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[318],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedEntryInfo_array_sizeParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedEntryInfo_array_sizeParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[319],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedEntryInlineInfo_b_inlineParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedEntryInlineInfo_b_inlineParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[320],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedSignatureInfo_nameParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedSignatureInfo_nameParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[321],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedSignatureInfo_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedSignatureInfo_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[322],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedSignatureInfo_num_functionParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedSignatureInfo_num_functionParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[323],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_selectFunctionInfoByIndex_ithParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_selectFunctionInfoByIndex_ithParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[324],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedFunctionInfo_nameParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedFunctionInfo_nameParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[325],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedFunctionInfo_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedFunctionInfo_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[326],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedFunctionInfo_num_argsParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedFunctionInfo_num_argsParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[327],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedParamInfo_nameParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedParamInfo_nameParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[328],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedParamInfo_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedParamInfo_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[329],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedParamInfo_dirParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedParamInfo_dirParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[330],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_selectParamInfo_ithParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_selectParamInfo_ithParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[331],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedTypeInfo_nameParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedTypeInfo_nameParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[332],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedTypeInfo_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedTypeInfo_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[333],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedTypeInfo_kindParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedTypeInfo_kindParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[334],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedRegionInfo_nameParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedRegionInfo_nameParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[335],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedRegionInfo_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedRegionInfo_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[336],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedRegionInfo_num_cellParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedRegionInfo_num_cellParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[337],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedRegionInfo_num_regionParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedRegionInfo_num_regionParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[338],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_selectCellInfo_ithParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_selectCellInfo_ithParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[339],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_selectRegionInfo_ithParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_selectRegionInfo_ithParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[340],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedCellInfo_nameParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedCellInfo_nameParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[341],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedCellInfo_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getSelectedCellInfo_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[342],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getAttrValueInStr_bufParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getAttrValueInStr_bufParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[343],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getAttrValueInStr_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getAttrValueInStr_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[344],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getVarValueInStr_bufParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getVarValueInStr_bufParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[345],      /* INIB 3 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getVarValueInStr_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sAccessor_getVarValueInStr_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[346],      /* INIB 3 */
};
/* CB 初期化コード #_CIC_# */
void
nTECSInfo_tParamInfo_CB_initialize()
{
    nTECSInfo_tParamInfo_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
