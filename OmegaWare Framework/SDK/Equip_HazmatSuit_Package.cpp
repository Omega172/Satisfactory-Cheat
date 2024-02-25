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
	 * 		Name   -> Function Equip_HazmatSuit.Equip_HazmatSuit_C.GetShowInfoUntilFuelPercentIsFull
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ReturnVaule                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_HazmatSuit_C::GetShowInfoUntilFuelPercentIsFull(bool* ReturnVaule)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_HazmatSuit.Equip_HazmatSuit_C.GetShowInfoUntilFuelPercentIsFull");
		
		AEquip_HazmatSuit_C_GetShowInfoUntilFuelPercentIsFull_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnVaule != nullptr)
			*ReturnVaule = params.ReturnVaule;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Equip_HazmatSuit.Equip_HazmatSuit_C.GetOverwriteTickRate
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             TickRate                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_HazmatSuit_C::GetOverwriteTickRate(double* TickRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_HazmatSuit.Equip_HazmatSuit_C.GetOverwriteTickRate");
		
		AEquip_HazmatSuit_C_GetOverwriteTickRate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TickRate != nullptr)
			*TickRate = params.TickRate;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Equip_HazmatSuit.Equip_HazmatSuit_C.GetShowLowFuelWarning
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AEquip_HazmatSuit_C::GetShowLowFuelWarning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_HazmatSuit.Equip_HazmatSuit_C.GetShowLowFuelWarning");
		
		AEquip_HazmatSuit_C_GetShowLowFuelWarning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Equip_HazmatSuit.Equip_HazmatSuit_C.GetIsBoomBoxPlaying
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AEquip_HazmatSuit_C::GetIsBoomBoxPlaying()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_HazmatSuit.Equip_HazmatSuit_C.GetIsBoomBoxPlaying");
		
		AEquip_HazmatSuit_C_GetIsBoomBoxPlaying_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Equip_HazmatSuit.Equip_HazmatSuit_C.GetCurrentBoomBoxTape
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      mTapeData                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_HazmatSuit_C::GetCurrentBoomBoxTape(class UClass** mTapeData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_HazmatSuit.Equip_HazmatSuit_C.GetCurrentBoomBoxTape");
		
		AEquip_HazmatSuit_C_GetCurrentBoomBoxTape_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (mTapeData != nullptr)
			*mTapeData = params.mTapeData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Equip_HazmatSuit.Equip_HazmatSuit_C.GetObjectScannerTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      ScannableItemDescriptor                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_HazmatSuit_C::GetObjectScannerTarget(class UClass** ScannableItemDescriptor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_HazmatSuit.Equip_HazmatSuit_C.GetObjectScannerTarget");
		
		AEquip_HazmatSuit_C_GetObjectScannerTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ScannableItemDescriptor != nullptr)
			*ScannableItemDescriptor = params.ScannableItemDescriptor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Equip_HazmatSuit.Equip_HazmatSuit_C.GetHoverPackMode
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EHoverPackMode                                     Mode                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_HazmatSuit_C::GetHoverPackMode(EHoverPackMode* Mode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_HazmatSuit.Equip_HazmatSuit_C.GetHoverPackMode");
		
		AEquip_HazmatSuit_C_GetHoverPackMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Mode != nullptr)
			*Mode = params.Mode;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Equip_HazmatSuit.Equip_HazmatSuit_C.GetHoverPackHasPower
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AEquip_HazmatSuit_C::GetHoverPackHasPower()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_HazmatSuit.Equip_HazmatSuit_C.GetHoverPackHasPower");
		
		AEquip_HazmatSuit_C_GetHoverPackHasPower_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Equip_HazmatSuit.Equip_HazmatSuit_C.GetHoverPackDistance
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_HazmatSuit_C::GetHoverPackDistance(double* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_HazmatSuit.Equip_HazmatSuit_C.GetHoverPackDistance");
		
		AEquip_HazmatSuit_C_GetHoverPackDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Equip_HazmatSuit.Equip_HazmatSuit_C.GetHUD_ESlotClass
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Class                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_HazmatSuit_C::GetHUD_ESlotClass(class UClass** Class)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_HazmatSuit.Equip_HazmatSuit_C.GetHUD_ESlotClass");
		
		AEquip_HazmatSuit_C_GetHUD_ESlotClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Class != nullptr)
			*Class = params.Class;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Equip_HazmatSuit.Equip_HazmatSuit_C.GetAmmoAmount
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AmmoCurrent                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            AmmoMax                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_HazmatSuit_C::GetAmmoAmount(int32_t* AmmoCurrent, int32_t* AmmoMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_HazmatSuit.Equip_HazmatSuit_C.GetAmmoAmount");
		
		AEquip_HazmatSuit_C_GetAmmoAmount_Params params {};
		
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
	 * 		Name   -> Function Equip_HazmatSuit.Equip_HazmatSuit_C.GetUpdateOnTick
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AEquip_HazmatSuit_C::GetUpdateOnTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_HazmatSuit.Equip_HazmatSuit_C.GetUpdateOnTick");
		
		AEquip_HazmatSuit_C_GetUpdateOnTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Equip_HazmatSuit.Equip_HazmatSuit_C.GetAmmoDescriptor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      AmmoClass                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_HazmatSuit_C::GetAmmoDescriptor(class UClass** AmmoClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_HazmatSuit.Equip_HazmatSuit_C.GetAmmoDescriptor");
		
		AEquip_HazmatSuit_C_GetAmmoDescriptor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AmmoClass != nullptr)
			*AmmoClass = params.AmmoClass;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Equip_HazmatSuit.Equip_HazmatSuit_C.GetFuelDescriptor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Class                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_HazmatSuit_C::GetFuelDescriptor(class UClass** Class)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_HazmatSuit.Equip_HazmatSuit_C.GetFuelDescriptor");
		
		AEquip_HazmatSuit_C_GetFuelDescriptor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Class != nullptr)
			*Class = params.Class;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Equip_HazmatSuit.Equip_HazmatSuit_C.GetFuelPercent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_HazmatSuit_C::GetFuelPercent(double* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_HazmatSuit.Equip_HazmatSuit_C.GetFuelPercent");
		
		AEquip_HazmatSuit_C_GetFuelPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Equip_HazmatSuit.Equip_HazmatSuit_C.GetIsBurningFuel
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AEquip_HazmatSuit_C::GetIsBurningFuel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_HazmatSuit.Equip_HazmatSuit_C.GetIsBurningFuel");
		
		AEquip_HazmatSuit_C_GetIsBurningFuel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Equip_HazmatSuit.Equip_HazmatSuit_C.GetAlwaysShowContent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AEquip_HazmatSuit_C::GetAlwaysShowContent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_HazmatSuit.Equip_HazmatSuit_C.GetAlwaysShowContent");
		
		AEquip_HazmatSuit_C_GetAlwaysShowContent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Equip_HazmatSuit.Equip_HazmatSuit_C.EnablePostProcessing
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_HazmatSuit_C::EnablePostProcessing(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_HazmatSuit.Equip_HazmatSuit_C.EnablePostProcessing");
		
		AEquip_HazmatSuit_C_EnablePostProcessing_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Equip_HazmatSuit.Equip_HazmatSuit_C.AdjustDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DamageAmount                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageType*                                 DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class AController*                                 InstigatedBy                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	float AEquip_HazmatSuit_C::AdjustDamage(float DamageAmount, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_HazmatSuit.Equip_HazmatSuit_C.AdjustDamage");
		
		AEquip_HazmatSuit_C_AdjustDamage_Params params {};
		params.DamageAmount = DamageAmount;
		params.DamageType = DamageType;
		params.InstigatedBy = InstigatedBy;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Equip_HazmatSuit.Equip_HazmatSuit_C.WasUnEquipped
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AEquip_HazmatSuit_C::WasUnEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_HazmatSuit.Equip_HazmatSuit_C.WasUnEquipped");
		
		AEquip_HazmatSuit_C_WasUnEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Equip_HazmatSuit.Equip_HazmatSuit_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_HazmatSuit_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_HazmatSuit.Equip_HazmatSuit_C.ReceiveTick");
		
		AEquip_HazmatSuit_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Equip_HazmatSuit.Equip_HazmatSuit_C.WasEquipped
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AEquip_HazmatSuit_C::WasEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_HazmatSuit.Equip_HazmatSuit_C.WasEquipped");
		
		AEquip_HazmatSuit_C_WasEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Equip_HazmatSuit.Equip_HazmatSuit_C.StartHasBurnedFuelTimer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AEquip_HazmatSuit_C::StartHasBurnedFuelTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_HazmatSuit.Equip_HazmatSuit_C.StartHasBurnedFuelTimer");
		
		AEquip_HazmatSuit_C_StartHasBurnedFuelTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Equip_HazmatSuit.Equip_HazmatSuit_C.ExecuteUbergraph_Equip_HazmatSuit
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_HazmatSuit_C::ExecuteUbergraph_Equip_HazmatSuit(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_HazmatSuit.Equip_HazmatSuit_C.ExecuteUbergraph_Equip_HazmatSuit");
		
		AEquip_HazmatSuit_C_ExecuteUbergraph_Equip_HazmatSuit_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AEquip_HazmatSuit_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AEquip_HazmatSuit_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Equip_HazmatSuit.Equip_HazmatSuit_C");
		return ptr;
	}

}


