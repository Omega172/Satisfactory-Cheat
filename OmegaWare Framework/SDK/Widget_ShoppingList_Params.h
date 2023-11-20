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
	 * Function Widget_ShoppingList.Widget_ShoppingList_C.UpdateIngredientList
	 */
	struct UWidget_ShoppingList_C_UpdateIngredientList_Params
	{	};

	/**
	 * Function Widget_ShoppingList.Widget_ShoppingList_C.IsProductListEmpty
	 */
	struct UWidget_ShoppingList_C_IsProductListEmpty_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TPGY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_ShoppingList.Widget_ShoppingList_C.UpdateProductList
	 */
	struct UWidget_ShoppingList_C_UpdateProductList_Params
	{	};

	/**
	 * Function Widget_ShoppingList.Widget_ShoppingList_C.UpdateSettings
	 */
	struct UWidget_ShoppingList_C_UpdateSettings_Params
	{	};

	/**
	 * Function Widget_ShoppingList.Widget_ShoppingList_C.InitSettings
	 */
	struct UWidget_ShoppingList_C_InitSettings_Params
	{	};

	/**
	 * Function Widget_ShoppingList.Widget_ShoppingList_C.ConvertSize
	 */
	struct UWidget_ShoppingList_C_ConvertSize_Params
	{
	public:
		double                                                     In;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       FromSliderToSizeBox;                                     // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NH1O[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     Out;                                                     // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ShoppingList.Widget_ShoppingList_C.CharCountLimiter
	 */
	struct UWidget_ShoppingList_C_CharCountLimiter_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FText                                                ReturnValue;                                             // 0x0018(0x0018)  (Parm, OutParm, ReturnParm)
		bool                                                       IsOverLimit;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EBCL[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_ShoppingList.Widget_ShoppingList_C.AreRecipesVisible
	 */
	struct UWidget_ShoppingList_C_AreRecipesVisible_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ShoppingList.Widget_ShoppingList_C.UpdatePublicNotes
	 */
	struct UWidget_ShoppingList_C_UpdatePublicNotes_Params
	{	};

	/**
	 * Function Widget_ShoppingList.Widget_ShoppingList_C.UpdatePrivateNotes
	 */
	struct UWidget_ShoppingList_C_UpdatePrivateNotes_Params
	{	};

	/**
	 * Function Widget_ShoppingList.Widget_ShoppingList_C.ParseNotes
	 */
	struct UWidget_ShoppingList_C_ParseNotes_Params
	{
	public:
		class FString                                              InText;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FText                                                OutText;                                                 // 0x0010(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function Widget_ShoppingList.Widget_ShoppingList_C.UpdateContentVisibility
	 */
	struct UWidget_ShoppingList_C_UpdateContentVisibility_Params
	{	};

	/**
	 * Function Widget_ShoppingList.Widget_ShoppingList_C.Show Hide Open Button
	 */
	struct UWidget_ShoppingList_C_ShowHideOpenButton_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ShoppingList.Widget_ShoppingList_C.SetTodolistContentStyle
	 */
	struct UWidget_ShoppingList_C_SetTodolistContentStyle_Params
	{
	public:
		bool                                                       IsTodoListOpen;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5LAN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_ShoppingList.Widget_ShoppingList_C.SetClearListButtonVisibility
	 */
	struct UWidget_ShoppingList_C_SetClearListButtonVisibility_Params
	{	};

	/**
	 * Function Widget_ShoppingList.Widget_ShoppingList_C.SetIsOpen
	 */
	struct UWidget_ShoppingList_C_SetIsOpen_Params
	{
	public:
		bool                                                       IsOpen;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ShoppingList.Widget_ShoppingList_C.Construct
	 */
	struct UWidget_ShoppingList_C_Construct_Params
	{	};

	/**
	 * Function Widget_ShoppingList.Widget_ShoppingList_C.UpdateShoppingListRows
	 */
	struct UWidget_ShoppingList_C_UpdateShoppingListRows_Params
	{	};

	/**
	 * Function Widget_ShoppingList.Widget_ShoppingList_C.BndEvt__Widget_StandardButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UWidget_ShoppingList_C_BndEvt__Widget_StandardButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_ShoppingList.Widget_ShoppingList_C.Event On Update Shopping List
	 */
	struct UWidget_ShoppingList_C_EventOnUpdateShoppingList_Params
	{	};

	/**
	 * Function Widget_ShoppingList.Widget_ShoppingList_C.BndEvt__Button_87_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWidget_ShoppingList_C_BndEvt__Button_87_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_ShoppingList.Widget_ShoppingList_C.BndEvt__Button_87_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWidget_ShoppingList_C_BndEvt__Button_87_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_ShoppingList.Widget_ShoppingList_C.BndEvt__Button_87_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWidget_ShoppingList_C_BndEvt__Button_87_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_ShoppingList.Widget_ShoppingList_C.BndEvt__Widget_TitleButton_DarkMode_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	 */
	struct UWidget_ShoppingList_C_BndEvt__Widget_TitleButton_DarkMode_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_ShoppingList.Widget_ShoppingList_C.BndEvt__Button_911_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWidget_ShoppingList_C_BndEvt__Button_911_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_ShoppingList.Widget_ShoppingList_C.BndEvt__Button_911_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWidget_ShoppingList_C_BndEvt__Button_911_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_ShoppingList.Widget_ShoppingList_C.BndEvt__Button_911_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWidget_ShoppingList_C_BndEvt__Button_911_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_ShoppingList.Widget_ShoppingList_C.BndEvt__Slider_77_K2Node_ComponentBoundEvent_15_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UWidget_ShoppingList_C_BndEvt__Slider_77_K2Node_ComponentBoundEvent_15_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ShoppingList.Widget_ShoppingList_C.BndEvt__Slider_77_K2Node_ComponentBoundEvent_16_OnMouseCaptureBeginEvent__DelegateSignature
	 */
	struct UWidget_ShoppingList_C_BndEvt__Slider_77_K2Node_ComponentBoundEvent_16_OnMouseCaptureBeginEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_ShoppingList.Widget_ShoppingList_C.BndEvt__Slider_77_K2Node_ComponentBoundEvent_17_OnMouseCaptureEndEvent__DelegateSignature
	 */
	struct UWidget_ShoppingList_C_BndEvt__Slider_77_K2Node_ComponentBoundEvent_17_OnMouseCaptureEndEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_ShoppingList.Widget_ShoppingList_C.BndEvt__Slider_77_K2Node_ComponentBoundEvent_18_OnControllerCaptureBeginEvent__DelegateSignature
	 */
	struct UWidget_ShoppingList_C_BndEvt__Slider_77_K2Node_ComponentBoundEvent_18_OnControllerCaptureBeginEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_ShoppingList.Widget_ShoppingList_C.BndEvt__Slider_77_K2Node_ComponentBoundEvent_19_OnControllerCaptureEndEvent__DelegateSignature
	 */
	struct UWidget_ShoppingList_C_BndEvt__Slider_77_K2Node_ComponentBoundEvent_19_OnControllerCaptureEndEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_ShoppingList.Widget_ShoppingList_C.Destruct
	 */
	struct UWidget_ShoppingList_C_Destruct_Params
	{	};

	/**
	 * Function Widget_ShoppingList.Widget_ShoppingList_C.BndEvt__Widget_ShoppingList_mEditablePublicNotes_K2Node_ComponentBoundEvent_10_OnMultiLineEditableTextCommittedEvent__DelegateSignature
	 */
	struct UWidget_ShoppingList_C_BndEvt__Widget_ShoppingList_mEditablePublicNotes_K2Node_ComponentBoundEvent_10_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ShoppingList.Widget_ShoppingList_C.BndEvt__Widget_ShoppingList_mEditablePrivateNotes_K2Node_ComponentBoundEvent_11_OnMultiLineEditableTextChangedEvent__DelegateSignature
	 */
	struct UWidget_ShoppingList_C_BndEvt__Widget_ShoppingList_mEditablePrivateNotes_K2Node_ComponentBoundEvent_11_OnMultiLineEditableTextChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Widget_ShoppingList.Widget_ShoppingList_C.BndEvt__Widget_ShoppingList_mDivPrivateNotes_K2Node_ComponentBoundEvent_8_OnStateChanged__DelegateSignature
	 */
	struct UWidget_ShoppingList_C_BndEvt__Widget_ShoppingList_mDivPrivateNotes_K2Node_ComponentBoundEvent_8_OnStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsOpen;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ShoppingList.Widget_ShoppingList_C.BndEvt__Widget_ShoppingList_mDivPublicNotes_K2Node_ComponentBoundEvent_9_OnStateChanged__DelegateSignature
	 */
	struct UWidget_ShoppingList_C_BndEvt__Widget_ShoppingList_mDivPublicNotes_K2Node_ComponentBoundEvent_9_OnStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsOpen;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ShoppingList.Widget_ShoppingList_C.BndEvt__Widget_ShoppingList_mDivRecipes_K2Node_ComponentBoundEvent_20_OnStateChanged__DelegateSignature
	 */
	struct UWidget_ShoppingList_C_BndEvt__Widget_ShoppingList_mDivRecipes_K2Node_ComponentBoundEvent_20_OnStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsOpen;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ShoppingList.Widget_ShoppingList_C.BndEvt__Widget_ShoppingList_mEditablePrivateNotes_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextCommittedEvent__DelegateSignature
	 */
	struct UWidget_ShoppingList_C_BndEvt__Widget_ShoppingList_mEditablePrivateNotes_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ShoppingList.Widget_ShoppingList_C.BndEvt__Widget_ShoppingList_mEditablePublicNotes_K2Node_ComponentBoundEvent_7_OnMultiLineEditableTextChangedEvent__DelegateSignature
	 */
	struct UWidget_ShoppingList_C_BndEvt__Widget_ShoppingList_mEditablePublicNotes_K2Node_ComponentBoundEvent_7_OnMultiLineEditableTextChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Widget_ShoppingList.Widget_ShoppingList_C.BndEvt__Widget_ShoppingList_mProductList_K2Node_ComponentBoundEvent_14_OnItemIsHoveredChangedDynamic__DelegateSignature
	 */
	struct UWidget_ShoppingList_C_BndEvt__Widget_ShoppingList_mProductList_K2Node_ComponentBoundEvent_14_OnItemIsHoveredChangedDynamic__DelegateSignature_Params
	{
	public:
		class UObject*                                             Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsHovered;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ShoppingList.Widget_ShoppingList_C.ExecuteUbergraph_Widget_ShoppingList
	 */
	struct UWidget_ShoppingList_C_ExecuteUbergraph_Widget_ShoppingList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YBZO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_ShoppingList.Widget_ShoppingList_C.OnToDoListClosed__DelegateSignature
	 */
	struct UWidget_ShoppingList_C_OnToDoListClosed__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_ShoppingList.Widget_ShoppingList_C.OnToDoListOpen__DelegateSignature
	 */
	struct UWidget_ShoppingList_C_OnToDoListOpen__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
