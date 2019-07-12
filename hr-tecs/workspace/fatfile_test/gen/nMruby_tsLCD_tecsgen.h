/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef nMruby_tsLCD_TECSGEN_H
#define nMruby_tsLCD_TECSGEN_H

/*
 * celltype          :  tsLCD
 * global name       :  nMruby_tsLCD
 * multi-domain      :  yes
 * idx_is_id(actual) :  yes(yes)
 * singleton         :  no
 * has_CB            :  no
 * has_INIB          :  no
 * rom               :  yes
 * CB initializer    :  yes
 */

/* �����Х�إå� #_IGH_# */
#include "global_tecsgen.h"

/* �����˥���إå� #_ISH_# */
#include "sLCD_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� CB (���ߡ�)����� #_CCDP_# */
typedef struct tag_nMruby_tsLCD_CB {
    int  dummy;
} nMruby_tsLCD_CB;
/* ���󥰥�ȥ󥻥� CB �ץ�ȥ�������� #_MCPP_# */

/* ���륿���פ�IDX�� #_CTIX_# */
typedef ID nMruby_tsLCD_IDX;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* ��Ŭ���Τ��Ỳ�Ȥ��륻�륿���פ� CB ������������� #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  nMruby_tsLCD_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tLCD_tecsgen.h"
#ifdef  nMruby_tsLCD_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* nMruby_tsLCD_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define nMruby_tsLCD_ID_BASE        (1)  /* ID �Υ١���  #_NIDB_# */
#define nMruby_tsLCD_N_CELL         (1)  /* ����θĿ�  #_NCEL_# */

/* IDX�������������å��ޥ��� #_CVI_# */
#define nMruby_tsLCD_VALID_IDX(IDX) (nMruby_tsLCD_ID_BASE <= (IDX) && (IDX) < nMruby_tsLCD_ID_BASE+nMruby_tsLCD_N_CELL)


/* ����CB������ޥ��� #_GCB_# */
#define nMruby_tsLCD_GET_CELLCB(idx) ((void *)0)
#ifndef TECSFLOW
 /* �ƤӸ��ؿ��ޥ��� #_CPM_# */
#define nMruby_tsLCD_cTECS_setFont( p_that, font ) \
	  tLCD_eLCD_setFont( \
	   &tLCD_CB_tab[0], (font) )
#define nMruby_tsLCD_cTECS_getFontSize( p_that, font, p_width, p_height ) \
	  tLCD_eLCD_getFontSize( \
	   &tLCD_CB_tab[0], (font), (p_width), (p_height) )
#define nMruby_tsLCD_cTECS_drawString( p_that, str, x, y ) \
	  tLCD_eLCD_drawString( \
	   &tLCD_CB_tab[0], (str), (x), (y) )
#define nMruby_tsLCD_cTECS_fillRect( p_that, x, y, w, h, color ) \
	  tLCD_eLCD_fillRect( \
	   &tLCD_CB_tab[0], (x), (y), (w), (h), (color) )
#define nMruby_tsLCD_cTECS_drawLine( p_that, x0, y0, x1, y1 ) \
	  tLCD_eLCD_drawLine( \
	   &tLCD_CB_tab[0], (x0), (y0), (x1), (y1) )
#define nMruby_tsLCD_cTECS_print( p_that, str ) \
	  tLCD_eLCD_print( \
	   &tLCD_CB_tab[0], (str) )
#define nMruby_tsLCD_cTECS_puts( p_that, str ) \
	  tLCD_eLCD_puts( \
	   &tLCD_CB_tab[0], (str) )
#define nMruby_tsLCD_cTECS_clear( p_that ) \
	  tLCD_eLCD_clear( \
	   &tLCD_CB_tab[0] )
#define nMruby_tsLCD_cTECS_showMessageBox( p_that, title, msg ) \
	  tLCD_eLCD_showMessageBox( \
	   &tLCD_CB_tab[0], (title), (msg) )

