/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tTECSUnit_TECSGEN_H
#define tTECSUnit_TECSGEN_H

/*
 * celltype          :  tTECSUnit
 * global name       :  tTECSUnit
 * multi-domain      :  no
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  yes
 * has_INIB          :  yes
 * rom               :  yes
 * CB initializer    :  yes
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sTECSUnit_tecsgen.h"
#include "nTECSInfo_sTECSInfo_tecsgen.h"
#include "nTECSInfo_sNamespaceInfo_tecsgen.h"
#include "nTECSInfo_sRegionInfo_tecsgen.h"
#include "nTECSInfo_sCellInfo_tecsgen.h"
#include "nTECSInfo_sSignatureInfo_tecsgen.h"
#include "nTECSInfo_sCelltypeInfo_tecsgen.h"
#include "nTECSInfo_sVarDeclInfo_tecsgen.h"
#include "nTECSInfo_sTypeInfo_tecsgen.h"
#include "nTECSInfo_sRawEntryDescriptorInfo_tecsgen.h"
#include "nTECSInfo_sEntryInfo_tecsgen.h"
#include "siTask_tecsgen.h"
#include "sInitializeRoutineBody_tecsgen.h"
#include "sTerminateRoutineBody_tecsgen.h"
#include "siHandlerBody_tecsgen.h"
#include "sConfigInterrupt_tecsgen.h"
#include "sCyclic_tecsgen.h"
#include "sAlarm_tecsgen.h"
#include "siAlarm_tecsgen.h"
#include "sFixedSizeMemoryPool_tecsgen.h"
#include "sMessageBuffer_tecsgen.h"
#include "sMalloc_tecsgen.h"
#include "sUltrasonicSensor_tecsgen.h"
#include "sColorSensor_tecsgen.h"
#include "sTouchSensor_tecsgen.h"
#include "sGyroSensor_tecsgen.h"
#include "sMotor_tecsgen.h"
#include "sButton_tecsgen.h"
#include "sLCD_tecsgen.h"
#include "sLED_tecsgen.h"
#include "sBattery_tecsgen.h"
#include "sSpeaker_tecsgen.h"
#include "sRiteVM_tecsgen.h"
#include "sBalancer_tecsgen.h"
#include "sSharedMemory_tecsgen.h"
#include "sTarget1_tecsgen.h"
#include "sTarget2_tecsgen.h"
#include "sTarget3_tecsgen.h"
#include "nMruby_sInitializeBridge_tecsgen.h"
#include "nMruby_sInitializeTECSBridge_tecsgen.h"
#include "nMruby_sMrubyVM_tecsgen.h"
#include "nPosix_sMain_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tTECSUnit_INIB {
    /* call port #_TCP_# */
    struct tag_nTECSInfo_sNamespaceInfo_VDES *cNSInfo_init_;
    struct tag_nTECSInfo_sRegionInfo_VDES *cRegionInfo_init_;
    struct tag_nTECSInfo_sCellInfo_VDES *cCellInfo_init_;
    struct tag_nTECSInfo_sSignatureInfo_VDES *cSignatureInfo_init_;
    struct tag_nTECSInfo_sCelltypeInfo_VDES *cCelltypeInfo_init_;
    struct tag_nTECSInfo_sVarDeclInfo_VDES *cVarDeclInfo_init_;
    struct tag_nTECSInfo_sTypeInfo_VDES *cTypeInfo_init_;
    struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES *cREDInfo_init_;
    struct tag_nTECSInfo_sEntryInfo_VDES *cEntryInfo_init_;
    struct tag_siTask_VDES *ciTask_init_;
    struct tag_sInitializeRoutineBody_VDES *cInitializeRoutineBody_init_;
    struct tag_sTerminateRoutineBody_VDES *cTerminateRoutineBody_init_;
    struct tag_siHandlerBody_VDES *ciHandlerBody_init_;
    struct tag_sConfigInterrupt_VDES *cConfigInterrupt_init_;
    struct tag_sCyclic_VDES *cCyclic_init_;
    struct tag_sAlarm_VDES *cAlarm_init_;
    struct tag_siAlarm_VDES *ciAlarm_init_;
    struct tag_sFixedSizeMemoryPool_VDES *cFixedSizeMemoryPool_init_;
    struct tag_sMessageBuffer_VDES *cMessageBuffer_init_;
    struct tag_sMalloc_VDES *cMalloc_init_;
    struct tag_sUltrasonicSensor_VDES *cUltrasonicSensor_init_;
    struct tag_sColorSensor_VDES *cColorSensor_init_;
    struct tag_sTouchSensor_VDES *cTouchSensor_init_;
    struct tag_sGyroSensor_VDES *cGyroSensor_init_;
    struct tag_sMotor_VDES *cMotor_init_;
    struct tag_sButton_VDES *cButton_init_;
    struct tag_sLCD_VDES *cLCD_init_;
    struct tag_sLED_VDES *cLED_init_;
    struct tag_sBattery_VDES *cBattery_init_;
    struct tag_sSpeaker_VDES *cSpeaker_init_;
    struct tag_sRiteVM_VDES *cRiteVM_init_;
    struct tag_sBalancer_VDES *cBalancer_init_;
    struct tag_sSharedMemory_VDES *cSharedMemory_init_;
    struct tag_sTarget1_VDES *cTarget1_init_;
    struct tag_sTarget2_VDES *cTarget2_init_;
    struct tag_sTarget3_VDES *cTarget3_init_;
    struct tag_nMruby_sInitializeBridge_VDES *cInitializeBridge_init_;
    struct tag_nMruby_sInitializeTECSBridge_VDES *cInitializeTECSBridge_init_;
    struct tag_nMruby_sMrubyVM_VDES *cMrubyVM_init_;
    struct tag_nPosix_sMain_VDES *cMain_init_;
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    int16_t        LEN;
    char*          cell_entry;
}  tTECSUnit_INIB;
/* セル CB 型宣言 #_CCTPA_# */
typedef struct tag_tTECSUnit_CB {
    tTECSUnit_INIB  *_inib;
    /* call port #_TCP_# */
    struct tag_nTECSInfo_sNamespaceInfo_VDES *cNSInfo;
    struct tag_nTECSInfo_sRegionInfo_VDES *cRegionInfo;
    struct tag_nTECSInfo_sCellInfo_VDES *cCellInfo;
    struct tag_nTECSInfo_sSignatureInfo_VDES *cSignatureInfo;
    struct tag_nTECSInfo_sCelltypeInfo_VDES *cCelltypeInfo;
    struct tag_nTECSInfo_sVarDeclInfo_VDES *cVarDeclInfo;
    struct tag_nTECSInfo_sTypeInfo_VDES *cTypeInfo;
    struct tag_nTECSInfo_sRawEntryDescriptorInfo_VDES *cREDInfo;
    struct tag_nTECSInfo_sEntryInfo_VDES *cEntryInfo;
    struct tag_siTask_VDES *ciTask;
    struct tag_sInitializeRoutineBody_VDES *cInitializeRoutineBody;
    struct tag_sTerminateRoutineBody_VDES *cTerminateRoutineBody;
    struct tag_siHandlerBody_VDES *ciHandlerBody;
    struct tag_sConfigInterrupt_VDES *cConfigInterrupt;
    struct tag_sCyclic_VDES *cCyclic;
    struct tag_sAlarm_VDES *cAlarm;
    struct tag_siAlarm_VDES *ciAlarm;
    struct tag_sFixedSizeMemoryPool_VDES *cFixedSizeMemoryPool;
    struct tag_sMessageBuffer_VDES *cMessageBuffer;
    struct tag_sMalloc_VDES *cMalloc;
    struct tag_sUltrasonicSensor_VDES *cUltrasonicSensor;
    struct tag_sColorSensor_VDES *cColorSensor;
    struct tag_sTouchSensor_VDES *cTouchSensor;
    struct tag_sGyroSensor_VDES *cGyroSensor;
    struct tag_sMotor_VDES *cMotor;
    struct tag_sButton_VDES *cButton;
    struct tag_sLCD_VDES *cLCD;
    struct tag_sLED_VDES *cLED;
    struct tag_sBattery_VDES *cBattery;
    struct tag_sSpeaker_VDES *cSpeaker;
    struct tag_sRiteVM_VDES *cRiteVM;
    struct tag_sBalancer_VDES *cBalancer;
    struct tag_sSharedMemory_VDES *cSharedMemory;
    struct tag_sTarget1_VDES *cTarget1;
    struct tag_sTarget2_VDES *cTarget2;
    struct tag_sTarget3_VDES *cTarget3;
    struct tag_nMruby_sInitializeBridge_VDES *cInitializeBridge;
    struct tag_nMruby_sInitializeTECSBridge_VDES *cInitializeTECSBridge;
    struct tag_nMruby_sMrubyVM_VDES *cMrubyVM;
    struct tag_nPosix_sMain_VDES *cMain;
    /* call port #_NEP_# */ 
    /* var #_VA_# */ 
    int32_t        out_int[16][64];
    double64_t     out_double[16][32];
    char_t         out_char[16][256];
}  tTECSUnit_CB;
/* シングルトンセル CB プロトタイプ宣言 #_MCPB_# */
extern tTECSUnit_CB  tTECSUnit_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef struct tag_tTECSUnit_CB *tTECSUnit_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sTECSUnit */
void         tTECSUnit_eUnit_main(tTECSUnit_IDX idx, const char_t* cell_path, const char_t* entry_path, const char_t* signature_path, const char_t* function_path, const struct tecsunit_obj* arguments, const struct tecsunit_obj* exp_val);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tTECSUnit_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "nTECSInfo_tTECSInfo_tecsgen.h"
#ifdef  tTECSUnit_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tTECSUnit_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tTECSUnit_ID_BASE           (1)  /* ID のベース  #_NIDB_# */
#define tTECSUnit_N_CELL            (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tTECSUnit_VALID_IDX(IDX) (1)

/* optional 呼び口をテストするマクロ #_TOCP_# */
#define tTECSUnit_is_cNSInfo_joined(p_that) \
	  ((p_that)->cNSInfo!=0)
#define tTECSUnit_is_cRegionInfo_joined(p_that) \
	  ((p_that)->cRegionInfo!=0)
#define tTECSUnit_is_cCellInfo_joined(p_that) \
	  ((p_that)->cCellInfo!=0)
#define tTECSUnit_is_cSignatureInfo_joined(p_that) \
	  ((p_that)->cSignatureInfo!=0)
#define tTECSUnit_is_cCelltypeInfo_joined(p_that) \
	  ((p_that)->cCelltypeInfo!=0)
#define tTECSUnit_is_cVarDeclInfo_joined(p_that) \
	  ((p_that)->cVarDeclInfo!=0)
#define tTECSUnit_is_cTypeInfo_joined(p_that) \
	  ((p_that)->cTypeInfo!=0)
#define tTECSUnit_is_cREDInfo_joined(p_that) \
	  ((p_that)->cREDInfo!=0)
#define tTECSUnit_is_cEntryInfo_joined(p_that) \
	  ((p_that)->cEntryInfo!=0)
#define tTECSUnit_is_ciTask_joined(p_that) \
	  ((p_that)->ciTask!=0)
#define tTECSUnit_is_cInitializeRoutineBody_joined(p_that) \
	  ((p_that)->cInitializeRoutineBody!=0)
#define tTECSUnit_is_cTerminateRoutineBody_joined(p_that) \
	  ((p_that)->cTerminateRoutineBody!=0)
#define tTECSUnit_is_ciHandlerBody_joined(p_that) \
	  ((p_that)->ciHandlerBody!=0)
#define tTECSUnit_is_cConfigInterrupt_joined(p_that) \
	  ((p_that)->cConfigInterrupt!=0)
#define tTECSUnit_is_cCyclic_joined(p_that) \
	  ((p_that)->cCyclic!=0)
#define tTECSUnit_is_cAlarm_joined(p_that) \
	  ((p_that)->cAlarm!=0)
#define tTECSUnit_is_ciAlarm_joined(p_that) \
	  ((p_that)->ciAlarm!=0)
#define tTECSUnit_is_cFixedSizeMemoryPool_joined(p_that) \
	  ((p_that)->cFixedSizeMemoryPool!=0)
#define tTECSUnit_is_cMessageBuffer_joined(p_that) \
	  ((p_that)->cMessageBuffer!=0)
#define tTECSUnit_is_cMalloc_joined(p_that) \
	  ((p_that)->cMalloc!=0)
#define tTECSUnit_is_cUltrasonicSensor_joined(p_that) \
	  ((p_that)->cUltrasonicSensor!=0)
#define tTECSUnit_is_cColorSensor_joined(p_that) \
	  ((p_that)->cColorSensor!=0)
#define tTECSUnit_is_cTouchSensor_joined(p_that) \
	  ((p_that)->cTouchSensor!=0)
#define tTECSUnit_is_cGyroSensor_joined(p_that) \
	  ((p_that)->cGyroSensor!=0)
#define tTECSUnit_is_cMotor_joined(p_that) \
	  ((p_that)->cMotor!=0)
#define tTECSUnit_is_cButton_joined(p_that) \
	  ((p_that)->cButton!=0)
#define tTECSUnit_is_cLCD_joined(p_that) \
	  ((p_that)->cLCD!=0)
#define tTECSUnit_is_cLED_joined(p_that) \
	  ((p_that)->cLED!=0)
#define tTECSUnit_is_cBattery_joined(p_that) \
	  ((p_that)->cBattery!=0)
#define tTECSUnit_is_cSpeaker_joined(p_that) \
	  ((p_that)->cSpeaker!=0)
#define tTECSUnit_is_cRiteVM_joined(p_that) \
	  ((p_that)->cRiteVM!=0)
#define tTECSUnit_is_cBalancer_joined(p_that) \
	  ((p_that)->cBalancer!=0)
#define tTECSUnit_is_cSharedMemory_joined(p_that) \
	  ((p_that)->cSharedMemory!=0)
#define tTECSUnit_is_cTarget1_joined(p_that) \
	  ((p_that)->cTarget1!=0)
#define tTECSUnit_is_cTarget2_joined(p_that) \
	  ((p_that)->cTarget2!=0)
#define tTECSUnit_is_cTarget3_joined(p_that) \
	  ((p_that)->cTarget3!=0)
#define tTECSUnit_is_cInitializeBridge_joined(p_that) \
	  ((p_that)->cInitializeBridge!=0)
#define tTECSUnit_is_cInitializeTECSBridge_joined(p_that) \
	  ((p_that)->cInitializeTECSBridge!=0)
#define tTECSUnit_is_cMrubyVM_joined(p_that) \
	  ((p_that)->cMrubyVM!=0)
#define tTECSUnit_is_cMain_joined(p_that) \
	  ((p_that)->cMain!=0)

/* セルCBを得るマクロ #_GCB_# */
#define tTECSUnit_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tTECSUnit_ATTR_LEN( p_that )	((p_that)->_inib->LEN)

#define tTECSUnit_GET_LEN(p_that)	((p_that)->_inib->LEN)


/* var アクセスマクロ #_VAM_# */
#define tTECSUnit_VAR_out_int(p_that)	((p_that)->out_int)
#define tTECSUnit_VAR_out_double(p_that)	((p_that)->out_double)
#define tTECSUnit_VAR_out_char(p_that)	((p_that)->out_char)
#define tTECSUnit_VAR_cell_entry(p_that)	((p_that)->_inib->cell_entry)

#define tTECSUnit_GET_out_int(p_that)	((p_that)->out_int)
#define tTECSUnit_SET_out_int(p_that,val)	((p_that)->out_int=(val))
#define tTECSUnit_GET_out_double(p_that)	((p_that)->out_double)
#define tTECSUnit_SET_out_double(p_that,val)	((p_that)->out_double=(val))
#define tTECSUnit_GET_out_char(p_that)	((p_that)->out_char)
#define tTECSUnit_SET_out_char(p_that,val)	((p_that)->out_char=(val))
#define tTECSUnit_GET_cell_entry(p_that)	((p_that)->cell_entry)
#define tTECSUnit_SET_cell_entry(p_that,val)	((p_that)->cell_entry=(val))

#ifndef TECSFLOW
 /* 呼び口関数マクロ #_CPM_# */
#define tTECSUnit_cTECSInfo_findNamespace( p_that, namespace_path, nsDesc ) \
	  nTECSInfo_tTECSInfo_eTECSInfo_findNamespace( \
	    (namespace_path), (nsDesc) )
#define tTECSUnit_cTECSInfo_findRegion( p_that, namespace_path, regionDesc ) \
	  nTECSInfo_tTECSInfo_eTECSInfo_findRegion( \
	    (namespace_path), (regionDesc) )
