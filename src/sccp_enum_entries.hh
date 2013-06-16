///////////////////////////////
// The enum examples
///////////////////////////////

//
// BEGIN_ENUM(Months)		/* enum2str with index value (starting at 2) */
//        ENUM_ELEMENT(january,=2,"jan")
//        ENUM_ELEMENT(february,,"feb")
//        ENUM_ELEMENT(march,,"mrch")
// END_ENUM(Months)
//
// /* will generate this in sccp_enum.h */
// typedef enum tag_Months {
//        january =2,
//        february ,
//        march ,
// } sccp_Months_t; 
//
// inline const char* Months2str(sccp_Months_t index);
//
// /* and this in sccp_enum.c */
// inline const char* Months2str(sccp_Months_t index) { 
// 	switch(index) { 
// 		default: printf("ERROR: element %d could not be found in sccp_" "Months" "_t", index); return "ERROR";
//         	case january: return "jan";
//         	case february: return "feb";
//         	case march: return "mrch";
// 	};
// };

///////////////////////////////
// The sccp enum declarations
///////////////////////////////

/*!
 * \brief SCCP Event Type ENUM
 */
BEGIN_ENUM(sccp,event_type)
        ENUM_ELEMENT(SCCP_EVENT_LINE_CREATED				,=1<<0,	"Line Created")
        ENUM_ELEMENT(SCCP_EVENT_LINE_CHANGED				,=1<<1,	"Line Changed")
        ENUM_ELEMENT(SCCP_EVENT_LINE_DELETED				,=1<<2,	"Line Deleted")
        ENUM_ELEMENT(SCCP_EVENT_DEVICE_ATTACHED				,=1<<3,	"Device Attached")
        ENUM_ELEMENT(SCCP_EVENT_DEVICE_DETACHED				,=1<<4,	"Device Detached")
        ENUM_ELEMENT(SCCP_EVENT_DEVICE_PREREGISTERED			,=1<<5,	"Device Preregistered")
        ENUM_ELEMENT(SCCP_EVENT_DEVICE_REGISTERED			,=1<<6,	"Device Registered")
        ENUM_ELEMENT(SCCP_EVENT_DEVICE_UNREGISTERED			,=1<<7,	"Device Unregistered")
        ENUM_ELEMENT(SCCP_EVENT_FEATURE_CHANGED				,=1<<8,	"Feature Changed")
        ENUM_ELEMENT(SCCP_EVENT_LINESTATUS_CHANGED			,=1<<9,	"LineStatus Changed")
END_ENUM(sccp,event_type)

/*! 
 * \brief internal chan_sccp call state (c->callstate) (Enum)
 */
BEGIN_ENUM(sccp,channelstate)
        ENUM_ELEMENT(SCCP_CHANNELSTATE_DOWN 				,=0, 	"DOWN")
        ENUM_ELEMENT(SCCP_CHANNELSTATE_OFFHOOK 				,=1, 	"OFFHOOK")
        ENUM_ELEMENT(SCCP_CHANNELSTATE_ONHOOK 				,=2, 	"ONHOOK")
        ENUM_ELEMENT(SCCP_CHANNELSTATE_RINGOUT 				,=3,	"RINGOUT")
        ENUM_ELEMENT(SCCP_CHANNELSTATE_RINGING 				,=4,	"RINGING")
        ENUM_ELEMENT(SCCP_CHANNELSTATE_CONNECTED 			,=5,	"CONNECTED")
        ENUM_ELEMENT(SCCP_CHANNELSTATE_BUSY 				,=6,	"BUSY   ")
        ENUM_ELEMENT(SCCP_CHANNELSTATE_CONGESTION 			,=7,	"CONGESTION")
        ENUM_ELEMENT(SCCP_CHANNELSTATE_HOLD 				,=8,	"HOLD   ")
        ENUM_ELEMENT(SCCP_CHANNELSTATE_CALLWAITING 			,=9,	"CALLWAITING")
        ENUM_ELEMENT(SCCP_CHANNELSTATE_CALLTRANSFER 			,=10,	"CALLTRANSFER")
        ENUM_ELEMENT(SCCP_CHANNELSTATE_CALLPARK 			,=11,	"CALLPARK")
        ENUM_ELEMENT(SCCP_CHANNELSTATE_PROCEED 				,=12,	"PROCEED")
        ENUM_ELEMENT(SCCP_CHANNELSTATE_CALLREMOTEMULTILINE 		,=13,	"CALLREMOTEMULTILINE")
        ENUM_ELEMENT(SCCP_CHANNELSTATE_INVALIDNUMBER 			,=14,	"INVALIDNUMBER")
        ENUM_ELEMENT(SCCP_CHANNELSTATE_DIALING 				,=20,	"DIALING")
        ENUM_ELEMENT(SCCP_CHANNELSTATE_PROGRESS 			,=21,	"PROGRESS")
        ENUM_ELEMENT(SCCP_CHANNELSTATE_GETDIGITS 			,=0xA0,	"GETDIGITS")
        ENUM_ELEMENT(SCCP_CHANNELSTATE_CALLCONFERENCE 			,=0xA1,	"CALLCONFERENCE")
        ENUM_ELEMENT(SCCP_CHANNELSTATE_SPEEDDIAL 			,=0xA2,	"SPEEDDIAL")
        ENUM_ELEMENT(SCCP_CHANNELSTATE_DIGITSFOLL 			,=0xA3,	"DIGITSFOLL")
        ENUM_ELEMENT(SCCP_CHANNELSTATE_INVALIDCONFERENCE 		,=0xA4,	"INVALIDCONFERENCE")
        ENUM_ELEMENT(SCCP_CHANNELSTATE_CONNECTEDCONFERENCE 		,=0xA5,	"CONNECTEDCONFERENCE")
        ENUM_ELEMENT(SCCP_CHANNELSTATE_BLINDTRANSFER 			,=0xA6,	"BLINDTRANSFER")
        ENUM_ELEMENT(SCCP_CHANNELSTATE_ZOMBIE 				,=0xFE,	"ZOMBIE")
        ENUM_ELEMENT(SCCP_CHANNELSTATE_DND 				,=0xFF,	"DND")
END_ENUM(sccp,channelstate)												/*!< internal Chan_SCCP Call State c->callstate */

/*!
 * \brief Skinny Miscellaneous Command Type (Enum)
 */
BEGIN_ENUM(sccp,miscCommandType)
	ENUM_ELEMENT(SKINNY_MISCCOMMANDTYPE_VIDEOFREEZEPICTURE		,,	"videoFreezePicture") 
	ENUM_ELEMENT(SKINNY_MISCCOMMANDTYPE_VIDEOFASTUPDATEPICTURE	,,	"videoFastUpdatePicture") 
	ENUM_ELEMENT(SKINNY_MISCCOMMANDTYPE_VIDEOFASTUPDATEGOB		,,	"videoFastUpdateGOB") 
	ENUM_ELEMENT(SKINNY_MISCCOMMANDTYPE_VIDEOFASTUPDATEMB		,,	"videoFastUpdateMB") 
	ENUM_ELEMENT(SKINNY_MISCCOMMANDTYPE_LOSTPICTURE			,,	"lostPicture") 
	ENUM_ELEMENT(SKINNY_MISCCOMMANDTYPE_LOSTPARTIALPICTURE		,,	"lostPartialPicture") 
	ENUM_ELEMENT(SKINNY_MISCCOMMANDTYPE_RECOVERYREFERENCEPICTURE	,,	"recoveryReferencePicture") 
	ENUM_ELEMENT(SKINNY_MISCCOMMANDTYPE_TEMPORALSPATIALTRADEOFF	,,	"temporalSpatialTradeOff") 
