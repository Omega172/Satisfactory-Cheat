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
	 * AnimBlueprintGeneratedClass BPA_1pZipline.BPA_1pZipline_C
	 * Size -> 0x0330 (FullSize[0x0840] - InheritedSize[0x0510])
	 */
	class UBPA_1pZipline_C : public UFGAnimPlayer
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct UBPA_1pZipline_C_FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                                 // 0x0518(0x000C) HasGetValueTypeHash
		unsigned char                                              UnknownData_LEA6[0x4];                                   // 0x0524(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_PropertyAccess;                   // 0x0528(0x0008)
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_Base;                             // 0x0530(0x0008)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0538(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x0558(0x0128)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x0680(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x06A0(0x0020)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x06C0(0x0048)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace;                  // 0x0708(0x0118)
		double                                                     mZiplineAimYaw;                                          // 0x0820(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            mAimPitchRotator;                                        // 0x0828(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_BPA_1pZipline(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
