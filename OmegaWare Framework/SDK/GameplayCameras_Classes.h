﻿#pragma once

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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class GameplayCameras.LegacyCameraShake
	 * Size -> 0x0124 (FullSize[0x0210] - InheritedSize[0x00EC])
	 */
	class ULegacyCameraShake : public UCameraShakeBase
	{
	public:
		float                                                      OscillationBlendInTime;                                  // 0x00EC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OscillationBlendOutTime;                                 // 0x00F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FROscillator                                        RotOscillation;                                          // 0x00F4(0x0024) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FVOscillator                                        LocOscillation;                                          // 0x0118(0x0024) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FFOscillator                                        FOVOscillation;                                          // 0x013C(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		float                                                      AnimPlayRate;                                            // 0x0148(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnimScale;                                               // 0x014C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnimBlendInTime;                                         // 0x0150(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnimBlendOutTime;                                        // 0x0154(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RandomAnimSegmentDuration;                               // 0x0158(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QVPD[0x4];                                   // 0x015C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCameraAnimationSequence*                            AnimSequence;                                            // 0x0160(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRandomAnimSegment : 1;                                  // 0x0168(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KPX6[0x3];                                   // 0x0169(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OscillatorTimeRemaining;                                 // 0x016C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_026O[0x70];                                  // 0x0170(0x0070) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USequenceCameraShakePattern*                         SequenceShakePattern;                                    // 0x01E0(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WDZ6[0x28];                                  // 0x01E8(0x0028) MISSED OFFSET (PADDING)

	public:
		class ULegacyCameraShake* STATIC_StartLegacyCameraShakeFromSource(class APlayerCameraManager* PlayerCameraManager, class UClass* ShakeClass, class UCameraShakeSourceComponent* SourceComponent, float Scale, ECameraShakePlaySpace PlaySpace, const struct FRotator& UserPlaySpaceRot);
		class ULegacyCameraShake* STATIC_StartLegacyCameraShake(class APlayerCameraManager* PlayerCameraManager, class UClass* ShakeClass, float Scale, ECameraShakePlaySpace PlaySpace, const struct FRotator& UserPlaySpaceRot);
		void ReceiveStopShake(bool bImmediately);
		void ReceivePlayShake(float Scale);
		bool ReceiveIsFinished();
		void BlueprintUpdateCameraShake(float DeltaTime, float Alpha, const struct FMinimalViewInfo& POV, struct FMinimalViewInfo* ModifiedPOV);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayCameras.LegacyCameraShakePattern
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULegacyCameraShakePattern : public UCameraShakePattern
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayCameras.LegacyCameraShakeFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULegacyCameraShakeFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class ULegacyCameraShake* STATIC_Conv_LegacyCameraShake(class UCameraShakeBase* CameraShake);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayCameras.CameraAnimationCameraModifier
	 * Size -> 0x0018 (FullSize[0x0060] - InheritedSize[0x0048])
	 */
	class UCameraAnimationCameraModifier : public UCameraModifier
	{
	public:
		TArray<struct FActiveCameraAnimationInfo>                  ActiveAnimations;                                        // 0x0048(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		uint16_t                                                   NextInstanceSerialNumber;                                // 0x0058(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IDG4[0x6];                                   // 0x005A(0x0006) MISSED OFFSET (PADDING)

	public:
		void StopCameraAnimation(const struct FCameraAnimationHandle& Handle, bool bImmediate);
		void StopAllCameraAnimationsOf(class UCameraAnimationSequence* Sequence, bool bImmediate);
		void StopAllCameraAnimations(bool bImmediate);
		struct FCameraAnimationHandle PlayCameraAnimation(class UCameraAnimationSequence* Sequence, const struct FCameraAnimationParams& Params);
		bool IsCameraAnimationActive(const struct FCameraAnimationHandle& Handle);
		class UCameraAnimationCameraModifier* STATIC_GetCameraAnimationCameraModifierFromPlayerController(class APlayerController* PlayerController);
		class UCameraAnimationCameraModifier* STATIC_GetCameraAnimationCameraModifierFromID(class UObject* WorldContextObject, int32_t ControllerId);
		class UCameraAnimationCameraModifier* STATIC_GetCameraAnimationCameraModifier(class UObject* WorldContextObject, int32_t PlayerIndex);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayCameras.GameplayCamerasFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGameplayCamerasFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		ECameraShakePlaySpace STATIC_Conv_CameraShakePlaySpace(ECameraAnimationPlaySpace CameraAnimationPlaySpace);
		ECameraAnimationPlaySpace STATIC_Conv_CameraAnimationPlaySpace(ECameraShakePlaySpace CameraShakePlaySpace);
		class UCameraAnimationCameraModifier* STATIC_Conv_CameraAnimationCameraModifier(class APlayerCameraManager* PlayerCameraManager);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayCameras.CompositeCameraShakePattern
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UCompositeCameraShakePattern : public UCameraShakePattern
	{
	public:
		TArray<class UCameraShakePattern*>                         ChildPatterns;                                           // 0x0028(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_01W5[0x10];                                  // 0x0038(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayCameras.DefaultCameraShakeBase
	 * Size -> 0x0004 (FullSize[0x00F0] - InheritedSize[0x00EC])
	 */
	class UDefaultCameraShakeBase : public UCameraShakeBase
	{
	public:
		unsigned char                                              UnknownData_G1WM[0x4];                                   // 0x00EC(0x0004) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayCameras.GameplayCamerasSubsystem
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UGameplayCamerasSubsystem : public UWorldSubsystem
	{
	public:
		void StopCameraAnimation(class APlayerController* PlayerController, const struct FCameraAnimationHandle& Handle, bool bImmediate);
		void StopAllCameraAnimationsOf(class APlayerController* PlayerController, class UCameraAnimationSequence* Sequence, bool bImmediate);
		void StopAllCameraAnimations(class APlayerController* PlayerController, bool bImmediate);
		struct FCameraAnimationHandle PlayCameraAnimation(class APlayerController* PlayerController, class UCameraAnimationSequence* Sequence, const struct FCameraAnimationParams& Params);
		bool IsCameraAnimationActive(class APlayerController* PlayerController, const struct FCameraAnimationHandle& Handle);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayCameras.SimpleCameraShakePattern
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class USimpleCameraShakePattern : public UCameraShakePattern
	{
	public:
		float                                                      Duration;                                                // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendInTime;                                             // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendOutTime;                                            // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0HHD[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayCameras.PerlinNoiseCameraShakePattern
	 * Size -> 0x0080 (FullSize[0x00B8] - InheritedSize[0x0038])
	 */
	class UPerlinNoiseCameraShakePattern : public USimpleCameraShakePattern
	{
	public:
		float                                                      LocationAmplitudeMultiplier;                             // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LocationFrequencyMultiplier;                             // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPerlinNoiseShaker                                  X;                                                       // 0x0040(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FPerlinNoiseShaker                                  Y;                                                       // 0x0048(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FPerlinNoiseShaker                                  Z;                                                       // 0x0050(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		float                                                      RotationAmplitudeMultiplier;                             // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotationFrequencyMultiplier;                             // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPerlinNoiseShaker                                  Pitch;                                                   // 0x0060(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FPerlinNoiseShaker                                  Yaw;                                                     // 0x0068(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FPerlinNoiseShaker                                  Roll;                                                    // 0x0070(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FPerlinNoiseShaker                                  FOV;                                                     // 0x0078(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U5NB[0x38];                                  // 0x0080(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayCameras.TestCameraShake
	 * Size -> 0x0004 (FullSize[0x00F0] - InheritedSize[0x00EC])
	 */
	class UTestCameraShake : public UCameraShakeBase
	{
	public:
		unsigned char                                              UnknownData_8SIQ[0x4];                                   // 0x00EC(0x0004) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayCameras.ConstantCameraShakePattern
	 * Size -> 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
	 */
	class UConstantCameraShakePattern : public USimpleCameraShakePattern
	{
	public:
		struct FVector                                             LocationOffset;                                          // 0x0038(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            RotationOffset;                                          // 0x0050(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayCameras.WaveOscillatorCameraShakePattern
	 * Size -> 0x00A0 (FullSize[0x00D8] - InheritedSize[0x0038])
	 */
	class UWaveOscillatorCameraShakePattern : public USimpleCameraShakePattern
	{
	public:
		float                                                      LocationAmplitudeMultiplier;                             // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LocationFrequencyMultiplier;                             // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FWaveOscillator                                     X;                                                       // 0x0040(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FWaveOscillator                                     Y;                                                       // 0x004C(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FWaveOscillator                                     Z;                                                       // 0x0058(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		float                                                      RotationAmplitudeMultiplier;                             // 0x0064(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotationFrequencyMultiplier;                             // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FWaveOscillator                                     Pitch;                                                   // 0x006C(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FWaveOscillator                                     Yaw;                                                     // 0x0078(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FWaveOscillator                                     Roll;                                                    // 0x0084(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FWaveOscillator                                     FOV;                                                     // 0x0090(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5QCX[0x3C];                                  // 0x009C(0x003C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
