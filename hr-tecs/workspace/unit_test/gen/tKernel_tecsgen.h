/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef tKernel_TECSGEN_H
#define tKernel_TECSGEN_H

/*
 * celltype          :  tKernel
 * global name       :  tKernel
 * multi-domain      :  no
 * idx_is_id(actual) :  no(no)
 * singleton         :  yes
 * has_CB            :  no
 * has_INIB          :  no
 * rom               :  yes
 * CB initializer    :  yes
 */

/* �����Х�إå� #_IGH_# */
#include "global_tecsgen.h"

/* �����˥���إå� #_ISH_# */
#include "sKernel_tecsgen.h"
#include "siKernel_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� CB (���ߡ�)����� #_CCDP_# */
typedef struct tag_tKernel_CB {
    int  dummy;
} tKernel_CB;
/* ���󥰥�ȥ󥻥� CB �ץ�ȥ�������� #_SCP_# */


/* ���륿���פ�IDX�� #_CTIX_# */
typedef int   tKernel_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* sKernel */
Inline ER           tKernel_eKernel_sleep();
Inline ER           tKernel_eKernel_sleepTimeout( TMO timeout);
Inline ER           tKernel_eKernel_delay( RELTIM delayTime);
Inline ER           tKernel_eKernel_exitTask();
Inline ER           tKernel_eKernel_getTaskId( ID* p_taskId);
Inline ER           tKernel_eKernel_rotateReadyQueue( PRI taskPriority);
Inline ER           tKernel_eKernel_getTime( SYSTIM* p_systemTime);
Inline ER           tKernel_eKernel_getMicroTime( SYSUTM* p_systemMicroTime);
Inline ER           tKernel_eKernel_lockCpu();
Inline ER           tKernel_eKernel_unlockCpu();
Inline ER           tKernel_eKernel_disableDispatch();
Inline ER           tKernel_eKernel_enableDispatch();
Inline ER           tKernel_eKernel_disableTaskException();
Inline ER           tKernel_eKernel_enableTaskException();
Inline ER           tKernel_eKernel_changeInterruptPriorityMask( PRI interruptPriority);
Inline ER           tKernel_eKernel_getInterruptPriorityMask( PRI* p_interruptPriority);
Inline ER           tKernel_eKernel_exitKernel();
Inline bool_t       tKernel_eKernel_senseContext();
Inline bool_t       tKernel_eKernel_senseLock();
Inline bool_t       tKernel_eKernel_senseDispatch();
Inline bool_t       tKernel_eKernel_senseDispatchPendingState();
Inline bool_t       tKernel_eKernel_senseKernel();
/* siKernel */
Inline ER           tKernel_eiKernel_getTaskId( ID* p_taskId);
Inline ER           tKernel_eiKernel_rotateReadyQueue( PRI taskPriority);
Inline ER           tKernel_eiKernel_getMicroTime( SYSUTM* p_systemMicroTime);
Inline ER           tKernel_eiKernel_lockCpu();
Inline ER           tKernel_eiKernel_unlockCpu();
Inline ER           tKernel_eiKernel_exitKernel();
Inline bool_t       tKernel_eiKernel_senseContext();
Inline bool_t       tKernel_eiKernel_senseLock();
Inline bool_t       tKernel_eiKernel_senseDispatch();
Inline bool_t       tKernel_eiKernel_senseDispatchPendingState();
Inline bool_t       tKernel_eiKernel_senseKernel();
Inline bool_t       tKernel_eiKernel_senseDispatchPendingStateCPU( const void* p_exceptionInfomation);
Inline bool_t       tKernel_eiKernel_senseTaskExceptionPendingStateCPU( const void* p_exceptionInfomation);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */


