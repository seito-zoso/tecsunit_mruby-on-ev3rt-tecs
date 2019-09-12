/* #[<PREAMBLE>]#
 * #[<...>]# ????#[</...>]# ?ǰϤޤ줿?????Ȥ?Խ????ʤ??Ǥ???????
 * tecsmerge ?ˤ??ޡ????˻?Ѥ?????
 *
 * °???????????ޥ???#_CAAM_#
 * NAME_LEN         int16_t          ATTR_NAME_LEN
 * ARG_NAME_LEN     int16_t          ATTR_ARG_NAME_LEN
 * ARG_DIM          int16_t          ATTR_ARG_DIM
 * TARGET_NUM       int16_t          ATTR_TARGET_NUM
 * target_path      char_t*          VAR_target_path
 * cell_path        char_t*          VAR_cell_path
 * region_path      char_t*          VAR_region_path
 * region_cell_path char_t*          VAR_region_cell_path
 * celltype_path    char_t*          VAR_celltype_path
 * entry_path       char_t*          VAR_entry_path
 * entry_path_tmp   char_t*          VAR_entry_path_tmp
 * signature_path   char_t*          VAR_signature_path
 * function_path    char_t*          VAR_function_path
 * function_path_tmp char_t*          VAR_function_path_tmp
 * arg_num          int8_t           VAR_arg_num
 * arg_num_json     int8_t           VAR_arg_num_json
 * exp_type         char_t*          VAR_exp_type
 * arg              char_t [32][128] VAR_arg
 * arg_type         char_t [32][128] VAR_arg_type
 * find_entry       int8_t           VAR_find_entry
 * find_func        int8_t           VAR_find_func
 * arg_struct       struct tecsunit_obj*  VAR_arg_struct
 * exp_struct       struct tecsunit_obj  VAR_exp_struct
 *
 * ?ƤӸ??ؿ?#_TCPF_#
 * call port: cJSMN signature: sJSMN context:task
 *   ER             cJSMN_json_open( );
 *   ER             cJSMN_json_parse_path( char_t* r_path, char_t* c_path, char_t* e_path, char_t* f_path, int target_num, int btr );
 *   ER             cJSMN_json_parse_arg( struct tecsunit_obj* arguments, struct tecsunit_obj* exp_val, int* arg_num, int target_num, int btr );
 * call port: cKernel signature: sKernel context:task
 *   ER             cKernel_sleep( );
 *   ER             cKernel_sleepTimeout( TMO timeout );
 *   ER             cKernel_delay( RELTIM delayTime );
 *   ER             cKernel_exitTask( );
 *   ER             cKernel_getTaskId( ID* p_taskId );
 *   ER             cKernel_rotateReadyQueue( PRI taskPriority );
 *   ER             cKernel_getTime( SYSTIM* p_systemTime );
 *   ER             cKernel_getMicroTime( SYSUTM* p_systemMicroTime );
 *   ER             cKernel_lockCpu( );
 *   ER             cKernel_unlockCpu( );
 *   ER             cKernel_disableDispatch( );
 *   ER             cKernel_enableDispatch( );
 *   ER             cKernel_disableTaskException( );
 *   ER             cKernel_enableTaskException( );
 *   ER             cKernel_changeInterruptPriorityMask( PRI interruptPriority );
 *   ER             cKernel_getInterruptPriorityMask( PRI* p_interruptPriority );
 *   ER             cKernel_exitKernel( );
 *   bool_t         cKernel_senseContext( );
 *   bool_t         cKernel_senseLock( );
 *   bool_t         cKernel_senseDispatch( );
 *   bool_t         cKernel_senseDispatchPendingState( );
 *   bool_t         cKernel_senseKernel( );
 * call port: cLCD signature: sLCD context:task
 *   ER             cLCD_setFont( lcdfont_t font );
 *   ER             cLCD_getFontSize( lcdfont_t font, int32_t* p_width, int32_t* p_height );
 *   ER             cLCD_drawString( const char* str, int32_t x, int32_t y );
 *   ER             cLCD_fillRect( int32_t x, int32_t y, int32_t w, int32_t h, lcdcolor_t color );
 *   ER             cLCD_drawLine( int32_t x0, int32_t y0, int32_t x1, int32_t y1 );
 *   void           cLCD_print( const char* str );
 *   void           cLCD_puts( const char* str );
 *   void           cLCD_clear( );
 *   void           cLCD_showMessageBox( const char* title, const char* msg );
 * call port: cButton signature: sButton context:task
 *   bool_t         cButton_isPressed( button_t button );
 * call port: cTECSInfo signature: nTECSInfo_sTECSInfo context:task
 *   ER             cTECSInfo_findNamespace( const char_t* namespace_path, Descriptor( nTECSInfo_sNamespaceInfo )* nsDesc );
 *   ER             cTECSInfo_findRegion( const char_t* namespace_path, Descriptor( nTECSInfo_sRegionInfo )* regionDesc );
 *   ER             cTECSInfo_findSignature( const char_t* namespace_path, Descriptor( nTECSInfo_sSignatureInfo )* signatureDesc );
 *   ER             cTECSInfo_findCelltype( const char_t* namespace_path, Descriptor( nTECSInfo_sCelltypeInfo )* celltypeDesc );
 *   ER             cTECSInfo_findCell( const char_t* namespace_path, Descriptor( nTECSInfo_sCellInfo )* cellDesc );
 *   ER             cTECSInfo_findRawEntryDescriptor( const char_t* namespace_path, Descriptor( nTECSInfo_sRawEntryDescriptorInfo )* rawEntryDescDesc, Descriptor( nTECSInfo_sEntryInfo )* entryDesc );
 *   ER             cTECSInfo_findRawEntryDescriptor_unsafe( const char_t* namespace_path, uint32_t subsc, void** rawDesc );
 * call port: cNSInfo signature: nTECSInfo_sNamespaceInfo context:task optional:true
 *   bool_t     is_cNSInfo_joined()                     check if joined
 *   ER             cNSInfo_getName( char_t* name, int_t max_len );
 *   uint16_t       cNSInfo_getNameLength( );
 *   uint32_t       cNSInfo_getNNamespace( );
 *   ER             cNSInfo_getNamespaceInfo( uint32_t ith, Descriptor( nTECSInfo_sNamespaceInfo )* des );
 *   uint32_t       cNSInfo_getNSignature( );
 *   ER             cNSInfo_getSignatureInfo( uint32_t ith, Descriptor( nTECSInfo_sSignatureInfo )* des );
 *   uint32_t       cNSInfo_getNCelltype( );
 *   ER             cNSInfo_getCelltypeInfo( uint32_t ith, Descriptor( nTECSInfo_sCelltypeInfo )* des );
 *   [dynamic, optional]
 *      void           cNSInfo_set_descriptor( Descriptor( nTECSInfo_sNamespaceInfo ) desc );
 *      void           cNSInfo_unjoin(  );
 * call port: cRegionInfo signature: nTECSInfo_sRegionInfo context:task optional:true
 *   bool_t     is_cRegionInfo_joined()                     check if joined
 *   ER             cRegionInfo_getName( char_t* name, int_t max_len );
 *   uint16_t       cRegionInfo_getNameLength( );
 *   uint32_t       cRegionInfo_getNCell( );
 *   ER             cRegionInfo_getCellInfo( uint32_t ith, Descriptor( nTECSInfo_sCellInfo )* des );
 *   uint32_t       cRegionInfo_getNRegion( );
 *   ER             cRegionInfo_getRegionInfo( uint32_t ith, Descriptor( nTECSInfo_sRegionInfo )* des );
 *   [dynamic, optional]
 *      void           cRegionInfo_set_descriptor( Descriptor( nTECSInfo_sRegionInfo ) desc );
 *      void           cRegionInfo_unjoin(  );
 * call port: cCellInfo signature: nTECSInfo_sCellInfo context:task optional:true
 *   bool_t     is_cCellInfo_joined()                     check if joined
 *   ER             cCellInfo_getName( char_t* name, int_t max_len );
 *   uint16_t       cCellInfo_getNameLength( );
 *   uint32_t       cCellInfo_getNRawEntryDescriptorInfo( );
 *   ER             cCellInfo_getRawEntryDescriptorInfo( int_t index, Descriptor( nTECSInfo_sRawEntryDescriptorInfo )* desc );
 *   void           cCellInfo_getCelltypeInfo( Descriptor( nTECSInfo_sCelltypeInfo )* desc );
 *   void           cCellInfo_getCBP( void** cbp );
 *   void           cCellInfo_getINIBP( void** inibp );
 *   [dynamic, optional]
 *      void           cCellInfo_set_descriptor( Descriptor( nTECSInfo_sCellInfo ) desc );
 *      void           cCellInfo_unjoin(  );
 * call port: cSignatureInfo signature: nTECSInfo_sSignatureInfo context:task optional:true
 *   bool_t     is_cSignatureInfo_joined()                     check if joined
 *   ER             cSignatureInfo_getName( char_t* name, int_t max_len );
 *   uint16_t       cSignatureInfo_getNameLength( );
 *   uint32_t       cSignatureInfo_getNFunction( );
 *   ER             cSignatureInfo_getFunctionInfo( uint32_t ith, Descriptor( nTECSInfo_sFunctionInfo )* desc );
 *   [dynamic, optional]
 *      void           cSignatureInfo_set_descriptor( Descriptor( nTECSInfo_sSignatureInfo ) desc );
 *      void           cSignatureInfo_unjoin(  );
 * call port: cCelltypeInfo signature: nTECSInfo_sCelltypeInfo context:task optional:true
 *   bool_t     is_cCelltypeInfo_joined()                     check if joined
 *   ER             cCelltypeInfo_getName( char_t* name, int_t max_len );
 *   uint16_t       cCelltypeInfo_getNameLength( );
 *   uint32_t       cCelltypeInfo_getNAttr( );
 *   ER             cCelltypeInfo_getAttrInfo( uint32_t ith, Descriptor( nTECSInfo_sVarDeclInfo )* desc );
 *   uint32_t       cCelltypeInfo_getNVar( );
 *   ER             cCelltypeInfo_getVarInfo( uint32_t ith, Descriptor( nTECSInfo_sVarDeclInfo )* desc );
 *   uint32_t       cCelltypeInfo_getNCall( );
 *   ER             cCelltypeInfo_getCallInfo( uint32_t ith, Descriptor( nTECSInfo_sCallInfo )* desc );
 *   uint32_t       cCelltypeInfo_getNEntry( );
 *   ER             cCelltypeInfo_getEntryInfo( uint32_t ith, Descriptor( nTECSInfo_sEntryInfo )* desc );
 *   bool_t         cCelltypeInfo_isSingleton( );
 *   bool_t         cCelltypeInfo_isIDX_is_ID( );
 *   uint32_t       cCelltypeInfo_sizeOfCB( );
 *   uint32_t       cCelltypeInfo_sizeOfINIB( );
 *   [dynamic, optional]
 *      void           cCelltypeInfo_set_descriptor( Descriptor( nTECSInfo_sCelltypeInfo ) desc );
 *      void           cCelltypeInfo_unjoin(  );
 * call port: cVarDeclInfo signature: nTECSInfo_sVarDeclInfo context:task optional:true
 *   bool_t     is_cVarDeclInfo_joined()                     check if joined
 *   ER             cVarDeclInfo_getName( char_t* name, int_t max_len );
 *   uint16_t       cVarDeclInfo_getNameLength( );
 *   void           cVarDeclInfo_getLocationInfo( uint32_t* offset, int8_t* place );
 *   void           cVarDeclInfo_getTypeInfo( Descriptor( nTECSInfo_sTypeInfo )* desc );
 *   void           cVarDeclInfo_getSizeIsExpr( char_t* expr_str, int32_t max_len );
 *   ER             cVarDeclInfo_getSizeIs( uint32_t* size, const void* p_cb );
 *   [dynamic, optional]
 *      void           cVarDeclInfo_set_descriptor( Descriptor( nTECSInfo_sVarDeclInfo ) desc );
 *      void           cVarDeclInfo_unjoin(  );
 * call port: cTypeInfo signature: nTECSInfo_sTypeInfo context:task optional:true
 *   bool_t     is_cTypeInfo_joined()                     check if joined
 *   ER             cTypeInfo_getName( char_t* name, int_t max_len );
 *   uint16_t       cTypeInfo_getNameLength( );
 *   uint32_t       cTypeInfo_getSize( );
 *   int8_t         cTypeInfo_getKind( );
 *   uint32_t       cTypeInfo_getNType( );
 *   ER             cTypeInfo_getTypeInfo( Descriptor( nTECSInfo_sTypeInfo )* desc );
 *   uint32_t       cTypeInfo_getNMember( );
 *   ER             cTypeInfo_getMemberInfo( uint32_t ith, Descriptor( nTECSInfo_sVarDeclInfo )* desc );
 *   [dynamic, optional]
 *      void           cTypeInfo_set_descriptor( Descriptor( nTECSInfo_sTypeInfo ) desc );
 *      void           cTypeInfo_unjoin(  );
 * call port: cFunctionInfo signature: nTECSInfo_sFunctionInfo context:task optional:true
 *   bool_t     is_cFunctionInfo_joined()                     check if joined
 *   ER             cFunctionInfo_getName( char_t* name, int_t max_len );
 *   uint16_t       cFunctionInfo_getNameLength( );
 *   void           cFunctionInfo_getReturnTypeInfo( Descriptor( nTECSInfo_sTypeInfo )* desc );
 *   uint32_t       cFunctionInfo_getNParam( );
 *   ER             cFunctionInfo_getParamInfo( uint32_t ith, Descriptor( nTECSInfo_sParamInfo )* param );
 *   [dynamic, optional]
 *      void           cFunctionInfo_set_descriptor( Descriptor( nTECSInfo_sFunctionInfo ) desc );
 *      void           cFunctionInfo_unjoin(  );
 * call port: cParamInfo signature: nTECSInfo_sParamInfo context:task optional:true
 *   bool_t     is_cParamInfo_joined()                     check if joined
 *   ER             cParamInfo_getName( char_t* name, int_t max_len );
 *   uint16_t       cParamInfo_getNameLength( );
 *   ER             cParamInfo_getTypeInfo( Descriptor( nTECSInfo_sTypeInfo )* desc );
 *   ER             cParamInfo_getDir( int8_t* dir );
 *   [dynamic, optional]
 *      void           cParamInfo_set_descriptor( Descriptor( nTECSInfo_sParamInfo ) desc );
 *      void           cParamInfo_unjoin(  );
 * call port: cEntryInfo signature: nTECSInfo_sEntryInfo context:task optional:true
 *   bool_t     is_cEntryInfo_joined()                     check if joined
 *   ER             cEntryInfo_getName( char_t* name, int_t max_len );
 *   uint16_t       cEntryInfo_getNameLength( );
 *   void           cEntryInfo_getSignatureInfo( Descriptor( nTECSInfo_sSignatureInfo )* desc );
 *   uint32_t       cEntryInfo_getArraySize( );
 *   bool_t         cEntryInfo_isInline( );
 *   [dynamic, optional]
 *      void           cEntryInfo_set_descriptor( Descriptor( nTECSInfo_sEntryInfo ) desc );
 *      void           cEntryInfo_unjoin(  );
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tTaskMain_tecsgen.h"
#include <stdio.h>
#include <jsmn.h>
// #include "json_struct.h"

#ifndef E_OK
#define E_OK    0       /* success */
#define E_ID    (-18)   /* illegal ID */
#endif

