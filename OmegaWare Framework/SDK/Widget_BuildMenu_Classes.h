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
	 * WidgetBlueprintGeneratedClass Widget_BuildMenu.Widget_BuildMenu_C
	 * Size -> 0x0165 (FullSize[0x04B8] - InheritedSize[0x0353])
	 */
	class UWidget_BuildMenu_C : public UWidget_UseableBase_C
	{
	public:
		unsigned char                                              UnknownData_XUKG[0x5];                                   // 0x0353(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0358(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBPW_BlueprintMenu_C*                                BPW_BlueprintMenu;                                       // 0x0360(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_Customiser_C*                                   BPW_Customiser;                                          // 0x0368(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_BuildMenu_Browser_C*                            mBrowser_Builder;                                        // 0x0370(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            mPopupContainer;                                         // 0x0378(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_MouseMoveChecker_C*                          Widget_MouseMoveChecker;                                 // 0x0380(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_SlidingTabs_C*                               Widget_SlidingTabs;                                      // 0x0388(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Window_DarkMode_C*                           Widget_Window_DarkMode;                                  // 0x0390(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class AFGBuildGun*                                         mOwningBuildGun;                                         // 0x0398(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		TArray<class UClass*>                                      mAvailableRecipes;                                       // 0x03A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnClicked;                                               // 0x03B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UClass*                                              mSelectedBuildCategory;                                  // 0x03C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UClass*                                              mHoveredRecipe;                                          // 0x03C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UWidget_BuildMenuRecipeButton_C*                     mHoveredRecipeButton;                                    // 0x03D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UObject*                                             mHoveredDismantleButton;                                 // 0x03D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TArray<class UWidget_BuildMenuRecipeButton_C*>             mBuildingWidgets;                                        // 0x03E0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class UWidget_ShoppingList_C*                              mShoppingList;                                           // 0x03F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UWidget_BuildMenu_CategoryButton_C*                  mSpecialCategory;                                        // 0x03F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		double                                                     mLastScrollPos;                                          // 0x0400(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        SearchResultHoveredTimerHandle;                          // 0x0408(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           LastMousePos;                                            // 0x0410(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mIsSearchFocused;                                        // 0x0420(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LD3L[0x7];                                   // 0x0421(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      mAllBuildCategories;                                     // 0x0428(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       mMouseMoved;                                             // 0x0438(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_L2N0[0x7];                                   // 0x0439(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              mHoveredStyle;                                           // 0x0440(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		EBuildMenu_Modes                                           mBuildMenuMode;                                          // 0x0448(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9UEN[0x7];                                   // 0x0449(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UClass*, class UWidget_BuildMenu_SubCategoryButton_C*> mSubCategoryToWidget;                                    // 0x0450(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class AFGHUD*                                              mHUD;                                                    // 0x04A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UClass*                                              mClickedRecipe;                                          // 0x04A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UFGBlueprintDescriptor*                              mHoveredBlueprint;                                       // 0x04B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void OnHotbarSlotUpdatedVisual(class UFGPlayerHotbar* Hotbar, int32_t SlotIndex);
		void OnMenuStateChanged(EMenuStateSection NewState);
		void OnBlueprintSettingsPopupCreated(class UWidget* PopupWidget);
		void OnBlueprintClicked(class UFGBlueprintDescriptor* blueprintDescriptor);
		void SetKeybindingsForTabs();
		bool OnShortcutPressed(int32_t Index);
		void ScrollToLastRecipe();
		void OnToggleBuildGunPaintPressed();
		void OnToggleBuildGunPressed();
		void OnApplyMaterialtoHotbar(class UClass* CustomisationRecipe);
		void OnDefaultMaterialHovered(class UClass* CustomiserRecipe, ECustomiserType CustomiserType);
		void OnDefaultMaterialChanged(class UClass* SubCategory, class UClass* NewDefaultRecipe);
		void OnSearchFocused();
		void SetupSubCategoryButtons();
		void SetupCategoryButtons();
		void SetupBindings(bool Construct);
		void UpdateBuildMenuMode(EBuildMenu_Modes mBuildMenuMode, bool SwitchTabs, bool UpdateOnBuildgun, bool BroadcastBuildgunUpdate);
		void GetShortcutKeys(TArray<struct FKey>* ShortcutKeys);
		bool GetShouldSearchResultBeBoundToHotbar(const struct FKeyEvent& KeyEvent);
		struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void OnCategoryClicked(int32_t Index);
		void SetSearchbarUnfocused();
		void SetSearchbarFocused(class UBPW_BuildMenu_Browser_C* ActiveBrowser);
		bool IsShortcutSettingAllowed();
		void OnSearchCreateResults(const class FText& mText);
		void UpdateShortcuts();
		void HandleShortcutPressed(int32_t shortcutIndex, bool* setupNewShortcut);
		void OnStopHoveringRecipe(class UClass* recipe, class UWidget_BuildMenuRecipeButton_C* RecipeButton);
		void OnRecipeHovered(class UClass* recipe, class UWidget_BuildMenuRecipeButton_C* RecipeButton);
		void IsCentralStorageBuilt(bool* IsBuilt);
		void IsSpaceElevatorBuilt(bool* IsBuilt);
		void IsTradingPostBuilt(bool* IsBuilt);
		void InitBuildMenu();
		void OnRecipeClicked(class UClass* InputPin);
		void CreateInfoBox(class UClass* recipe);
		void InpActEvt_IA_FocusSearch_K2Node_EnhancedInputActionEvent_1(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
		void Destruct();
		void UnBlockMouse();
		void BndEvt__Widget_MouseMoveChecker_K2Node_ComponentBoundEvent_0_OnMouseMoved__DelegateSignature();
		void BlockMouse();
		void BndEvt__BPW_Customiser_K2Node_ComponentBoundEvent_5_OnStyleSelected__DelegateSignature(class UClass* CustomiserRecipe);
		void BndEvt__BPW_Customiser_K2Node_ComponentBoundEvent_3_OnStyleHovered__DelegateSignature(class UClass* CustomiserRecipe);
		void BndEvt__BPW_Customiser_K2Node_ComponentBoundEvent_4_OnStyleUnhovered__DelegateSignature();
		void SetBuildMenuMode(EBuildMenu_Modes NewMode);
		void BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_7_OnTabButtonClicked__DelegateSignature(int32_t ButtonIndex);
		void BndEvt__BPW_Customiser_K2Node_ComponentBoundEvent_8_OnSwatchUpdated__DelegateSignature(unsigned char SlotIndex, const struct FFactoryCustomizationColorSlot& slotData);
		void Construct();
		void OnEscapePressed();
		void BndEvt__BPW_BuildMenu_Browser_K2Node_ComponentBoundEvent_9_OnSearchTextChanged__DelegateSignature(const class FText& Text);
		void BndEvt__BPW_BuildMenu_Browser_K2Node_ComponentBoundEvent_11_OnSearchInputBoxFocusReceived__DelegateSignature(const struct FFocusEvent& FocusEvent);
		void BndEvt__BPW_BuildMenu_Browser_K2Node_ComponentBoundEvent_12_OnDeselectFirstSearchResultIfOtherOptionIsHovered__DelegateSignature(class UWidget* FirstResultWidget);
		void BndEvt__BPW_BuildMenu_Browser_K2Node_ComponentBoundEvent_13_OnSearchComittedEnter__DelegateSignature(class UWidget* FirstResultWidget);
		void BndEvt__BPW_Customiser_K2Node_ComponentBoundEvent_1_OnSetDefualtMaterialOnAllClicked__DelegateSignature(class UClass* CustomiserRecipe);
		void BndEvt__BPW_Customiser_K2Node_ComponentBoundEvent_2_OnColorPickerOpened__DelegateSignature();
		void BndEvt__BPW_Customiser_K2Node_ComponentBoundEvent_6_OnColorPickerClosed__DelegateSignature();
		void OnBlueprintChenagesPromptClosed(bool StayInEditMode);
		void OnRecipeClickedPopupClosed(bool ConfirmClicked);
		void BndEvt__Widget_BuildMenu_BPW_BlueprintMenu_K2Node_ComponentBoundEvent_10_OnBlueprintButtonHovered__DelegateSignature(class UFGBlueprintDescriptor* blueprintDescriptor);
		void BndEvt__Widget_BuildMenu_BPW_BlueprintMenu_K2Node_ComponentBoundEvent_14_OnBlueprintButtonUnhovered__DelegateSignature();
		void BndEvt__Widget_BuildMenu_Widget_Window_DarkMode_K2Node_ComponentBoundEvent_15_OnClose__DelegateSignature();
		void ExecuteUbergraph_Widget_BuildMenu(int32_t EntryPoint);
		void OnClicked__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
