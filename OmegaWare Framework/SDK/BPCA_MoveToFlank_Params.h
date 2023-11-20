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
	 * Function BPCA_MoveToFlank.BPCA_MoveToFlank_C.OnMoveFinished_FA44375D41DCADB91D5BD7B172F3CADA
	 */
	struct UBPCA_MoveToFlank_C_OnMoveFinished_FA44375D41DCADB91D5BD7B172F3CADA_Params
	{
	public:
		EPathFollowingResult                                       Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SH8J[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AAIController*                                       AIController;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPCA_MoveToFlank.BPCA_MoveToFlank_C.OnRequestFailed_FA44375D41DCADB91D5BD7B172F3CADA
	 */
	struct UBPCA_MoveToFlank_C_OnRequestFailed_FA44375D41DCADB91D5BD7B172F3CADA_Params
	{	};

	/**
	 * Function BPCA_MoveToFlank.BPCA_MoveToFlank_C.PerformAction
	 */
	struct UBPCA_MoveToFlank_C_PerformAction_Params
	{	};

	/**
	 * Function BPCA_MoveToFlank.BPCA_MoveToFlank_C.OnQueryFinished
	 */
	struct UBPCA_MoveToFlank_C_OnQueryFinished_Params
	{
	public:
		class UEnvQueryInstanceBlueprintWrapper*                   QueryInstance;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		EEnvQueryStatus                                            QueryStatus;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPCA_MoveToFlank.BPCA_MoveToFlank_C.CleanupAction
	 */
	struct UBPCA_MoveToFlank_C_CleanupAction_Params
	{
	public:
		bool                                                       actionSuccess;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPCA_MoveToFlank.BPCA_MoveToFlank_C.ExecuteUbergraph_BPCA_MoveToFlank
	 */
	struct UBPCA_MoveToFlank_C_ExecuteUbergraph_BPCA_MoveToFlank_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
