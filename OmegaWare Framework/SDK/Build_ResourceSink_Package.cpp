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
	 * 		Name   -> Function Build_ResourceSink.Build_ResourceSink_C.GetLookAtDecription
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class AFGCharacterPlayer*                          byCharacter                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FUseState                                   State                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	class FText ABuild_ResourceSink_C::GetLookAtDecription(class AFGCharacterPlayer* byCharacter, const struct FUseState& State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_ResourceSink.Build_ResourceSink_C.GetLookAtDecription");
		
		ABuild_ResourceSink_C_GetLookAtDecription_Params params {};
		params.byCharacter = byCharacter;
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_ResourceSink.Build_ResourceSink_C.PlayResourceSinkDebris
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABuild_ResourceSink_C::PlayResourceSinkDebris()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_ResourceSink.Build_ResourceSink_C.PlayResourceSinkDebris");
		
		ABuild_ResourceSink_C_PlayResourceSinkDebris_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_ResourceSink.Build_ResourceSink_C.StartVFXGainSignificance
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuild_ResourceSink_C::StartVFXGainSignificance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_ResourceSink.Build_ResourceSink_C.StartVFXGainSignificance");
		
		ABuild_ResourceSink_C_StartVFXGainSignificance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_ResourceSink.Build_ResourceSink_C.KillVFXLostSignificacne
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuild_ResourceSink_C::KillVFXLostSignificacne()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_ResourceSink.Build_ResourceSink_C.KillVFXLostSignificacne");
		
		ABuild_ResourceSink_C_KillVFXLostSignificacne_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_ResourceSink.Build_ResourceSink_C.StopSFXLostSignificance
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuild_ResourceSink_C::StopSFXLostSignificance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_ResourceSink.Build_ResourceSink_C.StopSFXLostSignificance");
		
		ABuild_ResourceSink_C_StopSFXLostSignificance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_ResourceSink.Build_ResourceSink_C.StartSFXGainSignificance
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABuild_ResourceSink_C::StartSFXGainSignificance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_ResourceSink.Build_ResourceSink_C.StartSFXGainSignificance");
		
		ABuild_ResourceSink_C_StartSFXGainSignificance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_ResourceSink.Build_ResourceSink_C.GainedSignificance
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABuild_ResourceSink_C::GainedSignificance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_ResourceSink.Build_ResourceSink_C.GainedSignificance");
		
		ABuild_ResourceSink_C_GainedSignificance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_ResourceSink.Build_ResourceSink_C.LostSignificance
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABuild_ResourceSink_C::LostSignificance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_ResourceSink.Build_ResourceSink_C.LostSignificance");
		
		ABuild_ResourceSink_C_LostSignificance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_ResourceSink.Build_ResourceSink_C.OnHasPowerChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               newHasPower                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_ResourceSink_C::OnHasPowerChanged(bool newHasPower)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_ResourceSink.Build_ResourceSink_C.OnHasPowerChanged");
		
		ABuild_ResourceSink_C_OnHasPowerChanged_Params params {};
		params.newHasPower = newHasPower;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_ResourceSink.Build_ResourceSink_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABuild_ResourceSink_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_ResourceSink.Build_ResourceSink_C.ReceiveBeginPlay");
		
		ABuild_ResourceSink_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_ResourceSink.Build_ResourceSink_C.StartProductionLoopEffects
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               didStartProducing                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_ResourceSink_C::StartProductionLoopEffects(bool didStartProducing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_ResourceSink.Build_ResourceSink_C.StartProductionLoopEffects");
		
		ABuild_ResourceSink_C_StartProductionLoopEffects_Params params {};
		params.didStartProducing = didStartProducing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_ResourceSink.Build_ResourceSink_C.StopProductionLoopEffects
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               didStopProducing                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_ResourceSink_C::StopProductionLoopEffects(bool didStopProducing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_ResourceSink.Build_ResourceSink_C.StopProductionLoopEffects");
		
		ABuild_ResourceSink_C_StopProductionLoopEffects_Params params {};
		params.didStopProducing = didStopProducing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_ResourceSink.Build_ResourceSink_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABuild_ResourceSink_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_ResourceSink.Build_ResourceSink_C.ReceiveDestroyed");
		
		ABuild_ResourceSink_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_ResourceSink.Build_ResourceSink_C.StartSFXEngineOnPower
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               didGainPower                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_ResourceSink_C::StartSFXEngineOnPower(bool didGainPower)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_ResourceSink.Build_ResourceSink_C.StartSFXEngineOnPower");
		
		ABuild_ResourceSink_C_StartSFXEngineOnPower_Params params {};
		params.didGainPower = didGainPower;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_ResourceSink.Build_ResourceSink_C.StopSFXEngineOnPower
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               didLosePower                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_ResourceSink_C::StopSFXEngineOnPower(bool didLosePower)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_ResourceSink.Build_ResourceSink_C.StopSFXEngineOnPower");
		
		ABuild_ResourceSink_C_StopSFXEngineOnPower_Params params {};
		params.didLosePower = didLosePower;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_ResourceSink.Build_ResourceSink_C.StartIdlingLoopEffects
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               didGainPower                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_ResourceSink_C::StartIdlingLoopEffects(bool didGainPower)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_ResourceSink.Build_ResourceSink_C.StartIdlingLoopEffects");
		
		ABuild_ResourceSink_C_StartIdlingLoopEffects_Params params {};
		params.didGainPower = didGainPower;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_ResourceSink.Build_ResourceSink_C.StopIdlingLoopEffects
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               didLosePower                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_ResourceSink_C::StopIdlingLoopEffects(bool didLosePower)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_ResourceSink.Build_ResourceSink_C.StopIdlingLoopEffects");
		
		ABuild_ResourceSink_C_StopIdlingLoopEffects_Params params {};
		params.didLosePower = didLosePower;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_ResourceSink.Build_ResourceSink_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_ResourceSink_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_ResourceSink.Build_ResourceSink_C.ReceiveTick");
		
		ABuild_ResourceSink_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_ResourceSink.Build_ResourceSink_C.TickForGrinder
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuild_ResourceSink_C::TickForGrinder()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_ResourceSink.Build_ResourceSink_C.TickForGrinder");
		
		ABuild_ResourceSink_C_TickForGrinder_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_ResourceSink.Build_ResourceSink_C.TickForEngine
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuild_ResourceSink_C::TickForEngine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_ResourceSink.Build_ResourceSink_C.TickForEngine");
		
		ABuild_ResourceSink_C_TickForEngine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_ResourceSink.Build_ResourceSink_C.StopIsLookedAtForDismantle
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AFGCharacterPlayer*                          byCharacter                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_ResourceSink_C::StopIsLookedAtForDismantle(class AFGCharacterPlayer* byCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_ResourceSink.Build_ResourceSink_C.StopIsLookedAtForDismantle");
		
		ABuild_ResourceSink_C_StopIsLookedAtForDismantle_Params params {};
		params.byCharacter = byCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_ResourceSink.Build_ResourceSink_C.ExecuteUbergraph_Build_ResourceSink
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_ResourceSink_C::ExecuteUbergraph_Build_ResourceSink(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_ResourceSink.Build_ResourceSink_C.ExecuteUbergraph_Build_ResourceSink");
		
		ABuild_ResourceSink_C_ExecuteUbergraph_Build_ResourceSink_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuild_ResourceSink_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuild_ResourceSink_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Build_ResourceSink.Build_ResourceSink_C");
		return ptr;
	}

}


