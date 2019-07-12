/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tFatFile_TECSGEN_H
#define tFatFile_TECSGEN_H

/*
 * celltype          :  tFatFile
 * global name       :  tFatFile
 * multi-domain      :  no
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  yes
 * has_INIB          :  no
 * rom               :  yes
 * CB initializer    :  yes
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sFatFile_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB 型宣言 #_CCTPA_# */
typedef struct tag_tFatFile_CB {
    /* call port #_NEP_# */ 
    /* var #_VA_# */ 
    FIL            fs;
    UINT           br;
    TCHAR          read_buff[100];
}  tFatFile_CB;
/* シングルトンセル CB プロトタイプ宣言 #_MCPB_# */
extern tFatFile_CB  tFatFile_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef struct tag_tFatFile_CB *tFatFile_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sFatFile */
FRESULT      tFatFile_eFatFile_fopen(tFatFile_IDX idx, const TCHAR* path, const TCHAR* mode);
FRESULT      tFatFile_eFatFile_fclose(tFatFile_IDX idx);
FRESULT      tFatFile_eFatFile_fread(tFatFile_IDX idx, TCHAR* buffer, UINT btr);
FRESULT      tFatFile_eFatFile_fwrite(tFatFile_IDX idx, const TCHAR* buffer, UINT btw, UINT* bw);
TCHAR*       tFatFile_eFatFile_fgets(tFatFile_IDX idx, TCHAR* buff, uint_t btr);
FRESULT      tFatFile_eFatFile_unlink(tFatFile_IDX idx, const TCHAR* path);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tFatFile_ID_BASE            (1)  /* ID のベース  #_NIDB_# */
#define tFatFile_N_CELL             (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tFatFile_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tFatFile_GET_CELLCB(idx) (idx)



/* var アクセスマクロ #_VAM_# */
#define tFatFile_VAR_fs(p_that)	((p_that)->fs)
#define tFatFile_VAR_br(p_that)	((p_that)->br)
#define tFatFile_VAR_read_buff(p_that)	((p_that)->read_buff)

#define tFatFile_GET_fs(p_that)	((p_that)->fs)
#define tFatFile_SET_fs(p_that,val)	((p_that)->fs=(val))
#define tFatFile_GET_br(p_that)	((p_that)->br)
#define tFatFile_SET_br(p_that,val)	((p_that)->br=(val))
#define tFatFile_GET_read_buff(p_that)	((p_that)->read_buff)
#define tFatFile_SET_read_buff(p_that,val)	((p_that)->read_buff=(val))

#ifndef TECSFLOW
#else  /* TECSFLOW */
#endif /* TECSFLOW */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tFatFile_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tFatFile_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tFatFile_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tFatFile_IDX



/* var アクセスマクロ(短縮形) #_VAMA_# */
#define VAR_fs               tFatFile_VAR_fs( p_cellcb )
#define VAR_br               tFatFile_VAR_br( p_cellcb )
#define VAR_read_buff        tFatFile_VAR_read_buff( p_cellcb )




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eFatFile_fopen   tFatFile_eFatFile_fopen
#define eFatFile_fclose  tFatFile_eFatFile_fclose
#define eFatFile_fread   tFatFile_eFatFile_fread
#define eFatFile_fwrite  tFatFile_eFatFile_fwrite
#define eFatFile_fgets   tFatFile_eFatFile_fgets
#define eFatFile_unlink  tFatFile_eFatFile_unlink

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tFatFile_N_CELL; (i)++ ){ \
       (p_cb) = &tFatFile_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tFatFile_TECSGENH */
