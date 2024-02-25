#pragma once

/**
 * Name: Satisfactory
 * Version: Early_Access_CL#273254
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
	 * BlueprintGeneratedClass FGCinematicConveyorBeltBase.FGCinematicConveyorBeltBase_C
	 * Size -> 0x00C0 (FullSize[0x03B8] - InheritedSize[0x02F8])
	 */
	class AFGCinematicConveyorBeltBase_C : public AActor
	{
	public:
		unsigned char                                              UnknownData_7AMB[0x8];                                   // 0x02F8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0300(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USkeletalMeshComponent*                              Dogo;                                                    // 0x0308(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USplineComponent*                                    mSpline;                                                 // 0x0310(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0318(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     mConveyorMeshLength;                                     // 0x0320(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mSplineLength;                                           // 0x0328(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mItemSpacing;                                            // 0x0330(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              mDescriptor;                                             // 0x0338(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         mConveyorMesh;                                           // 0x0340(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumInstances;                                            // 0x0348(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MVU5[0x4];                                   // 0x034C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     Offset;                                                  // 0x0350(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mMovementSpeed;                                          // 0x0358(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		double                                                     ItemSpacing_mod;                                         // 0x0360(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     MovementSpeed_mod;                                       // 0x0368(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<double>                                             primitivedata;                                           // 0x0370(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		class UStaticMesh*                                         mOverridenBeltMesh;                                      // 0x0380(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		struct FVector                                             mDefaultColor;                                           // 0x0388(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bRandomDogo;                                             // 0x03A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CYZW[0x3];                                   // 0x03A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    mDogoID;                                                 // 0x03A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UMeshComponent*>                              Items;                                                   // 0x03A8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		void UpdateTransforms(double Offset, TArray<struct FTransform>* Transforms1);
		void SetupMeshes(class UStaticMesh* Mesh);
		void SetupSpline(TArray<struct FSplinePointData>* InPoints);
		void UserConstructionScript();
		void OnNotifyEnd_7E297705416152E6B54AF5A6AA930BFA(const class FName& NotifyName);
		void OnNotifyBegin_7E297705416152E6B54AF5A6AA930BFA(const class FName& NotifyName);
		void OnInterrupted_7E297705416152E6B54AF5A6AA930BFA(const class FName& NotifyName);
		void OnBlendOut_7E297705416152E6B54AF5A6AA930BFA(const class FName& NotifyName);
		void OnCompleted_7E297705416152E6B54AF5A6AA930BFA(const class FName& NotifyName);
		void ReceiveTick(float DeltaSeconds);
		void ReceiveBeginPlay();
		void restart();
		void ExecuteUbergraph_FGCinematicConveyorBeltBase(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
