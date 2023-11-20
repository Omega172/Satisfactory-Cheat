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
	 * Function BP_GasPillar.BP_GasPillar_C.PlayImpactAudio
	 */
	struct ABP_GasPillar_C_PlayImpactAudio_Params
	{	};

	/**
	 * Function BP_GasPillar.BP_GasPillar_C.ReceiveDestroyed
	 */
	struct ABP_GasPillar_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function BP_GasPillar.BP_GasPillar_C.PlayDestructEffects
	 */
	struct ABP_GasPillar_C_PlayDestructEffects_Params
	{	};

	/**
	 * Function BP_GasPillar.BP_GasPillar_C.OnChaosPhysicsCollision
	 */
	struct ABP_GasPillar_C_OnChaosPhysicsCollision_Params
	{
	public:
		struct FChaosPhysicsCollisionInfo                          CollisionInfo;                                           // 0x0000(0x00C0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_GasPillar.BP_GasPillar_C.ExecuteUbergraph_BP_GasPillar
	 */
	struct ABP_GasPillar_C_ExecuteUbergraph_BP_GasPillar_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UDGK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
