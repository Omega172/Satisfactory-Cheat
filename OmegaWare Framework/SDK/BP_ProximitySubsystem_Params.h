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
	 * Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.Spawn_Fairies_VFX
	 */
	struct ABP_ProximitySubsystem_C_Spawn_Fairies_VFX_Params
	{	};

	/**
	 * Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.Spawn_TitanForest_Ground_VFX
	 */
	struct ABP_ProximitySubsystem_C_Spawn_TitanForest_Ground_VFX_Params
	{
	public:
		bool                                                       IsInCave;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EProximityEffectTypes                                      TypeEnum;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.AmbienceWindDirection
	 */
	struct ABP_ProximitySubsystem_C_AmbienceWindDirection_Params
	{
	public:
		struct FVector                                             FoliageLocation;                                         // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             WindDirection;                                           // 0x0018(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.StartWeatherTimer
	 */
	struct ABP_ProximitySubsystem_C_StartWeatherTimer_Params
	{	};

	/**
	 * Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.IsFoliageWithinAttenuation
	 */
	struct ABP_ProximitySubsystem_C_IsFoliageWithinAttenuation_Params
	{
	public:
		class UAkAudioEvent*                                       AkEvent;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             FoliageLocation;                                         // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsWithinRadius;                                          // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GJ8W[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.SetupAreaAmbienceByFoliageType
	 */
	struct ABP_ProximitySubsystem_C_SetupAreaAmbienceByFoliageType_Params
	{
	public:
		TArray<int32_t>                                            MeshIDs;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		EProximityEffectTypes                                      FoliageType;                                             // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BKR0[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UInstancedStaticMeshComponent*                       InstancedStaticMeshComp;                                 // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             FoliageLocation;                                         // 0x0020(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InstanceId;                                              // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KM50[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.ForecastPredictionOnAreas
	 */
	struct ABP_ProximitySubsystem_C_ForecastPredictionOnAreas_Params
	{	};

	/**
	 * Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.SpawnAkEventSFX
	 */
	struct ABP_ProximitySubsystem_C_SpawnAkEventSFX_Params
	{
	public:
		class UAkAudioEvent*                                       AkEventDay;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UAkAudioEvent*                                       AkEventNight;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             SpawnLocation;                                           // 0x0010(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    FoliageIndex;                                            // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.SpawnCascadeVFX
	 */
	struct ABP_ProximitySubsystem_C_SpawnCascadeVFX_Params
	{
	public:
		class UParticleSystem*                                     CascadeFarDay;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UParticleSystem*                                     CascadeCloseDay;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UParticleSystem*                                     CascadeFarNight;                                         // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UParticleSystem*                                     CascadeCloseNight;                                       // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             SpawnLocation;                                           // 0x0020(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    FoliageIndex;                                            // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ShouldSpawnInAir;                                        // 0x003C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HLZX[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     HeightAboveMesh;                                         // 0x0040(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.SpawnNiagaraVFX
	 */
	struct ABP_ProximitySubsystem_C_SpawnNiagaraVFX_Params
	{
	public:
		class UNiagaraSystem*                                      NiagaraFarDay;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UNiagaraSystem*                                      NiagaraCloseDay;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UNiagaraSystem*                                      NiagaraFarNight;                                         // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UNiagaraSystem*                                      NiagaraCloseNight;                                       // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             SpawnLocation;                                           // 0x0020(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ShouldUseFlipBookIndex;                                  // 0x0038(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VRRK[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    FoliageIndex;                                            // 0x003C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    FlipBookIndex;                                           // 0x0040(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ShouldAdjustSize;                                        // 0x0044(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6BXT[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     Size;                                                    // 0x0048(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       UseSpawnRate;                                            // 0x0050(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_H89B[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     SpawnRate;                                               // 0x0058(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       UsingWindDirection;                                      // 0x0060(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9Z45[0x3];                                   // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.GetFoliageID
	 */
	struct ABP_ProximitySubsystem_C_GetFoliageID_Params
	{
	public:
		TArray<int32_t>                                            FoliageIDs;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    ChosenFoliageID;                                         // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    GetFoliageIndex;                                         // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.StartDynamicSFXAmbienceTimer
	 */
	struct ABP_ProximitySubsystem_C_StartDynamicSFXAmbienceTimer_Params
	{	};

	/**
	 * Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.StartAmbienceTimer
	 */
	struct ABP_ProximitySubsystem_C_StartAmbienceTimer_Params
	{	};

	/**
	 * Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.SFXSwitchOnEnteredArea
	 */
	struct ABP_ProximitySubsystem_C_SFXSwitchOnEnteredArea_Params
	{	};

	/**
	 * Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.SetEcoSystemByArea
	 */
	struct ABP_ProximitySubsystem_C_SetEcoSystemByArea_Params
	{
	public:
		int32_t                                                    TypeOfEcoSystemInt;                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AQKZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.CalculateEcoSystemByInt
	 */
	struct ABP_ProximitySubsystem_C_CalculateEcoSystemByInt_Params
	{
	public:
		int32_t                                                    Bushes;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Trees;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Rocks;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Flowers;                                                 // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    totalAmount;                                             // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TypeOfEcoSystem;                                         // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.CheckAreaDynamicDensity
	 */
	struct ABP_ProximitySubsystem_C_CheckAreaDynamicDensity_Params
	{
	public:
		double                                                     AreaRadius;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    AmountOfBushes;                                          // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    AmountOfTrees;                                           // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    AmountOfRocks;                                           // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    AmountOfFlowers;                                         // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    totalAmount;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.CheckSFXDynamicAreaAmbience
	 */
	struct ABP_ProximitySubsystem_C_CheckSFXDynamicAreaAmbience_Params
	{	};

	/**
	 * Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.RemoveContainedSFXIndex
	 */
	struct ABP_ProximitySubsystem_C_RemoveContainedSFXIndex_Params
	{
	public:
		TArray<int32_t>                                            SFXArray;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    ContainedLifeID;                                         // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.CheckContainedSFXCachedInstances
	 */
	struct ABP_ProximitySubsystem_C_CheckContainedSFXCachedInstances_Params
	{
	public:
		int32_t                                                    MaxSFXInstances;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.CheckContainedCachedInstances
	 */
	struct ABP_ProximitySubsystem_C_CheckContainedCachedInstances_Params
	{
	public:
		int32_t                                                    MaxAmbienceInstances;                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.RandomBackwardDirectionalVector
	 */
	struct ABP_ProximitySubsystem_C_RandomBackwardDirectionalVector_Params
	{
	public:
		class AFGFoliageRemovalSubsystem*                          FoliageRemovalSystem;                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             RandomDirectionalBackwardVector;                         // 0x0008(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.CheckAreaDensityByType
	 */
	struct ABP_ProximitySubsystem_C_CheckAreaDensityByType_Params
	{
	public:
		double                                                     AreaRadius;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ModBy;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ModBushes;                                               // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ModTrees;                                                // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ModRocks;                                                // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ModFlowers;                                              // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    totalAmount;                                             // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.OnEnteredNewArea
	 */
	struct ABP_ProximitySubsystem_C_OnEnteredNewArea_Params
	{	};

	/**
	 * Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.RemoveContainedFoliageIndex
	 */
	struct ABP_ProximitySubsystem_C_RemoveContainedFoliageIndex_Params
	{
	public:
		TArray<int32_t>                                            LifeArray;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    ContainedLifeID;                                         // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.CheckAreaDensity
	 */
	struct ABP_ProximitySubsystem_C_CheckAreaDensity_Params
	{
	public:
		double                                                     AreaRadius;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ModBy;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LX0P[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             SearchLocation;                                          // 0x0010(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    CalculatedAmount;                                        // 0x0028(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.SpawnEffectsOnFoliageNewLocation
	 */
	struct ABP_ProximitySubsystem_C_SpawnEffectsOnFoliageNewLocation_Params
	{
	public:
		class UInstancedStaticMeshComponent*                       Foliage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InstanceId;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GL18[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             FoliageOriginalLocation;                                 // 0x0010(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             FoliageTransformedLocation;                              // 0x0028(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.SetupSingleSFXFoliageType
	 */
	struct ABP_ProximitySubsystem_C_SetupSingleSFXFoliageType_Params
	{
	public:
		TArray<int32_t>                                            MeshIndex;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		EProximityEffectTypes                                      FoliageType;                                             // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_O9G4[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UInstancedStaticMeshComponent*                       StaticMeshCompReference;                                 // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             FoliageLocation;                                         // 0x0020(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InstanceId;                                              // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DVEH[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.CheckSingleLocationSFX
	 */
	struct ABP_ProximitySubsystem_C_CheckSingleLocationSFX_Params
	{	};

	/**
	 * Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.RandomForwardDirectionalVector
	 */
	struct ABP_ProximitySubsystem_C_RandomForwardDirectionalVector_Params
	{
	public:
		class AFGFoliageRemovalSubsystem*                          FoliageRemovalSystem;                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             RandomDirectionalForwardVector;                          // 0x0008(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.CheckSingleLocationAmbience
	 */
	struct ABP_ProximitySubsystem_C_CheckSingleLocationAmbience_Params
	{	};

	/**
	 * Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.SetupSingleAmbienceByFoliageType
	 */
	struct ABP_ProximitySubsystem_C_SetupSingleAmbienceByFoliageType_Params
	{
	public:
		TArray<int32_t>                                            MeshIDs;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		EProximityEffectTypes                                      FoliageType;                                             // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JWMS[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UInstancedStaticMeshComponent*                       InstancedStaticMeshComp;                                 // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             FoliageLocation;                                         // 0x0020(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InstanceId;                                              // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ENAF[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.IsFoliageInSight
	 */
	struct ABP_ProximitySubsystem_C_IsFoliageInSight_Params
	{
	public:
		struct FVector                                             FoliageLocation;                                         // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsFoliageInSight;                                        // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_C83P[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.CheckAreaAmbience
	 */
	struct ABP_ProximitySubsystem_C_CheckAreaAmbience_Params
	{	};

	/**
	 * Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.IsFoliageNear
	 */
	struct ABP_ProximitySubsystem_C_IsFoliageNear_Params
	{
	public:
		struct FVector                                             FoliageLocation;                                         // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     SetDistanceForNearRadius;                                // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       isNear;                                                  // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1H7Q[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.SetupAreaSFXFoliageType
	 */
	struct ABP_ProximitySubsystem_C_SetupAreaSFXFoliageType_Params
	{
	public:
		TArray<int32_t>                                            MeshIndex;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		EProximityEffectTypes                                      FoliageType;                                             // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D65G[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UInstancedStaticMeshComponent*                       StaticMeshCompReference;                                 // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    IstanceID;                                               // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PGG8[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             FoliageLocation;                                         // 0x0028(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.Spawn_FireFlies_VFX
	 */
	struct ABP_ProximitySubsystem_C_Spawn_FireFlies_VFX_Params
	{	};

	/**
	 * Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.Spawn_Flies_VFX
	 */
	struct ABP_ProximitySubsystem_C_Spawn_Flies_VFX_Params
	{	};

	/**
	 * Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.Spawn_Ground_Scatter_VFX
	 */
	struct ABP_ProximitySubsystem_C_Spawn_Ground_Scatter_VFX_Params
	{
	public:
		bool                                                       IsInCave;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SESR[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.WorldAndForwardVector_Func
	 */
	struct ABP_ProximitySubsystem_C_WorldAndForwardVector_Func_Params
	{
	public:
		class AFGFoliageRemovalSubsystem*                          FoliageRemovalSystem;                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             SpawnLocation_Near;                                      // 0x0008(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             SpawnLocation_Far;                                       // 0x0020(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.Spawn_Falling_VFX
	 */
	struct ABP_ProximitySubsystem_C_Spawn_Falling_VFX_Params
	{
	public:
		class AFGFoliageRemovalSubsystem*                          FoliageRemovalSystem;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.Spawn_Scatter_Flying_VFX
	 */
	struct ABP_ProximitySubsystem_C_Spawn_Scatter_Flying_VFX_Params
	{
	public:
		struct FVector                                             TreeLocation;                                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsInCave;                                               // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2V96[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.Spawn_Beetles_01_VFX
	 */
	struct ABP_ProximitySubsystem_C_Spawn_Beetles_01_VFX_Params
	{	};

	/**
	 * Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.DuneDesert_AmbientLife_VFX
	 */
	struct ABP_ProximitySubsystem_C_DuneDesert_AmbientLife_VFX_Params
	{	};

	/**
	 * Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.Spawn_Butterflies_VFX
	 */
	struct ABP_ProximitySubsystem_C_Spawn_Butterflies_VFX_Params
	{	};

	/**
	 * Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.Spawn_NearVFX
	 */
	struct ABP_ProximitySubsystem_C_Spawn_NearVFX_Params
	{
	public:
		class AFGFoliageRemovalSubsystem*                          FoliageRemovalSystem;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.Spawn_FarVFX
	 */
	struct ABP_ProximitySubsystem_C_Spawn_FarVFX_Params
	{	};

	/**
	 * Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.GetValueByQuality
	 */
	struct ABP_ProximitySubsystem_C_GetValueByQuality_Params
	{
	public:
		double                                                     Low;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     Medium;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     High;                                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     Ultra;                                                   // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     UltraPlus;                                               // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.UpdateQualitySettings
	 */
	struct ABP_ProximitySubsystem_C_UpdateQualitySettings_Params
	{
	public:
		class FString                                              Property;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.SetupQuality
	 */
	struct ABP_ProximitySubsystem_C_SetupQuality_Params
	{	};

	/**
	 * Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.SetupMapAreaEffect
	 */
	struct ABP_ProximitySubsystem_C_SetupMapAreaEffect_Params
	{
	public:
		class UClass*                                              NewArea;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.EnterAreaTimer
	 */
	struct ABP_ProximitySubsystem_C_EnterAreaTimer_Params
	{	};

	/**
	 * Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.OnEnteredMapArea
	 */
	struct ABP_ProximitySubsystem_C_OnEnteredMapArea_Params
	{
	public:
		class AFGPlayerControllerBase*                             PlayerController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              NewArea;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.Spawn_AmbientLife_Far
	 */
	struct ABP_ProximitySubsystem_C_Spawn_AmbientLife_Far_Params
	{	};

	/**
	 * Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.ReceiveTick
	 */
	struct ABP_ProximitySubsystem_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.Spawn_AmbientLife_Near
	 */
	struct ABP_ProximitySubsystem_C_Spawn_AmbientLife_Near_Params
	{	};

	/**
	 * Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.Spawn_FallingLeaves
	 */
	struct ABP_ProximitySubsystem_C_Spawn_FallingLeaves_Params
	{	};

	/**
	 * Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.ReceiveBeginPlay
	 */
	struct ABP_ProximitySubsystem_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.isDayTime
	 */
	struct ABP_ProximitySubsystem_C_isDayTime_Params
	{
	public:
		bool                                                       isDayTime;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.OnPawnChanged
	 */
	struct ABP_ProximitySubsystem_C_OnPawnChanged_Params
	{
	public:
		class APawn*                                               NewPawn;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.ReceiveEndPlay
	 */
	struct ABP_ProximitySubsystem_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.ExecuteUbergraph_BP_ProximitySubsystem
	 */
	struct ABP_ProximitySubsystem_C_ExecuteUbergraph_BP_ProximitySubsystem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_V8UP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
