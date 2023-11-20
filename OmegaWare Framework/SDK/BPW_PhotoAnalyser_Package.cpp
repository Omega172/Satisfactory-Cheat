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
	 * 		Name   -> Function BPW_PhotoAnalyser.BPW_PhotoAnalyser_C.GetClearedPhotoChallenges
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UClass*>                              ClearedChallenges                                          (Parm, OutParm)
	 */
	void UBPW_PhotoAnalyser_C::GetClearedPhotoChallenges(TArray<class UClass*>* ClearedChallenges)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoAnalyser.BPW_PhotoAnalyser_C.GetClearedPhotoChallenges");
		
		UBPW_PhotoAnalyser_C_GetClearedPhotoChallenges_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ClearedChallenges != nullptr)
			*ClearedChallenges = params.ClearedChallenges;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoAnalyser.BPW_PhotoAnalyser_C.IsActorPhotographable
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBPW_PhotoAnalyser_C::IsActorPhotographable(class UObject* Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoAnalyser.BPW_PhotoAnalyser_C.IsActorPhotographable");
		
		UBPW_PhotoAnalyser_C_IsActorPhotographable_Params params {};
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoAnalyser.BPW_PhotoAnalyser_C.FindActors
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_PhotoAnalyser_C::FindActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoAnalyser.BPW_PhotoAnalyser_C.FindActors");
		
		UBPW_PhotoAnalyser_C_FindActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoAnalyser.BPW_PhotoAnalyser_C.CheckChallenges
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UClass*>                              NewClearedChallenges                                       (Parm, OutParm)
	 */
	void UBPW_PhotoAnalyser_C::CheckChallenges(TArray<class UClass*>* NewClearedChallenges)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoAnalyser.BPW_PhotoAnalyser_C.CheckChallenges");
		
		UBPW_PhotoAnalyser_C_CheckChallenges_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewClearedChallenges != nullptr)
			*NewClearedChallenges = params.NewClearedChallenges;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoAnalyser.BPW_PhotoAnalyser_C.AnalysePhoto
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_PhotoAnalyser_C::AnalysePhoto()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoAnalyser.BPW_PhotoAnalyser_C.AnalysePhoto");
		
		UBPW_PhotoAnalyser_C_AnalysePhoto_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoAnalyser.BPW_PhotoAnalyser_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_PhotoAnalyser_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoAnalyser.BPW_PhotoAnalyser_C.Construct");
		
		UBPW_PhotoAnalyser_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoAnalyser.BPW_PhotoAnalyser_C.SetPhotoChallengeToCleared
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Challenge                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PhotoAnalyser_C::SetPhotoChallengeToCleared(class UClass* Challenge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoAnalyser.BPW_PhotoAnalyser_C.SetPhotoChallengeToCleared");
		
		UBPW_PhotoAnalyser_C_SetPhotoChallengeToCleared_Params params {};
		params.Challenge = Challenge;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoAnalyser.BPW_PhotoAnalyser_C.IndicateFoundActors
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_PhotoAnalyser_C::IndicateFoundActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoAnalyser.BPW_PhotoAnalyser_C.IndicateFoundActors");
		
		UBPW_PhotoAnalyser_C_IndicateFoundActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoAnalyser.BPW_PhotoAnalyser_C.EventShowNotifications
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_PhotoAnalyser_C::EventShowNotifications()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoAnalyser.BPW_PhotoAnalyser_C.EventShowNotifications");
		
		UBPW_PhotoAnalyser_C_EventShowNotifications_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoAnalyser.BPW_PhotoAnalyser_C.OnAnalasysAnimComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_PhotoAnalyser_C::OnAnalasysAnimComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoAnalyser.BPW_PhotoAnalyser_C.OnAnalasysAnimComplete");
		
		UBPW_PhotoAnalyser_C_OnAnalasysAnimComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoAnalyser.BPW_PhotoAnalyser_C.ExecuteUbergraph_BPW_PhotoAnalyser
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PhotoAnalyser_C::ExecuteUbergraph_BPW_PhotoAnalyser(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoAnalyser.BPW_PhotoAnalyser_C.ExecuteUbergraph_BPW_PhotoAnalyser");
		
		UBPW_PhotoAnalyser_C_ExecuteUbergraph_BPW_PhotoAnalyser_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_PhotoAnalyser_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_PhotoAnalyser_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_PhotoAnalyser.BPW_PhotoAnalyser_C");
		return ptr;
	}

}


