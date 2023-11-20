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
	 * BlueprintGeneratedClass Build_PowerPoleWallDouble.Build_PowerPoleWallDouble_C
	 * Size -> 0x0018 (FullSize[0x0628] - InheritedSize[0x0610])
	 */
	class ABuild_PowerPoleWallDouble_C : public AFGBuildablePowerPole
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0610(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UFGPowerConnectionComponent*                         PowerConnection2;                                        // 0x0618(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFGPowerConnectionComponent*                         PowerConnection1;                                        // 0x0620(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_Build_PowerPoleWallDouble(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