#define tTECSUnit_cTECSInfo_findSignature( p_that, namespace_path, signatureDesc ) \
	  nTECSInfo_tTECSInfo_eTECSInfo_findSignature( \
	    (namespace_path), (signatureDesc) )
#define tTECSUnit_cTECSInfo_findCelltype( p_that, namespace_path, celltypeDesc ) \
	  nTECSInfo_tTECSInfo_eTECSInfo_findCelltype( \
	    (namespace_path), (celltypeDesc) )
#define tTECSUnit_cTECSInfo_findCell( p_that, namespace_path, cellDesc ) \
	  nTECSInfo_tTECSInfo_eTECSInfo_findCell( \
	    (namespace_path), (cellDesc) )
#define tTECSUnit_cTECSInfo_findRawEntryDescriptor( p_that, namespace_path, rawEntryDescDesc, entryDesc ) \
	  nTECSInfo_tTECSInfo_eTECSInfo_findRawEntryDescriptor( \
	    (namespace_path), (rawEntryDescDesc), (entryDesc) )
#define tTECSUnit_cTECSInfo_findRawEntryDescriptor_unsafe( p_that, namespace_path, subsc, rawDesc ) \
	  nTECSInfo_tTECSInfo_eTECSInfo_findRawEntryDescriptor_unsafe( \
	    (namespace_path), (subsc), (rawDesc) )
#define tTECSUnit_cNSInfo_getName( p_that, name, max_len ) \
	  (p_that)->cNSInfo->VMT->getName__T( \
	   (p_that)->cNSInfo, (name), (max_len) )
#define tTECSUnit_cNSInfo_getNameLength( p_that ) \
	  (p_that)->cNSInfo->VMT->getNameLength__T( \
	   (p_that)->cNSInfo )
#define tTECSUnit_cNSInfo_getNNamespace( p_that ) \
	  (p_that)->cNSInfo->VMT->getNNamespace__T( \
	   (p_that)->cNSInfo )
#define tTECSUnit_cNSInfo_getNamespaceInfo( p_that, ith, des ) \
	  (p_that)->cNSInfo->VMT->getNamespaceInfo__T( \
	   (p_that)->cNSInfo, (ith), (des) )
#define tTECSUnit_cNSInfo_getNSignature( p_that ) \
	  (p_that)->cNSInfo->VMT->getNSignature__T( \
	   (p_that)->cNSInfo )
#define tTECSUnit_cNSInfo_getSignatureInfo( p_that, ith, des ) \
	  (p_that)->cNSInfo->VMT->getSignatureInfo__T( \
	   (p_that)->cNSInfo, (ith), (des) )
#define tTECSUnit_cNSInfo_getNCelltype( p_that ) \
	  (p_that)->cNSInfo->VMT->getNCelltype__T( \
	   (p_that)->cNSInfo )
#define tTECSUnit_cNSInfo_getCelltypeInfo( p_that, ith, des ) \
	  (p_that)->cNSInfo->VMT->getCelltypeInfo__T( \
	   (p_that)->cNSInfo, (ith), (des) )
#define tTECSUnit_cRegionInfo_getName( p_that, name, max_len ) \
	  (p_that)->cRegionInfo->VMT->getName__T( \
	   (p_that)->cRegionInfo, (name), (max_len) )
#define tTECSUnit_cRegionInfo_getNameLength( p_that ) \
	  (p_that)->cRegionInfo->VMT->getNameLength__T( \
	   (p_that)->cRegionInfo )
#define tTECSUnit_cRegionInfo_getNCell( p_that ) \
	  (p_that)->cRegionInfo->VMT->getNCell__T( \
	   (p_that)->cRegionInfo )
#define tTECSUnit_cRegionInfo_getCellInfo( p_that, ith, des ) \
	  (p_that)->cRegionInfo->VMT->getCellInfo__T( \
	   (p_that)->cRegionInfo, (ith), (des) )
#define tTECSUnit_cRegionInfo_getNRegion( p_that ) \
	  (p_that)->cRegionInfo->VMT->getNRegion__T( \
	   (p_that)->cRegionInfo )
#define tTECSUnit_cRegionInfo_getRegionInfo( p_that, ith, des ) \
	  (p_that)->cRegionInfo->VMT->getRegionInfo__T( \
	   (p_that)->cRegionInfo, (ith), (des) )
#define tTECSUnit_cCellInfo_getName( p_that, name, max_len ) \
	  (p_that)->cCellInfo->VMT->getName__T( \
	   (p_that)->cCellInfo, (name), (max_len) )
#define tTECSUnit_cCellInfo_getNameLength( p_that ) \
	  (p_that)->cCellInfo->VMT->getNameLength__T( \
	   (p_that)->cCellInfo )
#define tTECSUnit_cCellInfo_getNRawEntryDescriptorInfo( p_that ) \
	  (p_that)->cCellInfo->VMT->getNRawEntryDescriptorInfo__T( \
	   (p_that)->cCellInfo )
#define tTECSUnit_cCellInfo_getRawEntryDescriptorInfo( p_that, index, desc ) \
	  (p_that)->cCellInfo->VMT->getRawEntryDescriptorInfo__T( \
	   (p_that)->cCellInfo, (index), (desc) )
#define tTECSUnit_cCellInfo_getCelltypeInfo( p_that, desc ) \
	  (p_that)->cCellInfo->VMT->getCelltypeInfo__T( \
	   (p_that)->cCellInfo, (desc) )
#define tTECSUnit_cCellInfo_getCBP( p_that, cbp ) \
	  (p_that)->cCellInfo->VMT->getCBP__T( \
	   (p_that)->cCellInfo, (cbp) )
#define tTECSUnit_cCellInfo_getINIBP( p_that, inibp ) \
	  (p_that)->cCellInfo->VMT->getINIBP__T( \
	   (p_that)->cCellInfo, (inibp) )
#define tTECSUnit_cSignatureInfo_getName( p_that, name, max_len ) \
	  (p_that)->cSignatureInfo->VMT->getName__T( \
	   (p_that)->cSignatureInfo, (name), (max_len) )
#define tTECSUnit_cSignatureInfo_getNameLength( p_that ) \
	  (p_that)->cSignatureInfo->VMT->getNameLength__T( \
	   (p_that)->cSignatureInfo )
#define tTECSUnit_cSignatureInfo_getNFunction( p_that ) \
	  (p_that)->cSignatureInfo->VMT->getNFunction__T( \
	   (p_that)->cSignatureInfo )
#define tTECSUnit_cSignatureInfo_getFunctionInfo( p_that, ith, desc ) \
	  (p_that)->cSignatureInfo->VMT->getFunctionInfo__T( \
	   (p_that)->cSignatureInfo, (ith), (desc) )
#define tTECSUnit_cCelltypeInfo_getName( p_that, name, max_len ) \
	  (p_that)->cCelltypeInfo->VMT->getName__T( \
	   (p_that)->cCelltypeInfo, (name), (max_len) )
#define tTECSUnit_cCelltypeInfo_getNameLength( p_that ) \
	  (p_that)->cCelltypeInfo->VMT->getNameLength__T( \
	   (p_that)->cCelltypeInfo )
#define tTECSUnit_cCelltypeInfo_getNAttr( p_that ) \
	  (p_that)->cCelltypeInfo->VMT->getNAttr__T( \
	   (p_that)->cCelltypeInfo )
#define tTECSUnit_cCelltypeInfo_getAttrInfo( p_that, ith, desc ) \
	  (p_that)->cCelltypeInfo->VMT->getAttrInfo__T( \
	   (p_that)->cCelltypeInfo, (ith), (desc) )
#define tTECSUnit_cCelltypeInfo_getNVar( p_that ) \
	  (p_that)->cCelltypeInfo->VMT->getNVar__T( \
	   (p_that)->cCelltypeInfo )
#define tTECSUnit_cCelltypeInfo_getVarInfo( p_that, ith, desc ) \
	  (p_that)->cCelltypeInfo->VMT->getVarInfo__T( \
	   (p_that)->cCelltypeInfo, (ith), (desc) )
#define tTECSUnit_cCelltypeInfo_getNCall( p_that ) \
	  (p_that)->cCelltypeInfo->VMT->getNCall__T( \
	   (p_that)->cCelltypeInfo )
#define tTECSUnit_cCelltypeInfo_getCallInfo( p_that, ith, desc ) \
	  (p_that)->cCelltypeInfo->VMT->getCallInfo__T( \
	   (p_that)->cCelltypeInfo, (ith), (desc) )
#define tTECSUnit_cCelltypeInfo_getNEntry( p_that ) \
	  (p_that)->cCelltypeInfo->VMT->getNEntry__T( \
	   (p_that)->cCelltypeInfo )
#define tTECSUnit_cCelltypeInfo_getEntryInfo( p_that, ith, desc ) \
	  (p_that)->cCelltypeInfo->VMT->getEntryInfo__T( \
	   (p_that)->cCelltypeInfo, (ith), (desc) )
#define tTECSUnit_cCelltypeInfo_isSingleton( p_that ) \
	  (p_that)->cCelltypeInfo->VMT->isSingleton__T( \
	   (p_that)->cCelltypeInfo )
#define tTECSUnit_cCelltypeInfo_isIDX_is_ID( p_that ) \
	  (p_that)->cCelltypeInfo->VMT->isIDX_is_ID__T( \
	   (p_that)->cCelltypeInfo )
#define tTECSUnit_cCelltypeInfo_sizeOfCB( p_that ) \
	  (p_that)->cCelltypeInfo->VMT->sizeOfCB__T( \
	   (p_that)->cCelltypeInfo )
#define tTECSUnit_cCelltypeInfo_sizeOfINIB( p_that ) \
	  (p_that)->cCelltypeInfo->VMT->sizeOfINIB__T( \
	   (p_that)->cCelltypeInfo )
#define tTECSUnit_cVarDeclInfo_getName( p_that, name, max_len ) \
	  (p_that)->cVarDeclInfo->VMT->getName__T( \
	   (p_that)->cVarDeclInfo, (name), (max_len) )
#define tTECSUnit_cVarDeclInfo_getNameLength( p_that ) \
	  (p_that)->cVarDeclInfo->VMT->getNameLength__T( \
	   (p_that)->cVarDeclInfo )
#define tTECSUnit_cVarDeclInfo_getLocationInfo( p_that, offset, place ) \
	  (p_that)->cVarDeclInfo->VMT->getLocationInfo__T( \
	   (p_that)->cVarDeclInfo, (offset), (place) )
#define tTECSUnit_cVarDeclInfo_getTypeInfo( p_that, desc ) \
	  (p_that)->cVarDeclInfo->VMT->getTypeInfo__T( \
	   (p_that)->cVarDeclInfo, (desc) )
#define tTECSUnit_cVarDeclInfo_getSizeIsExpr( p_that, expr_str, max_len ) \
	  (p_that)->cVarDeclInfo->VMT->getSizeIsExpr__T( \
	   (p_that)->cVarDeclInfo, (expr_str), (max_len) )
#define tTECSUnit_cVarDeclInfo_getSizeIs( p_that, size, p_cb ) \
	  (p_that)->cVarDeclInfo->VMT->getSizeIs__T( \
	   (p_that)->cVarDeclInfo, (size), (p_cb) )
#define tTECSUnit_cTypeInfo_getName( p_that, name, max_len ) \
	  (p_that)->cTypeInfo->VMT->getName__T( \
	   (p_that)->cTypeInfo, (name), (max_len) )
#define tTECSUnit_cTypeInfo_getNameLength( p_that ) \
	  (p_that)->cTypeInfo->VMT->getNameLength__T( \
	   (p_that)->cTypeInfo )
#define tTECSUnit_cTypeInfo_getSize( p_that ) \
	  (p_that)->cTypeInfo->VMT->getSize__T( \
	   (p_that)->cTypeInfo )
#define tTECSUnit_cTypeInfo_getKind( p_that ) \
	  (p_that)->cTypeInfo->VMT->getKind__T( \
	   (p_that)->cTypeInfo )
#define tTECSUnit_cTypeInfo_getNType( p_that ) \
	  (p_that)->cTypeInfo->VMT->getNType__T( \
	   (p_that)->cTypeInfo )
#define tTECSUnit_cTypeInfo_getTypeInfo( p_that, desc ) \
	  (p_that)->cTypeInfo->VMT->getTypeInfo__T( \
	   (p_that)->cTypeInfo, (desc) )
#define tTECSUnit_cTypeInfo_getNMember( p_that ) \
	  (p_that)->cTypeInfo->VMT->getNMember__T( \
	   (p_that)->cTypeInfo )
#define tTECSUnit_cTypeInfo_getMemberInfo( p_that, ith, desc ) \
	  (p_that)->cTypeInfo->VMT->getMemberInfo__T( \
	   (p_that)->cTypeInfo, (ith), (desc) )
#define tTECSUnit_cREDInfo_getNRawEntryDescriptorInfo( p_that ) \
	  (p_that)->cREDInfo->VMT->getNRawEntryDescriptorInfo__T( \
	   (p_that)->cREDInfo )
#define tTECSUnit_cREDInfo_getRawDescriptor( p_that, subsc, rawDesc ) \
	  (p_that)->cREDInfo->VMT->getRawDescriptor__T( \
	   (p_that)->cREDInfo, (subsc), (rawDesc) )
#define tTECSUnit_cEntryInfo_getName( p_that, name, max_len ) \
	  (p_that)->cEntryInfo->VMT->getName__T( \
	   (p_that)->cEntryInfo, (name), (max_len) )
#define tTECSUnit_cEntryInfo_getNameLength( p_that ) \
	  (p_that)->cEntryInfo->VMT->getNameLength__T( \
	   (p_that)->cEntryInfo )
#define tTECSUnit_cEntryInfo_getSignatureInfo( p_that, desc ) \
	  (p_that)->cEntryInfo->VMT->getSignatureInfo__T( \
	   (p_that)->cEntryInfo, (desc) )
#define tTECSUnit_cEntryInfo_getArraySize( p_that ) \
	  (p_that)->cEntryInfo->VMT->getArraySize__T( \
	   (p_that)->cEntryInfo )
#define tTECSUnit_cEntryInfo_isInline( p_that ) \
	  (p_that)->cEntryInfo->VMT->isInline__T( \
	   (p_that)->cEntryInfo )
#define tTECSUnit_ciTask_activate( p_that ) \
	  (p_that)->ciTask->VMT->activate__T( \
	   (p_that)->ciTask )
#define tTECSUnit_ciTask_wakeup( p_that ) \
	  (p_that)->ciTask->VMT->wakeup__T( \
	   (p_that)->ciTask )
#define tTECSUnit_ciTask_releaseWait( p_that ) \
	  (p_that)->ciTask->VMT->releaseWait__T( \
	   (p_that)->ciTask )
#define tTECSUnit_ciTask_raiseException( p_that, pattern ) \
	  (p_that)->ciTask->VMT->raiseException__T( \
	   (p_that)->ciTask, (pattern) )
#define tTECSUnit_ciTask_disableWait( p_that ) \
	  (p_that)->ciTask->VMT->disableWait__T( \
	   (p_that)->ciTask )
#define tTECSUnit_ciTask_enableWait( p_that ) \
	  (p_that)->ciTask->VMT->enableWait__T( \
	   (p_that)->ciTask )
#define tTECSUnit_ciTask_startOverRunHandler( p_that, ovrtim ) \
	  (p_that)->ciTask->VMT->startOverRunHandler__T( \
	   (p_that)->ciTask, (ovrtim) )
#define tTECSUnit_ciTask_stopOverRunHandler( p_that ) \
	  (p_that)->ciTask->VMT->stopOverRunHandler__T( \
	   (p_that)->ciTask )
#define tTECSUnit_cInitializeRoutineBody_main( p_that ) \
	  (p_that)->cInitializeRoutineBody->VMT->main__T( \
	   (p_that)->cInitializeRoutineBody )
#define tTECSUnit_cTerminateRoutineBody_main( p_that ) \
	  (p_that)->cTerminateRoutineBody->VMT->main__T( \
	   (p_that)->cTerminateRoutineBody )
#define tTECSUnit_ciHandlerBody_main( p_that ) \
	  (p_that)->ciHandlerBody->VMT->main__T( \
	   (p_that)->ciHandlerBody )
#define tTECSUnit_cConfigInterrupt_disable( p_that ) \
	  (p_that)->cConfigInterrupt->VMT->disable__T( \
	   (p_that)->cConfigInterrupt )
#define tTECSUnit_cConfigInterrupt_enable( p_that ) \
	  (p_that)->cConfigInterrupt->VMT->enable__T( \
	   (p_that)->cConfigInterrupt )
