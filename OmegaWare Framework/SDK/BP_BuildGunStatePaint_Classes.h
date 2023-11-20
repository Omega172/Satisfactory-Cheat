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
	 * BlueprintGeneratedClass BP_BuildGunStatePaint.BP_BuildGunStatePaint_C
	 * Size -> 0x0058 (FullSize[0x01B8] - InheritedSize[0x0160])
	 */
	class UBP_BuildGunStatePaint_C : public UFGBuildGunStatePaint
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0160(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FScriptMulticastDelegate                             OnCustomiserDescriptorChanged;                           // 0x0168(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UFGInteractWidget*                                   mCustomizerMenu;                                         // 0x0178(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnBuildGunHitStatusChanged;                              // 0x0180(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnApplyCustomisation;                                    // 0x0190(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnApplyCustomisationFailed;                              // 0x01A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UAkComponent*                                        mCustomizerSelect;                                       // 0x01B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash

	public:
		void OpenCustomiserUI();
		void EndState();
		void OnMaterialDescriptorChanged(class UClass* newMaterialDesc);
		void OnPatternDescriptorChanged(class UClass* newPatternDesc);
		void OnSwatchDescriptorChanged(class UClass* newColorDesc);
		void OnHitStatusChanged(class UClass* hitBuildingDesc, bool validSwatch, bool validPattern, bool validMaterial);
		void SecondaryFire();
		void BeginState();
		void OnApplyCustomization(class UClass* customizationDesc);
		void OnApplyCustomizationFailed();
		void OnSkinDescriptorChanged(class UClass* newSkinDesc);
		void ExecuteUbergraph_BP_BuildGunStatePaint(int32_t EntryPoint);
		void OnApplyCustomisationFailed__DelegateSignature();
		void OnApplyCustomisation__DelegateSignature(class UClass* CustomisationDesc);
		void OnBuildGunHitStatusChanged__DelegateSignature(class UClass* BuildingDescriptor, bool validSwatch, bool validPattern, bool validMaterial);
		void OnCustomiserDescriptorChanged__DelegateSignature(ECustomiserType CustomiserType);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
