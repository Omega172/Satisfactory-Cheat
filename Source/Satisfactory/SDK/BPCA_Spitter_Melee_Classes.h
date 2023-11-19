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
	 * BlueprintGeneratedClass BPCA_Spitter_Melee.BPCA_Spitter_Melee_C
	 * Size -> 0x0028 (FullSize[0x0210] - InheritedSize[0x01E8])
	 */
	class UBPCA_Spitter_Melee_C : public UFGCreatureActionMeleeAttack
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01E8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FLinearColor                                        Colour;                                                  // 0x01F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     Radius;                                                  // 0x0200(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UNiagaraSystem*                                      VFXSystemTemplate;                                       // 0x0208(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void OnAnimNotify(class UFGAnimNotify* Notify);
		void ExecuteUbergraph_BPCA_Spitter_Melee(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
