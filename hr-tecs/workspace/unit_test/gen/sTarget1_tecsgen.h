/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef sTarget1_TECSGEN_H
#define sTarget1_TECSGEN_H

/*
 * signature   :  sTarget1
 * global name :  sTarget1
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_sTarget1_VDES {
    struct tag_sTarget1_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_sTarget1_VMT {
    int            (*double__T)( const struct tag_sTarget1_VDES *edp, int arg );
};

/* �����˥���ǥ�������ץ�(ưŪ�����) #_SDES_# */
#ifndef Descriptor_of_sTarget1_Defined
#define  Descriptor_of_sTarget1_Defined
typedef struct { struct tag_sTarget1_VDES *vdes; } Descriptor( sTarget1 );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_STARGET1_DOUBLE                 (1)

#endif /* sTarget1_TECSGEN_H */