static void
print_cell_by_path( CELLCB *p_cellcb, char_t *path , int *flag );
static void
print_cell( CELLCB *p_cellcb, Descriptor( nTECSInfo_sCellInfo )  CELLdesc );
static void
print_signature( CELLCB *p_cellcb, Descriptor( nTECSInfo_sSignatureInfo )  signatureDesc );
static void
print_function( CELLCB *p_cellcb, Descriptor( nTECSInfo_sFunctionInfo ) functionDesc );
static void
print_param( CELLCB *p_cellcb, Descriptor( nTECSInfo_sParamInfo ) paramDesc, int num );
static void
print_celltype( CELLCB   *p_cellcb, Descriptor( nTECSInfo_sCelltypeInfo )  CTdesc );
static void
print_entry(CELLCB  *p_cellcb, Descriptor( nTECSInfo_sEntryInfo )  Edesc );
int
isNull( const char *str );
/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eBody
 * entry port: eBody
 * signature:  sTaskBody
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eBody_main
 * name:         eBody_main
 * global_name:  tTaskMain_eBody_main
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eBody_main(CELLIDX idx)
{
    CELLCB  *p_cellcb;
    ER      ercd, ercd2;
    // Descriptor( nTECSInfo_sNamespaceInfo ) NSdesc;
    // Descriptor( nTECSInfo_sRegionInfo )    RGNdesc;

    if (VALID_IDX(idx)) {
        p_cellcb = GET_CELLCB(idx);
    }
    else {
        /* エラー処理コードをここに記述します */
    } /* end if VALID_IDX(idx) */

    /* ここに処理本体を記述します #_TEFB_# */
    int8_t i, j, flag = 0;

    ercd = cJSMN_json_open();

    if( ercd != 0 ){
        cLCD_drawString( "Failed to OPEN", 1, 0 );
        while(1){
            if( cButton_isPressed( ENTER_BUTTON ) ){
                return;
            }
        }
        cKernel_delay( 500 );
    }

    for( j = 1; j < ATTR_TARGET_NUM + 1 ; j++ ) {
        /* 初期化 */
        VAR_find_entry = 0;
        VAR_find_func = 0;
        memset( VAR_arg_struct, 0 , sizeof(VAR_arg_struct) );
        memset( VAR_arg, 0 , sizeof(VAR_arg) );
        memset( VAR_arg_type, 0 , sizeof(VAR_arg_type) );

        ercd = cJSMN_json_parse_path( VAR_region_path, VAR_cell_path, VAR_entry_path_tmp, VAR_function_path_tmp, j, ATTR_NAME_LEN );
        if( ercd == 1 ) continue; /* そのtarget#は見つからなかった */
        if( ercd == -1 ){
            cLCD_drawString( "parse error", 1, 0 );
            while(1){
                if( cButton_isPressed( ENTER_BUTTON ) ){
                    return;
                }
            }
        }  /* jsmnエラー */

        sprintf( VAR_target_path, "Target%d", j );
        cLCD_drawString( VAR_target_path, 0, 0 );
        cLCD_drawString( "- Region:", 0, 1 );
        cLCD_drawString( VAR_region_path, 10, 1 );
        cLCD_drawString( "- Cell:", 0, 2 );
        cLCD_drawString( VAR_cell_path, 10, 2 );
        cLCD_drawString( "- Entry:", 0, 3 );
        cLCD_drawString( VAR_entry_path_tmp, 10, 3 );
        cLCD_drawString( "- Func:", 0, 4 );
        cLCD_drawString( VAR_function_path_tmp, 10, 4 );
        cLCD_drawString( " >> Press Enter", 0, 6 );
        while(1){
            if( cButton_isPressed( ENTER_BUTTON ) ){
                cLCD_clear();
                break;
            }
        }
        cKernel_delay( 500 );

        sprintf( VAR_region_cell_path, "%s::%s", VAR_region_path, VAR_cell_path );

        print_cell_by_path( p_cellcb, VAR_region_cell_path , &flag );

        if( flag ){
            cLCD_drawString( "Eroor: Cell cannot found", 0, 0 );
            cLCD_drawString( VAR_cell_path, 0, 1 );
            while(1){
                if( cButton_isPressed( ENTER_BUTTON ) ){
                    cLCD_clear();
                    break;
                }
            }
            cKernel_delay( 500 );
            return;
        }else if( isNull(VAR_entry_path) ){
            cLCD_drawString( "Eroor: Entry cannot found", 0, 0 );
            cLCD_drawString( VAR_entry_path_tmp, 0, 1 );
            while(1){
                if( cButton_isPressed( ENTER_BUTTON ) ){
                    cLCD_clear();
                    break;
                }
            }
            cKernel_delay( 500 );
            return;
        }else if( isNull(VAR_function_path) ){
            cLCD_drawString( "Eroor: function cannot found", 0, 0 );
            cLCD_drawString( VAR_function_path_tmp, 0, 1 );
            while(1){
                if( cButton_isPressed( ENTER_BUTTON ) ){
                    cLCD_clear();
                    break;
                }
            }
            cKernel_delay( 500 );
            return;
        }
        cLCD_setFont(EV3_FONT_SMALL);
        cLCD_drawString( VAR_target_path, 0, 0 );
        cLCD_drawString( "- Celltype:", 0, 1 );
        cLCD_drawString( VAR_celltype_path, 15, 1 );
        cLCD_drawString( "- Signature:", 0, 2 );
        cLCD_drawString( VAR_signature_path, 15, 2 );
        cLCD_drawString( "- Arg:", 0, 3 );
        for( i = 0; i < VAR_arg_num; i++ ){
            cLCD_drawString( VAR_arg_type[i], 15, 3 + i );
            strcpy( VAR_arg_struct[i].type, VAR_arg_type[i] );
        }
        strcpy( VAR_exp_struct.type, VAR_exp_type );
        cLCD_drawString( "- Return Type:", 0, 3 + i );
        cLCD_drawString( VAR_exp_type, 15, 3 + i );

        cLCD_drawString( " >> Press Enter", 0, 5 + i );
        while(1){
            if( cButton_isPressed( ENTER_BUTTON ) ){
                cLCD_clear();
                break;
            }
        }
        cKernel_delay( 500 );


        ercd = cJSMN_json_parse_arg( VAR_arg_struct, &VAR_exp_struct, &VAR_arg_num_json, j, ATTR_NAME_LEN );
        if( ercd == -1 ) return; /* jsmnエラー */

        if( VAR_arg_num_json != VAR_arg_num ){
            cLCD_drawString( "Error: Wrong number argments", 0, 0);
            while(1){
                if( cButton_isPressed( ENTER_BUTTON ) ){
                    cLCD_clear();
                    break;
                }
            }
            cKernel_delay( 500 );
        }

        /* Unit Test */
        ercd2 = cUnit_main( VAR_region_cell_path, VAR_entry_path, VAR_signature_path, VAR_function_path, VAR_arg_struct, &VAR_exp_struct );

        /* Wait until Enter is pressed */
        while(1){
            if( cButton_isPressed( ENTER_BUTTON ) ){
                cLCD_clear();
                break;
            }
        }
        cKernel_delay( 500 );

        /* Check the Result */
        cLCD_setFont( EV3_FONT_MEDIUM );
        if( ercd2 == E_OK ){
            cLCD_drawString( "Test Result", 0, 0);
            cLCD_drawString( " : E_OK", 0, 1);
            while(1){
                if( cButton_isPressed( ENTER_BUTTON ) ){
                    cLCD_clear();
                    break;
                }
            }
            cKernel_delay( 500 );
        }else{
            cLCD_drawString( "Test Result", 0, 0);
            cLCD_drawString( " : E_NG", 0, 1);
            while(1){
                if( cButton_isPressed( ENTER_BUTTON ) ){
                    cLCD_clear();
                    break;
                }
            }
            cKernel_delay( 500 );
        }

        if( ercd == 2 ){
            cLCD_setFont( EV3_FONT_MEDIUM );
            cLCD_drawString( "All targets", 0, 0);
            cLCD_drawString( "      are checked!", 0, 1);
            cLCD_drawString( "Press BACK Button ", 0, 3);
            while(1){
                if( cButton_isPressed( ENTER_BUTTON ) ){
                    cLCD_clear();
                }
            }
            cKernel_delay( 500 );
            return;
        }
    }

    if( j > ATTR_TARGET_NUM ){
        cLCD_drawString( "Error: Too many targets or keyword is wrong", 0, 0);
        while(1){
            if( cButton_isPressed( ENTER_BUTTON ) ){
                cLCD_clear();
            }
        }
        cKernel_delay( 500 );
    }
}

