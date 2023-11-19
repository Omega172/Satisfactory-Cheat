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
	 * Function BP_NobeliskCluster.BP_NobeliskCluster_C.ShouldSave
	 */
	struct ABP_NobeliskCluster_C_ShouldSave_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NobeliskCluster.BP_NobeliskCluster_C.GatherDependencies
	 */
	struct ABP_NobeliskCluster_C_GatherDependencies_Params
	{
	public:
		TArray<class UObject*>                                     out_dependentObjects;                                    // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_NobeliskCluster.BP_NobeliskCluster_C.NeedTransform
	 */
	struct ABP_NobeliskCluster_C_NeedTransform_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NobeliskCluster.BP_NobeliskCluster_C.OnImpact
	 */
	struct ABP_NobeliskCluster_C_OnImpact_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x00E8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_NobeliskCluster.BP_NobeliskCluster_C.OnExplode
	 */
	struct ABP_NobeliskCluster_C_OnExplode_Params
	{	};

	/**
	 * Function BP_NobeliskCluster.BP_NobeliskCluster_C.PlayExplosionEffects
	 */
	struct ABP_NobeliskCluster_C_PlayExplosionEffects_Params
	{	};

	/**
	 * Function BP_NobeliskCluster.BP_NobeliskCluster_C.ExecuteUbergraph_BP_NobeliskCluster
	 */
	struct ABP_NobeliskCluster_C_ExecuteUbergraph_BP_NobeliskCluster_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HRSH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