/* ����CB������ޥ��� #_GCB_# */
#define tKernel_GET_CELLCB(idx) ((void *)0)
#ifndef TECSFLOW
#else  /* TECSFLOW */
#endif /* TECSFLOW */
#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* ������������ȥ�ؿ��ץ�ȥ����������VMT���׺�Ŭ���ˤ�껲�Ȥ����Ρ� #_EPSP_# */
/* eKernel */
ER             tKernel_eKernel_sleep_skel( const struct tag_sKernel_VDES *epd);
ER             tKernel_eKernel_sleepTimeout_skel( const struct tag_sKernel_VDES *epd, TMO timeout);
ER             tKernel_eKernel_delay_skel( const struct tag_sKernel_VDES *epd, RELTIM delayTime);
ER             tKernel_eKernel_exitTask_skel( const struct tag_sKernel_VDES *epd);
ER             tKernel_eKernel_getTaskId_skel( const struct tag_sKernel_VDES *epd, ID* p_taskId);
ER             tKernel_eKernel_rotateReadyQueue_skel( const struct tag_sKernel_VDES *epd, PRI taskPriority);
ER             tKernel_eKernel_getTime_skel( const struct tag_sKernel_VDES *epd, SYSTIM* p_systemTime);
ER             tKernel_eKernel_getMicroTime_skel( const struct tag_sKernel_VDES *epd, SYSUTM* p_systemMicroTime);
ER             tKernel_eKernel_lockCpu_skel( const struct tag_sKernel_VDES *epd);
ER             tKernel_eKernel_unlockCpu_skel( const struct tag_sKernel_VDES *epd);
ER             tKernel_eKernel_disableDispatch_skel( const struct tag_sKernel_VDES *epd);
ER             tKernel_eKernel_enableDispatch_skel( const struct tag_sKernel_VDES *epd);
ER             tKernel_eKernel_disableTaskException_skel( const struct tag_sKernel_VDES *epd);
ER             tKernel_eKernel_enableTaskException_skel( const struct tag_sKernel_VDES *epd);
ER             tKernel_eKernel_changeInterruptPriorityMask_skel( const struct tag_sKernel_VDES *epd, PRI interruptPriority);
ER             tKernel_eKernel_getInterruptPriorityMask_skel( const struct tag_sKernel_VDES *epd, PRI* p_interruptPriority);
ER             tKernel_eKernel_exitKernel_skel( const struct tag_sKernel_VDES *epd);
bool_t         tKernel_eKernel_senseContext_skel( const struct tag_sKernel_VDES *epd);
bool_t         tKernel_eKernel_senseLock_skel( const struct tag_sKernel_VDES *epd);
bool_t         tKernel_eKernel_senseDispatch_skel( const struct tag_sKernel_VDES *epd);
bool_t         tKernel_eKernel_senseDispatchPendingState_skel( const struct tag_sKernel_VDES *epd);
bool_t         tKernel_eKernel_senseKernel_skel( const struct tag_sKernel_VDES *epd);
/* eiKernel */
ER             tKernel_eiKernel_getTaskId_skel( const struct tag_siKernel_VDES *epd, ID* p_taskId);
ER             tKernel_eiKernel_rotateReadyQueue_skel( const struct tag_siKernel_VDES *epd, PRI taskPriority);
ER             tKernel_eiKernel_getMicroTime_skel( const struct tag_siKernel_VDES *epd, SYSUTM* p_systemMicroTime);
ER             tKernel_eiKernel_lockCpu_skel( const struct tag_siKernel_VDES *epd);
ER             tKernel_eiKernel_unlockCpu_skel( const struct tag_siKernel_VDES *epd);
ER             tKernel_eiKernel_exitKernel_skel( const struct tag_siKernel_VDES *epd);
bool_t         tKernel_eiKernel_senseContext_skel( const struct tag_siKernel_VDES *epd);
bool_t         tKernel_eiKernel_senseLock_skel( const struct tag_siKernel_VDES *epd);
bool_t         tKernel_eiKernel_senseDispatch_skel( const struct tag_siKernel_VDES *epd);
bool_t         tKernel_eiKernel_senseDispatchPendingState_skel( const struct tag_siKernel_VDES *epd);
bool_t         tKernel_eiKernel_senseKernel_skel( const struct tag_siKernel_VDES *epd);
bool_t         tKernel_eiKernel_senseDispatchPendingStateCPU_skel( const struct tag_siKernel_VDES *epd, const void* p_exceptionInfomation);
bool_t         tKernel_eiKernel_senseTaskExceptionPendingStateCPU_skel( const struct tag_siKernel_VDES *epd, const void* p_exceptionInfomation);

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  tKernel_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	tKernel_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	tKernel_IDX




