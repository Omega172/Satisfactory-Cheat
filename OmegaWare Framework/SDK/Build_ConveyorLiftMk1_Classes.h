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
	 * BlueprintGeneratedClass Build_ConveyorLiftMk1.Build_ConveyorLiftMk1_C
	 * Size -> 0x0008 (FullSize[0x0848] - InheritedSize[0x0840])
	 */
	class ABuild_ConveyorLiftMk1_C : public AFGBuildableConveyorLift
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0840(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void PlayConstructSound();
		void ExecuteUbergraph_Build_ConveyorLiftMk1(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
