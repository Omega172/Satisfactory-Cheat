#pragma once

/**
 * Name: Satisfactory
 * Version: Early_Access_CL#273254
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BPW_SessionInformation.BPW_SessionInformation_C.SetVersionText
	 */
	struct UBPW_SessionInformation_C_SetVersionText_Params
	{
	public:
		struct FFGOnlineSessionSettings                            Session;                                                 // 0x0000(0x0048)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_SessionInformation.BPW_SessionInformation_C.UpdateSessionInformation
	 */
	struct UBPW_SessionInformation_C_UpdateSessionInformation_Params
	{
	public:
		struct FFGOnlineSessionSettings                            Session;                                                 // 0x0000(0x0048)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_SessionInformation.BPW_SessionInformation_C.SetHostName
	 */
	struct UBPW_SessionInformation_C_SetHostName_Params
	{
	public:
		struct FFGOnlineSessionSettings                            Session;                                                 // 0x0000(0x0048)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_SessionInformation.BPW_SessionInformation_C.SetNATTypeColor
	 */
	struct UBPW_SessionInformation_C_SetNATTypeColor_Params
	{
	public:
		ECachedNATType                                             NATType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_SessionInformation.BPW_SessionInformation_C.SetNATTypeText
	 */
	struct UBPW_SessionInformation_C_SetNATTypeText_Params
	{
	public:
		struct FFGOnlineSessionSettings                            Session;                                                 // 0x0000(0x0048)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_SessionInformation.BPW_SessionInformation_C.SetGameSettingVisibility
	 */
	struct UBPW_SessionInformation_C_SetGameSettingVisibility_Params
	{
	public:
		struct FFGOnlineSessionSettings                            Session;                                                 // 0x0000(0x0048)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_SessionInformation.BPW_SessionInformation_C.SetSessionName
	 */
	struct UBPW_SessionInformation_C_SetSessionName_Params
	{
	public:
		struct FFGOnlineSessionSettings                            Session;                                                 // 0x0000(0x0048)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_SessionInformation.BPW_SessionInformation_C.SetPlayDurationText
	 */
	struct UBPW_SessionInformation_C_SetPlayDurationText_Params
	{
	public:
		struct FFGOnlineSessionSettings                            Session;                                                 // 0x0000(0x0048)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_SessionInformation.BPW_SessionInformation_C.SetAGSEnabledVisibility
	 */
	struct UBPW_SessionInformation_C_SetAGSEnabledVisibility_Params
	{
	public:
		struct FFGOnlineSessionSettings                            Session;                                                 // 0x0000(0x0048)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_SessionInformation.BPW_SessionInformation_C.SetAmountOfPlayersText
	 */
	struct UBPW_SessionInformation_C_SetAmountOfPlayersText_Params
	{
	public:
		struct FFGOnlineSessionSettings                            Session;                                                 // 0x0000(0x0048)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_SessionInformation.BPW_SessionInformation_C.OnSessionUpdate
	 */
	struct UBPW_SessionInformation_C_OnSessionUpdate_Params
	{
	public:
		struct FFGOnlineSessionSettings                            Session;                                                 // 0x0000(0x0048)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_SessionInformation.BPW_SessionInformation_C.ExecuteUbergraph_BPW_SessionInformation
	 */
	struct UBPW_SessionInformation_C_ExecuteUbergraph_BPW_SessionInformation_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XEZI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
