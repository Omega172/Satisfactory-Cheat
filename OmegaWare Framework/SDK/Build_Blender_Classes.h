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
	 * BlueprintGeneratedClass Build_Blender.Build_Blender_C
	 * Size -> 0x00FD (FullSize[0x08D9] - InheritedSize[0x07DC])
	 */
	class ABuild_Blender_C : public AFGBuildableManufacturer
	{
	public:
		unsigned char                                              UnknownData_9349[0x4];                                   // 0x07DC(0x0004) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x07E0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UNiagaraComponent*                                   Niagara;                                                 // 0x07E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              SK_Blender;                                              // 0x07F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFGPipeConnectionFactory*                            PipeInputFactory1;                                       // 0x07F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFGFactoryConnectionComponent*                       Input1;                                                  // 0x0800(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFGFactoryConnectionComponent*                       Input0;                                                  // 0x0808(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFGPipeConnectionFactory*                            PipeOutputFactory;                                       // 0x0810(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_ProductionIndicatorInstanced_C*                  BP_ProductionIndicatorInstanced;                         // 0x0818(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFGFactoryConnectionComponent*                       Output1;                                                 // 0x0820(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFGPipeConnectionFactory*                            PipeInputFactory;                                        // 0x0828(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_LadderComponent_C*                               BP_LadderComponent3;                                     // 0x0830(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_LadderComponent_C*                               BP_LadderComponent2;                                     // 0x0838(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_LadderComponent_C*                               BP_LadderComponent1;                                     // 0x0840(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_LadderComponent_C*                               BP_LadderComponent;                                      // 0x0848(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFGFactoryLegsComponent*                             FGFactoryLegs;                                           // 0x0850(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFGPowerConnectionComponent*                         PowerConnection;                                         // 0x0858(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFGColoredInstanceMeshProxy*                         FGColoredInstanceMeshProxy;                              // 0x0860(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       IsPowered;                                               // 0x0868(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TY9R[0x7];                                   // 0x0869(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            mFluidParticles_01;                                      // 0x0870(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		bool                                                       mProductionEffectsRunning;                               // 0x0878(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8WU9[0x7];                                   // 0x0879(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMeshComponent*                                mLiquidMesh;                                             // 0x0880(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        mCurrentColorVFX;                                        // 0x0888(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            mSplash_VFX;                                             // 0x0898(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UAkComponent*                                        m_SFX_Residue;                                           // 0x08A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UAkComponent*                                        m_SFX_Ambience;                                          // 0x08A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UAkComponent*                                        m_SFX_Rattle;                                            // 0x08B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		TArray<class FName>                                        m_NotifyNameREferences;                                  // 0x08B8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FLinearColor>                                mColor;                                                  // 0x08C8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       mIsRadioActive;                                          // 0x08D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetManufacturingBackground(class UTexture2D** Texture, class UMaterial** MaterialOptional);
		void AssignColors();
		void UpdateColors(class UClass* InClass);
		void CheckForAkNotifesActive();
		void Start_SFX_OnSignificance();
		void Kill_SFX_Production();
		void Stop_SFX_Production();
		void Start_SFX_Production();
		void CheckCurrentRecipeVFX();
		void Destroy_VFX();
		void Spawn_VFX_Emitters();
		void Stop_VFX_Production();
		void Start_VFX_Production();
		void LostSignificance();
		void GainedSignificance();
		void StartProductionLoopEffects(bool didStartProducing);
		void OnIsProducingChanged(bool newIsProducing);
		void StopProductionLoopEffects(bool didStopProducing);
		void ReceiveBeginPlay();
		void UpdateRecipeColors(class UClass* newRecipe);
		void StartIsAimedAtForColor(class AFGCharacterPlayer* byCharacter, bool IsValid);
		void StopIsAimedAtForColor(class AFGCharacterPlayer* byCharacter);
		void CreateLiquidMeshComponent();
		void K2_OnBuildEffectFinished();
		void ExecuteUbergraph_Build_Blender(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
