/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tFatFile_tecsgen.h"
#include "tFatFile_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eFatFile : omitted by entry port optimize */

/* ������������ȥ�ؿ� #_EPSF_# */
/* eFatFile : omitted by entry port optimize */

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eFatFile : omitted by entry port optimize */

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
/* ���� CB #_CB_# */
struct tag_tFatFile_CB tFatFile_CB_tab[1];
/* �������ǥ�������ץ� #_EPD_# */
/* eFatFile : omitted by entry port optimize */
/* CB ����������� #_CIC_# */
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
