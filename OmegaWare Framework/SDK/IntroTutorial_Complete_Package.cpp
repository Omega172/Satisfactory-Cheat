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
	 * 		Name   -> Function IntroTutorial_Complete.IntroTutorial_Complete_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UIntroTutorial_Complete_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IntroTutorial_Complete.IntroTutorial_Complete_C.Destruct");
		
		UIntroTutorial_Complete_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function IntroTutorial_Complete.IntroTutorial_Complete_C.ExecuteUbergraph_IntroTutorial_Complete
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UIntroTutorial_Complete_C::ExecuteUbergraph_IntroTutorial_Complete(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IntroTutorial_Complete.IntroTutorial_Complete_C.ExecuteUbergraph_IntroTutorial_Complete");
		
		UIntroTutorial_Complete_C_ExecuteUbergraph_IntroTutorial_Complete_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIntroTutorial_Complete_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIntroTutorial_Complete_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass IntroTutorial_Complete.IntroTutorial_Complete_C");
		return ptr;
	}

}


