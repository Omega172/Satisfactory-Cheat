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
	 * Function Widget_PopupContentImageButton.Widget_PopupContentImageButton_C.CacheDataFromReward
	 */
	struct UWidget_PopupContentImageButton_C_CacheDataFromReward_Params
	{	};

	/**
	 * Function Widget_PopupContentImageButton.Widget_PopupContentImageButton_C.GetIsSmeltable
	 */
	struct UWidget_PopupContentImageButton_C_GetIsSmeltable_Params
	{
	public:
		class UClass*                                              InClass;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsSmeltable;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PopupContentImageButton.Widget_PopupContentImageButton_C.ClearSelectionList
	 */
	struct UWidget_PopupContentImageButton_C_ClearSelectionList_Params
	{	};

	/**
	 * Function Widget_PopupContentImageButton.Widget_PopupContentImageButton_C.GetIndexInList
	 */
	struct UWidget_PopupContentImageButton_C_GetIndexInList_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PopupContentImageButton.Widget_PopupContentImageButton_C.GetTextColor
	 */
	struct UWidget_PopupContentImageButton_C_GetTextColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0014)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_PopupContentImageButton.Widget_PopupContentImageButton_C.GetBackgroundColor
	 */
	struct UWidget_PopupContentImageButton_C_GetBackgroundColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PopupContentImageButton.Widget_PopupContentImageButton_C.PreConstruct
	 */
	struct UWidget_PopupContentImageButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PopupContentImageButton.Widget_PopupContentImageButton_C.Construct
	 */
	struct UWidget_PopupContentImageButton_C_Construct_Params
	{	};

	/**
	 * Function Widget_PopupContentImageButton.Widget_PopupContentImageButton_C.UpdateButton
	 */
	struct UWidget_PopupContentImageButton_C_UpdateButton_Params
	{
	public:
		class FText                                                Title;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		unsigned char                                              UnknownData_0S2A[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSlateBrush                                         ImageBrush;                                              // 0x0020(0x00D0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_PopupContentImageButton.Widget_PopupContentImageButton_C.BndEvt__mPopupContentButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWidget_PopupContentImageButton_C_BndEvt__mPopupContentButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_PopupContentImageButton.Widget_PopupContentImageButton_C.BndEvt__mPopupContentButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWidget_PopupContentImageButton_C_BndEvt__mPopupContentButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_PopupContentImageButton.Widget_PopupContentImageButton_C.BndEvt__mPopupContentButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWidget_PopupContentImageButton_C_BndEvt__mPopupContentButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_PopupContentImageButton.Widget_PopupContentImageButton_C.BndEvt__Widget_PopupContentImageButton_mRecipeButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWidget_PopupContentImageButton_C_BndEvt__Widget_PopupContentImageButton_mRecipeButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_PopupContentImageButton.Widget_PopupContentImageButton_C.ExecuteUbergraph_Widget_PopupContentImageButton
	 */
	struct UWidget_PopupContentImageButton_C_ExecuteUbergraph_Widget_PopupContentImageButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WVY5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_PopupContentImageButton.Widget_PopupContentImageButton_C.NotifyPopupContentIndexSelect__DelegateSignature
	 */
	struct UWidget_PopupContentImageButton_C_NotifyPopupContentIndexSelect__DelegateSignature_Params
	{
	public:
		int32_t                                                    ChildIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
