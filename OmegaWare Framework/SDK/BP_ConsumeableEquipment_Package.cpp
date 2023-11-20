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
	 * 		Name   -> Function BP_ConsumeableEquipment.BP_ConsumeableEquipment_C.GetShowInfoUntilFuelPercentIsFull
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ReturnVaule                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ConsumeableEquipment_C::GetShowInfoUntilFuelPercentIsFull(bool* ReturnVaule)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ConsumeableEquipment.BP_ConsumeableEquipment_C.GetShowInfoUntilFuelPercentIsFull");
		
		ABP_ConsumeableEquipment_C_GetShowInfoUntilFuelPercentIsFull_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnVaule != nullptr)
			*ReturnVaule = params.ReturnVaule;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ConsumeableEquipment.BP_ConsumeableEquipment_C.GetOverwriteTickRate
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             TickRate                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ConsumeableEquipment_C::GetOverwriteTickRate(double* TickRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ConsumeableEquipment.BP_ConsumeableEquipment_C.GetOverwriteTickRate");
		
		ABP_ConsumeableEquipment_C_GetOverwriteTickRate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TickRate != nullptr)
			*TickRate = params.TickRate;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ConsumeableEquipment.BP_ConsumeableEquipment_C.GetShowLowFuelWarning
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABP_ConsumeableEquipment_C::GetShowLowFuelWarning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ConsumeableEquipment.BP_ConsumeableEquipment_C.GetShowLowFuelWarning");
		
		ABP_ConsumeableEquipment_C_GetShowLowFuelWarning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ConsumeableEquipment.BP_ConsumeableEquipment_C.GetIsBoomBoxPlaying
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABP_ConsumeableEquipment_C::GetIsBoomBoxPlaying()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ConsumeableEquipment.BP_ConsumeableEquipment_C.GetIsBoomBoxPlaying");
		
		ABP_ConsumeableEquipment_C_GetIsBoomBoxPlaying_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ConsumeableEquipment.BP_ConsumeableEquipment_C.GetCurrentBoomBoxTape
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      mTapeData                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ConsumeableEquipment_C::GetCurrentBoomBoxTape(class UClass** mTapeData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ConsumeableEquipment.BP_ConsumeableEquipment_C.GetCurrentBoomBoxTape");
		
		ABP_ConsumeableEquipment_C_GetCurrentBoomBoxTape_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (mTapeData != nullptr)
			*mTapeData = params.mTapeData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ConsumeableEquipment.BP_ConsumeableEquipment_C.GetObjectScannerTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      ScannableItemDescriptor                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ConsumeableEquipment_C::GetObjectScannerTarget(class UClass** ScannableItemDescriptor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ConsumeableEquipment.BP_ConsumeableEquipment_C.GetObjectScannerTarget");
		
		ABP_ConsumeableEquipment_C_GetObjectScannerTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ScannableItemDescriptor != nullptr)
			*ScannableItemDescriptor = params.ScannableItemDescriptor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ConsumeableEquipment.BP_ConsumeableEquipment_C.GetHoverPackMode
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EHoverPackMode                                     Mode                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ConsumeableEquipment_C::GetHoverPackMode(EHoverPackMode* Mode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ConsumeableEquipment.BP_ConsumeableEquipment_C.GetHoverPackMode");
		
		ABP_ConsumeableEquipment_C_GetHoverPackMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Mode != nullptr)
			*Mode = params.Mode;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ConsumeableEquipment.BP_ConsumeableEquipment_C.GetHoverPackHasPower
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABP_ConsumeableEquipment_C::GetHoverPackHasPower()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ConsumeableEquipment.BP_ConsumeableEquipment_C.GetHoverPackHasPower");
		
		ABP_ConsumeableEquipment_C_GetHoverPackHasPower_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ConsumeableEquipment.BP_ConsumeableEquipment_C.GetHoverPackDistance
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ConsumeableEquipment_C::GetHoverPackDistance(double* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ConsumeableEquipment.BP_ConsumeableEquipment_C.GetHoverPackDistance");
		
		ABP_ConsumeableEquipment_C_GetHoverPackDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ConsumeableEquipment.BP_ConsumeableEquipment_C.GetHUD_ESlotClass
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Class                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ConsumeableEquipment_C::GetHUD_ESlotClass(class UClass** Class)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ConsumeableEquipment.BP_ConsumeableEquipment_C.GetHUD_ESlotClass");
		
		ABP_ConsumeableEquipment_C_GetHUD_ESlotClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Class != nullptr)
			*Class = params.Class;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ConsumeableEquipment.BP_ConsumeableEquipment_C.GetAmmoAmount
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AmmoCurrent                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            AmmoMax                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ConsumeableEquipment_C::GetAmmoAmount(int32_t* AmmoCurrent, int32_t* AmmoMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ConsumeableEquipment.BP_ConsumeableEquipment_C.GetAmmoAmount");
		
		ABP_ConsumeableEquipment_C_GetAmmoAmount_Params params {};
		
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
	 * 		Name   -> Function BP_ConsumeableEquipment.BP_ConsumeableEquipment_C.GetUpdateOnTick
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABP_ConsumeableEquipment_C::GetUpdateOnTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ConsumeableEquipment.BP_ConsumeableEquipment_C.GetUpdateOnTick");
		
		ABP_ConsumeableEquipment_C_GetUpdateOnTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ConsumeableEquipment.BP_ConsumeableEquipment_C.GetAmmoDescriptor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      AmmoClass                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ConsumeableEquipment_C::GetAmmoDescriptor(class UClass** AmmoClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ConsumeableEquipment.BP_ConsumeableEquipment_C.GetAmmoDescriptor");
		
		ABP_ConsumeableEquipment_C_GetAmmoDescriptor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AmmoClass != nullptr)
			*AmmoClass = params.AmmoClass;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ConsumeableEquipment.BP_ConsumeableEquipment_C.GetFuelDescriptor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Class                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ConsumeableEquipment_C::GetFuelDescriptor(class UClass** Class)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ConsumeableEquipment.BP_ConsumeableEquipment_C.GetFuelDescriptor");
		
		ABP_ConsumeableEquipment_C_GetFuelDescriptor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Class != nullptr)
			*Class = params.Class;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ConsumeableEquipment.BP_ConsumeableEquipment_C.GetFuelPercent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ConsumeableEquipment_C::GetFuelPercent(double* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ConsumeableEquipment.BP_ConsumeableEquipment_C.GetFuelPercent");
		
		ABP_ConsumeableEquipment_C_GetFuelPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ConsumeableEquipment.BP_ConsumeableEquipment_C.GetIsBurningFuel
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABP_ConsumeableEquipment_C::GetIsBurningFuel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ConsumeableEquipment.BP_ConsumeableEquipment_C.GetIsBurningFuel");
		
		ABP_ConsumeableEquipment_C_GetIsBurningFuel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ConsumeableEquipment.BP_ConsumeableEquipment_C.GetAlwaysShowContent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABP_ConsumeableEquipment_C::GetAlwaysShowContent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ConsumeableEquipment.BP_ConsumeableEquipment_C.GetAlwaysShowContent");
		
		ABP_ConsumeableEquipment_C_GetAlwaysShowContent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ConsumeableEquipment.BP_ConsumeableEquipment_C.PlayConsumeEffects
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UFGConsumableDescriptor*                     consumable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ConsumeableEquipment_C::PlayConsumeEffects(class UFGConsumableDescriptor* consumable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ConsumeableEquipment.BP_ConsumeableEquipment_C.PlayConsumeEffects");
		
		ABP_ConsumeableEquipment_C_PlayConsumeEffects_Params params {};
		params.consumable = consumable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ConsumeableEquipment.BP_ConsumeableEquipment_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ConsumeableEquipment_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ConsumeableEquipment.BP_ConsumeableEquipment_C.ReceiveTick");
		
		ABP_ConsumeableEquipment_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ConsumeableEquipment.BP_ConsumeableEquipment_C.WasEquipped
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_ConsumeableEquipment_C::WasEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ConsumeableEquipment.BP_ConsumeableEquipment_C.WasEquipped");
		
		ABP_ConsumeableEquipment_C_WasEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ConsumeableEquipment.BP_ConsumeableEquipment_C.ExecuteUbergraph_BP_ConsumeableEquipment
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ConsumeableEquipment_C::ExecuteUbergraph_BP_ConsumeableEquipment(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ConsumeableEquipment.BP_ConsumeableEquipment_C.ExecuteUbergraph_BP_ConsumeableEquipment");
		
		ABP_ConsumeableEquipment_C_ExecuteUbergraph_BP_ConsumeableEquipment_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ConsumeableEquipment_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ConsumeableEquipment_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ConsumeableEquipment.BP_ConsumeableEquipment_C");
		return ptr;
	}

}


