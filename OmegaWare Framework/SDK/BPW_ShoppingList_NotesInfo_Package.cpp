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
	 * 		Name   -> Function BPW_ShoppingList_NotesInfo.BPW_ShoppingList_NotesInfo_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_ShoppingList_NotesInfo_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ShoppingList_NotesInfo.BPW_ShoppingList_NotesInfo_C.Construct");
		
		UBPW_ShoppingList_NotesInfo_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_ShoppingList_NotesInfo.BPW_ShoppingList_NotesInfo_C.ExecuteUbergraph_BPW_ShoppingList_NotesInfo
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ShoppingList_NotesInfo_C::ExecuteUbergraph_BPW_ShoppingList_NotesInfo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ShoppingList_NotesInfo.BPW_ShoppingList_NotesInfo_C.ExecuteUbergraph_BPW_ShoppingList_NotesInfo");
		
		UBPW_ShoppingList_NotesInfo_C_ExecuteUbergraph_BPW_ShoppingList_NotesInfo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_ShoppingList_NotesInfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_ShoppingList_NotesInfo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_ShoppingList_NotesInfo.BPW_ShoppingList_NotesInfo_C");
		return ptr;
	}

}


