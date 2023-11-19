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
	 * BlueprintGeneratedClass Build_Valve.Build_Valve_C
	 * Size -> 0x0060 (FullSize[0x0810] - InheritedSize[0x07B0])
	 */
	class ABuild_Valve_C : public AFGBuildablePipelinePump
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x07B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UFGClearanceComponent*                               FGClearance;                                             // 0x07B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                PumpMesh;                                                // 0x07C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFGPipeConnectionComponent*                          Connection1;                                             // 0x07C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFGPipeConnectionComponent*                          Connection0;                                             // 0x07D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            Mat;                                                     // 0x07D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		double                                                     mLastFlowUpdate;                                         // 0x07E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mUpdateFlowTime;                                         // 0x07E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mAnimSpeed;                                              // 0x07F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mLastFlowValue;                                          // 0x07F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mTimeScaleOffset;                                        // 0x0800(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              mFluidDesc;                                              // 0x0808(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateMaterial();
		void ApplyFluidDescriptorColor();
		void OnPumpStopped();
		void OnHasPowerChanged(bool newHasPower);
		void Factory_ReceiveStopProducing();
		void StopIsLookedAtForDismantle(class AFGCharacterPlayer* byCharacter);
		void ReceiveBeginPlay();
		void BuildEffectFinishedEvent();
		void FluidDescriptorSetNotify(class UClass* fluidDesc);
		void LostSignificance();
		void ReceiveTick(float DeltaSeconds);
		void GainedSignificance();
		void OnMaterialInstancesUpdated();
		void ExecuteUbergraph_Build_Valve(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
