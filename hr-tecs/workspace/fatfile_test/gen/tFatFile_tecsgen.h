/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
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

/* �����Х�إå� #_IGH_# */
#include "global_tecsgen.h"

/* �����˥���إå� #_ISH_# */
#include "sFatFile_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� CB ����� #_CCTPA_# */
typedef struct tag_tFatFile_CB {
    /* call port #_NEP_# */ 
    /* var #_VA_# */ 
    FIL            fs;
    UINT           br;
    TCHAR          read_buff[100];
}  tFatFile_CB;
/* ���󥰥�ȥ󥻥� CB �ץ�ȥ�������� #_MCPB_# */
extern tFatFile_CB  tFatFile_CB_tab[];

/* ���륿���פ�IDX�� #_CTIX_# */
typedef struct tag_tFatFile_CB *tFatFile_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
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

#define tFatFile_ID_BASE            (1)  /* ID �Υ١���  #_NIDB_# */
#define tFatFile_N_CELL             (1)  /* ����θĿ�  #_NCEL_# */

/* IDX�������������å��ޥ��� #_CVI_# */
#define tFatFile_VALID_IDX(IDX) (1)


/* ����CB������ޥ��� #_GCB_# */
#define tFatFile_GET_CELLCB(idx) (idx)



/* var ���������ޥ��� #_VAM_# */
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

/* ������������ȥ�ؿ��ץ�ȥ����������VMT���׺�Ŭ���ˤ�껲�Ȥ����Ρ� #_EPSP_# */

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDX�������������å��ޥ����û�̷��� #_CVIA_# */
#define VALID_IDX(IDX)  tFatFile_VALID_IDX(IDX)


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  tFatFile_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	tFatFile_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	tFatFile_IDX



/* var ���������ޥ���(û�̷�) #_VAMA_# */
#define VAR_fs               tFatFile_VAR_fs( p_cellcb )
#define VAR_br               tFatFile_VAR_br( p_cellcb )
#define VAR_read_buff        tFatFile_VAR_read_buff( p_cellcb )




/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eFatFile_fopen   tFatFile_eFatFile_fopen
#define eFatFile_fclose  tFatFile_eFatFile_fclose
#define eFatFile_fread   tFatFile_eFatFile_fread
#define eFatFile_fwrite  tFatFile_eFatFile_fwrite
#define eFatFile_fgets   tFatFile_eFatFile_fgets
#define eFatFile_unlink  tFatFile_eFatFile_unlink

/* ���ƥ졼�������� (FOREACH_CELL)������ #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tFatFile_N_CELL; (i)++ ){ \
       (p_cb) = &tFatFile_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tFatFile_TECSGENH */
