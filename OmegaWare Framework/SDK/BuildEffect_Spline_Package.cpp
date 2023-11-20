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
	 * 		Name   -> Function BuildEffect_Spline.BuildEffect_Spline_C.Cleanup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuildEffect_Spline_C::Cleanup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BuildEffect_Spline.BuildEffect_Spline_C.Cleanup");
		
		ABuildEffect_Spline_C_Cleanup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BuildEffect_Spline.BuildEffect_Spline_C.ExecuteUbergraph_BuildEffect_Spline
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuildEffect_Spline_C::ExecuteUbergraph_BuildEffect_Spline(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BuildEffect_Spline.BuildEffect_Spline_C.ExecuteUbergraph_BuildEffect_Spline");
		
		ABuildEffect_Spline_C_ExecuteUbergraph_BuildEffect_Spline_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuildEffect_Spline_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuildEffect_Spline_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BuildEffect_Spline.BuildEffect_Spline_C");
		return ptr;
	}

}


