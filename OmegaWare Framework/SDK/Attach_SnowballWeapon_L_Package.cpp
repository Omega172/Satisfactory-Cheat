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
	 * 		Name   -> Function Attach_SnowballWeapon_L.Attach_SnowballWeapon_L_C.PlayFireEffect
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UFGAmmoType*                                 ammoType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void AAttach_SnowballWeapon_L_C::PlayFireEffect(class UFGAmmoType* ammoType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Attach_SnowballWeapon_L.Attach_SnowballWeapon_L_C.PlayFireEffect");
		
		AAttach_SnowballWeapon_L_C_PlayFireEffect_Params params {};
		params.ammoType = ammoType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Attach_SnowballWeapon_L.Attach_SnowballWeapon_L_C.ClientPlayReloadEffect
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AAttach_SnowballWeapon_L_C::ClientPlayReloadEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Attach_SnowballWeapon_L.Attach_SnowballWeapon_L_C.ClientPlayReloadEffect");
		
		AAttach_SnowballWeapon_L_C_ClientPlayReloadEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Attach_SnowballWeapon_L.Attach_SnowballWeapon_L_C.ExecuteUbergraph_Attach_SnowballWeapon_L
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAttach_SnowballWeapon_L_C::ExecuteUbergraph_Attach_SnowballWeapon_L(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Attach_SnowballWeapon_L.Attach_SnowballWeapon_L_C.ExecuteUbergraph_Attach_SnowballWeapon_L");
		
		AAttach_SnowballWeapon_L_C_ExecuteUbergraph_Attach_SnowballWeapon_L_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAttach_SnowballWeapon_L_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAttach_SnowballWeapon_L_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Attach_SnowballWeapon_L.Attach_SnowballWeapon_L_C");
		return ptr;
	}

}


