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
	 * 		Name   -> Function BPI_PhotoAnalyserHelpers.BPI_PhotoAnalyserHelpers_C.GetClearedPhotoChallenges
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UClass*>                              ClearedChallenges                                          (Parm, OutParm)
	 */
	void UBPI_PhotoAnalyserHelpers_C::GetClearedPhotoChallenges(TArray<class UClass*>* ClearedChallenges)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_PhotoAnalyserHelpers.BPI_PhotoAnalyserHelpers_C.GetClearedPhotoChallenges");
		
		UBPI_PhotoAnalyserHelpers_C_GetClearedPhotoChallenges_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ClearedChallenges != nullptr)
			*ClearedChallenges = params.ClearedChallenges;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPI_PhotoAnalyserHelpers.BPI_PhotoAnalyserHelpers_C.SetPhotoChallengeToCleared
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Challenge                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_PhotoAnalyserHelpers_C::SetPhotoChallengeToCleared(class UClass* Challenge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_PhotoAnalyserHelpers.BPI_PhotoAnalyserHelpers_C.SetPhotoChallengeToCleared");
		
		UBPI_PhotoAnalyserHelpers_C_SetPhotoChallengeToCleared_Params params {};
		params.Challenge = Challenge;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_PhotoAnalyserHelpers_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_PhotoAnalyserHelpers_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_PhotoAnalyserHelpers.BPI_PhotoAnalyserHelpers_C");
		return ptr;
	}

}


