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
	 * 		Name   -> Function Desc_Rebar_Stunshot.Desc_Rebar_Stunshot_C.FireAmmunition
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UDesc_Rebar_Stunshot_C::FireAmmunition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desc_Rebar_Stunshot.Desc_Rebar_Stunshot_C.FireAmmunition");
		
		UDesc_Rebar_Stunshot_C_FireAmmunition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Desc_Rebar_Stunshot.Desc_Rebar_Stunshot_C.ExecuteUbergraph_Desc_Rebar_Stunshot
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDesc_Rebar_Stunshot_C::ExecuteUbergraph_Desc_Rebar_Stunshot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Desc_Rebar_Stunshot.Desc_Rebar_Stunshot_C.ExecuteUbergraph_Desc_Rebar_Stunshot");
		
		UDesc_Rebar_Stunshot_C_ExecuteUbergraph_Desc_Rebar_Stunshot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDesc_Rebar_Stunshot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDesc_Rebar_Stunshot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Desc_Rebar_Stunshot.Desc_Rebar_Stunshot_C");
		return ptr;
	}

}


