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
	 * 		Name   -> Function Holo_ConveyorAttachment.Holo_ConveyorAttachment_C.ReceiveConfigureComponents
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AFGBuildable*                                inBuildable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void AHolo_ConveyorAttachment_C::ReceiveConfigureComponents(class AFGBuildable* inBuildable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Holo_ConveyorAttachment.Holo_ConveyorAttachment_C.ReceiveConfigureComponents");
		
		AHolo_ConveyorAttachment_C_ReceiveConfigureComponents_Params params {};
		params.inBuildable = inBuildable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Holo_ConveyorAttachment.Holo_ConveyorAttachment_C.ExecuteUbergraph_Holo_ConveyorAttachment
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHolo_ConveyorAttachment_C::ExecuteUbergraph_Holo_ConveyorAttachment(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Holo_ConveyorAttachment.Holo_ConveyorAttachment_C.ExecuteUbergraph_Holo_ConveyorAttachment");
		
		AHolo_ConveyorAttachment_C_ExecuteUbergraph_Holo_ConveyorAttachment_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHolo_ConveyorAttachment_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHolo_ConveyorAttachment_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Holo_ConveyorAttachment.Holo_ConveyorAttachment_C");
		return ptr;
	}

}


