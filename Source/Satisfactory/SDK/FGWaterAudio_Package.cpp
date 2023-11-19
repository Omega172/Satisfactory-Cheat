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
	 * 		Name   -> Function FGWaterAudio.FGWaterAudio_C.OnCameraExitedWater
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AFGWaterVolume*                              waterVolume                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     exitLocation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFGPlayerController*                         PC                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UFGWaterAudio_C::OnCameraExitedWater(class AFGWaterVolume* waterVolume, const struct FVector& exitLocation, class AFGPlayerController* PC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FGWaterAudio.FGWaterAudio_C.OnCameraExitedWater");
		
		UFGWaterAudio_C_OnCameraExitedWater_Params params {};
		params.waterVolume = waterVolume;
		params.exitLocation = exitLocation;
		params.PC = PC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function FGWaterAudio.FGWaterAudio_C.OnCameraEnteredWater
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AFGWaterVolume*                              waterVolume                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     enterLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFGPlayerController*                         PC                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UFGWaterAudio_C::OnCameraEnteredWater(class AFGWaterVolume* waterVolume, const struct FVector& enterLocation, class AFGPlayerController* PC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FGWaterAudio.FGWaterAudio_C.OnCameraEnteredWater");
		
		UFGWaterAudio_C_OnCameraEnteredWater_Params params {};
		params.waterVolume = waterVolume;
		params.enterLocation = enterLocation;
		params.PC = PC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFGWaterAudio_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFGWaterAudio_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FGWaterAudio.FGWaterAudio_C");
		return ptr;
	}

}


