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
	 * Function BP_CaveFloor.BP_CaveFloor_C.GetEntrenceAndExitIndex
	 */
	struct ABP_CaveFloor_C_GetEntrenceAndExitIndex_Params
	{
	public:
		int32_t                                                    entrence;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Exit;                                                    // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CaveFloor.BP_CaveFloor_C.GetStaticMeshForIndex
	 */
	struct ABP_CaveFloor_C_GetStaticMeshForIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_E9Y6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UStaticMesh*                                         NewParam;                                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CaveFloor.BP_CaveFloor_C.BuildCaveElement
	 */
	struct ABP_CaveFloor_C_BuildCaveElement_Params
	{	};

	/**
	 * Function BP_CaveFloor.BP_CaveFloor_C.UserConstructionScript
	 */
	struct ABP_CaveFloor_C_UserConstructionScript_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
