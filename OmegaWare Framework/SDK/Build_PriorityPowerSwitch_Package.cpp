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
	 * 		Name   -> Function Build_PriorityPowerSwitch.Build_PriorityPowerSwitch_C.GetStringSafe
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText ABuild_PriorityPowerSwitch_C::GetStringSafe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_PriorityPowerSwitch.Build_PriorityPowerSwitch_C.GetStringSafe");
		
		ABuild_PriorityPowerSwitch_C_GetStringSafe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_PriorityPowerSwitch.Build_PriorityPowerSwitch_C.CreateOrUpdate_TextRenderers
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        InSocketName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_PriorityPowerSwitch_C::CreateOrUpdate_TextRenderers(const class FName& InSocketName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_PriorityPowerSwitch.Build_PriorityPowerSwitch_C.CreateOrUpdate_TextRenderers");
		
		ABuild_PriorityPowerSwitch_C_CreateOrUpdate_TextRenderers_Params params {};
		params.InSocketName = InSocketName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_PriorityPowerSwitch.Build_PriorityPowerSwitch_C.GetLookAtDecription
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class AFGCharacterPlayer*                          byCharacter                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FUseState                                   State                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	class FText ABuild_PriorityPowerSwitch_C::GetLookAtDecription(class AFGCharacterPlayer* byCharacter, const struct FUseState& State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_PriorityPowerSwitch.Build_PriorityPowerSwitch_C.GetLookAtDecription");
		
		ABuild_PriorityPowerSwitch_C_GetLookAtDecription_Params params {};
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
	 * 		Name   -> Function Build_PriorityPowerSwitch.Build_PriorityPowerSwitch_C.IsUseable
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	bool ABuild_PriorityPowerSwitch_C::IsUseable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_PriorityPowerSwitch.Build_PriorityPowerSwitch_C.IsUseable");
		
		ABuild_PriorityPowerSwitch_C_IsUseable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_PriorityPowerSwitch.Build_PriorityPowerSwitch_C.UpdateSignificanceTickRate
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewTickRate                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bTickEnabled                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_PriorityPowerSwitch_C::UpdateSignificanceTickRate(float NewTickRate, bool bTickEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_PriorityPowerSwitch.Build_PriorityPowerSwitch_C.UpdateSignificanceTickRate");
		
		ABuild_PriorityPowerSwitch_C_UpdateSignificanceTickRate_Params params {};
		params.NewTickRate = NewTickRate;
		params.bTickEnabled = bTickEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_PriorityPowerSwitch.Build_PriorityPowerSwitch_C.UpdateHandleRotation
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuild_PriorityPowerSwitch_C::UpdateHandleRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_PriorityPowerSwitch.Build_PriorityPowerSwitch_C.UpdateHandleRotation");
		
		ABuild_PriorityPowerSwitch_C_UpdateHandleRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_PriorityPowerSwitch.Build_PriorityPowerSwitch_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABuild_PriorityPowerSwitch_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_PriorityPowerSwitch.Build_PriorityPowerSwitch_C.ReceiveBeginPlay");
		
		ABuild_PriorityPowerSwitch_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_PriorityPowerSwitch.Build_PriorityPowerSwitch_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_PriorityPowerSwitch_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_PriorityPowerSwitch.Build_PriorityPowerSwitch_C.ReceiveEndPlay");
		
		ABuild_PriorityPowerSwitch_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_PriorityPowerSwitch.Build_PriorityPowerSwitch_C.OnBuildingTagChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               HasTag                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABuild_PriorityPowerSwitch_C::OnBuildingTagChanged(bool HasTag, const class FString& Tag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_PriorityPowerSwitch.Build_PriorityPowerSwitch_C.OnBuildingTagChanged");
		
		ABuild_PriorityPowerSwitch_C_OnBuildingTagChanged_Params params {};
		params.HasTag = HasTag;
		params.Tag = Tag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_PriorityPowerSwitch.Build_PriorityPowerSwitch_C.OnIsSwitchConnectedChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABuild_PriorityPowerSwitch_C::OnIsSwitchConnectedChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_PriorityPowerSwitch.Build_PriorityPowerSwitch_C.OnIsSwitchConnectedChanged");
		
		ABuild_PriorityPowerSwitch_C_OnIsSwitchConnectedChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_PriorityPowerSwitch.Build_PriorityPowerSwitch_C.OnIsSwitchOnChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABuild_PriorityPowerSwitch_C::OnIsSwitchOnChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_PriorityPowerSwitch.Build_PriorityPowerSwitch_C.OnIsSwitchOnChanged");
		
		ABuild_PriorityPowerSwitch_C_OnIsSwitchOnChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_PriorityPowerSwitch.Build_PriorityPowerSwitch_C.GainedSignificance
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABuild_PriorityPowerSwitch_C::GainedSignificance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_PriorityPowerSwitch.Build_PriorityPowerSwitch_C.GainedSignificance");
		
		ABuild_PriorityPowerSwitch_C_GainedSignificance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_PriorityPowerSwitch.Build_PriorityPowerSwitch_C.LostSignificance
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABuild_PriorityPowerSwitch_C::LostSignificance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_PriorityPowerSwitch.Build_PriorityPowerSwitch_C.LostSignificance");
		
		ABuild_PriorityPowerSwitch_C_LostSignificance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_PriorityPowerSwitch.Build_PriorityPowerSwitch_C.ExecuteUbergraph_Build_PriorityPowerSwitch
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_PriorityPowerSwitch_C::ExecuteUbergraph_Build_PriorityPowerSwitch(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_PriorityPowerSwitch.Build_PriorityPowerSwitch_C.ExecuteUbergraph_Build_PriorityPowerSwitch");
		
		ABuild_PriorityPowerSwitch_C_ExecuteUbergraph_Build_PriorityPowerSwitch_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuild_PriorityPowerSwitch_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuild_PriorityPowerSwitch_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Build_PriorityPowerSwitch.Build_PriorityPowerSwitch_C");
		return ptr;
	}

}


