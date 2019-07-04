#ifndef tCallInfo_FACTORY_H
#define tCallInfo_FACTORY_H
#include "include_all_signature_header.h"

/***** Offset of attr & var of celltype  *****/
#define TOPPERS_CB_TYPE_ONLY

/* In case a celltype has 'inline' entry,
 * some macros are temporally defined
 * even if TOPPERS_CB_TYPE_ONLY is defined.
 * To avoid redefinition warning, undef these macros.
 */
#undef VALID_IDX
#undef GET_CELLCB
#undef CELLCB
#undef CELLIDX
#undef tCallInfo_IDX
#undef ATTR_name
#undef ATTR_offset
#undef ATTR_b_inCB
#undef ATTR_b_optional
#undef ATTR_b_omit
#undef ATTR_b_dynamic
#undef ATTR_b_ref_desc
#undef ATTR_b_allocator_port
#undef ATTR_b_require_port
#undef ATTR_b_VMT_useless
#undef ATTR_b_skelton_useless
#undef ATTR_b_cell_unique
#undef cSignatureInfo_getName
#undef cSignatureInfo_getNameLength
#undef cSignatureInfo_getNFunction
#undef cSignatureInfo_getFunctionInfo
#undef cSignatureInfo_refer_to_descriptor
#undef cSignatureInfo_ref_desc
#undef eCallInfo_getName
#undef eCallInfo_getNameLength
#undef eCallInfo_getSignatureInfo
#undef eCallInfo_getArraySize
#undef eCallInfo_isOptional
#undef eCallInfo_isDynamic
#undef eCallInfo_isRefDesc
#undef eCallInfo_isOmit
#undef FOREACH_CELL

#undef INITIALIZE_CB
#undef FOREACH_CELL
#undef END_FOREACH_CELL

#include "tTask_tecsgen.h"
#define tTask_cBody__offset                                ((uint32_t)(intptr_t)&((tTask_INIB*)0)->cBody)
#define tTask_cBody__array_size                            (0)
#define tTask_cBody__place                                 (CALL_PLACE_INIB_DES)
#define tTask_cBody__b_VMT_useless                         (false)
#define tTask_cBody__b_skelton_useless                     (false)
#define tTask_cBody__b_cell_unique                         (false)
#define tTask_cExceptionBody__offset                       (0xffffffff)
#define tTask_cExceptionBody__array_size                   (0)
#define tTask_cExceptionBody__place                        (CALL_PLACE_NON)
#define tTask_cExceptionBody__b_VMT_useless                (true)
#define tTask_cExceptionBody__b_skelton_useless            (true)
#define tTask_cExceptionBody__b_cell_unique                (true)

#include "tKernel_tecsgen.h"

#include "tUltrasonicSensor_tecsgen.h"

#include "tColorSensor_tecsgen.h"

#include "tTouchSensor_tecsgen.h"

#include "tGyroSensor_tecsgen.h"

#include "tMotor_tecsgen.h"

#include "tButton_tecsgen.h"

#include "tLCD_tecsgen.h"
#define tLCD_cButton__offset                               (0xffffffff)
#define tLCD_cButton__array_size                           (0)
#define tLCD_cButton__place                                (CALL_PLACE_NON)
#define tLCD_cButton__b_VMT_useless                        (true)
#define tLCD_cButton__b_skelton_useless                    (true)
#define tLCD_cButton__b_cell_unique                        (true)

#include "tLED_tecsgen.h"

#include "tBattery_tecsgen.h"

#include "tSpeaker_tecsgen.h"

#include "tEV3Platform_tecsgen.h"
#define tEV3Platform_cRiteVM__offset                       ((uint32_t)(intptr_t)&((tEV3Platform_INIB*)0)->cRiteVM)
#define tEV3Platform_cRiteVM__array_size                   (0xffffffff)
#define tEV3Platform_cRiteVM__place                        (CALL_PLACE_INIB_DES)
#define tEV3Platform_cRiteVM__b_VMT_useless                (false)
#define tEV3Platform_cRiteVM__b_skelton_useless            (false)
#define tEV3Platform_cRiteVM__b_cell_unique                (false)
#define tEV3Platform_cTask__offset                         ((uint32_t)(intptr_t)&((tEV3Platform_INIB*)0)->cTask)
#define tEV3Platform_cTask__array_size                     (0xffffffff)
#define tEV3Platform_cTask__place                          (CALL_PLACE_INIB_DES)
#define tEV3Platform_cTask__b_VMT_useless                  (false)
#define tEV3Platform_cTask__b_skelton_useless              (false)
#define tEV3Platform_cTask__b_cell_unique                  (false)

#include "tBalancer_tecsgen.h"

#include "tSharedMemory_tecsgen.h"

#include "tTarget1_tecsgen.h"

#include "tTarget2_tecsgen.h"

#include "tTarget3_tecsgen.h"

#include "tTaskMain_tecsgen.h"
#define tTaskMain_cUnit__offset                            (0xffffffff)
#define tTaskMain_cUnit__array_size                        (0)
#define tTaskMain_cUnit__place                             (CALL_PLACE_NON)
#define tTaskMain_cUnit__b_VMT_useless                     (true)
#define tTaskMain_cUnit__b_skelton_useless                 (true)
#define tTaskMain_cUnit__b_cell_unique                     (true)
#define tTaskMain_cJSMN__offset                            (0xffffffff)
#define tTaskMain_cJSMN__array_size                        (0)
#define tTaskMain_cJSMN__place                             (CALL_PLACE_NON)
#define tTaskMain_cJSMN__b_VMT_useless                     (true)
#define tTaskMain_cJSMN__b_skelton_useless                 (true)
#define tTaskMain_cJSMN__b_cell_unique                     (true)
#define tTaskMain_cTECSInfo__offset                        (0xffffffff)
#define tTaskMain_cTECSInfo__array_size                    (0)
#define tTaskMain_cTECSInfo__place                         (CALL_PLACE_NON)
#define tTaskMain_cTECSInfo__b_VMT_useless                 (true)
#define tTaskMain_cTECSInfo__b_skelton_useless             (true)
#define tTaskMain_cTECSInfo__b_cell_unique                 (true)
#define tTaskMain_cNSInfo__offset                          ((uint32_t)(intptr_t)&((tTaskMain_CB*)0)->cNSInfo)
#define tTaskMain_cNSInfo__array_size                      (0)
#define tTaskMain_cNSInfo__place                           (CALL_PLACE_CB_DES)
#define tTaskMain_cNSInfo__b_VMT_useless                   (false)
#define tTaskMain_cNSInfo__b_skelton_useless               (false)
#define tTaskMain_cNSInfo__b_cell_unique                   (false)
#define tTaskMain_cRegionInfo__offset                      ((uint32_t)(intptr_t)&((tTaskMain_CB*)0)->cRegionInfo)
#define tTaskMain_cRegionInfo__array_size                  (0)
#define tTaskMain_cRegionInfo__place                       (CALL_PLACE_CB_DES)
#define tTaskMain_cRegionInfo__b_VMT_useless               (false)
#define tTaskMain_cRegionInfo__b_skelton_useless           (false)
#define tTaskMain_cRegionInfo__b_cell_unique               (false)
#define tTaskMain_cCellInfo__offset                        ((uint32_t)(intptr_t)&((tTaskMain_CB*)0)->cCellInfo)
#define tTaskMain_cCellInfo__array_size                    (0)
#define tTaskMain_cCellInfo__place                         (CALL_PLACE_CB_DES)
#define tTaskMain_cCellInfo__b_VMT_useless                 (false)
#define tTaskMain_cCellInfo__b_skelton_useless             (false)
#define tTaskMain_cCellInfo__b_cell_unique                 (false)
#define tTaskMain_cSignatureInfo__offset                   ((uint32_t)(intptr_t)&((tTaskMain_CB*)0)->cSignatureInfo)
#define tTaskMain_cSignatureInfo__array_size               (0)
#define tTaskMain_cSignatureInfo__place                    (CALL_PLACE_CB_DES)
#define tTaskMain_cSignatureInfo__b_VMT_useless            (false)
#define tTaskMain_cSignatureInfo__b_skelton_useless        (false)
#define tTaskMain_cSignatureInfo__b_cell_unique            (false)
#define tTaskMain_cCelltypeInfo__offset                    ((uint32_t)(intptr_t)&((tTaskMain_CB*)0)->cCelltypeInfo)
#define tTaskMain_cCelltypeInfo__array_size                (0)
#define tTaskMain_cCelltypeInfo__place                     (CALL_PLACE_CB_DES)
#define tTaskMain_cCelltypeInfo__b_VMT_useless             (false)
#define tTaskMain_cCelltypeInfo__b_skelton_useless         (false)
#define tTaskMain_cCelltypeInfo__b_cell_unique             (false)
#define tTaskMain_cVarDeclInfo__offset                     ((uint32_t)(intptr_t)&((tTaskMain_CB*)0)->cVarDeclInfo)
#define tTaskMain_cVarDeclInfo__array_size                 (0)
#define tTaskMain_cVarDeclInfo__place                      (CALL_PLACE_CB_DES)
#define tTaskMain_cVarDeclInfo__b_VMT_useless              (false)
#define tTaskMain_cVarDeclInfo__b_skelton_useless          (false)
#define tTaskMain_cVarDeclInfo__b_cell_unique              (false)
#define tTaskMain_cTypeInfo__offset                        ((uint32_t)(intptr_t)&((tTaskMain_CB*)0)->cTypeInfo)
#define tTaskMain_cTypeInfo__array_size                    (0)
#define tTaskMain_cTypeInfo__place                         (CALL_PLACE_CB_DES)
#define tTaskMain_cTypeInfo__b_VMT_useless                 (false)
#define tTaskMain_cTypeInfo__b_skelton_useless             (false)
#define tTaskMain_cTypeInfo__b_cell_unique                 (false)
#define tTaskMain_cFunctionInfo__offset                    ((uint32_t)(intptr_t)&((tTaskMain_CB*)0)->cFunctionInfo)
#define tTaskMain_cFunctionInfo__array_size                (0)
#define tTaskMain_cFunctionInfo__place                     (CALL_PLACE_CB_DES)
#define tTaskMain_cFunctionInfo__b_VMT_useless             (false)
#define tTaskMain_cFunctionInfo__b_skelton_useless         (false)
#define tTaskMain_cFunctionInfo__b_cell_unique             (false)
#define tTaskMain_cParamInfo__offset                       ((uint32_t)(intptr_t)&((tTaskMain_CB*)0)->cParamInfo)
#define tTaskMain_cParamInfo__array_size                   (0)
#define tTaskMain_cParamInfo__place                        (CALL_PLACE_CB_DES)
#define tTaskMain_cParamInfo__b_VMT_useless                (false)
#define tTaskMain_cParamInfo__b_skelton_useless            (false)
#define tTaskMain_cParamInfo__b_cell_unique                (false)
#define tTaskMain_cEntryInfo__offset                       ((uint32_t)(intptr_t)&((tTaskMain_CB*)0)->cEntryInfo)
#define tTaskMain_cEntryInfo__array_size                   (0)
#define tTaskMain_cEntryInfo__place                        (CALL_PLACE_CB_DES)
#define tTaskMain_cEntryInfo__b_VMT_useless                (false)
#define tTaskMain_cEntryInfo__b_skelton_useless            (false)
#define tTaskMain_cEntryInfo__b_cell_unique                (false)

