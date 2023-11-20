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
	 * Function BP_SporeFlower.BP_SporeFlower_C.SetTickStatus
	 */
	struct ABP_SporeFlower_C_SetTickStatus_Params
	{
	public:
		bool                                                       doTick;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9NR0[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_SporeFlower.BP_SporeFlower_C.OnRep_mReplicatedAnimPosition
	 */
	struct ABP_SporeFlower_C_OnRep_mReplicatedAnimPosition_Params
	{	};

	/**
	 * Function BP_SporeFlower.BP_SporeFlower_C.OnRep_mState
	 */
	struct ABP_SporeFlower_C_OnRep_mState_Params
	{	};

	/**
	 * Function BP_SporeFlower.BP_SporeFlower_C.OnRep_mGasState
	 */
	struct ABP_SporeFlower_C_OnRep_mGasState_Params
	{	};

	/**
	 * Function BP_SporeFlower.BP_SporeFlower_C.StopSporeAnimation
	 */
	struct ABP_SporeFlower_C_StopSporeAnimation_Params
	{	};

	/**
	 * Function BP_SporeFlower.BP_SporeFlower_C.UpdateAnimationFromState
	 */
	struct ABP_SporeFlower_C_UpdateAnimationFromState_Params
	{	};

	/**
	 * Function BP_SporeFlower.BP_SporeFlower_C.StartSporeAnimation
	 */
	struct ABP_SporeFlower_C_StartSporeAnimation_Params
	{	};

	/**
	 * Function BP_SporeFlower.BP_SporeFlower_C.GetStatePlayRate
	 */
	struct ABP_SporeFlower_C_GetStatePlayRate_Params
	{
	public:
		double                                                     PlayRate;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SporeFlower.BP_SporeFlower_C.GetOffCooldown
	 */
	struct ABP_SporeFlower_C_GetOffCooldown_Params
	{	};

	/**
	 * Function BP_SporeFlower.BP_SporeFlower_C.StartReleasingGas
	 */
	struct ABP_SporeFlower_C_StartReleasingGas_Params
	{	};

	/**
	 * Function BP_SporeFlower.BP_SporeFlower_C.StopExpanding
	 */
	struct ABP_SporeFlower_C_StopExpanding_Params
	{	};

	/**
	 * Function BP_SporeFlower.BP_SporeFlower_C.StopReleasingGas
	 */
	struct ABP_SporeFlower_C_StopReleasingGas_Params
	{	};

	/**
	 * Function BP_SporeFlower.BP_SporeFlower_C.CondintionallyReverseExpanding
	 */
	struct ABP_SporeFlower_C_CondintionallyReverseExpanding_Params
	{	};

	/**
	 * Function BP_SporeFlower.BP_SporeFlower_C.ConditionallyStartExpanding
	 */
	struct ABP_SporeFlower_C_ConditionallyStartExpanding_Params
	{	};

	/**
	 * Function BP_SporeFlower.BP_SporeFlower_C.ActivateDamage
	 */
	struct ABP_SporeFlower_C_ActivateDamage_Params
	{	};

	/**
	 * Function BP_SporeFlower.BP_SporeFlower_C.BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_SporeFlower_C_BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GWV6[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x00E8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_SporeFlower.BP_SporeFlower_C.BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABP_SporeFlower_C_BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SporeFlower.BP_SporeFlower_C.SpawnGasParticles
	 */
	struct ABP_SporeFlower_C_SpawnGasParticles_Params
	{	};

	/**
	 * Function BP_SporeFlower.BP_SporeFlower_C.ReceiveBeginPlay
	 */
	struct ABP_SporeFlower_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_SporeFlower.BP_SporeFlower_C.UpdateAnimPosition
	 */
	struct ABP_SporeFlower_C_UpdateAnimPosition_Params
	{	};

	/**
	 * Function BP_SporeFlower.BP_SporeFlower_C.ReceiveEndPlay
	 */
	struct ABP_SporeFlower_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SporeFlower.BP_SporeFlower_C.GainedSignificance
	 */
	struct ABP_SporeFlower_C_GainedSignificance_Params
	{	};

	/**
	 * Function BP_SporeFlower.BP_SporeFlower_C.LostSignificance
	 */
	struct ABP_SporeFlower_C_LostSignificance_Params
	{	};

	/**
	 * Function BP_SporeFlower.BP_SporeFlower_C.ReceiveDestroyed
	 */
	struct ABP_SporeFlower_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function BP_SporeFlower.BP_SporeFlower_C.ExecuteUbergraph_BP_SporeFlower
	 */
	struct ABP_SporeFlower_C_ExecuteUbergraph_BP_SporeFlower_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