#define tTECSUnit_cCyclic_start( p_that ) \
	  (p_that)->cCyclic->VMT->start__T( \
	   (p_that)->cCyclic )
#define tTECSUnit_cCyclic_stop( p_that ) \
	  (p_that)->cCyclic->VMT->stop__T( \
	   (p_that)->cCyclic )
#define tTECSUnit_cCyclic_refer( p_that, pk_cyclicHandlerStatus ) \
	  (p_that)->cCyclic->VMT->refer__T( \
	   (p_that)->cCyclic, (pk_cyclicHandlerStatus) )
#define tTECSUnit_cAlarm_start( p_that, alarmTime ) \
	  (p_that)->cAlarm->VMT->start__T( \
	   (p_that)->cAlarm, (alarmTime) )
#define tTECSUnit_cAlarm_stop( p_that ) \
	  (p_that)->cAlarm->VMT->stop__T( \
	   (p_that)->cAlarm )
#define tTECSUnit_cAlarm_refer( p_that, pk_alarmStatus ) \
	  (p_that)->cAlarm->VMT->refer__T( \
	   (p_that)->cAlarm, (pk_alarmStatus) )
#define tTECSUnit_ciAlarm_start( p_that, alarmTime ) \
	  (p_that)->ciAlarm->VMT->start__T( \
	   (p_that)->ciAlarm, (alarmTime) )
#define tTECSUnit_ciAlarm_stop( p_that ) \
	  (p_that)->ciAlarm->VMT->stop__T( \
	   (p_that)->ciAlarm )
#define tTECSUnit_cFixedSizeMemoryPool_get( p_that, p_block ) \
	  (p_that)->cFixedSizeMemoryPool->VMT->get__T( \
	   (p_that)->cFixedSizeMemoryPool, (p_block) )
#define tTECSUnit_cFixedSizeMemoryPool_getPolling( p_that, p_block ) \
	  (p_that)->cFixedSizeMemoryPool->VMT->getPolling__T( \
	   (p_that)->cFixedSizeMemoryPool, (p_block) )
#define tTECSUnit_cFixedSizeMemoryPool_getTimeout( p_that, p_block, timeout ) \
	  (p_that)->cFixedSizeMemoryPool->VMT->getTimeout__T( \
	   (p_that)->cFixedSizeMemoryPool, (p_block), (timeout) )
#define tTECSUnit_cFixedSizeMemoryPool_release( p_that, block ) \
	  (p_that)->cFixedSizeMemoryPool->VMT->release__T( \
	   (p_that)->cFixedSizeMemoryPool, (block) )
#define tTECSUnit_cFixedSizeMemoryPool_initialize( p_that ) \
	  (p_that)->cFixedSizeMemoryPool->VMT->initialize__T( \
	   (p_that)->cFixedSizeMemoryPool )
#define tTECSUnit_cFixedSizeMemoryPool_refer( p_that, pk_memoryPoolFixedSizeStatus ) \
	  (p_that)->cFixedSizeMemoryPool->VMT->refer__T( \
	   (p_that)->cFixedSizeMemoryPool, (pk_memoryPoolFixedSizeStatus) )
#define tTECSUnit_cMessageBuffer_send( p_that, message, size ) \
	  (p_that)->cMessageBuffer->VMT->send__T( \
	   (p_that)->cMessageBuffer, (message), (size) )
#define tTECSUnit_cMessageBuffer_sendPolling( p_that, message, size ) \
	  (p_that)->cMessageBuffer->VMT->sendPolling__T( \
	   (p_that)->cMessageBuffer, (message), (size) )
#define tTECSUnit_cMessageBuffer_sendTimeout( p_that, message, size, timeout ) \
	  (p_that)->cMessageBuffer->VMT->sendTimeout__T( \
	   (p_that)->cMessageBuffer, (message), (size), (timeout) )
#define tTECSUnit_cMessageBuffer_receive( p_that, message ) \
	  (p_that)->cMessageBuffer->VMT->receive__T( \
	   (p_that)->cMessageBuffer, (message) )
#define tTECSUnit_cMessageBuffer_receivePolling( p_that, message ) \
	  (p_that)->cMessageBuffer->VMT->receivePolling__T( \
	   (p_that)->cMessageBuffer, (message) )
#define tTECSUnit_cMessageBuffer_receiveTimeout( p_that, message, timeout ) \
	  (p_that)->cMessageBuffer->VMT->receiveTimeout__T( \
	   (p_that)->cMessageBuffer, (message), (timeout) )
#define tTECSUnit_cMessageBuffer_initialize( p_that ) \
	  (p_that)->cMessageBuffer->VMT->initialize__T( \
	   (p_that)->cMessageBuffer )
#define tTECSUnit_cMessageBuffer_refer( p_that, packet ) \
	  (p_that)->cMessageBuffer->VMT->refer__T( \
	   (p_that)->cMessageBuffer, (packet) )
#define tTECSUnit_cMalloc_initializeMemoryPool( p_that ) \
	  (p_that)->cMalloc->VMT->initializeMemoryPool__T( \
	   (p_that)->cMalloc )
#define tTECSUnit_cMalloc_calloc( p_that, nelem, elem_size ) \
	  (p_that)->cMalloc->VMT->calloc__T( \
	   (p_that)->cMalloc, (nelem), (elem_size) )
#define tTECSUnit_cMalloc_malloc( p_that, size ) \
	  (p_that)->cMalloc->VMT->malloc__T( \
	   (p_that)->cMalloc, (size) )
#define tTECSUnit_cMalloc_realloc( p_that, ptr, new_size ) \
	  (p_that)->cMalloc->VMT->realloc__T( \
	   (p_that)->cMalloc, (ptr), (new_size) )
#define tTECSUnit_cMalloc_free( p_that, ptr ) \
	  (p_that)->cMalloc->VMT->free__T( \
	   (p_that)->cMalloc, (ptr) )
#define tTECSUnit_cUltrasonicSensor_getDistance( p_that ) \
	  (p_that)->cUltrasonicSensor->VMT->getDistance__T( \
	   (p_that)->cUltrasonicSensor )
#define tTECSUnit_cUltrasonicSensor_listen( p_that ) \
	  (p_that)->cUltrasonicSensor->VMT->listen__T( \
	   (p_that)->cUltrasonicSensor )
#define tTECSUnit_cUltrasonicSensor_initializePort( p_that ) \
	  (p_that)->cUltrasonicSensor->VMT->initializePort__T( \
	   (p_that)->cUltrasonicSensor )
#define tTECSUnit_cColorSensor_getColor( p_that ) \
	  (p_that)->cColorSensor->VMT->getColor__T( \
	   (p_that)->cColorSensor )
#define tTECSUnit_cColorSensor_getReflect( p_that ) \
	  (p_that)->cColorSensor->VMT->getReflect__T( \
	   (p_that)->cColorSensor )
#define tTECSUnit_cColorSensor_getAmbient( p_that ) \
	  (p_that)->cColorSensor->VMT->getAmbient__T( \
	   (p_that)->cColorSensor )
#define tTECSUnit_cColorSensor_initializePort( p_that ) \
	  (p_that)->cColorSensor->VMT->initializePort__T( \
	   (p_that)->cColorSensor )
#define tTECSUnit_cColorSensor_getRGBRaw( p_that, r, g, b ) \
	  (p_that)->cColorSensor->VMT->getRGBRaw__T( \
	   (p_that)->cColorSensor, (r), (g), (b) )
#define tTECSUnit_cTouchSensor_isPressed( p_that ) \
	  (p_that)->cTouchSensor->VMT->isPressed__T( \
	   (p_that)->cTouchSensor )
#define tTECSUnit_cTouchSensor_initializePort( p_that ) \
	  (p_that)->cTouchSensor->VMT->initializePort__T( \
	   (p_that)->cTouchSensor )
#define tTECSUnit_cGyroSensor_getAngle( p_that ) \
	  (p_that)->cGyroSensor->VMT->getAngle__T( \
	   (p_that)->cGyroSensor )
#define tTECSUnit_cGyroSensor_getRate( p_that ) \
	  (p_that)->cGyroSensor->VMT->getRate__T( \
	   (p_that)->cGyroSensor )
#define tTECSUnit_cGyroSensor_reset( p_that ) \
	  (p_that)->cGyroSensor->VMT->reset__T( \
	   (p_that)->cGyroSensor )
#define tTECSUnit_cGyroSensor_calibrate( p_that, times ) \
	  (p_that)->cGyroSensor->VMT->calibrate__T( \
	   (p_that)->cGyroSensor, (times) )
#define tTECSUnit_cGyroSensor_initializePort( p_that ) \
	  (p_that)->cGyroSensor->VMT->initializePort__T( \
	   (p_that)->cGyroSensor )
#define tTECSUnit_cMotor_getType( p_that ) \
	  (p_that)->cMotor->VMT->getType__T( \
	   (p_that)->cMotor )
#define tTECSUnit_cMotor_getCounts( p_that ) \
	  (p_that)->cMotor->VMT->getCounts__T( \
	   (p_that)->cMotor )
#define tTECSUnit_cMotor_getPower( p_that ) \
	  (p_that)->cMotor->VMT->getPower__T( \
	   (p_that)->cMotor )
#define tTECSUnit_cMotor_resetCounts( p_that ) \
	  (p_that)->cMotor->VMT->resetCounts__T( \
	   (p_that)->cMotor )
#define tTECSUnit_cMotor_setPower( p_that, power ) \
	  (p_that)->cMotor->VMT->setPower__T( \
	   (p_that)->cMotor, (power) )
#define tTECSUnit_cMotor_stop( p_that, brake ) \
	  (p_that)->cMotor->VMT->stop__T( \
	   (p_that)->cMotor, (brake) )
#define tTECSUnit_cMotor_rotate( p_that, degrees, speed_abs, blocking ) \
	  (p_that)->cMotor->VMT->rotate__T( \
	   (p_that)->cMotor, (degrees), (speed_abs), (blocking) )
#define tTECSUnit_cMotor_initializePort( p_that, type ) \
	  (p_that)->cMotor->VMT->initializePort__T( \
	   (p_that)->cMotor, (type) )
#define tTECSUnit_cButton_isPressed( p_that, button ) \
	  (p_that)->cButton->VMT->isPressed__T( \
	   (p_that)->cButton, (button) )
#define tTECSUnit_cLCD_setFont( p_that, font ) \
	  (p_that)->cLCD->VMT->setFont__T( \
	   (p_that)->cLCD, (font) )
#define tTECSUnit_cLCD_getFontSize( p_that, font, p_width, p_height ) \
	  (p_that)->cLCD->VMT->getFontSize__T( \
	   (p_that)->cLCD, (font), (p_width), (p_height) )
#define tTECSUnit_cLCD_drawString( p_that, str, x, y ) \
	  (p_that)->cLCD->VMT->drawString__T( \
	   (p_that)->cLCD, (str), (x), (y) )
#define tTECSUnit_cLCD_fillRect( p_that, x, y, w, h, color ) \
	  (p_that)->cLCD->VMT->fillRect__T( \
	   (p_that)->cLCD, (x), (y), (w), (h), (color) )
#define tTECSUnit_cLCD_drawLine( p_that, x0, y0, x1, y1 ) \
	  (p_that)->cLCD->VMT->drawLine__T( \
	   (p_that)->cLCD, (x0), (y0), (x1), (y1) )
#define tTECSUnit_cLCD_print( p_that, str ) \
	  (p_that)->cLCD->VMT->print__T( \
	   (p_that)->cLCD, (str) )
#define tTECSUnit_cLCD_puts( p_that, str ) \
	  (p_that)->cLCD->VMT->puts__T( \
	   (p_that)->cLCD, (str) )
#define tTECSUnit_cLCD_clear( p_that ) \
	  (p_that)->cLCD->VMT->clear__T( \
	   (p_that)->cLCD )
#define tTECSUnit_cLCD_showMessageBox( p_that, title, msg ) \
	  (p_that)->cLCD->VMT->showMessageBox__T( \
	   (p_that)->cLCD, (title), (msg) )
#define tTECSUnit_cLED_setColor( p_that, color ) \
	  (p_that)->cLED->VMT->setColor__T( \
	   (p_that)->cLED, (color) )
#define tTECSUnit_cLED_off( p_that ) \
	  (p_that)->cLED->VMT->off__T( \
	   (p_that)->cLED )
#define tTECSUnit_cBattery_current_mA( p_that ) \
	  (p_that)->cBattery->VMT->current_mA__T( \
	   (p_that)->cBattery )
#define tTECSUnit_cBattery_voltage_mV( p_that ) \
	  (p_that)->cBattery->VMT->voltage_mV__T( \
	   (p_that)->cBattery )
#define tTECSUnit_cSpeaker_setVolume( p_that, volume ) \
	  (p_that)->cSpeaker->VMT->setVolume__T( \
	   (p_that)->cSpeaker, (volume) )
#define tTECSUnit_cSpeaker_playTone( p_that, frequency, duration ) \
	  (p_that)->cSpeaker->VMT->playTone__T( \
	   (p_that)->cSpeaker, (frequency), (duration) )
#define tTECSUnit_cSpeaker_stop( p_that ) \
	  (p_that)->cSpeaker->VMT->stop__T( \
	   (p_that)->cSpeaker )
#define tTECSUnit_cRiteVM_reset( p_that ) \
	  (p_that)->cRiteVM->VMT->reset__T( \
	   (p_that)->cRiteVM )
#define tTECSUnit_cBalancer_control( p_that, forward, turn, gyro, gyroOffset, leftRevolution, rightRevolution, battery, pwm_l, pwm_r, backlashhalf ) \
	  (p_that)->cBalancer->VMT->control__T( \
	   (p_that)->cBalancer, (forward), (turn), (gyro), (gyroOffset), (leftRevolution), (rightRevolution), (battery), (pwm_l), (pwm_r), (backlashhalf) )
#define tTECSUnit_cBalancer_init( p_that ) \
	  (p_that)->cBalancer->VMT->init__T( \
	   (p_that)->cBalancer )
#define tTECSUnit_cSharedMemory_putVal( p_that, index, val ) \
	  (p_that)->cSharedMemory->VMT->putVal__T( \
	   (p_that)->cSharedMemory, (index), (val) )
#define tTECSUnit_cSharedMemory_getVal( p_that, index ) \
	  (p_that)->cSharedMemory->VMT->getVal__T( \
	   (p_that)->cSharedMemory, (index) )
#define tTECSUnit_cSharedMemory_getSize( p_that ) \
	  (p_that)->cSharedMemory->VMT->getSize__T( \
	   (p_that)->cSharedMemory )
#define tTECSUnit_cTarget1_double( p_that, arg ) \
	  (p_that)->cTarget1->VMT->double__T( \
	   (p_that)->cTarget1, (arg) )
#define tTECSUnit_cTarget2_add( p_that, arg1, arg2 ) \
	  (p_that)->cTarget2->VMT->add__T( \
	   (p_that)->cTarget2, (arg1), (arg2) )
#define tTECSUnit_cTarget3_send( p_that, buf, len ) \
	  (p_that)->cTarget3->VMT->send__T( \
	   (p_that)->cTarget3, (buf), (len) )
#define tTECSUnit_cTarget3_sendMessage( p_that, buf, len ) \
	  (p_that)->cTarget3->VMT->sendMessage__T( \
	   (p_that)->cTarget3, (buf), (len) )
#define tTECSUnit_cTarget3_receiveMessage( p_that, buf, len ) \
	  (p_that)->cTarget3->VMT->receiveMessage__T( \
	   (p_that)->cTarget3, (buf), (len) )
#define tTECSUnit_cTarget3_checkER( p_that, eroor ) \
	  (p_that)->cTarget3->VMT->checkER__T( \
	   (p_that)->cTarget3, (eroor) )
#define tTECSUnit_cInitializeBridge_initializeBridge( p_that, mrb ) \
	  (p_that)->cInitializeBridge->VMT->initializeBridge__T( \
	   (p_that)->cInitializeBridge, (mrb) )
#define tTECSUnit_cInitializeTECSBridge_initializeBridge( p_that, mrb, TECS ) \
	  (p_that)->cInitializeTECSBridge->VMT->initializeBridge__T( \
	   (p_that)->cInitializeTECSBridge, (mrb), (TECS) )
#define tTECSUnit_cMrubyVM_initialize( p_that ) \
	  (p_that)->cMrubyVM->VMT->initialize__T( \
	   (p_that)->cMrubyVM )
#define tTECSUnit_cMrubyVM_run( p_that ) \
	  (p_that)->cMrubyVM->VMT->run__T( \
	   (p_that)->cMrubyVM )
