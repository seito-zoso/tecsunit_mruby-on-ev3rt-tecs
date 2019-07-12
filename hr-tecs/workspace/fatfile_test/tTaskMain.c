/*
 * ¤³¤Î¥Õ¥¡¥¤¥ë¤Ï tecsgen ¤Ë¤è¤ê¥Æ¥ó¥×¥ì¡¼¥È¤È¤·¤Æ¼«Æ°À¸À®¤µ¤ì¤Þ¤·¤¿
 * ¤³¤Î¥Õ¥¡¥¤¥ë¤òÊÔ½¸¤·¤Æ»ÈÍÑ¤¹¤ë¤³¤È¤¬°Õ¿Þ¤µ¤ì¤Æ¤¤¤Þ¤¹¤¬
 * tecsgen ¤ÎºÆ¼Â¹Ô¤Ë¤è¤ê¾å½ñ¤­¤µ¤ì¤Æ¤·¤Þ¤¦¤¿¤á¡¢ÄÌ¾ï
 *   gen/tTaskMain_templ.c => src/tTaskMain.c
 * ¤Î¤è¤¦¤ËÌ¾Á°, ¥Õ¥©¥ë¥À¤òÊÑ¹¹¤·¤Æ¤«¤é½¤Àµ¤·¤Þ¤¹
 */
/* #[<PREAMBLE>]#
 * #[<...>]# ¤«¤é #[</...>]# ¤Ç°Ï¤Þ¤ì¤¿¥³¥á¥ó¥È¤ÏÊÔ½¸¤·¤Ê¤¤¤Ç¤¯¤À¤µ¤¤
 * tecsmerge ¤Ë¤è¤ë¥Þ¡¼¥¸¤Ë»ÈÍÑ¤µ¤ì¤Þ¤¹
 *
 * ¸Æ¤Ó¸ý´Ø¿ô #_TCPF_#
 * call port: cFatFile signature: sFatFile context:task
 *   FRESULT        cFatFile_fopen( const TCHAR* path, const TCHAR* mode );
 *   FRESULT        cFatFile_fclose( );
 *   FRESULT        cFatFile_fread( TCHAR* buffer, UINT btr );
 *   FRESULT        cFatFile_fwrite( const TCHAR* buffer, UINT btw, UINT* bw );
 *   FRESULT        cFatFile_unlink( const TCHAR* path );
 * call port: cLCD signature: sLCD context:task
 *   ER             cLCD_setFont( lcdfont_t font );
 *   ER             cLCD_getFontSize( lcdfont_t font, int32_t* p_width, int32_t* p_height );
 *   ER             cLCD_drawString( const char* str, int32_t x, int32_t y );
 *   ER             cLCD_fillRect( int32_t x, int32_t y, int32_t w, int32_t h, lcdcolor_t color );
 *   ER             cLCD_drawLine( int32_t x0, int32_t y0, int32_t x1, int32_t y1 );
 *   void           cLCD_print( const char* str );
 *   void           cLCD_puts( const char* str );
 *   void           cLCD_clear( );
 *   void           cLCD_showMessageBox( const char* title, const char* msg );
 * call port: cButton signature: sButton context:task
 *   bool_t         cButton_isPressed( button_t button );
 * call port: cKernel signature: sKernel context:task
 *   ER             cKernel_sleep( );
 *   ER             cKernel_sleepTimeout( TMO timeout );
 *   ER             cKernel_delay( RELTIM delayTime );
 *   ER             cKernel_exitTask( );
 *   ER             cKernel_getTaskId( ID* p_taskId );
 *   ER             cKernel_rotateReadyQueue( PRI taskPriority );
 *   ER             cKernel_getTime( SYSTIM* p_systemTime );
 *   ER             cKernel_getMicroTime( SYSUTM* p_systemMicroTime );
 *   ER             cKernel_lockCpu( );
 *   ER             cKernel_unlockCpu( );
 *   ER             cKernel_disableDispatch( );
 *   ER             cKernel_enableDispatch( );
 *   ER             cKernel_disableTaskException( );
 *   ER             cKernel_enableTaskException( );
 *   ER             cKernel_changeInterruptPriorityMask( PRI interruptPriority );
 *   ER             cKernel_getInterruptPriorityMask( PRI* p_interruptPriority );
 *   ER             cKernel_exitKernel( );
 *   bool_t         cKernel_senseContext( );
 *   bool_t         cKernel_senseLock( );
 *   bool_t         cKernel_senseDispatch( );
 *   bool_t         cKernel_senseDispatchPendingState( );
 *   bool_t         cKernel_senseKernel( );
 *
 * #[</PREAMBLE>]# */

