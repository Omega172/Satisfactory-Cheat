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
	 * BlueprintGeneratedClass BP_ResourceDeposit.BP_ResourceDeposit_C
	 * Size -> 0x0008 (FullSize[0x0468] - InheritedSize[0x0460])
	 */
	class ABP_ResourceDeposit_C : public AFGResourceDeposit
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0460(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void ReceiveBeginPlay();
		void PlayDepletedEffect(class UClass* Descriptor);
		void ExecuteUbergraph_BP_ResourceDeposit(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
