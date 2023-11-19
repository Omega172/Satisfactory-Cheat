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
	 * Function BP_EventSubsystem.BP_EventSubsystem_C.GetPossedCharacters
	 */
	struct ABP_EventSubsystem_C_GetPossedCharacters_Params
	{
	public:
		TArray<class APawn*>                                       outPawns;                                                // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_EventSubsystem.BP_EventSubsystem_C.ReceiveBeginPlay
	 */
	struct ABP_EventSubsystem_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_EventSubsystem.BP_EventSubsystem_C.SpawnGift
	 */
	struct ABP_EventSubsystem_C_SpawnGift_Params
	{	};

	/**
	 * Function BP_EventSubsystem.BP_EventSubsystem_C.PurchasedSchematicDelegate_Event_1
	 */
	struct ABP_EventSubsystem_C_PurchasedSchematicDelegate_Event_1_Params
	{
	public:
		class UClass*                                              purchasedSchematic;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EventSubsystem.BP_EventSubsystem_C.Reduce
	 */
	struct ABP_EventSubsystem_C_Reduce_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EventSubsystem.BP_EventSubsystem_C.ExecuteUbergraph_BP_EventSubsystem
	 */
	struct ABP_EventSubsystem_C_ExecuteUbergraph_BP_EventSubsystem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1X2N[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
