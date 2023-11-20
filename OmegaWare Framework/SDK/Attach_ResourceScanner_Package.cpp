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
	 * 		Name   -> Function Attach_ResourceScanner.Attach_ResourceScanner_C.PlayUseEffect
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     UseLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAttach_ResourceScanner_C::PlayUseEffect(const struct FVector& UseLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Attach_ResourceScanner.Attach_ResourceScanner_C.PlayUseEffect");
		
		AAttach_ResourceScanner_C_PlayUseEffect_Params params {};
		params.UseLocation = UseLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Attach_ResourceScanner.Attach_ResourceScanner_C.Event BuildgunVisibility
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAttach_ResourceScanner_C::EventBuildgunVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Attach_ResourceScanner.Attach_ResourceScanner_C.Event BuildgunVisibility");
		
		AAttach_ResourceScanner_C_EventBuildgunVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Attach_ResourceScanner.Attach_ResourceScanner_C.Event ScannerIKTimer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAttach_ResourceScanner_C::EventScannerIKTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Attach_ResourceScanner.Attach_ResourceScanner_C.Event ScannerIKTimer");
		
		AAttach_ResourceScanner_C_EventScannerIKTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Attach_ResourceScanner.Attach_ResourceScanner_C.ExecuteUbergraph_Attach_ResourceScanner
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAttach_ResourceScanner_C::ExecuteUbergraph_Attach_ResourceScanner(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Attach_ResourceScanner.Attach_ResourceScanner_C.ExecuteUbergraph_Attach_ResourceScanner");
		
		AAttach_ResourceScanner_C_ExecuteUbergraph_Attach_ResourceScanner_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAttach_ResourceScanner_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAttach_ResourceScanner_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Attach_ResourceScanner.Attach_ResourceScanner_C");
		return ptr;
	}

}


