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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_DroneTransport.BP_DroneTransport_C
	 * Size -> 0x0081 (FullSize[0x0731] - InheritedSize[0x06B0])
	 */
	class ABP_DroneTransport_C : public AFGDroneTransport
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x06B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		EDroneFlyingMode                                           m_PreviousFlyingMode;                                    // 0x06B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       m_IsBraking;                                             // 0x06B9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BKOS[0x6];                                   // 0x06BA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            mVFX_Fan_l_01;                                           // 0x06C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            mVFX_Fan_l_02;                                           // 0x06C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            mVFX_Fan_r_01;                                           // 0x06D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            mVFX_Fan_r_02;                                           // 0x06D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsFlying;                                               // 0x06E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bEnableTick;                                             // 0x06E1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1X67[0x6];                                   // 0x06E2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            mVFX_Thruster_l_01;                                      // 0x06E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            mVFX_Thruster_r_01;                                      // 0x06F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		double                                                     mOffsetTimer;                                            // 0x06F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAkComponent*                                        mSFXDroneDockingPlatform;                                // 0x0700(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UAkComponent*                                        mSFXDroneTakeOffPlatform;                                // 0x0708(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UAkComponent*                                        m_SFXDroneBlastOff;                                      // 0x0710(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UAkComponent*                                        m_SFXDroneDecending;                                     // 0x0718(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UAkComponent*                                        m_SFXDroneTakeOffSequence;                               // 0x0720(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UAkComponent*                                        m_SFXDroneDockingSequence;                               // 0x0728(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		EDroneDockingState                                         m_CurrentDockingState;                                   // 0x0730(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		struct FLinearColor GetDefaultRepresentationColor();
		void TurnOffAllThrusters(double Float);
		void SetThrusterMesh_Values_VFX();
		void KillCurrentMontage();
		void CheckDecendingStatusSound();
		void LostSignificanceSound();
		void GainSignificanceSound();
		void DecendingBrakeSound();
		void CheckTakeOffStatusSound();
		void StopBlastOffSound();
		void PlayBlastOffSound();
		void PlayTakeOffSoundSequence(double Time);
		void PlayDockingSoundSequence(double Time);
		void KillThruster_VFX();
		void UpdateThruster_VFX(double Float, bool bAleadyFlying, bool bReveresed);
		void SpawnThruster_VFX();
		void TriggerAnimationTakeOffBool();
		void TriggerAnimationDockingBool();
		void PlayDockingPlatformSound(double Time);
		void PlayTakeOffPlatformSound(double Time);
		void PlayTakeOffAnimationAndTime(double mTime);
		void PlayDockingAnimationAndTime(double mTime);
		void UpdateFan_VFX(double Float, bool bAleadyFlying, bool bReveresed);
		void KillFan_VFX();
		void SpawnFan_VFX();
		void OnFlyingModeChange(EDroneFlyingMode NewFlyingMode, unsigned char NewParam1, unsigned char* NewParam);
		void OnFlyingModeChanged(EDroneFlyingMode NewMode);
		void StartDockingSequence(class AFGBuildableDroneStation* Station);
		void StartTakeoffSequence(class AFGBuildableDroneStation* Station);
		void DockingTimerEvent();
		void TakeOffTimerEvent();
		void OnBrakingStateChanged(bool IsBraking);
		void ReceiveBeginPlay();
		void GainedSignificance();
		void LostSignificance();
		void ReceiveTick(float DeltaSeconds);
		void TickForDrone();
		void Start_FX();
		void Deactivate_FX();
		void TickForDeactivateDrone();
		void OnDockingStateChanged(EDroneDockingState NewState, float TimeSinceChanged);
		void TickForThrusters();
		void StartThrusters();
		void TickVFX();
		void ReceiveDestroyed();
		void UpdateThrusterRate();
		void TurnOffThrusters();
		void TickForTurnOffThrusters();
		void ExecuteUbergraph_BP_DroneTransport(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
