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
	 * Function BTS_MoveSpeedDistanceToTarget.BTS_MoveSpeedDistanceToTarget_C.GetLocationFromBBKey
	 */
	struct UBTS_MoveSpeedDistanceToTarget_C_GetLocationFromBBKey_Params
	{
	public:
		struct FBlackboardKeySelector                              Key;                                                     // 0x0000(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FVector                                             ReturnValue;                                             // 0x0028(0x0018)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BTS_MoveSpeedDistanceToTarget.BTS_MoveSpeedDistanceToTarget_C.GetMovespeedForDistance
	 */
	struct UBTS_MoveSpeedDistanceToTarget_C_GetMovespeedForDistance_Params
	{
	public:
		double                                                     DistanceSqr;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EMoveSpeed                                                 MoveSpeed;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BTS_MoveSpeedDistanceToTarget.BTS_MoveSpeedDistanceToTarget_C.UpdateTargetDistance
	 */
	struct UBTS_MoveSpeedDistanceToTarget_C_UpdateTargetDistance_Params
	{	};

	/**
	 * Function BTS_MoveSpeedDistanceToTarget.BTS_MoveSpeedDistanceToTarget_C.ReceiveTick
	 */
	struct UBTS_MoveSpeedDistanceToTarget_C_ReceiveTick_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		float                                                      DeltaSeconds;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BTS_MoveSpeedDistanceToTarget.BTS_MoveSpeedDistanceToTarget_C.ReceiveActivation
	 */
	struct UBTS_MoveSpeedDistanceToTarget_C_ReceiveActivation_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BTS_MoveSpeedDistanceToTarget.BTS_MoveSpeedDistanceToTarget_C.ExecuteUbergraph_BTS_MoveSpeedDistanceToTarget
	 */
	struct UBTS_MoveSpeedDistanceToTarget_C_ExecuteUbergraph_BTS_MoveSpeedDistanceToTarget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BHIH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
