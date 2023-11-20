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
	 * BlueprintGeneratedClass DropPod_Intro_01.DropPod_Intro_01_DirectorBP_C
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UDropPod_Intro_01_DirectorBP_C : public ULevelSequenceDirector
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0038(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void SequenceEvent__ENTRYPOINTDropPod_Intro_01_DirectorBP_10();
		void SequenceEvent__ENTRYPOINTDropPod_Intro_01_DirectorBP_9(class ABP_StartingPod_C* BP_StartingPod);
		void SequenceEvent__ENTRYPOINTDropPod_Intro_01_DirectorBP_8(class ABP_StartingPod_C* BP_StartingPod);
		void SequenceEvent__ENTRYPOINTDropPod_Intro_01_DirectorBP_7(class ABP_StartingPod_C* BP_StartingPod);
		void SequenceEvent__ENTRYPOINTDropPod_Intro_01_DirectorBP_6(class ABP_StartingPod_C* BP_StartingPod);
		void SequenceEvent__ENTRYPOINTDropPod_Intro_01_DirectorBP_5(class ABP_StartingPod_C* BP_StartingPod);
		void SequenceEvent__ENTRYPOINTDropPod_Intro_01_DirectorBP_4(class ABP_StartingPod_C* BP_StartingPod);
		void SequenceEvent__ENTRYPOINTDropPod_Intro_01_DirectorBP_3(class AChar_Player_C* Char_Player);
		void SequenceEvent__ENTRYPOINTDropPod_Intro_01_DirectorBP_2(class AChar_Player_C* Char_Player);
		void SequenceEvent__ENTRYPOINTDropPod_Intro_01_DirectorBP_1(class AChar_Player_C* Char_Player);
		void SequenceEvent__ENTRYPOINTDropPod_Intro_01_DirectorBP(class AChar_Player_C* Char_Player);
		void LimitLookOn(class AChar_Player_C* Char_Player, bool doLimit);
		void AllowSkipIntro(class ABP_StartingPod_C* BP_StartingPod);
		void BlockSkipIntro(class ABP_StartingPod_C* BP_StartingPod);
		void StartCinematic(class ABP_StartingPod_C* BP_StartingPod);
		void LimitLookOff(class AChar_Player_C* Char_Player, bool doLimit);
		void EndCinematic(class ABP_StartingPod_C* BP_StartingPod);
		void StartCinematicP(class AChar_Player_C* Char_Player);
		void EndCinematicP(class AChar_Player_C* Char_Player);
		void AKStopDucking(class ABP_StartingPod_C* BP_StartingPod);
		void AKHalveDucking(class ABP_StartingPod_C* BP_StartingPod);
		void TriggerEndCameraAnim();
		void ExecuteUbergraph_DropPod_Intro_01_DirectorBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