#define tTECSUnit_cMrubyVM_funcall( p_that, name ) \
	  (p_that)->cMrubyVM->VMT->funcall__T( \
	   (p_that)->cMrubyVM, (name) )
#define tTECSUnit_cMrubyVM_finalize( p_that ) \
	  (p_that)->cMrubyVM->VMT->finalize__T( \
	   (p_that)->cMrubyVM )
#define tTECSUnit_cMain_main( p_that, argc, argv ) \
	  (p_that)->cMain->VMT->main__T( \
	   (p_that)->cMain, (argc), (argv) )

#else  /* TECSFLOW */
#define tTECSUnit_cTECSInfo_findNamespace( p_that, namespace_path, nsDesc ) \
	  (p_that)->cTECSInfo.findNamespace__T( \
 (namespace_path), (nsDesc) )
#define tTECSUnit_cTECSInfo_findRegion( p_that, namespace_path, regionDesc ) \
	  (p_that)->cTECSInfo.findRegion__T( \
 (namespace_path), (regionDesc) )
#define tTECSUnit_cTECSInfo_findSignature( p_that, namespace_path, signatureDesc ) \
	  (p_that)->cTECSInfo.findSignature__T( \
 (namespace_path), (signatureDesc) )
#define tTECSUnit_cTECSInfo_findCelltype( p_that, namespace_path, celltypeDesc ) \
	  (p_that)->cTECSInfo.findCelltype__T( \
 (namespace_path), (celltypeDesc) )
#define tTECSUnit_cTECSInfo_findCell( p_that, namespace_path, cellDesc ) \
	  (p_that)->cTECSInfo.findCell__T( \
 (namespace_path), (cellDesc) )
#define tTECSUnit_cTECSInfo_findRawEntryDescriptor( p_that, namespace_path, rawEntryDescDesc, entryDesc ) \
	  (p_that)->cTECSInfo.findRawEntryDescriptor__T( \
 (namespace_path), (rawEntryDescDesc), (entryDesc) )
#define tTECSUnit_cTECSInfo_findRawEntryDescriptor_unsafe( p_that, namespace_path, subsc, rawDesc ) \
	  (p_that)->cTECSInfo.findRawEntryDescriptor_unsafe__T( \
 (namespace_path), (subsc), (rawDesc) )
#define tTECSUnit_cNSInfo_getName( p_that, name, max_len ) \
	  (p_that)->cNSInfo.getName__T( \
 (name), (max_len) )
#define tTECSUnit_cNSInfo_getNameLength( p_that ) \
	  (p_that)->cNSInfo.getNameLength__T( \
 )
#define tTECSUnit_cNSInfo_getNNamespace( p_that ) \
	  (p_that)->cNSInfo.getNNamespace__T( \
 )
#define tTECSUnit_cNSInfo_getNamespaceInfo( p_that, ith, des ) \
	  (p_that)->cNSInfo.getNamespaceInfo__T( \
 (ith), (des) )
#define tTECSUnit_cNSInfo_getNSignature( p_that ) \
	  (p_that)->cNSInfo.getNSignature__T( \
 )
#define tTECSUnit_cNSInfo_getSignatureInfo( p_that, ith, des ) \
	  (p_that)->cNSInfo.getSignatureInfo__T( \
 (ith), (des) )
#define tTECSUnit_cNSInfo_getNCelltype( p_that ) \
	  (p_that)->cNSInfo.getNCelltype__T( \
 )
#define tTECSUnit_cNSInfo_getCelltypeInfo( p_that, ith, des ) \
	  (p_that)->cNSInfo.getCelltypeInfo__T( \
 (ith), (des) )
#define tTECSUnit_cRegionInfo_getName( p_that, name, max_len ) \
	  (p_that)->cRegionInfo.getName__T( \
 (name), (max_len) )
#define tTECSUnit_cRegionInfo_getNameLength( p_that ) \
	  (p_that)->cRegionInfo.getNameLength__T( \
 )
#define tTECSUnit_cRegionInfo_getNCell( p_that ) \
	  (p_that)->cRegionInfo.getNCell__T( \
 )
#define tTECSUnit_cRegionInfo_getCellInfo( p_that, ith, des ) \
	  (p_that)->cRegionInfo.getCellInfo__T( \
 (ith), (des) )
#define tTECSUnit_cRegionInfo_getNRegion( p_that ) \
	  (p_that)->cRegionInfo.getNRegion__T( \
 )
#define tTECSUnit_cRegionInfo_getRegionInfo( p_that, ith, des ) \
	  (p_that)->cRegionInfo.getRegionInfo__T( \
 (ith), (des) )
#define tTECSUnit_cCellInfo_getName( p_that, name, max_len ) \
	  (p_that)->cCellInfo.getName__T( \
 (name), (max_len) )
#define tTECSUnit_cCellInfo_getNameLength( p_that ) \
	  (p_that)->cCellInfo.getNameLength__T( \
 )
#define tTECSUnit_cCellInfo_getNRawEntryDescriptorInfo( p_that ) \
	  (p_that)->cCellInfo.getNRawEntryDescriptorInfo__T( \
 )
#define tTECSUnit_cCellInfo_getRawEntryDescriptorInfo( p_that, index, desc ) \
	  (p_that)->cCellInfo.getRawEntryDescriptorInfo__T( \
 (index), (desc) )
#define tTECSUnit_cCellInfo_getCelltypeInfo( p_that, desc ) \
	  (p_that)->cCellInfo.getCelltypeInfo__T( \
 (desc) )
#define tTECSUnit_cCellInfo_getCBP( p_that, cbp ) \
	  (p_that)->cCellInfo.getCBP__T( \
 (cbp) )
#define tTECSUnit_cCellInfo_getINIBP( p_that, inibp ) \
	  (p_that)->cCellInfo.getINIBP__T( \
 (inibp) )
#define tTECSUnit_cSignatureInfo_getName( p_that, name, max_len ) \
	  (p_that)->cSignatureInfo.getName__T( \
 (name), (max_len) )
#define tTECSUnit_cSignatureInfo_getNameLength( p_that ) \
	  (p_that)->cSignatureInfo.getNameLength__T( \
 )
#define tTECSUnit_cSignatureInfo_getNFunction( p_that ) \
	  (p_that)->cSignatureInfo.getNFunction__T( \
 )
#define tTECSUnit_cSignatureInfo_getFunctionInfo( p_that, ith, desc ) \
	  (p_that)->cSignatureInfo.getFunctionInfo__T( \
 (ith), (desc) )
#define tTECSUnit_cCelltypeInfo_getName( p_that, name, max_len ) \
	  (p_that)->cCelltypeInfo.getName__T( \
 (name), (max_len) )
#define tTECSUnit_cCelltypeInfo_getNameLength( p_that ) \
	  (p_that)->cCelltypeInfo.getNameLength__T( \
 )
#define tTECSUnit_cCelltypeInfo_getNAttr( p_that ) \
	  (p_that)->cCelltypeInfo.getNAttr__T( \
 )
#define tTECSUnit_cCelltypeInfo_getAttrInfo( p_that, ith, desc ) \
	  (p_that)->cCelltypeInfo.getAttrInfo__T( \
 (ith), (desc) )
#define tTECSUnit_cCelltypeInfo_getNVar( p_that ) \
	  (p_that)->cCelltypeInfo.getNVar__T( \
 )
#define tTECSUnit_cCelltypeInfo_getVarInfo( p_that, ith, desc ) \
	  (p_that)->cCelltypeInfo.getVarInfo__T( \
 (ith), (desc) )
#define tTECSUnit_cCelltypeInfo_getNCall( p_that ) \
	  (p_that)->cCelltypeInfo.getNCall__T( \
 )
#define tTECSUnit_cCelltypeInfo_getCallInfo( p_that, ith, desc ) \
	  (p_that)->cCelltypeInfo.getCallInfo__T( \
 (ith), (desc) )
#define tTECSUnit_cCelltypeInfo_getNEntry( p_that ) \
	  (p_that)->cCelltypeInfo.getNEntry__T( \
 )
#define tTECSUnit_cCelltypeInfo_getEntryInfo( p_that, ith, desc ) \
	  (p_that)->cCelltypeInfo.getEntryInfo__T( \
 (ith), (desc) )
#define tTECSUnit_cCelltypeInfo_isSingleton( p_that ) \
	  (p_that)->cCelltypeInfo.isSingleton__T( \
 )
#define tTECSUnit_cCelltypeInfo_isIDX_is_ID( p_that ) \
	  (p_that)->cCelltypeInfo.isIDX_is_ID__T( \
 )
#define tTECSUnit_cCelltypeInfo_sizeOfCB( p_that ) \
	  (p_that)->cCelltypeInfo.sizeOfCB__T( \
 )
#define tTECSUnit_cCelltypeInfo_sizeOfINIB( p_that ) \
	  (p_that)->cCelltypeInfo.sizeOfINIB__T( \
 )
#define tTECSUnit_cVarDeclInfo_getName( p_that, name, max_len ) \
	  (p_that)->cVarDeclInfo.getName__T( \
 (name), (max_len) )
#define tTECSUnit_cVarDeclInfo_getNameLength( p_that ) \
	  (p_that)->cVarDeclInfo.getNameLength__T( \
 )
#define tTECSUnit_cVarDeclInfo_getLocationInfo( p_that, offset, place ) \
	  (p_that)->cVarDeclInfo.getLocationInfo__T( \
 (offset), (place) )
#define tTECSUnit_cVarDeclInfo_getTypeInfo( p_that, desc ) \
	  (p_that)->cVarDeclInfo.getTypeInfo__T( \
 (desc) )
#define tTECSUnit_cVarDeclInfo_getSizeIsExpr( p_that, expr_str, max_len ) \
	  (p_that)->cVarDeclInfo.getSizeIsExpr__T( \
 (expr_str), (max_len) )
#define tTECSUnit_cVarDeclInfo_getSizeIs( p_that, size, p_cb ) \
	  (p_that)->cVarDeclInfo.getSizeIs__T( \
 (size), (p_cb) )
#define tTECSUnit_cTypeInfo_getName( p_that, name, max_len ) \
	  (p_that)->cTypeInfo.getName__T( \
 (name), (max_len) )
#define tTECSUnit_cTypeInfo_getNameLength( p_that ) \
	  (p_that)->cTypeInfo.getNameLength__T( \
 )
#define tTECSUnit_cTypeInfo_getSize( p_that ) \
	  (p_that)->cTypeInfo.getSize__T( \
 )
#define tTECSUnit_cTypeInfo_getKind( p_that ) \
	  (p_that)->cTypeInfo.getKind__T( \
 )
#define tTECSUnit_cTypeInfo_getNType( p_that ) \
	  (p_that)->cTypeInfo.getNType__T( \
 )
#define tTECSUnit_cTypeInfo_getTypeInfo( p_that, desc ) \
	  (p_that)->cTypeInfo.getTypeInfo__T( \
 (desc) )
#define tTECSUnit_cTypeInfo_getNMember( p_that ) \
	  (p_that)->cTypeInfo.getNMember__T( \
 )
#define tTECSUnit_cTypeInfo_getMemberInfo( p_that, ith, desc ) \
	  (p_that)->cTypeInfo.getMemberInfo__T( \
 (ith), (desc) )
#define tTECSUnit_cREDInfo_getNRawEntryDescriptorInfo( p_that ) \
	  (p_that)->cREDInfo.getNRawEntryDescriptorInfo__T( \
 )
#define tTECSUnit_cREDInfo_getRawDescriptor( p_that, subsc, rawDesc ) \
	  (p_that)->cREDInfo.getRawDescriptor__T( \
 (subsc), (rawDesc) )
#define tTECSUnit_cEntryInfo_getName( p_that, name, max_len ) \
	  (p_that)->cEntryInfo.getName__T( \
 (name), (max_len) )
#define tTECSUnit_cEntryInfo_getNameLength( p_that ) \
	  (p_that)->cEntryInfo.getNameLength__T( \
 )
#define tTECSUnit_cEntryInfo_getSignatureInfo( p_that, desc ) \
	  (p_that)->cEntryInfo.getSignatureInfo__T( \
 (desc) )
#define tTECSUnit_cEntryInfo_getArraySize( p_that ) \
	  (p_that)->cEntryInfo.getArraySize__T( \
 )
#define tTECSUnit_cEntryInfo_isInline( p_that ) \
	  (p_that)->cEntryInfo.isInline__T( \
 )
#define tTECSUnit_ciTask_activate( p_that ) \
	  (p_that)->ciTask.activate__T( \
 )
#define tTECSUnit_ciTask_wakeup( p_that ) \
	  (p_that)->ciTask.wakeup__T( \
 )
#define tTECSUnit_ciTask_releaseWait( p_that ) \
	  (p_that)->ciTask.releaseWait__T( \
 )
#define tTECSUnit_ciTask_raiseException( p_that, pattern ) \
	  (p_that)->ciTask.raiseException__T( \
 (pattern) )
#define tTECSUnit_ciTask_disableWait( p_that ) \
	  (p_that)->ciTask.disableWait__T( \
 )
#define tTECSUnit_ciTask_enableWait( p_that ) \
	  (p_that)->ciTask.enableWait__T( \
 )
#define tTECSUnit_ciTask_startOverRunHandler( p_that, ovrtim ) \
	  (p_that)->ciTask.startOverRunHandler__T( \
 (ovrtim) )
#define tTECSUnit_ciTask_stopOverRunHandler( p_that ) \
	  (p_that)->ciTask.stopOverRunHandler__T( \
 )
#define tTECSUnit_cInitializeRoutineBody_main( p_that ) \
	  (p_that)->cInitializeRoutineBody.main__T( \
 )
#define tTECSUnit_cTerminateRoutineBody_main( p_that ) \
	  (p_that)->cTerminateRoutineBody.main__T( \
 )
#define tTECSUnit_ciHandlerBody_main( p_that ) \
	  (p_that)->ciHandlerBody.main__T( \
 )
#define tTECSUnit_cConfigInterrupt_disable( p_that ) \
	  (p_that)->cConfigInterrupt.disable__T( \
 )
#define tTECSUnit_cConfigInterrupt_enable( p_that ) \
	  (p_that)->cConfigInterrupt.enable__T( \
 )
#define tTECSUnit_cCyclic_start( p_that ) \
	  (p_that)->cCyclic.start__T( \
 )
#define tTECSUnit_cCyclic_stop( p_that ) \
	  (p_that)->cCyclic.stop__T( \
 )
#define tTECSUnit_cCyclic_refer( p_that, pk_cyclicHandlerStatus ) \
	  (p_that)->cCyclic.refer__T( \
 (pk_cyclicHandlerStatus) )
#define tTECSUnit_cAlarm_start( p_that, alarmTime ) \
	  (p_that)->cAlarm.start__T( \
 (alarmTime) )
#define tTECSUnit_cAlarm_stop( p_that ) \
	  (p_that)->cAlarm.stop__T( \
 )
#define tTECSUnit_cAlarm_refer( p_that, pk_alarmStatus ) \
	  (p_that)->cAlarm.refer__T( \
 (pk_alarmStatus) )
#define tTECSUnit_ciAlarm_start( p_that, alarmTime ) \
	  (p_that)->ciAlarm.start__T( \
 (alarmTime) )
#define tTECSUnit_ciAlarm_stop( p_that ) \
	  (p_that)->ciAlarm.stop__T( \
 )
#define tTECSUnit_cFixedSizeMemoryPool_get( p_that, p_block ) \
	  (p_that)->cFixedSizeMemoryPool.get__T( \
 (p_block) )
#define tTECSUnit_cFixedSizeMemoryPool_getPolling( p_that, p_block ) \
	  (p_that)->cFixedSizeMemoryPool.getPolling__T( \
 (p_block) )
#define tTECSUnit_cFixedSizeMemoryPool_getTimeout( p_that, p_block, timeout ) \
	  (p_that)->cFixedSizeMemoryPool.getTimeout__T( \
 (p_block), (timeout) )
#define tTECSUnit_cFixedSizeMemoryPool_release( p_that, block ) \
	  (p_that)->cFixedSizeMemoryPool.release__T( \
 (block) )
#define tTECSUnit_cFixedSizeMemoryPool_initialize( p_that ) \
	  (p_that)->cFixedSizeMemoryPool.initialize__T( \
 )
#define tTECSUnit_cFixedSizeMemoryPool_refer( p_that, pk_memoryPoolFixedSizeStatus ) \
	  (p_that)->cFixedSizeMemoryPool.refer__T( \
 (pk_memoryPoolFixedSizeStatus) )