#include "tTECSUnit_tecsgen.h"
#define tTECSUnit_cTECSInfo__offset                        (0xffffffff)
#define tTECSUnit_cTECSInfo__array_size                    (0)
#define tTECSUnit_cTECSInfo__place                         (CALL_PLACE_NON)
#define tTECSUnit_cTECSInfo__b_VMT_useless                 (true)
#define tTECSUnit_cTECSInfo__b_skelton_useless             (true)
#define tTECSUnit_cTECSInfo__b_cell_unique                 (true)
#define tTECSUnit_cNSInfo__offset                          ((uint32_t)(intptr_t)&((tTECSUnit_CB*)0)->cNSInfo)
#define tTECSUnit_cNSInfo__array_size                      (0)
#define tTECSUnit_cNSInfo__place                           (CALL_PLACE_CB_DES)
#define tTECSUnit_cNSInfo__b_VMT_useless                   (false)
#define tTECSUnit_cNSInfo__b_skelton_useless               (false)
#define tTECSUnit_cNSInfo__b_cell_unique                   (false)
#define tTECSUnit_cRegionInfo__offset                      ((uint32_t)(intptr_t)&((tTECSUnit_CB*)0)->cRegionInfo)
#define tTECSUnit_cRegionInfo__array_size                  (0)
#define tTECSUnit_cRegionInfo__place                       (CALL_PLACE_CB_DES)
#define tTECSUnit_cRegionInfo__b_VMT_useless               (false)
#define tTECSUnit_cRegionInfo__b_skelton_useless           (false)
#define tTECSUnit_cRegionInfo__b_cell_unique               (false)
#define tTECSUnit_cCellInfo__offset                        ((uint32_t)(intptr_t)&((tTECSUnit_CB*)0)->cCellInfo)
#define tTECSUnit_cCellInfo__array_size                    (0)
#define tTECSUnit_cCellInfo__place                         (CALL_PLACE_CB_DES)
#define tTECSUnit_cCellInfo__b_VMT_useless                 (false)
#define tTECSUnit_cCellInfo__b_skelton_useless             (false)
#define tTECSUnit_cCellInfo__b_cell_unique                 (false)
#define tTECSUnit_cSignatureInfo__offset                   ((uint32_t)(intptr_t)&((tTECSUnit_CB*)0)->cSignatureInfo)
#define tTECSUnit_cSignatureInfo__array_size               (0)
#define tTECSUnit_cSignatureInfo__place                    (CALL_PLACE_CB_DES)
#define tTECSUnit_cSignatureInfo__b_VMT_useless            (false)
#define tTECSUnit_cSignatureInfo__b_skelton_useless        (false)
#define tTECSUnit_cSignatureInfo__b_cell_unique            (false)
#define tTECSUnit_cCelltypeInfo__offset                    ((uint32_t)(intptr_t)&((tTECSUnit_CB*)0)->cCelltypeInfo)
#define tTECSUnit_cCelltypeInfo__array_size                (0)
#define tTECSUnit_cCelltypeInfo__place                     (CALL_PLACE_CB_DES)
#define tTECSUnit_cCelltypeInfo__b_VMT_useless             (false)
#define tTECSUnit_cCelltypeInfo__b_skelton_useless         (false)
#define tTECSUnit_cCelltypeInfo__b_cell_unique             (false)
#define tTECSUnit_cVarDeclInfo__offset                     ((uint32_t)(intptr_t)&((tTECSUnit_CB*)0)->cVarDeclInfo)
#define tTECSUnit_cVarDeclInfo__array_size                 (0)
#define tTECSUnit_cVarDeclInfo__place                      (CALL_PLACE_CB_DES)
#define tTECSUnit_cVarDeclInfo__b_VMT_useless              (false)
#define tTECSUnit_cVarDeclInfo__b_skelton_useless          (false)
#define tTECSUnit_cVarDeclInfo__b_cell_unique              (false)
#define tTECSUnit_cTypeInfo__offset                        ((uint32_t)(intptr_t)&((tTECSUnit_CB*)0)->cTypeInfo)
#define tTECSUnit_cTypeInfo__array_size                    (0)
#define tTECSUnit_cTypeInfo__place                         (CALL_PLACE_CB_DES)
#define tTECSUnit_cTypeInfo__b_VMT_useless                 (false)
#define tTECSUnit_cTypeInfo__b_skelton_useless             (false)
#define tTECSUnit_cTypeInfo__b_cell_unique                 (false)
#define tTECSUnit_cREDInfo__offset                         ((uint32_t)(intptr_t)&((tTECSUnit_CB*)0)->cREDInfo)
#define tTECSUnit_cREDInfo__array_size                     (0)
#define tTECSUnit_cREDInfo__place                          (CALL_PLACE_CB_DES)
#define tTECSUnit_cREDInfo__b_VMT_useless                  (false)
#define tTECSUnit_cREDInfo__b_skelton_useless              (false)
#define tTECSUnit_cREDInfo__b_cell_unique                  (false)
#define tTECSUnit_cEntryInfo__offset                       ((uint32_t)(intptr_t)&((tTECSUnit_CB*)0)->cEntryInfo)
#define tTECSUnit_cEntryInfo__array_size                   (0)
#define tTECSUnit_cEntryInfo__place                        (CALL_PLACE_CB_DES)
#define tTECSUnit_cEntryInfo__b_VMT_useless                (false)
#define tTECSUnit_cEntryInfo__b_skelton_useless            (false)
#define tTECSUnit_cEntryInfo__b_cell_unique                (false)
#define tTECSUnit_ciTask__offset                           ((uint32_t)(intptr_t)&((tTECSUnit_CB*)0)->ciTask)
#define tTECSUnit_ciTask__array_size                       (0)
#define tTECSUnit_ciTask__place                            (CALL_PLACE_CB_DES)
#define tTECSUnit_ciTask__b_VMT_useless                    (false)
#define tTECSUnit_ciTask__b_skelton_useless                (false)
#define tTECSUnit_ciTask__b_cell_unique                    (false)
#define tTECSUnit_cInitializeRoutineBody__offset           ((uint32_t)(intptr_t)&((tTECSUnit_CB*)0)->cInitializeRoutineBody)
#define tTECSUnit_cInitializeRoutineBody__array_size       (0)
#define tTECSUnit_cInitializeRoutineBody__place            (CALL_PLACE_CB_DES)
#define tTECSUnit_cInitializeRoutineBody__b_VMT_useless    (false)
#define tTECSUnit_cInitializeRoutineBody__b_skelton_useless (false)
#define tTECSUnit_cInitializeRoutineBody__b_cell_unique    (false)
#define tTECSUnit_cTerminateRoutineBody__offset            ((uint32_t)(intptr_t)&((tTECSUnit_CB*)0)->cTerminateRoutineBody)
#define tTECSUnit_cTerminateRoutineBody__array_size        (0)
#define tTECSUnit_cTerminateRoutineBody__place             (CALL_PLACE_CB_DES)
#define tTECSUnit_cTerminateRoutineBody__b_VMT_useless     (false)
#define tTECSUnit_cTerminateRoutineBody__b_skelton_useless (false)
#define tTECSUnit_cTerminateRoutineBody__b_cell_unique     (false)
#define tTECSUnit_ciHandlerBody__offset                    ((uint32_t)(intptr_t)&((tTECSUnit_CB*)0)->ciHandlerBody)
#define tTECSUnit_ciHandlerBody__array_size                (0)
#define tTECSUnit_ciHandlerBody__place                     (CALL_PLACE_CB_DES)
#define tTECSUnit_ciHandlerBody__b_VMT_useless             (false)
#define tTECSUnit_ciHandlerBody__b_skelton_useless         (false)
#define tTECSUnit_ciHandlerBody__b_cell_unique             (false)
#define tTECSUnit_cConfigInterrupt__offset                 ((uint32_t)(intptr_t)&((tTECSUnit_CB*)0)->cConfigInterrupt)
#define tTECSUnit_cConfigInterrupt__array_size             (0)
#define tTECSUnit_cConfigInterrupt__place                  (CALL_PLACE_CB_DES)
#define tTECSUnit_cConfigInterrupt__b_VMT_useless          (false)
#define tTECSUnit_cConfigInterrupt__b_skelton_useless      (false)
#define tTECSUnit_cConfigInterrupt__b_cell_unique          (false)
#define tTECSUnit_cCyclic__offset                          ((uint32_t)(intptr_t)&((tTECSUnit_CB*)0)->cCyclic)
#define tTECSUnit_cCyclic__array_size                      (0)
#define tTECSUnit_cCyclic__place                           (CALL_PLACE_CB_DES)
#define tTECSUnit_cCyclic__b_VMT_useless                   (false)
#define tTECSUnit_cCyclic__b_skelton_useless               (false)
#define tTECSUnit_cCyclic__b_cell_unique                   (false)
#define tTECSUnit_cAlarm__offset                           ((uint32_t)(intptr_t)&((tTECSUnit_CB*)0)->cAlarm)
#define tTECSUnit_cAlarm__array_size                       (0)
#define tTECSUnit_cAlarm__place                            (CALL_PLACE_CB_DES)
#define tTECSUnit_cAlarm__b_VMT_useless                    (false)
#define tTECSUnit_cAlarm__b_skelton_useless                (false)
#define tTECSUnit_cAlarm__b_cell_unique                    (false)
#define tTECSUnit_ciAlarm__offset                          ((uint32_t)(intptr_t)&((tTECSUnit_CB*)0)->ciAlarm)
#define tTECSUnit_ciAlarm__array_size                      (0)
#define tTECSUnit_ciAlarm__place                           (CALL_PLACE_CB_DES)
#define tTECSUnit_ciAlarm__b_VMT_useless                   (false)
#define tTECSUnit_ciAlarm__b_skelton_useless               (false)
#define tTECSUnit_ciAlarm__b_cell_unique                   (false)
#define tTECSUnit_cFixedSizeMemoryPool__offset             ((uint32_t)(intptr_t)&((tTECSUnit_CB*)0)->cFixedSizeMemoryPool)
#define tTECSUnit_cFixedSizeMemoryPool__array_size         (0)
#define tTECSUnit_cFixedSizeMemoryPool__place              (CALL_PLACE_CB_DES)
#define tTECSUnit_cFixedSizeMemoryPool__b_VMT_useless      (false)
#define tTECSUnit_cFixedSizeMemoryPool__b_skelton_useless  (false)
#define tTECSUnit_cFixedSizeMemoryPool__b_cell_unique      (false)
#define tTECSUnit_cMessageBuffer__offset                   ((uint32_t)(intptr_t)&((tTECSUnit_CB*)0)->cMessageBuffer)
#define tTECSUnit_cMessageBuffer__array_size               (0)
#define tTECSUnit_cMessageBuffer__place                    (CALL_PLACE_CB_DES)
#define tTECSUnit_cMessageBuffer__b_VMT_useless            (false)
#define tTECSUnit_cMessageBuffer__b_skelton_useless        (false)
#define tTECSUnit_cMessageBuffer__b_cell_unique            (false)
#define tTECSUnit_cMalloc__offset                          ((uint32_t)(intptr_t)&((tTECSUnit_CB*)0)->cMalloc)
#define tTECSUnit_cMalloc__array_size                      (0)
#define tTECSUnit_cMalloc__place                           (CALL_PLACE_CB_DES)
#define tTECSUnit_cMalloc__b_VMT_useless                   (false)
#define tTECSUnit_cMalloc__b_skelton_useless               (false)
#define tTECSUnit_cMalloc__b_cell_unique                   (false)
#define tTECSUnit_cUltrasonicSensor__offset                ((uint32_t)(intptr_t)&((tTECSUnit_CB*)0)->cUltrasonicSensor)
#define tTECSUnit_cUltrasonicSensor__array_size            (0)
#define tTECSUnit_cUltrasonicSensor__place                 (CALL_PLACE_CB_DES)
#define tTECSUnit_cUltrasonicSensor__b_VMT_useless         (false)
#define tTECSUnit_cUltrasonicSensor__b_skelton_useless     (false)
#define tTECSUnit_cUltrasonicSensor__b_cell_unique         (false)
#define tTECSUnit_cColorSensor__offset                     ((uint32_t)(intptr_t)&((tTECSUnit_CB*)0)->cColorSensor)
#define tTECSUnit_cColorSensor__array_size                 (0)
#define tTECSUnit_cColorSensor__place                      (CALL_PLACE_CB_DES)
#define tTECSUnit_cColorSensor__b_VMT_useless              (false)
#define tTECSUnit_cColorSensor__b_skelton_useless          (false)
#define tTECSUnit_cColorSensor__b_cell_unique              (false)
#define tTECSUnit_cTouchSensor__offset                     ((uint32_t)(intptr_t)&((tTECSUnit_CB*)0)->cTouchSensor)
#define tTECSUnit_cTouchSensor__array_size                 (0)
#define tTECSUnit_cTouchSensor__place                      (CALL_PLACE_CB_DES)
#define tTECSUnit_cTouchSensor__b_VMT_useless              (false)
#define tTECSUnit_cTouchSensor__b_skelton_useless          (false)
#define tTECSUnit_cTouchSensor__b_cell_unique              (false)
#define tTECSUnit_cGyroSensor__offset                      ((uint32_t)(intptr_t)&((tTECSUnit_CB*)0)->cGyroSensor)
#define tTECSUnit_cGyroSensor__array_size                  (0)
#define tTECSUnit_cGyroSensor__place                       (CALL_PLACE_CB_DES)
#define tTECSUnit_cGyroSensor__b_VMT_useless               (false)
#define tTECSUnit_cGyroSensor__b_skelton_useless           (false)
#define tTECSUnit_cGyroSensor__b_cell_unique               (false)
#define tTECSUnit_cMotor__offset                           ((uint32_t)(intptr_t)&((tTECSUnit_CB*)0)->cMotor)
#define tTECSUnit_cMotor__array_size                       (0)
#define tTECSUnit_cMotor__place                            (CALL_PLACE_CB_DES)
#define tTECSUnit_cMotor__b_VMT_useless                    (false)
#define tTECSUnit_cMotor__b_skelton_useless                (false)
#define tTECSUnit_cMotor__b_cell_unique                    (false)
#define tTECSUnit_cButton__offset                          ((uint32_t)(intptr_t)&((tTECSUnit_CB*)0)->cButton)
#define tTECSUnit_cButton__array_size                      (0)
#define tTECSUnit_cButton__place                           (CALL_PLACE_CB_DES)
#define tTECSUnit_cButton__b_VMT_useless                   (false)
#define tTECSUnit_cButton__b_skelton_useless               (false)
#define tTECSUnit_cButton__b_cell_unique                   (false)
#define tTECSUnit_cLCD__offset                             ((uint32_t)(intptr_t)&((tTECSUnit_CB*)0)->cLCD)
#define tTECSUnit_cLCD__array_size                         (0)
#define tTECSUnit_cLCD__place                              (CALL_PLACE_CB_DES)
#define tTECSUnit_cLCD__b_VMT_useless                      (false)
#define tTECSUnit_cLCD__b_skelton_useless                  (false)
#define tTECSUnit_cLCD__b_cell_unique                      (false)
#define tTECSUnit_cLED__offset                             ((uint32_t)(intptr_t)&((tTECSUnit_CB*)0)->cLED)
#define tTECSUnit_cLED__array_size                         (0)
#define tTECSUnit_cLED__place                              (CALL_PLACE_CB_DES)
#define tTECSUnit_cLED__b_VMT_useless                      (false)
#define tTECSUnit_cLED__b_skelton_useless                  (false)
#define tTECSUnit_cLED__b_cell_unique                      (false)
#define tTECSUnit_cBattery__offset                         ((uint32_t)(intptr_t)&((tTECSUnit_CB*)0)->cBattery)
#define tTECSUnit_cBattery__array_size                     (0)
#define tTECSUnit_cBattery__place                          (CALL_PLACE_CB_DES)
#define tTECSUnit_cBattery__b_VMT_useless                  (false)
#define tTECSUnit_cBattery__b_skelton_useless              (false)
#define tTECSUnit_cBattery__b_cell_unique                  (false)
#define tTECSUnit_cSpeaker__offset                         ((uint32_t)(intptr_t)&((tTECSUnit_CB*)0)->cSpeaker)
#define tTECSUnit_cSpeaker__array_size                     (0)
#define tTECSUnit_cSpeaker__place                          (CALL_PLACE_CB_DES)
#define tTECSUnit_cSpeaker__b_VMT_useless                  (false)
#define tTECSUnit_cSpeaker__b_skelton_useless              (false)
#define tTECSUnit_cSpeaker__b_cell_unique                  (false)
#define tTECSUnit_cRiteVM__offset                          ((uint32_t)(intptr_t)&((tTECSUnit_CB*)0)->cRiteVM)
#define tTECSUnit_cRiteVM__array_size                      (0)
#define tTECSUnit_cRiteVM__place                           (CALL_PLACE_CB_DES)
#define tTECSUnit_cRiteVM__b_VMT_useless                   (false)
#define tTECSUnit_cRiteVM__b_skelton_useless               (false)
#define tTECSUnit_cRiteVM__b_cell_unique                   (false)
#define tTECSUnit_cBalancer__offset                        ((uint32_t)(intptr_t)&((tTECSUnit_CB*)0)->cBalancer)
#define tTECSUnit_cBalancer__array_size                    (0)
#define tTECSUnit_cBalancer__place                         (CALL_PLACE_CB_DES)
#define tTECSUnit_cBalancer__b_VMT_useless                 (false)
#define tTECSUnit_cBalancer__b_skelton_useless             (false)
#define tTECSUnit_cBalancer__b_cell_unique                 (false)
#define tTECSUnit_cSharedMemory__offset                    ((uint32_t)(intptr_t)&((tTECSUnit_CB*)0)->cSharedMemory)
#define tTECSUnit_cSharedMemory__array_size                (0)
#define tTECSUnit_cSharedMemory__place                     (CALL_PLACE_CB_DES)
#define tTECSUnit_cSharedMemory__b_VMT_useless             (false)
#define tTECSUnit_cSharedMemory__b_skelton_useless         (false)
#define tTECSUnit_cSharedMemory__b_cell_unique             (false)
#define tTECSUnit_cTarget1__offset                         ((uint32_t)(intptr_t)&((tTECSUnit_CB*)0)->cTarget1)
#define tTECSUnit_cTarget1__array_size                     (0)
#define tTECSUnit_cTarget1__place                          (CALL_PLACE_CB_DES)
#define tTECSUnit_cTarget1__b_VMT_useless                  (false)
#define tTECSUnit_cTarget1__b_skelton_useless              (false)
#define tTECSUnit_cTarget1__b_cell_unique                  (false)
#define tTECSUnit_cTarget2__offset                         ((uint32_t)(intptr_t)&((tTECSUnit_CB*)0)->cTarget2)
#define tTECSUnit_cTarget2__array_size                     (0)
#define tTECSUnit_cTarget2__place                          (CALL_PLACE_CB_DES)
#define tTECSUnit_cTarget2__b_VMT_useless                  (false)
#define tTECSUnit_cTarget2__b_skelton_useless              (false)
#define tTECSUnit_cTarget2__b_cell_unique                  (false)
#define tTECSUnit_cTarget3__offset                         ((uint32_t)(intptr_t)&((tTECSUnit_CB*)0)->cTarget3)
#define tTECSUnit_cTarget3__array_size                     (0)
#define tTECSUnit_cTarget3__place                          (CALL_PLACE_CB_DES)
#define tTECSUnit_cTarget3__b_VMT_useless                  (false)
#define tTECSUnit_cTarget3__b_skelton_useless              (false)
#define tTECSUnit_cTarget3__b_cell_unique                  (false)
#define tTECSUnit_cInitializeBridge__offset                ((uint32_t)(intptr_t)&((tTECSUnit_CB*)0)->cInitializeBridge)
#define tTECSUnit_cInitializeBridge__array_size            (0)
#define tTECSUnit_cInitializeBridge__place                 (CALL_PLACE_CB_DES)
#define tTECSUnit_cInitializeBridge__b_VMT_useless         (false)
#define tTECSUnit_cInitializeBridge__b_skelton_useless     (false)
#define tTECSUnit_cInitializeBridge__b_cell_unique         (false)
#define tTECSUnit_cInitializeTECSBridge__offset            ((uint32_t)(intptr_t)&((tTECSUnit_CB*)0)->cInitializeTECSBridge)
#define tTECSUnit_cInitializeTECSBridge__array_size        (0)
#define tTECSUnit_cInitializeTECSBridge__place             (CALL_PLACE_CB_DES)
#define tTECSUnit_cInitializeTECSBridge__b_VMT_useless     (false)
#define tTECSUnit_cInitializeTECSBridge__b_skelton_useless (false)
#define tTECSUnit_cInitializeTECSBridge__b_cell_unique     (false)
#define tTECSUnit_cMrubyVM__offset                         ((uint32_t)(intptr_t)&((tTECSUnit_CB*)0)->cMrubyVM)
#define tTECSUnit_cMrubyVM__array_size                     (0)
#define tTECSUnit_cMrubyVM__place                          (CALL_PLACE_CB_DES)
#define tTECSUnit_cMrubyVM__b_VMT_useless                  (false)
#define tTECSUnit_cMrubyVM__b_skelton_useless              (false)
#define tTECSUnit_cMrubyVM__b_cell_unique                  (false)
#define tTECSUnit_cMain__offset                            ((uint32_t)(intptr_t)&((tTECSUnit_CB*)0)->cMain)
#define tTECSUnit_cMain__array_size                        (0)
#define tTECSUnit_cMain__place                             (CALL_PLACE_CB_DES)
#define tTECSUnit_cMain__b_VMT_useless                     (false)
#define tTECSUnit_cMain__b_skelton_useless                 (false)
#define tTECSUnit_cMain__b_cell_unique                     (false)

