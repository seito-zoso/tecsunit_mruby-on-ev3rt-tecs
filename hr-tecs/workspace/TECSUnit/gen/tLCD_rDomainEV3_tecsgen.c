/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tLCD_tecsgen.h"
#include "tLCD_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eLCD */
struct tag_tLCD_eLCD_DES {
    const struct tag_sLCD_VMT *vmt;
    tLCD_IDX  idx;
};

/* ������������ȥ�ؿ� #_EPSF_# */
/* eLCD */
ER             tLCD_eLCD_setFont_skel( const struct tag_sLCD_VDES *epd, lcdfont_t font)
{
    struct tag_tLCD_eLCD_DES *lepd
        = (struct tag_tLCD_eLCD_DES *)epd;
    return tLCD_eLCD_setFont( lepd->idx, font );
}
ER             tLCD_eLCD_getFontSize_skel( const struct tag_sLCD_VDES *epd, lcdfont_t font, int32_t* p_width, int32_t* p_height)
{
    struct tag_tLCD_eLCD_DES *lepd
        = (struct tag_tLCD_eLCD_DES *)epd;
    return tLCD_eLCD_getFontSize( lepd->idx, font, p_width, p_height );
}
ER             tLCD_eLCD_drawString_skel( const struct tag_sLCD_VDES *epd, const char* str, int32_t x, int32_t y)
{
    struct tag_tLCD_eLCD_DES *lepd
        = (struct tag_tLCD_eLCD_DES *)epd;
    return tLCD_eLCD_drawString( lepd->idx, str, x, y );
}
ER             tLCD_eLCD_fillRect_skel( const struct tag_sLCD_VDES *epd, int32_t x, int32_t y, int32_t w, int32_t h, lcdcolor_t color)
{
    struct tag_tLCD_eLCD_DES *lepd
        = (struct tag_tLCD_eLCD_DES *)epd;
    return tLCD_eLCD_fillRect( lepd->idx, x, y, w, h, color );
}
ER             tLCD_eLCD_drawLine_skel( const struct tag_sLCD_VDES *epd, int32_t x0, int32_t y0, int32_t x1, int32_t y1)
{
    struct tag_tLCD_eLCD_DES *lepd
        = (struct tag_tLCD_eLCD_DES *)epd;
    return tLCD_eLCD_drawLine( lepd->idx, x0, y0, x1, y1 );
}
void           tLCD_eLCD_print_skel( const struct tag_sLCD_VDES *epd, const char* str)
{
    struct tag_tLCD_eLCD_DES *lepd
        = (struct tag_tLCD_eLCD_DES *)epd;
    tLCD_eLCD_print( lepd->idx, str );
}
void           tLCD_eLCD_puts_skel( const struct tag_sLCD_VDES *epd, const char* str)
{
    struct tag_tLCD_eLCD_DES *lepd
        = (struct tag_tLCD_eLCD_DES *)epd;
    tLCD_eLCD_puts( lepd->idx, str );
}
void           tLCD_eLCD_clear_skel( const struct tag_sLCD_VDES *epd)
{
    struct tag_tLCD_eLCD_DES *lepd
        = (struct tag_tLCD_eLCD_DES *)epd;
    tLCD_eLCD_clear( lepd->idx );
}
void           tLCD_eLCD_showMessageBox_skel( const struct tag_sLCD_VDES *epd, const char* title, const char* msg)
{
    struct tag_tLCD_eLCD_DES *lepd
        = (struct tag_tLCD_eLCD_DES *)epd;
    tLCD_eLCD_showMessageBox( lepd->idx, title, msg );
}

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eLCD */
const struct tag_sLCD_VMT tLCD_eLCD_MT_ = {
    tLCD_eLCD_setFont_skel,
    tLCD_eLCD_getFontSize_skel,
    tLCD_eLCD_drawString_skel,
    tLCD_eLCD_fillRect_skel,
    tLCD_eLCD_drawLine_skel,
    tLCD_eLCD_print_skel,
    tLCD_eLCD_puts_skel,
    tLCD_eLCD_clear_skel,
    tLCD_eLCD_showMessageBox_skel,
};

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
/* ���� CB #_CB_# */
struct tag_tLCD_CB tLCD_CB_tab[1];
extern const struct tag_sLCD_VMT tLCD_eLCD_MT_;
/* �������ǥ�������ץ� #_EPD_# */
extern const struct tag_tLCD_eLCD_DES rDomainEV3_LCD_eLCD_des;
const struct tag_tLCD_eLCD_DES rDomainEV3_LCD_eLCD_des = {
    &tLCD_eLCD_MT_,
    &tLCD_CB_tab[0],      /* CB 3 */
};
/* CB ����������� #_CIC_# */
void
tLCD_CB_initialize()
{
    tLCD_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
