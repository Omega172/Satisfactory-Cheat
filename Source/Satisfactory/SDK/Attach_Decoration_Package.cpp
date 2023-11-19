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
	 * 		Name   -> Function Attach_Decoration.Attach_Decoration_C.CacheDescriptor
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AAttach_Decoration_C::CacheDescriptor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Attach_Decoration.Attach_Decoration_C.CacheDescriptor");
		
		AAttach_Decoration_C_CacheDescriptor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Attach_Decoration.Attach_Decoration_C.OnAttach
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AAttach_Decoration_C::OnAttach()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Attach_Decoration.Attach_Decoration_C.OnAttach");
		
		AAttach_Decoration_C_OnAttach_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Attach_Decoration.Attach_Decoration_C.ExecuteUbergraph_Attach_Decoration
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAttach_Decoration_C::ExecuteUbergraph_Attach_Decoration(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Attach_Decoration.Attach_Decoration_C.ExecuteUbergraph_Attach_Decoration");
		
		AAttach_Decoration_C_ExecuteUbergraph_Attach_Decoration_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAttach_Decoration_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAttach_Decoration_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Attach_Decoration.Attach_Decoration_C");
		return ptr;
	}

}


