/*
 * ¤³¤Î¥Õ¥¡¥¤¥ë¤Ï tecsgen ¤Ë¤è¤ê¼«Æ°À¸À®¤µ¤ì¤Þ¤·¤¿
 * ¤³¤Î¥Õ¥¡¥¤¥ë¤òÊÔ½¸¤·¤Æ»ÈÍÑ¤¹¤ë¤³¤È¤Ï¡¢°Õ¿Þ¤µ¤ì¤Æ¤¤¤Þ¤»¤ó
 */
/* #[<PREAMBLE>]#
 * #[<...>]# ¤«¤é #[</...>]# ¤Ç°Ï¤Þ¤ì¤¿¥³¥á¥ó¥È¤ÏÊÔ½¸¤·¤Ê¤¤¤Ç¤¯¤À¤µ¤¤
 * tecsmerge ¤Ë¤è¤ë¥Þ¡¼¥¸¤Ë»ÈÍÑ¤µ¤ì¤Þ¤¹
 *
 * Â°À­¥¢¥¯¥»¥¹¥Þ¥¯¥í #_CAAM_#
 * LEN              int16_t          ATTR_LEN        
 * out_int          int32_t [16][64] VAR_out_int     
 * out_double       double64_t [16][32] VAR_out_double  
 * out_char         char_t [16][256] VAR_out_char    
 * cell_entry       char*            VAR_cell_entry  
 *
 * ¸Æ¤Ó¸ý´Ø¿ô #_TCPF_#
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
 * call port: cREDInfo signature: nTECSInfo_sRawEntryDescriptorInfo context:task optional:true
 *   bool_t     is_cREDInfo_joined()                     check if joined
 *   uint16_t       cREDInfo_getNRawEntryDescriptorInfo( );
 *   ER             cREDInfo_getRawDescriptor( int_t subsc, void** rawDesc );
 *   [dynamic, optional]
 *      void           cREDInfo_set_descriptor( Descriptor( nTECSInfo_sRawEntryDescriptorInfo ) desc );
 *      void           cREDInfo_unjoin(  );
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
 * call port: ciTask signature: siTask context:non-task optional:true
 *   bool_t     is_ciTask_joined()                     check if joined
 *   ER             ciTask_activate( );
 *   ER             ciTask_wakeup( );
 *   ER             ciTask_releaseWait( );
 *   ER             ciTask_raiseException( TEXPTN pattern );
 *   ER             ciTask_disableWait( );
 *   ER             ciTask_enableWait( );
 *   ER             ciTask_startOverRunHandler( OVRTIM ovrtim );
 *   ER             ciTask_stopOverRunHandler( );
 *   [dynamic, optional]
 *      void           ciTask_set_descriptor( Descriptor( siTask ) desc );
 *      void           ciTask_unjoin(  );
 * call port: cInitializeRoutineBody signature: sInitializeRoutineBody context:task optional:true
 *   bool_t     is_cInitializeRoutineBody_joined()                     check if joined
 *   void           cInitializeRoutineBody_main( );
 *   [dynamic, optional]
 *      void           cInitializeRoutineBody_set_descriptor( Descriptor( sInitializeRoutineBody ) desc );
 *      void           cInitializeRoutineBody_unjoin(  );
 * call port: cTerminateRoutineBody signature: sTerminateRoutineBody context:task optional:true
 *   bool_t     is_cTerminateRoutineBody_joined()                     check if joined
 *   void           cTerminateRoutineBody_main( );
 *   [dynamic, optional]
 *      void           cTerminateRoutineBody_set_descriptor( Descriptor( sTerminateRoutineBody ) desc );
 *      void           cTerminateRoutineBody_unjoin(  );
 * call port: ciHandlerBody signature: siHandlerBody context:non-task optional:true
 *   bool_t     is_ciHandlerBody_joined()                     check if joined
 *   void           ciHandlerBody_main( );
 *   [dynamic, optional]
 *      void           ciHandlerBody_set_descriptor( Descriptor( siHandlerBody ) desc );
 *      void           ciHandlerBody_unjoin(  );
 * call port: cConfigInterrupt signature: sConfigInterrupt context:task optional:true
 *   bool_t     is_cConfigInterrupt_joined()                     check if joined
 *   ER             cConfigInterrupt_disable( );
 *   ER             cConfigInterrupt_enable( );
 *   [dynamic, optional]
 *      void           cConfigInterrupt_set_descriptor( Descriptor( sConfigInterrupt ) desc );
 *      void           cConfigInterrupt_unjoin(  );
 * call port: cCyclic signature: sCyclic context:task optional:true
 *   bool_t     is_cCyclic_joined()                     check if joined
 *   ER             cCyclic_start( );
 *   ER             cCyclic_stop( );
 *   ER             cCyclic_refer( T_RCYC* pk_cyclicHandlerStatus );
 *   [dynamic, optional]
 *      void           cCyclic_set_descriptor( Descriptor( sCyclic ) desc );
 *      void           cCyclic_unjoin(  );
 * call port: cAlarm signature: sAlarm context:task optional:true
 *   bool_t     is_cAlarm_joined()                     check if joined
 *   ER             cAlarm_start( RELTIM alarmTime );
 *   ER             cAlarm_stop( );
 *   ER             cAlarm_refer( T_RALM* pk_alarmStatus );
 *   [dynamic, optional]
 *      void           cAlarm_set_descriptor( Descriptor( sAlarm ) desc );
 *      void           cAlarm_unjoin(  );
 * call port: ciAlarm signature: siAlarm context:non-task optional:true
 *   bool_t     is_ciAlarm_joined()                     check if joined
 *   ER             ciAlarm_start( RELTIM alarmTime );
 *   ER             ciAlarm_stop( );
 *   [dynamic, optional]
 *      void           ciAlarm_set_descriptor( Descriptor( siAlarm ) desc );
 *      void           ciAlarm_unjoin(  );
 * call port: cFixedSizeMemoryPool signature: sFixedSizeMemoryPool context:task optional:true
 *   bool_t     is_cFixedSizeMemoryPool_joined()                     check if joined
 *   ER             cFixedSizeMemoryPool_get( void** p_block );
 *   ER             cFixedSizeMemoryPool_getPolling( void** p_block );
 *   ER             cFixedSizeMemoryPool_getTimeout( void** p_block, TMO timeout );
 *   ER             cFixedSizeMemoryPool_release( const void* block );
 *   ER             cFixedSizeMemoryPool_initialize( );
 *   ER             cFixedSizeMemoryPool_refer( T_RMPF* pk_memoryPoolFixedSizeStatus );
 *   [dynamic, optional]
 *      void           cFixedSizeMemoryPool_set_descriptor( Descriptor( sFixedSizeMemoryPool ) desc );
 *      void           cFixedSizeMemoryPool_unjoin(  );
 * call port: cMessageBuffer signature: sMessageBuffer context:task optional:true
 *   bool_t     is_cMessageBuffer_joined()                     check if joined
 *   ER             cMessageBuffer_send( const uint8_t* message, uint32_t size );
 *   ER             cMessageBuffer_sendPolling( const uint8_t* message, uint32_t size );
 *   ER             cMessageBuffer_sendTimeout( const uint8_t* message, uint32_t size, TMO timeout );
 *   ER_UINT        cMessageBuffer_receive( uint8_t* message );
 *   ER_UINT        cMessageBuffer_receivePolling( uint8_t* message );
 *   ER_UINT        cMessageBuffer_receiveTimeout( uint8_t* message, TMO timeout );
 *   void           cMessageBuffer_initialize( );
 *   ER             cMessageBuffer_refer( T_RMBF* packet );
 *   [dynamic, optional]
 *      void           cMessageBuffer_set_descriptor( Descriptor( sMessageBuffer ) desc );
 *      void           cMessageBuffer_unjoin(  );
 * call port: cMalloc signature: sMalloc context:task optional:true
 *   bool_t     is_cMalloc_joined()                     check if joined
 *   int            cMalloc_initializeMemoryPool( );
 *   void*          cMalloc_calloc( size_t nelem, size_t elem_size );
 *   void*          cMalloc_malloc( size_t size );
 *   void*          cMalloc_realloc( const void* ptr, size_t new_size );
 *   void           cMalloc_free( const void* ptr );
 *   [dynamic, optional]
 *      void           cMalloc_set_descriptor( Descriptor( sMalloc ) desc );
 *      void           cMalloc_unjoin(  );
 * call port: cUltrasonicSensor signature: sUltrasonicSensor context:task optional:true
 *   bool_t     is_cUltrasonicSensor_joined()                     check if joined
 *   int16_t        cUltrasonicSensor_getDistance( );
 *   bool_t         cUltrasonicSensor_listen( );
 *   void           cUltrasonicSensor_initializePort( );
 *   [dynamic, optional]
 *      void           cUltrasonicSensor_set_descriptor( Descriptor( sUltrasonicSensor ) desc );
 *      void           cUltrasonicSensor_unjoin(  );
 * call port: cColorSensor signature: sColorSensor context:task optional:true
 *   bool_t     is_cColorSensor_joined()                     check if joined
 *   colorid_t      cColorSensor_getColor( );
 *   uint8_t        cColorSensor_getReflect( );
 *   uint8_t        cColorSensor_getAmbient( );
 *   void           cColorSensor_initializePort( );
 *   void           cColorSensor_getRGBRaw( uint16_t* r, uint16_t* g, uint16_t* b );
 *   [dynamic, optional]
 *      void           cColorSensor_set_descriptor( Descriptor( sColorSensor ) desc );
 *      void           cColorSensor_unjoin(  );
 * call port: cTouchSensor signature: sTouchSensor context:task optional:true
 *   bool_t     is_cTouchSensor_joined()                     check if joined
 *   bool_t         cTouchSensor_isPressed( );
 *   void           cTouchSensor_initializePort( );
 *   [dynamic, optional]
 *      void           cTouchSensor_set_descriptor( Descriptor( sTouchSensor ) desc );
 *      void           cTouchSensor_unjoin(  );
 * call port: cGyroSensor signature: sGyroSensor context:task optional:true
 *   bool_t     is_cGyroSensor_joined()                     check if joined
 *   int16_t        cGyroSensor_getAngle( );
 *   int16_t        cGyroSensor_getRate( );
 *   ER             cGyroSensor_reset( );
 *   float32_t      cGyroSensor_calibrate( int32_t times );
 *   void           cGyroSensor_initializePort( );
 *   [dynamic, optional]
 *      void           cGyroSensor_set_descriptor( Descriptor( sGyroSensor ) desc );
 *      void           cGyroSensor_unjoin(  );
 * call port: cMotor signature: sMotor context:task optional:true
 *   bool_t     is_cMotor_joined()                     check if joined
 *   ER_UINT        cMotor_getType( );
 *   int32_t        cMotor_getCounts( );
 *   int            cMotor_getPower( );
 *   ER             cMotor_resetCounts( );
 *   ER             cMotor_setPower( int power );
 *   ER             cMotor_stop( bool_t brake );
 *   ER             cMotor_rotate( int degrees, uint32_t speed_abs, bool_t blocking );
 *   void           cMotor_initializePort( int32_t type );
 *   [dynamic, optional]
 *      void           cMotor_set_descriptor( Descriptor( sMotor ) desc );
 *      void           cMotor_unjoin(  );
 * call port: cButton signature: sButton context:task optional:true
 *   bool_t     is_cButton_joined()                     check if joined
 *   bool_t         cButton_isPressed( button_t button );
 *   [dynamic, optional]
 *      void           cButton_set_descriptor( Descriptor( sButton ) desc );
 *      void           cButton_unjoin(  );
 * call port: cLCD signature: sLCD context:task optional:true
 *   bool_t     is_cLCD_joined()                     check if joined
 *   ER             cLCD_setFont( lcdfont_t font );
 *   ER             cLCD_getFontSize( lcdfont_t font, int32_t* p_width, int32_t* p_height );
 *   ER             cLCD_drawString( const char* str, int32_t x, int32_t y );
 *   ER             cLCD_fillRect( int32_t x, int32_t y, int32_t w, int32_t h, lcdcolor_t color );
 *   ER             cLCD_drawLine( int32_t x0, int32_t y0, int32_t x1, int32_t y1 );
 *   void           cLCD_print( const char* str );
 *   void           cLCD_puts( const char* str );
 *   void           cLCD_clear( );
 *   void           cLCD_showMessageBox( const char* title, const char* msg );
 *   [dynamic, optional]
 *      void           cLCD_set_descriptor( Descriptor( sLCD ) desc );
 *      void           cLCD_unjoin(  );
 * call port: cLED signature: sLED context:task optional:true
 *   bool_t     is_cLED_joined()                     check if joined
 *   ER             cLED_setColor( ledcolor_t color );
 *   ER             cLED_off( );
 *   [dynamic, optional]
 *      void           cLED_set_descriptor( Descriptor( sLED ) desc );
 *      void           cLED_unjoin(  );
 * call port: cBattery signature: sBattery context:task optional:true
 *   bool_t     is_cBattery_joined()                     check if joined
 *   int            cBattery_current_mA( );
 *   int            cBattery_voltage_mV( );
 *   [dynamic, optional]
 *      void           cBattery_set_descriptor( Descriptor( sBattery ) desc );
 *      void           cBattery_unjoin(  );
 * call port: cSpeaker signature: sSpeaker context:task optional:true
 *   bool_t     is_cSpeaker_joined()                     check if joined
 *   ER             cSpeaker_setVolume( uint8_t volume );
 *   ER             cSpeaker_playTone( uint16_t frequency, int32_t duration );
 *   ER             cSpeaker_stop( );
 *   [dynamic, optional]
 *      void           cSpeaker_set_descriptor( Descriptor( sSpeaker ) desc );
 *      void           cSpeaker_unjoin(  );
 * call port: cRiteVM signature: sRiteVM context:task optional:true
 *   bool_t     is_cRiteVM_joined()                     check if joined
 *   void           cRiteVM_reset( );
 *   [dynamic, optional]
 *      void           cRiteVM_set_descriptor( Descriptor( sRiteVM ) desc );
 *      void           cRiteVM_unjoin(  );
 * call port: cBalancer signature: sBalancer context:task optional:true
 *   bool_t     is_cBalancer_joined()                     check if joined
 *   void           cBalancer_control( int16_t forward, int16_t turn, int16_t gyro, int16_t gyroOffset, int32_t leftRevolution, int32_t rightRevolution, int16_t battery, int8_t* pwm_l, int8_t* pwm_r, int32_t backlashhalf );
 *   void           cBalancer_init( );
 *   [dynamic, optional]
 *      void           cBalancer_set_descriptor( Descriptor( sBalancer ) desc );
 *      void           cBalancer_unjoin(  );
 * call port: cSharedMemory signature: sSharedMemory context:task optional:true
 *   bool_t     is_cSharedMemory_joined()                     check if joined
 *   void           cSharedMemory_putVal( int32_t index, int32_t val );
 *   int32_t        cSharedMemory_getVal( int32_t index );
 *   int32_t        cSharedMemory_getSize( );
 *   [dynamic, optional]
 *      void           cSharedMemory_set_descriptor( Descriptor( sSharedMemory ) desc );
 *      void           cSharedMemory_unjoin(  );
 * call port: cTarget1 signature: sTarget1 context:task optional:true
 *   bool_t     is_cTarget1_joined()                     check if joined
 *   int            cTarget1_double( int arg );
 *   [dynamic, optional]
 *      void           cTarget1_set_descriptor( Descriptor( sTarget1 ) desc );
 *      void           cTarget1_unjoin(  );
 * call port: cTarget2 signature: sTarget2 context:task optional:true
 *   bool_t     is_cTarget2_joined()                     check if joined
 *   int            cTarget2_add( int arg1, int arg2 );
 *   [dynamic, optional]
 *      void           cTarget2_set_descriptor( Descriptor( sTarget2 ) desc );
 *      void           cTarget2_unjoin(  );
 * call port: cTarget3 signature: sTarget3 context:task optional:true
 *   bool_t     is_cTarget3_joined()                     check if joined
 *   ER             cTarget3_send( const int8_t* buf, int8_t len );
 *   ER             cTarget3_sendMessage( const char_t* buf, int8_t len );
 *   ER             cTarget3_receiveMessage( char_t* buf, int8_t len );
 *   ER             cTarget3_checkER( ER eroor );
 *   [dynamic, optional]
 *      void           cTarget3_set_descriptor( Descriptor( sTarget3 ) desc );
 *      void           cTarget3_unjoin(  );
 * call port: cInitializeBridge signature: nMruby_sInitializeBridge context:task optional:true
 *   bool_t     is_cInitializeBridge_joined()                     check if joined
 *   void           cInitializeBridge_initializeBridge( const mrb_state* mrb );
 *   [dynamic, optional]
 *      void           cInitializeBridge_set_descriptor( Descriptor( nMruby_sInitializeBridge ) desc );
 *      void           cInitializeBridge_unjoin(  );
 * call port: cInitializeTECSBridge signature: nMruby_sInitializeTECSBridge context:task optional:true
 *   bool_t     is_cInitializeTECSBridge_joined()                     check if joined
 *   void           cInitializeTECSBridge_initializeBridge( mrb_state* mrb, struct RClass* TECS );
 *   [dynamic, optional]
 *      void           cInitializeTECSBridge_set_descriptor( Descriptor( nMruby_sInitializeTECSBridge ) desc );
 *      void           cInitializeTECSBridge_unjoin(  );
 * call port: cMrubyVM signature: nMruby_sMrubyVM context:task optional:true
 *   bool_t     is_cMrubyVM_joined()                     check if joined
 *   bool_t         cMrubyVM_initialize( );
 *   bool_t         cMrubyVM_run( );
 *   void           cMrubyVM_funcall( const char_t* name );
 *   void           cMrubyVM_finalize( );
 *   [dynamic, optional]
 *      void           cMrubyVM_set_descriptor( Descriptor( nMruby_sMrubyVM ) desc );
 *      void           cMrubyVM_unjoin(  );
 * call port: cMain signature: nPosix_sMain context:task optional:true
 *   bool_t     is_cMain_joined()                     check if joined
 *   int            cMain_main( int argc, const char** argv );
 *   [dynamic, optional]
 *      void           cMain_set_descriptor( Descriptor( nPosix_sMain ) desc );
 *      void           cMain_unjoin(  );
 *
 * #[</PREAMBLE>]# */

