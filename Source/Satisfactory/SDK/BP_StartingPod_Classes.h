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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_StartingPod.BP_StartingPod_C
	 * Size -> 0x00D0 (FullSize[0x0420] - InheritedSize[0x0350])
	 */
	class ABP_StartingPod_C : public AFGStartingPod
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0350(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UParticleSystemComponent*                            NewBuildingPing;                                         // 0x0358(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Plane;                                                   // 0x0360(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UDecalComponent*                                     Decal2;                                                  // 0x0368(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UDecalComponent*                                     Decal1;                                                  // 0x0370(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpotLightComponent*                                 SpotLight_l;                                             // 0x0378(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpotLightComponent*                                 SpotLight_r;                                             // 0x0380(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPointLightComponent*                                PointLight_roof;                                         // 0x0388(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPointLightComponent*                                PointLight_door;                                         // 0x0390(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline__Direction_F296E599443A3B9A99DDF792AAEF5DED;    // 0x0398(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XEDO[0x7];                                   // 0x0399(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline;                                                // 0x03A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash
		class AFGPlayerController*                                 mCachedPC;                                               // 0x03A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class ALevelSequenceActor*                                 mStartingSequence;                                       // 0x03B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UMediaPlayer*                                        mVideoPlayer;                                            // 0x03B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UBP_MusicManager_C*                                  mMusicManager;                                           // 0x03C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              SkeletalMeshPtr[0x30];                                   // 0x03C8(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		int32_t                                                    CachedFov;                                               // 0x03F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7ZYI[0x4];                                   // 0x03FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              FOVString;                                               // 0x0400(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		double                                                     FovRamptime;                                             // 0x0410(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     FOVTimeToAdjust;                                         // 0x0418(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GatherDependencies(TArray<class UObject*>* out_dependentObjects);
		bool NeedTransform();
		bool ShouldSave();
		struct FLinearColor GetDefaultRepresentationColor();
		void Timeline__FinishedFunc();
		void Timeline__UpdateFunc();
		void OnLoaded_8586F6D040F0FFE03962849F398DB59A(class UObject* Loaded);
		void PostLoadGame(int32_t saveVersion, int32_t GameVersion);
		void PostSaveGame(int32_t saveVersion, int32_t GameVersion);
		void PreLoadGame(int32_t saveVersion, int32_t GameVersion);
		void PreSaveGame(int32_t saveVersion, int32_t GameVersion);
		void StartIsLookedAtForDismantle(class AFGCharacterPlayer* byCharacter);
		void StopIsLookedAtForDismantle(class AFGCharacterPlayer* byCharacter);
		void ReceiveTick(float DeltaSeconds);
		void SetupPodForOwner();
		void SetupPodForObserver();
		void EndCinematic();
		void AK_StopDucking();
		void AK_HalveDucking();
		void ReceiveDestroyed();
		void StartCinematic();
		void OnPlayerSkipIntroSequence();
		void ReceiveBeginPlay();
		void AllowSkipIntro();
		void BlockSkipIntro();
		void ExecuteUbergraph_BP_StartingPod(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
