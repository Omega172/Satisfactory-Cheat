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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_PlayerState.BP_PlayerState_C
	 * Size -> 0x0044 (FullSize[0x07F4] - InheritedSize[0x07B0])
	 */
	class ABP_PlayerState_C : public AFGPlayerState
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x07B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x07B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             ReceivedChatMessage;                                     // 0x07C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<struct FLinearColor>                                mSavedColorPickerColors;                                 // 0x07D0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, SaveGame
		TArray<struct FRecipeAmountStruct>                         mShoppingList;                                           // 0x07E0(0x0010) Edit, BlueprintVisible, Net, DisableEditOnInstance, SaveGame, RepNotify
		int32_t                                                    mLastSchematicTierInUI;                                  // 0x07F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ClearShoppingData(bool* Succes);
		void SetNumInShoppingList(class UClass* recipe, int32_t Amount, bool* Success);
		void RemoveFromShoppingList(class UClass* recipe, int32_t Amount, bool* Success);
		void AddToShoppingList(class UClass* recipe, int32_t Amount, bool* Success);
		void GetShippingListData(TArray<struct FRecipeAmountStruct>* ShippingList);
		TArray<struct FShoppingListRecipeEntry> GetAndClearShoppingListForMigration();
		void CheckIfShopHasBeenOpened();
		void ClearShoppingList();
		void ShoppingListUpdated();
		void OnRep_mShoppingList();
		int32_t GetShoppingListSortIndex(struct FRecipeAmountStruct* RecipeAmountStruct);
		void SortShoppingList();
		void SetNumRecipeInShoppingList(class UClass* recipe, int32_t NumRecipes);
		void PonderUpdatingShoppingList(class UClass* InputPin);
		void AddRecipeToShoppingList(class UClass* recipe, int32_t NumRecipes);
		void RemoveRecipeFromShoppingList(class UClass* recipe, int32_t NumRecipes);
		void ReceiveBeginPlay();
		void BroadcastChatMessage(const class FText& ChatMessageIn);
		void ReceiveChatMessage(const class FText& ChatMessageIn, const class FText& ChatSender);
		void OnBuildableConstructed(class UClass* itemDescriptor);
		void Server_AddRecipeToShoppingList(class UClass* recipe, int32_t NumRecipes);
		void Server_SetNumRecipesInShoppingList(class UClass* recipe, int32_t NumRecipes);
		void Server_RemoveRecupeFromShoppingList(class UClass* recipe, int32_t NumRecipes);
		void ReceiveTick(float DeltaSeconds);
		void Server_ClearShoppingList();
		void ReceiveCopyProperties(class APlayerState* NewPlayerState);
		void ExecuteUbergraph_BP_PlayerState(int32_t EntryPoint);
		void ReceivedChatMessage__DelegateSignature(const class FText& ChatSender, const class FText& chatMessage);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
