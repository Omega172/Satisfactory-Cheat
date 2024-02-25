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
	 * BlueprintGeneratedClass Equip_BoomBox.Equip_BoomBox_C
	 * Size -> 0x0068 (FullSize[0x04F8] - InheritedSize[0x0490])
	 */
	class AEquip_BoomBox_C : public AFGEquipmentBoomBox
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0490(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0498(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        mShowCycleTapeMenuTimer;                                 // 0x04A0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        mShowControlMenuTimer;                                   // 0x04A8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UObject*                                             mBoomBoxControlMenu;                                     // 0x04B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UAkComponent*                                        mTurboBass;                                              // 0x04B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		double                                                     mCachedGameTime;                                         // 0x04C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<double>                                             mMorseSegments;                                          // 0x04C8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    mMorseIndex;                                             // 0x04D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SY4O[0x4];                                   // 0x04DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBPW_BoomBox_C*                                      mBoomBoxWidget;                                          // 0x04E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		bool                                                       mInspectTrigger;                                         // 0x04E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_M1W8[0x7];                                   // 0x04E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkComponent*                                        m_SFXAnimations;                                         // 0x04F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash

	public:
		void GetShowInfoUntilFuelPercentIsFull(bool* ReturnVaule);
		void GetOverwriteTickRate(double* TickRate);
		bool GetShowLowFuelWarning();
		bool GetIsBoomBoxPlaying();
		void GetCurrentBoomBoxTape(class UClass** mTapeData);
		void GetHUD_ESlotClass(class UClass** Class);
		void GetAmmoAmount(int32_t* AmmoCurrent, int32_t* AmmoMax);
		bool GetUpdateOnTick();
		void GetAmmoDescriptor(class UClass** AmmoClass);
		void GetFuelDescriptor(class UClass** Class);
		void GetFuelPercent(double* Value);
		bool GetIsBurningFuel();
		bool GetAlwaysShowContent();
		void GetHoverPackDistance(double* Value);
		bool GetHoverPackHasPower();
		void GetHoverPackMode(EHoverPackMode* Mode);
		void GetObjectScannerTarget(class UClass** ScannableItemDescriptor);
		void EasterEggMorseCode();
		void FireEasterEgg();
		void PlayTapAnimation();
		void FireTurboBassLogic();
		void FireTurboBassEffects();
		void CurrentTapeChanged(class UClass* currentTape);
		void PlaybackPositionUpdate(float CurrentPosition, float TotalDuration);
		void PlaybackStateChanged(int32_t NewState);
		void RepeatModeChanged(EBoomBoxRepeatMode NewMode);
		void CurrentSongChanged(const struct FSongData& currentSong, int32_t Index);
		void BoomBoxModeChanged(EBoomBoxMode NewMode);
		void WasEquipped();
		void WasUnEquipped();
		void AudioVolumeChanged(float Volume);
		void OnMenuOpen();
		void OnBeginTurbobassSequence();
		void ExecuteUbergraph_Equip_BoomBox(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
