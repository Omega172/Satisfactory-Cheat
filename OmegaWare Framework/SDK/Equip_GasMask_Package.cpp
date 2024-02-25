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
	 * 		Name   -> Function Equip_GasMask.Equip_GasMask_C.GetShowInfoUntilFuelPercentIsFull
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ReturnVaule                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_GasMask_C::GetShowInfoUntilFuelPercentIsFull(bool* ReturnVaule)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_GasMask.Equip_GasMask_C.GetShowInfoUntilFuelPercentIsFull");
		
		AEquip_GasMask_C_GetShowInfoUntilFuelPercentIsFull_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnVaule != nullptr)
			*ReturnVaule = params.ReturnVaule;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Equip_GasMask.Equip_GasMask_C.GetOverwriteTickRate
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             TickRate                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_GasMask_C::GetOverwriteTickRate(double* TickRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_GasMask.Equip_GasMask_C.GetOverwriteTickRate");
		
		AEquip_GasMask_C_GetOverwriteTickRate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TickRate != nullptr)
			*TickRate = params.TickRate;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Equip_GasMask.Equip_GasMask_C.GetShowLowFuelWarning
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AEquip_GasMask_C::GetShowLowFuelWarning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_GasMask.Equip_GasMask_C.GetShowLowFuelWarning");
		
		AEquip_GasMask_C_GetShowLowFuelWarning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Equip_GasMask.Equip_GasMask_C.GetIsBoomBoxPlaying
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AEquip_GasMask_C::GetIsBoomBoxPlaying()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_GasMask.Equip_GasMask_C.GetIsBoomBoxPlaying");
		
		AEquip_GasMask_C_GetIsBoomBoxPlaying_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Equip_GasMask.Equip_GasMask_C.GetCurrentBoomBoxTape
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      mTapeData                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_GasMask_C::GetCurrentBoomBoxTape(class UClass** mTapeData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_GasMask.Equip_GasMask_C.GetCurrentBoomBoxTape");
		
		AEquip_GasMask_C_GetCurrentBoomBoxTape_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (mTapeData != nullptr)
			*mTapeData = params.mTapeData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Equip_GasMask.Equip_GasMask_C.GetObjectScannerTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      ScannableItemDescriptor                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_GasMask_C::GetObjectScannerTarget(class UClass** ScannableItemDescriptor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_GasMask.Equip_GasMask_C.GetObjectScannerTarget");
		
		AEquip_GasMask_C_GetObjectScannerTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ScannableItemDescriptor != nullptr)
			*ScannableItemDescriptor = params.ScannableItemDescriptor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Equip_GasMask.Equip_GasMask_C.GetHoverPackMode
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EHoverPackMode                                     Mode                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_GasMask_C::GetHoverPackMode(EHoverPackMode* Mode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_GasMask.Equip_GasMask_C.GetHoverPackMode");
		
		AEquip_GasMask_C_GetHoverPackMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Mode != nullptr)
			*Mode = params.Mode;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Equip_GasMask.Equip_GasMask_C.GetHoverPackHasPower
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AEquip_GasMask_C::GetHoverPackHasPower()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_GasMask.Equip_GasMask_C.GetHoverPackHasPower");
		
		AEquip_GasMask_C_GetHoverPackHasPower_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Equip_GasMask.Equip_GasMask_C.GetHoverPackDistance
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_GasMask_C::GetHoverPackDistance(double* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_GasMask.Equip_GasMask_C.GetHoverPackDistance");
		
		AEquip_GasMask_C_GetHoverPackDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Equip_GasMask.Equip_GasMask_C.GetAlwaysShowContent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AEquip_GasMask_C::GetAlwaysShowContent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_GasMask.Equip_GasMask_C.GetAlwaysShowContent");
		
		AEquip_GasMask_C_GetAlwaysShowContent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Equip_GasMask.Equip_GasMask_C.GetIsBurningFuel
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AEquip_GasMask_C::GetIsBurningFuel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_GasMask.Equip_GasMask_C.GetIsBurningFuel");
		
		AEquip_GasMask_C_GetIsBurningFuel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Equip_GasMask.Equip_GasMask_C.GetFuelPercent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_GasMask_C::GetFuelPercent(double* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_GasMask.Equip_GasMask_C.GetFuelPercent");
		
		AEquip_GasMask_C_GetFuelPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Equip_GasMask.Equip_GasMask_C.GetHUD_ESlotClass
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Class                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_GasMask_C::GetHUD_ESlotClass(class UClass** Class)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_GasMask.Equip_GasMask_C.GetHUD_ESlotClass");
		
		AEquip_GasMask_C_GetHUD_ESlotClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Class != nullptr)
			*Class = params.Class;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Equip_GasMask.Equip_GasMask_C.GetAmmoAmount
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AmmoCurrent                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            AmmoMax                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_GasMask_C::GetAmmoAmount(int32_t* AmmoCurrent, int32_t* AmmoMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_GasMask.Equip_GasMask_C.GetAmmoAmount");
		
		AEquip_GasMask_C_GetAmmoAmount_Params params {};
		
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
	 * 		Name   -> Function Equip_GasMask.Equip_GasMask_C.GetUpdateOnTick
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AEquip_GasMask_C::GetUpdateOnTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_GasMask.Equip_GasMask_C.GetUpdateOnTick");
		
		AEquip_GasMask_C_GetUpdateOnTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Equip_GasMask.Equip_GasMask_C.GetAmmoDescriptor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      AmmoClass                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_GasMask_C::GetAmmoDescriptor(class UClass** AmmoClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_GasMask.Equip_GasMask_C.GetAmmoDescriptor");
		
		AEquip_GasMask_C_GetAmmoDescriptor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AmmoClass != nullptr)
			*AmmoClass = params.AmmoClass;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Equip_GasMask.Equip_GasMask_C.GetFuelDescriptor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Class                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_GasMask_C::GetFuelDescriptor(class UClass** Class)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_GasMask.Equip_GasMask_C.GetFuelDescriptor");
		
		AEquip_GasMask_C_GetFuelDescriptor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Class != nullptr)
			*Class = params.Class;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Equip_GasMask.Equip_GasMask_C.WasEquipped
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AEquip_GasMask_C::WasEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_GasMask.Equip_GasMask_C.WasEquipped");
		
		AEquip_GasMask_C_WasEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Equip_GasMask.Equip_GasMask_C.WasUnEquipped
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AEquip_GasMask_C::WasUnEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_GasMask.Equip_GasMask_C.WasUnEquipped");
		
		AEquip_GasMask_C_WasUnEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Equip_GasMask.Equip_GasMask_C.EnablePostProcessing
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_GasMask_C::EnablePostProcessing(bool IsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_GasMask.Equip_GasMask_C.EnablePostProcessing");
		
		AEquip_GasMask_C_EnablePostProcessing_Params params {};
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Equip_GasMask.Equip_GasMask_C.ExecuteUbergraph_Equip_GasMask
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_GasMask_C::ExecuteUbergraph_Equip_GasMask(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_GasMask.Equip_GasMask_C.ExecuteUbergraph_Equip_GasMask");
		
		AEquip_GasMask_C_ExecuteUbergraph_Equip_GasMask_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AEquip_GasMask_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AEquip_GasMask_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Equip_GasMask.Equip_GasMask_C");
		return ptr;
	}

}


