#pragma once

/**
 * Name: Satisfactory
 * Version: Early_Access_CL#273254
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
	 * BlueprintGeneratedClass BP_FireWorksProjectile_02.BP_FireWorksProjectile_02_C
	 * Size -> 0x0010 (FullSize[0x0678] - InheritedSize[0x0668])
	 */
	class ABP_FireWorksProjectile_02_C : public ABP_FireWorksProjectile_01_C
	{
	public:
		class FString                                              mPhysicalMaterialExplosion_1;                            // 0x0668(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash

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
