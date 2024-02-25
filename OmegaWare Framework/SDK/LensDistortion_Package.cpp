/**
 * Name: Satisfactory
 * Version: Early_Access_CL#273254
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x72ADC62D0
	 * 		Name   -> Function LensDistortion.LensDistortionBlueprintLibrary.NotEqual_CompareLensDistortionModels
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FLensDistortionCameraModel                  A                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FLensDistortionCameraModel                  B                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool ULensDistortionBlueprintLibrary::STATIC_NotEqual_CompareLensDistortionModels(const struct FLensDistortionCameraModel& A, const struct FLensDistortionCameraModel& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LensDistortion.LensDistortionBlueprintLibrary.NotEqual_CompareLensDistortionModels");
		
		ULensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x72ADC6110
	 * 		Name   -> Function LensDistortion.LensDistortionBlueprintLibrary.GetUndistortOverscanFactor
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FLensDistortionCameraModel                  CameraModel                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              DistortedHorizontalFOV                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DistortedAspectRatio                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              UndistortOverscanFactor                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULensDistortionBlueprintLibrary::STATIC_GetUndistortOverscanFactor(const struct FLensDistortionCameraModel& CameraModel, float DistortedHorizontalFOV, float DistortedAspectRatio, float* UndistortOverscanFactor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LensDistortion.LensDistortionBlueprintLibrary.GetUndistortOverscanFactor");
		
		ULensDistortionBlueprintLibrary_GetUndistortOverscanFactor_Params params {};
		params.CameraModel = CameraModel;
		params.DistortedHorizontalFOV = DistortedHorizontalFOV;
		params.DistortedAspectRatio = DistortedAspectRatio;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UndistortOverscanFactor != nullptr)
			*UndistortOverscanFactor = params.UndistortOverscanFactor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x72ADC5FC0
	 * 		Name   -> Function LensDistortion.LensDistortionBlueprintLibrary.EqualEqual_CompareLensDistortionModels
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FLensDistortionCameraModel                  A                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FLensDistortionCameraModel                  B                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool ULensDistortionBlueprintLibrary::STATIC_EqualEqual_CompareLensDistortionModels(const struct FLensDistortionCameraModel& A, const struct FLensDistortionCameraModel& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LensDistortion.LensDistortionBlueprintLibrary.EqualEqual_CompareLensDistortionModels");
		
		ULensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x72ADC5CD0
	 * 		Name   -> Function LensDistortion.LensDistortionBlueprintLibrary.DrawUVDisplacementToRenderTarget
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLensDistortionCameraModel                  CameraModel                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              DistortedHorizontalFOV                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DistortedAspectRatio                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              UndistortOverscanFactor                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTextureRenderTarget2D*                      OutputRenderTarget                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutputMultiply                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutputAdd                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULensDistortionBlueprintLibrary::STATIC_DrawUVDisplacementToRenderTarget(class UObject* WorldContextObject, const struct FLensDistortionCameraModel& CameraModel, float DistortedHorizontalFOV, float DistortedAspectRatio, float UndistortOverscanFactor, class UTextureRenderTarget2D* OutputRenderTarget, float OutputMultiply, float OutputAdd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LensDistortion.LensDistortionBlueprintLibrary.DrawUVDisplacementToRenderTarget");
		
		ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.CameraModel = CameraModel;
		params.DistortedHorizontalFOV = DistortedHorizontalFOV;
		params.DistortedAspectRatio = DistortedAspectRatio;
		params.UndistortOverscanFactor = UndistortOverscanFactor;
		params.OutputRenderTarget = OutputRenderTarget;
		params.OutputMultiply = OutputMultiply;
		params.OutputAdd = OutputAdd;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULensDistortionBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULensDistortionBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LensDistortion.LensDistortionBlueprintLibrary");
		return ptr;
	}

}


