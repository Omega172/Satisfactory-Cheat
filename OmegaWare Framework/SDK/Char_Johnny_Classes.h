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
	 * BlueprintGeneratedClass Char_Johnny.Char_Johnny_C
	 * Size -> 0x0020 (FullSize[0x0AA0] - InheritedSize[0x0A80])
	 */
	class AChar_Johnny_C : public ABP_Creature_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A80(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UParticleSystemComponent*                            JetpackExhaust2;                                         // 0x0A88(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            JetpackExhaust1;                                         // 0x0A90(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                JetpackMesh;                                             // 0x0A98(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void SetupEvent();
		void ReceiveDied();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_Char_Johnny(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
