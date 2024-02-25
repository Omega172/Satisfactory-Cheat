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
	 * 		Name   -> Function BPW_HandEquipmentSwap.BPW_HandEquipmentSwap_C.CacheStacks
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CachChanged                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_HandEquipmentSwap_C::CacheStacks(bool* CachChanged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HandEquipmentSwap.BPW_HandEquipmentSwap_C.CacheStacks");
		
		UBPW_HandEquipmentSwap_C_CacheStacks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CachChanged != nullptr)
			*CachChanged = params.CachChanged;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_HandEquipmentSwap.BPW_HandEquipmentSwap_C.GetEquipmentOnScroll
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_HandEquipmentSwap_C::GetEquipmentOnScroll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HandEquipmentSwap.BPW_HandEquipmentSwap_C.GetEquipmentOnScroll");
		
		UBPW_HandEquipmentSwap_C_GetEquipmentOnScroll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_HandEquipmentSwap.BPW_HandEquipmentSwap_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_HandEquipmentSwap_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HandEquipmentSwap.BPW_HandEquipmentSwap_C.Construct");
		
		UBPW_HandEquipmentSwap_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_HandEquipmentSwap.BPW_HandEquipmentSwap_C.Start FadeOut Timer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_HandEquipmentSwap_C::StartFadeOutTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HandEquipmentSwap.BPW_HandEquipmentSwap_C.Start FadeOut Timer");
		
		UBPW_HandEquipmentSwap_C_StartFadeOutTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_HandEquipmentSwap.BPW_HandEquipmentSwap_C.OnActiveAquipmentChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EEquipmentSlot                                     Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_HandEquipmentSwap_C::OnActiveAquipmentChanged(EEquipmentSlot Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HandEquipmentSwap.BPW_HandEquipmentSwap_C.OnActiveAquipmentChanged");
		
		UBPW_HandEquipmentSwap_C_OnActiveAquipmentChanged_Params params {};
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_HandEquipmentSwap.BPW_HandEquipmentSwap_C.ExecuteUbergraph_BPW_HandEquipmentSwap
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_HandEquipmentSwap_C::ExecuteUbergraph_BPW_HandEquipmentSwap(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HandEquipmentSwap.BPW_HandEquipmentSwap_C.ExecuteUbergraph_BPW_HandEquipmentSwap");
		
		UBPW_HandEquipmentSwap_C_ExecuteUbergraph_BPW_HandEquipmentSwap_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_HandEquipmentSwap_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_HandEquipmentSwap_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_HandEquipmentSwap.BPW_HandEquipmentSwap_C");
		return ptr;
	}

}


