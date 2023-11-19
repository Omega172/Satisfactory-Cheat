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
	 * 		Name   -> Function Build_XmassLightsLine.Build_XmassLightsLine_C.Set Mesh Data
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABuild_XmassLightsLine_C::SetMeshData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_XmassLightsLine.Build_XmassLightsLine_C.Set Mesh Data");
		
		ABuild_XmassLightsLine_C_SetMeshData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_XmassLightsLine.Build_XmassLightsLine_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABuild_XmassLightsLine_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_XmassLightsLine.Build_XmassLightsLine_C.ReceiveBeginPlay");
		
		ABuild_XmassLightsLine_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_XmassLightsLine.Build_XmassLightsLine_C.ExecuteUbergraph_Build_XmassLightsLine
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_XmassLightsLine_C::ExecuteUbergraph_Build_XmassLightsLine(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_XmassLightsLine.Build_XmassLightsLine_C.ExecuteUbergraph_Build_XmassLightsLine");
		
		ABuild_XmassLightsLine_C_ExecuteUbergraph_Build_XmassLightsLine_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuild_XmassLightsLine_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuild_XmassLightsLine_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Build_XmassLightsLine.Build_XmassLightsLine_C");
		return ptr;
	}

}


