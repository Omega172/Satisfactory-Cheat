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
	 * WidgetBlueprintGeneratedClass Widget_Codex_Container.Widget_Codex_Container_C
	 * Size -> 0x0185 (FullSize[0x04D8] - InheritedSize[0x0353])
	 */
	class UWidget_Codex_Container_C : public UWidget_UseableBase_C
	{
	public:
		unsigned char                                              UnknownData_04LC[0x5];                                   // 0x0353(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0358(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidget_Window_DarkMode_C*                           BPW_DarkMode;                                            // 0x0360(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_SlidingTabs_C*                               BPW_SlidingTabs;                                         // 0x0368(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Scrollbox_C*                                 ButtonScrollbox;                                         // 0x0370(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              DivHorizontal;                                           // 0x0378(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_5;                                                 // 0x0380(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_ListButton_C*                                mCategoryBuildings;                                      // 0x0388(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_ListButton_C*                                mCategoryEquipment;                                      // 0x0390(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_ListButton_C*                                mCategoryParts;                                          // 0x0398(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_ListButton_C*                                mCategoryVehicles;                                       // 0x03A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        MessagesVbox;                                            // 0x03A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          mIconDescription;                                        // 0x03B0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          mIconTitle;                                              // 0x03B8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              mItemIcon;                                               // 0x03C0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        mItemInfo;                                               // 0x03C8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        mItemList;                                               // 0x03D0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Scrollbox_C*                                 mItemScrollbox;                                          // 0x03D8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        mItemSearchList;                                         // 0x03E0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_StandardButton_C*                            mMarkAllAsReadButton;                                    // 0x03E8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Codex_Message_C*                             mMessage;                                                // 0x03F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        mRecipeIngredientList;                                   // 0x03F8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            mRecipeIngredientTitle;                                  // 0x0400(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        mRecipeProductList;                                      // 0x0408(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_InputBox_C*                                  mSearchbar;                                              // 0x0410(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Scrollbox_C*                                 mSearchContainer;                                        // 0x0418(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Scrollbox_C*                                 Widget_Scrollbox;                                        // 0x0420(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Scrollbox_C*                                 Widget_Scrollbox_C_2;                                    // 0x0428(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Window_ContentBackground_DarkMode_C*         Widget_Window_ContentBackground_DarkMode_2;              // 0x0430(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       mMessageIsClicked;                                       // 0x0438(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZZHE[0x7];                                   // 0x0439(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UWidget_Codex_MessageButton_C*>               mButtons;                                                // 0x0440(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class UClass*                                              mSelectedMessage;                                        // 0x0450(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UObject*                                             mActiveButton;                                           // 0x0458(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		EMessageType                                               mCurrentTab;                                             // 0x0460(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PYGT[0x7];                                   // 0x0461(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      mParts;                                                  // 0x0468(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UClass*>                                      mSearchResults;                                          // 0x0478(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UClass*>                                      mCurrentList;                                            // 0x0488(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       mShowRecipeIngredientList;                               // 0x0498(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7600[0x7];                                   // 0x0499(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      mEquipment;                                              // 0x04A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UClass*>                                      mBuildings;                                              // 0x04B0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UClass*>                                      mVehicles;                                               // 0x04C0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UClass*                                              mOpenOnRecipe;                                           // 0x04D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void UpdateDirectory(class UClass* itemDescriptor);
		void GetClassCategory(class UClass* itemDescriptor, TArray<class UClass*>* Category, int32_t* CategoryIndex);
		void PopulateSearchResults(const class FText& InText);
		void UpdateItemInfo(class UClass* product, bool UpdateDirectory);
		void SetAllItemsAndBuildings();
		void GenerateReceipes(TArray<class UClass*>* InRecipes);
		void SelectButtonWithMessage(class UClass* InMessage);
		void CheckShouldOpenMessage();
		void PopulateList();
		void GetActiveTabFeedback();
		ESlateVisibility GetMessageVisiblity();
		void Construct();
		void CloseCodex();
		void MarkAllAsRead();
		void OnRecipeButtonClicked(int32_t Index, class UWidget_ListButton_C* ListButton);
		void BndEvt__mSearchBar_K2Node_ComponentBoundEvent_1_OnTextChanged__DelegateSignature(const class FText& Text);
		void OnSearchResultClicked(int32_t Index, class UWidget_ListButton_C* ListButton);
		void BndEvt__Widget_ListButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(int32_t Index, class UWidget_ListButton_C* ListButton);
		void BndEvt__Widget_ListButton_C_0_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(int32_t Index, class UWidget_ListButton_C* ListButton);
		void BndEvt__Widget_ListButton_C_1_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(int32_t Index, class UWidget_ListButton_C* ListButton);
		void BndEvt__mCategoryVehicles_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(int32_t Index, class UWidget_ListButton_C* ListButton);
		void BndEvt__BPW_DarkMode_K2Node_ComponentBoundEvent_6_OnTabButtonClicked__DelegateSignature(int32_t ButtonIndex);
		void ExecuteUbergraph_Widget_Codex_Container(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
