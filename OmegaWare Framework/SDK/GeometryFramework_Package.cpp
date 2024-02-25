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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshCommandChangeTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshCommandChangeTarget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryFramework.MeshCommandChangeTarget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshReplacementCommandChangeTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshReplacementCommandChangeTarget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryFramework.MeshReplacementCommandChangeTarget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshVertexCommandChangeTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshVertexCommandChangeTarget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryFramework.MeshVertexCommandChangeTarget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB5B6470
	 * 		Name   -> Function GeometryFramework.BaseDynamicMeshComponent.SetViewModeOverridesEnabled
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBaseDynamicMeshComponent::SetViewModeOverridesEnabled(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryFramework.BaseDynamicMeshComponent.SetViewModeOverridesEnabled");
		
		UBaseDynamicMeshComponent_SetViewModeOverridesEnabled_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB5B6350
	 * 		Name   -> Function GeometryFramework.BaseDynamicMeshComponent.SetShadowsEnabled
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBaseDynamicMeshComponent::SetShadowsEnabled(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryFramework.BaseDynamicMeshComponent.SetShadowsEnabled");
		
		UBaseDynamicMeshComponent_SetShadowsEnabled_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB5B62C0
	 * 		Name   -> Function GeometryFramework.BaseDynamicMeshComponent.SetSecondaryRenderMaterial
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMaterialInterface*                          Material                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBaseDynamicMeshComponent::SetSecondaryRenderMaterial(class UMaterialInterface* Material)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryFramework.BaseDynamicMeshComponent.SetSecondaryRenderMaterial");
		
		UBaseDynamicMeshComponent_SetSecondaryRenderMaterial_Params params {};
		params.Material = Material;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB5B6230
	 * 		Name   -> Function GeometryFramework.BaseDynamicMeshComponent.SetSecondaryBuffersVisibility
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bSetVisible                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBaseDynamicMeshComponent::SetSecondaryBuffersVisibility(bool bSetVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryFramework.BaseDynamicMeshComponent.SetSecondaryBuffersVisibility");
		
		UBaseDynamicMeshComponent_SetSecondaryBuffersVisibility_Params params {};
		params.bSetVisible = bSetVisible;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB5B61A0
	 * 		Name   -> Function GeometryFramework.BaseDynamicMeshComponent.SetOverrideRenderMaterial
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMaterialInterface*                          Material                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBaseDynamicMeshComponent::SetOverrideRenderMaterial(class UMaterialInterface* Material)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryFramework.BaseDynamicMeshComponent.SetOverrideRenderMaterial");
		
		UBaseDynamicMeshComponent_SetOverrideRenderMaterial_Params params {};
		params.Material = Material;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB5B6110
	 * 		Name   -> Function GeometryFramework.BaseDynamicMeshComponent.SetEnableWireframeRenderPass
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBaseDynamicMeshComponent::SetEnableWireframeRenderPass(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryFramework.BaseDynamicMeshComponent.SetEnableWireframeRenderPass");
		
		UBaseDynamicMeshComponent_SetEnableWireframeRenderPass_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB5B6080
	 * 		Name   -> Function GeometryFramework.BaseDynamicMeshComponent.SetEnableRaytracing
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bSetEnabled                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBaseDynamicMeshComponent::SetEnableRaytracing(bool bSetEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryFramework.BaseDynamicMeshComponent.SetEnableRaytracing");
		
		UBaseDynamicMeshComponent_SetEnableRaytracing_Params params {};
		params.bSetEnabled = bSetEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB5B5FF0
	 * 		Name   -> Function GeometryFramework.BaseDynamicMeshComponent.SetEnableFlatShading
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBaseDynamicMeshComponent::SetEnableFlatShading(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryFramework.BaseDynamicMeshComponent.SetEnableFlatShading");
		
		UBaseDynamicMeshComponent_SetEnableFlatShading_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB5B5C80
	 * 		Name   -> Function GeometryFramework.BaseDynamicMeshComponent.SetConstantOverrideColor
	 * 		Flags  -> (Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FColor                                      NewColor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBaseDynamicMeshComponent::SetConstantOverrideColor(const struct FColor& NewColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryFramework.BaseDynamicMeshComponent.SetConstantOverrideColor");
		
		UBaseDynamicMeshComponent_SetConstantOverrideColor_Params params {};
		params.NewColor = NewColor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB5B5B10
	 * 		Name   -> Function GeometryFramework.BaseDynamicMeshComponent.SetColorOverrideMode
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EDynamicMeshComponentColorOverrideMode             NewMode                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBaseDynamicMeshComponent::SetColorOverrideMode(EDynamicMeshComponentColorOverrideMode NewMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryFramework.BaseDynamicMeshComponent.SetColorOverrideMode");
		
		UBaseDynamicMeshComponent_SetColorOverrideMode_Params params {};
		params.NewMode = NewMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB5B5700
	 * 		Name   -> Function GeometryFramework.BaseDynamicMeshComponent.HasOverrideRenderMaterial
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            K                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UBaseDynamicMeshComponent::HasOverrideRenderMaterial(int32_t K)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryFramework.BaseDynamicMeshComponent.HasOverrideRenderMaterial");
		
		UBaseDynamicMeshComponent_HasOverrideRenderMaterial_Params params {};
		params.K = K;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB5B56D0
	 * 		Name   -> Function GeometryFramework.BaseDynamicMeshComponent.GetViewModeOverridesEnabled
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UBaseDynamicMeshComponent::GetViewModeOverridesEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryFramework.BaseDynamicMeshComponent.GetViewModeOverridesEnabled");
		
		UBaseDynamicMeshComponent_GetViewModeOverridesEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB5B5640
	 * 		Name   -> Function GeometryFramework.BaseDynamicMeshComponent.GetShadowsEnabled
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UBaseDynamicMeshComponent::GetShadowsEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryFramework.BaseDynamicMeshComponent.GetShadowsEnabled");
		
		UBaseDynamicMeshComponent_GetShadowsEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB5B5610
	 * 		Name   -> Function GeometryFramework.BaseDynamicMeshComponent.GetSecondaryRenderMaterial
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UMaterialInterface* UBaseDynamicMeshComponent::GetSecondaryRenderMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryFramework.BaseDynamicMeshComponent.GetSecondaryRenderMaterial");
		
		UBaseDynamicMeshComponent_GetSecondaryRenderMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB5B55E0
	 * 		Name   -> Function GeometryFramework.BaseDynamicMeshComponent.GetSecondaryBuffersVisibility
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UBaseDynamicMeshComponent::GetSecondaryBuffersVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryFramework.BaseDynamicMeshComponent.GetSecondaryBuffersVisibility");
		
		UBaseDynamicMeshComponent_GetSecondaryBuffersVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB5B5540
	 * 		Name   -> Function GeometryFramework.BaseDynamicMeshComponent.GetOverrideRenderMaterial
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            MaterialIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMaterialInterface* UBaseDynamicMeshComponent::GetOverrideRenderMaterial(int32_t MaterialIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryFramework.BaseDynamicMeshComponent.GetOverrideRenderMaterial");
		
		UBaseDynamicMeshComponent_GetOverrideRenderMaterial_Params params {};
		params.MaterialIndex = MaterialIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB5B5510
	 * 		Name   -> Function GeometryFramework.BaseDynamicMeshComponent.GetFlatShadingEnabled
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UBaseDynamicMeshComponent::GetFlatShadingEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryFramework.BaseDynamicMeshComponent.GetFlatShadingEnabled");
		
		UBaseDynamicMeshComponent_GetFlatShadingEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB5B54E0
	 * 		Name   -> Function GeometryFramework.BaseDynamicMeshComponent.GetEnableWireframeRenderPass
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UBaseDynamicMeshComponent::GetEnableWireframeRenderPass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryFramework.BaseDynamicMeshComponent.GetEnableWireframeRenderPass");
		
		UBaseDynamicMeshComponent_GetEnableWireframeRenderPass_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB5B54B0
	 * 		Name   -> Function GeometryFramework.BaseDynamicMeshComponent.GetEnableRaytracing
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UBaseDynamicMeshComponent::GetEnableRaytracing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryFramework.BaseDynamicMeshComponent.GetEnableRaytracing");
		
		UBaseDynamicMeshComponent_GetEnableRaytracing_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB5B5460
	 * 		Name   -> Function GeometryFramework.BaseDynamicMeshComponent.GetDynamicMesh
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	class UDynamicMesh* UBaseDynamicMeshComponent::GetDynamicMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryFramework.BaseDynamicMeshComponent.GetDynamicMesh");
		
		UBaseDynamicMeshComponent_GetDynamicMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB5B5420
	 * 		Name   -> Function GeometryFramework.BaseDynamicMeshComponent.GetConstantOverrideColor
	 * 		Flags  -> (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FColor UBaseDynamicMeshComponent::GetConstantOverrideColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryFramework.BaseDynamicMeshComponent.GetConstantOverrideColor");
		
		UBaseDynamicMeshComponent_GetConstantOverrideColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB5B53C0
	 * 		Name   -> Function GeometryFramework.BaseDynamicMeshComponent.GetColorOverrideMode
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EDynamicMeshComponentColorOverrideMode UBaseDynamicMeshComponent::GetColorOverrideMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryFramework.BaseDynamicMeshComponent.GetColorOverrideMode");
		
		UBaseDynamicMeshComponent_GetColorOverrideMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB5B51B0
	 * 		Name   -> Function GeometryFramework.BaseDynamicMeshComponent.ClearSecondaryRenderMaterial
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UBaseDynamicMeshComponent::ClearSecondaryRenderMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryFramework.BaseDynamicMeshComponent.ClearSecondaryRenderMaterial");
		
		UBaseDynamicMeshComponent_ClearSecondaryRenderMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB5B5190
	 * 		Name   -> Function GeometryFramework.BaseDynamicMeshComponent.ClearOverrideRenderMaterial
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UBaseDynamicMeshComponent::ClearOverrideRenderMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryFramework.BaseDynamicMeshComponent.ClearOverrideRenderMaterial");
		
		UBaseDynamicMeshComponent_ClearOverrideRenderMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseDynamicMeshComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseDynamicMeshComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryFramework.BaseDynamicMeshComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB5B6590
	 * 		Name   -> Function GeometryFramework.DynamicMeshComponent.ValidateMaterialSlots
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bCreateIfMissing                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeleteExtraSlots                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDynamicMeshComponent::ValidateMaterialSlots(bool bCreateIfMissing, bool bDeleteExtraSlots)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryFramework.DynamicMeshComponent.ValidateMaterialSlots");
		
		UDynamicMeshComponent_ValidateMaterialSlots_Params params {};
		params.bCreateIfMissing = bCreateIfMissing;
		params.bDeleteExtraSlots = bDeleteExtraSlots;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB5B6500
	 * 		Name   -> Function GeometryFramework.DynamicMeshComponent.UpdateCollision
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bOnlyIfPending                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDynamicMeshComponent::UpdateCollision(bool bOnlyIfPending)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryFramework.DynamicMeshComponent.UpdateCollision");
		
		UDynamicMeshComponent_UpdateCollision_Params params {};
		params.bOnlyIfPending = bOnlyIfPending;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB5B63E0
	 * 		Name   -> Function GeometryFramework.DynamicMeshComponent.SetTangentsType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EDynamicMeshComponentTangentsMode                  NewTangentsType                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDynamicMeshComponent::SetTangentsType(EDynamicMeshComponentTangentsMode NewTangentsType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryFramework.DynamicMeshComponent.SetTangentsType");
		
		UDynamicMeshComponent_SetTangentsType_Params params {};
		params.NewTangentsType = NewTangentsType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB5B5DF0
	 * 		Name   -> Function GeometryFramework.DynamicMeshComponent.SetDynamicMesh
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                NewMesh                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDynamicMeshComponent::SetDynamicMesh(class UDynamicMesh* NewMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryFramework.DynamicMeshComponent.SetDynamicMesh");
		
		UDynamicMeshComponent_SetDynamicMesh_Params params {};
		params.NewMesh = NewMesh;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB5B5D00
	 * 		Name   -> Function GeometryFramework.DynamicMeshComponent.SetDeferredCollisionUpdatesEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bImmediateUpdate                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDynamicMeshComponent::SetDeferredCollisionUpdatesEnabled(bool bEnabled, bool bImmediateUpdate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryFramework.DynamicMeshComponent.SetDeferredCollisionUpdatesEnabled");
		
		UDynamicMeshComponent_SetDeferredCollisionUpdatesEnabled_Params params {};
		params.bEnabled = bEnabled;
		params.bImmediateUpdate = bImmediateUpdate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB5B5BA0
	 * 		Name   -> Function GeometryFramework.DynamicMeshComponent.SetComplexAsSimpleCollisionEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bImmediateUpdate                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDynamicMeshComponent::SetComplexAsSimpleCollisionEnabled(bool bEnabled, bool bImmediateUpdate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryFramework.DynamicMeshComponent.SetComplexAsSimpleCollisionEnabled");
		
		UDynamicMeshComponent_SetComplexAsSimpleCollisionEnabled_Params params {};
		params.bEnabled = bEnabled;
		params.bImmediateUpdate = bImmediateUpdate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB5B5670
	 * 		Name   -> Function GeometryFramework.DynamicMeshComponent.GetTangentsType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EDynamicMeshComponentTangentsMode UDynamicMeshComponent::GetTangentsType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryFramework.DynamicMeshComponent.GetTangentsType");
		
		UDynamicMeshComponent_GetTangentsType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB5B5280
	 * 		Name   -> Function GeometryFramework.DynamicMeshComponent.EnableComplexAsSimpleCollision
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UDynamicMeshComponent::EnableComplexAsSimpleCollision()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryFramework.DynamicMeshComponent.EnableComplexAsSimpleCollision");
		
		UDynamicMeshComponent_EnableComplexAsSimpleCollision_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB5B51D0
	 * 		Name   -> Function GeometryFramework.DynamicMeshComponent.ConfigureMaterialSet
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class UMaterialInterface*>                  NewMaterialSet                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UDynamicMeshComponent::ConfigureMaterialSet(TArray<class UMaterialInterface*> NewMaterialSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryFramework.DynamicMeshComponent.ConfigureMaterialSet");
		
		UDynamicMeshComponent_ConfigureMaterialSet_Params params {};
		params.NewMaterialSet = NewMaterialSet;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDynamicMeshComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDynamicMeshComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryFramework.DynamicMeshComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB5B5820
	 * 		Name   -> Function GeometryFramework.DynamicMeshActor.ReleaseComputeMesh
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                Mesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ADynamicMeshActor::ReleaseComputeMesh(class UDynamicMesh* Mesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryFramework.DynamicMeshActor.ReleaseComputeMesh");
		
		ADynamicMeshActor_ReleaseComputeMesh_Params params {};
		params.Mesh = Mesh;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB5B57E0
	 * 		Name   -> Function GeometryFramework.DynamicMeshActor.ReleaseAllComputeMeshes
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ADynamicMeshActor::ReleaseAllComputeMeshes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryFramework.DynamicMeshActor.ReleaseAllComputeMeshes");
		
		ADynamicMeshActor_ReleaseAllComputeMeshes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB5B5490
	 * 		Name   -> Function GeometryFramework.DynamicMeshActor.GetDynamicMeshComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UDynamicMeshComponent* ADynamicMeshActor::GetDynamicMeshComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryFramework.DynamicMeshActor.GetDynamicMeshComponent");
		
		ADynamicMeshActor_GetDynamicMeshComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB5B53F0
	 * 		Name   -> Function GeometryFramework.DynamicMeshActor.GetComputeMeshPool
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UDynamicMeshPool* ADynamicMeshActor::GetComputeMeshPool()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryFramework.DynamicMeshActor.GetComputeMeshPool");
		
		ADynamicMeshActor_GetComputeMeshPool_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB5B52F0
	 * 		Name   -> Function GeometryFramework.DynamicMeshActor.FreeAllComputeMeshes
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ADynamicMeshActor::FreeAllComputeMeshes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryFramework.DynamicMeshActor.FreeAllComputeMeshes");
		
		ADynamicMeshActor_FreeAllComputeMeshes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB5B5120
	 * 		Name   -> Function GeometryFramework.DynamicMeshActor.AllocateComputeMesh
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UDynamicMesh* ADynamicMeshActor::AllocateComputeMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryFramework.DynamicMeshActor.AllocateComputeMesh");
		
		ADynamicMeshActor_AllocateComputeMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADynamicMeshActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADynamicMeshActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryFramework.DynamicMeshActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDynamicMeshGenerator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDynamicMeshGenerator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryFramework.DynamicMeshGenerator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB5B59B0
	 * 		Name   -> Function GeometryFramework.DynamicMesh.ResetToCube
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UDynamicMesh* UDynamicMesh::ResetToCube()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryFramework.DynamicMesh.ResetToCube");
		
		UDynamicMesh_ResetToCube_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB5B5980
	 * 		Name   -> Function GeometryFramework.DynamicMesh.Reset
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UDynamicMesh* UDynamicMesh::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryFramework.DynamicMesh.Reset");
		
		UDynamicMesh_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB5B57A0
	 * 		Name   -> Function GeometryFramework.DynamicMesh.IsEmpty
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UDynamicMesh::IsEmpty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryFramework.DynamicMesh.IsEmpty");
		
		UDynamicMesh_IsEmpty_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB5B5690
	 * 		Name   -> Function GeometryFramework.DynamicMesh.GetTriangleCount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UDynamicMesh::GetTriangleCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryFramework.DynamicMesh.GetTriangleCount");
		
		UDynamicMesh_GetTriangleCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDynamicMesh.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDynamicMesh::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryFramework.DynamicMesh");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB5B5A00
	 * 		Name   -> Function GeometryFramework.DynamicMeshPool.ReturnMesh
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                Mesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDynamicMeshPool::ReturnMesh(class UDynamicMesh* Mesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryFramework.DynamicMeshPool.ReturnMesh");
		
		UDynamicMeshPool_ReturnMesh_Params params {};
		params.Mesh = Mesh;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB5B59E0
	 * 		Name   -> Function GeometryFramework.DynamicMeshPool.ReturnAllMeshes
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UDynamicMeshPool::ReturnAllMeshes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryFramework.DynamicMeshPool.ReturnAllMeshes");
		
		UDynamicMeshPool_ReturnAllMeshes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB5B5950
	 * 		Name   -> Function GeometryFramework.DynamicMeshPool.RequestMesh
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UDynamicMesh* UDynamicMeshPool::RequestMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryFramework.DynamicMeshPool.RequestMesh");
		
		UDynamicMeshPool_RequestMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB5B5360
	 * 		Name   -> Function GeometryFramework.DynamicMeshPool.FreeAllMeshes
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UDynamicMeshPool::FreeAllMeshes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryFramework.DynamicMeshPool.FreeAllMeshes");
		
		UDynamicMeshPool_FreeAllMeshes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDynamicMeshPool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDynamicMeshPool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryFramework.DynamicMeshPool");
		return ptr;
	}

}


