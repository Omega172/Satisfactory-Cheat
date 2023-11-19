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
	 * 		Name   -> Function Attach_Zipline.Attach_Zipline_C.GetOwningCharacter
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGCharacterPlayer*                          Character                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void AAttach_Zipline_C::GetOwningCharacter(class AFGCharacterPlayer** Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Attach_Zipline.Attach_Zipline_C.GetOwningCharacter");
		
		AAttach_Zipline_C_GetOwningCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Character != nullptr)
			*Character = params.Character;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Attach_Zipline.Attach_Zipline_C.ThirdPerson_Stop_VFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAttach_Zipline_C::ThirdPerson_Stop_VFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Attach_Zipline.Attach_Zipline_C.ThirdPerson_Stop_VFX");
		
		AAttach_Zipline_C_ThirdPerson_Stop_VFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Attach_Zipline.Attach_Zipline_C.ThirdPerson_Start_VFX
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AAttach_Zipline_C::ThirdPerson_Start_VFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Attach_Zipline.Attach_Zipline_C.ThirdPerson_Start_VFX");
		
		AAttach_Zipline_C_ThirdPerson_Start_VFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Attach_Zipline.Attach_Zipline_C.KillActiveSFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAttach_Zipline_C::KillActiveSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Attach_Zipline.Attach_Zipline_C.KillActiveSFX");
		
		AAttach_Zipline_C_KillActiveSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Attach_Zipline.Attach_Zipline_C.StartZiplineEffect
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bAttachVFX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAttach_Zipline_C::StartZiplineEffect(bool bAttachVFX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Attach_Zipline.Attach_Zipline_C.StartZiplineEffect");
		
		AAttach_Zipline_C_StartZiplineEffect_Params params {};
		params.bAttachVFX = bAttachVFX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Attach_Zipline.Attach_Zipline_C.StopZiplineEffect
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAttach_Zipline_C::StopZiplineEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Attach_Zipline.Attach_Zipline_C.StopZiplineEffect");
		
		AAttach_Zipline_C_StopZiplineEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Attach_Zipline.Attach_Zipline_C.OnAttach
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AAttach_Zipline_C::OnAttach()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Attach_Zipline.Attach_Zipline_C.OnAttach");
		
		AAttach_Zipline_C_OnAttach_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Attach_Zipline.Attach_Zipline_C.OnDetach
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AAttach_Zipline_C::OnDetach()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Attach_Zipline.Attach_Zipline_C.OnDetach");
		
		AAttach_Zipline_C_OnDetach_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Attach_Zipline.Attach_Zipline_C.TryStartZiplineAttaching
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAttach_Zipline_C::TryStartZiplineAttaching()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Attach_Zipline.Attach_Zipline_C.TryStartZiplineAttaching");
		
		AAttach_Zipline_C_TryStartZiplineAttaching_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Attach_Zipline.Attach_Zipline_C.TryStartZiplineDeAttaching
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAttach_Zipline_C::TryStartZiplineDeAttaching()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Attach_Zipline.Attach_Zipline_C.TryStartZiplineDeAttaching");
		
		AAttach_Zipline_C_TryStartZiplineDeAttaching_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Attach_Zipline.Attach_Zipline_C.StartClientZiplineAttaching
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AAttach_Zipline_C::StartClientZiplineAttaching()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Attach_Zipline.Attach_Zipline_C.StartClientZiplineAttaching");
		
		AAttach_Zipline_C_StartClientZiplineAttaching_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Attach_Zipline.Attach_Zipline_C.StartClientZiplineDeAttaching
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AAttach_Zipline_C::StartClientZiplineDeAttaching()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Attach_Zipline.Attach_Zipline_C.StartClientZiplineDeAttaching");
		
		AAttach_Zipline_C_StartClientZiplineDeAttaching_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Attach_Zipline.Attach_Zipline_C.Do_Burst_FX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAttach_Zipline_C::Do_Burst_FX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Attach_Zipline.Attach_Zipline_C.Do_Burst_FX");
		
		AAttach_Zipline_C_Do_Burst_FX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Attach_Zipline.Attach_Zipline_C.OnZiplineSprintStatusChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               sprint                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAttach_Zipline_C::OnZiplineSprintStatusChanged(bool sprint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Attach_Zipline.Attach_Zipline_C.OnZiplineSprintStatusChanged");
		
		AAttach_Zipline_C_OnZiplineSprintStatusChanged_Params params {};
		params.sprint = sprint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Attach_Zipline.Attach_Zipline_C.ExecuteUbergraph_Attach_Zipline
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAttach_Zipline_C::ExecuteUbergraph_Attach_Zipline(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Attach_Zipline.Attach_Zipline_C.ExecuteUbergraph_Attach_Zipline");
		
		AAttach_Zipline_C_ExecuteUbergraph_Attach_Zipline_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAttach_Zipline_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAttach_Zipline_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Attach_Zipline.Attach_Zipline_C");
		return ptr;
	}

}