/* ¥×¥í¥È¥¿¥¤¥×Àë¸À¤äÊÑ¿ô¤ÎÄêµÁ¤ò¤³¤³¤Ë½ñ¤­¤Þ¤¹ #_PAC_# */
#include "tTECSUnit_tecsgen.h"

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

ER getRawEntryDescriptor( CELLCB *p_cellcb, char_t *entry_path, void **rawEntryDesc, char_t *expected_signature );
/* ¼õ¤±¸ý´Ø¿ô #_TEPF_# */
/* #[<ENTRY_PORT>]# eUnit
 * entry port: eUnit
 * signature:  sTECSUnit
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eUnit_main
 * name:         eUnit_main
 * global_name:  tTECSUnit_eUnit_main
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eUnit_main(CELLIDX idx, const char_t* cell_path, const char_t* entry_path, const char_t* signature_path, const char_t* function_path, const struct tecsunit_obj* arguments, const struct tecsunit_obj* exp_val)
{
  CELLCB  *p_cellcb;
  if (VALID_IDX(idx)) {
    p_cellcb = GET_CELLCB(idx);
  }
  else {
    /* ã‚¨ãƒ©ãƒ¼å‡¦ç†ã‚³ãƒ¼ãƒ‰ã‚’ã“ã“ã«è¨˜è¿°ã—ã¾ã™ */
  } /* end if VALID_IDX(idx) */
  puts("");
  printf( "--- TECSUnit ---\n" );
  void *rawDesc;
  Descriptor( siTask ) iTaskDesc;
  Descriptor( sInitializeRoutineBody ) InitializeRoutineBodyDesc;
  Descriptor( sTerminateRoutineBody ) TerminateRoutineBodyDesc;
  Descriptor( siHandlerBody ) iHandlerBodyDesc;
  Descriptor( sConfigInterrupt ) ConfigInterruptDesc;
  Descriptor( sCyclic ) CyclicDesc;
  Descriptor( sAlarm ) AlarmDesc;
  Descriptor( siAlarm ) iAlarmDesc;
  Descriptor( sFixedSizeMemoryPool ) FixedSizeMemoryPoolDesc;
  Descriptor( sMessageBuffer ) MessageBufferDesc;
  Descriptor( sMalloc ) MallocDesc;
  Descriptor( sUltrasonicSensor ) UltrasonicSensorDesc;
  Descriptor( sColorSensor ) ColorSensorDesc;
  Descriptor( sTouchSensor ) TouchSensorDesc;
  Descriptor( sGyroSensor ) GyroSensorDesc;
  Descriptor( sMotor ) MotorDesc;
  Descriptor( sButton ) ButtonDesc;
  Descriptor( sLCD ) LCDDesc;
  Descriptor( sLED ) LEDDesc;
  Descriptor( sBattery ) BatteryDesc;
  Descriptor( sSpeaker ) SpeakerDesc;
  Descriptor( sRiteVM ) RiteVMDesc;
  Descriptor( sBalancer ) BalancerDesc;
  Descriptor( sSharedMemory ) SharedMemoryDesc;
  Descriptor( sTarget1 ) Target1Desc;
  Descriptor( sTarget2 ) Target2Desc;
  Descriptor( sTarget3 ) Target3Desc;
  Descriptor( sInitializeBridge ) InitializeBridgeDesc;
  Descriptor( sInitializeTECSBridge ) InitializeTECSBridgeDesc;
  Descriptor( sMrubyVM ) MrubyVMDesc;
  Descriptor( sMain ) MainDesc;
  sprintf( VAR_cell_entry, "%s.%s", cell_path, entry_path );
  getRawEntryDescriptor( p_cellcb, VAR_cell_entry, &rawDesc, signature_path );

  if( !strcmp(signature_path, "siTask" ) ){
    setRawEntryDescriptor( iTaskDesc, siTask, rawDesc );
    ciTask_set_descriptor( iTaskDesc );
      if( !strcmp( function_path, "raiseException" ) ){
        printf("Call ciTask_raiseException\n");
        if( exp_val->data.mem_er == ciTask_raiseException( arguments[0].data.mem_texptn ) ){
          printf("\nResultï¼šOK\n");
        }else{
          printf("\nResultï¼šNG\n");
        }
      }
      else if( !strcmp( function_path, "startOverRunHandler" ) ){
        printf("Call ciTask_startOverRunHandler\n");
        if( exp_val->data.mem_er == ciTask_startOverRunHandler( arguments[0].data.mem_ovrtim ) ){
          printf("\nResultï¼šOK\n");
        }else{
          printf("\nResultï¼šNG\n");
        }
      }
  }
  else if( !strcmp(signature_path, "sInitializeRoutineBody" ) ){
    setRawEntryDescriptor( InitializeRoutineBodyDesc, sInitializeRoutineBody, rawDesc );
    cInitializeRoutineBody_set_descriptor( InitializeRoutineBodyDesc );
  }
  else if( !strcmp(signature_path, "sTerminateRoutineBody" ) ){
    setRawEntryDescriptor( TerminateRoutineBodyDesc, sTerminateRoutineBody, rawDesc );
    cTerminateRoutineBody_set_descriptor( TerminateRoutineBodyDesc );
  }
  else if( !strcmp(signature_path, "siHandlerBody" ) ){
    setRawEntryDescriptor( iHandlerBodyDesc, siHandlerBody, rawDesc );
    ciHandlerBody_set_descriptor( iHandlerBodyDesc );
  }
  else if( !strcmp(signature_path, "sConfigInterrupt" ) ){
    setRawEntryDescriptor( ConfigInterruptDesc, sConfigInterrupt, rawDesc );
    cConfigInterrupt_set_descriptor( ConfigInterruptDesc );
  }
  else if( !strcmp(signature_path, "sCyclic" ) ){
    setRawEntryDescriptor( CyclicDesc, sCyclic, rawDesc );
    cCyclic_set_descriptor( CyclicDesc );
  }
  else if( !strcmp(signature_path, "sAlarm" ) ){
    setRawEntryDescriptor( AlarmDesc, sAlarm, rawDesc );
    cAlarm_set_descriptor( AlarmDesc );
      if( !strcmp( function_path, "start" ) ){
        printf("Call cAlarm_start\n");
        if( exp_val->data.mem_er == cAlarm_start( arguments[0].data.mem_reltim ) ){
          printf("\nResultï¼šOK\n");
        }else{
          printf("\nResultï¼šNG\n");
        }
      }
  }
  else if( !strcmp(signature_path, "siAlarm" ) ){
    setRawEntryDescriptor( iAlarmDesc, siAlarm, rawDesc );
    ciAlarm_set_descriptor( iAlarmDesc );
      if( !strcmp( function_path, "start" ) ){
        printf("Call ciAlarm_start\n");
        if( exp_val->data.mem_er == ciAlarm_start( arguments[0].data.mem_reltim ) ){
          printf("\nResultï¼šOK\n");
        }else{
          printf("\nResultï¼šNG\n");
        }
      }
  }
  else if( !strcmp(signature_path, "sFixedSizeMemoryPool" ) ){
    setRawEntryDescriptor( FixedSizeMemoryPoolDesc, sFixedSizeMemoryPool, rawDesc );
    cFixedSizeMemoryPool_set_descriptor( FixedSizeMemoryPoolDesc );
      else if( !strcmp( function_path, "getTimeout" ) ){
        printf("Call cFixedSizeMemoryPool_getTimeout\n");
        if( exp_val->data.mem_er == cFixedSizeMemoryPool_getTimeout( arguments[1].data.mem_tmo ) ){
          printf("\nResultï¼šOK\n");
        }else{
          printf("\nResultï¼šNG\n");
        }
      }
      else if( !strcmp( function_path, "release" ) ){
        printf("Call cFixedSizeMemoryPool_release\n");
        if( exp_val->data.mem_er == cFixedSizeMemoryPool_release( arguments[0].data.mem_void_buf ) ){
          printf("\nResultï¼šOK\n");
        }else{
          printf("\nResultï¼šNG\n");
        }
      }
  }
  else if( !strcmp(signature_path, "sMessageBuffer" ) ){
    setRawEntryDescriptor( MessageBufferDesc, sMessageBuffer, rawDesc );
    cMessageBuffer_set_descriptor( MessageBufferDesc );
      if( !strcmp( function_path, "send" ) ){
        printf("Call cMessageBuffer_send\n");
        if( exp_val->data.mem_er == cMessageBuffer_send( arguments[0].data.mem_uint8_t_buf, arguments[1].data.mem_uint32_t ) ){
          printf("\nResultï¼šOK\n");
        }else{
          printf("\nResultï¼šNG\n");
        }
      }
      else if( !strcmp( function_path, "sendPolling" ) ){
        printf("Call cMessageBuffer_sendPolling\n");
        if( exp_val->data.mem_er == cMessageBuffer_sendPolling( arguments[0].data.mem_uint8_t_buf, arguments[1].data.mem_uint32_t ) ){
          printf("\nResultï¼šOK\n");
        }else{
          printf("\nResultï¼šNG\n");
        }
      }
      else if( !strcmp( function_path, "sendTimeout" ) ){
        printf("Call cMessageBuffer_sendTimeout\n");
        if( exp_val->data.mem_er == cMessageBuffer_sendTimeout( arguments[0].data.mem_uint8_t_buf, arguments[1].data.mem_uint32_t, arguments[2].data.mem_tmo ) ){
          printf("\nResultï¼šOK\n");
        }else{
          printf("\nResultï¼šNG\n");
        }
      }
      else if( !strcmp( function_path, "receive" ) ){
        printf("Call cMessageBuffer_receive\n");
        if( exp_val->data.mem_er_uint == cMessageBuffer_receive( VAR_out_int[0] ) ){
          printf("\nResultï¼šOK\n");
        }else{
          printf("\nResultï¼šNG\n");
        }
      }
      else if( !strcmp( function_path, "receivePolling" ) ){
        printf("Call cMessageBuffer_receivePolling\n");
        if( exp_val->data.mem_er_uint == cMessageBuffer_receivePolling( VAR_out_int[0] ) ){
          printf("\nResultï¼šOK\n");
        }else{
          printf("\nResultï¼šNG\n");
        }
      }
      else if( !strcmp( function_path, "receiveTimeout" ) ){
        printf("Call cMessageBuffer_receiveTimeout\n");
        if( exp_val->data.mem_er_uint == cMessageBuffer_receiveTimeout( VAR_out_int[0], arguments[1].data.mem_tmo ) ){
          printf("\nResultï¼šOK\n");
        }else{
          printf("\nResultï¼šNG\n");
        }
      }
  }
  else if( !strcmp(signature_path, "sMalloc" ) ){
    setRawEntryDescriptor( MallocDesc, sMalloc, rawDesc );
    cMalloc_set_descriptor( MallocDesc );
      if( !strcmp( function_path, "calloc" ) ){
        printf("Call cMalloc_calloc\n");
        if( exp_val->data.mem_void_buf == cMalloc_calloc( arguments[0].data.mem_size_t, arguments[1].data.mem_size_t ) ){
          printf("\nResultï¼šOK\n");
        }else{
          printf("\nResultï¼šNG\n");
        }
      }
      else if( !strcmp( function_path, "malloc" ) ){
        printf("Call cMalloc_malloc\n");
        if( exp_val->data.mem_void_buf == cMalloc_malloc( arguments[0].data.mem_size_t ) ){
          printf("\nResultï¼šOK\n");
        }else{
          printf("\nResultï¼šNG\n");
        }
      }
      else if( !strcmp( function_path, "realloc" ) ){
        printf("Call cMalloc_realloc\n");
        if( exp_val->data.mem_void_buf == cMalloc_realloc( arguments[0].data.mem_void_buf, arguments[1].data.mem_size_t ) ){
          printf("\nResultï¼šOK\n");
        }else{
          printf("\nResultï¼šNG\n");
        }
      }
      else if( !strcmp( function_path, "free" ) ){
        printf("Call cMalloc_free\n");
        if( exp_val->data.mem_void == cMalloc_free( arguments[0].data.mem_void_buf ) ){
          printf("\nResultï¼šOK\n");
        }else{
          printf("\nResultï¼šNG\n");
        }
      }
  }
  else if( !strcmp(signature_path, "sUltrasonicSensor" ) ){
    setRawEntryDescriptor( UltrasonicSensorDesc, sUltrasonicSensor, rawDesc );
    cUltrasonicSensor_set_descriptor( UltrasonicSensorDesc );
  }
  else if( !strcmp(signature_path, "sColorSensor" ) ){
    setRawEntryDescriptor( ColorSensorDesc, sColorSensor, rawDesc );
    cColorSensor_set_descriptor( ColorSensorDesc );
      if( !strcmp( function_path, "getRGBRaw" ) ){
        printf("Call cColorSensor_getRGBRaw\n");
        if( exp_val->data.mem_void == cColorSensor_getRGBRaw( VAR_out_int[0], VAR_out_int[1], VAR_out_int[2] ) ){
          printf("\nResultï¼šOK\n");
        }else{
          printf("\nResultï¼šNG\n");
        }
        printf("[out]ï¼š1ç•ªç›®ã®æ•´æ•°åž‹ã®å€¤ï¼š");
        printf("%d\n", VAR_out_int[0]);
        printf("[out]ï¼š2ç•ªç›®ã®æ•´æ•°åž‹ã®å€¤ï¼š");
        printf("%d\n", VAR_out_int[1]);
        printf("[out]ï¼š3ç•ªç›®ã®æ•´æ•°åž‹ã®å€¤ï¼š");
        printf("%d\n", VAR_out_int[2]);
      }
  }
  else if( !strcmp(signature_path, "sTouchSensor" ) ){
    setRawEntryDescriptor( TouchSensorDesc, sTouchSensor, rawDesc );
    cTouchSensor_set_descriptor( TouchSensorDesc );
  }
  else if( !strcmp(signature_path, "sGyroSensor" ) ){
    setRawEntryDescriptor( GyroSensorDesc, sGyroSensor, rawDesc );
    cGyroSensor_set_descriptor( GyroSensorDesc );
      if( !strcmp( function_path, "calibrate" ) ){
        printf("Call cGyroSensor_calibrate\n");
        if( exp_val->data.mem_float32_t == cGyroSensor_calibrate( arguments[0].data.mem_int32_t ) ){
          printf("\nResultï¼šOK\n");
        }else{
          printf("\nResultï¼šNG\n");
        }
      }
  }
  else if( !strcmp(signature_path, "sMotor" ) ){
    setRawEntryDescriptor( MotorDesc, sMotor, rawDesc );
    cMotor_set_descriptor( MotorDesc );
      if( !strcmp( function_path, "setPower" ) ){
        printf("Call cMotor_setPower\n");
        if( exp_val->data.mem_er == cMotor_setPower( arguments[0].data.mem_int ) ){
          printf("\nResultï¼šOK\n");
        }else{
          printf("\nResultï¼šNG\n");
        }
      }
      else if( !strcmp( function_path, "stop" ) ){
        printf("Call cMotor_stop\n");
        if( exp_val->data.mem_er == cMotor_stop( arguments[0].data.mem_bool_t ) ){
          printf("\nResultï¼šOK\n");
        }else{
          printf("\nResultï¼šNG\n");
        }
      }
      else if( !strcmp( function_path, "rotate" ) ){
        printf("Call cMotor_rotate\n");
        if( exp_val->data.mem_er == cMotor_rotate( arguments[0].data.mem_int, arguments[1].data.mem_uint32_t, arguments[2].data.mem_bool_t ) ){
          printf("\nResultï¼šOK\n");
        }else{
          printf("\nResultï¼šNG\n");
        }
      }
      else if( !strcmp( function_path, "initializePort" ) ){
        printf("Call cMotor_initializePort\n");
        if( exp_val->data.mem_void == cMotor_initializePort( arguments[0].data.mem_int32_t ) ){
          printf("\nResultï¼šOK\n");
        }else{
          printf("\nResultï¼šNG\n");
        }
      }
  }
  else if( !strcmp(signature_path, "sButton" ) ){
    setRawEntryDescriptor( ButtonDesc, sButton, rawDesc );
    cButton_set_descriptor( ButtonDesc );
      if( !strcmp( function_path, "isPressed" ) ){
        printf("Call cButton_isPressed\n");
        if( exp_val->data.mem_bool_t == cButton_isPressed( arguments[0].data.mem_button_t ) ){
          printf("\nResultï¼šOK\n");
        }else{
          printf("\nResultï¼šNG\n");
        }
      }
  }
  else if( !strcmp(signature_path, "sLCD" ) ){
    setRawEntryDescriptor( LCDDesc, sLCD, rawDesc );
    cLCD_set_descriptor( LCDDesc );
      if( !strcmp( function_path, "setFont" ) ){
        printf("Call cLCD_setFont\n");
        if( exp_val->data.mem_er == cLCD_setFont( arguments[0].data.mem_lcdfont_t ) ){
          printf("\nResultï¼šOK\n");
        }else{
          printf("\nResultï¼šNG\n");
        }
      }
      else if( !strcmp( function_path, "getFontSize" ) ){
        printf("Call cLCD_getFontSize\n");
        if( exp_val->data.mem_er == cLCD_getFontSize( arguments[0].data.mem_lcdfont_t, VAR_out_int[0], VAR_out_int[1] ) ){
          printf("\nResultï¼šOK\n");
        }else{
          printf("\nResultï¼šNG\n");
        }
      }
      else if( !strcmp( function_path, "drawString" ) ){
        printf("Call cLCD_drawString\n");
        if( exp_val->data.mem_er == cLCD_drawString( arguments[0].data.mem_char_buf, arguments[1].data.mem_int32_t, arguments[2].data.mem_int32_t ) ){
          printf("\nResultï¼šOK\n");
        }else{
          printf("\nResultï¼šNG\n");
        }
      }
      else if( !strcmp( function_path, "fillRect" ) ){
        printf("Call cLCD_fillRect\n");
        if( exp_val->data.mem_er == cLCD_fillRect( arguments[0].data.mem_int32_t, arguments[1].data.mem_int32_t, arguments[2].data.mem_int32_t, arguments[3].data.mem_int32_t, arguments[4].data.mem_lcdcolor_t ) ){
          printf("\nResultï¼šOK\n");
        }else{
          printf("\nResultï¼šNG\n");
        }
      }
      else if( !strcmp( function_path, "drawLine" ) ){
        printf("Call cLCD_drawLine\n");
        if( exp_val->data.mem_er == cLCD_drawLine( arguments[0].data.mem_int32_t, arguments[1].data.mem_int32_t, arguments[2].data.mem_int32_t, arguments[3].data.mem_int32_t ) ){
          printf("\nResultï¼šOK\n");
        }else{
          printf("\nResultï¼šNG\n");
        }
      }
      else if( !strcmp( function_path, "print" ) ){
        printf("Call cLCD_print\n");
        if( exp_val->data.mem_void == cLCD_print( arguments[0].data.mem_char_buf ) ){
          printf("\nResultï¼šOK\n");
        }else{
          printf("\nResultï¼šNG\n");
        }
      }
      else if( !strcmp( function_path, "puts" ) ){
        printf("Call cLCD_puts\n");
        if( exp_val->data.mem_void == cLCD_puts( arguments[0].data.mem_char_buf ) ){
          printf("\nResultï¼šOK\n");
        }else{
          printf("\nResultï¼šNG\n");
        }
      }
      else if( !strcmp( function_path, "showMessageBox" ) ){
        printf("Call cLCD_showMessageBox\n");
        if( exp_val->data.mem_void == cLCD_showMessageBox( arguments[0].data.mem_char_buf, arguments[1].data.mem_char_buf ) ){
          printf("\nResultï¼šOK\n");
        }else{
          printf("\nResultï¼šNG\n");
        }
      }
  }
  else if( !strcmp(signature_path, "sLED" ) ){
    setRawEntryDescriptor( LEDDesc, sLED, rawDesc );
    cLED_set_descriptor( LEDDesc );
      if( !strcmp( function_path, "setColor" ) ){
        printf("Call cLED_setColor\n");
        if( exp_val->data.mem_er == cLED_setColor( arguments[0].data.mem_ledcolor_t ) ){
          printf("\nResultï¼šOK\n");
        }else{
          printf("\nResultï¼šNG\n");
        }
      }
  }
  else if( !strcmp(signature_path, "sBattery" ) ){
    setRawEntryDescriptor( BatteryDesc, sBattery, rawDesc );
    cBattery_set_descriptor( BatteryDesc );
  }
  else if( !strcmp(signature_path, "sSpeaker" ) ){
    setRawEntryDescriptor( SpeakerDesc, sSpeaker, rawDesc );
    cSpeaker_set_descriptor( SpeakerDesc );
      if( !strcmp( function_path, "setVolume" ) ){
        printf("Call cSpeaker_setVolume\n");
        if( exp_val->data.mem_er == cSpeaker_setVolume( arguments[0].data.mem_uint8_t ) ){
          printf("\nResultï¼šOK\n");
        }else{
          printf("\nResultï¼šNG\n");
        }
      }
      else if( !strcmp( function_path, "playTone" ) ){
        printf("Call cSpeaker_playTone\n");
        if( exp_val->data.mem_er == cSpeaker_playTone( arguments[0].data.mem_uint16_t, arguments[1].data.mem_int32_t ) ){
          printf("\nResultï¼šOK\n");
        }else{
          printf("\nResultï¼šNG\n");
        }
      }
  }
  else if( !strcmp(signature_path, "sRiteVM" ) ){
    setRawEntryDescriptor( RiteVMDesc, sRiteVM, rawDesc );
    cRiteVM_set_descriptor( RiteVMDesc );
  }
  else if( !strcmp(signature_path, "sBalancer" ) ){
    setRawEntryDescriptor( BalancerDesc, sBalancer, rawDesc );
    cBalancer_set_descriptor( BalancerDesc );
      if( !strcmp( function_path, "control" ) ){
        printf("Call cBalancer_control\n");
        if( exp_val->data.mem_void == cBalancer_control( arguments[0].data.mem_int16_t, arguments[1].data.mem_int16_t, arguments[2].data.mem_int16_t, arguments[3].data.mem_int16_t, arguments[4].data.mem_int32_t, arguments[5].data.mem_int32_t, arguments[6].data.mem_int16_t, VAR_out_int[0], VAR_out_int[1], arguments[9].data.mem_int32_t ) ){
          printf("\nResultï¼šOK\n");
        }else{
          printf("\nResultï¼šNG\n");
        }
        printf("[out]ï¼š1ç•ªç›®ã®æ•´æ•°åž‹ã®å€¤ï¼š");
        printf("%d\n", VAR_out_int[0]);
        printf("[out]ï¼š2ç•ªç›®ã®æ•´æ•°åž‹ã®å€¤ï¼š");
        printf("%d\n", VAR_out_int[1]);
      }
  }
  else if( !strcmp(signature_path, "sSharedMemory" ) ){
    setRawEntryDescriptor( SharedMemoryDesc, sSharedMemory, rawDesc );
    cSharedMemory_set_descriptor( SharedMemoryDesc );
      if( !strcmp( function_path, "putVal" ) ){
        printf("Call cSharedMemory_putVal\n");
        if( exp_val->data.mem_void == cSharedMemory_putVal( arguments[0].data.mem_int32_t, arguments[1].data.mem_int32_t ) ){
          printf("\nResultï¼šOK\n");
        }else{
          printf("\nResultï¼šNG\n");
        }
      }
      else if( !strcmp( function_path, "getVal" ) ){
        printf("Call cSharedMemory_getVal\n");
        if( exp_val->data.mem_int32_t == cSharedMemory_getVal( arguments[0].data.mem_int32_t ) ){
          printf("\nResultï¼šOK\n");
        }else{
          printf("\nResultï¼šNG\n");
        }
      }
  }
  else if( !strcmp(signature_path, "sTarget1" ) ){
    setRawEntryDescriptor( Target1Desc, sTarget1, rawDesc );
    cTarget1_set_descriptor( Target1Desc );
      if( !strcmp( function_path, "double" ) ){
        printf("Call cTarget1_double\n");
        if( exp_val->data.mem_int == cTarget1_double( arguments[0].data.mem_int ) ){
          printf("\nResultï¼šOK\n");
        }else{
          printf("\nResultï¼šNG\n");
        }
      }
  }
  else if( !strcmp(signature_path, "sTarget2" ) ){
    setRawEntryDescriptor( Target2Desc, sTarget2, rawDesc );
    cTarget2_set_descriptor( Target2Desc );
      if( !strcmp( function_path, "add" ) ){
        printf("Call cTarget2_add\n");
        if( exp_val->data.mem_int == cTarget2_add( arguments[0].data.mem_int, arguments[1].data.mem_int ) ){
          printf("\nResultï¼šOK\n");
        }else{
          printf("\nResultï¼šNG\n");
        }
      }
  }
  else if( !strcmp(signature_path, "sTarget3" ) ){
    setRawEntryDescriptor( Target3Desc, sTarget3, rawDesc );
    cTarget3_set_descriptor( Target3Desc );
      if( !strcmp( function_path, "send" ) ){
        printf("Call cTarget3_send\n");
        if( exp_val->data.mem_er == cTarget3_send( arguments[0].data.mem_int8_t_buf, arguments[1].data.mem_int8_t ) ){
          printf("\nResultï¼šOK\n");
        }else{
          printf("\nResultï¼šNG\n");
        }
      }
      else if( !strcmp( function_path, "sendMessage" ) ){
        printf("Call cTarget3_sendMessage\n");
        if( exp_val->data.mem_er == cTarget3_sendMessage( arguments[0].data.mem_char_t_buf, arguments[1].data.mem_int8_t ) ){
          printf("\nResultï¼šOK\n");
        }else{
          printf("\nResultï¼šNG\n");
        }
      }
      else if( !strcmp( function_path, "receiveMessage" ) ){
        printf("Call cTarget3_receiveMessage\n");
        if( exp_val->data.mem_er == cTarget3_receiveMessage( VAR_out_char[0], arguments[1].data.mem_int8_t ) ){
          printf("\nResultï¼šOK\n");
        }else{
          printf("\nResultï¼šNG\n");
        }
      }
      else if( !strcmp( function_path, "checkER" ) ){
        printf("Call cTarget3_checkER\n");
        if( exp_val->data.mem_er == cTarget3_checkER( arguments[0].data.mem_er ) ){
          printf("\nResultï¼šOK\n");
        }else{
          printf("\nResultï¼šNG\n");
        }
      }
  }
  else if( !strcmp(signature_path, "sInitializeBridge" ) ){
    setRawEntryDescriptor( InitializeBridgeDesc, sInitializeBridge, rawDesc );
    cInitializeBridge_set_descriptor( InitializeBridgeDesc );
      if( !strcmp( function_path, "initializeBridge" ) ){
        printf("Call cInitializeBridge_initializeBridge\n");
        if( exp_val->data.mem_void == cInitializeBridge_initializeBridge( arguments[0].data.mem_mrb_state_buf ) ){
          printf("\nResultï¼šOK\n");
        }else{
          printf("\nResultï¼šNG\n");
        }
      }
  }
  else if( !strcmp(signature_path, "sInitializeTECSBridge" ) ){
    setRawEntryDescriptor( InitializeTECSBridgeDesc, sInitializeTECSBridge, rawDesc );
    cInitializeTECSBridge_set_descriptor( InitializeTECSBridgeDesc );
  }
  else if( !strcmp(signature_path, "sMrubyVM" ) ){
    setRawEntryDescriptor( MrubyVMDesc, sMrubyVM, rawDesc );
    cMrubyVM_set_descriptor( MrubyVMDesc );
      if( !strcmp( function_path, "funcall" ) ){
        printf("Call cMrubyVM_funcall\n");
        if( exp_val->data.mem_void == cMrubyVM_funcall( arguments[0].data.mem_char_t_buf ) ){
          printf("\nResultï¼šOK\n");
        }else{
          printf("\nResultï¼šNG\n");
        }
      }
  }
  else if( !strcmp(signature_path, "sMain" ) ){
    setRawEntryDescriptor( MainDesc, sMain, rawDesc );
    cMain_set_descriptor( MainDesc );
      if( !strcmp( function_path, "main" ) ){
        printf("Call cMain_main\n");
        if( exp_val->data.mem_int == cMain_main( arguments[0].data.mem_int, arguments[1].data.mem_char_buf* ) ){
          printf("\nResultï¼šOK\n");
        }else{
          printf("\nResultï¼šNG\n");
        }
      }
  }
}

