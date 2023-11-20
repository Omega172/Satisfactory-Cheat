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
	 * AnimBlueprintGeneratedClass BPA_Truck_Chaos.BPA_Truck_Chaos_C
	 * Size -> 0x0880 (FullSize[0x1490] - InheritedSize[0x0C10])
	 */
	class UBPA_Truck_Chaos_C : public UVehicleAnimationInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0C10(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_PropertyAccess;                   // 0x0C18(0x0008)
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_Base;                             // 0x0C20(0x0008)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0C28(0x0020)
		struct FAnimNode_WheelController                           AnimGraphNode_WheelController;                           // 0x0C48(0x00E0)
		struct FAnimNode_MeshSpaceRefPose                          AnimGraphNode_MeshRefPose;                               // 0x0D28(0x0010)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x0D38(0x0020)
		struct FAnimNode_ControlRig                                AnimGraphNode_ControlRig;                                // 0x0D58(0x0470)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2;                                    // 0x11C8(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x1210(0x0048)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x1258(0x00E0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x1338(0x0108)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x1440(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x1468(0x0028)

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void ExecuteUbergraph_BPA_Truck_Chaos(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
