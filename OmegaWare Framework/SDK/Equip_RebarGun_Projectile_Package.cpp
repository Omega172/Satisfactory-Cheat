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
	 * 		Name   -> Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.Play3pEquipEffects
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AEquip_RebarGun_Projectile_C::Play3pEquipEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.Play3pEquipEffects");
		
		AEquip_RebarGun_Projectile_C_Play3pEquipEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.Play1pEquipEffects
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AEquip_RebarGun_Projectile_C::Play1pEquipEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.Play1pEquipEffects");
		
		AEquip_RebarGun_Projectile_C_Play1pEquipEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.PlayGlobalEquipEffects
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AEquip_RebarGun_Projectile_C::PlayGlobalEquipEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.PlayGlobalEquipEffects");
		
		AEquip_RebarGun_Projectile_C_PlayGlobalEquipEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.Play3pReloadEffects
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               HasAmmoLeft                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_RebarGun_Projectile_C::Play3pReloadEffects(bool HasAmmoLeft)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.Play3pReloadEffects");
		
		AEquip_RebarGun_Projectile_C_Play3pReloadEffects_Params params {};
		params.HasAmmoLeft = HasAmmoLeft;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.Play1pReloadEffects
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               HasAmmoLeft                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_RebarGun_Projectile_C::Play1pReloadEffects(bool HasAmmoLeft)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.Play1pReloadEffects");
		
		AEquip_RebarGun_Projectile_C_Play1pReloadEffects_Params params {};
		params.HasAmmoLeft = HasAmmoLeft;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.PlayGlobalReloadEffects
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               HasAmmoLeft                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_RebarGun_Projectile_C::PlayGlobalReloadEffects(bool HasAmmoLeft)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.PlayGlobalReloadEffects");
		
		AEquip_RebarGun_Projectile_C_PlayGlobalReloadEffects_Params params {};
		params.HasAmmoLeft = HasAmmoLeft;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.Play3pFireEffects
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AEquip_RebarGun_Projectile_C::Play3pFireEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.Play3pFireEffects");
		
		AEquip_RebarGun_Projectile_C_Play3pFireEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.Play1pFireEffects
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AEquip_RebarGun_Projectile_C::Play1pFireEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.Play1pFireEffects");
		
		AEquip_RebarGun_Projectile_C_Play1pFireEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.PlayGlobalFireEffects
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AEquip_RebarGun_Projectile_C::PlayGlobalFireEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.PlayGlobalFireEffects");
		
		AEquip_RebarGun_Projectile_C_PlayGlobalFireEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.PlayGlobalUnequipEffects
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AEquip_RebarGun_Projectile_C::PlayGlobalUnequipEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.PlayGlobalUnequipEffects");
		
		AEquip_RebarGun_Projectile_C_PlayGlobalUnequipEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.PlayGlobalFailedToFireEffects
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AEquip_RebarGun_Projectile_C::PlayGlobalFailedToFireEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.PlayGlobalFailedToFireEffects");
		
		AEquip_RebarGun_Projectile_C_PlayGlobalFailedToFireEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.StopEquipSFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AEquip_RebarGun_Projectile_C::StopEquipSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.StopEquipSFX");
		
		AEquip_RebarGun_Projectile_C_StopEquipSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AEquip_RebarGun_Projectile_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.UserConstructionScript");
		
		AEquip_RebarGun_Projectile_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.WasEquipped
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AEquip_RebarGun_Projectile_C::WasEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.WasEquipped");
		
		AEquip_RebarGun_Projectile_C_WasEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.WasUnEquipped
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AEquip_RebarGun_Projectile_C::WasUnEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.WasUnEquipped");
		
		AEquip_RebarGun_Projectile_C_WasUnEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.PlayFailedToFireEffects
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AEquip_RebarGun_Projectile_C::PlayFailedToFireEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.PlayFailedToFireEffects");
		
		AEquip_RebarGun_Projectile_C_PlayFailedToFireEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.PlayReloadEffects
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               hadAmmoLeft                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_RebarGun_Projectile_C::PlayReloadEffects(bool hadAmmoLeft)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.PlayReloadEffects");
		
		AEquip_RebarGun_Projectile_C_PlayReloadEffects_Params params {};
		params.hadAmmoLeft = hadAmmoLeft;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.PlayFireEffect
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UFGAmmoType*                                 AmmoTypeObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_RebarGun_Projectile_C::PlayFireEffect(class UFGAmmoType* AmmoTypeObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.PlayFireEffect");
		
		AEquip_RebarGun_Projectile_C_PlayFireEffect_Params params {};
		params.AmmoTypeObject = AmmoTypeObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.ExecuteUbergraph_Equip_RebarGun_Projectile
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_RebarGun_Projectile_C::ExecuteUbergraph_Equip_RebarGun_Projectile(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C.ExecuteUbergraph_Equip_RebarGun_Projectile");
		
		AEquip_RebarGun_Projectile_C_ExecuteUbergraph_Equip_RebarGun_Projectile_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AEquip_RebarGun_Projectile_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AEquip_RebarGun_Projectile_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Equip_RebarGun_Projectile.Equip_RebarGun_Projectile_C");
		return ptr;
	}

}


