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
	 * 		Name   -> Function Desc_CartridgeSmartProjectile.Desc_CartridgeSmartProjectile_C.FireAmmunition
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UDesc_CartridgeSmartProjectile_C::FireAmmunition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desc_CartridgeSmartProjectile.Desc_CartridgeSmartProjectile_C.FireAmmunition");
		
		UDesc_CartridgeSmartProjectile_C_FireAmmunition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Desc_CartridgeSmartProjectile.Desc_CartridgeSmartProjectile_C.ExecuteUbergraph_Desc_CartridgeSmartProjectile
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDesc_CartridgeSmartProjectile_C::ExecuteUbergraph_Desc_CartridgeSmartProjectile(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desc_CartridgeSmartProjectile.Desc_CartridgeSmartProjectile_C.ExecuteUbergraph_Desc_CartridgeSmartProjectile");
		
		UDesc_CartridgeSmartProjectile_C_ExecuteUbergraph_Desc_CartridgeSmartProjectile_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDesc_CartridgeSmartProjectile_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDesc_CartridgeSmartProjectile_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Desc_CartridgeSmartProjectile.Desc_CartridgeSmartProjectile_C");
		return ptr;
	}

}


