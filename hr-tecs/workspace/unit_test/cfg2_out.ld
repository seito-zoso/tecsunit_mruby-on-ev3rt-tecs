OUTPUT_FORMAT("elf32-littlearm", "elf32-bigarm","elf32-littlearm")
OUTPUT_ARCH(arm)

MEMORY {
	ROM : ORIGIN = 0xc0008000, LENGTH = 0x500000
	RAM : ORIGIN = 0xc0508000, LENGTH = 0x3af8000
}

PROVIDE(_gp = 0);
PROVIDE(hardware_init_hook = 0);
PROVIDE(software_init_hook = 0);
PROVIDE(software_term_hook = 0);

SECTIONS {
	vector : {
		__start_text_kernel = .;
		__start_text_kernel__std = .;
		*(.vector)
	} > ROM

	.rodata_kernel : {
		__start_rodata_kernel = .;
		__start_rodata_kernel__std = .;
		kernel_cfg.o(.text) kernel_cfg.o(.rodata .rodata.str1.4) kernel_mem2.o(.text) kernel_mem2.o(.rodata .rodata.str1.4) libkernel.a(.text) libkernel.a(.rodata .rodata.str1.4) syslog.o(.text) syslog.o(.rodata .rodata.str1.4) banner.o(.text) banner.o(.rodata .rodata.str1.4) serial.o(.text) serial.o(.rodata .rodata.str1.4) logtask.o(.text) logtask.o(.rodata .rodata.str1.4) fatfs_dri.o(.text) fatfs_dri.o(.rodata .rodata.str1.4) fatfs_syscall.o(.text) fatfs_syscall.o(.rodata .rodata.str1.4) diskio.o(.text) diskio.o(.rodata .rodata.str1.4) ff.o(.text) ff.o(.rodata .rodata.str1.4) mmcsd.o(.text) mmcsd.o(.rodata .rodata.str1.4) mmcsdlib.o(.text) mmcsdlib.o(.rodata .rodata.str1.4) mmcsd_dri.o(.text) mmcsd_dri.o(.rodata .rodata.str1.4) mmcsd_proto.o(.text) mmcsd_proto.o(.rodata .rodata.str1.4) mmcsd_rw.o(.text) mmcsd_rw.o(.rodata .rodata.str1.4) soc_cache.o(.text) soc_cache.o(.rodata .rodata.str1.4) soc_edma.o(.text) soc_edma.o(.rodata .rodata.str1.4) edma.o(.text) edma.o(.rodata .rodata.str1.4) uart.o(.text) uart.o(.rodata .rodata.str1.4) cp15.o(.text) cp15.o(.rodata .rodata.str1.4) psc.o(.text) psc.o(.rodata .rodata.str1.4) usb.o(.text) usb.o(.rodata .rodata.str1.4) usbphyGS60.o(.text) usbphyGS60.o(.rodata .rodata.str1.4) cppi41dma.o(.text) cppi41dma.o(.rodata .rodata.str1.4) evmAM1808_usb.o(.text) evmAM1808_usb.o(.rodata .rodata.str1.4) soc_interrupt.o(.text) soc_interrupt.o(.rodata .rodata.str1.4) bluetooth_dri.o(.text) bluetooth_dri.o(.rodata .rodata.str1.4) libBTstack.a(.text) libBTstack.a(.rodata .rodata.str1.4) usbmsc_dri.o(.text) usbmsc_dri.o(.rodata .rodata.str1.4) usbmsc_media_functions.o(.text) usbmsc_media_functions.o(.rodata .rodata.str1.4) usb_dev_msc.o(.text) usb_dev_msc.o(.rodata .rodata.str1.4) usb_msc_structs.o(.text) usb_msc_structs.o(.rodata .rodata.str1.4) libusblib.a(.text) libusblib.a(.rodata .rodata.str1.4) nMruby_tsKernel_rDomainEV3_tecsgen.o(.text) nMruby_tsKernel_rDomainEV3_tecsgen.o(.rodata .rodata.str1.4) nMruby_tsKernel.o(.text) nMruby_tsKernel.o(.rodata .rodata.str1.4) nMruby_tsMotor_rDomainEV3_tecsgen.o(.text) nMruby_tsMotor_rDomainEV3_tecsgen.o(.rodata .rodata.str1.4) nMruby_tsMotor.o(.text) nMruby_tsMotor.o(.rodata .rodata.str1.4) nMruby_tsLCD_rDomainEV3_tecsgen.o(.text) nMruby_tsLCD_rDomainEV3_tecsgen.o(.rodata .rodata.str1.4) nMruby_tsLCD.o(.text) nMruby_tsLCD.o(.rodata .rodata.str1.4) nMruby_tsLED_rDomainEV3_tecsgen.o(.text) nMruby_tsLED_rDomainEV3_tecsgen.o(.rodata .rodata.str1.4) nMruby_tsLED.o(.text) nMruby_tsLED.o(.rodata .rodata.str1.4) nMruby_tsButton_rDomainEV3_tecsgen.o(.text) nMruby_tsButton_rDomainEV3_tecsgen.o(.rodata .rodata.str1.4) nMruby_tsButton.o(.text) nMruby_tsButton.o(.rodata .rodata.str1.4) nMruby_tsBattery_rDomainEV3_tecsgen.o(.text) nMruby_tsBattery_rDomainEV3_tecsgen.o(.rodata .rodata.str1.4) nMruby_tsBattery.o(.text) nMruby_tsBattery.o(.rodata .rodata.str1.4) nMruby_tsSpeaker_rDomainEV3_tecsgen.o(.text) nMruby_tsSpeaker_rDomainEV3_tecsgen.o(.rodata .rodata.str1.4) nMruby_tsSpeaker.o(.text) nMruby_tsSpeaker.o(.rodata .rodata.str1.4) nMruby_tsUltrasonicSensor_rDomainEV3_tecsgen.o(.text) nMruby_tsUltrasonicSensor_rDomainEV3_tecsgen.o(.rodata .rodata.str1.4) nMruby_tsUltrasonicSensor.o(.text) nMruby_tsUltrasonicSensor.o(.rodata .rodata.str1.4) nMruby_tsGyroSensor_rDomainEV3_tecsgen.o(.text) nMruby_tsGyroSensor_rDomainEV3_tecsgen.o(.rodata .rodata.str1.4) nMruby_tsGyroSensor.o(.text) nMruby_tsGyroSensor.o(.rodata .rodata.str1.4) nMruby_tsColorSensor_rDomainEV3_tecsgen.o(.text) nMruby_tsColorSensor_rDomainEV3_tecsgen.o(.rodata .rodata.str1.4) nMruby_tsColorSensor.o(.text) nMruby_tsColorSensor.o(.rodata .rodata.str1.4) nMruby_tsTouchSensor_rDomainEV3_tecsgen.o(.text) nMruby_tsTouchSensor_rDomainEV3_tecsgen.o(.rodata .rodata.str1.4) nMruby_tsTouchSensor.o(.text) nMruby_tsTouchSensor.o(.rodata .rodata.str1.4) nMruby_tsBalancer_rDomainEV3_tecsgen.o(.text) nMruby_tsBalancer_rDomainEV3_tecsgen.o(.rodata .rodata.str1.4) nMruby_tsBalancer.o(.text) nMruby_tsBalancer.o(.rodata .rodata.str1.4) nMruby_tsSharedMemory_rDomainEV3_tecsgen.o(.text) nMruby_tsSharedMemory_rDomainEV3_tecsgen.o(.rodata .rodata.str1.4) nMruby_tsSharedMemory.o(.text) nMruby_tsSharedMemory.o(.rodata .rodata.str1.4) tMotor_rDomainEV3_tecsgen.o(.text) tMotor_rDomainEV3_tecsgen.o(.rodata .rodata.str1.4) tMotor.o(.text) tMotor.o(.rodata .rodata.str1.4) tLCD_rDomainEV3_tecsgen.o(.text) tLCD_rDomainEV3_tecsgen.o(.rodata .rodata.str1.4) tLCD.o(.text) tLCD.o(.rodata .rodata.str1.4) tLED_rDomainEV3_tecsgen.o(.text) tLED_rDomainEV3_tecsgen.o(.rodata .rodata.str1.4) tLED.o(.text) tLED.o(.rodata .rodata.str1.4) tButton_rDomainEV3_tecsgen.o(.text) tButton_rDomainEV3_tecsgen.o(.rodata .rodata.str1.4) tButton.o(.text) tButton.o(.rodata .rodata.str1.4) tBattery_rDomainEV3_tecsgen.o(.text) tBattery_rDomainEV3_tecsgen.o(.rodata .rodata.str1.4) tBattery.o(.text) tBattery.o(.rodata .rodata.str1.4) tSpeaker_rDomainEV3_tecsgen.o(.text) tSpeaker_rDomainEV3_tecsgen.o(.rodata .rodata.str1.4) tSpeaker.o(.text) tSpeaker.o(.rodata .rodata.str1.4) tUltrasonicSensor_rDomainEV3_tecsgen.o(.text) tUltrasonicSensor_rDomainEV3_tecsgen.o(.rodata .rodata.str1.4) tUltrasonicSensor.o(.text) tUltrasonicSensor.o(.rodata .rodata.str1.4) tGyroSensor_rDomainEV3_tecsgen.o(.text) tGyroSensor_rDomainEV3_tecsgen.o(.rodata .rodata.str1.4) tGyroSensor.o(.text) tGyroSensor.o(.rodata .rodata.str1.4) tColorSensor_rDomainEV3_tecsgen.o(.text) tColorSensor_rDomainEV3_tecsgen.o(.rodata .rodata.str1.4) tColorSensor.o(.text) tColorSensor.o(.rodata .rodata.str1.4) tTouchSensor_rDomainEV3_tecsgen.o(.text) tTouchSensor_rDomainEV3_tecsgen.o(.rodata .rodata.str1.4) tTouchSensor.o(.text) tTouchSensor.o(.rodata .rodata.str1.4) tBalancer_rDomainEV3_tecsgen.o(.text) tBalancer_rDomainEV3_tecsgen.o(.rodata .rodata.str1.4) tBalancer.o(.text) tBalancer.o(.rodata .rodata.str1.4) tSharedMemory_rDomainEV3_tecsgen.o(.text) tSharedMemory_rDomainEV3_tecsgen.o(.rodata .rodata.str1.4) tSharedMemory.o(.text) tSharedMemory.o(.rodata .rodata.str1.4) tEV3Platform_rDomainEV3_tecsgen.o(.text) tEV3Platform_rDomainEV3_tecsgen.o(.rodata .rodata.str1.4) tEV3Platform.o(.text) tEV3Platform.o(.rodata .rodata.str1.4) tTarget1_rDomainEV3_tecsgen.o(.text) tTarget1_rDomainEV3_tecsgen.o(.rodata .rodata.str1.4) tTarget1.o(.text) tTarget1.o(.rodata .rodata.str1.4) tTarget2_rDomainEV3_tecsgen.o(.text) tTarget2_rDomainEV3_tecsgen.o(.rodata .rodata.str1.4) tTarget2.o(.text) tTarget2.o(.rodata .rodata.str1.4) tTarget3_rDomainEV3_tecsgen.o(.text) tTarget3_rDomainEV3_tecsgen.o(.rodata .rodata.str1.4) tTarget3.o(.text) tTarget3.o(.rodata .rodata.str1.4) tTaskMain_rDomainEV3_tecsgen.o(.text) tTaskMain_rDomainEV3_tecsgen.o(.rodata .rodata.str1.4) tTaskMain.o(.text) tTaskMain.o(.rodata .rodata.str1.4) nTECSInfo_tTECSInfo_rDomainEV3_tecsgen.o(.text) nTECSInfo_tTECSInfo_rDomainEV3_tecsgen.o(.rodata .rodata.str1.4) nTECSInfo_tNamespaceInfo_rDomainEV3_tecsgen.o(.text) nTECSInfo_tNamespaceInfo_rDomainEV3_tecsgen.o(.rodata .rodata.str1.4) nTECSInfo_tNamespaceInfo.o(.text) nTECSInfo_tNamespaceInfo.o(.rodata .rodata.str1.4) nTECSInfo_tSignatureInfo_rDomainEV3_tecsgen.o(.text) nTECSInfo_tSignatureInfo_rDomainEV3_tecsgen.o(.rodata .rodata.str1.4) nTECSInfo_tSignatureInfo.o(.text) nTECSInfo_tSignatureInfo.o(.rodata .rodata.str1.4) nTECSInfo_tFunctionInfo_rDomainEV3_tecsgen.o(.text) nTECSInfo_tFunctionInfo_rDomainEV3_tecsgen.o(.rodata .rodata.str1.4) nTECSInfo_tFunctionInfo.o(.text) nTECSInfo_tFunctionInfo.o(.rodata .rodata.str1.4) nTECSInfo_tParamInfo_rDomainEV3_tecsgen.o(.text) nTECSInfo_tParamInfo_rDomainEV3_tecsgen.o(.rodata .rodata.str1.4) nTECSInfo_tParamInfo.o(.text) nTECSInfo_tParamInfo.o(.rodata .rodata.str1.4) nTECSInfo_tVarDeclInfo_rDomainEV3_tecsgen.o(.text) nTECSInfo_tVarDeclInfo_rDomainEV3_tecsgen.o(.rodata .rodata.str1.4) nTECSInfo_tVarDeclInfo.o(.text) nTECSInfo_tVarDeclInfo.o(.rodata .rodata.str1.4) nTECSInfo_tCelltypeInfo_rDomainEV3_tecsgen.o(.text) nTECSInfo_tCelltypeInfo_rDomainEV3_tecsgen.o(.rodata .rodata.str1.4) nTECSInfo_tCelltypeInfo.o(.text) nTECSInfo_tCelltypeInfo.o(.rodata .rodata.str1.4) nTECSInfo_tEntryInfo_rDomainEV3_tecsgen.o(.text) nTECSInfo_tEntryInfo_rDomainEV3_tecsgen.o(.rodata .rodata.str1.4) nTECSInfo_tEntryInfo.o(.text) nTECSInfo_tEntryInfo.o(.rodata .rodata.str1.4) nTECSInfo_tCallInfo_rDomainEV3_tecsgen.o(.text) nTECSInfo_tCallInfo_rDomainEV3_tecsgen.o(.rodata .rodata.str1.4) nTECSInfo_tCallInfo.o(.text) nTECSInfo_tCallInfo.o(.rodata .rodata.str1.4) nTECSInfo_tRegionInfo_rDomainEV3_tecsgen.o(.text) nTECSInfo_tRegionInfo_rDomainEV3_tecsgen.o(.rodata .rodata.str1.4) nTECSInfo_tRegionInfo.o(.text) nTECSInfo_tRegionInfo.o(.rodata .rodata.str1.4) nTECSInfo_tCellInfo_rDomainEV3_tecsgen.o(.text) nTECSInfo_tCellInfo_rDomainEV3_tecsgen.o(.rodata .rodata.str1.4) nTECSInfo_tCellInfo.o(.text) nTECSInfo_tCellInfo.o(.rodata .rodata.str1.4) nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_tecsgen.o(.text) nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_tecsgen.o(.rodata .rodata.str1.4) nTECSInfo_tRawEntryDescriptorInfo.o(.text) nTECSInfo_tRawEntryDescriptorInfo.o(.rodata .rodata.str1.4) nTECSInfo_tVoidTypeInfo_rDomainEV3_tecsgen.o(.text) nTECSInfo_tVoidTypeInfo_rDomainEV3_tecsgen.o(.rodata .rodata.str1.4) nTECSInfo_tVoidTypeInfo.o(.text) nTECSInfo_tVoidTypeInfo.o(.rodata .rodata.str1.4) nTECSInfo_tDefinedTypeInfo_rDomainEV3_tecsgen.o(.text) nTECSInfo_tDefinedTypeInfo_rDomainEV3_tecsgen.o(.rodata .rodata.str1.4) nTECSInfo_tDefinedTypeInfo.o(.text) nTECSInfo_tDefinedTypeInfo.o(.rodata .rodata.str1.4) nTECSInfo_tIntTypeInfo_rDomainEV3_tecsgen.o(.text) nTECSInfo_tIntTypeInfo_rDomainEV3_tecsgen.o(.rodata .rodata.str1.4) nTECSInfo_tIntTypeInfo.o(.text) nTECSInfo_tIntTypeInfo.o(.rodata .rodata.str1.4) nTECSInfo_tPtrTypeInfo_rDomainEV3_tecsgen.o(.text) nTECSInfo_tPtrTypeInfo_rDomainEV3_tecsgen.o(.rodata .rodata.str1.4) nTECSInfo_tPtrTypeInfo.o(.text) nTECSInfo_tPtrTypeInfo.o(.rodata .rodata.str1.4) nTECSInfo_tStructTypeInfo_rDomainEV3_tecsgen.o(.text) nTECSInfo_tStructTypeInfo_rDomainEV3_tecsgen.o(.rodata .rodata.str1.4) nTECSInfo_tStructTypeInfo.o(.text) nTECSInfo_tStructTypeInfo.o(.rodata .rodata.str1.4) nTECSInfo_tFloatTypeInfo_rDomainEV3_tecsgen.o(.text) nTECSInfo_tFloatTypeInfo_rDomainEV3_tecsgen.o(.rodata .rodata.str1.4) nTECSInfo_tFloatTypeInfo.o(.text) nTECSInfo_tFloatTypeInfo.o(.rodata .rodata.str1.4) nTECSInfo_tArrayTypeInfo_rDomainEV3_tecsgen.o(.text) nTECSInfo_tArrayTypeInfo_rDomainEV3_tecsgen.o(.rodata .rodata.str1.4) nTECSInfo_tArrayTypeInfo.o(.text) nTECSInfo_tArrayTypeInfo.o(.rodata .rodata.str1.4) nTECSInfo_tDescriptorTypeInfo_rDomainEV3_tecsgen.o(.text) nTECSInfo_tDescriptorTypeInfo_rDomainEV3_tecsgen.o(.rodata .rodata.str1.4) nTECSInfo_tDescriptorTypeInfo.o(.text) nTECSInfo_tDescriptorTypeInfo.o(.rodata .rodata.str1.4) nTECSInfo_tTECSInfoSub_rDomainEV3_tecsgen.o(.text) nTECSInfo_tTECSInfoSub_rDomainEV3_tecsgen.o(.rodata .rodata.str1.4) nTECSInfo_tTECSInfoSub.o(.text) nTECSInfo_tTECSInfoSub.o(.rodata .rodata.str1.4) *(.text_kernel) *(.rodata_kernel) *(.page_table) 
		__end_rodata_kernel__std = .;
		__end_rodata_kernel = .;
	} > ROM
	. = ALIGN(4K);
	__limit_rodata_kernel__std = .;
	__limit_rodata_kernel = .;

	.rodata_kernel_ffffffff ALIGN(4) : {
		__start_rodata_kernel_ffffffff = .;
		__start_rodata_kernel__ffffffff_0 = .;
		brick_dri.o(.text) brick_dri.o(.rodata .rodata.str1.4) analog_dri.o(.text) analog_dri.o(.rodata .rodata.str1.4) lcd_dri.o(.text) lcd_dri.o(.rodata .rodata.str1.4) lcd_font.o(.text) lcd_font.o(.rodata .rodata.str1.4) motor_dri.o(.text) motor_dri.o(.rodata .rodata.str1.4) i2c_dri.o(.text) i2c_dri.o(.rodata .rodata.str1.4) davinci_iic_dri.o(.text) davinci_iic_dri.o(.rodata .rodata.str1.4) uart_dri.o(.text) uart_dri.o(.rodata .rodata.str1.4) pru.o(.text) pru.o(.rodata .rodata.str1.4) suart_utils.o(.text) suart_utils.o(.rodata .rodata.str1.4) suart_api.o(.text) suart_api.o(.rodata .rodata.str1.4) pru_suart.o(.text) pru_suart.o(.rodata .rodata.str1.4) sound_dri.o(.text) sound_dri.o(.rodata .rodata.str1.4) ev3main.o(.text) ev3main.o(.rodata .rodata.str1.4) driver_interface_bluetooth.o(.text) driver_interface_bluetooth.o(.rodata .rodata.str1.4) driver_interface_brick.o(.text) driver_interface_brick.o(.rodata .rodata.str1.4) driver_interface_sound.o(.text) driver_interface_sound.o(.rodata .rodata.str1.4) driver_interface_filesys.o(.text) driver_interface_filesys.o(.rodata .rodata.str1.4) 
		__end_rodata_kernel__ffffffff_0 = .;
		__end_rodata_kernel_ffffffff = .;
	} > ROM
	. = ALIGN(4K);
	__limit_rodata_kernel__ffffffff_0 = .;
	__limit_rodata_kernel_ffffffff = .;

	.rodata_TDOM_APP ALIGN(4) : {
		__start_rodata_TDOM_APP = .;
		__start_rodata_TDOM_APP__std = .;
		*(.text_TDOM_APP) *(.rodata_TDOM_APP) 
		__end_rodata_TDOM_APP__std = .;
		__end_rodata_TDOM_APP = .;
	} > ROM
	. = ALIGN(4K);
	__limit_rodata_TDOM_APP__std = .;
	__limit_rodata_TDOM_APP = .;

	.rodata_shared ALIGN(4) : {
		__start_rodata_shared = .;
		__start_rodata_shared__0 = .;
		*(.init_array) 
		__end_rodata_shared__0 = .;
		. = ALIGN(4);
		__limit_rodata_shared__0 = .;

		__start_rodata_shared__std = .;
		ev3api.o(.text) ev3api.o(.rodata .rodata.str1.4) ev3api_cfg.o(.text) ev3api_cfg.o(.rodata .rodata.str1.4) ev3api_battery.o(.text) ev3api_battery.o(.rodata .rodata.str1.4) ev3api_brick.o(.text) ev3api_brick.o(.rodata .rodata.str1.4) ev3api_fs.o(.text) ev3api_fs.o(.rodata .rodata.str1.4) ev3api_newlib.o(.text) ev3api_newlib.o(.rodata .rodata.str1.4) ev3api_lcd.o(.text) ev3api_lcd.o(.rodata .rodata.str1.4) ev3api_motor.o(.text) ev3api_motor.o(.rodata .rodata.str1.4) ev3api_sensor.o(.text) ev3api_sensor.o(.rodata .rodata.str1.4) ev3api_speaker.o(.text) ev3api_speaker.o(.rodata .rodata.str1.4) balancer.o(.text) balancer.o(.rodata .rodata.str1.4) balancer_param.o(.text) balancer_param.o(.rodata .rodata.str1.4) nMruby_tsKernel_Initializer_tecsgen.o(.text) nMruby_tsKernel_Initializer_tecsgen.o(.rodata .rodata.str1.4) nMruby_tsKernel_Initializer.o(.text) nMruby_tsKernel_Initializer.o(.rodata .rodata.str1.4) nMruby_tsMotor_Initializer_tecsgen.o(.text) nMruby_tsMotor_Initializer_tecsgen.o(.rodata .rodata.str1.4) nMruby_tsMotor_Initializer.o(.text) nMruby_tsMotor_Initializer.o(.rodata .rodata.str1.4) nMruby_tsLCD_Initializer_tecsgen.o(.text) nMruby_tsLCD_Initializer_tecsgen.o(.rodata .rodata.str1.4) nMruby_tsLCD_Initializer.o(.text) nMruby_tsLCD_Initializer.o(.rodata .rodata.str1.4) nMruby_tsLED_Initializer_tecsgen.o(.text) nMruby_tsLED_Initializer_tecsgen.o(.rodata .rodata.str1.4) nMruby_tsLED_Initializer.o(.text) nMruby_tsLED_Initializer.o(.rodata .rodata.str1.4) nMruby_tsButton_Initializer_tecsgen.o(.text) nMruby_tsButton_Initializer_tecsgen.o(.rodata .rodata.str1.4) nMruby_tsButton_Initializer.o(.text) nMruby_tsButton_Initializer.o(.rodata .rodata.str1.4) nMruby_tsBattery_Initializer_tecsgen.o(.text) nMruby_tsBattery_Initializer_tecsgen.o(.rodata .rodata.str1.4) nMruby_tsBattery_Initializer.o(.text) nMruby_tsBattery_Initializer.o(.rodata .rodata.str1.4) nMruby_tsSpeaker_Initializer_tecsgen.o(.text) nMruby_tsSpeaker_Initializer_tecsgen.o(.rodata .rodata.str1.4) nMruby_tsSpeaker_Initializer.o(.text) nMruby_tsSpeaker_Initializer.o(.rodata .rodata.str1.4) nMruby_tsUltrasonicSensor_Initializer_tecsgen.o(.text) nMruby_tsUltrasonicSensor_Initializer_tecsgen.o(.rodata .rodata.str1.4) nMruby_tsUltrasonicSensor_Initializer.o(.text) nMruby_tsUltrasonicSensor_Initializer.o(.rodata .rodata.str1.4) nMruby_tsGyroSensor_Initializer_tecsgen.o(.text) nMruby_tsGyroSensor_Initializer_tecsgen.o(.rodata .rodata.str1.4) nMruby_tsGyroSensor_Initializer.o(.text) nMruby_tsGyroSensor_Initializer.o(.rodata .rodata.str1.4) nMruby_tsColorSensor_Initializer_tecsgen.o(.text) nMruby_tsColorSensor_Initializer_tecsgen.o(.rodata .rodata.str1.4) nMruby_tsColorSensor_Initializer.o(.text) nMruby_tsColorSensor_Initializer.o(.rodata .rodata.str1.4) nMruby_tsTouchSensor_Initializer_tecsgen.o(.text) nMruby_tsTouchSensor_Initializer_tecsgen.o(.rodata .rodata.str1.4) nMruby_tsTouchSensor_Initializer.o(.text) nMruby_tsTouchSensor_Initializer.o(.rodata .rodata.str1.4) nMruby_tsBalancer_Initializer_tecsgen.o(.text) nMruby_tsBalancer_Initializer_tecsgen.o(.rodata .rodata.str1.4) nMruby_tsBalancer_Initializer.o(.text) nMruby_tsBalancer_Initializer.o(.rodata .rodata.str1.4) nMruby_tsSharedMemory_Initializer_tecsgen.o(.text) nMruby_tsSharedMemory_Initializer_tecsgen.o(.rodata .rodata.str1.4) nMruby_tsSharedMemory_Initializer.o(.text) nMruby_tsSharedMemory_Initializer.o(.rodata .rodata.str1.4) nMruby_tIntPointer_tecsgen.o(.text) nMruby_tIntPointer_tecsgen.o(.rodata .rodata.str1.4) nMruby_tIntPointer.o(.text) nMruby_tIntPointer.o(.rodata .rodata.str1.4) nMruby_tULongPointer_tecsgen.o(.text) nMruby_tULongPointer_tecsgen.o(.rodata .rodata.str1.4) nMruby_tULongPointer.o(.text) nMruby_tULongPointer.o(.rodata .rodata.str1.4) nMruby_tInt32Pointer_tecsgen.o(.text) nMruby_tInt32Pointer_tecsgen.o(.rodata .rodata.str1.4) nMruby_tInt32Pointer.o(.text) nMruby_tInt32Pointer.o(.rodata .rodata.str1.4) nMruby_tCharPointer_tecsgen.o(.text) nMruby_tCharPointer_tecsgen.o(.rodata .rodata.str1.4) nMruby_tCharPointer.o(.text) nMruby_tCharPointer.o(.rodata .rodata.str1.4) nMruby_tUInt16Pointer_tecsgen.o(.text) nMruby_tUInt16Pointer_tecsgen.o(.rodata .rodata.str1.4) nMruby_tUInt16Pointer.o(.text) nMruby_tUInt16Pointer.o(.rodata .rodata.str1.4) nMruby_tInt8Pointer_tecsgen.o(.text) nMruby_tInt8Pointer_tecsgen.o(.rodata .rodata.str1.4) nMruby_tInt8Pointer.o(.text) nMruby_tInt8Pointer.o(.rodata .rodata.str1.4) nMruby_tTECSInitializer_tecsgen.o(.text) nMruby_tTECSInitializer_tecsgen.o(.rodata .rodata.str1.4) nMruby_tTECSInitializer.o(.text) nMruby_tTECSInitializer.o(.rodata .rodata.str1.4) libmruby.a(.text) libmruby.a(.rodata .rodata.str1.4) *(.text) *(.rodata .rodata.str1.4) *(.text.*) *(.rodata.*) *(.text_shared) *(.rodata_shared) 
	} > ROM
	.preinit_array ALIGN(4) : {
		PROVIDE_HIDDEN (__preinit_array_start = .);
		KEEP (*(.preinit_array))
		PROVIDE_HIDDEN (__preinit_array_end = .);
	} > ROM
	.init_array ALIGN(4) : {
		PROVIDE_HIDDEN (__init_array_start = .);
		KEEP (*(SORT(.init_array.*)))
		KEEP (*(.init_array))
		PROVIDE_HIDDEN (__init_array_end = .);
	} > ROM
	.fini_array ALIGN(4) : {
		PROVIDE_HIDDEN (__fini_array_start = .);
		KEEP (*(SORT(.fini_array.*)))
		KEEP (*(.fini_array))
		PROVIDE_HIDDEN (__fini_array_end = .);
	} > ROM
	.ARM.exidx ALIGN(4) : {
		__exidx_start = .;
		*(.ARM.exidx* .gnu.linkonce.armexidx.*)
		__exidx_end = .;
	} > ROM
	__end_rodata_shared__std = .;
	__end_rodata_shared = .;
	. = ALIGN(4K);
	__limit_rodata_shared__std = .;
	__limit_rodata_shared = .;

	.ROM_align ALIGN(4) : {
		__ROM_align = .;
	} > ROM

	.bss_kernel_ffffffff_ffffffff (NOLOAD) : {
		__start_ram_kernel_ffffffff_ffffffff = .;
		__start_bss_kernel_ffffffff_ffffffff = .;
		__start_bss_kernel__ffffffff_ffffffff_ffffffff = .;
		*(.appheap) *(.lcd_vmem) 
		__end_bss_kernel__ffffffff_ffffffff_ffffffff = .;
		__end_bss_kernel_ffffffff_ffffffff = .;
	} > RAM
	. = ALIGN(4K);
	__limit_bss_kernel__ffffffff_ffffffff_ffffffff = .;
	__limit_bss_kernel_ffffffff_ffffffff = .;
	__limit_ram_kernel_ffffffff_ffffffff = .;

	.data_kernel ALIGN(4) : ALIGN(4) {
		__start_ram_kernel = .;
		__start_data_kernel = .;
		__start_data_kernel__std = .;
		kernel_cfg.o(.data) kernel_mem2.o(.data) libkernel.a(.data) syslog.o(.data) banner.o(.data) serial.o(.data) logtask.o(.data) fatfs_dri.o(.data) fatfs_syscall.o(.data) diskio.o(.data) ff.o(.data) mmcsd.o(.data) mmcsdlib.o(.data) mmcsd_dri.o(.data) mmcsd_proto.o(.data) mmcsd_rw.o(.data) soc_cache.o(.data) soc_edma.o(.data) edma.o(.data) uart.o(.data) cp15.o(.data) psc.o(.data) usb.o(.data) usbphyGS60.o(.data) cppi41dma.o(.data) evmAM1808_usb.o(.data) soc_interrupt.o(.data) bluetooth_dri.o(.data) libBTstack.a(.data) usbmsc_dri.o(.data) usbmsc_media_functions.o(.data) usb_dev_msc.o(.data) usb_msc_structs.o(.data) libusblib.a(.data) nMruby_tsKernel_rDomainEV3_tecsgen.o(.data) nMruby_tsKernel.o(.data) nMruby_tsMotor_rDomainEV3_tecsgen.o(.data) nMruby_tsMotor.o(.data) nMruby_tsLCD_rDomainEV3_tecsgen.o(.data) nMruby_tsLCD.o(.data) nMruby_tsLED_rDomainEV3_tecsgen.o(.data) nMruby_tsLED.o(.data) nMruby_tsButton_rDomainEV3_tecsgen.o(.data) nMruby_tsButton.o(.data) nMruby_tsBattery_rDomainEV3_tecsgen.o(.data) nMruby_tsBattery.o(.data) nMruby_tsSpeaker_rDomainEV3_tecsgen.o(.data) nMruby_tsSpeaker.o(.data) nMruby_tsUltrasonicSensor_rDomainEV3_tecsgen.o(.data) nMruby_tsUltrasonicSensor.o(.data) nMruby_tsGyroSensor_rDomainEV3_tecsgen.o(.data) nMruby_tsGyroSensor.o(.data) nMruby_tsColorSensor_rDomainEV3_tecsgen.o(.data) nMruby_tsColorSensor.o(.data) nMruby_tsTouchSensor_rDomainEV3_tecsgen.o(.data) nMruby_tsTouchSensor.o(.data) nMruby_tsBalancer_rDomainEV3_tecsgen.o(.data) nMruby_tsBalancer.o(.data) nMruby_tsSharedMemory_rDomainEV3_tecsgen.o(.data) nMruby_tsSharedMemory.o(.data) tMotor_rDomainEV3_tecsgen.o(.data) tMotor.o(.data) tLCD_rDomainEV3_tecsgen.o(.data) tLCD.o(.data) tLED_rDomainEV3_tecsgen.o(.data) tLED.o(.data) tButton_rDomainEV3_tecsgen.o(.data) tButton.o(.data) tBattery_rDomainEV3_tecsgen.o(.data) tBattery.o(.data) tSpeaker_rDomainEV3_tecsgen.o(.data) tSpeaker.o(.data) tUltrasonicSensor_rDomainEV3_tecsgen.o(.data) tUltrasonicSensor.o(.data) tGyroSensor_rDomainEV3_tecsgen.o(.data) tGyroSensor.o(.data) tColorSensor_rDomainEV3_tecsgen.o(.data) tColorSensor.o(.data) tTouchSensor_rDomainEV3_tecsgen.o(.data) tTouchSensor.o(.data) tBalancer_rDomainEV3_tecsgen.o(.data) tBalancer.o(.data) tSharedMemory_rDomainEV3_tecsgen.o(.data) tSharedMemory.o(.data) tEV3Platform_rDomainEV3_tecsgen.o(.data) tEV3Platform.o(.data) tTarget1_rDomainEV3_tecsgen.o(.data) tTarget1.o(.data) tTarget2_rDomainEV3_tecsgen.o(.data) tTarget2.o(.data) tTarget3_rDomainEV3_tecsgen.o(.data) tTarget3.o(.data) tTaskMain_rDomainEV3_tecsgen.o(.data) tTaskMain.o(.data) nTECSInfo_tTECSInfo_rDomainEV3_tecsgen.o(.data) nTECSInfo_tNamespaceInfo_rDomainEV3_tecsgen.o(.data) nTECSInfo_tNamespaceInfo.o(.data) nTECSInfo_tSignatureInfo_rDomainEV3_tecsgen.o(.data) nTECSInfo_tSignatureInfo.o(.data) nTECSInfo_tFunctionInfo_rDomainEV3_tecsgen.o(.data) nTECSInfo_tFunctionInfo.o(.data) nTECSInfo_tParamInfo_rDomainEV3_tecsgen.o(.data) nTECSInfo_tParamInfo.o(.data) nTECSInfo_tVarDeclInfo_rDomainEV3_tecsgen.o(.data) nTECSInfo_tVarDeclInfo.o(.data) nTECSInfo_tCelltypeInfo_rDomainEV3_tecsgen.o(.data) nTECSInfo_tCelltypeInfo.o(.data) nTECSInfo_tEntryInfo_rDomainEV3_tecsgen.o(.data) nTECSInfo_tEntryInfo.o(.data) nTECSInfo_tCallInfo_rDomainEV3_tecsgen.o(.data) nTECSInfo_tCallInfo.o(.data) nTECSInfo_tRegionInfo_rDomainEV3_tecsgen.o(.data) nTECSInfo_tRegionInfo.o(.data) nTECSInfo_tCellInfo_rDomainEV3_tecsgen.o(.data) nTECSInfo_tCellInfo.o(.data) nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_tecsgen.o(.data) nTECSInfo_tRawEntryDescriptorInfo.o(.data) nTECSInfo_tVoidTypeInfo_rDomainEV3_tecsgen.o(.data) nTECSInfo_tVoidTypeInfo.o(.data) nTECSInfo_tDefinedTypeInfo_rDomainEV3_tecsgen.o(.data) nTECSInfo_tDefinedTypeInfo.o(.data) nTECSInfo_tIntTypeInfo_rDomainEV3_tecsgen.o(.data) nTECSInfo_tIntTypeInfo.o(.data) nTECSInfo_tPtrTypeInfo_rDomainEV3_tecsgen.o(.data) nTECSInfo_tPtrTypeInfo.o(.data) nTECSInfo_tStructTypeInfo_rDomainEV3_tecsgen.o(.data) nTECSInfo_tStructTypeInfo.o(.data) nTECSInfo_tFloatTypeInfo_rDomainEV3_tecsgen.o(.data) nTECSInfo_tFloatTypeInfo.o(.data) nTECSInfo_tArrayTypeInfo_rDomainEV3_tecsgen.o(.data) nTECSInfo_tArrayTypeInfo.o(.data) nTECSInfo_tDescriptorTypeInfo_rDomainEV3_tecsgen.o(.data) nTECSInfo_tDescriptorTypeInfo.o(.data) nTECSInfo_tTECSInfoSub_rDomainEV3_tecsgen.o(.data) nTECSInfo_tTECSInfoSub.o(.data) *(.data_kernel) 
		__end_data_kernel__std = .;
		__end_data_kernel = .;
	} > RAM AT > ROM
	__start_idata_kernel = LOADADDR(.data_kernel);
	. = ALIGN(4);
	__limit_data_kernel__std = .;
	__limit_data_kernel = .;

	.bss_kernel ALIGN(4) (NOLOAD) : {
		__start_bss_kernel = .;
		__start_bss_kernel__std = .;
		kernel_cfg.o(.bss COMMON) kernel_mem2.o(.bss COMMON) libkernel.a(.bss COMMON) syslog.o(.bss COMMON) banner.o(.bss COMMON) serial.o(.bss COMMON) logtask.o(.bss COMMON) fatfs_dri.o(.bss COMMON) fatfs_syscall.o(.bss COMMON) diskio.o(.bss COMMON) ff.o(.bss COMMON) mmcsd.o(.bss COMMON) mmcsdlib.o(.bss COMMON) mmcsd_dri.o(.bss COMMON) mmcsd_proto.o(.bss COMMON) mmcsd_rw.o(.bss COMMON) soc_cache.o(.bss COMMON) soc_edma.o(.bss COMMON) edma.o(.bss COMMON) uart.o(.bss COMMON) cp15.o(.bss COMMON) psc.o(.bss COMMON) usb.o(.bss COMMON) usbphyGS60.o(.bss COMMON) cppi41dma.o(.bss COMMON) evmAM1808_usb.o(.bss COMMON) soc_interrupt.o(.bss COMMON) bluetooth_dri.o(.bss COMMON) libBTstack.a(.bss COMMON) usbmsc_dri.o(.bss COMMON) usbmsc_media_functions.o(.bss COMMON) usb_dev_msc.o(.bss COMMON) usb_msc_structs.o(.bss COMMON) libusblib.a(.bss COMMON) nMruby_tsKernel_rDomainEV3_tecsgen.o(.bss COMMON) nMruby_tsKernel.o(.bss COMMON) nMruby_tsMotor_rDomainEV3_tecsgen.o(.bss COMMON) nMruby_tsMotor.o(.bss COMMON) nMruby_tsLCD_rDomainEV3_tecsgen.o(.bss COMMON) nMruby_tsLCD.o(.bss COMMON) nMruby_tsLED_rDomainEV3_tecsgen.o(.bss COMMON) nMruby_tsLED.o(.bss COMMON) nMruby_tsButton_rDomainEV3_tecsgen.o(.bss COMMON) nMruby_tsButton.o(.bss COMMON) nMruby_tsBattery_rDomainEV3_tecsgen.o(.bss COMMON) nMruby_tsBattery.o(.bss COMMON) nMruby_tsSpeaker_rDomainEV3_tecsgen.o(.bss COMMON) nMruby_tsSpeaker.o(.bss COMMON) nMruby_tsUltrasonicSensor_rDomainEV3_tecsgen.o(.bss COMMON) nMruby_tsUltrasonicSensor.o(.bss COMMON) nMruby_tsGyroSensor_rDomainEV3_tecsgen.o(.bss COMMON) nMruby_tsGyroSensor.o(.bss COMMON) nMruby_tsColorSensor_rDomainEV3_tecsgen.o(.bss COMMON) nMruby_tsColorSensor.o(.bss COMMON) nMruby_tsTouchSensor_rDomainEV3_tecsgen.o(.bss COMMON) nMruby_tsTouchSensor.o(.bss COMMON) nMruby_tsBalancer_rDomainEV3_tecsgen.o(.bss COMMON) nMruby_tsBalancer.o(.bss COMMON) nMruby_tsSharedMemory_rDomainEV3_tecsgen.o(.bss COMMON) nMruby_tsSharedMemory.o(.bss COMMON) tMotor_rDomainEV3_tecsgen.o(.bss COMMON) tMotor.o(.bss COMMON) tLCD_rDomainEV3_tecsgen.o(.bss COMMON) tLCD.o(.bss COMMON) tLED_rDomainEV3_tecsgen.o(.bss COMMON) tLED.o(.bss COMMON) tButton_rDomainEV3_tecsgen.o(.bss COMMON) tButton.o(.bss COMMON) tBattery_rDomainEV3_tecsgen.o(.bss COMMON) tBattery.o(.bss COMMON) tSpeaker_rDomainEV3_tecsgen.o(.bss COMMON) tSpeaker.o(.bss COMMON) tUltrasonicSensor_rDomainEV3_tecsgen.o(.bss COMMON) tUltrasonicSensor.o(.bss COMMON) tGyroSensor_rDomainEV3_tecsgen.o(.bss COMMON) tGyroSensor.o(.bss COMMON) tColorSensor_rDomainEV3_tecsgen.o(.bss COMMON) tColorSensor.o(.bss COMMON) tTouchSensor_rDomainEV3_tecsgen.o(.bss COMMON) tTouchSensor.o(.bss COMMON) tBalancer_rDomainEV3_tecsgen.o(.bss COMMON) tBalancer.o(.bss COMMON) tSharedMemory_rDomainEV3_tecsgen.o(.bss COMMON) tSharedMemory.o(.bss COMMON) tEV3Platform_rDomainEV3_tecsgen.o(.bss COMMON) tEV3Platform.o(.bss COMMON) tTarget1_rDomainEV3_tecsgen.o(.bss COMMON) tTarget1.o(.bss COMMON) tTarget2_rDomainEV3_tecsgen.o(.bss COMMON) tTarget2.o(.bss COMMON) tTarget3_rDomainEV3_tecsgen.o(.bss COMMON) tTarget3.o(.bss COMMON) tTaskMain_rDomainEV3_tecsgen.o(.bss COMMON) tTaskMain.o(.bss COMMON) nTECSInfo_tTECSInfo_rDomainEV3_tecsgen.o(.bss COMMON) nTECSInfo_tNamespaceInfo_rDomainEV3_tecsgen.o(.bss COMMON) nTECSInfo_tNamespaceInfo.o(.bss COMMON) nTECSInfo_tSignatureInfo_rDomainEV3_tecsgen.o(.bss COMMON) nTECSInfo_tSignatureInfo.o(.bss COMMON) nTECSInfo_tFunctionInfo_rDomainEV3_tecsgen.o(.bss COMMON) nTECSInfo_tFunctionInfo.o(.bss COMMON) nTECSInfo_tParamInfo_rDomainEV3_tecsgen.o(.bss COMMON) nTECSInfo_tParamInfo.o(.bss COMMON) nTECSInfo_tVarDeclInfo_rDomainEV3_tecsgen.o(.bss COMMON) nTECSInfo_tVarDeclInfo.o(.bss COMMON) nTECSInfo_tCelltypeInfo_rDomainEV3_tecsgen.o(.bss COMMON) nTECSInfo_tCelltypeInfo.o(.bss COMMON) nTECSInfo_tEntryInfo_rDomainEV3_tecsgen.o(.bss COMMON) nTECSInfo_tEntryInfo.o(.bss COMMON) nTECSInfo_tCallInfo_rDomainEV3_tecsgen.o(.bss COMMON) nTECSInfo_tCallInfo.o(.bss COMMON) nTECSInfo_tRegionInfo_rDomainEV3_tecsgen.o(.bss COMMON) nTECSInfo_tRegionInfo.o(.bss COMMON) nTECSInfo_tCellInfo_rDomainEV3_tecsgen.o(.bss COMMON) nTECSInfo_tCellInfo.o(.bss COMMON) nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_tecsgen.o(.bss COMMON) nTECSInfo_tRawEntryDescriptorInfo.o(.bss COMMON) nTECSInfo_tVoidTypeInfo_rDomainEV3_tecsgen.o(.bss COMMON) nTECSInfo_tVoidTypeInfo.o(.bss COMMON) nTECSInfo_tDefinedTypeInfo_rDomainEV3_tecsgen.o(.bss COMMON) nTECSInfo_tDefinedTypeInfo.o(.bss COMMON) nTECSInfo_tIntTypeInfo_rDomainEV3_tecsgen.o(.bss COMMON) nTECSInfo_tIntTypeInfo.o(.bss COMMON) nTECSInfo_tPtrTypeInfo_rDomainEV3_tecsgen.o(.bss COMMON) nTECSInfo_tPtrTypeInfo.o(.bss COMMON) nTECSInfo_tStructTypeInfo_rDomainEV3_tecsgen.o(.bss COMMON) nTECSInfo_tStructTypeInfo.o(.bss COMMON) nTECSInfo_tFloatTypeInfo_rDomainEV3_tecsgen.o(.bss COMMON) nTECSInfo_tFloatTypeInfo.o(.bss COMMON) nTECSInfo_tArrayTypeInfo_rDomainEV3_tecsgen.o(.bss COMMON) nTECSInfo_tArrayTypeInfo.o(.bss COMMON) nTECSInfo_tDescriptorTypeInfo_rDomainEV3_tecsgen.o(.bss COMMON) nTECSInfo_tDescriptorTypeInfo.o(.bss COMMON) nTECSInfo_tTECSInfoSub_rDomainEV3_tecsgen.o(.bss COMMON) nTECSInfo_tTECSInfoSub.o(.bss COMMON) *(.bss.g_bytesWritten .bss.intStatus .bss.g_bytesRead .bss.gDMAflag .bss.g_sSCSICSW .bss.ulSOFDivide.* .bss.g_eUSBMode .bss.g_pucDataBufferIn .bss.g_bUSBTimerInitialized .bss.g_ulCurrentUSBTick .bss.g_ulUSBSOFCount .bss._PathLocale .bss.__nlocale_changed .bss.__mlocale_changed) *(.bss_kernel) 
		__end_bss_kernel__std = .;
		__end_bss_kernel = .;
	} > RAM AT > RAM
	. = ALIGN(4);
	__limit_bss_kernel__std = .;
	__limit_bss_kernel = .;

	.prsv_kernel ALIGN(4) (NOLOAD) : {
		__start_prsv_kernel = .;
		__start_prsv_kernel__std = .;
		kernel_cfg.o(.prsv) kernel_mem2.o(.prsv) libkernel.a(.prsv) syslog.o(.prsv) banner.o(.prsv) serial.o(.prsv) logtask.o(.prsv) fatfs_dri.o(.prsv) fatfs_syscall.o(.prsv) diskio.o(.prsv) ff.o(.prsv) mmcsd.o(.prsv) mmcsdlib.o(.prsv) mmcsd_dri.o(.prsv) mmcsd_proto.o(.prsv) mmcsd_rw.o(.prsv) soc_cache.o(.prsv) soc_edma.o(.prsv) edma.o(.prsv) uart.o(.prsv) cp15.o(.prsv) psc.o(.prsv) usb.o(.prsv) usbphyGS60.o(.prsv) cppi41dma.o(.prsv) evmAM1808_usb.o(.prsv) soc_interrupt.o(.prsv) bluetooth_dri.o(.prsv) libBTstack.a(.prsv) usbmsc_dri.o(.prsv) usbmsc_media_functions.o(.prsv) usb_dev_msc.o(.prsv) usb_msc_structs.o(.prsv) libusblib.a(.prsv) nMruby_tsKernel_rDomainEV3_tecsgen.o(.prsv) nMruby_tsKernel.o(.prsv) nMruby_tsMotor_rDomainEV3_tecsgen.o(.prsv) nMruby_tsMotor.o(.prsv) nMruby_tsLCD_rDomainEV3_tecsgen.o(.prsv) nMruby_tsLCD.o(.prsv) nMruby_tsLED_rDomainEV3_tecsgen.o(.prsv) nMruby_tsLED.o(.prsv) nMruby_tsButton_rDomainEV3_tecsgen.o(.prsv) nMruby_tsButton.o(.prsv) nMruby_tsBattery_rDomainEV3_tecsgen.o(.prsv) nMruby_tsBattery.o(.prsv) nMruby_tsSpeaker_rDomainEV3_tecsgen.o(.prsv) nMruby_tsSpeaker.o(.prsv) nMruby_tsUltrasonicSensor_rDomainEV3_tecsgen.o(.prsv) nMruby_tsUltrasonicSensor.o(.prsv) nMruby_tsGyroSensor_rDomainEV3_tecsgen.o(.prsv) nMruby_tsGyroSensor.o(.prsv) nMruby_tsColorSensor_rDomainEV3_tecsgen.o(.prsv) nMruby_tsColorSensor.o(.prsv) nMruby_tsTouchSensor_rDomainEV3_tecsgen.o(.prsv) nMruby_tsTouchSensor.o(.prsv) nMruby_tsBalancer_rDomainEV3_tecsgen.o(.prsv) nMruby_tsBalancer.o(.prsv) nMruby_tsSharedMemory_rDomainEV3_tecsgen.o(.prsv) nMruby_tsSharedMemory.o(.prsv) tMotor_rDomainEV3_tecsgen.o(.prsv) tMotor.o(.prsv) tLCD_rDomainEV3_tecsgen.o(.prsv) tLCD.o(.prsv) tLED_rDomainEV3_tecsgen.o(.prsv) tLED.o(.prsv) tButton_rDomainEV3_tecsgen.o(.prsv) tButton.o(.prsv) tBattery_rDomainEV3_tecsgen.o(.prsv) tBattery.o(.prsv) tSpeaker_rDomainEV3_tecsgen.o(.prsv) tSpeaker.o(.prsv) tUltrasonicSensor_rDomainEV3_tecsgen.o(.prsv) tUltrasonicSensor.o(.prsv) tGyroSensor_rDomainEV3_tecsgen.o(.prsv) tGyroSensor.o(.prsv) tColorSensor_rDomainEV3_tecsgen.o(.prsv) tColorSensor.o(.prsv) tTouchSensor_rDomainEV3_tecsgen.o(.prsv) tTouchSensor.o(.prsv) tBalancer_rDomainEV3_tecsgen.o(.prsv) tBalancer.o(.prsv) tSharedMemory_rDomainEV3_tecsgen.o(.prsv) tSharedMemory.o(.prsv) tEV3Platform_rDomainEV3_tecsgen.o(.prsv) tEV3Platform.o(.prsv) tTarget1_rDomainEV3_tecsgen.o(.prsv) tTarget1.o(.prsv) tTarget2_rDomainEV3_tecsgen.o(.prsv) tTarget2.o(.prsv) tTarget3_rDomainEV3_tecsgen.o(.prsv) tTarget3.o(.prsv) tTaskMain_rDomainEV3_tecsgen.o(.prsv) tTaskMain.o(.prsv) nTECSInfo_tTECSInfo_rDomainEV3_tecsgen.o(.prsv) nTECSInfo_tNamespaceInfo_rDomainEV3_tecsgen.o(.prsv) nTECSInfo_tNamespaceInfo.o(.prsv) nTECSInfo_tSignatureInfo_rDomainEV3_tecsgen.o(.prsv) nTECSInfo_tSignatureInfo.o(.prsv) nTECSInfo_tFunctionInfo_rDomainEV3_tecsgen.o(.prsv) nTECSInfo_tFunctionInfo.o(.prsv) nTECSInfo_tParamInfo_rDomainEV3_tecsgen.o(.prsv) nTECSInfo_tParamInfo.o(.prsv) nTECSInfo_tVarDeclInfo_rDomainEV3_tecsgen.o(.prsv) nTECSInfo_tVarDeclInfo.o(.prsv) nTECSInfo_tCelltypeInfo_rDomainEV3_tecsgen.o(.prsv) nTECSInfo_tCelltypeInfo.o(.prsv) nTECSInfo_tEntryInfo_rDomainEV3_tecsgen.o(.prsv) nTECSInfo_tEntryInfo.o(.prsv) nTECSInfo_tCallInfo_rDomainEV3_tecsgen.o(.prsv) nTECSInfo_tCallInfo.o(.prsv) nTECSInfo_tRegionInfo_rDomainEV3_tecsgen.o(.prsv) nTECSInfo_tRegionInfo.o(.prsv) nTECSInfo_tCellInfo_rDomainEV3_tecsgen.o(.prsv) nTECSInfo_tCellInfo.o(.prsv) nTECSInfo_tRawEntryDescriptorInfo_rDomainEV3_tecsgen.o(.prsv) nTECSInfo_tRawEntryDescriptorInfo.o(.prsv) nTECSInfo_tVoidTypeInfo_rDomainEV3_tecsgen.o(.prsv) nTECSInfo_tVoidTypeInfo.o(.prsv) nTECSInfo_tDefinedTypeInfo_rDomainEV3_tecsgen.o(.prsv) nTECSInfo_tDefinedTypeInfo.o(.prsv) nTECSInfo_tIntTypeInfo_rDomainEV3_tecsgen.o(.prsv) nTECSInfo_tIntTypeInfo.o(.prsv) nTECSInfo_tPtrTypeInfo_rDomainEV3_tecsgen.o(.prsv) nTECSInfo_tPtrTypeInfo.o(.prsv) nTECSInfo_tStructTypeInfo_rDomainEV3_tecsgen.o(.prsv) nTECSInfo_tStructTypeInfo.o(.prsv) nTECSInfo_tFloatTypeInfo_rDomainEV3_tecsgen.o(.prsv) nTECSInfo_tFloatTypeInfo.o(.prsv) nTECSInfo_tArrayTypeInfo_rDomainEV3_tecsgen.o(.prsv) nTECSInfo_tArrayTypeInfo.o(.prsv) nTECSInfo_tDescriptorTypeInfo_rDomainEV3_tecsgen.o(.prsv) nTECSInfo_tDescriptorTypeInfo.o(.prsv) nTECSInfo_tTECSInfoSub_rDomainEV3_tecsgen.o(.prsv) nTECSInfo_tTECSInfoSub.o(.prsv) *(.prsv_kernel) 
		__end_prsv_kernel__std = .;
		__end_prsv_kernel = .;
	} > RAM
	. = ALIGN(4K);
	__limit_prsv_kernel__std = .;
	__limit_prsv_kernel = .;
	__limit_ram_kernel = .;

	.ustack_BRICK_BTN_TSK ALIGN(4) (NOLOAD) : {
		__start_ustack_BRICK_BTN_TSK = .;
		kernel_cfg.o(.ustack_BRICK_BTN_TSK) 
		__end_ustack_BRICK_BTN_TSK = .;
	} > RAM
	. = ALIGN(4K);
	__limit_ustack_BRICK_BTN_TSK = .;

	.ustack_TOPPERS_DUMMY1 ALIGN(4) (NOLOAD) : {
		__start_ustack_TOPPERS_DUMMY1 = .;
		kernel_cfg.o(.ustack_TOPPERS_DUMMY1) 
		__end_ustack_TOPPERS_DUMMY1 = .;
	} > RAM
	. = ALIGN(4K);
	__limit_ustack_TOPPERS_DUMMY1 = .;

	.ustack_APP_INIT_TASK ALIGN(4) (NOLOAD) : {
		__start_ustack_APP_INIT_TASK = .;
		kernel_cfg.o(.ustack_APP_INIT_TASK) 
		__end_ustack_APP_INIT_TASK = .;
	} > RAM
	. = ALIGN(4K);
	__limit_ustack_APP_INIT_TASK = .;

	.data_TDOM_APP ALIGN(4) : ALIGN(4) {
		__start_ram_TDOM_APP = .;
		__start_data_TDOM_APP = .;
		__start_data_TDOM_APP__std = .;
		*(.data_TDOM_APP) 
		__end_data_TDOM_APP__std = .;
		__end_data_TDOM_APP = .;
	} > RAM AT > ROM
	__start_idata_TDOM_APP = LOADADDR(.data_TDOM_APP);
	. = ALIGN(4);
	__limit_data_TDOM_APP__std = .;
	__limit_data_TDOM_APP = .;

	.bss_TDOM_APP ALIGN(4) (NOLOAD) : {
		__start_bss_TDOM_APP = .;
		__start_bss_TDOM_APP__std = .;
		*(.bss_TDOM_APP) 
		__end_bss_TDOM_APP__std = .;
		__end_bss_TDOM_APP = .;
	} > RAM AT > RAM
	. = ALIGN(4);
	__limit_bss_TDOM_APP__std = .;
	__limit_bss_TDOM_APP = .;

	.prsv_TDOM_APP ALIGN(4) (NOLOAD) : {
		__start_prsv_TDOM_APP = .;
		__start_prsv_TDOM_APP__std = .;
		*(.prsv_TDOM_APP) 
		__end_prsv_TDOM_APP__std = .;
		__end_prsv_TDOM_APP = .;
	} > RAM
	. = ALIGN(4K);
	__limit_prsv_TDOM_APP__std = .;
	__limit_prsv_TDOM_APP = .;
	__limit_ram_TDOM_APP = .;

	.data_kernel_0_ffffffff ALIGN(4) : ALIGN(4) {
		__start_srpw_all = .;
		__start_ram_kernel_0_ffffffff = .;
		__start_data_kernel_0_ffffffff = .;
		__start_data_kernel__0_ffffffff_0 = .;
		brick_dri.o(.data) analog_dri.o(.data) lcd_dri.o(.data) lcd_font.o(.data) motor_dri.o(.data) i2c_dri.o(.data) davinci_iic_dri.o(.data) uart_dri.o(.data) pru.o(.data) suart_utils.o(.data) suart_api.o(.data) pru_suart.o(.data) sound_dri.o(.data) ev3main.o(.data) driver_interface_bluetooth.o(.data) driver_interface_brick.o(.data) driver_interface_sound.o(.data) driver_interface_filesys.o(.data) 
		__end_data_kernel__0_ffffffff_0 = .;
		__end_data_kernel_0_ffffffff = .;
	} > RAM AT > ROM
	__start_idata_kernel_0_ffffffff = LOADADDR(.data_kernel_0_ffffffff);
	. = ALIGN(4);
	__limit_data_kernel__0_ffffffff_0 = .;
	__limit_data_kernel_0_ffffffff = .;

	.bss_kernel_0_ffffffff ALIGN(4) (NOLOAD) : {
		__start_bss_kernel_0_ffffffff = .;
		__start_bss_kernel__0_ffffffff_0 = .;
		brick_dri.o(.bss COMMON) analog_dri.o(.bss COMMON) lcd_dri.o(.bss COMMON) lcd_font.o(.bss COMMON) motor_dri.o(.bss COMMON) i2c_dri.o(.bss COMMON) davinci_iic_dri.o(.bss COMMON) uart_dri.o(.bss COMMON) pru.o(.bss COMMON) suart_utils.o(.bss COMMON) suart_api.o(.bss COMMON) pru_suart.o(.bss COMMON) sound_dri.o(.bss COMMON) ev3main.o(.bss COMMON) driver_interface_bluetooth.o(.bss COMMON) driver_interface_brick.o(.bss COMMON) driver_interface_sound.o(.bss COMMON) driver_interface_filesys.o(.bss COMMON) 
		__end_bss_kernel__0_ffffffff_0 = .;
		__end_bss_kernel_0_ffffffff = .;
	} > RAM AT > RAM
	. = ALIGN(4);
	__limit_bss_kernel__0_ffffffff_0 = .;
	__limit_bss_kernel_0_ffffffff = .;

	.prsv_kernel_0_ffffffff ALIGN(4) (NOLOAD) : {
		__start_prsv_kernel_0_ffffffff = .;
		__start_prsv_kernel__0_ffffffff_0 = .;
		brick_dri.o(.prsv) analog_dri.o(.prsv) lcd_dri.o(.prsv) lcd_font.o(.prsv) motor_dri.o(.prsv) i2c_dri.o(.prsv) davinci_iic_dri.o(.prsv) uart_dri.o(.prsv) pru.o(.prsv) suart_utils.o(.prsv) suart_api.o(.prsv) pru_suart.o(.prsv) sound_dri.o(.prsv) ev3main.o(.prsv) driver_interface_bluetooth.o(.prsv) driver_interface_brick.o(.prsv) driver_interface_sound.o(.prsv) driver_interface_filesys.o(.prsv) 
		__end_prsv_kernel__0_ffffffff_0 = .;
		__end_prsv_kernel_0_ffffffff = .;
		__end_srpw_all = .;
	} > RAM
	. = ALIGN(4K);
	__limit_prsv_kernel__0_ffffffff_0 = .;
	__limit_prsv_kernel_0_ffffffff = .;
	__limit_ram_kernel_0_ffffffff = .;
	__limit_srpw_all = .;

	.data_shared ALIGN(4) : ALIGN(4) {
		__start_ram_shared = .;
		__start_data_shared = .;
		__start_data_shared__std = .;
		ev3api.o(.data) ev3api_cfg.o(.data) ev3api_battery.o(.data) ev3api_brick.o(.data) ev3api_fs.o(.data) ev3api_newlib.o(.data) ev3api_lcd.o(.data) ev3api_motor.o(.data) ev3api_sensor.o(.data) ev3api_speaker.o(.data) balancer.o(.data) balancer_param.o(.data) nMruby_tsKernel_Initializer_tecsgen.o(.data) nMruby_tsKernel_Initializer.o(.data) nMruby_tsMotor_Initializer_tecsgen.o(.data) nMruby_tsMotor_Initializer.o(.data) nMruby_tsLCD_Initializer_tecsgen.o(.data) nMruby_tsLCD_Initializer.o(.data) nMruby_tsLED_Initializer_tecsgen.o(.data) nMruby_tsLED_Initializer.o(.data) nMruby_tsButton_Initializer_tecsgen.o(.data) nMruby_tsButton_Initializer.o(.data) nMruby_tsBattery_Initializer_tecsgen.o(.data) nMruby_tsBattery_Initializer.o(.data) nMruby_tsSpeaker_Initializer_tecsgen.o(.data) nMruby_tsSpeaker_Initializer.o(.data) nMruby_tsUltrasonicSensor_Initializer_tecsgen.o(.data) nMruby_tsUltrasonicSensor_Initializer.o(.data) nMruby_tsGyroSensor_Initializer_tecsgen.o(.data) nMruby_tsGyroSensor_Initializer.o(.data) nMruby_tsColorSensor_Initializer_tecsgen.o(.data) nMruby_tsColorSensor_Initializer.o(.data) nMruby_tsTouchSensor_Initializer_tecsgen.o(.data) nMruby_tsTouchSensor_Initializer.o(.data) nMruby_tsBalancer_Initializer_tecsgen.o(.data) nMruby_tsBalancer_Initializer.o(.data) nMruby_tsSharedMemory_Initializer_tecsgen.o(.data) nMruby_tsSharedMemory_Initializer.o(.data) nMruby_tIntPointer_tecsgen.o(.data) nMruby_tIntPointer.o(.data) nMruby_tULongPointer_tecsgen.o(.data) nMruby_tULongPointer.o(.data) nMruby_tInt32Pointer_tecsgen.o(.data) nMruby_tInt32Pointer.o(.data) nMruby_tCharPointer_tecsgen.o(.data) nMruby_tCharPointer.o(.data) nMruby_tUInt16Pointer_tecsgen.o(.data) nMruby_tUInt16Pointer.o(.data) nMruby_tInt8Pointer_tecsgen.o(.data) nMruby_tInt8Pointer.o(.data) nMruby_tTECSInitializer_tecsgen.o(.data) nMruby_tTECSInitializer.o(.data) libmruby.a(.data) *(.data) *(.data.*) *(.data_shared) 
		__end_data_shared__std = .;
		__end_data_shared = .;
	} > RAM AT > ROM
	__start_idata_shared = LOADADDR(.data_shared);
	. = ALIGN(4);
	__limit_data_shared__std = .;
	__limit_data_shared = .;

	.bss_shared ALIGN(4) (NOLOAD) : {
		__start_bss_shared = .;
		__start_bss_shared__std = .;
		ev3api.o(.bss COMMON) ev3api_cfg.o(.bss COMMON) ev3api_battery.o(.bss COMMON) ev3api_brick.o(.bss COMMON) ev3api_fs.o(.bss COMMON) ev3api_newlib.o(.bss COMMON) ev3api_lcd.o(.bss COMMON) ev3api_motor.o(.bss COMMON) ev3api_sensor.o(.bss COMMON) ev3api_speaker.o(.bss COMMON) balancer.o(.bss COMMON) balancer_param.o(.bss COMMON) nMruby_tsKernel_Initializer_tecsgen.o(.bss COMMON) nMruby_tsKernel_Initializer.o(.bss COMMON) nMruby_tsMotor_Initializer_tecsgen.o(.bss COMMON) nMruby_tsMotor_Initializer.o(.bss COMMON) nMruby_tsLCD_Initializer_tecsgen.o(.bss COMMON) nMruby_tsLCD_Initializer.o(.bss COMMON) nMruby_tsLED_Initializer_tecsgen.o(.bss COMMON) nMruby_tsLED_Initializer.o(.bss COMMON) nMruby_tsButton_Initializer_tecsgen.o(.bss COMMON) nMruby_tsButton_Initializer.o(.bss COMMON) nMruby_tsBattery_Initializer_tecsgen.o(.bss COMMON) nMruby_tsBattery_Initializer.o(.bss COMMON) nMruby_tsSpeaker_Initializer_tecsgen.o(.bss COMMON) nMruby_tsSpeaker_Initializer.o(.bss COMMON) nMruby_tsUltrasonicSensor_Initializer_tecsgen.o(.bss COMMON) nMruby_tsUltrasonicSensor_Initializer.o(.bss COMMON) nMruby_tsGyroSensor_Initializer_tecsgen.o(.bss COMMON) nMruby_tsGyroSensor_Initializer.o(.bss COMMON) nMruby_tsColorSensor_Initializer_tecsgen.o(.bss COMMON) nMruby_tsColorSensor_Initializer.o(.bss COMMON) nMruby_tsTouchSensor_Initializer_tecsgen.o(.bss COMMON) nMruby_tsTouchSensor_Initializer.o(.bss COMMON) nMruby_tsBalancer_Initializer_tecsgen.o(.bss COMMON) nMruby_tsBalancer_Initializer.o(.bss COMMON) nMruby_tsSharedMemory_Initializer_tecsgen.o(.bss COMMON) nMruby_tsSharedMemory_Initializer.o(.bss COMMON) nMruby_tIntPointer_tecsgen.o(.bss COMMON) nMruby_tIntPointer.o(.bss COMMON) nMruby_tULongPointer_tecsgen.o(.bss COMMON) nMruby_tULongPointer.o(.bss COMMON) nMruby_tInt32Pointer_tecsgen.o(.bss COMMON) nMruby_tInt32Pointer.o(.bss COMMON) nMruby_tCharPointer_tecsgen.o(.bss COMMON) nMruby_tCharPointer.o(.bss COMMON) nMruby_tUInt16Pointer_tecsgen.o(.bss COMMON) nMruby_tUInt16Pointer.o(.bss COMMON) nMruby_tInt8Pointer_tecsgen.o(.bss COMMON) nMruby_tInt8Pointer.o(.bss COMMON) nMruby_tTECSInitializer_tecsgen.o(.bss COMMON) nMruby_tTECSInitializer.o(.bss COMMON) libmruby.a(.bss COMMON) *(.bss COMMON) *(.bss_shared) 
		__end_bss_shared__std = .;
		__end_bss_shared = .;
	} > RAM AT > RAM
	. = ALIGN(4);
	__limit_bss_shared__std = .;
	__limit_bss_shared = .;

	.prsv_shared ALIGN(4) (NOLOAD) : {
		__start_prsv_shared = .;
		__start_prsv_shared__std = .;
		ev3api.o(.prsv) ev3api_cfg.o(.prsv) ev3api_battery.o(.prsv) ev3api_brick.o(.prsv) ev3api_fs.o(.prsv) ev3api_newlib.o(.prsv) ev3api_lcd.o(.prsv) ev3api_motor.o(.prsv) ev3api_sensor.o(.prsv) ev3api_speaker.o(.prsv) balancer.o(.prsv) balancer_param.o(.prsv) nMruby_tsKernel_Initializer_tecsgen.o(.prsv) nMruby_tsKernel_Initializer.o(.prsv) nMruby_tsMotor_Initializer_tecsgen.o(.prsv) nMruby_tsMotor_Initializer.o(.prsv) nMruby_tsLCD_Initializer_tecsgen.o(.prsv) nMruby_tsLCD_Initializer.o(.prsv) nMruby_tsLED_Initializer_tecsgen.o(.prsv) nMruby_tsLED_Initializer.o(.prsv) nMruby_tsButton_Initializer_tecsgen.o(.prsv) nMruby_tsButton_Initializer.o(.prsv) nMruby_tsBattery_Initializer_tecsgen.o(.prsv) nMruby_tsBattery_Initializer.o(.prsv) nMruby_tsSpeaker_Initializer_tecsgen.o(.prsv) nMruby_tsSpeaker_Initializer.o(.prsv) nMruby_tsUltrasonicSensor_Initializer_tecsgen.o(.prsv) nMruby_tsUltrasonicSensor_Initializer.o(.prsv) nMruby_tsGyroSensor_Initializer_tecsgen.o(.prsv) nMruby_tsGyroSensor_Initializer.o(.prsv) nMruby_tsColorSensor_Initializer_tecsgen.o(.prsv) nMruby_tsColorSensor_Initializer.o(.prsv) nMruby_tsTouchSensor_Initializer_tecsgen.o(.prsv) nMruby_tsTouchSensor_Initializer.o(.prsv) nMruby_tsBalancer_Initializer_tecsgen.o(.prsv) nMruby_tsBalancer_Initializer.o(.prsv) nMruby_tsSharedMemory_Initializer_tecsgen.o(.prsv) nMruby_tsSharedMemory_Initializer.o(.prsv) nMruby_tIntPointer_tecsgen.o(.prsv) nMruby_tIntPointer.o(.prsv) nMruby_tULongPointer_tecsgen.o(.prsv) nMruby_tULongPointer.o(.prsv) nMruby_tInt32Pointer_tecsgen.o(.prsv) nMruby_tInt32Pointer.o(.prsv) nMruby_tCharPointer_tecsgen.o(.prsv) nMruby_tCharPointer.o(.prsv) nMruby_tUInt16Pointer_tecsgen.o(.prsv) nMruby_tUInt16Pointer.o(.prsv) nMruby_tInt8Pointer_tecsgen.o(.prsv) nMruby_tInt8Pointer.o(.prsv) nMruby_tTECSInitializer_tecsgen.o(.prsv) nMruby_tTECSInitializer.o(.prsv) libmruby.a(.prsv) *(.prsv) *(.prsv_shared) 
		__end_prsv_shared__std = .;
		__end_prsv_shared = .;
	} > RAM
	. = ALIGN(4K);
	__limit_prsv_shared__std = .;
	__limit_prsv_shared = .;
	__limit_ram_shared = .;

	.RAM_align ALIGN(4) : {
		__RAM_align = .;
	} > RAM

	/DISCARD/ : {
		*(.rel.dyn)
	}

	/* DWARF debug sections.
	Symbols in the DWARF debugging sections are relative to 
	the beginning of the section so we begin them at 0.  */

	/* DWARF 1 */
	.debug          0 : { *(.debug) }
	.line           0 : { *(.line) }

	/* GNU DWARF 1 extensions */
	.debug_srcinfo  0 : { *(.debug_srcinfo) }
	.debug_sfnames  0 : { *(.debug_sfnames) }

	/* DWARF 1.1 and DWARF 2 */
	.debug_aranges  0 : { *(.debug_aranges) }
	.debug_pubnames 0 : { *(.debug_pubnames) }

	/* DWARF 2 */
	.debug_info     0 : { *(.debug_info) }
	.debug_abbrev   0 : { *(.debug_abbrev) }
	.debug_line     0 : { *(.debug_line) }
	.debug_frame    0 : { *(.debug_frame) }
	.debug_str      0 : { *(.debug_str) }
	.debug_loc      0 : { *(.debug_loc) }
	.debug_macinfo  0 : { *(.debug_macinfo) }
	.debug_ranges   0 : { *(.debug_ranges) }

	/* SGI/MIPS DWARF 2 extensions */
	.debug_weaknames 0 : { *(.debug_weaknames) }
	.debug_funcnames 0 : { *(.debug_funcnames) }
	.debug_typenames 0 : { *(.debug_typenames) }
	.debug_varnames  0 : { *(.debug_varnames) }

}

