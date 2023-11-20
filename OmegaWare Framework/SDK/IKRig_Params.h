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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function IKRig.IKGoalCreatorInterface.AddIKGoals
	 */
	struct UIKGoalCreatorInterface_AddIKGoals_Params
	{
	public:
		TMap<class FName, struct FIKRigGoal>                       OutGoals;                                                // 0x0000(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IKRig.IKRigComponent.SetIKRigGoalTransform
	 */
	struct UIKRigComponent_SetIKRigGoalTransform_Params
	{
	public:
		class FName                                                GoalName;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MA9Y[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Transform;                                               // 0x0010(0x0060)  (ConstParm, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      PositionAlpha;                                           // 0x0070(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      RotationAlpha;                                           // 0x0074(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IKRig.IKRigComponent.SetIKRigGoalPositionAndRotation
	 */
	struct UIKRigComponent_SetIKRigGoalPositionAndRotation_Params
	{
	public:
		class FName                                                GoalName;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Position;                                                // 0x0008(0x0018)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FQuat                                               Rotation;                                                // 0x0020(0x0020)  (ConstParm, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      PositionAlpha;                                           // 0x0040(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      RotationAlpha;                                           // 0x0044(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IKRig.IKRigComponent.SetIKRigGoal
	 */
	struct UIKRigComponent_SetIKRigGoal_Params
	{
	public:
		struct FIKRigGoal                                          Goal;                                                    // 0x0000(0x00A0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IKRig.IKRigComponent.ClearAllGoals
	 */
	struct UIKRigComponent_ClearAllGoals_Params
	{	};

	/**
	 * Function IKRig.IKRetargeter.SetRootSettingsInRetargetProfile
	 */
	struct UIKRetargeter_SetRootSettingsInRetargetProfile_Params
	{
	public:
		struct FRetargetProfile                                    RetargetProfile;                                         // 0x0000(0x0108)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FTargetRootSettings                                 RootSettings;                                            // 0x0108(0x0068)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IKRig.IKRetargeter.SetGlobalSettingsInRetargetProfile
	 */
	struct UIKRetargeter_SetGlobalSettingsInRetargetProfile_Params
	{
	public:
		struct FRetargetProfile                                    RetargetProfile;                                         // 0x0000(0x0108)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FRetargetGlobalSettings                             GlobalSettings;                                          // 0x0108(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IKRig.IKRetargeter.SetChainSpeedPlantSettingsInRetargetProfile
	 */
	struct UIKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile_Params
	{
	public:
		struct FRetargetProfile                                    RetargetProfile;                                         // 0x0000(0x0108)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FTargetChainSpeedPlantSettings                      SpeedPlantSettings;                                      // 0x0108(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FName                                                TargetChainName;                                         // 0x0120(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IKRig.IKRetargeter.SetChainSettingsInRetargetProfile
	 */
	struct UIKRetargeter_SetChainSettingsInRetargetProfile_Params
	{
	public:
		struct FRetargetProfile                                    RetargetProfile;                                         // 0x0000(0x0108)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FTargetChainSettings                                ChainSettings;                                           // 0x0108(0x00A8)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FName                                                TargetChainName;                                         // 0x01B0(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IKRig.IKRetargeter.SetChainIKSettingsInRetargetProfile
	 */
	struct UIKRetargeter_SetChainIKSettingsInRetargetProfile_Params
	{
	public:
		struct FRetargetProfile                                    RetargetProfile;                                         // 0x0000(0x0108)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FTargetChainIKSettings                              IKSettings;                                              // 0x0108(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FName                                                TargetChainName;                                         // 0x0180(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IKRig.IKRetargeter.SetChainFKSettingsInRetargetProfile
	 */
	struct UIKRetargeter_SetChainFKSettingsInRetargetProfile_Params
	{
	public:
		struct FRetargetProfile                                    RetargetProfile;                                         // 0x0000(0x0108)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FTargetChainFKSettings                              FKSettings;                                              // 0x0108(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FName                                                TargetChainName;                                         // 0x0120(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IKRig.IKRetargeter.GetRootSettingsFromRetargetProfile
	 */
	struct UIKRetargeter_GetRootSettingsFromRetargetProfile_Params
	{
	public:
		struct FRetargetProfile                                    RetargetProfile;                                         // 0x0000(0x0108)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FTargetRootSettings                                 ReturnValue;                                             // 0x0108(0x0068)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IKRig.IKRetargeter.GetRootSettingsFromRetargetAsset
	 */
	struct UIKRetargeter_GetRootSettingsFromRetargetAsset_Params
	{
	public:
		class UIKRetargeter*                                       RetargetAsset;                                           // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OptionalProfileName;                                     // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTargetRootSettings                                 OutSettings;                                             // 0x0010(0x0068)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IKRig.IKRetargeter.GetGlobalSettingsFromRetargetProfile
	 */
	struct UIKRetargeter_GetGlobalSettingsFromRetargetProfile_Params
	{
	public:
		struct FRetargetProfile                                    RetargetProfile;                                         // 0x0000(0x0108)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FRetargetGlobalSettings                             ReturnValue;                                             // 0x0108(0x0020)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IKRig.IKRetargeter.GetGlobalSettingsFromRetargetAsset
	 */
	struct UIKRetargeter_GetGlobalSettingsFromRetargetAsset_Params
	{
	public:
		class UIKRetargeter*                                       RetargetAsset;                                           // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OptionalProfileName;                                     // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRetargetGlobalSettings                             OutSettings;                                             // 0x0010(0x0020)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IKRig.IKRetargeter.GetChainUsingGoalFromRetargetAsset
	 */
	struct UIKRetargeter_GetChainUsingGoalFromRetargetAsset_Params
	{
	public:
		class UIKRetargeter*                                       RetargetAsset;                                           // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                IKGoalName;                                              // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTargetChainSettings                                ReturnValue;                                             // 0x0010(0x00A8)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IKRig.IKRetargeter.GetChainSettingsFromRetargetProfile
	 */
	struct UIKRetargeter_GetChainSettingsFromRetargetProfile_Params
	{
	public:
		struct FRetargetProfile                                    RetargetProfile;                                         // 0x0000(0x0108)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FName                                                TargetChainName;                                         // 0x0108(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTargetChainSettings                                ReturnValue;                                             // 0x0110(0x00A8)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IKRig.IKRetargeter.GetChainSettingsFromRetargetAsset
	 */
	struct UIKRetargeter_GetChainSettingsFromRetargetAsset_Params
	{
	public:
		class UIKRetargeter*                                       RetargetAsset;                                           // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                TargetChainName;                                         // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OptionalProfileName;                                     // 0x0010(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTargetChainSettings                                ReturnValue;                                             // 0x0018(0x00A8)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
