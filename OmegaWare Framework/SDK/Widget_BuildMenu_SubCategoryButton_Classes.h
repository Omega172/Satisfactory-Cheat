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
	 * WidgetBlueprintGeneratedClass Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C
	 * Size -> 0x0101 (FullSize[0x0381] - InheritedSize[0x0280])
	 */
	class UWidget_BuildMenu_SubCategoryButton_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              mBG;                                                     // 0x0288(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWrapBox*                                            mBuildingsContainer;                                     // 0x0290(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_BuildMenu_SubCategoryMaterial_C*                mDefaultMaterialDropDown;                                // 0x0298(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFGEditableText*                                     mName;                                                   // 0x02A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             mNameBorder;                                             // 0x02A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_StandardButton_C*                            mRemoveButton;                                           // 0x02B0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          mSubcategoryNumber;                                      // 0x02B8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UClass*                                              mSubCategory;                                            // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FText                                                mSubCategoryText;                                        // 0x02C8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnDefaultMaterialChanged;                                // 0x02E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UClass*                                              mCategory;                                               // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnDefaultMaterialHovered;                                // 0x02F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnSetDefaultMaterialOnAll;                               // 0x0308(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnObjectDropped;                                         // 0x0318(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       mEditMode;                                               // 0x0328(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_GO0T[0x7];                                   // 0x0329(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCatgeoryRemoved;                                       // 0x0330(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       mIsNameOverwritten;                                      // 0x0340(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mIsMultiSelect;                                          // 0x0341(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IFC6[0x6];                                   // 0x0342(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnClearDragAndDropSelection;                             // 0x0348(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnSelect;                                                // 0x0358(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UFGCategory*                                         mSubcategoryObject;                                      // 0x0368(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnSubcategoryUpdated;                                    // 0x0370(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       mIsUndefinedSubcategory;                                 // 0x0380(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetDescriptorObject(class UObject** Object);
		void SetSubcategoryObject(class UFGCategory* mSubcategoryObject);
		struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void OverwriteName(const class FText& mSubCategoryText);
		void UpdateIndex();
		void ClearDragAndDropVisuals();
		void OnRemoveButtonClicked();
		void UpdateRemoveButtonVisibility();
		void OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation);
		struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void SetEditMode(bool mEditMode);
		bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
		void SetSubCategory(class UClass* mSubCategory, class UClass* mCategory);
		void CloseDefaultMaterialMenu();
		void SetIsSelected(bool IsSelected);
		void SetSubcategoryName(const class FText& Name);
		void BndEvt__BPW_BuildMenu_SubCategoryMaterial_K2Node_ComponentBoundEvent_0_OnDefaultMaterialChanged__DelegateSignature(class UClass* SubCategory, class UClass* NewDefaultMaterial);
		void PreConstruct(bool IsDesignTime);
		void BndEvt__mDefaultMaterialDropDown_K2Node_ComponentBoundEvent_1_OnDefaultMaterialHovered__DelegateSignature(class UClass* CustomiserRecipe, ECustomiserType CustomiserType);
		void Destruct();
		void BndEvt__mDefaultMaterialDropDown_K2Node_ComponentBoundEvent_2_OnSetDefaultMaterialOnAll__DelegateSignature(class UClass* CustomiserRecipe);
		void OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
		void OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
		void Construct();
		void BndEvt__Widget_BuildMenu_SubCategoryButton_FGEditableText_60_K2Node_ComponentBoundEvent_4_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void OnDragCancelled(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
		void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void OnMouseLeave(const struct FPointerEvent& MouseEvent);
		void ClearDragEvent();
		void EditMode(bool EditMode);
		void BndEvt__Widget_BuildMenu_SubCategoryButton_mName_K2Node_ComponentBoundEvent_3_OnEditableTextChangedEvent__DelegateSignature(const class FText& Text);
		void ExecuteUbergraph_Widget_BuildMenu_SubCategoryButton(int32_t EntryPoint);
		void OnSubcategoryUpdated__DelegateSignature(class UWidget_BuildMenu_SubCategoryButton_C* Instigator, const class FString& Name);
		void OnSelect__DelegateSignature(class UWidget* Instigator);
		void OnClearDragAndDropSelection__DelegateSignature();
		void OnCatgeoryRemoved__DelegateSignature();
		void OnObjectDropped__DelegateSignature(class UWidget_BuildMenu_SubCategoryButton_C* SubcategoryButton, const struct FGeometry& MyGemoetry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
		void OnSetDefaultMaterialOnAll__DelegateSignature(class UClass* CustomiserRecipe);
		void OnDefaultMaterialHovered__DelegateSignature(class UClass* CustomiserRecipe, ECustomiserType CustomiserType);
		void OnDefaultMaterialChanged__DelegateSignature(class UClass* SubCategory, class UClass* NewDefaultRecipe);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
