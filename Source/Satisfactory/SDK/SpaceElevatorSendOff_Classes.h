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
	 * BlueprintGeneratedClass SpaceElevatorSendOff.SpaceElevatorSendOff_DirectorBP_C
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class USpaceElevatorSendOff_DirectorBP_C : public ULevelSequenceDirector
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0038(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void SequenceEvent__ENTRYPOINTSpaceElevatorSendOff_DirectorBP_2(class ABuild_SpaceElevator_C* Build_Space_Elevator);
		void SequenceEvent__ENTRYPOINTSpaceElevatorSendOff_DirectorBP_1(class ABuild_SpaceElevator_C* Build_Space_Elevator);
		void SequenceEvent__ENTRYPOINTSpaceElevatorSendOff_DirectorBP(class ABuild_SpaceElevator_C* Build_Space_Elevator);
		void Event_SE_SendOff(class ABuild_SpaceElevator_C* Build_Space_Elevator);
		void CamShake_01(class ABuild_SpaceElevator_C* Build_Space_Elevator);
		void CamShake_02(class ABuild_SpaceElevator_C* Build_Space_Elevator);
		void ExecuteUbergraph_SpaceElevatorSendOff_DirectorBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