END_ENUM(sccp,miscCommandType)

BEGIN_ENUM(sccp,devicestate)
	ENUM_ELEMENT(SCCP_DEVICESTATE_ONHOOK				,,	"On Hook"	)
	ENUM_ELEMENT(SCCP_DEVICESTATE_OFFHOOK				,,	"Off Hook"	)
	ENUM_ELEMENT(SCCP_DEVICESTATE_UNAVAILABLE			,,	"Unavailable"	)
	ENUM_ELEMENT(SCCP_DEVICESTATE_DND				,,	"Do Not Disturb")
	ENUM_ELEMENT(SCCP_DEVICESTATE_FWDALL				,,	"Forward All"	)
END_ENUM(sccp,devicestate)

BEGIN_ENUM(sccp,callforward)
	ENUM_ELEMENT(SCCP_CFWD_NONE		 			,,	"None")
	ENUM_ELEMENT(SCCP_CFWD_ALL 					,,	"All")
	ENUM_ELEMENT(SCCP_CFWD_BUSY 					,,	"Busy")
	ENUM_ELEMENT(SCCP_CFWD_NOANSWER 				,,	"NoAnswer")
END_ENUM(sccp,callforward)

BEGIN_ENUM(sccp,registrationstate)
	ENUM_ELEMENT(SCCP_DEVICE_RS_FAILED				,,	"Failed")
	ENUM_ELEMENT(SCCP_DEVICE_RS_TIMEOUT				,,	"Time Out")
	ENUM_ELEMENT(SCCP_DEVICE_RS_NONE				,,	"None")
	ENUM_ELEMENT(SCCP_DEVICE_RS_TOKEN				,,	"Token")
	ENUM_ELEMENT(SCCP_DEVICE_RS_PROGRESS				,,	"Progress")
	ENUM_ELEMENT(SCCP_DEVICE_RS_OK					,,	"OK") 
END_ENUM(sccp,registrationstate)

/*!
 * \brief SCCP Dtmf Mode (ENUM)
 */
BEGIN_ENUM(sccp,dtmfmode)
	ENUM_ELEMENT(SCCP_DTMFMODE_INBAND				,,	"Dtmf Inband")
	ENUM_ELEMENT(SCCP_DTMFMODE_OUTOFBAND 				,,	"Dtmf OutOfBand")
END_ENUM(sccp,dtmfmode)

/*!
 * \brief SCCP Autoanswer (ENUM)
 */
BEGIN_ENUM(sccp,autoanswer)
	ENUM_ELEMENT(SCCP_AUTOANSWER_NONE				,,	"AutoAnswer None")
	ENUM_ELEMENT(SCCP_AUTOANSWER_1W 				,,	"AutoAnswer 1-Way")
	ENUM_ELEMENT(SCCP_AUTOANSWER_2W 				,,	"AutoAnswer Both Ways")
END_ENUM(sccp,autoanswer)

/*!
 * \brief SCCP DNDMode (ENUM)
 */
BEGIN_ENUM(sccp,dndmode)
	ENUM_ELEMENT(SCCP_DNDMODE_OFF					,,	"Off")
	ENUM_ELEMENT(SCCP_DNDMODE_REJECT				,,	"Reject")
	ENUM_ELEMENT(SCCP_DNDMODE_SILENT				,,	"Silent")
	ENUM_ELEMENT(SCCP_DNDMODE_USERDEFINED				,,	"UserDefined")
END_ENUM(sccp,dndmode)

BEGIN_ENUM(sccp,accessory)
	ENUM_ELEMENT(SCCP_ACCESSORY_NONE	 			,,	"None")
	ENUM_ELEMENT(SCCP_ACCESSORY_HEADSET	 			,,	"Headset")
	ENUM_ELEMENT(SCCP_ACCESSORY_HANDSET	 			,,	"Handset") 
	ENUM_ELEMENT(SCCP_ACCESSORY_SPEAKER	 			,,	"Speaker")
END_ENUM(sccp,accessory)

BEGIN_ENUM(sccp,accessorystate)
	ENUM_ELEMENT(SCCP_ACCESSORYSTATE_NONE	 			,,	"None")
	ENUM_ELEMENT(SCCP_ACCESSORYSTATE_ONHOOK	 			,,	"On Hook") 
	ENUM_ELEMENT(SCCP_ACCESSORYSTATE_OFFHOOK	 		,,	"Off Hook")
END_ENUM(sccp,accessorystate)



///////////////////////////////
// The skinny enum declarations
///////////////////////////////
BEGIN_ENUM(skinny,devfeature)
	ENUM_ELEMENT(SKINNY_DEVFEATURE_DYNAMIC_MESSAGE 			,=1<<24,	"Dynamic Messages")
	ENUM_ELEMENT(SKINNY_DEVFEATURE_ABBREVIATED_DIAL 		,=1<<31,	"Abbreviated Dial")
END_ENUM(skinny,devfeature)

/*!
 * \brief Skinny Protocol Call Type (ENUM)
 */
BEGIN_ENUM(skinny,calltype)
	ENUM_ELEMENT(SKINNY_CALLTYPE_INBOUND				,=1,	"Inbound")
	ENUM_ELEMENT(SKINNY_CALLTYPE_OUTBOUND				,,	"Outbound") 
	ENUM_ELEMENT(SKINNY_CALLTYPE_FORWARD				,,	"Forward")
END_ENUM(skinny,calltype)

/*!
 * \brief Skinny Protocol Call Type (ENUM)
 */
BEGIN_ENUM(skinny,callstate)
	ENUM_ELEMENT(SKINNY_CALLSTATE_OFFHOOK 				,=1,	"offhook")
	ENUM_ELEMENT(SKINNY_CALLSTATE_ONHOOK 				,,	"onhook")
	ENUM_ELEMENT(SKINNY_CALLSTATE_RINGOUT 				,,	"ring-out")
	ENUM_ELEMENT(SKINNY_CALLSTATE_RINGIN 				,,	"ring-in")
	ENUM_ELEMENT(SKINNY_CALLSTATE_CONNECTED 			,,	"connected")
	ENUM_ELEMENT(SKINNY_CALLSTATE_BUSY 				,,	"busy")
	ENUM_ELEMENT(SKINNY_CALLSTATE_CONGESTION 			,,	"congestion")
	ENUM_ELEMENT(SKINNY_CALLSTATE_HOLD 				,,	"hold")
	ENUM_ELEMENT(SKINNY_CALLSTATE_CALLWAITING 			,,	"call waiting")
	ENUM_ELEMENT(SKINNY_CALLSTATE_CALLTRANSFER 			,,	"call transfer")
	ENUM_ELEMENT(SKINNY_CALLSTATE_CALLPARK 				,,	"call park")
	ENUM_ELEMENT(SKINNY_CALLSTATE_PROCEED 				,,	"proceed")
	ENUM_ELEMENT(SKINNY_CALLSTATE_CALLREMOTEMULTILINE 		,,	"call remote multiline")
	ENUM_ELEMENT(SKINNY_CALLSTATE_INVALIDNUMBER			,,	"invalid number")
	ENUM_ELEMENT(SKINNY_CALLSTATE_HOLDYELLOW			,,	"hold yellow")
	ENUM_ELEMENT(SKINNY_CALLSTATE_INTERCOMONEWAY			,,	"intercom one-way") 
	ENUM_ELEMENT(SKINNY_CALLSTATE_HOLDRED				,,	"hold red")