/* #[<POSTAMBLE>]#
 *   ?????겼????????ؿ?????ޤ?
 * #[</POSTAMBLE>]#*/
static void
print_cell_by_path( CELLCB *p_cellcb, char_t *path , int *flag )
{
    Descriptor( nTECSInfo_sCellInfo )  desc;
    ER    ercd;

    ercd = cTECSInfo_findCell( path, &desc );
    if( ercd == E_OK ){
        print_cell( p_cellcb, desc );
    }
    else{
        *flag = 1;
    }
}

static void
print_cell( CELLCB  *p_cellcb, Descriptor( nTECSInfo_sCellInfo )  CELLdesc )
{
    Descriptor( nTECSInfo_sCelltypeInfo ) CTdesc;
    void  *cbp, *inibp;

    cCellInfo_set_descriptor( CELLdesc );

    cCellInfo_getCelltypeInfo( &CTdesc );

    /* celltype info */
    print_celltype( p_cellcb, CTdesc );
}

static void
print_celltype( CELLCB  *p_cellcb, Descriptor( nTECSInfo_sCelltypeInfo )  CTdesc )
{

    Descriptor( nTECSInfo_sEntryInfo ) entryDesc;
    int i, n;
    cCelltypeInfo_set_descriptor( CTdesc );
    cCelltypeInfo_getName( VAR_celltype_path, ATTR_NAME_LEN );
    n = cCelltypeInfo_getNEntry();

    for( i = 0; i < n; i++ ){
      if( VAR_find_entry ){
        break;
      }
      cCelltypeInfo_getEntryInfo( i, &entryDesc);
      print_entry( p_cellcb, entryDesc );
    }
}

