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
	 * Function Controller_NonFlyingBird.Controller_NonFlyingBird_C.IsActorConsideredThreat
	 */
	struct AController_NonFlyingBird_C_IsActorConsideredThreat_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Controller_NonFlyingBird.Controller_NonFlyingBird_C.SetLuring
	 */
	struct AController_NonFlyingBird_C_SetLuring_Params
	{
	public:
		bool                                                       inLuring;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Controller_NonFlyingBird.Controller_NonFlyingBird_C.MakePanic
	 */
	struct AController_NonFlyingBird_C_MakePanic_Params
	{	};

	/**
	 * Function Controller_NonFlyingBird.Controller_NonFlyingBird_C.ExecuteUbergraph_Controller_NonFlyingBird
	 */
	struct AController_NonFlyingBird_C_ExecuteUbergraph_Controller_NonFlyingBird_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
