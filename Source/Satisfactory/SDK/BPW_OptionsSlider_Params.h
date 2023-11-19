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
	 * Function BPW_OptionsSlider.BPW_OptionsSlider_C.UpdateSliderValue
	 */
	struct UBPW_OptionsSlider_C_UpdateSliderValue_Params
	{	};

	/**
	 * Function BPW_OptionsSlider.BPW_OptionsSlider_C.HandleSlider
	 */
	struct UBPW_OptionsSlider_C_HandleSlider_Params
	{	};

	/**
	 * Function BPW_OptionsSlider.BPW_OptionsSlider_C.SetupSlider
	 */
	struct UBPW_OptionsSlider_C_SetupSlider_Params
	{	};

	/**
	 * Function BPW_OptionsSlider.BPW_OptionsSlider_C.GetDisplayValue
	 */
	struct UBPW_OptionsSlider_C_GetDisplayValue_Params
	{
	public:
		double                                                     DisplayValue;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_OptionsSlider.BPW_OptionsSlider_C.SetNormalizedValue
	 */
	struct UBPW_OptionsSlider_C_SetNormalizedValue_Params
	{
	public:
		double                                                     CurrentUnadjustedValue;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_OptionsSlider.BPW_OptionsSlider_C.GetAdjustedValue
	 */
	struct UBPW_OptionsSlider_C_GetAdjustedValue_Params
	{
	public:
		double                                                     AdjustedValue;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_OptionsSlider.BPW_OptionsSlider_C.SetProgressBarPercentage
	 */
	struct UBPW_OptionsSlider_C_SetProgressBarPercentage_Params
	{
	public:
		double                                                     Percent;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_OptionsSlider.BPW_OptionsSlider_C.GetProgressBarPercentage
	 */
	struct UBPW_OptionsSlider_C_GetProgressBarPercentage_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_OptionsSlider.BPW_OptionsSlider_C.GetValueText
	 */
	struct UBPW_OptionsSlider_C_GetValueText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BPW_OptionsSlider.BPW_OptionsSlider_C.OnInitValueController
	 */
	struct UBPW_OptionsSlider_C_OnInitValueController_Params
	{	};

	/**
	 * Function BPW_OptionsSlider.BPW_OptionsSlider_C.OnRowUnhovered
	 */
	struct UBPW_OptionsSlider_C_OnRowUnhovered_Params
	{	};

	/**
	 * Function BPW_OptionsSlider.BPW_OptionsSlider_C.OnRowHovered
	 */
	struct UBPW_OptionsSlider_C_OnRowHovered_Params
	{	};

	/**
	 * Function BPW_OptionsSlider.BPW_OptionsSlider_C.BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct UBPW_OptionsSlider_C_BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_OptionsSlider.BPW_OptionsSlider_C.BndEvt__OptionSlider_K2Node_ComponentBoundEvent_104_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UBPW_OptionsSlider_C_BndEvt__OptionSlider_K2Node_ComponentBoundEvent_104_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_OptionsSlider.BPW_OptionsSlider_C.OnOptionValueUpdated
	 */
	struct UBPW_OptionsSlider_C_OnOptionValueUpdated_Params
	{	};

	/**
	 * Function BPW_OptionsSlider.BPW_OptionsSlider_C.BndEvt__BPW_OptionsSlider_mValueTextInput_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature
	 */
	struct UBPW_OptionsSlider_C_BndEvt__BPW_OptionsSlider_mValueTextInput_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_OptionsSlider.BPW_OptionsSlider_C.ExecuteUbergraph_BPW_OptionsSlider
	 */
	struct UBPW_OptionsSlider_C_ExecuteUbergraph_BPW_OptionsSlider_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_54OQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_OptionsSlider.BPW_OptionsSlider_C.GetNewValue__DelegateSignature
	 */
	struct UBPW_OptionsSlider_C_GetNewValue__DelegateSignature_Params
	{
	public:
		double                                                     NewValue;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
