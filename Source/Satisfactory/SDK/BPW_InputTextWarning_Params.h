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
	 * Function BPW_InputTextWarning.BPW_InputTextWarning_C.GetCurrentStatesTooltip
	 */
	struct UBPW_InputTextWarning_C_GetCurrentStatesTooltip_Params
	{
	public:
		struct FStruct_TooltipText                                 ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_InputTextWarning.BPW_InputTextWarning_C.GetToolTip
	 */
	struct UBPW_InputTextWarning_C_GetToolTip_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_InputTextWarning.BPW_InputTextWarning_C.SetState
	 */
	struct UBPW_InputTextWarning_C_SetState_Params
	{
	public:
		EInputTextWarningState                                     mState;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_InputTextWarning.BPW_InputTextWarning_C.SetErrorTooltip
	 */
	struct UBPW_InputTextWarning_C_SetErrorTooltip_Params
	{
	public:
		struct FStruct_TooltipText                                 mErrorTooltip;                                           // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_InputTextWarning.BPW_InputTextWarning_C.SetWarningTooltip
	 */
	struct UBPW_InputTextWarning_C_SetWarningTooltip_Params
	{
	public:
		struct FStruct_TooltipText                                 mWarningTooltip;                                         // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_InputTextWarning.BPW_InputTextWarning_C.SetSize
	 */
	struct UBPW_InputTextWarning_C_SetSize_Params
	{
	public:
		struct FVector2D                                           mSize;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_InputTextWarning.BPW_InputTextWarning_C.PreConstruct
	 */
	struct UBPW_InputTextWarning_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_InputTextWarning.BPW_InputTextWarning_C.ExecuteUbergraph_BPW_InputTextWarning
	 */
	struct UBPW_InputTextWarning_C_ExecuteUbergraph_BPW_InputTextWarning_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
