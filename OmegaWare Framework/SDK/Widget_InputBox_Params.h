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
	 * Function Widget_InputBox.Widget_InputBox_C.SetPreviewText
	 */
	struct UWidget_InputBox_C_SetPreviewText_Params
	{
	public:
		class FText                                                mPreviewText;                                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_InputBox.Widget_InputBox_C.ClearAllText
	 */
	struct UWidget_InputBox_C_ClearAllText_Params
	{	};

	/**
	 * Function Widget_InputBox.Widget_InputBox_C.SetStyling
	 */
	struct UWidget_InputBox_C_SetStyling_Params
	{
	public:
		bool                                                       isLightMode;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WFAS[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_InputBox.Widget_InputBox_C.OnFocusReceived
	 */
	struct UWidget_InputBox_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_InputBox.Widget_InputBox_C.OnKeyUp
	 */
	struct UWidget_InputBox_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_InputBox.Widget_InputBox_C.CheckSearchbarLength
	 */
	struct UWidget_InputBox_C_CheckSearchbarLength_Params
	{
	public:
		bool                                                       SearchbarContainsText;                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AORX[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_InputBox.Widget_InputBox_C.SetSearchbarStyle
	 */
	struct UWidget_InputBox_C_SetSearchbarStyle_Params
	{	};

	/**
	 * Function Widget_InputBox.Widget_InputBox_C.SetInputboxStyle
	 */
	struct UWidget_InputBox_C_SetInputboxStyle_Params
	{
	public:
		bool                                                       IsHovered;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_InputBox.Widget_InputBox_C.ShowHintText
	 */
	struct UWidget_InputBox_C_ShowHintText_Params
	{	};

	/**
	 * Function Widget_InputBox.Widget_InputBox_C.BndEvt__mInputBox_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature
	 */
	struct UWidget_InputBox_C_BndEvt__mInputBox_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Widget_InputBox.Widget_InputBox_C.BndEvt__mInputBox_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature
	 */
	struct UWidget_InputBox_C_BndEvt__mInputBox_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_InputBox.Widget_InputBox_C.Construct
	 */
	struct UWidget_InputBox_C_Construct_Params
	{	};

	/**
	 * Function Widget_InputBox.Widget_InputBox_C.Tick
	 */
	struct UWidget_InputBox_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_InputBox.Widget_InputBox_C.BndEvt__mHover_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWidget_InputBox_C_BndEvt__mHover_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_InputBox.Widget_InputBox_C.BndEvt__mHover_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWidget_InputBox_C_BndEvt__mHover_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_InputBox.Widget_InputBox_C.PreConstruct
	 */
	struct UWidget_InputBox_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_InputBox.Widget_InputBox_C.BndEvt__mSearchButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWidget_InputBox_C_BndEvt__mSearchButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_InputBox.Widget_InputBox_C.OnFocusLost
	 */
	struct UWidget_InputBox_C_OnFocusLost_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function Widget_InputBox.Widget_InputBox_C.ExecuteUbergraph_Widget_InputBox
	 */
	struct UWidget_InputBox_C_ExecuteUbergraph_Widget_InputBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KZLZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_InputBox.Widget_InputBox_C.OnInputBoxFocusLost__DelegateSignature
	 */
	struct UWidget_InputBox_C_OnInputBoxFocusLost__DelegateSignature_Params
	{
	public:
		struct FFocusEvent                                         FocusEvent;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function Widget_InputBox.Widget_InputBox_C.OnInputBoxFocusReceived__DelegateSignature
	 */
	struct UWidget_InputBox_C_OnInputBoxFocusReceived__DelegateSignature_Params
	{
	public:
		struct FFocusEvent                                         FocusEvent;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function Widget_InputBox.Widget_InputBox_C.OnClearTextClicked__DelegateSignature
	 */
	struct UWidget_InputBox_C_OnClearTextClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_InputBox.Widget_InputBox_C.OnTextComitted__DelegateSignature
	 */
	struct UWidget_InputBox_C_OnTextComitted__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_InputBox.Widget_InputBox_C.OnTextChanged__DelegateSignature
	 */
	struct UWidget_InputBox_C_OnTextChanged__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
