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
	 * BlueprintGeneratedClass Build_SnowDispenser.Build_SnowDispenser_C
	 * Size -> 0x0018 (FullSize[0x05F8] - InheritedSize[0x05E0])
	 */
	class ABuild_SnowDispenser_C : public AFGBuildableSnowDispenser
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05E0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UFGColoredInstanceMeshProxy*                         FGColoredInstanceMeshProxy;                              // 0x05E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            vfx;                                                     // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash

	public:
		void Spawn_VFX();
		int32_t GetAvailableElementID();
		class AFGBuildable* GetBuildable();
		struct FVector2D GetGridSquareDimensions();
		struct FVector2D GetSignDimensions();
		void ReceiveBeginPlay();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void GainedSignificance();
		void LostSignificance();
		void ExecuteUbergraph_Build_SnowDispenser(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
