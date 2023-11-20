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
	 * 		Name   -> Function Equip_Rifle.Equip_Rifle_C.Play3pReloadEffects
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AEquip_Rifle_C::Play3pReloadEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_Rifle.Equip_Rifle_C.Play3pReloadEffects");
		
		AEquip_Rifle_C_Play3pReloadEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_Rifle.Equip_Rifle_C.Play1pReloadEffects
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AEquip_Rifle_C::Play1pReloadEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_Rifle.Equip_Rifle_C.Play1pReloadEffects");
		
		AEquip_Rifle_C_Play1pReloadEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_Rifle.Equip_Rifle_C.Play3pEquipEffects
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AEquip_Rifle_C::Play3pEquipEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_Rifle.Equip_Rifle_C.Play3pEquipEffects");
		
		AEquip_Rifle_C_Play3pEquipEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_Rifle.Equip_Rifle_C.Play1pEquipEffects
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AEquip_Rifle_C::Play1pEquipEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_Rifle.Equip_Rifle_C.Play1pEquipEffects");
		
		AEquip_Rifle_C_Play1pEquipEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_Rifle.Equip_Rifle_C.Play3pFireEffects
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AEquip_Rifle_C::Play3pFireEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_Rifle.Equip_Rifle_C.Play3pFireEffects");
		
		AEquip_Rifle_C_Play3pFireEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_Rifle.Equip_Rifle_C.Play1pFireEffects
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AEquip_Rifle_C::Play1pFireEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_Rifle.Equip_Rifle_C.Play1pFireEffects");
		
		AEquip_Rifle_C_Play1pFireEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_Rifle.Equip_Rifle_C.GetWeaponMeshSocketLocation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        SocketName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FVector AEquip_Rifle_C::GetWeaponMeshSocketLocation(const class FName& SocketName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_Rifle.Equip_Rifle_C.GetWeaponMeshSocketLocation");
		
		AEquip_Rifle_C_GetWeaponMeshSocketLocation_Params params {};
		params.SocketName = SocketName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_Rifle.Equip_Rifle_C.SetReloadOnce
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AEquip_Rifle_C::SetReloadOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_Rifle.Equip_Rifle_C.SetReloadOnce");
		
		AEquip_Rifle_C_SetReloadOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_Rifle.Equip_Rifle_C.OnRep_mHasReloadedOnce
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AEquip_Rifle_C::OnRep_mHasReloadedOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_Rifle.Equip_Rifle_C.OnRep_mHasReloadedOnce");
		
		AEquip_Rifle_C_OnRep_mHasReloadedOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_Rifle.Equip_Rifle_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AEquip_Rifle_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_Rifle.Equip_Rifle_C.UserConstructionScript");
		
		AEquip_Rifle_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_Rifle.Equip_Rifle_C.PlayFireEffect
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UFGAmmoType*                                 AmmoTypeObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_Rifle_C::PlayFireEffect(class UFGAmmoType* AmmoTypeObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_Rifle.Equip_Rifle_C.PlayFireEffect");
		
		AEquip_Rifle_C_PlayFireEffect_Params params {};
		params.AmmoTypeObject = AmmoTypeObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_Rifle.Equip_Rifle_C.WasEquipped
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AEquip_Rifle_C::WasEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_Rifle.Equip_Rifle_C.WasEquipped");
		
		AEquip_Rifle_C_WasEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_Rifle.Equip_Rifle_C.PlayReloadEffects
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               hadAmmoLeft                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_Rifle_C::PlayReloadEffects(bool hadAmmoLeft)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_Rifle.Equip_Rifle_C.PlayReloadEffects");
		
		AEquip_Rifle_C_PlayReloadEffects_Params params {};
		params.hadAmmoLeft = hadAmmoLeft;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_Rifle.Equip_Rifle_C.PostLoadGame
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            saveVersion                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            GameVersion                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_Rifle_C::PostLoadGame(int32_t saveVersion, int32_t GameVersion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_Rifle.Equip_Rifle_C.PostLoadGame");
		
		AEquip_Rifle_C_PostLoadGame_Params params {};
		params.saveVersion = saveVersion;
		params.GameVersion = GameVersion;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_Rifle.Equip_Rifle_C.ExecuteUbergraph_Equip_Rifle
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_Rifle_C::ExecuteUbergraph_Equip_Rifle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_Rifle.Equip_Rifle_C.ExecuteUbergraph_Equip_Rifle");
		
		AEquip_Rifle_C_ExecuteUbergraph_Equip_Rifle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_Rifle.Equip_Rifle_C.Fire__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AEquip_Rifle_C::Fire__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_Rifle.Equip_Rifle_C.Fire__DelegateSignature");
		
		AEquip_Rifle_C_Fire__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AEquip_Rifle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AEquip_Rifle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Equip_Rifle.Equip_Rifle_C");
		return ptr;
	}

}