END_ENUM(skinny,callstate)

/*!
 * \brief Skinny Tone (ENUM)
 */
BEGIN_ENUM(skinny,tone)
	ENUM_ELEMENT(SKINNY_TONE_SILENCE				,=0x00,	"Silence")
	ENUM_ELEMENT(SKINNY_TONE_DTMF1					,=0x01,	"DTMF 1")
	ENUM_ELEMENT(SKINNY_TONE_DTMF2					,=0x02,	"DTMF 2")
	ENUM_ELEMENT(SKINNY_TONE_DTMF3					,=0x03,	"DTMF 3")
	ENUM_ELEMENT(SKINNY_TONE_DTMF4					,=0x04,	"DTMF 4")
	ENUM_ELEMENT(SKINNY_TONE_DTMF5					,=0x05,	"DTMF 5")
	ENUM_ELEMENT(SKINNY_TONE_DTMF6					,=0x06,	"DTMF 6")
	ENUM_ELEMENT(SKINNY_TONE_DTMF7					,=0x07,	"DTMF 7")
	ENUM_ELEMENT(SKINNY_TONE_DTMF8					,=0x08,	"DTMF 8")
	ENUM_ELEMENT(SKINNY_TONE_DTMF9					,=0x09,	"DTMF 9")
	ENUM_ELEMENT(SKINNY_TONE_DTMF0					,=0x0A,	"DTMF 0")
	ENUM_ELEMENT(SKINNY_TONE_DTMFSTAR				,=0x0E,	"DTMF Star")
	ENUM_ELEMENT(SKINNY_TONE_DTMFPOUND				,=0x0F,	"DTMF Pound")
	ENUM_ELEMENT(SKINNY_TONE_DTMFA					,=0x10,	"DTMF A")
	ENUM_ELEMENT(SKINNY_TONE_DTMFB					,=0x11,	"DTMF B")
	ENUM_ELEMENT(SKINNY_TONE_DTMFC					,=0x12,	"DTMF C")
	ENUM_ELEMENT(SKINNY_TONE_DTMFD					,=0x13,	"DTMF D")
	ENUM_ELEMENT(SKINNY_TONE_INSIDEDIALTONE				,=0x21,	"Inside Dial Tone")
	ENUM_ELEMENT(SKINNY_TONE_OUTSIDEDIALTONE			,=0x22,	"Outside Dial Tone")
	ENUM_ELEMENT(SKINNY_TONE_LINEBUSYTONE				,=0x23,	"Line Busy Tone")
	ENUM_ELEMENT(SKINNY_TONE_ALERTINGTONE				,=0x24,	"Alerting Tone")
	ENUM_ELEMENT(SKINNY_TONE_REORDERTONE				,=0x25,	"Reorder Tone")
	ENUM_ELEMENT(SKINNY_TONE_RECORDERWARNINGTONE			,=0x26,	"Recorder Warning Tone")
	ENUM_ELEMENT(SKINNY_TONE_RECORDERDETECTEDTONE			,=0x27,	"Recorder Detected Tone")
	ENUM_ELEMENT(SKINNY_TONE_REVERTINGTONE				,=0x28,	"Reverting Tone")
	ENUM_ELEMENT(SKINNY_TONE_RECEIVEROFFHOOKTONE			,=0x29,	"Receiver OffHook Tone")
	ENUM_ELEMENT(SKINNY_TONE_PARTIALDIALTONE			,=0x2A,	"Partial Dial Tone")
	ENUM_ELEMENT(SKINNY_TONE_NOSUCHNUMBERTONE			,=0x2B,	"No Such Number Tone")
	ENUM_ELEMENT(SKINNY_TONE_BUSYVERIFICATIONTONE			,=0x2C,	"Busy Verification Tone")
	ENUM_ELEMENT(SKINNY_TONE_CALLWAITINGTONE			,=0x2D,	"Call Waiting Tone")
	ENUM_ELEMENT(SKINNY_TONE_CONFIRMATIONTONE			,=0x2E,	"Confirmation Tone")
	ENUM_ELEMENT(SKINNY_TONE_CAMPONINDICATIONTONE			,=0x2F,	"Camp On Indication Tone")
	ENUM_ELEMENT(SKINNY_TONE_RECALLDIALTONE				,=0x30,	"Recall Dial Tone")
	ENUM_ELEMENT(SKINNY_TONE_ZIPZIP					,=0x31,	"Zip Zip")
	ENUM_ELEMENT(SKINNY_TONE_ZIP					,=0x32,	"Zip")
	ENUM_ELEMENT(SKINNY_TONE_BEEPBONK				,=0x33,	"Beep Bonk")
	ENUM_ELEMENT(SKINNY_TONE_MUSICTONE				,=0x34,	"Music Tone")
	ENUM_ELEMENT(SKINNY_TONE_HOLDTONE				,=0x35,	"Hold Tone")
	ENUM_ELEMENT(SKINNY_TONE_TESTTONE				,=0x36,	"Test Tone")
	ENUM_ELEMENT(SKINNY_TONE_DTMONITORWARNINGTONE			,=0x37,	"DT Monitor Warning Tone")
	ENUM_ELEMENT(SKINNY_TONE_ADDCALLWAITING				,=0x40,	"Add Call Waiting")
	ENUM_ELEMENT(SKINNY_TONE_PRIORITYCALLWAIT			,=0x41,	"Priority Call Wait")
	ENUM_ELEMENT(SKINNY_TONE_RECALLDIAL				,=0x42,	"Recall Dial")
	ENUM_ELEMENT(SKINNY_TONE_BARGIN					,=0x43,	"Barg In")
	ENUM_ELEMENT(SKINNY_TONE_DISTINCTALERT				,=0x44,	"Distinct Alert")
	ENUM_ELEMENT(SKINNY_TONE_PRIORITYALERT				,=0x45,	"Priority Alert")
	ENUM_ELEMENT(SKINNY_TONE_REMINDERRING				,=0x46,	"Reminder Ring")
	ENUM_ELEMENT(SKINNY_TONE_PRECEDENCE_RINGBACK			,=0x47,	"Precedence RingBank")
	ENUM_ELEMENT(SKINNY_TONE_PREEMPTIONTONE				,=0x48,	"Pre-EmptionTone")
	ENUM_ELEMENT(SKINNY_TONE_MF1					,=0x50,	"MF1")
	ENUM_ELEMENT(SKINNY_TONE_MF2					,=0x51,	"MF2")
	ENUM_ELEMENT(SKINNY_TONE_MF3					,=0x52,	"MF3")
	ENUM_ELEMENT(SKINNY_TONE_MF4					,=0x53,	"MF4")
	ENUM_ELEMENT(SKINNY_TONE_MF5					,=0x54,	"MF5")
	ENUM_ELEMENT(SKINNY_TONE_MF6					,=0x55,	"MF6")
	ENUM_ELEMENT(SKINNY_TONE_MF7					,=0x56,	"MF7")
	ENUM_ELEMENT(SKINNY_TONE_MF8					,=0x57,	"MF8")
	ENUM_ELEMENT(SKINNY_TONE_MF9					,=0x58,	"MF9")
	ENUM_ELEMENT(SKINNY_TONE_MF0					,=0x59,	"MF0")
	ENUM_ELEMENT(SKINNY_TONE_MFKP1					,=0x5A,	"MFKP1")
	ENUM_ELEMENT(SKINNY_TONE_MFST					,=0x5B,	"MFST")
	ENUM_ELEMENT(SKINNY_TONE_MFKP2					,=0x5C,	"MFKP2")
	ENUM_ELEMENT(SKINNY_TONE_MFSTP					,=0x5D,	"MFSTP")
	ENUM_ELEMENT(SKINNY_TONE_MFST3P					,=0x5E,	"MFST3P")
	ENUM_ELEMENT(SKINNY_TONE_MILLIWATT				,=0x5F,	"MILLIWATT")
	ENUM_ELEMENT(SKINNY_TONE_MILLIWATTTEST				,=0x60,	"MILLIWATT TEST")
	ENUM_ELEMENT(SKINNY_TONE_HIGHTONE				,=0x61,	"HIGH TONE")
	ENUM_ELEMENT(SKINNY_TONE_FLASHOVERRIDE				,=0x62,	"FLASH OVERRIDE")
	ENUM_ELEMENT(SKINNY_TONE_FLASH					,=0x63,	"FLASH")
	ENUM_ELEMENT(SKINNY_TONE_PRIORITY				,=0x64,	"PRIORITY")
	ENUM_ELEMENT(SKINNY_TONE_IMMEDIATE				,=0x65,	"IMMEDIATE")
	ENUM_ELEMENT(SKINNY_TONE_PREAMPWARN				,=0x66,	"PRE-AMP WARN")
	ENUM_ELEMENT(SKINNY_TONE_2105HZ					,=0x67,	"2105 HZ")
	ENUM_ELEMENT(SKINNY_TONE_2600HZ					,=0x68,	"2600 HZ")
	ENUM_ELEMENT(SKINNY_TONE_440HZ					,=0x69,	"440 HZ")
	ENUM_ELEMENT(SKINNY_TONE_300HZ					,=0x6A,	"300 HZ")
	ENUM_ELEMENT(SKINNY_TONE_MLPP_PALA				,=0x77,	"MLPP Pala")
	ENUM_ELEMENT(SKINNY_TONE_MLPP_ICA				,=0x78,	"MLPP Ica")
	ENUM_ELEMENT(SKINNY_TONE_MLPP_VCA				,=0x79,	"MLPP Vca")
	ENUM_ELEMENT(SKINNY_TONE_MLPP_BPA				,=0x7A,	"MLPP Bpa")
	ENUM_ELEMENT(SKINNY_TONE_MLPP_BNEA				,=0x7B,	"MLPP Bnea")
	ENUM_ELEMENT(SKINNY_TONE_MLPP_UPA				,=0x7C,	"MLPP Upa") 
	ENUM_ELEMENT(SKINNY_TONE_NOTONE					,=0x7F,	"No Tone")
