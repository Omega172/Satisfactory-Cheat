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
	 * 		Name   -> Function BPW_ResourceSink_ScrollingCounter.BPW_ResourceSink_ScrollingCounter_C.UpdateCounter
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int64_t                                            NewNumber                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ResourceSink_ScrollingCounter_C::UpdateCounter(int64_t NewNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink_ScrollingCounter.BPW_ResourceSink_ScrollingCounter_C.UpdateCounter");
		
		UBPW_ResourceSink_ScrollingCounter_C_UpdateCounter_Params params {};
		params.NewNumber = NewNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSink_ScrollingCounter.BPW_ResourceSink_ScrollingCounter_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ResourceSink_ScrollingCounter_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink_ScrollingCounter.BPW_ResourceSink_ScrollingCounter_C.PreConstruct");
		
		UBPW_ResourceSink_ScrollingCounter_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSink_ScrollingCounter.BPW_ResourceSink_ScrollingCounter_C.AnimateDigits
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      TextToAnimate                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBPW_ResourceSink_ScrollingCounter_C::AnimateDigits(const class FString& TextToAnimate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink_ScrollingCounter.BPW_ResourceSink_ScrollingCounter_C.AnimateDigits");
		
		UBPW_ResourceSink_ScrollingCounter_C_AnimateDigits_Params params {};
		params.TextToAnimate = TextToAnimate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSink_ScrollingCounter.BPW_ResourceSink_ScrollingCounter_C.ExecuteUbergraph_BPW_ResourceSink_ScrollingCounter
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ResourceSink_ScrollingCounter_C::ExecuteUbergraph_BPW_ResourceSink_ScrollingCounter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink_ScrollingCounter.BPW_ResourceSink_ScrollingCounter_C.ExecuteUbergraph_BPW_ResourceSink_ScrollingCounter");
		
		UBPW_ResourceSink_ScrollingCounter_C_ExecuteUbergraph_BPW_ResourceSink_ScrollingCounter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_ResourceSink_ScrollingCounter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_ResourceSink_ScrollingCounter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_ResourceSink_ScrollingCounter.BPW_ResourceSink_ScrollingCounter_C");
		return ptr;
	}

}


