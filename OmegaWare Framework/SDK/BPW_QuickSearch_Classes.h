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
	 * WidgetBlueprintGeneratedClass BPW_QuickSearch.BPW_QuickSearch_C
	 * Size -> 0x00B2 (FullSize[0x039A] - InheritedSize[0x02E8])
	 */
	class UBPW_QuickSearch_C : public UFGInteractWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02E8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             mCloseButton;                                            // 0x02F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             mFocusCatcher;                                           // 0x02F8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          mMathResult;                                             // 0x0300(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFGEditableText*                                     mSearchField;                                            // 0x0308(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        mSearchResultsContainer;                                 // 0x0310(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Window_ContentBackground_DarkMode_C*         Widget_Window_ContentBackground_DarkMode;                // 0x0318(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class UClass*>                                      mBuildings;                                              // 0x0320(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UClass*>                                      mParts;                                                  // 0x0330(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UClass*>                                      mProducts;                                               // 0x0340(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FTimerHandle                                        mSearchDelayHandle;                                      // 0x0350(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class FText                                                mSearchWords;                                            // 0x0358(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FStruct_QuickSearchResult>                   mSearchResults;                                          // 0x0370(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    mSelectedIndex;                                          // 0x0380(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    mMaxAmountOfResults;                                     // 0x0384(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FString>                                      mMathSymbols;                                            // 0x0388(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       mAreBlueprintsUnlocked;                                  // 0x0398(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mMouseIsDown;                                            // 0x0399(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnBlueprintSelected(class UFGBlueprintDescriptor* Blueprint);
		void OpenQuickSearch();
		void CloseQuickSearch();
		void SetQuickSearchVisibility(bool IsVisibile);
		void GenerateMathAnswer(const class FText& mSearchWords);
		bool IsMathExpression(const class FText& mSearchWords);
		void OnPartSelected(class UClass* product);
		void OnBuildingSelected(class UClass* product);
		void OnIndexClicked(int32_t Index, class UWidget_ListButton_C* ListButton);
		void SetSelectedIndex(int32_t NewSelectedIndex);
		struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void CreateSearchResultList(const class FText& SearchWords);
		void GenerateSearchResults(const class FText& SearchWords);
		void InitAllRecipes();
		void BndEvt__FGEditableText_357_K2Node_ComponentBoundEvent_3_OnEditableTextChangedEvent__DelegateSignature(const class FText& Text);
		void BndEvt__BPW_QuickSearch_mCloseButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__BPW_QuickSearch_Button_101_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void ExecuteUbergraph_BPW_QuickSearch(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
