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
	 * 		Name   -> Function BPW_PhotoModeSequencerTrack.BPW_PhotoModeSequencerTrack_C.GetSelectedNodes
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FFrameTime>                          mSelectedNodes                                             (Parm, OutParm)
	 */
	void UBPW_PhotoModeSequencerTrack_C::GetSelectedNodes(TArray<struct FFrameTime>* mSelectedNodes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoModeSequencerTrack.BPW_PhotoModeSequencerTrack_C.GetSelectedNodes");
		
		UBPW_PhotoModeSequencerTrack_C_GetSelectedNodes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (mSelectedNodes != nullptr)
			*mSelectedNodes = params.mSelectedNodes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoModeSequencerTrack.BPW_PhotoModeSequencerTrack_C.RefreshFloatSections
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FFGSequenceFloatSection>             FloatSections                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBPW_PhotoModeSequencerTrack_C::RefreshFloatSections(TArray<struct FFGSequenceFloatSection>* FloatSections)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoModeSequencerTrack.BPW_PhotoModeSequencerTrack_C.RefreshFloatSections");
		
		UBPW_PhotoModeSequencerTrack_C_RefreshFloatSections_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FloatSections != nullptr)
			*FloatSections = params.FloatSections;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoModeSequencerTrack.BPW_PhotoModeSequencerTrack_C.RefreshVectorSections
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FFGSequenceVectorSection>            VectorSections                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBPW_PhotoModeSequencerTrack_C::RefreshVectorSections(TArray<struct FFGSequenceVectorSection>* VectorSections)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoModeSequencerTrack.BPW_PhotoModeSequencerTrack_C.RefreshVectorSections");
		
		UBPW_PhotoModeSequencerTrack_C_RefreshVectorSections_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (VectorSections != nullptr)
			*VectorSections = params.VectorSections;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_PhotoModeSequencerTrack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_PhotoModeSequencerTrack_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_PhotoModeSequencerTrack.BPW_PhotoModeSequencerTrack_C");
		return ptr;
	}

}


