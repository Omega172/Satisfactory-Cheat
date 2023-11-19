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
	 * Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.ClampToValidRange
	 */
	struct UWidget_StackSplitSlider_C_ClampToValidRange_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.OnKeyUp
	 */
	struct UWidget_StackSplitSlider_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.SetSliderAfterText
	 */
	struct UWidget_StackSplitSlider_C_SetSliderAfterText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EDirection                                                 LeftOrRight;                                             // 0x0019(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P3ER[0x2];                                   // 0x001A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.UpdateText
	 */
	struct UWidget_StackSplitSlider_C_UpdateText_Params
	{	};

	/**
	 * Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.SnapSliderValue
	 */
	struct UWidget_StackSplitSlider_C_SnapSliderValue_Params
	{
	public:
		double                                                     NormalizedValue;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     SnappedValue;                                            // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.OnPaint
	 */
	struct UWidget_StackSplitSlider_C_OnPaint_Params
	{
	public:
		struct FPaintContext                                       Context;                                                 // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.UpdateSliderValue
	 */
	struct UWidget_StackSplitSlider_C_UpdateSliderValue_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.GetProgressBarPercentage
	 */
	struct UWidget_StackSplitSlider_C_GetProgressBarPercentage_Params
	{
	public:
		double                                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.GetNumInNewStackText
	 */
	struct UWidget_StackSplitSlider_C_GetNumInNewStackText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.GetNumLeftAtSlot
	 */
	struct UWidget_StackSplitSlider_C_GetNumLeftAtSlot_Params
	{
	public:
		int32_t                                                    NumLeft;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.GetNumLeftAtSlotText
	 */
	struct UWidget_StackSplitSlider_C_GetNumLeftAtSlotText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.SplitResource
	 */
	struct UWidget_StackSplitSlider_C_SplitResource_Params
	{	};

	/**
	 * Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.Construct
	 */
	struct UWidget_StackSplitSlider_C_Construct_Params
	{	};

	/**
	 * Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.BndEvt__mSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UWidget_StackSplitSlider_C_BndEvt__mSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.BndEvt__mToSlot_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UWidget_StackSplitSlider_C_BndEvt__mToSlot_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.BndEvt__mCancel_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UWidget_StackSplitSlider_C_BndEvt__mCancel_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.BndEvt__mLeftText_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature
	 */
	struct UWidget_StackSplitSlider_C_BndEvt__mLeftText_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.BndEvt__mRightText_K2Node_ComponentBoundEvent_4_OnEditableTextCommittedEvent__DelegateSignature
	 */
	struct UWidget_StackSplitSlider_C_BndEvt__mRightText_K2Node_ComponentBoundEvent_4_OnEditableTextCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.CloseStackSplitSlider
	 */
	struct UWidget_StackSplitSlider_C_CloseStackSplitSlider_Params
	{	};

	/**
	 * Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.BndEvt__Widget_StackSplitSlider_Button_84_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWidget_StackSplitSlider_C_BndEvt__Widget_StackSplitSlider_Button_84_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.Destruct
	 */
	struct UWidget_StackSplitSlider_C_Destruct_Params
	{	};

	/**
	 * Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.BndEvt__Widget_StackSplitSlider_Button_94_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWidget_StackSplitSlider_C_BndEvt__Widget_StackSplitSlider_Button_94_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.ExecuteUbergraph_Widget_StackSplitSlider
	 */
	struct UWidget_StackSplitSlider_C_ExecuteUbergraph_Widget_StackSplitSlider_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.OnSplit__DelegateSignature
	 */
	struct UWidget_StackSplitSlider_C_OnSplit__DelegateSignature_Params
	{
	public:
		int32_t                                                    NumToMove;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.OnClose__DelegateSignature
	 */
	struct UWidget_StackSplitSlider_C_OnClose__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
