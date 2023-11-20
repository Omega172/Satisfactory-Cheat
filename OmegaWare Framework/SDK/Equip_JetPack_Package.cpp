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
	 * 		Name   -> Function Equip_JetPack.Equip_JetPack_C.GetInventorySettingsClass
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Class                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_JetPack_C::GetInventorySettingsClass(class UClass** Class)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_JetPack.Equip_JetPack_C.GetInventorySettingsClass");
		
		AEquip_JetPack_C_GetInventorySettingsClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Class != nullptr)
			*Class = params.Class;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_JetPack.Equip_JetPack_C.GetPreferredFuelIndex
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_JetPack_C::GetPreferredFuelIndex(int32_t* Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_JetPack.Equip_JetPack_C.GetPreferredFuelIndex");
		
		AEquip_JetPack_C_GetPreferredFuelIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Index != nullptr)
			*Index = params.Index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_JetPack.Equip_JetPack_C.GetCurrentFuelIndex
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_JetPack_C::GetCurrentFuelIndex(int32_t* Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_JetPack.Equip_JetPack_C.GetCurrentFuelIndex");
		
		AEquip_JetPack_C_GetCurrentFuelIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Index != nullptr)
			*Index = params.Index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_JetPack.Equip_JetPack_C.GetFuelTypes
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UClass*>                              FuelTypes                                                  (Parm, OutParm)
	 */
	void AEquip_JetPack_C::GetFuelTypes(TArray<class UClass*>* FuelTypes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_JetPack.Equip_JetPack_C.GetFuelTypes");
		
		AEquip_JetPack_C_GetFuelTypes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FuelTypes != nullptr)
			*FuelTypes = params.FuelTypes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_JetPack.Equip_JetPack_C.GetShowInfoUntilFuelPercentIsFull
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ReturnVaule                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_JetPack_C::GetShowInfoUntilFuelPercentIsFull(bool* ReturnVaule)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_JetPack.Equip_JetPack_C.GetShowInfoUntilFuelPercentIsFull");
		
		AEquip_JetPack_C_GetShowInfoUntilFuelPercentIsFull_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnVaule != nullptr)
			*ReturnVaule = params.ReturnVaule;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_JetPack.Equip_JetPack_C.GetOverwriteTickRate
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             TickRate                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_JetPack_C::GetOverwriteTickRate(double* TickRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_JetPack.Equip_JetPack_C.GetOverwriteTickRate");
		
		AEquip_JetPack_C_GetOverwriteTickRate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TickRate != nullptr)
			*TickRate = params.TickRate;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_JetPack.Equip_JetPack_C.GetShowLowFuelWarning
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AEquip_JetPack_C::GetShowLowFuelWarning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_JetPack.Equip_JetPack_C.GetShowLowFuelWarning");
		
		AEquip_JetPack_C_GetShowLowFuelWarning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_JetPack.Equip_JetPack_C.GetIsBoomBoxPlaying
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AEquip_JetPack_C::GetIsBoomBoxPlaying()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_JetPack.Equip_JetPack_C.GetIsBoomBoxPlaying");
		
		AEquip_JetPack_C_GetIsBoomBoxPlaying_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_JetPack.Equip_JetPack_C.GetCurrentBoomBoxTape
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      mTapeData                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_JetPack_C::GetCurrentBoomBoxTape(class UClass** mTapeData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_JetPack.Equip_JetPack_C.GetCurrentBoomBoxTape");
		
		AEquip_JetPack_C_GetCurrentBoomBoxTape_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (mTapeData != nullptr)
			*mTapeData = params.mTapeData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_JetPack.Equip_JetPack_C.GetObjectScannerTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      ScannableItemDescriptor                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_JetPack_C::GetObjectScannerTarget(class UClass** ScannableItemDescriptor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_JetPack.Equip_JetPack_C.GetObjectScannerTarget");
		
		AEquip_JetPack_C_GetObjectScannerTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ScannableItemDescriptor != nullptr)
			*ScannableItemDescriptor = params.ScannableItemDescriptor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_JetPack.Equip_JetPack_C.GetHoverPackMode
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EHoverPackMode                                     Mode                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_JetPack_C::GetHoverPackMode(EHoverPackMode* Mode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_JetPack.Equip_JetPack_C.GetHoverPackMode");
		
		AEquip_JetPack_C_GetHoverPackMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Mode != nullptr)
			*Mode = params.Mode;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_JetPack.Equip_JetPack_C.GetHoverPackHasPower
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AEquip_JetPack_C::GetHoverPackHasPower()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_JetPack.Equip_JetPack_C.GetHoverPackHasPower");
		
		AEquip_JetPack_C_GetHoverPackHasPower_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_JetPack.Equip_JetPack_C.GetHoverPackDistance
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_JetPack_C::GetHoverPackDistance(double* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_JetPack.Equip_JetPack_C.GetHoverPackDistance");
		
		AEquip_JetPack_C_GetHoverPackDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_JetPack.Equip_JetPack_C.GetAlwaysShowContent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AEquip_JetPack_C::GetAlwaysShowContent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_JetPack.Equip_JetPack_C.GetAlwaysShowContent");
		
		AEquip_JetPack_C_GetAlwaysShowContent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_JetPack.Equip_JetPack_C.GetIsBurningFuel
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AEquip_JetPack_C::GetIsBurningFuel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_JetPack.Equip_JetPack_C.GetIsBurningFuel");
		
		AEquip_JetPack_C_GetIsBurningFuel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_JetPack.Equip_JetPack_C.GetHUD_ESlotClass
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Class                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_JetPack_C::GetHUD_ESlotClass(class UClass** Class)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_JetPack.Equip_JetPack_C.GetHUD_ESlotClass");
		
		AEquip_JetPack_C_GetHUD_ESlotClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Class != nullptr)
			*Class = params.Class;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_JetPack.Equip_JetPack_C.GetAmmoAmount
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AmmoCurrent                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            AmmoMax                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_JetPack_C::GetAmmoAmount(int32_t* AmmoCurrent, int32_t* AmmoMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_JetPack.Equip_JetPack_C.GetAmmoAmount");
		
		AEquip_JetPack_C_GetAmmoAmount_Params params {};
		
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
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_JetPack.Equip_JetPack_C.GetUpdateOnTick
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AEquip_JetPack_C::GetUpdateOnTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_JetPack.Equip_JetPack_C.GetUpdateOnTick");
		
		AEquip_JetPack_C_GetUpdateOnTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_JetPack.Equip_JetPack_C.GetAmmoDescriptor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      AmmoClass                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_JetPack_C::GetAmmoDescriptor(class UClass** AmmoClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_JetPack.Equip_JetPack_C.GetAmmoDescriptor");
		
		AEquip_JetPack_C_GetAmmoDescriptor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AmmoClass != nullptr)
			*AmmoClass = params.AmmoClass;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_JetPack.Equip_JetPack_C.GetFuelDescriptor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Class                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_JetPack_C::GetFuelDescriptor(class UClass** Class)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_JetPack.Equip_JetPack_C.GetFuelDescriptor");
		
		AEquip_JetPack_C_GetFuelDescriptor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Class != nullptr)
			*Class = params.Class;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_JetPack.Equip_JetPack_C.GetFuelPercent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_JetPack_C::GetFuelPercent(double* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_JetPack.Equip_JetPack_C.GetFuelPercent");
		
		AEquip_JetPack_C_GetFuelPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_JetPack.Equip_JetPack_C.SetActiveAudioRTPCs
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AEquip_JetPack_C::SetActiveAudioRTPCs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_JetPack.Equip_JetPack_C.SetActiveAudioRTPCs");
		
		AEquip_JetPack_C_SetActiveAudioRTPCs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_JetPack.Equip_JetPack_C.Validate Fuel Type Descriptors
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AEquip_JetPack_C::ValidateFuelTypeDescriptors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_JetPack.Equip_JetPack_C.Validate Fuel Type Descriptors");
		
		AEquip_JetPack_C_ValidateFuelTypeDescriptors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_JetPack.Equip_JetPack_C.SetFuelTypeDescriptors
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AEquip_JetPack_C::SetFuelTypeDescriptors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_JetPack.Equip_JetPack_C.SetFuelTypeDescriptors");
		
		AEquip_JetPack_C_SetFuelTypeDescriptors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_JetPack.Equip_JetPack_C.OnStartThrusting
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AEquip_JetPack_C::OnStartThrusting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_JetPack.Equip_JetPack_C.OnStartThrusting");
		
		AEquip_JetPack_C_OnStartThrusting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_JetPack.Equip_JetPack_C.OnStopThrusting
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AEquip_JetPack_C::OnStopThrusting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_JetPack.Equip_JetPack_C.OnStopThrusting");
		
		AEquip_JetPack_C_OnStopThrusting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_JetPack.Equip_JetPack_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_JetPack_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_JetPack.Equip_JetPack_C.ReceiveTick");
		
		AEquip_JetPack_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_JetPack.Equip_JetPack_C.WasEquipped
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AEquip_JetPack_C::WasEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_JetPack.Equip_JetPack_C.WasEquipped");
		
		AEquip_JetPack_C_WasEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_JetPack.Equip_JetPack_C.WasUnEquipped
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AEquip_JetPack_C::WasUnEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_JetPack.Equip_JetPack_C.WasUnEquipped");
		
		AEquip_JetPack_C_WasUnEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_JetPack.Equip_JetPack_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AEquip_JetPack_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_JetPack.Equip_JetPack_C.ReceiveBeginPlay");
		
		AEquip_JetPack_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_JetPack.Equip_JetPack_C.OnBurnPercentChanged
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AEquip_JetPack_C::OnBurnPercentChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_JetPack.Equip_JetPack_C.OnBurnPercentChanged");
		
		AEquip_JetPack_C_OnBurnPercentChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_JetPack.Equip_JetPack_C.OnFuelTypeChanged
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AEquip_JetPack_C::OnFuelTypeChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_JetPack.Equip_JetPack_C.OnFuelTypeChanged");
		
		AEquip_JetPack_C_OnFuelTypeChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_JetPack.Equip_JetPack_C.OnFuelAmountChanged
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AEquip_JetPack_C::OnFuelAmountChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_JetPack.Equip_JetPack_C.OnFuelAmountChanged");
		
		AEquip_JetPack_C_OnFuelAmountChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_JetPack.Equip_JetPack_C.ExecuteUbergraph_Equip_JetPack
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_JetPack_C::ExecuteUbergraph_Equip_JetPack(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_JetPack.Equip_JetPack_C.ExecuteUbergraph_Equip_JetPack");
		
		AEquip_JetPack_C_ExecuteUbergraph_Equip_JetPack_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AEquip_JetPack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AEquip_JetPack_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Equip_JetPack.Equip_JetPack_C");
		return ptr;
	}

}


