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
	 * BlueprintGeneratedClass BP_TrainSoundComponent.BP_TrainSoundComponent_C
	 * Size -> 0x0008 (FullSize[0x02E8] - InheritedSize[0x02E0])
	 */
	class UBP_TrainSoundComponent_C : public UFGTrainSoundComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02E0(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void SpeedKmH(double* Speed);
		void OnThrottleReleased();
		void OnThrottleApplied();
		void OnDynamicBrakesReleased();
		void OnAirBrakesReleased();
		void OnStoppedMovingRelay();
		void OnAirBrakesApplied();
		void StartIdleSounds();
		void StopAllSounds();
		void OnDynamicBrakesApplied();
		void OnStartedMoving();
		void OnStoppedMoving();
		void ExecuteUbergraph_BP_TrainSoundComponent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
