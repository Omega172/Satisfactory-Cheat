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
	 * WidgetBlueprintGeneratedClass BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C
	 * Size -> 0x0150 (FullSize[0x03D0] - InheritedSize[0x0280])
	 */
	class UBPW_TetrominoPackagingGame_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Anim_HighScore;                                          // 0x0288(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Anim_GameStart;                                          // 0x0290(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Anim_GameEnd;                                            // 0x0298(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UBPW_Tetromino_Box_C*                                BPW_Tetromino_Box;                                       // 0x02A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_Tetromino_DescriptorRandomizer_C*               BPW_Tetromino_DescriptorRandomizer;                      // 0x02A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_Tetromino_GameStats_C*                          BPW_Tetromino_GameStats;                                 // 0x02B0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_Tetromino_Menu_C*                               BPW_Tetromino_Menu;                                      // 0x02B8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_Tetromino_PackageStats_C*                       BPW_Tetromino_PackageStats;                              // 0x02C0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_Tetromino_PostGameStats_C*                      BPW_Tetromino_PostGameStats;                             // 0x02C8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_Tetromino_SendButton_C*                         BPW_Tetromino_SendButton;                                // 0x02D0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_Tetromino_SendPackageFeedback_C*                BPW_Tetromino_SendPackageFeedback;                       // 0x02D8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_TetrominoConveyor_C*                            BPW_TetrominoConveyor;                                   // 0x02E0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            mBoxSlot;                                                // 0x02E8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              mConveyorCover;                                          // 0x02F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          mNewHighScore;                                           // 0x02F8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    mPackagePoints;                                          // 0x0300(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_H8U6[0x4];                                   // 0x0304(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     mFillAmount;                                             // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBPW_Tetromino_Box_C*                                mCurrentBox;                                             // 0x0310(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		bool                                                       mIsPaused;                                               // 0x0318(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0Z6S[0x7];                                   // 0x0319(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              mTetraminoLevels;                                        // 0x0320(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FStruct_TetrominoLevelData                          mCurrentLevel;                                           // 0x0328(0x0070) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		int32_t                                                    mHighestPackagePoints;                                   // 0x0398(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JCV2[0x4];                                   // 0x039C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     mHighestPackageTotal;                                    // 0x03A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mHighestFillAmount;                                      // 0x03A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    mPackagesSent;                                           // 0x03B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    mBlocksDropped;                                          // 0x03B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnRestartGame;                                           // 0x03B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UAkComponent*                                        XmasMiniGame_Music;                                      // 0x03C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash

	public:
		void SequenceEvent__ENTRYPOINTBPW_TetrominoPackagingGame(class UBPW_Tetromino_PostGameStats_C* TetrominoPostGameStat);
		void ChangeToGameStem();
		void ChangeToMenuStem();
		void StartMusic();
		void StopMusic();
		void UpdatePostGameStats();
		void UpdateStats(int32_t Points, double mFillAmount, bool Animate);
		void UnPauseGame();
		void OnBlockDropped(int32_t Points, double FillAmount);
		void SendPackage();
		void CreateBox();
		void ShowStatsSequenceEvent(class UBPW_Tetromino_PostGameStats_C* TetrominoPostGameStat);
		void Construct();
		void BndEvt__BPW_Tetromino_SendButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature();
		void BndEvt__BPW_Tetromino_GameStats_K2Node_ComponentBoundEvent_8_OnTimesUp__DelegateSignature();
		void BndEvt__BPW_Tetromino_Menu_K2Node_ComponentBoundEvent_0_OnStartGameClicked__DelegateSignature();
		void BndEvt__BPW_Tetromino_Menu_K2Node_ComponentBoundEvent_1_OnHowToPlayClicked__DelegateSignature();
		void BndEvt__BPW_Tetromino_Menu_K2Node_ComponentBoundEvent_2_OnStartGameOnLevel__DelegateSignature(const struct FStruct_TetrominoLevelData& LevelData);
		void BndEvt__BPW_Tetromino_PostGameStats_K2Node_ComponentBoundEvent_0_OnBackToMenuClicked__DelegateSignature();
		void Destruct();
		void BndEvt__BPW_Tetromino_PostGameStats_K2Node_ComponentBoundEvent_4_OnNewHighScore__DelegateSignature();
		void ExecuteUbergraph_BPW_TetrominoPackagingGame(int32_t EntryPoint);
		void OnRestartGame__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
