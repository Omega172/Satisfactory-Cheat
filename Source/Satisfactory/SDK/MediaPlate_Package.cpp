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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMediaPlate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMediaPlate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MediaPlate.MediaPlate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMediaPlateAssetUserData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMediaPlateAssetUserData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MediaPlate.MediaPlateAssetUserData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x473B07180
	 * 		Name   -> Function MediaPlate.MediaPlateComponent.SetPlayOnlyWhenVisible
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInPlayOnlyWhenVisible                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMediaPlateComponent::SetPlayOnlyWhenVisible(bool bInPlayOnlyWhenVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaPlate.MediaPlateComponent.SetPlayOnlyWhenVisible");
		
		UMediaPlateComponent_SetPlayOnlyWhenVisible_Params params {};
		params.bInPlayOnlyWhenVisible = bInPlayOnlyWhenVisible;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x473B070F0
	 * 		Name   -> Function MediaPlate.MediaPlateComponent.SetMeshRange
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector2D                                   InMeshRange                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMediaPlateComponent::SetMeshRange(const struct FVector2D& InMeshRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaPlate.MediaPlateComponent.SetMeshRange");
		
		UMediaPlateComponent_SetMeshRange_Params params {};
		params.InMeshRange = InMeshRange;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x473B07040
	 * 		Name   -> Function MediaPlate.MediaPlateComponent.SetLoop
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInLoop                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMediaPlateComponent::SetLoop(bool bInLoop)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaPlate.MediaPlateComponent.SetLoop");
		
		UMediaPlateComponent_SetLoop_Params params {};
		params.bInLoop = bInLoop;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x473B06F90
	 * 		Name   -> Function MediaPlate.MediaPlateComponent.SetLetterboxAspectRatio
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              AspectRatio                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMediaPlateComponent::SetLetterboxAspectRatio(float AspectRatio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaPlate.MediaPlateComponent.SetLetterboxAspectRatio");
		
		UMediaPlateComponent_SetLetterboxAspectRatio_Params params {};
		params.AspectRatio = AspectRatio;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x473B06EF0
	 * 		Name   -> Function MediaPlate.MediaPlateComponent.SetIsAspectRatioAuto
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInIsAspectRatioAuto                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMediaPlateComponent::SetIsAspectRatioAuto(bool bInIsAspectRatioAuto)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaPlate.MediaPlateComponent.SetIsAspectRatioAuto");
		
		UMediaPlateComponent_SetIsAspectRatioAuto_Params params {};
		params.bInIsAspectRatioAuto = bInIsAspectRatioAuto;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x473B06E30
	 * 		Name   -> Function MediaPlate.MediaPlateComponent.Seek
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FTimespan                                   Time                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMediaPlateComponent::Seek(const struct FTimespan& Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaPlate.MediaPlateComponent.Seek");
		
		UMediaPlateComponent_Seek_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x473B06DE0
	 * 		Name   -> Function MediaPlate.MediaPlateComponent.Rewind
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UMediaPlateComponent::Rewind()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaPlate.MediaPlateComponent.Rewind");
		
		UMediaPlateComponent_Rewind_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x473B06DA0
	 * 		Name   -> Function MediaPlate.MediaPlateComponent.Play
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UMediaPlateComponent::Play()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaPlate.MediaPlateComponent.Play");
		
		UMediaPlateComponent_Play_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x473B06D60
	 * 		Name   -> Function MediaPlate.MediaPlateComponent.Pause
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UMediaPlateComponent::Pause()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaPlate.MediaPlateComponent.Pause");
		
		UMediaPlateComponent_Pause_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x473B06D40
	 * 		Name   -> Function MediaPlate.MediaPlateComponent.Open
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UMediaPlateComponent::Open()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaPlate.MediaPlateComponent.Open");
		
		UMediaPlateComponent_Open_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x473B06C50
	 * 		Name   -> Function MediaPlate.MediaPlateComponent.OnMediaOpened
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class FString                                      DeviceUrl                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMediaPlateComponent::OnMediaOpened(const class FString& DeviceUrl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaPlate.MediaPlateComponent.OnMediaOpened");
		
		UMediaPlateComponent_OnMediaOpened_Params params {};
		params.DeviceUrl = DeviceUrl;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x473B06C20
	 * 		Name   -> Function MediaPlate.MediaPlateComponent.OnMediaEnd
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UMediaPlateComponent::OnMediaEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaPlate.MediaPlateComponent.OnMediaEnd");
		
		UMediaPlateComponent_OnMediaEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x473B06C00
	 * 		Name   -> Function MediaPlate.MediaPlateComponent.IsMediaPlatePlaying
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UMediaPlateComponent::IsMediaPlatePlaying()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaPlate.MediaPlateComponent.IsMediaPlatePlaying");
		
		UMediaPlateComponent_IsMediaPlatePlaying_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x473B06BD0
	 * 		Name   -> Function MediaPlate.MediaPlateComponent.GetMeshRange
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector2D UMediaPlateComponent::GetMeshRange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaPlate.MediaPlateComponent.GetMeshRange");
		
		UMediaPlateComponent_GetMeshRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x473B06AB0
	 * 		Name   -> Function MediaPlate.MediaPlateComponent.GetMediaTexture
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMediaTexture* UMediaPlateComponent::GetMediaTexture(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaPlate.MediaPlateComponent.GetMediaTexture");
		
		UMediaPlateComponent_GetMediaTexture_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x473B06A90
	 * 		Name   -> Function MediaPlate.MediaPlateComponent.GetMediaPlayer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UMediaPlayer* UMediaPlateComponent::GetMediaPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaPlate.MediaPlateComponent.GetMediaPlayer");
		
		UMediaPlateComponent_GetMediaPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x473B06A70
	 * 		Name   -> Function MediaPlate.MediaPlateComponent.GetLoop
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UMediaPlateComponent::GetLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaPlate.MediaPlateComponent.GetLoop");
		
		UMediaPlateComponent_GetLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x473B06A50
	 * 		Name   -> Function MediaPlate.MediaPlateComponent.GetLetterboxAspectRatio
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	float UMediaPlateComponent::GetLetterboxAspectRatio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaPlate.MediaPlateComponent.GetLetterboxAspectRatio");
		
		UMediaPlateComponent_GetLetterboxAspectRatio_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x473B06A30
	 * 		Name   -> Function MediaPlate.MediaPlateComponent.GetIsAspectRatioAuto
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UMediaPlateComponent::GetIsAspectRatioAuto()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaPlate.MediaPlateComponent.GetIsAspectRatioAuto");
		
		UMediaPlateComponent_GetIsAspectRatioAuto_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x473B069C0
	 * 		Name   -> Function MediaPlate.MediaPlateComponent.Close
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UMediaPlateComponent::Close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaPlate.MediaPlateComponent.Close");
		
		UMediaPlateComponent_Close_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMediaPlateComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMediaPlateComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MediaPlate.MediaPlateComponent");
		return ptr;
	}

}


