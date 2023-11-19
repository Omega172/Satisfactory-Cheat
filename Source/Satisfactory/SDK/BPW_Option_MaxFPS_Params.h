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
	 * Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.IsPendingApply
	 */
	struct UBPW_Option_MaxFPS_C_IsPendingApply_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UH4X[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.UpdateDropdownVisibility
	 */
	struct UBPW_Option_MaxFPS_C_UpdateDropdownVisibility_Params
	{
	public:
		bool                                                       ShouldShowDropdown;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.UpdateSliderValue
	 */
	struct UBPW_Option_MaxFPS_C_UpdateSliderValue_Params
	{	};

	/**
	 * Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.HandleSlider
	 */
	struct UBPW_Option_MaxFPS_C_HandleSlider_Params
	{	};

	/**
	 * Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.SetupSlider
	 */
	struct UBPW_Option_MaxFPS_C_SetupSlider_Params
	{	};

	/**
	 * Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.GetDisplayValue
	 */
	struct UBPW_Option_MaxFPS_C_GetDisplayValue_Params
	{
	public:
		double                                                     DisplayValue;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.SetNormalizedValue
	 */
	struct UBPW_Option_MaxFPS_C_SetNormalizedValue_Params
	{
	public:
		double                                                     CurrentUnadjustedValue;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.GetAdjustedValue
	 */
	struct UBPW_Option_MaxFPS_C_GetAdjustedValue_Params
	{
	public:
		double                                                     AdjustedValue;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.SetProgressBarPercentage
	 */
	struct UBPW_Option_MaxFPS_C_SetProgressBarPercentage_Params
	{
	public:
		double                                                     Percent;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.GetProgressBarPercentage
	 */
	struct UBPW_Option_MaxFPS_C_GetProgressBarPercentage_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.GetValueText
	 */
	struct UBPW_Option_MaxFPS_C_GetValueText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.BndEvt__OptionSlider_K2Node_ComponentBoundEvent_104_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UBPW_Option_MaxFPS_C_BndEvt__OptionSlider_K2Node_ComponentBoundEvent_104_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.OnRowHovered
	 */
	struct UBPW_Option_MaxFPS_C_OnRowHovered_Params
	{	};

	/**
	 * Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.OnRowUnhovered
	 */
	struct UBPW_Option_MaxFPS_C_OnRowUnhovered_Params
	{	};

	/**
	 * Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.OnInitValueController
	 */
	struct UBPW_Option_MaxFPS_C_OnInitValueController_Params
	{	};

	/**
	 * Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct UBPW_Option_MaxFPS_C_BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.OnOptionValueUpdated
	 */
	struct UBPW_Option_MaxFPS_C_OnOptionValueUpdated_Params
	{	};

	/**
	 * Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.BndEvt__mFakeButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_Option_MaxFPS_C_BndEvt__mFakeButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.BndEvt__mDropdownBox_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UBPW_Option_MaxFPS_C_BndEvt__mDropdownBox_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.BndEvt__mDropdownBox_K2Node_ComponentBoundEvent_3_OnOpeningEvent__DelegateSignature
	 */
	struct UBPW_Option_MaxFPS_C_BndEvt__mDropdownBox_K2Node_ComponentBoundEvent_3_OnOpeningEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.StartCloseTimer
	 */
	struct UBPW_Option_MaxFPS_C_StartCloseTimer_Params
	{	};

	/**
	 * Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.CloseDropdownBox
	 */
	struct UBPW_Option_MaxFPS_C_CloseDropdownBox_Params
	{	};

	/**
	 * Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.ToggleDropdownVisibilty
	 */
	struct UBPW_Option_MaxFPS_C_ToggleDropdownVisibilty_Params
	{	};

	/**
	 * Function BPW_Option_MaxFPS.BPW_Option_MaxFPS_C.ExecuteUbergraph_BPW_Option_MaxFPS
	 */
	struct UBPW_Option_MaxFPS_C_ExecuteUbergraph_BPW_Option_MaxFPS_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
