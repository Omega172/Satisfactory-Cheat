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
	 * BlueprintGeneratedClass BP_WAT2.BP_WAT2_C
	 * Size -> 0x0048 (FullSize[0x0460] - InheritedSize[0x0418])
	 */
	class ABP_WAT2_C : public ABP_WAT1_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0418(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                StaticMesh1;                                             // 0x0420(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              mShrineActor[0x30];                                      // 0x0428(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		double                                                     mSpawnHeightOffset;                                      // 0x0458(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SpawnShrine();
		void UserConstructionScript();
		void BuildOuterShell();
		void OnPickup(class AFGCharacterPlayer* byCharacter);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_WAT2(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
