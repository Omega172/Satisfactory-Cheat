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
	 * BlueprintGeneratedClass Build_SignPole.Build_SignPole_C
	 * Size -> 0x0008 (FullSize[0x0618] - InheritedSize[0x0610])
	 */
	class ABuild_SignPole_C : public AFGBuildableSignSupport
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0610(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void PlayConstructSound_2();
		void ExecuteUbergraph_Build_SignPole(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
