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
	 * Class InstancedSplinesComponent.InstancedSplineMeshComponent
	 * Size -> 0x0054 (FullSize[0x07C0] - InheritedSize[0x076C])
	 */
	class UInstancedSplineMeshComponent : public UInstancedStaticMeshComponent
	{
	public:
		unsigned char                                              UnknownData_ER97[0x4];                                   // 0x076C(0x0004) Fix Super Size
		unsigned char                                              UnknownData_H132[0x18];                                  // 0x0770(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSplineMeshInstanceEntry>                    SplineInstances;                                         // 0x0788(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    NumPerInstancePrimitiveDataCountOffset;                  // 0x0798(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSplineDataSettings                                 DefaultSplineShaderBindSettings;                         // 0x079C(0x0014) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       UnknownData_H9C8 : 2;                                    // 0x07B0(0x0001) BIT_FIELD (PADDING)
		bool                                                       bUsesCustomLength : 1;                                   // 0x07B0(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YYGG[0xF];                                   // 0x07B1(0x000F) MISSED OFFSET (PADDING)

	public:
		struct FVector GetInstanceStartTangent(int32_t Instance);
		struct FVector GetInstanceStartPos(int32_t Instance);
		struct FVector GetInstanceEndTangent(int32_t Instance);
		struct FVector GetInstanceEndPos(int32_t Instance);
		int32_t AddSplineInstance(const struct FVector& StartPosition, const struct FVector& StartTangent, const struct FVector& EndPosition, const struct FVector& EndTangent, bool bScaleLength, bool bRotateMesh, bool bMarkDirty);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
