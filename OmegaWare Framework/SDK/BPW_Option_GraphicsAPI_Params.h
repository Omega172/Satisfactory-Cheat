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
	 * Function BPW_Option_GraphicsAPI.BPW_Option_GraphicsAPI_C.GetOverwriteTooltip
	 */
	struct UBPW_Option_GraphicsAPI_C_GetOverwriteTooltip_Params
	{
	public:
		class FText                                                ToolTip;                                                 // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BPW_Option_GraphicsAPI.BPW_Option_GraphicsAPI_C.UpdateEnabledState
	 */
	struct UBPW_Option_GraphicsAPI_C_UpdateEnabledState_Params
	{	};

	/**
	 * Function BPW_Option_GraphicsAPI.BPW_Option_GraphicsAPI_C.UpdateGraphicAPIValue
	 */
	struct UBPW_Option_GraphicsAPI_C_UpdateGraphicAPIValue_Params
	{	};

	/**
	 * Function BPW_Option_GraphicsAPI.BPW_Option_GraphicsAPI_C.IsPendingApply
	 */
	struct UBPW_Option_GraphicsAPI_C_IsPendingApply_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OXNO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_Option_GraphicsAPI.BPW_Option_GraphicsAPI_C.IsPendingRestart
	 */
	struct UBPW_Option_GraphicsAPI_C_IsPendingRestart_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OR0X[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_Option_GraphicsAPI.BPW_Option_GraphicsAPI_C.SetupGraphicsAPIDropdown
	 */
	struct UBPW_Option_GraphicsAPI_C_SetupGraphicsAPIDropdown_Params
	{	};

	/**
	 * Function BPW_Option_GraphicsAPI.BPW_Option_GraphicsAPI_C.PreConstruct
	 */
	struct UBPW_Option_GraphicsAPI_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Option_GraphicsAPI.BPW_Option_GraphicsAPI_C.OnOptionApplied
	 */
	struct UBPW_Option_GraphicsAPI_C_OnOptionApplied_Params
	{	};

	/**
	 * Function BPW_Option_GraphicsAPI.BPW_Option_GraphicsAPI_C.OnOptionReverted
	 */
	struct UBPW_Option_GraphicsAPI_C_OnOptionReverted_Params
	{	};

	/**
	 * Function BPW_Option_GraphicsAPI.BPW_Option_GraphicsAPI_C.OnOptionValueUpdated
	 */
	struct UBPW_Option_GraphicsAPI_C_OnOptionValueUpdated_Params
	{	};

	/**
	 * Function BPW_Option_GraphicsAPI.BPW_Option_GraphicsAPI_C.Construct
	 */
	struct UBPW_Option_GraphicsAPI_C_Construct_Params
	{	};

	/**
	 * Function BPW_Option_GraphicsAPI.BPW_Option_GraphicsAPI_C.Destruct
	 */
	struct UBPW_Option_GraphicsAPI_C_Destruct_Params
	{	};

	/**
	 * Function BPW_Option_GraphicsAPI.BPW_Option_GraphicsAPI_C.OnOpeningDropDown
	 */
	struct UBPW_Option_GraphicsAPI_C_OnOpeningDropDown_Params
	{	};

	/**
	 * Function BPW_Option_GraphicsAPI.BPW_Option_GraphicsAPI_C.CheckOpened
	 */
	struct UBPW_Option_GraphicsAPI_C_CheckOpened_Params
	{	};

	/**
	 * Function BPW_Option_GraphicsAPI.BPW_Option_GraphicsAPI_C.ExecuteUbergraph_BPW_Option_GraphicsAPI
	 */
	struct UBPW_Option_GraphicsAPI_C_ExecuteUbergraph_BPW_Option_GraphicsAPI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
