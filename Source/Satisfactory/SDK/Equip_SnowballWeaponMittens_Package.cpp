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
	 * 		Name   -> Function Equip_SnowballWeaponMittens.Equip_SnowballWeaponMittens_C.PlayReloadEffects
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               hadAmmoLeft                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_SnowballWeaponMittens_C::PlayReloadEffects(bool hadAmmoLeft)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_SnowballWeaponMittens.Equip_SnowballWeaponMittens_C.PlayReloadEffects");
		
		AEquip_SnowballWeaponMittens_C_PlayReloadEffects_Params params {};
		params.hadAmmoLeft = hadAmmoLeft;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_SnowballWeaponMittens.Equip_SnowballWeaponMittens_C.OnSecondaryFirePressed
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AEquip_SnowballWeaponMittens_C::OnSecondaryFirePressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_SnowballWeaponMittens.Equip_SnowballWeaponMittens_C.OnSecondaryFirePressed");
		
		AEquip_SnowballWeaponMittens_C_OnSecondaryFirePressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_SnowballWeaponMittens.Equip_SnowballWeaponMittens_C.PlayFireReleasedEffects
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AEquip_SnowballWeaponMittens_C::PlayFireReleasedEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_SnowballWeaponMittens.Equip_SnowballWeaponMittens_C.PlayFireReleasedEffects");
		
		AEquip_SnowballWeaponMittens_C_PlayFireReleasedEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_SnowballWeaponMittens.Equip_SnowballWeaponMittens_C.PlayFireEffect
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UFGAmmoType*                                 AmmoTypeObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_SnowballWeaponMittens_C::PlayFireEffect(class UFGAmmoType* AmmoTypeObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_SnowballWeaponMittens.Equip_SnowballWeaponMittens_C.PlayFireEffect");
		
		AEquip_SnowballWeaponMittens_C_PlayFireEffect_Params params {};
		params.AmmoTypeObject = AmmoTypeObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_SnowballWeaponMittens.Equip_SnowballWeaponMittens_C.WasUnEquipped
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AEquip_SnowballWeaponMittens_C::WasUnEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_SnowballWeaponMittens.Equip_SnowballWeaponMittens_C.WasUnEquipped");
		
		AEquip_SnowballWeaponMittens_C_WasUnEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_SnowballWeaponMittens.Equip_SnowballWeaponMittens_C.WasEquipped
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AEquip_SnowballWeaponMittens_C::WasEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_SnowballWeaponMittens.Equip_SnowballWeaponMittens_C.WasEquipped");
		
		AEquip_SnowballWeaponMittens_C_WasEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_SnowballWeaponMittens.Equip_SnowballWeaponMittens_C.OnPrimaryFireEnded
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AEquip_SnowballWeaponMittens_C::OnPrimaryFireEnded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_SnowballWeaponMittens.Equip_SnowballWeaponMittens_C.OnPrimaryFireEnded");
		
		AEquip_SnowballWeaponMittens_C_OnPrimaryFireEnded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_SnowballWeaponMittens.Equip_SnowballWeaponMittens_C.Multicast_Throw Release
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             ChargePercent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_SnowballWeaponMittens_C::Multicast_ThrowRelease(double ChargePercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_SnowballWeaponMittens.Equip_SnowballWeaponMittens_C.Multicast_Throw Release");
		
		AEquip_SnowballWeaponMittens_C_Multicast_ThrowRelease_Params params {};
		params.ChargePercent = ChargePercent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_SnowballWeaponMittens.Equip_SnowballWeaponMittens_C.ExecuteUbergraph_Equip_SnowballWeaponMittens
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_SnowballWeaponMittens_C::ExecuteUbergraph_Equip_SnowballWeaponMittens(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_SnowballWeaponMittens.Equip_SnowballWeaponMittens_C.ExecuteUbergraph_Equip_SnowballWeaponMittens");
		
		AEquip_SnowballWeaponMittens_C_ExecuteUbergraph_Equip_SnowballWeaponMittens_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AEquip_SnowballWeaponMittens_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AEquip_SnowballWeaponMittens_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Equip_SnowballWeaponMittens.Equip_SnowballWeaponMittens_C");
		return ptr;
	}

}


