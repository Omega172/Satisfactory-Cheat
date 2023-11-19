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
	 * BlueprintGeneratedClass BP_Beacon.BP_Beacon_C
	 * Size -> 0x0058 (FullSize[0x0358] - InheritedSize[0x0300])
	 */
	class ABP_Beacon_C : public AFGBeacon
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0300(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x0308(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0310(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UTexture2D*                                          mCompassTexture;                                         // 0x0318(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class FText                                                mCompassText;                                            // 0x0320(0x0018) Edit, BlueprintVisible, Net, DisableEditOnInstance, SaveGame
		struct FLinearColor                                        mCompassColor;                                           // 0x0338(0x0010) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECompassViewDistance                                       compassViewDistance;                                     // 0x0348(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WMGW[0x7];                                   // 0x0349(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkComponent*                                        mBeaconPlanted;                                          // 0x0350(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash

	public:
		bool ShouldSave();
		void GatherDependencies(TArray<class UObject*>* out_dependentObjects);
		bool NeedTransform();
		class FText GetLookAtDecription(class AFGCharacterPlayer* byCharacter, const struct FUseState& State);
		bool IsUseable();
		void UpdateUseState(class AFGCharacterPlayer* byCharacter, const struct FVector& atLocation, class UPrimitiveComponent* componentHit, struct FUseState* out_useState);
		ECompassViewDistance GetCompassViewDistance();
		struct FLinearColor GetRepresentationColor();
		class FText GetRepresentationText();
		void PostLoadGame(int32_t saveVersion, int32_t GameVersion);
		void PostSaveGame(int32_t saveVersion, int32_t GameVersion);
		void PreLoadGame(int32_t saveVersion, int32_t GameVersion);
		void PreSaveGame(int32_t saveVersion, int32_t GameVersion);
		void OnUse(class AFGCharacterPlayer* byCharacter, const struct FUseState& State);
		void OnUseStop(class AFGCharacterPlayer* byCharacter, const struct FUseState& State);
		void RegisterInteractingPlayer(class AFGCharacterPlayer* Player);
		void StartIsLookedAt(class AFGCharacterPlayer* byCharacter, const struct FUseState& State);
		void StopIsLookedAt(class AFGCharacterPlayer* byCharacter, const struct FUseState& State);
		void UnregisterInteractingPlayer(class AFGCharacterPlayer* Player);
		void ExecuteUbergraph_BP_Beacon(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
