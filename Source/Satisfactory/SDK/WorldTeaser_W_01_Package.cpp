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
	 * 		Name   -> Function WorldTeaser_W_01.WorldTeaser_W_01_DirectorBP_C.OnCreated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UWorldTeaser_W_01_DirectorBP_C::OnCreated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WorldTeaser_W_01.WorldTeaser_W_01_DirectorBP_C.OnCreated");
		
		UWorldTeaser_W_01_DirectorBP_C_OnCreated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function WorldTeaser_W_01.WorldTeaser_W_01_DirectorBP_C.ExecuteUbergraph_WorldTeaser_W_01 (Director BP)
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWorldTeaser_W_01_DirectorBP_C::ExecuteUbergraph_WorldTeaser_W_01DirectorBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WorldTeaser_W_01.WorldTeaser_W_01_DirectorBP_C.ExecuteUbergraph_WorldTeaser_W_01 (Director BP)");
		
		UWorldTeaser_W_01_DirectorBP_C_ExecuteUbergraph_WorldTeaser_W_01DirectorBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWorldTeaser_W_01_DirectorBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWorldTeaser_W_01_DirectorBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WorldTeaser_W_01.WorldTeaser_W_01_DirectorBP_C");
		return ptr;
	}

}


