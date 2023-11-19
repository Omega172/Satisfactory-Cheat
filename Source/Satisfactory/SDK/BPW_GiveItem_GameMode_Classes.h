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
	 * WidgetBlueprintGeneratedClass BPW_GiveItem_GameMode.BPW_GiveItem_GameMode_C
	 * Size -> 0x00E9 (FullSize[0x0379] - InheritedSize[0x0290])
	 */
	class UBPW_GiveItem_GameMode_C : public UFGPopupWidgetContent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0290(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBPW_OptionsCheckbox_C*                              BPW_OptionsCheckbox;                                     // 0x0298(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UListView*                                           mListOfItems;                                            // 0x02A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_InputBox_C*                                  mSearchbar;                                              // 0x02A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TMap<class UBP_GiveItem_Category_C*, struct FStruct_GiveItemObjects> mSortedObjects;                                          // 0x02B0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<E_GiveItemCategories, class UBP_GiveItem_Category_C*> mCategories;                                             // 0x0300(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<E_GiveItemCategories>                               mCollapsedCategories;                                    // 0x0350(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                mPopUpText;                                              // 0x0360(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       mIsSearchFocused;                                        // 0x0378(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void TryEnableCreativeMode();
		struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void SetSearchbarUnfocused();
		void SetSearchbarFocused();
		bool GetShouldOkayBeEnabled();
		void GetNotificationNoSpace(bool HasNoSpace);
		void SetCategoryVisibility(E_GiveItemCategories Category, bool isCollapsed);
		void OnSearchCreateResults(const class FText& mTextSearch);
		void GiveItems(const struct FItemAmount& Item);
		void AddObjectsToCategory(E_GiveItemCategories Category, TArray<class UBP_GiveItemListObject_C*>* UncatgorizedObjects, TArray<class UObject*>* AllListObjects);
		void CreateCategories();
		void PopulateItems();
		void BndEvt__BPW_GiveItem_GameMode_mListOfItems_K2Node_ComponentBoundEvent_5_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item);
		void BndEvt__BPW_GiveItem_GameMode_mSearchbar_K2Node_ComponentBoundEvent_2_OnTextComitted__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void Construct();
		void BndEvt__BPW_GiveItem_GameMode_mSearchbar_K2Node_ComponentBoundEvent_4_OnTextChanged__DelegateSignature(const class FText& Text);
		void ExecuteUbergraph_BPW_GiveItem_GameMode(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
