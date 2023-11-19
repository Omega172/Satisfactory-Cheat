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
	 * 		Name   -> Function Equip_GolfCartDispenser.Equip_GolfCartDispenser_C.IsObjectNotChildOfVehicleClass
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	bool AEquip_GolfCartDispenser_C::IsObjectNotChildOfVehicleClass(class UObject* Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_GolfCartDispenser.Equip_GolfCartDispenser_C.IsObjectNotChildOfVehicleClass");
		
		AEquip_GolfCartDispenser_C_IsObjectNotChildOfVehicleClass_Params params {};
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_GolfCartDispenser.Equip_GolfCartDispenser_C.GetSecondaryTraceLocations
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               IsFirstTraceBlocking                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     FirstTraceHitLocation                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     FirstTraceEndTrace                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFGCharacterPlayer*                          Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     SecondTraceStart                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     SecondTraceEnd                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     BoxTraceHalfSize                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    BoxTraceOrientation                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEquip_GolfCartDispenser_C::GetSecondaryTraceLocations(bool IsFirstTraceBlocking, const struct FVector& FirstTraceHitLocation, const struct FVector& FirstTraceEndTrace, class AFGCharacterPlayer* Instigator, struct FVector* SecondTraceStart, struct FVector* SecondTraceEnd, struct FVector* BoxTraceHalfSize, struct FRotator* BoxTraceOrientation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_GolfCartDispenser.Equip_GolfCartDispenser_C.GetSecondaryTraceLocations");
		
		AEquip_GolfCartDispenser_C_GetSecondaryTraceLocations_Params params {};
		params.IsFirstTraceBlocking = IsFirstTraceBlocking;
		params.FirstTraceHitLocation = FirstTraceHitLocation;
		params.FirstTraceEndTrace = FirstTraceEndTrace;
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SecondTraceStart != nullptr)
			*SecondTraceStart = params.SecondTraceStart;
		if (SecondTraceEnd != nullptr)
			*SecondTraceEnd = params.SecondTraceEnd;
		if (BoxTraceHalfSize != nullptr)
			*BoxTraceHalfSize = params.BoxTraceHalfSize;
		if (BoxTraceOrientation != nullptr)
			*BoxTraceOrientation = params.BoxTraceOrientation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_GolfCartDispenser.Equip_GolfCartDispenser_C.GetInitialTraceLocations
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     TraceStart                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     TraceEnd                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFGCharacterPlayer*                          Instigator                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_GolfCartDispenser_C::GetInitialTraceLocations(struct FVector* TraceStart, struct FVector* TraceEnd, class AFGCharacterPlayer** Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_GolfCartDispenser.Equip_GolfCartDispenser_C.GetInitialTraceLocations");
		
		AEquip_GolfCartDispenser_C_GetInitialTraceLocations_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TraceStart != nullptr)
			*TraceStart = params.TraceStart;
		if (TraceEnd != nullptr)
			*TraceEnd = params.TraceEnd;
		if (Instigator != nullptr)
			*Instigator = params.Instigator;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_GolfCartDispenser.Equip_GolfCartDispenser_C.WasUnEquipped
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AEquip_GolfCartDispenser_C::WasUnEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_GolfCartDispenser.Equip_GolfCartDispenser_C.WasUnEquipped");
		
		AEquip_GolfCartDispenser_C_WasUnEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_GolfCartDispenser.Equip_GolfCartDispenser_C.SpawnGolfCart
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AEquip_GolfCartDispenser_C::SpawnGolfCart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_GolfCartDispenser.Equip_GolfCartDispenser_C.SpawnGolfCart");
		
		AEquip_GolfCartDispenser_C_SpawnGolfCart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_GolfCartDispenser.Equip_GolfCartDispenser_C.WasEquipped
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AEquip_GolfCartDispenser_C::WasEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_GolfCartDispenser.Equip_GolfCartDispenser_C.WasEquipped");
		
		AEquip_GolfCartDispenser_C_WasEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_GolfCartDispenser.Equip_GolfCartDispenser_C.PlaySpawnEffects
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_Golfcart_C*                              golfCart                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_GolfCartDispenser_C::PlaySpawnEffects(class ABP_Golfcart_C* golfCart)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_GolfCartDispenser.Equip_GolfCartDispenser_C.PlaySpawnEffects");
		
		AEquip_GolfCartDispenser_C_PlaySpawnEffects_Params params {};
		params.golfCart = golfCart;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_GolfCartDispenser.Equip_GolfCartDispenser_C.DisplayBuildDisqualifier
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AEquip_GolfCartDispenser_C::DisplayBuildDisqualifier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_GolfCartDispenser.Equip_GolfCartDispenser_C.DisplayBuildDisqualifier");
		
		AEquip_GolfCartDispenser_C_DisplayBuildDisqualifier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_GolfCartDispenser.Equip_GolfCartDispenser_C.ResetBuildDisqualifierDisplay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AEquip_GolfCartDispenser_C::ResetBuildDisqualifierDisplay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_GolfCartDispenser.Equip_GolfCartDispenser_C.ResetBuildDisqualifierDisplay");
		
		AEquip_GolfCartDispenser_C_ResetBuildDisqualifierDisplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_GolfCartDispenser.Equip_GolfCartDispenser_C.ExecuteUbergraph_Equip_GolfCartDispenser
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_GolfCartDispenser_C::ExecuteUbergraph_Equip_GolfCartDispenser(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_GolfCartDispenser.Equip_GolfCartDispenser_C.ExecuteUbergraph_Equip_GolfCartDispenser");
		
		AEquip_GolfCartDispenser_C_ExecuteUbergraph_Equip_GolfCartDispenser_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AEquip_GolfCartDispenser_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AEquip_GolfCartDispenser_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Equip_GolfCartDispenser.Equip_GolfCartDispenser_C");
		return ptr;
	}

}


