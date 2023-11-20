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
	 * 		Name   -> Function Attach_SnowballWeapon_R.Attach_SnowballWeapon_R_C.OnIsLoadedSet
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AAttach_SnowballWeapon_R_C::OnIsLoadedSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Attach_SnowballWeapon_R.Attach_SnowballWeapon_R_C.OnIsLoadedSet");
		
		AAttach_SnowballWeapon_R_C_OnIsLoadedSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Attach_SnowballWeapon_R.Attach_SnowballWeapon_R_C.PlayFireEffect
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UFGAmmoType*                                 ammoType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void AAttach_SnowballWeapon_R_C::PlayFireEffect(class UFGAmmoType* ammoType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Attach_SnowballWeapon_R.Attach_SnowballWeapon_R_C.PlayFireEffect");
		
		AAttach_SnowballWeapon_R_C_PlayFireEffect_Params params {};
		params.ammoType = ammoType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Attach_SnowballWeapon_R.Attach_SnowballWeapon_R_C.OnBeginFireEffect
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAttach_SnowballWeapon_R_C::OnBeginFireEffect(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Attach_SnowballWeapon_R.Attach_SnowballWeapon_R_C.OnBeginFireEffect");
		
		AAttach_SnowballWeapon_R_C_OnBeginFireEffect_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Attach_SnowballWeapon_R.Attach_SnowballWeapon_R_C.OnAttach
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AAttach_SnowballWeapon_R_C::OnAttach()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Attach_SnowballWeapon_R.Attach_SnowballWeapon_R_C.OnAttach");
		
		AAttach_SnowballWeapon_R_C_OnAttach_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Attach_SnowballWeapon_R.Attach_SnowballWeapon_R_C.ClientPlayReloadEffect
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AAttach_SnowballWeapon_R_C::ClientPlayReloadEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Attach_SnowballWeapon_R.Attach_SnowballWeapon_R_C.ClientPlayReloadEffect");
		
		AAttach_SnowballWeapon_R_C_ClientPlayReloadEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Attach_SnowballWeapon_R.Attach_SnowballWeapon_R_C.ExecuteUbergraph_Attach_SnowballWeapon_R
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAttach_SnowballWeapon_R_C::ExecuteUbergraph_Attach_SnowballWeapon_R(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Attach_SnowballWeapon_R.Attach_SnowballWeapon_R_C.ExecuteUbergraph_Attach_SnowballWeapon_R");
		
		AAttach_SnowballWeapon_R_C_ExecuteUbergraph_Attach_SnowballWeapon_R_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAttach_SnowballWeapon_R_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAttach_SnowballWeapon_R_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Attach_SnowballWeapon_R.Attach_SnowballWeapon_R_C");
		return ptr;
	}

}


