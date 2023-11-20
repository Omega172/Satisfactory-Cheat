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
	 * BlueprintGeneratedClass Holo_PipelinePump.Holo_PipelinePump_C
	 * Size -> 0x0021 (FullSize[0x07B1] - InheritedSize[0x0790])
	 */
	class AHolo_PipelinePump_C : public AFGPipelinePumpHologram
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0790(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UInstancedStaticMeshComponent*                       InstancedStaticMesh;                                     // 0x0798(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     TestVar;                                                 // 0x07A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mIndicatorSpeed;                                         // 0x07A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mVisualizerMeshes;                                       // 0x07B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateOrAddInstances(TArray<struct FTransform>* EndLocations, TArray<struct FTransform>* SnapLocations, TArray<struct FTransform>* MovingLocations);
		void ReceiveTick(float DeltaSeconds);
		void ExecuteUbergraph_Holo_PipelinePump(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
