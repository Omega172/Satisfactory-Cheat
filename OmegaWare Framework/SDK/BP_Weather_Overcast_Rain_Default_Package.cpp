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
	 * 		Name   -> Function BP_Weather_Overcast_Rain_Default.BP_Weather_Overcast_Rain_Default_C.UpdateRainIntensity
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Alpha                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Weather_Overcast_Rain_Default_C::UpdateRainIntensity(double Alpha)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weather_Overcast_Rain_Default.BP_Weather_Overcast_Rain_Default_C.UpdateRainIntensity");
		
		ABP_Weather_Overcast_Rain_Default_C_UpdateRainIntensity_Params params {};
		params.Alpha = Alpha;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_Weather_Overcast_Rain_Default.BP_Weather_Overcast_Rain_Default_C.SetCollisionRainSpawnBox
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Weather_Overcast_Rain_Default_C::SetCollisionRainSpawnBox(const struct FVector& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weather_Overcast_Rain_Default.BP_Weather_Overcast_Rain_Default_C.SetCollisionRainSpawnBox");
		
		ABP_Weather_Overcast_Rain_Default_C_SetCollisionRainSpawnBox_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_Weather_Overcast_Rain_Default.BP_Weather_Overcast_Rain_Default_C.Set Rain Particle Params
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Weather_Overcast_Rain_Default_C::SetRainParticleParams()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weather_Overcast_Rain_Default.BP_Weather_Overcast_Rain_Default_C.Set Rain Particle Params");
		
		ABP_Weather_Overcast_Rain_Default_C_SetRainParticleParams_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_Weather_Overcast_Rain_Default.BP_Weather_Overcast_Rain_Default_C.SetRainIntensityFar
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             RainIntesnity                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Weather_Overcast_Rain_Default_C::SetRainIntensityFar(double RainIntesnity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weather_Overcast_Rain_Default.BP_Weather_Overcast_Rain_Default_C.SetRainIntensityFar");
		
		ABP_Weather_Overcast_Rain_Default_C_SetRainIntensityFar_Params params {};
		params.RainIntesnity = RainIntesnity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_Weather_Overcast_Rain_Default.BP_Weather_Overcast_Rain_Default_C.SetRainVelocity
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Weather_Overcast_Rain_Default_C::SetRainVelocity(const struct FVector& Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weather_Overcast_Rain_Default.BP_Weather_Overcast_Rain_Default_C.SetRainVelocity");
		
		ABP_Weather_Overcast_Rain_Default_C_SetRainVelocity_Params params {};
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_Weather_Overcast_Rain_Default.BP_Weather_Overcast_Rain_Default_C.SetRainIntensity
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             RainIntesnity                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Weather_Overcast_Rain_Default_C::SetRainIntensity(double RainIntesnity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weather_Overcast_Rain_Default.BP_Weather_Overcast_Rain_Default_C.SetRainIntensity");
		
		ABP_Weather_Overcast_Rain_Default_C_SetRainIntensity_Params params {};
		params.RainIntesnity = RainIntesnity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_Weather_Overcast_Rain_Default.BP_Weather_Overcast_Rain_Default_C.SetRainFarVelocityMultiplier
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Weather_Overcast_Rain_Default_C::SetRainFarVelocityMultiplier(double Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weather_Overcast_Rain_Default.BP_Weather_Overcast_Rain_Default_C.SetRainFarVelocityMultiplier");
		
		ABP_Weather_Overcast_Rain_Default_C_SetRainFarVelocityMultiplier_Params params {};
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_Weather_Overcast_Rain_Default.BP_Weather_Overcast_Rain_Default_C.SetRainFarAreaSize
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Weather_Overcast_Rain_Default_C::SetRainFarAreaSize(double Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weather_Overcast_Rain_Default.BP_Weather_Overcast_Rain_Default_C.SetRainFarAreaSize");
		
		ABP_Weather_Overcast_Rain_Default_C_SetRainFarAreaSize_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_Weather_Overcast_Rain_Default.BP_Weather_Overcast_Rain_Default_C.SetRainAreaSize
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Weather_Overcast_Rain_Default_C::SetRainAreaSize(const struct FVector& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weather_Overcast_Rain_Default.BP_Weather_Overcast_Rain_Default_C.SetRainAreaSize");
		
		ABP_Weather_Overcast_Rain_Default_C_SetRainAreaSize_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_Weather_Overcast_Rain_Default.BP_Weather_Overcast_Rain_Default_C.SetCollisionRainSpawnRate
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Weather_Overcast_Rain_Default_C::SetCollisionRainSpawnRate(double Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weather_Overcast_Rain_Default.BP_Weather_Overcast_Rain_Default_C.SetCollisionRainSpawnRate");
		
		ABP_Weather_Overcast_Rain_Default_C_SetCollisionRainSpawnRate_Params params {};
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_Weather_Overcast_Rain_Default.BP_Weather_Overcast_Rain_Default_C.StartWeatherState
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AFGSkySphere*                                SkySphere                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Weather_Overcast_Rain_Default_C::StartWeatherState(class AFGSkySphere* SkySphere)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weather_Overcast_Rain_Default.BP_Weather_Overcast_Rain_Default_C.StartWeatherState");
		
		ABP_Weather_Overcast_Rain_Default_C_StartWeatherState_Params params {};
		params.SkySphere = SkySphere;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_Weather_Overcast_Rain_Default.BP_Weather_Overcast_Rain_Default_C.TransitionBeginWeatherState
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		float                                              dt                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              percentage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Weather_Overcast_Rain_Default_C::TransitionBeginWeatherState(float dt, float percentage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weather_Overcast_Rain_Default.BP_Weather_Overcast_Rain_Default_C.TransitionBeginWeatherState");
		
		ABP_Weather_Overcast_Rain_Default_C_TransitionBeginWeatherState_Params params {};
		params.dt = dt;
		params.percentage = percentage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_Weather_Overcast_Rain_Default.BP_Weather_Overcast_Rain_Default_C.EndWeatherState
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AFGSkySphere*                                SkySphere                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Weather_Overcast_Rain_Default_C::EndWeatherState(class AFGSkySphere* SkySphere)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weather_Overcast_Rain_Default.BP_Weather_Overcast_Rain_Default_C.EndWeatherState");
		
		ABP_Weather_Overcast_Rain_Default_C_EndWeatherState_Params params {};
		params.SkySphere = SkySphere;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_Weather_Overcast_Rain_Default.BP_Weather_Overcast_Rain_Default_C.TransitionEndWeatherState
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		float                                              dt                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              percentage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Weather_Overcast_Rain_Default_C::TransitionEndWeatherState(float dt, float percentage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weather_Overcast_Rain_Default.BP_Weather_Overcast_Rain_Default_C.TransitionEndWeatherState");
		
		ABP_Weather_Overcast_Rain_Default_C_TransitionEndWeatherState_Params params {};
		params.dt = dt;
		params.percentage = percentage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_Weather_Overcast_Rain_Default.BP_Weather_Overcast_Rain_Default_C.OnTransitionFinished
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bEventFinished                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Weather_Overcast_Rain_Default_C::OnTransitionFinished(bool bEventFinished)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weather_Overcast_Rain_Default.BP_Weather_Overcast_Rain_Default_C.OnTransitionFinished");
		
		ABP_Weather_Overcast_Rain_Default_C_OnTransitionFinished_Params params {};
		params.bEventFinished = bEventFinished;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_Weather_Overcast_Rain_Default.BP_Weather_Overcast_Rain_Default_C.RecheckLocation
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Weather_Overcast_Rain_Default_C::RecheckLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weather_Overcast_Rain_Default.BP_Weather_Overcast_Rain_Default_C.RecheckLocation");
		
		ABP_Weather_Overcast_Rain_Default_C_RecheckLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_Weather_Overcast_Rain_Default.BP_Weather_Overcast_Rain_Default_C.FadeWetness
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Weather_Overcast_Rain_Default_C::FadeWetness()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weather_Overcast_Rain_Default.BP_Weather_Overcast_Rain_Default_C.FadeWetness");
		
		ABP_Weather_Overcast_Rain_Default_C_FadeWetness_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_Weather_Overcast_Rain_Default.BP_Weather_Overcast_Rain_Default_C.BecomeWet
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Weather_Overcast_Rain_Default_C::BecomeWet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weather_Overcast_Rain_Default.BP_Weather_Overcast_Rain_Default_C.BecomeWet");
		
		ABP_Weather_Overcast_Rain_Default_C_BecomeWet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_Weather_Overcast_Rain_Default.BP_Weather_Overcast_Rain_Default_C.ExecuteUbergraph_BP_Weather_Overcast_Rain_Default
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Weather_Overcast_Rain_Default_C::ExecuteUbergraph_BP_Weather_Overcast_Rain_Default(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weather_Overcast_Rain_Default.BP_Weather_Overcast_Rain_Default_C.ExecuteUbergraph_BP_Weather_Overcast_Rain_Default");
		
		ABP_Weather_Overcast_Rain_Default_C_ExecuteUbergraph_BP_Weather_Overcast_Rain_Default_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Weather_Overcast_Rain_Default_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Weather_Overcast_Rain_Default_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Weather_Overcast_Rain_Default.BP_Weather_Overcast_Rain_Default_C");
		return ptr;
	}

}


