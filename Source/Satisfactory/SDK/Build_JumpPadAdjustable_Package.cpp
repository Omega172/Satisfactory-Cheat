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
	 * 		Name   -> Function Build_JumpPadAdjustable.Build_JumpPadAdjustable_C.PlayChristmasJingle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            JingleCounter                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_JumpPadAdjustable_C::PlayChristmasJingle(int32_t JingleCounter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_JumpPadAdjustable.Build_JumpPadAdjustable_C.PlayChristmasJingle");
		
		ABuild_JumpPadAdjustable_C_PlayChristmasJingle_Params params {};
		params.JingleCounter = JingleCounter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_JumpPadAdjustable.Build_JumpPadAdjustable_C.PlayVFX
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABuild_JumpPadAdjustable_C::PlayVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_JumpPadAdjustable.Build_JumpPadAdjustable_C.PlayVFX");
		
		ABuild_JumpPadAdjustable_C_PlayVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_JumpPadAdjustable.Build_JumpPadAdjustable_C.PlayLaunchSound
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             LaunchSpeed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_JumpPadAdjustable_C::PlayLaunchSound(double LaunchSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_JumpPadAdjustable.Build_JumpPadAdjustable_C.PlayLaunchSound");
		
		ABuild_JumpPadAdjustable_C_PlayLaunchSound_Params params {};
		params.LaunchSpeed = LaunchSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_JumpPadAdjustable.Build_JumpPadAdjustable_C.OnHasPowerChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               newHasPower                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_JumpPadAdjustable_C::OnHasPowerChanged(bool newHasPower)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_JumpPadAdjustable.Build_JumpPadAdjustable_C.OnHasPowerChanged");
		
		ABuild_JumpPadAdjustable_C_OnHasPowerChanged_Params params {};
		params.newHasPower = newHasPower;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_JumpPadAdjustable.Build_JumpPadAdjustable_C.OnLaunch
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              HighestLaunchSpeed                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_JumpPadAdjustable_C::OnLaunch(float HighestLaunchSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_JumpPadAdjustable.Build_JumpPadAdjustable_C.OnLaunch");
		
		ABuild_JumpPadAdjustable_C_OnLaunch_Params params {};
		params.HighestLaunchSpeed = HighestLaunchSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_JumpPadAdjustable.Build_JumpPadAdjustable_C.OnPlayerLaunched
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AFGCharacterPlayer*                          pPlayer                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NumChainedBounces                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_JumpPadAdjustable_C::OnPlayerLaunched(class AFGCharacterPlayer* pPlayer, int32_t NumChainedBounces)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_JumpPadAdjustable.Build_JumpPadAdjustable_C.OnPlayerLaunched");
		
		ABuild_JumpPadAdjustable_C_OnPlayerLaunched_Params params {};
		params.pPlayer = pPlayer;
		params.NumChainedBounces = NumChainedBounces;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_JumpPadAdjustable.Build_JumpPadAdjustable_C.ExecuteUbergraph_Build_JumpPadAdjustable
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_JumpPadAdjustable_C::ExecuteUbergraph_Build_JumpPadAdjustable(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_JumpPadAdjustable.Build_JumpPadAdjustable_C.ExecuteUbergraph_Build_JumpPadAdjustable");
		
		ABuild_JumpPadAdjustable_C_ExecuteUbergraph_Build_JumpPadAdjustable_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuild_JumpPadAdjustable_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuild_JumpPadAdjustable_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Build_JumpPadAdjustable.Build_JumpPadAdjustable_C");
		return ptr;
	}

}


