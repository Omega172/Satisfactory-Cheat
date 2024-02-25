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
	 * 		RVA    -> 0x6EBCBAD40
	 * 		Name   -> Function ChaosVehicles.ChaosVehicleMovementComponent.SetYawInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Yaw                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosVehicleMovementComponent::SetYawInput(float Yaw)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosVehicleMovementComponent.SetYawInput");
		
		UChaosVehicleMovementComponent_SetYawInput_Params params {};
		params.Yaw = Yaw;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCBACB0
	 * 		Name   -> Function ChaosVehicles.ChaosVehicleMovementComponent.SetUseAutomaticGears
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bUseAuto                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosVehicleMovementComponent::SetUseAutomaticGears(bool bUseAuto)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosVehicleMovementComponent.SetUseAutomaticGears");
		
		UChaosVehicleMovementComponent_SetUseAutomaticGears_Params params {};
		params.bUseAuto = bUseAuto;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCBAC20
	 * 		Name   -> Function ChaosVehicles.ChaosVehicleMovementComponent.SetThrottleInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Throttle                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosVehicleMovementComponent::SetThrottleInput(float Throttle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosVehicleMovementComponent.SetThrottleInput");
		
		UChaosVehicleMovementComponent_SetThrottleInput_Params params {};
		params.Throttle = Throttle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCBAB50
	 * 		Name   -> Function ChaosVehicles.ChaosVehicleMovementComponent.SetTargetGear
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            GearNum                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bImmediate                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosVehicleMovementComponent::SetTargetGear(int32_t GearNum, bool bImmediate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosVehicleMovementComponent.SetTargetGear");
		
		UChaosVehicleMovementComponent_SetTargetGear_Params params {};
		params.GearNum = GearNum;
		params.bImmediate = bImmediate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCBAAC0
	 * 		Name   -> Function ChaosVehicles.ChaosVehicleMovementComponent.SetSteeringInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Steering                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosVehicleMovementComponent::SetSteeringInput(float Steering)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosVehicleMovementComponent.SetSteeringInput");
		
		UChaosVehicleMovementComponent_SetSteeringInput_Params params {};
		params.Steering = Steering;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCBAA30
	 * 		Name   -> Function ChaosVehicles.ChaosVehicleMovementComponent.SetSleeping
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnableSleep                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosVehicleMovementComponent::SetSleeping(bool bEnableSleep)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosVehicleMovementComponent.SetSleeping");
		
		UChaosVehicleMovementComponent_SetSleeping_Params params {};
		params.bEnableSleep = bEnableSleep;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCBA9A0
	 * 		Name   -> Function ChaosVehicles.ChaosVehicleMovementComponent.SetRollInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Roll                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosVehicleMovementComponent::SetRollInput(float Roll)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosVehicleMovementComponent.SetRollInput");
		
		UChaosVehicleMovementComponent_SetRollInput_Params params {};
		params.Roll = Roll;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCBA910
	 * 		Name   -> Function ChaosVehicles.ChaosVehicleMovementComponent.SetRequiresControllerForInputs
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bRequiresController                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosVehicleMovementComponent::SetRequiresControllerForInputs(bool bRequiresController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosVehicleMovementComponent.SetRequiresControllerForInputs");
		
		UChaosVehicleMovementComponent_SetRequiresControllerForInputs_Params params {};
		params.bRequiresController = bRequiresController;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCBA880
	 * 		Name   -> Function ChaosVehicles.ChaosVehicleMovementComponent.SetPitchInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Pitch                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosVehicleMovementComponent::SetPitchInput(float Pitch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosVehicleMovementComponent.SetPitchInput");
		
		UChaosVehicleMovementComponent_SetPitchInput_Params params {};
		params.Pitch = Pitch;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCBA7F0
	 * 		Name   -> Function ChaosVehicles.ChaosVehicleMovementComponent.SetParked
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bParked                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosVehicleMovementComponent::SetParked(bool bParked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosVehicleMovementComponent.SetParked");
		
		UChaosVehicleMovementComponent_SetParked_Params params {};
		params.bParked = bParked;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCBA760
	 * 		Name   -> Function ChaosVehicles.ChaosVehicleMovementComponent.SetHandbrakeInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bNewHandbrake                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosVehicleMovementComponent::SetHandbrakeInput(bool bNewHandbrake)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosVehicleMovementComponent.SetHandbrakeInput");
		
		UChaosVehicleMovementComponent_SetHandbrakeInput_Params params {};
		params.bNewHandbrake = bNewHandbrake;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCBA6D0
	 * 		Name   -> Function ChaosVehicles.ChaosVehicleMovementComponent.SetChangeUpInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bNewGearUp                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosVehicleMovementComponent::SetChangeUpInput(bool bNewGearUp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosVehicleMovementComponent.SetChangeUpInput");
		
		UChaosVehicleMovementComponent_SetChangeUpInput_Params params {};
		params.bNewGearUp = bNewGearUp;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCBA640
	 * 		Name   -> Function ChaosVehicles.ChaosVehicleMovementComponent.SetChangeDownInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bNewGearDown                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosVehicleMovementComponent::SetChangeDownInput(bool bNewGearDown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosVehicleMovementComponent.SetChangeDownInput");
		
		UChaosVehicleMovementComponent_SetChangeDownInput_Params params {};
		params.bNewGearDown = bNewGearDown;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCBA5B0
	 * 		Name   -> Function ChaosVehicles.ChaosVehicleMovementComponent.SetBrakeInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Brake                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosVehicleMovementComponent::SetBrakeInput(float Brake)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosVehicleMovementComponent.SetBrakeInput");
		
		UChaosVehicleMovementComponent_SetBrakeInput_Params params {};
		params.Brake = Brake;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCBA2B0
	 * 		Name   -> Function ChaosVehicles.ChaosVehicleMovementComponent.ServerUpdateState
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		float                                              InSteeringInput                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InThrottleInput                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InBrakeInput                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InHandbrakeInput                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InCurrentGear                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InRollInput                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InPitchInput                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InYawInput                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosVehicleMovementComponent::ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int32_t InCurrentGear, float InRollInput, float InPitchInput, float InYawInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosVehicleMovementComponent.ServerUpdateState");
		
		UChaosVehicleMovementComponent_ServerUpdateState_Params params {};
		params.InSteeringInput = InSteeringInput;
		params.InThrottleInput = InThrottleInput;
		params.InBrakeInput = InBrakeInput;
		params.InHandbrakeInput = InHandbrakeInput;
		params.InCurrentGear = InCurrentGear;
		params.InRollInput = InRollInput;
		params.InPitchInput = InPitchInput;
		params.InYawInput = InYawInput;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCBA290
	 * 		Name   -> Function ChaosVehicles.ChaosVehicleMovementComponent.ResetVehicle
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UChaosVehicleMovementComponent::ResetVehicle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosVehicleMovementComponent.ResetVehicle");
		
		UChaosVehicleMovementComponent_ResetVehicle_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCBA260
	 * 		Name   -> Function ChaosVehicles.ChaosVehicleMovementComponent.IsParked
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UChaosVehicleMovementComponent::IsParked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosVehicleMovementComponent.IsParked");
		
		UChaosVehicleMovementComponent_IsParked_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCBA1A0
	 * 		Name   -> Function ChaosVehicles.ChaosVehicleMovementComponent.IncreaseThrottleInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              ThrottleDelta                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosVehicleMovementComponent::IncreaseThrottleInput(float ThrottleDelta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosVehicleMovementComponent.IncreaseThrottleInput");
		
		UChaosVehicleMovementComponent_IncreaseThrottleInput_Params params {};
		params.ThrottleDelta = ThrottleDelta;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCBA110
	 * 		Name   -> Function ChaosVehicles.ChaosVehicleMovementComponent.GetUseAutoGears
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UChaosVehicleMovementComponent::GetUseAutoGears()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosVehicleMovementComponent.GetUseAutoGears");
		
		UChaosVehicleMovementComponent_GetUseAutoGears_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCBA0F0
	 * 		Name   -> Function ChaosVehicles.ChaosVehicleMovementComponent.GetThrottleInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	float UChaosVehicleMovementComponent::GetThrottleInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosVehicleMovementComponent.GetThrottleInput");
		
		UChaosVehicleMovementComponent_GetThrottleInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCBA0C0
	 * 		Name   -> Function ChaosVehicles.ChaosVehicleMovementComponent.GetTargetGear
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UChaosVehicleMovementComponent::GetTargetGear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosVehicleMovementComponent.GetTargetGear");
		
		UChaosVehicleMovementComponent_GetTargetGear_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCBA030
	 * 		Name   -> Function ChaosVehicles.ChaosVehicleMovementComponent.GetSteeringInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	float UChaosVehicleMovementComponent::GetSteeringInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosVehicleMovementComponent.GetSteeringInput");
		
		UChaosVehicleMovementComponent_GetSteeringInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCB9F70
	 * 		Name   -> Function ChaosVehicles.ChaosVehicleMovementComponent.GetHandbrakeInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UChaosVehicleMovementComponent::GetHandbrakeInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosVehicleMovementComponent.GetHandbrakeInput");
		
		UChaosVehicleMovementComponent_GetHandbrakeInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCB9F40
	 * 		Name   -> Function ChaosVehicles.ChaosVehicleMovementComponent.GetForwardSpeedMPH
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UChaosVehicleMovementComponent::GetForwardSpeedMPH()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosVehicleMovementComponent.GetForwardSpeedMPH");
		
		UChaosVehicleMovementComponent_GetForwardSpeedMPH_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCB9F10
	 * 		Name   -> Function ChaosVehicles.ChaosVehicleMovementComponent.GetForwardSpeed
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UChaosVehicleMovementComponent::GetForwardSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosVehicleMovementComponent.GetForwardSpeed");
		
		UChaosVehicleMovementComponent_GetForwardSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCB9EE0
	 * 		Name   -> Function ChaosVehicles.ChaosVehicleMovementComponent.GetCurrentGear
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UChaosVehicleMovementComponent::GetCurrentGear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosVehicleMovementComponent.GetCurrentGear");
		
		UChaosVehicleMovementComponent_GetCurrentGear_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCB9EC0
	 * 		Name   -> Function ChaosVehicles.ChaosVehicleMovementComponent.GetBrakeInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	float UChaosVehicleMovementComponent::GetBrakeInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosVehicleMovementComponent.GetBrakeInput");
		
		UChaosVehicleMovementComponent_GetBrakeInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCB9E00
	 * 		Name   -> Function ChaosVehicles.ChaosVehicleMovementComponent.EnableSelfRighting
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               InState                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosVehicleMovementComponent::EnableSelfRighting(bool InState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosVehicleMovementComponent.EnableSelfRighting");
		
		UChaosVehicleMovementComponent_EnableSelfRighting_Params params {};
		params.InState = InState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCB9D70
	 * 		Name   -> Function ChaosVehicles.ChaosVehicleMovementComponent.DecreaseThrottleInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              ThrottleDelta                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosVehicleMovementComponent::DecreaseThrottleInput(float ThrottleDelta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosVehicleMovementComponent.DecreaseThrottleInput");
		
		UChaosVehicleMovementComponent_DecreaseThrottleInput_Params params {};
		params.ThrottleDelta = ThrottleDelta;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChaosVehicleMovementComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChaosVehicleMovementComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ChaosVehicles.ChaosVehicleMovementComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCBA230
	 * 		Name   -> Function ChaosVehicles.ChaosVehicleWheel.IsInAir
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UChaosVehicleWheel::IsInAir()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosVehicleWheel.IsInAir");
		
		UChaosVehicleWheel_IsInAir_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCBA170
	 * 		Name   -> Function ChaosVehicles.ChaosVehicleWheel.GetWheelRadius
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UChaosVehicleWheel::GetWheelRadius()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosVehicleWheel.GetWheelRadius");
		
		UChaosVehicleWheel_GetWheelRadius_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCBA140
	 * 		Name   -> Function ChaosVehicles.ChaosVehicleWheel.GetWheelAngularVelocity
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UChaosVehicleWheel::GetWheelAngularVelocity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosVehicleWheel.GetWheelAngularVelocity");
		
		UChaosVehicleWheel_GetWheelAngularVelocity_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCBA090
	 * 		Name   -> Function ChaosVehicles.ChaosVehicleWheel.GetSuspensionOffset
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UChaosVehicleWheel::GetSuspensionOffset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosVehicleWheel.GetSuspensionOffset");
		
		UChaosVehicleWheel_GetSuspensionOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCBA050
	 * 		Name   -> Function ChaosVehicles.ChaosVehicleWheel.GetSuspensionAxis
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector UChaosVehicleWheel::GetSuspensionAxis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosVehicleWheel.GetSuspensionAxis");
		
		UChaosVehicleWheel_GetSuspensionAxis_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCBA000
	 * 		Name   -> Function ChaosVehicles.ChaosVehicleWheel.GetSteerAngle
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UChaosVehicleWheel::GetSteerAngle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosVehicleWheel.GetSteerAngle");
		
		UChaosVehicleWheel_GetSteerAngle_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCB9FD0
	 * 		Name   -> Function ChaosVehicles.ChaosVehicleWheel.GetRotationAngularVelocity
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UChaosVehicleWheel::GetRotationAngularVelocity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosVehicleWheel.GetRotationAngularVelocity");
		
		UChaosVehicleWheel_GetRotationAngularVelocity_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCB9FA0
	 * 		Name   -> Function ChaosVehicles.ChaosVehicleWheel.GetRotationAngle
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UChaosVehicleWheel::GetRotationAngle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosVehicleWheel.GetRotationAngle");
		
		UChaosVehicleWheel_GetRotationAngle_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCB9EA0
	 * 		Name   -> Function ChaosVehicles.ChaosVehicleWheel.GetAxleType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	EAxleType UChaosVehicleWheel::GetAxleType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosVehicleWheel.GetAxleType");
		
		UChaosVehicleWheel_GetAxleType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChaosVehicleWheel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChaosVehicleWheel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ChaosVehicles.ChaosVehicleWheel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCD1DB0
	 * 		Name   -> Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetWheelSlipGraphMultiplier
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            WheelIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Multiplier                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosWheeledVehicleMovementComponent::SetWheelSlipGraphMultiplier(int32_t WheelIndex, float Multiplier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetWheelSlipGraphMultiplier");
		
		UChaosWheeledVehicleMovementComponent_SetWheelSlipGraphMultiplier_Params params {};
		params.WheelIndex = WheelIndex;
		params.Multiplier = Multiplier;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCD1CD0
	 * 		Name   -> Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetWheelRadius
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            WheelIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosWheeledVehicleMovementComponent::SetWheelRadius(int32_t WheelIndex, float Radius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetWheelRadius");
		
		UChaosWheeledVehicleMovementComponent_SetWheelRadius_Params params {};
		params.WheelIndex = WheelIndex;
		params.Radius = Radius;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCD1BF0
	 * 		Name   -> Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetWheelMaxSteerAngle
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            WheelIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              AngleDegrees                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosWheeledVehicleMovementComponent::SetWheelMaxSteerAngle(int32_t WheelIndex, float AngleDegrees)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetWheelMaxSteerAngle");
		
		UChaosWheeledVehicleMovementComponent_SetWheelMaxSteerAngle_Params params {};
		params.WheelIndex = WheelIndex;
		params.AngleDegrees = AngleDegrees;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCD1B10
	 * 		Name   -> Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetWheelMaxBrakeTorque
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            WheelIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Torque                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosWheeledVehicleMovementComponent::SetWheelMaxBrakeTorque(int32_t WheelIndex, float Torque)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetWheelMaxBrakeTorque");
		
		UChaosWheeledVehicleMovementComponent_SetWheelMaxBrakeTorque_Params params {};
		params.WheelIndex = WheelIndex;
		params.Torque = Torque;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCD1A30
	 * 		Name   -> Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetWheelHandbrakeTorque
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            WheelIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Torque                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosWheeledVehicleMovementComponent::SetWheelHandbrakeTorque(int32_t WheelIndex, float Torque)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetWheelHandbrakeTorque");
		
		UChaosWheeledVehicleMovementComponent_SetWheelHandbrakeTorque_Params params {};
		params.WheelIndex = WheelIndex;
		params.Torque = Torque;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCD1950
	 * 		Name   -> Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetWheelFrictionMultiplier
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            WheelIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Friction                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosWheeledVehicleMovementComponent::SetWheelFrictionMultiplier(int32_t WheelIndex, float Friction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetWheelFrictionMultiplier");
		
		UChaosWheeledVehicleMovementComponent_SetWheelFrictionMultiplier_Params params {};
		params.WheelIndex = WheelIndex;
		params.Friction = Friction;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCD1880
	 * 		Name   -> Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetWheelClass
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            WheelIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      InWheelClass                                               (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosWheeledVehicleMovementComponent::SetWheelClass(int32_t WheelIndex, class UClass* InWheelClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetWheelClass");
		
		UChaosWheeledVehicleMovementComponent_SetWheelClass_Params params {};
		params.WheelIndex = WheelIndex;
		params.InWheelClass = InWheelClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCD17B0
	 * 		Name   -> Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetTractionControlEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            WheelIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosWheeledVehicleMovementComponent::SetTractionControlEnabled(int32_t WheelIndex, bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetTractionControlEnabled");
		
		UChaosWheeledVehicleMovementComponent_SetTractionControlEnabled_Params params {};
		params.WheelIndex = WheelIndex;
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCD16E0
	 * 		Name   -> Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetTorqueCombineMethod
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		ETorqueCombineMethod                               InCombineMethod                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            WheelIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosWheeledVehicleMovementComponent::SetTorqueCombineMethod(ETorqueCombineMethod InCombineMethod, int32_t WheelIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetTorqueCombineMethod");
		
		UChaosWheeledVehicleMovementComponent_SetTorqueCombineMethod_Params params {};
		params.InCombineMethod = InCombineMethod;
		params.WheelIndex = WheelIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCD14E0
	 * 		Name   -> Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetSuspensionParams
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Rate                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Damping                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Preload                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxRaise                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxDrop                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            WheelIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosWheeledVehicleMovementComponent::SetSuspensionParams(float Rate, float Damping, float Preload, float MaxRaise, float MaxDrop, int32_t WheelIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetSuspensionParams");
		
		UChaosWheeledVehicleMovementComponent_SetSuspensionParams_Params params {};
		params.Rate = Rate;
		params.Damping = Damping;
		params.Preload = Preload;
		params.MaxRaise = MaxRaise;
		params.MaxDrop = MaxDrop;
		params.WheelIndex = WheelIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCD1360
	 * 		Name   -> Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetSnapshot
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FWheeledSnaphotData                         SnapshotIn                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UChaosWheeledVehicleMovementComponent::SetSnapshot(const struct FWheeledSnaphotData& SnapshotIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetSnapshot");
		
		UChaosWheeledVehicleMovementComponent_SetSnapshot_Params params {};
		params.SnapshotIn = SnapshotIn;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCD12D0
	 * 		Name   -> Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetMaxEngineTorque
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Torque                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosWheeledVehicleMovementComponent::SetMaxEngineTorque(float Torque)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetMaxEngineTorque");
		
		UChaosWheeledVehicleMovementComponent_SetMaxEngineTorque_Params params {};
		params.Torque = Torque;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCD11F0
	 * 		Name   -> Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetDriveTorque
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              DriveTorque                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            WheelIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosWheeledVehicleMovementComponent::SetDriveTorque(float DriveTorque, int32_t WheelIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetDriveTorque");
		
		UChaosWheeledVehicleMovementComponent_SetDriveTorque_Params params {};
		params.DriveTorque = DriveTorque;
		params.WheelIndex = WheelIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCD1160
	 * 		Name   -> Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetDragCoefficient
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              DragCoeff                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosWheeledVehicleMovementComponent::SetDragCoefficient(float DragCoeff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetDragCoefficient");
		
		UChaosWheeledVehicleMovementComponent_SetDragCoefficient_Params params {};
		params.DragCoeff = DragCoeff;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCD10D0
	 * 		Name   -> Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetDownforceCoefficient
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              DownforceCoeff                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosWheeledVehicleMovementComponent::SetDownforceCoefficient(float DownforceCoeff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetDownforceCoefficient");
		
		UChaosWheeledVehicleMovementComponent_SetDownforceCoefficient_Params params {};
		params.DownforceCoeff = DownforceCoeff;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCD1040
	 * 		Name   -> Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetDifferentialFrontRearSplit
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              FrontRearSlpit                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosWheeledVehicleMovementComponent::SetDifferentialFrontRearSplit(float FrontRearSlpit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetDifferentialFrontRearSplit");
		
		UChaosWheeledVehicleMovementComponent_SetDifferentialFrontRearSplit_Params params {};
		params.FrontRearSlpit = FrontRearSlpit;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCD0F60
	 * 		Name   -> Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetBrakeTorque
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              BrakeTorque                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            WheelIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosWheeledVehicleMovementComponent::SetBrakeTorque(float BrakeTorque, int32_t WheelIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetBrakeTorque");
		
		UChaosWheeledVehicleMovementComponent_SetBrakeTorque_Params params {};
		params.BrakeTorque = BrakeTorque;
		params.WheelIndex = WheelIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCD0E90
	 * 		Name   -> Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetAffectedBySteering
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            WheelIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosWheeledVehicleMovementComponent::SetAffectedBySteering(int32_t WheelIndex, bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetAffectedBySteering");
		
		UChaosWheeledVehicleMovementComponent_SetAffectedBySteering_Params params {};
		params.WheelIndex = WheelIndex;
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCD0DC0
	 * 		Name   -> Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetAffectedByHandbrake
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            WheelIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosWheeledVehicleMovementComponent::SetAffectedByHandbrake(int32_t WheelIndex, bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetAffectedByHandbrake");
		
		UChaosWheeledVehicleMovementComponent_SetAffectedByHandbrake_Params params {};
		params.WheelIndex = WheelIndex;
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCD0CF0
	 * 		Name   -> Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetAffectedByEngine
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            WheelIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosWheeledVehicleMovementComponent::SetAffectedByEngine(int32_t WheelIndex, bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetAffectedByEngine");
		
		UChaosWheeledVehicleMovementComponent_SetAffectedByEngine_Params params {};
		params.WheelIndex = WheelIndex;
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCD0C20
	 * 		Name   -> Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetAffectedByBrake
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            WheelIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosWheeledVehicleMovementComponent::SetAffectedByBrake(int32_t WheelIndex, bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetAffectedByBrake");
		
		UChaosWheeledVehicleMovementComponent_SetAffectedByBrake_Params params {};
		params.WheelIndex = WheelIndex;
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCD0B50
	 * 		Name   -> Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetABSEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            WheelIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosWheeledVehicleMovementComponent::SetABSEnabled(int32_t WheelIndex, bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetABSEnabled");
		
		UChaosWheeledVehicleMovementComponent_SetABSEnabled_Params params {};
		params.WheelIndex = WheelIndex;
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCD0370
	 * 		Name   -> Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.MakeWheelStatus
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bInContact                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ContactPoint                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPhysicalMaterial*                           PhysMaterial                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NormalizedSuspensionLength                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SpringForce                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SlipAngle                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsSlipping                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SlipMagnitude                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsSkidding                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SkidMagnitude                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     SkidNormal                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DriveTorque                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              BrakeTorque                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bABSActivated                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FWheelStatus UChaosWheeledVehicleMovementComponent::STATIC_MakeWheelStatus(bool bInContact, struct FVector* ContactPoint, class UPhysicalMaterial* PhysMaterial, float NormalizedSuspensionLength, float SpringForce, float SlipAngle, bool bIsSlipping, float SlipMagnitude, bool bIsSkidding, float SkidMagnitude, struct FVector* SkidNormal, float DriveTorque, float BrakeTorque, bool bABSActivated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.MakeWheelStatus");
		
		UChaosWheeledVehicleMovementComponent_MakeWheelStatus_Params params {};
		params.bInContact = bInContact;
		params.PhysMaterial = PhysMaterial;
		params.NormalizedSuspensionLength = NormalizedSuspensionLength;
		params.SpringForce = SpringForce;
		params.SlipAngle = SlipAngle;
		params.bIsSlipping = bIsSlipping;
		params.SlipMagnitude = SlipMagnitude;
		params.bIsSkidding = bIsSkidding;
		params.SkidMagnitude = SkidMagnitude;
		params.DriveTorque = DriveTorque;
		params.BrakeTorque = BrakeTorque;
		params.bABSActivated = bABSActivated;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ContactPoint != nullptr)
			*ContactPoint = params.ContactPoint;
		if (SkidNormal != nullptr)
			*SkidNormal = params.SkidNormal;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCD01A0
	 * 		Name   -> Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.MakeWheelSnapshot
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              SuspensionOffset                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              WheelRotationAngle                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SteeringAngle                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              WheelRadius                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              WheelAngularVelocity                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FWheelSnapshot UChaosWheeledVehicleMovementComponent::STATIC_MakeWheelSnapshot(float SuspensionOffset, float WheelRotationAngle, float SteeringAngle, float WheelRadius, float WheelAngularVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.MakeWheelSnapshot");
		
		UChaosWheeledVehicleMovementComponent_MakeWheelSnapshot_Params params {};
		params.SuspensionOffset = SuspensionOffset;
		params.WheelRotationAngle = WheelRotationAngle;
		params.SteeringAngle = SteeringAngle;
		params.WheelRadius = WheelRadius;
		params.WheelAngularVelocity = WheelAngularVelocity;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCD0850
	 * 		Name   -> Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.MakeWheeledSnapshot
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     LinearVelocity                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     AngularVelocity                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SelectedGear                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              EngineRPM                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FWheelSnapshot>                      WheelSnapshots                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FWheeledSnaphotData UChaosWheeledVehicleMovementComponent::STATIC_MakeWheeledSnapshot(const struct FTransform& Transform, const struct FVector& LinearVelocity, const struct FVector& AngularVelocity, int32_t SelectedGear, float EngineRPM, TArray<struct FWheelSnapshot> WheelSnapshots)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.MakeWheeledSnapshot");
		
		UChaosWheeledVehicleMovementComponent_MakeWheeledSnapshot_Params params {};
		params.Transform = Transform;
		params.LinearVelocity = LinearVelocity;
		params.AngularVelocity = AngularVelocity;
		params.SelectedGear = SelectedGear;
		params.EngineRPM = EngineRPM;
		params.WheelSnapshots = WheelSnapshots;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCD00A0
	 * 		Name   -> Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.GetWheelState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            WheelIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FWheelStatus UChaosWheeledVehicleMovementComponent::GetWheelState(int32_t WheelIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.GetWheelState");
		
		UChaosWheeledVehicleMovementComponent_GetWheelState_Params params {};
		params.WheelIndex = WheelIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCCFFF0
	 * 		Name   -> Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.GetSnapshot
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FWheeledSnaphotData UChaosWheeledVehicleMovementComponent::GetSnapshot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.GetSnapshot");
		
		UChaosWheeledVehicleMovementComponent_GetSnapshot_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCCFFD0
	 * 		Name   -> Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.GetNumWheels
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UChaosWheeledVehicleMovementComponent::GetNumWheels()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.GetNumWheels");
		
		UChaosWheeledVehicleMovementComponent_GetNumWheels_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCCFFA0
	 * 		Name   -> Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.GetEngineRotationSpeed
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UChaosWheeledVehicleMovementComponent::GetEngineRotationSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.GetEngineRotationSpeed");
		
		UChaosWheeledVehicleMovementComponent_GetEngineRotationSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCCFF70
	 * 		Name   -> Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.GetEngineMaxRotationSpeed
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UChaosWheeledVehicleMovementComponent::GetEngineMaxRotationSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.GetEngineMaxRotationSpeed");
		
		UChaosWheeledVehicleMovementComponent_GetEngineMaxRotationSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCCFEE0
	 * 		Name   -> Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.EnableWheelFriction
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               InState                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosWheeledVehicleMovementComponent::EnableWheelFriction(bool InState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.EnableWheelFriction");
		
		UChaosWheeledVehicleMovementComponent_EnableWheelFriction_Params params {};
		params.InState = InState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCCFE50
	 * 		Name   -> Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.EnableSuspension
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               InState                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosWheeledVehicleMovementComponent::EnableSuspension(bool InState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.EnableSuspension");
		
		UChaosWheeledVehicleMovementComponent_EnableSuspension_Params params {};
		params.InState = InState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCCFDC0
	 * 		Name   -> Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.EnableMechanicalSim
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               InState                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosWheeledVehicleMovementComponent::EnableMechanicalSim(bool InState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.EnableMechanicalSim");
		
		UChaosWheeledVehicleMovementComponent_EnableMechanicalSim_Params params {};
		params.InState = InState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCCF3B0
	 * 		Name   -> Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.BreakWheelStatus
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FWheelStatus                                Status                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bInContact                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ContactPoint                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPhysicalMaterial*                           PhysMaterial                                               (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NormalizedSuspensionLength                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SpringForce                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SlipAngle                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsSlipping                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SlipMagnitude                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsSkidding                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SkidMagnitude                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     SkidNormal                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DriveTorque                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              BrakeTorque                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bABSActivated                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosWheeledVehicleMovementComponent::STATIC_BreakWheelStatus(const struct FWheelStatus& Status, bool* bInContact, struct FVector* ContactPoint, class UPhysicalMaterial** PhysMaterial, float* NormalizedSuspensionLength, float* SpringForce, float* SlipAngle, bool* bIsSlipping, float* SlipMagnitude, bool* bIsSkidding, float* SkidMagnitude, struct FVector* SkidNormal, float* DriveTorque, float* BrakeTorque, bool* bABSActivated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.BreakWheelStatus");
		
		UChaosWheeledVehicleMovementComponent_BreakWheelStatus_Params params {};
		params.Status = Status;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bInContact != nullptr)
			*bInContact = params.bInContact;
		if (ContactPoint != nullptr)
			*ContactPoint = params.ContactPoint;
		if (PhysMaterial != nullptr)
			*PhysMaterial = params.PhysMaterial;
		if (NormalizedSuspensionLength != nullptr)
			*NormalizedSuspensionLength = params.NormalizedSuspensionLength;
		if (SpringForce != nullptr)
			*SpringForce = params.SpringForce;
		if (SlipAngle != nullptr)
			*SlipAngle = params.SlipAngle;
		if (bIsSlipping != nullptr)
			*bIsSlipping = params.bIsSlipping;
		if (SlipMagnitude != nullptr)
			*SlipMagnitude = params.SlipMagnitude;
		if (bIsSkidding != nullptr)
			*bIsSkidding = params.bIsSkidding;
		if (SkidMagnitude != nullptr)
			*SkidMagnitude = params.SkidMagnitude;
		if (SkidNormal != nullptr)
			*SkidNormal = params.SkidNormal;
		if (DriveTorque != nullptr)
			*DriveTorque = params.DriveTorque;
		if (BrakeTorque != nullptr)
			*BrakeTorque = params.BrakeTorque;
		if (bABSActivated != nullptr)
			*bABSActivated = params.bABSActivated;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCCF160
	 * 		Name   -> Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.BreakWheelSnapshot
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FWheelSnapshot                              Snapshot                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              SuspensionOffset                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              WheelRotationAngle                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SteeringAngle                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              WheelRadius                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              WheelAngularVelocity                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosWheeledVehicleMovementComponent::STATIC_BreakWheelSnapshot(const struct FWheelSnapshot& Snapshot, float* SuspensionOffset, float* WheelRotationAngle, float* SteeringAngle, float* WheelRadius, float* WheelAngularVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.BreakWheelSnapshot");
		
		UChaosWheeledVehicleMovementComponent_BreakWheelSnapshot_Params params {};
		params.Snapshot = Snapshot;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SuspensionOffset != nullptr)
			*SuspensionOffset = params.SuspensionOffset;
		if (WheelRotationAngle != nullptr)
			*WheelRotationAngle = params.WheelRotationAngle;
		if (SteeringAngle != nullptr)
			*SteeringAngle = params.SteeringAngle;
		if (WheelRadius != nullptr)
			*WheelRadius = params.WheelRadius;
		if (WheelAngularVelocity != nullptr)
			*WheelAngularVelocity = params.WheelAngularVelocity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCCF9C0
	 * 		Name   -> Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.BreakWheeledSnapshot
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FWheeledSnaphotData                         Snapshot                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Transform                                                  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     LinearVelocity                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     AngularVelocity                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SelectedGear                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              EngineRPM                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FWheelSnapshot>                      WheelSnapshots                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UChaosWheeledVehicleMovementComponent::STATIC_BreakWheeledSnapshot(const struct FWheeledSnaphotData& Snapshot, struct FTransform* Transform, struct FVector* LinearVelocity, struct FVector* AngularVelocity, int32_t* SelectedGear, float* EngineRPM, TArray<struct FWheelSnapshot>* WheelSnapshots)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.BreakWheeledSnapshot");
		
		UChaosWheeledVehicleMovementComponent_BreakWheeledSnapshot_Params params {};
		params.Snapshot = Snapshot;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Transform != nullptr)
			*Transform = params.Transform;
		if (LinearVelocity != nullptr)
			*LinearVelocity = params.LinearVelocity;
		if (AngularVelocity != nullptr)
			*AngularVelocity = params.AngularVelocity;
		if (SelectedGear != nullptr)
			*SelectedGear = params.SelectedGear;
		if (EngineRPM != nullptr)
			*EngineRPM = params.EngineRPM;
		if (WheelSnapshots != nullptr)
			*WheelSnapshots = params.WheelSnapshots;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChaosWheeledVehicleMovementComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChaosWheeledVehicleMovementComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ChaosVehicles.ChaosWheeledVehicleMovementComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBCD0070
	 * 		Name   -> Function ChaosVehicles.VehicleAnimationInstance.GetVehicle
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class AWheeledVehiclePawn* UVehicleAnimationInstance::GetVehicle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosVehicles.VehicleAnimationInstance.GetVehicle");
		
		UVehicleAnimationInstance_GetVehicle_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVehicleAnimationInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVehicleAnimationInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ChaosVehicles.VehicleAnimationInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWheeledVehiclePawn.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWheeledVehiclePawn::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ChaosVehicles.WheeledVehiclePawn");
		return ptr;
	}

}