#include "tJSMN_tecsgen.h"

#include "nMruby_tTECSInitializer_tecsgen.h"
#define nMruby_tTECSInitializer_cInitialize__offset        ((uint32_t)(intptr_t)&((nMruby_tTECSInitializer_INIB*)0)->cInitialize)
#define nMruby_tTECSInitializer_cInitialize__array_size    (0xffffffff)
#define nMruby_tTECSInitializer_cInitialize__place         (CALL_PLACE_INIB_DES)
#define nMruby_tTECSInitializer_cInitialize__b_VMT_useless (false)
#define nMruby_tTECSInitializer_cInitialize__b_skelton_useless (false)
#define nMruby_tTECSInitializer_cInitialize__b_cell_unique (false)

#include "nMruby_tCharPointer_tecsgen.h"

#include "nMruby_tInt8Pointer_tecsgen.h"

#include "nMruby_tInt32Pointer_tecsgen.h"

#include "nMruby_tUInt16Pointer_tecsgen.h"

#include "nMruby_tIntPointer_tecsgen.h"

#include "nMruby_tULongPointer_tecsgen.h"

#include "nMruby_tsKernel_tecsgen.h"
#define nMruby_tsKernel_cTECS__offset                      (0xffffffff)
#define nMruby_tsKernel_cTECS__array_size                  (0)
#define nMruby_tsKernel_cTECS__place                       (CALL_PLACE_NON)
#define nMruby_tsKernel_cTECS__b_VMT_useless               (true)
#define nMruby_tsKernel_cTECS__b_skelton_useless           (true)
#define nMruby_tsKernel_cTECS__b_cell_unique               (true)

