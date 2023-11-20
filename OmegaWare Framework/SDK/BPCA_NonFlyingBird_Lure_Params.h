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
	 * Function BPCA_NonFlyingBird_Lure.BPCA_NonFlyingBird_Lure_C.SetupAction
	 */
	struct UBPCA_NonFlyingBird_Lure_C_SetupAction_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPCA_NonFlyingBird_Lure.BPCA_NonFlyingBird_Lure_C.CanPerformAction
	 */
	struct UBPCA_NonFlyingBird_Lure_C_CanPerformAction_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPCA_NonFlyingBird_Lure.BPCA_NonFlyingBird_Lure_C.PerformAction
	 */
	struct UBPCA_NonFlyingBird_Lure_C_PerformAction_Params
	{	};

	/**
	 * Function BPCA_NonFlyingBird_Lure.BPCA_NonFlyingBird_Lure_C.CleanupAction
	 */
	struct UBPCA_NonFlyingBird_Lure_C_CleanupAction_Params
	{
	public:
		bool                                                       actionSuccess;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPCA_NonFlyingBird_Lure.BPCA_NonFlyingBird_Lure_C.ExecuteUbergraph_BPCA_NonFlyingBird_Lure
	 */
	struct UBPCA_NonFlyingBird_Lure_C_ExecuteUbergraph_BPCA_NonFlyingBird_Lure_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LL2D[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
