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
	 * 		Name   -> Function BPW_ChristmasCalendar_RewardPopup.BPW_ChristmasCalendar_RewardPopup_C.SetUnlock
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGUnlock*                                   mUnlock                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ChristmasCalendar_RewardPopup_C::SetUnlock(class UFGUnlock* mUnlock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ChristmasCalendar_RewardPopup.BPW_ChristmasCalendar_RewardPopup_C.SetUnlock");
		
		UBPW_ChristmasCalendar_RewardPopup_C_SetUnlock_Params params {};
		params.mUnlock = mUnlock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ChristmasCalendar_RewardPopup.BPW_ChristmasCalendar_RewardPopup_C.GetShouldOkayBeEnabled
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UBPW_ChristmasCalendar_RewardPopup_C::GetShouldOkayBeEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ChristmasCalendar_RewardPopup.BPW_ChristmasCalendar_RewardPopup_C.GetShouldOkayBeEnabled");
		
		UBPW_ChristmasCalendar_RewardPopup_C_GetShouldOkayBeEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ChristmasCalendar_RewardPopup.BPW_ChristmasCalendar_RewardPopup_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_ChristmasCalendar_RewardPopup_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ChristmasCalendar_RewardPopup.BPW_ChristmasCalendar_RewardPopup_C.Construct");
		
		UBPW_ChristmasCalendar_RewardPopup_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ChristmasCalendar_RewardPopup.BPW_ChristmasCalendar_RewardPopup_C.ExecuteUbergraph_BPW_ChristmasCalendar_RewardPopup
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ChristmasCalendar_RewardPopup_C::ExecuteUbergraph_BPW_ChristmasCalendar_RewardPopup(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ChristmasCalendar_RewardPopup.BPW_ChristmasCalendar_RewardPopup_C.ExecuteUbergraph_BPW_ChristmasCalendar_RewardPopup");
		
		UBPW_ChristmasCalendar_RewardPopup_C_ExecuteUbergraph_BPW_ChristmasCalendar_RewardPopup_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_ChristmasCalendar_RewardPopup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_ChristmasCalendar_RewardPopup_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_ChristmasCalendar_RewardPopup.BPW_ChristmasCalendar_RewardPopup_C");
		return ptr;
	}

}


