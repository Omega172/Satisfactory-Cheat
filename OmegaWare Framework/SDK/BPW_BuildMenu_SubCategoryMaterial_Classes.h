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
	 * WidgetBlueprintGeneratedClass BPW_BuildMenu_SubCategoryMaterial.BPW_BuildMenu_SubCategoryMaterial_C
	 * Size -> 0x0078 (FullSize[0x02F8] - InheritedSize[0x0280])
	 */
	class UBPW_BuildMenu_SubCategoryMaterial_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             mButton;                                                 // 0x0288(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              mMaterialIcon;                                           // 0x0290(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          mMaterialName;                                           // 0x0298(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMenuAnchor*                                         mMenuAnchor;                                             // 0x02A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              mPointer;                                                // 0x02A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       mIsHovered;                                              // 0x02B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mIsOpen;                                                 // 0x02B1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_44AG[0x6];                                   // 0x02B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnDefaultMaterialChanged;                                // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnDefaultMaterialHovered;                                // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UClass*                                              mSubCategory;                                            // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UClass*                                              mCategory;                                               // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnSetDefaultMaterialOnAll;                               // 0x02E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void UpdateMaterialText();
		void SetSubCategory(class UClass* SubCategory, class UClass* mCategory);
		void OpenCloseMenu(bool Close);
		class UWidget* GetMenuContent();
		struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void SetStyling(bool IsHovered, bool IsOpen);
		void BndEvt__Button_76_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__Button_76_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__Button_76_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
		void SetupBindings(class UBPW_BuildMenu_SubCategoryMaterialMenu_C* MaterialMenu);
		void DefaultMaterialChanged(class UClass* SubCategory, class UClass* NewDefaultMaterial);
		void DefaultMaterialHovered(class UClass* CustomiserRecipe, ECustomiserType CustomiserType);
		void Destruct();
		void BndEvt__mMenuAnchor_K2Node_ComponentBoundEvent_4_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
		void SetDefaultMaterialOnAll(class UClass* CustomiserRecipe);
		void ExecuteUbergraph_BPW_BuildMenu_SubCategoryMaterial(int32_t EntryPoint);
		void OnSetDefaultMaterialOnAll__DelegateSignature(class UClass* CustomiserRecipe);
		void OnDefaultMaterialHovered__DelegateSignature(class UClass* CustomiserRecipe, ECustomiserType CustomiserType);
		void OnDefaultMaterialChanged__DelegateSignature(class UClass* SubCategory, class UClass* NewDefaultMaterial);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
