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
	 * Function BPCA_EatCreatureFood.BPCA_EatCreatureFood_C.CanPerformAction
	 */
	struct UBPCA_EatCreatureFood_C_CanPerformAction_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPCA_EatCreatureFood.BPCA_EatCreatureFood_C.OnFail_4FAD94544D2A6D37380427B7044188E7
	 */
	struct UBPCA_EatCreatureFood_C_OnFail_4FAD94544D2A6D37380427B7044188E7_Params
	{
	public:
		EPathFollowingResult                                       MovementResult;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPCA_EatCreatureFood.BPCA_EatCreatureFood_C.OnSuccess_4FAD94544D2A6D37380427B7044188E7
	 */
	struct UBPCA_EatCreatureFood_C_OnSuccess_4FAD94544D2A6D37380427B7044188E7_Params
	{
	public:
		EPathFollowingResult                                       MovementResult;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPCA_EatCreatureFood.BPCA_EatCreatureFood_C.PerformAction
	 */
	struct UBPCA_EatCreatureFood_C_PerformAction_Params
	{	};

	/**
	 * Function BPCA_EatCreatureFood.BPCA_EatCreatureFood_C.OnCreatureFoodQueryFinished
	 */
	struct UBPCA_EatCreatureFood_C_OnCreatureFoodQueryFinished_Params
	{
	public:
		class UEnvQueryInstanceBlueprintWrapper*                   QueryInstance;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		EEnvQueryStatus                                            QueryStatus;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPCA_EatCreatureFood.BPCA_EatCreatureFood_C.MoveToFood
	 */
	struct UBPCA_EatCreatureFood_C_MoveToFood_Params
	{
	public:
		class AActor*                                              FoodActor;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPCA_EatCreatureFood.BPCA_EatCreatureFood_C.EatFood
	 */
	struct UBPCA_EatCreatureFood_C_EatFood_Params
	{
	public:
		class AActor*                                              FoodActor;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPCA_EatCreatureFood.BPCA_EatCreatureFood_C.CancelAction
	 */
	struct UBPCA_EatCreatureFood_C_CancelAction_Params
	{	};

	/**
	 * Function BPCA_EatCreatureFood.BPCA_EatCreatureFood_C.ActionTick
	 */
	struct UBPCA_EatCreatureFood_C_ActionTick_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPCA_EatCreatureFood.BPCA_EatCreatureFood_C.CleanupAction
	 */
	struct UBPCA_EatCreatureFood_C_CleanupAction_Params
	{
	public:
		bool                                                       actionSuccess;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPCA_EatCreatureFood.BPCA_EatCreatureFood_C.ExecuteUbergraph_BPCA_EatCreatureFood
	 */
	struct UBPCA_EatCreatureFood_C_ExecuteUbergraph_BPCA_EatCreatureFood_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DNYT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