static void
print_entry(CELLCB  *p_cellcb, Descriptor( nTECSInfo_sEntryInfo )  Edesc )
{
    Descriptor( nTECSInfo_sSignatureInfo ) sigDesc;
    cEntryInfo_set_descriptor( Edesc );
    cEntryInfo_getName(VAR_entry_path, ATTR_NAME_LEN);
    if( !strcmp(VAR_entry_path, VAR_entry_path_tmp ) ){
      // sprintf( VAR_entry_path, "%s.%s", VAR_cell_path, VAR_entry_path_tmp );
      VAR_find_entry = 1;
      cEntryInfo_getSignatureInfo( &sigDesc );
      print_signature( p_cellcb, sigDesc );
    }else{
      strcpy( VAR_entry_path, "" );
    }
}

static void
print_signature( CELLCB *p_cellcb, Descriptor( nTECSInfo_sSignatureInfo )  signatureDesc )
{
    int n, i;
    Descriptor( nTECSInfo_sFunctionInfo )  functionDesc;
    /* signatureInfoセルに動的結合 */
    cSignatureInfo_set_descriptor( signatureDesc );
    cSignatureInfo_getName( VAR_signature_path, ATTR_NAME_LEN );
    n = cSignatureInfo_getNFunction();
    for(i = 0; i < n; i++){
        if( VAR_find_func ){
            break;
        }
        cSignatureInfo_getFunctionInfo(i, &functionDesc);
        print_function( p_cellcb, functionDesc );
    }
}

