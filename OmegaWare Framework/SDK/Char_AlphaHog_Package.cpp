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
	 * 		Name   -> Function Char_AlphaHog.Char_AlphaHog_C.ReceiveDied
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AChar_AlphaHog_C::ReceiveDied()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_AlphaHog.Char_AlphaHog_C.ReceiveDied");
		
		AChar_AlphaHog_C_ReceiveDied_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Char_AlphaHog.Char_AlphaHog_C.ExecuteUbergraph_Char_AlphaHog
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AChar_AlphaHog_C::ExecuteUbergraph_Char_AlphaHog(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_AlphaHog.Char_AlphaHog_C.ExecuteUbergraph_Char_AlphaHog");
		
		AChar_AlphaHog_C_ExecuteUbergraph_Char_AlphaHog_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AChar_AlphaHog_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AChar_AlphaHog_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Char_AlphaHog.Char_AlphaHog_C");
		return ptr;
	}

}


