/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tFatFile_tecsgen.h"
#include "tFatFile_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eFatFile : omitted by entry port optimize */

/* 受け口スケルトン関数 #_EPSF_# */
/* eFatFile : omitted by entry port optimize */

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eFatFile : omitted by entry port optimize */

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* セル CB #_CB_# */
struct tag_tFatFile_CB tFatFile_CB_tab[1];
/* 受け口ディスクリプタ #_EPD_# */
/* eFatFile : omitted by entry port optimize */
/* CB 初期化コード #_CIC_# */
void
tFatFile_CB_initialize()
{
    tFatFile_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
