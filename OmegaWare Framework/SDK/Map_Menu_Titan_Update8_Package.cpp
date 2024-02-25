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
	 * 		Name   -> Function Map_Menu_Titan_Update8.Map_Menu_Titan_Update8_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AMap_Menu_Titan_Update8_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Map_Menu_Titan_Update8.Map_Menu_Titan_Update8_C.ReceiveBeginPlay");
		
		AMap_Menu_Titan_Update8_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Map_Menu_Titan_Update8.Map_Menu_Titan_Update8_C.ExecuteUbergraph_Map_Menu_Titan_Update8
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMap_Menu_Titan_Update8_C::ExecuteUbergraph_Map_Menu_Titan_Update8(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Map_Menu_Titan_Update8.Map_Menu_Titan_Update8_C.ExecuteUbergraph_Map_Menu_Titan_Update8");
		
		AMap_Menu_Titan_Update8_C_ExecuteUbergraph_Map_Menu_Titan_Update8_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMap_Menu_Titan_Update8_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMap_Menu_Titan_Update8_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Map_Menu_Titan_Update8.Map_Menu_Titan_Update8_C");
		return ptr;
	}

}


