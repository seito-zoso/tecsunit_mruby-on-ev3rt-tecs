/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tTarget1_TECSGEN_H
#define tTarget1_TECSGEN_H

/*
 * celltype          :  tTarget1
 * global name       :  tTarget1
 * multi-domain      :  no
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  no
 * has_INIB          :  no
 * rom               :  yes
 * CB initializer    :  yes
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sTarget1_tecsgen.h"
#include "sLCD_tecsgen.h"
#include "sButton_tecsgen.h"
#include "sKernel_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB (ダミー)型宣言 #_CCDP_# */
typedef struct tag_tTarget1_CB {
    int  dummy;
} tTarget1_CB;
/* シングルトンセル CB プロトタイプ宣言 #_MCPB_# */

/* セルタイプのIDX型 #_CTIX_# */
typedef int   tTarget1_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sTarget1 */
int          tTarget1_eTarget1_double(tTarget1_IDX idx, int arg);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tTarget1_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tLCD_tecsgen.h"
#include "tButton_tecsgen.h"
#include "tKernel_tecsgen.h"
#ifdef  tTarget1_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tTarget1_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tTarget1_ID_BASE            (1)  /* ID のベース  #_NIDB_# */
#define tTarget1_N_CELL             (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tTarget1_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tTarget1_GET_CELLCB(idx) ((void *)0)
#ifndef TECSFLOW
 /* 呼び口関数マクロ #_CPM_# */
#define tTarget1_cLCD_setFont( p_that, font ) \
	  tLCD_eLCD_setFont( \
	   &tLCD_CB_tab[0], (font) )
#define tTarget1_cLCD_getFontSize( p_that, font, p_width, p_height ) \
	  tLCD_eLCD_getFontSize( \
	   &tLCD_CB_tab[0], (font), (p_width), (p_height) )
#define tTarget1_cLCD_drawString( p_that, str, x, y ) \
	  tLCD_eLCD_drawString( \
	   &tLCD_CB_tab[0], (str), (x), (y) )
#define tTarget1_cLCD_fillRect( p_that, x, y, w, h, color ) \
	  tLCD_eLCD_fillRect( \
	   &tLCD_CB_tab[0], (x), (y), (w), (h), (color) )
#define tTarget1_cLCD_drawLine( p_that, x0, y0, x1, y1 ) \
	  tLCD_eLCD_drawLine( \
	   &tLCD_CB_tab[0], (x0), (y0), (x1), (y1) )
#define tTarget1_cLCD_print( p_that, str ) \
	  tLCD_eLCD_print( \
	   &tLCD_CB_tab[0], (str) )
#define tTarget1_cLCD_puts( p_that, str ) \
	  tLCD_eLCD_puts( \
	   &tLCD_CB_tab[0], (str) )
#define tTarget1_cLCD_clear( p_that ) \
	  tLCD_eLCD_clear( \
	   &tLCD_CB_tab[0] )
#define tTarget1_cLCD_showMessageBox( p_that, title, msg ) \
	  tLCD_eLCD_showMessageBox( \
	   &tLCD_CB_tab[0], (title), (msg) )
#define tTarget1_cButton_isPressed( p_that, button ) \
	  tButton_eButton_isPressed( \
	   (tButton_IDX)0, (button) )
#define tTarget1_cKernel_sleep( p_that ) \
	  tKernel_eKernel_sleep( \
	    )
#define tTarget1_cKernel_sleepTimeout( p_that, timeout ) \
	  tKernel_eKernel_sleepTimeout( \
	    (timeout) )
#define tTarget1_cKernel_delay( p_that, delayTime ) \
	  tKernel_eKernel_delay( \
	    (delayTime) )
#define tTarget1_cKernel_exitTask( p_that ) \
	  tKernel_eKernel_exitTask( \
	    )
#define tTarget1_cKernel_getTaskId( p_that, p_taskId ) \
	  tKernel_eKernel_getTaskId( \
	    (p_taskId) )
#define tTarget1_cKernel_rotateReadyQueue( p_that, taskPriority ) \
	  tKernel_eKernel_rotateReadyQueue( \
	    (taskPriority) )
