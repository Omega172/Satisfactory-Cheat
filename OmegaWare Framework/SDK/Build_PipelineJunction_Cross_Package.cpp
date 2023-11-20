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
	 * 		Name   -> Function Build_PipelineJunction_Cross.Build_PipelineJunction_Cross_C.PlayConstructSound_2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuild_PipelineJunction_Cross_C::PlayConstructSound_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_PipelineJunction_Cross.Build_PipelineJunction_Cross_C.PlayConstructSound_2");
		
		ABuild_PipelineJunction_Cross_C_PlayConstructSound_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_PipelineJunction_Cross.Build_PipelineJunction_Cross_C.ExecuteUbergraph_Build_PipelineJunction_Cross
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_PipelineJunction_Cross_C::ExecuteUbergraph_Build_PipelineJunction_Cross(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_PipelineJunction_Cross.Build_PipelineJunction_Cross_C.ExecuteUbergraph_Build_PipelineJunction_Cross");
		
		ABuild_PipelineJunction_Cross_C_ExecuteUbergraph_Build_PipelineJunction_Cross_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuild_PipelineJunction_Cross_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuild_PipelineJunction_Cross_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Build_PipelineJunction_Cross.Build_PipelineJunction_Cross_C");
		return ptr;
	}

}


