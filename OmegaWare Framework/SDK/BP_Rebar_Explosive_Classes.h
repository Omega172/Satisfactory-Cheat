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
	 * BlueprintGeneratedClass BP_Rebar_Explosive.BP_Rebar_Explosive_C
	 * Size -> 0x0010 (FullSize[0x0630] - InheritedSize[0x0620])
	 */
	class ABP_Rebar_Explosive_C : public ABP_RebarProjectile_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0620(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class URadialForceComponent*                               RadialForce;                                             // 0x0628(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void OnImpact(const struct FHitResult& HitResult);
		void ExecuteUbergraph_BP_Rebar_Explosive(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
