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
	 * 		Name   -> Function BTD_SpaceRabbit_IsTamed.BTD_SpaceRabbit_IsTamed_C.PerformConditionCheck
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBTD_SpaceRabbit_IsTamed_C::PerformConditionCheck(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTD_SpaceRabbit_IsTamed.BTD_SpaceRabbit_IsTamed_C.PerformConditionCheck");
		
		UBTD_SpaceRabbit_IsTamed_C_PerformConditionCheck_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTD_SpaceRabbit_IsTamed_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTD_SpaceRabbit_IsTamed_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BTD_SpaceRabbit_IsTamed.BTD_SpaceRabbit_IsTamed_C");
		return ptr;
	}

}


