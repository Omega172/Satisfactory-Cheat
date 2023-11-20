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
	 * BlueprintGeneratedClass BPCA_NonFlyingBird_Lure.BPCA_NonFlyingBird_Lure_C
	 * Size -> 0x0010 (FullSize[0x0130] - InheritedSize[0x0120])
	 */
	class UBPCA_NonFlyingBird_Lure_C : public UFGCreatureAction
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0120(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAnim_NonFlyingBird_C*                               NonFlyingBirdAnimRef;                                    // 0x0128(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		bool SetupAction();
		bool CanPerformAction();
		void PerformAction();
		void CleanupAction(bool actionSuccess);
		void ExecuteUbergraph_BPCA_NonFlyingBird_Lure(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
