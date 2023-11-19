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
	 * BlueprintGeneratedClass BP_SchematicPurchasedDependency.BP_SchematicPurchasedDependency_C
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UBP_SchematicPurchasedDependency_C : public UFGSchematicPurchasedDependency
	{
	public:
		void GetDependecyData(TArray<struct FFAvailabilityDependencyData>* DependecyData);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
