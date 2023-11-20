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
	 * Function BP_PlayerState.BP_PlayerState_C.ClearShoppingData
	 */
	struct ABP_PlayerState_C_ClearShoppingData_Params
	{
	public:
		bool                                                       Succes;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerState.BP_PlayerState_C.SetNumInShoppingList
	 */
	struct ABP_PlayerState_C_SetNumInShoppingList_Params
	{
	public:
		class UClass*                                              recipe;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Amount;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerState.BP_PlayerState_C.RemoveFromShoppingList
	 */
	struct ABP_PlayerState_C_RemoveFromShoppingList_Params
	{
	public:
		class UClass*                                              recipe;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Amount;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerState.BP_PlayerState_C.AddToShoppingList
	 */
	struct ABP_PlayerState_C_AddToShoppingList_Params
	{
	public:
		class UClass*                                              recipe;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Amount;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerState.BP_PlayerState_C.GetShippingListData
	 */
	struct ABP_PlayerState_C_GetShippingListData_Params
	{
	public:
		TArray<struct FRecipeAmountStruct>                         ShippingList;                                            // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_PlayerState.BP_PlayerState_C.GetAndClearShoppingListForMigration
	 */
	struct ABP_PlayerState_C_GetAndClearShoppingListForMigration_Params
	{
	public:
		TArray<struct FShoppingListRecipeEntry>                    ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_PlayerState.BP_PlayerState_C.CheckIfShopHasBeenOpened
	 */
	struct ABP_PlayerState_C_CheckIfShopHasBeenOpened_Params
	{	};

	/**
	 * Function BP_PlayerState.BP_PlayerState_C.ClearShoppingList
	 */
	struct ABP_PlayerState_C_ClearShoppingList_Params
	{	};

	/**
	 * Function BP_PlayerState.BP_PlayerState_C.ShoppingListUpdated
	 */
	struct ABP_PlayerState_C_ShoppingListUpdated_Params
	{	};

	/**
	 * Function BP_PlayerState.BP_PlayerState_C.OnRep_mShoppingList
	 */
	struct ABP_PlayerState_C_OnRep_mShoppingList_Params
	{	};

	/**
	 * Function BP_PlayerState.BP_PlayerState_C.GetShoppingListSortIndex
	 */
	struct ABP_PlayerState_C_GetShoppingListSortIndex_Params
	{
	public:
		struct FRecipeAmountStruct                                 RecipeAmountStruct;                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerState.BP_PlayerState_C.SortShoppingList
	 */
	struct ABP_PlayerState_C_SortShoppingList_Params
	{	};

	/**
	 * Function BP_PlayerState.BP_PlayerState_C.SetNumRecipeInShoppingList
	 */
	struct ABP_PlayerState_C_SetNumRecipeInShoppingList_Params
	{
	public:
		class UClass*                                              recipe;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NumRecipes;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerState.BP_PlayerState_C.PonderUpdatingShoppingList
	 */
	struct ABP_PlayerState_C_PonderUpdatingShoppingList_Params
	{
	public:
		class UClass*                                              InputPin;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerState.BP_PlayerState_C.AddRecipeToShoppingList
	 */
	struct ABP_PlayerState_C_AddRecipeToShoppingList_Params
	{
	public:
		class UClass*                                              recipe;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NumRecipes;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VVLK[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PlayerState.BP_PlayerState_C.RemoveRecipeFromShoppingList
	 */
	struct ABP_PlayerState_C_RemoveRecipeFromShoppingList_Params
	{
	public:
		class UClass*                                              recipe;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NumRecipes;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerState.BP_PlayerState_C.ReceiveBeginPlay
	 */
	struct ABP_PlayerState_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_PlayerState.BP_PlayerState_C.BroadcastChatMessage
	 */
	struct ABP_PlayerState_C_BroadcastChatMessage_Params
	{
	public:
		class FText                                                ChatMessageIn;                                           // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_PlayerState.BP_PlayerState_C.ReceiveChatMessage
	 */
	struct ABP_PlayerState_C_ReceiveChatMessage_Params
	{
	public:
		class FText                                                ChatMessageIn;                                           // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                ChatSender;                                              // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_PlayerState.BP_PlayerState_C.OnBuildableConstructed
	 */
	struct ABP_PlayerState_C_OnBuildableConstructed_Params
	{
	public:
		class UClass*                                              itemDescriptor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerState.BP_PlayerState_C.Server_AddRecipeToShoppingList
	 */
	struct ABP_PlayerState_C_Server_AddRecipeToShoppingList_Params
	{
	public:
		class UClass*                                              recipe;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NumRecipes;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerState.BP_PlayerState_C.Server_SetNumRecipesInShoppingList
	 */
	struct ABP_PlayerState_C_Server_SetNumRecipesInShoppingList_Params
	{
	public:
		class UClass*                                              recipe;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NumRecipes;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerState.BP_PlayerState_C.Server_RemoveRecupeFromShoppingList
	 */
	struct ABP_PlayerState_C_Server_RemoveRecupeFromShoppingList_Params
	{
	public:
		class UClass*                                              recipe;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NumRecipes;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerState.BP_PlayerState_C.ReceiveTick
	 */
	struct ABP_PlayerState_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerState.BP_PlayerState_C.Server_ClearShoppingList
	 */
	struct ABP_PlayerState_C_Server_ClearShoppingList_Params
	{	};

	/**
	 * Function BP_PlayerState.BP_PlayerState_C.ReceiveCopyProperties
	 */
	struct ABP_PlayerState_C_ReceiveCopyProperties_Params
	{
	public:
		class APlayerState*                                        NewPlayerState;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerState.BP_PlayerState_C.ExecuteUbergraph_BP_PlayerState
	 */
	struct ABP_PlayerState_C_ExecuteUbergraph_BP_PlayerState_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_75N0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PlayerState.BP_PlayerState_C.ReceivedChatMessage__DelegateSignature
	 */
	struct ABP_PlayerState_C_ReceivedChatMessage__DelegateSignature_Params
	{
	public:
		class FText                                                ChatSender;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                chatMessage;                                             // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
