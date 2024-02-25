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
	 * BlueprintGeneratedClass Build_RailroadTrackIntegrated.Build_RailroadTrackIntegrated_C
	 * Size -> 0x0008 (FullSize[0x06E8] - InheritedSize[0x06E0])
	 */
	class ABuild_RailroadTrackIntegrated_C : public AFGBuildableRailroadTrack
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x06E0(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		bool CanBeSampled();
		bool CanDismantle();
		void PlayConstructSound();
		void ExecuteUbergraph_Build_RailroadTrackIntegrated(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
