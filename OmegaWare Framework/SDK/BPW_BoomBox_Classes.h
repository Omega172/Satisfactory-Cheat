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
	 * WidgetBlueprintGeneratedClass BPW_BoomBox.BPW_BoomBox_C
	 * Size -> 0x002D (FullSize[0x0380] - InheritedSize[0x0353])
	 */
	class UBPW_BoomBox_C : public UWidget_UseableBase_C
	{
	public:
		unsigned char                                              UnknownData_94Y9[0x5];                                   // 0x0353(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0358(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBPW_BoomBox_Player_C*                               BPW_BoomBox_Player;                                      // 0x0360(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_BoomBox_TapeSelect_C*                           BPW_BoomBox_TapeSelect;                                  // 0x0368(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     mWidgetSwitcher;                                         // 0x0370(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class AFGBoomBoxPlayer*                                    mBoomBox;                                                // 0x0378(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void SetPlayButtonStatus(bool mIsPlaying);
		void TogglePlay();
		void SetCurrentTape(class UClass* mCurrentTape);
		void Construct();
		void BndEvt__BPW_BoomBox_TapeSelect_K2Node_ComponentBoundEvent_0_OnTapeSelected__DelegateSignature(class UClass* tapeData);
		void BndEvt__BPW_BoomBox_Player_K2Node_ComponentBoundEvent_1_OnChangeTapeClicked__DelegateSignature();
		void BndEvt__BPW_BoomBox_Player_K2Node_ComponentBoundEvent_2_OnPlayClicked__DelegateSignature();
		void BndEvt__BPW_BoomBox_Player_K2Node_ComponentBoundEvent_3_OnNextClicked__DelegateSignature();
		void BndEvt__BPW_BoomBox_Player_K2Node_ComponentBoundEvent_4_OnPreviousClicked__DelegateSignature();
		void BndEvt__BPW_BoomBox_Player_K2Node_ComponentBoundEvent_5_OnCloseClicked__DelegateSignature();
		void CurrentSongChanged(const struct FSongData& currentSong, int32_t Index);
		void CurrentTapeChanged(class UClass* currentTape);
		void PlaybackPositionUpdate(float CurrentPosition, float TotalDuration);
		void PlaybackStateChanged(int32_t NewState);
		void BndEvt__BPW_BoomBox_BPW_BoomBox_TapeSelect_K2Node_ComponentBoundEvent_6_OnBackToPlayerClicked__DelegateSignature();
		void AudioVolumeChanged(float Volume);
		void BndEvt__BPW_BoomBox_BPW_BoomBox_Player_K2Node_ComponentBoundEvent_7_OnVolumeChanged__DelegateSignature(double Volume);
		void BndEvt__BPW_BoomBox_BPW_BoomBox_Player_K2Node_ComponentBoundEvent_8_OnPickupClicked__DelegateSignature();
		void RepeatModeChanged(EBoomBoxRepeatMode NewMode);
		void BndEvt__BPW_BoomBox_BPW_BoomBox_Player_K2Node_ComponentBoundEvent_9_OnLoopingChanged__DelegateSignature(bool IsLooping);
		void BoomBoxModeChanged(EBoomBoxMode NewMode);
		void ExecuteUbergraph_BPW_BoomBox(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
