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
	 * Function BPCA_JohnnyLaunch.BPCA_JohnnyLaunch_C.SetupAction
	 */
	struct UBPCA_JohnnyLaunch_C_SetupAction_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPCA_JohnnyLaunch.BPCA_JohnnyLaunch_C.OnLeapStarted
	 */
	struct UBPCA_JohnnyLaunch_C_OnLeapStarted_Params
	{	};

	/**
	 * Function BPCA_JohnnyLaunch.BPCA_JohnnyLaunch_C.ActionTick
	 */
	struct UBPCA_JohnnyLaunch_C_ActionTick_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPCA_JohnnyLaunch.BPCA_JohnnyLaunch_C.CleanupAction
	 */
	struct UBPCA_JohnnyLaunch_C_CleanupAction_Params
	{
	public:
		bool                                                       actionSuccess;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPCA_JohnnyLaunch.BPCA_JohnnyLaunch_C.ProcessHit
	 */
	struct UBPCA_JohnnyLaunch_C_ProcessHit_Params
	{
	public:
		class AFGCharacterBase*                                    Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          HitResult;                                               // 0x0008(0x00E8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BPCA_JohnnyLaunch.BPCA_JohnnyLaunch_C.OnCreatureLanded
	 */
	struct UBPCA_JohnnyLaunch_C_OnCreatureLanded_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x00E8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BPCA_JohnnyLaunch.BPCA_JohnnyLaunch_C.ExecuteUbergraph_BPCA_JohnnyLaunch
	 */
	struct UBPCA_JohnnyLaunch_C_ExecuteUbergraph_BPCA_JohnnyLaunch_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VO0S[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
