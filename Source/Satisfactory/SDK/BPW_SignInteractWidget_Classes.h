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
	 * WidgetBlueprintGeneratedClass BPW_SignInteractWidget.BPW_SignInteractWidget_C
	 * Size -> 0x0318 (FullSize[0x066B] - InheritedSize[0x0353])
	 */
	class UBPW_SignInteractWidget_C : public UWidget_UseableBase_C
	{
	public:
		unsigned char                                              UnknownData_4GKI[0x5];                                   // 0x0353(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0358(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidget_StandardButton_C*                            mCopyButton;                                             // 0x0360(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        mLayoutContainer;                                        // 0x0368(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_StandardButton_C*                            mPasteButton;                                            // 0x0370(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              mPopupBackground;                                        // 0x0378(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScaleBox*                                           mPopupContainer;                                         // 0x0380(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        mPreviewContainer;                                       // 0x0388(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_StandardButton_C*                            mSaveButton;                                             // 0x0390(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        mSettingsContainer;                                      // 0x0398(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFGWidgetSwitcher*                                   mSettingsSwitcher;                                       // 0x03A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_StandardButton_C*                            mSettingsTypeButton;                                     // 0x03A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Window_DarkMode_C*                           Widget_Window_DarkMode;                                  // 0x03B0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class AFGBuildableWidgetSign*                              mSign;                                                   // 0x03B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FPrefabSignData                                     mSignData;                                               // 0x03C0(0x00F0) Edit, BlueprintVisible, DisableEditOnInstance
		class UBPW_SignPrefab_C*                                   mLayoutWidget;                                           // 0x04B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		TMap<class FString, class UBPW_SignSetting_TextField_C*>   mTextSettings;                                           // 0x04B8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class UObject*                                             mSignSettings;                                           // 0x0508(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TMap<class FString, class UBPW_SignSetting_Icon_C*>        mImageSettings;                                          // 0x0510(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class FString                                              mCurrentBrowserImageKey;                                 // 0x0560(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class UBPW_SignSetting_Color_C*                            mColorSettings;                                          // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		struct FPrefabSignData                                     mOriginalSignData;                                       // 0x0578(0x00F0) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       mChangesWereMade;                                        // 0x0668(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mUsesBackgroundImage;                                    // 0x0669(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mIsPopupOpen;                                            // 0x066A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnGlossinessSettingChanged(double NewGlossiness);
		void OnEmissionSettingChanged(double mNewEmission);
		bool CheckIfTextSettingHasFocus();
		void SetSignData(const struct FPrefabSignData& mSignData);
		bool CheckIfUsesBackgroundImage();
		void GenerateSettings();
		void SetupMaterialSettings();
		void HidePopupBackground();
		void SetPopupBackgroundVisibility(bool IsVisible);
		void OnColorSettingChanged(const struct FLinearColor& ForegroundColor, const struct FLinearColor& BackgroundColor, const struct FLinearColor& AuxilliaryColor);
		void OnColorPickerClosed(TArray<struct FLinearColor>* Color);
		void OpenColorPicker();
		void SetupColors();
		void OnImageBrowserClosed(class UObject* TextureObject, int32_t ImageID);
		void OpenImageBrowser(const class FString& IconKey, int32_t IconID);
		void OnImageSettingChanged(const class FString& IconKey, int32_t IconID);
		void SetupIcons();
		void UpdateLayoutThumnails(bool MarkAsChangesWereMade);
		void OnLayoutButtonClicked(class UClass* SignPrefab);
		void SetupLayoutThumnails();
		void OnTextSettingChanged(const class FText& Text);
		void GetTextData(TMap<class FString, class FString>* TextData);
		void SetupTexts();
		void SaveData();
		void SetLayout();
		void BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature();
		void BndEvt__Widget_StandardButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
		void BndEvt__mSettingsTypeButton_1_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
		void BndEvt__mCopyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
		void BndEvt__mPasteButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
		void Construct();
		void OnFactoryClipboardPasted(class UObject* interactObject, class UFGFactoryClipboardSettings* factoryClipboardSettings);
		void OnEscapePressed();
		void ExecuteUbergraph_BPW_SignInteractWidget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
