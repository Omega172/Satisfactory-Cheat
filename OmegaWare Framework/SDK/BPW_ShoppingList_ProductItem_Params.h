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
	 * Function BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C.OnEntryAmountChanged
	 */
	struct UBPW_ShoppingList_ProductItem_C_OnEntryAmountChanged_Params
	{
	public:
		class UBPW_ShoppingList_ProductItem_Entry_C*               Instigator;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NewAmount;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9UU4[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C.OnObjectUpdated
	 */
	struct UBPW_ShoppingList_ProductItem_C_OnObjectUpdated_Params
	{
	public:
		class UFGShoppingListObject*                               shoppingListObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C.SetProductEntryDataFromObject
	 */
	struct UBPW_ShoppingList_ProductItem_C_SetProductEntryDataFromObject_Params
	{
	public:
		class UFGShoppingListObject*                               shoppingListObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C.SetProductEntryData
	 */
	struct UBPW_ShoppingList_ProductItem_C_SetProductEntryData_Params
	{
	public:
		class UBPW_ShoppingList_ProductItem_Entry_C*               ProductEntry;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class FText                                                mName;                                                   // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    mAmount;                                                 // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C.AddProductEntry
	 */
	struct UBPW_ShoppingList_ProductItem_C_AddProductEntry_Params
	{	};

	/**
	 * Function BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C.RemoveProductEntry
	 */
	struct UBPW_ShoppingList_ProductItem_C_RemoveProductEntry_Params
	{
	public:
		class UBPW_ShoppingList_ProductItem_Entry_C*               ProductEntry;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C.ConsolidateProductAmount
	 */
	struct UBPW_ShoppingList_ProductItem_C_ConsolidateProductAmount_Params
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C.UpdateRecipe
	 */
	struct UBPW_ShoppingList_ProductItem_C_UpdateRecipe_Params
	{
	public:
		class UFGShoppingListObject_Class*                         ShoppingListObjectClass;                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C.SetIsToDoListOpen
	 */
	struct UBPW_ShoppingList_ProductItem_C_SetIsToDoListOpen_Params
	{
	public:
		bool                                                       mIsTodoListOpen;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C.BP_OnEntryReleased
	 */
	struct UBPW_ShoppingList_ProductItem_C_BP_OnEntryReleased_Params
	{	};

	/**
	 * Function BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C.BP_OnItemExpansionChanged
	 */
	struct UBPW_ShoppingList_ProductItem_C_BP_OnItemExpansionChanged_Params
	{
	public:
		bool                                                       bIsExpanded;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C.BP_OnItemSelectionChanged
	 */
	struct UBPW_ShoppingList_ProductItem_C_BP_OnItemSelectionChanged_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C.OnListItemObjectSet
	 */
	struct UBPW_ShoppingList_ProductItem_C_OnListItemObjectSet_Params
	{
	public:
		class UObject*                                             ListItemObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C.BndEvt__BPW_ShoppingList_ProductItem_mButtonAdd_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_ShoppingList_ProductItem_C_BndEvt__BPW_ShoppingList_ProductItem_mButtonAdd_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C.BndEvt__BPW_ShoppingList_ProductItem_mButtonRemove_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_ShoppingList_ProductItem_C_BndEvt__BPW_ShoppingList_ProductItem_mButtonRemove_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C.PreConstruct
	 */
	struct UBPW_ShoppingList_ProductItem_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C.Construct
	 */
	struct UBPW_ShoppingList_ProductItem_C_Construct_Params
	{	};

	/**
	 * Function BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C.BndEvt__BPW_ShoppingList_ProductItem_mButtonAdd_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBPW_ShoppingList_ProductItem_C_BndEvt__BPW_ShoppingList_ProductItem_mButtonAdd_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C.BndEvt__BPW_ShoppingList_ProductItem_mButtonAdd_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBPW_ShoppingList_ProductItem_C_BndEvt__BPW_ShoppingList_ProductItem_mButtonAdd_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C.BndEvt__BPW_ShoppingList_ProductItem_mButtonRemove_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBPW_ShoppingList_ProductItem_C_BndEvt__BPW_ShoppingList_ProductItem_mButtonRemove_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C.BndEvt__BPW_ShoppingList_ProductItem_mButtonRemove_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBPW_ShoppingList_ProductItem_C_BndEvt__BPW_ShoppingList_ProductItem_mButtonRemove_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C.ExecuteUbergraph_BPW_ShoppingList_ProductItem
	 */
	struct UBPW_ShoppingList_ProductItem_C_ExecuteUbergraph_BPW_ShoppingList_ProductItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
