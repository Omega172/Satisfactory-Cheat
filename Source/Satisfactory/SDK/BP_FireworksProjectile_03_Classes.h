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
	 * BlueprintGeneratedClass BP_FireworksProjectile_03.BP_FireworksProjectile_03_C
	 * Size -> 0x0000 (FullSize[0x0668] - InheritedSize[0x0668])
	 */
	class ABP_FireworksProjectile_03_C : public ABP_FireWorksProjectile_01_C
	{
	public:
		bool ShouldSave();
		void GatherDependencies(TArray<class UObject*>* out_dependentObjects);
		bool NeedTransform();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
