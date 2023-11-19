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
	 * WidgetBlueprintGeneratedClass BPW_Customiser.BPW_Customiser_C
	 * Size -> 0x0130 (FullSize[0x03B0] - InheritedSize[0x0280])
	 */
	class UBPW_Customiser_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBPW_BuildMenu_Browser_C*                            BPW_BuildMenu_Browser;                                   // 0x0288(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              mColorPickerBackground;                                  // 0x0290(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            mColorPickerSlot;                                        // 0x0298(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TMap<ECustomiserType, class UClass*>                       mSelectedColorData;                                      // 0x02A0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnStyleSelected;                                         // 0x02F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnStyleHovered;                                          // 0x0300(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnStyleUnhovered;                                        // 0x0310(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UClass*                                              mColorPickerClass;                                       // 0x0320(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnSwatchUpdated;                                         // 0x0328(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UWrapBox*                                            LocalContainer;                                          // 0x0338(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UBPW_CustomiserSettingsButton_C*                     mEditedWidget;                                           // 0x0340(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		TArray<class UClass*>                                      AvailableCustomizerRecipes;                              // 0x0348(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UClass*>                                      mCategories;                                             // 0x0358(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UClass*                                              mLastSelectedCategory;                                   // 0x0368(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnSetDefualtMaterialOnAllClicked;                        // 0x0370(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UWidget_ColorPicker_MultipleColors_C*                mColorPicker;                                            // 0x0380(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnColorPickerOpened;                                     // 0x0388(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnColorPickerClosed;                                     // 0x0398(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		double                                                     mLastScrollPos;                                          // 0x03A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ForceCloseColorPicker();
		void ScrollToLastPos();
		void SetLastScrollPos();
		void OnSetDefaultOnAllClicked(class UClass* CustomiserRecipe);
		void ClearAndHideSearchResults();
		void SetupButtonBindings(class UBPW_CustomiserSettingsButton_C* CustomizerButton);
		void OnSearch(const class FText& SearchText);
		void OnCategoryClicked(int32_t Index);
		void SetupCategories();
		void OnSettingClicked(class UClass* CustomiserRecipe, int32_t ButtonIndex);
		void ColorPickerClosed(TArray<struct FLinearColor>* Color);
		void OnSettingEditClicked(class UClass* CustomiserDescriptor, class UBPW_CustomiserSettingsButton_C* SettingsEditWidget);
		void OpenColorPicker(class UClass* CustomiserDescriotor);
		void SetupPreviewDropdown();
		void OnSettingUnhovered();
		void OnSettingHovered(class UClass* customizationRecipe, ECustomiserType CustomiserType);
		void PopulateSettings(class UClass* CategoryClass);
		void Construct();
		void OnColorPickerCanceled();
		void Init(TArray<class UClass*>* AvailableCustomizerRecipes);
		void BndEvt__BPW_BuildMenu_Browser_K2Node_ComponentBoundEvent_0_OnSearchTextChanged__DelegateSignature(const class FText& Text);
		void BndEvt__BPW_BuildMenu_Browser_K2Node_ComponentBoundEvent_3_OnSearchComittedEnter__DelegateSignature(class UWidget* FirstResultWidget);
		void Destruct();
		void ExecuteUbergraph_BPW_Customiser(int32_t EntryPoint);
		void OnColorPickerClosed__DelegateSignature();
		void OnColorPickerOpened__DelegateSignature();
		void OnSetDefualtMaterialOnAllClicked__DelegateSignature(class UClass* CustomiserRecipe);
		void OnSwatchUpdated__DelegateSignature(unsigned char SlotIndex, const struct FFactoryCustomizationColorSlot& slotData);
		void OnStyleUnhovered__DelegateSignature();
		void OnStyleHovered__DelegateSignature(class UClass* CustomiserRecipe);
		void OnStyleSelected__DelegateSignature(class UClass* CustomiserRecipe);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
