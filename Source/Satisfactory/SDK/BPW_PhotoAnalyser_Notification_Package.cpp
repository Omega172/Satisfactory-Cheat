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
	 * 		Name   -> Function BPW_PhotoAnalyser_Notification.BPW_PhotoAnalyser_Notification_C.SequenceEvent__ENTRYPOINTBPW_PhotoAnalyser_Notification
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_PhotoAnalyser_Notification_C::SequenceEvent__ENTRYPOINTBPW_PhotoAnalyser_Notification()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoAnalyser_Notification.BPW_PhotoAnalyser_Notification_C.SequenceEvent__ENTRYPOINTBPW_PhotoAnalyser_Notification");
		
		UBPW_PhotoAnalyser_Notification_C_SequenceEvent__ENTRYPOINTBPW_PhotoAnalyser_Notification_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoAnalyser_Notification.BPW_PhotoAnalyser_Notification_C.UpdateText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        mChallengeName                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_PhotoAnalyser_Notification_C::UpdateText(const class FText& mChallengeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoAnalyser_Notification.BPW_PhotoAnalyser_Notification_C.UpdateText");
		
		UBPW_PhotoAnalyser_Notification_C_UpdateText_Params params {};
		params.mChallengeName = mChallengeName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoAnalyser_Notification.BPW_PhotoAnalyser_Notification_C.Shine
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_PhotoAnalyser_Notification_C::Shine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoAnalyser_Notification.BPW_PhotoAnalyser_Notification_C.Shine");
		
		UBPW_PhotoAnalyser_Notification_C_Shine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoAnalyser_Notification.BPW_PhotoAnalyser_Notification_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_PhotoAnalyser_Notification_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoAnalyser_Notification.BPW_PhotoAnalyser_Notification_C.Construct");
		
		UBPW_PhotoAnalyser_Notification_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoAnalyser_Notification.BPW_PhotoAnalyser_Notification_C.OnSpawnAnimFinished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_PhotoAnalyser_Notification_C::OnSpawnAnimFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoAnalyser_Notification.BPW_PhotoAnalyser_Notification_C.OnSpawnAnimFinished");
		
		UBPW_PhotoAnalyser_Notification_C_OnSpawnAnimFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoAnalyser_Notification.BPW_PhotoAnalyser_Notification_C.ExecuteUbergraph_BPW_PhotoAnalyser_Notification
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PhotoAnalyser_Notification_C::ExecuteUbergraph_BPW_PhotoAnalyser_Notification(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoAnalyser_Notification.BPW_PhotoAnalyser_Notification_C.ExecuteUbergraph_BPW_PhotoAnalyser_Notification");
		
		UBPW_PhotoAnalyser_Notification_C_ExecuteUbergraph_BPW_PhotoAnalyser_Notification_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_PhotoAnalyser_Notification_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_PhotoAnalyser_Notification_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_PhotoAnalyser_Notification.BPW_PhotoAnalyser_Notification_C");
		return ptr;
	}

}


