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
	 * BlueprintGeneratedClass BP_FreightWagon.BP_FreightWagon_C
	 * Size -> 0x0098 (FullSize[0x0798] - InheritedSize[0x0700])
	 */
	class ABP_FreightWagon_C : public AFGFreightWagon
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0700(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                CargoMesh;                                               // 0x0708(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     mMaxImpactForce;                                         // 0x0710(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mMinimumImpactForce;                                     // 0x0718(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mIsPlayingFX;                                            // 0x0720(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QPV9[0x7];                                   // 0x0721(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        mTimerForMeshTransform;                                  // 0x0728(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FTransform                                          mMeshTransform;                                          // 0x0730(0x0060) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAkComponent*                                        mCargoImpact;                                            // 0x0790(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash

	public:
		class FText GetLookAtDecription(class AFGCharacterPlayer* byCharacter, const struct FUseState& State);
		class UStaticMesh* GetDerailHologramMesh();
		void PlayCargeFirstImpact(double ImpactVelocity);
		void DistanceBetweenPlayerAndCollision(double* NewParam);
		void PlaySFXTreeImpact(const struct FVector& Location, double ImpactForce);
		void PlaySFXRockImpact(const struct FVector& Location, double ImpactForce);
		void PlaySFXDefaultImpact(const struct FVector& Location, double ImpactForce);
		void CheckLocationForUnbind();
		void PlayEasterEgg();
		void PlayFXOnImpact(double ImpactForce, EPhysicalSurface PhysSurface, const struct FVector& ImpactLocation);
		void PlaySFXOnImpact(double ImpactForce, const struct FVector& ImpactLocation);
		struct FLinearColor GetDefaultRepresentationColor();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ReceiveOnRerail();
		void CargoImpactOnSimulation(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void ReceiveOnCollided(class AFGRailroadVehicle* withVehicle, float ImpactVelocity, bool isPrimaryEvent, bool IsDerailed);
		void StartIsLookedAt(class AFGCharacterPlayer* byCharacter, const struct FUseState& State);
		void StopIsLookedAt(class AFGCharacterPlayer* byCharacter, const struct FUseState& State);
		void ExecuteUbergraph_BP_FreightWagon(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
