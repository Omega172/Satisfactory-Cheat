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
	 * 		Name   -> Function BPW_InventorySettings_Jetpack.BPW_InventorySettings_Jetpack_C.GenerateFuelList
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_InventorySettings_Jetpack_C::GenerateFuelList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_InventorySettings_Jetpack.BPW_InventorySettings_Jetpack_C.GenerateFuelList");
		
		UBPW_InventorySettings_Jetpack_C_GenerateFuelList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_InventorySettings_Jetpack.BPW_InventorySettings_Jetpack_C.OnListButtonClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_InventorySettings_Jetpack_C::OnListButtonClicked(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_InventorySettings_Jetpack.BPW_InventorySettings_Jetpack_C.OnListButtonClicked");
		
		UBPW_InventorySettings_Jetpack_C_OnListButtonClicked_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_InventorySettings_Jetpack.BPW_InventorySettings_Jetpack_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_InventorySettings_Jetpack_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_InventorySettings_Jetpack.BPW_InventorySettings_Jetpack_C.Construct");
		
		UBPW_InventorySettings_Jetpack_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_InventorySettings_Jetpack.BPW_InventorySettings_Jetpack_C.BndEvt__BPW_InventorySettings_Jetpack_BPW_InventorySlotSettings_MenuContainer_K2Node_ComponentBoundEvent_0_OnCloseClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_InventorySettings_Jetpack_C::BndEvt__BPW_InventorySettings_Jetpack_BPW_InventorySlotSettings_MenuContainer_K2Node_ComponentBoundEvent_0_OnCloseClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_InventorySettings_Jetpack.BPW_InventorySettings_Jetpack_C.BndEvt__BPW_InventorySettings_Jetpack_BPW_InventorySlotSettings_MenuContainer_K2Node_ComponentBoundEvent_0_OnCloseClicked__DelegateSignature");
		
		UBPW_InventorySettings_Jetpack_C_BndEvt__BPW_InventorySettings_Jetpack_BPW_InventorySlotSettings_MenuContainer_K2Node_ComponentBoundEvent_0_OnCloseClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_InventorySettings_Jetpack.BPW_InventorySettings_Jetpack_C.ExecuteUbergraph_BPW_InventorySettings_Jetpack
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_InventorySettings_Jetpack_C::ExecuteUbergraph_BPW_InventorySettings_Jetpack(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_InventorySettings_Jetpack.BPW_InventorySettings_Jetpack_C.ExecuteUbergraph_BPW_InventorySettings_Jetpack");
		
		UBPW_InventorySettings_Jetpack_C_ExecuteUbergraph_BPW_InventorySettings_Jetpack_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_InventorySettings_Jetpack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_InventorySettings_Jetpack_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_InventorySettings_Jetpack.BPW_InventorySettings_Jetpack_C");
		return ptr;
	}

}


