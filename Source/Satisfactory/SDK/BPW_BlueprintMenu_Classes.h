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
	 * WidgetBlueprintGeneratedClass BPW_BlueprintMenu.BPW_BlueprintMenu_C
	 * Size -> 0x02F1 (FullSize[0x0571] - InheritedSize[0x0280])
	 */
	class UBPW_BlueprintMenu_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidget_StandardButton_C*                            mAddCategoryButton;                                      // 0x0288(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_StandardButton_C*                            mAddSubcategoryButton;                                   // 0x0290(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_StandardButton_C*                            mApplyButton;                                            // 0x0298(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_BuildMenu_Browser_C*                            mBrowser;                                                // 0x02A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_StandardButton_C*                            mCancelButton;                                           // 0x02A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USpacer*                                             mCancelSpacer;                                           // 0x02B0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USpacer*                                             mCategorySpacer;                                         // 0x02B8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_StandardButton_C*                            mEditButton;                                             // 0x02C0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            mEditContainer;                                          // 0x02C8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        mEmptyCategoryConatiner;                                 // 0x02D0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            mMovingBetweenCategoriesContainer;                       // 0x02D8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            mPopupContainer;                                         // 0x02E0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              mPopupOverlay;                                           // 0x02E8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_StandardButton_C*                            mRemoveCategoryButton;                                   // 0x02F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            mSortingContainer;                                       // 0x02F8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       mEditMode;                                               // 0x0300(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_16IO[0x7];                                   // 0x0301(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UWidget*>                                     mMultipleSelected;                                       // 0x0308(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class FScriptMulticastDelegate                             OnBlueprintClicked;                                      // 0x0318(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       mDirectoryMode;                                          // 0x0328(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       mShowEditMenu;                                           // 0x0329(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_4ZHH[0x6];                                   // 0x032A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCloseEditModePrompt;                                   // 0x0330(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       mEditPromtOpen;                                          // 0x0340(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_R9BO[0x7];                                   // 0x0341(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFGBlueprintCategory*                                mCurrentCategory;                                        // 0x0348(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       mIsCurrentCategoryDirty;                                 // 0x0350(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_B5D1[0x7];                                   // 0x0351(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnNewDirectoryDataUpdated;                               // 0x0358(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UBPW_BuildMenuBlueprintButton_C*                     mNewDirectoryBlueprint;                                  // 0x0368(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		struct FStruct_BlueprintDirectoryData                      mNewBlueprintDirectory;                                  // 0x0370(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UFGBlueprintDescriptor*                              mNewBlueprintDescriptor;                                 // 0x0388(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnPopupCreated;                                          // 0x0390(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TMap<class UFGBlueprintCategory*, struct FStruct_BlueprintMenu_EditData> mOrganizationData;                                       // 0x03A0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TMap<class UFGBlueprintDescriptor*, struct FBlueprintRecord> mDirtyBlueprints;                                        // 0x03F0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<class UFGBlueprintSubCategory*, class FString>        mDirtySubcategories;                                     // 0x0440(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<class UFGBlueprintCategory*, struct FStruct_BlueprintCategoryData> mDirtyCategories;                                        // 0x0490(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<class UWidget*, class UWidget*>                       mMovedObjectDuplicates;                                  // 0x04E0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class FScriptMulticastDelegate                             OnBlueprintButtonHovered;                                // 0x0530(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnBlueprintButtonUnhovered;                              // 0x0540(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<class UFGBlueprintDescriptor*>                      mRemovedBlueprints;                                      // 0x0550(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UWidget*                                             mPopupWidget;                                            // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UFGBlueprintDescriptor*                              mReplacedDirectoryDescriptor;                            // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       mIncludeNewBlueprintInOrgSave;                           // 0x0570(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void LeaveDirectoryModeIfBlueprintNameExists(const struct FBlueprintRecord& BlueprintRecord);
		void CheckIfBlueprintNameExistsInCurrentCategory(const class FString& Name, bool* BlueprintExists, class UFGBlueprintDescriptor** Descriptor, class UFGBlueprintSubCategory** SubCategory, class UFGBlueprintCategory** Category);
		void MoveToSubcategory(class UFGBlueprintCategory* Category, class UFGBlueprintSubCategory* SubCategory);
		void OnBlueprintDragBegin(class UBPW_BuildMenuBlueprintButton_C* Instigator, class UBPW_Blueprint_DragAndDropRep_C* DragAndDropRep);
		void OnRemoveCategoryClicked();
		bool IsCategoryEmpty(class UFGCategory* Category);
		void OnSearch(const class FText& SearchText);
		void UpdateDirectoryCategory(bool SetFromCurrentCategory);
		void HighlightCurrentCategoryButton();
		void RemoveCurrentPopup();
		void OnPopupRemoved();
		void AddPopup(class UWidget* mPopupWidget);
		void OnRemoveBlueprintsPopupClosed(bool ConfirmClicked);
		void OnBlueprintRemoved(class UFGBlueprintDescriptor* blueprintDescriptor);
		void OnBlueprintUnhovered();
		void GetLatestBlueprintRecord(class UFGBlueprintDescriptor* blueprintDescriptor, struct FBlueprintRecord* BlueprintRecord);
		void AddOrUpdateNewBlueprint(const struct FBlueprintRecord& BlueprintRecord);
		void SetEditBarVisibility(bool IsVisible);
		void OnObjectDroppedOnEmptySpace(class UDragDropOperation* Operation);
		void OnObjectDroppedOnCategory(class UWidget_CategoryButton_C* Instigator, const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
		void OnBlueprintHovered(class UFGBlueprintDescriptor* blueprintDescriptor);
		void OnCategoryRemoved(class UFGCategory* Category);
		void SetEmptyCategoryMessageVisibility(bool IsVisible);
		void OnAddCategoryClicked();
		void ClearAllEditData();
		void SaveAllEditData();
		void OnBlueprintUpdated(class UObject* Instigator, const struct FBlueprintRecord& BlueprintRecord);
		void OnSubcategoryUpdated(class UWidget_BuildMenu_SubCategoryButton_C* Instigator, const class FString& Name);
		void UpdateCategoryButton(class UWidget_CategoryButton_C* CategoryWidget, const struct FStruct_BlueprintCategoryData& CategoryData);
		class UFGBlueprintCategory* CreateDummyCategory(const struct FStruct_BlueprintCategoryData& CategoryData);
		class UFGBlueprintSubCategory* CreateDummySubCategory(const class FString& Name);
		class UFGBlueprintDescriptor* CreateDummyBlueprintDescriptor(const struct FBlueprintRecord& BlueprintRecord);
		void OnCategoryUpdated(class UFGCategory* Category, const struct FStruct_BlueprintCategoryData& CategoryData);
		void OnCategorySettingClicked(class UWidget_CategoryButton_C* Instigator, const struct FStruct_BlueprintCategoryData& CategoryData);
		void OnBlueprintSettingClicked(class UBPW_BuildMenuBlueprintButton_C* Instigator);
		class UWidget_CategoryButton_C* AddCategory(class UFGCategory* mCategory);
		void OnSubcategorySelected(class UWidget* Instigator);
		void CleanUpMovedItems();
		void OnCategoryHovered(class UWidget_CategoryButton_C* Instigator);
		void OnCategoryClicked(class UFGCategory* Catgeory);
		void GenerateCategories();
		void SaveOrganizationDataForCurrentCategoryIfDirty();
		void OnCloseLeaveEditModePrompt(bool ConfirmClicked);
		void PromptLeaveEditMode(bool* IsInEditMode);
		void SetShowEditMenu(bool mShowEditMenu);
		void OnAddBlueprintHereClicked(class UWidget_BuildMenu_SubCategoryButton_C* SubcategoryButton);
		void GenerateSubCatgeories(class UFGBlueprintCategory* BlueprintCategory);
		void SetDirectoryMode(bool mDirectoryMode);
		void AddBlueprintDirectoryButton(class UWidget_BuildMenu_SubCategoryButton_C* SubcategoryButton);
		void OnBlueprintButtonClicked(class UFGBlueprintDescriptor* blueprintDescriptor);
		void AddBlueprintButton(class UWidget_BuildMenu_SubCategoryButton_C* SubcategoryButton, class UFGBlueprintDescriptor* BlueprintDescritpor, class UBPW_BuildMenuBlueprintButton_C** BlueprintButton);
		bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
		struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void OnSubcategoryDragged();
		void OnSelect(class UWidget* Instigator);
		void OnClearSelection();
		void OnSelectToggle(class UWidget* Instigator);
		class UWidget_BuildMenu_SubCategoryButton_C* AddSubCategory(class UFGBlueprintSubCategory* SubCategory, bool IsNew);
		void OnSubCategoryRemoved();
		void OnAddSubcategoryClicked();
		void UpdateSubcategoryRemoveButtons();
		void OnApplyClicked();
		void OnCancelClicked();
		void OnEditClicked();
		void SetEditMode(bool mEditMode);
		void OnObjectMoved(class UWidget* Payload, int32_t ToIndex, class UPanelWidget* Parent);
		void Construct();
		void OnObjectDroppedOnSubcategory(class UWidget_BuildMenu_SubCategoryButton_C* SubcategoryButton, const struct FGeometry& MyGemoetry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
		void BndEvt__BPW_BlueprintMenu_BPW_BuildMenu_Browser_K2Node_ComponentBoundEvent_1_OnObjectDroppedInSubcategoryContainer__DelegateSignature(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
		void BndEvt__BPW_BlueprintMenu_BPW_BuildMenu_Browser_K2Node_ComponentBoundEvent_0_OnSearchTextChanged__DelegateSignature(const class FText& Text);
		void BndEvt__BPW_BlueprintMenu_BPW_BuildMenu_Browser_K2Node_ComponentBoundEvent_3_OnSearchComittedEnter__DelegateSignature(class UWidget* FirstResultWidget);
		void BndEvt__BPW_BlueprintMenu_BPW_BuildMenu_Browser_K2Node_ComponentBoundEvent_2_OnObjectDroppedInCategoryContainer__DelegateSignature(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
		void Testest();
		void ExecuteUbergraph_BPW_BlueprintMenu(int32_t EntryPoint);
		void OnBlueprintButtonUnhovered__DelegateSignature();
		void OnBlueprintButtonHovered__DelegateSignature(class UFGBlueprintDescriptor* blueprintDescriptor);
		void OnPopupCreated__DelegateSignature(class UWidget* PopupWidget);
		void OnNewDirectoryDataUpdated__DelegateSignature(const struct FStruct_BlueprintDirectoryData& DirectoryData);
		void OnCloseEditModePrompt__DelegateSignature(bool StayInEditMode);
		void OnBlueprintClicked__DelegateSignature(class UFGBlueprintDescriptor* blueprintDescriptor);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