#include "nMruby_tsKernel_Initializer_tecsgen.h"

#include "nMruby_tsMotor_tecsgen.h"
#define nMruby_tsMotor_cTECS__offset                       ((uint32_t)(intptr_t)&((nMruby_tsMotor_INIB*)0)->cTECS)
#define nMruby_tsMotor_cTECS__array_size                   (0)
#define nMruby_tsMotor_cTECS__place                        (CALL_PLACE_INIB_IDX)
#define nMruby_tsMotor_cTECS__b_VMT_useless                (true)
#define nMruby_tsMotor_cTECS__b_skelton_useless            (true)
#define nMruby_tsMotor_cTECS__b_cell_unique                (false)

#include "nMruby_tsMotor_Initializer_tecsgen.h"

#include "nMruby_tsLCD_tecsgen.h"
#define nMruby_tsLCD_cTECS__offset                         (0xffffffff)
#define nMruby_tsLCD_cTECS__array_size                     (0)
#define nMruby_tsLCD_cTECS__place                          (CALL_PLACE_NON)
#define nMruby_tsLCD_cTECS__b_VMT_useless                  (true)
#define nMruby_tsLCD_cTECS__b_skelton_useless              (true)
#define nMruby_tsLCD_cTECS__b_cell_unique                  (true)

