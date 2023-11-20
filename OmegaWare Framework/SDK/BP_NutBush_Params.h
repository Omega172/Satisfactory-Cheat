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
	 * Function BP_NutBush.BP_NutBush_C.GetDestroyAudioEvent
	 */
	struct ABP_NutBush_C_GetDestroyAudioEvent_Params
	{
	public:
		class UAkAudioEvent*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NutBush.BP_NutBush_C.GetDestroyEffect
	 */
	struct ABP_NutBush_C_GetDestroyEffect_Params
	{
	public:
		class UParticleSystem*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NutBush.BP_NutBush_C.GetForceThreshold
	 */
	struct ABP_NutBush_C_GetForceThreshold_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NutBush.BP_NutBush_C.GetActorChainsawReturn
	 */
	struct ABP_NutBush_C_GetActorChainsawReturn_Params
	{
	public:
		struct FInventoryStack                                     ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_NutBush.BP_NutBush_C.GetMeshComponent
	 */
	struct ABP_NutBush_C_GetMeshComponent_Params
	{
	public:
		class UStaticMeshComponent*                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NutBush.BP_NutBush_C.IsChainsawable
	 */
	struct ABP_NutBush_C_IsChainsawable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NutBush.BP_NutBush_C.ReceiveBeginPlay
	 */
	struct ABP_NutBush_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_NutBush.BP_NutBush_C.UpdateVisiblityState
	 */
	struct ABP_NutBush_C_UpdateVisiblityState_Params
	{	};

	/**
	 * Function BP_NutBush.BP_NutBush_C.SetupItem
	 */
	struct ABP_NutBush_C_SetupItem_Params
	{	};

	/**
	 * Function BP_NutBush.BP_NutBush_C.ExecuteUbergraph_BP_NutBush
	 */
	struct ABP_NutBush_C_ExecuteUbergraph_BP_NutBush_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
