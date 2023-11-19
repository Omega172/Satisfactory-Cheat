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
	 * 		Name   -> Function Equip_Parachute.Equip_Parachute_C.Detach Parachute
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsThirdPerson                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_Parachute_C::DetachParachute(bool IsThirdPerson)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_Parachute.Equip_Parachute_C.Detach Parachute");
		
		AEquip_Parachute_C_DetachParachute_Params params {};
		params.IsThirdPerson = IsThirdPerson;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_Parachute.Equip_Parachute_C.OnParachuteHideDelayPassed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AEquip_Parachute_C::OnParachuteHideDelayPassed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_Parachute.Equip_Parachute_C.OnParachuteHideDelayPassed");
		
		AEquip_Parachute_C_OnParachuteHideDelayPassed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_Parachute.Equip_Parachute_C.OnDeployStop
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AEquip_Parachute_C::OnDeployStop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_Parachute.Equip_Parachute_C.OnDeployStop");
		
		AEquip_Parachute_C_OnDeployStop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_Parachute.Equip_Parachute_C.Attach Parachute
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsThirdPerson                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_Parachute_C::AttachParachute(bool IsThirdPerson)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_Parachute.Equip_Parachute_C.Attach Parachute");
		
		AEquip_Parachute_C_AttachParachute_Params params {};
		params.IsThirdPerson = IsThirdPerson;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_Parachute.Equip_Parachute_C.Spawn Third Person VFX
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USceneComponent*                             ParachuteMesh                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_Parachute_C::SpawnThirdPersonVFX(class USceneComponent* ParachuteMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_Parachute.Equip_Parachute_C.Spawn Third Person VFX");
		
		AEquip_Parachute_C_SpawnThirdPersonVFX_Params params {};
		params.ParachuteMesh = ParachuteMesh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_Parachute.Equip_Parachute_C.Spawn First Person VFX
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USceneComponent*                             ParachuteMesh                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_Parachute_C::SpawnFirstPersonVFX(class USceneComponent* ParachuteMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_Parachute.Equip_Parachute_C.Spawn First Person VFX");
		
		AEquip_Parachute_C_SpawnFirstPersonVFX_Params params {};
		params.ParachuteMesh = ParachuteMesh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_Parachute.Equip_Parachute_C.OnDeployed
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AEquip_Parachute_C::OnDeployed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_Parachute.Equip_Parachute_C.OnDeployed");
		
		AEquip_Parachute_C_OnDeployed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_Parachute.Equip_Parachute_C.On Parachute Camera Mode Changed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsThirdPersonNow                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_Parachute_C::OnParachuteCameraModeChanged(bool IsThirdPersonNow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_Parachute.Equip_Parachute_C.On Parachute Camera Mode Changed");
		
		AEquip_Parachute_C_OnParachuteCameraModeChanged_Params params {};
		params.IsThirdPersonNow = IsThirdPersonNow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_Parachute.Equip_Parachute_C.OnCameraModeChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		ECameraMode                                        newCameraMode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_Parachute_C::OnCameraModeChanged(ECameraMode newCameraMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_Parachute.Equip_Parachute_C.OnCameraModeChanged");
		
		AEquip_Parachute_C_OnCameraModeChanged_Params params {};
		params.newCameraMode = newCameraMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_Parachute.Equip_Parachute_C.ExecuteUbergraph_Equip_Parachute
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_Parachute_C::ExecuteUbergraph_Equip_Parachute(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_Parachute.Equip_Parachute_C.ExecuteUbergraph_Equip_Parachute");
		
		AEquip_Parachute_C_ExecuteUbergraph_Equip_Parachute_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AEquip_Parachute_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AEquip_Parachute_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Equip_Parachute.Equip_Parachute_C");
		return ptr;
	}

}


