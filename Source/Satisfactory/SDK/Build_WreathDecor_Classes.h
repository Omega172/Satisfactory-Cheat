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
	 * BlueprintGeneratedClass Build_WreathDecor.Build_WreathDecor_C
	 * Size -> 0x0010 (FullSize[0x05E8] - InheritedSize[0x05D8])
	 */
	class ABuild_WreathDecor_C : public AFGBuildable
	{
	public:
		unsigned char                                              UnknownData_5OP5[0x8];                                   // 0x05D8(0x0008) Fix Super Size
		class UFGColoredInstanceMeshProxy*                         FGColoredInstanceMeshProxy;                              // 0x05E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
