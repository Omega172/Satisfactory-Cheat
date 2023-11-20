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
	 * AnimBlueprintGeneratedClass BPA_Explorer.BPA_Explorer_C
	 * Size -> 0x0700 (FullSize[0x1310] - InheritedSize[0x0C10])
	 */
	class UBPA_Explorer_C : public UFGWheeledVehicleAnimationInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0C10(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_PropertyAccess;                   // 0x0C18(0x0008)
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_Base;                             // 0x0C20(0x0008)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0C28(0x0020)
		struct FAnimNode_MeshSpaceRefPose                          AnimGraphNode_MeshRefPose;                               // 0x0C48(0x0010)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x0C58(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x0C78(0x0128)
		struct FAnimNode_WheelController                           AnimGraphNode_WheelController;                           // 0x0DA0(0x00E0)
		struct FAnimNode_ControlRig                                AnimGraphNode_ControlRig;                                // 0x0E80(0x0470)
		struct FRotator                                            mSteerAngle;                                             // 0x12F0(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class AFGWheeledVehicle*                                   mVehicleReference;                                       // 0x1308(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void BlueprintInitializeAnimation();
		void ExecuteUbergraph_BPA_Explorer(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
