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
	 * 		Name   -> Function BPA_Boombox.BPA_Boombox_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UBPA_Boombox_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Boombox.BPA_Boombox_C.AnimGraph");
		
		UBPA_Boombox_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_Boombox.BPA_Boombox_C.AnimNotify_LoadTape
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_Boombox_C::AnimNotify_LoadTape()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Boombox.BPA_Boombox_C.AnimNotify_LoadTape");
		
		UBPA_Boombox_C_AnimNotify_LoadTape_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_Boombox.BPA_Boombox_C.AnimNotify_UnloadTape
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_Boombox_C::AnimNotify_UnloadTape()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Boombox.BPA_Boombox_C.AnimNotify_UnloadTape");
		
		UBPA_Boombox_C_AnimNotify_UnloadTape_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_Boombox.BPA_Boombox_C.AnimNotify_Play
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_Boombox_C::AnimNotify_Play()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Boombox.BPA_Boombox_C.AnimNotify_Play");
		
		UBPA_Boombox_C_AnimNotify_Play_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_Boombox.BPA_Boombox_C.AnimNotify_Stop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_Boombox_C::AnimNotify_Stop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Boombox.BPA_Boombox_C.AnimNotify_Stop");
		
		UBPA_Boombox_C_AnimNotify_Stop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_Boombox.BPA_Boombox_C.AnimNotify_Next
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_Boombox_C::AnimNotify_Next()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Boombox.BPA_Boombox_C.AnimNotify_Next");
		
		UBPA_Boombox_C_AnimNotify_Next_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_Boombox.BPA_Boombox_C.AnimNotify_Previous
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_Boombox_C::AnimNotify_Previous()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Boombox.BPA_Boombox_C.AnimNotify_Previous");
		
		UBPA_Boombox_C_AnimNotify_Previous_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_Boombox.BPA_Boombox_C.BlueprintBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPA_Boombox_C::BlueprintBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Boombox.BPA_Boombox_C.BlueprintBeginPlay");
		
		UBPA_Boombox_C_BlueprintBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_Boombox.BPA_Boombox_C.OnAnimationMondageEnded
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInterrupted                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPA_Boombox_C::OnAnimationMondageEnded(class UAnimMontage* Montage, bool bInterrupted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Boombox.BPA_Boombox_C.OnAnimationMondageEnded");
		
		UBPA_Boombox_C_OnAnimationMondageEnded_Params params {};
		params.Montage = Montage;
		params.bInterrupted = bInterrupted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_Boombox.BPA_Boombox_C.AnimNotify_TogglePlayback
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_Boombox_C::AnimNotify_TogglePlayback()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Boombox.BPA_Boombox_C.AnimNotify_TogglePlayback");
		
		UBPA_Boombox_C_AnimNotify_TogglePlayback_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_Boombox.BPA_Boombox_C.AnimNotify_Turbobass
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_Boombox_C::AnimNotify_Turbobass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Boombox.BPA_Boombox_C.AnimNotify_Turbobass");
		
		UBPA_Boombox_C_AnimNotify_Turbobass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_Boombox.BPA_Boombox_C.AnimNotify_SwitchTapeTexture
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_Boombox_C::AnimNotify_SwitchTapeTexture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Boombox.BPA_Boombox_C.AnimNotify_SwitchTapeTexture");
		
		UBPA_Boombox_C_AnimNotify_SwitchTapeTexture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_Boombox.BPA_Boombox_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPA_Boombox_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Boombox.BPA_Boombox_C.BlueprintUpdateAnimation");
		
		UBPA_Boombox_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_Boombox.BPA_Boombox_C.ExecuteUbergraph_BPA_Boombox
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPA_Boombox_C::ExecuteUbergraph_BPA_Boombox(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Boombox.BPA_Boombox_C.ExecuteUbergraph_BPA_Boombox");
		
		UBPA_Boombox_C_ExecuteUbergraph_BPA_Boombox_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPA_Boombox_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPA_Boombox_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPA_Boombox.BPA_Boombox_C");
		return ptr;
	}

}


