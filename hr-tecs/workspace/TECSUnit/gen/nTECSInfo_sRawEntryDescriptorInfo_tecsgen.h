/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef nTECSInfo_sRawEntryDescriptorInfo_TECSGEN_H
#define nTECSInfo_sRawEntryDescriptorInfo_TECSGEN_H

/*
 * signature   :  sRawEntryDescriptorInfo
 * global name :  nTECSInfo_sRawEntryDescriptorInfo
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES {
    struct tag_nTECSInfo_sRawEntryDescriptorInfo_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_nTECSInfo_sRawEntryDescriptorInfo_VMT {
    uint16_t       (*getNRawEntryDescriptorInfo__T)( const struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES *edp );
    ER             (*getRawDescriptor__T)( const struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES *edp, int_t subsc, void** rawDesc );
};

/* �����˥���ǥ�������ץ�(ưŪ�����) #_SDES_# */
#ifndef Descriptor_of_nTECSInfo_sRawEntryDescriptorInfo_Defined
#define  Descriptor_of_nTECSInfo_sRawEntryDescriptorInfo_Defined
typedef struct { struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES *vdes; } Descriptor( nTECSInfo_sRawEntryDescriptorInfo );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_NTECSINFO_SRAWENTRYDESCRIPTORINFO_GETNRAWENTRYDESCRIPTORINFO (1)
#define	FUNCID_NTECSINFO_SRAWENTRYDESCRIPTORINFO_GETRAWDESCRIPTOR (2)

#endif /* nTECSInfo_sRawEntryDescriptorInfo_TECSGEN_H */
