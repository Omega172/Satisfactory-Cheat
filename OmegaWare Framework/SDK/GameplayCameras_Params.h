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
	 * Function GameplayCameras.LegacyCameraShake.StartLegacyCameraShakeFromSource
	 */
	struct ULegacyCameraShake_StartLegacyCameraShakeFromSource_Params
	{
	public:
		class APlayerCameraManager*                                PlayerCameraManager;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              ShakeClass;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCameraShakeSourceComponent*                         SourceComponent;                                         // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Scale;                                                   // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECameraShakePlaySpace                                      PlaySpace;                                               // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_EDFA[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRotator                                            UserPlaySpaceRot;                                        // 0x0020(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		class ULegacyCameraShake*                                  ReturnValue;                                             // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayCameras.LegacyCameraShake.StartLegacyCameraShake
	 */
	struct ULegacyCameraShake_StartLegacyCameraShake_Params
	{
	public:
		class APlayerCameraManager*                                PlayerCameraManager;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              ShakeClass;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Scale;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECameraShakePlaySpace                                      PlaySpace;                                               // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YBW3[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRotator                                            UserPlaySpaceRot;                                        // 0x0018(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		class ULegacyCameraShake*                                  ReturnValue;                                             // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayCameras.LegacyCameraShake.ReceiveStopShake
	 */
	struct ULegacyCameraShake_ReceiveStopShake_Params
	{
	public:
		bool                                                       bImmediately;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayCameras.LegacyCameraShake.ReceivePlayShake
	 */
	struct ULegacyCameraShake_ReceivePlayShake_Params
	{
	public:
		float                                                      Scale;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayCameras.LegacyCameraShake.ReceiveIsFinished
	 */
	struct ULegacyCameraShake_ReceiveIsFinished_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayCameras.LegacyCameraShake.BlueprintUpdateCameraShake
	 */
	struct ULegacyCameraShake_BlueprintUpdateCameraShake_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Alpha;                                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZWDO[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FMinimalViewInfo                                    POV;                                                     // 0x0010(0x07C0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FMinimalViewInfo                                    ModifiedPOV;                                             // 0x07D0(0x07C0)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayCameras.LegacyCameraShakeFunctionLibrary.Conv_LegacyCameraShake
	 */
	struct ULegacyCameraShakeFunctionLibrary_Conv_LegacyCameraShake_Params
	{
	public:
		class UCameraShakeBase*                                    CameraShake;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ULegacyCameraShake*                                  ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayCameras.CameraAnimationCameraModifier.StopCameraAnimation
	 */
	struct UCameraAnimationCameraModifier_StopCameraAnimation_Params
	{
	public:
		struct FCameraAnimationHandle                              Handle;                                                  // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bImmediate;                                              // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayCameras.CameraAnimationCameraModifier.StopAllCameraAnimationsOf
	 */
	struct UCameraAnimationCameraModifier_StopAllCameraAnimationsOf_Params
	{
	public:
		class UCameraAnimationSequence*                            Sequence;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bImmediate;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayCameras.CameraAnimationCameraModifier.StopAllCameraAnimations
	 */
	struct UCameraAnimationCameraModifier_StopAllCameraAnimations_Params
	{
	public:
		bool                                                       bImmediate;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayCameras.CameraAnimationCameraModifier.PlayCameraAnimation
	 */
	struct UCameraAnimationCameraModifier_PlayCameraAnimation_Params
	{
	public:
		class UCameraAnimationSequence*                            Sequence;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FCameraAnimationParams                              Params;                                                  // 0x0008(0x0040)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FCameraAnimationHandle                              ReturnValue;                                             // 0x0048(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayCameras.CameraAnimationCameraModifier.IsCameraAnimationActive
	 */
	struct UCameraAnimationCameraModifier_IsCameraAnimationActive_Params
	{
	public:
		struct FCameraAnimationHandle                              Handle;                                                  // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifierFromPlayerController
	 */
	struct UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromPlayerController_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCameraAnimationCameraModifier*                      ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifierFromID
	 */
	struct UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromID_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ControllerId;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CMT2[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCameraAnimationCameraModifier*                      ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifier
	 */
	struct UCameraAnimationCameraModifier_GetCameraAnimationCameraModifier_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PlayerIndex;                                             // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2QZN[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCameraAnimationCameraModifier*                      ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayCameras.GameplayCamerasFunctionLibrary.Conv_CameraShakePlaySpace
	 */
	struct UGameplayCamerasFunctionLibrary_Conv_CameraShakePlaySpace_Params
	{
	public:
		ECameraAnimationPlaySpace                                  CameraAnimationPlaySpace;                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECameraShakePlaySpace                                      ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayCameras.GameplayCamerasFunctionLibrary.Conv_CameraAnimationPlaySpace
	 */
	struct UGameplayCamerasFunctionLibrary_Conv_CameraAnimationPlaySpace_Params
	{
	public:
		ECameraShakePlaySpace                                      CameraShakePlaySpace;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECameraAnimationPlaySpace                                  ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayCameras.GameplayCamerasFunctionLibrary.Conv_CameraAnimationCameraModifier
	 */
	struct UGameplayCamerasFunctionLibrary_Conv_CameraAnimationCameraModifier_Params
	{
	public:
		class APlayerCameraManager*                                PlayerCameraManager;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCameraAnimationCameraModifier*                      ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayCameras.GameplayCamerasSubsystem.StopCameraAnimation
	 */
	struct UGameplayCamerasSubsystem_StopCameraAnimation_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FCameraAnimationHandle                              Handle;                                                  // 0x0008(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bImmediate;                                              // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayCameras.GameplayCamerasSubsystem.StopAllCameraAnimationsOf
	 */
	struct UGameplayCamerasSubsystem_StopAllCameraAnimationsOf_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCameraAnimationSequence*                            Sequence;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bImmediate;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayCameras.GameplayCamerasSubsystem.StopAllCameraAnimations
	 */
	struct UGameplayCamerasSubsystem_StopAllCameraAnimations_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bImmediate;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayCameras.GameplayCamerasSubsystem.PlayCameraAnimation
	 */
	struct UGameplayCamerasSubsystem_PlayCameraAnimation_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCameraAnimationSequence*                            Sequence;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FCameraAnimationParams                              Params;                                                  // 0x0010(0x0040)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FCameraAnimationHandle                              ReturnValue;                                             // 0x0050(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayCameras.GameplayCamerasSubsystem.IsCameraAnimationActive
	 */
	struct UGameplayCamerasSubsystem_IsCameraAnimationActive_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FCameraAnimationHandle                              Handle;                                                  // 0x0008(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
