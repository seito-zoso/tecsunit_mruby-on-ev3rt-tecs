/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef sTECSUnit_TECSGEN_H
#define sTECSUnit_TECSGEN_H

/*
 * signature   :  sTECSUnit
 * global name :  sTECSUnit
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_sTECSUnit_VDES {
    struct tag_sTECSUnit_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_sTECSUnit_VMT {
    void           (*main__T)( const struct tag_sTECSUnit_VDES *edp, const char_t* cell_path, const char_t* entry_path, const char_t* signature_path, const char_t* function_path, const struct tecsunit_obj* arguments, const struct tecsunit_obj* exp_val );
};

/* �����˥���ǥ�������ץ�(ưŪ�����) #_SDES_# */
#ifndef Descriptor_of_sTECSUnit_Defined
#define  Descriptor_of_sTECSUnit_Defined
typedef struct { struct tag_sTECSUnit_VDES *vdes; } Descriptor( sTECSUnit );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_STECSUNIT_MAIN                  (1)

#endif /* sTECSUnit_TECSGEN_H */
