/**
 * Name: Satisfactory
 * Version: Early_Access_CL#273254
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_BuildGunStatePaint.BP_BuildGunStatePaint_C.OpenCustomiserUI
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_BuildGunStatePaint_C::OpenCustomiserUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BuildGunStatePaint.BP_BuildGunStatePaint_C.OpenCustomiserUI");
		
		UBP_BuildGunStatePaint_C_OpenCustomiserUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_BuildGunStatePaint.BP_BuildGunStatePaint_C.EndState
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_BuildGunStatePaint_C::EndState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BuildGunStatePaint.BP_BuildGunStatePaint_C.EndState");
		
		UBP_BuildGunStatePaint_C_EndState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_BuildGunStatePaint.BP_BuildGunStatePaint_C.OnMaterialDescriptorChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      newMaterialDesc                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UBP_BuildGunStatePaint_C::OnMaterialDescriptorChanged(class UClass* newMaterialDesc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BuildGunStatePaint.BP_BuildGunStatePaint_C.OnMaterialDescriptorChanged");
		
		UBP_BuildGunStatePaint_C_OnMaterialDescriptorChanged_Params params {};
		params.newMaterialDesc = newMaterialDesc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_BuildGunStatePaint.BP_BuildGunStatePaint_C.OnPatternDescriptorChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      newPatternDesc                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UBP_BuildGunStatePaint_C::OnPatternDescriptorChanged(class UClass* newPatternDesc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BuildGunStatePaint.BP_BuildGunStatePaint_C.OnPatternDescriptorChanged");
		
		UBP_BuildGunStatePaint_C_OnPatternDescriptorChanged_Params params {};
		params.newPatternDesc = newPatternDesc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_BuildGunStatePaint.BP_BuildGunStatePaint_C.OnSwatchDescriptorChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      newColorDesc                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UBP_BuildGunStatePaint_C::OnSwatchDescriptorChanged(class UClass* newColorDesc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BuildGunStatePaint.BP_BuildGunStatePaint_C.OnSwatchDescriptorChanged");
		
		UBP_BuildGunStatePaint_C_OnSwatchDescriptorChanged_Params params {};
		params.newColorDesc = newColorDesc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_BuildGunStatePaint.BP_BuildGunStatePaint_C.OnHitStatusChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      hitBuildingDesc                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		bool                                               validSwatch                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               validPattern                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               validMaterial                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_BuildGunStatePaint_C::OnHitStatusChanged(class UClass* hitBuildingDesc, bool validSwatch, bool validPattern, bool validMaterial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BuildGunStatePaint.BP_BuildGunStatePaint_C.OnHitStatusChanged");
		
		UBP_BuildGunStatePaint_C_OnHitStatusChanged_Params params {};
		params.hitBuildingDesc = hitBuildingDesc;
		params.validSwatch = validSwatch;
		params.validPattern = validPattern;
		params.validMaterial = validMaterial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_BuildGunStatePaint.BP_BuildGunStatePaint_C.SecondaryFire
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_BuildGunStatePaint_C::SecondaryFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BuildGunStatePaint.BP_BuildGunStatePaint_C.SecondaryFire");
		
		UBP_BuildGunStatePaint_C_SecondaryFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_BuildGunStatePaint.BP_BuildGunStatePaint_C.BeginState
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_BuildGunStatePaint_C::BeginState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BuildGunStatePaint.BP_BuildGunStatePaint_C.BeginState");
		
		UBP_BuildGunStatePaint_C_BeginState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_BuildGunStatePaint.BP_BuildGunStatePaint_C.OnApplyCustomization
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      customizationDesc                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UBP_BuildGunStatePaint_C::OnApplyCustomization(class UClass* customizationDesc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BuildGunStatePaint.BP_BuildGunStatePaint_C.OnApplyCustomization");
		
		UBP_BuildGunStatePaint_C_OnApplyCustomization_Params params {};
		params.customizationDesc = customizationDesc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_BuildGunStatePaint.BP_BuildGunStatePaint_C.OnApplyCustomizationFailed
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_BuildGunStatePaint_C::OnApplyCustomizationFailed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BuildGunStatePaint.BP_BuildGunStatePaint_C.OnApplyCustomizationFailed");
		
		UBP_BuildGunStatePaint_C_OnApplyCustomizationFailed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_BuildGunStatePaint.BP_BuildGunStatePaint_C.OnSkinDescriptorChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      newSkinDesc                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UBP_BuildGunStatePaint_C::OnSkinDescriptorChanged(class UClass* newSkinDesc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BuildGunStatePaint.BP_BuildGunStatePaint_C.OnSkinDescriptorChanged");
		
		UBP_BuildGunStatePaint_C_OnSkinDescriptorChanged_Params params {};
		params.newSkinDesc = newSkinDesc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_BuildGunStatePaint.BP_BuildGunStatePaint_C.ExecuteUbergraph_BP_BuildGunStatePaint
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_BuildGunStatePaint_C::ExecuteUbergraph_BP_BuildGunStatePaint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BuildGunStatePaint.BP_BuildGunStatePaint_C.ExecuteUbergraph_BP_BuildGunStatePaint");
		
		UBP_BuildGunStatePaint_C_ExecuteUbergraph_BP_BuildGunStatePaint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_BuildGunStatePaint.BP_BuildGunStatePaint_C.OnApplyCustomisationFailed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_BuildGunStatePaint_C::OnApplyCustomisationFailed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BuildGunStatePaint.BP_BuildGunStatePaint_C.OnApplyCustomisationFailed__DelegateSignature");
		
		UBP_BuildGunStatePaint_C_OnApplyCustomisationFailed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_BuildGunStatePaint.BP_BuildGunStatePaint_C.OnApplyCustomisation__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      CustomisationDesc                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_BuildGunStatePaint_C::OnApplyCustomisation__DelegateSignature(class UClass* CustomisationDesc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BuildGunStatePaint.BP_BuildGunStatePaint_C.OnApplyCustomisation__DelegateSignature");
		
		UBP_BuildGunStatePaint_C_OnApplyCustomisation__DelegateSignature_Params params {};
		params.CustomisationDesc = CustomisationDesc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_BuildGunStatePaint.BP_BuildGunStatePaint_C.OnBuildGunHitStatusChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      BuildingDescriptor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               validSwatch                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               validPattern                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               validMaterial                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_BuildGunStatePaint_C::OnBuildGunHitStatusChanged__DelegateSignature(class UClass* BuildingDescriptor, bool validSwatch, bool validPattern, bool validMaterial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BuildGunStatePaint.BP_BuildGunStatePaint_C.OnBuildGunHitStatusChanged__DelegateSignature");
		
		UBP_BuildGunStatePaint_C_OnBuildGunHitStatusChanged__DelegateSignature_Params params {};
		params.BuildingDescriptor = BuildingDescriptor;
		params.validSwatch = validSwatch;
		params.validPattern = validPattern;
		params.validMaterial = validMaterial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_BuildGunStatePaint.BP_BuildGunStatePaint_C.OnCustomiserDescriptorChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ECustomiserType                                    CustomiserType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_BuildGunStatePaint_C::OnCustomiserDescriptorChanged__DelegateSignature(ECustomiserType CustomiserType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BuildGunStatePaint.BP_BuildGunStatePaint_C.OnCustomiserDescriptorChanged__DelegateSignature");
		
		UBP_BuildGunStatePaint_C_OnCustomiserDescriptorChanged__DelegateSignature_Params params {};
		params.CustomiserType = CustomiserType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_BuildGunStatePaint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_BuildGunStatePaint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BuildGunStatePaint.BP_BuildGunStatePaint_C");
		return ptr;
	}

}


