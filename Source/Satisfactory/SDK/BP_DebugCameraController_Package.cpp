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
	 * 		Name   -> Function BP_DebugCameraController.BP_DebugCameraController_C.InpActEvt_Shift_P_K2Node_InputKeyEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_DebugCameraController_C::InpActEvt_Shift_P_K2Node_InputKeyEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugCameraController.BP_DebugCameraController_C.InpActEvt_Shift_P_K2Node_InputKeyEvent_1");
		
		ABP_DebugCameraController_C_InpActEvt_Shift_P_K2Node_InputKeyEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_DebugCameraController.BP_DebugCameraController_C.ReceiveOnActivate
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           OriginalPC                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DebugCameraController_C::ReceiveOnActivate(class APlayerController* OriginalPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugCameraController.BP_DebugCameraController_C.ReceiveOnActivate");
		
		ABP_DebugCameraController_C_ReceiveOnActivate_Params params {};
		params.OriginalPC = OriginalPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_DebugCameraController.BP_DebugCameraController_C.ReceiveOnDeactivate
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           RestoredPC                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DebugCameraController_C::ReceiveOnDeactivate(class APlayerController* RestoredPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugCameraController.BP_DebugCameraController_C.ReceiveOnDeactivate");
		
		ABP_DebugCameraController_C_ReceiveOnDeactivate_Params params {};
		params.RestoredPC = RestoredPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_DebugCameraController.BP_DebugCameraController_C.ExecuteUbergraph_BP_DebugCameraController
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DebugCameraController_C::ExecuteUbergraph_BP_DebugCameraController(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugCameraController.BP_DebugCameraController_C.ExecuteUbergraph_BP_DebugCameraController");
		
		ABP_DebugCameraController_C_ExecuteUbergraph_BP_DebugCameraController_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_DebugCameraController_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_DebugCameraController_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_DebugCameraController.BP_DebugCameraController_C");
		return ptr;
	}

}


