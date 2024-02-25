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
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C
	 * Size -> 0x0068 (FullSize[0x02E8] - InheritedSize[0x0280])
	 */
	class UBPW_ShoppingList_ProductItem_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             Button_80;                                               // 0x0288(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             mButtonAdd;                                              // 0x0290(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              mButtonIconAdd;                                          // 0x0298(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              mButtonIconRemove;                                       // 0x02A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             mButtonRemove;                                           // 0x02A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        mProductEntryContainer;                                  // 0x02B0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          mProductEntryTitle;                                      // 0x02B8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       mIsTodoListOpen;                                         // 0x02C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7QGE[0x7];                                   // 0x02C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UBPW_ShoppingList_ProductItem_Entry_C*>       mProductEntries;                                         // 0x02C8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class UFGShoppingListObject*                               mShoppingListObject;                                     // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UFGShoppingListComponent*                            mShoppingListComponent;                                  // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash

	public:
		void OnEntryAmountChanged(class UBPW_ShoppingList_ProductItem_Entry_C* Instigator, int32_t NewAmount);
		void OnObjectUpdated(class UFGShoppingListObject* shoppingListObject);
		void SetProductEntryDataFromObject(class UFGShoppingListObject* shoppingListObject);
		void SetProductEntryData(class UBPW_ShoppingList_ProductItem_Entry_C* ProductEntry, const class FText& mName, int32_t mAmount);
		void AddProductEntry();
		void RemoveProductEntry(class UBPW_ShoppingList_ProductItem_Entry_C* ProductEntry);
		void ConsolidateProductAmount(int32_t Amount);
		void UpdateRecipe(class UFGShoppingListObject_Class* ShoppingListObjectClass);
		void SetIsToDoListOpen(bool mIsTodoListOpen);
		void BP_OnEntryReleased();
		void BP_OnItemExpansionChanged(bool bIsExpanded);
		void BP_OnItemSelectionChanged(bool bIsSelected);
		void OnListItemObjectSet(class UObject* ListItemObject);
		void BndEvt__BPW_ShoppingList_ProductItem_mButtonAdd_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__BPW_ShoppingList_ProductItem_mButtonRemove_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void BndEvt__BPW_ShoppingList_ProductItem_mButtonAdd_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__BPW_ShoppingList_ProductItem_mButtonAdd_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__BPW_ShoppingList_ProductItem_mButtonRemove_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__BPW_ShoppingList_ProductItem_mButtonRemove_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
		void ExecuteUbergraph_BPW_ShoppingList_ProductItem(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
