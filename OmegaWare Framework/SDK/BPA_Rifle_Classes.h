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
	 * AnimBlueprintGeneratedClass BPA_Rifle.BPA_Rifle_C
	 * Size -> 0x0A90 (FullSize[0x0DD8] - InheritedSize[0x0348])
	 */
	class UBPA_Rifle_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_BQLU[0x8];                                   // 0x0348(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0350(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_PropertyAccess;                   // 0x0358(0x0008)
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_Base;                             // 0x0360(0x0008)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0368(0x0020)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x0388(0x0048)
		struct FAnimNode_RigidBody                                 AnimGraphNode_RigidBody;                                 // 0x03D0(0x09B0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x0D80(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x0DA0(0x0020)
		struct FAnimNode_RefPose                                   AnimGraphNode_LocalRefPose;                              // 0x0DC0(0x0010)
		class AFGWeapon*                                           mWeaponRef;                                              // 0x0DD0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void SetReloadedOnce(bool HasReloadedOnce);
		void BlueprintInitializeAnimation();
		void AnimNotify_FGHideEjectMagazine();
		void AnimNotify_HideCurrentAmmo();
		void AnimNotify_ShowCurrentAmmo();
		void ExecuteUbergraph_BPA_Rifle(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
