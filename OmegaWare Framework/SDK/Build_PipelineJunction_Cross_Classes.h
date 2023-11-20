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
	 * BlueprintGeneratedClass Build_PipelineJunction_Cross.Build_PipelineJunction_Cross_C
	 * Size -> 0x0038 (FullSize[0x07C8] - InheritedSize[0x0790])
	 */
	class ABuild_PipelineJunction_Cross_C : public AFGBuildablePipelineJunction
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0790(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UFGClearanceComponent*                               FGClearance;                                             // 0x0798(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFGPipeConnectionComponent*                          Connection0;                                             // 0x07A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFGPipeConnectionComponent*                          Connection3;                                             // 0x07A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFGPipeConnectionComponent*                          Connection2;                                             // 0x07B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFGPipeConnectionComponent*                          Connection1;                                             // 0x07B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFGColoredInstanceMeshProxy*                         FGColoredInstanceMeshProxy;                              // 0x07C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void PlayConstructSound_2();
		void ExecuteUbergraph_Build_PipelineJunction_Cross(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
