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
	 * Function BPCA_RelocateToLocation.BPCA_RelocateToLocation_C.GetNavData
	 */
	struct UBPCA_RelocateToLocation_C_GetNavData_Params
	{
	public:
		class ANavigationData*                                     CreatureNavData;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FZ8V[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPCA_RelocateToLocation.BPCA_RelocateToLocation_C.OnFail_8EC9102747ED99E334E29FA2BF89B7E3
	 */
	struct UBPCA_RelocateToLocation_C_OnFail_8EC9102747ED99E334E29FA2BF89B7E3_Params
	{
	public:
		EPathFollowingResult                                       MovementResult;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPCA_RelocateToLocation.BPCA_RelocateToLocation_C.OnSuccess_8EC9102747ED99E334E29FA2BF89B7E3
	 */
	struct UBPCA_RelocateToLocation_C_OnSuccess_8EC9102747ED99E334E29FA2BF89B7E3_Params
	{
	public:
		EPathFollowingResult                                       MovementResult;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPCA_RelocateToLocation.BPCA_RelocateToLocation_C.OnQueryFinished
	 */
	struct UBPCA_RelocateToLocation_C_OnQueryFinished_Params
	{
	public:
		class UEnvQueryInstanceBlueprintWrapper*                   QueryInstance;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		EEnvQueryStatus                                            QueryStatus;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPCA_RelocateToLocation.BPCA_RelocateToLocation_C.CancelAction
	 */
	struct UBPCA_RelocateToLocation_C_CancelAction_Params
	{	};

	/**
	 * Function BPCA_RelocateToLocation.BPCA_RelocateToLocation_C.ActionTick
	 */
	struct UBPCA_RelocateToLocation_C_ActionTick_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPCA_RelocateToLocation.BPCA_RelocateToLocation_C.PerformAction
	 */
	struct UBPCA_RelocateToLocation_C_PerformAction_Params
	{	};

	/**
	 * Function BPCA_RelocateToLocation.BPCA_RelocateToLocation_C.ExecuteUbergraph_BPCA_RelocateToLocation
	 */
	struct UBPCA_RelocateToLocation_C_ExecuteUbergraph_BPCA_RelocateToLocation_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NXLR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
