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
	 * Function Widget_SaveInputBox.Widget_SaveInputBox_C.SetButtonColor
	 */
	struct UWidget_SaveInputBox_C_SetButtonColor_Params
	{
	public:
		struct FSlateColor                                         Color;                                                   // 0x0000(0x0014)  (BlueprintVisible, BlueprintReadOnly, Parm)
		unsigned char                                              UnknownData_KN9R[0xC];                                   // 0x0014(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_SaveInputBox.Widget_SaveInputBox_C.Construct
	 */
	struct UWidget_SaveInputBox_C_Construct_Params
	{	};

	/**
	 * Function Widget_SaveInputBox.Widget_SaveInputBox_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWidget_SaveInputBox_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_SaveInputBox.Widget_SaveInputBox_C.BndEvt__mSaveInputBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature
	 */
	struct UWidget_SaveInputBox_C_BndEvt__mSaveInputBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Widget_SaveInputBox.Widget_SaveInputBox_C.BndEvt__mSaveInputBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct UWidget_SaveInputBox_C_BndEvt__mSaveInputBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SaveInputBox.Widget_SaveInputBox_C.CheckUserFocus
	 */
	struct UWidget_SaveInputBox_C_CheckUserFocus_Params
	{	};

	/**
	 * Function Widget_SaveInputBox.Widget_SaveInputBox_C.Destruct
	 */
	struct UWidget_SaveInputBox_C_Destruct_Params
	{	};

	/**
	 * Function Widget_SaveInputBox.Widget_SaveInputBox_C.ExecuteUbergraph_Widget_SaveInputBox
	 */
	struct UWidget_SaveInputBox_C_ExecuteUbergraph_Widget_SaveInputBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SaveInputBox.Widget_SaveInputBox_C.OnUnfocused__DelegateSignature
	 */
	struct UWidget_SaveInputBox_C_OnUnfocused__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_SaveInputBox.Widget_SaveInputBox_C.OnFocused__DelegateSignature
	 */
	struct UWidget_SaveInputBox_C_OnFocused__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_SaveInputBox.Widget_SaveInputBox_C.OnTextCommited__DelegateSignature
	 */
	struct UWidget_SaveInputBox_C_OnTextCommited__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SaveInputBox.Widget_SaveInputBox_C.OnTextChanged__DelegateSignature
	 */
	struct UWidget_SaveInputBox_C_OnTextChanged__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
