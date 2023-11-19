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
	 * BlueprintGeneratedClass Build_XmassLightsLine.Build_XmassLightsLine_C
	 * Size -> 0x0008 (FullSize[0x0658] - InheritedSize[0x0650])
	 */
	class ABuild_XmassLightsLine_C : public AFGBuildableWire
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0650(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void SetMeshData();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_Build_XmassLightsLine(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