/* #[<POSTAMBLE>]#
 *   ¤³¤ì¤è¤ê²¼¤ËÈó¼õ¤±¸ý´Ø¿ô¤ò½ñ¤­¤Þ¤¹
 * #[</POSTAMBLE>]#*/
ER getRawEntryDescriptor( CELLCB *p_cellcb, char_t *entry_path, void **rawEntryDesc, char_t *expected_signature )
{
    Descriptor( nTECSInfo_sRawEntryDescriptorInfo ) rawEntryDescDesc;
    Descriptor( nTECSInfo_sEntryInfo )              entryDesc;
    ER     ercd;
    void   *rawDesc;

    ercd = cTECSInfo_findRawEntryDescriptor( entry_path, &rawEntryDescDesc, &entryDesc );
    if( ercd != E_OK ){
        printf( "call_sTask: error cTECSInfo_findRawEntryDescriptor( entry_path=%s ) = %d\n", entry_path, ercd );
    }
    else {
#define NAME_LEN  (256)
        Descriptor( nTECSInfo_sSignatureInfo )  signatureDesc;
        char_t  name[ NAME_LEN ];

        cREDInfo_set_descriptor( rawEntryDescDesc );
        cEntryInfo_set_descriptor( entryDesc );
        cEntryInfo_getSignatureInfo( &signatureDesc );
        cSignatureInfo_set_descriptor( signatureDesc );
        ercd = cSignatureInfo_getName( name, NAME_LEN );
        if( ercd != E_OK ){
            printf( "getRawEntryDescriptor: error cannot get signature name. expectd: '%s'\n", expected_signature );
        }
        if( strcmp( name, expected_signature ) != 0 ){
            printf( "getRawEntryDescriptor: error signature name '%s' mismatch expecting '%s'\n", name, expected_signature );
            ercd = E_NOEXS;
        }
        cREDInfo_getRawDescriptor( 0, rawEntryDesc );
    }
    return ercd;
}
