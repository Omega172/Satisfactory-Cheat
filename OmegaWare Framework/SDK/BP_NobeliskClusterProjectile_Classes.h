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
	 * BlueprintGeneratedClass BP_NobeliskClusterProjectile.BP_NobeliskClusterProjectile_C
	 * Size -> 0x0040 (FullSize[0x0618] - InheritedSize[0x05D8])
	 */
	class ABP_NobeliskClusterProjectile_C : public AFGProjectile
	{
	public:
		unsigned char                                              UnknownData_MYS3[0x8];                                   // 0x05D8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05E0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UNiagaraComponent*                                   Trail_vfx;                                               // 0x05E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Nobelisk_Debris;                                         // 0x05F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URadialForceComponent*                               RadialForce;                                             // 0x05F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class FString                                              mPhysicalMaterialExplosion;                              // 0x0600(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		double                                                     mHitComponentBounds;                                     // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Explode();
		bool ShouldSave();
		void GatherDependencies(TArray<class UObject*>* out_dependentObjects);
		bool NeedTransform();
		void OnImpact(const struct FHitResult& HitResult);
		void ExecuteUbergraph_BP_NobeliskClusterProjectile(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
