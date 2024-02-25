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
	 * BlueprintGeneratedClass BP_TimeOfDaySubsystem.BP_TimeOfDaySubsystem_C
	 * Size -> 0x0019 (FullSize[0x0389] - InheritedSize[0x0370])
	 */
	class ABP_TimeOfDaySubsystem_C : public AFGTimeOfDaySubsystem
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0370(0x0008) ZeroConstructor, Transient, DuplicateTransient
		int32_t                                                    mTimeToResetMultiplier;                                  // 0x0378(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5BKX[0x4];                                   // 0x037C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        mMultiplierResetTimer;                                   // 0x0380(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       mResetToZero;                                            // 0x0388(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void CheckSpeedMultiplierReset();
		void ReceiveBeginPlay();
		void SetTimeSpeedMultiplierResetTime(int32_t resetTime);
		void ExecuteUbergraph_BP_TimeOfDaySubsystem(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
