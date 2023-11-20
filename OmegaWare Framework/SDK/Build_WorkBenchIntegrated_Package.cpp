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
	 * 		Name   -> Function Build_WorkBenchIntegrated.Build_WorkBenchIntegrated_C.IsEquipmentWorkshop
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABuild_WorkBenchIntegrated_C::IsEquipmentWorkshop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_WorkBenchIntegrated.Build_WorkBenchIntegrated_C.IsEquipmentWorkshop");
		
		ABuild_WorkBenchIntegrated_C_IsEquipmentWorkshop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_WorkBenchIntegrated.Build_WorkBenchIntegrated_C.OnRep_mHighlightEffectState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuild_WorkBenchIntegrated_C::OnRep_mHighlightEffectState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_WorkBenchIntegrated.Build_WorkBenchIntegrated_C.OnRep_mHighlightEffectState");
		
		ABuild_WorkBenchIntegrated_C_OnRep_mHighlightEffectState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_WorkBenchIntegrated.Build_WorkBenchIntegrated_C.GetBuildEffectTemplate
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	void ABuild_WorkBenchIntegrated_C::GetBuildEffectTemplate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_WorkBenchIntegrated.Build_WorkBenchIntegrated_C.GetBuildEffectTemplate");
		
		ABuild_WorkBenchIntegrated_C_GetBuildEffectTemplate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_WorkBenchIntegrated.Build_WorkBenchIntegrated_C.CanBeSampled
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	bool ABuild_WorkBenchIntegrated_C::CanBeSampled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_WorkBenchIntegrated.Build_WorkBenchIntegrated_C.CanBeSampled");
		
		ABuild_WorkBenchIntegrated_C_CanBeSampled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_WorkBenchIntegrated.Build_WorkBenchIntegrated_C.CanDismantle
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	bool ABuild_WorkBenchIntegrated_C::CanDismantle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_WorkBenchIntegrated.Build_WorkBenchIntegrated_C.CanDismantle");
		
		ABuild_WorkBenchIntegrated_C_CanDismantle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_WorkBenchIntegrated.Build_WorkBenchIntegrated_C.GetLookAtDecription
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class AFGCharacterPlayer*                          byCharacter                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FUseState                                   State                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	class FText ABuild_WorkBenchIntegrated_C::GetLookAtDecription(class AFGCharacterPlayer* byCharacter, const struct FUseState& State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_WorkBenchIntegrated.Build_WorkBenchIntegrated_C.GetLookAtDecription");
		
		ABuild_WorkBenchIntegrated_C_GetLookAtDecription_Params params {};
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
	 * 		Name   -> Function Build_WorkBenchIntegrated.Build_WorkBenchIntegrated_C.IsUseable
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	bool ABuild_WorkBenchIntegrated_C::IsUseable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_WorkBenchIntegrated.Build_WorkBenchIntegrated_C.IsUseable");
		
		ABuild_WorkBenchIntegrated_C_IsUseable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_WorkBenchIntegrated.Build_WorkBenchIntegrated_C.UpdateUseState
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGCharacterPlayer*                          byCharacter                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     atLocation                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         componentHit                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		struct FUseState                                   out_useState                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void ABuild_WorkBenchIntegrated_C::UpdateUseState(class AFGCharacterPlayer* byCharacter, const struct FVector& atLocation, class UPrimitiveComponent* componentHit, struct FUseState* out_useState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_WorkBenchIntegrated.Build_WorkBenchIntegrated_C.UpdateUseState");
		
		ABuild_WorkBenchIntegrated_C_UpdateUseState_Params params {};
		params.byCharacter = byCharacter;
		params.atLocation = atLocation;
		params.componentHit = componentHit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (out_useState != nullptr)
			*out_useState = params.out_useState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_WorkBenchIntegrated.Build_WorkBenchIntegrated_C.UpdateBuildableVisibility
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isTutorialComplete                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_WorkBenchIntegrated_C::UpdateBuildableVisibility(bool IsVisible, bool isTutorialComplete)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_WorkBenchIntegrated.Build_WorkBenchIntegrated_C.UpdateBuildableVisibility");
		
		ABuild_WorkBenchIntegrated_C_UpdateBuildableVisibility_Params params {};
		params.IsVisible = IsVisible;
		params.isTutorialComplete = isTutorialComplete;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_WorkBenchIntegrated.Build_WorkBenchIntegrated_C.ShowHighlightEffect
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ExpectedState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_WorkBenchIntegrated_C::ShowHighlightEffect(int32_t ExpectedState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_WorkBenchIntegrated.Build_WorkBenchIntegrated_C.ShowHighlightEffect");
		
		ABuild_WorkBenchIntegrated_C_ShowHighlightEffect_Params params {};
		params.ExpectedState = ExpectedState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_WorkBenchIntegrated.Build_WorkBenchIntegrated_C.DestroyHighlightEffect
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuild_WorkBenchIntegrated_C::DestroyHighlightEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_WorkBenchIntegrated.Build_WorkBenchIntegrated_C.DestroyHighlightEffect");
		
		ABuild_WorkBenchIntegrated_C_DestroyHighlightEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_WorkBenchIntegrated.Build_WorkBenchIntegrated_C.OnUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class AFGCharacterPlayer*                          byCharacter                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FUseState                                   State                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void ABuild_WorkBenchIntegrated_C::OnUse(class AFGCharacterPlayer* byCharacter, const struct FUseState& State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_WorkBenchIntegrated.Build_WorkBenchIntegrated_C.OnUse");
		
		ABuild_WorkBenchIntegrated_C_OnUse_Params params {};
		params.byCharacter = byCharacter;
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_WorkBenchIntegrated.Build_WorkBenchIntegrated_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABuild_WorkBenchIntegrated_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_WorkBenchIntegrated.Build_WorkBenchIntegrated_C.ReceiveBeginPlay");
		
		ABuild_WorkBenchIntegrated_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_WorkBenchIntegrated.Build_WorkBenchIntegrated_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_WorkBenchIntegrated_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_WorkBenchIntegrated.Build_WorkBenchIntegrated_C.ReceiveEndPlay");
		
		ABuild_WorkBenchIntegrated_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_WorkBenchIntegrated.Build_WorkBenchIntegrated_C.SetHighlightState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewHighlightState                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_WorkBenchIntegrated_C::SetHighlightState(int32_t NewHighlightState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_WorkBenchIntegrated.Build_WorkBenchIntegrated_C.SetHighlightState");
		
		ABuild_WorkBenchIntegrated_C_SetHighlightState_Params params {};
		params.NewHighlightState = NewHighlightState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_WorkBenchIntegrated.Build_WorkBenchIntegrated_C.ExecuteUbergraph_Build_WorkBenchIntegrated
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_WorkBenchIntegrated_C::ExecuteUbergraph_Build_WorkBenchIntegrated(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_WorkBenchIntegrated.Build_WorkBenchIntegrated_C.ExecuteUbergraph_Build_WorkBenchIntegrated");
		
		ABuild_WorkBenchIntegrated_C_ExecuteUbergraph_Build_WorkBenchIntegrated_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuild_WorkBenchIntegrated_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuild_WorkBenchIntegrated_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Build_WorkBenchIntegrated.Build_WorkBenchIntegrated_C");
		return ptr;
	}

}


