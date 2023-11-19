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
	 * Function BP_Planet_02.BP_Planet_02_C.ShouldSave
	 */
	struct ABP_Planet_02_C_ShouldSave_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Planet_02.BP_Planet_02_C.GatherDependencies
	 */
	struct ABP_Planet_02_C_GatherDependencies_Params
	{
	public:
		TArray<class UObject*>                                     out_dependentObjects;                                    // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_Planet_02.BP_Planet_02_C.NeedTransform
	 */
	struct ABP_Planet_02_C_NeedTransform_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Planet_02.BP_Planet_02_C.ConstructSubBody
	 */
	struct ABP_Planet_02_C_ConstructSubBody_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_395O[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Planet_02.BP_Planet_02_C.RotationPerDay
	 */
	struct ABP_Planet_02_C_RotationPerDay_Params
	{
	public:
		double                                                     Degrees;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Planet_02.BP_Planet_02_C.GetTimeOfDaySubsystem
	 */
	struct ABP_Planet_02_C_GetTimeOfDaySubsystem_Params
	{
	public:
		class AFGTimeOfDaySubsystem*                               TimeSubsystem;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Planet_02.BP_Planet_02_C.UpdateLocation
	 */
	struct ABP_Planet_02_C_UpdateLocation_Params
	{	};

	/**
	 * Function BP_Planet_02.BP_Planet_02_C.UpdateMaterialParameters
	 */
	struct ABP_Planet_02_C_UpdateMaterialParameters_Params
	{	};

	/**
	 * Function BP_Planet_02.BP_Planet_02_C.UserConstructionScript
	 */
	struct ABP_Planet_02_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Planet_02.BP_Planet_02_C.PostLoadGame
	 */
	struct ABP_Planet_02_C_PostLoadGame_Params
	{
	public:
		int32_t                                                    saveVersion;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    GameVersion;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Planet_02.BP_Planet_02_C.PostSaveGame
	 */
	struct ABP_Planet_02_C_PostSaveGame_Params
	{
	public:
		int32_t                                                    saveVersion;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    GameVersion;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Planet_02.BP_Planet_02_C.PreLoadGame
	 */
	struct ABP_Planet_02_C_PreLoadGame_Params
	{
	public:
		int32_t                                                    saveVersion;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    GameVersion;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Planet_02.BP_Planet_02_C.ReceiveBeginPlay
	 */
	struct ABP_Planet_02_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Planet_02.BP_Planet_02_C.ReceiveTick
	 */
	struct ABP_Planet_02_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Planet_02.BP_Planet_02_C.UpdatePreview
	 */
	struct ABP_Planet_02_C_UpdatePreview_Params
	{	};

	/**
	 * Function BP_Planet_02.BP_Planet_02_C.PreSaveGame
	 */
	struct ABP_Planet_02_C_PreSaveGame_Params
	{
	public:
		int32_t                                                    saveVersion;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    GameVersion;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Planet_02.BP_Planet_02_C.SetMovementMultiplier
	 */
	struct ABP_Planet_02_C_SetMovementMultiplier_Params
	{
	public:
		float                                                      Multiplier;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Planet_02.BP_Planet_02_C.EnableMovement
	 */
	struct ABP_Planet_02_C_EnableMovement_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Planet_02.BP_Planet_02_C.SetPosition
	 */
	struct ABP_Planet_02_C_SetPosition_Params
	{
	public:
		float                                                      pct;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Planet_02.BP_Planet_02_C.ExecuteUbergraph_BP_Planet_02
	 */
	struct ABP_Planet_02_C_ExecuteUbergraph_BP_Planet_02_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
