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
	 * 		Name   -> Function EquipChild_SnowballWeapon.EquipChild_SnowballWeapon_C.OnEquip
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AFGCharacterPlayer*                          Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquipChild_SnowballWeapon_C::OnEquip(class AFGCharacterPlayer* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipChild_SnowballWeapon.EquipChild_SnowballWeapon_C.OnEquip");
		
		AEquipChild_SnowballWeapon_C_OnEquip_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function EquipChild_SnowballWeapon.EquipChild_SnowballWeapon_C.NotifyReloading
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               hadAmmoLeft                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquipChild_SnowballWeapon_C::NotifyReloading(bool hadAmmoLeft)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipChild_SnowballWeapon.EquipChild_SnowballWeapon_C.NotifyReloading");
		
		AEquipChild_SnowballWeapon_C_NotifyReloading_Params params {};
		params.hadAmmoLeft = hadAmmoLeft;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function EquipChild_SnowballWeapon.EquipChild_SnowballWeapon_C.NotifyBeginPrimaryFire
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AEquipChild_SnowballWeapon_C::NotifyBeginPrimaryFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipChild_SnowballWeapon.EquipChild_SnowballWeapon_C.NotifyBeginPrimaryFire");
		
		AEquipChild_SnowballWeapon_C_NotifyBeginPrimaryFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function EquipChild_SnowballWeapon.EquipChild_SnowballWeapon_C.NotifyPrimaryFireExecuted
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AEquipChild_SnowballWeapon_C::NotifyPrimaryFireExecuted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipChild_SnowballWeapon.EquipChild_SnowballWeapon_C.NotifyPrimaryFireExecuted");
		
		AEquipChild_SnowballWeapon_C_NotifyPrimaryFireExecuted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function EquipChild_SnowballWeapon.EquipChild_SnowballWeapon_C.NotifySetIsLoaded
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsLoaded                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquipChild_SnowballWeapon_C::NotifySetIsLoaded(bool IsLoaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipChild_SnowballWeapon.EquipChild_SnowballWeapon_C.NotifySetIsLoaded");
		
		AEquipChild_SnowballWeapon_C_NotifySetIsLoaded_Params params {};
		params.IsLoaded = IsLoaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function EquipChild_SnowballWeapon.EquipChild_SnowballWeapon_C.ExecuteUbergraph_EquipChild_SnowballWeapon
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquipChild_SnowballWeapon_C::ExecuteUbergraph_EquipChild_SnowballWeapon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipChild_SnowballWeapon.EquipChild_SnowballWeapon_C.ExecuteUbergraph_EquipChild_SnowballWeapon");
		
		AEquipChild_SnowballWeapon_C_ExecuteUbergraph_EquipChild_SnowballWeapon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AEquipChild_SnowballWeapon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AEquipChild_SnowballWeapon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass EquipChild_SnowballWeapon.EquipChild_SnowballWeapon_C");
		return ptr;
	}

}