#include "nMruby_tsLCD_Initializer_tecsgen.h"

#include "nMruby_tsLED_tecsgen.h"
#define nMruby_tsLED_cTECS__offset                         (0xffffffff)
#define nMruby_tsLED_cTECS__array_size                     (0)
#define nMruby_tsLED_cTECS__place                          (CALL_PLACE_NON)
#define nMruby_tsLED_cTECS__b_VMT_useless                  (true)
#define nMruby_tsLED_cTECS__b_skelton_useless              (true)
#define nMruby_tsLED_cTECS__b_cell_unique                  (true)

#include "nMruby_tsLED_Initializer_tecsgen.h"

#include "nMruby_tsButton_tecsgen.h"
#define nMruby_tsButton_cTECS__offset                      (0xffffffff)
#define nMruby_tsButton_cTECS__array_size                  (0)
#define nMruby_tsButton_cTECS__place                       (CALL_PLACE_NON)
#define nMruby_tsButton_cTECS__b_VMT_useless               (true)
#define nMruby_tsButton_cTECS__b_skelton_useless           (true)
#define nMruby_tsButton_cTECS__b_cell_unique               (true)

#include "nMruby_tsButton_Initializer_tecsgen.h"

#include "nMruby_tsBattery_tecsgen.h"
#define nMruby_tsBattery_cTECS__offset                     (0xffffffff)
#define nMruby_tsBattery_cTECS__array_size                 (0)
#define nMruby_tsBattery_cTECS__place                      (CALL_PLACE_NON)
#define nMruby_tsBattery_cTECS__b_VMT_useless              (true)
#define nMruby_tsBattery_cTECS__b_skelton_useless          (true)
#define nMruby_tsBattery_cTECS__b_cell_unique              (true)

#include "nMruby_tsBattery_Initializer_tecsgen.h"

#include "nMruby_tsSpeaker_tecsgen.h"
#define nMruby_tsSpeaker_cTECS__offset                     (0xffffffff)
#define nMruby_tsSpeaker_cTECS__array_size                 (0)
#define nMruby_tsSpeaker_cTECS__place                      (CALL_PLACE_NON)
#define nMruby_tsSpeaker_cTECS__b_VMT_useless              (true)
#define nMruby_tsSpeaker_cTECS__b_skelton_useless          (true)
#define nMruby_tsSpeaker_cTECS__b_cell_unique              (true)

#include "nMruby_tsSpeaker_Initializer_tecsgen.h"

#include "nMruby_tsUltrasonicSensor_tecsgen.h"
#define nMruby_tsUltrasonicSensor_cTECS__offset            ((uint32_t)(intptr_t)&((nMruby_tsUltrasonicSensor_INIB*)0)->cTECS)
#define nMruby_tsUltrasonicSensor_cTECS__array_size        (0)
#define nMruby_tsUltrasonicSensor_cTECS__place             (CALL_PLACE_INIB_IDX)
#define nMruby_tsUltrasonicSensor_cTECS__b_VMT_useless     (true)
#define nMruby_tsUltrasonicSensor_cTECS__b_skelton_useless (true)
#define nMruby_tsUltrasonicSensor_cTECS__b_cell_unique     (false)

#include "nMruby_tsUltrasonicSensor_Initializer_tecsgen.h"

#include "nMruby_tsGyroSensor_tecsgen.h"
#define nMruby_tsGyroSensor_cTECS__offset                  ((uint32_t)(intptr_t)&((nMruby_tsGyroSensor_INIB*)0)->cTECS)
#define nMruby_tsGyroSensor_cTECS__array_size              (0)
#define nMruby_tsGyroSensor_cTECS__place                   (CALL_PLACE_INIB_IDX)
#define nMruby_tsGyroSensor_cTECS__b_VMT_useless           (true)
#define nMruby_tsGyroSensor_cTECS__b_skelton_useless       (true)
#define nMruby_tsGyroSensor_cTECS__b_cell_unique           (false)

#include "nMruby_tsGyroSensor_Initializer_tecsgen.h"

#include "nMruby_tsColorSensor_tecsgen.h"
#define nMruby_tsColorSensor_cTECS__offset                 ((uint32_t)(intptr_t)&((nMruby_tsColorSensor_INIB*)0)->cTECS)
#define nMruby_tsColorSensor_cTECS__array_size             (0)
#define nMruby_tsColorSensor_cTECS__place                  (CALL_PLACE_INIB_IDX)
#define nMruby_tsColorSensor_cTECS__b_VMT_useless          (true)
#define nMruby_tsColorSensor_cTECS__b_skelton_useless      (true)
#define nMruby_tsColorSensor_cTECS__b_cell_unique          (false)

#include "nMruby_tsColorSensor_Initializer_tecsgen.h"

#include "nMruby_tsTouchSensor_tecsgen.h"
#define nMruby_tsTouchSensor_cTECS__offset                 ((uint32_t)(intptr_t)&((nMruby_tsTouchSensor_INIB*)0)->cTECS)
#define nMruby_tsTouchSensor_cTECS__array_size             (0)
#define nMruby_tsTouchSensor_cTECS__place                  (CALL_PLACE_INIB_IDX)
#define nMruby_tsTouchSensor_cTECS__b_VMT_useless          (true)
#define nMruby_tsTouchSensor_cTECS__b_skelton_useless      (true)
#define nMruby_tsTouchSensor_cTECS__b_cell_unique          (false)

#include "nMruby_tsTouchSensor_Initializer_tecsgen.h"

#include "nMruby_tsBalancer_tecsgen.h"
#define nMruby_tsBalancer_cTECS__offset                    (0xffffffff)
#define nMruby_tsBalancer_cTECS__array_size                (0)
#define nMruby_tsBalancer_cTECS__place                     (CALL_PLACE_NON)
#define nMruby_tsBalancer_cTECS__b_VMT_useless             (true)
#define nMruby_tsBalancer_cTECS__b_skelton_useless         (true)
#define nMruby_tsBalancer_cTECS__b_cell_unique             (true)

#include "nMruby_tsBalancer_Initializer_tecsgen.h"

#include "nMruby_tsSharedMemory_tecsgen.h"
#define nMruby_tsSharedMemory_cTECS__offset                (0xffffffff)
#define nMruby_tsSharedMemory_cTECS__array_size            (0)
#define nMruby_tsSharedMemory_cTECS__place                 (CALL_PLACE_NON)
#define nMruby_tsSharedMemory_cTECS__b_VMT_useless         (true)
#define nMruby_tsSharedMemory_cTECS__b_skelton_useless     (true)
#define nMruby_tsSharedMemory_cTECS__b_cell_unique         (true)

#include "nMruby_tsSharedMemory_Initializer_tecsgen.h"

