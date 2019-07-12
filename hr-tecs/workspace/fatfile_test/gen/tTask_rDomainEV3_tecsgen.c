/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tTask_tecsgen.h"
#include "tTask_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eTask : omitted by entry port optimize */

/* eiTask : omitted by entry port optimize */

/* 受け口スケルトン関数 #_EPSF_# */
/* eTask : omitted by entry port optimize */
/* eiTask : omitted by entry port optimize */

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eTask : omitted by entry port optimize */
/* eiTask : omitted by entry port optimize */

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_sTaskBody_VDES rDomainEV3_EV3Platform_eTaskBody_des;

extern struct tag_sTaskBody_VDES rDomainEV3_TaskMain_eBody_des;

/* 呼び口配列 #_CPA_# */


/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tTask_INIB tTask_INIB_tab[] = {
    /* cell: tTask_CB_tab[0]:  EV3Task id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_EV3Platform_eTaskBody_des,   /* cBody #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        TSKID_tTask_rDomainEV3_EV3Task,          /* id */
    },
    /* cell: tTask_CB_tab[1]:  MrubyTask1 id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_TaskMain_eBody_des,          /* cBody #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        TSKID_tTask_rDomainEV3_MrubyTask1,       /* id */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
/* eTask : omitted by entry port optimize */
/* eiTask : omitted by entry port optimize */
/* eTask : omitted by entry port optimize */
/* eiTask : omitted by entry port optimize */
/* CB 初期化コード #_CIC_# */
void
tTask_CB_initialize()
{
    tTask_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
