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
	 * 		Name   -> Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.OnRep_mHighlightEffectState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuild_GeneratorIntegratedBiomass_C::OnRep_mHighlightEffectState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.OnRep_mHighlightEffectState");
		
		ABuild_GeneratorIntegratedBiomass_C_OnRep_mHighlightEffectState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.GetBuildEffectTemplate
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	void ABuild_GeneratorIntegratedBiomass_C::GetBuildEffectTemplate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.GetBuildEffectTemplate");
		
		ABuild_GeneratorIntegratedBiomass_C_GetBuildEffectTemplate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.CanBeSampled
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	bool ABuild_GeneratorIntegratedBiomass_C::CanBeSampled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.CanBeSampled");
		
		ABuild_GeneratorIntegratedBiomass_C_CanBeSampled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.CanDismantle
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	bool ABuild_GeneratorIntegratedBiomass_C::CanDismantle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.CanDismantle");
		
		ABuild_GeneratorIntegratedBiomass_C_CanDismantle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.GainedSignificance
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABuild_GeneratorIntegratedBiomass_C::GainedSignificance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.GainedSignificance");
		
		ABuild_GeneratorIntegratedBiomass_C_GainedSignificance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.StartProductionLoopEffects
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               didStartProducing                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_GeneratorIntegratedBiomass_C::StartProductionLoopEffects(bool didStartProducing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.StartProductionLoopEffects");
		
		ABuild_GeneratorIntegratedBiomass_C_StartProductionLoopEffects_Params params {};
		params.didStartProducing = didStartProducing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.StopProductionLoopEffects
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               didStopProducing                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_GeneratorIntegratedBiomass_C::StopProductionLoopEffects(bool didStopProducing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.StopProductionLoopEffects");
		
		ABuild_GeneratorIntegratedBiomass_C_StopProductionLoopEffects_Params params {};
		params.didStopProducing = didStopProducing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.LostSignificance
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABuild_GeneratorIntegratedBiomass_C::LostSignificance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.LostSignificance");
		
		ABuild_GeneratorIntegratedBiomass_C_LostSignificance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.ReceiveUpdateEffects
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_GeneratorIntegratedBiomass_C::ReceiveUpdateEffects(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.ReceiveUpdateEffects");
		
		ABuild_GeneratorIntegratedBiomass_C_ReceiveUpdateEffects_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.OnIsProducingChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               newIsProducing                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_GeneratorIntegratedBiomass_C::OnIsProducingChanged(bool newIsProducing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.OnIsProducingChanged");
		
		ABuild_GeneratorIntegratedBiomass_C_OnIsProducingChanged_Params params {};
		params.newIsProducing = newIsProducing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.UpdateBuildableVisibility
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isTutorialComplete                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_GeneratorIntegratedBiomass_C::UpdateBuildableVisibility(bool IsVisible, bool isTutorialComplete)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.UpdateBuildableVisibility");
		
		ABuild_GeneratorIntegratedBiomass_C_UpdateBuildableVisibility_Params params {};
		params.IsVisible = IsVisible;
		params.isTutorialComplete = isTutorialComplete;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.ShowHighlightEffect
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ExpectedState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_GeneratorIntegratedBiomass_C::ShowHighlightEffect(int32_t ExpectedState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.ShowHighlightEffect");
		
		ABuild_GeneratorIntegratedBiomass_C_ShowHighlightEffect_Params params {};
		params.ExpectedState = ExpectedState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.DestroyHighlightEffect
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuild_GeneratorIntegratedBiomass_C::DestroyHighlightEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.DestroyHighlightEffect");
		
		ABuild_GeneratorIntegratedBiomass_C_DestroyHighlightEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.OnUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class AFGCharacterPlayer*                          byCharacter                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FUseState                                   State                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void ABuild_GeneratorIntegratedBiomass_C::OnUse(class AFGCharacterPlayer* byCharacter, const struct FUseState& State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.OnUse");
		
		ABuild_GeneratorIntegratedBiomass_C_OnUse_Params params {};
		params.byCharacter = byCharacter;
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABuild_GeneratorIntegratedBiomass_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.ReceiveBeginPlay");
		
		ABuild_GeneratorIntegratedBiomass_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_GeneratorIntegratedBiomass_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.ReceiveEndPlay");
		
		ABuild_GeneratorIntegratedBiomass_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.SetHighlightState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewHighlightState                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_GeneratorIntegratedBiomass_C::SetHighlightState(int32_t NewHighlightState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.SetHighlightState");
		
		ABuild_GeneratorIntegratedBiomass_C_SetHighlightState_Params params {};
		params.NewHighlightState = NewHighlightState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.ExecuteUbergraph_Build_GeneratorIntegratedBiomass
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_GeneratorIntegratedBiomass_C::ExecuteUbergraph_Build_GeneratorIntegratedBiomass(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.ExecuteUbergraph_Build_GeneratorIntegratedBiomass");
		
		ABuild_GeneratorIntegratedBiomass_C_ExecuteUbergraph_Build_GeneratorIntegratedBiomass_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuild_GeneratorIntegratedBiomass_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuild_GeneratorIntegratedBiomass_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C");
		return ptr;
	}

}


