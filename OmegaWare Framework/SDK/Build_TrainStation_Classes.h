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
	 * BlueprintGeneratedClass Build_TrainStation.Build_TrainStation_C
	 * Size -> 0x0060 (FullSize[0x0820] - InheritedSize[0x07C0])
	 */
	class ABuild_TrainStation_C : public AFGBuildableRailroadStation
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x07C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_LadderComponent_C*                               BP_LadderComponent2;                                     // 0x07C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_ProductionIndicatorInstanced_C*                  BP_ProductionIndicatorInstanced;                         // 0x07D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFGFactoryLegsComponent*                             FGFactoryLegs;                                           // 0x07D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFGColoredInstanceMeshProxy*                         FGColoredInstanceMeshProxy;                              // 0x07E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UTextRenderComponent*                                Name_back;                                               // 0x07E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_LadderComponent_C*                               BP_LadderComponent1;                                     // 0x07F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFGPowerConnectionComponent*                         PowerConnection;                                         // 0x07F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UTextRenderComponent*                                Name;                                                    // 0x0800(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class FText                                                mMapText;                                                // 0x0808(0x0018) Edit, BlueprintVisible, Net, DisableEditOnInstance

	public:
		struct FLinearColor GetDefaultRepresentationColor();
		class FText GetRepresentationText();
		void OnNameChanged();
		void SetRepresentationText(const class FText& Text);
		void ExecuteUbergraph_Build_TrainStation(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
