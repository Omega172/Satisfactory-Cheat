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
	 * BlueprintGeneratedClass BuildEffect_Default.BuildEffect_Default_C
	 * Size -> 0x0120 (FullSize[0x0810] - InheritedSize[0x06F0])
	 */
	class ABuildEffect_Default_C : public AFGBuildEffectActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x06F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UParticleSystemComponent*                            mParticle;                                               // 0x06F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		struct FRuntimeFloatCurve                                  ParticleVeloCurve;                                       // 0x0700(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FRuntimeFloatCurve                                  mParticleVeloCurve;                                      // 0x0788(0x0088) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void SpawnCostEffectActor(const struct FTransform& SpawnLocation, const struct FVector& TargetLocation, float TargetExtent, class UClass* Item);
		void OnReached();
		void PlayThumbSound();
		void ReceiveBeginPlay();
		void UpdateSplineVFX(float Duration);
		void ExecuteUbergraph_BuildEffect_Default(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
