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
	 * BlueprintGeneratedClass BP_RailroadSubsystem.BP_RailroadSubsystem_C
	 * Size -> 0x0008 (FullSize[0x0418] - InheritedSize[0x0410])
	 */
	class ABP_RailroadSubsystem_C : public AFGRailroadSubsystem
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0410(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void OnTrainsCollided(class AFGTrain* first, class AFGTrain* Second);
		void ExecuteUbergraph_BP_RailroadSubsystem(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
