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
	 * WidgetBlueprintGeneratedClass Widget_ColorPicker_Module.Widget_ColorPicker_Module_C
	 * Size -> 0x00E8 (FullSize[0x0368] - InheritedSize[0x0280])
	 */
	class UWidget_ColorPicker_Module_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidget_ColorPicker_Slider_C*                        mBrightnessSlider;                                       // 0x0288(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableText*                                       mHexText;                                                // 0x0290(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_ColorPicker_Slider_C*                        mHueSlider;                                              // 0x0298(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_ComboboxSearch_C*                               mPresets;                                                // 0x02A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              mPreview;                                                // 0x02A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_ColorPicker_Slider_C*                        mSaturationSlider;                                       // 0x02B0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             mSavePreset;                                             // 0x02B8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		double                                                     mHue;                                                    // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mSaturation;                                             // 0x02C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mBrightness;                                             // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        CurrentColor;                                            // 0x02D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        StartColor;                                              // 0x02E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnValueChanged;                                          // 0x02F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       mHideBrightnessSlider;                                   // 0x0308(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_M06H[0x7];                                   // 0x0309(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPresetOpen;                                            // 0x0310(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    mPresetIndex;                                            // 0x0320(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Q7AF[0x4];                                   // 0x0324(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBPW_ColorPickerPreset_Save_C*                       mSavePresetWidget;                                       // 0x0328(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		int32_t                                                    mNumOfPlayerPresets;                                     // 0x0330(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_897P[0x4];                                   // 0x0334(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGlobalColorPreset>                          mPresetColors;                                           // 0x0338(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnOpenSavePreset;                                        // 0x0348(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnCloseSavePreset;                                       // 0x0358(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void UpdatePresets();
		void UpdateColor(const struct FLinearColor& CurrentColor);
		void SetHideBrightnessSlider(bool mHideBrightnessSlider);
		void SetAndUpdateColor();
		void BndEvt__mBrightnessSlider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(double Value);
		void BndEvt__mSaturationSlider_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature(double Value);
		void SetupColorAndSliders(const struct FLinearColor& Color);
		void BndEvt__mHexText_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void BndEvt__mPresets_K2Node_ComponentBoundEvent_4_OnEntryCreated__DelegateSignature(class UBPW_Combobox_Entry_C* CreatedEntry, int32_t Index);
		void OnPresetRemovedClicked(int32_t Index);
		void OnRemovePopupClosed(bool ConfirmClicked);
		void BndEvt__Widget_ColorPicker_Slider_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature(double Value);
		void Construct();
		void PreConstruct(bool IsDesignTime);
		void BndEvt__mPresets_K2Node_ComponentBoundEvent_5_OnSelectionChanged__DelegateSignature(const class FString& SelectedOption, int32_t selectedIndex);
		void BndEvt__mSaavePreset_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
		void ResetInput();
		void BndEvt__mPresets_K2Node_ComponentBoundEvent_8_OnPreOpening__DelegateSignature();
		void PresetSaved(const class FText& mPresetName, bool mDidSave);
		void ExecuteUbergraph_Widget_ColorPicker_Module(int32_t EntryPoint);
		void OnCloseSavePreset__DelegateSignature();
		void OnOpenSavePreset__DelegateSignature(class UBPW_ColorPickerPreset_Save_C* SaveWidget);
		void OnPresetOpen__DelegateSignature(const struct FLinearColor& InputColor);
		void OnValueChanged__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
