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
	 * Function Widget_BuildMenu_RightClickMenu.Widget_BuildMenu_RightClickMenu_C.TryGetExisitingShoppingListObject
	 */
	struct UWidget_BuildMenu_RightClickMenu_C_TryGetExisitingShoppingListObject_Params
	{	};

	/**
	 * Function Widget_BuildMenu_RightClickMenu.Widget_BuildMenu_RightClickMenu_C.TryCreateMissingShoppingListObject
	 */
	struct UWidget_BuildMenu_RightClickMenu_C_TryCreateMissingShoppingListObject_Params
	{	};

	/**
	 * Function Widget_BuildMenu_RightClickMenu.Widget_BuildMenu_RightClickMenu_C.GetAmountToAddOrRemove
	 */
	struct UWidget_BuildMenu_RightClickMenu_C_GetAmountToAddOrRemove_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenu_RightClickMenu.Widget_BuildMenu_RightClickMenu_C.UpdateRemoveFromTodoListVisibility
	 */
	struct UWidget_BuildMenu_RightClickMenu_C_UpdateRemoveFromTodoListVisibility_Params
	{	};

	/**
	 * Function Widget_BuildMenu_RightClickMenu.Widget_BuildMenu_RightClickMenu_C.OnKeyUp
	 */
	struct UWidget_BuildMenu_RightClickMenu_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_BuildMenu_RightClickMenu.Widget_BuildMenu_RightClickMenu_C.OnKeyDown
	 */
	struct UWidget_BuildMenu_RightClickMenu_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_BuildMenu_RightClickMenu.Widget_BuildMenu_RightClickMenu_C.GetRemoveItemButtonVisibility
	 */
	struct UWidget_BuildMenu_RightClickMenu_C_GetRemoveItemButtonVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NTR7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_BuildMenu_RightClickMenu.Widget_BuildMenu_RightClickMenu_C.GetAmount
	 */
	struct UWidget_BuildMenu_RightClickMenu_C_GetAmount_Params
	{
	public:
		int32_t                                                    NumberRecipes;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenu_RightClickMenu.Widget_BuildMenu_RightClickMenu_C.GetNumberRecipesInShoppingList
	 */
	struct UWidget_BuildMenu_RightClickMenu_C_GetNumberRecipesInShoppingList_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_BuildMenu_RightClickMenu.Widget_BuildMenu_RightClickMenu_C.Construct
	 */
	struct UWidget_BuildMenu_RightClickMenu_C_Construct_Params
	{	};

	/**
	 * Function Widget_BuildMenu_RightClickMenu.Widget_BuildMenu_RightClickMenu_C.BndEvt__mAddToTodolistButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UWidget_BuildMenu_RightClickMenu_C_BndEvt__mAddToTodolistButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_BuildMenu_RightClickMenu.Widget_BuildMenu_RightClickMenu_C.BndEvt__mRemoveFromTodoList_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UWidget_BuildMenu_RightClickMenu_C_BndEvt__mRemoveFromTodoList_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_BuildMenu_RightClickMenu.Widget_BuildMenu_RightClickMenu_C.PreConstruct
	 */
	struct UWidget_BuildMenu_RightClickMenu_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenu_RightClickMenu.Widget_BuildMenu_RightClickMenu_C.OnShoppingListObjectRemoved
	 */
	struct UWidget_BuildMenu_RightClickMenu_C_OnShoppingListObjectRemoved_Params
	{
	public:
		class UFGShoppingListObject*                               shoppingListObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenu_RightClickMenu.Widget_BuildMenu_RightClickMenu_C.ExecuteUbergraph_Widget_BuildMenu_RightClickMenu
	 */
	struct UWidget_BuildMenu_RightClickMenu_C_ExecuteUbergraph_Widget_BuildMenu_RightClickMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenu_RightClickMenu.Widget_BuildMenu_RightClickMenu_C.UpdateWindowWidgetOffset__DelegateSignature
	 */
	struct UWidget_BuildMenu_RightClickMenu_C_UpdateWindowWidgetOffset__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