#define tTarget1_cKernel_getTime( p_that, p_systemTime ) \
	  tKernel_eKernel_getTime( \
	    (p_systemTime) )
#define tTarget1_cKernel_getMicroTime( p_that, p_systemMicroTime ) \
	  tKernel_eKernel_getMicroTime( \
	    (p_systemMicroTime) )
#define tTarget1_cKernel_lockCpu( p_that ) \
	  tKernel_eKernel_lockCpu( \
	    )
#define tTarget1_cKernel_unlockCpu( p_that ) \
	  tKernel_eKernel_unlockCpu( \
	    )
#define tTarget1_cKernel_disableDispatch( p_that ) \
	  tKernel_eKernel_disableDispatch( \
	    )
#define tTarget1_cKernel_enableDispatch( p_that ) \
	  tKernel_eKernel_enableDispatch( \
	    )
#define tTarget1_cKernel_disableTaskException( p_that ) \
	  tKernel_eKernel_disableTaskException( \
	    )
#define tTarget1_cKernel_enableTaskException( p_that ) \
	  tKernel_eKernel_enableTaskException( \
	    )
#define tTarget1_cKernel_changeInterruptPriorityMask( p_that, interruptPriority ) \
	  tKernel_eKernel_changeInterruptPriorityMask( \
	    (interruptPriority) )
#define tTarget1_cKernel_getInterruptPriorityMask( p_that, p_interruptPriority ) \
	  tKernel_eKernel_getInterruptPriorityMask( \
	    (p_interruptPriority) )
#define tTarget1_cKernel_exitKernel( p_that ) \
	  tKernel_eKernel_exitKernel( \
	    )
#define tTarget1_cKernel_senseContext( p_that ) \
	  tKernel_eKernel_senseContext( \
	    )
#define tTarget1_cKernel_senseLock( p_that ) \
	  tKernel_eKernel_senseLock( \
	    )
#define tTarget1_cKernel_senseDispatch( p_that ) \
	  tKernel_eKernel_senseDispatch( \
	    )
#define tTarget1_cKernel_senseDispatchPendingState( p_that ) \
	  tKernel_eKernel_senseDispatchPendingState( \
	    )
#define tTarget1_cKernel_senseKernel( p_that ) \
	  tKernel_eKernel_senseKernel( \
	    )

#else  /* TECSFLOW */
#define tTarget1_cLCD_setFont( p_that, font ) \
	  (p_that)->cLCD.setFont__T( \
 (font) )
#define tTarget1_cLCD_getFontSize( p_that, font, p_width, p_height ) \
	  (p_that)->cLCD.getFontSize__T( \
 (font), (p_width), (p_height) )
#define tTarget1_cLCD_drawString( p_that, str, x, y ) \
	  (p_that)->cLCD.drawString__T( \
 (str), (x), (y) )
#define tTarget1_cLCD_fillRect( p_that, x, y, w, h, color ) \
	  (p_that)->cLCD.fillRect__T( \
 (x), (y), (w), (h), (color) )
#define tTarget1_cLCD_drawLine( p_that, x0, y0, x1, y1 ) \
	  (p_that)->cLCD.drawLine__T( \
 (x0), (y0), (x1), (y1) )
#define tTarget1_cLCD_print( p_that, str ) \
	  (p_that)->cLCD.print__T( \
 (str) )
#define tTarget1_cLCD_puts( p_that, str ) \
	  (p_that)->cLCD.puts__T( \
 (str) )
#define tTarget1_cLCD_clear( p_that ) \
	  (p_that)->cLCD.clear__T( \
 )
#define tTarget1_cLCD_showMessageBox( p_that, title, msg ) \
	  (p_that)->cLCD.showMessageBox__T( \
 (title), (msg) )
#define tTarget1_cButton_isPressed( p_that, button ) \
	  (p_that)->cButton.isPressed__T( \
 (button) )
#define tTarget1_cKernel_sleep( p_that ) \
	  (p_that)->cKernel.sleep__T( \
 )
#define tTarget1_cKernel_sleepTimeout( p_that, timeout ) \
	  (p_that)->cKernel.sleepTimeout__T( \
 (timeout) )