#define tTECSUnit_cMessageBuffer_send( p_that, message, size ) \
	  (p_that)->cMessageBuffer.send__T( \
 (message), (size) )
#define tTECSUnit_cMessageBuffer_sendPolling( p_that, message, size ) \
	  (p_that)->cMessageBuffer.sendPolling__T( \
 (message), (size) )
#define tTECSUnit_cMessageBuffer_sendTimeout( p_that, message, size, timeout ) \
	  (p_that)->cMessageBuffer.sendTimeout__T( \
 (message), (size), (timeout) )
#define tTECSUnit_cMessageBuffer_receive( p_that, message ) \
	  (p_that)->cMessageBuffer.receive__T( \
 (message) )
#define tTECSUnit_cMessageBuffer_receivePolling( p_that, message ) \
	  (p_that)->cMessageBuffer.receivePolling__T( \
 (message) )
#define tTECSUnit_cMessageBuffer_receiveTimeout( p_that, message, timeout ) \
	  (p_that)->cMessageBuffer.receiveTimeout__T( \
 (message), (timeout) )
#define tTECSUnit_cMessageBuffer_initialize( p_that ) \
	  (p_that)->cMessageBuffer.initialize__T( \
 )
#define tTECSUnit_cMessageBuffer_refer( p_that, packet ) \
	  (p_that)->cMessageBuffer.refer__T( \
 (packet) )
#define tTECSUnit_cMalloc_initializeMemoryPool( p_that ) \
	  (p_that)->cMalloc.initializeMemoryPool__T( \
 )
#define tTECSUnit_cMalloc_calloc( p_that, nelem, elem_size ) \
	  (p_that)->cMalloc.calloc__T( \
 (nelem), (elem_size) )
#define tTECSUnit_cMalloc_malloc( p_that, size ) \
	  (p_that)->cMalloc.malloc__T( \
 (size) )
#define tTECSUnit_cMalloc_realloc( p_that, ptr, new_size ) \
	  (p_that)->cMalloc.realloc__T( \
 (ptr), (new_size) )
#define tTECSUnit_cMalloc_free( p_that, ptr ) \
	  (p_that)->cMalloc.free__T( \
 (ptr) )
#define tTECSUnit_cUltrasonicSensor_getDistance( p_that ) \
	  (p_that)->cUltrasonicSensor.getDistance__T( \
 )
#define tTECSUnit_cUltrasonicSensor_listen( p_that ) \
	  (p_that)->cUltrasonicSensor.listen__T( \
 )
#define tTECSUnit_cUltrasonicSensor_initializePort( p_that ) \
	  (p_that)->cUltrasonicSensor.initializePort__T( \
 )
#define tTECSUnit_cColorSensor_getColor( p_that ) \
	  (p_that)->cColorSensor.getColor__T( \
 )
#define tTECSUnit_cColorSensor_getReflect( p_that ) \
	  (p_that)->cColorSensor.getReflect__T( \
 )
#define tTECSUnit_cColorSensor_getAmbient( p_that ) \
	  (p_that)->cColorSensor.getAmbient__T( \
 )
#define tTECSUnit_cColorSensor_initializePort( p_that ) \
	  (p_that)->cColorSensor.initializePort__T( \
 )
#define tTECSUnit_cColorSensor_getRGBRaw( p_that, r, g, b ) \
	  (p_that)->cColorSensor.getRGBRaw__T( \
 (r), (g), (b) )
#define tTECSUnit_cTouchSensor_isPressed( p_that ) \
	  (p_that)->cTouchSensor.isPressed__T( \
 )
#define tTECSUnit_cTouchSensor_initializePort( p_that ) \
	  (p_that)->cTouchSensor.initializePort__T( \
 )
#define tTECSUnit_cGyroSensor_getAngle( p_that ) \
	  (p_that)->cGyroSensor.getAngle__T( \
 )
#define tTECSUnit_cGyroSensor_getRate( p_that ) \
	  (p_that)->cGyroSensor.getRate__T( \
 )
#define tTECSUnit_cGyroSensor_reset( p_that ) \
	  (p_that)->cGyroSensor.reset__T( \
 )
#define tTECSUnit_cGyroSensor_calibrate( p_that, times ) \
	  (p_that)->cGyroSensor.calibrate__T( \
 (times) )
#define tTECSUnit_cGyroSensor_initializePort( p_that ) \
	  (p_that)->cGyroSensor.initializePort__T( \
 )
#define tTECSUnit_cMotor_getType( p_that ) \
	  (p_that)->cMotor.getType__T( \
 )
#define tTECSUnit_cMotor_getCounts( p_that ) \
	  (p_that)->cMotor.getCounts__T( \
 )
#define tTECSUnit_cMotor_getPower( p_that ) \
	  (p_that)->cMotor.getPower__T( \
 )
#define tTECSUnit_cMotor_resetCounts( p_that ) \
	  (p_that)->cMotor.resetCounts__T( \
 )
#define tTECSUnit_cMotor_setPower( p_that, power ) \
	  (p_that)->cMotor.setPower__T( \
 (power) )
#define tTECSUnit_cMotor_stop( p_that, brake ) \
	  (p_that)->cMotor.stop__T( \
 (brake) )
#define tTECSUnit_cMotor_rotate( p_that, degrees, speed_abs, blocking ) \
	  (p_that)->cMotor.rotate__T( \
 (degrees), (speed_abs), (blocking) )
#define tTECSUnit_cMotor_initializePort( p_that, type ) \
	  (p_that)->cMotor.initializePort__T( \
 (type) )
#define tTECSUnit_cButton_isPressed( p_that, button ) \
	  (p_that)->cButton.isPressed__T( \
 (button) )
#define tTECSUnit_cLCD_setFont( p_that, font ) \
	  (p_that)->cLCD.setFont__T( \
 (font) )
#define tTECSUnit_cLCD_getFontSize( p_that, font, p_width, p_height ) \
	  (p_that)->cLCD.getFontSize__T( \
 (font), (p_width), (p_height) )
#define tTECSUnit_cLCD_drawString( p_that, str, x, y ) \
	  (p_that)->cLCD.drawString__T( \
 (str), (x), (y) )
#define tTECSUnit_cLCD_fillRect( p_that, x, y, w, h, color ) \
	  (p_that)->cLCD.fillRect__T( \
 (x), (y), (w), (h), (color) )
#define tTECSUnit_cLCD_drawLine( p_that, x0, y0, x1, y1 ) \
	  (p_that)->cLCD.drawLine__T( \
 (x0), (y0), (x1), (y1) )
#define tTECSUnit_cLCD_print( p_that, str ) \
	  (p_that)->cLCD.print__T( \
 (str) )
#define tTECSUnit_cLCD_puts( p_that, str ) \
	  (p_that)->cLCD.puts__T( \
 (str) )
#define tTECSUnit_cLCD_clear( p_that ) \
	  (p_that)->cLCD.clear__T( \
 )
#define tTECSUnit_cLCD_showMessageBox( p_that, title, msg ) \
	  (p_that)->cLCD.showMessageBox__T( \
 (title), (msg) )
#define tTECSUnit_cLED_setColor( p_that, color ) \
	  (p_that)->cLED.setColor__T( \
 (color) )
#define tTECSUnit_cLED_off( p_that ) \
	  (p_that)->cLED.off__T( \
 )
#define tTECSUnit_cBattery_current_mA( p_that ) \
	  (p_that)->cBattery.current_mA__T( \
 )
#define tTECSUnit_cBattery_voltage_mV( p_that ) \
	  (p_that)->cBattery.voltage_mV__T( \
 )
#define tTECSUnit_cSpeaker_setVolume( p_that, volume ) \
	  (p_that)->cSpeaker.setVolume__T( \
 (volume) )
#define tTECSUnit_cSpeaker_playTone( p_that, frequency, duration ) \
	  (p_that)->cSpeaker.playTone__T( \
 (frequency), (duration) )
#define tTECSUnit_cSpeaker_stop( p_that ) \
	  (p_that)->cSpeaker.stop__T( \
 )
#define tTECSUnit_cRiteVM_reset( p_that ) \
	  (p_that)->cRiteVM.reset__T( \
 )
#define tTECSUnit_cBalancer_control( p_that, forward, turn, gyro, gyroOffset, leftRevolution, rightRevolution, battery, pwm_l, pwm_r, backlashhalf ) \
	  (p_that)->cBalancer.control__T( \
 (forward), (turn), (gyro), (gyroOffset), (leftRevolution), (rightRevolution), (battery), (pwm_l), (pwm_r), (backlashhalf) )
#define tTECSUnit_cBalancer_init( p_that ) \
	  (p_that)->cBalancer.init__T( \
 )
#define tTECSUnit_cSharedMemory_putVal( p_that, index, val ) \
	  (p_that)->cSharedMemory.putVal__T( \
 (index), (val) )
#define tTECSUnit_cSharedMemory_getVal( p_that, index ) \
	  (p_that)->cSharedMemory.getVal__T( \
 (index) )
#define tTECSUnit_cSharedMemory_getSize( p_that ) \
	  (p_that)->cSharedMemory.getSize__T( \
 )
#define tTECSUnit_cTarget1_double( p_that, arg ) \
	  (p_that)->cTarget1.double__T( \
 (arg) )
#define tTECSUnit_cTarget2_add( p_that, arg1, arg2 ) \
	  (p_that)->cTarget2.add__T( \
 (arg1), (arg2) )
#define tTECSUnit_cTarget3_send( p_that, buf, len ) \
	  (p_that)->cTarget3.send__T( \
 (buf), (len) )
#define tTECSUnit_cTarget3_sendMessage( p_that, buf, len ) \
	  (p_that)->cTarget3.sendMessage__T( \
 (buf), (len) )
#define tTECSUnit_cTarget3_receiveMessage( p_that, buf, len ) \
	  (p_that)->cTarget3.receiveMessage__T( \
 (buf), (len) )
#define tTECSUnit_cTarget3_checkER( p_that, eroor ) \
	  (p_that)->cTarget3.checkER__T( \
 (eroor) )
#define tTECSUnit_cInitializeBridge_initializeBridge( p_that, mrb ) \
	  (p_that)->cInitializeBridge.initializeBridge__T( \
 (mrb) )
#define tTECSUnit_cInitializeTECSBridge_initializeBridge( p_that, mrb, TECS ) \
	  (p_that)->cInitializeTECSBridge.initializeBridge__T( \
 (mrb), (TECS) )
#define tTECSUnit_cMrubyVM_initialize( p_that ) \
	  (p_that)->cMrubyVM.initialize__T( \
 )
#define tTECSUnit_cMrubyVM_run( p_that ) \
	  (p_that)->cMrubyVM.run__T( \
 )
#define tTECSUnit_cMrubyVM_funcall( p_that, name ) \
	  (p_that)->cMrubyVM.funcall__T( \
 (name) )
#define tTECSUnit_cMrubyVM_finalize( p_that ) \
	  (p_that)->cMrubyVM.finalize__T( \
 )
#define tTECSUnit_cMain_main( p_that, argc, argv ) \
	  (p_that)->cMain.main__T( \
 (argc), (argv) )

#endif /* TECSFLOW */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eUnit */
void           tTECSUnit_eUnit_main_skel( const struct tag_sTECSUnit_VDES *epd, const char_t* cell_path, const char_t* entry_path, const char_t* signature_path, const char_t* function_path, const struct tecsunit_obj* arguments, const struct tecsunit_obj* exp_val);

#ifndef TOPPERS_CB_TYPE_ONLY

/* ディスクリプタ設定関数 #_SDF_# */
/* [dynamic] cNSInfo */
Inline void
tTECSUnit_cNSInfo_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( nTECSInfo_sNamespaceInfo ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cNSInfo = des.vdes;
}

/* [dynamic,optional] cNSInfo */
Inline void
tTECSUnit_cNSInfo_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cNSInfo = NULL;
}

/* [dynamic] cRegionInfo */
Inline void
tTECSUnit_cRegionInfo_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( nTECSInfo_sRegionInfo ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cRegionInfo = des.vdes;
}

/* [dynamic,optional] cRegionInfo */
Inline void
tTECSUnit_cRegionInfo_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cRegionInfo = NULL;
}

/* [dynamic] cCellInfo */
Inline void
tTECSUnit_cCellInfo_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( nTECSInfo_sCellInfo ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cCellInfo = des.vdes;
}

/* [dynamic,optional] cCellInfo */
Inline void
tTECSUnit_cCellInfo_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cCellInfo = NULL;
}

/* [dynamic] cSignatureInfo */
Inline void
tTECSUnit_cSignatureInfo_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( nTECSInfo_sSignatureInfo ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cSignatureInfo = des.vdes;
}

/* [dynamic,optional] cSignatureInfo */
Inline void
tTECSUnit_cSignatureInfo_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cSignatureInfo = NULL;
}

/* [dynamic] cCelltypeInfo */
Inline void
tTECSUnit_cCelltypeInfo_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( nTECSInfo_sCelltypeInfo ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cCelltypeInfo = des.vdes;
}

/* [dynamic,optional] cCelltypeInfo */
Inline void
tTECSUnit_cCelltypeInfo_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cCelltypeInfo = NULL;
}

/* [dynamic] cVarDeclInfo */
Inline void
tTECSUnit_cVarDeclInfo_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( nTECSInfo_sVarDeclInfo ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cVarDeclInfo = des.vdes;
}

/* [dynamic,optional] cVarDeclInfo */
Inline void
tTECSUnit_cVarDeclInfo_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cVarDeclInfo = NULL;
}

/* [dynamic] cTypeInfo */
Inline void
tTECSUnit_cTypeInfo_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( nTECSInfo_sTypeInfo ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cTypeInfo = des.vdes;
}

/* [dynamic,optional] cTypeInfo */
Inline void
tTECSUnit_cTypeInfo_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cTypeInfo = NULL;
}

/* [dynamic] cREDInfo */
Inline void
tTECSUnit_cREDInfo_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( nTECSInfo_sRawEntryDescriptorInfo ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cREDInfo = des.vdes;
}

/* [dynamic,optional] cREDInfo */
Inline void
tTECSUnit_cREDInfo_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cREDInfo = NULL;
}

/* [dynamic] cEntryInfo */
Inline void
tTECSUnit_cEntryInfo_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( nTECSInfo_sEntryInfo ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cEntryInfo = des.vdes;
}

/* [dynamic,optional] cEntryInfo */
Inline void
tTECSUnit_cEntryInfo_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cEntryInfo = NULL;
}

/* [dynamic] ciTask */
Inline void
tTECSUnit_ciTask_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( siTask ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->ciTask = des.vdes;
}

/* [dynamic,optional] ciTask */
Inline void
tTECSUnit_ciTask_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->ciTask = NULL;
}

/* [dynamic] cInitializeRoutineBody */
Inline void
tTECSUnit_cInitializeRoutineBody_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( sInitializeRoutineBody ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cInitializeRoutineBody = des.vdes;
}

/* [dynamic,optional] cInitializeRoutineBody */
Inline void
tTECSUnit_cInitializeRoutineBody_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cInitializeRoutineBody = NULL;
}

/* [dynamic] cTerminateRoutineBody */
Inline void
tTECSUnit_cTerminateRoutineBody_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( sTerminateRoutineBody ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cTerminateRoutineBody = des.vdes;
}

/* [dynamic,optional] cTerminateRoutineBody */
Inline void
tTECSUnit_cTerminateRoutineBody_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cTerminateRoutineBody = NULL;
}

/* [dynamic] ciHandlerBody */
Inline void
tTECSUnit_ciHandlerBody_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( siHandlerBody ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->ciHandlerBody = des.vdes;
}

/* [dynamic,optional] ciHandlerBody */
Inline void
tTECSUnit_ciHandlerBody_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->ciHandlerBody = NULL;
}

/* [dynamic] cConfigInterrupt */
Inline void
tTECSUnit_cConfigInterrupt_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( sConfigInterrupt ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cConfigInterrupt = des.vdes;
}

/* [dynamic,optional] cConfigInterrupt */
Inline void
tTECSUnit_cConfigInterrupt_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cConfigInterrupt = NULL;
}

/* [dynamic] cCyclic */
Inline void
tTECSUnit_cCyclic_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( sCyclic ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cCyclic = des.vdes;
}

/* [dynamic,optional] cCyclic */
Inline void
tTECSUnit_cCyclic_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cCyclic = NULL;
}

/* [dynamic] cAlarm */
Inline void
tTECSUnit_cAlarm_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( sAlarm ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cAlarm = des.vdes;
}

/* [dynamic,optional] cAlarm */
Inline void
tTECSUnit_cAlarm_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cAlarm = NULL;
}

