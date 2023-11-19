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
	 * WidgetBlueprintGeneratedClass BPW_Options.BPW_Options_C
	 * Size -> 0x0155 (FullSize[0x0420] - InheritedSize[0x02CB])
	 */
	class UBPW_Options_C : public UBP_MenuBase_C
	{
	public:
		unsigned char                                              UnknownData_KXXL[0x5];                                   // 0x02CB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    ShowResetApplyButtons;                                   // 0x02D8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidget_FrontEnd_Button_C*                           mApply;                                                  // 0x02E0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      mOptionDescriptionText;                                  // 0x02E8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          mOptionName;                                             // 0x02F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              mOptionPreviewImage;                                     // 0x02F8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        mOptionsMenu;                                            // 0x0300(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        mOptionsVBox;                                            // 0x0308(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_FrontEnd_Button_C*                           mReset;                                                  // 0x0310(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Scrollbox_C*                                 mScrollbox;                                              // 0x0318(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableText*                                       mSearchbar;                                              // 0x0320(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFGWidgetSwitcher*                                   mSwitcher;                                               // 0x0328(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      mTooltip;                                                // 0x0330(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              mTooltipDivider;                                         // 0x0338(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_SubMenuBackground_C*                         Widget_SubMenuBackground;                                // 0x0340(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_SubMenuBackground_C*                         Widget_SubMenuBackground_88;                             // 0x0348(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnBackClicked;                                           // 0x0350(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TMap<class FString, class FText>                           mLanguageData;                                           // 0x0360(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		class UBPW_EnhancedKeyBindContainer_C*                     mKeybindView;                                            // 0x03B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnLanguageMapPopulated;                                  // 0x03B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UFGWidgetSwitcher*                                   CachedWidgetSwitcher;                                    // 0x03C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CachedNewWidgetSwitcherIndex;                            // 0x03D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_C872[0x4];                                   // 0x03D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFGButtonWidget*                                     CachedWidgetSwitcherButton;                              // 0x03D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		bool                                                       mNetworkQualityChanged;                                  // 0x03E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_M2KW[0x7];                                   // 0x03E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FUserSettingCategoryMapping>                 mCachedUserSettings;                                     // 0x03E8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class UClass*                                              mSelectedCategory;                                       // 0x03F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TArray<class UBPW_SubCatHdr_Options_C*>                    mSubCatHeaders;                                          // 0x0400(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class UBPW_EnhancedKeyBindContainer_C*>             mKeybindContainers;                                      // 0x0410(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		bool OverrideSwitching(class UFGButtonWidget* buttonWidget);
		void ClearSelection();
		void OnMenuClose(bool* CancelParentFunction);
		void OnSearch(const class FText& SearchResult);
		void OnOptionRowUnhovered(class UFGDynamicOptionsRow* optionRow);
		void OnOptionRowHovered(class UFGDynamicOptionsRow* optionRow);
		void BindToHoveredUnhovered(class UFGDynamicOptionsRow* optionRow);
		void OnOptionCategoryClicked(int32_t Index);
		void GetOptionsMenuLanguageEntries(TMap<class FString, class FText>* LanguageEntries);
		void HandleUnsavedChanges(bool Revert);
		void GetActiveCategory(EOptionCategory* OptionCategory);
		void ApplyAllDynamicOptionsRows();
		void UpdateAllDynamicOptionRows();
		void SetupOptionCategories();
		void SetupSubmenuOptionsForSpawnAnim(TArray<class UUserWidget*>* ActiveOptions);
		void OnDefaultKeybindPressed();
		void BndEvt__Widget_FrontEnd_Button_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
		void BndEvt__Widget_FrontEnd_Button_C_0_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
		void OnMenuExit(class UWidget* prevMenu, bool noAnimation);
		void CheckResolutionChanges();
		void ResolutionChangedAccepted(bool confirm);
		void ShowConfirmResetPopup();
		void OpenRequireRestartIfRequired();
		void ApplyChanges(bool confirm);
		void Destruct();
		void CheckUnsavedChanges();
		void OnEscape();
		void ResetActiveSettings(bool confirm);
		void ShowConfirmChangesPopup();
		void UpdateTooltipAndResetApplyVisibility();
		void BndEvt__BPW_Options_mSearchbar_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature(const class FText& Text);
		void Construct();
		void ExecuteUbergraph_BPW_Options(int32_t EntryPoint);
		void OnLanguageMapPopulated__DelegateSignature();
		void OnBackClicked__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
