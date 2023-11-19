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
	 * BlueprintGeneratedClass Equip_HoverPack.Equip_HoverPack_C
	 * Size -> 0x0051 (FullSize[0x05C1] - InheritedSize[0x0570])
	 */
	class AEquip_HoverPack_C : public AFGHoverPack
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0570(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USkeletalMeshComponent*                              SK_1pHoverPack_01;                                       // 0x0578(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        mHoverPackActiveTimer;                                   // 0x0580(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		double                                                     mCurrentPlayerVelocity;                                  // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAkComponent*                                        mHoverPackActiveSFX;                                     // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		double                                                     mCurrentMouseDelta;                                      // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAkComponent*                                        m_SlowFallingSFX;                                        // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            mScreenMaterial;                                         // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        mHoverpackJoystickTimer;                                 // 0x05B0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		double                                                     mCurrentBatteryPowerLevel;                               // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EHoverPackMode                                             m_PreviousHoverMode;                                     // 0x05C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetShowInfoUntilFuelPercentIsFull(bool* ReturnVaule);
		void GetOverwriteTickRate(double* TickRate);
		bool GetShowLowFuelWarning();
		bool GetIsBoomBoxPlaying();
		void GetCurrentBoomBoxTape(class UClass** mTapeData);
		void GetObjectScannerTarget(class UClass** ScannableItemDescriptor);
		void GetHoverPackMode(EHoverPackMode* Mode);
		bool GetHoverPackHasPower();
		void GetHoverPackDistance(double* Value);
		void GetHUD_ESlotClass(class UClass** Class);
		void GetAmmoAmount(int32_t* AmmoCurrent, int32_t* AmmoMax);
		bool GetUpdateOnTick();
		void GetAmmoDescriptor(class UClass** AmmoClass);
		void GetFuelDescriptor(class UClass** Class);
		void GetFuelPercent(double* Value);
		bool GetIsBurningFuel();
		bool GetAlwaysShowContent();
		void GetRangeWarningNrmlzdDistThreshold(double* RangeWarningNormalizedDistanceThreshold);
		void IsHoverpackHovering(bool* IsHovering);
		void GetHoverpackStates(EHoverPackMode* HoverpackState);
		void GetConnectionDistance(double* ConnectionDistance);
		void GetMaxConnectionDistance(double* ConnectionMaxDistance);
		void GetPowerConnectionBool(bool* IsConnected);
		void GetCurrentNormalisedConnectionDistance(double* NormalisedConnectionDistance);
		void GetHUDBoxWidget(class UClass** WidgetClass);
		void PlayHoverSound();
		void CheckBatteryPowerLevelSlowFalling();
		void StopEngineSound();
		void StopSlowFallingSound();
		void Update_Connection_VFX();
		void NewConnection_VFX(const struct FVector& NewPowerPoleLocation);
		void SetIsHoveringSwitch();
		void PlayFallingSound();
		void UpdateRailSurf();
		void UpdateHover();
		void UpdateControllerMouseDelta();
		void PlaySlowFallingSound();
		void UpdatePlayerSpeedRTPC();
		void OnPowerConnectionLocationUpdated(const struct FVector& NewLocation);
		void WasUnEquipped();
		void UpdateJoystickScreen();
		void OnHoverModeChanged(EHoverPackMode NewMode);
		void HoverPackSFXHover();
		void HoverPackSFXInactive();
		void HoverPackSFXSlowFalling();
		void HoverPackSFXRailSurfing();
		void WasEquipped();
		void OnConnectionStatusUpdated(bool HasConnection);
		void TriggerHoverActiveAnimation();
		void TriggerDeActivateHoverAnimation();
		void SetupJoystickMaterial();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_Equip_HoverPack(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
