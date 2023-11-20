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
	 * BlueprintGeneratedClass BP_CaveFloor.BP_CaveFloor_C
	 * Size -> 0x0082 (FullSize[0x037A] - InheritedSize[0x02F8])
	 */
	class ABP_CaveFloor_C : public AActor
	{
	public:
		unsigned char                                              UnknownData_WVMS[0x8];                                   // 0x02F8(0x0008) Fix Super Size
		class USceneComponent*                                     TopScene;                                                // 0x0300(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USplineComponent*                                    Spline;                                                  // 0x0308(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UMaterialInstance*                                   mSplineMaterial;                                         // 0x0310(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumberOfSplinePoints;                                    // 0x0318(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_D9FM[0x4];                                   // 0x031C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCaveData>                                   CaveDataArray;                                           // 0x0320(0x0010) Edit, BlueprintVisible
		class UStaticMesh*                                         mCaveMesh;                                               // 0x0330(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		struct FCaveData                                           CaveMeshDefaults;                                        // 0x0338(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         mEntranceMesh;                                           // 0x0350(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         mExitMesh;                                               // 0x0358(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		bool                                                       DrawCavePointNumbers;                                    // 0x0360(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UL23[0x7];                                   // 0x0361(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CurrentCavePoint;                                        // 0x0368(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       mSwitchEntrenceAndExit;                                  // 0x0378(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       mEnableCollision;                                        // 0x0379(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetEntrenceAndExitIndex(int32_t* entrence, int32_t* Exit);
		void GetStaticMeshForIndex(int32_t Index, class UStaticMesh** NewParam);
		void BuildCaveElement();
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
