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
	 * 		Name   -> Function BPW_WeaponAimCircle.BPW_WeaponAimCircle_C.SetForcedVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               mIsVisible                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_WeaponAimCircle_C::SetForcedVisibility(bool mIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_WeaponAimCircle.BPW_WeaponAimCircle_C.SetForcedVisibility");
		
		UBPW_WeaponAimCircle_C_SetForcedVisibility_Params params {};
		params.mIsVisible = mIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_WeaponAimCircle.BPW_WeaponAimCircle_C.ToggleVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_WeaponAimCircle_C::ToggleVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_WeaponAimCircle.BPW_WeaponAimCircle_C.ToggleVisibility");
		
		UBPW_WeaponAimCircle_C_ToggleVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_WeaponAimCircle.BPW_WeaponAimCircle_C.GetTraceLocations
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     TraceStart                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     TraceEnd                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_WeaponAimCircle_C::GetTraceLocations(struct FVector* TraceStart, struct FVector* TraceEnd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_WeaponAimCircle.BPW_WeaponAimCircle_C.GetTraceLocations");
		
		UBPW_WeaponAimCircle_C_GetTraceLocations_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TraceStart != nullptr)
			*TraceStart = params.TraceStart;
		if (TraceEnd != nullptr)
			*TraceEnd = params.TraceEnd;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_WeaponAimCircle.BPW_WeaponAimCircle_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_WeaponAimCircle_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_WeaponAimCircle.BPW_WeaponAimCircle_C.Construct");
		
		UBPW_WeaponAimCircle_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_WeaponAimCircle.BPW_WeaponAimCircle_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_WeaponAimCircle_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_WeaponAimCircle.BPW_WeaponAimCircle_C.Tick");
		
		UBPW_WeaponAimCircle_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_WeaponAimCircle.BPW_WeaponAimCircle_C.OnEquipmentUpdated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EEquipmentSlot                                     Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_WeaponAimCircle_C::OnEquipmentUpdated(EEquipmentSlot Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_WeaponAimCircle.BPW_WeaponAimCircle_C.OnEquipmentUpdated");
		
		UBPW_WeaponAimCircle_C_OnEquipmentUpdated_Params params {};
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_WeaponAimCircle.BPW_WeaponAimCircle_C.ForceUpdateCrosshair
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_WeaponAimCircle_C::ForceUpdateCrosshair()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_WeaponAimCircle.BPW_WeaponAimCircle_C.ForceUpdateCrosshair");
		
		UBPW_WeaponAimCircle_C_ForceUpdateCrosshair_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_WeaponAimCircle.BPW_WeaponAimCircle_C.OnBuildGunStateChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EBuildGunState                                     NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_WeaponAimCircle_C::OnBuildGunStateChanged(EBuildGunState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_WeaponAimCircle.BPW_WeaponAimCircle_C.OnBuildGunStateChanged");
		
		UBPW_WeaponAimCircle_C_OnBuildGunStateChanged_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_WeaponAimCircle.BPW_WeaponAimCircle_C.OnCrosshairUpdated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               crosshairVisibility                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  crossHairTexture                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_WeaponAimCircle_C::OnCrosshairUpdated(bool crosshairVisibility, class UTexture2D* crossHairTexture, const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_WeaponAimCircle.BPW_WeaponAimCircle_C.OnCrosshairUpdated");
		
		UBPW_WeaponAimCircle_C_OnCrosshairUpdated_Params params {};
		params.crosshairVisibility = crosshairVisibility;
		params.crossHairTexture = crossHairTexture;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_WeaponAimCircle.BPW_WeaponAimCircle_C.ExecuteUbergraph_BPW_WeaponAimCircle
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_WeaponAimCircle_C::ExecuteUbergraph_BPW_WeaponAimCircle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_WeaponAimCircle.BPW_WeaponAimCircle_C.ExecuteUbergraph_BPW_WeaponAimCircle");
		
		UBPW_WeaponAimCircle_C_ExecuteUbergraph_BPW_WeaponAimCircle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_WeaponAimCircle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_WeaponAimCircle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_WeaponAimCircle.BPW_WeaponAimCircle_C");
		return ptr;
	}

}


