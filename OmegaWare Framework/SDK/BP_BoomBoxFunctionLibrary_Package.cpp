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
	 * 		Name   -> Function BP_BoomBoxFunctionLibrary.BP_BoomBoxFunctionLibrary_C.TriggerTurboBassShockWaveVFX
	 * 		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGCharacterPlayer*                          instigatorCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Emitter                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_BoomBoxFunctionLibrary_C::STATIC_TriggerTurboBassShockWaveVFX(class AFGCharacterPlayer* instigatorCharacter, class AActor* Emitter, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BoomBoxFunctionLibrary.BP_BoomBoxFunctionLibrary_C.TriggerTurboBassShockWaveVFX");
		
		UBP_BoomBoxFunctionLibrary_C_TriggerTurboBassShockWaveVFX_Params params {};
		params.instigatorCharacter = instigatorCharacter;
		params.Emitter = Emitter;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_BoomBoxFunctionLibrary.BP_BoomBoxFunctionLibrary_C.TraceDebrisSurfaceType
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		EPhysicalSurface                                   Surface                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Hit                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_BoomBoxFunctionLibrary_C::TraceDebrisSurfaceType(class AActor* Instigator, class UObject* __WorldContext, EPhysicalSurface* Surface, struct FVector* Location, bool* Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BoomBoxFunctionLibrary.BP_BoomBoxFunctionLibrary_C.TraceDebrisSurfaceType");
		
		UBP_BoomBoxFunctionLibrary_C_TraceDebrisSurfaceType_Params params {};
		params.Instigator = Instigator;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Surface != nullptr)
			*Surface = params.Surface;
		if (Location != nullptr)
			*Location = params.Location;
		if (Hit != nullptr)
			*Hit = params.Hit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_BoomBoxFunctionLibrary.BP_BoomBoxFunctionLibrary_C.ShockWave_VFX
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPhysicalSurface                                   Surface                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Hit                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     SourceLocation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_BoomBoxFunctionLibrary_C::ShockWave_VFX(EPhysicalSurface Surface, const struct FVector& Location, bool Hit, class AActor* Instigator, const struct FVector& SourceLocation, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BoomBoxFunctionLibrary.BP_BoomBoxFunctionLibrary_C.ShockWave_VFX");
		
		UBP_BoomBoxFunctionLibrary_C_ShockWave_VFX_Params params {};
		params.Surface = Surface;
		params.Location = Location;
		params.Hit = Hit;
		params.Instigator = Instigator;
		params.SourceLocation = SourceLocation;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_BoomBoxFunctionLibrary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_BoomBoxFunctionLibrary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BoomBoxFunctionLibrary.BP_BoomBoxFunctionLibrary_C");
		return ptr;
	}

}