END_ENUM(skinny,tone)

/*!
 * \brief Skinny Protocol Call Priority (ENUM)
 */
BEGIN_ENUM(skinny,callPriority)												// change to callpriority later
	ENUM_ELEMENT(SKINNY_CALLPRIORITY_HIGHEST			,,	"highest priority")
	ENUM_ELEMENT(SKINNY_CALLPRIORITY_HIGH				,,	"high priority")
	ENUM_ELEMENT(SKINNY_CALLPRIORITY_MEDIUM				,,	"medium priority")
	ENUM_ELEMENT(SKINNY_CALLPRIORITY_LOW				,,	"low priority")
	ENUM_ELEMENT(SKINNY_CALLPRIORITY_NORMAL				,,	"normal priority")
END_ENUM(skinny,callPriority)

/*!
 * \brief Skinny Protocol CallInfo Visibility (ENUM)
 */
BEGIN_ENUM(skinny,callinfo_visibility)
	ENUM_ELEMENT(SKINNY_CALLINFO_VISIBILITY_DEFAULT 		,,	"default")
	ENUM_ELEMENT(SKINNY_CALLINFO_VISIBILITY_COLLAPSED 		,,	"collapsed")
	ENUM_ELEMENT(SKINNY_CALLINFO_VISIBILITY_HIDDEN 			,,	"hidden")
END_ENUM(skinny,callinfo_visibility)

/*!
 * \brief Skinny Protocol Call Security State (ENUM)
 */
BEGIN_ENUM(skinny,callsecuritystate)
	ENUM_ELEMENT(SKINNY_CALLSECURITYSTATE_UNKNOWN 			,,	"unknown")
	ENUM_ELEMENT(SKINNY_CALLSECURITYSTATE_NOTAUTHENTICATED 		,,	"not authenticated")
	ENUM_ELEMENT(SKINNY_CALLSECURITYSTATE_AUTHENTICATED 		,,	"authenticated")
END_ENUM(skinny,callsecuritystate)

/*!
 * \brief Skinny Lamp Mode (ENUM)
 */
BEGIN_ENUM(skinny,lampmode)
	ENUM_ELEMENT(SKINNY_LAMP_OFF					,,	"Lamp Off")
	ENUM_ELEMENT(SKINNY_LAMP_ON					,,	"Lamp On")
	ENUM_ELEMENT(SKINNY_LAMP_WINK					,,	"Lamp Wink")
	ENUM_ELEMENT(SKINNY_LAMP_FLASH					,,	"Lamp Flash")
	ENUM_ELEMENT(SKINNY_LAMP_BLINK					,,	"Lamp Blink")
END_ENUM(skinny,lampmode)

/*!
 * \brief Skinny Busy Lamp Field Status (ENUM)
 */
BEGIN_ENUM(skinny,busylampfield_state)
	ENUM_ELEMENT(SCCP_BLF_STATUS_UNKNOWN 				,,	"Unknown")				// change to SKINNY_ later
	ENUM_ELEMENT(SCCP_BLF_STATUS_IDLE 				,,	"Not-in-use")
	ENUM_ELEMENT(SCCP_BLF_STATUS_INUSE 				,,	"In-use")
	ENUM_ELEMENT(SCCP_BLF_STATUS_DND 				,,	"DND")
	ENUM_ELEMENT(SCCP_BLF_STATUS_ALERTING				,,	"Alerting")
