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
	 * Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.CheckIfShoppingListObjectIsRelevant
	 */
	struct UWidget_ShoppingListButton_C_CheckIfShoppingListObjectIsRelevant_Params
	{
	public:
		class UFGShoppingListObject*                               InShoppingListObject;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsRelevant;                                              // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OXB5[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.PlaySFXOnClick
	 */
	struct UWidget_ShoppingListButton_C_PlaySFXOnClick_Params
	{	};

	/**
	 * Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.SetShoppingListObjectFromObject
	 */
	struct UWidget_ShoppingListButton_C_SetShoppingListObjectFromObject_Params
	{
	public:
		class UObject*                                             ShoppingListDataObject;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.GetAmount
	 */
	struct UWidget_ShoppingListButton_C_GetAmount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.TrySetupMissingShoppingListObject
	 */
	struct UWidget_ShoppingListButton_C_TrySetupMissingShoppingListObject_Params
	{	};

	/**
	 * Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.SetShoppingListObjectFromClass
	 */
	struct UWidget_ShoppingListButton_C_SetShoppingListObjectFromClass_Params
	{
	public:
		class UClass*                                              ShoppingListDataClass;                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.UpdateShoppinglistVisibility
	 */
	struct UWidget_ShoppingListButton_C_UpdateShoppinglistVisibility_Params
	{	};

	/**
	 * Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.OnUnhoverShoppingList
	 */
	struct UWidget_ShoppingListButton_C_OnUnhoverShoppingList_Params
	{	};

	/**
	 * Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.OnHoverShoppingList
	 */
	struct UWidget_ShoppingListButton_C_OnHoverShoppingList_Params
	{	};

	/**
	 * Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.DoesImplementAndIsValid
	 */
	struct UWidget_ShoppingListButton_C_DoesImplementAndIsValid_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4QLK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APlayerState*                                        PlayerState;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.OnKeyDown
	 */
	struct UWidget_ShoppingListButton_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.GetInputNumberTooltip
	 */
	struct UWidget_ShoppingListButton_C_GetInputNumberTooltip_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.GetButtonTooltip
	 */
	struct UWidget_ShoppingListButton_C_GetButtonTooltip_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.Set Additional Info Visibility
	 */
	struct UWidget_ShoppingListButton_C_SetAdditionalInfoVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.UpdateAmountText
	 */
	struct UWidget_ShoppingListButton_C_UpdateAmountText_Params
	{	};

	/**
	 * Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.BndEvt__mInputNumberToAdd_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct UWidget_ShoppingListButton_C_BndEvt__mInputNumberToAdd_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.Construct
	 */
	struct UWidget_ShoppingListButton_C_Construct_Params
	{	};

	/**
	 * Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.Event Update Shopping List
	 */
	struct UWidget_ShoppingListButton_C_EventUpdateShoppingList_Params
	{
	public:
		class UFGShoppingListObject*                               shoppingListObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.Destruct
	 */
	struct UWidget_ShoppingListButton_C_Destruct_Params
	{	};

	/**
	 * Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.BndEvt__Remove1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWidget_ShoppingListButton_C_BndEvt__Remove1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.BndEvt__Widget_ShoppingListButton_mInputNumberToAdd_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature
	 */
	struct UWidget_ShoppingListButton_C_BndEvt__Widget_ShoppingListButton_mInputNumberToAdd_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.BndEvt__Add1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWidget_ShoppingListButton_C_BndEvt__Add1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.OnShoppingListObjectRemoved
	 */
	struct UWidget_ShoppingListButton_C_OnShoppingListObjectRemoved_Params
	{
	public:
		class UFGShoppingListObject*                               shoppingListObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.ExecuteUbergraph_Widget_ShoppingListButton
	 */
	struct UWidget_ShoppingListButton_C_ExecuteUbergraph_Widget_ShoppingListButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ShoppingListButton.Widget_ShoppingListButton_C.OnShortcutRemapClicked__DelegateSignature
	 */
	struct UWidget_ShoppingListButton_C_OnShortcutRemapClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    shortcutIndex;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_723E[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              newRecipe;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
