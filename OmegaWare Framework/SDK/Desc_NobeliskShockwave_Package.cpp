/**
 * Name: Satisfactory
 * Version: Early_Access_CL#273254
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Desc_NobeliskShockwave.Desc_NobeliskShockwave_C.ExecuteUbergraph_Desc_NobeliskShockwave
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDesc_NobeliskShockwave_C::ExecuteUbergraph_Desc_NobeliskShockwave(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desc_NobeliskShockwave.Desc_NobeliskShockwave_C.ExecuteUbergraph_Desc_NobeliskShockwave");
		
		UDesc_NobeliskShockwave_C_ExecuteUbergraph_Desc_NobeliskShockwave_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDesc_NobeliskShockwave_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDesc_NobeliskShockwave_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Desc_NobeliskShockwave.Desc_NobeliskShockwave_C");
		return ptr;
	}

}


