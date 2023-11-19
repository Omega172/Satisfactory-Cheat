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
	 * BlueprintGeneratedClass Holo_PowerLine.Holo_PowerLine_C
	 * Size -> 0x0010 (FullSize[0x0730] - InheritedSize[0x0720])
	 */
	class AHolo_PowerLine_C : public AFGWireHologram
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0720(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                ConnectionMesh;                                          // 0x0728(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void OnAutomaticPoleDisableToggle(bool Disabled);
		void ExecuteUbergraph_Holo_PowerLine(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
