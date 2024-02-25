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
	 * WidgetBlueprintGeneratedClass Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C
	 * Size -> 0x01F6 (FullSize[0x04C1] - InheritedSize[0x02CB])
	 */
	class UWidget_PlayMenu_Alpha_C : public UBP_MenuBase_C
	{
	public:
		unsigned char                                              UnknownData_01LC[0x5];                                   // 0x02CB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBPW_AdvancedGameSettings_C*                         BPW_AdvancedGameSettings;                                // 0x02D8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_252;                                               // 0x02E0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             mAdvancedGameSettingsButton;                             // 0x02E8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_SwitchingImage_C*                            mCreativeIcon;                                           // 0x02F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          mCreativeModeButtonText;                                 // 0x02F8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          mCreativeModeButtonText_2;                               // 0x0300(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          mErrorLabel;                                             // 0x0308(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        mPlayMenu;                                               // 0x0310(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             mResetSettings;                                          // 0x0318(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        mSessionNameBox;                                         // 0x0320(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                    mSessionNameInput;                                       // 0x0328(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        mSessionTypeBox;                                         // 0x0330(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_Options_DropdownBox_C*                          mSessionTypeDropdown;                                    // 0x0338(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_OptionsCheckbox_C*                              mSkipIntroCheckbox;                                      // 0x0340(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_ButtonShine_C*                               mStartButtonShine;                                       // 0x0348(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             mStartGame;                                              // 0x0350(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          mStartGameText;                                          // 0x0358(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        mStartingLocationsPanel;                                 // 0x0360(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SkipIntroBox;                                            // 0x0368(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_SubMenuBackground_C*                         Widget_SubMenuBackground;                                // 0x0370(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FString                                              mStartLoc;                                               // 0x0378(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              mOptionString;                                           // 0x0388(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		ESessionVisibility                                         mSelectedVisibility;                                     // 0x0398(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_11WZ[0x7];                                   // 0x0399(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FStartingLocationsDataStruct                        mSelectedLocation;                                       // 0x03A0(0x0088) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		int32_t                                                    mDefaultStartingLocation;                                // 0x0428(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mPlayButtonError;                                        // 0x042C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XSM3[0x3];                                   // 0x042D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                mPlayButtonErrorString;                                  // 0x0430(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       mPlayButtonEnabled;                                      // 0x0448(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mIsExperimental;                                         // 0x0449(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_31X9[0x6];                                   // 0x044A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FText>                                        mSessionTypes;                                           // 0x0450(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      mSessionTypesStr;                                        // 0x0460(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		unsigned char                                              StartingLocationsAsset[0x30];                            // 0x0470(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		TArray<struct FStartingLocationsDataStruct>                StartingLocationsTemp;                                   // 0x04A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FUserSettingCategoryMapping>                 mCachedGameModeSettings;                                 // 0x04B0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		bool                                                       mCreativeModeEnabled;                                    // 0x04C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void IsCreativeModeEnabled(bool* Enabled);
		void SetAdvancedGameSettingsVisibility(bool IsVisible);
		void OnMenuClose(bool* CancelParentFunction);
		void UpdateCreativeModeEnabledFeedback(bool CreativeModeEnabled);
		void OnStartingLocUnhovered();
		void OnStartingLocHovered();
		void CheckStartingTierSetSkipIntro();
		void InitStartingLocs();
		void SetStartButtonEnable(bool Enabled);
		void CheckSessionNameForError();
		void SetPlayButtonError(bool Error, const class FText& ErrorMessage);
		void BndEvt__Widget_Options_DropdownBox_K2Node_ComponentBoundEvent_2_onSelectionChanged__DelegateSignature(const class FString& SelectedOption);
		void OnStartLocClicked(const struct FStartingLocationsDataStruct& mStartingLocs);
		void PreConstruct(bool IsDesignTime);
		void BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_6_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
		void BndEvt__mStartGame_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
		void OnMenuEnter(class UWidget* prevMenu);
		void Construct();
		void OnEscape();
		void BndEvt__Widget_PlayMenu_Alpha_mAdvancedGameSettingsButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__Widget_PlayMenu_Alpha_mSkipIntroCheckbox_K2Node_ComponentBoundEvent_0_OnCheckChanged__DelegateSignature(bool IsChecked);
		void BndEvt__Widget_PlayMenu_Alpha_BPW_AdvancedGameSettings_K2Node_ComponentBoundEvent_1_OnBackButtonClicked__DelegateSignature();
		void EnterAdvancedGameSettings();
		void OnEnterCreativeModePopupClosed(bool ConfirmClicked);
		void BndEvt__Widget_PlayMenu_Alpha_BPW_AdvancedGameSettings_K2Node_ComponentBoundEvent_3_OnResetClicked__DelegateSignature();
		void BndEvt__Widget_PlayMenu_Alpha_mResetSettings_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
		void ExecuteUbergraph_Widget_PlayMenu_Alpha(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
