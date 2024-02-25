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
	 * BlueprintGeneratedClass BP_NobeliskGasCloud.BP_NobeliskGasCloud_C
	 * Size -> 0x0048 (FullSize[0x0340] - InheritedSize[0x02F8])
	 */
	class ABP_NobeliskGasCloud_C : public AActor
	{
	public:
		unsigned char                                              UnknownData_XWT8[0x8];                                   // 0x02F8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0300(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UFGDotComponent*                                     FGDot;                                                   // 0x0308(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    Sphere;                                                  // 0x0310(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0318(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_1_NewTrack_0_B00A903C4961A2DB283E3EB11165872C;  // 0x0320(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_1__Direction_B00A903C4961A2DB283E3EB11165872C;  // 0x0324(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SCVN[0x3];                                   // 0x0325(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_2;                                              // 0x0328(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_0_NewTrack_0_335AF7BC40BC1F2CBEA67380EF201FF5;  // 0x0330(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_0__Direction_335AF7BC40BC1F2CBEA67380EF201FF5;  // 0x0334(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_M4Z7[0x3];                                   // 0x0335(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x0338(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash

	public:
		void Timeline_1__FinishedFunc();
		void Timeline_1__UpdateFunc();
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_NobeliskGasCloud(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
