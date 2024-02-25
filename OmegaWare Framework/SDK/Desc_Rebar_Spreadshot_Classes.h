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
	 * BlueprintGeneratedClass Desc_Rebar_Spreadshot.Desc_Rebar_Spreadshot_C
	 * Size -> 0x0010 (FullSize[0x0400] - InheritedSize[0x03F0])
	 */
	class UDesc_Rebar_Spreadshot_C : public UFGAmmoTypeSpreadshot
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		double                                                     SpreadTrail_Velocity;                                    // 0x03F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void CreateImpactEffectForHit(const struct FHitResult& Hit);
		void FireAmmunition();
		void PlayEffects(TArray<struct FHitResult> traceResults);
		void ExecuteUbergraph_Desc_Rebar_Spreadshot(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
