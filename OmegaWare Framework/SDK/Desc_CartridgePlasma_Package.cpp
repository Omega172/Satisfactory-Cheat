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
	 * 		Name   -> Function Desc_CartridgePlasma.Desc_CartridgePlasma_C.UpdateBeamEndPoint
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UDesc_CartridgePlasma_C::UpdateBeamEndPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desc_CartridgePlasma.Desc_CartridgePlasma_C.UpdateBeamEndPoint");
		
		UDesc_CartridgePlasma_C_UpdateBeamEndPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Desc_CartridgePlasma.Desc_CartridgePlasma_C.Stop Weapon Effect
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UDesc_CartridgePlasma_C::StopWeaponEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desc_CartridgePlasma.Desc_CartridgePlasma_C.Stop Weapon Effect");
		
		UDesc_CartridgePlasma_C_StopWeaponEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Desc_CartridgePlasma.Desc_CartridgePlasma_C.StartWeaponEffect
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UDesc_CartridgePlasma_C::StartWeaponEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desc_CartridgePlasma.Desc_CartridgePlasma_C.StartWeaponEffect");
		
		UDesc_CartridgePlasma_C_StartWeaponEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Desc_CartridgePlasma.Desc_CartridgePlasma_C.OnBeginFire
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UDesc_CartridgePlasma_C::OnBeginFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desc_CartridgePlasma.Desc_CartridgePlasma_C.OnBeginFire");
		
		UDesc_CartridgePlasma_C_OnBeginFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Desc_CartridgePlasma.Desc_CartridgePlasma_C.OnEndFire
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UDesc_CartridgePlasma_C::OnEndFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desc_CartridgePlasma.Desc_CartridgePlasma_C.OnEndFire");
		
		UDesc_CartridgePlasma_C_OnEndFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Desc_CartridgePlasma.Desc_CartridgePlasma_C.AmmoTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDesc_CartridgePlasma_C::AmmoTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desc_CartridgePlasma.Desc_CartridgePlasma_C.AmmoTick");
		
		UDesc_CartridgePlasma_C_AmmoTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Desc_CartridgePlasma.Desc_CartridgePlasma_C.ExecuteUbergraph_Desc_CartridgePlasma
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDesc_CartridgePlasma_C::ExecuteUbergraph_Desc_CartridgePlasma(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desc_CartridgePlasma.Desc_CartridgePlasma_C.ExecuteUbergraph_Desc_CartridgePlasma");
		
		UDesc_CartridgePlasma_C_ExecuteUbergraph_Desc_CartridgePlasma_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDesc_CartridgePlasma_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDesc_CartridgePlasma_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Desc_CartridgePlasma.Desc_CartridgePlasma_C");
		return ptr;
	}

}


