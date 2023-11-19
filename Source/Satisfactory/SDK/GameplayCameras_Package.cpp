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
	 * 		RVA    -> 0x47A95D440
	 * 		Name   -> Function GameplayCameras.LegacyCameraShake.StartLegacyCameraShakeFromSource
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerCameraManager*                        PlayerCameraManager                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      ShakeClass                                                 (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCameraShakeSourceComponent*                 SourceComponent                                            (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECameraShakePlaySpace                              PlaySpace                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    UserPlaySpaceRot                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class ULegacyCameraShake* ULegacyCameraShake::STATIC_StartLegacyCameraShakeFromSource(class APlayerCameraManager* PlayerCameraManager, class UClass* ShakeClass, class UCameraShakeSourceComponent* SourceComponent, float Scale, ECameraShakePlaySpace PlaySpace, const struct FRotator& UserPlaySpaceRot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayCameras.LegacyCameraShake.StartLegacyCameraShakeFromSource");
		
		ULegacyCameraShake_StartLegacyCameraShakeFromSource_Params params {};
		params.PlayerCameraManager = PlayerCameraManager;
		params.ShakeClass = ShakeClass;
		params.SourceComponent = SourceComponent;
		params.Scale = Scale;
		params.PlaySpace = PlaySpace;
		params.UserPlaySpaceRot = UserPlaySpaceRot;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47A95D210
	 * 		Name   -> Function GameplayCameras.LegacyCameraShake.StartLegacyCameraShake
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerCameraManager*                        PlayerCameraManager                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      ShakeClass                                                 (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECameraShakePlaySpace                              PlaySpace                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    UserPlaySpaceRot                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class ULegacyCameraShake* ULegacyCameraShake::STATIC_StartLegacyCameraShake(class APlayerCameraManager* PlayerCameraManager, class UClass* ShakeClass, float Scale, ECameraShakePlaySpace PlaySpace, const struct FRotator& UserPlaySpaceRot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayCameras.LegacyCameraShake.StartLegacyCameraShake");
		
		ULegacyCameraShake_StartLegacyCameraShake_Params params {};
		params.PlayerCameraManager = PlayerCameraManager;
		params.ShakeClass = ShakeClass;
		params.Scale = Scale;
		params.PlaySpace = PlaySpace;
		params.UserPlaySpaceRot = UserPlaySpaceRot;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function GameplayCameras.LegacyCameraShake.ReceiveStopShake
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bImmediately                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULegacyCameraShake::ReceiveStopShake(bool bImmediately)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayCameras.LegacyCameraShake.ReceiveStopShake");
		
		ULegacyCameraShake_ReceiveStopShake_Params params {};
		params.bImmediately = bImmediately;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function GameplayCameras.LegacyCameraShake.ReceivePlayShake
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULegacyCameraShake::ReceivePlayShake(float Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayCameras.LegacyCameraShake.ReceivePlayShake");
		
		ULegacyCameraShake_ReceivePlayShake_Params params {};
		params.Scale = Scale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47A95D1E0
	 * 		Name   -> Function GameplayCameras.LegacyCameraShake.ReceiveIsFinished
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent, Const)
	 */
	bool ULegacyCameraShake::ReceiveIsFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayCameras.LegacyCameraShake.ReceiveIsFinished");
		
		ULegacyCameraShake_ReceiveIsFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function GameplayCameras.LegacyCameraShake.BlueprintUpdateCameraShake
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Alpha                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMinimalViewInfo                            POV                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FMinimalViewInfo                            ModifiedPOV                                                (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void ULegacyCameraShake::BlueprintUpdateCameraShake(float DeltaTime, float Alpha, const struct FMinimalViewInfo& POV, struct FMinimalViewInfo* ModifiedPOV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayCameras.LegacyCameraShake.BlueprintUpdateCameraShake");
		
		ULegacyCameraShake_BlueprintUpdateCameraShake_Params params {};
		params.DeltaTime = DeltaTime;
		params.Alpha = Alpha;
		params.POV = POV;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModifiedPOV != nullptr)
			*ModifiedPOV = params.ModifiedPOV;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULegacyCameraShake.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULegacyCameraShake::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayCameras.LegacyCameraShake");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULegacyCameraShakePattern.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULegacyCameraShakePattern::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayCameras.LegacyCameraShakePattern");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47A95C1F0
	 * 		Name   -> Function GameplayCameras.LegacyCameraShakeFunctionLibrary.Conv_LegacyCameraShake
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UCameraShakeBase*                            CameraShake                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULegacyCameraShake* ULegacyCameraShakeFunctionLibrary::STATIC_Conv_LegacyCameraShake(class UCameraShakeBase* CameraShake)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayCameras.LegacyCameraShakeFunctionLibrary.Conv_LegacyCameraShake");
		
		ULegacyCameraShakeFunctionLibrary_Conv_LegacyCameraShake_Params params {};
		params.CameraShake = CameraShake;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULegacyCameraShakeFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULegacyCameraShakeFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayCameras.LegacyCameraShakeFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47A95DBC0
	 * 		Name   -> Function GameplayCameras.CameraAnimationCameraModifier.StopCameraAnimation
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FCameraAnimationHandle                      Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bImmediate                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCameraAnimationCameraModifier::StopCameraAnimation(const struct FCameraAnimationHandle& Handle, bool bImmediate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayCameras.CameraAnimationCameraModifier.StopCameraAnimation");
		
		UCameraAnimationCameraModifier_StopCameraAnimation_Params params {};
		params.Handle = Handle;
		params.bImmediate = bImmediate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47A95D8D0
	 * 		Name   -> Function GameplayCameras.CameraAnimationCameraModifier.StopAllCameraAnimationsOf
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UCameraAnimationSequence*                    Sequence                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bImmediate                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCameraAnimationCameraModifier::StopAllCameraAnimationsOf(class UCameraAnimationSequence* Sequence, bool bImmediate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayCameras.CameraAnimationCameraModifier.StopAllCameraAnimationsOf");
		
		UCameraAnimationCameraModifier_StopAllCameraAnimationsOf_Params params {};
		params.Sequence = Sequence;
		params.bImmediate = bImmediate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47A95D670
	 * 		Name   -> Function GameplayCameras.CameraAnimationCameraModifier.StopAllCameraAnimations
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bImmediate                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCameraAnimationCameraModifier::StopAllCameraAnimations(bool bImmediate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayCameras.CameraAnimationCameraModifier.StopAllCameraAnimations");
		
		UCameraAnimationCameraModifier_StopAllCameraAnimations_Params params {};
		params.bImmediate = bImmediate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47A95C910
	 * 		Name   -> Function GameplayCameras.CameraAnimationCameraModifier.PlayCameraAnimation
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UCameraAnimationSequence*                    Sequence                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCameraAnimationParams                      Params                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FCameraAnimationHandle UCameraAnimationCameraModifier::PlayCameraAnimation(class UCameraAnimationSequence* Sequence, const struct FCameraAnimationParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayCameras.CameraAnimationCameraModifier.PlayCameraAnimation");
		
		UCameraAnimationCameraModifier_PlayCameraAnimation_Params params {};
		params.Sequence = Sequence;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47A95C620
	 * 		Name   -> Function GameplayCameras.CameraAnimationCameraModifier.IsCameraAnimationActive
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FCameraAnimationHandle                      Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCameraAnimationCameraModifier::IsCameraAnimationActive(const struct FCameraAnimationHandle& Handle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayCameras.CameraAnimationCameraModifier.IsCameraAnimationActive");
		
		UCameraAnimationCameraModifier_IsCameraAnimationActive_Params params {};
		params.Handle = Handle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47A95C4B0
	 * 		Name   -> Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifierFromPlayerController
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCameraAnimationCameraModifier* UCameraAnimationCameraModifier::STATIC_GetCameraAnimationCameraModifierFromPlayerController(class APlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifierFromPlayerController");
		
		UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromPlayerController_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47A95C3D0
	 * 		Name   -> Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifierFromID
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ControllerId                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCameraAnimationCameraModifier* UCameraAnimationCameraModifier::STATIC_GetCameraAnimationCameraModifierFromID(class UObject* WorldContextObject, int32_t ControllerId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifierFromID");
		
		UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromID_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ControllerId = ControllerId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47A95C2F0
	 * 		Name   -> Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifier
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PlayerIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCameraAnimationCameraModifier* UCameraAnimationCameraModifier::STATIC_GetCameraAnimationCameraModifier(class UObject* WorldContextObject, int32_t PlayerIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifier");
		
		UCameraAnimationCameraModifier_GetCameraAnimationCameraModifier_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PlayerIndex = PlayerIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCameraAnimationCameraModifier.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCameraAnimationCameraModifier::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayCameras.CameraAnimationCameraModifier");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47A95C130
	 * 		Name   -> Function GameplayCameras.GameplayCamerasFunctionLibrary.Conv_CameraShakePlaySpace
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		ECameraAnimationPlaySpace                          CameraAnimationPlaySpace                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	ECameraShakePlaySpace UGameplayCamerasFunctionLibrary::STATIC_Conv_CameraShakePlaySpace(ECameraAnimationPlaySpace CameraAnimationPlaySpace)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayCameras.GameplayCamerasFunctionLibrary.Conv_CameraShakePlaySpace");
		
		UGameplayCamerasFunctionLibrary_Conv_CameraShakePlaySpace_Params params {};
		params.CameraAnimationPlaySpace = CameraAnimationPlaySpace;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47A95C130
	 * 		Name   -> Function GameplayCameras.GameplayCamerasFunctionLibrary.Conv_CameraAnimationPlaySpace
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		ECameraShakePlaySpace                              CameraShakePlaySpace                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	ECameraAnimationPlaySpace UGameplayCamerasFunctionLibrary::STATIC_Conv_CameraAnimationPlaySpace(ECameraShakePlaySpace CameraShakePlaySpace)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayCameras.GameplayCamerasFunctionLibrary.Conv_CameraAnimationPlaySpace");
		
		UGameplayCamerasFunctionLibrary_Conv_CameraAnimationPlaySpace_Params params {};
		params.CameraShakePlaySpace = CameraShakePlaySpace;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47A95C050
	 * 		Name   -> Function GameplayCameras.GameplayCamerasFunctionLibrary.Conv_CameraAnimationCameraModifier
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class APlayerCameraManager*                        PlayerCameraManager                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCameraAnimationCameraModifier* UGameplayCamerasFunctionLibrary::STATIC_Conv_CameraAnimationCameraModifier(class APlayerCameraManager* PlayerCameraManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayCameras.GameplayCamerasFunctionLibrary.Conv_CameraAnimationCameraModifier");
		
		UGameplayCamerasFunctionLibrary_Conv_CameraAnimationCameraModifier_Params params {};
		params.PlayerCameraManager = PlayerCameraManager;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameplayCamerasFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayCamerasFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayCameras.GameplayCamerasFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCompositeCameraShakePattern.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCompositeCameraShakePattern::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayCameras.CompositeCameraShakePattern");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDefaultCameraShakeBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDefaultCameraShakeBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayCameras.DefaultCameraShakeBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47A95DCA0
	 * 		Name   -> Function GameplayCameras.GameplayCamerasSubsystem.StopCameraAnimation
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCameraAnimationHandle                      Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bImmediate                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameplayCamerasSubsystem::StopCameraAnimation(class APlayerController* PlayerController, const struct FCameraAnimationHandle& Handle, bool bImmediate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayCameras.GameplayCamerasSubsystem.StopCameraAnimation");
		
		UGameplayCamerasSubsystem_StopCameraAnimation_Params params {};
		params.PlayerController = PlayerController;
		params.Handle = Handle;
		params.bImmediate = bImmediate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47A95D9B0
	 * 		Name   -> Function GameplayCameras.GameplayCamerasSubsystem.StopAllCameraAnimationsOf
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCameraAnimationSequence*                    Sequence                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bImmediate                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameplayCamerasSubsystem::StopAllCameraAnimationsOf(class APlayerController* PlayerController, class UCameraAnimationSequence* Sequence, bool bImmediate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayCameras.GameplayCamerasSubsystem.StopAllCameraAnimationsOf");
		
		UGameplayCamerasSubsystem_StopAllCameraAnimationsOf_Params params {};
		params.PlayerController = PlayerController;
		params.Sequence = Sequence;
		params.bImmediate = bImmediate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47A95D700
	 * 		Name   -> Function GameplayCameras.GameplayCamerasSubsystem.StopAllCameraAnimations
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bImmediate                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameplayCamerasSubsystem::StopAllCameraAnimations(class APlayerController* PlayerController, bool bImmediate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayCameras.GameplayCamerasSubsystem.StopAllCameraAnimations");
		
		UGameplayCamerasSubsystem_StopAllCameraAnimations_Params params {};
		params.PlayerController = PlayerController;
		params.bImmediate = bImmediate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47A95CCF0
	 * 		Name   -> Function GameplayCameras.GameplayCamerasSubsystem.PlayCameraAnimation
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCameraAnimationSequence*                    Sequence                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCameraAnimationParams                      Params                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FCameraAnimationHandle UGameplayCamerasSubsystem::PlayCameraAnimation(class APlayerController* PlayerController, class UCameraAnimationSequence* Sequence, const struct FCameraAnimationParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayCameras.GameplayCamerasSubsystem.PlayCameraAnimation");
		
		UGameplayCamerasSubsystem_PlayCameraAnimation_Params params {};
		params.PlayerController = PlayerController;
		params.Sequence = Sequence;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47A95C700
	 * 		Name   -> Function GameplayCameras.GameplayCamerasSubsystem.IsCameraAnimationActive
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCameraAnimationHandle                      Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGameplayCamerasSubsystem::IsCameraAnimationActive(class APlayerController* PlayerController, const struct FCameraAnimationHandle& Handle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayCameras.GameplayCamerasSubsystem.IsCameraAnimationActive");
		
		UGameplayCamerasSubsystem_IsCameraAnimationActive_Params params {};
		params.PlayerController = PlayerController;
		params.Handle = Handle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameplayCamerasSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayCamerasSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayCameras.GameplayCamerasSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USimpleCameraShakePattern.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USimpleCameraShakePattern::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayCameras.SimpleCameraShakePattern");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPerlinNoiseCameraShakePattern.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPerlinNoiseCameraShakePattern::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayCameras.PerlinNoiseCameraShakePattern");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTestCameraShake.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTestCameraShake::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayCameras.TestCameraShake");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConstantCameraShakePattern.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConstantCameraShakePattern::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayCameras.ConstantCameraShakePattern");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaveOscillatorCameraShakePattern.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaveOscillatorCameraShakePattern::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayCameras.WaveOscillatorCameraShakePattern");
		return ptr;
	}

}


