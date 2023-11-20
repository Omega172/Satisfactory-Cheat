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
	 * WidgetBlueprintGeneratedClass BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C
	 * Size -> 0x0138 (FullSize[0x03B8] - InheritedSize[0x0280])
	 */
	class UBPW_BuildMenu_Browser_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidget_BuildMenu_InfoBox_C*                         BuildMenu_InfoBox;                                       // 0x0288(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_BuildMenu_SubCategoryButtons_Container_C*    mCategoryButtonsContainer;                               // 0x0290(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_GenericDropArea_C*                              mCategoryDropArea;                                       // 0x0298(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            mCategorySizeBox;                                        // 0x02A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Window_AlternateContentBackground_DarkMode_C* mInfoBackground;                                         // 0x02A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              mMouseHoverBlocker;                                      // 0x02B0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_InputBox_C*                                  mSearchbar;                                              // 0x02B8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWrapBox*                                            mSearchNew;                                              // 0x02C0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        mSubCategoriesContainer;                                 // 0x02C8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USpacer*                                             mSubCategoryBottomSpacer;                                // 0x02D0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            mSubcategoryOverlay;                                     // 0x02D8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Scrollbox_C*                                 Widget_Scrollbox;                                        // 0x02E0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Window_AlternateContentBackground_DarkMode_C* Widget_Window_AlternateContentBackground_DarkMode_C_1;   // 0x02E8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Window_ContentBackground_DarkMode_C*         Widget_Window_ContentBackground_DarkMode;                // 0x02F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnSearchTextChanged;                                     // 0x02F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnSearchTextComitted;                                    // 0x0308(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnSearchInputBoxFocusReceived;                           // 0x0318(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FTimerHandle                                        SearchResultHoveredTimerHandle;                          // 0x0328(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnDeselectFirstSearchResultIfOtherOptionIsHovered;       // 0x0330(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnSearchComittedEnter;                                   // 0x0340(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FText                                                mSearchHint;                                             // 0x0350(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		double                                                     mSubCategorySpacer;                                      // 0x0368(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnObjectDroppedInSubcategoryContainer;                   // 0x0370(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       mShowSearchbar;                                          // 0x0380(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_0AV7[0x7];                                   // 0x0381(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnObjectDroppedInCategoryContainer;                      // 0x0388(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       mIsMouseBlockerActive;                                   // 0x0398(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_L6KI[0x7];                                   // 0x0399(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           mCachedMousePosition;                                    // 0x03A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        mMouseBlockerTimer;                                      // 0x03B0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void MouseMoveChecker();
		void SetSearchBarVisibility(bool mShowSearchbar);
		void SetBlueprintRecipe(class UFGBlueprintDescriptor* blueprintDescriptor, const struct FBlueprintRecord& BlueprintRecord);
		void RemoveandReleaseAllChildsfromCategoryContainer();
		void ScrollToEnd();
		void SetSubCategoryBottomOffset(double mSubCategorySpacer);
		void ScrollToTop();
		double GetScrollPosition();
		void ScrollToPosition(bool AnimateScroll, double padding);
		void SetCustomisationRecipe(class UClass* CustomisationRecipe);
		void SetSearchHint(const class FText& mSearchText);
		void AnimateInfoBoxIcon();
		void SetInfoBoxCost(TArray<struct FItemAmount>* cost, bool TakeFromCentralStorage);
		void SetCustomIconWidget(class UWidget* Widget);
		void SetInfoBoxIcon(class UTexture2D* Texture);
		void SetInfoBoxDescription(const class FText& Text);
		void SetInfoBoxName(const class FText& InText);
		void SetVisibleInfoboxElements(bool Name, bool Descripction, bool StatsAndCost);
		void ClearCategories();
		void SetInfoBoxVisibility(bool IsVisible);
		void SetBuildRecipe(class UClass* recipe, TArray<class UClass*>* AvailableRecipes, class AFGBuildGun* BuildGun);
		void AddCategory(class UWidget* Widget);
		void SetIsMouseBlockerActive(bool IsActive);
		bool IsSearchHovered();
		class UWidget* GetSearchResultAt(int32_t Index);
		void AddSearchResult(class UWidget* Content);
		void InitSearch();
		void ClearAndHideSearchResults();
		void RemoveandReleaseAllChildsfromSubcategoryContainer();
		class UVerticalBoxSlot* AddSubcategoryButton(class UWidget* SubcategoryWidget);
		void SetSearchText(const class FText& InText);
		void ClearSearchText();
		void SetUserFocusToSearch();
		void PreConstruct(bool IsDesignTime);
		void BndEvt__mSearchBar_K2Node_ComponentBoundEvent_0_OnTextChanged__DelegateSignature(const class FText& Text);
		void BndEvt__mSearchBar_K2Node_ComponentBoundEvent_1_OnTextComitted__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void BndEvt__mSearchBar_K2Node_ComponentBoundEvent_2_OnInputBoxFocusReceived__DelegateSignature(const struct FFocusEvent& FocusEvent);
		void CheckSearchResultHover();
		void BndEvt__BPW_BuildMenu_Browser_Widget_Scrollbox_K2Node_ComponentBoundEvent_3_OnObjectDropped__DelegateSignature(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
		void BndEvt__BPW_BuildMenu_Browser_mCategoryDropArea_K2Node_ComponentBoundEvent_4_OnObjectDropped__DelegateSignature(class UBPW_GenericDropArea_C* Instigator, const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
		void ExecuteUbergraph_BPW_BuildMenu_Browser(int32_t EntryPoint);
		void OnObjectDroppedInCategoryContainer__DelegateSignature(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
		void OnObjectDroppedInSubcategoryContainer__DelegateSignature(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
		void OnSearchComittedEnter__DelegateSignature(class UWidget* FirstResultWidget);
		void OnDeselectFirstSearchResultIfOtherOptionIsHovered__DelegateSignature(class UWidget* FirstResultWidget);
		void OnSearchInputBoxFocusReceived__DelegateSignature(const struct FFocusEvent& FocusEvent);
		void OnSearchTextComitted__DelegateSignature(const class FText& Text, ETextCommit ComittMethod);
		void OnSearchTextChanged__DelegateSignature(const class FText& Text);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