#else  /* TECSFLOW */
#define nMruby_tsLCD_cTECS_setFont( p_that, font ) \
	  (p_that)->cTECS.setFont__T( \
 (font) )
#define nMruby_tsLCD_cTECS_getFontSize( p_that, font, p_width, p_height ) \
	  (p_that)->cTECS.getFontSize__T( \
 (font), (p_width), (p_height) )
#define nMruby_tsLCD_cTECS_drawString( p_that, str, x, y ) \
	  (p_that)->cTECS.drawString__T( \
 (str), (x), (y) )
#define nMruby_tsLCD_cTECS_fillRect( p_that, x, y, w, h, color ) \
	  (p_that)->cTECS.fillRect__T( \
 (x), (y), (w), (h), (color) )
#define nMruby_tsLCD_cTECS_drawLine( p_that, x0, y0, x1, y1 ) \
	  (p_that)->cTECS.drawLine__T( \
 (x0), (y0), (x1), (y1) )
#define nMruby_tsLCD_cTECS_print( p_that, str ) \
	  (p_that)->cTECS.print__T( \
 (str) )
#define nMruby_tsLCD_cTECS_puts( p_that, str ) \
	  (p_that)->cTECS.puts__T( \
 (str) )
#define nMruby_tsLCD_cTECS_clear( p_that ) \
	  (p_that)->cTECS.clear__T( \
 )
#define nMruby_tsLCD_cTECS_showMessageBox( p_that, title, msg ) \
	  (p_that)->cTECS.showMessageBox__T( \
 (title), (msg) )

#endif /* TECSFLOW */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDX�������������å��ޥ����û�̷��� #_CVIA_# */
#define VALID_IDX(IDX)  nMruby_tsLCD_VALID_IDX(IDX)


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  nMruby_tsLCD_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	nMruby_tsLCD_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	nMruby_tsLCD_IDX

#define tsLCD_IDX  nMruby_tsLCD_IDX
/* �ƤӸ��ؿ��ޥ����û�̷���#_CPMA_# */
#define cTECS_setFont( font ) \
          ((void)p_cellcb, nMruby_tsLCD_cTECS_setFont( p_cellcb, font ))
#define cTECS_getFontSize( font, p_width, p_height ) \
          ((void)p_cellcb, nMruby_tsLCD_cTECS_getFontSize( p_cellcb, font, p_width, p_height ))
#define cTECS_drawString( str, x, y ) \
          ((void)p_cellcb, nMruby_tsLCD_cTECS_drawString( p_cellcb, str, x, y ))
#define cTECS_fillRect( x, y, w, h, color ) \
          ((void)p_cellcb, nMruby_tsLCD_cTECS_fillRect( p_cellcb, x, y, w, h, color ))
#define cTECS_drawLine( x0, y0, x1, y1 ) \
          ((void)p_cellcb, nMruby_tsLCD_cTECS_drawLine( p_cellcb, x0, y0, x1, y1 ))
#define cTECS_print( str ) \
          ((void)p_cellcb, nMruby_tsLCD_cTECS_print( p_cellcb, str ))
#define cTECS_puts( str ) \
          ((void)p_cellcb, nMruby_tsLCD_cTECS_puts( p_cellcb, str ))
#define cTECS_clear( ) \
          ((void)p_cellcb, nMruby_tsLCD_cTECS_clear( p_cellcb ))
#define cTECS_showMessageBox( title, msg ) \
          ((void)p_cellcb, nMruby_tsLCD_cTECS_showMessageBox( p_cellcb, title, msg ))



/* ���ƥ졼�������� (FOREACH_CELL)������(CB,INIB ��¸�ߤ��ʤ�) #_NFEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for((i)=0;(i)<0;(i)++){

#define END_FOREACH_CELL   }

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* nMruby_tsLCD_TECSGENH */
