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
	 * Function Build_SpaceElevator.Build_SpaceElevator_C.SetAnimState
	 */
	struct ABuild_SpaceElevator_C_SetAnimState_Params
	{
	public:
		bool                                                       PauseAnims;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_SpaceElevator.Build_SpaceElevator_C.GetBuildEffectTemplate
	 */
	struct ABuild_SpaceElevator_C_GetBuildEffectTemplate_Params
	{	};

	/**
	 * Function Build_SpaceElevator.Build_SpaceElevator_C.GetDefaultRepresentationColor
	 */
	struct ABuild_SpaceElevator_C_GetDefaultRepresentationColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_SpaceElevator.Build_SpaceElevator_C.CamShake_02
	 */
	struct ABuild_SpaceElevator_C_CamShake_02_Params
	{	};

	/**
	 * Function Build_SpaceElevator.Build_SpaceElevator_C.CamShake_03
	 */
	struct ABuild_SpaceElevator_C_CamShake_03_Params
	{	};

	/**
	 * Function Build_SpaceElevator.Build_SpaceElevator_C.CamShake_04
	 */
	struct ABuild_SpaceElevator_C_CamShake_04_Params
	{	};

	/**
	 * Function Build_SpaceElevator.Build_SpaceElevator_C.UpperlineVisible
	 */
	struct ABuild_SpaceElevator_C_UpperlineVisible_Params
	{	};

	/**
	 * Function Build_SpaceElevator.Build_SpaceElevator_C.Event_StartSound
	 */
	struct ABuild_SpaceElevator_C_Event_StartSound_Params
	{	};

	/**
	 * Function Build_SpaceElevator.Build_SpaceElevator_C.ReceiveBeginPlay
	 */
	struct ABuild_SpaceElevator_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Build_SpaceElevator.Build_SpaceElevator_C.OnPhaseChanged
	 */
	struct ABuild_SpaceElevator_C_OnPhaseChanged_Params
	{
	public:
		EGamePhase                                                 gamePhase;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_SpaceElevator.Build_SpaceElevator_C.PlayUpgradeSequence
	 */
	struct ABuild_SpaceElevator_C_PlayUpgradeSequence_Params
	{	};

	/**
	 * Function Build_SpaceElevator.Build_SpaceElevator_C.Event_SE_SendOff
	 */
	struct ABuild_SpaceElevator_C_Event_SE_SendOff_Params
	{	};

	/**
	 * Function Build_SpaceElevator.Build_SpaceElevator_C.ReceiveDestroyed
	 */
	struct ABuild_SpaceElevator_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function Build_SpaceElevator.Build_SpaceElevator_C.ReceiveEndPlay
	 */
	struct ABuild_SpaceElevator_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_SpaceElevator.Build_SpaceElevator_C.CamShake_01
	 */
	struct ABuild_SpaceElevator_C_CamShake_01_Params
	{	};

	/**
	 * Function Build_SpaceElevator.Build_SpaceElevator_C.ForceEndPosition
	 */
	struct ABuild_SpaceElevator_C_ForceEndPosition_Params
	{	};

	/**
	 * Function Build_SpaceElevator.Build_SpaceElevator_C.ExecuteUbergraph_Build_SpaceElevator
	 */
	struct ABuild_SpaceElevator_C_ExecuteUbergraph_Build_SpaceElevator_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CWXT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
