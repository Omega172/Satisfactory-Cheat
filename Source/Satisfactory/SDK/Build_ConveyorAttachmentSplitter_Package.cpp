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
	 * 		Name   -> Function Build_ConveyorAttachmentSplitter.Build_ConveyorAttachmentSplitter_C.PlayConstructSound
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void ABuild_ConveyorAttachmentSplitter_C::PlayConstructSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_ConveyorAttachmentSplitter.Build_ConveyorAttachmentSplitter_C.PlayConstructSound");
		
		ABuild_ConveyorAttachmentSplitter_C_PlayConstructSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_ConveyorAttachmentSplitter.Build_ConveyorAttachmentSplitter_C.ExecuteUbergraph_Build_ConveyorAttachmentSplitter
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_ConveyorAttachmentSplitter_C::ExecuteUbergraph_Build_ConveyorAttachmentSplitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_ConveyorAttachmentSplitter.Build_ConveyorAttachmentSplitter_C.ExecuteUbergraph_Build_ConveyorAttachmentSplitter");
		
		ABuild_ConveyorAttachmentSplitter_C_ExecuteUbergraph_Build_ConveyorAttachmentSplitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuild_ConveyorAttachmentSplitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuild_ConveyorAttachmentSplitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Build_ConveyorAttachmentSplitter.Build_ConveyorAttachmentSplitter_C");
		return ptr;
	}

}


