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
	 * 		Name   -> Function Widget_GenericParticleSpawner.Widget_GenericParticleSpawner_C.CreateParticles
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NumberOfParticles                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_GenericParticleSpawner_C::CreateParticles(int32_t NumberOfParticles)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_GenericParticleSpawner.Widget_GenericParticleSpawner_C.CreateParticles");
		
		UWidget_GenericParticleSpawner_C_CreateParticles_Params params {};
		params.NumberOfParticles = NumberOfParticles;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_GenericParticleSpawner.Widget_GenericParticleSpawner_C.ExecuteUbergraph_Widget_GenericParticleSpawner
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_GenericParticleSpawner_C::ExecuteUbergraph_Widget_GenericParticleSpawner(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_GenericParticleSpawner.Widget_GenericParticleSpawner_C.ExecuteUbergraph_Widget_GenericParticleSpawner");
		
		UWidget_GenericParticleSpawner_C_ExecuteUbergraph_Widget_GenericParticleSpawner_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_GenericParticleSpawner_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_GenericParticleSpawner_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_GenericParticleSpawner.Widget_GenericParticleSpawner_C");
		return ptr;
	}

}


