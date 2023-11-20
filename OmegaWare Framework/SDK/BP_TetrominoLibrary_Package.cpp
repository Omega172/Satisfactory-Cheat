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
	 * 		Name   -> Function BP_TetrominoLibrary.BP_TetrominoLibrary_C.GetTetrominoData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TMap<class UClass*, struct FStruct_TetrominoData>  mTetrominoData                                             (Parm, OutParm, ContainsInstancedReference)
	 */
	void UBP_TetrominoLibrary_C::GetTetrominoData(TMap<class UClass*, struct FStruct_TetrominoData>* mTetrominoData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TetrominoLibrary.BP_TetrominoLibrary_C.GetTetrominoData");
		
		UBP_TetrominoLibrary_C_GetTetrominoData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (mTetrominoData != nullptr)
			*mTetrominoData = params.mTetrominoData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_TetrominoLibrary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_TetrominoLibrary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_TetrominoLibrary.BP_TetrominoLibrary_C");
		return ptr;
	}

}


