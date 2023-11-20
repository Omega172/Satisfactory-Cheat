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
	 * 		Name   -> Function BP_ProfileSpline.BP_ProfileSpline_C.GetCurrentView
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 */
	struct FTransform ABP_ProfileSpline_C::GetCurrentView()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileSpline.BP_ProfileSpline_C.GetCurrentView");
		
		ABP_ProfileSpline_C_GetCurrentView_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProfileSpline.BP_ProfileSpline_C.GetCurrentDuration
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	float ABP_ProfileSpline_C::GetCurrentDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileSpline.BP_ProfileSpline_C.GetCurrentDuration");
		
		ABP_ProfileSpline_C_GetCurrentDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProfileSpline.BP_ProfileSpline_C.GetConsoleVariableByName
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      VariableName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      VariableInput                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_ProfileSpline_C::GetConsoleVariableByName(const class FString& VariableName, class FString* VariableInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileSpline.BP_ProfileSpline_C.GetConsoleVariableByName");
		
		ABP_ProfileSpline_C_GetConsoleVariableByName_Params params {};
		params.VariableName = VariableName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (VariableInput != nullptr)
			*VariableInput = params.VariableInput;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProfileSpline.BP_ProfileSpline_C.CheckDoneRespawning
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bDoneSpawning                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ProfileSpline_C::CheckDoneRespawning(bool* bDoneSpawning)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileSpline.BP_ProfileSpline_C.CheckDoneRespawning");
		
		ABP_ProfileSpline_C_CheckDoneRespawning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bDoneSpawning != nullptr)
			*bDoneSpawning = params.bDoneSpawning;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProfileSpline.BP_ProfileSpline_C.GetPlayerController
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsValid                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerController*                           PlayerController                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ProfileSpline_C::GetPlayerController(bool* bIsValid, class APlayerController** PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileSpline.BP_ProfileSpline_C.GetPlayerController");
		
		ABP_ProfileSpline_C_GetPlayerController_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValid != nullptr)
			*bIsValid = params.bIsValid;
		if (PlayerController != nullptr)
			*PlayerController = params.PlayerController;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProfileSpline.BP_ProfileSpline_C.StartProfile
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_ProfileSpline_C::StartProfile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileSpline.BP_ProfileSpline_C.StartProfile");
		
		ABP_ProfileSpline_C_StartProfile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProfileSpline.BP_ProfileSpline_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ProfileSpline_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileSpline.BP_ProfileSpline_C.ReceiveTick");
		
		ABP_ProfileSpline_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProfileSpline.BP_ProfileSpline_C.FetchPlayerPawn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ProfileSpline_C::FetchPlayerPawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileSpline.BP_ProfileSpline_C.FetchPlayerPawn");
		
		ABP_ProfileSpline_C_FetchPlayerPawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProfileSpline.BP_ProfileSpline_C.EnsurePlayerDoneSpawning
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ProfileSpline_C::EnsurePlayerDoneSpawning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileSpline.BP_ProfileSpline_C.EnsurePlayerDoneSpawning");
		
		ABP_ProfileSpline_C_EnsurePlayerDoneSpawning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProfileSpline.BP_ProfileSpline_C.DebugStart
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ProfileSpline_C::DebugStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileSpline.BP_ProfileSpline_C.DebugStart");
		
		ABP_ProfileSpline_C_DebugStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ProfileSpline.BP_ProfileSpline_C.ExecuteUbergraph_BP_ProfileSpline
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ProfileSpline_C::ExecuteUbergraph_BP_ProfileSpline(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileSpline.BP_ProfileSpline_C.ExecuteUbergraph_BP_ProfileSpline");
		
		ABP_ProfileSpline_C_ExecuteUbergraph_BP_ProfileSpline_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ProfileSpline_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ProfileSpline_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ProfileSpline.BP_ProfileSpline_C");
		return ptr;
	}

}


