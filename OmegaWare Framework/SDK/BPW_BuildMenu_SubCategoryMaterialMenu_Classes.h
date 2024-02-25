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
	 * WidgetBlueprintGeneratedClass BPW_BuildMenu_SubCategoryMaterialMenu.BPW_BuildMenu_SubCategoryMaterialMenu_C
	 * Size -> 0x0068 (FullSize[0x02E8] - InheritedSize[0x0280])
	 */
	class UBPW_BuildMenu_SubCategoryMaterialMenu_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              mBG;                                                     // 0x0288(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWrapBox*                                            mMaterialsContainer;                                     // 0x0290(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UClass*                                              mSubCategory;                                            // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UClass*                                              mCategory;                                               // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnDefaultMaterialChanged;                                // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnDefaultMaterialHovered;                                // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnDestructed;                                            // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnSetDefaultMaterialOnAll;                               // 0x02D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void OnSetDefaultOnAll(class UClass* CustomiserRecipe);
		void SetSubCategory(class UClass* mSubCategory, class UClass* mCategory);
		void OnMaterialHovered(class UClass* CustomiserRecipe, ECustomiserType CustomiserTyper);
		void OnMaterialClicked(class UClass* CustomiserRecipe, int32_t ButtonIndex);
		void PopulateMenu();
		void Construct();
		void Destruct();
		void OnFocusLost(const struct FFocusEvent& InFocusEvent);
		void ExecuteUbergraph_BPW_BuildMenu_SubCategoryMaterialMenu(int32_t EntryPoint);
		void OnSetDefaultMaterialOnAll__DelegateSignature(class UClass* CustomiserRecipe);
		void OnDestructed__DelegateSignature();
		void OnDefaultMaterialHovered__DelegateSignature(class UClass* CustomiserRecipe, ECustomiserType CustomiserType);
		void OnDefaultMaterialChanged__DelegateSignature(class UClass* SubCategory, class UClass* NewDefaultMaterial);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
