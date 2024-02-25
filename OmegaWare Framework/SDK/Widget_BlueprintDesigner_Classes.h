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
	 * WidgetBlueprintGeneratedClass Widget_BlueprintDesigner.Widget_BlueprintDesigner_C
	 * Size -> 0x0236 (FullSize[0x0589] - InheritedSize[0x0353])
	 */
	class UWidget_BlueprintDesigner_C : public UWidget_UseableBase_C
	{
	public:
		unsigned char                                              UnknownData_KMNF[0x5];                                   // 0x0353(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0358(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBorder*                                             Border_1;                                                // 0x0360(0x0008) ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_BlueprintDirectorySelector_C*                   BPW_BlueprintDirectorySelector;                          // 0x0368(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_BlueprintSelector_C*                            BPW_BlueprintSelector;                                   // 0x0370(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_InputTextWarning_C*                             BPW_InputTextWarning;                                    // 0x0378(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_StandardButton_C*                            mCancelButton;                                           // 0x0380(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_StandardButton_C*                            mClearDesingerButton;                                    // 0x0388(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              mColorPreview;                                           // 0x0390(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWrapBox*                                            mCostContainer;                                          // 0x0398(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        mCostInfo;                                               // 0x03A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMultiLineEditableText*                              mDescriptionInput;                                       // 0x03A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          mDirectoryLabel;                                         // 0x03B0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              mDivider;                                                // 0x03B8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              mIcon;                                                   // 0x03C0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              mIconPreivew;                                            // 0x03C8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          mIconSettings;                                           // 0x03D0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_StandardButton_C*                            mLoadButton;                                             // 0x03D8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             mNameBorder;                                             // 0x03E0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFGEditableText*                                     mNameInput;                                              // 0x03E8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      mNameInputContainer;                                     // 0x03F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          mNoCostText;                                             // 0x03F8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              mPopupBG;                                                // 0x0400(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            mPopupContainer;                                         // 0x0408(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_StandardButton_C*                            mRemoveBlueprintButton;                                  // 0x0410(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_StandardButton_C*                            mSaveButton;                                             // 0x0418(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_StandardButton_C*                            mSelectColor;                                            // 0x0420(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_StandardButton_C*                            mSelectIcon;                                             // 0x0428(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_StandardButton_C*                            mSetDirectory;                                           // 0x0430(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          mStaticName;                                             // 0x0438(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Scrollbox_C*                                 Widget_Scrollbox;                                        // 0x0440(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Window_AlternateContentBackground_DarkMode_C* Widget_Window_AlternateContentBackground_DarkMode;       // 0x0448(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Window_DarkMode_C*                           Widget_Window_DarkMode;                                  // 0x0450(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class AFGBuildableBlueprintDesigner*                       mBlueprintDesigner;                                      // 0x0458(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FBlueprintRecord                                    mBlueprintRecord;                                        // 0x0460(0x0050) Edit, BlueprintVisible, ExposeOnSpawn
		class UBPW_ImageBrowser_C*                                 mIconLibrary;                                            // 0x04B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		int32_t                                                    mIconID;                                                 // 0x04B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        mColor;                                                  // 0x04BC(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JVQB[0x4];                                   // 0x04CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FStruct_BlueprintDirectoryData                      mDirectory;                                              // 0x04D0(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       mIsBlueprintEditor;                                      // 0x04E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_K7EY[0x7];                                   // 0x04E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnBlueprintUpdated;                                      // 0x04F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnRemoveBlueprint;                                       // 0x0500(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<class FString>                                      mUsedBlueprintNames;                                     // 0x0510(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnClosed;                                                // 0x0520(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FText                                                mDefaultName;                                            // 0x0530(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       mIsSaveButtonVisible;                                    // 0x0548(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5EUO[0x7];                                   // 0x0549(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      mInvalidNameSymbols;                                     // 0x0550(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       mIsValidName;                                            // 0x0560(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mHasNoCost;                                              // 0x0561(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mRefreshDirectoryMenu;                                   // 0x0562(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mNameIsAvilable;                                         // 0x0563(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mLastNameWasAvailable;                                   // 0x0564(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UUP7[0x3];                                   // 0x0565(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FStruct_BlueprintDirectoryData                      mOverwriteDirectory;                                     // 0x0568(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UBPW_BlueprintDirectorySelector_C*                   mDirectorySelector;                                      // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		bool                                                       mIsDirty;                                                // 0x0588(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void CloseBlueprintEditor();
		void GetGameModeSettingFeedback();
		void ValidateBlueprintRecord(const struct FBlueprintRecord& BlueprintRecord, struct FBlueprintRecord* ValidatedRecord);
		void SetDirectorySelector(class UBPW_BlueprintDirectorySelector_C* mDirectorySelector);
		void ResetPopupOverlay();
		void AddWidgetToPopupOverlay(class UWidget* Content);
		void SetNameErrorTooltip();
		void ShowDirectoryMenu();
		void UpdateSaveButtonVisibility();
		void GetInvalidNameSymbolsAsString(class FString* OutString);
		void CheckIfTextIsFreeOfInvalidSymbols(const class FText& Name, bool* TextIsValid);
		void UpdateNameWarning(const class FText& Name);
		void NullCheckCategories(class UFGBlueprintCategory* InCategory, class UFGBlueprintSubCategory* InSubCategory, class UFGBlueprintCategory** OutCategory, class UFGBlueprintSubCategory** OutSubCategory);
		void AttemptLoad(class UFGBlueprintDescriptor* blueprintDescriptor);
		class UWidget* GetSaveButtonTooltip();
		void SetSaveButtonVisibility(bool IsVisible);
		void OnCostUpdated(TArray<struct FItemAmount> cost);
		void GenerateCost();
		void OnRemovePromptClosed(bool ConfirmClicked);
		class FString GetAvailableName();
		void OnSavePromptClosed(bool ConfirmClicked);
		void AttemptSave();
		void GenerateUsedBlueprintNames();
		class UWidget* GetUsedNameWarningTooltip();
		struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void SetIsBlueprintEditor(bool mIsBlueprintEditor);
		void SetBlueprintRecord(const struct FBlueprintRecord& mBlueprintRecord);
		void GetBlueprintRecord(struct FBlueprintRecord* BlueprintRecord);
		void SetDirectory(const struct FStruct_BlueprintDirectoryData& mDirectory);
		void OnColorPickerClosed(TArray<struct FLinearColor>* Color);
		void SetColor(const struct FLinearColor& mColor);
		void SetIconID(int32_t mIconID);
		void OnIconSelected(class UObject* Object, int32_t ImageID);
		void FillOutInfo();
		void Init();
		void Construct();
		void ClearDesigner();
		void SaveBlueprint();
		void BndEvt__Widget_BlueprintDesigner_BPW_BlueprintSelector_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature();
		void BndEvt__Widget_BlueprintDesigner_BPW_BlueprintSelector_K2Node_ComponentBoundEvent_1_OnBlueprintSelected__DelegateSignature(class UFGBlueprintDescriptor* blueprintDescriptor);
		void BndEvt__Widget_BlueprintDesigner_Widget_Window_DarkMode_K2Node_ComponentBoundEvent_3_OnClose__DelegateSignature();
		void BndEvt__Widget_BlueprintDesigner_Widget_StandardButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
		void OnImageBrowserCancel();
		void BndEvt__Widget_BlueprintDesigner_Widget_StandardButton_1_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
		void OnEscapePressed();
		void BndEvt__Widget_BlueprintDesigner_mSelectColor_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature();
		void BndEvt__Widget_BlueprintDesigner_mSaveButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature();
		void BndEvt__Widget_BlueprintDesigner_mLoveButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature();
		void BndEvt__Widget_BlueprintDesigner_mClearDesingerButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature();
		void BndEvt__Widget_BlueprintDesigner_mCancelButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
		void BndEvt__Widget_BlueprintDesigner_mRemoveBlueprintButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature();
		void BndEvt__Widget_BlueprintDesigner_mNameInput_K2Node_ComponentBoundEvent_12_OnEditableTextChangedEvent__DelegateSignature(const class FText& Text);
		void BndEvt__Widget_BlueprintDesigner_mDescriptionInput_K2Node_ComponentBoundEvent_13_OnMultiLineEditableTextChangedEvent__DelegateSignature(const class FText& Text);
		void OnDirectorySelectorClosed(bool DirectoryHasBeenSet, const struct FStruct_BlueprintDirectoryData& DirectoryData);
		void OnColorPickerCanceled();
		void OnClosePromptClosed(bool ConfirmClicked);
		void ShowClosePrompt();
		void ExecuteUbergraph_Widget_BlueprintDesigner(int32_t EntryPoint);
		void OnClosed__DelegateSignature();
		void OnRemoveBlueprint__DelegateSignature(class UFGBlueprintDescriptor* blueprintDescriptor);
		void OnBlueprintUpdated__DelegateSignature(class UObject* blueprintDescriptor, const struct FBlueprintRecord& BlueprintRecord);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
