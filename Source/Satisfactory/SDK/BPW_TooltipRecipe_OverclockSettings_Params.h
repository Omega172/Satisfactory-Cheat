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
	 * Function BPW_TooltipRecipe_OverclockSettings.BPW_TooltipRecipe_OverclockSettings_C.SetAmount
	 */
	struct UBPW_TooltipRecipe_OverclockSettings_C_SetAmount_Params
	{
	public:
		double                                                     mAmount;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_TooltipRecipe_OverclockSettings.BPW_TooltipRecipe_OverclockSettings_C.SetPercentText
	 */
	struct UBPW_TooltipRecipe_OverclockSettings_C_SetPercentText_Params
	{
	public:
		double                                                     Text;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_TooltipRecipe_OverclockSettings.BPW_TooltipRecipe_OverclockSettings_C.SetTargetRateText
	 */
	struct UBPW_TooltipRecipe_OverclockSettings_C_SetTargetRateText_Params
	{
	public:
		double                                                     Text;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_TooltipRecipe_OverclockSettings.BPW_TooltipRecipe_OverclockSettings_C.SetStandardProductionRate
	 */
	struct UBPW_TooltipRecipe_OverclockSettings_C_SetStandardProductionRate_Params
	{
	public:
		double                                                     mStandardProductionRate;                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_TooltipRecipe_OverclockSettings.BPW_TooltipRecipe_OverclockSettings_C.ConvertTargetRate
	 */
	struct UBPW_TooltipRecipe_OverclockSettings_C_ConvertTargetRate_Params
	{
	public:
		double                                                     Value;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ToTargetRate;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3CBB[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_TooltipRecipe_OverclockSettings.BPW_TooltipRecipe_OverclockSettings_C.PreConstruct
	 */
	struct UBPW_TooltipRecipe_OverclockSettings_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_TooltipRecipe_OverclockSettings.BPW_TooltipRecipe_OverclockSettings_C.BndEvt__BPW_TooltipRecipe_OverclockSettings_mOverclockPercent_K2Node_ComponentBoundEvent_2_OnEditableTextCommittedEvent__DelegateSignature
	 */
	struct UBPW_TooltipRecipe_OverclockSettings_C_BndEvt__BPW_TooltipRecipe_OverclockSettings_mOverclockPercent_K2Node_ComponentBoundEvent_2_OnEditableTextCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_TooltipRecipe_OverclockSettings.BPW_TooltipRecipe_OverclockSettings_C.BndEvt__BPW_TooltipRecipe_OverclockSettings_mOverclockTargetRate_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature
	 */
	struct UBPW_TooltipRecipe_OverclockSettings_C_BndEvt__BPW_TooltipRecipe_OverclockSettings_mOverclockTargetRate_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_TooltipRecipe_OverclockSettings.BPW_TooltipRecipe_OverclockSettings_C.ExecuteUbergraph_BPW_TooltipRecipe_OverclockSettings
	 */
	struct UBPW_TooltipRecipe_OverclockSettings_C_ExecuteUbergraph_BPW_TooltipRecipe_OverclockSettings_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_C91J[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_TooltipRecipe_OverclockSettings.BPW_TooltipRecipe_OverclockSettings_C.OnOverclockChanged__DelegateSignature
	 */
	struct UBPW_TooltipRecipe_OverclockSettings_C_OnOverclockChanged__DelegateSignature_Params
	{
	public:
		double                                                     Value;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
