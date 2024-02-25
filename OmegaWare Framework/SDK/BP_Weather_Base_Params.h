#pragma once

/**
 * Name: Satisfactory
 * Version: Early_Access_CL#273254
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
	 * Function BP_Weather_Base.BP_Weather_Base_C.CheckScalability
	 */
	struct ABP_Weather_Base_C_CheckScalability_Params
	{	};

	/**
	 * Function BP_Weather_Base.BP_Weather_Base_C.StartWeatherState
	 */
	struct ABP_Weather_Base_C_StartWeatherState_Params
	{
	public:
		class AFGSkySphere*                                        SkySphere;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Weather_Base.BP_Weather_Base_C.OnStartUsingClouds
	 */
	struct ABP_Weather_Base_C_OnStartUsingClouds_Params
	{
	public:
		class FString                                              updatedCvar;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Weather_Base.BP_Weather_Base_C.TransitionBeginWeatherState
	 */
	struct ABP_Weather_Base_C_TransitionBeginWeatherState_Params
	{
	public:
		float                                                      dt;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      percentage;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Weather_Base.BP_Weather_Base_C.ExecuteUbergraph_BP_Weather_Base
	 */
	struct ABP_Weather_Base_C_ExecuteUbergraph_BP_Weather_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
