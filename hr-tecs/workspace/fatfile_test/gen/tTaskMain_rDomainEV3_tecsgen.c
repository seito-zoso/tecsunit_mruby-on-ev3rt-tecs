/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tTaskMain_tecsgen.h"
#include "tTaskMain_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eBody */
struct tag_tTaskMain_eBody_DES {
    const struct tag_sTaskBody_VMT *vmt;
    int           idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eBody */
void           tTaskMain_eBody_main_skel( const struct tag_sTaskBody_VDES *epd)
{
    struct tag_tTaskMain_eBody_DES *lepd
        = (struct tag_tTaskMain_eBody_DES *)epd;
    tTaskMain_eBody_main( lepd->idx );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eBody */
const struct tag_sTaskBody_VMT tTaskMain_eBody_MT_ = {
    tTaskMain_eBody_main_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
extern const struct tag_sTaskBody_VMT tTaskMain_eBody_MT_;
/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tTaskMain_eBody_DES rDomainEV3_TaskMain_eBody_des;
const struct tag_tTaskMain_eBody_DES rDomainEV3_TaskMain_eBody_des = {
    &tTaskMain_eBody_MT_,
    0,
};
/* CB 初期化コード #_CIC_# */
void
tTaskMain_CB_initialize()
{
    tTaskMain_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
