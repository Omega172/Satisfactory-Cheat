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
	 * Function BPW_Option_QuickSwitchLanguage.BPW_Option_QuickSwitchLanguage_C.IsPendingApply
	 */
	struct UBPW_Option_QuickSwitchLanguage_C_IsPendingApply_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Option_QuickSwitchLanguage.BPW_Option_QuickSwitchLanguage_C.IsPendingRestart
	 */
	struct UBPW_Option_QuickSwitchLanguage_C_IsPendingRestart_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Option_QuickSwitchLanguage.BPW_Option_QuickSwitchLanguage_C.SetLanguage
	 */
	struct UBPW_Option_QuickSwitchLanguage_C_SetLanguage_Params
	{
	public:
		class FString                                              SelectedLanguage;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Option_QuickSwitchLanguage.BPW_Option_QuickSwitchLanguage_C.SetupLanguageDropdown
	 */
	struct UBPW_Option_QuickSwitchLanguage_C_SetupLanguageDropdown_Params
	{	};

	/**
	 * Function BPW_Option_QuickSwitchLanguage.BPW_Option_QuickSwitchLanguage_C.PreConstruct
	 */
	struct UBPW_Option_QuickSwitchLanguage_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Option_QuickSwitchLanguage.BPW_Option_QuickSwitchLanguage_C.OnOptionApplied
	 */
	struct UBPW_Option_QuickSwitchLanguage_C_OnOptionApplied_Params
	{	};

	/**
	 * Function BPW_Option_QuickSwitchLanguage.BPW_Option_QuickSwitchLanguage_C.ExecuteUbergraph_BPW_Option_QuickSwitchLanguage
	 */
	struct UBPW_Option_QuickSwitchLanguage_C_ExecuteUbergraph_BPW_Option_QuickSwitchLanguage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LIRY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
