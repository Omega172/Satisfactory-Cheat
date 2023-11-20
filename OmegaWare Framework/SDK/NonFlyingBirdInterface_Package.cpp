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
	 * 		Name   -> Function NonFlyingBirdInterface.NonFlyingBirdInterface_C.MakePanic
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UNonFlyingBirdInterface_C::MakePanic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NonFlyingBirdInterface.NonFlyingBirdInterface_C.MakePanic");
		
		UNonFlyingBirdInterface_C_MakePanic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function NonFlyingBirdInterface.NonFlyingBirdInterface_C.SetLuring
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               inLuring                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNonFlyingBirdInterface_C::SetLuring(bool inLuring)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NonFlyingBirdInterface.NonFlyingBirdInterface_C.SetLuring");
		
		UNonFlyingBirdInterface_C_SetLuring_Params params {};
		params.inLuring = inLuring;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNonFlyingBirdInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNonFlyingBirdInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass NonFlyingBirdInterface.NonFlyingBirdInterface_C");
		return ptr;
	}

}


