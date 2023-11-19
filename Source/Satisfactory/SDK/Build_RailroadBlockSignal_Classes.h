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
	 * BlueprintGeneratedClass Build_RailroadBlockSignal.Build_RailroadBlockSignal_C
	 * Size -> 0x0009 (FullSize[0x0679] - InheritedSize[0x0670])
	 */
	class ABuild_RailroadBlockSignal_C : public AFGBuildableRailroadSignal
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0670(0x0008) ZeroConstructor, Transient, DuplicateTransient
		ERailroadSignalAspect                                      mPreviousAspect;                                         // 0x0678(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnVisualStateChanged();
		void OnDrawDebugVisualState();
		void ExecuteUbergraph_Build_RailroadBlockSignal(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
