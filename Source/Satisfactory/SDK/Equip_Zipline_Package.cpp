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
	 * 		Name   -> Function Equip_Zipline.Equip_Zipline_C.GetOwningCharacter
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGCharacterPlayer*                          Character                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_Zipline_C::GetOwningCharacter(class AFGCharacterPlayer** Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_Zipline.Equip_Zipline_C.GetOwningCharacter");
		
		AEquip_Zipline_C_GetOwningCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Character != nullptr)
			*Character = params.Character;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_Zipline.Equip_Zipline_C.StartSFXTraveling
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AEquip_Zipline_C::StartSFXTraveling()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_Zipline.Equip_Zipline_C.StartSFXTraveling");
		
		AEquip_Zipline_C_StartSFXTraveling_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_Zipline.Equip_Zipline_C.SFXZiplineSpeedRTPC
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AEquip_Zipline_C::SFXZiplineSpeedRTPC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_Zipline.Equip_Zipline_C.SFXZiplineSpeedRTPC");
		
		AEquip_Zipline_C_SFXZiplineSpeedRTPC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_Zipline.Equip_Zipline_C.Kill_SFXLoops
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AEquip_Zipline_C::Kill_SFXLoops()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_Zipline.Equip_Zipline_C.Kill_SFXLoops");
		
		AEquip_Zipline_C_Kill_SFXLoops_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_Zipline.Equip_Zipline_C.Func_StopVFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AEquip_Zipline_C::Func_StopVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_Zipline.Equip_Zipline_C.Func_StopVFX");
		
		AEquip_Zipline_C_Func_StopVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_Zipline.Equip_Zipline_C.Func_StartVFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AEquip_Zipline_C::Func_StartVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_Zipline.Equip_Zipline_C.Func_StartVFX");
		
		AEquip_Zipline_C_Func_StartVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_Zipline.Equip_Zipline_C.StartZiplineEffect
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bAttachVFX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_Zipline_C::StartZiplineEffect(bool bAttachVFX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_Zipline.Equip_Zipline_C.StartZiplineEffect");
		
		AEquip_Zipline_C_StartZiplineEffect_Params params {};
		params.bAttachVFX = bAttachVFX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_Zipline.Equip_Zipline_C.StopZiplineEffect
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AEquip_Zipline_C::StopZiplineEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_Zipline.Equip_Zipline_C.StopZiplineEffect");
		
		AEquip_Zipline_C_StopZiplineEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_Zipline.Equip_Zipline_C.StopVFXs
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AEquip_Zipline_C::StopVFXs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_Zipline.Equip_Zipline_C.StopVFXs");
		
		AEquip_Zipline_C_StopVFXs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_Zipline.Equip_Zipline_C.WasUnEquipped
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AEquip_Zipline_C::WasUnEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_Zipline.Equip_Zipline_C.WasUnEquipped");
		
		AEquip_Zipline_C_WasUnEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_Zipline.Equip_Zipline_C.WasEquipped
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AEquip_Zipline_C::WasEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_Zipline.Equip_Zipline_C.WasEquipped");
		
		AEquip_Zipline_C_WasEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_Zipline.Equip_Zipline_C.Do_Burst_FX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AEquip_Zipline_C::Do_Burst_FX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_Zipline.Equip_Zipline_C.Do_Burst_FX");
		
		AEquip_Zipline_C_Do_Burst_FX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_Zipline.Equip_Zipline_C.Server_PrimaryFire
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void AEquip_Zipline_C::Server_PrimaryFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_Zipline.Equip_Zipline_C.Server_PrimaryFire");
		
		AEquip_Zipline_C_Server_PrimaryFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_Zipline.Equip_Zipline_C.Server_PrimaryRelease
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void AEquip_Zipline_C::Server_PrimaryRelease()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_Zipline.Equip_Zipline_C.Server_PrimaryRelease");
		
		AEquip_Zipline_C_Server_PrimaryRelease_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_Zipline.Equip_Zipline_C.OnWantToGrabChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               newWantToGrab                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_Zipline_C::OnWantToGrabChanged(bool newWantToGrab)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_Zipline.Equip_Zipline_C.OnWantToGrabChanged");
		
		AEquip_Zipline_C_OnWantToGrabChanged_Params params {};
		params.newWantToGrab = newWantToGrab;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_Zipline.Equip_Zipline_C.OnZiplineSprintStatusChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               sprint                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_Zipline_C::OnZiplineSprintStatusChanged(bool sprint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_Zipline.Equip_Zipline_C.OnZiplineSprintStatusChanged");
		
		AEquip_Zipline_C_OnZiplineSprintStatusChanged_Params params {};
		params.sprint = sprint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_Zipline.Equip_Zipline_C.ExecuteUbergraph_Equip_Zipline
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_Zipline_C::ExecuteUbergraph_Equip_Zipline(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_Zipline.Equip_Zipline_C.ExecuteUbergraph_Equip_Zipline");
		
		AEquip_Zipline_C_ExecuteUbergraph_Equip_Zipline_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AEquip_Zipline_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AEquip_Zipline_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Equip_Zipline.Equip_Zipline_C");
		return ptr;
	}

}