/* [dynamic] ciAlarm */
Inline void
tTECSUnit_ciAlarm_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( siAlarm ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->ciAlarm = des.vdes;
}

/* [dynamic,optional] ciAlarm */
Inline void
tTECSUnit_ciAlarm_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->ciAlarm = NULL;
}

/* [dynamic] cFixedSizeMemoryPool */
Inline void
tTECSUnit_cFixedSizeMemoryPool_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( sFixedSizeMemoryPool ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cFixedSizeMemoryPool = des.vdes;
}

/* [dynamic,optional] cFixedSizeMemoryPool */
Inline void
tTECSUnit_cFixedSizeMemoryPool_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cFixedSizeMemoryPool = NULL;
}

/* [dynamic] cMessageBuffer */
Inline void
tTECSUnit_cMessageBuffer_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( sMessageBuffer ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cMessageBuffer = des.vdes;
}

/* [dynamic,optional] cMessageBuffer */
Inline void
tTECSUnit_cMessageBuffer_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cMessageBuffer = NULL;
}

/* [dynamic] cMalloc */
Inline void
tTECSUnit_cMalloc_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( sMalloc ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cMalloc = des.vdes;
}

/* [dynamic,optional] cMalloc */
Inline void
tTECSUnit_cMalloc_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cMalloc = NULL;
}

/* [dynamic] cUltrasonicSensor */
Inline void
tTECSUnit_cUltrasonicSensor_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( sUltrasonicSensor ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cUltrasonicSensor = des.vdes;
}

/* [dynamic,optional] cUltrasonicSensor */
Inline void
tTECSUnit_cUltrasonicSensor_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cUltrasonicSensor = NULL;
}

/* [dynamic] cColorSensor */
Inline void
tTECSUnit_cColorSensor_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( sColorSensor ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cColorSensor = des.vdes;
}

/* [dynamic,optional] cColorSensor */
Inline void
tTECSUnit_cColorSensor_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cColorSensor = NULL;
}

/* [dynamic] cTouchSensor */
Inline void
tTECSUnit_cTouchSensor_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( sTouchSensor ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cTouchSensor = des.vdes;
}

/* [dynamic,optional] cTouchSensor */
Inline void
tTECSUnit_cTouchSensor_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cTouchSensor = NULL;
}

/* [dynamic] cGyroSensor */
Inline void
tTECSUnit_cGyroSensor_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( sGyroSensor ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cGyroSensor = des.vdes;
}

/* [dynamic,optional] cGyroSensor */
Inline void
tTECSUnit_cGyroSensor_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cGyroSensor = NULL;
}

/* [dynamic] cMotor */
Inline void
tTECSUnit_cMotor_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( sMotor ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cMotor = des.vdes;
}

/* [dynamic,optional] cMotor */
Inline void
tTECSUnit_cMotor_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cMotor = NULL;
}

/* [dynamic] cButton */
Inline void
tTECSUnit_cButton_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( sButton ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cButton = des.vdes;
}

/* [dynamic,optional] cButton */
Inline void
tTECSUnit_cButton_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cButton = NULL;
}

/* [dynamic] cLCD */
Inline void
tTECSUnit_cLCD_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( sLCD ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cLCD = des.vdes;
}

/* [dynamic,optional] cLCD */
Inline void
tTECSUnit_cLCD_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cLCD = NULL;
}

/* [dynamic] cLED */
Inline void
tTECSUnit_cLED_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( sLED ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cLED = des.vdes;
}

/* [dynamic,optional] cLED */
Inline void
tTECSUnit_cLED_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cLED = NULL;
}

/* [dynamic] cBattery */
Inline void
tTECSUnit_cBattery_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( sBattery ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cBattery = des.vdes;
}

/* [dynamic,optional] cBattery */
Inline void
tTECSUnit_cBattery_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cBattery = NULL;
}

/* [dynamic] cSpeaker */
Inline void
tTECSUnit_cSpeaker_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( sSpeaker ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cSpeaker = des.vdes;
}

/* [dynamic,optional] cSpeaker */
Inline void
tTECSUnit_cSpeaker_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cSpeaker = NULL;
}

/* [dynamic] cRiteVM */
Inline void
tTECSUnit_cRiteVM_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( sRiteVM ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cRiteVM = des.vdes;
}

/* [dynamic,optional] cRiteVM */
Inline void
tTECSUnit_cRiteVM_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cRiteVM = NULL;
}

/* [dynamic] cBalancer */
Inline void
tTECSUnit_cBalancer_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( sBalancer ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cBalancer = des.vdes;
}

/* [dynamic,optional] cBalancer */
Inline void
tTECSUnit_cBalancer_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cBalancer = NULL;
}

/* [dynamic] cSharedMemory */
Inline void
tTECSUnit_cSharedMemory_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( sSharedMemory ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cSharedMemory = des.vdes;
}

/* [dynamic,optional] cSharedMemory */
Inline void
tTECSUnit_cSharedMemory_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cSharedMemory = NULL;
}

/* [dynamic] cTarget1 */
Inline void
tTECSUnit_cTarget1_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( sTarget1 ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cTarget1 = des.vdes;
}

/* [dynamic,optional] cTarget1 */
Inline void
tTECSUnit_cTarget1_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cTarget1 = NULL;
}

/* [dynamic] cTarget2 */
Inline void
tTECSUnit_cTarget2_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( sTarget2 ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cTarget2 = des.vdes;
}

/* [dynamic,optional] cTarget2 */
Inline void
tTECSUnit_cTarget2_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cTarget2 = NULL;
}

/* [dynamic] cTarget3 */
Inline void
tTECSUnit_cTarget3_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( sTarget3 ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cTarget3 = des.vdes;
}

/* [dynamic,optional] cTarget3 */
Inline void
tTECSUnit_cTarget3_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cTarget3 = NULL;
}

/* [dynamic] cInitializeBridge */
Inline void
tTECSUnit_cInitializeBridge_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( nMruby_sInitializeBridge ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cInitializeBridge = des.vdes;
}

/* [dynamic,optional] cInitializeBridge */
Inline void
tTECSUnit_cInitializeBridge_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cInitializeBridge = NULL;
}

/* [dynamic] cInitializeTECSBridge */
Inline void
tTECSUnit_cInitializeTECSBridge_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( nMruby_sInitializeTECSBridge ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cInitializeTECSBridge = des.vdes;
}

/* [dynamic,optional] cInitializeTECSBridge */
Inline void
tTECSUnit_cInitializeTECSBridge_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cInitializeTECSBridge = NULL;
}

/* [dynamic] cMrubyVM */
Inline void
tTECSUnit_cMrubyVM_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( nMruby_sMrubyVM ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cMrubyVM = des.vdes;
}

/* [dynamic,optional] cMrubyVM */
Inline void
tTECSUnit_cMrubyVM_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cMrubyVM = NULL;
}

/* [dynamic] cMain */
Inline void
tTECSUnit_cMain_set_descriptor( tTECSUnit_CB  *p_that, Descriptor( nPosix_sMain ) des )
{
    tTECSUnit_CB *p_cellcb = p_that;
    assert( des.vdes != NULL );
    (p_cellcb)->cMain = des.vdes;
}

/* [dynamic,optional] cMain */
Inline void
tTECSUnit_cMain_unjoin( tTECSUnit_CB  *p_that  )
{
    tTECSUnit_CB *p_cellcb = p_that;
    (p_cellcb)->cMain = NULL;
}

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tTECSUnit_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tTECSUnit_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tTECSUnit_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tTECSUnit_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_LEN             tTECSUnit_ATTR_LEN( p_cellcb )


/* var アクセスマクロ(短縮形) #_VAMA_# */
#define VAR_out_int          tTECSUnit_VAR_out_int( p_cellcb )
#define VAR_out_double       tTECSUnit_VAR_out_double( p_cellcb )
#define VAR_out_char         tTECSUnit_VAR_out_char( p_cellcb )
#define VAR_cell_entry       tTECSUnit_VAR_cell_entry( p_cellcb )

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cTECSInfo_findNamespace( namespace_path, nsDesc ) \
          ((void)p_cellcb, tTECSUnit_cTECSInfo_findNamespace( p_cellcb, namespace_path, nsDesc ))
#define cTECSInfo_findRegion( namespace_path, regionDesc ) \
          ((void)p_cellcb, tTECSUnit_cTECSInfo_findRegion( p_cellcb, namespace_path, regionDesc ))
#define cTECSInfo_findSignature( namespace_path, signatureDesc ) \
          ((void)p_cellcb, tTECSUnit_cTECSInfo_findSignature( p_cellcb, namespace_path, signatureDesc ))
#define cTECSInfo_findCelltype( namespace_path, celltypeDesc ) \
          ((void)p_cellcb, tTECSUnit_cTECSInfo_findCelltype( p_cellcb, namespace_path, celltypeDesc ))
#define cTECSInfo_findCell( namespace_path, cellDesc ) \
          ((void)p_cellcb, tTECSUnit_cTECSInfo_findCell( p_cellcb, namespace_path, cellDesc ))
#define cTECSInfo_findRawEntryDescriptor( namespace_path, rawEntryDescDesc, entryDesc ) \
          ((void)p_cellcb, tTECSUnit_cTECSInfo_findRawEntryDescriptor( p_cellcb, namespace_path, rawEntryDescDesc, entryDesc ))
#define cTECSInfo_findRawEntryDescriptor_unsafe( namespace_path, subsc, rawDesc ) \
          ((void)p_cellcb, tTECSUnit_cTECSInfo_findRawEntryDescriptor_unsafe( p_cellcb, namespace_path, subsc, rawDesc ))
#define cNSInfo_getName( name, max_len ) \
          tTECSUnit_cNSInfo_getName( p_cellcb, name, max_len )
#define cNSInfo_getNameLength( ) \
          tTECSUnit_cNSInfo_getNameLength( p_cellcb )
#define cNSInfo_getNNamespace( ) \
          tTECSUnit_cNSInfo_getNNamespace( p_cellcb )
#define cNSInfo_getNamespaceInfo( ith, des ) \
          tTECSUnit_cNSInfo_getNamespaceInfo( p_cellcb, ith, des )
#define cNSInfo_getNSignature( ) \
          tTECSUnit_cNSInfo_getNSignature( p_cellcb )
#define cNSInfo_getSignatureInfo( ith, des ) \
          tTECSUnit_cNSInfo_getSignatureInfo( p_cellcb, ith, des )
#define cNSInfo_getNCelltype( ) \
          tTECSUnit_cNSInfo_getNCelltype( p_cellcb )
#define cNSInfo_getCelltypeInfo( ith, des ) \
          tTECSUnit_cNSInfo_getCelltypeInfo( p_cellcb, ith, des )
#define cRegionInfo_getName( name, max_len ) \
          tTECSUnit_cRegionInfo_getName( p_cellcb, name, max_len )
#define cRegionInfo_getNameLength( ) \
          tTECSUnit_cRegionInfo_getNameLength( p_cellcb )
#define cRegionInfo_getNCell( ) \
          tTECSUnit_cRegionInfo_getNCell( p_cellcb )
#define cRegionInfo_getCellInfo( ith, des ) \
          tTECSUnit_cRegionInfo_getCellInfo( p_cellcb, ith, des )
#define cRegionInfo_getNRegion( ) \
          tTECSUnit_cRegionInfo_getNRegion( p_cellcb )
#define cRegionInfo_getRegionInfo( ith, des ) \
          tTECSUnit_cRegionInfo_getRegionInfo( p_cellcb, ith, des )
#define cCellInfo_getName( name, max_len ) \
          tTECSUnit_cCellInfo_getName( p_cellcb, name, max_len )
#define cCellInfo_getNameLength( ) \
          tTECSUnit_cCellInfo_getNameLength( p_cellcb )
#define cCellInfo_getNRawEntryDescriptorInfo( ) \
          tTECSUnit_cCellInfo_getNRawEntryDescriptorInfo( p_cellcb )
#define cCellInfo_getRawEntryDescriptorInfo( index, desc ) \
          tTECSUnit_cCellInfo_getRawEntryDescriptorInfo( p_cellcb, index, desc )
#define cCellInfo_getCelltypeInfo( desc ) \
          tTECSUnit_cCellInfo_getCelltypeInfo( p_cellcb, desc )
#define cCellInfo_getCBP( cbp ) \
          tTECSUnit_cCellInfo_getCBP( p_cellcb, cbp )
#define cCellInfo_getINIBP( inibp ) \
          tTECSUnit_cCellInfo_getINIBP( p_cellcb, inibp )
#define cSignatureInfo_getName( name, max_len ) \
          tTECSUnit_cSignatureInfo_getName( p_cellcb, name, max_len )
#define cSignatureInfo_getNameLength( ) \
          tTECSUnit_cSignatureInfo_getNameLength( p_cellcb )
#define cSignatureInfo_getNFunction( ) \
          tTECSUnit_cSignatureInfo_getNFunction( p_cellcb )
#define cSignatureInfo_getFunctionInfo( ith, desc ) \
          tTECSUnit_cSignatureInfo_getFunctionInfo( p_cellcb, ith, desc )
#define cCelltypeInfo_getName( name, max_len ) \
          tTECSUnit_cCelltypeInfo_getName( p_cellcb, name, max_len )
#define cCelltypeInfo_getNameLength( ) \
          tTECSUnit_cCelltypeInfo_getNameLength( p_cellcb )
#define cCelltypeInfo_getNAttr( ) \
          tTECSUnit_cCelltypeInfo_getNAttr( p_cellcb )
#define cCelltypeInfo_getAttrInfo( ith, desc ) \
          tTECSUnit_cCelltypeInfo_getAttrInfo( p_cellcb, ith, desc )
#define cCelltypeInfo_getNVar( ) \
          tTECSUnit_cCelltypeInfo_getNVar( p_cellcb )
#define cCelltypeInfo_getVarInfo( ith, desc ) \
          tTECSUnit_cCelltypeInfo_getVarInfo( p_cellcb, ith, desc )
#define cCelltypeInfo_getNCall( ) \
          tTECSUnit_cCelltypeInfo_getNCall( p_cellcb )
#define cCelltypeInfo_getCallInfo( ith, desc ) \
          tTECSUnit_cCelltypeInfo_getCallInfo( p_cellcb, ith, desc )
#define cCelltypeInfo_getNEntry( ) \
          tTECSUnit_cCelltypeInfo_getNEntry( p_cellcb )
#define cCelltypeInfo_getEntryInfo( ith, desc ) \
          tTECSUnit_cCelltypeInfo_getEntryInfo( p_cellcb, ith, desc )
#define cCelltypeInfo_isSingleton( ) \
          tTECSUnit_cCelltypeInfo_isSingleton( p_cellcb )
#define cCelltypeInfo_isIDX_is_ID( ) \
          tTECSUnit_cCelltypeInfo_isIDX_is_ID( p_cellcb )
#define cCelltypeInfo_sizeOfCB( ) \
          tTECSUnit_cCelltypeInfo_sizeOfCB( p_cellcb )
#define cCelltypeInfo_sizeOfINIB( ) \
          tTECSUnit_cCelltypeInfo_sizeOfINIB( p_cellcb )
#define cVarDeclInfo_getName( name, max_len ) \
          tTECSUnit_cVarDeclInfo_getName( p_cellcb, name, max_len )
#define cVarDeclInfo_getNameLength( ) \
          tTECSUnit_cVarDeclInfo_getNameLength( p_cellcb )
#define cVarDeclInfo_getLocationInfo( offset, place ) \
          tTECSUnit_cVarDeclInfo_getLocationInfo( p_cellcb, offset, place )
#define cVarDeclInfo_getTypeInfo( desc ) \
          tTECSUnit_cVarDeclInfo_getTypeInfo( p_cellcb, desc )
#define cVarDeclInfo_getSizeIsExpr( expr_str, max_len ) \
          tTECSUnit_cVarDeclInfo_getSizeIsExpr( p_cellcb, expr_str, max_len )
#define cVarDeclInfo_getSizeIs( size, p_cb ) \
          tTECSUnit_cVarDeclInfo_getSizeIs( p_cellcb, size, p_cb )
#define cTypeInfo_getName( name, max_len ) \
          tTECSUnit_cTypeInfo_getName( p_cellcb, name, max_len )
#define cTypeInfo_getNameLength( ) \
          tTECSUnit_cTypeInfo_getNameLength( p_cellcb )
#define cTypeInfo_getSize( ) \
          tTECSUnit_cTypeInfo_getSize( p_cellcb )
#define cTypeInfo_getKind( ) \
          tTECSUnit_cTypeInfo_getKind( p_cellcb )
