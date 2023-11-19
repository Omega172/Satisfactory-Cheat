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
	 * BlueprintGeneratedClass Build_TradingPost.Build_TradingPost_C
	 * Size -> 0x0170 (FullSize[0x0970] - InheritedSize[0x0800])
	 */
	class ABuild_TradingPost_C : public AFGBuildableTradingPost
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0800(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UFGClearanceComponent*                               FGClearance;                                             // 0x0808(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_KorolevPoster;                                        // 0x0810(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpotLightComponent*                                 SpotLight;                                               // 0x0818(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPointLightComponent*                                PointLight;                                              // 0x0820(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              MainMesh_skl;                                            // 0x0828(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFGFactoryLegsComponent*                             FGFactoryLegs;                                           // 0x0830(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_LadderComponent_C*                               BP_LadderComponent1;                                     // 0x0838(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                PlayerStart3;                                            // 0x0840(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                PlayerStart2;                                            // 0x0848(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                PlayerStart1;                                            // 0x0850(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                PlayerStart0;                                            // 0x0858(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MainMesh;                                                // 0x0860(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class FText                                                mWorkBenchOccupied;                                      // 0x0868(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                mWorkBenchFree;                                          // 0x0880(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UStaticMesh*>                                 Meshes;                                                  // 0x0898(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    mShipUpgradeLevel;                                       // 0x08A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9TO0[0x4];                                   // 0x08AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                mStorageText;                                            // 0x08B0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                mMamFreeText;                                            // 0x08C8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                mMamOccupiedText;                                        // 0x08E0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class AFGCharacterPlayer*                                  mLastTradingPostUser;                                    // 0x08F8(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              mMeshes[0x10];                                           // 0x0900(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              ABClass[0x30];                                           // 0x0910(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              mSkeletalMeshSoftPtr[0x30];                              // 0x0940(0x0030) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		void GetBuildEffectTemplate();
		struct FLinearColor GetDefaultRepresentationColor();
		class FText GetLookAtDecription(class AFGCharacterPlayer* byCharacter, const struct FUseState& State);
		void UpdateUseState(class AFGCharacterPlayer* byCharacter, const struct FVector& atLocation, class UPrimitiveComponent* componentHit, struct FUseState* out_useState);
		bool IsUseable();
		void UpdateTradingPostVisibility();
		void OnLoaded_F02CFE974B6123F49BF5CFAD0A36D612(class UObject* Loaded);
		void OnLoaded_94271F0F483AA543FCDD66A7474D3BE4(class UClass* Loaded);
		void OnLoaded_A570242C4EC82CB27F3BF0AD8DABA48E(class UObject* Loaded);
		void ReceiveBeginPlay();
		void ReceiveDestroyed();
		void OnTradingPostUpgraded(int32_t Level, bool suppressBuildEffects);
		void UpdateMesh();
		void ExecuteUbergraph_Build_TradingPost(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
