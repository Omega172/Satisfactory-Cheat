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
	 * WidgetBlueprintGeneratedClass BPW_ComboboxSearch.BPW_ComboboxSearch_C
	 * Size -> 0x0868 (FullSize[0x0AE8] - InheritedSize[0x0280])
	 */
	class UBPW_ComboboxSearch_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              mArrow;                                                  // 0x0288(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            mArrowClickArea;                                         // 0x0290(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              mBackground;                                             // 0x0298(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             mButton;                                                 // 0x02A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        mEntryContainer;                                         // 0x02A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMenuAnchor*                                         mListAnchor;                                             // 0x02B0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          mListScrollBox;                                          // 0x02B8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            mListSizeBox;                                            // 0x02C0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableText*                                       mSearchField;                                            // 0x02C8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            mSelectedOptionContainer;                                // 0x02D0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_ButtonSpotLight_C*                           Widget_ButtonSpotLight;                                  // 0x02D8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FComboBoxStyle                                      mStyle;                                                  // 0x02E0(0x0660) Edit, BlueprintVisible, ExposeOnSpawn
		class UClass*                                              mEntryWidget;                                            // 0x0940(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UClass*                                              mSelectedOptionWidget;                                   // 0x0948(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		TMap<class FString, struct FStruct_ComboboxSettings>       mOptions;                                                // 0x0950(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       mIsOpen;                                                 // 0x09A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JVY2[0x7];                                   // 0x09A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              mSelectedOption;                                         // 0x09A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash
		TMap<class FString, struct FStruct_ComboboxSettings>       mDefaultOptions;                                         // 0x09B8(0x0050) Edit, BlueprintVisible, ExposeOnSpawn
		int32_t                                                    mHoveredIndex;                                           // 0x0A08(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2W3Y[0x4];                                   // 0x0A0C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      mSearchResults;                                          // 0x0A10(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		double                                                     mMaxHeight;                                              // 0x0A20(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mMouseInactive;                                          // 0x0A28(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_I9YE[0x7];                                   // 0x0A29(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           mLastMousePos;                                           // 0x0A30(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnSelectionChanged;                                      // 0x0A40(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnOpening;                                               // 0x0A50(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       mMouseButtonDown;                                        // 0x0A60(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_OC00[0x3];                                   // 0x0A61(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    mMaxNumOfOptions;                                        // 0x0A64(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FText                                                mNumMoreOptionsText;                                     // 0x0A68(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		class FText                                                mOneMoreOptionText;                                      // 0x0A80(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		class FText                                                mHintText;                                               // 0x0A98(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		int32_t                                                    mWidthForTextCut;                                        // 0x0AB0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_GRI9[0x4];                                   // 0x0AB4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBPW_Combobox_Entry_C*                               mSelectedWidget;                                         // 0x0AB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnEntryCreated;                                          // 0x0AC0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       mShowArrow;                                              // 0x0AD0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_BR0I[0x7];                                   // 0x0AD1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPreOpening;                                            // 0x0AD8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void OnClick();
		void SetShowArrow(bool mShowArrow);
		void CloseandReverttoLastOption();
		void FocusOnSearchBox();
		void CreateSelectedOptionWidget(const class FString& mOption);
		void GenerateMoreOptionsWidget(int32_t NumOfExeedingOptions);
		struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void AddToOptionsArray(const class FString& Option, const struct FStruct_ComboboxSettings& AdditionalSettings);
		int32_t GetSelectedIndex();
		void SetSelectedIndex(int32_t Index, bool CallDelegate);
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void SetMouseInactive(bool mMouseInactive);
		void GetOptionAtIndexFromCurrentList(int32_t Index, class FString* Option);
		void GetOptionsFromCurrentList(TArray<class FString>* mOptions);
		void OnEntryHovered(const class FString& Text);
		void SetSelectedOption(const class FString& Option, bool CallDelegate);
		struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		class FString GetSearchResultAtIndex(int32_t Index);
		void SetHoveredIndex(int32_t Index, bool TriggeredByMouseHover);
		void OnOptionClicked(const class FString& Option);
		struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void SetIsOpen(bool IsOpen);
		class UWidget* GetMenuContent();
		void AddSingleEntry(const class FString& Option, const struct FStruct_ComboboxSettings& AdditionalSettings);
		void PopulateEntries(TArray<class FString>* Options);
		void OnSearch(const class FText& Text);
		int32_t GetOptionCount();
		class FString GetOptionAtIndex(int32_t Index);
		int32_t FindOptionIndex(const class FString& Option);
		bool RemoveOption(const class FString& Option);
		void ClearOptions();
		void AddOption(const class FString& Option, const struct FStruct_ComboboxSettings& AdditionalSettings);
		class UBPW_Combobox_Entry_C* GenerateEntryWidget(const class FString& Item, const struct FStruct_ComboboxSettings& AdditionalSettings);
		void PreConstruct(bool IsDesignTime);
		void BndEvt__EditableText_43_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature(const class FText& Text);
		void BndEvt__mSearchField_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void OnMouseLeave(const struct FPointerEvent& MouseEvent);
		void Construct();
		void BndEvt__BPW_ComboboxSearch_mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void ExecuteUbergraph_BPW_ComboboxSearch(int32_t EntryPoint);
		void OnPreOpening__DelegateSignature();
		void OnEntryCreated__DelegateSignature(class UBPW_Combobox_Entry_C* CreatedEntry, int32_t Index);
		void OnOpening__DelegateSignature();
		void OnSelectionChanged__DelegateSignature(const class FString& SelectedOption, int32_t selectedIndex);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