#include "nTECSInfo_tTECSInfo_tecsgen.h"
#define nTECSInfo_tTECSInfo_cTECSInfo__offset              (0xffffffff)
#define nTECSInfo_tTECSInfo_cTECSInfo__array_size          (0)
#define nTECSInfo_tTECSInfo_cTECSInfo__place               (CALL_PLACE_NON)
#define nTECSInfo_tTECSInfo_cTECSInfo__b_VMT_useless       (true)
#define nTECSInfo_tTECSInfo_cTECSInfo__b_skelton_useless   (true)
#define nTECSInfo_tTECSInfo_cTECSInfo__b_cell_unique       (true)

#include "nTECSInfo_tTECSInfoSub_tecsgen.h"
#define nTECSInfo_tTECSInfoSub_cNamespaceInfo__offset      ((uint32_t)(intptr_t)&((nTECSInfo_tTECSInfoSub_INIB*)0)->cNamespaceInfo)
#define nTECSInfo_tTECSInfoSub_cNamespaceInfo__array_size  (0)
#define nTECSInfo_tTECSInfoSub_cNamespaceInfo__place       (CALL_PLACE_INIB_DES)
#define nTECSInfo_tTECSInfoSub_cNamespaceInfo__b_VMT_useless (false)
#define nTECSInfo_tTECSInfoSub_cNamespaceInfo__b_skelton_useless (false)
#define nTECSInfo_tTECSInfoSub_cNamespaceInfo__b_cell_unique (false)
#define nTECSInfo_tTECSInfoSub_cRegionInfo__offset         ((uint32_t)(intptr_t)&((nTECSInfo_tTECSInfoSub_INIB*)0)->cRegionInfo)
#define nTECSInfo_tTECSInfoSub_cRegionInfo__array_size     (0)
#define nTECSInfo_tTECSInfoSub_cRegionInfo__place          (CALL_PLACE_INIB_DES)
#define nTECSInfo_tTECSInfoSub_cRegionInfo__b_VMT_useless  (false)
#define nTECSInfo_tTECSInfoSub_cRegionInfo__b_skelton_useless (false)
#define nTECSInfo_tTECSInfoSub_cRegionInfo__b_cell_unique  (false)
#define nTECSInfo_tTECSInfoSub_cNamespaceInfoTemp__offset  ((uint32_t)(intptr_t)&((nTECSInfo_tTECSInfoSub_CB*)0)->cNamespaceInfoTemp)
#define nTECSInfo_tTECSInfoSub_cNamespaceInfoTemp__array_size (0)
#define nTECSInfo_tTECSInfoSub_cNamespaceInfoTemp__place   (CALL_PLACE_CB_DES)
#define nTECSInfo_tTECSInfoSub_cNamespaceInfoTemp__b_VMT_useless (false)
#define nTECSInfo_tTECSInfoSub_cNamespaceInfoTemp__b_skelton_useless (false)
#define nTECSInfo_tTECSInfoSub_cNamespaceInfoTemp__b_cell_unique (false)
#define nTECSInfo_tTECSInfoSub_cRegionInfoTemp__offset     ((uint32_t)(intptr_t)&((nTECSInfo_tTECSInfoSub_CB*)0)->cRegionInfoTemp)
#define nTECSInfo_tTECSInfoSub_cRegionInfoTemp__array_size (0)
#define nTECSInfo_tTECSInfoSub_cRegionInfoTemp__place      (CALL_PLACE_CB_DES)
#define nTECSInfo_tTECSInfoSub_cRegionInfoTemp__b_VMT_useless (false)
#define nTECSInfo_tTECSInfoSub_cRegionInfoTemp__b_skelton_useless (false)
#define nTECSInfo_tTECSInfoSub_cRegionInfoTemp__b_cell_unique (false)
#define nTECSInfo_tTECSInfoSub_cSignatureInfoTemp__offset  ((uint32_t)(intptr_t)&((nTECSInfo_tTECSInfoSub_CB*)0)->cSignatureInfoTemp)
#define nTECSInfo_tTECSInfoSub_cSignatureInfoTemp__array_size (0)
#define nTECSInfo_tTECSInfoSub_cSignatureInfoTemp__place   (CALL_PLACE_CB_DES)
#define nTECSInfo_tTECSInfoSub_cSignatureInfoTemp__b_VMT_useless (false)
#define nTECSInfo_tTECSInfoSub_cSignatureInfoTemp__b_skelton_useless (false)
#define nTECSInfo_tTECSInfoSub_cSignatureInfoTemp__b_cell_unique (false)
#define nTECSInfo_tTECSInfoSub_cCelltypeInfoTemp__offset   ((uint32_t)(intptr_t)&((nTECSInfo_tTECSInfoSub_CB*)0)->cCelltypeInfoTemp)
#define nTECSInfo_tTECSInfoSub_cCelltypeInfoTemp__array_size (0)
#define nTECSInfo_tTECSInfoSub_cCelltypeInfoTemp__place    (CALL_PLACE_CB_DES)
#define nTECSInfo_tTECSInfoSub_cCelltypeInfoTemp__b_VMT_useless (false)
#define nTECSInfo_tTECSInfoSub_cCelltypeInfoTemp__b_skelton_useless (false)
#define nTECSInfo_tTECSInfoSub_cCelltypeInfoTemp__b_cell_unique (false)
#define nTECSInfo_tTECSInfoSub_cCellInfoTemp__offset       ((uint32_t)(intptr_t)&((nTECSInfo_tTECSInfoSub_CB*)0)->cCellInfoTemp)
#define nTECSInfo_tTECSInfoSub_cCellInfoTemp__array_size   (0)
#define nTECSInfo_tTECSInfoSub_cCellInfoTemp__place        (CALL_PLACE_CB_DES)
#define nTECSInfo_tTECSInfoSub_cCellInfoTemp__b_VMT_useless (false)
#define nTECSInfo_tTECSInfoSub_cCellInfoTemp__b_skelton_useless (false)
#define nTECSInfo_tTECSInfoSub_cCellInfoTemp__b_cell_unique (false)
#define nTECSInfo_tTECSInfoSub_cEntryInfoTemp__offset      ((uint32_t)(intptr_t)&((nTECSInfo_tTECSInfoSub_CB*)0)->cEntryInfoTemp)
#define nTECSInfo_tTECSInfoSub_cEntryInfoTemp__array_size  (0)
#define nTECSInfo_tTECSInfoSub_cEntryInfoTemp__place       (CALL_PLACE_CB_DES)
#define nTECSInfo_tTECSInfoSub_cEntryInfoTemp__b_VMT_useless (false)
#define nTECSInfo_tTECSInfoSub_cEntryInfoTemp__b_skelton_useless (false)
#define nTECSInfo_tTECSInfoSub_cEntryInfoTemp__b_cell_unique (false)
#define nTECSInfo_tTECSInfoSub_cRawEntryDescriptorInfoTemp__offset ((uint32_t)(intptr_t)&((nTECSInfo_tTECSInfoSub_CB*)0)->cRawEntryDescriptorInfoTemp)
#define nTECSInfo_tTECSInfoSub_cRawEntryDescriptorInfoTemp__array_size (0)
#define nTECSInfo_tTECSInfoSub_cRawEntryDescriptorInfoTemp__place (CALL_PLACE_CB_DES)
#define nTECSInfo_tTECSInfoSub_cRawEntryDescriptorInfoTemp__b_VMT_useless (false)
#define nTECSInfo_tTECSInfoSub_cRawEntryDescriptorInfoTemp__b_skelton_useless (false)
#define nTECSInfo_tTECSInfoSub_cRawEntryDescriptorInfoTemp__b_cell_unique (false)

