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
	 * Function BuildEffect_Default.BuildEffect_Default_C.SpawnCostEffectActor
	 */
	struct ABuildEffect_Default_C_SpawnCostEffectActor_Params
	{
	public:
		struct FTransform                                          SpawnLocation;                                           // 0x0000(0x0060)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             TargetLocation;                                          // 0x0060(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TargetExtent;                                            // 0x0078(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0TUV[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              Item;                                                    // 0x0080(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BuildEffect_Default.BuildEffect_Default_C.OnReached
	 */
	struct ABuildEffect_Default_C_OnReached_Params
	{	};

	/**
	 * Function BuildEffect_Default.BuildEffect_Default_C.PlayThumbSound
	 */
	struct ABuildEffect_Default_C_PlayThumbSound_Params
	{	};

	/**
	 * Function BuildEffect_Default.BuildEffect_Default_C.ReceiveBeginPlay
	 */
	struct ABuildEffect_Default_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BuildEffect_Default.BuildEffect_Default_C.UpdateSplineVFX
	 */
	struct ABuildEffect_Default_C_UpdateSplineVFX_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BuildEffect_Default.BuildEffect_Default_C.ExecuteUbergraph_BuildEffect_Default
	 */
	struct ABuildEffect_Default_C_ExecuteUbergraph_BuildEffect_Default_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