#define cTypeInfo_getNType( ) \
          tTECSUnit_cTypeInfo_getNType( p_cellcb )
#define cTypeInfo_getTypeInfo( desc ) \
          tTECSUnit_cTypeInfo_getTypeInfo( p_cellcb, desc )
#define cTypeInfo_getNMember( ) \
          tTECSUnit_cTypeInfo_getNMember( p_cellcb )
#define cTypeInfo_getMemberInfo( ith, desc ) \
          tTECSUnit_cTypeInfo_getMemberInfo( p_cellcb, ith, desc )
#define cREDInfo_getNRawEntryDescriptorInfo( ) \
          tTECSUnit_cREDInfo_getNRawEntryDescriptorInfo( p_cellcb )
#define cREDInfo_getRawDescriptor( subsc, rawDesc ) \
          tTECSUnit_cREDInfo_getRawDescriptor( p_cellcb, subsc, rawDesc )
#define cEntryInfo_getName( name, max_len ) \
          tTECSUnit_cEntryInfo_getName( p_cellcb, name, max_len )
#define cEntryInfo_getNameLength( ) \
          tTECSUnit_cEntryInfo_getNameLength( p_cellcb )
#define cEntryInfo_getSignatureInfo( desc ) \
          tTECSUnit_cEntryInfo_getSignatureInfo( p_cellcb, desc )
#define cEntryInfo_getArraySize( ) \
          tTECSUnit_cEntryInfo_getArraySize( p_cellcb )
#define cEntryInfo_isInline( ) \
          tTECSUnit_cEntryInfo_isInline( p_cellcb )
#define ciTask_activate( ) \
          tTECSUnit_ciTask_activate( p_cellcb )
#define ciTask_wakeup( ) \
          tTECSUnit_ciTask_wakeup( p_cellcb )
#define ciTask_releaseWait( ) \
          tTECSUnit_ciTask_releaseWait( p_cellcb )
#define ciTask_raiseException( pattern ) \
          tTECSUnit_ciTask_raiseException( p_cellcb, pattern )
#define ciTask_disableWait( ) \
          tTECSUnit_ciTask_disableWait( p_cellcb )
#define ciTask_enableWait( ) \
          tTECSUnit_ciTask_enableWait( p_cellcb )
#define ciTask_startOverRunHandler( ovrtim ) \
          tTECSUnit_ciTask_startOverRunHandler( p_cellcb, ovrtim )
#define ciTask_stopOverRunHandler( ) \
          tTECSUnit_ciTask_stopOverRunHandler( p_cellcb )
#define cInitializeRoutineBody_main( ) \
          tTECSUnit_cInitializeRoutineBody_main( p_cellcb )
#define cTerminateRoutineBody_main( ) \
          tTECSUnit_cTerminateRoutineBody_main( p_cellcb )
#define ciHandlerBody_main( ) \
          tTECSUnit_ciHandlerBody_main( p_cellcb )
#define cConfigInterrupt_disable( ) \
          tTECSUnit_cConfigInterrupt_disable( p_cellcb )
#define cConfigInterrupt_enable( ) \
          tTECSUnit_cConfigInterrupt_enable( p_cellcb )
#define cCyclic_start( ) \
          tTECSUnit_cCyclic_start( p_cellcb )
#define cCyclic_stop( ) \
          tTECSUnit_cCyclic_stop( p_cellcb )
#define cCyclic_refer( pk_cyclicHandlerStatus ) \
          tTECSUnit_cCyclic_refer( p_cellcb, pk_cyclicHandlerStatus )
#define cAlarm_start( alarmTime ) \
          tTECSUnit_cAlarm_start( p_cellcb, alarmTime )
#define cAlarm_stop( ) \
          tTECSUnit_cAlarm_stop( p_cellcb )
#define cAlarm_refer( pk_alarmStatus ) \
          tTECSUnit_cAlarm_refer( p_cellcb, pk_alarmStatus )
#define ciAlarm_start( alarmTime ) \
          tTECSUnit_ciAlarm_start( p_cellcb, alarmTime )
#define ciAlarm_stop( ) \
          tTECSUnit_ciAlarm_stop( p_cellcb )
#define cFixedSizeMemoryPool_get( p_block ) \
          tTECSUnit_cFixedSizeMemoryPool_get( p_cellcb, p_block )
#define cFixedSizeMemoryPool_getPolling( p_block ) \
          tTECSUnit_cFixedSizeMemoryPool_getPolling( p_cellcb, p_block )
#define cFixedSizeMemoryPool_getTimeout( p_block, timeout ) \
          tTECSUnit_cFixedSizeMemoryPool_getTimeout( p_cellcb, p_block, timeout )
#define cFixedSizeMemoryPool_release( block ) \
          tTECSUnit_cFixedSizeMemoryPool_release( p_cellcb, block )
#define cFixedSizeMemoryPool_initialize( ) \
          tTECSUnit_cFixedSizeMemoryPool_initialize( p_cellcb )
#define cFixedSizeMemoryPool_refer( pk_memoryPoolFixedSizeStatus ) \
          tTECSUnit_cFixedSizeMemoryPool_refer( p_cellcb, pk_memoryPoolFixedSizeStatus )
#define cMessageBuffer_send( message, size ) \
          tTECSUnit_cMessageBuffer_send( p_cellcb, message, size )
#define cMessageBuffer_sendPolling( message, size ) \
          tTECSUnit_cMessageBuffer_sendPolling( p_cellcb, message, size )
#define cMessageBuffer_sendTimeout( message, size, timeout ) \
          tTECSUnit_cMessageBuffer_sendTimeout( p_cellcb, message, size, timeout )
#define cMessageBuffer_receive( message ) \
          tTECSUnit_cMessageBuffer_receive( p_cellcb, message )
#define cMessageBuffer_receivePolling( message ) \
          tTECSUnit_cMessageBuffer_receivePolling( p_cellcb, message )
#define cMessageBuffer_receiveTimeout( message, timeout ) \
          tTECSUnit_cMessageBuffer_receiveTimeout( p_cellcb, message, timeout )
#define cMessageBuffer_initialize( ) \
          tTECSUnit_cMessageBuffer_initialize( p_cellcb )
#define cMessageBuffer_refer( packet ) \
          tTECSUnit_cMessageBuffer_refer( p_cellcb, packet )
#define cMalloc_initializeMemoryPool( ) \
          tTECSUnit_cMalloc_initializeMemoryPool( p_cellcb )
#define cMalloc_calloc( nelem, elem_size ) \
          tTECSUnit_cMalloc_calloc( p_cellcb, nelem, elem_size )
#define cMalloc_malloc( size ) \
          tTECSUnit_cMalloc_malloc( p_cellcb, size )
#define cMalloc_realloc( ptr, new_size ) \
          tTECSUnit_cMalloc_realloc( p_cellcb, ptr, new_size )
#define cMalloc_free( ptr ) \
          tTECSUnit_cMalloc_free( p_cellcb, ptr )
#define cUltrasonicSensor_getDistance( ) \
          tTECSUnit_cUltrasonicSensor_getDistance( p_cellcb )
#define cUltrasonicSensor_listen( ) \
          tTECSUnit_cUltrasonicSensor_listen( p_cellcb )
#define cUltrasonicSensor_initializePort( ) \
          tTECSUnit_cUltrasonicSensor_initializePort( p_cellcb )
#define cColorSensor_getColor( ) \
          tTECSUnit_cColorSensor_getColor( p_cellcb )
#define cColorSensor_getReflect( ) \
          tTECSUnit_cColorSensor_getReflect( p_cellcb )
#define cColorSensor_getAmbient( ) \
          tTECSUnit_cColorSensor_getAmbient( p_cellcb )
#define cColorSensor_initializePort( ) \
          tTECSUnit_cColorSensor_initializePort( p_cellcb )
#define cColorSensor_getRGBRaw( r, g, b ) \
          tTECSUnit_cColorSensor_getRGBRaw( p_cellcb, r, g, b )
#define cTouchSensor_isPressed( ) \
          tTECSUnit_cTouchSensor_isPressed( p_cellcb )
#define cTouchSensor_initializePort( ) \
          tTECSUnit_cTouchSensor_initializePort( p_cellcb )
#define cGyroSensor_getAngle( ) \
          tTECSUnit_cGyroSensor_getAngle( p_cellcb )
#define cGyroSensor_getRate( ) \
          tTECSUnit_cGyroSensor_getRate( p_cellcb )
#define cGyroSensor_reset( ) \
          tTECSUnit_cGyroSensor_reset( p_cellcb )
#define cGyroSensor_calibrate( times ) \
          tTECSUnit_cGyroSensor_calibrate( p_cellcb, times )
#define cGyroSensor_initializePort( ) \
          tTECSUnit_cGyroSensor_initializePort( p_cellcb )
#define cMotor_getType( ) \
          tTECSUnit_cMotor_getType( p_cellcb )
#define cMotor_getCounts( ) \
          tTECSUnit_cMotor_getCounts( p_cellcb )
#define cMotor_getPower( ) \
          tTECSUnit_cMotor_getPower( p_cellcb )
#define cMotor_resetCounts( ) \
          tTECSUnit_cMotor_resetCounts( p_cellcb )
#define cMotor_setPower( power ) \
          tTECSUnit_cMotor_setPower( p_cellcb, power )
#define cMotor_stop( brake ) \
          tTECSUnit_cMotor_stop( p_cellcb, brake )
#define cMotor_rotate( degrees, speed_abs, blocking ) \
          tTECSUnit_cMotor_rotate( p_cellcb, degrees, speed_abs, blocking )
#define cMotor_initializePort( type ) \
          tTECSUnit_cMotor_initializePort( p_cellcb, type )
#define cButton_isPressed( button ) \
          tTECSUnit_cButton_isPressed( p_cellcb, button )
#define cLCD_setFont( font ) \
          tTECSUnit_cLCD_setFont( p_cellcb, font )
#define cLCD_getFontSize( font, p_width, p_height ) \
          tTECSUnit_cLCD_getFontSize( p_cellcb, font, p_width, p_height )
#define cLCD_drawString( str, x, y ) \
          tTECSUnit_cLCD_drawString( p_cellcb, str, x, y )
#define cLCD_fillRect( x, y, w, h, color ) \
          tTECSUnit_cLCD_fillRect( p_cellcb, x, y, w, h, color )
#define cLCD_drawLine( x0, y0, x1, y1 ) \
          tTECSUnit_cLCD_drawLine( p_cellcb, x0, y0, x1, y1 )
#define cLCD_print( str ) \
          tTECSUnit_cLCD_print( p_cellcb, str )
#define cLCD_puts( str ) \
          tTECSUnit_cLCD_puts( p_cellcb, str )
#define cLCD_clear( ) \
          tTECSUnit_cLCD_clear( p_cellcb )
#define cLCD_showMessageBox( title, msg ) \
          tTECSUnit_cLCD_showMessageBox( p_cellcb, title, msg )
#define cLED_setColor( color ) \
          tTECSUnit_cLED_setColor( p_cellcb, color )
#define cLED_off( ) \
          tTECSUnit_cLED_off( p_cellcb )
#define cBattery_current_mA( ) \
          tTECSUnit_cBattery_current_mA( p_cellcb )
#define cBattery_voltage_mV( ) \
          tTECSUnit_cBattery_voltage_mV( p_cellcb )
#define cSpeaker_setVolume( volume ) \
          tTECSUnit_cSpeaker_setVolume( p_cellcb, volume )
#define cSpeaker_playTone( frequency, duration ) \
          tTECSUnit_cSpeaker_playTone( p_cellcb, frequency, duration )
#define cSpeaker_stop( ) \
          tTECSUnit_cSpeaker_stop( p_cellcb )
#define cRiteVM_reset( ) \
          tTECSUnit_cRiteVM_reset( p_cellcb )
#define cBalancer_control( forward, turn, gyro, gyroOffset, leftRevolution, rightRevolution, battery, pwm_l, pwm_r, backlashhalf ) \
          tTECSUnit_cBalancer_control( p_cellcb, forward, turn, gyro, gyroOffset, leftRevolution, rightRevolution, battery, pwm_l, pwm_r, backlashhalf )
#define cBalancer_init( ) \
          tTECSUnit_cBalancer_init( p_cellcb )
#define cSharedMemory_putVal( index, val ) \
          tTECSUnit_cSharedMemory_putVal( p_cellcb, index, val )
#define cSharedMemory_getVal( index ) \
          tTECSUnit_cSharedMemory_getVal( p_cellcb, index )
#define cSharedMemory_getSize( ) \
          tTECSUnit_cSharedMemory_getSize( p_cellcb )
#define cTarget1_double( arg ) \
          tTECSUnit_cTarget1_double( p_cellcb, arg )
#define cTarget2_add( arg1, arg2 ) \
          tTECSUnit_cTarget2_add( p_cellcb, arg1, arg2 )
#define cTarget3_send( buf, len ) \
          tTECSUnit_cTarget3_send( p_cellcb, buf, len )
#define cTarget3_sendMessage( buf, len ) \
          tTECSUnit_cTarget3_sendMessage( p_cellcb, buf, len )
#define cTarget3_receiveMessage( buf, len ) \
          tTECSUnit_cTarget3_receiveMessage( p_cellcb, buf, len )
#define cTarget3_checkER( eroor ) \
          tTECSUnit_cTarget3_checkER( p_cellcb, eroor )
#define cInitializeBridge_initializeBridge( mrb ) \
          tTECSUnit_cInitializeBridge_initializeBridge( p_cellcb, mrb )
#define cInitializeTECSBridge_initializeBridge( mrb, TECS ) \
          tTECSUnit_cInitializeTECSBridge_initializeBridge( p_cellcb, mrb, TECS )
#define cMrubyVM_initialize( ) \
          tTECSUnit_cMrubyVM_initialize( p_cellcb )
#define cMrubyVM_run( ) \
          tTECSUnit_cMrubyVM_run( p_cellcb )
#define cMrubyVM_funcall( name ) \
          tTECSUnit_cMrubyVM_funcall( p_cellcb, name )
#define cMrubyVM_finalize( ) \
          tTECSUnit_cMrubyVM_finalize( p_cellcb )
#define cMain_main( argc, argv ) \
          tTECSUnit_cMain_main( p_cellcb, argc, argv )



/* ディスクリプタ設定マクロ（短縮形） #_SDMA_# */
#define cNSInfo_set_descriptor( desc )\
          tTECSUnit_cNSInfo_set_descriptor( p_cellcb, desc )
#define cNSInfo_unjoin(  )\
          tTECSUnit_cNSInfo_unjoin( p_cellcb )
#define cRegionInfo_set_descriptor( desc )\
          tTECSUnit_cRegionInfo_set_descriptor( p_cellcb, desc )
#define cRegionInfo_unjoin(  )\
          tTECSUnit_cRegionInfo_unjoin( p_cellcb )
#define cCellInfo_set_descriptor( desc )\
          tTECSUnit_cCellInfo_set_descriptor( p_cellcb, desc )
#define cCellInfo_unjoin(  )\
          tTECSUnit_cCellInfo_unjoin( p_cellcb )
#define cSignatureInfo_set_descriptor( desc )\
          tTECSUnit_cSignatureInfo_set_descriptor( p_cellcb, desc )
#define cSignatureInfo_unjoin(  )\
          tTECSUnit_cSignatureInfo_unjoin( p_cellcb )
#define cCelltypeInfo_set_descriptor( desc )\
          tTECSUnit_cCelltypeInfo_set_descriptor( p_cellcb, desc )
#define cCelltypeInfo_unjoin(  )\
          tTECSUnit_cCelltypeInfo_unjoin( p_cellcb )
#define cVarDeclInfo_set_descriptor( desc )\
          tTECSUnit_cVarDeclInfo_set_descriptor( p_cellcb, desc )
#define cVarDeclInfo_unjoin(  )\
          tTECSUnit_cVarDeclInfo_unjoin( p_cellcb )
#define cTypeInfo_set_descriptor( desc )\
          tTECSUnit_cTypeInfo_set_descriptor( p_cellcb, desc )
#define cTypeInfo_unjoin(  )\
          tTECSUnit_cTypeInfo_unjoin( p_cellcb )
#define cREDInfo_set_descriptor( desc )\
          tTECSUnit_cREDInfo_set_descriptor( p_cellcb, desc )
#define cREDInfo_unjoin(  )\
          tTECSUnit_cREDInfo_unjoin( p_cellcb )
#define cEntryInfo_set_descriptor( desc )\
          tTECSUnit_cEntryInfo_set_descriptor( p_cellcb, desc )
