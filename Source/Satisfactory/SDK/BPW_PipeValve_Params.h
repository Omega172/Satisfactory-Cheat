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
	 * Function BPW_PipeValve.BPW_PipeValve_C.SetValveLimitTextInput
	 */
	struct UBPW_PipeValve_C_SetValveLimitTextInput_Params
	{
	public:
		double                                                     Value;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PipeValve.BPW_PipeValve_C.SoundValveSettings
	 */
	struct UBPW_PipeValve_C_SoundValveSettings_Params
	{
	public:
		double                                                     Value;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PipeValve.BPW_PipeValve_C.UpdateLimitStats
	 */
	struct UBPW_PipeValve_C_UpdateLimitStats_Params
	{
	public:
		double                                                     Value;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PipeValve.BPW_PipeValve_C.SetValveLimitForSlider
	 */
	struct UBPW_PipeValve_C_SetValveLimitForSlider_Params
	{
	public:
		double                                                     Value;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PipeValve.BPW_PipeValve_C.Construct
	 */
	struct UBPW_PipeValve_C_Construct_Params
	{	};

	/**
	 * Function BPW_PipeValve.BPW_PipeValve_C.BndEvt__mSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UBPW_PipeValve_C_BndEvt__mSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PipeValve.BPW_PipeValve_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_1_OnClose__DelegateSignature
	 */
	struct UBPW_PipeValve_C_BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_1_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_PipeValve.BPW_PipeValve_C.OnCustomTick
	 */
	struct UBPW_PipeValve_C_OnCustomTick_Params
	{
	public:
		float                                                      UpdateTime;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PipeValve.BPW_PipeValve_C.BndEvt__EditableText_603_K2Node_ComponentBoundEvent_2_OnEditableTextCommittedEvent__DelegateSignature
	 */
	struct UBPW_PipeValve_C_BndEvt__EditableText_603_K2Node_ComponentBoundEvent_2_OnEditableTextCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PipeValve.BPW_PipeValve_C.PreConstruct
	 */
	struct UBPW_PipeValve_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PipeValve.BPW_PipeValve_C.BndEvt__BPW_PipeValve_mValveTextInput_K2Node_ComponentBoundEvent_3_OnEditableTextChangedEvent__DelegateSignature
	 */
	struct UBPW_PipeValve_C_BndEvt__BPW_PipeValve_mValveTextInput_K2Node_ComponentBoundEvent_3_OnEditableTextChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_PipeValve.BPW_PipeValve_C.ExecuteUbergraph_BPW_PipeValve
	 */
	struct UBPW_PipeValve_C_ExecuteUbergraph_BPW_PipeValve_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