#include "nTECSInfo_tNamespaceInfo_tecsgen.h"
#define nTECSInfo_tNamespaceInfo_cSignatureInfo__offset    ((uint32_t)(intptr_t)&((nTECSInfo_tNamespaceInfo_INIB*)0)->cSignatureInfo)
#define nTECSInfo_tNamespaceInfo_cSignatureInfo__array_size (0xffffffff)
#define nTECSInfo_tNamespaceInfo_cSignatureInfo__place     (CALL_PLACE_INIB_DES)
#define nTECSInfo_tNamespaceInfo_cSignatureInfo__b_VMT_useless (false)
#define nTECSInfo_tNamespaceInfo_cSignatureInfo__b_skelton_useless (false)
#define nTECSInfo_tNamespaceInfo_cSignatureInfo__b_cell_unique (false)
#define nTECSInfo_tNamespaceInfo_cCelltypeInfo__offset     ((uint32_t)(intptr_t)&((nTECSInfo_tNamespaceInfo_INIB*)0)->cCelltypeInfo)
#define nTECSInfo_tNamespaceInfo_cCelltypeInfo__array_size (0xffffffff)
#define nTECSInfo_tNamespaceInfo_cCelltypeInfo__place      (CALL_PLACE_INIB_DES)
#define nTECSInfo_tNamespaceInfo_cCelltypeInfo__b_VMT_useless (false)
#define nTECSInfo_tNamespaceInfo_cCelltypeInfo__b_skelton_useless (false)
#define nTECSInfo_tNamespaceInfo_cCelltypeInfo__b_cell_unique (false)
#define nTECSInfo_tNamespaceInfo_cNamespaceInfo__offset    ((uint32_t)(intptr_t)&((nTECSInfo_tNamespaceInfo_INIB*)0)->cNamespaceInfo)
#define nTECSInfo_tNamespaceInfo_cNamespaceInfo__array_size (0xffffffff)
#define nTECSInfo_tNamespaceInfo_cNamespaceInfo__place     (CALL_PLACE_INIB_DES)
#define nTECSInfo_tNamespaceInfo_cNamespaceInfo__b_VMT_useless (false)
#define nTECSInfo_tNamespaceInfo_cNamespaceInfo__b_skelton_useless (false)
#define nTECSInfo_tNamespaceInfo_cNamespaceInfo__b_cell_unique (false)

#include "nTECSInfo_tSignatureInfo_tecsgen.h"
#define nTECSInfo_tSignatureInfo_cFunctionInfo__offset     ((uint32_t)(intptr_t)&((nTECSInfo_tSignatureInfo_INIB*)0)->cFunctionInfo)
#define nTECSInfo_tSignatureInfo_cFunctionInfo__array_size (0xffffffff)
#define nTECSInfo_tSignatureInfo_cFunctionInfo__place      (CALL_PLACE_INIB_DES)
#define nTECSInfo_tSignatureInfo_cFunctionInfo__b_VMT_useless (false)
#define nTECSInfo_tSignatureInfo_cFunctionInfo__b_skelton_useless (false)
#define nTECSInfo_tSignatureInfo_cFunctionInfo__b_cell_unique (false)

#include "nTECSInfo_tFunctionInfo_tecsgen.h"
#define nTECSInfo_tFunctionInfo_cParamInfo__offset         ((uint32_t)(intptr_t)&((nTECSInfo_tFunctionInfo_INIB*)0)->cParamInfo)
#define nTECSInfo_tFunctionInfo_cParamInfo__array_size     (0xffffffff)
#define nTECSInfo_tFunctionInfo_cParamInfo__place          (CALL_PLACE_INIB_DES)
#define nTECSInfo_tFunctionInfo_cParamInfo__b_VMT_useless  (false)
#define nTECSInfo_tFunctionInfo_cParamInfo__b_skelton_useless (false)
#define nTECSInfo_tFunctionInfo_cParamInfo__b_cell_unique  (false)
#define nTECSInfo_tFunctionInfo_cReturnTypeInfo__offset    ((uint32_t)(intptr_t)&((nTECSInfo_tFunctionInfo_INIB*)0)->cReturnTypeInfo)
#define nTECSInfo_tFunctionInfo_cReturnTypeInfo__array_size (0)
#define nTECSInfo_tFunctionInfo_cReturnTypeInfo__place     (CALL_PLACE_INIB_DES)
#define nTECSInfo_tFunctionInfo_cReturnTypeInfo__b_VMT_useless (false)
#define nTECSInfo_tFunctionInfo_cReturnTypeInfo__b_skelton_useless (false)
#define nTECSInfo_tFunctionInfo_cReturnTypeInfo__b_cell_unique (false)

#include "nTECSInfo_tParamInfo_tecsgen.h"
#define nTECSInfo_tParamInfo_cTypeInfo__offset             ((uint32_t)(intptr_t)&((nTECSInfo_tParamInfo_INIB*)0)->cTypeInfo)
#define nTECSInfo_tParamInfo_cTypeInfo__array_size         (0)
#define nTECSInfo_tParamInfo_cTypeInfo__place              (CALL_PLACE_INIB_DES)
#define nTECSInfo_tParamInfo_cTypeInfo__b_VMT_useless      (false)
#define nTECSInfo_tParamInfo_cTypeInfo__b_skelton_useless  (false)
#define nTECSInfo_tParamInfo_cTypeInfo__b_cell_unique      (false)

#include "nTECSInfo_tCelltypeInfo_tecsgen.h"
#define nTECSInfo_tCelltypeInfo_cEntryInfo__offset         ((uint32_t)(intptr_t)&((nTECSInfo_tCelltypeInfo_INIB*)0)->cEntryInfo)
#define nTECSInfo_tCelltypeInfo_cEntryInfo__array_size     (0xffffffff)
#define nTECSInfo_tCelltypeInfo_cEntryInfo__place          (CALL_PLACE_INIB_DES)
#define nTECSInfo_tCelltypeInfo_cEntryInfo__b_VMT_useless  (false)
#define nTECSInfo_tCelltypeInfo_cEntryInfo__b_skelton_useless (false)
#define nTECSInfo_tCelltypeInfo_cEntryInfo__b_cell_unique  (false)
#define nTECSInfo_tCelltypeInfo_cCallInfo__offset          ((uint32_t)(intptr_t)&((nTECSInfo_tCelltypeInfo_INIB*)0)->cCallInfo)
#define nTECSInfo_tCelltypeInfo_cCallInfo__array_size      (0xffffffff)
#define nTECSInfo_tCelltypeInfo_cCallInfo__place           (CALL_PLACE_INIB_DES)
#define nTECSInfo_tCelltypeInfo_cCallInfo__b_VMT_useless   (false)
#define nTECSInfo_tCelltypeInfo_cCallInfo__b_skelton_useless (false)
#define nTECSInfo_tCelltypeInfo_cCallInfo__b_cell_unique   (false)
#define nTECSInfo_tCelltypeInfo_cAttrInfo__offset          ((uint32_t)(intptr_t)&((nTECSInfo_tCelltypeInfo_INIB*)0)->cAttrInfo)
#define nTECSInfo_tCelltypeInfo_cAttrInfo__array_size      (0xffffffff)
#define nTECSInfo_tCelltypeInfo_cAttrInfo__place           (CALL_PLACE_INIB_DES)
#define nTECSInfo_tCelltypeInfo_cAttrInfo__b_VMT_useless   (false)
#define nTECSInfo_tCelltypeInfo_cAttrInfo__b_skelton_useless (false)
#define nTECSInfo_tCelltypeInfo_cAttrInfo__b_cell_unique   (false)
#define nTECSInfo_tCelltypeInfo_cVarInfo__offset           ((uint32_t)(intptr_t)&((nTECSInfo_tCelltypeInfo_INIB*)0)->cVarInfo)
#define nTECSInfo_tCelltypeInfo_cVarInfo__array_size       (0xffffffff)
#define nTECSInfo_tCelltypeInfo_cVarInfo__place            (CALL_PLACE_INIB_DES)
#define nTECSInfo_tCelltypeInfo_cVarInfo__b_VMT_useless    (false)
#define nTECSInfo_tCelltypeInfo_cVarInfo__b_skelton_useless (false)
#define nTECSInfo_tCelltypeInfo_cVarInfo__b_cell_unique    (false)

#include "nTECSInfo_tCallInfo_tecsgen.h"
#define nTECSInfo_tCallInfo_cSignatureInfo__offset         ((uint32_t)(intptr_t)&((nTECSInfo_tCallInfo_INIB*)0)->cSignatureInfo)
#define nTECSInfo_tCallInfo_cSignatureInfo__array_size     (0)
#define nTECSInfo_tCallInfo_cSignatureInfo__place          (CALL_PLACE_INIB_DES)
#define nTECSInfo_tCallInfo_cSignatureInfo__b_VMT_useless  (false)
#define nTECSInfo_tCallInfo_cSignatureInfo__b_skelton_useless (false)
#define nTECSInfo_tCallInfo_cSignatureInfo__b_cell_unique  (false)

#include "nTECSInfo_tEntryInfo_tecsgen.h"
#define nTECSInfo_tEntryInfo_cSignatureInfo__offset        ((uint32_t)(intptr_t)&((nTECSInfo_tEntryInfo_INIB*)0)->cSignatureInfo)
#define nTECSInfo_tEntryInfo_cSignatureInfo__array_size    (0)
#define nTECSInfo_tEntryInfo_cSignatureInfo__place         (CALL_PLACE_INIB_DES)
#define nTECSInfo_tEntryInfo_cSignatureInfo__b_VMT_useless (false)
#define nTECSInfo_tEntryInfo_cSignatureInfo__b_skelton_useless (false)
#define nTECSInfo_tEntryInfo_cSignatureInfo__b_cell_unique (false)