#define tTarget1_cKernel_delay( p_that, delayTime ) \
	  (p_that)->cKernel.delay__T( \
 (delayTime) )
#define tTarget1_cKernel_exitTask( p_that ) \
	  (p_that)->cKernel.exitTask__T( \
 )
#define tTarget1_cKernel_getTaskId( p_that, p_taskId ) \
	  (p_that)->cKernel.getTaskId__T( \
 (p_taskId) )
#define tTarget1_cKernel_rotateReadyQueue( p_that, taskPriority ) \
	  (p_that)->cKernel.rotateReadyQueue__T( \
 (taskPriority) )
#define tTarget1_cKernel_getTime( p_that, p_systemTime ) \
	  (p_that)->cKernel.getTime__T( \
 (p_systemTime) )
#define tTarget1_cKernel_getMicroTime( p_that, p_systemMicroTime ) \
	  (p_that)->cKernel.getMicroTime__T( \
 (p_systemMicroTime) )
#define tTarget1_cKernel_lockCpu( p_that ) \
	  (p_that)->cKernel.lockCpu__T( \
 )
#define tTarget1_cKernel_unlockCpu( p_that ) \
	  (p_that)->cKernel.unlockCpu__T( \
 )
#define tTarget1_cKernel_disableDispatch( p_that ) \
	  (p_that)->cKernel.disableDispatch__T( \
 )
#define tTarget1_cKernel_enableDispatch( p_that ) \
	  (p_that)->cKernel.enableDispatch__T( \
 )
#define tTarget1_cKernel_disableTaskException( p_that ) \
	  (p_that)->cKernel.disableTaskException__T( \
 )
#define tTarget1_cKernel_enableTaskException( p_that ) \
	  (p_that)->cKernel.enableTaskException__T( \
 )
#define tTarget1_cKernel_changeInterruptPriorityMask( p_that, interruptPriority ) \
	  (p_that)->cKernel.changeInterruptPriorityMask__T( \
 (interruptPriority) )
#define tTarget1_cKernel_getInterruptPriorityMask( p_that, p_interruptPriority ) \
	  (p_that)->cKernel.getInterruptPriorityMask__T( \
 (p_interruptPriority) )
#define tTarget1_cKernel_exitKernel( p_that ) \
	  (p_that)->cKernel.exitKernel__T( \
 )
#define tTarget1_cKernel_senseContext( p_that ) \
	  (p_that)->cKernel.senseContext__T( \
 )
#define tTarget1_cKernel_senseLock( p_that ) \
	  (p_that)->cKernel.senseLock__T( \
 )
#define tTarget1_cKernel_senseDispatch( p_that ) \
	  (p_that)->cKernel.senseDispatch__T( \
 )
#define tTarget1_cKernel_senseDispatchPendingState( p_that ) \
	  (p_that)->cKernel.senseDispatchPendingState__T( \
 )
#define tTarget1_cKernel_senseKernel( p_that ) \
	  (p_that)->cKernel.senseKernel__T( \
 )

#endif /* TECSFLOW */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eTarget1 */
int            tTarget1_eTarget1_double_skel( const struct tag_sTarget1_VDES *epd, int arg);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tTarget1_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tTarget1_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tTarget1_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tTarget1_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cLCD_setFont( font ) \
          ((void)p_cellcb, tTarget1_cLCD_setFont( p_cellcb, font ))
#define cLCD_getFontSize( font, p_width, p_height ) \
          ((void)p_cellcb, tTarget1_cLCD_getFontSize( p_cellcb, font, p_width, p_height ))
#define cLCD_drawString( str, x, y ) \
          ((void)p_cellcb, tTarget1_cLCD_drawString( p_cellcb, str, x, y ))
#define cLCD_fillRect( x, y, w, h, color ) \
          ((void)p_cellcb, tTarget1_cLCD_fillRect( p_cellcb, x, y, w, h, color ))
#define cLCD_drawLine( x0, y0, x1, y1 ) \
          ((void)p_cellcb, tTarget1_cLCD_drawLine( p_cellcb, x0, y0, x1, y1 ))
#define cLCD_print( str ) \
          ((void)p_cellcb, tTarget1_cLCD_print( p_cellcb, str ))
