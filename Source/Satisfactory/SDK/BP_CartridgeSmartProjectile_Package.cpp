/**
 * Name: Satisfactory
 * Version: Early_Access_CL#264901
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_CartridgeSmartProjectile.BP_CartridgeSmartProjectile_C.PlayAttachEffect
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_CartridgeSmartProjectile_C::PlayAttachEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CartridgeSmartProjectile.BP_CartridgeSmartProjectile_C.PlayAttachEffect");
		
		ABP_CartridgeSmartProjectile_C_PlayAttachEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_CartridgeSmartProjectile.BP_CartridgeSmartProjectile_C.OnImpact
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  HitResult                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_CartridgeSmartProjectile_C::OnImpact(const struct FHitResult& HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CartridgeSmartProjectile.BP_CartridgeSmartProjectile_C.OnImpact");
		
		ABP_CartridgeSmartProjectile_C_OnImpact_Params params {};
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_CartridgeSmartProjectile.BP_CartridgeSmartProjectile_C.ExecuteUbergraph_BP_CartridgeSmartProjectile
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CartridgeSmartProjectile_C::ExecuteUbergraph_BP_CartridgeSmartProjectile(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CartridgeSmartProjectile.BP_CartridgeSmartProjectile_C.ExecuteUbergraph_BP_CartridgeSmartProjectile");
		
		ABP_CartridgeSmartProjectile_C_ExecuteUbergraph_BP_CartridgeSmartProjectile_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_CartridgeSmartProjectile_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_CartridgeSmartProjectile_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CartridgeSmartProjectile.BP_CartridgeSmartProjectile_C");
		return ptr;
	}

}


