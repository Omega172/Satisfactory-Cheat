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
	 * BlueprintGeneratedClass Holo_JumpPadLauncher.Holo_JumpPadLauncher_C
	 * Size -> 0x0008 (FullSize[0x0728] - InheritedSize[0x0720])
	 */
	class AHolo_JumpPadLauncher_C : public AFGJumpPadLauncherHologram
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0720(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void OnLaunchAngleAdjusted();
		void ExecuteUbergraph_Holo_JumpPadLauncher(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