#define cLCD_puts( str ) \
          ((void)p_cellcb, tTarget1_cLCD_puts( p_cellcb, str ))
#define cLCD_clear( ) \
          ((void)p_cellcb, tTarget1_cLCD_clear( p_cellcb ))
#define cLCD_showMessageBox( title, msg ) \
          ((void)p_cellcb, tTarget1_cLCD_showMessageBox( p_cellcb, title, msg ))
#define cButton_isPressed( button ) \
          ((void)p_cellcb, tTarget1_cButton_isPressed( p_cellcb, button ))
#define cKernel_sleep( ) \
          ((void)p_cellcb, tTarget1_cKernel_sleep( p_cellcb ))
#define cKernel_sleepTimeout( timeout ) \
          ((void)p_cellcb, tTarget1_cKernel_sleepTimeout( p_cellcb, timeout ))
#define cKernel_delay( delayTime ) \
          ((void)p_cellcb, tTarget1_cKernel_delay( p_cellcb, delayTime ))
#define cKernel_exitTask( ) \
          ((void)p_cellcb, tTarget1_cKernel_exitTask( p_cellcb ))
#define cKernel_getTaskId( p_taskId ) \
          ((void)p_cellcb, tTarget1_cKernel_getTaskId( p_cellcb, p_taskId ))
#define cKernel_rotateReadyQueue( taskPriority ) \
          ((void)p_cellcb, tTarget1_cKernel_rotateReadyQueue( p_cellcb, taskPriority ))
#define cKernel_getTime( p_systemTime ) \
          ((void)p_cellcb, tTarget1_cKernel_getTime( p_cellcb, p_systemTime ))
#define cKernel_getMicroTime( p_systemMicroTime ) \
          ((void)p_cellcb, tTarget1_cKernel_getMicroTime( p_cellcb, p_systemMicroTime ))
#define cKernel_lockCpu( ) \
          ((void)p_cellcb, tTarget1_cKernel_lockCpu( p_cellcb ))
#define cKernel_unlockCpu( ) \
          ((void)p_cellcb, tTarget1_cKernel_unlockCpu( p_cellcb ))
#define cKernel_disableDispatch( ) \
          ((void)p_cellcb, tTarget1_cKernel_disableDispatch( p_cellcb ))
#define cKernel_enableDispatch( ) \
          ((void)p_cellcb, tTarget1_cKernel_enableDispatch( p_cellcb ))
#define cKernel_disableTaskException( ) \
          ((void)p_cellcb, tTarget1_cKernel_disableTaskException( p_cellcb ))
#define cKernel_enableTaskException( ) \
          ((void)p_cellcb, tTarget1_cKernel_enableTaskException( p_cellcb ))
#define cKernel_changeInterruptPriorityMask( interruptPriority ) \
          ((void)p_cellcb, tTarget1_cKernel_changeInterruptPriorityMask( p_cellcb, interruptPriority ))
#define cKernel_getInterruptPriorityMask( p_interruptPriority ) \
          ((void)p_cellcb, tTarget1_cKernel_getInterruptPriorityMask( p_cellcb, p_interruptPriority ))
#define cKernel_exitKernel( ) \
          ((void)p_cellcb, tTarget1_cKernel_exitKernel( p_cellcb ))
#define cKernel_senseContext( ) \
          ((void)p_cellcb, tTarget1_cKernel_senseContext( p_cellcb ))
#define cKernel_senseLock( ) \
          ((void)p_cellcb, tTarget1_cKernel_senseLock( p_cellcb ))
#define cKernel_senseDispatch( ) \
          ((void)p_cellcb, tTarget1_cKernel_senseDispatch( p_cellcb ))
#define cKernel_senseDispatchPendingState( ) \
          ((void)p_cellcb, tTarget1_cKernel_senseDispatchPendingState( p_cellcb ))
#define cKernel_senseKernel( ) \
          ((void)p_cellcb, tTarget1_cKernel_senseKernel( p_cellcb ))




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eTarget1_double  tTarget1_eTarget1_double

/* イテレータコード (FOREACH_CELL)の生成(CB,INIB は存在しない) #_NFEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for((i)=0;(i)<0;(i)++){

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tTarget1_TECSGENH */
