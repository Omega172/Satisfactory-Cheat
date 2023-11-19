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
	 * Function Char_CrabHatcher.Char_CrabHatcher_C.Should Trigger Hatcher
	 */
	struct AChar_CrabHatcher_C_ShouldTriggerHatcher_Params
	{
	public:
		bool                                                       CanTrigger;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_B1U7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Char_CrabHatcher.Char_CrabHatcher_C.IsConsideredThreat
	 */
	struct AChar_CrabHatcher_C_IsConsideredThreat_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		bool                                                       CanTarget;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_R9G8[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Char_CrabHatcher.Char_CrabHatcher_C.ClearAllThreats
	 */
	struct AChar_CrabHatcher_C_ClearAllThreats_Params
	{	};

	/**
	 * Function Char_CrabHatcher.Char_CrabHatcher_C.RegisterThreat
	 */
	struct AChar_CrabHatcher_C_RegisterThreat_Params
	{
	public:
		class AActor*                                              ThreatActor;                                             // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_CrabHatcher.Char_CrabHatcher_C.SetHatcherVisibility
	 */
	struct AChar_CrabHatcher_C_SetHatcherVisibility_Params
	{
	public:
		bool                                                       NewVisibility;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_CrabHatcher.Char_CrabHatcher_C.SpawnDroppedItem
	 */
	struct AChar_CrabHatcher_C_SpawnDroppedItem_Params
	{	};

	/**
	 * Function Char_CrabHatcher.Char_CrabHatcher_C.SetTickEnabled
	 */
	struct AChar_CrabHatcher_C_SetTickEnabled_Params
	{
	public:
		bool                                                       Enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_CrabHatcher.Char_CrabHatcher_C.CheckRadialDamageBones
	 */
	struct AChar_CrabHatcher_C_CheckRadialDamageBones_Params
	{
	public:
		struct FVector                                             RadialDamageOrigin;                                      // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Instigator;                                              // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       HitAnybone;                                              // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_W8NN[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Char_CrabHatcher.Char_CrabHatcher_C.IsAlive
	 */
	struct AChar_CrabHatcher_C_IsAlive_Params
	{
	public:
		bool                                                       IsAlive;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_CrabHatcher.Char_CrabHatcher_C.DidDamageChildBone
	 */
	struct AChar_CrabHatcher_C_DidDamageChildBone_Params
	{
	public:
		class FName                                                BoneName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class FName>                                        DamageableBones;                                         // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       IsChildOfBone;                                           // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_G2KM[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Char_CrabHatcher.Char_CrabHatcher_C.SelectVisibleMesh
	 */
	struct AChar_CrabHatcher_C_SelectVisibleMesh_Params
	{
	public:
		bool                                                       IsShowingSkeletalMesh;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_CrabHatcher.Char_CrabHatcher_C.IsDamageableBone
	 */
	struct AChar_CrabHatcher_C_IsDamageableBone_Params
	{
	public:
		class FName                                                ItemToFind;                                              // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_CrabHatcher.Char_CrabHatcher_C.TryResetHatcher
	 */
	struct AChar_CrabHatcher_C_TryResetHatcher_Params
	{	};

	/**
	 * Function Char_CrabHatcher.Char_CrabHatcher_C.HasAnyThreatInDisengageRange
	 */
	struct AChar_CrabHatcher_C_HasAnyThreatInDisengageRange_Params
	{
	public:
		bool                                                       HasDamageCauser;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KCJU[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Char_CrabHatcher.Char_CrabHatcher_C.TickSpawnNewWave
	 */
	struct AChar_CrabHatcher_C_TickSpawnNewWave_Params
	{	};

	/**
	 * Function Char_CrabHatcher.Char_CrabHatcher_C.StartNewWave
	 */
	struct AChar_CrabHatcher_C_StartNewWave_Params
	{
	public:
		bool                                                       SpawnAllAtOnce;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_J8G6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FInt32Range                                         EnemiesToSpawn;                                          // 0x0004(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_CrabHatcher.Char_CrabHatcher_C.ShouldSpawnExtraBabies
	 */
	struct AChar_CrabHatcher_C_ShouldSpawnExtraBabies_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_CrabHatcher.Char_CrabHatcher_C.StartBabySpawningTimer
	 */
	struct AChar_CrabHatcher_C_StartBabySpawningTimer_Params
	{	};

	/**
	 * Function Char_CrabHatcher.Char_CrabHatcher_C.StartRespawnTimer
	 */
	struct AChar_CrabHatcher_C_StartRespawnTimer_Params
	{	};

	/**
	 * Function Char_CrabHatcher.Char_CrabHatcher_C.HatcherDeathLogic
	 */
	struct AChar_CrabHatcher_C_HatcherDeathLogic_Params
	{	};

	/**
	 * Function Char_CrabHatcher.Char_CrabHatcher_C.SpawnSingleBaby
	 */
	struct AChar_CrabHatcher_C_SpawnSingleBaby_Params
	{	};

	/**
	 * Function Char_CrabHatcher.Char_CrabHatcher_C.UserConstructionScript
	 */
	struct AChar_CrabHatcher_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Char_CrabHatcher.Char_CrabHatcher_C.ReceiveBeginPlay
	 */
	struct AChar_CrabHatcher_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Char_CrabHatcher.Char_CrabHatcher_C.ReceiveActorBeginOverlap
	 */
	struct AChar_CrabHatcher_C_ReceiveActorBeginOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_CrabHatcher.Char_CrabHatcher_C.TriggerHatcher
	 */
	struct AChar_CrabHatcher_C_TriggerHatcher_Params
	{	};

	/**
	 * Function Char_CrabHatcher.Char_CrabHatcher_C.StartSpawningBabies
	 */
	struct AChar_CrabHatcher_C_StartSpawningBabies_Params
	{	};

	/**
	 * Function Char_CrabHatcher.Char_CrabHatcher_C.ReceiveTick
	 */
	struct AChar_CrabHatcher_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_CrabHatcher.Char_CrabHatcher_C.CheckForRespawn
	 */
	struct AChar_CrabHatcher_C_CheckForRespawn_Params
	{	};

	/**
	 * Function Char_CrabHatcher.Char_CrabHatcher_C.RespawnHatcher
	 */
	struct AChar_CrabHatcher_C_RespawnHatcher_Params
	{	};

	/**
	 * Function Char_CrabHatcher.Char_CrabHatcher_C.Die
	 */
	struct AChar_CrabHatcher_C_Die_Params
	{
	public:
		class AActor*                                              DeadActor;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_CrabHatcher.Char_CrabHatcher_C.OnBabyDied
	 */
	struct AChar_CrabHatcher_C_OnBabyDied_Params
	{
	public:
		class AActor*                                              DeadActor;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		EEndPlayReason                                             EndPlayReason;                                           // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_CrabHatcher.Char_CrabHatcher_C.ReceivePointDamage
	 */
	struct AChar_CrabHatcher_C_ReceivePointDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JZY8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             HitLocation;                                             // 0x0010(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             HitNormal;                                               // 0x0028(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0040(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class FName                                                BoneName;                                                // 0x0048(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             ShotFromDirection;                                       // 0x0050(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AController*                                         InstigatedBy;                                            // 0x0068(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0070(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          HitInfo;                                                 // 0x0078(0x00E8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Char_CrabHatcher.Char_CrabHatcher_C.PlayHitEffects
	 */
	struct AChar_CrabHatcher_C_PlayHitEffects_Params
	{	};

	/**
	 * Function Char_CrabHatcher.Char_CrabHatcher_C.Multicast_PlaySpawnEffects
	 */
	struct AChar_CrabHatcher_C_Multicast_PlaySpawnEffects_Params
	{	};

	/**
	 * Function Char_CrabHatcher.Char_CrabHatcher_C.OnHatcherClosed
	 */
	struct AChar_CrabHatcher_C_OnHatcherClosed_Params
	{	};

	/**
	 * Function Char_CrabHatcher.Char_CrabHatcher_C.PlayDeathEffects
	 */
	struct AChar_CrabHatcher_C_PlayDeathEffects_Params
	{	};

	/**
	 * Function Char_CrabHatcher.Char_CrabHatcher_C.Multicast_PlayRespawnEffects
	 */
	struct AChar_CrabHatcher_C_Multicast_PlayRespawnEffects_Params
	{	};

	/**
	 * Function Char_CrabHatcher.Char_CrabHatcher_C.ReceiveAnyDamage
	 */
	struct AChar_CrabHatcher_C_ReceiveAnyDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YY3Y[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_CrabHatcher.Char_CrabHatcher_C.ReceiveRadialDamage
	 */
	struct AChar_CrabHatcher_C_ReceiveRadialDamage_Params
	{
	public:
		float                                                      DamageReceived;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JBF6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Origin;                                                  // 0x0010(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          HitInfo;                                                 // 0x0028(0x00E8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		class AController*                                         InstigatedBy;                                            // 0x0110(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0118(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_CrabHatcher.Char_CrabHatcher_C.ExecuteUbergraph_Char_CrabHatcher
	 */
	struct AChar_CrabHatcher_C_ExecuteUbergraph_Char_CrabHatcher_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_CrabHatcher.Char_CrabHatcher_C.OnRespawned__DelegateSignature
	 */
	struct AChar_CrabHatcher_C_OnRespawned__DelegateSignature_Params
	{	};

	/**
	 * Function Char_CrabHatcher.Char_CrabHatcher_C.OnHit__DelegateSignature
	 */
	struct AChar_CrabHatcher_C_OnHit__DelegateSignature_Params
	{	};

	/**
	 * Function Char_CrabHatcher.Char_CrabHatcher_C.OnDeath__DelegateSignature
	 */
	struct AChar_CrabHatcher_C_OnDeath__DelegateSignature_Params
	{	};

	/**
	 * Function Char_CrabHatcher.Char_CrabHatcher_C.OnSpawnedBaby__DelegateSignature
	 */
	struct AChar_CrabHatcher_C_OnSpawnedBaby__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
