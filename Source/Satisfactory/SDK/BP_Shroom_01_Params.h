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
	 * Function BP_Shroom_01.BP_Shroom_01_C.GetDestroyAudioEvent
	 */
	struct ABP_Shroom_01_C_GetDestroyAudioEvent_Params
	{
	public:
		class UAkAudioEvent*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Shroom_01.BP_Shroom_01_C.GetDestroyEffect
	 */
	struct ABP_Shroom_01_C_GetDestroyEffect_Params
	{
	public:
		class UParticleSystem*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Shroom_01.BP_Shroom_01_C.GetForceThreshold
	 */
	struct ABP_Shroom_01_C_GetForceThreshold_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Shroom_01.BP_Shroom_01_C.UserConstructionScript
	 */
	struct ABP_Shroom_01_C_UserConstructionScript_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
