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
	 * BlueprintGeneratedClass BP_CreatureSubsystem.BP_CreatureSubsystem_C
	 * Size -> 0x0000 (FullSize[0x03D0] - InheritedSize[0x03D0])
	 */
	class ABP_CreatureSubsystem_C : public AFGCreatureSubsystem
	{
	public:
		class UClass* OverrideSpawnedCreatureClass(class UClass* creatureClassToSpawn);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
