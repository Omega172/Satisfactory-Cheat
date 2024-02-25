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
	 * 		Name   -> Function Attach_Cup.Attach_Cup_C.PlayAttachEffects3P
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AAttach_Cup_C::PlayAttachEffects3P()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Attach_Cup.Attach_Cup_C.PlayAttachEffects3P");
		
		AAttach_Cup_C_PlayAttachEffects3P_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Attach_Cup.Attach_Cup_C.PlayUseEffect
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     UseLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAttach_Cup_C::PlayUseEffect(const struct FVector& UseLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Attach_Cup.Attach_Cup_C.PlayUseEffect");
		
		AAttach_Cup_C_PlayUseEffect_Params params {};
		params.UseLocation = UseLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Attach_Cup.Attach_Cup_C.ExecuteUbergraph_Attach_Cup
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAttach_Cup_C::ExecuteUbergraph_Attach_Cup(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Attach_Cup.Attach_Cup_C.ExecuteUbergraph_Attach_Cup");
		
		AAttach_Cup_C_ExecuteUbergraph_Attach_Cup_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAttach_Cup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAttach_Cup_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Attach_Cup.Attach_Cup_C");
		return ptr;
	}

}


