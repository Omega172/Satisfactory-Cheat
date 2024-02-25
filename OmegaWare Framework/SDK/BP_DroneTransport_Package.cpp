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
	 * 		Name   -> Function BP_DroneTransport.BP_DroneTransport_C.GetDefaultRepresentationColor
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	struct FLinearColor ABP_DroneTransport_C::GetDefaultRepresentationColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroneTransport.BP_DroneTransport_C.GetDefaultRepresentationColor");
		
		ABP_DroneTransport_C_GetDefaultRepresentationColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_DroneTransport.BP_DroneTransport_C.TurnOffAllThrusters
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Float                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DroneTransport_C::TurnOffAllThrusters(double Float)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroneTransport.BP_DroneTransport_C.TurnOffAllThrusters");
		
		ABP_DroneTransport_C_TurnOffAllThrusters_Params params {};
		params.Float = Float;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_DroneTransport.BP_DroneTransport_C.SetThrusterMesh_Values_VFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_DroneTransport_C::SetThrusterMesh_Values_VFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroneTransport.BP_DroneTransport_C.SetThrusterMesh_Values_VFX");
		
		ABP_DroneTransport_C_SetThrusterMesh_Values_VFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_DroneTransport.BP_DroneTransport_C.KillCurrentMontage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_DroneTransport_C::KillCurrentMontage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroneTransport.BP_DroneTransport_C.KillCurrentMontage");
		
		ABP_DroneTransport_C_KillCurrentMontage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_DroneTransport.BP_DroneTransport_C.CheckDecendingStatusSound
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_DroneTransport_C::CheckDecendingStatusSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroneTransport.BP_DroneTransport_C.CheckDecendingStatusSound");
		
		ABP_DroneTransport_C_CheckDecendingStatusSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_DroneTransport.BP_DroneTransport_C.LostSignificanceSound
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_DroneTransport_C::LostSignificanceSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroneTransport.BP_DroneTransport_C.LostSignificanceSound");
		
		ABP_DroneTransport_C_LostSignificanceSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_DroneTransport.BP_DroneTransport_C.GainSignificanceSound
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_DroneTransport_C::GainSignificanceSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroneTransport.BP_DroneTransport_C.GainSignificanceSound");
		
		ABP_DroneTransport_C_GainSignificanceSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_DroneTransport.BP_DroneTransport_C.DecendingBrakeSound
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_DroneTransport_C::DecendingBrakeSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroneTransport.BP_DroneTransport_C.DecendingBrakeSound");
		
		ABP_DroneTransport_C_DecendingBrakeSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_DroneTransport.BP_DroneTransport_C.CheckTakeOffStatusSound
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_DroneTransport_C::CheckTakeOffStatusSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroneTransport.BP_DroneTransport_C.CheckTakeOffStatusSound");
		
		ABP_DroneTransport_C_CheckTakeOffStatusSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_DroneTransport.BP_DroneTransport_C.StopBlastOffSound
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_DroneTransport_C::StopBlastOffSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroneTransport.BP_DroneTransport_C.StopBlastOffSound");
		
		ABP_DroneTransport_C_StopBlastOffSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_DroneTransport.BP_DroneTransport_C.PlayBlastOffSound
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_DroneTransport_C::PlayBlastOffSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroneTransport.BP_DroneTransport_C.PlayBlastOffSound");
		
		ABP_DroneTransport_C_PlayBlastOffSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_DroneTransport.BP_DroneTransport_C.PlayTakeOffSoundSequence
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DroneTransport_C::PlayTakeOffSoundSequence(double Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroneTransport.BP_DroneTransport_C.PlayTakeOffSoundSequence");
		
		ABP_DroneTransport_C_PlayTakeOffSoundSequence_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_DroneTransport.BP_DroneTransport_C.PlayDockingSoundSequence
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DroneTransport_C::PlayDockingSoundSequence(double Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroneTransport.BP_DroneTransport_C.PlayDockingSoundSequence");
		
		ABP_DroneTransport_C_PlayDockingSoundSequence_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_DroneTransport.BP_DroneTransport_C.KillThruster_VFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_DroneTransport_C::KillThruster_VFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroneTransport.BP_DroneTransport_C.KillThruster_VFX");
		
		ABP_DroneTransport_C_KillThruster_VFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_DroneTransport.BP_DroneTransport_C.UpdateThruster_VFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Float                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bAleadyFlying                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bReveresed                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DroneTransport_C::UpdateThruster_VFX(double Float, bool bAleadyFlying, bool bReveresed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroneTransport.BP_DroneTransport_C.UpdateThruster_VFX");
		
		ABP_DroneTransport_C_UpdateThruster_VFX_Params params {};
		params.Float = Float;
		params.bAleadyFlying = bAleadyFlying;
		params.bReveresed = bReveresed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_DroneTransport.BP_DroneTransport_C.SpawnThruster_VFX
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_DroneTransport_C::SpawnThruster_VFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroneTransport.BP_DroneTransport_C.SpawnThruster_VFX");
		
		ABP_DroneTransport_C_SpawnThruster_VFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_DroneTransport.BP_DroneTransport_C.TriggerAnimationTakeOffBool
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_DroneTransport_C::TriggerAnimationTakeOffBool()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroneTransport.BP_DroneTransport_C.TriggerAnimationTakeOffBool");
		
		ABP_DroneTransport_C_TriggerAnimationTakeOffBool_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_DroneTransport.BP_DroneTransport_C.TriggerAnimationDockingBool
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_DroneTransport_C::TriggerAnimationDockingBool()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroneTransport.BP_DroneTransport_C.TriggerAnimationDockingBool");
		
		ABP_DroneTransport_C_TriggerAnimationDockingBool_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_DroneTransport.BP_DroneTransport_C.PlayDockingPlatformSound
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DroneTransport_C::PlayDockingPlatformSound(double Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroneTransport.BP_DroneTransport_C.PlayDockingPlatformSound");
		
		ABP_DroneTransport_C_PlayDockingPlatformSound_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_DroneTransport.BP_DroneTransport_C.PlayTakeOffPlatformSound
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DroneTransport_C::PlayTakeOffPlatformSound(double Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroneTransport.BP_DroneTransport_C.PlayTakeOffPlatformSound");
		
		ABP_DroneTransport_C_PlayTakeOffPlatformSound_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_DroneTransport.BP_DroneTransport_C.PlayTakeOffAnimationAndTime
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             mTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DroneTransport_C::PlayTakeOffAnimationAndTime(double mTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroneTransport.BP_DroneTransport_C.PlayTakeOffAnimationAndTime");
		
		ABP_DroneTransport_C_PlayTakeOffAnimationAndTime_Params params {};
		params.mTime = mTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_DroneTransport.BP_DroneTransport_C.PlayDockingAnimationAndTime
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             mTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DroneTransport_C::PlayDockingAnimationAndTime(double mTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroneTransport.BP_DroneTransport_C.PlayDockingAnimationAndTime");
		
		ABP_DroneTransport_C_PlayDockingAnimationAndTime_Params params {};
		params.mTime = mTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_DroneTransport.BP_DroneTransport_C.UpdateFan_VFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Float                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bAleadyFlying                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bReveresed                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DroneTransport_C::UpdateFan_VFX(double Float, bool bAleadyFlying, bool bReveresed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroneTransport.BP_DroneTransport_C.UpdateFan_VFX");
		
		ABP_DroneTransport_C_UpdateFan_VFX_Params params {};
		params.Float = Float;
		params.bAleadyFlying = bAleadyFlying;
		params.bReveresed = bReveresed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_DroneTransport.BP_DroneTransport_C.KillFan_VFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_DroneTransport_C::KillFan_VFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroneTransport.BP_DroneTransport_C.KillFan_VFX");
		
		ABP_DroneTransport_C_KillFan_VFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_DroneTransport.BP_DroneTransport_C.SpawnFan_VFX
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_DroneTransport_C::SpawnFan_VFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroneTransport.BP_DroneTransport_C.SpawnFan_VFX");
		
		ABP_DroneTransport_C_SpawnFan_VFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_DroneTransport.BP_DroneTransport_C.OnFlyingModeChange
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EDroneFlyingMode                                   NewFlyingMode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      NewParam1                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DroneTransport_C::OnFlyingModeChange(EDroneFlyingMode NewFlyingMode, unsigned char NewParam1, unsigned char* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroneTransport.BP_DroneTransport_C.OnFlyingModeChange");
		
		ABP_DroneTransport_C_OnFlyingModeChange_Params params {};
		params.NewFlyingMode = NewFlyingMode;
		params.NewParam1 = NewParam1;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_DroneTransport.BP_DroneTransport_C.OnFlyingModeChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EDroneFlyingMode                                   NewMode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DroneTransport_C::OnFlyingModeChanged(EDroneFlyingMode NewMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroneTransport.BP_DroneTransport_C.OnFlyingModeChanged");
		
		ABP_DroneTransport_C_OnFlyingModeChanged_Params params {};
		params.NewMode = NewMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_DroneTransport.BP_DroneTransport_C.StartDockingSequence
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AFGBuildableDroneStation*                    Station                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DroneTransport_C::StartDockingSequence(class AFGBuildableDroneStation* Station)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroneTransport.BP_DroneTransport_C.StartDockingSequence");
		
		ABP_DroneTransport_C_StartDockingSequence_Params params {};
		params.Station = Station;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_DroneTransport.BP_DroneTransport_C.StartTakeoffSequence
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AFGBuildableDroneStation*                    Station                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DroneTransport_C::StartTakeoffSequence(class AFGBuildableDroneStation* Station)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroneTransport.BP_DroneTransport_C.StartTakeoffSequence");
		
		ABP_DroneTransport_C_StartTakeoffSequence_Params params {};
		params.Station = Station;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_DroneTransport.BP_DroneTransport_C.DockingTimerEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_DroneTransport_C::DockingTimerEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroneTransport.BP_DroneTransport_C.DockingTimerEvent");
		
		ABP_DroneTransport_C_DockingTimerEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_DroneTransport.BP_DroneTransport_C.TakeOffTimerEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_DroneTransport_C::TakeOffTimerEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroneTransport.BP_DroneTransport_C.TakeOffTimerEvent");
		
		ABP_DroneTransport_C_TakeOffTimerEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_DroneTransport.BP_DroneTransport_C.OnBrakingStateChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsBraking                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DroneTransport_C::OnBrakingStateChanged(bool IsBraking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroneTransport.BP_DroneTransport_C.OnBrakingStateChanged");
		
		ABP_DroneTransport_C_OnBrakingStateChanged_Params params {};
		params.IsBraking = IsBraking;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_DroneTransport.BP_DroneTransport_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_DroneTransport_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroneTransport.BP_DroneTransport_C.ReceiveBeginPlay");
		
		ABP_DroneTransport_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_DroneTransport.BP_DroneTransport_C.GainedSignificance
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_DroneTransport_C::GainedSignificance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroneTransport.BP_DroneTransport_C.GainedSignificance");
		
		ABP_DroneTransport_C_GainedSignificance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_DroneTransport.BP_DroneTransport_C.LostSignificance
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_DroneTransport_C::LostSignificance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroneTransport.BP_DroneTransport_C.LostSignificance");
		
		ABP_DroneTransport_C_LostSignificance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_DroneTransport.BP_DroneTransport_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DroneTransport_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroneTransport.BP_DroneTransport_C.ReceiveTick");
		
		ABP_DroneTransport_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_DroneTransport.BP_DroneTransport_C.TickForDrone
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_DroneTransport_C::TickForDrone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroneTransport.BP_DroneTransport_C.TickForDrone");
		
		ABP_DroneTransport_C_TickForDrone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_DroneTransport.BP_DroneTransport_C.Start_FX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_DroneTransport_C::Start_FX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroneTransport.BP_DroneTransport_C.Start_FX");
		
		ABP_DroneTransport_C_Start_FX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_DroneTransport.BP_DroneTransport_C.Deactivate_FX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_DroneTransport_C::Deactivate_FX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroneTransport.BP_DroneTransport_C.Deactivate_FX");
		
		ABP_DroneTransport_C_Deactivate_FX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_DroneTransport.BP_DroneTransport_C.TickForDeactivateDrone
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_DroneTransport_C::TickForDeactivateDrone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroneTransport.BP_DroneTransport_C.TickForDeactivateDrone");
		
		ABP_DroneTransport_C_TickForDeactivateDrone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_DroneTransport.BP_DroneTransport_C.OnDockingStateChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EDroneDockingState                                 NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TimeSinceChanged                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DroneTransport_C::OnDockingStateChanged(EDroneDockingState NewState, float TimeSinceChanged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroneTransport.BP_DroneTransport_C.OnDockingStateChanged");
		
		ABP_DroneTransport_C_OnDockingStateChanged_Params params {};
		params.NewState = NewState;
		params.TimeSinceChanged = TimeSinceChanged;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_DroneTransport.BP_DroneTransport_C.TickForThrusters
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_DroneTransport_C::TickForThrusters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroneTransport.BP_DroneTransport_C.TickForThrusters");
		
		ABP_DroneTransport_C_TickForThrusters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_DroneTransport.BP_DroneTransport_C.StartThrusters
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_DroneTransport_C::StartThrusters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroneTransport.BP_DroneTransport_C.StartThrusters");
		
		ABP_DroneTransport_C_StartThrusters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_DroneTransport.BP_DroneTransport_C.TickVFX
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_DroneTransport_C::TickVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroneTransport.BP_DroneTransport_C.TickVFX");
		
		ABP_DroneTransport_C_TickVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_DroneTransport.BP_DroneTransport_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_DroneTransport_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroneTransport.BP_DroneTransport_C.ReceiveDestroyed");
		
		ABP_DroneTransport_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_DroneTransport.BP_DroneTransport_C.UpdateThrusterRate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_DroneTransport_C::UpdateThrusterRate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroneTransport.BP_DroneTransport_C.UpdateThrusterRate");
		
		ABP_DroneTransport_C_UpdateThrusterRate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_DroneTransport.BP_DroneTransport_C.TurnOffThrusters
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_DroneTransport_C::TurnOffThrusters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroneTransport.BP_DroneTransport_C.TurnOffThrusters");
		
		ABP_DroneTransport_C_TurnOffThrusters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_DroneTransport.BP_DroneTransport_C.TickForTurnOffThrusters
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_DroneTransport_C::TickForTurnOffThrusters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroneTransport.BP_DroneTransport_C.TickForTurnOffThrusters");
		
		ABP_DroneTransport_C_TickForTurnOffThrusters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_DroneTransport.BP_DroneTransport_C.ExecuteUbergraph_BP_DroneTransport
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DroneTransport_C::ExecuteUbergraph_BP_DroneTransport(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroneTransport.BP_DroneTransport_C.ExecuteUbergraph_BP_DroneTransport");
		
		ABP_DroneTransport_C_ExecuteUbergraph_BP_DroneTransport_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_DroneTransport_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_DroneTransport_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_DroneTransport.BP_DroneTransport_C");
		return ptr;
	}

}


