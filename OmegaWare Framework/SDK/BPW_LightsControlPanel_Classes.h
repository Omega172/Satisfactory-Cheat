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
	 * WidgetBlueprintGeneratedClass BPW_LightsControlPanel.BPW_LightsControlPanel_C
	 * Size -> 0x012E (FullSize[0x0481] - InheritedSize[0x0353])
	 */
	class UBPW_LightsControlPanel_C : public UWidget_UseableBase_C
	{
	public:
		unsigned char                                              UnknownData_SGYF[0x5];                                   // 0x0353(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0358(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBPW_LightsControlPanel_IntensityGauge_C*            BPW_LightsControlPanel_IntensityGauge;                   // 0x0360(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFGEditableText*                                     FGEditableText_121;                                      // 0x0368(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Label_C*                                     mColorLabel;                                             // 0x0370(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            mColorPickerContainer;                                   // 0x0378(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_LightsControlPanel_ColorManager_C*              mColorPreviewManager;                                    // 0x0380(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_TogglableButton_Manager_C*                      mColorSelector;                                          // 0x0388(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        mConnectedLights;                                        // 0x0390(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_CopyPasteButtons_C*                             mCopyPasteButtons;                                       // 0x0398(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Label_C*                                     mIntensityLabel;                                         // 0x03A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USlider*                                             mIntensitySlider;                                        // 0x03A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              mNightModeIcon;                                          // 0x03B0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Label_C*                                     mNightModeLabel;                                         // 0x03B8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          mNightModeText;                                          // 0x03C0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_TogglableButton_C*                              mNightOnlyMode;                                          // 0x03C8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              mPreview;                                                // 0x03D0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Label_C*                                     mPreviewLabel;                                           // 0x03D8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UListView*                                           mSearchListView;                                         // 0x03E0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              mSelectedColor;                                          // 0x03E8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          mSelectedIntensity;                                      // 0x03F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          mSelectedNightMode;                                      // 0x03F8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_StandbyButton_C*                             mStandbyButton;                                          // 0x0400(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Window_DarkMode_C*                           Widget_Window_DarkMode;                                  // 0x0408(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class AFGBuildableControlPanelHost*                        mControlPanelHost;                                       // 0x0410(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TArray<struct FLinearColor>                                mColorArray;                                             // 0x0418(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<double>                                             mIntensityArray;                                         // 0x0428(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UMaterialInstanceDynamic*                            mPreviewMaterial;                                        // 0x0438(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        mCurrentColor;                                           // 0x0440(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mNormalizedIntensity;                                    // 0x0450(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLightSourceControlData                             mControlData;                                            // 0x0458(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		int32_t                                                    mCurrentColorSlot;                                       // 0x0464(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    mEditedColor;                                            // 0x0468(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZTP2[0x4];                                   // 0x046C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     mStoredSliderSFXValue;                                   // 0x0470(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mMinIntensity;                                           // 0x0478(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mWantLightEnabled;                                       // 0x0480(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void PlayPasteSFX();
		void PlayCopySFX();
		void PlaySliderSFX(double mSliderValue);
		void IsLightEnabled(bool* IsEnabled);
		void SetLightEnabled(bool IsEnabled);
		void SetColorArray();
		void CreateColorPicker(const struct FLinearColor& StartupColor);
		void UpdateNightModeSelector();
		void SetTimeOfDayAware(bool IsTimeOfDayAware);
		void SetControlData(const struct FLightSourceControlData& mControlData);
		void GetControlData();
		void InitStandbyButton();
		void SetLightIntensity(double Intensity);
		void SetLightColor(int32_t ColorSlotIndex);
		void UpdatePreviewMaterial();
		void UpdatePreviewNightMode(bool NightModeOn);
		void UpdatePreviewIntensity(double Intensity);
		void UpdatePreviewColor(int32_t Index);
		void UpdateIntensitySelector();
		void UpdateColorSelector(bool mPlayButtonSound);
		void DisplayControlledBuildables();
		void EventOnControlledBuildablesChanged();
		void BndEvt__mColorSelector_K2Node_ComponentBoundEvent_1_OnTogglableButtonClicked__DelegateSignature(int32_t Index);
		void Init();
		void BndEvt__mNightOnlyMode_K2Node_ComponentBoundEvent_4_OnIsSelectedChanged__DelegateSignature(bool IsSelected);
		void BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature();
		void BndEvt__mStandbyButton_K2Node_ComponentBoundEvent_3_OnStandbyClicked__DelegateSignature();
		void BndEvt__mColorPreviewManager_K2Node_ComponentBoundEvent_5_OnColorClicked__DelegateSignature(int32_t Index);
		void OnColorPickerClosed(TArray<struct FLinearColor> Color);
		void OnColorArrayUpdated();
		void BndEvt__Slider_170_K2Node_ComponentBoundEvent_6_OnFloatValueChangedEvent__DelegateSignature(float Value);
		void BndEvt__FGEditableText_120_K2Node_ComponentBoundEvent_8_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void OnColorPickerCancel();
		void OnLightStateChanged(bool IsEnabled);
		void Construct();
		void OnFactoryClipboardPasted(class UObject* interactObject, class UFGFactoryClipboardSettings* factoryClipboardSettings);
		void OnFactoryClipboardCopied(class UObject* interactObject, class UFGFactoryClipboardSettings* factoryClipboardSettings);
		void ExecuteUbergraph_BPW_LightsControlPanel(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