END_ENUM(skinny,busylampfield_state)

/*!
 * \brief Skinny Busy Lamp Field Status (ENUM)
 */
BEGIN_ENUM(skinny,alarm)
	ENUM_ELEMENT(SKINNY_ALARM_CRITICAL				,=0,	"Critical")
	ENUM_ELEMENT(SKINNY_ALARM_WARNING				,=1,	"Warning")
	ENUM_ELEMENT(SKINNY_ALARM_INFORMATIONAL				,=2,	"Informational")
	ENUM_ELEMENT(SKINNY_ALARM_UNKNOWN				,=4,	"Unknown")
	ENUM_ELEMENT(SKINNY_ALARM_MAJOR					,=7,	"Major")
	ENUM_ELEMENT(SKINNY_ALARM_MINOR					,=8,	"Minor")
	ENUM_ELEMENT(SKINNY_ALARM_MARGINAL				,=10,	"Marginal") 
	ENUM_ELEMENT(SKINNY_ALARM_TRACEINFO				,=20,	"TraceInfo")
END_ENUM(skinny,alarm)

/*!
 * \brief Skinny DeviceType (ENUM)
 */
BEGIN_ENUM(skinny,devicetype)
	/* SCCP Devices */
	ENUM_ELEMENT(SKINNY_DEVICETYPE_UNDEFINED 			,=00,	"Undefined: Maybe you forgot the devicetype in your config")
//      ENUM_ELEMENT(SKINNY_DEVICETYPE_TELECASTER 			,=06,	"Telecaster")
//      ENUM_ELEMENT(SKINNY_DEVICETYPE_TELECASTER_MGR 			,=07,	"Telecaster Manager")
//      ENUM_ELEMENT(SKINNY_DEVICETYPE_TELECASTER_BUS 			,=08,	"Telecaster Bus")
//      ENUM_ELEMENT(SKINNY_DEVICETYPE_POLYCOM 				,=09,	"Polycom")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_VGC 				,=10,	"VGC")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_ATA186 				,=12,	"Cisco Ata 186")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_ATA188 				,=13,	"Cisco Ata 188")		// previous value 12 (assumed 13)
	ENUM_ELEMENT(SKINNY_DEVICETYPE_VIRTUAL30SPPLUS 			,=20,	"Virtual 30SP plus")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_PHONEAPPLICATION 		,=21,	"Phone Application")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_ANALOGACCESS 			,=30,	"Analog Access")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_DIGITALACCESSPRI 		,=40,	"Digital Access PRI")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_DIGITALACCESST1 			,=41,	"Digital Access T1")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_DIGITALACCESSTITAN2 		,=42,	"Digital Access Titan2")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_ANALOGACCESSELVIS 		,=43,	"Analog Access Elvis")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_DIGITALACCESSLENNON 		,=47,	"Digital Access Lennon")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_CONFERENCEBRIDGE 		,=50,	"Conference Bridge")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_CONFERENCEBRIDGEYOKO 		,=51,	"Conference Bridge Yoko")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_CONFERENCEBRIDGEDIXIELAND 	,=52,	"Conference Bridge Dixieland")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_CONFERENCEBRIDGESUMMIT 		,=53,	"Conference Bridge Summit")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_H225 				,=60,	"H225")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_H323PHONE 			,=61,	"H323 Phone")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_H323TRUNK 			,=62,	"H323 Trunk")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_MUSICONHOLD 			,=70,	"Music On Hold")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_PILOT 				,=71,	"Pilot")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_TAPIPORT 			,=72,	"Tapi Port")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_TAPIROUTEPOINT 			,=73,	"Tapi Route Point")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_VOICEINBOX 			,=80,	"Voice In Box")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_VOICEINBOXADMIN 			,=81,	"Voice Inbox Admin")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_LINEANNUNCIATOR 			,=82,	"Line Annunciator")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_SOFTWAREMTPDIXIELAND 		,=83,	"Line Annunciator")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_CISCOMEDIASERVER 		,=84,	"Line Annunciator")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_CONFERENCEBRIDGEFLINT 		,=85,	"Line Annunciator")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_ROUTELIST 			,=90,	"Route List")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_LOADSIMULATOR 			,=100,	"Load Simulator")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_MEDIA_TERM_POINT 		,=110,	"Media Termination Point")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_MEDIA_TERM_POINTYOKO 		,=111,	"Media Termination Point Yoko")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_MEDIA_TERM_POINTDIXIELAND 	,=112,	"Media Termination Point Dixieland")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_MEDIA_TERM_POINTSUMMIT 		,=113,	"Media Termination Point Summit")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_MGCPSTATION 			,=120,	"MGCP Station")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_MGCPTRUNK 			,=121,	"MGCP Trunk")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_RASPROXY 			,=122,	"RAS Proxy")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_TRUNK 				,=125,	"Trunk")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_ANNUNCIATOR 			,=126,	"Annuciator")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_MONITORBRIDGE 			,=127,	"Monitor Bridge")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_RECORDER 			,=128,	"Recorder")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_MONITORBRIDGEYOKO 		,=129,	"Monitor Bridge Yoko")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_SIPTRUNK 			,=131,	"Sip Trunk")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_ANALOG_GATEWAY 			,=30027,"Analog Gateway")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_BRI_GATEWAY 			,=30028,"BRI Gateway")
	/* SCCP Phones */
	ENUM_ELEMENT(SKINNY_DEVICETYPE_30SPPLUS 			,=1,	"30SP plus")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_12SPPLUS 			,=2,	"12SP plus")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_12SP 				,=3,	"12SP")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_12 				,=4,	"12")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_30VIP 				,=5,	"30 VIP")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_CISCO7902			,=30008,"Cisco 7902")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_CISCO7905			,=20000,"Cisco 7905")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_CISCO7906			,=369,	"Cisco 7906")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_CISCO7910 			,=6,	"Cisco 7911")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_CISCO7911 			,=307,	"Cisco 7911")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_CISCO7912 			,=30007,"Cisco 7912")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_CISCO7920 			,=30002,"Cisco 7920")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_CISCO7921 			,=365,	"Cisco 7921")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_CISCO7925 			,=484,	"Cisco 7925")
