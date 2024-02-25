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
	 * WidgetBlueprintGeneratedClass BPW_BoomBox_Player.BPW_BoomBox_Player_C
	 * Size -> 0x0148 (FullSize[0x03C8] - InheritedSize[0x0280])
	 */
	class UBPW_BoomBox_Player_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Anim_NoTapePulse;                                        // 0x0288(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
		class URichTextBlock*                                      mAlbumName;                                              // 0x0290(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      mArtistName;                                             // 0x0298(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_TileableButton_C*                               mBack;                                                   // 0x02A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          mBoombBoxLabel;                                          // 0x02A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_TileableButton_C*                               mChangeTape;                                             // 0x02B0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_TileableButton_C*                               mClose;                                                  // 0x02B8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      mCurrentTime;                                            // 0x02C0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      mFullTime;                                               // 0x02C8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             mLoopButton;                                             // 0x02D0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              mLoopIcon;                                               // 0x02D8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_TileableButton_C*                               mNext;                                                   // 0x02E0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          mNoTapeText;                                             // 0x02E8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_TileableButton_C*                               mPickup;                                                 // 0x02F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_TileableButton_C*                               mPlay;                                                   // 0x02F8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              mPlayerBG;                                               // 0x0300(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UProgressBar*                                        mProgress;                                               // 0x0308(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      mSongName;                                               // 0x0310(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              mTapeArt;                                                // 0x0318(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UProgressBar*                                        mVolumeBar;                                              // 0x0320(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USlider*                                             mVolumeSlider;                                           // 0x0328(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnChangeTapeClicked;                                     // 0x0330(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnPlayClicked;                                           // 0x0340(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnNextClicked;                                           // 0x0350(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnPreviousClicked;                                       // 0x0360(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnCloseClicked;                                          // 0x0370(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UClass*                                              mCurrentTape;                                            // 0x0380(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnVolumeChanged;                                         // 0x0388(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		EBoomBoxPickupButtonState                                  mPickupButtonState;                                      // 0x0398(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_EHR1[0x7];                                   // 0x0399(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPickupClicked;                                         // 0x03A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    mCurrentSongIndex;                                       // 0x03B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mVolumeSliderIsBeingDragged;                             // 0x03B4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mVolumSliderUpdateable;                                  // 0x03B5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mIsPlaying;                                              // 0x03B6(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mIsLooping;                                              // 0x03B7(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnLoopingChanged;                                        // 0x03B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		class UWidget* GetLoopTooltip();
		void SetIsLooping(bool mIsLooping, bool mTriggerDelegate);
		void SetLoopButtonStyle(bool IsHovered);
		void IconLoaded(class UTexture2D* Texture);
		void SetPickupButtonState(EBoomBoxPickupButtonState mPickupButtonState);
		void SetVolume(double Volume);
		void FormatTime(double Time, class FText* Result);
		void SetPlaybackPosition(double CurrentPosition, double maxDuration);
		void SetCurrentSong(const struct FSongData& currentSong, int32_t Index);
		void SetPlayButtonStatus(bool IsPlaying);
		void SetCurrentTape(class UClass* mCurrentTape);
		void PreConstruct(bool IsDesignTime);
		void BndEvt__mChangeTape_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
		void BndEvt__mPlay_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
		void BndEvt__mNext_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
		void BndEvt__mBack_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
		void BndEvt__mClose_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
		void BndEvt__BPW_BoomBox_Player_Slider_219_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature(float Value);
		void BndEvt__BPW_BoomBox_Player_mGrab_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
		void BndEvt__BPW_BoomBox_Player_mVolumeSlider_K2Node_ComponentBoundEvent_7_OnMouseCaptureEndEvent__DelegateSignature();
		void BndEvt__BPW_BoomBox_Player_mVolumeSlider_K2Node_ComponentBoundEvent_8_OnControllerCaptureEndEvent__DelegateSignature();
		void BndEvt__BPW_BoomBox_Player_mVolumeSlider_K2Node_ComponentBoundEvent_9_OnMouseCaptureBeginEvent__DelegateSignature();
		void BndEvt__BPW_BoomBox_Player_mVolumeSlider_K2Node_ComponentBoundEvent_10_OnControllerCaptureBeginEvent__DelegateSignature();
		void BndEvt__BPW_BoomBox_Player_mLoopButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__BPW_BoomBox_Player_mLoopButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__BPW_BoomBox_Player_mLoopButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature();
		void ExecuteUbergraph_BPW_BoomBox_Player(int32_t EntryPoint);
		void OnLoopingChanged__DelegateSignature(bool IsLooping);
		void OnPickupClicked__DelegateSignature();
		void OnVolumeChanged__DelegateSignature(double Volume);
		void OnCloseClicked__DelegateSignature();
		void OnPreviousClicked__DelegateSignature();
		void OnNextClicked__DelegateSignature();
		void OnPlayClicked__DelegateSignature();
		void OnChangeTapeClicked__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
