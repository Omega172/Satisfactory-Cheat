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
	 * BlueprintGeneratedClass Build_ResourceSinkShop.Build_ResourceSinkShop_C
	 * Size -> 0x0020 (FullSize[0x0740] - InheritedSize[0x0720])
	 */
	class ABuild_ResourceSinkShop_C : public AFGBuildableResourceSinkShop
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0720(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UFGFactoryLegsComponent*                             FGFactoryLegs;                                           // 0x0728(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MainMesh;                                                // 0x0730(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPrimitiveComponent*                                 NewVar_1;                                                // 0x0738(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash

	public:
		class FText GetLookAtDecription(class AFGCharacterPlayer* byCharacter, const struct FUseState& State);
		void OnLoaded_AB2812A240C6856744E6B69817B59BD5(class UObject* Loaded);
		void ReceiveBeginPlay();
		void GainedSignificance();
		void LostSignificance();
		void ExecuteUbergraph_Build_ResourceSinkShop(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
