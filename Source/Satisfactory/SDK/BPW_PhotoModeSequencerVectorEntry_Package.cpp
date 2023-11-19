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
	 * 		Name   -> Function BPW_PhotoModeSequencerVectorEntry.BPW_PhotoModeSequencerVectorEntry_C.UpdateEntryIcon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_PhotoModeSequencerVectorEntry_C::UpdateEntryIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoModeSequencerVectorEntry.BPW_PhotoModeSequencerVectorEntry_C.UpdateEntryIcon");
		
		UBPW_PhotoModeSequencerVectorEntry_C_UpdateEntryIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoModeSequencerVectorEntry.BPW_PhotoModeSequencerVectorEntry_C.OnMarkerPressed
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UBPW_PhotoModeSequencerVectorEntry_C::OnMarkerPressed(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoModeSequencerVectorEntry.BPW_PhotoModeSequencerVectorEntry_C.OnMarkerPressed");
		
		UBPW_PhotoModeSequencerVectorEntry_C_OnMarkerPressed_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoModeSequencerVectorEntry.BPW_PhotoModeSequencerVectorEntry_C.UpdateSequencerEntry
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_PhotoModeSequencerVectorEntry_C::UpdateSequencerEntry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoModeSequencerVectorEntry.BPW_PhotoModeSequencerVectorEntry_C.UpdateSequencerEntry");
		
		UBPW_PhotoModeSequencerVectorEntry_C_UpdateSequencerEntry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_PhotoModeSequencerVectorEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_PhotoModeSequencerVectorEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_PhotoModeSequencerVectorEntry.BPW_PhotoModeSequencerVectorEntry_C");
		return ptr;
	}

}


