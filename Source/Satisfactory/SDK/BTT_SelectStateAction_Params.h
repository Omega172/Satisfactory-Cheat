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
	 * Function BTT_SelectStateAction.BTT_SelectStateAction_C.TryToSelect
	 */
	struct UBTT_SelectStateAction_C_TryToSelect_Params
	{
	public:
		double                                                     ActionScore;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Filter;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_19ZA[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UFGAction*                                           Action;                                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BTT_SelectStateAction.BTT_SelectStateAction_C.SetupAndFilterActions
	 */
	struct UBTT_SelectStateAction_C_SetupAndFilterActions_Params
	{
	public:
		TArray<class UFGAction*>                                   TotalActions;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		TArray<class UFGAction*>                                   FilteredActions;                                         // 0x0010(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function BTT_SelectStateAction.BTT_SelectStateAction_C.PrintInvalidActionWarning
	 */
	struct UBTT_SelectStateAction_C_PrintInvalidActionWarning_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BTT_SelectStateAction.BTT_SelectStateAction_C.ReceiveExecute
	 */
	struct UBTT_SelectStateAction_C_ReceiveExecute_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BTT_SelectStateAction.BTT_SelectStateAction_C.BreakActionSelection
	 */
	struct UBTT_SelectStateAction_C_BreakActionSelection_Params
	{	};

	/**
	 * Function BTT_SelectStateAction.BTT_SelectStateAction_C.ExecuteUbergraph_BTT_SelectStateAction
	 */
	struct UBTT_SelectStateAction_C_ExecuteUbergraph_BTT_SelectStateAction_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
