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
	 * Function BPW_ShoppingList_IngredientItem.BPW_ShoppingList_IngredientItem_C.SetIsToDoListOpen
	 */
	struct UBPW_ShoppingList_IngredientItem_C_SetIsToDoListOpen_Params
	{
	public:
		bool                                                       mIsTodoListOpen;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FP88[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_ShoppingList_IngredientItem.BPW_ShoppingList_IngredientItem_C.SetAmount
	 */
	struct UBPW_ShoppingList_IngredientItem_C_SetAmount_Params
	{
	public:
		struct FItemAmount                                         mAmount;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BPW_ShoppingList_IngredientItem.BPW_ShoppingList_IngredientItem_C.BP_OnEntryReleased
	 */
	struct UBPW_ShoppingList_IngredientItem_C_BP_OnEntryReleased_Params
	{	};

	/**
	 * Function BPW_ShoppingList_IngredientItem.BPW_ShoppingList_IngredientItem_C.BP_OnItemExpansionChanged
	 */
	struct UBPW_ShoppingList_IngredientItem_C_BP_OnItemExpansionChanged_Params
	{
	public:
		bool                                                       bIsExpanded;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ShoppingList_IngredientItem.BPW_ShoppingList_IngredientItem_C.BP_OnItemSelectionChanged
	 */
	struct UBPW_ShoppingList_IngredientItem_C_BP_OnItemSelectionChanged_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ShoppingList_IngredientItem.BPW_ShoppingList_IngredientItem_C.OnListItemObjectSet
	 */
	struct UBPW_ShoppingList_IngredientItem_C_OnListItemObjectSet_Params
	{
	public:
		class UObject*                                             ListItemObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ShoppingList_IngredientItem.BPW_ShoppingList_IngredientItem_C.ExecuteUbergraph_BPW_ShoppingList_IngredientItem
	 */
	struct UBPW_ShoppingList_IngredientItem_C_ExecuteUbergraph_BPW_ShoppingList_IngredientItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
