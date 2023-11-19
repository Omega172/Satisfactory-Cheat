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
	 * Function BPW_Option_ScreenResolution.BPW_Option_ScreenResolution_C.UpdateResolutionValue
	 */
	struct UBPW_Option_ScreenResolution_C_UpdateResolutionValue_Params
	{	};

	/**
	 * Function BPW_Option_ScreenResolution.BPW_Option_ScreenResolution_C.IsPendingApply
	 */
	struct UBPW_Option_ScreenResolution_C_IsPendingApply_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Option_ScreenResolution.BPW_Option_ScreenResolution_C.IsPendingRestart
	 */
	struct UBPW_Option_ScreenResolution_C_IsPendingRestart_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Option_ScreenResolution.BPW_Option_ScreenResolution_C.CacheCurrentScreenResolution
	 */
	struct UBPW_Option_ScreenResolution_C_CacheCurrentScreenResolution_Params
	{	};

	/**
	 * Function BPW_Option_ScreenResolution.BPW_Option_ScreenResolution_C.SetResolution
	 */
	struct UBPW_Option_ScreenResolution_C_SetResolution_Params
	{
	public:
		class FString                                              SelectedResolution;                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Option_ScreenResolution.BPW_Option_ScreenResolution_C.SetupResolutionDropdown
	 */
	struct UBPW_Option_ScreenResolution_C_SetupResolutionDropdown_Params
	{	};

	/**
	 * Function BPW_Option_ScreenResolution.BPW_Option_ScreenResolution_C.PreConstruct
	 */
	struct UBPW_Option_ScreenResolution_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Option_ScreenResolution.BPW_Option_ScreenResolution_C.OnOptionApplied
	 */
	struct UBPW_Option_ScreenResolution_C_OnOptionApplied_Params
	{	};

	/**
	 * Function BPW_Option_ScreenResolution.BPW_Option_ScreenResolution_C.OnOptionReverted
	 */
	struct UBPW_Option_ScreenResolution_C_OnOptionReverted_Params
	{	};

	/**
	 * Function BPW_Option_ScreenResolution.BPW_Option_ScreenResolution_C.Construct
	 */
	struct UBPW_Option_ScreenResolution_C_Construct_Params
	{	};

	/**
	 * Function BPW_Option_ScreenResolution.BPW_Option_ScreenResolution_C.OnOptionValueUpdated
	 */
	struct UBPW_Option_ScreenResolution_C_OnOptionValueUpdated_Params
	{	};

	/**
	 * Function BPW_Option_ScreenResolution.BPW_Option_ScreenResolution_C.ExecuteUbergraph_BPW_Option_ScreenResolution
	 */
	struct UBPW_Option_ScreenResolution_C_ExecuteUbergraph_BPW_Option_ScreenResolution_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
