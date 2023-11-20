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
	 * 		Name   -> Function Build_MinerMk3.Build_MinerMk3_C.ExecuteUbergraph_Build_MinerMk3
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_MinerMk3_C::ExecuteUbergraph_Build_MinerMk3(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_MinerMk3.Build_MinerMk3_C.ExecuteUbergraph_Build_MinerMk3");
		
		ABuild_MinerMk3_C_ExecuteUbergraph_Build_MinerMk3_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuild_MinerMk3_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuild_MinerMk3_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Build_MinerMk3.Build_MinerMk3_C");
		return ptr;
	}

}


