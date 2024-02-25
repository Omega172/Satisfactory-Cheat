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
	 * 		Name   -> Function BPW_OptionHardwareBenchmark.BPW_OptionHardwareBenchmark_C.OnOptionClicked
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_OptionHardwareBenchmark_C::OnOptionClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_OptionHardwareBenchmark.BPW_OptionHardwareBenchmark_C.OnOptionClicked");
		
		UBPW_OptionHardwareBenchmark_C_OnOptionClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_OptionHardwareBenchmark.BPW_OptionHardwareBenchmark_C.ExecuteUbergraph_BPW_OptionHardwareBenchmark
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_OptionHardwareBenchmark_C::ExecuteUbergraph_BPW_OptionHardwareBenchmark(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_OptionHardwareBenchmark.BPW_OptionHardwareBenchmark_C.ExecuteUbergraph_BPW_OptionHardwareBenchmark");
		
		UBPW_OptionHardwareBenchmark_C_ExecuteUbergraph_BPW_OptionHardwareBenchmark_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_OptionHardwareBenchmark_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_OptionHardwareBenchmark_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_OptionHardwareBenchmark.BPW_OptionHardwareBenchmark_C");
		return ptr;
	}

}


