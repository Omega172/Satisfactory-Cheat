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
	 * BlueprintGeneratedClass Build_ConveyorBeltMk1.Build_ConveyorBeltMk1_C
	 * Size -> 0x0018 (FullSize[0x07E8] - InheritedSize[0x07D0])
	 */
	class ABuild_ConveyorBeltMk1_C : public AFGBuildableConveyorBelt
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x07D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		unsigned char                                              mCustomSkins[0x10];                                      // 0x07D8(0x0010) UNKNOWN PROPERTY: ArrayProperty

	public:
		void GetBuildEffectTemplate();
		void PlayConstructSound();
		void ExecuteUbergraph_Build_ConveyorBeltMk1(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
