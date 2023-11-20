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
	 * 		Name   -> Function Build_PipeHyperStart.Build_PipeHyperStart_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABuild_PipeHyperStart_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_PipeHyperStart.Build_PipeHyperStart_C.UserConstructionScript");
		
		ABuild_PipeHyperStart_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_PipeHyperStart.Build_PipeHyperStart_C.PlayConstructSound_2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuild_PipeHyperStart_C::PlayConstructSound_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_PipeHyperStart.Build_PipeHyperStart_C.PlayConstructSound_2");
		
		ABuild_PipeHyperStart_C_PlayConstructSound_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_PipeHyperStart.Build_PipeHyperStart_C.BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABuild_PipeHyperStart_C::BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_PipeHyperStart.Build_PipeHyperStart_C.BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
		
		ABuild_PipeHyperStart_C_BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_PipeHyperStart.Build_PipeHyperStart_C.OnHasPowerChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               newHasPower                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_PipeHyperStart_C::OnHasPowerChanged(bool newHasPower)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_PipeHyperStart.Build_PipeHyperStart_C.OnHasPowerChanged");
		
		ABuild_PipeHyperStart_C_OnHasPowerChanged_Params params {};
		params.newHasPower = newHasPower;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_PipeHyperStart.Build_PipeHyperStart_C.GainedSignificance
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABuild_PipeHyperStart_C::GainedSignificance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_PipeHyperStart.Build_PipeHyperStart_C.GainedSignificance");
		
		ABuild_PipeHyperStart_C_GainedSignificance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_PipeHyperStart.Build_PipeHyperStart_C.LostSignificance
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABuild_PipeHyperStart_C::LostSignificance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_PipeHyperStart.Build_PipeHyperStart_C.LostSignificance");
		
		ABuild_PipeHyperStart_C_LostSignificance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_PipeHyperStart.Build_PipeHyperStart_C.StartUpHypertube
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuild_PipeHyperStart_C::StartUpHypertube()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_PipeHyperStart.Build_PipeHyperStart_C.StartUpHypertube");
		
		ABuild_PipeHyperStart_C_StartUpHypertube_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_PipeHyperStart.Build_PipeHyperStart_C.StopHyperTube
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuild_PipeHyperStart_C::StopHyperTube()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_PipeHyperStart.Build_PipeHyperStart_C.StopHyperTube");
		
		ABuild_PipeHyperStart_C_StopHyperTube_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_PipeHyperStart.Build_PipeHyperStart_C.StartEngineSoundTimelineEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuild_PipeHyperStart_C::StartEngineSoundTimelineEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_PipeHyperStart.Build_PipeHyperStart_C.StartEngineSoundTimelineEvent");
		
		ABuild_PipeHyperStart_C_StartEngineSoundTimelineEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_PipeHyperStart.Build_PipeHyperStart_C.EndEngineSoundTimelineEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuild_PipeHyperStart_C::EndEngineSoundTimelineEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_PipeHyperStart.Build_PipeHyperStart_C.EndEngineSoundTimelineEvent");
		
		ABuild_PipeHyperStart_C_EndEngineSoundTimelineEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_PipeHyperStart.Build_PipeHyperStart_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABuild_PipeHyperStart_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_PipeHyperStart.Build_PipeHyperStart_C.ReceiveBeginPlay");
		
		ABuild_PipeHyperStart_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_PipeHyperStart.Build_PipeHyperStart_C.OnIsProducingChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               newIsProducing                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_PipeHyperStart_C::OnIsProducingChanged(bool newIsProducing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_PipeHyperStart.Build_PipeHyperStart_C.OnIsProducingChanged");
		
		ABuild_PipeHyperStart_C_OnIsProducingChanged_Params params {};
		params.newIsProducing = newIsProducing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_PipeHyperStart.Build_PipeHyperStart_C.StartProductionLoopEffects
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               didStartProducing                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_PipeHyperStart_C::StartProductionLoopEffects(bool didStartProducing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_PipeHyperStart.Build_PipeHyperStart_C.StartProductionLoopEffects");
		
		ABuild_PipeHyperStart_C_StartProductionLoopEffects_Params params {};
		params.didStartProducing = didStartProducing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_PipeHyperStart.Build_PipeHyperStart_C.StopProductionLoopEffects
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               didStopProducing                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_PipeHyperStart_C::StopProductionLoopEffects(bool didStopProducing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_PipeHyperStart.Build_PipeHyperStart_C.StopProductionLoopEffects");
		
		ABuild_PipeHyperStart_C_StopProductionLoopEffects_Params params {};
		params.didStopProducing = didStopProducing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_PipeHyperStart.Build_PipeHyperStart_C.ExecuteUbergraph_Build_PipeHyperStart
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_PipeHyperStart_C::ExecuteUbergraph_Build_PipeHyperStart(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_PipeHyperStart.Build_PipeHyperStart_C.ExecuteUbergraph_Build_PipeHyperStart");
		
		ABuild_PipeHyperStart_C_ExecuteUbergraph_Build_PipeHyperStart_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuild_PipeHyperStart_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuild_PipeHyperStart_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Build_PipeHyperStart.Build_PipeHyperStart_C");
		return ptr;
	}

}