#define cEntryInfo_unjoin(  )\
          tTECSUnit_cEntryInfo_unjoin( p_cellcb )
#define ciTask_set_descriptor( desc )\
          tTECSUnit_ciTask_set_descriptor( p_cellcb, desc )
#define ciTask_unjoin(  )\
          tTECSUnit_ciTask_unjoin( p_cellcb )
#define cInitializeRoutineBody_set_descriptor( desc )\
          tTECSUnit_cInitializeRoutineBody_set_descriptor( p_cellcb, desc )
#define cInitializeRoutineBody_unjoin(  )\
          tTECSUnit_cInitializeRoutineBody_unjoin( p_cellcb )
#define cTerminateRoutineBody_set_descriptor( desc )\
          tTECSUnit_cTerminateRoutineBody_set_descriptor( p_cellcb, desc )
#define cTerminateRoutineBody_unjoin(  )\
          tTECSUnit_cTerminateRoutineBody_unjoin( p_cellcb )
#define ciHandlerBody_set_descriptor( desc )\
          tTECSUnit_ciHandlerBody_set_descriptor( p_cellcb, desc )
#define ciHandlerBody_unjoin(  )\
          tTECSUnit_ciHandlerBody_unjoin( p_cellcb )
#define cConfigInterrupt_set_descriptor( desc )\
          tTECSUnit_cConfigInterrupt_set_descriptor( p_cellcb, desc )
#define cConfigInterrupt_unjoin(  )\
          tTECSUnit_cConfigInterrupt_unjoin( p_cellcb )
#define cCyclic_set_descriptor( desc )\
          tTECSUnit_cCyclic_set_descriptor( p_cellcb, desc )
#define cCyclic_unjoin(  )\
          tTECSUnit_cCyclic_unjoin( p_cellcb )
#define cAlarm_set_descriptor( desc )\
          tTECSUnit_cAlarm_set_descriptor( p_cellcb, desc )
#define cAlarm_unjoin(  )\
          tTECSUnit_cAlarm_unjoin( p_cellcb )
#define ciAlarm_set_descriptor( desc )\
          tTECSUnit_ciAlarm_set_descriptor( p_cellcb, desc )
#define ciAlarm_unjoin(  )\
          tTECSUnit_ciAlarm_unjoin( p_cellcb )
#define cFixedSizeMemoryPool_set_descriptor( desc )\
          tTECSUnit_cFixedSizeMemoryPool_set_descriptor( p_cellcb, desc )
#define cFixedSizeMemoryPool_unjoin(  )\
          tTECSUnit_cFixedSizeMemoryPool_unjoin( p_cellcb )
#define cMessageBuffer_set_descriptor( desc )\
          tTECSUnit_cMessageBuffer_set_descriptor( p_cellcb, desc )
#define cMessageBuffer_unjoin(  )\
          tTECSUnit_cMessageBuffer_unjoin( p_cellcb )
#define cMalloc_set_descriptor( desc )\
          tTECSUnit_cMalloc_set_descriptor( p_cellcb, desc )
#define cMalloc_unjoin(  )\
          tTECSUnit_cMalloc_unjoin( p_cellcb )
#define cUltrasonicSensor_set_descriptor( desc )\
          tTECSUnit_cUltrasonicSensor_set_descriptor( p_cellcb, desc )
#define cUltrasonicSensor_unjoin(  )\
          tTECSUnit_cUltrasonicSensor_unjoin( p_cellcb )
#define cColorSensor_set_descriptor( desc )\
          tTECSUnit_cColorSensor_set_descriptor( p_cellcb, desc )
#define cColorSensor_unjoin(  )\
          tTECSUnit_cColorSensor_unjoin( p_cellcb )
#define cTouchSensor_set_descriptor( desc )\
          tTECSUnit_cTouchSensor_set_descriptor( p_cellcb, desc )
#define cTouchSensor_unjoin(  )\
          tTECSUnit_cTouchSensor_unjoin( p_cellcb )
#define cGyroSensor_set_descriptor( desc )\
          tTECSUnit_cGyroSensor_set_descriptor( p_cellcb, desc )
#define cGyroSensor_unjoin(  )\
          tTECSUnit_cGyroSensor_unjoin( p_cellcb )
#define cMotor_set_descriptor( desc )\
          tTECSUnit_cMotor_set_descriptor( p_cellcb, desc )
#define cMotor_unjoin(  )\
          tTECSUnit_cMotor_unjoin( p_cellcb )
#define cButton_set_descriptor( desc )\
          tTECSUnit_cButton_set_descriptor( p_cellcb, desc )
#define cButton_unjoin(  )\
          tTECSUnit_cButton_unjoin( p_cellcb )
#define cLCD_set_descriptor( desc )\
          tTECSUnit_cLCD_set_descriptor( p_cellcb, desc )
#define cLCD_unjoin(  )\
          tTECSUnit_cLCD_unjoin( p_cellcb )
#define cLED_set_descriptor( desc )\
          tTECSUnit_cLED_set_descriptor( p_cellcb, desc )
#define cLED_unjoin(  )\
          tTECSUnit_cLED_unjoin( p_cellcb )
#define cBattery_set_descriptor( desc )\
          tTECSUnit_cBattery_set_descriptor( p_cellcb, desc )
#define cBattery_unjoin(  )\
          tTECSUnit_cBattery_unjoin( p_cellcb )
#define cSpeaker_set_descriptor( desc )\
          tTECSUnit_cSpeaker_set_descriptor( p_cellcb, desc )
#define cSpeaker_unjoin(  )\
          tTECSUnit_cSpeaker_unjoin( p_cellcb )
#define cRiteVM_set_descriptor( desc )\
          tTECSUnit_cRiteVM_set_descriptor( p_cellcb, desc )
#define cRiteVM_unjoin(  )\
          tTECSUnit_cRiteVM_unjoin( p_cellcb )
#define cBalancer_set_descriptor( desc )\
          tTECSUnit_cBalancer_set_descriptor( p_cellcb, desc )
#define cBalancer_unjoin(  )\
          tTECSUnit_cBalancer_unjoin( p_cellcb )
#define cSharedMemory_set_descriptor( desc )\
          tTECSUnit_cSharedMemory_set_descriptor( p_cellcb, desc )
#define cSharedMemory_unjoin(  )\
          tTECSUnit_cSharedMemory_unjoin( p_cellcb )
#define cTarget1_set_descriptor( desc )\
          tTECSUnit_cTarget1_set_descriptor( p_cellcb, desc )
#define cTarget1_unjoin(  )\
          tTECSUnit_cTarget1_unjoin( p_cellcb )
#define cTarget2_set_descriptor( desc )\
          tTECSUnit_cTarget2_set_descriptor( p_cellcb, desc )
#define cTarget2_unjoin(  )\
          tTECSUnit_cTarget2_unjoin( p_cellcb )
#define cTarget3_set_descriptor( desc )\
          tTECSUnit_cTarget3_set_descriptor( p_cellcb, desc )
#define cTarget3_unjoin(  )\
          tTECSUnit_cTarget3_unjoin( p_cellcb )
#define cInitializeBridge_set_descriptor( desc )\
          tTECSUnit_cInitializeBridge_set_descriptor( p_cellcb, desc )
#define cInitializeBridge_unjoin(  )\
          tTECSUnit_cInitializeBridge_unjoin( p_cellcb )
#define cInitializeTECSBridge_set_descriptor( desc )\
          tTECSUnit_cInitializeTECSBridge_set_descriptor( p_cellcb, desc )
#define cInitializeTECSBridge_unjoin(  )\
          tTECSUnit_cInitializeTECSBridge_unjoin( p_cellcb )
#define cMrubyVM_set_descriptor( desc )\
          tTECSUnit_cMrubyVM_set_descriptor( p_cellcb, desc )
#define cMrubyVM_unjoin(  )\
          tTECSUnit_cMrubyVM_unjoin( p_cellcb )
#define cMain_set_descriptor( desc )\
          tTECSUnit_cMain_set_descriptor( p_cellcb, desc )
#define cMain_unjoin(  )\
          tTECSUnit_cMain_unjoin( p_cellcb )

/* optional 呼び口をテストするマクロ（短縮形） #_TOCPA_# */
#define is_cNSInfo_joined()\
		tTECSUnit_is_cNSInfo_joined(p_cellcb)
#define is_cRegionInfo_joined()\
		tTECSUnit_is_cRegionInfo_joined(p_cellcb)
#define is_cCellInfo_joined()\
		tTECSUnit_is_cCellInfo_joined(p_cellcb)
#define is_cSignatureInfo_joined()\
		tTECSUnit_is_cSignatureInfo_joined(p_cellcb)
#define is_cCelltypeInfo_joined()\
		tTECSUnit_is_cCelltypeInfo_joined(p_cellcb)
#define is_cVarDeclInfo_joined()\
		tTECSUnit_is_cVarDeclInfo_joined(p_cellcb)
#define is_cTypeInfo_joined()\
		tTECSUnit_is_cTypeInfo_joined(p_cellcb)
#define is_cREDInfo_joined()\
		tTECSUnit_is_cREDInfo_joined(p_cellcb)
#define is_cEntryInfo_joined()\
		tTECSUnit_is_cEntryInfo_joined(p_cellcb)
#define is_ciTask_joined()\
		tTECSUnit_is_ciTask_joined(p_cellcb)
#define is_cInitializeRoutineBody_joined()\
		tTECSUnit_is_cInitializeRoutineBody_joined(p_cellcb)
#define is_cTerminateRoutineBody_joined()\
		tTECSUnit_is_cTerminateRoutineBody_joined(p_cellcb)
#define is_ciHandlerBody_joined()\
		tTECSUnit_is_ciHandlerBody_joined(p_cellcb)
#define is_cConfigInterrupt_joined()\
		tTECSUnit_is_cConfigInterrupt_joined(p_cellcb)
#define is_cCyclic_joined()\
		tTECSUnit_is_cCyclic_joined(p_cellcb)
#define is_cAlarm_joined()\
		tTECSUnit_is_cAlarm_joined(p_cellcb)
#define is_ciAlarm_joined()\
		tTECSUnit_is_ciAlarm_joined(p_cellcb)
#define is_cFixedSizeMemoryPool_joined()\
		tTECSUnit_is_cFixedSizeMemoryPool_joined(p_cellcb)
#define is_cMessageBuffer_joined()\
		tTECSUnit_is_cMessageBuffer_joined(p_cellcb)
#define is_cMalloc_joined()\
		tTECSUnit_is_cMalloc_joined(p_cellcb)
#define is_cUltrasonicSensor_joined()\
		tTECSUnit_is_cUltrasonicSensor_joined(p_cellcb)
#define is_cColorSensor_joined()\
		tTECSUnit_is_cColorSensor_joined(p_cellcb)
#define is_cTouchSensor_joined()\
		tTECSUnit_is_cTouchSensor_joined(p_cellcb)
#define is_cGyroSensor_joined()\
		tTECSUnit_is_cGyroSensor_joined(p_cellcb)
#define is_cMotor_joined()\
		tTECSUnit_is_cMotor_joined(p_cellcb)
#define is_cButton_joined()\
		tTECSUnit_is_cButton_joined(p_cellcb)
#define is_cLCD_joined()\
		tTECSUnit_is_cLCD_joined(p_cellcb)
#define is_cLED_joined()\
		tTECSUnit_is_cLED_joined(p_cellcb)
#define is_cBattery_joined()\
		tTECSUnit_is_cBattery_joined(p_cellcb)
#define is_cSpeaker_joined()\
		tTECSUnit_is_cSpeaker_joined(p_cellcb)
#define is_cRiteVM_joined()\
		tTECSUnit_is_cRiteVM_joined(p_cellcb)
#define is_cBalancer_joined()\
		tTECSUnit_is_cBalancer_joined(p_cellcb)
#define is_cSharedMemory_joined()\
		tTECSUnit_is_cSharedMemory_joined(p_cellcb)
#define is_cTarget1_joined()\
		tTECSUnit_is_cTarget1_joined(p_cellcb)
#define is_cTarget2_joined()\
		tTECSUnit_is_cTarget2_joined(p_cellcb)
#define is_cTarget3_joined()\
		tTECSUnit_is_cTarget3_joined(p_cellcb)
#define is_cInitializeBridge_joined()\
		tTECSUnit_is_cInitializeBridge_joined(p_cellcb)
#define is_cInitializeTECSBridge_joined()\
		tTECSUnit_is_cInitializeTECSBridge_joined(p_cellcb)
#define is_cMrubyVM_joined()\
		tTECSUnit_is_cMrubyVM_joined(p_cellcb)
#define is_cMain_joined()\
		tTECSUnit_is_cMain_joined(p_cellcb)

/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eUnit_main       tTECSUnit_eUnit_main

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tTECSUnit_N_CELL; (i)++ ){ \
       (p_cb) = &tTECSUnit_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)\
	(p_that)->cNSInfo = (p_that)->_inib->cNSInfo_init_;\
	(p_that)->cRegionInfo = (p_that)->_inib->cRegionInfo_init_;\
	(p_that)->cCellInfo = (p_that)->_inib->cCellInfo_init_;\
	(p_that)->cSignatureInfo = (p_that)->_inib->cSignatureInfo_init_;\
	(p_that)->cCelltypeInfo = (p_that)->_inib->cCelltypeInfo_init_;\
	(p_that)->cVarDeclInfo = (p_that)->_inib->cVarDeclInfo_init_;\
	(p_that)->cTypeInfo = (p_that)->_inib->cTypeInfo_init_;\
	(p_that)->cREDInfo = (p_that)->_inib->cREDInfo_init_;\
	(p_that)->cEntryInfo = (p_that)->_inib->cEntryInfo_init_;\
	(p_that)->ciTask = (p_that)->_inib->ciTask_init_;\
	(p_that)->cInitializeRoutineBody = (p_that)->_inib->cInitializeRoutineBody_init_;\
	(p_that)->cTerminateRoutineBody = (p_that)->_inib->cTerminateRoutineBody_init_;\
	(p_that)->ciHandlerBody = (p_that)->_inib->ciHandlerBody_init_;\
	(p_that)->cConfigInterrupt = (p_that)->_inib->cConfigInterrupt_init_;\
	(p_that)->cCyclic = (p_that)->_inib->cCyclic_init_;\
	(p_that)->cAlarm = (p_that)->_inib->cAlarm_init_;\
	(p_that)->ciAlarm = (p_that)->_inib->ciAlarm_init_;\
	(p_that)->cFixedSizeMemoryPool = (p_that)->_inib->cFixedSizeMemoryPool_init_;\
	(p_that)->cMessageBuffer = (p_that)->_inib->cMessageBuffer_init_;\
	(p_that)->cMalloc = (p_that)->_inib->cMalloc_init_;\
	(p_that)->cUltrasonicSensor = (p_that)->_inib->cUltrasonicSensor_init_;\
	(p_that)->cColorSensor = (p_that)->_inib->cColorSensor_init_;\
	(p_that)->cTouchSensor = (p_that)->_inib->cTouchSensor_init_;\
	(p_that)->cGyroSensor = (p_that)->_inib->cGyroSensor_init_;\
	(p_that)->cMotor = (p_that)->_inib->cMotor_init_;\
	(p_that)->cButton = (p_that)->_inib->cButton_init_;\
	(p_that)->cLCD = (p_that)->_inib->cLCD_init_;\
	(p_that)->cLED = (p_that)->_inib->cLED_init_;\
	(p_that)->cBattery = (p_that)->_inib->cBattery_init_;\
	(p_that)->cSpeaker = (p_that)->_inib->cSpeaker_init_;\
	(p_that)->cRiteVM = (p_that)->_inib->cRiteVM_init_;\
	(p_that)->cBalancer = (p_that)->_inib->cBalancer_init_;\
	(p_that)->cSharedMemory = (p_that)->_inib->cSharedMemory_init_;\
	(p_that)->cTarget1 = (p_that)->_inib->cTarget1_init_;\
	(p_that)->cTarget2 = (p_that)->_inib->cTarget2_init_;\
	(p_that)->cTarget3 = (p_that)->_inib->cTarget3_init_;\
	(p_that)->cInitializeBridge = (p_that)->_inib->cInitializeBridge_init_;\
	(p_that)->cInitializeTECSBridge = (p_that)->_inib->cInitializeTECSBridge_init_;\
	(p_that)->cMrubyVM = (p_that)->_inib->cMrubyVM_init_;\
	(p_that)->cMain = (p_that)->_inib->cMain_init_;

#define SET_CB_INIB_POINTER(i,p_that)\
	(p_that)->_inib = &tTECSUnit_INIB_tab[(i)];

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tTECSUnit_TECSGENH */
