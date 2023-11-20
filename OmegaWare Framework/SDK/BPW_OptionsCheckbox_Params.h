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
	 * Function BPW_OptionsCheckbox.BPW_OptionsCheckbox_C.SetEnabled
	 */
	struct UBPW_OptionsCheckbox_C_SetEnabled_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_OptionsCheckbox.BPW_OptionsCheckbox_C.HandleChecked
	 */
	struct UBPW_OptionsCheckbox_C_HandleChecked_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YW4Y[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_OptionsCheckbox.BPW_OptionsCheckbox_C.UpdateCheckboxValue
	 */
	struct UBPW_OptionsCheckbox_C_UpdateCheckboxValue_Params
	{	};

	/**
	 * Function BPW_OptionsCheckbox.BPW_OptionsCheckbox_C.SetChecked
	 */
	struct UBPW_OptionsCheckbox_C_SetChecked_Params
	{
	public:
		bool                                                       mIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       TriggerCheckedEvent;                                     // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsChecked;                                               // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_OptionsCheckbox.BPW_OptionsCheckbox_C.BndEvt__mButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_OptionsCheckbox_C_BndEvt__mButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_OptionsCheckbox.BPW_OptionsCheckbox_C.OnRowHovered
	 */
	struct UBPW_OptionsCheckbox_C_OnRowHovered_Params
	{	};

	/**
	 * Function BPW_OptionsCheckbox.BPW_OptionsCheckbox_C.OnRowUnhovered
	 */
	struct UBPW_OptionsCheckbox_C_OnRowUnhovered_Params
	{	};

	/**
	 * Function BPW_OptionsCheckbox.BPW_OptionsCheckbox_C.OnInitValueController
	 */
	struct UBPW_OptionsCheckbox_C_OnInitValueController_Params
	{	};

	/**
	 * Function BPW_OptionsCheckbox.BPW_OptionsCheckbox_C.OnOptionValueUpdated
	 */
	struct UBPW_OptionsCheckbox_C_OnOptionValueUpdated_Params
	{	};

	/**
	 * Function BPW_OptionsCheckbox.BPW_OptionsCheckbox_C.BndEvt__mButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBPW_OptionsCheckbox_C_BndEvt__mButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_OptionsCheckbox.BPW_OptionsCheckbox_C.PreConstruct
	 */
	struct UBPW_OptionsCheckbox_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_OptionsCheckbox.BPW_OptionsCheckbox_C.BndEvt__mButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBPW_OptionsCheckbox_C_BndEvt__mButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_OptionsCheckbox.BPW_OptionsCheckbox_C.BndEvt__mButton_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature
	 */
	struct UBPW_OptionsCheckbox_C_BndEvt__mButton_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_OptionsCheckbox.BPW_OptionsCheckbox_C.ExecuteUbergraph_BPW_OptionsCheckbox
	 */
	struct UBPW_OptionsCheckbox_C_ExecuteUbergraph_BPW_OptionsCheckbox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_O7NX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_OptionsCheckbox.BPW_OptionsCheckbox_C.OnCheckChanged__DelegateSignature
	 */
	struct UBPW_OptionsCheckbox_C_OnCheckChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
