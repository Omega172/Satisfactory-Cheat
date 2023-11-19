/**
 * Name: Satisfactory
 * Version: Early_Access_CL#264901
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x47A9DDA40
	 * 		Name   -> Function IKRig.IKGoalCreatorInterface.AddIKGoals
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TMap<class FName, struct FIKRigGoal>               OutGoals                                                   (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UIKGoalCreatorInterface::AddIKGoals(TMap<class FName, struct FIKRigGoal>* OutGoals)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IKRig.IKGoalCreatorInterface.AddIKGoals");
		
		UIKGoalCreatorInterface_AddIKGoals_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutGoals != nullptr)
			*OutGoals = params.OutGoals;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIKGoalCreatorInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIKGoalCreatorInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IKRig.IKGoalCreatorInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47A9DF7C0
	 * 		Name   -> Function IKRig.IKRigComponent.SetIKRigGoalTransform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        GoalName                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Transform                                                  (ConstParm, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PositionAlpha                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              RotationAlpha                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIKRigComponent::SetIKRigGoalTransform(const class FName& GoalName, const struct FTransform& Transform, float PositionAlpha, float RotationAlpha)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IKRig.IKRigComponent.SetIKRigGoalTransform");
		
		UIKRigComponent_SetIKRigGoalTransform_Params params {};
		params.GoalName = GoalName;
		params.Transform = Transform;
		params.PositionAlpha = PositionAlpha;
		params.RotationAlpha = RotationAlpha;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47A9DF550
	 * 		Name   -> Function IKRig.IKRigComponent.SetIKRigGoalPositionAndRotation
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        GoalName                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FQuat                                       Rotation                                                   (ConstParm, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PositionAlpha                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              RotationAlpha                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIKRigComponent::SetIKRigGoalPositionAndRotation(const class FName& GoalName, const struct FVector& Position, const struct FQuat& Rotation, float PositionAlpha, float RotationAlpha)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IKRig.IKRigComponent.SetIKRigGoalPositionAndRotation");
		
		UIKRigComponent_SetIKRigGoalPositionAndRotation_Params params {};
		params.GoalName = GoalName;
		params.Position = Position;
		params.Rotation = Rotation;
		params.PositionAlpha = PositionAlpha;
		params.RotationAlpha = RotationAlpha;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47A9DF420
	 * 		Name   -> Function IKRig.IKRigComponent.SetIKRigGoal
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FIKRigGoal                                  Goal                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIKRigComponent::SetIKRigGoal(const struct FIKRigGoal& Goal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IKRig.IKRigComponent.SetIKRigGoal");
		
		UIKRigComponent_SetIKRigGoal_Params params {};
		params.Goal = Goal;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47A9DDB90
	 * 		Name   -> Function IKRig.IKRigComponent.ClearAllGoals
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UIKRigComponent::ClearAllGoals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IKRig.IKRigComponent.ClearAllGoals");
		
		UIKRigComponent_ClearAllGoals_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIKRigComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIKRigComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IKRig.IKRigComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIKRigEffectorGoal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIKRigEffectorGoal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IKRig.IKRigEffectorGoal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIKRigDefinition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIKRigDefinition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IKRig.IKRigDefinition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIKRigProcessor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIKRigProcessor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IKRig.IKRigProcessor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIKRigSolver.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIKRigSolver::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IKRig.IKRigSolver");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URetargetChainSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URetargetChainSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IKRig.RetargetChainSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URetargetRootSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URetargetRootSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IKRig.RetargetRootSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIKRetargetGlobalSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIKRetargetGlobalSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IKRig.IKRetargetGlobalSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47A9DF9C0
	 * 		Name   -> Function IKRig.IKRetargeter.SetRootSettingsInRetargetProfile
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FRetargetProfile                            RetargetProfile                                            (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FTargetRootSettings                         RootSettings                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UIKRetargeter::STATIC_SetRootSettingsInRetargetProfile(struct FRetargetProfile* RetargetProfile, const struct FTargetRootSettings& RootSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IKRig.IKRetargeter.SetRootSettingsInRetargetProfile");
		
		UIKRetargeter_SetRootSettingsInRetargetProfile_Params params {};
		params.RootSettings = RootSettings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RetargetProfile != nullptr)
			*RetargetProfile = params.RetargetProfile;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47A9DF2A0
	 * 		Name   -> Function IKRig.IKRetargeter.SetGlobalSettingsInRetargetProfile
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FRetargetProfile                            RetargetProfile                                            (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FRetargetGlobalSettings                     GlobalSettings                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UIKRetargeter::STATIC_SetGlobalSettingsInRetargetProfile(struct FRetargetProfile* RetargetProfile, const struct FRetargetGlobalSettings& GlobalSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IKRig.IKRetargeter.SetGlobalSettingsInRetargetProfile");
		
		UIKRetargeter_SetGlobalSettingsInRetargetProfile_Params params {};
		params.GlobalSettings = GlobalSettings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RetargetProfile != nullptr)
			*RetargetProfile = params.RetargetProfile;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47A9DF0E0
	 * 		Name   -> Function IKRig.IKRetargeter.SetChainSpeedPlantSettingsInRetargetProfile
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FRetargetProfile                            RetargetProfile                                            (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FTargetChainSpeedPlantSettings              SpeedPlantSettings                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FName                                        TargetChainName                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIKRetargeter::STATIC_SetChainSpeedPlantSettingsInRetargetProfile(struct FRetargetProfile* RetargetProfile, const struct FTargetChainSpeedPlantSettings& SpeedPlantSettings, const class FName& TargetChainName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IKRig.IKRetargeter.SetChainSpeedPlantSettingsInRetargetProfile");
		
		UIKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile_Params params {};
		params.SpeedPlantSettings = SpeedPlantSettings;
		params.TargetChainName = TargetChainName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RetargetProfile != nullptr)
			*RetargetProfile = params.RetargetProfile;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47A9DEE80
	 * 		Name   -> Function IKRig.IKRetargeter.SetChainSettingsInRetargetProfile
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FRetargetProfile                            RetargetProfile                                            (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FTargetChainSettings                        ChainSettings                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FName                                        TargetChainName                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIKRetargeter::STATIC_SetChainSettingsInRetargetProfile(struct FRetargetProfile* RetargetProfile, const struct FTargetChainSettings& ChainSettings, const class FName& TargetChainName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IKRig.IKRetargeter.SetChainSettingsInRetargetProfile");
		
		UIKRetargeter_SetChainSettingsInRetargetProfile_Params params {};
		params.ChainSettings = ChainSettings;
		params.TargetChainName = TargetChainName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RetargetProfile != nullptr)
			*RetargetProfile = params.RetargetProfile;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47A9DEC70
	 * 		Name   -> Function IKRig.IKRetargeter.SetChainIKSettingsInRetargetProfile
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FRetargetProfile                            RetargetProfile                                            (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FTargetChainIKSettings                      IKSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FName                                        TargetChainName                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIKRetargeter::STATIC_SetChainIKSettingsInRetargetProfile(struct FRetargetProfile* RetargetProfile, const struct FTargetChainIKSettings& IKSettings, const class FName& TargetChainName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IKRig.IKRetargeter.SetChainIKSettingsInRetargetProfile");
		
		UIKRetargeter_SetChainIKSettingsInRetargetProfile_Params params {};
		params.IKSettings = IKSettings;
		params.TargetChainName = TargetChainName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RetargetProfile != nullptr)
			*RetargetProfile = params.RetargetProfile;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47A9DEAC0
	 * 		Name   -> Function IKRig.IKRetargeter.SetChainFKSettingsInRetargetProfile
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FRetargetProfile                            RetargetProfile                                            (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FTargetChainFKSettings                      FKSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FName                                        TargetChainName                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIKRetargeter::STATIC_SetChainFKSettingsInRetargetProfile(struct FRetargetProfile* RetargetProfile, const struct FTargetChainFKSettings& FKSettings, const class FName& TargetChainName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IKRig.IKRetargeter.SetChainFKSettingsInRetargetProfile");
		
		UIKRetargeter_SetChainFKSettingsInRetargetProfile_Params params {};
		params.FKSettings = FKSettings;
		params.TargetChainName = TargetChainName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RetargetProfile != nullptr)
			*RetargetProfile = params.RetargetProfile;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47A9DE980
	 * 		Name   -> Function IKRig.IKRetargeter.GetRootSettingsFromRetargetProfile
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FRetargetProfile                            RetargetProfile                                            (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FTargetRootSettings UIKRetargeter::STATIC_GetRootSettingsFromRetargetProfile(struct FRetargetProfile* RetargetProfile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IKRig.IKRetargeter.GetRootSettingsFromRetargetProfile");
		
		UIKRetargeter_GetRootSettingsFromRetargetProfile_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RetargetProfile != nullptr)
			*RetargetProfile = params.RetargetProfile;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47A9DE7F0
	 * 		Name   -> Function IKRig.IKRetargeter.GetRootSettingsFromRetargetAsset
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UIKRetargeter*                               RetargetAsset                                              (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        OptionalProfileName                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTargetRootSettings                         OutSettings                                                (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UIKRetargeter::STATIC_GetRootSettingsFromRetargetAsset(class UIKRetargeter* RetargetAsset, const class FName& OptionalProfileName, struct FTargetRootSettings* OutSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IKRig.IKRetargeter.GetRootSettingsFromRetargetAsset");
		
		UIKRetargeter_GetRootSettingsFromRetargetAsset_Params params {};
		params.RetargetAsset = RetargetAsset;
		params.OptionalProfileName = OptionalProfileName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSettings != nullptr)
			*OutSettings = params.OutSettings;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47A9DE6F0
	 * 		Name   -> Function IKRig.IKRetargeter.GetGlobalSettingsFromRetargetProfile
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FRetargetProfile                            RetargetProfile                                            (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FRetargetGlobalSettings UIKRetargeter::STATIC_GetGlobalSettingsFromRetargetProfile(struct FRetargetProfile* RetargetProfile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IKRig.IKRetargeter.GetGlobalSettingsFromRetargetProfile");
		
		UIKRetargeter_GetGlobalSettingsFromRetargetProfile_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RetargetProfile != nullptr)
			*RetargetProfile = params.RetargetProfile;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47A9DE540
	 * 		Name   -> Function IKRig.IKRetargeter.GetGlobalSettingsFromRetargetAsset
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UIKRetargeter*                               RetargetAsset                                              (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        OptionalProfileName                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRetargetGlobalSettings                     OutSettings                                                (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UIKRetargeter::STATIC_GetGlobalSettingsFromRetargetAsset(class UIKRetargeter* RetargetAsset, const class FName& OptionalProfileName, struct FRetargetGlobalSettings* OutSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IKRig.IKRetargeter.GetGlobalSettingsFromRetargetAsset");
		
		UIKRetargeter_GetGlobalSettingsFromRetargetAsset_Params params {};
		params.RetargetAsset = RetargetAsset;
		params.OptionalProfileName = OptionalProfileName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSettings != nullptr)
			*OutSettings = params.OutSettings;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47A9DE210
	 * 		Name   -> Function IKRig.IKRetargeter.GetChainUsingGoalFromRetargetAsset
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UIKRetargeter*                               RetargetAsset                                              (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        IKGoalName                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTargetChainSettings UIKRetargeter::STATIC_GetChainUsingGoalFromRetargetAsset(class UIKRetargeter* RetargetAsset, const class FName& IKGoalName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IKRig.IKRetargeter.GetChainUsingGoalFromRetargetAsset");
		
		UIKRetargeter_GetChainUsingGoalFromRetargetAsset_Params params {};
		params.RetargetAsset = RetargetAsset;
		params.IKGoalName = IKGoalName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47A9DDFF0
	 * 		Name   -> Function IKRig.IKRetargeter.GetChainSettingsFromRetargetProfile
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FRetargetProfile                            RetargetProfile                                            (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FName                                        TargetChainName                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTargetChainSettings UIKRetargeter::STATIC_GetChainSettingsFromRetargetProfile(struct FRetargetProfile* RetargetProfile, const class FName& TargetChainName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IKRig.IKRetargeter.GetChainSettingsFromRetargetProfile");
		
		UIKRetargeter_GetChainSettingsFromRetargetProfile_Params params {};
		params.TargetChainName = TargetChainName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RetargetProfile != nullptr)
			*RetargetProfile = params.RetargetProfile;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47A9DDBC0
	 * 		Name   -> Function IKRig.IKRetargeter.GetChainSettingsFromRetargetAsset
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UIKRetargeter*                               RetargetAsset                                              (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        TargetChainName                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        OptionalProfileName                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTargetChainSettings UIKRetargeter::STATIC_GetChainSettingsFromRetargetAsset(class UIKRetargeter* RetargetAsset, const class FName& TargetChainName, const class FName& OptionalProfileName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IKRig.IKRetargeter.GetChainSettingsFromRetargetAsset");
		
		UIKRetargeter_GetChainSettingsFromRetargetAsset_Params params {};
		params.RetargetAsset = RetargetAsset;
		params.TargetChainName = TargetChainName;
		params.OptionalProfileName = OptionalProfileName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIKRetargeter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIKRetargeter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IKRig.IKRetargeter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIKRetargetProcessor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIKRetargetProcessor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IKRig.IKRetargetProcessor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIKRig_BodyMoverEffector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIKRig_BodyMoverEffector::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IKRig.IKRig_BodyMoverEffector");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIKRig_BodyMover.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIKRig_BodyMover::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IKRig.IKRig_BodyMover");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIKRig_LimbEffector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIKRig_LimbEffector::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IKRig.IKRig_LimbEffector");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIKRig_LimbSolver.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIKRig_LimbSolver::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IKRig.IKRig_LimbSolver");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIKRig_FBIKEffector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIKRig_FBIKEffector::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IKRig.IKRig_FBIKEffector");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIKRig_FBIKBoneSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIKRig_FBIKBoneSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IKRig.IKRig_FBIKBoneSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIKRigFBIKSolver.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIKRigFBIKSolver::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IKRig.IKRigFBIKSolver");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIKRig_PoleSolverEffector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIKRig_PoleSolverEffector::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IKRig.IKRig_PoleSolverEffector");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIKRig_PoleSolver.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIKRig_PoleSolver::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IKRig.IKRig_PoleSolver");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIKRig_SetTransformEffector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIKRig_SetTransformEffector::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IKRig.IKRig_SetTransformEffector");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIKRig_SetTransform.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIKRig_SetTransform::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IKRig.IKRig_SetTransform");
		return ptr;
	}

}


