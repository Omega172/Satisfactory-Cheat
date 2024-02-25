#pragma once

/**
 * Name: Satisfactory
 * Version: Early_Access_CL#273254
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
	 * Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents
	 */
	struct UChaosDestructionListener_SortTrailingEvents_Params
	{
	public:
		TArray<struct FChaosTrailingEventData>                     TrailingEvents;                                          // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		EChaosTrailingSortMethod                                   SortMethod;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCollectionEngine.ChaosDestructionListener.SortRemovalEvents
	 */
	struct UChaosDestructionListener_SortRemovalEvents_Params
	{
	public:
		TArray<struct FChaosRemovalEventData>                      RemovalEvents;                                           // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		EChaosRemovalSortMethod                                    SortMethod;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents
	 */
	struct UChaosDestructionListener_SortCollisionEvents_Params
	{
	public:
		TArray<struct FChaosCollisionEventData>                    CollisionEvents;                                         // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		EChaosCollisionSortMethod                                  SortMethod;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents
	 */
	struct UChaosDestructionListener_SortBreakingEvents_Params
	{
	public:
		TArray<struct FChaosBreakingEventData>                     BreakingEvents;                                          // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		EChaosBreakingSortMethod                                   SortMethod;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings
	 */
	struct UChaosDestructionListener_SetTrailingEventRequestSettings_Params
	{
	public:
		struct FChaosTrailingEventRequestSettings                  InSettings;                                              // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled
	 */
	struct UChaosDestructionListener_SetTrailingEventEnabled_Params
	{
	public:
		bool                                                       bIsEnabled;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCollectionEngine.ChaosDestructionListener.SetRemovalEventRequestSettings
	 */
	struct UChaosDestructionListener_SetRemovalEventRequestSettings_Params
	{
	public:
		struct FChaosRemovalEventRequestSettings                   InSettings;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCollectionEngine.ChaosDestructionListener.SetRemovalEventEnabled
	 */
	struct UChaosDestructionListener_SetRemovalEventEnabled_Params
	{
	public:
		bool                                                       bIsEnabled;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings
	 */
	struct UChaosDestructionListener_SetCollisionEventRequestSettings_Params
	{
	public:
		struct FChaosCollisionEventRequestSettings                 InSettings;                                              // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled
	 */
	struct UChaosDestructionListener_SetCollisionEventEnabled_Params
	{
	public:
		bool                                                       bIsEnabled;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings
	 */
	struct UChaosDestructionListener_SetBreakingEventRequestSettings_Params
	{
	public:
		struct FChaosBreakingEventRequestSettings                  InSettings;                                              // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled
	 */
	struct UChaosDestructionListener_SetBreakingEventEnabled_Params
	{
	public:
		bool                                                       bIsEnabled;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor
	 */
	struct UChaosDestructionListener_RemoveGeometryCollectionActor_Params
	{
	public:
		class AGeometryCollectionActor*                            GeometryCollectionActor;                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor
	 */
	struct UChaosDestructionListener_RemoveChaosSolverActor_Params
	{
	public:
		class AChaosSolverActor*                                   ChaosSolverActor;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCollectionEngine.ChaosDestructionListener.IsEventListening
	 */
	struct UChaosDestructionListener_IsEventListening_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor
	 */
	struct UChaosDestructionListener_AddGeometryCollectionActor_Params
	{
	public:
		class AGeometryCollectionActor*                            GeometryCollectionActor;                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor
	 */
	struct UChaosDestructionListener_AddChaosSolverActor_Params
	{
	public:
		class AChaosSolverActor*                                   ChaosSolverActor;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle
	 */
	struct AGeometryCollectionActor_RaycastSingle_Params
	{
	public:
		struct FVector                                             Start;                                                   // 0x0000(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             End;                                                     // 0x0018(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitResult                                          OutHit;                                                  // 0x0030(0x00E8)  (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0118(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCollectionEngine.GeometryCollectionComponent.SetRestCollection
	 */
	struct UGeometryCollectionComponent_SetRestCollection_Params
	{
	public:
		class UGeometryCollection*                                 RestCollectionIn;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyRemovals
	 */
	struct UGeometryCollectionComponent_SetNotifyRemovals_Params
	{
	public:
		bool                                                       bNewNotifyRemovals;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyCrumblings
	 */
	struct UGeometryCollectionComponent_SetNotifyCrumblings_Params
	{
	public:
		bool                                                       bNewNotifyCrumblings;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bNewCrumblingEventIncludesChildren;                      // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks
	 */
	struct UGeometryCollectionComponent_SetNotifyBreaks_Params
	{
	public:
		bool                                                       bNewNotifyBreaks;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCollectionEngine.GeometryCollectionComponent.SetEnableDamageFromCollision
	 */
	struct UGeometryCollectionComponent_SetEnableDamageFromCollision_Params
	{
	public:
		bool                                                       bValue;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCollectionEngine.GeometryCollectionComponent.SetAnchoredByTransformedBox
	 */
	struct UGeometryCollectionComponent_SetAnchoredByTransformedBox_Params
	{
	public:
		struct FBox                                                Box;                                                     // 0x0000(0x0038)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GRRW[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Transform;                                               // 0x0040(0x0060)  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAnchored;                                               // 0x00A0(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_FRH2[0x3];                                   // 0x00A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    MaxLevel;                                                // 0x00A4(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCollectionEngine.GeometryCollectionComponent.SetAnchoredByIndex
	 */
	struct UGeometryCollectionComponent_SetAnchoredByIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAnchored;                                               // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCollectionEngine.GeometryCollectionComponent.SetAnchoredByBox
	 */
	struct UGeometryCollectionComponent_SetAnchoredByBox_Params
	{
	public:
		struct FBox                                                WorldSpaceBox;                                           // 0x0000(0x0038)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bAnchored;                                               // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TIPL[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    MaxLevel;                                                // 0x003C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCollectionEngine.GeometryCollectionComponent.RemoveAllAnchors
	 */
	struct UGeometryCollectionComponent_RemoveAllAnchors_Params
	{	};

	/**
	 * Function GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision
	 */
	struct UGeometryCollectionComponent_ReceivePhysicsCollision_Params
	{
	public:
		struct FChaosPhysicsCollisionInfo                          CollisionInfo;                                           // 0x0000(0x00C0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature
	 */
	struct UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsStateChange__DelegateSignature_Params
	{
	public:
		class UGeometryCollectionComponent*                        FracturedComponent;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature
	 */
	struct UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature_Params
	{
	public:
		class UGeometryCollectionComponent*                        FracturedComponent;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCollectionEngine.GeometryCollectionComponent.GetRootIndex
	 */
	struct UGeometryCollectionComponent_GetRootIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCollectionEngine.GeometryCollectionComponent.GetMassAndExtents
	 */
	struct UGeometryCollectionComponent_GetMassAndExtents_Params
	{
	public:
		int32_t                                                    ItemIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OutMass;                                                 // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FBox                                                OutExtents;                                              // 0x0008(0x0038)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCollectionEngine.GeometryCollectionComponent.GetLocalBounds
	 */
	struct UGeometryCollectionComponent_GetLocalBounds_Params
	{
	public:
		struct FBox                                                ReturnValue;                                             // 0x0000(0x0038)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCollectionEngine.GeometryCollectionComponent.GetInitialLevel
	 */
	struct UGeometryCollectionComponent_GetInitialLevel_Params
	{
	public:
		int32_t                                                    ItemIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCollectionEngine.GeometryCollectionComponent.GetDebugInfo
	 */
	struct UGeometryCollectionComponent_GetDebugInfo_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCollectionEngine.GeometryCollectionComponent.CrumbleCluster
	 */
	struct UGeometryCollectionComponent_CrumbleCluster_Params
	{
	public:
		int32_t                                                    ItemIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCollectionEngine.GeometryCollectionComponent.CrumbleActiveClusters
	 */
	struct UGeometryCollectionComponent_CrumbleActiveClusters_Params
	{	};

	/**
	 * Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField
	 */
	struct UGeometryCollectionComponent_ApplyPhysicsField_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGeometryCollectionPhysicsTypeEnum                         Target;                                                  // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_24VI[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UFieldSystemMetaData*                                MetaData;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFieldNodeBase*                                      Field;                                                   // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyLinearVelocity
	 */
	struct UGeometryCollectionComponent_ApplyLinearVelocity_Params
	{
	public:
		int32_t                                                    ItemIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_PNI2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             LinearVelocity;                                          // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField
	 */
	struct UGeometryCollectionComponent_ApplyKinematicField_Params
	{
	public:
		float                                                      Radius;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6VUY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Position;                                                // 0x0008(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyInternalStrain
	 */
	struct UGeometryCollectionComponent_ApplyInternalStrain_Params
	{
	public:
		int32_t                                                    ItemIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_E1GA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Location;                                                // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Radius;                                                  // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PropagationDepth;                                        // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      PropagationFactor;                                       // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Strain;                                                  // 0x002C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyExternalStrain
	 */
	struct UGeometryCollectionComponent_ApplyExternalStrain_Params
	{
	public:
		int32_t                                                    ItemIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LV21[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Location;                                                // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Radius;                                                  // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PropagationDepth;                                        // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      PropagationFactor;                                       // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Strain;                                                  // 0x002C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyBreakingLinearVelocity
	 */
	struct UGeometryCollectionComponent_ApplyBreakingLinearVelocity_Params
	{
	public:
		int32_t                                                    ItemIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_F93K[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             LinearVelocity;                                          // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyBreakingAngularVelocity
	 */
	struct UGeometryCollectionComponent_ApplyBreakingAngularVelocity_Params
	{
	public:
		int32_t                                                    ItemIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_EKMZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             AngularVelocity;                                         // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyAngularVelocity
	 */
	struct UGeometryCollectionComponent_ApplyAngularVelocity_Params
	{
	public:
		int32_t                                                    ItemIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DHC0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             AngularVelocity;                                         // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