//	ENUM_ELEMENT(SKINNY_DEVICETYPE_CISCO7926 			,=,	"Cisco 7926")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_CISCO7931 			,=348,	"Cisco 7931")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_CISCO7935 			,=9,	"Cisco 7935")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_CISCO7936 			,=30019,"Cisco 7936 Conference")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_CISCO7937 			,=431,	"Cisco 7937 Conference")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_CISCO7940 			,=8,	"Cisco 7940")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_CISCO7941 			,=115,	"Cisco 7941")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_CISCO7941GE 			,=309,	"Cisco 7941 GE")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_CISCO7942 			,=434,	"Cisco 7942")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_CISCO7945 			,=435,	"Cisco 7945")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_CISCO7960 			,=7,	"Cisco 7960")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_CISCO7961 			,=30018,"Cisco 7961")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_CISCO7961GE 			,=308,	"Cisco 7961 GE")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_CISCO7962 			,=404,	"Cisco 7962")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_CISCO7965 			,=436,	"Cisco 7965")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_CISCO7970 			,=30006,"Cisco 7970")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_CISCO7971 			,=119,	"Cisco 7971")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_CISCO7975 			,=437,	"Cisco 7975")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_CISCO7985 			,=302,	"Cisco 7985")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_NOKIA_E_SERIES 			,=275,	"Nokia E Series")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_CISCO_IP_COMMUNICATOR		,=30016,"Cisco IP Communicator")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_NOKIA_ICC 			,=376,	"Nokia ICC client")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_CISCO6901 			,=547,	"Cisco 6901")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_CISCO6911 			,=548,	"Cisco 6911")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_CISCO6921 			,=495,	"Cisco 6921")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_CISCO6941 			,=496,	"Cisco 6941")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_CISCO6945 			,=564,	"Cisco 6945")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_CISCO6961 			,=497,	"Cisco 6961")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_CISCO8941 			,=586,	"Cisco 8941")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_CISCO8945 			,=585,	"Cisco 8945")
//	ENUM_ELEMENT(SKINNY_DEVICETYPE_CISCO8961 			,=,	"Cisco 8961")
	/* SPCP/SPA Phones */
	ENUM_ELEMENT(SKINNY_DEVICETYPE_SPA_521S 			,=80000,"Cisco SPA 521S")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_SPA_525G 			,=80005,"Cisco SPA 525G")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_SPA_525G2 			,=80009,"Cisco SPA 525G2")
	/* Extension Modules */
	ENUM_ELEMENT(SKINNY_DEVICETYPE_CISCO_ADDON_7914 		,=124,	"Cisco 7914 AddOn")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_CISCO_ADDON_7915_12BUTTON 	,=227,	"Cisco 7915 AddOn (12 Buttons)")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_CISCO_ADDON_7915_24BUTTON	,=228,	"Cisco 7915 AddOn (24 Buttons)")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_CISCO_ADDON_7916_12BUTTON 	,=229,	"Cisco 7916 AddOn (12 Buttons)")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_CISCO_ADDON_7916_24BUTTON	,=230,	"Cisco 7916 AddOn (24 Buttons)")
	ENUM_ELEMENT(SKINNY_DEVICETYPE_NOTDEFINED 			,=255,	"Not Defined")
END_ENUM(skinny,devicetype)

/*!
 * \brief Skinny Stimulus (ENUM)
 * Almost the same as Skinny buttontype !!
 */
BEGIN_ENUM(skinny,stimulus)
	ENUM_ELEMENT(SKINNY_STIMULUS_UNUSED 				,=0x00,	"Unused")
	ENUM_ELEMENT(SKINNY_STIMULUS_LASTNUMBERREDIAL 			,=0x01,	"Last Number Redial")
	ENUM_ELEMENT(SKINNY_STIMULUS_SPEEDDIAL 				,=0x02,	"SpeedDial")
	ENUM_ELEMENT(SKINNY_STIMULUS_HOLD 				,=0x03,	"Hold")
	ENUM_ELEMENT(SKINNY_STIMULUS_TRANSFER 				,=0x04,	"Transfer")
	ENUM_ELEMENT(SKINNY_STIMULUS_FORWARDALL 			,=0x05,	"Forward All")
	ENUM_ELEMENT(SKINNY_STIMULUS_FORWARDBUSY 			,=0x06,	"Forward Busy")
	ENUM_ELEMENT(SKINNY_STIMULUS_FORWARDNOANSWER 			,=0x07,	"Forward No Answer")
	ENUM_ELEMENT(SKINNY_STIMULUS_DISPLAY 				,=0x08,	"Display")
	ENUM_ELEMENT(SKINNY_STIMULUS_LINE 				,=0x09,	"Line")
	ENUM_ELEMENT(SKINNY_STIMULUS_T120CHAT 				,=0x0A,	"T120 Chat")
	ENUM_ELEMENT(SKINNY_STIMULUS_T120WHITEBOARD 			,=0x0B,	"T120 Whiteboard")
	ENUM_ELEMENT(SKINNY_STIMULUS_T120APPLICATIONSHARING 		,=0x0C,	"T120 Application Sharing")
	ENUM_ELEMENT(SKINNY_STIMULUS_T120FILETRANSFER 			,=0x0D,	"T120 File Transfer")
	ENUM_ELEMENT(SKINNY_STIMULUS_VIDEO 				,=0x0E,	"Video")
	ENUM_ELEMENT(SKINNY_STIMULUS_VOICEMAIL 				,=0x0F,	"Voicemail")
	ENUM_ELEMENT(SKINNY_STIMULUS_ANSWERRELEASE 			,=0x10,	"Answer Release")
	ENUM_ELEMENT(SKINNY_STIMULUS_AUTOANSWER 			,=0x11,	"Auto Answer")
	ENUM_ELEMENT(SKINNY_STIMULUS_SELECT	 			,=0x12,	"Select")
	ENUM_ELEMENT(SKINNY_STIMULUS_FEATURE 				,=0x13,	"Feature")
	ENUM_ELEMENT(SKINNY_STIMULUS_SERVICEURL 			,=0x14,	"ServiceURL")
	ENUM_ELEMENT(SKINNY_STIMULUS_BLFSPEEDDIAL	 		,=0x15,	"BusyLampField Speeddial")
	ENUM_ELEMENT(SKINNY_STIMULUS_MALICIOUSCALL	 		,=0x1B,	"Malicious Call")
	ENUM_ELEMENT(SKINNY_STIMULUS_GENERICAPPB1 			,=0x21,	"Generic App B1")
	ENUM_ELEMENT(SKINNY_STIMULUS_GENERICAPPB2 			,=0x22,	"Generic App B2")
	ENUM_ELEMENT(SKINNY_STIMULUS_GENERICAPPB3 			,=0x23,	"Generic App B3")
	ENUM_ELEMENT(SKINNY_STIMULUS_GENERICAPPB4 			,=0x24,	"Generic App B4")
	ENUM_ELEMENT(SKINNY_STIMULUS_GENERICAPPB5 			,=0x25,	"Generic App B5")
	ENUM_ELEMENT(SKINNY_STIMULUS_MULTIBLINKFEATURE			,=0x26,	"Monitor/Multiblink")
	ENUM_ELEMENT(SKINNY_STIMULUS_MEETMECONFERENCE 			,=0x7B,	"Meet Me Conference")
	ENUM_ELEMENT(SKINNY_STIMULUS_CONFERENCE 			,=0x7D,	"Conference")
	ENUM_ELEMENT(SKINNY_STIMULUS_CALLPARK 				,=0x7E,	"Call Park")
	ENUM_ELEMENT(SKINNY_STIMULUS_CALLPICKUP 			,=0x7F,	"Call Pickup")
	ENUM_ELEMENT(SKINNY_STIMULUS_GROUPCALLPICKUP 			,=0x80,	"Group Call Pickup")
	ENUM_ELEMENT(SKINNY_STIMULUS_MOBILITY				,=0x81,	"Mobility")
	ENUM_ELEMENT(SKINNY_STIMULUS_TEST6				,=0x82,	"Test 6")
	ENUM_ELEMENT(SKINNY_STIMULUS_TEST8				,=0x85,	"Test 8")
	ENUM_ELEMENT(SKINNY_STIMULUS_TEST9				,=0x86,	"Test 9")
	ENUM_ELEMENT(SKINNY_STIMULUS_TESTA				,=0x87,	"Test A")
	ENUM_ELEMENT(SKINNY_STIMULUS_TESTB				,=0x88,	"Test B")
	ENUM_ELEMENT(SKINNY_STIMULUS_TESTC				,=0x89,	"Test C")
	ENUM_ELEMENT(SKINNY_STIMULUS_TESTD				,=0x8A,	"Test D")
	ENUM_ELEMENT(SKINNY_STIMULUS_TEST7				,=0x8B,	"Test 7")
	ENUM_ELEMENT(SKINNY_STIMULUS_TESTE				,=0xC0,	"Test E")
	ENUM_ELEMENT(SKINNY_STIMULUS_TESTF				,=0xC1,	"Test F")
	ENUM_ELEMENT(SKINNY_STIMULUS_TESTI				,=0xC4,	"Test I")
	ENUM_ELEMENT(SKINNY_STIMULUS_MESSAGES				,=0xC2,	"Messages")
	ENUM_ELEMENT(SKINNY_STIMULUS_DIRECTORY				,=0xC3,	"Directory")
	ENUM_ELEMENT(SKINNY_STIMULUS_APPLICATION			,=0xC5,	"Application")
	ENUM_ELEMENT(SKINNY_STIMULUS_HEADSET				,=0xC6,	"Headset")
	ENUM_ELEMENT(SKINNY_STIMULUS_KEYPAD				,=0xF0,	"Keypad")
	ENUM_ELEMENT(SKINNY_STIMULUS_AEC				,=0xFD,	"Aec")
	ENUM_ELEMENT(SKINNY_STIMULUS_UNDEFINED 				,=0xFF,	"Undefined")
