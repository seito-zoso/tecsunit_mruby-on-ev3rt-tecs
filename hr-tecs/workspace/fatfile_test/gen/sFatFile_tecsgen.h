/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef sFatFile_TECSGEN_H
#define sFatFile_TECSGEN_H

/*
 * signature   :  sFatFile
 * global name :  sFatFile
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_sFatFile_VDES {
    struct tag_sFatFile_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_sFatFile_VMT {
    FRESULT        (*fopen__T)( const struct tag_sFatFile_VDES *edp, const TCHAR* path, const TCHAR* mode );
    FRESULT        (*fclose__T)( const struct tag_sFatFile_VDES *edp );
    FRESULT        (*fread__T)( const struct tag_sFatFile_VDES *edp, TCHAR* buffer, UINT btr );
    FRESULT        (*fwrite__T)( const struct tag_sFatFile_VDES *edp, const TCHAR* buffer, UINT btw, UINT* bw );
    TCHAR*         (*fgets__T)( const struct tag_sFatFile_VDES *edp, TCHAR* buff, uint_t btr );
    FRESULT        (*unlink__T)( const struct tag_sFatFile_VDES *edp, const TCHAR* path );
};

/* �����˥���ǥ�������ץ�(ưŪ�����) #_SDES_# */
#ifndef Descriptor_of_sFatFile_Defined
#define  Descriptor_of_sFatFile_Defined
typedef struct { struct tag_sFatFile_VDES *vdes; } Descriptor( sFatFile );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SFATFILE_FOPEN                  (1)
#define	FUNCID_SFATFILE_FCLOSE                 (2)
#define	FUNCID_SFATFILE_FREAD                  (3)
#define	FUNCID_SFATFILE_FWRITE                 (4)
#define	FUNCID_SFATFILE_FGETS                  (5)
#define	FUNCID_SFATFILE_UNLINK                 (6)

#endif /* sFatFile_TECSGEN_H */
