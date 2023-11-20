#pragma once

/**
 * Name: Satisfactory
 * Version: Early_Access_CL#264901
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_Weather_Overcast_Rain_Default.BP_Weather_Overcast_Rain_Default_C.UpdateRainIntensity
	 */
	struct ABP_Weather_Overcast_Rain_Default_C_UpdateRainIntensity_Params
	{
	public:
		double                                                     Alpha;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Weather_Overcast_Rain_Default.BP_Weather_Overcast_Rain_Default_C.SetCollisionRainSpawnBox
	 */
	struct ABP_Weather_Overcast_Rain_Default_C_SetCollisionRainSpawnBox_Params
	{
	public:
		struct FVector                                             InValue;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Weather_Overcast_Rain_Default.BP_Weather_Overcast_Rain_Default_C.Set Rain Particle Params
	 */
	struct ABP_Weather_Overcast_Rain_Default_C_SetRainParticleParams_Params
	{	};

	/**
	 * Function BP_Weather_Overcast_Rain_Default.BP_Weather_Overcast_Rain_Default_C.SetRainIntensityFar
	 */
	struct ABP_Weather_Overcast_Rain_Default_C_SetRainIntensityFar_Params
	{
	public:
		double                                                     RainIntesnity;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Weather_Overcast_Rain_Default.BP_Weather_Overcast_Rain_Default_C.SetRainVelocity
	 */
	struct ABP_Weather_Overcast_Rain_Default_C_SetRainVelocity_Params
	{
	public:
		struct FVector                                             Param;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Weather_Overcast_Rain_Default.BP_Weather_Overcast_Rain_Default_C.SetRainIntensity
	 */
	struct ABP_Weather_Overcast_Rain_Default_C_SetRainIntensity_Params
	{
	public:
		double                                                     RainIntesnity;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Weather_Overcast_Rain_Default.BP_Weather_Overcast_Rain_Default_C.SetRainFarVelocityMultiplier
	 */
	struct ABP_Weather_Overcast_Rain_Default_C_SetRainFarVelocityMultiplier_Params
	{
	public:
		double                                                     Param;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Weather_Overcast_Rain_Default.BP_Weather_Overcast_Rain_Default_C.SetRainFarAreaSize
	 */
	struct ABP_Weather_Overcast_Rain_Default_C_SetRainFarAreaSize_Params
	{
	public:
		double                                                     Value;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Weather_Overcast_Rain_Default.BP_Weather_Overcast_Rain_Default_C.SetRainAreaSize
	 */
	struct ABP_Weather_Overcast_Rain_Default_C_SetRainAreaSize_Params
	{
	public:
		struct FVector                                             InValue;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Weather_Overcast_Rain_Default.BP_Weather_Overcast_Rain_Default_C.SetCollisionRainSpawnRate
	 */
	struct ABP_Weather_Overcast_Rain_Default_C_SetCollisionRainSpawnRate_Params
	{
	public:
		double                                                     Param;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Weather_Overcast_Rain_Default.BP_Weather_Overcast_Rain_Default_C.StartWeatherState
	 */
	struct ABP_Weather_Overcast_Rain_Default_C_StartWeatherState_Params
	{
	public:
		class AFGSkySphere*                                        SkySphere;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Weather_Overcast_Rain_Default.BP_Weather_Overcast_Rain_Default_C.TransitionBeginWeatherState
	 */
	struct ABP_Weather_Overcast_Rain_Default_C_TransitionBeginWeatherState_Params
	{
	public:
		float                                                      dt;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      percentage;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Weather_Overcast_Rain_Default.BP_Weather_Overcast_Rain_Default_C.EndWeatherState
	 */
	struct ABP_Weather_Overcast_Rain_Default_C_EndWeatherState_Params
	{
	public:
		class AFGSkySphere*                                        SkySphere;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Weather_Overcast_Rain_Default.BP_Weather_Overcast_Rain_Default_C.TransitionEndWeatherState
	 */
	struct ABP_Weather_Overcast_Rain_Default_C_TransitionEndWeatherState_Params
	{
	public:
		float                                                      dt;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      percentage;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Weather_Overcast_Rain_Default.BP_Weather_Overcast_Rain_Default_C.OnTransitionFinished
	 */
	struct ABP_Weather_Overcast_Rain_Default_C_OnTransitionFinished_Params
	{
	public:
		bool                                                       bEventFinished;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Weather_Overcast_Rain_Default.BP_Weather_Overcast_Rain_Default_C.RecheckLocation
	 */
	struct ABP_Weather_Overcast_Rain_Default_C_RecheckLocation_Params
	{	};

	/**
	 * Function BP_Weather_Overcast_Rain_Default.BP_Weather_Overcast_Rain_Default_C.FadeWetness
	 */
	struct ABP_Weather_Overcast_Rain_Default_C_FadeWetness_Params
	{	};

	/**
	 * Function BP_Weather_Overcast_Rain_Default.BP_Weather_Overcast_Rain_Default_C.BecomeWet
	 */
	struct ABP_Weather_Overcast_Rain_Default_C_BecomeWet_Params
	{	};

	/**
	 * Function BP_Weather_Overcast_Rain_Default.BP_Weather_Overcast_Rain_Default_C.ExecuteUbergraph_BP_Weather_Overcast_Rain_Default
	 */
	struct ABP_Weather_Overcast_Rain_Default_C_ExecuteUbergraph_BP_Weather_Overcast_Rain_Default_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