static void
print_function( CELLCB *p_cellcb, Descriptor( nTECSInfo_sFunctionInfo ) functionDesc )
{
    int i;
    Descriptor( nTECSInfo_sParamInfo ) paramInfo;
    Descriptor( nTECSInfo_sTypeInfo ) typeInfo;

    cFunctionInfo_set_descriptor( functionDesc );
    cFunctionInfo_getName( VAR_function_path, ATTR_NAME_LEN );

    if( !strcmp( VAR_function_path, VAR_function_path_tmp ) ){
      VAR_find_func = 1;
      VAR_arg_num = cFunctionInfo_getNParam();
      cFunctionInfo_getReturnTypeInfo( &typeInfo );
      cTypeInfo_set_descriptor( typeInfo );
      cTypeInfo_getName( VAR_exp_type, ATTR_ARG_NAME_LEN );
      for(i = 0; i < VAR_arg_num; i++){
          cFunctionInfo_getParamInfo(i, &paramInfo);
          print_param( p_cellcb, paramInfo, i );
      }
    }else{
      strcpy( VAR_function_path, "" );
      return;
    }
}

static void
print_param( CELLCB *p_cellcb, Descriptor( nTECSInfo_sParamInfo ) paramDesc, int num )
{
    int n, i;
    char_t tmp[8];
    Descriptor( nTECSInfo_sTypeInfo ) typeInfo;
    Descriptor( nTECSInfo_sVarDeclInfo ) memberInfo;

    cParamInfo_set_descriptor( paramDesc );
    cParamInfo_getName( VAR_arg[num], ATTR_ARG_NAME_LEN );
    cParamInfo_getTypeInfo( &typeInfo );
    cTypeInfo_set_descriptor( typeInfo );
    cTypeInfo_getName( VAR_arg_type[num], ATTR_ARG_NAME_LEN );

    // TODO
    // if( strstr( VAR_arg_type[num], "struct") != NULL ){
    //     // n = 0;
    //     n = cTypeInfo_getNMember();
    //     printf("%d\n",n);

    //     // for(i = 0; i < n; i++){
    //     //     cTypeInfo_getMemberInfo( i, &memberInfo );
    //     //     cVarDeclInfo_set_descriptor( memberInfo );
    //     //     cVarDeclInfo_getName( tmp, 8 );
    //     //     printf("%s\n",tmp);
    //     // }
    // }

}

int
isNull( const char *str)
{
    if( str == NULL || !strlen(str) ){
      return true;
    }
    return false;
};
