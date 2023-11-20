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
	 * BlueprintGeneratedClass BP_MusicManager.BP_MusicManager_C
	 * Size -> 0x00F8 (FullSize[0x0160] - InheritedSize[0x0068])
	 */
	class UBP_MusicManager_C : public UFGMusicManager
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0068(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FName                                                mOverworldState;                                         // 0x0070(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mPreviousCaveParameter;                                  // 0x0078(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mIsInCombatRelay;                                        // 0x0080(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HOZQ[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<bool>                                               mCombatStateBuffer;                                      // 0x0088(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       mIsInCombat;                                             // 0x0098(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mCurrentySetCombat;                                      // 0x0099(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KIQS[0x6];                                   // 0x009A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        mCombatBufferTimer;                                      // 0x00A0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TMap<class FName, class FName>                             mHasVisitedAreaConverter;                                // 0x00A8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		class FName                                                mCachedVisitedArea;                                      // 0x00F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                mCurrentVisitedArea;                                     // 0x0100(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mUpdateOnLoadedWorld;                                    // 0x0108(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mIsTimeBufferingNewArea;                                 // 0x0109(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_L392[0x6];                                   // 0x010A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAudioEvent*                                       mWorldMusicEvent;                                        // 0x0110(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TArray<class FString>                                      mBassStemName;                                           // 0x0118(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      mIntrStemName;                                           // 0x0128(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FTimerHandle                                        mSwampTimer;                                             // 0x0138(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class FString                                              mCurrentSwampBassStem;                                   // 0x0140(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              mCurrentSwampIntrStem;                                   // 0x0150(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash

	public:
		void CheckSwampTimer();
		void InitSwampStem();
		void CheckSwampStem();
		void InitializeOverworldStateOnBegin(class AFGPlayerControllerBase* PlayerController, class UClass* mapArea);
		void UpdateOnMusicBuffer();
		void CheckOnVisitedArea(const class FName& UniqueZoneName);
		void UpdateCombatBuffer();
		void NotifyInit(class UWorld* loadedWorld, class AWorldSettings* WorldSettings);
		void OnCombatStatusChanged(bool inCombat);
		void CombatBufferUpdate();
		void CheckMapAreaOnExit(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo);
		void UpdateVisitedAreaName(const class FName& ZoneName);
		void InitializeWorldMusic(class AFGPlayerControllerBase* PlayerController, class UClass* mapArea);
		void OnPlayerEnteredArea(class AFGPlayerControllerBase* PlayerController, class UClass* mapArea);
		void OnPlayerNearBaseChanged(bool isNear);
		void Stop();
		void ExecuteUbergraph_BP_MusicManager(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
