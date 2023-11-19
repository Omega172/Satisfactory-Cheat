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
	 * 		Name   -> Function Desc_AmmoProjectileMultiShot.Desc_AmmoProjectileMultiShot_C.UpdateProjectileLobeSpeed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGProjectile*                               Projectile                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UDesc_AmmoProjectileMultiShot_C::UpdateProjectileLobeSpeed(class AFGProjectile* Projectile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desc_AmmoProjectileMultiShot.Desc_AmmoProjectileMultiShot_C.UpdateProjectileLobeSpeed");
		
		UDesc_AmmoProjectileMultiShot_C_UpdateProjectileLobeSpeed_Params params {};
		params.Projectile = Projectile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Desc_AmmoProjectileMultiShot.Desc_AmmoProjectileMultiShot_C.UpdateFiringTransform
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UDesc_AmmoProjectileMultiShot_C::UpdateFiringTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desc_AmmoProjectileMultiShot.Desc_AmmoProjectileMultiShot_C.UpdateFiringTransform");
		
		UDesc_AmmoProjectileMultiShot_C_UpdateFiringTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Desc_AmmoProjectileMultiShot.Desc_AmmoProjectileMultiShot_C.GetSubProjectileSpawnRotation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     SuggestedLobeTossVelocity                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FRotator UDesc_AmmoProjectileMultiShot_C::GetSubProjectileSpawnRotation(struct FVector* SuggestedLobeTossVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desc_AmmoProjectileMultiShot.Desc_AmmoProjectileMultiShot_C.GetSubProjectileSpawnRotation");
		
		UDesc_AmmoProjectileMultiShot_C_GetSubProjectileSpawnRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SuggestedLobeTossVelocity != nullptr)
			*SuggestedLobeTossVelocity = params.SuggestedLobeTossVelocity;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Desc_AmmoProjectileMultiShot.Desc_AmmoProjectileMultiShot_C.FireAmmunition
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UDesc_AmmoProjectileMultiShot_C::FireAmmunition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desc_AmmoProjectileMultiShot.Desc_AmmoProjectileMultiShot_C.FireAmmunition");
		
		UDesc_AmmoProjectileMultiShot_C_FireAmmunition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Desc_AmmoProjectileMultiShot.Desc_AmmoProjectileMultiShot_C.OnAmmoFired
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      SpawnedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UDesc_AmmoProjectileMultiShot_C::OnAmmoFired(class AActor* SpawnedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desc_AmmoProjectileMultiShot.Desc_AmmoProjectileMultiShot_C.OnAmmoFired");
		
		UDesc_AmmoProjectileMultiShot_C_OnAmmoFired_Params params {};
		params.SpawnedActor = SpawnedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Desc_AmmoProjectileMultiShot.Desc_AmmoProjectileMultiShot_C.ActivateProjectiles
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UDesc_AmmoProjectileMultiShot_C::ActivateProjectiles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desc_AmmoProjectileMultiShot.Desc_AmmoProjectileMultiShot_C.ActivateProjectiles");
		
		UDesc_AmmoProjectileMultiShot_C_ActivateProjectiles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Desc_AmmoProjectileMultiShot.Desc_AmmoProjectileMultiShot_C.InitializeAmmoType
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGWeapon*                                   Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Force                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDesc_AmmoProjectileMultiShot_C::InitializeAmmoType(class AFGWeapon* Weapon, bool Force)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desc_AmmoProjectileMultiShot.Desc_AmmoProjectileMultiShot_C.InitializeAmmoType");
		
		UDesc_AmmoProjectileMultiShot_C_InitializeAmmoType_Params params {};
		params.Weapon = Weapon;
		params.Force = Force;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Desc_AmmoProjectileMultiShot.Desc_AmmoProjectileMultiShot_C.ExecuteUbergraph_Desc_AmmoProjectileMultiShot
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDesc_AmmoProjectileMultiShot_C::ExecuteUbergraph_Desc_AmmoProjectileMultiShot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desc_AmmoProjectileMultiShot.Desc_AmmoProjectileMultiShot_C.ExecuteUbergraph_Desc_AmmoProjectileMultiShot");
		
		UDesc_AmmoProjectileMultiShot_C_ExecuteUbergraph_Desc_AmmoProjectileMultiShot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDesc_AmmoProjectileMultiShot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDesc_AmmoProjectileMultiShot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Desc_AmmoProjectileMultiShot.Desc_AmmoProjectileMultiShot_C");
		return ptr;
	}

}