/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eKernel_sleep    tKernel_eKernel_sleep
#define eKernel_sleepTimeout tKernel_eKernel_sleepTimeout
#define eKernel_delay    tKernel_eKernel_delay
#define eKernel_exitTask tKernel_eKernel_exitTask
#define eKernel_getTaskId tKernel_eKernel_getTaskId
#define eKernel_rotateReadyQueue tKernel_eKernel_rotateReadyQueue
#define eKernel_getTime  tKernel_eKernel_getTime
#define eKernel_getMicroTime tKernel_eKernel_getMicroTime
#define eKernel_lockCpu  tKernel_eKernel_lockCpu
#define eKernel_unlockCpu tKernel_eKernel_unlockCpu
#define eKernel_disableDispatch tKernel_eKernel_disableDispatch
#define eKernel_enableDispatch tKernel_eKernel_enableDispatch
#define eKernel_disableTaskException tKernel_eKernel_disableTaskException
#define eKernel_enableTaskException tKernel_eKernel_enableTaskException
#define eKernel_changeInterruptPriorityMask tKernel_eKernel_changeInterruptPriorityMask
#define eKernel_getInterruptPriorityMask tKernel_eKernel_getInterruptPriorityMask
#define eKernel_exitKernel tKernel_eKernel_exitKernel
#define eKernel_senseContext tKernel_eKernel_senseContext
#define eKernel_senseLock tKernel_eKernel_senseLock
#define eKernel_senseDispatch tKernel_eKernel_senseDispatch
#define eKernel_senseDispatchPendingState tKernel_eKernel_senseDispatchPendingState
#define eKernel_senseKernel tKernel_eKernel_senseKernel
#define eiKernel_getTaskId tKernel_eiKernel_getTaskId
#define eiKernel_rotateReadyQueue tKernel_eiKernel_rotateReadyQueue
#define eiKernel_getMicroTime tKernel_eiKernel_getMicroTime
#define eiKernel_lockCpu tKernel_eiKernel_lockCpu
#define eiKernel_unlockCpu tKernel_eiKernel_unlockCpu
#define eiKernel_exitKernel tKernel_eiKernel_exitKernel
#define eiKernel_senseContext tKernel_eiKernel_senseContext
#define eiKernel_senseLock tKernel_eiKernel_senseLock
#define eiKernel_senseDispatch tKernel_eiKernel_senseDispatch
#define eiKernel_senseDispatchPendingState tKernel_eiKernel_senseDispatchPendingState
#define eiKernel_senseKernel tKernel_eiKernel_senseKernel
#define eiKernel_senseDispatchPendingStateCPU tKernel_eiKernel_senseDispatchPendingStateCPU
#define eiKernel_senseTaskExceptionPendingStateCPU tKernel_eiKernel_senseTaskExceptionPendingStateCPU

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB()
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#ifndef TOPPERS_MACRO_ONLY

/* inline �إå��� include #_INL_# */
#include "tKernel_inline.h"

#endif /* TOPPERS_MACRO_ONLY */

#ifdef TOPPERS_CB_TYPE_ONLY

/* inline �Τ���� undef #_UDF_# */
#undef VALID_IDX
#undef GET_CELLCB
#undef CELLCB
#undef CELLIDX
#undef tKernel_IDX
#undef FOREACH_CELL
#undef END_FOREACH_CELL
#undef INITIALIZE_CB
#undef SET_CB_INIB_POINTER
#undef ATTR_accessPattern
#undef tKernel_ATTR_accessPattern
#undef tKernel_GET_accessPattern
#undef eKernel_sleep
#undef eKernel_sleepTimeout
#undef eKernel_delay
#undef eKernel_exitTask
#undef eKernel_getTaskId
#undef eKernel_rotateReadyQueue
#undef eKernel_getTime
#undef eKernel_getMicroTime
#undef eKernel_lockCpu
#undef eKernel_unlockCpu
#undef eKernel_disableDispatch
#undef eKernel_enableDispatch
#undef eKernel_disableTaskException
#undef eKernel_enableTaskException
#undef eKernel_changeInterruptPriorityMask
#undef eKernel_getInterruptPriorityMask
#undef eKernel_exitKernel
#undef eKernel_senseContext
#undef eKernel_senseLock
#undef eKernel_senseDispatch
#undef eKernel_senseDispatchPendingState
#undef eKernel_senseKernel
#undef eiKernel_getTaskId
#undef eiKernel_rotateReadyQueue
#undef eiKernel_getMicroTime
#undef eiKernel_lockCpu
#undef eiKernel_unlockCpu
#undef eiKernel_exitKernel
#undef eiKernel_senseContext
#undef eiKernel_senseLock
#undef eiKernel_senseDispatch
#undef eiKernel_senseDispatchPendingState
#undef eiKernel_senseKernel
#undef eiKernel_senseDispatchPendingStateCPU
#undef eiKernel_senseTaskExceptionPendingStateCPU
#endif /* TOPPERS_CB_TYPE_ONLY */

#endif /* tKernel_TECSGENH */
