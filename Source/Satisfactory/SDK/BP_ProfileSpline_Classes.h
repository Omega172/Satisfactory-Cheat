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
	 * BlueprintGeneratedClass BP_ProfileSpline.BP_ProfileSpline_C
	 * Size -> 0x003A (FullSize[0x0342] - InheritedSize[0x0308])
	 */
	class ABP_ProfileSpline_C : public ABP_ProfileSplineAbstract_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0308(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       bInitialized;                                            // 0x0310(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NXVL[0x7];                                   // 0x0311(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        FindControllerTimer;                                     // 0x0318(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class AFGPlayerController*                                 FGCharacter;                                             // 0x0320(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        FinalizeSpawningPlayer;                                  // 0x0328(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class ACameraActor*                                        CameraActor;                                             // 0x0330(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		double                                                     CurrentTime;                                             // 0x0338(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsFactory;                                               // 0x0340(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bBlockClouds;                                            // 0x0341(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		struct FTransform GetCurrentView();
		float GetCurrentDuration();
		void GetConsoleVariableByName(const class FString& VariableName, class FString* VariableInput);
		void CheckDoneRespawning(bool* bDoneSpawning);
		void GetPlayerController(bool* bIsValid, class APlayerController** PlayerController);
		void StartProfile();
		void ReceiveTick(float DeltaSeconds);
		void FetchPlayerPawn();
		void EnsurePlayerDoneSpawning();
		void DebugStart();
		void ExecuteUbergraph_BP_ProfileSpline(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