END_ENUM(skinny,stimulus)

/*!
 * \brief Skinny ButtonType (ENUM)
 * Almost the same as Skinny Stimulus !!
 */
BEGIN_ENUM(skinny,buttontype)
	ENUM_ELEMENT(SKINNY_BUTTONTYPE_UNUSED 				,=0x00,	"Unused")
	ENUM_ELEMENT(SKINNY_BUTTONTYPE_LASTNUMBERREDIAL 		,=0x01,	"Last Number Redial")
	ENUM_ELEMENT(SKINNY_BUTTONTYPE_SPEEDDIAL 			,=0x02,	"SpeedDial")
	ENUM_ELEMENT(SKINNY_BUTTONTYPE_HOLD 				,=0x03,	"Hold")
	ENUM_ELEMENT(SKINNY_BUTTONTYPE_TRANSFER 			,=0x04,	"Transfer")
	ENUM_ELEMENT(SKINNY_BUTTONTYPE_FORWARDALL 			,=0x05,	"Forward All")
	ENUM_ELEMENT(SKINNY_BUTTONTYPE_FORWARDBUSY 			,=0x06,	"Forward Busy")
	ENUM_ELEMENT(SKINNY_BUTTONTYPE_FORWARDNOANSWER 			,=0x07,	"Forward No Answer")
	ENUM_ELEMENT(SKINNY_BUTTONTYPE_DISPLAY 				,=0x08,	"Display")
	ENUM_ELEMENT(SKINNY_BUTTONTYPE_LINE 				,=0x09,	"Line")
	ENUM_ELEMENT(SKINNY_BUTTONTYPE_T120CHAT 			,=0x0A,	"T120 Chat")
	ENUM_ELEMENT(SKINNY_BUTTONTYPE_T120WHITEBOARD 			,=0x0B,	"T120 Whiteboard")
	ENUM_ELEMENT(SKINNY_BUTTONTYPE_T120APPLICATIONSHARING 		,=0x0C,	"T120 Application Sharing")
	ENUM_ELEMENT(SKINNY_BUTTONTYPE_T120FILETRANSFER 		,=0x0D,	"T120 File Transfer")
	ENUM_ELEMENT(SKINNY_BUTTONTYPE_VIDEO 				,=0x0E,	"Video")
	ENUM_ELEMENT(SKINNY_BUTTONTYPE_VOICEMAIL 			,=0x0F,	"Voicemail")
	ENUM_ELEMENT(SKINNY_BUTTONTYPE_ANSWERRELEASE 			,=0x10,	"Answer Release")
	ENUM_ELEMENT(SKINNY_BUTTONTYPE_AUTOANSWER 			,=0x11,	"Auto Answer")
//	ENUM_ELEMENT(SKINNY_BUTTONTYPE_SELECT	 			,=0x12,	"Select")		// only in stimulus
	ENUM_ELEMENT(SKINNY_BUTTONTYPE_FEATURE 				,=0x13,	"Feature")
	ENUM_ELEMENT(SKINNY_BUTTONTYPE_SERVICEURL 			,=0x14,	"ServiceURL")
	ENUM_ELEMENT(SKINNY_BUTTONTYPE_BLFSPEEDDIAL	 		,=0x15,	"BusyLampField Speeddial")
