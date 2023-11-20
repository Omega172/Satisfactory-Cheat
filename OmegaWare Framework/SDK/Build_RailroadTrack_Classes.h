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
	 * BlueprintGeneratedClass Build_RailroadTrack.Build_RailroadTrack_C
	 * Size -> 0x0008 (FullSize[0x06E8] - InheritedSize[0x06E0])
	 */
	class ABuild_RailroadTrack_C : public AFGBuildableRailroadTrack
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x06E0(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void GetBuildEffectTemplate();
		void PlayConstructSound();
		void ExecuteUbergraph_Build_RailroadTrack(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
