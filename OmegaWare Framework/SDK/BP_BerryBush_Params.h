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
	 * Function BP_BerryBush.BP_BerryBush_C.GetDestroyAudioEvent
	 */
	struct ABP_BerryBush_C_GetDestroyAudioEvent_Params
	{
	public:
		class UAkAudioEvent*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BerryBush.BP_BerryBush_C.GetDestroyEffect
	 */
	struct ABP_BerryBush_C_GetDestroyEffect_Params
	{
	public:
		class UParticleSystem*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BerryBush.BP_BerryBush_C.GetForceThreshold
	 */
	struct ABP_BerryBush_C_GetForceThreshold_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BerryBush.BP_BerryBush_C.GetActorChainsawReturn
	 */
	struct ABP_BerryBush_C_GetActorChainsawReturn_Params
	{
	public:
		struct FInventoryStack                                     ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_BerryBush.BP_BerryBush_C.GetMeshComponent
	 */
	struct ABP_BerryBush_C_GetMeshComponent_Params
	{
	public:
		class UStaticMeshComponent*                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BerryBush.BP_BerryBush_C.IsChainsawable
	 */
	struct ABP_BerryBush_C_IsChainsawable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BerryBush.BP_BerryBush_C.OnRep_mBerryIndex
	 */
	struct ABP_BerryBush_C_OnRep_mBerryIndex_Params
	{	};

	/**
	 * Function BP_BerryBush.BP_BerryBush_C.SetupNumBerries
	 */
	struct ABP_BerryBush_C_SetupNumBerries_Params
	{	};

	/**
	 * Function BP_BerryBush.BP_BerryBush_C.SetupMesh
	 */
	struct ABP_BerryBush_C_SetupMesh_Params
	{	};

	/**
	 * Function BP_BerryBush.BP_BerryBush_C.UserConstructionScript
	 */
	struct ABP_BerryBush_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_BerryBush.BP_BerryBush_C.ReceiveBeginPlay
	 */
	struct ABP_BerryBush_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_BerryBush.BP_BerryBush_C.UpdateVisiblityState
	 */
	struct ABP_BerryBush_C_UpdateVisiblityState_Params
	{	};

	/**
	 * Function BP_BerryBush.BP_BerryBush_C.StartIsLookedAt
	 */
	struct ABP_BerryBush_C_StartIsLookedAt_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FUseState                                           State;                                                   // 0x0008(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_BerryBush.BP_BerryBush_C.StopIsLookedAt
	 */
	struct ABP_BerryBush_C_StopIsLookedAt_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FUseState                                           State;                                                   // 0x0008(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_BerryBush.BP_BerryBush_C.ExecuteUbergraph_BP_BerryBush
	 */
	struct ABP_BerryBush_C_ExecuteUbergraph_BP_BerryBush_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
