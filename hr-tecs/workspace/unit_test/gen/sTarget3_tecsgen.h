/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef sTarget3_TECSGEN_H
#define sTarget3_TECSGEN_H

/*
 * signature   :  sTarget3
 * global name :  sTarget3
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_sTarget3_VDES {
    struct tag_sTarget3_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_sTarget3_VMT {
    ER             (*send__T)( const struct tag_sTarget3_VDES *edp, const int8_t* buf, int8_t len );
    ER             (*sendMessage__T)( const struct tag_sTarget3_VDES *edp, const char_t* buf, int8_t len );
    ER             (*receiveMessage__T)( const struct tag_sTarget3_VDES *edp, char_t* buf, int8_t len );
    ER             (*checkER__T)( const struct tag_sTarget3_VDES *edp, ER eroor );
};

/* �����˥���ǥ�������ץ�(ưŪ�����) #_SDES_# */
#ifndef Descriptor_of_sTarget3_Defined
#define  Descriptor_of_sTarget3_Defined
typedef struct { struct tag_sTarget3_VDES *vdes; } Descriptor( sTarget3 );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_STARGET3_SEND                   (1)
#define	FUNCID_STARGET3_SENDMESSAGE            (2)
#define	FUNCID_STARGET3_RECEIVEMESSAGE         (3)
#define	FUNCID_STARGET3_CHECKER                (4)

#endif /* sTarget3_TECSGEN_H */
