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
	 * 		Name   -> Function Build_PipeHyperSupport.Build_PipeHyperSupport_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuild_PipeHyperSupport_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_PipeHyperSupport.Build_PipeHyperSupport_C.UserConstructionScript");
		
		ABuild_PipeHyperSupport_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_PipeHyperSupport.Build_PipeHyperSupport_C.PlayConstructSound_2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuild_PipeHyperSupport_C::PlayConstructSound_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_PipeHyperSupport.Build_PipeHyperSupport_C.PlayConstructSound_2");
		
		ABuild_PipeHyperSupport_C_PlayConstructSound_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_PipeHyperSupport.Build_PipeHyperSupport_C.ExecuteUbergraph_Build_PipeHyperSupport
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_PipeHyperSupport_C::ExecuteUbergraph_Build_PipeHyperSupport(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_PipeHyperSupport.Build_PipeHyperSupport_C.ExecuteUbergraph_Build_PipeHyperSupport");
		
		ABuild_PipeHyperSupport_C_ExecuteUbergraph_Build_PipeHyperSupport_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuild_PipeHyperSupport_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuild_PipeHyperSupport_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Build_PipeHyperSupport.Build_PipeHyperSupport_C");
		return ptr;
	}

}


