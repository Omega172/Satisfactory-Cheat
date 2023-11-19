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
	 * 		Name   -> Function Attach_Machinegun.Attach_Machinegun_C.PlayFireEffect
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UFGAmmoType*                                 ammoType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void AAttach_Machinegun_C::PlayFireEffect(class UFGAmmoType* ammoType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Attach_Machinegun.Attach_Machinegun_C.PlayFireEffect");
		
		AAttach_Machinegun_C_PlayFireEffect_Params params {};
		params.ammoType = ammoType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Attach_Machinegun.Attach_Machinegun_C.ClientPlayReloadEffect
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AAttach_Machinegun_C::ClientPlayReloadEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Attach_Machinegun.Attach_Machinegun_C.ClientPlayReloadEffect");
		
		AAttach_Machinegun_C_ClientPlayReloadEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Attach_Machinegun.Attach_Machinegun_C.ExecuteUbergraph_Attach_Machinegun
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAttach_Machinegun_C::ExecuteUbergraph_Attach_Machinegun(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Attach_Machinegun.Attach_Machinegun_C.ExecuteUbergraph_Attach_Machinegun");
		
		AAttach_Machinegun_C_ExecuteUbergraph_Attach_Machinegun_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAttach_Machinegun_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAttach_Machinegun_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Attach_Machinegun.Attach_Machinegun_C");
		return ptr;
	}

}


