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
	 * BlueprintGeneratedClass BP_MaterialEffect_Dismantle.BP_MaterialEffect_Dismantle_C
	 * Size -> 0x00B0 (FullSize[0x0240] - InheritedSize[0x0190])
	 */
	class UBP_MaterialEffect_Dismantle_C : public UFGMaterialEffect_Build
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0190(0x0008) ZeroConstructor, Transient, DuplicateTransient
		double                                                     mElapsedTime;                                            // 0x0198(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mMaterializeDuration;                                    // 0x01A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRuntimeFloatCurve                                  mMaterializeCurve;                                       // 0x01A8(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UStaticMeshComponent*>                        mAditionalMeshes;                                        // 0x0230(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		void OnStarted();
		void OnUpdate(float DeltaTime);
		void PreStarted();
		void ExecuteUbergraph_BP_MaterialEffect_Dismantle(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
