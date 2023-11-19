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
	 * BlueprintGeneratedClass Build_RailroadPathSignal.Build_RailroadPathSignal_C
	 * Size -> 0x0008 (FullSize[0x0678] - InheritedSize[0x0670])
	 */
	class ABuild_RailroadPathSignal_C : public AFGBuildableRailroadSignal
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0670(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void OnVisualStateChanged();
		void OnDrawDebugVisualState();
		void ExecuteUbergraph_Build_RailroadPathSignal(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