/* ¥×¥í¥È¥¿¥¤¥×Àë¸À¤äÊÑ¿ô¤ÎÄêµÁ¤ò¤³¤³¤Ë½ñ¤­¤Þ¤¹ #_PAC_# */
#include "tTaskMain_tecsgen.h"

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* ¼õ¤±¸ý´Ø¿ô #_TEPF_# */
/* #[<ENTRY_PORT>]# eBody
 * entry port: eBody
 * signature:  sTaskBody
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eBody_main
 * name:         eBody_main
 * global_name:  tTaskMain_eBody_main
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eBody_main(CELLIDX idx)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* ¥¨¥é¡¼½èÍý¥³¡¼¥É¤ò¤³¤³¤Ëµ­½Ò¤·¤Þ¤¹ */
	} /* end if VALID_IDX(idx) */

	/* ¤³¤³¤Ë½èÍýËÜÂÎ¤òµ­½Ò¤·¤Þ¤¹ #_TEFB_# */
  char_t buf[10];
  FRESULT res, res2;
  FIL fs;
  FATFS fatfs;
  uint_t br, i;
  // DIR dp;

  f_mount( &fatfs, "", 0 );

  cLCD_setFont( EV3_FONT_MEDIUM );
  cLCD_drawString( "JSON_OPEN", 1, 0 );
  while(1){
      if( cButton_isPressed( ENTER_BUTTON ) ){
          cLCD_clear();
          break;
      }
  }
  cKernel_delay( 1000 );
  // res = f_open( &fs, "json/target.txt", FA_READ | FA_OPEN_EXISTING );
  res = cFatFile_fopen("json/target.txt","r");
  if( res == FR_OK ){
    cLCD_drawString( "FR_OK", 1, 0 );
  }else{
    cLCD_drawString( "FR_NG", 1, 0 );
  }
  while(1){
    if( cButton_isPressed( ENTER_BUTTON ) ){
        cLCD_clear();
        break;
    }
  }
  cKernel_delay( 1000 );

  i = 0;
  while( cFatFile_fgets( buf, 10 ) != NULL ){
    cLCD_drawString( buf, 1, i );
    while(1){
      if( cButton_isPressed( ENTER_BUTTON ) ){
          break;
      }
    }
    cKernel_delay( 500 );
    i += 1;
  }
  // res = cFatFile_fread( buf, 5 );
  // if( res == FR_OK ){
  //   cLCD_drawString( "FR_OK read", 1, 0 );
  // }else{
  //   cLCD_drawString( "FR_NG read", 1, 0 );
  // }
  // while(1){
  //   if( cButton_isPressed( ENTER_BUTTON ) ){
  //       cLCD_clear();
  //       break;
  //   }
  // }
  cFatFile_fclose();
  // f_close(&fs);
  cKernel_exitTask();

  // cLCD_drawString( buf, 1, 0 );
  // while(1){
  //     if( cButton_isPressed( ENTER_BUTTON ) ){
  //         cLCD_clear();
  //         break;
  //     }
  // }
}

/* #[<POSTAMBLE>]#
 *   ¤³¤ì¤è¤ê²¼¤ËÈó¼õ¤±¸ý´Ø¿ô¤ò½ñ¤­¤Þ¤¹
 * #[</POSTAMBLE>]#*/
