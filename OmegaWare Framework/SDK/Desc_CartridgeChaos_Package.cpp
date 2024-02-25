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
	 * 		Name   -> Function Desc_CartridgeChaos.Desc_CartridgeChaos_C.FireAmmunition
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UDesc_CartridgeChaos_C::FireAmmunition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desc_CartridgeChaos.Desc_CartridgeChaos_C.FireAmmunition");
		
		UDesc_CartridgeChaos_C_FireAmmunition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Desc_CartridgeChaos.Desc_CartridgeChaos_C.ProcessHit
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  HitResult                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void UDesc_CartridgeChaos_C::ProcessHit(const struct FHitResult& HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desc_CartridgeChaos.Desc_CartridgeChaos_C.ProcessHit");
		
		UDesc_CartridgeChaos_C_ProcessHit_Params params {};
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Desc_CartridgeChaos.Desc_CartridgeChaos_C.PlayEffects
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  HitResult                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void UDesc_CartridgeChaos_C::PlayEffects(const struct FHitResult& HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desc_CartridgeChaos.Desc_CartridgeChaos_C.PlayEffects");
		
		UDesc_CartridgeChaos_C_PlayEffects_Params params {};
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Desc_CartridgeChaos.Desc_CartridgeChaos_C.ExecuteUbergraph_Desc_CartridgeChaos
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDesc_CartridgeChaos_C::ExecuteUbergraph_Desc_CartridgeChaos(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desc_CartridgeChaos.Desc_CartridgeChaos_C.ExecuteUbergraph_Desc_CartridgeChaos");
		
		UDesc_CartridgeChaos_C_ExecuteUbergraph_Desc_CartridgeChaos_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDesc_CartridgeChaos_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDesc_CartridgeChaos_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Desc_CartridgeChaos.Desc_CartridgeChaos_C");
		return ptr;
	}

}