#include "nTECSInfo_tVarDeclInfo_tecsgen.h"
#define nTECSInfo_tVarDeclInfo_cTypeInfo__offset           ((uint32_t)(intptr_t)&((nTECSInfo_tVarDeclInfo_INIB*)0)->cTypeInfo)
#define nTECSInfo_tVarDeclInfo_cTypeInfo__array_size       (0)
#define nTECSInfo_tVarDeclInfo_cTypeInfo__place            (CALL_PLACE_INIB_DES)
#define nTECSInfo_tVarDeclInfo_cTypeInfo__b_VMT_useless    (false)
#define nTECSInfo_tVarDeclInfo_cTypeInfo__b_skelton_useless (false)
#define nTECSInfo_tVarDeclInfo_cTypeInfo__b_cell_unique    (false)

#include "nTECSInfo_tRegionInfo_tecsgen.h"
#define nTECSInfo_tRegionInfo_cCellInfo__offset            ((uint32_t)(intptr_t)&((nTECSInfo_tRegionInfo_INIB*)0)->cCellInfo)
#define nTECSInfo_tRegionInfo_cCellInfo__array_size        (0xffffffff)
#define nTECSInfo_tRegionInfo_cCellInfo__place             (CALL_PLACE_INIB_DES)
#define nTECSInfo_tRegionInfo_cCellInfo__b_VMT_useless     (false)
#define nTECSInfo_tRegionInfo_cCellInfo__b_skelton_useless (false)
#define nTECSInfo_tRegionInfo_cCellInfo__b_cell_unique     (false)
#define nTECSInfo_tRegionInfo_cRegionInfo__offset          ((uint32_t)(intptr_t)&((nTECSInfo_tRegionInfo_INIB*)0)->cRegionInfo)
#define nTECSInfo_tRegionInfo_cRegionInfo__array_size      (0xffffffff)
#define nTECSInfo_tRegionInfo_cRegionInfo__place           (CALL_PLACE_INIB_DES)
#define nTECSInfo_tRegionInfo_cRegionInfo__b_VMT_useless   (false)
#define nTECSInfo_tRegionInfo_cRegionInfo__b_skelton_useless (false)
#define nTECSInfo_tRegionInfo_cRegionInfo__b_cell_unique   (false)

#include "nTECSInfo_tCellInfo_tecsgen.h"
#define nTECSInfo_tCellInfo_cCelltypeInfo__offset          ((uint32_t)(intptr_t)&((nTECSInfo_tCellInfo_INIB*)0)->cCelltypeInfo)
#define nTECSInfo_tCellInfo_cCelltypeInfo__array_size      (0)
#define nTECSInfo_tCellInfo_cCelltypeInfo__place           (CALL_PLACE_INIB_DES)
#define nTECSInfo_tCellInfo_cCelltypeInfo__b_VMT_useless   (false)
#define nTECSInfo_tCellInfo_cCelltypeInfo__b_skelton_useless (false)
#define nTECSInfo_tCellInfo_cCelltypeInfo__b_cell_unique   (false)
#define nTECSInfo_tCellInfo_cRawEntryDescriptor__offset    ((uint32_t)(intptr_t)&((nTECSInfo_tCellInfo_INIB*)0)->cRawEntryDescriptor)
#define nTECSInfo_tCellInfo_cRawEntryDescriptor__array_size (0xffffffff)
#define nTECSInfo_tCellInfo_cRawEntryDescriptor__place     (CALL_PLACE_INIB_DES)
#define nTECSInfo_tCellInfo_cRawEntryDescriptor__b_VMT_useless (false)
#define nTECSInfo_tCellInfo_cRawEntryDescriptor__b_skelton_useless (false)
#define nTECSInfo_tCellInfo_cRawEntryDescriptor__b_cell_unique (false)

#include "nTECSInfo_tRawEntryDescriptorInfo_tecsgen.h"

#include "nTECSInfo_tVoidTypeInfo_tecsgen.h"

#include "nTECSInfo_tIntTypeInfo_tecsgen.h"

#include "nTECSInfo_tFloatTypeInfo_tecsgen.h"

#include "nTECSInfo_tStructTypeInfo_tecsgen.h"
#define nTECSInfo_tStructTypeInfo_cVarDeclInfo__offset     ((uint32_t)(intptr_t)&((nTECSInfo_tStructTypeInfo_INIB*)0)->cVarDeclInfo)
#define nTECSInfo_tStructTypeInfo_cVarDeclInfo__array_size (0xffffffff)
#define nTECSInfo_tStructTypeInfo_cVarDeclInfo__place      (CALL_PLACE_INIB_DES)
#define nTECSInfo_tStructTypeInfo_cVarDeclInfo__b_VMT_useless (false)
#define nTECSInfo_tStructTypeInfo_cVarDeclInfo__b_skelton_useless (false)
#define nTECSInfo_tStructTypeInfo_cVarDeclInfo__b_cell_unique (false)

#include "nTECSInfo_tPtrTypeInfo_tecsgen.h"
#define nTECSInfo_tPtrTypeInfo_cTypeInfo__offset           ((uint32_t)(intptr_t)&((nTECSInfo_tPtrTypeInfo_INIB*)0)->cTypeInfo)
#define nTECSInfo_tPtrTypeInfo_cTypeInfo__array_size       (0)
#define nTECSInfo_tPtrTypeInfo_cTypeInfo__place            (CALL_PLACE_INIB_DES)
#define nTECSInfo_tPtrTypeInfo_cTypeInfo__b_VMT_useless    (false)
#define nTECSInfo_tPtrTypeInfo_cTypeInfo__b_skelton_useless (false)
#define nTECSInfo_tPtrTypeInfo_cTypeInfo__b_cell_unique    (false)

#include "nTECSInfo_tArrayTypeInfo_tecsgen.h"
#define nTECSInfo_tArrayTypeInfo_cTypeInfo__offset         ((uint32_t)(intptr_t)&((nTECSInfo_tArrayTypeInfo_INIB*)0)->cTypeInfo)
#define nTECSInfo_tArrayTypeInfo_cTypeInfo__array_size     (0)
#define nTECSInfo_tArrayTypeInfo_cTypeInfo__place          (CALL_PLACE_INIB_DES)
#define nTECSInfo_tArrayTypeInfo_cTypeInfo__b_VMT_useless  (false)
#define nTECSInfo_tArrayTypeInfo_cTypeInfo__b_skelton_useless (false)
#define nTECSInfo_tArrayTypeInfo_cTypeInfo__b_cell_unique  (false)

#include "nTECSInfo_tDefinedTypeInfo_tecsgen.h"
#define nTECSInfo_tDefinedTypeInfo_cTypeInfo__offset       ((uint32_t)(intptr_t)&((nTECSInfo_tDefinedTypeInfo_INIB*)0)->cTypeInfo)
#define nTECSInfo_tDefinedTypeInfo_cTypeInfo__array_size   (0)
#define nTECSInfo_tDefinedTypeInfo_cTypeInfo__place        (CALL_PLACE_INIB_DES)
#define nTECSInfo_tDefinedTypeInfo_cTypeInfo__b_VMT_useless (false)
#define nTECSInfo_tDefinedTypeInfo_cTypeInfo__b_skelton_useless (false)
#define nTECSInfo_tDefinedTypeInfo_cTypeInfo__b_cell_unique (false)

#include "nTECSInfo_tDescriptorTypeInfo_tecsgen.h"
#define nTECSInfo_tDescriptorTypeInfo_cSignatureInfo__offset ((uint32_t)(intptr_t)&((nTECSInfo_tDescriptorTypeInfo_INIB*)0)->cSignatureInfo)
#define nTECSInfo_tDescriptorTypeInfo_cSignatureInfo__array_size (0)
#define nTECSInfo_tDescriptorTypeInfo_cSignatureInfo__place (CALL_PLACE_INIB_DES)
#define nTECSInfo_tDescriptorTypeInfo_cSignatureInfo__b_VMT_useless (false)
#define nTECSInfo_tDescriptorTypeInfo_cSignatureInfo__b_skelton_useless (false)
#define nTECSInfo_tDescriptorTypeInfo_cSignatureInfo__b_cell_unique (false)

/* redefine macros */
#define tCallInfo_IDX  nTECSInfo_tCallInfo_IDX

#define FOREACH_CELL(i,p_cb)   { (void)(i);
#define END_FOREACH_CELL   }
#define INITIALIZE_CB(p_that)   (void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)

#endif /* tCallInfo_FACTORY_H */
