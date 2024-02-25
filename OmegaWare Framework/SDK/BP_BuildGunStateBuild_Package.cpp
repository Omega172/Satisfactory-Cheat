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
	 * 		Name   -> Function BP_BuildGunStateBuild.BP_BuildGunStateBuild_C.PrimaryFire
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_BuildGunStateBuild_C::PrimaryFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BuildGunStateBuild.BP_BuildGunStateBuild_C.PrimaryFire");
		
		UBP_BuildGunStateBuild_C_PrimaryFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_BuildGunStateBuild.BP_BuildGunStateBuild_C.EndState
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_BuildGunStateBuild_C::EndState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BuildGunStateBuild.BP_BuildGunStateBuild_C.EndState");
		
		UBP_BuildGunStateBuild_C_EndState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_BuildGunStateBuild.BP_BuildGunStateBuild_C.BeginState
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_BuildGunStateBuild_C::BeginState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BuildGunStateBuild.BP_BuildGunStateBuild_C.BeginState");
		
		UBP_BuildGunStateBuild_C_BeginState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_BuildGunStateBuild.BP_BuildGunStateBuild_C.OnResetHologram
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UBP_BuildGunStateBuild_C::OnResetHologram()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BuildGunStateBuild.BP_BuildGunStateBuild_C.OnResetHologram");
		
		UBP_BuildGunStateBuild_C_OnResetHologram_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_BuildGunStateBuild.BP_BuildGunStateBuild_C.OnMultiStepPlacement
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isFinalStep                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_BuildGunStateBuild_C::OnMultiStepPlacement(bool isFinalStep)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BuildGunStateBuild.BP_BuildGunStateBuild_C.OnMultiStepPlacement");
		
		UBP_BuildGunStateBuild_C_OnMultiStepPlacement_Params params {};
		params.isFinalStep = isFinalStep;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_BuildGunStateBuild.BP_BuildGunStateBuild_C.OpenBuildModeUI
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_BuildGunStateBuild_C::OpenBuildModeUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BuildGunStateBuild.BP_BuildGunStateBuild_C.OpenBuildModeUI");
		
		UBP_BuildGunStateBuild_C_OpenBuildModeUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_BuildGunStateBuild.BP_BuildGunStateBuild_C.OnRecipeSampled
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      recipe                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UBP_BuildGunStateBuild_C::OnRecipeSampled(class UClass* recipe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BuildGunStateBuild.BP_BuildGunStateBuild_C.OnRecipeSampled");
		
		UBP_BuildGunStateBuild_C_OnRecipeSampled_Params params {};
		params.recipe = recipe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_BuildGunStateBuild.BP_BuildGunStateBuild_C.ShowBuildModeSelectUI
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_BuildGunStateBuild_C::ShowBuildModeSelectUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BuildGunStateBuild.BP_BuildGunStateBuild_C.ShowBuildModeSelectUI");
		
		UBP_BuildGunStateBuild_C_ShowBuildModeSelectUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_BuildGunStateBuild.BP_BuildGunStateBuild_C.CloseBuildModeSelectUI
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_BuildGunStateBuild_C::CloseBuildModeSelectUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BuildGunStateBuild.BP_BuildGunStateBuild_C.CloseBuildModeSelectUI");
		
		UBP_BuildGunStateBuild_C_CloseBuildModeSelectUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_BuildGunStateBuild.BP_BuildGunStateBuild_C.OnZoopUpdated
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		float                                              currentZoop                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              maxZoop                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     zoopLocation                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_BuildGunStateBuild_C::OnZoopUpdated(float currentZoop, float maxZoop, const struct FVector& zoopLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BuildGunStateBuild.BP_BuildGunStateBuild_C.OnZoopUpdated");
		
		UBP_BuildGunStateBuild_C_OnZoopUpdated_Params params {};
		params.currentZoop = currentZoop;
		params.maxZoop = maxZoop;
		params.zoopLocation = zoopLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_BuildGunStateBuild.BP_BuildGunStateBuild_C.SecondaryFire
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_BuildGunStateBuild_C::SecondaryFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BuildGunStateBuild.BP_BuildGunStateBuild_C.SecondaryFire");
		
		UBP_BuildGunStateBuild_C_SecondaryFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_BuildGunStateBuild.BP_BuildGunStateBuild_C.Scroll
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Delta                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_BuildGunStateBuild_C::Scroll(int32_t Delta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BuildGunStateBuild.BP_BuildGunStateBuild_C.Scroll");
		
		UBP_BuildGunStateBuild_C_Scroll_Params params {};
		params.Delta = Delta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_BuildGunStateBuild.BP_BuildGunStateBuild_C.ExecuteUbergraph_BP_BuildGunStateBuild
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_BuildGunStateBuild_C::ExecuteUbergraph_BP_BuildGunStateBuild(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BuildGunStateBuild.BP_BuildGunStateBuild_C.ExecuteUbergraph_BP_BuildGunStateBuild");
		
		UBP_BuildGunStateBuild_C_ExecuteUbergraph_BP_BuildGunStateBuild_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_BuildGunStateBuild_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_BuildGunStateBuild_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BuildGunStateBuild.BP_BuildGunStateBuild_C");
		return ptr;
	}

}


