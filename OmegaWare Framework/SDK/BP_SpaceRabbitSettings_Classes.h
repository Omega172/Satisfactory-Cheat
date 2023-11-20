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
	 * BlueprintGeneratedClass BP_SpaceRabbitSettings.BP_SpaceRabbitSettings_C
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UBP_SpaceRabbitSettings_C : public UFGLootSettings
	{
	public:
		TArray<struct FInventoryStack>                             mLootTable;                                              // 0x0028(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void GetRandomLoot(int32_t* LootIndex);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
