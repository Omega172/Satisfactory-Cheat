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
	 * Function BP_StartingPod.BP_StartingPod_C.GatherDependencies
	 */
	struct ABP_StartingPod_C_GatherDependencies_Params
	{
	public:
		TArray<class UObject*>                                     out_dependentObjects;                                    // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_StartingPod.BP_StartingPod_C.NeedTransform
	 */
	struct ABP_StartingPod_C_NeedTransform_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_StartingPod.BP_StartingPod_C.ShouldSave
	 */
	struct ABP_StartingPod_C_ShouldSave_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_StartingPod.BP_StartingPod_C.GetDefaultRepresentationColor
	 */
	struct ABP_StartingPod_C_GetDefaultRepresentationColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_StartingPod.BP_StartingPod_C.Timeline__FinishedFunc
	 */
	struct ABP_StartingPod_C_Timeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_StartingPod.BP_StartingPod_C.Timeline__UpdateFunc
	 */
	struct ABP_StartingPod_C_Timeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_StartingPod.BP_StartingPod_C.OnLoaded_8586F6D040F0FFE03962849F398DB59A
	 */
	struct ABP_StartingPod_C_OnLoaded_8586F6D040F0FFE03962849F398DB59A_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_StartingPod.BP_StartingPod_C.PostLoadGame
	 */
	struct ABP_StartingPod_C_PostLoadGame_Params
	{
	public:
		int32_t                                                    saveVersion;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    GameVersion;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_StartingPod.BP_StartingPod_C.PostSaveGame
	 */
	struct ABP_StartingPod_C_PostSaveGame_Params
	{
	public:
		int32_t                                                    saveVersion;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    GameVersion;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_StartingPod.BP_StartingPod_C.PreLoadGame
	 */
	struct ABP_StartingPod_C_PreLoadGame_Params
	{
	public:
		int32_t                                                    saveVersion;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    GameVersion;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_StartingPod.BP_StartingPod_C.PreSaveGame
	 */
	struct ABP_StartingPod_C_PreSaveGame_Params
	{
	public:
		int32_t                                                    saveVersion;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    GameVersion;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_StartingPod.BP_StartingPod_C.StartIsLookedAtForDismantle
	 */
	struct ABP_StartingPod_C_StartIsLookedAtForDismantle_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_StartingPod.BP_StartingPod_C.StopIsLookedAtForDismantle
	 */
	struct ABP_StartingPod_C_StopIsLookedAtForDismantle_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_StartingPod.BP_StartingPod_C.ReceiveTick
	 */
	struct ABP_StartingPod_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_StartingPod.BP_StartingPod_C.SetupPodForOwner
	 */
	struct ABP_StartingPod_C_SetupPodForOwner_Params
	{	};

	/**
	 * Function BP_StartingPod.BP_StartingPod_C.SetupPodForObserver
	 */
	struct ABP_StartingPod_C_SetupPodForObserver_Params
	{	};

	/**
	 * Function BP_StartingPod.BP_StartingPod_C.EndCinematic
	 */
	struct ABP_StartingPod_C_EndCinematic_Params
	{	};

	/**
	 * Function BP_StartingPod.BP_StartingPod_C.AK_StopDucking
	 */
	struct ABP_StartingPod_C_AK_StopDucking_Params
	{	};

	/**
	 * Function BP_StartingPod.BP_StartingPod_C.AK_HalveDucking
	 */
	struct ABP_StartingPod_C_AK_HalveDucking_Params
	{	};

	/**
	 * Function BP_StartingPod.BP_StartingPod_C.ReceiveDestroyed
	 */
	struct ABP_StartingPod_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function BP_StartingPod.BP_StartingPod_C.StartCinematic
	 */
	struct ABP_StartingPod_C_StartCinematic_Params
	{	};

	/**
	 * Function BP_StartingPod.BP_StartingPod_C.OnPlayerSkipIntroSequence
	 */
	struct ABP_StartingPod_C_OnPlayerSkipIntroSequence_Params
	{	};

	/**
	 * Function BP_StartingPod.BP_StartingPod_C.ReceiveBeginPlay
	 */
	struct ABP_StartingPod_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_StartingPod.BP_StartingPod_C.AllowSkipIntro
	 */
	struct ABP_StartingPod_C_AllowSkipIntro_Params
	{	};

	/**
	 * Function BP_StartingPod.BP_StartingPod_C.BlockSkipIntro
	 */
	struct ABP_StartingPod_C_BlockSkipIntro_Params
	{	};

	/**
	 * Function BP_StartingPod.BP_StartingPod_C.ExecuteUbergraph_BP_StartingPod
	 */
	struct ABP_StartingPod_C_ExecuteUbergraph_BP_StartingPod_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