//	ENUM_ELEMENT(SKINNY_BUTTONTYPE_MALICIOUSCALL	 		,=0x1B,	"Malicious Call")	// only in stimulus
	ENUM_ELEMENT(SKINNY_BUTTONTYPE_GENERICAPPB1 			,=0x21,	"Generic App B1")
	ENUM_ELEMENT(SKINNY_BUTTONTYPE_GENERICAPPB2 			,=0x22,	"Generic App B2")
	ENUM_ELEMENT(SKINNY_BUTTONTYPE_GENERICAPPB3 			,=0x23,	"Generic App B3")
	ENUM_ELEMENT(SKINNY_BUTTONTYPE_GENERICAPPB4 			,=0x24,	"Generic App B4")
	ENUM_ELEMENT(SKINNY_BUTTONTYPE_GENERICAPPB5 			,=0x25,	"Generic App B5")
	ENUM_ELEMENT(SKINNY_BUTTONTYPE_MULTIBLINKFEATURE		,=0x26,	"Monitor/Multiblink")
	ENUM_ELEMENT(SKINNY_BUTTONTYPE_MEETMECONFERENCE 		,=0x7B,	"Meet Me Conference")
	ENUM_ELEMENT(SKINNY_BUTTONTYPE_CONFERENCE 			,=0x7D,	"Conference")
	ENUM_ELEMENT(SKINNY_BUTTONTYPE_CALLPARK 			,=0x7E,	"Call Park")
	ENUM_ELEMENT(SKINNY_BUTTONTYPE_CALLPICKUP 			,=0x7F,	"Call Pickup")
	ENUM_ELEMENT(SKINNY_BUTTONTYPE_GROUPCALLPICKUP 			,=0x80,	"Group Call Pickup")
	ENUM_ELEMENT(SKINNY_BUTTONTYPE_MOBILITY				,=0x81,	"Mobility")
	ENUM_ELEMENT(SKINNY_BUTTONTYPE_TEST6				,=0x82,	"Test 6")
	ENUM_ELEMENT(SKINNY_BUTTONTYPE_TEST8				,=0x85,	"Test 8")
	ENUM_ELEMENT(SKINNY_BUTTONTYPE_TEST9				,=0x86,	"Test 9")
	ENUM_ELEMENT(SKINNY_BUTTONTYPE_TESTA				,=0x87,	"Test A")
	ENUM_ELEMENT(SKINNY_BUTTONTYPE_TESTB				,=0x88,	"Test B")
	ENUM_ELEMENT(SKINNY_BUTTONTYPE_TESTC				,=0x89,	"Test C")
	ENUM_ELEMENT(SKINNY_BUTTONTYPE_TESTD				,=0x8A,	"Test D")
	ENUM_ELEMENT(SKINNY_BUTTONTYPE_TEST7				,=0x8B,	"Test 7")
	ENUM_ELEMENT(SKINNY_BUTTONTYPE_TESTE				,=0xC0,	"Test E")
	ENUM_ELEMENT(SKINNY_BUTTONTYPE_TESTF				,=0xC1,	"Test F")
	ENUM_ELEMENT(SKINNY_BUTTONTYPE_TESTI				,=0xC4,	"Test I")
	ENUM_ELEMENT(SKINNY_BUTTONTYPE_MESSAGES				,=0xC2,	"Messages")
	ENUM_ELEMENT(SKINNY_BUTTONTYPE_DIRECTORY			,=0xC3,	"Directory")
	ENUM_ELEMENT(SKINNY_BUTTONTYPE_APPLICATION			,=0xC5,	"Application")
	ENUM_ELEMENT(SKINNY_BUTTONTYPE_HEADSET				,=0xC6,	"Headset")
	ENUM_ELEMENT(SKINNY_BUTTONTYPE_KEYPAD				,=0xF0,	"Keypad")
	ENUM_ELEMENT(SKINNY_BUTTONTYPE_AEC				,=0xFD,	"Aec")
	ENUM_ELEMENT(SKINNY_BUTTONTYPE_UNDEFINED 			,=0xFF,	"Undefined")
END_ENUM(skinny,buttontype)


/*!
 * \brief Skinny Video Format (ENUM)
 */
BEGIN_ENUM(skinny,videoformat)
	ENUM_ELEMENT(SKINNY_VIDEOFORMAT_UNDEFINED			,=0, 	"undefined") 
	ENUM_ELEMENT(SKINNY_VIDEOFORMAT_SQCIF				,=1, 	"sqcif (128x96)") 
	ENUM_ELEMENT(SKINNY_VIDEOFORMAT_QCIF				,=2, 	"qcif (176x144)") 
	ENUM_ELEMENT(SKINNY_VIDEOFORMAT_CIF				,=3, 	"cif (352x288)") 
	ENUM_ELEMENT(SKINNY_VIDEOFORMAT_4CIF				,=4, 	"4cif (704x576)") 
	ENUM_ELEMENT(SKINNY_VIDEOFORMAT_16CIF				,=5, 	"16cif (1408x1152)") 
	ENUM_ELEMENT(SKINNY_VIDEOFORMAT_CUSTOM				,=6, 	"custom_base") 
	ENUM_ELEMENT(SKINNY_VIDEOFORMAT_UNKNOWN				,=232,	"unknown")			// Cisco 7985 under protocol version 5 (Robert: SEP00506003273B)
END_ENUM(skinny,videoformat)

/*!
 * \brief Skinny Video Format (ENUM)
 */
BEGIN_ENUM(skinny,ringtype)
	ENUM_ELEMENT(SKINNY_STATION_RINGOFF				,=1,	"Ring Off")			// rename to RINGTYPE later
	ENUM_ELEMENT(SKINNY_STATION_INSIDERING 				,,	"Inside")
	ENUM_ELEMENT(SKINNY_STATION_OUTSIDERING 			,,	"Outside")
	ENUM_ELEMENT(SKINNY_STATION_FEATURERING 			,,	"Feature")
	ENUM_ELEMENT(SKINNY_STATION_SILENTRING 				,,	"Silent") 
	ENUM_ELEMENT(SKINNY_STATION_URGENTRING 				,,	"Urgent")
	ENUM_ELEMENT(SKINNY_STATION_BELLCORE_1 				,,	"Bellcore 1")
	ENUM_ELEMENT(SKINNY_STATION_BELLCORE_2 				,,	"Bellcore 2")
	ENUM_ELEMENT(SKINNY_STATION_BELLCORE_3 				,,	"Bellcore 3")
	ENUM_ELEMENT(SKINNY_STATION_BELLCORE_4 				,,	"Bellcore 4")
	ENUM_ELEMENT(SKINNY_STATION_BELLCORE_5 				,,	"Bellcore 5")
END_ENUM(skinny,ringtype)

/*!
 * \brief Skinny Station Receive/Transmit (ENUM)
 */
BEGIN_ENUM(skinny,receivetransmit)
	ENUM_ELEMENT(SKINNY_TRANSMITRECEIVE_NONE 			,=0,	"None")
	ENUM_ELEMENT(SKINNY_TRANSMITRECEIVE_RECEIVE 			,=1,	"Receive")
	ENUM_ELEMENT(SKINNY_TRANSMITRECEIVE_TRANSMIT 			,=2,	"Transmit")
	ENUM_ELEMENT(SKINNY_TRANSMITRECEIVE_BOTH			,=3,	"Transmit & Receive")
END_ENUM(skinny,receivetransmit)

/*!
 * \brief Skinny KeyMode (ENUM)
 */
BEGIN_ENUM(skinny,keymode)
        ENUM_ELEMENT(KEYMODE_ONHOOK	 				,,	"ONHOOK")
        ENUM_ELEMENT(KEYMODE_CONNECTED	 				,,	"CONNECTED")
        ENUM_ELEMENT(KEYMODE_ONHOLD	 				,,	"ONHOLD")
        ENUM_ELEMENT(KEYMODE_RINGIN	 				,,	"RINGIN")
        ENUM_ELEMENT(KEYMODE_OFFHOOK	 				,,	"OFFHOOK")
        ENUM_ELEMENT(KEYMODE_CONNTRANS	 				,,	"CONNTRANS")
        ENUM_ELEMENT(KEYMODE_DIGITSFOLL	 				,,	"DIGITSFOLL")
        ENUM_ELEMENT(KEYMODE_CONNCONF	 				,,	"CONNCONF")
        ENUM_ELEMENT(KEYMODE_RINGOUT	 				,,	"RINGOUT")
        ENUM_ELEMENT(KEYMODE_OFFHOOKFEAT	 			,,	"OFFHOOKFEAT")
        ENUM_ELEMENT(KEYMODE_INUSEHINT	 				,,	"INUSEHINT")
        ENUM_ELEMENT(KEYMODE_ONHOOKSTEALABLE	 			,,	"OKHOOKSTEALABLE")
END_ENUM(skinny,keymode)
