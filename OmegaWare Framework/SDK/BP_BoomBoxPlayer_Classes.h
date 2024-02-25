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
	 * BlueprintGeneratedClass BP_BoomBoxPlayer.BP_BoomBoxPlayer_C
	 * Size -> 0x0010 (FullSize[0x0570] - InheritedSize[0x0560])
	 */
	class ABP_BoomBoxPlayer_C : public AFGBoomBoxPlayer
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0560(0x0008) ZeroConstructor, Transient, DuplicateTransient
		double                                                     maxAudioPower;                                           // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnBusMeteringInfoUpdate(const struct FAkBusMeteringInfo& MeteringInfo);
		void PlayAnim(class UAnimMontage* AnimCharacter1p, class UAnimMontage* AnimCharacter3p, class UCameraAnimationSequence* CameraAnim, class UAnimMontage* AnimBoomBox1p, class UAnimMontage* AnimBoomBox3p, class AFGCharacterPlayer* Instigator, bool* bBoomBoxAnimSkipped);
		bool IsUseable();
		class FText GetLookAtDecription(class AFGCharacterPlayer* byCharacter, const struct FUseState& State);
		void UpdateUseState(class AFGCharacterPlayer* byCharacter, const struct FVector& atLocation, class UPrimitiveComponent* componentHit, struct FUseState* out_useState);
		void ForceUpdateGameUI();
		void PlayTurboBassEffects(class AFGCharacterPlayer* Character);
		void ReceiveBeginPlay();
		void PlayLoadTapeSequence(class AFGCharacterPlayer* instigatorPlayer);
		void PlaySwitchTapeSequence(class AFGCharacterPlayer* instigatorPlayer);
		void PlayNextSongSequence(class AFGCharacterPlayer* instigatorPlayer);
		void PlayPrevSongSequence(class AFGCharacterPlayer* instigatorPlayer);
		void PlayPlaySequence(class AFGCharacterPlayer* instigatorPlayer);
		void PlayStopSequence(class AFGCharacterPlayer* instigatorPlayer);
		void PlayTurboBassSequence(class AFGCharacterPlayer* instigatorPlayer);
		void PlayEquipEffects(class AFGCharacterPlayer* Character);
		void PlayStingerEffects(class AFGCharacterPlayer* Character);
		void OnUse(class AFGCharacterPlayer* byCharacter, const struct FUseState& State);
		void StartIsLookedAt(class AFGCharacterPlayer* byCharacter, const struct FUseState& State);
		void StopIsLookedAt(class AFGCharacterPlayer* byCharacter, const struct FUseState& State);
		void CustomEvent_1();
		void OnPlaybackStateChanged(int32_t PlaybackState);
		void ExecuteUbergraph_BP_BoomBoxPlayer(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
