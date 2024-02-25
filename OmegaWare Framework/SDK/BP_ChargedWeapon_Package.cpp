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
	 * 		Name   -> Function BP_ChargedWeapon.BP_ChargedWeapon_C.GetCrosshairKeyDescriptor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      KeyDescriptor                                              (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ChargedWeapon_C::GetCrosshairKeyDescriptor(class UClass** KeyDescriptor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ChargedWeapon.BP_ChargedWeapon_C.GetCrosshairKeyDescriptor");
		
		ABP_ChargedWeapon_C_GetCrosshairKeyDescriptor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (KeyDescriptor != nullptr)
			*KeyDescriptor = params.KeyDescriptor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_ChargedWeapon.BP_ChargedWeapon_C.GetHUD_ESlotClass
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Class                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ChargedWeapon_C::GetHUD_ESlotClass(class UClass** Class)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ChargedWeapon.BP_ChargedWeapon_C.GetHUD_ESlotClass");
		
		ABP_ChargedWeapon_C_GetHUD_ESlotClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Class != nullptr)
			*Class = params.Class;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_ChargedWeapon.BP_ChargedWeapon_C.GetAmmoAmount
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AmmoCurrent                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            AmmoMax                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ChargedWeapon_C::GetAmmoAmount(int32_t* AmmoCurrent, int32_t* AmmoMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ChargedWeapon.BP_ChargedWeapon_C.GetAmmoAmount");
		
		ABP_ChargedWeapon_C_GetAmmoAmount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AmmoCurrent != nullptr)
			*AmmoCurrent = params.AmmoCurrent;
		if (AmmoMax != nullptr)
			*AmmoMax = params.AmmoMax;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_ChargedWeapon.BP_ChargedWeapon_C.GetUpdateOnTick
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABP_ChargedWeapon_C::GetUpdateOnTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ChargedWeapon.BP_ChargedWeapon_C.GetUpdateOnTick");
		
		ABP_ChargedWeapon_C_GetUpdateOnTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_ChargedWeapon.BP_ChargedWeapon_C.GetAmmoDescriptor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      AmmoClass                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ChargedWeapon_C::GetAmmoDescriptor(class UClass** AmmoClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ChargedWeapon.BP_ChargedWeapon_C.GetAmmoDescriptor");
		
		ABP_ChargedWeapon_C_GetAmmoDescriptor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AmmoClass != nullptr)
			*AmmoClass = params.AmmoClass;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_ChargedWeapon.BP_ChargedWeapon_C.GetFuelDescriptor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Class                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ChargedWeapon_C::GetFuelDescriptor(class UClass** Class)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ChargedWeapon.BP_ChargedWeapon_C.GetFuelDescriptor");
		
		ABP_ChargedWeapon_C_GetFuelDescriptor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Class != nullptr)
			*Class = params.Class;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_ChargedWeapon.BP_ChargedWeapon_C.GetFuelPercent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ChargedWeapon_C::GetFuelPercent(double* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ChargedWeapon.BP_ChargedWeapon_C.GetFuelPercent");
		
		ABP_ChargedWeapon_C_GetFuelPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_ChargedWeapon.BP_ChargedWeapon_C.GetIsBurningFuel
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABP_ChargedWeapon_C::GetIsBurningFuel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ChargedWeapon.BP_ChargedWeapon_C.GetIsBurningFuel");
		
		ABP_ChargedWeapon_C_GetIsBurningFuel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_ChargedWeapon.BP_ChargedWeapon_C.GetAlwaysShowContent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABP_ChargedWeapon_C::GetAlwaysShowContent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ChargedWeapon.BP_ChargedWeapon_C.GetAlwaysShowContent");
		
		ABP_ChargedWeapon_C_GetAlwaysShowContent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_ChargedWeapon.BP_ChargedWeapon_C.GetHoverPackDistance
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ChargedWeapon_C::GetHoverPackDistance(double* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ChargedWeapon.BP_ChargedWeapon_C.GetHoverPackDistance");
		
		ABP_ChargedWeapon_C_GetHoverPackDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_ChargedWeapon.BP_ChargedWeapon_C.GetHoverPackHasPower
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABP_ChargedWeapon_C::GetHoverPackHasPower()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ChargedWeapon.BP_ChargedWeapon_C.GetHoverPackHasPower");
		
		ABP_ChargedWeapon_C_GetHoverPackHasPower_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_ChargedWeapon.BP_ChargedWeapon_C.GetHoverPackMode
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EHoverPackMode                                     Mode                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ChargedWeapon_C::GetHoverPackMode(EHoverPackMode* Mode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ChargedWeapon.BP_ChargedWeapon_C.GetHoverPackMode");
		
		ABP_ChargedWeapon_C_GetHoverPackMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Mode != nullptr)
			*Mode = params.Mode;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_ChargedWeapon.BP_ChargedWeapon_C.GetObjectScannerTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      ScannableItemDescriptor                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ChargedWeapon_C::GetObjectScannerTarget(class UClass** ScannableItemDescriptor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ChargedWeapon.BP_ChargedWeapon_C.GetObjectScannerTarget");
		
		ABP_ChargedWeapon_C_GetObjectScannerTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ScannableItemDescriptor != nullptr)
			*ScannableItemDescriptor = params.ScannableItemDescriptor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_ChargedWeapon.BP_ChargedWeapon_C.GetCurrentBoomBoxTape
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      mTapeData                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ChargedWeapon_C::GetCurrentBoomBoxTape(class UClass** mTapeData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ChargedWeapon.BP_ChargedWeapon_C.GetCurrentBoomBoxTape");
		
		ABP_ChargedWeapon_C_GetCurrentBoomBoxTape_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (mTapeData != nullptr)
			*mTapeData = params.mTapeData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_ChargedWeapon.BP_ChargedWeapon_C.GetIsBoomBoxPlaying
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABP_ChargedWeapon_C::GetIsBoomBoxPlaying()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ChargedWeapon.BP_ChargedWeapon_C.GetIsBoomBoxPlaying");
		
		ABP_ChargedWeapon_C_GetIsBoomBoxPlaying_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_ChargedWeapon.BP_ChargedWeapon_C.GetShowLowFuelWarning
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABP_ChargedWeapon_C::GetShowLowFuelWarning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ChargedWeapon.BP_ChargedWeapon_C.GetShowLowFuelWarning");
		
		ABP_ChargedWeapon_C_GetShowLowFuelWarning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_ChargedWeapon.BP_ChargedWeapon_C.GetOverwriteTickRate
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             TickRate                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ChargedWeapon_C::GetOverwriteTickRate(double* TickRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ChargedWeapon.BP_ChargedWeapon_C.GetOverwriteTickRate");
		
		ABP_ChargedWeapon_C_GetOverwriteTickRate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TickRate != nullptr)
			*TickRate = params.TickRate;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_ChargedWeapon.BP_ChargedWeapon_C.GetShowInfoUntilFuelPercentIsFull
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ReturnVaule                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ChargedWeapon_C::GetShowInfoUntilFuelPercentIsFull(bool* ReturnVaule)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ChargedWeapon.BP_ChargedWeapon_C.GetShowInfoUntilFuelPercentIsFull");
		
		ABP_ChargedWeapon_C_GetShowInfoUntilFuelPercentIsFull_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnVaule != nullptr)
			*ReturnVaule = params.ReturnVaule;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_ChargedWeapon.BP_ChargedWeapon_C.GetHUDBoxWidget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      WidgetClass                                                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ChargedWeapon_C::GetHUDBoxWidget(class UClass** WidgetClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ChargedWeapon.BP_ChargedWeapon_C.GetHUDBoxWidget");
		
		ABP_ChargedWeapon_C_GetHUDBoxWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WidgetClass != nullptr)
			*WidgetClass = params.WidgetClass;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_ChargedWeapon.BP_ChargedWeapon_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_ChargedWeapon_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ChargedWeapon.BP_ChargedWeapon_C.ReceiveBeginPlay");
		
		ABP_ChargedWeapon_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_ChargedWeapon.BP_ChargedWeapon_C.OnAmmoCyclingPressed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ChargedWeapon_C::OnAmmoCyclingPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ChargedWeapon.BP_ChargedWeapon_C.OnAmmoCyclingPressed");
		
		ABP_ChargedWeapon_C_OnAmmoCyclingPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_ChargedWeapon.BP_ChargedWeapon_C.OnAmmoCyclingReleased
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ChargedWeapon_C::OnAmmoCyclingReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ChargedWeapon.BP_ChargedWeapon_C.OnAmmoCyclingReleased");
		
		ABP_ChargedWeapon_C_OnAmmoCyclingReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_ChargedWeapon.BP_ChargedWeapon_C.ShowCycleAmmoUI
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ChargedWeapon_C::ShowCycleAmmoUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ChargedWeapon.BP_ChargedWeapon_C.ShowCycleAmmoUI");
		
		ABP_ChargedWeapon_C_ShowCycleAmmoUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_ChargedWeapon.BP_ChargedWeapon_C.ExecuteUbergraph_BP_ChargedWeapon
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ChargedWeapon_C::ExecuteUbergraph_BP_ChargedWeapon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ChargedWeapon.BP_ChargedWeapon_C.ExecuteUbergraph_BP_ChargedWeapon");
		
		ABP_ChargedWeapon_C_ExecuteUbergraph_BP_ChargedWeapon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ChargedWeapon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ChargedWeapon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ChargedWeapon.BP_ChargedWeapon_C");
		return ptr;
	}

}


