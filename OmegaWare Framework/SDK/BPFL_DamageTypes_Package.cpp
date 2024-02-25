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
	 * 		Name   -> Function BPFL_DamageTypes.BPFL_DamageTypes_C.IsDamageFromWorldBounds
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UFGDamageType*                               DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isRadiationDamages                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_DamageTypes_C::STATIC_IsDamageFromWorldBounds(class UFGDamageType* DamageType, class UObject* __WorldContext, bool* isRadiationDamages)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_DamageTypes.BPFL_DamageTypes_C.IsDamageFromWorldBounds");
		
		UBPFL_DamageTypes_C_IsDamageFromWorldBounds_Params params {};
		params.DamageType = DamageType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (isRadiationDamages != nullptr)
			*isRadiationDamages = params.isRadiationDamages;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPFL_DamageTypes.BPFL_DamageTypes_C.IsDamageFromDrown
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UFGDamageType*                               DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isRadiationDamages                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_DamageTypes_C::STATIC_IsDamageFromDrown(class UFGDamageType* DamageType, class UObject* __WorldContext, bool* isRadiationDamages)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_DamageTypes.BPFL_DamageTypes_C.IsDamageFromDrown");
		
		UBPFL_DamageTypes_C_IsDamageFromDrown_Params params {};
		params.DamageType = DamageType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (isRadiationDamages != nullptr)
			*isRadiationDamages = params.isRadiationDamages;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPFL_DamageTypes.BPFL_DamageTypes_C.IsDamageFromFall
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UFGDamageType*                               DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isRadiationDamages                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_DamageTypes_C::STATIC_IsDamageFromFall(class UFGDamageType* DamageType, class UObject* __WorldContext, bool* isRadiationDamages)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_DamageTypes.BPFL_DamageTypes_C.IsDamageFromFall");
		
		UBPFL_DamageTypes_C_IsDamageFromFall_Params params {};
		params.DamageType = DamageType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (isRadiationDamages != nullptr)
			*isRadiationDamages = params.isRadiationDamages;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPFL_DamageTypes.BPFL_DamageTypes_C.IsDamageFromHeat
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UFGDamageType*                               DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isRadiationDamages                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_DamageTypes_C::STATIC_IsDamageFromHeat(class UFGDamageType* DamageType, class UObject* __WorldContext, bool* isRadiationDamages)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_DamageTypes.BPFL_DamageTypes_C.IsDamageFromHeat");
		
		UBPFL_DamageTypes_C_IsDamageFromHeat_Params params {};
		params.DamageType = DamageType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (isRadiationDamages != nullptr)
			*isRadiationDamages = params.isRadiationDamages;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPFL_DamageTypes.BPFL_DamageTypes_C.IsDamageFromGas
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UFGDamageType*                               DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isRadiationDamages                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_DamageTypes_C::STATIC_IsDamageFromGas(class UFGDamageType* DamageType, class UObject* __WorldContext, bool* isRadiationDamages)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_DamageTypes.BPFL_DamageTypes_C.IsDamageFromGas");
		
		UBPFL_DamageTypes_C_IsDamageFromGas_Params params {};
		params.DamageType = DamageType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (isRadiationDamages != nullptr)
			*isRadiationDamages = params.isRadiationDamages;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPFL_DamageTypes.BPFL_DamageTypes_C.IsDamageFromRadiation
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UFGDamageType*                               DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isRadiationDamages                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_DamageTypes_C::STATIC_IsDamageFromRadiation(class UFGDamageType* DamageType, class UObject* __WorldContext, bool* isRadiationDamages)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_DamageTypes.BPFL_DamageTypes_C.IsDamageFromRadiation");
		
		UBPFL_DamageTypes_C_IsDamageFromRadiation_Params params {};
		params.DamageType = DamageType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (isRadiationDamages != nullptr)
			*isRadiationDamages = params.isRadiationDamages;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPFL_DamageTypes.BPFL_DamageTypes_C.IsDamageFromEnergy
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UFGDamageType*                               DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isRadiationDamages                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_DamageTypes_C::STATIC_IsDamageFromEnergy(class UFGDamageType* DamageType, class UObject* __WorldContext, bool* isRadiationDamages)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_DamageTypes.BPFL_DamageTypes_C.IsDamageFromEnergy");
		
		UBPFL_DamageTypes_C_IsDamageFromEnergy_Params params {};
		params.DamageType = DamageType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (isRadiationDamages != nullptr)
			*isRadiationDamages = params.isRadiationDamages;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPFL_DamageTypes.BPFL_DamageTypes_C.IsDamageFromPhysical
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UFGDamageType*                               DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isRadiationDamages                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_DamageTypes_C::STATIC_IsDamageFromPhysical(class UFGDamageType* DamageType, class UObject* __WorldContext, bool* isRadiationDamages)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_DamageTypes.BPFL_DamageTypes_C.IsDamageFromPhysical");
		
		UBPFL_DamageTypes_C_IsDamageFromPhysical_Params params {};
		params.DamageType = DamageType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (isRadiationDamages != nullptr)
			*isRadiationDamages = params.isRadiationDamages;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPFL_DamageTypes_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPFL_DamageTypes_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPFL_DamageTypes.BPFL_DamageTypes_C");
		return ptr;
	}

}


