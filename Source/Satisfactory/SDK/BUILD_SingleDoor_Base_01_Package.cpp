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
	 * 		Name   -> Function BUILD_SingleDoor_Base_01.BUILD_SingleDoor_Base_01_C.GetLookAtDecription
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class AFGCharacterPlayer*                          byCharacter                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FUseState                                   State                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	class FText ABUILD_SingleDoor_Base_01_C::GetLookAtDecription(class AFGCharacterPlayer* byCharacter, const struct FUseState& State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BUILD_SingleDoor_Base_01.BUILD_SingleDoor_Base_01_C.GetLookAtDecription");
		
		ABUILD_SingleDoor_Base_01_C_GetLookAtDecription_Params params {};
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
	 * 		Name   -> Function BUILD_SingleDoor_Base_01.BUILD_SingleDoor_Base_01_C.PlayCloseFromStart
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABUILD_SingleDoor_Base_01_C::PlayCloseFromStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BUILD_SingleDoor_Base_01.BUILD_SingleDoor_Base_01_C.PlayCloseFromStart");
		
		ABUILD_SingleDoor_Base_01_C_PlayCloseFromStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BUILD_SingleDoor_Base_01.BUILD_SingleDoor_Base_01_C.PlayCloseFromSeekTime
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             SeekTime                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABUILD_SingleDoor_Base_01_C::PlayCloseFromSeekTime(double SeekTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BUILD_SingleDoor_Base_01.BUILD_SingleDoor_Base_01_C.PlayCloseFromSeekTime");
		
		ABUILD_SingleDoor_Base_01_C_PlayCloseFromSeekTime_Params params {};
		params.SeekTime = SeekTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BUILD_SingleDoor_Base_01.BUILD_SingleDoor_Base_01_C.PlayOpenFromSeekTime
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             SeekTime                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABUILD_SingleDoor_Base_01_C::PlayOpenFromSeekTime(double SeekTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BUILD_SingleDoor_Base_01.BUILD_SingleDoor_Base_01_C.PlayOpenFromSeekTime");
		
		ABUILD_SingleDoor_Base_01_C_PlayOpenFromSeekTime_Params params {};
		params.SeekTime = SeekTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BUILD_SingleDoor_Base_01.BUILD_SingleDoor_Base_01_C.PlayOpenFromStart
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABUILD_SingleDoor_Base_01_C::PlayOpenFromStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BUILD_SingleDoor_Base_01.BUILD_SingleDoor_Base_01_C.PlayOpenFromStart");
		
		ABUILD_SingleDoor_Base_01_C_PlayOpenFromStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BUILD_SingleDoor_Base_01.BUILD_SingleDoor_Base_01_C.GetDoorLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FVector ABUILD_SingleDoor_Base_01_C::GetDoorLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BUILD_SingleDoor_Base_01.BUILD_SingleDoor_Base_01_C.GetDoorLocation");
		
		ABUILD_SingleDoor_Base_01_C_GetDoorLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BUILD_SingleDoor_Base_01.BUILD_SingleDoor_Base_01_C.OnMovementStateChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EFactoryGame_EDoorState                            oldState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EFactoryGame_EDoorState                            NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              percentage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABUILD_SingleDoor_Base_01_C::OnMovementStateChanged(EFactoryGame_EDoorState oldState, EFactoryGame_EDoorState NewState, float percentage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BUILD_SingleDoor_Base_01.BUILD_SingleDoor_Base_01_C.OnMovementStateChanged");
		
		ABUILD_SingleDoor_Base_01_C_OnMovementStateChanged_Params params {};
		params.oldState = oldState;
		params.NewState = NewState;
		params.percentage = percentage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BUILD_SingleDoor_Base_01.BUILD_SingleDoor_Base_01_C.OnDoorConfigurationChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EDoorConfiguration                                 NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABUILD_SingleDoor_Base_01_C::OnDoorConfigurationChanged(EDoorConfiguration NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BUILD_SingleDoor_Base_01.BUILD_SingleDoor_Base_01_C.OnDoorConfigurationChanged");
		
		ABUILD_SingleDoor_Base_01_C_OnDoorConfigurationChanged_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BUILD_SingleDoor_Base_01.BUILD_SingleDoor_Base_01_C.ExecuteUbergraph_BUILD_SingleDoor_Base_01
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABUILD_SingleDoor_Base_01_C::ExecuteUbergraph_BUILD_SingleDoor_Base_01(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BUILD_SingleDoor_Base_01.BUILD_SingleDoor_Base_01_C.ExecuteUbergraph_BUILD_SingleDoor_Base_01");
		
		ABUILD_SingleDoor_Base_01_C_ExecuteUbergraph_BUILD_SingleDoor_Base_01_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABUILD_SingleDoor_Base_01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABUILD_SingleDoor_Base_01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BUILD_SingleDoor_Base_01.BUILD_SingleDoor_Base_01_C");
		return ptr;
	}

}


