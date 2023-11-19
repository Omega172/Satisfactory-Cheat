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
	 * 		Name   -> Function Controller_NonFlyingBird.Controller_NonFlyingBird_C.IsActorConsideredThreat
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	bool AController_NonFlyingBird_C::IsActorConsideredThreat(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Controller_NonFlyingBird.Controller_NonFlyingBird_C.IsActorConsideredThreat");
		
		AController_NonFlyingBird_C_IsActorConsideredThreat_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Controller_NonFlyingBird.Controller_NonFlyingBird_C.SetLuring
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               inLuring                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AController_NonFlyingBird_C::SetLuring(bool inLuring)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Controller_NonFlyingBird.Controller_NonFlyingBird_C.SetLuring");
		
		AController_NonFlyingBird_C_SetLuring_Params params {};
		params.inLuring = inLuring;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Controller_NonFlyingBird.Controller_NonFlyingBird_C.MakePanic
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AController_NonFlyingBird_C::MakePanic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Controller_NonFlyingBird.Controller_NonFlyingBird_C.MakePanic");
		
		AController_NonFlyingBird_C_MakePanic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Controller_NonFlyingBird.Controller_NonFlyingBird_C.ExecuteUbergraph_Controller_NonFlyingBird
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AController_NonFlyingBird_C::ExecuteUbergraph_Controller_NonFlyingBird(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Controller_NonFlyingBird.Controller_NonFlyingBird_C.ExecuteUbergraph_Controller_NonFlyingBird");
		
		AController_NonFlyingBird_C_ExecuteUbergraph_Controller_NonFlyingBird_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AController_NonFlyingBird_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AController_NonFlyingBird_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Controller_NonFlyingBird.Controller_NonFlyingBird_C");
		return ptr;
	}

}


