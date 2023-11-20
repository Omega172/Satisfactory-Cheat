#pragma once

/**
 * Name: Satisfactory
 * Version: Early_Access_CL#264901
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
	 * Function BPW_Option_Language.BPW_Option_Language_C.IsPendingApply
	 */
	struct UBPW_Option_Language_C_IsPendingApply_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Option_Language.BPW_Option_Language_C.IsPendingRestart
	 */
	struct UBPW_Option_Language_C_IsPendingRestart_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Option_Language.BPW_Option_Language_C.SetLanguage
	 */
	struct UBPW_Option_Language_C_SetLanguage_Params
	{
	public:
		class FString                                              SelectedLanguage;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Option_Language.BPW_Option_Language_C.SetupLanguageDropdown
	 */
	struct UBPW_Option_Language_C_SetupLanguageDropdown_Params
	{	};

	/**
	 * Function BPW_Option_Language.BPW_Option_Language_C.PreConstruct
	 */
	struct UBPW_Option_Language_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Option_Language.BPW_Option_Language_C.OnOptionApplied
	 */
	struct UBPW_Option_Language_C_OnOptionApplied_Params
	{	};

	/**
	 * Function BPW_Option_Language.BPW_Option_Language_C.ExecuteUbergraph_BPW_Option_Language
	 */
	struct UBPW_Option_Language_C_ExecuteUbergraph_BPW_Option_Language_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AJCR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
