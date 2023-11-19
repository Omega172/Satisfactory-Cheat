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
	 * Function BP_PortableMiner.BP_PortableMiner_C.GetEquipmentSwatchIndex
	 */
	struct ABP_PortableMiner_C_GetEquipmentSwatchIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PortableMiner.BP_PortableMiner_C.UpdatePrimitiveData
	 */
	struct ABP_PortableMiner_C_UpdatePrimitiveData_Params
	{
	public:
		class AFGBuildableSubsystem*                               Subsystem;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PortableMiner.BP_PortableMiner_C.StopIsLookedAt
	 */
	struct ABP_PortableMiner_C_StopIsLookedAt_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FUseState                                           State;                                                   // 0x0008(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_PortableMiner.BP_PortableMiner_C.StartIsLookedAt
	 */
	struct ABP_PortableMiner_C_StartIsLookedAt_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FUseState                                           State;                                                   // 0x0008(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_PortableMiner.BP_PortableMiner_C.ReceiveDestroyed
	 */
	struct ABP_PortableMiner_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function BP_PortableMiner.BP_PortableMiner_C.ReceiveBeginPlay
	 */
	struct ABP_PortableMiner_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_PortableMiner.BP_PortableMiner_C.UpdatePrimitveColors
	 */
	struct ABP_PortableMiner_C_UpdatePrimitveColors_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PortableMiner.BP_PortableMiner_C.ExecuteUbergraph_BP_PortableMiner
	 */
	struct ABP_PortableMiner_C_ExecuteUbergraph_BP_PortableMiner_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6GGD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
