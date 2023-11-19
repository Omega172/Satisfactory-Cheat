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
	 * 		Name   -> PredefinedFunction UGeometryScriptDebug.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryScriptDebug::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryScriptingCore.GeometryScriptDebug");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792AC7D0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.SetStaticMeshCollisionFromMesh
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                FromDynamicMesh                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UStaticMesh*                                 ToStaticMeshAsset                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptCollisionFromMeshOptions     Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_CollisionFunctions::STATIC_SetStaticMeshCollisionFromMesh(class UDynamicMesh* FromDynamicMesh, class UStaticMesh* ToStaticMeshAsset, const struct FGeometryScriptCollisionFromMeshOptions& Options, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.SetStaticMeshCollisionFromMesh");
		
		UGeometryScriptLibrary_CollisionFunctions_SetStaticMeshCollisionFromMesh_Params params {};
		params.FromDynamicMesh = FromDynamicMesh;
		params.ToStaticMeshAsset = ToStaticMeshAsset;
		params.Options = Options;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792AC4F0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.SetStaticMeshCollisionFromComponent
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UStaticMesh*                                 StaticMeshAsset                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         SourceComponent                                            (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptSetSimpleCollisionOptions    Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryScriptLibrary_CollisionFunctions::STATIC_SetStaticMeshCollisionFromComponent(class UStaticMesh* StaticMeshAsset, class UPrimitiveComponent* SourceComponent, const struct FGeometryScriptSetSimpleCollisionOptions& Options, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.SetStaticMeshCollisionFromComponent");
		
		UGeometryScriptLibrary_CollisionFunctions_SetStaticMeshCollisionFromComponent_Params params {};
		params.StaticMeshAsset = StaticMeshAsset;
		params.SourceComponent = SourceComponent;
		params.Options = Options;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792A8130
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.SetDynamicMeshCollisionFromMesh
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                FromDynamicMesh                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDynamicMeshComponent*                       ToDynamicMeshComponent                                     (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptCollisionFromMeshOptions     Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_CollisionFunctions::STATIC_SetDynamicMeshCollisionFromMesh(class UDynamicMesh* FromDynamicMesh, class UDynamicMeshComponent* ToDynamicMeshComponent, const struct FGeometryScriptCollisionFromMeshOptions& Options, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.SetDynamicMeshCollisionFromMesh");
		
		UGeometryScriptLibrary_CollisionFunctions_SetDynamicMeshCollisionFromMesh_Params params {};
		params.FromDynamicMesh = FromDynamicMesh;
		params.ToDynamicMeshComponent = ToDynamicMeshComponent;
		params.Options = Options;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792A0220
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.ResetDynamicMeshCollision
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMeshComponent*                       Component                                                  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bEmitTransaction                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryScriptLibrary_CollisionFunctions::STATIC_ResetDynamicMeshCollision(class UDynamicMeshComponent* Component, bool bEmitTransaction, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.ResetDynamicMeshCollision");
		
		UGeometryScriptLibrary_CollisionFunctions_ResetDynamicMeshCollision_Params params {};
		params.Component = Component;
		params.bEmitTransaction = bEmitTransaction;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeometryScriptLibrary_CollisionFunctions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryScriptLibrary_CollisionFunctions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479280480
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_ContainmentFunctions.ComputeMeshSweptHull
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDynamicMesh*                                CopyToMesh                                                 (Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDynamicMesh*                                CopyToMeshOut                                              (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  ProjectionFrame                                            (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptSweptHullOptions             Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_ContainmentFunctions::STATIC_ComputeMeshSweptHull(class UDynamicMesh* TargetMesh, class UDynamicMesh** CopyToMesh, class UDynamicMesh** CopyToMeshOut, const struct FTransform& ProjectionFrame, const struct FGeometryScriptSweptHullOptions& Options, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_ContainmentFunctions.ComputeMeshSweptHull");
		
		UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshSweptHull_Params params {};
		params.TargetMesh = TargetMesh;
		params.ProjectionFrame = ProjectionFrame;
		params.Options = Options;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CopyToMesh != nullptr)
			*CopyToMesh = params.CopyToMesh;
		if (CopyToMeshOut != nullptr)
			*CopyToMeshOut = params.CopyToMeshOut;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479280200
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_ContainmentFunctions.ComputeMeshConvexHull
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDynamicMesh*                                CopyToMesh                                                 (Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDynamicMesh*                                CopyToMeshOut                                              (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshSelection                Selection                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptConvexHullOptions            Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_ContainmentFunctions::STATIC_ComputeMeshConvexHull(class UDynamicMesh* TargetMesh, class UDynamicMesh** CopyToMesh, class UDynamicMesh** CopyToMeshOut, const struct FGeometryScriptMeshSelection& Selection, const struct FGeometryScriptConvexHullOptions& Options, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_ContainmentFunctions.ComputeMeshConvexHull");
		
		UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexHull_Params params {};
		params.TargetMesh = TargetMesh;
		params.Selection = Selection;
		params.Options = Options;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CopyToMesh != nullptr)
			*CopyToMesh = params.CopyToMesh;
		if (CopyToMeshOut != nullptr)
			*CopyToMeshOut = params.CopyToMeshOut;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479280000
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_ContainmentFunctions.ComputeMeshConvexDecomposition
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDynamicMesh*                                CopyToMesh                                                 (Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDynamicMesh*                                CopyToMeshOut                                              (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptConvexDecompositionOptions   Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_ContainmentFunctions::STATIC_ComputeMeshConvexDecomposition(class UDynamicMesh* TargetMesh, class UDynamicMesh** CopyToMesh, class UDynamicMesh** CopyToMeshOut, const struct FGeometryScriptConvexDecompositionOptions& Options, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_ContainmentFunctions.ComputeMeshConvexDecomposition");
		
		UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexDecomposition_Params params {};
		params.TargetMesh = TargetMesh;
		params.Options = Options;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CopyToMesh != nullptr)
			*CopyToMesh = params.CopyToMesh;
		if (CopyToMeshOut != nullptr)
			*CopyToMeshOut = params.CopyToMeshOut;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeometryScriptLibrary_ContainmentFunctions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryScriptLibrary_ContainmentFunctions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryScriptingCore.GeometryScriptLibrary_ContainmentFunctions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792ACDB0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.SetVectorListItem
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FGeometryScriptVectorList                   VectorList                                                 (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsValidIndex                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryScriptLibrary_ListUtilityFunctions::STATIC_SetVectorListItem(struct FGeometryScriptVectorList* VectorList, int32_t Index, const struct FVector& NewValue, bool* bIsValidIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.SetVectorListItem");
		
		UGeometryScriptLibrary_ListUtilityFunctions_SetVectorListItem_Params params {};
		params.Index = Index;
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (VectorList != nullptr)
			*VectorList = params.VectorList;
		if (bIsValidIndex != nullptr)
			*bIsValidIndex = params.bIsValidIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792A7D20
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.SetUVListItem
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FGeometryScriptUVList                       UVList                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   NewUV                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsValidIndex                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryScriptLibrary_ListUtilityFunctions::STATIC_SetUVListItem(struct FGeometryScriptUVList* UVList, int32_t Index, const struct FVector2D& NewUV, bool* bIsValidIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.SetUVListItem");
		
		UGeometryScriptLibrary_ListUtilityFunctions_SetUVListItem_Params params {};
		params.Index = Index;
		params.NewUV = NewUV;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UVList != nullptr)
			*UVList = params.UVList;
		if (bIsValidIndex != nullptr)
			*bIsValidIndex = params.bIsValidIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792AC300
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.SetScalarListItem
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FGeometryScriptScalarList                   ScalarList                                                 (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		double                                             NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsValidIndex                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryScriptLibrary_ListUtilityFunctions::STATIC_SetScalarListItem(struct FGeometryScriptScalarList* ScalarList, int32_t Index, double NewValue, bool* bIsValidIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.SetScalarListItem");
		
		UGeometryScriptLibrary_ListUtilityFunctions_SetScalarListItem_Params params {};
		params.Index = Index;
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ScalarList != nullptr)
			*ScalarList = params.ScalarList;
		if (bIsValidIndex != nullptr)
			*bIsValidIndex = params.bIsValidIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792A8520
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.SetIndexListItem
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FGeometryScriptIndexList                    IndexList                                                  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsValidIndex                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryScriptLibrary_ListUtilityFunctions::STATIC_SetIndexListItem(struct FGeometryScriptIndexList* IndexList, int32_t Index, int32_t NewValue, bool* bIsValidIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.SetIndexListItem");
		
		UGeometryScriptLibrary_ListUtilityFunctions_SetIndexListItem_Params params {};
		params.Index = Index;
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IndexList != nullptr)
			*IndexList = params.IndexList;
		if (bIsValidIndex != nullptr)
			*bIsValidIndex = params.bIsValidIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792A7D20
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.SetColorListItem
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FGeometryScriptColorList                    ColorList                                                  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                NewColor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsValidIndex                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryScriptLibrary_ListUtilityFunctions::STATIC_SetColorListItem(struct FGeometryScriptColorList* ColorList, int32_t Index, const struct FLinearColor& NewColor, bool* bIsValidIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.SetColorListItem");
		
		UGeometryScriptLibrary_ListUtilityFunctions_SetColorListItem_Params params {};
		params.Index = Index;
		params.NewColor = NewColor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ColorList != nullptr)
			*ColorList = params.ColorList;
		if (bIsValidIndex != nullptr)
			*bIsValidIndex = params.bIsValidIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479290E00
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetVectorListLength
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGeometryScriptVectorList                   VectorList                                                 (Parm, NativeAccessSpecifierPublic)
	 */
	int32_t UGeometryScriptLibrary_ListUtilityFunctions::STATIC_GetVectorListLength(const struct FGeometryScriptVectorList& VectorList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetVectorListLength");
		
		UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLength_Params params {};
		params.VectorList = VectorList;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479290CE0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetVectorListLastIndex
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGeometryScriptVectorList                   VectorList                                                 (Parm, NativeAccessSpecifierPublic)
	 */
	int32_t UGeometryScriptLibrary_ListUtilityFunctions::STATIC_GetVectorListLastIndex(const struct FGeometryScriptVectorList& VectorList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetVectorListLastIndex");
		
		UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLastIndex_Params params {};
		params.VectorList = VectorList;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47929AC50
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetVectorListItem
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGeometryScriptVectorList                   VectorList                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsValidIndex                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UGeometryScriptLibrary_ListUtilityFunctions::STATIC_GetVectorListItem(const struct FGeometryScriptVectorList& VectorList, int32_t Index, bool* bIsValidIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetVectorListItem");
		
		UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListItem_Params params {};
		params.VectorList = VectorList;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValidIndex != nullptr)
			*bIsValidIndex = params.bIsValidIndex;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479290E00
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetUVListLength
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGeometryScriptUVList                       UVList                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	int32_t UGeometryScriptLibrary_ListUtilityFunctions::STATIC_GetUVListLength(const struct FGeometryScriptUVList& UVList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetUVListLength");
		
		UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLength_Params params {};
		params.UVList = UVList;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479290CE0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetUVListLastIndex
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGeometryScriptUVList                       UVList                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	int32_t UGeometryScriptLibrary_ListUtilityFunctions::STATIC_GetUVListLastIndex(const struct FGeometryScriptUVList& UVList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetUVListLastIndex");
		
		UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLastIndex_Params params {};
		params.UVList = UVList;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47929A880
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetUVListItem
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGeometryScriptUVList                       UVList                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsValidIndex                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D UGeometryScriptLibrary_ListUtilityFunctions::STATIC_GetUVListItem(const struct FGeometryScriptUVList& UVList, int32_t Index, bool* bIsValidIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetUVListItem");
		
		UGeometryScriptLibrary_ListUtilityFunctions_GetUVListItem_Params params {};
		params.UVList = UVList;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValidIndex != nullptr)
			*bIsValidIndex = params.bIsValidIndex;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479290E00
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetTriangleListLength
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGeometryScriptTriangleList                 TriangleList                                               (Parm, NativeAccessSpecifierPublic)
	 */
	int32_t UGeometryScriptLibrary_ListUtilityFunctions::STATIC_GetTriangleListLength(const struct FGeometryScriptTriangleList& TriangleList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetTriangleListLength");
		
		UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLength_Params params {};
		params.TriangleList = TriangleList;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479298F40
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetTriangleListLastTriangle
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGeometryScriptTriangleList                 TriangleList                                               (Parm, NativeAccessSpecifierPublic)
	 */
	int32_t UGeometryScriptLibrary_ListUtilityFunctions::STATIC_GetTriangleListLastTriangle(const struct FGeometryScriptTriangleList& TriangleList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetTriangleListLastTriangle");
		
		UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLastTriangle_Params params {};
		params.TriangleList = TriangleList;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479298D60
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetTriangleListItem
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGeometryScriptTriangleList                 TriangleList                                               (Parm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Triangle                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsValidTriangle                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FIntVector UGeometryScriptLibrary_ListUtilityFunctions::STATIC_GetTriangleListItem(const struct FGeometryScriptTriangleList& TriangleList, int32_t Triangle, bool* bIsValidTriangle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetTriangleListItem");
		
		UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListItem_Params params {};
		params.TriangleList = TriangleList;
		params.Triangle = Triangle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValidTriangle != nullptr)
			*bIsValidTriangle = params.bIsValidTriangle;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479290E00
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetScalarListLength
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGeometryScriptScalarList                   ScalarList                                                 (Parm, NativeAccessSpecifierPublic)
	 */
	int32_t UGeometryScriptLibrary_ListUtilityFunctions::STATIC_GetScalarListLength(const struct FGeometryScriptScalarList& ScalarList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetScalarListLength");
		
		UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLength_Params params {};
		params.ScalarList = ScalarList;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479290CE0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetScalarListLastIndex
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGeometryScriptScalarList                   ScalarList                                                 (Parm, NativeAccessSpecifierPublic)
	 */
	int32_t UGeometryScriptLibrary_ListUtilityFunctions::STATIC_GetScalarListLastIndex(const struct FGeometryScriptScalarList& ScalarList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetScalarListLastIndex");
		
		UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLastIndex_Params params {};
		params.ScalarList = ScalarList;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479297800
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetScalarListItem
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGeometryScriptScalarList                   ScalarList                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsValidIndex                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	double UGeometryScriptLibrary_ListUtilityFunctions::STATIC_GetScalarListItem(const struct FGeometryScriptScalarList& ScalarList, int32_t Index, bool* bIsValidIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetScalarListItem");
		
		UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListItem_Params params {};
		params.ScalarList = ScalarList;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValidIndex != nullptr)
			*bIsValidIndex = params.bIsValidIndex;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792919B0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetIndexListLength
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGeometryScriptIndexList                    IndexList                                                  (Parm, NativeAccessSpecifierPublic)
	 */
	int32_t UGeometryScriptLibrary_ListUtilityFunctions::STATIC_GetIndexListLength(const struct FGeometryScriptIndexList& IndexList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetIndexListLength");
		
		UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLength_Params params {};
		params.IndexList = IndexList;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479291890
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetIndexListLastIndex
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGeometryScriptIndexList                    IndexList                                                  (Parm, NativeAccessSpecifierPublic)
	 */
	int32_t UGeometryScriptLibrary_ListUtilityFunctions::STATIC_GetIndexListLastIndex(const struct FGeometryScriptIndexList& IndexList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetIndexListLastIndex");
		
		UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLastIndex_Params params {};
		params.IndexList = IndexList;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792916A0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetIndexListItem
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGeometryScriptIndexList                    IndexList                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsValidIndex                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UGeometryScriptLibrary_ListUtilityFunctions::STATIC_GetIndexListItem(const struct FGeometryScriptIndexList& IndexList, int32_t Index, bool* bIsValidIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetIndexListItem");
		
		UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListItem_Params params {};
		params.IndexList = IndexList;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValidIndex != nullptr)
			*bIsValidIndex = params.bIsValidIndex;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479290E00
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetColorListLength
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGeometryScriptColorList                    ColorList                                                  (Parm, NativeAccessSpecifierPublic)
	 */
	int32_t UGeometryScriptLibrary_ListUtilityFunctions::STATIC_GetColorListLength(const struct FGeometryScriptColorList& ColorList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetColorListLength");
		
		UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLength_Params params {};
		params.ColorList = ColorList;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479290CE0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetColorListLastIndex
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGeometryScriptColorList                    ColorList                                                  (Parm, NativeAccessSpecifierPublic)
	 */
	int32_t UGeometryScriptLibrary_ListUtilityFunctions::STATIC_GetColorListLastIndex(const struct FGeometryScriptColorList& ColorList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetColorListLastIndex");
		
		UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLastIndex_Params params {};
		params.ColorList = ColorList;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479290B10
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetColorListItem
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGeometryScriptColorList                    ColorList                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsValidIndex                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLinearColor UGeometryScriptLibrary_ListUtilityFunctions::STATIC_GetColorListItem(const struct FGeometryScriptColorList& ColorList, int32_t Index, bool* bIsValidIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetColorListItem");
		
		UGeometryScriptLibrary_ListUtilityFunctions_GetColorListItem_Params params {};
		params.ColorList = ColorList;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValidIndex != nullptr)
			*bIsValidIndex = params.bIsValidIndex;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47928D980
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ExtractColorListChannels
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FGeometryScriptColorList                    ColorList                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptVectorList                   VectorList                                                 (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            XChannelIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            YChannelIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ZChannelIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryScriptLibrary_ListUtilityFunctions::STATIC_ExtractColorListChannels(const struct FGeometryScriptColorList& ColorList, struct FGeometryScriptVectorList* VectorList, int32_t XChannelIndex, int32_t YChannelIndex, int32_t ZChannelIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ExtractColorListChannels");
		
		UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannels_Params params {};
		params.ColorList = ColorList;
		params.XChannelIndex = XChannelIndex;
		params.YChannelIndex = YChannelIndex;
		params.ZChannelIndex = ZChannelIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (VectorList != nullptr)
			*VectorList = params.VectorList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47928D550
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ExtractColorListChannel
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FGeometryScriptColorList                    ColorList                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptScalarList                   ScalarList                                                 (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ChannelIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryScriptLibrary_ListUtilityFunctions::STATIC_ExtractColorListChannel(const struct FGeometryScriptColorList& ColorList, struct FGeometryScriptScalarList* ScalarList, int32_t ChannelIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ExtractColorListChannel");
		
		UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannel_Params params {};
		params.ColorList = ColorList;
		params.ChannelIndex = ChannelIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ScalarList != nullptr)
			*ScalarList = params.ScalarList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47928CAC0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.DuplicateVectorList
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FGeometryScriptVectorList                   VectorList                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptVectorList                   DuplicateList                                              (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UGeometryScriptLibrary_ListUtilityFunctions::STATIC_DuplicateVectorList(const struct FGeometryScriptVectorList& VectorList, struct FGeometryScriptVectorList* DuplicateList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.DuplicateVectorList");
		
		UGeometryScriptLibrary_ListUtilityFunctions_DuplicateVectorList_Params params {};
		params.VectorList = VectorList;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DuplicateList != nullptr)
			*DuplicateList = params.DuplicateList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47928C900
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.DuplicateUVList
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FGeometryScriptUVList                       UVList                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptUVList                       DuplicateList                                              (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UGeometryScriptLibrary_ListUtilityFunctions::STATIC_DuplicateUVList(const struct FGeometryScriptUVList& UVList, struct FGeometryScriptUVList* DuplicateList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.DuplicateUVList");
		
		UGeometryScriptLibrary_ListUtilityFunctions_DuplicateUVList_Params params {};
		params.UVList = UVList;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DuplicateList != nullptr)
			*DuplicateList = params.DuplicateList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47928C740
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.DuplicateScalarList
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FGeometryScriptScalarList                   ScalarList                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptScalarList                   DuplicateList                                              (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UGeometryScriptLibrary_ListUtilityFunctions::STATIC_DuplicateScalarList(const struct FGeometryScriptScalarList& ScalarList, struct FGeometryScriptScalarList* DuplicateList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.DuplicateScalarList");
		
		UGeometryScriptLibrary_ListUtilityFunctions_DuplicateScalarList_Params params {};
		params.ScalarList = ScalarList;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DuplicateList != nullptr)
			*DuplicateList = params.DuplicateList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47928C570
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.DuplicateIndexList
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FGeometryScriptIndexList                    IndexList                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptIndexList                    DuplicateList                                              (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UGeometryScriptLibrary_ListUtilityFunctions::STATIC_DuplicateIndexList(const struct FGeometryScriptIndexList& IndexList, struct FGeometryScriptIndexList* DuplicateList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.DuplicateIndexList");
		
		UGeometryScriptLibrary_ListUtilityFunctions_DuplicateIndexList_Params params {};
		params.IndexList = IndexList;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DuplicateList != nullptr)
			*DuplicateList = params.DuplicateList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47928C3B0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.DuplicateColorList
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FGeometryScriptColorList                    ColorList                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptColorList                    DuplicateList                                              (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UGeometryScriptLibrary_ListUtilityFunctions::STATIC_DuplicateColorList(const struct FGeometryScriptColorList& ColorList, struct FGeometryScriptColorList* DuplicateList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.DuplicateColorList");
		
		UGeometryScriptLibrary_ListUtilityFunctions_DuplicateColorList_Params params {};
		params.ColorList = ColorList;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DuplicateList != nullptr)
			*DuplicateList = params.DuplicateList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479287830
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertVectorListToArray
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FGeometryScriptVectorList                   VectorList                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector>                             VectorArray                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UGeometryScriptLibrary_ListUtilityFunctions::STATIC_ConvertVectorListToArray(const struct FGeometryScriptVectorList& VectorList, TArray<struct FVector>* VectorArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertVectorListToArray");
		
		UGeometryScriptLibrary_ListUtilityFunctions_ConvertVectorListToArray_Params params {};
		params.VectorList = VectorList;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (VectorArray != nullptr)
			*VectorArray = params.VectorArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479287690
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertUVListToArray
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FGeometryScriptUVList                       UVList                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector2D>                           UVArray                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UGeometryScriptLibrary_ListUtilityFunctions::STATIC_ConvertUVListToArray(const struct FGeometryScriptUVList& UVList, TArray<struct FVector2D>* UVArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertUVListToArray");
		
		UGeometryScriptLibrary_ListUtilityFunctions_ConvertUVListToArray_Params params {};
		params.UVList = UVList;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UVArray != nullptr)
			*UVArray = params.UVArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479287250
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertTriangleListToArray
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FGeometryScriptTriangleList                 TriangleList                                               (Parm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FIntVector>                          TriangleArray                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UGeometryScriptLibrary_ListUtilityFunctions::STATIC_ConvertTriangleListToArray(const struct FGeometryScriptTriangleList& TriangleList, TArray<struct FIntVector>* TriangleArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertTriangleListToArray");
		
		UGeometryScriptLibrary_ListUtilityFunctions_ConvertTriangleListToArray_Params params {};
		params.TriangleList = TriangleList;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TriangleArray != nullptr)
			*TriangleArray = params.TriangleArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479286D60
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertScalarListToArray
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FGeometryScriptScalarList                   ScalarList                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		TArray<double>                                     ScalarArray                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UGeometryScriptLibrary_ListUtilityFunctions::STATIC_ConvertScalarListToArray(const struct FGeometryScriptScalarList& ScalarList, TArray<double>* ScalarArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertScalarListToArray");
		
		UGeometryScriptLibrary_ListUtilityFunctions_ConvertScalarListToArray_Params params {};
		params.ScalarList = ScalarList;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ScalarArray != nullptr)
			*ScalarArray = params.ScalarArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479285050
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertIndexListToArray
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FGeometryScriptIndexList                    IndexList                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    IndexArray                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UGeometryScriptLibrary_ListUtilityFunctions::STATIC_ConvertIndexListToArray(const struct FGeometryScriptIndexList& IndexList, TArray<int32_t>* IndexArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertIndexListToArray");
		
		UGeometryScriptLibrary_ListUtilityFunctions_ConvertIndexListToArray_Params params {};
		params.IndexList = IndexList;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IndexArray != nullptr)
			*IndexArray = params.IndexArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479284920
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertColorListToArray
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FGeometryScriptColorList                    ColorList                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FLinearColor>                        ColorArray                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UGeometryScriptLibrary_ListUtilityFunctions::STATIC_ConvertColorListToArray(const struct FGeometryScriptColorList& ColorList, TArray<struct FLinearColor>* ColorArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertColorListToArray");
		
		UGeometryScriptLibrary_ListUtilityFunctions_ConvertColorListToArray_Params params {};
		params.ColorList = ColorList;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ColorArray != nullptr)
			*ColorArray = params.ColorArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792847C0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertArrayToVectorList
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FVector>                             VectorArray                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptVectorList                   VectorList                                                 (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UGeometryScriptLibrary_ListUtilityFunctions::STATIC_ConvertArrayToVectorList(TArray<struct FVector> VectorArray, struct FGeometryScriptVectorList* VectorList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertArrayToVectorList");
		
		UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToVectorList_Params params {};
		params.VectorArray = VectorArray;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (VectorList != nullptr)
			*VectorList = params.VectorList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479284660
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertArrayToUVList
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FVector2D>                           UVArray                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptUVList                       UVList                                                     (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UGeometryScriptLibrary_ListUtilityFunctions::STATIC_ConvertArrayToUVList(TArray<struct FVector2D> UVArray, struct FGeometryScriptUVList* UVList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertArrayToUVList");
		
		UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToUVList_Params params {};
		params.UVArray = UVArray;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UVList != nullptr)
			*UVList = params.UVList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479284500
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertArrayToTriangleList
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FIntVector>                          TriangleArray                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptTriangleList                 TriangleList                                               (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UGeometryScriptLibrary_ListUtilityFunctions::STATIC_ConvertArrayToTriangleList(TArray<struct FIntVector> TriangleArray, struct FGeometryScriptTriangleList* TriangleList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertArrayToTriangleList");
		
		UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToTriangleList_Params params {};
		params.TriangleArray = TriangleArray;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TriangleList != nullptr)
			*TriangleList = params.TriangleList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792843A0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertArrayToScalarList
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<double>                                     VectorArray                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptScalarList                   ScalarList                                                 (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UGeometryScriptLibrary_ListUtilityFunctions::STATIC_ConvertArrayToScalarList(TArray<double> VectorArray, struct FGeometryScriptScalarList* ScalarList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertArrayToScalarList");
		
		UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToScalarList_Params params {};
		params.VectorArray = VectorArray;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ScalarList != nullptr)
			*ScalarList = params.ScalarList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479284090
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertArrayToIndexList
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<int32_t>                                    IndexArray                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptIndexList                    IndexList                                                  (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGeometryScriptIndexType                           IndexType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryScriptLibrary_ListUtilityFunctions::STATIC_ConvertArrayToIndexList(TArray<int32_t> IndexArray, struct FGeometryScriptIndexList* IndexList, EGeometryScriptIndexType IndexType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertArrayToIndexList");
		
		UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToIndexList_Params params {};
		params.IndexArray = IndexArray;
		params.IndexType = IndexType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IndexList != nullptr)
			*IndexList = params.IndexList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479283F30
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertArrayToColorList
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FLinearColor>                        ColorArray                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptColorList                    ColorList                                                  (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UGeometryScriptLibrary_ListUtilityFunctions::STATIC_ConvertArrayToColorList(TArray<struct FLinearColor> ColorArray, struct FGeometryScriptColorList* ColorList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertArrayToColorList");
		
		UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToColorList_Params params {};
		params.ColorArray = ColorArray;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ColorList != nullptr)
			*ColorList = params.ColorList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47927F7A0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ClearVectorList
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FGeometryScriptVectorList                   VectorList                                                 (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ClearValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryScriptLibrary_ListUtilityFunctions::STATIC_ClearVectorList(struct FGeometryScriptVectorList* VectorList, const struct FVector& ClearValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ClearVectorList");
		
		UGeometryScriptLibrary_ListUtilityFunctions_ClearVectorList_Params params {};
		params.ClearValue = ClearValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (VectorList != nullptr)
			*VectorList = params.VectorList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47927F640
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ClearUVList
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FGeometryScriptUVList                       UVList                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   ClearUV                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryScriptLibrary_ListUtilityFunctions::STATIC_ClearUVList(struct FGeometryScriptUVList* UVList, const struct FVector2D& ClearUV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ClearUVList");
		
		UGeometryScriptLibrary_ListUtilityFunctions_ClearUVList_Params params {};
		params.ClearUV = ClearUV;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UVList != nullptr)
			*UVList = params.UVList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47927F520
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ClearScalarList
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FGeometryScriptScalarList                   ScalarList                                                 (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		double                                             ClearValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryScriptLibrary_ListUtilityFunctions::STATIC_ClearScalarList(struct FGeometryScriptScalarList* ScalarList, double ClearValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ClearScalarList");
		
		UGeometryScriptLibrary_ListUtilityFunctions_ClearScalarList_Params params {};
		params.ClearValue = ClearValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ScalarList != nullptr)
			*ScalarList = params.ScalarList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47927EF00
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ClearIndexList
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FGeometryScriptIndexList                    IndexList                                                  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ClearValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryScriptLibrary_ListUtilityFunctions::STATIC_ClearIndexList(struct FGeometryScriptIndexList* IndexList, int32_t ClearValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ClearIndexList");
		
		UGeometryScriptLibrary_ListUtilityFunctions_ClearIndexList_Params params {};
		params.ClearValue = ClearValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IndexList != nullptr)
			*IndexList = params.IndexList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47927EDA0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ClearColorList
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FGeometryScriptColorList                    ColorList                                                  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                ClearColor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryScriptLibrary_ListUtilityFunctions::STATIC_ClearColorList(struct FGeometryScriptColorList* ColorList, const struct FLinearColor& ClearColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ClearColorList");
		
		UGeometryScriptLibrary_ListUtilityFunctions_ClearColorList_Params params {};
		params.ClearColor = ClearColor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ColorList != nullptr)
			*ColorList = params.ColorList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeometryScriptLibrary_ListUtilityFunctions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryScriptLibrary_ListUtilityFunctions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479297A00
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions.GetSectionMaterialListFromStaticMesh
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UStaticMesh*                                 FromStaticMeshAsset                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshReadLOD                  RequestedLOD                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<class UMaterialInterface*>                  MaterialList                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    MaterialIndex                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		EGeometryScriptOutcomePins                         Outcome                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryScriptLibrary_StaticMeshFunctions::STATIC_GetSectionMaterialListFromStaticMesh(class UStaticMesh* FromStaticMeshAsset, const struct FGeometryScriptMeshReadLOD& RequestedLOD, TArray<class UMaterialInterface*>* MaterialList, TArray<int32_t>* MaterialIndex, EGeometryScriptOutcomePins* Outcome, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions.GetSectionMaterialListFromStaticMesh");
		
		UGeometryScriptLibrary_StaticMeshFunctions_GetSectionMaterialListFromStaticMesh_Params params {};
		params.FromStaticMeshAsset = FromStaticMeshAsset;
		params.RequestedLOD = RequestedLOD;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MaterialList != nullptr)
			*MaterialList = params.MaterialList;
		if (MaterialIndex != nullptr)
			*MaterialIndex = params.MaterialIndex;
		if (Outcome != nullptr)
			*Outcome = params.Outcome;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792897E0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions.CopyMeshToStaticMesh
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                FromDynamicMesh                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UStaticMesh*                                 ToStaticMeshAsset                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptCopyMeshToAssetOptions       Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshWriteLOD                 TargetLod                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EGeometryScriptOutcomePins                         Outcome                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_StaticMeshFunctions::STATIC_CopyMeshToStaticMesh(class UDynamicMesh* FromDynamicMesh, class UStaticMesh* ToStaticMeshAsset, const struct FGeometryScriptCopyMeshToAssetOptions& Options, const struct FGeometryScriptMeshWriteLOD& TargetLod, EGeometryScriptOutcomePins* Outcome, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions.CopyMeshToStaticMesh");
		
		UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToStaticMesh_Params params {};
		params.FromDynamicMesh = FromDynamicMesh;
		params.ToStaticMeshAsset = ToStaticMeshAsset;
		params.Options = Options;
		params.TargetLod = TargetLod;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Outcome != nullptr)
			*Outcome = params.Outcome;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479289160
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions.CopyMeshToSkeletalMesh
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                FromDynamicMesh                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USkeletalMesh*                               ToSkeletalMeshAsset                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptCopyMeshToAssetOptions       Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshWriteLOD                 TargetLod                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EGeometryScriptOutcomePins                         Outcome                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_StaticMeshFunctions::STATIC_CopyMeshToSkeletalMesh(class UDynamicMesh* FromDynamicMesh, class USkeletalMesh* ToSkeletalMeshAsset, const struct FGeometryScriptCopyMeshToAssetOptions& Options, const struct FGeometryScriptMeshWriteLOD& TargetLod, EGeometryScriptOutcomePins* Outcome, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions.CopyMeshToSkeletalMesh");
		
		UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToSkeletalMesh_Params params {};
		params.FromDynamicMesh = FromDynamicMesh;
		params.ToSkeletalMeshAsset = ToSkeletalMeshAsset;
		params.Options = Options;
		params.TargetLod = TargetLod;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Outcome != nullptr)
			*Outcome = params.Outcome;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479288520
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions.CopyMeshFromStaticMesh
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UStaticMesh*                                 FromStaticMeshAsset                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDynamicMesh*                                ToDynamicMesh                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptCopyMeshFromAssetOptions     AssetOptions                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshReadLOD                  RequestedLOD                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EGeometryScriptOutcomePins                         Outcome                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_StaticMeshFunctions::STATIC_CopyMeshFromStaticMesh(class UStaticMesh* FromStaticMeshAsset, class UDynamicMesh* ToDynamicMesh, const struct FGeometryScriptCopyMeshFromAssetOptions& AssetOptions, const struct FGeometryScriptMeshReadLOD& RequestedLOD, EGeometryScriptOutcomePins* Outcome, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions.CopyMeshFromStaticMesh");
		
		UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromStaticMesh_Params params {};
		params.FromStaticMeshAsset = FromStaticMeshAsset;
		params.ToDynamicMesh = ToDynamicMesh;
		params.AssetOptions = AssetOptions;
		params.RequestedLOD = RequestedLOD;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Outcome != nullptr)
			*Outcome = params.Outcome;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479287FC0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions.CopyMeshFromSkeletalMesh
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class USkeletalMesh*                               FromSkeletalMeshAsset                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDynamicMesh*                                ToDynamicMesh                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptCopyMeshFromAssetOptions     AssetOptions                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshReadLOD                  RequestedLOD                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EGeometryScriptOutcomePins                         Outcome                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_StaticMeshFunctions::STATIC_CopyMeshFromSkeletalMesh(class USkeletalMesh* FromSkeletalMeshAsset, class UDynamicMesh* ToDynamicMesh, const struct FGeometryScriptCopyMeshFromAssetOptions& AssetOptions, const struct FGeometryScriptMeshReadLOD& RequestedLOD, EGeometryScriptOutcomePins* Outcome, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions.CopyMeshFromSkeletalMesh");
		
		UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromSkeletalMesh_Params params {};
		params.FromSkeletalMeshAsset = FromSkeletalMeshAsset;
		params.ToDynamicMesh = ToDynamicMesh;
		params.AssetOptions = AssetOptions;
		params.RequestedLOD = RequestedLOD;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Outcome != nullptr)
			*Outcome = params.Outcome;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeometryScriptLibrary_StaticMeshFunctions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryScriptLibrary_StaticMeshFunctions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47929D5A0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeVertexColor
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	struct FGeometryScriptBakeTypeOptions UGeometryScriptLibrary_MeshBakeFunctions::STATIC_MakeBakeTypeVertexColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeVertexColor");
		
		UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeVertexColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47929D460
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeTexture
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UTexture2D*                                  SourceTexture                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SourceUVLayer                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGeometryScriptBakeTypeOptions UGeometryScriptLibrary_MeshBakeFunctions::STATIC_MakeBakeTypeTexture(class UTexture2D* SourceTexture, int32_t SourceUVLayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeTexture");
		
		UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeTexture_Params params {};
		params.SourceTexture = SourceTexture;
		params.SourceUVLayer = SourceUVLayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47929D3B0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeTangentNormal
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	struct FGeometryScriptBakeTypeOptions UGeometryScriptLibrary_MeshBakeFunctions::STATIC_MakeBakeTypeTangentNormal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeTangentNormal");
		
		UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeTangentNormal_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47929D300
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypePosition
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	struct FGeometryScriptBakeTypeOptions UGeometryScriptLibrary_MeshBakeFunctions::STATIC_MakeBakeTypePosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypePosition");
		
		UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypePosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47929D250
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeObjectNormal
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	struct FGeometryScriptBakeTypeOptions UGeometryScriptLibrary_MeshBakeFunctions::STATIC_MakeBakeTypeObjectNormal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeObjectNormal");
		
		UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeObjectNormal_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47929D0E0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeMultiTexture
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<class UTexture2D*>                          MaterialIDSourceTextures                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SourceUVLayer                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGeometryScriptBakeTypeOptions UGeometryScriptLibrary_MeshBakeFunctions::STATIC_MakeBakeTypeMultiTexture(TArray<class UTexture2D*> MaterialIDSourceTextures, int32_t SourceUVLayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeMultiTexture");
		
		UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeMultiTexture_Params params {};
		params.MaterialIDSourceTextures = MaterialIDSourceTextures;
		params.SourceUVLayer = SourceUVLayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47929D030
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeMaterialID
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	struct FGeometryScriptBakeTypeOptions UGeometryScriptLibrary_MeshBakeFunctions::STATIC_MakeBakeTypeMaterialID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeMaterialID");
		
		UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeMaterialID_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47929CF80
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeFaceNormal
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	struct FGeometryScriptBakeTypeOptions UGeometryScriptLibrary_MeshBakeFunctions::STATIC_MakeBakeTypeFaceNormal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeFaceNormal");
		
		UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeFaceNormal_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47929CD60
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeCurvature
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		EGeometryScriptBakeCurvatureTypeMode               CurvatureType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGeometryScriptBakeCurvatureColorMode              ColorMapping                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ColorRangeMultiplier                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MinRangeMultiplier                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGeometryScriptBakeCurvatureClampMode              Clamping                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGeometryScriptBakeTypeOptions UGeometryScriptLibrary_MeshBakeFunctions::STATIC_MakeBakeTypeCurvature(EGeometryScriptBakeCurvatureTypeMode CurvatureType, EGeometryScriptBakeCurvatureColorMode ColorMapping, float ColorRangeMultiplier, float MinRangeMultiplier, EGeometryScriptBakeCurvatureClampMode Clamping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeCurvature");
		
		UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeCurvature_Params params {};
		params.CurvatureType = CurvatureType;
		params.ColorMapping = ColorMapping;
		params.ColorRangeMultiplier = ColorRangeMultiplier;
		params.MinRangeMultiplier = MinRangeMultiplier;
		params.Clamping = Clamping;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47929CBE0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeBentNormal
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            OcclusionRays                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxDistance                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SpreadAngle                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGeometryScriptBakeTypeOptions UGeometryScriptLibrary_MeshBakeFunctions::STATIC_MakeBakeTypeBentNormal(int32_t OcclusionRays, float MaxDistance, float SpreadAngle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeBentNormal");
		
		UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeBentNormal_Params params {};
		params.OcclusionRays = OcclusionRays;
		params.MaxDistance = MaxDistance;
		params.SpreadAngle = SpreadAngle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47929CA10
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeAmbientOcclusion
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            OcclusionRays                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxDistance                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SpreadAngle                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              BiasAngle                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGeometryScriptBakeTypeOptions UGeometryScriptLibrary_MeshBakeFunctions::STATIC_MakeBakeTypeAmbientOcclusion(int32_t OcclusionRays, float MaxDistance, float SpreadAngle, float BiasAngle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeAmbientOcclusion");
		
		UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeAmbientOcclusion_Params params {};
		params.OcclusionRays = OcclusionRays;
		params.MaxDistance = MaxDistance;
		params.SpreadAngle = SpreadAngle;
		params.BiasAngle = BiasAngle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47927E3F0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.BakeVertex
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  TargetTransform                                            (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptBakeTargetMeshOptions        TargetOptions                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UDynamicMesh*                                SourceMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  SourceTransform                                            (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptBakeSourceMeshOptions        SourceOptions                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptBakeOutputType               BakeTypes                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptBakeVertexOptions            BakeOptions                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshBakeFunctions::STATIC_BakeVertex(class UDynamicMesh* TargetMesh, const struct FTransform& TargetTransform, const struct FGeometryScriptBakeTargetMeshOptions& TargetOptions, class UDynamicMesh* SourceMesh, const struct FTransform& SourceTransform, const struct FGeometryScriptBakeSourceMeshOptions& SourceOptions, const struct FGeometryScriptBakeOutputType& BakeTypes, const struct FGeometryScriptBakeVertexOptions& BakeOptions, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.BakeVertex");
		
		UGeometryScriptLibrary_MeshBakeFunctions_BakeVertex_Params params {};
		params.TargetMesh = TargetMesh;
		params.TargetTransform = TargetTransform;
		params.TargetOptions = TargetOptions;
		params.SourceMesh = SourceMesh;
		params.SourceTransform = SourceTransform;
		params.SourceOptions = SourceOptions;
		params.BakeTypes = BakeTypes;
		params.BakeOptions = BakeOptions;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47927E020
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.BakeTextureFromRenderCaptures
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  TargetLocalToWorld                                         (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptBakeTargetMeshOptions        TargetOptions                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              SourceActors                                               (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptBakeRenderCaptureOptions     BakeOptions                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGeometryScriptRenderCaptureTextures UGeometryScriptLibrary_MeshBakeFunctions::STATIC_BakeTextureFromRenderCaptures(class UDynamicMesh* TargetMesh, const struct FTransform& TargetLocalToWorld, const struct FGeometryScriptBakeTargetMeshOptions& TargetOptions, TArray<class AActor*> SourceActors, const struct FGeometryScriptBakeRenderCaptureOptions& BakeOptions, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.BakeTextureFromRenderCaptures");
		
		UGeometryScriptLibrary_MeshBakeFunctions_BakeTextureFromRenderCaptures_Params params {};
		params.TargetMesh = TargetMesh;
		params.TargetLocalToWorld = TargetLocalToWorld;
		params.TargetOptions = TargetOptions;
		params.SourceActors = SourceActors;
		params.BakeOptions = BakeOptions;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47927D0F0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.BakeTexture
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  TargetTransform                                            (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptBakeTargetMeshOptions        TargetOptions                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UDynamicMesh*                                SourceMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  SourceTransform                                            (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptBakeSourceMeshOptions        SourceOptions                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FGeometryScriptBakeTypeOptions>      BakeTypes                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptBakeTextureOptions           BakeOptions                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UTexture2D*> UGeometryScriptLibrary_MeshBakeFunctions::STATIC_BakeTexture(class UDynamicMesh* TargetMesh, const struct FTransform& TargetTransform, const struct FGeometryScriptBakeTargetMeshOptions& TargetOptions, class UDynamicMesh* SourceMesh, const struct FTransform& SourceTransform, const struct FGeometryScriptBakeSourceMeshOptions& SourceOptions, TArray<struct FGeometryScriptBakeTypeOptions> BakeTypes, const struct FGeometryScriptBakeTextureOptions& BakeOptions, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.BakeTexture");
		
		UGeometryScriptLibrary_MeshBakeFunctions_BakeTexture_Params params {};
		params.TargetMesh = TargetMesh;
		params.TargetTransform = TargetTransform;
		params.TargetOptions = TargetOptions;
		params.SourceMesh = SourceMesh;
		params.SourceTransform = SourceTransform;
		params.SourceOptions = SourceOptions;
		params.BakeTypes = BakeTypes;
		params.BakeOptions = BakeOptions;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeometryScriptLibrary_MeshBakeFunctions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryScriptLibrary_MeshBakeFunctions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792AD230
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.SetVertexPosition
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            VertexID                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NewPosition                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsValidVertex                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeferChangeNotifications                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::STATIC_SetVertexPosition(class UDynamicMesh* TargetMesh, int32_t VertexID, const struct FVector& NewPosition, bool* bIsValidVertex, bool bDeferChangeNotifications)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.SetVertexPosition");
		
		UGeometryScriptLibrary_MeshBasicEditFunctions_SetVertexPosition_Params params {};
		params.TargetMesh = TargetMesh;
		params.VertexID = VertexID;
		params.NewPosition = NewPosition;
		params.bDeferChangeNotifications = bDeferChangeNotifications;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValidVertex != nullptr)
			*bIsValidVertex = params.bIsValidVertex;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792A7190
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.SetAllMeshVertexPositions
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptVectorList                   PositionList                                               (Parm, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::STATIC_SetAllMeshVertexPositions(class UDynamicMesh* TargetMesh, const struct FGeometryScriptVectorList& PositionList, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.SetAllMeshVertexPositions");
		
		UGeometryScriptLibrary_MeshBasicEditFunctions_SetAllMeshVertexPositions_Params params {};
		params.TargetMesh = TargetMesh;
		params.PositionList = PositionList;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47928C0A0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DiscardMeshAttributes
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeferChangeNotifications                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::STATIC_DiscardMeshAttributes(class UDynamicMesh* TargetMesh, bool bDeferChangeNotifications)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DiscardMeshAttributes");
		
		UGeometryScriptLibrary_MeshBasicEditFunctions_DiscardMeshAttributes_Params params {};
		params.TargetMesh = TargetMesh;
		params.bDeferChangeNotifications = bDeferChangeNotifications;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47928BE40
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DeleteVerticesFromMesh
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptIndexList                    VertexList                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumDeleted                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeferChangeNotifications                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::STATIC_DeleteVerticesFromMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptIndexList& VertexList, int32_t* NumDeleted, bool bDeferChangeNotifications)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DeleteVerticesFromMesh");
		
		UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVerticesFromMesh_Params params {};
		params.TargetMesh = TargetMesh;
		params.VertexList = VertexList;
		params.bDeferChangeNotifications = bDeferChangeNotifications;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NumDeleted != nullptr)
			*NumDeleted = params.NumDeleted;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47928BCB0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DeleteVertexFromMesh
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            VertexID                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasVertexDeleted                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeferChangeNotifications                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::STATIC_DeleteVertexFromMesh(class UDynamicMesh* TargetMesh, int32_t VertexID, bool* bWasVertexDeleted, bool bDeferChangeNotifications)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DeleteVertexFromMesh");
		
		UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVertexFromMesh_Params params {};
		params.TargetMesh = TargetMesh;
		params.VertexID = VertexID;
		params.bDeferChangeNotifications = bDeferChangeNotifications;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bWasVertexDeleted != nullptr)
			*bWasVertexDeleted = params.bWasVertexDeleted;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47928B800
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DeleteTrianglesFromMesh
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptIndexList                    TriangleList                                               (Parm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumDeleted                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeferChangeNotifications                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::STATIC_DeleteTrianglesFromMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptIndexList& TriangleList, int32_t* NumDeleted, bool bDeferChangeNotifications)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DeleteTrianglesFromMesh");
		
		UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTrianglesFromMesh_Params params {};
		params.TargetMesh = TargetMesh;
		params.TriangleList = TriangleList;
		params.bDeferChangeNotifications = bDeferChangeNotifications;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NumDeleted != nullptr)
			*NumDeleted = params.NumDeleted;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47928B470
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DeleteTriangleFromMesh
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TriangleID                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasTriangleDeleted                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeferChangeNotifications                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::STATIC_DeleteTriangleFromMesh(class UDynamicMesh* TargetMesh, int32_t TriangleID, bool* bWasTriangleDeleted, bool bDeferChangeNotifications)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DeleteTriangleFromMesh");
		
		UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTriangleFromMesh_Params params {};
		params.TargetMesh = TargetMesh;
		params.TriangleID = TriangleID;
		params.bDeferChangeNotifications = bDeferChangeNotifications;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bWasTriangleDeleted != nullptr)
			*bWasTriangleDeleted = params.bWasTriangleDeleted;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47928B220
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DeleteSelectedTrianglesFromMesh
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshSelection                Selection                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumDeleted                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeferChangeNotifications                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::STATIC_DeleteSelectedTrianglesFromMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, int32_t* NumDeleted, bool bDeferChangeNotifications)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DeleteSelectedTrianglesFromMesh");
		
		UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteSelectedTrianglesFromMesh_Params params {};
		params.TargetMesh = TargetMesh;
		params.Selection = Selection;
		params.bDeferChangeNotifications = bDeferChangeNotifications;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NumDeleted != nullptr)
			*NumDeleted = params.NumDeleted;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47926FCF0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AppendMeshTransformed
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDynamicMesh*                                AppendMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FTransform>                          AppendTransforms                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  ConstantTransform                                          (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConstantTransformIsRelative                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeferChangeNotifications                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptAppendMeshOptions            AppendOptions                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::STATIC_AppendMeshTransformed(class UDynamicMesh* TargetMesh, class UDynamicMesh* AppendMesh, TArray<struct FTransform> AppendTransforms, const struct FTransform& ConstantTransform, bool bConstantTransformIsRelative, bool bDeferChangeNotifications, const struct FGeometryScriptAppendMeshOptions& AppendOptions, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AppendMeshTransformed");
		
		UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshTransformed_Params params {};
		params.TargetMesh = TargetMesh;
		params.AppendMesh = AppendMesh;
		params.AppendTransforms = AppendTransforms;
		params.ConstantTransform = ConstantTransform;
		params.bConstantTransformIsRelative = bConstantTransformIsRelative;
		params.bDeferChangeNotifications = bDeferChangeNotifications;
		params.AppendOptions = AppendOptions;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47926F710
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AppendMeshRepeated
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDynamicMesh*                                AppendMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  AppendTransform                                            (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            RepeatCount                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bApplyTransformToFirstInstance                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeferChangeNotifications                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptAppendMeshOptions            AppendOptions                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::STATIC_AppendMeshRepeated(class UDynamicMesh* TargetMesh, class UDynamicMesh* AppendMesh, const struct FTransform& AppendTransform, int32_t RepeatCount, bool bApplyTransformToFirstInstance, bool bDeferChangeNotifications, const struct FGeometryScriptAppendMeshOptions& AppendOptions, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AppendMeshRepeated");
		
		UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshRepeated_Params params {};
		params.TargetMesh = TargetMesh;
		params.AppendMesh = AppendMesh;
		params.AppendTransform = AppendTransform;
		params.RepeatCount = RepeatCount;
		params.bApplyTransformToFirstInstance = bApplyTransformToFirstInstance;
		params.bDeferChangeNotifications = bDeferChangeNotifications;
		params.AppendOptions = AppendOptions;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47926F260
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AppendMesh
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDynamicMesh*                                AppendMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  AppendTransform                                            (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeferChangeNotifications                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptAppendMeshOptions            AppendOptions                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::STATIC_AppendMesh(class UDynamicMesh* TargetMesh, class UDynamicMesh* AppendMesh, const struct FTransform& AppendTransform, bool bDeferChangeNotifications, const struct FGeometryScriptAppendMeshOptions& AppendOptions, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AppendMesh");
		
		UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMesh_Params params {};
		params.TargetMesh = TargetMesh;
		params.AppendMesh = AppendMesh;
		params.AppendTransform = AppendTransform;
		params.bDeferChangeNotifications = bDeferChangeNotifications;
		params.AppendOptions = AppendOptions;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47926D710
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AppendBuffersToMesh
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptSimpleMeshBuffers            Buffers                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptIndexList                    NewTriangleIndicesList                                     (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaterialID                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeferChangeNotifications                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::STATIC_AppendBuffersToMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptSimpleMeshBuffers& Buffers, struct FGeometryScriptIndexList* NewTriangleIndicesList, int32_t MaterialID, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AppendBuffersToMesh");
		
		UGeometryScriptLibrary_MeshBasicEditFunctions_AppendBuffersToMesh_Params params {};
		params.TargetMesh = TargetMesh;
		params.Buffers = Buffers;
		params.MaterialID = MaterialID;
		params.bDeferChangeNotifications = bDeferChangeNotifications;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewTriangleIndicesList != nullptr)
			*NewTriangleIndicesList = params.NewTriangleIndicesList;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47926D070
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AddVerticesToMesh
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptVectorList                   NewPositionsList                                           (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptIndexList                    NewIndicesList                                             (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeferChangeNotifications                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::STATIC_AddVerticesToMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptVectorList& NewPositionsList, struct FGeometryScriptIndexList* NewIndicesList, bool bDeferChangeNotifications)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AddVerticesToMesh");
		
		UGeometryScriptLibrary_MeshBasicEditFunctions_AddVerticesToMesh_Params params {};
		params.TargetMesh = TargetMesh;
		params.NewPositionsList = NewPositionsList;
		params.bDeferChangeNotifications = bDeferChangeNotifications;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewIndicesList != nullptr)
			*NewIndicesList = params.NewIndicesList;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47926CEC0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AddVertexToMesh
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NewPosition                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NewVertexIndex                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeferChangeNotifications                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::STATIC_AddVertexToMesh(class UDynamicMesh* TargetMesh, const struct FVector& NewPosition, int32_t* NewVertexIndex, bool bDeferChangeNotifications)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AddVertexToMesh");
		
		UGeometryScriptLibrary_MeshBasicEditFunctions_AddVertexToMesh_Params params {};
		params.TargetMesh = TargetMesh;
		params.NewPosition = NewPosition;
		params.bDeferChangeNotifications = bDeferChangeNotifications;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewVertexIndex != nullptr)
			*NewVertexIndex = params.NewVertexIndex;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47926C160
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AddTriangleToMesh
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FIntVector                                  NewTriangle                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NewTriangleIndex                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NewTriangleGroupID                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeferChangeNotifications                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::STATIC_AddTriangleToMesh(class UDynamicMesh* TargetMesh, const struct FIntVector& NewTriangle, int32_t* NewTriangleIndex, int32_t NewTriangleGroupID, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AddTriangleToMesh");
		
		UGeometryScriptLibrary_MeshBasicEditFunctions_AddTriangleToMesh_Params params {};
		params.TargetMesh = TargetMesh;
		params.NewTriangle = NewTriangle;
		params.NewTriangleGroupID = NewTriangleGroupID;
		params.bDeferChangeNotifications = bDeferChangeNotifications;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewTriangleIndex != nullptr)
			*NewTriangleIndex = params.NewTriangleIndex;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47926C720
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AddTrianglesToMesh
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptTriangleList                 NewTrianglesList                                           (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptIndexList                    NewIndicesList                                             (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NewTriangleGroupID                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeferChangeNotifications                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::STATIC_AddTrianglesToMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptTriangleList& NewTrianglesList, struct FGeometryScriptIndexList* NewIndicesList, int32_t NewTriangleGroupID, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AddTrianglesToMesh");
		
		UGeometryScriptLibrary_MeshBasicEditFunctions_AddTrianglesToMesh_Params params {};
		params.TargetMesh = TargetMesh;
		params.NewTrianglesList = NewTrianglesList;
		params.NewTriangleGroupID = NewTriangleGroupID;
		params.bDeferChangeNotifications = bDeferChangeNotifications;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewIndicesList != nullptr)
			*NewIndicesList = params.NewIndicesList;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeometryScriptLibrary_MeshBasicEditFunctions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryScriptLibrary_MeshBasicEditFunctions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792ACFD0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.SetVertexBoneWeights
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            VertexID                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FGeometryScriptBoneWeight>           BoneWeights                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsValidVertexID                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptBoneWeightProfile            Profile                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshBoneWeightFunctions::STATIC_SetVertexBoneWeights(class UDynamicMesh* TargetMesh, int32_t VertexID, TArray<struct FGeometryScriptBoneWeight> BoneWeights, bool* bIsValidVertexID, const struct FGeometryScriptBoneWeightProfile& Profile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.SetVertexBoneWeights");
		
		UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Params params {};
		params.TargetMesh = TargetMesh;
		params.VertexID = VertexID;
		params.BoneWeights = BoneWeights;
		params.Profile = Profile;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValidVertexID != nullptr)
			*bIsValidVertexID = params.bIsValidVertexID;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792A7BD0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.SetAllVertexBoneWeights
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FGeometryScriptBoneWeight>           BoneWeights                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptBoneWeightProfile            Profile                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshBoneWeightFunctions::STATIC_SetAllVertexBoneWeights(class UDynamicMesh* TargetMesh, TArray<struct FGeometryScriptBoneWeight> BoneWeights, const struct FGeometryScriptBoneWeightProfile& Profile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.SetAllVertexBoneWeights");
		
		UGeometryScriptLibrary_MeshBoneWeightFunctions_SetAllVertexBoneWeights_Params params {};
		params.TargetMesh = TargetMesh;
		params.BoneWeights = BoneWeights;
		params.Profile = Profile;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47929E670
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.MeshHasBoneWeights
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHasBoneWeights                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptBoneWeightProfile            Profile                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshBoneWeightFunctions::STATIC_MeshHasBoneWeights(class UDynamicMesh* TargetMesh, bool* bHasBoneWeights, const struct FGeometryScriptBoneWeightProfile& Profile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.MeshHasBoneWeights");
		
		UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshHasBoneWeights_Params params {};
		params.TargetMesh = TargetMesh;
		params.Profile = Profile;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bHasBoneWeights != nullptr)
			*bHasBoneWeights = params.bHasBoneWeights;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47929E4B0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.MeshCreateBoneWeights
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bProfileExisted                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bReplaceExistingProfile                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptBoneWeightProfile            Profile                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshBoneWeightFunctions::STATIC_MeshCreateBoneWeights(class UDynamicMesh* TargetMesh, bool* bProfileExisted, bool bReplaceExistingProfile, const struct FGeometryScriptBoneWeightProfile& Profile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.MeshCreateBoneWeights");
		
		UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights_Params params {};
		params.TargetMesh = TargetMesh;
		params.bReplaceExistingProfile = bReplaceExistingProfile;
		params.Profile = Profile;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bProfileExisted != nullptr)
			*bProfileExisted = params.bProfileExisted;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47929AE50
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.GetVertexBoneWeights
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            VertexID                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FGeometryScriptBoneWeight>           BoneWeights                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bHasValidBoneWeights                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptBoneWeightProfile            Profile                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshBoneWeightFunctions::STATIC_GetVertexBoneWeights(class UDynamicMesh* TargetMesh, int32_t VertexID, TArray<struct FGeometryScriptBoneWeight>* BoneWeights, bool* bHasValidBoneWeights, const struct FGeometryScriptBoneWeightProfile& Profile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.GetVertexBoneWeights");
		
		UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Params params {};
		params.TargetMesh = TargetMesh;
		params.VertexID = VertexID;
		params.Profile = Profile;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BoneWeights != nullptr)
			*BoneWeights = params.BoneWeights;
		if (bHasValidBoneWeights != nullptr)
			*bHasValidBoneWeights = params.bHasValidBoneWeights;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479292D90
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.GetMaxBoneWeightIndex
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHasBoneWeights                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxBoneIndex                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptBoneWeightProfile            Profile                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshBoneWeightFunctions::STATIC_GetMaxBoneWeightIndex(class UDynamicMesh* TargetMesh, bool* bHasBoneWeights, int32_t* MaxBoneIndex, const struct FGeometryScriptBoneWeightProfile& Profile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.GetMaxBoneWeightIndex");
		
		UGeometryScriptLibrary_MeshBoneWeightFunctions_GetMaxBoneWeightIndex_Params params {};
		params.TargetMesh = TargetMesh;
		params.Profile = Profile;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bHasBoneWeights != nullptr)
			*bHasBoneWeights = params.bHasBoneWeights;
		if (MaxBoneIndex != nullptr)
			*MaxBoneIndex = params.MaxBoneIndex;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479292910
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.GetLargestVertexBoneWeight
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            VertexID                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptBoneWeight                   BoneWeight                                                 (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bHasValidBoneWeights                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptBoneWeightProfile            Profile                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshBoneWeightFunctions::STATIC_GetLargestVertexBoneWeight(class UDynamicMesh* TargetMesh, int32_t VertexID, struct FGeometryScriptBoneWeight* BoneWeight, bool* bHasValidBoneWeights, const struct FGeometryScriptBoneWeightProfile& Profile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.GetLargestVertexBoneWeight");
		
		UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight_Params params {};
		params.TargetMesh = TargetMesh;
		params.VertexID = VertexID;
		params.Profile = Profile;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BoneWeight != nullptr)
			*BoneWeight = params.BoneWeight;
		if (bHasValidBoneWeights != nullptr)
			*bHasValidBoneWeights = params.bHasValidBoneWeights;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479281A30
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.ComputeSmoothBoneWeights
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USkeleton*                                   Skeleton                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptSmoothBoneWeightsOptions     Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptBoneWeightProfile            Profile                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshBoneWeightFunctions::STATIC_ComputeSmoothBoneWeights(class UDynamicMesh* TargetMesh, class USkeleton* Skeleton, const struct FGeometryScriptSmoothBoneWeightsOptions& Options, const struct FGeometryScriptBoneWeightProfile& Profile, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.ComputeSmoothBoneWeights");
		
		UGeometryScriptLibrary_MeshBoneWeightFunctions_ComputeSmoothBoneWeights_Params params {};
		params.TargetMesh = TargetMesh;
		params.Skeleton = Skeleton;
		params.Options = Options;
		params.Profile = Profile;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeometryScriptLibrary_MeshBoneWeightFunctions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryScriptLibrary_MeshBoneWeightFunctions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479279D80
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions.ApplyMeshSelfUnion
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshSelfUnionOptions         Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshBooleanFunctions::STATIC_ApplyMeshSelfUnion(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelfUnionOptions& Options, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions.ApplyMeshSelfUnion");
		
		UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshSelfUnion_Params params {};
		params.TargetMesh = TargetMesh;
		params.Options = Options;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792795E0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions.ApplyMeshPlaneSlice
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  CutFrame                                                   (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshPlaneSliceOptions        Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshBooleanFunctions::STATIC_ApplyMeshPlaneSlice(class UDynamicMesh* TargetMesh, const struct FTransform& CutFrame, const struct FGeometryScriptMeshPlaneSliceOptions& Options, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions.ApplyMeshPlaneSlice");
		
		UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshPlaneSlice_Params params {};
		params.TargetMesh = TargetMesh;
		params.CutFrame = CutFrame;
		params.Options = Options;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792791E0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions.ApplyMeshPlaneCut
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  CutFrame                                                   (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshPlaneCutOptions          Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshBooleanFunctions::STATIC_ApplyMeshPlaneCut(class UDynamicMesh* TargetMesh, const struct FTransform& CutFrame, const struct FGeometryScriptMeshPlaneCutOptions& Options, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions.ApplyMeshPlaneCut");
		
		UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshPlaneCut_Params params {};
		params.TargetMesh = TargetMesh;
		params.CutFrame = CutFrame;
		params.Options = Options;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479278560
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions.ApplyMeshMirror
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  MirrorFrame                                                (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshMirrorOptions            Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshBooleanFunctions::STATIC_ApplyMeshMirror(class UDynamicMesh* TargetMesh, const struct FTransform& MirrorFrame, const struct FGeometryScriptMeshMirrorOptions& Options, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions.ApplyMeshMirror");
		
		UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshMirror_Params params {};
		params.TargetMesh = TargetMesh;
		params.MirrorFrame = MirrorFrame;
		params.Options = Options;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479276800
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions.ApplyMeshBoolean
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  TargetTransform                                            (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDynamicMesh*                                ToolMesh                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  ToolTransform                                              (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGeometryScriptBooleanOperation                    Operation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshBooleanOptions           Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshBooleanFunctions::STATIC_ApplyMeshBoolean(class UDynamicMesh* TargetMesh, const struct FTransform& TargetTransform, class UDynamicMesh* ToolMesh, const struct FTransform& ToolTransform, EGeometryScriptBooleanOperation Operation, const struct FGeometryScriptMeshBooleanOptions& Options, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions.ApplyMeshBoolean");
		
		UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshBoolean_Params params {};
		params.TargetMesh = TargetMesh;
		params.TargetTransform = TargetTransform;
		params.ToolMesh = ToolMesh;
		params.ToolTransform = ToolTransform;
		params.Operation = Operation;
		params.Options = Options;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeometryScriptLibrary_MeshBooleanFunctions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryScriptLibrary_MeshBooleanFunctions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47929DFC0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshComparisonFunctions.MeasureDistancesBetweenMeshes
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDynamicMesh*                                OtherMesh                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeasureMeshDistanceOptions   Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		double                                             MaxDistance                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		double                                             MinDistance                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		double                                             AverageDistance                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		double                                             RootMeanSqrDeviation                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshComparisonFunctions::STATIC_MeasureDistancesBetweenMeshes(class UDynamicMesh* TargetMesh, class UDynamicMesh* OtherMesh, const struct FGeometryScriptMeasureMeshDistanceOptions& Options, double* MaxDistance, double* MinDistance, double* AverageDistance, double* RootMeanSqrDeviation, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshComparisonFunctions.MeasureDistancesBetweenMeshes");
		
		UGeometryScriptLibrary_MeshComparisonFunctions_MeasureDistancesBetweenMeshes_Params params {};
		params.TargetMesh = TargetMesh;
		params.OtherMesh = OtherMesh;
		params.Options = Options;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MaxDistance != nullptr)
			*MaxDistance = params.MaxDistance;
		if (MinDistance != nullptr)
			*MinDistance = params.MinDistance;
		if (AverageDistance != nullptr)
			*AverageDistance = params.AverageDistance;
		if (RootMeanSqrDeviation != nullptr)
			*RootMeanSqrDeviation = params.RootMeanSqrDeviation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47929C3C0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshComparisonFunctions.IsSameMeshAs
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDynamicMesh*                                OtherMesh                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptIsSameMeshOptions            Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsSameMesh                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshComparisonFunctions::STATIC_IsSameMeshAs(class UDynamicMesh* TargetMesh, class UDynamicMesh* OtherMesh, const struct FGeometryScriptIsSameMeshOptions& Options, bool* bIsSameMesh, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshComparisonFunctions.IsSameMeshAs");
		
		UGeometryScriptLibrary_MeshComparisonFunctions_IsSameMeshAs_Params params {};
		params.TargetMesh = TargetMesh;
		params.OtherMesh = OtherMesh;
		params.Options = Options;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsSameMesh != nullptr)
			*bIsSameMesh = params.bIsSameMesh;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47929B930
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshComparisonFunctions.IsIntersectingMesh
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  TargetTransform                                            (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDynamicMesh*                                OtherMesh                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  OtherTransform                                             (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsIntersecting                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshComparisonFunctions::STATIC_IsIntersectingMesh(class UDynamicMesh* TargetMesh, const struct FTransform& TargetTransform, class UDynamicMesh* OtherMesh, const struct FTransform& OtherTransform, bool* bIsIntersecting, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshComparisonFunctions.IsIntersectingMesh");
		
		UGeometryScriptLibrary_MeshComparisonFunctions_IsIntersectingMesh_Params params {};
		params.TargetMesh = TargetMesh;
		params.TargetTransform = TargetTransform;
		params.OtherMesh = OtherMesh;
		params.OtherTransform = OtherTransform;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsIntersecting != nullptr)
			*bIsIntersecting = params.bIsIntersecting;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeometryScriptLibrary_MeshComparisonFunctions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryScriptLibrary_MeshComparisonFunctions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryScriptingCore.GeometryScriptLibrary_MeshComparisonFunctions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792ADF80
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.SplitMeshByPolygroups
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptGroupLayer                   GroupLayer                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<class UDynamicMesh*>                        ComponentMeshes                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    ComponentPolygroups                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class UDynamicMeshPool*                            MeshPool                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshDecompositionFunctions::STATIC_SplitMeshByPolygroups(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, TArray<class UDynamicMesh*>* ComponentMeshes, TArray<int32_t>* ComponentPolygroups, class UDynamicMeshPool* MeshPool, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.SplitMeshByPolygroups");
		
		UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByPolygroups_Params params {};
		params.TargetMesh = TargetMesh;
		params.GroupLayer = GroupLayer;
		params.MeshPool = MeshPool;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ComponentMeshes != nullptr)
			*ComponentMeshes = params.ComponentMeshes;
		if (ComponentPolygroups != nullptr)
			*ComponentPolygroups = params.ComponentPolygroups;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792ADAC0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.SplitMeshByMaterialIDs
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UDynamicMesh*>                        ComponentMeshes                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    ComponentMaterialIDs                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class UDynamicMeshPool*                            MeshPool                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshDecompositionFunctions::STATIC_SplitMeshByMaterialIDs(class UDynamicMesh* TargetMesh, TArray<class UDynamicMesh*>* ComponentMeshes, TArray<int32_t>* ComponentMaterialIDs, class UDynamicMeshPool* MeshPool, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.SplitMeshByMaterialIDs");
		
		UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByMaterialIDs_Params params {};
		params.TargetMesh = TargetMesh;
		params.MeshPool = MeshPool;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ComponentMeshes != nullptr)
			*ComponentMeshes = params.ComponentMeshes;
		if (ComponentMaterialIDs != nullptr)
			*ComponentMaterialIDs = params.ComponentMaterialIDs;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792AD6A0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.SplitMeshByComponents
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UDynamicMesh*>                        ComponentMeshes                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class UDynamicMeshPool*                            MeshPool                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshDecompositionFunctions::STATIC_SplitMeshByComponents(class UDynamicMesh* TargetMesh, TArray<class UDynamicMesh*>* ComponentMeshes, class UDynamicMeshPool* MeshPool, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.SplitMeshByComponents");
		
		UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByComponents_Params params {};
		params.TargetMesh = TargetMesh;
		params.MeshPool = MeshPool;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ComponentMeshes != nullptr)
			*ComponentMeshes = params.ComponentMeshes;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479297E00
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.GetSubMeshFromMesh
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDynamicMesh*                                StoreToSubmesh                                             (Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptIndexList                    TriangleList                                               (Parm, NativeAccessSpecifierPublic)
	 * 		class UDynamicMesh*                                StoreToSubmeshOut                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshDecompositionFunctions::STATIC_GetSubMeshFromMesh(class UDynamicMesh* TargetMesh, class UDynamicMesh** StoreToSubmesh, const struct FGeometryScriptIndexList& TriangleList, class UDynamicMesh** StoreToSubmeshOut, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.GetSubMeshFromMesh");
		
		UGeometryScriptLibrary_MeshDecompositionFunctions_GetSubMeshFromMesh_Params params {};
		params.TargetMesh = TargetMesh;
		params.TriangleList = TriangleList;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StoreToSubmesh != nullptr)
			*StoreToSubmesh = params.StoreToSubmesh;
		if (StoreToSubmeshOut != nullptr)
			*StoreToSubmeshOut = params.StoreToSubmeshOut;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792889E0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.CopyMeshToMesh
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                CopyFromMesh                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDynamicMesh*                                CopyToMesh                                                 (Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDynamicMesh*                                CopyToMeshOut                                              (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshDecompositionFunctions::STATIC_CopyMeshToMesh(class UDynamicMesh* CopyFromMesh, class UDynamicMesh** CopyToMesh, class UDynamicMesh** CopyToMeshOut, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.CopyMeshToMesh");
		
		UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshToMesh_Params params {};
		params.CopyFromMesh = CopyFromMesh;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CopyToMesh != nullptr)
			*CopyToMesh = params.CopyToMesh;
		if (CopyToMeshOut != nullptr)
			*CopyToMeshOut = params.CopyToMeshOut;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479288720
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.CopyMeshSelectionToMesh
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDynamicMesh*                                StoreToSubmesh                                             (Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshSelection                Selection                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		class UDynamicMesh*                                StoreToSubmeshOut                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAppendToExisting                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPreserveGroupIDs                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshDecompositionFunctions::STATIC_CopyMeshSelectionToMesh(class UDynamicMesh* TargetMesh, class UDynamicMesh** StoreToSubmesh, const struct FGeometryScriptMeshSelection& Selection, class UDynamicMesh** StoreToSubmeshOut, bool bAppendToExisting, bool bPreserveGroupIDs, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.CopyMeshSelectionToMesh");
		
		UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshSelectionToMesh_Params params {};
		params.TargetMesh = TargetMesh;
		params.Selection = Selection;
		params.bAppendToExisting = bAppendToExisting;
		params.bPreserveGroupIDs = bPreserveGroupIDs;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StoreToSubmesh != nullptr)
			*StoreToSubmesh = params.StoreToSubmesh;
		if (StoreToSubmeshOut != nullptr)
			*StoreToSubmeshOut = params.StoreToSubmeshOut;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeometryScriptLibrary_MeshDecompositionFunctions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryScriptLibrary_MeshDecompositionFunctions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47927BDA0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyTwistWarpToMesh
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptTwistWarpOptions             Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  TwistOrientation                                           (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TwistAngle                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TwistExtent                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshDeformFunctions::STATIC_ApplyTwistWarpToMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptTwistWarpOptions& Options, const struct FTransform& TwistOrientation, float TwistAngle, float TwistExtent, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyTwistWarpToMesh");
		
		UGeometryScriptLibrary_MeshDeformFunctions_ApplyTwistWarpToMesh_Params params {};
		params.TargetMesh = TargetMesh;
		params.Options = Options;
		params.TwistOrientation = TwistOrientation;
		params.TwistAngle = TwistAngle;
		params.TwistExtent = TwistExtent;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47927A7F0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyPerlinNoiseToMesh
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshSelection                Selection                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptPerlinNoiseOptions           Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshDeformFunctions::STATIC_ApplyPerlinNoiseToMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FGeometryScriptPerlinNoiseOptions& Options, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyPerlinNoiseToMesh");
		
		UGeometryScriptLibrary_MeshDeformFunctions_ApplyPerlinNoiseToMesh_Params params {};
		params.TargetMesh = TargetMesh;
		params.Selection = Selection;
		params.Options = Options;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479276060
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyMathWarpToMesh
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  WarpOrientation                                            (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGeometryScriptMathWarpType                        WarpType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMathWarpOptions              Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshDeformFunctions::STATIC_ApplyMathWarpToMesh(class UDynamicMesh* TargetMesh, const struct FTransform& WarpOrientation, EGeometryScriptMathWarpType WarpType, const struct FGeometryScriptMathWarpOptions& Options, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyMathWarpToMesh");
		
		UGeometryScriptLibrary_MeshDeformFunctions_ApplyMathWarpToMesh_Params params {};
		params.TargetMesh = TargetMesh;
		params.WarpOrientation = WarpOrientation;
		params.WarpType = WarpType;
		params.Options = Options;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479275CD0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyIterativeSmoothingToMesh
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshSelection                Selection                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptIterativeMeshSmoothingOptions Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshDeformFunctions::STATIC_ApplyIterativeSmoothingToMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FGeometryScriptIterativeMeshSmoothingOptions& Options, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyIterativeSmoothingToMesh");
		
		UGeometryScriptLibrary_MeshDeformFunctions_ApplyIterativeSmoothingToMesh_Params params {};
		params.TargetMesh = TargetMesh;
		params.Selection = Selection;
		params.Options = Options;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479275870
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyFlareWarpToMesh
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptFlareWarpOptions             Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  FlareOrientation                                           (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FlarePercentX                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FlarePercentY                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FlareExtent                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshDeformFunctions::STATIC_ApplyFlareWarpToMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptFlareWarpOptions& Options, const struct FTransform& FlareOrientation, float FlarePercentX, float FlarePercentY, float FlareExtent, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyFlareWarpToMesh");
		
		UGeometryScriptLibrary_MeshDeformFunctions_ApplyFlareWarpToMesh_Params params {};
		params.TargetMesh = TargetMesh;
		params.Options = Options;
		params.FlareOrientation = FlareOrientation;
		params.FlarePercentX = FlarePercentX;
		params.FlarePercentY = FlarePercentY;
		params.FlareExtent = FlareExtent;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479274F90
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyDisplaceFromTextureMap
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTexture2D*                                  Texture                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshSelection                Selection                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptDisplaceFromTextureOptions   Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            UVLayer                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshDeformFunctions::STATIC_ApplyDisplaceFromTextureMap(class UDynamicMesh* TargetMesh, class UTexture2D* Texture, const struct FGeometryScriptMeshSelection& Selection, const struct FGeometryScriptDisplaceFromTextureOptions& Options, int32_t UVLayer, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyDisplaceFromTextureMap");
		
		UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromTextureMap_Params params {};
		params.TargetMesh = TargetMesh;
		params.Texture = Texture;
		params.Selection = Selection;
		params.Options = Options;
		params.UVLayer = UVLayer;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479274BA0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyDisplaceFromPerVertexVectors
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshSelection                Selection                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptVectorList                   VectorList                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		float                                              Magnitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshDeformFunctions::STATIC_ApplyDisplaceFromPerVertexVectors(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FGeometryScriptVectorList& VectorList, float Magnitude, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyDisplaceFromPerVertexVectors");
		
		UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromPerVertexVectors_Params params {};
		params.TargetMesh = TargetMesh;
		params.Selection = Selection;
		params.VectorList = VectorList;
		params.Magnitude = Magnitude;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792747A0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyBendWarpToMesh
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptBendWarpOptions              Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  BendOrientation                                            (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              BendAngle                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              BendExtent                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshDeformFunctions::STATIC_ApplyBendWarpToMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptBendWarpOptions& Options, const struct FTransform& BendOrientation, float BendAngle, float BendExtent, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyBendWarpToMesh");
		
		UGeometryScriptLibrary_MeshDeformFunctions_ApplyBendWarpToMesh_Params params {};
		params.TargetMesh = TargetMesh;
		params.Options = Options;
		params.BendOrientation = BendOrientation;
		params.BendAngle = BendAngle;
		params.BendExtent = BendExtent;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeometryScriptLibrary_MeshDeformFunctions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryScriptLibrary_MeshDeformFunctions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792ACBC0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.SetTriangleMaterialID
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TriangleID                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaterialID                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsValidTriangle                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeferChangeNotifications                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshMaterialFunctions::STATIC_SetTriangleMaterialID(class UDynamicMesh* TargetMesh, int32_t TriangleID, int32_t MaterialID, bool* bIsValidTriangle, bool bDeferChangeNotifications)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.SetTriangleMaterialID");
		
		UGeometryScriptLibrary_MeshMaterialFunctions_SetTriangleMaterialID_Params params {};
		params.TargetMesh = TargetMesh;
		params.TriangleID = TriangleID;
		params.MaterialID = MaterialID;
		params.bDeferChangeNotifications = bDeferChangeNotifications;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValidTriangle != nullptr)
			*bIsValidTriangle = params.bIsValidTriangle;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792AC060
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.SetPolygroupMaterialID
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptGroupLayer                   GroupLayer                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PolygroupID                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaterialID                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsValidPolygroupID                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeferChangeNotifications                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshMaterialFunctions::STATIC_SetPolygroupMaterialID(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, int32_t PolygroupID, int32_t MaterialID, bool* bIsValidPolygroupID, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.SetPolygroupMaterialID");
		
		UGeometryScriptLibrary_MeshMaterialFunctions_SetPolygroupMaterialID_Params params {};
		params.TargetMesh = TargetMesh;
		params.GroupLayer = GroupLayer;
		params.PolygroupID = PolygroupID;
		params.MaterialID = MaterialID;
		params.bDeferChangeNotifications = bDeferChangeNotifications;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValidPolygroupID != nullptr)
			*bIsValidPolygroupID = params.bIsValidPolygroupID;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792A8A80
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.SetMaterialIDOnTriangles
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptIndexList                    TriangleIDList                                             (Parm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaterialID                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeferChangeNotifications                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshMaterialFunctions::STATIC_SetMaterialIDOnTriangles(class UDynamicMesh* TargetMesh, const struct FGeometryScriptIndexList& TriangleIDList, int32_t MaterialID, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.SetMaterialIDOnTriangles");
		
		UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDOnTriangles_Params params {};
		params.TargetMesh = TargetMesh;
		params.TriangleIDList = TriangleIDList;
		params.MaterialID = MaterialID;
		params.bDeferChangeNotifications = bDeferChangeNotifications;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792A8700
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.SetMaterialIDForMeshSelection
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshSelection                Selection                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaterialID                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeferChangeNotifications                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshMaterialFunctions::STATIC_SetMaterialIDForMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, int32_t MaterialID, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.SetMaterialIDForMeshSelection");
		
		UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDForMeshSelection_Params params {};
		params.TargetMesh = TargetMesh;
		params.Selection = Selection;
		params.MaterialID = MaterialID;
		params.bDeferChangeNotifications = bDeferChangeNotifications;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792A75A0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.SetAllTriangleMaterialIDs
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptIndexList                    TriangleMaterialIDList                                     (Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeferChangeNotifications                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshMaterialFunctions::STATIC_SetAllTriangleMaterialIDs(class UDynamicMesh* TargetMesh, const struct FGeometryScriptIndexList& TriangleMaterialIDList, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.SetAllTriangleMaterialIDs");
		
		UGeometryScriptLibrary_MeshMaterialFunctions_SetAllTriangleMaterialIDs_Params params {};
		params.TargetMesh = TargetMesh;
		params.TriangleMaterialIDList = TriangleMaterialIDList;
		params.bDeferChangeNotifications = bDeferChangeNotifications;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47929F380
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.RemapMaterialIDs
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            FromMaterialID                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ToMaterialID                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshMaterialFunctions::STATIC_RemapMaterialIDs(class UDynamicMesh* TargetMesh, int32_t FromMaterialID, int32_t ToMaterialID, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.RemapMaterialIDs");
		
		UGeometryScriptLibrary_MeshMaterialFunctions_RemapMaterialIDs_Params params {};
		params.TargetMesh = TargetMesh;
		params.FromMaterialID = FromMaterialID;
		params.ToMaterialID = ToMaterialID;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47929A160
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.GetTrianglesByMaterialID
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaterialID                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptIndexList                    TriangleIDList                                             (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshMaterialFunctions::STATIC_GetTrianglesByMaterialID(class UDynamicMesh* TargetMesh, int32_t MaterialID, struct FGeometryScriptIndexList* TriangleIDList, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.GetTrianglesByMaterialID");
		
		UGeometryScriptLibrary_MeshMaterialFunctions_GetTrianglesByMaterialID_Params params {};
		params.TargetMesh = TargetMesh;
		params.MaterialID = MaterialID;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TriangleIDList != nullptr)
			*TriangleIDList = params.TriangleIDList;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479299060
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.GetTriangleMaterialID
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TriangleID                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsValidTriangle                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UGeometryScriptLibrary_MeshMaterialFunctions::STATIC_GetTriangleMaterialID(class UDynamicMesh* TargetMesh, int32_t TriangleID, bool* bIsValidTriangle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.GetTriangleMaterialID");
		
		UGeometryScriptLibrary_MeshMaterialFunctions_GetTriangleMaterialID_Params params {};
		params.TargetMesh = TargetMesh;
		params.TriangleID = TriangleID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValidTriangle != nullptr)
			*bIsValidTriangle = params.bIsValidTriangle;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479292F90
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.GetMaxMaterialID
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHasMaterialIDs                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UGeometryScriptLibrary_MeshMaterialFunctions::STATIC_GetMaxMaterialID(class UDynamicMesh* TargetMesh, bool* bHasMaterialIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.GetMaxMaterialID");
		
		UGeometryScriptLibrary_MeshMaterialFunctions_GetMaxMaterialID_Params params {};
		params.TargetMesh = TargetMesh;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bHasMaterialIDs != nullptr)
			*bHasMaterialIDs = params.bHasMaterialIDs;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479292B80
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.GetMaterialIDsOfTriangles
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptIndexList                    TriangleIDList                                             (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptIndexList                    MaterialIDList                                             (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshMaterialFunctions::STATIC_GetMaterialIDsOfTriangles(class UDynamicMesh* TargetMesh, const struct FGeometryScriptIndexList& TriangleIDList, struct FGeometryScriptIndexList* MaterialIDList, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.GetMaterialIDsOfTriangles");
		
		UGeometryScriptLibrary_MeshMaterialFunctions_GetMaterialIDsOfTriangles_Params params {};
		params.TargetMesh = TargetMesh;
		params.TriangleIDList = TriangleIDList;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MaterialIDList != nullptr)
			*MaterialIDList = params.MaterialIDList;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47928F8F0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.GetAllTriangleMaterialIDs
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptIndexList                    MaterialIDList                                             (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bHasMaterialIDs                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshMaterialFunctions::STATIC_GetAllTriangleMaterialIDs(class UDynamicMesh* TargetMesh, struct FGeometryScriptIndexList* MaterialIDList, bool* bHasMaterialIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.GetAllTriangleMaterialIDs");
		
		UGeometryScriptLibrary_MeshMaterialFunctions_GetAllTriangleMaterialIDs_Params params {};
		params.TargetMesh = TargetMesh;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MaterialIDList != nullptr)
			*MaterialIDList = params.MaterialIDList;
		if (bHasMaterialIDs != nullptr)
			*bHasMaterialIDs = params.bHasMaterialIDs;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47928CC80
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.EnableMaterialIDs
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshMaterialFunctions::STATIC_EnableMaterialIDs(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.EnableMaterialIDs");
		
		UGeometryScriptLibrary_MeshMaterialFunctions_EnableMaterialIDs_Params params {};
		params.TargetMesh = TargetMesh;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47928B600
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.DeleteTrianglesByMaterialID
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaterialID                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumDeleted                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeferChangeNotifications                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshMaterialFunctions::STATIC_DeleteTrianglesByMaterialID(class UDynamicMesh* TargetMesh, int32_t MaterialID, int32_t* NumDeleted, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.DeleteTrianglesByMaterialID");
		
		UGeometryScriptLibrary_MeshMaterialFunctions_DeleteTrianglesByMaterialID_Params params {};
		params.TargetMesh = TargetMesh;
		params.MaterialID = MaterialID;
		params.bDeferChangeNotifications = bDeferChangeNotifications;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NumDeleted != nullptr)
			*NumDeleted = params.NumDeleted;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47927FB80
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.CompactMaterialIDs
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UMaterialInterface*>                  SourceMaterialList                                         (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<class UMaterialInterface*>                  CompactedMaterialList                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshMaterialFunctions::STATIC_CompactMaterialIDs(class UDynamicMesh* TargetMesh, TArray<class UMaterialInterface*> SourceMaterialList, TArray<class UMaterialInterface*>* CompactedMaterialList, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.CompactMaterialIDs");
		
		UGeometryScriptLibrary_MeshMaterialFunctions_CompactMaterialIDs_Params params {};
		params.TargetMesh = TargetMesh;
		params.SourceMaterialList = SourceMaterialList;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CompactedMaterialList != nullptr)
			*CompactedMaterialList = params.CompactedMaterialList;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47927F020
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.ClearMaterialIDs
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ClearValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshMaterialFunctions::STATIC_ClearMaterialIDs(class UDynamicMesh* TargetMesh, int32_t ClearValue, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.ClearMaterialIDs");
		
		UGeometryScriptLibrary_MeshMaterialFunctions_ClearMaterialIDs_Params params {};
		params.TargetMesh = TargetMesh;
		params.ClearValue = ClearValue;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeometryScriptLibrary_MeshMaterialFunctions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryScriptLibrary_MeshMaterialFunctions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47927A040
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshShell
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshOffsetOptions            Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshModelingFunctions::STATIC_ApplyMeshShell(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshOffsetOptions& Options, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshShell");
		
		UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshShell_Params params {};
		params.TargetMesh = TargetMesh;
		params.Options = Options;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792799F0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshPolygroupBevel
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshBevelOptions             Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshModelingFunctions::STATIC_ApplyMeshPolygroupBevel(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshBevelOptions& Options, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshPolygroupBevel");
		
		UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshPolygroupBevel_Params params {};
		params.TargetMesh = TargetMesh;
		params.Options = Options;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479278E70
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshOffsetFaces
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshOffsetFacesOptions       Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshSelection                Selection                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshModelingFunctions::STATIC_ApplyMeshOffsetFaces(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshOffsetFacesOptions& Options, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshOffsetFaces");
		
		UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffsetFaces_Params params {};
		params.TargetMesh = TargetMesh;
		params.Options = Options;
		params.Selection = Selection;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479278C00
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshOffset
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshOffsetOptions            Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshModelingFunctions::STATIC_ApplyMeshOffset(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshOffsetOptions& Options, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshOffset");
		
		UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffset_Params params {};
		params.TargetMesh = TargetMesh;
		params.Options = Options;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792781C0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshLinearExtrudeFaces
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshLinearExtrudeOptions     Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshSelection                Selection                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshModelingFunctions::STATIC_ApplyMeshLinearExtrudeFaces(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshLinearExtrudeOptions& Options, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshLinearExtrudeFaces");
		
		UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshLinearExtrudeFaces_Params params {};
		params.TargetMesh = TargetMesh;
		params.Options = Options;
		params.Selection = Selection;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479277E40
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshInsetOutsetFaces
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshInsetOutsetFacesOptions  Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshSelection                Selection                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshModelingFunctions::STATIC_ApplyMeshInsetOutsetFaces(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshInsetOutsetFacesOptions& Options, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshInsetOutsetFaces");
		
		UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshInsetOutsetFaces_Params params {};
		params.TargetMesh = TargetMesh;
		params.Options = Options;
		params.Selection = Selection;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479277CC0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshExtrude_Compatibility_5p0
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshExtrudeOptions           Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshModelingFunctions::STATIC_ApplyMeshExtrude_Compatibility_5p0(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshExtrudeOptions& Options, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshExtrude_Compatibility_5p0");
		
		UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshExtrude_Compatibility_5p0_Params params {};
		params.TargetMesh = TargetMesh;
		params.Options = Options;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792777F0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshDuplicateFaces
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshSelection                Selection                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshSelection                NewTriangles                                               (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshEditPolygroupOptions     GroupOptions                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshModelingFunctions::STATIC_ApplyMeshDuplicateFaces(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, struct FGeometryScriptMeshSelection* NewTriangles, const struct FGeometryScriptMeshEditPolygroupOptions& GroupOptions, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshDuplicateFaces");
		
		UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDuplicateFaces_Params params {};
		params.TargetMesh = TargetMesh;
		params.Selection = Selection;
		params.GroupOptions = GroupOptions;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewTriangles != nullptr)
			*NewTriangles = params.NewTriangles;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479277490
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshDisconnectFaces
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshSelection                Selection                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowBowtiesInOutput                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshModelingFunctions::STATIC_ApplyMeshDisconnectFaces(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, bool bAllowBowtiesInOutput, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshDisconnectFaces");
		
		UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDisconnectFaces_Params params {};
		params.TargetMesh = TargetMesh;
		params.Selection = Selection;
		params.bAllowBowtiesInOutput = bAllowBowtiesInOutput;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479276450
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshBevelSelection
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshSelection                Selection                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		EGeometryScriptMeshBevelSelectionMode              BevelMode                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshBevelSelectionOptions    BevelOptions                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshModelingFunctions::STATIC_ApplyMeshBevelSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, EGeometryScriptMeshBevelSelectionMode BevelMode, const struct FGeometryScriptMeshBevelSelectionOptions& BevelOptions, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshBevelSelection");
		
		UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshBevelSelection_Params params {};
		params.TargetMesh = TargetMesh;
		params.Selection = Selection;
		params.BevelMode = BevelMode;
		params.BevelOptions = BevelOptions;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeometryScriptLibrary_MeshModelingFunctions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryScriptLibrary_MeshModelingFunctions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792AFB10
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.UpdateVertexNormal
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            VertexID                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUpdateNormal                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NewNormal                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUpdateTangents                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NewTangentX                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NewTangentY                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsValidVertex                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMergeSplitValues                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeferChangeNotifications                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshNormalsFunctions::STATIC_UpdateVertexNormal(class UDynamicMesh* TargetMesh, int32_t VertexID, bool bUpdateNormal, const struct FVector& NewNormal, bool bUpdateTangents, const struct FVector& NewTangentX, const struct FVector& NewTangentY, bool* bIsValidVertex, bool bMergeSplitValues, bool bDeferChangeNotifications)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.UpdateVertexNormal");
		
		UGeometryScriptLibrary_MeshNormalsFunctions_UpdateVertexNormal_Params params {};
		params.TargetMesh = TargetMesh;
		params.VertexID = VertexID;
		params.bUpdateNormal = bUpdateNormal;
		params.NewNormal = NewNormal;
		params.bUpdateTangents = bUpdateTangents;
		params.NewTangentX = NewTangentX;
		params.NewTangentY = NewTangentY;
		params.bMergeSplitValues = bMergeSplitValues;
		params.bDeferChangeNotifications = bDeferChangeNotifications;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValidVertex != nullptr)
			*bIsValidVertex = params.bIsValidVertex;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792ABB30
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.SetPerVertexNormals
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshNormalsFunctions::STATIC_SetPerVertexNormals(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.SetPerVertexNormals");
		
		UGeometryScriptLibrary_MeshNormalsFunctions_SetPerVertexNormals_Params params {};
		params.TargetMesh = TargetMesh;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792AB920
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.SetPerFaceNormals
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshNormalsFunctions::STATIC_SetPerFaceNormals(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.SetPerFaceNormals");
		
		UGeometryScriptLibrary_MeshNormalsFunctions_SetPerFaceNormals_Params params {};
		params.TargetMesh = TargetMesh;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792AA6D0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.SetMeshTriangleNormals
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TriangleID                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptTriangle                     Normals                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsValidTriangle                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeferChangeNotifications                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshNormalsFunctions::STATIC_SetMeshTriangleNormals(class UDynamicMesh* TargetMesh, int32_t TriangleID, const struct FGeometryScriptTriangle& Normals, bool* bIsValidTriangle, bool bDeferChangeNotifications)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.SetMeshTriangleNormals");
		
		UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshTriangleNormals_Params params {};
		params.TargetMesh = TargetMesh;
		params.TriangleID = TriangleID;
		params.Normals = Normals;
		params.bDeferChangeNotifications = bDeferChangeNotifications;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValidTriangle != nullptr)
			*bIsValidTriangle = params.bIsValidTriangle;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792A9CD0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.SetMeshPerVertexTangents
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptVectorList                   TangentXList                                               (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptVectorList                   TangentYList                                               (Parm, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshNormalsFunctions::STATIC_SetMeshPerVertexTangents(class UDynamicMesh* TargetMesh, const struct FGeometryScriptVectorList& TangentXList, const struct FGeometryScriptVectorList& TangentYList, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.SetMeshPerVertexTangents");
		
		UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexTangents_Params params {};
		params.TargetMesh = TargetMesh;
		params.TangentXList = TangentXList;
		params.TangentYList = TangentYList;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792A98C0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.SetMeshPerVertexNormals
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptVectorList                   VertexNormalList                                           (Parm, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshNormalsFunctions::STATIC_SetMeshPerVertexNormals(class UDynamicMesh* TargetMesh, const struct FGeometryScriptVectorList& VertexNormalList, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.SetMeshPerVertexNormals");
		
		UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexNormals_Params params {};
		params.TargetMesh = TargetMesh;
		params.VertexNormalList = VertexNormalList;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47929F150
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.RecomputeNormals
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptCalculateNormalsOptions      CalculateOptions                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshNormalsFunctions::STATIC_RecomputeNormals(class UDynamicMesh* TargetMesh, const struct FGeometryScriptCalculateNormalsOptions& CalculateOptions, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.RecomputeNormals");
		
		UGeometryScriptLibrary_MeshNormalsFunctions_RecomputeNormals_Params params {};
		params.TargetMesh = TargetMesh;
		params.CalculateOptions = CalculateOptions;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479293B20
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.GetMeshPerVertexTangents
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptVectorList                   TangentXList                                               (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptVectorList                   TangentYList                                               (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsValidTangentSet                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHasVertexIDGaps                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAverageSplitVertexValues                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshNormalsFunctions::STATIC_GetMeshPerVertexTangents(class UDynamicMesh* TargetMesh, struct FGeometryScriptVectorList* TangentXList, struct FGeometryScriptVectorList* TangentYList, bool* bIsValidTangentSet, bool* bHasVertexIDGaps, bool bAverageSplitVertexValues)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.GetMeshPerVertexTangents");
		
		UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexTangents_Params params {};
		params.TargetMesh = TargetMesh;
		params.bAverageSplitVertexValues = bAverageSplitVertexValues;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TangentXList != nullptr)
			*TangentXList = params.TangentXList;
		if (TangentYList != nullptr)
			*TangentYList = params.TangentYList;
		if (bIsValidTangentSet != nullptr)
			*bIsValidTangentSet = params.bIsValidTangentSet;
		if (bHasVertexIDGaps != nullptr)
			*bHasVertexIDGaps = params.bHasVertexIDGaps;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792938B0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.GetMeshPerVertexNormals
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptVectorList                   NormalList                                                 (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsValidNormalSet                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHasVertexIDGaps                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAverageSplitVertexValues                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshNormalsFunctions::STATIC_GetMeshPerVertexNormals(class UDynamicMesh* TargetMesh, struct FGeometryScriptVectorList* NormalList, bool* bIsValidNormalSet, bool* bHasVertexIDGaps, bool bAverageSplitVertexValues)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.GetMeshPerVertexNormals");
		
		UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexNormals_Params params {};
		params.TargetMesh = TargetMesh;
		params.bAverageSplitVertexValues = bAverageSplitVertexValues;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NormalList != nullptr)
			*NormalList = params.NormalList;
		if (bIsValidNormalSet != nullptr)
			*bIsValidNormalSet = params.bIsValidNormalSet;
		if (bHasVertexIDGaps != nullptr)
			*bHasVertexIDGaps = params.bHasVertexIDGaps;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479293300
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.GetMeshHasTangents
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHasTangents                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshNormalsFunctions::STATIC_GetMeshHasTangents(class UDynamicMesh* TargetMesh, bool* bHasTangents, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.GetMeshHasTangents");
		
		UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshHasTangents_Params params {};
		params.TargetMesh = TargetMesh;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bHasTangents != nullptr)
			*bHasTangents = params.bHasTangents;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47928F310
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.FlipNormals
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshNormalsFunctions::STATIC_FlipNormals(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.FlipNormals");
		
		UGeometryScriptLibrary_MeshNormalsFunctions_FlipNormals_Params params {};
		params.TargetMesh = TargetMesh;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47928C1A0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.DiscardTangents
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshNormalsFunctions::STATIC_DiscardTangents(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.DiscardTangents");
		
		UGeometryScriptLibrary_MeshNormalsFunctions_DiscardTangents_Params params {};
		params.TargetMesh = TargetMesh;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792820D0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.ComputeTangents
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptTangentsOptions              Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshNormalsFunctions::STATIC_ComputeTangents(class UDynamicMesh* TargetMesh, const struct FGeometryScriptTangentsOptions& Options, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.ComputeTangents");
		
		UGeometryScriptLibrary_MeshNormalsFunctions_ComputeTangents_Params params {};
		params.TargetMesh = TargetMesh;
		params.Options = Options;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479281E10
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.ComputeSplitNormals
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptSplitNormalsOptions          SplitOptions                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptCalculateNormalsOptions      CalculateOptions                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshNormalsFunctions::STATIC_ComputeSplitNormals(class UDynamicMesh* TargetMesh, const struct FGeometryScriptSplitNormalsOptions& SplitOptions, const struct FGeometryScriptCalculateNormalsOptions& CalculateOptions, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.ComputeSplitNormals");
		
		UGeometryScriptLibrary_MeshNormalsFunctions_ComputeSplitNormals_Params params {};
		params.TargetMesh = TargetMesh;
		params.SplitOptions = SplitOptions;
		params.CalculateOptions = CalculateOptions;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47927CEE0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.AutoRepairNormals
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshNormalsFunctions::STATIC_AutoRepairNormals(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.AutoRepairNormals");
		
		UGeometryScriptLibrary_MeshNormalsFunctions_AutoRepairNormals_Params params {};
		params.TargetMesh = TargetMesh;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeometryScriptLibrary_MeshNormalsFunctions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryScriptLibrary_MeshNormalsFunctions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792ABD40
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.SetPolygroupForMeshSelection
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptGroupLayer                   GroupLayer                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshSelection                Selection                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SetPolygroupIDOut                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SetPolygroupID                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bGenerateNewPolygroup                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeferChangeNotifications                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshPolygroupFunctions::STATIC_SetPolygroupForMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, const struct FGeometryScriptMeshSelection& Selection, int32_t* SetPolygroupIDOut, int32_t SetPolygroupID, bool bGenerateNewPolygroup, bool bDeferChangeNotifications)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.SetPolygroupForMeshSelection");
		
		UGeometryScriptLibrary_MeshPolygroupFunctions_SetPolygroupForMeshSelection_Params params {};
		params.TargetMesh = TargetMesh;
		params.GroupLayer = GroupLayer;
		params.Selection = Selection;
		params.SetPolygroupID = SetPolygroupID;
		params.bGenerateNewPolygroup = bGenerateNewPolygroup;
		params.bDeferChangeNotifications = bDeferChangeNotifications;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SetPolygroupIDOut != nullptr)
			*SetPolygroupIDOut = params.SetPolygroupIDOut;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792AB3F0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.SetNumExtendedPolygroupLayers
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumLayers                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshPolygroupFunctions::STATIC_SetNumExtendedPolygroupLayers(class UDynamicMesh* TargetMesh, int32_t NumLayers, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.SetNumExtendedPolygroupLayers");
		
		UGeometryScriptLibrary_MeshPolygroupFunctions_SetNumExtendedPolygroupLayers_Params params {};
		params.TargetMesh = TargetMesh;
		params.NumLayers = NumLayers;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47929A640
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.GetTrianglesInPolygroup
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptGroupLayer                   GroupLayer                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PolygroupID                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptIndexList                    TriangleIDsOut                                             (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshPolygroupFunctions::STATIC_GetTrianglesInPolygroup(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, int32_t PolygroupID, struct FGeometryScriptIndexList* TriangleIDsOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.GetTrianglesInPolygroup");
		
		UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglesInPolygroup_Params params {};
		params.TargetMesh = TargetMesh;
		params.GroupLayer = GroupLayer;
		params.PolygroupID = PolygroupID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TriangleIDsOut != nullptr)
			*TriangleIDsOut = params.TriangleIDsOut;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792997C0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.GetTrianglePolygroupID
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptGroupLayer                   GroupLayer                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TriangleID                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsValidTriangle                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UGeometryScriptLibrary_MeshPolygroupFunctions::STATIC_GetTrianglePolygroupID(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, int32_t TriangleID, bool* bIsValidTriangle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.GetTrianglePolygroupID");
		
		UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglePolygroupID_Params params {};
		params.TargetMesh = TargetMesh;
		params.GroupLayer = GroupLayer;
		params.TriangleID = TriangleID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValidTriangle != nullptr)
			*bIsValidTriangle = params.bIsValidTriangle;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479296290
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.GetPolygroupIDsInMesh
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptGroupLayer                   GroupLayer                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptIndexList                    PolygroupIDsOut                                            (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshPolygroupFunctions::STATIC_GetPolygroupIDsInMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, struct FGeometryScriptIndexList* PolygroupIDsOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.GetPolygroupIDsInMesh");
		
		UGeometryScriptLibrary_MeshPolygroupFunctions_GetPolygroupIDsInMesh_Params params {};
		params.TargetMesh = TargetMesh;
		params.GroupLayer = GroupLayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PolygroupIDsOut != nullptr)
			*PolygroupIDsOut = params.PolygroupIDsOut;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47928FAE0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.GetAllTrianglePolygroupIDs
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptGroupLayer                   GroupLayer                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptIndexList                    PolygroupIDsOut                                            (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshPolygroupFunctions::STATIC_GetAllTrianglePolygroupIDs(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, struct FGeometryScriptIndexList* PolygroupIDsOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.GetAllTrianglePolygroupIDs");
		
		UGeometryScriptLibrary_MeshPolygroupFunctions_GetAllTrianglePolygroupIDs_Params params {};
		params.TargetMesh = TargetMesh;
		params.GroupLayer = GroupLayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PolygroupIDsOut != nullptr)
			*PolygroupIDsOut = params.PolygroupIDsOut;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47928CEA0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.EnablePolygroups
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshPolygroupFunctions::STATIC_EnablePolygroups(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.EnablePolygroups");
		
		UGeometryScriptLibrary_MeshPolygroupFunctions_EnablePolygroups_Params params {};
		params.TargetMesh = TargetMesh;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47928BA60
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.DeleteTrianglesInPolygroup
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptGroupLayer                   GroupLayer                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PolygroupID                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumDeleted                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeferChangeNotifications                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshPolygroupFunctions::STATIC_DeleteTrianglesInPolygroup(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, int32_t PolygroupID, int32_t* NumDeleted, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.DeleteTrianglesInPolygroup");
		
		UGeometryScriptLibrary_MeshPolygroupFunctions_DeleteTrianglesInPolygroup_Params params {};
		params.TargetMesh = TargetMesh;
		params.GroupLayer = GroupLayer;
		params.PolygroupID = PolygroupID;
		params.bDeferChangeNotifications = bDeferChangeNotifications;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NumDeleted != nullptr)
			*NumDeleted = params.NumDeleted;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479289FE0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.CopyPolygroupsLayer
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptGroupLayer                   FromGroupLayer                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptGroupLayer                   ToGroupLayer                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshPolygroupFunctions::STATIC_CopyPolygroupsLayer(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& FromGroupLayer, const struct FGeometryScriptGroupLayer& ToGroupLayer, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.CopyPolygroupsLayer");
		
		UGeometryScriptLibrary_MeshPolygroupFunctions_CopyPolygroupsLayer_Params params {};
		params.TargetMesh = TargetMesh;
		params.FromGroupLayer = FromGroupLayer;
		params.ToGroupLayer = ToGroupLayer;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792873F0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.ConvertUVIslandsToPolygroups
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptGroupLayer                   GroupLayer                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            UVLayer                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshPolygroupFunctions::STATIC_ConvertUVIslandsToPolygroups(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, int32_t UVLayer, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.ConvertUVIslandsToPolygroups");
		
		UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertUVIslandsToPolygroups_Params params {};
		params.TargetMesh = TargetMesh;
		params.GroupLayer = GroupLayer;
		params.UVLayer = UVLayer;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479284AC0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.ConvertComponentsToPolygroups
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptGroupLayer                   GroupLayer                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshPolygroupFunctions::STATIC_ConvertComponentsToPolygroups(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.ConvertComponentsToPolygroups");
		
		UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertComponentsToPolygroups_Params params {};
		params.TargetMesh = TargetMesh;
		params.GroupLayer = GroupLayer;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479281620
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.ComputePolygroupsFromPolygonDetection
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptGroupLayer                   GroupLayer                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bRespectUVSeams                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRespectHardNormals                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		double                                             QuadAdjacencyWeight                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		double                                             QuadMetricClamp                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxSearchRounds                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshPolygroupFunctions::STATIC_ComputePolygroupsFromPolygonDetection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, bool bRespectUVSeams, bool bRespectHardNormals, double QuadAdjacencyWeight, double QuadMetricClamp, int32_t MaxSearchRounds, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.ComputePolygroupsFromPolygonDetection");
		
		UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromPolygonDetection_Params params {};
		params.TargetMesh = TargetMesh;
		params.GroupLayer = GroupLayer;
		params.bRespectUVSeams = bRespectUVSeams;
		params.bRespectHardNormals = bRespectHardNormals;
		params.QuadAdjacencyWeight = QuadAdjacencyWeight;
		params.QuadMetricClamp = QuadMetricClamp;
		params.MaxSearchRounds = MaxSearchRounds;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479281330
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.ComputePolygroupsFromAngleThreshold
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptGroupLayer                   GroupLayer                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              CreaseAngle                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MinGroupSize                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshPolygroupFunctions::STATIC_ComputePolygroupsFromAngleThreshold(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, float CreaseAngle, int32_t MinGroupSize, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.ComputePolygroupsFromAngleThreshold");
		
		UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromAngleThreshold_Params params {};
		params.TargetMesh = TargetMesh;
		params.GroupLayer = GroupLayer;
		params.CreaseAngle = CreaseAngle;
		params.MinGroupSize = MinGroupSize;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47927F280
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.ClearPolygroups
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptGroupLayer                   GroupLayer                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ClearValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshPolygroupFunctions::STATIC_ClearPolygroups(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, int32_t ClearValue, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.ClearPolygroups");
		
		UGeometryScriptLibrary_MeshPolygroupFunctions_ClearPolygroups_Params params {};
		params.TargetMesh = TargetMesh;
		params.GroupLayer = GroupLayer;
		params.ClearValue = ClearValue;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeometryScriptLibrary_MeshPolygroupFunctions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryScriptLibrary_MeshPolygroupFunctions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479273B80
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendVoronoiDiagram2D
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptPrimitiveOptions             PrimitiveOptions                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector2D>                           VoronoiSites                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptVoronoiOptions               VoronoiOptions                                             (Parm, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::STATIC_AppendVoronoiDiagram2D(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, TArray<struct FVector2D> VoronoiSites, const struct FGeometryScriptVoronoiOptions& VoronoiOptions, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendVoronoiDiagram2D");
		
		UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendVoronoiDiagram2D_Params params {};
		params.TargetMesh = TargetMesh;
		params.PrimitiveOptions = PrimitiveOptions;
		params.Transform = Transform;
		params.VoronoiSites = VoronoiSites;
		params.VoronoiOptions = VoronoiOptions;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792738B0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendTriangulatedPolygon
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptPrimitiveOptions             PrimitiveOptions                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector2D>                           PolygonVertices                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowSelfIntersections                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::STATIC_AppendTriangulatedPolygon(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, TArray<struct FVector2D> PolygonVertices, bool bAllowSelfIntersections, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendTriangulatedPolygon");
		
		UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTriangulatedPolygon_Params params {};
		params.TargetMesh = TargetMesh;
		params.PrimitiveOptions = PrimitiveOptions;
		params.Transform = Transform;
		params.PolygonVertices = PolygonVertices;
		params.bAllowSelfIntersections = bAllowSelfIntersections;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792734B0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendTorus
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptPrimitiveOptions             PrimitiveOptions                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptRevolveOptions               RevolveOptions                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              MajorRadius                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MinorRadius                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MajorSteps                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MinorSteps                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGeometryScriptPrimitiveOriginMode                 Origin                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::STATIC_AppendTorus(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, const struct FGeometryScriptRevolveOptions& RevolveOptions, float MajorRadius, float MinorRadius, int32_t MajorSteps, int32_t MinorSteps, EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendTorus");
		
		UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTorus_Params params {};
		params.TargetMesh = TargetMesh;
		params.PrimitiveOptions = PrimitiveOptions;
		params.Transform = Transform;
		params.RevolveOptions = RevolveOptions;
		params.MajorRadius = MajorRadius;
		params.MinorRadius = MinorRadius;
		params.MajorSteps = MajorSteps;
		params.MinorSteps = MinorSteps;
		params.Origin = Origin;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479272FB0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSweepPolyline
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptPrimitiveOptions             PrimitiveOptions                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector2D>                           PolylineVertices                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FTransform>                          SweepPath                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      PolylineTexParamU                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      SweepPathTexParamV                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bLoop                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartScale                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              EndScale                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              RotationAngleDeg                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::STATIC_AppendSweepPolyline(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, TArray<struct FVector2D> PolylineVertices, TArray<struct FTransform> SweepPath, TArray<float> PolylineTexParamU, TArray<float> SweepPathTexParamV, bool bLoop, float StartScale, float EndScale, float RotationAngleDeg, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSweepPolyline");
		
		UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Params params {};
		params.TargetMesh = TargetMesh;
		params.PrimitiveOptions = PrimitiveOptions;
		params.Transform = Transform;
		params.PolylineVertices = PolylineVertices;
		params.SweepPath = SweepPath;
		params.PolylineTexParamU = PolylineTexParamU;
		params.SweepPathTexParamV = SweepPathTexParamV;
		params.bLoop = bLoop;
		params.StartScale = StartScale;
		params.EndScale = EndScale;
		params.RotationAngleDeg = RotationAngleDeg;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479272B40
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSweepPolygon
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptPrimitiveOptions             PrimitiveOptions                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector2D>                           PolygonVertices                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FTransform>                          SweepPath                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bLoop                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCapped                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartScale                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              EndScale                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              RotationAngleDeg                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::STATIC_AppendSweepPolygon(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, TArray<struct FVector2D> PolygonVertices, TArray<struct FTransform> SweepPath, bool bLoop, bool bCapped, float StartScale, float EndScale, float RotationAngleDeg, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSweepPolygon");
		
		UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolygon_Params params {};
		params.TargetMesh = TargetMesh;
		params.PrimitiveOptions = PrimitiveOptions;
		params.Transform = Transform;
		params.PolygonVertices = PolygonVertices;
		params.SweepPath = SweepPath;
		params.bLoop = bLoop;
		params.bCapped = bCapped;
		params.StartScale = StartScale;
		params.EndScale = EndScale;
		params.RotationAngleDeg = RotationAngleDeg;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479272750
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSpiralRevolvePolygon
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptPrimitiveOptions             PrimitiveOptions                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector2D>                           PolygonVertices                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptRevolveOptions               RevolveOptions                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Steps                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              RisePerRevolution                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::STATIC_AppendSpiralRevolvePolygon(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, TArray<struct FVector2D> PolygonVertices, const struct FGeometryScriptRevolveOptions& RevolveOptions, float Radius, int32_t Steps, float RisePerRevolution, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSpiralRevolvePolygon");
		
		UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSpiralRevolvePolygon_Params params {};
		params.TargetMesh = TargetMesh;
		params.PrimitiveOptions = PrimitiveOptions;
		params.Transform = Transform;
		params.PolygonVertices = PolygonVertices;
		params.RevolveOptions = RevolveOptions;
		params.Radius = Radius;
		params.Steps = Steps;
		params.RisePerRevolution = RisePerRevolution;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479272410
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSphereLatLong
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptPrimitiveOptions             PrimitiveOptions                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StepsPhi                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StepsTheta                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGeometryScriptPrimitiveOriginMode                 Origin                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::STATIC_AppendSphereLatLong(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, float Radius, int32_t StepsPhi, int32_t StepsTheta, EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSphereLatLong");
		
		UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereLatLong_Params params {};
		params.TargetMesh = TargetMesh;
		params.PrimitiveOptions = PrimitiveOptions;
		params.Transform = Transform;
		params.Radius = Radius;
		params.StepsPhi = StepsPhi;
		params.StepsTheta = StepsTheta;
		params.Origin = Origin;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479272090
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSphereBox
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptPrimitiveOptions             PrimitiveOptions                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StepsX                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StepsY                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StepsZ                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGeometryScriptPrimitiveOriginMode                 Origin                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::STATIC_AppendSphereBox(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, float Radius, int32_t StepsX, int32_t StepsY, int32_t StepsZ, EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSphereBox");
		
		UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereBox_Params params {};
		params.TargetMesh = TargetMesh;
		params.PrimitiveOptions = PrimitiveOptions;
		params.Transform = Transform;
		params.Radius = Radius;
		params.StepsX = StepsX;
		params.StepsY = StepsY;
		params.StepsZ = StepsZ;
		params.Origin = Origin;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479271C70
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSimpleSweptPolygon
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptPrimitiveOptions             PrimitiveOptions                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector2D>                           PolygonVertices                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector>                             SweepPath                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bLoop                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCapped                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartScale                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              EndScale                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::STATIC_AppendSimpleSweptPolygon(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, TArray<struct FVector2D> PolygonVertices, TArray<struct FVector> SweepPath, bool bLoop, bool bCapped, float StartScale, float EndScale, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSimpleSweptPolygon");
		
		UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleSweptPolygon_Params params {};
		params.TargetMesh = TargetMesh;
		params.PrimitiveOptions = PrimitiveOptions;
		params.Transform = Transform;
		params.PolygonVertices = PolygonVertices;
		params.SweepPath = SweepPath;
		params.bLoop = bLoop;
		params.bCapped = bCapped;
		params.StartScale = StartScale;
		params.EndScale = EndScale;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792718C0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSimpleExtrudePolygon
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptPrimitiveOptions             PrimitiveOptions                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector2D>                           PolygonVertices                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		float                                              Height                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            HeightSteps                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCapped                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGeometryScriptPrimitiveOriginMode                 Origin                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::STATIC_AppendSimpleExtrudePolygon(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, TArray<struct FVector2D> PolygonVertices, float Height, int32_t HeightSteps, bool bCapped, EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSimpleExtrudePolygon");
		
		UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleExtrudePolygon_Params params {};
		params.TargetMesh = TargetMesh;
		params.PrimitiveOptions = PrimitiveOptions;
		params.Transform = Transform;
		params.PolygonVertices = PolygonVertices;
		params.Height = Height;
		params.HeightSteps = HeightSteps;
		params.bCapped = bCapped;
		params.Origin = Origin;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479271130
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRoundRectangleXY
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptPrimitiveOptions             PrimitiveOptions                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DimensionX                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DimensionY                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              CornerRadius                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StepsWidth                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StepsHeight                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StepsRound                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::STATIC_AppendRoundRectangleXY(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, float DimensionX, float DimensionY, float CornerRadius, int32_t StepsWidth, int32_t StepsHeight, int32_t StepsRound, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRoundRectangleXY");
		
		UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangleXY_Params params {};
		params.TargetMesh = TargetMesh;
		params.PrimitiveOptions = PrimitiveOptions;
		params.Transform = Transform;
		params.DimensionX = DimensionX;
		params.DimensionY = DimensionY;
		params.CornerRadius = CornerRadius;
		params.StepsWidth = StepsWidth;
		params.StepsHeight = StepsHeight;
		params.StepsRound = StepsRound;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792714F0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRoundRectangle_Compatibility_5_1
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptPrimitiveOptions             PrimitiveOptions                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DimensionX                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DimensionY                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              CornerRadius                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StepsWidth                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StepsHeight                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StepsRound                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::STATIC_AppendRoundRectangle_Compatibility_5_1(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, float DimensionX, float DimensionY, float CornerRadius, int32_t StepsWidth, int32_t StepsHeight, int32_t StepsRound, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRoundRectangle_Compatibility_5_1");
		
		UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangle_Compatibility_5_1_Params params {};
		params.TargetMesh = TargetMesh;
		params.PrimitiveOptions = PrimitiveOptions;
		params.Transform = Transform;
		params.DimensionX = DimensionX;
		params.DimensionY = DimensionY;
		params.CornerRadius = CornerRadius;
		params.StepsWidth = StepsWidth;
		params.StepsHeight = StepsHeight;
		params.StepsRound = StepsRound;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479270D90
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRevolvePolygon
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptPrimitiveOptions             PrimitiveOptions                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector2D>                           PolygonVertices                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptRevolveOptions               RevolveOptions                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Steps                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::STATIC_AppendRevolvePolygon(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, TArray<struct FVector2D> PolygonVertices, const struct FGeometryScriptRevolveOptions& RevolveOptions, float Radius, int32_t Steps, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRevolvePolygon");
		
		UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePolygon_Params params {};
		params.TargetMesh = TargetMesh;
		params.PrimitiveOptions = PrimitiveOptions;
		params.Transform = Transform;
		params.PolygonVertices = PolygonVertices;
		params.RevolveOptions = RevolveOptions;
		params.Radius = Radius;
		params.Steps = Steps;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792709F0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRevolvePath
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptPrimitiveOptions             PrimitiveOptions                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector2D>                           PathVertices                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptRevolveOptions               RevolveOptions                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Steps                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCapped                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::STATIC_AppendRevolvePath(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, TArray<struct FVector2D> PathVertices, const struct FGeometryScriptRevolveOptions& RevolveOptions, int32_t Steps, bool bCapped, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRevolvePath");
		
		UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePath_Params params {};
		params.TargetMesh = TargetMesh;
		params.PrimitiveOptions = PrimitiveOptions;
		params.Transform = Transform;
		params.PathVertices = PathVertices;
		params.RevolveOptions = RevolveOptions;
		params.Steps = Steps;
		params.bCapped = bCapped;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479270360
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRectangleXY
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptPrimitiveOptions             PrimitiveOptions                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DimensionX                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DimensionY                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StepsWidth                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StepsHeight                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::STATIC_AppendRectangleXY(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, float DimensionX, float DimensionY, int32_t StepsWidth, int32_t StepsHeight, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRectangleXY");
		
		UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangleXY_Params params {};
		params.TargetMesh = TargetMesh;
		params.PrimitiveOptions = PrimitiveOptions;
		params.Transform = Transform;
		params.DimensionX = DimensionX;
		params.DimensionY = DimensionY;
		params.StepsWidth = StepsWidth;
		params.StepsHeight = StepsHeight;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792706A0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRectangle_Compatibility_5_1
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptPrimitiveOptions             PrimitiveOptions                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DimensionX                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DimensionY                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StepsWidth                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StepsHeight                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::STATIC_AppendRectangle_Compatibility_5_1(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, float DimensionX, float DimensionY, int32_t StepsWidth, int32_t StepsHeight, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRectangle_Compatibility_5_1");
		
		UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangle_Compatibility_5_1_Params params {};
		params.TargetMesh = TargetMesh;
		params.PrimitiveOptions = PrimitiveOptions;
		params.Transform = Transform;
		params.DimensionX = DimensionX;
		params.DimensionY = DimensionY;
		params.StepsWidth = StepsWidth;
		params.StepsHeight = StepsHeight;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47926EED0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendLinearStairs
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptPrimitiveOptions             PrimitiveOptions                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StepWidth                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StepHeight                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StepDepth                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumSteps                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFloating                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::STATIC_AppendLinearStairs(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, float StepWidth, float StepHeight, float StepDepth, int32_t NumSteps, bool bFloating, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendLinearStairs");
		
		UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendLinearStairs_Params params {};
		params.TargetMesh = TargetMesh;
		params.PrimitiveOptions = PrimitiveOptions;
		params.Transform = Transform;
		params.StepWidth = StepWidth;
		params.StepHeight = StepHeight;
		params.StepDepth = StepDepth;
		params.NumSteps = NumSteps;
		params.bFloating = bFloating;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47926EB10
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendDisc
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptPrimitiveOptions             PrimitiveOptions                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AngleSteps                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SpokeSteps                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartAngle                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              EndAngle                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              HoleRadius                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::STATIC_AppendDisc(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, float Radius, int32_t AngleSteps, int32_t SpokeSteps, float StartAngle, float EndAngle, float HoleRadius, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendDisc");
		
		UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendDisc_Params params {};
		params.TargetMesh = TargetMesh;
		params.PrimitiveOptions = PrimitiveOptions;
		params.Transform = Transform;
		params.Radius = Radius;
		params.AngleSteps = AngleSteps;
		params.SpokeSteps = SpokeSteps;
		params.StartAngle = StartAngle;
		params.EndAngle = EndAngle;
		params.HoleRadius = HoleRadius;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47926E740
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendCylinder
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptPrimitiveOptions             PrimitiveOptions                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Height                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            RadialSteps                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            HeightSteps                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCapped                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGeometryScriptPrimitiveOriginMode                 Origin                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::STATIC_AppendCylinder(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, float Radius, float Height, int32_t RadialSteps, int32_t HeightSteps, bool bCapped, EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendCylinder");
		
		UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCylinder_Params params {};
		params.TargetMesh = TargetMesh;
		params.PrimitiveOptions = PrimitiveOptions;
		params.Transform = Transform;
		params.Radius = Radius;
		params.Height = Height;
		params.RadialSteps = RadialSteps;
		params.HeightSteps = HeightSteps;
		params.bCapped = bCapped;
		params.Origin = Origin;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47926E370
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendCurvedStairs
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptPrimitiveOptions             PrimitiveOptions                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StepWidth                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StepHeight                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InnerRadius                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              CurveAngle                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumSteps                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFloating                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::STATIC_AppendCurvedStairs(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, float StepWidth, float StepHeight, float InnerRadius, float CurveAngle, int32_t NumSteps, bool bFloating, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendCurvedStairs");
		
		UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCurvedStairs_Params params {};
		params.TargetMesh = TargetMesh;
		params.PrimitiveOptions = PrimitiveOptions;
		params.Transform = Transform;
		params.StepWidth = StepWidth;
		params.StepHeight = StepHeight;
		params.InnerRadius = InnerRadius;
		params.CurveAngle = CurveAngle;
		params.NumSteps = NumSteps;
		params.bFloating = bFloating;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47926DF60
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendCone
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptPrimitiveOptions             PrimitiveOptions                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              BaseRadius                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TopRadius                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Height                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            RadialSteps                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            HeightSteps                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCapped                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGeometryScriptPrimitiveOriginMode                 Origin                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::STATIC_AppendCone(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, float BaseRadius, float TopRadius, float Height, int32_t RadialSteps, int32_t HeightSteps, bool bCapped, EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendCone");
		
		UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCone_Params params {};
		params.TargetMesh = TargetMesh;
		params.PrimitiveOptions = PrimitiveOptions;
		params.Transform = Transform;
		params.BaseRadius = BaseRadius;
		params.TopRadius = TopRadius;
		params.Height = Height;
		params.RadialSteps = RadialSteps;
		params.HeightSteps = HeightSteps;
		params.bCapped = bCapped;
		params.Origin = Origin;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47926DBE0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendCapsule
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptPrimitiveOptions             PrimitiveOptions                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              LineLength                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            HemisphereSteps                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            CircleSteps                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGeometryScriptPrimitiveOriginMode                 Origin                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::STATIC_AppendCapsule(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, float Radius, float LineLength, int32_t HemisphereSteps, int32_t CircleSteps, EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendCapsule");
		
		UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCapsule_Params params {};
		params.TargetMesh = TargetMesh;
		params.PrimitiveOptions = PrimitiveOptions;
		params.Transform = Transform;
		params.Radius = Radius;
		params.LineLength = LineLength;
		params.HemisphereSteps = HemisphereSteps;
		params.CircleSteps = CircleSteps;
		params.Origin = Origin;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47926D310
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendBox
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptPrimitiveOptions             PrimitiveOptions                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DimensionX                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DimensionY                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DimensionZ                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StepsX                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StepsY                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StepsZ                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGeometryScriptPrimitiveOriginMode                 Origin                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::STATIC_AppendBox(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, float DimensionX, float DimensionY, float DimensionZ, int32_t StepsX, int32_t StepsY, int32_t StepsZ, EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendBox");
		
		UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendBox_Params params {};
		params.TargetMesh = TargetMesh;
		params.PrimitiveOptions = PrimitiveOptions;
		params.Transform = Transform;
		params.DimensionX = DimensionX;
		params.DimensionY = DimensionY;
		params.DimensionZ = DimensionZ;
		params.StepsX = StepsX;
		params.StepsY = StepsY;
		params.StepsZ = StepsZ;
		params.Origin = Origin;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeometryScriptLibrary_MeshPrimitiveFunctions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryScriptLibrary_MeshPrimitiveFunctions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47929C8D0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.IsValidVertexID
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            VertexID                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGeometryScriptLibrary_MeshQueryFunctions::STATIC_IsValidVertexID(class UDynamicMesh* TargetMesh, int32_t VertexID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.IsValidVertexID");
		
		UGeometryScriptLibrary_MeshQueryFunctions_IsValidVertexID_Params params {};
		params.TargetMesh = TargetMesh;
		params.VertexID = VertexID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47929C790
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.IsValidTriangleID
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TriangleID                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGeometryScriptLibrary_MeshQueryFunctions::STATIC_IsValidTriangleID(class UDynamicMesh* TargetMesh, int32_t TriangleID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.IsValidTriangleID");
		
		UGeometryScriptLibrary_MeshQueryFunctions_IsValidTriangleID_Params params {};
		params.TargetMesh = TargetMesh;
		params.TriangleID = TriangleID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47929B190
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetVertexPosition
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            VertexID                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsValidVertex                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UGeometryScriptLibrary_MeshQueryFunctions::STATIC_GetVertexPosition(class UDynamicMesh* TargetMesh, int32_t VertexID, bool* bIsValidVertex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetVertexPosition");
		
		UGeometryScriptLibrary_MeshQueryFunctions_GetVertexPosition_Params params {};
		params.TargetMesh = TargetMesh;
		params.VertexID = VertexID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValidVertex != nullptr)
			*bIsValidVertex = params.bIsValidVertex;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47929B0A0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetVertexCount
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UGeometryScriptLibrary_MeshQueryFunctions::STATIC_GetVertexCount(class UDynamicMesh* TargetMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetVertexCount");
		
		UGeometryScriptLibrary_MeshQueryFunctions_GetVertexCount_Params params {};
		params.TargetMesh = TargetMesh;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47929AA50
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetUVSetBoundingBox
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            UVSetIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsValidUVSet                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUVSetIsEmpty                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FBox2D UGeometryScriptLibrary_MeshQueryFunctions::STATIC_GetUVSetBoundingBox(class UDynamicMesh* TargetMesh, int32_t UVSetIndex, bool* bIsValidUVSet, bool* bUVSetIsEmpty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetUVSetBoundingBox");
		
		UGeometryScriptLibrary_MeshQueryFunctions_GetUVSetBoundingBox_Params params {};
		params.TargetMesh = TargetMesh;
		params.UVSetIndex = UVSetIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValidUVSet != nullptr)
			*bIsValidUVSet = params.bIsValidUVSet;
		if (bUVSetIsEmpty != nullptr)
			*bUVSetIsEmpty = params.bUVSetIsEmpty;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479299EE0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleVertexColors
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TriangleID                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Color1                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Color2                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Color3                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTriHasValidVertexColors                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::STATIC_GetTriangleVertexColors(class UDynamicMesh* TargetMesh, int32_t TriangleID, struct FLinearColor* Color1, struct FLinearColor* Color2, struct FLinearColor* Color3, bool* bTriHasValidVertexColors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleVertexColors");
		
		UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleVertexColors_Params params {};
		params.TargetMesh = TargetMesh;
		params.TriangleID = TriangleID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Color1 != nullptr)
			*Color1 = params.Color1;
		if (Color2 != nullptr)
			*Color2 = params.Color2;
		if (Color3 != nullptr)
			*Color3 = params.Color3;
		if (bTriHasValidVertexColors != nullptr)
			*bTriHasValidVertexColors = params.bTriHasValidVertexColors;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479299C10
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleUVs
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            UVSetIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TriangleID                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   UV1                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   UV2                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   UV3                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHaveValidUVs                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryScriptLibrary_MeshQueryFunctions::STATIC_GetTriangleUVs(class UDynamicMesh* TargetMesh, int32_t UVSetIndex, int32_t TriangleID, struct FVector2D* UV1, struct FVector2D* UV2, struct FVector2D* UV3, bool* bHaveValidUVs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleUVs");
		
		UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleUVs_Params params {};
		params.TargetMesh = TargetMesh;
		params.UVSetIndex = UVSetIndex;
		params.TriangleID = TriangleID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UV1 != nullptr)
			*UV1 = params.UV1;
		if (UV2 != nullptr)
			*UV2 = params.UV2;
		if (UV3 != nullptr)
			*UV3 = params.UV3;
		if (bHaveValidUVs != nullptr)
			*bHaveValidUVs = params.bHaveValidUVs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792999A0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTrianglePositions
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TriangleID                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsValidTriangle                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Vertex1                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Vertex2                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Vertex3                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryScriptLibrary_MeshQueryFunctions::STATIC_GetTrianglePositions(class UDynamicMesh* TargetMesh, int32_t TriangleID, bool* bIsValidTriangle, struct FVector* Vertex1, struct FVector* Vertex2, struct FVector* Vertex3)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTrianglePositions");
		
		UGeometryScriptLibrary_MeshQueryFunctions_GetTrianglePositions_Params params {};
		params.TargetMesh = TargetMesh;
		params.TriangleID = TriangleID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValidTriangle != nullptr)
			*bIsValidTriangle = params.bIsValidTriangle;
		if (Vertex1 != nullptr)
			*Vertex1 = params.Vertex1;
		if (Vertex2 != nullptr)
			*Vertex2 = params.Vertex2;
		if (Vertex3 != nullptr)
			*Vertex3 = params.Vertex3;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792991F0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleNormalTangents
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TriangleID                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTriHasValidElements                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptTriangle                     Normals                                                    (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptTriangle                     Tangents                                                   (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptTriangle                     BiTangents                                                 (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::STATIC_GetTriangleNormalTangents(class UDynamicMesh* TargetMesh, int32_t TriangleID, bool* bTriHasValidElements, struct FGeometryScriptTriangle* Normals, struct FGeometryScriptTriangle* Tangents, struct FGeometryScriptTriangle* BiTangents)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleNormalTangents");
		
		UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormalTangents_Params params {};
		params.TargetMesh = TargetMesh;
		params.TriangleID = TriangleID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bTriHasValidElements != nullptr)
			*bTriHasValidElements = params.bTriHasValidElements;
		if (Normals != nullptr)
			*Normals = params.Normals;
		if (Tangents != nullptr)
			*Tangents = params.Tangents;
		if (BiTangents != nullptr)
			*BiTangents = params.BiTangents;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479299540
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleNormals
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TriangleID                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Normal1                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Normal2                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Normal3                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTriHasValidNormals                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::STATIC_GetTriangleNormals(class UDynamicMesh* TargetMesh, int32_t TriangleID, struct FVector* Normal1, struct FVector* Normal2, struct FVector* Normal3, bool* bTriHasValidNormals)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleNormals");
		
		UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormals_Params params {};
		params.TargetMesh = TargetMesh;
		params.TriangleID = TriangleID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Normal1 != nullptr)
			*Normal1 = params.Normal1;
		if (Normal2 != nullptr)
			*Normal2 = params.Normal2;
		if (Normal3 != nullptr)
			*Normal3 = params.Normal3;
		if (bTriHasValidNormals != nullptr)
			*bTriHasValidNormals = params.bTriHasValidNormals;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479298BD0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleIndices
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TriangleID                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsValidTriangle                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FIntVector UGeometryScriptLibrary_MeshQueryFunctions::STATIC_GetTriangleIndices(class UDynamicMesh* TargetMesh, int32_t TriangleID, bool* bIsValidTriangle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleIndices");
		
		UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleIndices_Params params {};
		params.TargetMesh = TargetMesh;
		params.TriangleID = TriangleID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValidTriangle != nullptr)
			*bIsValidTriangle = params.bIsValidTriangle;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479298A40
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleFaceNormal
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TriangleID                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsValidTriangle                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UGeometryScriptLibrary_MeshQueryFunctions::STATIC_GetTriangleFaceNormal(class UDynamicMesh* TargetMesh, int32_t TriangleID, bool* bIsValidTriangle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleFaceNormal");
		
		UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleFaceNormal_Params params {};
		params.TargetMesh = TargetMesh;
		params.TriangleID = TriangleID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValidTriangle != nullptr)
			*bIsValidTriangle = params.bIsValidTriangle;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479295800
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumVertexIDs
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UGeometryScriptLibrary_MeshQueryFunctions::STATIC_GetNumVertexIDs(class UDynamicMesh* TargetMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumVertexIDs");
		
		UGeometryScriptLibrary_MeshQueryFunctions_GetNumVertexIDs_Params params {};
		params.TargetMesh = TargetMesh;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479295710
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumUVSets
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UGeometryScriptLibrary_MeshQueryFunctions::STATIC_GetNumUVSets(class UDynamicMesh* TargetMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumUVSets");
		
		UGeometryScriptLibrary_MeshQueryFunctions_GetNumUVSets_Params params {};
		params.TargetMesh = TargetMesh;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479295620
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumTriangleIDs
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UGeometryScriptLibrary_MeshQueryFunctions::STATIC_GetNumTriangleIDs(class UDynamicMesh* TargetMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumTriangleIDs");
		
		UGeometryScriptLibrary_MeshQueryFunctions_GetNumTriangleIDs_Params params {};
		params.TargetMesh = TargetMesh;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792954D0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumOpenBorderLoops
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAmbiguousTopologyFound                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UGeometryScriptLibrary_MeshQueryFunctions::STATIC_GetNumOpenBorderLoops(class UDynamicMesh* TargetMesh, bool* bAmbiguousTopologyFound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumOpenBorderLoops");
		
		UGeometryScriptLibrary_MeshQueryFunctions_GetNumOpenBorderLoops_Params params {};
		params.TargetMesh = TargetMesh;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bAmbiguousTopologyFound != nullptr)
			*bAmbiguousTopologyFound = params.bAmbiguousTopologyFound;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792953E0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumOpenBorderEdges
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UGeometryScriptLibrary_MeshQueryFunctions::STATIC_GetNumOpenBorderEdges(class UDynamicMesh* TargetMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumOpenBorderEdges");
		
		UGeometryScriptLibrary_MeshQueryFunctions_GetNumOpenBorderEdges_Params params {};
		params.TargetMesh = TargetMesh;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792952F0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumExtendedPolygroupLayers
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UGeometryScriptLibrary_MeshQueryFunctions::STATIC_GetNumExtendedPolygroupLayers(class UDynamicMesh* TargetMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumExtendedPolygroupLayers");
		
		UGeometryScriptLibrary_MeshQueryFunctions_GetNumExtendedPolygroupLayers_Params params {};
		params.TargetMesh = TargetMesh;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479295200
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumConnectedComponents
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UGeometryScriptLibrary_MeshQueryFunctions::STATIC_GetNumConnectedComponents(class UDynamicMesh* TargetMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumConnectedComponents");
		
		UGeometryScriptLibrary_MeshQueryFunctions_GetNumConnectedComponents_Params params {};
		params.TargetMesh = TargetMesh;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479294EB0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetMeshVolumeArea
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SurfaceArea                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Volume                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryScriptLibrary_MeshQueryFunctions::STATIC_GetMeshVolumeArea(class UDynamicMesh* TargetMesh, float* SurfaceArea, float* Volume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetMeshVolumeArea");
		
		UGeometryScriptLibrary_MeshQueryFunctions_GetMeshVolumeArea_Params params {};
		params.TargetMesh = TargetMesh;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SurfaceArea != nullptr)
			*SurfaceArea = params.SurfaceArea;
		if (Volume != nullptr)
			*Volume = params.Volume;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479293520
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetMeshInfoString
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UGeometryScriptLibrary_MeshQueryFunctions::STATIC_GetMeshInfoString(class UDynamicMesh* TargetMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetMeshInfoString");
		
		UGeometryScriptLibrary_MeshQueryFunctions_GetMeshInfoString_Params params {};
		params.TargetMesh = TargetMesh;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479293210
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetMeshHasAttributeSet
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGeometryScriptLibrary_MeshQueryFunctions::STATIC_GetMeshHasAttributeSet(class UDynamicMesh* TargetMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetMeshHasAttributeSet");
		
		UGeometryScriptLibrary_MeshQueryFunctions_GetMeshHasAttributeSet_Params params {};
		params.TargetMesh = TargetMesh;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792930F0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetMeshBoundingBox
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FBox UGeometryScriptLibrary_MeshQueryFunctions::STATIC_GetMeshBoundingBox(class UDynamicMesh* TargetMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetMeshBoundingBox");
		
		UGeometryScriptLibrary_MeshQueryFunctions_GetMeshBoundingBox_Params params {};
		params.TargetMesh = TargetMesh;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479292820
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetIsDenseMesh
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGeometryScriptLibrary_MeshQueryFunctions::STATIC_GetIsDenseMesh(class UDynamicMesh* TargetMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetIsDenseMesh");
		
		UGeometryScriptLibrary_MeshQueryFunctions_GetIsDenseMesh_Params params {};
		params.TargetMesh = TargetMesh;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479292730
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetIsClosedMesh
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGeometryScriptLibrary_MeshQueryFunctions::STATIC_GetIsClosedMesh(class UDynamicMesh* TargetMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetIsClosedMesh");
		
		UGeometryScriptLibrary_MeshQueryFunctions_GetIsClosedMesh_Params params {};
		params.TargetMesh = TargetMesh;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792924B0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetInterpolatedTriangleVertexColor
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TriangleID                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     BarycentricCoords                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                DefaultColor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTriHasValidVertexColors                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                InterpolatedColor                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::STATIC_GetInterpolatedTriangleVertexColor(class UDynamicMesh* TargetMesh, int32_t TriangleID, const struct FVector& BarycentricCoords, const struct FLinearColor& DefaultColor, bool* bTriHasValidVertexColors, struct FLinearColor* InterpolatedColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetInterpolatedTriangleVertexColor");
		
		UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleVertexColor_Params params {};
		params.TargetMesh = TargetMesh;
		params.TriangleID = TriangleID;
		params.BarycentricCoords = BarycentricCoords;
		params.DefaultColor = DefaultColor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bTriHasValidVertexColors != nullptr)
			*bTriHasValidVertexColors = params.bTriHasValidVertexColors;
		if (InterpolatedColor != nullptr)
			*InterpolatedColor = params.InterpolatedColor;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479292230
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetInterpolatedTriangleUV
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            UVSetIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TriangleID                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     BarycentricCoords                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTriHasValidUVs                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   InterpolatedUV                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::STATIC_GetInterpolatedTriangleUV(class UDynamicMesh* TargetMesh, int32_t UVSetIndex, int32_t TriangleID, const struct FVector& BarycentricCoords, bool* bTriHasValidUVs, struct FVector2D* InterpolatedUV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetInterpolatedTriangleUV");
		
		UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleUV_Params params {};
		params.TargetMesh = TargetMesh;
		params.UVSetIndex = UVSetIndex;
		params.TriangleID = TriangleID;
		params.BarycentricCoords = BarycentricCoords;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bTriHasValidUVs != nullptr)
			*bTriHasValidUVs = params.bTriHasValidUVs;
		if (InterpolatedUV != nullptr)
			*InterpolatedUV = params.InterpolatedUV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479292000
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetInterpolatedTrianglePosition
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TriangleID                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     BarycentricCoords                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsValidTriangle                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     InterpolatedPosition                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::STATIC_GetInterpolatedTrianglePosition(class UDynamicMesh* TargetMesh, int32_t TriangleID, const struct FVector& BarycentricCoords, bool* bIsValidTriangle, struct FVector* InterpolatedPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetInterpolatedTrianglePosition");
		
		UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTrianglePosition_Params params {};
		params.TargetMesh = TargetMesh;
		params.TriangleID = TriangleID;
		params.BarycentricCoords = BarycentricCoords;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValidTriangle != nullptr)
			*bIsValidTriangle = params.bIsValidTriangle;
		if (InterpolatedPosition != nullptr)
			*InterpolatedPosition = params.InterpolatedPosition;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479291D20
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetInterpolatedTriangleNormalTangents
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TriangleID                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     BarycentricCoords                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTriHasValidElements                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     InterpolatedNormal                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     InterpolatedTangent                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     InterpolatedBiTangent                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::STATIC_GetInterpolatedTriangleNormalTangents(class UDynamicMesh* TargetMesh, int32_t TriangleID, const struct FVector& BarycentricCoords, bool* bTriHasValidElements, struct FVector* InterpolatedNormal, struct FVector* InterpolatedTangent, struct FVector* InterpolatedBiTangent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetInterpolatedTriangleNormalTangents");
		
		UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormalTangents_Params params {};
		params.TargetMesh = TargetMesh;
		params.TriangleID = TriangleID;
		params.BarycentricCoords = BarycentricCoords;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bTriHasValidElements != nullptr)
			*bTriHasValidElements = params.bTriHasValidElements;
		if (InterpolatedNormal != nullptr)
			*InterpolatedNormal = params.InterpolatedNormal;
		if (InterpolatedTangent != nullptr)
			*InterpolatedTangent = params.InterpolatedTangent;
		if (InterpolatedBiTangent != nullptr)
			*InterpolatedBiTangent = params.InterpolatedBiTangent;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479291AD0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetInterpolatedTriangleNormal
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TriangleID                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     BarycentricCoords                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTriHasValidNormals                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     InterpolatedNormal                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::STATIC_GetInterpolatedTriangleNormal(class UDynamicMesh* TargetMesh, int32_t TriangleID, const struct FVector& BarycentricCoords, bool* bTriHasValidNormals, struct FVector* InterpolatedNormal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetInterpolatedTriangleNormal");
		
		UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormal_Params params {};
		params.TargetMesh = TargetMesh;
		params.TriangleID = TriangleID;
		params.BarycentricCoords = BarycentricCoords;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bTriHasValidNormals != nullptr)
			*bTriHasValidNormals = params.bTriHasValidNormals;
		if (InterpolatedNormal != nullptr)
			*InterpolatedNormal = params.InterpolatedNormal;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792915B0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetHasVertexIDGaps
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGeometryScriptLibrary_MeshQueryFunctions::STATIC_GetHasVertexIDGaps(class UDynamicMesh* TargetMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetHasVertexIDGaps");
		
		UGeometryScriptLibrary_MeshQueryFunctions_GetHasVertexIDGaps_Params params {};
		params.TargetMesh = TargetMesh;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792914C0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetHasVertexColors
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGeometryScriptLibrary_MeshQueryFunctions::STATIC_GetHasVertexColors(class UDynamicMesh* TargetMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetHasVertexColors");
		
		UGeometryScriptLibrary_MeshQueryFunctions_GetHasVertexColors_Params params {};
		params.TargetMesh = TargetMesh;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792913D0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetHasTriangleNormals
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGeometryScriptLibrary_MeshQueryFunctions::STATIC_GetHasTriangleNormals(class UDynamicMesh* TargetMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetHasTriangleNormals");
		
		UGeometryScriptLibrary_MeshQueryFunctions_GetHasTriangleNormals_Params params {};
		params.TargetMesh = TargetMesh;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792912E0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetHasTriangleIDGaps
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGeometryScriptLibrary_MeshQueryFunctions::STATIC_GetHasTriangleIDGaps(class UDynamicMesh* TargetMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetHasTriangleIDGaps");
		
		UGeometryScriptLibrary_MeshQueryFunctions_GetHasTriangleIDGaps_Params params {};
		params.TargetMesh = TargetMesh;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792911F0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetHasPolygroups
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGeometryScriptLibrary_MeshQueryFunctions::STATIC_GetHasPolygroups(class UDynamicMesh* TargetMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetHasPolygroups");
		
		UGeometryScriptLibrary_MeshQueryFunctions_GetHasPolygroups_Params params {};
		params.TargetMesh = TargetMesh;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479291100
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetHasMaterialIDs
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGeometryScriptLibrary_MeshQueryFunctions::STATIC_GetHasMaterialIDs(class UDynamicMesh* TargetMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetHasMaterialIDs");
		
		UGeometryScriptLibrary_MeshQueryFunctions_GetHasMaterialIDs_Params params {};
		params.TargetMesh = TargetMesh;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47928FEA0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetAllVertexPositions
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptVectorList                   PositionList                                               (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bSkipGaps                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHasVertexIDGaps                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::STATIC_GetAllVertexPositions(class UDynamicMesh* TargetMesh, struct FGeometryScriptVectorList* PositionList, bool bSkipGaps, bool* bHasVertexIDGaps)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetAllVertexPositions");
		
		UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexPositions_Params params {};
		params.TargetMesh = TargetMesh;
		params.bSkipGaps = bSkipGaps;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PositionList != nullptr)
			*PositionList = params.PositionList;
		if (bHasVertexIDGaps != nullptr)
			*bHasVertexIDGaps = params.bHasVertexIDGaps;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47928FCD0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetAllVertexIDs
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptIndexList                    VertexIDList                                               (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bHasVertexIDGaps                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::STATIC_GetAllVertexIDs(class UDynamicMesh* TargetMesh, struct FGeometryScriptIndexList* VertexIDList, bool* bHasVertexIDGaps)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetAllVertexIDs");
		
		UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexIDs_Params params {};
		params.TargetMesh = TargetMesh;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (VertexIDList != nullptr)
			*VertexIDList = params.VertexIDList;
		if (bHasVertexIDGaps != nullptr)
			*bHasVertexIDGaps = params.bHasVertexIDGaps;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47928F6F0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetAllTriangleIndices
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptTriangleList                 TriangleList                                               (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bSkipGaps                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHasTriangleIDGaps                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::STATIC_GetAllTriangleIndices(class UDynamicMesh* TargetMesh, struct FGeometryScriptTriangleList* TriangleList, bool bSkipGaps, bool* bHasTriangleIDGaps)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetAllTriangleIndices");
		
		UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIndices_Params params {};
		params.TargetMesh = TargetMesh;
		params.bSkipGaps = bSkipGaps;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TriangleList != nullptr)
			*TriangleList = params.TriangleList;
		if (bHasTriangleIDGaps != nullptr)
			*bHasTriangleIDGaps = params.bHasTriangleIDGaps;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47928F520
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetAllTriangleIDs
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptIndexList                    TriangleIDList                                             (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bHasTriangleIDGaps                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::STATIC_GetAllTriangleIDs(class UDynamicMesh* TargetMesh, struct FGeometryScriptIndexList* TriangleIDList, bool* bHasTriangleIDGaps)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetAllTriangleIDs");
		
		UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIDs_Params params {};
		params.TargetMesh = TargetMesh;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TriangleIDList != nullptr)
			*TriangleIDList = params.TriangleIDList;
		if (bHasTriangleIDGaps != nullptr)
			*bHasTriangleIDGaps = params.bHasTriangleIDGaps;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479282320
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.ComputeTriangleBarycentricCoords
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TriangleID                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsValidTriangle                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Point                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Vertex1                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Vertex2                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Vertex3                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     BarycentricCoords                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::STATIC_ComputeTriangleBarycentricCoords(class UDynamicMesh* TargetMesh, int32_t TriangleID, bool* bIsValidTriangle, const struct FVector& Point, struct FVector* Vertex1, struct FVector* Vertex2, struct FVector* Vertex3, struct FVector* BarycentricCoords)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.ComputeTriangleBarycentricCoords");
		
		UGeometryScriptLibrary_MeshQueryFunctions_ComputeTriangleBarycentricCoords_Params params {};
		params.TargetMesh = TargetMesh;
		params.TriangleID = TriangleID;
		params.Point = Point;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValidTriangle != nullptr)
			*bIsValidTriangle = params.bIsValidTriangle;
		if (Vertex1 != nullptr)
			*Vertex1 = params.Vertex1;
		if (Vertex2 != nullptr)
			*Vertex2 = params.Vertex2;
		if (Vertex3 != nullptr)
			*Vertex3 = params.Vertex3;
		if (BarycentricCoords != nullptr)
			*BarycentricCoords = params.BarycentricCoords;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeometryScriptLibrary_MeshQueryFunctions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryScriptLibrary_MeshQueryFunctions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47927C1A0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_RemeshingFunctions.ApplyUniformRemesh
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptRemeshOptions                RemeshOptions                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptUniformRemeshOptions         UniformOptions                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_RemeshingFunctions::STATIC_ApplyUniformRemesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptRemeshOptions& RemeshOptions, const struct FGeometryScriptUniformRemeshOptions& UniformOptions, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_RemeshingFunctions.ApplyUniformRemesh");
		
		UGeometryScriptLibrary_RemeshingFunctions_ApplyUniformRemesh_Params params {};
		params.TargetMesh = TargetMesh;
		params.RemeshOptions = RemeshOptions;
		params.UniformOptions = UniformOptions;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeometryScriptLibrary_RemeshingFunctions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryScriptLibrary_RemeshingFunctions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryScriptingCore.GeometryScriptLibrary_RemeshingFunctions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792B1CE0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.WeldMeshEdges
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptWeldEdgesOptions             WeldOptions                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshRepairFunctions::STATIC_WeldMeshEdges(class UDynamicMesh* TargetMesh, const struct FGeometryScriptWeldEdgesOptions& WeldOptions, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.WeldMeshEdges");
		
		UGeometryScriptLibrary_MeshRepairFunctions_WeldMeshEdges_Params params {};
		params.TargetMesh = TargetMesh;
		params.WeldOptions = WeldOptions;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792AD420
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.SplitMeshBowties
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMeshBowties                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAttributeBowties                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshRepairFunctions::STATIC_SplitMeshBowties(class UDynamicMesh* TargetMesh, bool bMeshBowties, bool bAttributeBowties, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.SplitMeshBowties");
		
		UGeometryScriptLibrary_MeshRepairFunctions_SplitMeshBowties_Params params {};
		params.TargetMesh = TargetMesh;
		params.bMeshBowties = bMeshBowties;
		params.bAttributeBowties = bAttributeBowties;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792A0420
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.ResolveMeshTJunctions
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptResolveTJunctionOptions      ResolveOptions                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshRepairFunctions::STATIC_ResolveMeshTJunctions(class UDynamicMesh* TargetMesh, const struct FGeometryScriptResolveTJunctionOptions& ResolveOptions, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.ResolveMeshTJunctions");
		
		UGeometryScriptLibrary_MeshRepairFunctions_ResolveMeshTJunctions_Params params {};
		params.TargetMesh = TargetMesh;
		params.ResolveOptions = ResolveOptions;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47929FE90
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.RepairMeshDegenerateGeometry
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptDegenerateTriangleOptions    Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshRepairFunctions::STATIC_RepairMeshDegenerateGeometry(class UDynamicMesh* TargetMesh, const struct FGeometryScriptDegenerateTriangleOptions& Options, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.RepairMeshDegenerateGeometry");
		
		UGeometryScriptLibrary_MeshRepairFunctions_RepairMeshDegenerateGeometry_Params params {};
		params.TargetMesh = TargetMesh;
		params.Options = Options;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47929F8B0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.RemoveSmallComponents
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptRemoveSmallComponentOptions  Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshRepairFunctions::STATIC_RemoveSmallComponents(class UDynamicMesh* TargetMesh, const struct FGeometryScriptRemoveSmallComponentOptions& Options, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.RemoveSmallComponents");
		
		UGeometryScriptLibrary_MeshRepairFunctions_RemoveSmallComponents_Params params {};
		params.TargetMesh = TargetMesh;
		params.Options = Options;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47929F630
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.RemoveHiddenTriangles
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptRemoveHiddenTrianglesOptions Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshRepairFunctions::STATIC_RemoveHiddenTriangles(class UDynamicMesh* TargetMesh, const struct FGeometryScriptRemoveHiddenTrianglesOptions& Options, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.RemoveHiddenTriangles");
		
		UGeometryScriptLibrary_MeshRepairFunctions_RemoveHiddenTriangles_Params params {};
		params.TargetMesh = TargetMesh;
		params.Options = Options;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47928DF70
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.FillAllMeshHoles
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptFillHolesOptions             FillOptions                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumFilledHoles                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumFailedHoleFills                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshRepairFunctions::STATIC_FillAllMeshHoles(class UDynamicMesh* TargetMesh, const struct FGeometryScriptFillHolesOptions& FillOptions, int32_t* NumFilledHoles, int32_t* NumFailedHoleFills, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.FillAllMeshHoles");
		
		UGeometryScriptLibrary_MeshRepairFunctions_FillAllMeshHoles_Params params {};
		params.TargetMesh = TargetMesh;
		params.FillOptions = FillOptions;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NumFilledHoles != nullptr)
			*NumFilledHoles = params.NumFilledHoles;
		if (NumFailedHoleFills != nullptr)
			*NumFailedHoleFills = params.NumFailedHoleFills;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47927FDF0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.CompactMesh
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshRepairFunctions::STATIC_CompactMesh(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.CompactMesh");
		
		UGeometryScriptLibrary_MeshRepairFunctions_CompactMesh_Params params {};
		params.TargetMesh = TargetMesh;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeometryScriptLibrary_MeshRepairFunctions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryScriptLibrary_MeshRepairFunctions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479282690
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshSamplingFunctions.ComputeVertexWeightedPointSampling
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshPointSamplingOptions     Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptNonUniformPointSamplingOptions NonUniformOptions                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptScalarList                   VertexWeights                                              (Parm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FTransform>                          Samples                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<double>                                     SampleRadii                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptIndexList                    TriangleIDs                                                (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshSamplingFunctions::STATIC_ComputeVertexWeightedPointSampling(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshPointSamplingOptions& Options, const struct FGeometryScriptNonUniformPointSamplingOptions& NonUniformOptions, const struct FGeometryScriptScalarList& VertexWeights, TArray<struct FTransform>* Samples, TArray<double>* SampleRadii, struct FGeometryScriptIndexList* TriangleIDs, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshSamplingFunctions.ComputeVertexWeightedPointSampling");
		
		UGeometryScriptLibrary_MeshSamplingFunctions_ComputeVertexWeightedPointSampling_Params params {};
		params.TargetMesh = TargetMesh;
		params.Options = Options;
		params.NonUniformOptions = NonUniformOptions;
		params.VertexWeights = VertexWeights;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Samples != nullptr)
			*Samples = params.Samples;
		if (SampleRadii != nullptr)
			*SampleRadii = params.SampleRadii;
		if (TriangleIDs != nullptr)
			*TriangleIDs = params.TriangleIDs;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479280DF0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshSamplingFunctions.ComputePointSampling
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshPointSamplingOptions     Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FTransform>                          Samples                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptIndexList                    TriangleIDs                                                (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshSamplingFunctions::STATIC_ComputePointSampling(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshPointSamplingOptions& Options, TArray<struct FTransform>* Samples, struct FGeometryScriptIndexList* TriangleIDs, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshSamplingFunctions.ComputePointSampling");
		
		UGeometryScriptLibrary_MeshSamplingFunctions_ComputePointSampling_Params params {};
		params.TargetMesh = TargetMesh;
		params.Options = Options;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Samples != nullptr)
			*Samples = params.Samples;
		if (TriangleIDs != nullptr)
			*TriangleIDs = params.TriangleIDs;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479280770
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshSamplingFunctions.ComputeNonUniformPointSampling
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshPointSamplingOptions     Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptNonUniformPointSamplingOptions NonUniformOptions                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FTransform>                          Samples                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<double>                                     SampleRadii                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptIndexList                    TriangleIDs                                                (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshSamplingFunctions::STATIC_ComputeNonUniformPointSampling(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshPointSamplingOptions& Options, const struct FGeometryScriptNonUniformPointSamplingOptions& NonUniformOptions, TArray<struct FTransform>* Samples, TArray<double>* SampleRadii, struct FGeometryScriptIndexList* TriangleIDs, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshSamplingFunctions.ComputeNonUniformPointSampling");
		
		UGeometryScriptLibrary_MeshSamplingFunctions_ComputeNonUniformPointSampling_Params params {};
		params.TargetMesh = TargetMesh;
		params.Options = Options;
		params.NonUniformOptions = NonUniformOptions;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Samples != nullptr)
			*Samples = params.Samples;
		if (SampleRadii != nullptr)
			*SampleRadii = params.SampleRadii;
		if (TriangleIDs != nullptr)
			*TriangleIDs = params.TriangleIDs;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeometryScriptLibrary_MeshSamplingFunctions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryScriptLibrary_MeshSamplingFunctions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryScriptingCore.GeometryScriptLibrary_MeshSamplingFunctions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792A6CD0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.SelectMeshElementsWithPlane
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshSelection                Selection                                                  (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     PlaneOrigin                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     PlaneNormal                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGeometryScriptMeshSelectionType                   SelectionType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInvert                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MinNumTrianglePoints                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::STATIC_SelectMeshElementsWithPlane(class UDynamicMesh* TargetMesh, struct FGeometryScriptMeshSelection* Selection, const struct FVector& PlaneOrigin, const struct FVector& PlaneNormal, EGeometryScriptMeshSelectionType SelectionType, bool bInvert, int32_t MinNumTrianglePoints)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.SelectMeshElementsWithPlane");
		
		UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsWithPlane_Params params {};
		params.TargetMesh = TargetMesh;
		params.PlaneOrigin = PlaneOrigin;
		params.PlaneNormal = PlaneNormal;
		params.SelectionType = SelectionType;
		params.bInvert = bInvert;
		params.MinNumTrianglePoints = MinNumTrianglePoints;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Selection != nullptr)
			*Selection = params.Selection;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792A6170
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.SelectMeshElementsInSphere
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshSelection                Selection                                                  (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     SphereOrigin                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		double                                             SphereRadius                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGeometryScriptMeshSelectionType                   SelectionType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInvert                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MinNumTrianglePoints                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::STATIC_SelectMeshElementsInSphere(class UDynamicMesh* TargetMesh, struct FGeometryScriptMeshSelection* Selection, const struct FVector& SphereOrigin, double SphereRadius, EGeometryScriptMeshSelectionType SelectionType, bool bInvert, int32_t MinNumTrianglePoints)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.SelectMeshElementsInSphere");
		
		UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInSphere_Params params {};
		params.TargetMesh = TargetMesh;
		params.SphereOrigin = SphereOrigin;
		params.SphereRadius = SphereRadius;
		params.SelectionType = SelectionType;
		params.bInvert = bInvert;
		params.MinNumTrianglePoints = MinNumTrianglePoints;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Selection != nullptr)
			*Selection = params.Selection;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792A65C0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.SelectMeshElementsInsideMesh
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDynamicMesh*                                SelectionMesh                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshSelection                Selection                                                  (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  SelectionMeshTransform                                     (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGeometryScriptMeshSelectionType                   SelectionType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInvert                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		double                                             ShellDistance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		double                                             WindingThreshold                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MinNumTrianglePoints                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::STATIC_SelectMeshElementsInsideMesh(class UDynamicMesh* TargetMesh, class UDynamicMesh* SelectionMesh, struct FGeometryScriptMeshSelection* Selection, const struct FTransform& SelectionMeshTransform, EGeometryScriptMeshSelectionType SelectionType, bool bInvert, double ShellDistance, double WindingThreshold, int32_t MinNumTrianglePoints)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.SelectMeshElementsInsideMesh");
		
		UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInsideMesh_Params params {};
		params.TargetMesh = TargetMesh;
		params.SelectionMesh = SelectionMesh;
		params.SelectionMeshTransform = SelectionMeshTransform;
		params.SelectionType = SelectionType;
		params.bInvert = bInvert;
		params.ShellDistance = ShellDistance;
		params.WindingThreshold = WindingThreshold;
		params.MinNumTrianglePoints = MinNumTrianglePoints;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Selection != nullptr)
			*Selection = params.Selection;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792A5D80
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.SelectMeshElementsInBox
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshSelection                Selection                                                  (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		struct FBox                                        Box                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EGeometryScriptMeshSelectionType                   SelectionType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInvert                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MinNumTrianglePoints                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::STATIC_SelectMeshElementsInBox(class UDynamicMesh* TargetMesh, struct FGeometryScriptMeshSelection* Selection, const struct FBox& Box, EGeometryScriptMeshSelectionType SelectionType, bool bInvert, int32_t MinNumTrianglePoints)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.SelectMeshElementsInBox");
		
		UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInBox_Params params {};
		params.TargetMesh = TargetMesh;
		params.Box = Box;
		params.SelectionType = SelectionType;
		params.bInvert = bInvert;
		params.MinNumTrianglePoints = MinNumTrianglePoints;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Selection != nullptr)
			*Selection = params.Selection;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792A58C0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.SelectMeshElementsByNormalAngle
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshSelection                Selection                                                  (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Normal                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		double                                             MaxAngleDeg                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGeometryScriptMeshSelectionType                   SelectionType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInvert                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MinNumTrianglePoints                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::STATIC_SelectMeshElementsByNormalAngle(class UDynamicMesh* TargetMesh, struct FGeometryScriptMeshSelection* Selection, const struct FVector& Normal, double MaxAngleDeg, EGeometryScriptMeshSelectionType SelectionType, bool bInvert, int32_t MinNumTrianglePoints)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.SelectMeshElementsByNormalAngle");
		
		UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsByNormalAngle_Params params {};
		params.TargetMesh = TargetMesh;
		params.Normal = Normal;
		params.MaxAngleDeg = MaxAngleDeg;
		params.SelectionType = SelectionType;
		params.bInvert = bInvert;
		params.MinNumTrianglePoints = MinNumTrianglePoints;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Selection != nullptr)
			*Selection = params.Selection;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47929B320
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.InvertMeshSelection
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshSelection                Selection                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshSelection                NewSelection                                               (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bOnlyToConnected                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::STATIC_InvertMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, struct FGeometryScriptMeshSelection* NewSelection, bool bOnlyToConnected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.InvertMeshSelection");
		
		UGeometryScriptLibrary_MeshSelectionFunctions_InvertMeshSelection_Params params {};
		params.TargetMesh = TargetMesh;
		params.Selection = Selection;
		params.bOnlyToConnected = bOnlyToConnected;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewSelection != nullptr)
			*NewSelection = params.NewSelection;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792948D0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.GetMeshSelectionInfo
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FGeometryScriptMeshSelection                Selection                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		EGeometryScriptMeshSelectionType                   SelectionType                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumSelected                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryScriptLibrary_MeshSelectionFunctions::STATIC_GetMeshSelectionInfo(const struct FGeometryScriptMeshSelection& Selection, EGeometryScriptMeshSelectionType* SelectionType, int32_t* NumSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.GetMeshSelectionInfo");
		
		UGeometryScriptLibrary_MeshSelectionFunctions_GetMeshSelectionInfo_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SelectionType != nullptr)
			*SelectionType = params.SelectionType;
		if (NumSelected != nullptr)
			*NumSelected = params.NumSelected;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47928D340
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ExpandMeshSelectionToConnected
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshSelection                Selection                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshSelection                NewSelection                                               (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGeometryScriptTopologyConnectionType              ConnectionType                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::STATIC_ExpandMeshSelectionToConnected(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, struct FGeometryScriptMeshSelection* NewSelection, EGeometryScriptTopologyConnectionType ConnectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ExpandMeshSelectionToConnected");
		
		UGeometryScriptLibrary_MeshSelectionFunctions_ExpandMeshSelectionToConnected_Params params {};
		params.TargetMesh = TargetMesh;
		params.Selection = Selection;
		params.ConnectionType = ConnectionType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewSelection != nullptr)
			*NewSelection = params.NewSelection;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47928D0B0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ExpandContractMeshSelection
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshSelection                Selection                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshSelection                NewSelection                                               (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Iterations                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bContract                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOnlyExpandToFaceNeighbours                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::STATIC_ExpandContractMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, struct FGeometryScriptMeshSelection* NewSelection, int32_t Iterations, bool bContract, bool bOnlyExpandToFaceNeighbours)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ExpandContractMeshSelection");
		
		UGeometryScriptLibrary_MeshSelectionFunctions_ExpandContractMeshSelection_Params params {};
		params.TargetMesh = TargetMesh;
		params.Selection = Selection;
		params.Iterations = Iterations;
		params.bContract = bContract;
		params.bOnlyExpandToFaceNeighbours = bOnlyExpandToFaceNeighbours;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewSelection != nullptr)
			*NewSelection = params.NewSelection;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47928B0B0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.DebugPrintMeshSelection
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FGeometryScriptMeshSelection                Selection                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               bDisable                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryScriptLibrary_MeshSelectionFunctions::STATIC_DebugPrintMeshSelection(const struct FGeometryScriptMeshSelection& Selection, bool bDisable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.DebugPrintMeshSelection");
		
		UGeometryScriptLibrary_MeshSelectionFunctions_DebugPrintMeshSelection_Params params {};
		params.Selection = Selection;
		params.bDisable = bDisable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47928AEE0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.CreateSelectAllMeshSelection
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshSelection                Selection                                                  (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGeometryScriptMeshSelectionType                   SelectionType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::STATIC_CreateSelectAllMeshSelection(class UDynamicMesh* TargetMesh, struct FGeometryScriptMeshSelection* Selection, EGeometryScriptMeshSelectionType SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.CreateSelectAllMeshSelection");
		
		UGeometryScriptLibrary_MeshSelectionFunctions_CreateSelectAllMeshSelection_Params params {};
		params.TargetMesh = TargetMesh;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Selection != nullptr)
			*Selection = params.Selection;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792861D0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertMeshSelectionToIndexList
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshSelection                Selection                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptIndexList                    IndexList                                                  (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGeometryScriptIndexType                           ResultListType                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGeometryScriptIndexType                           ConvertToType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::STATIC_ConvertMeshSelectionToIndexList(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, struct FGeometryScriptIndexList* IndexList, EGeometryScriptIndexType* ResultListType, EGeometryScriptIndexType ConvertToType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertMeshSelectionToIndexList");
		
		UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexList_Params params {};
		params.TargetMesh = TargetMesh;
		params.Selection = Selection;
		params.ConvertToType = ConvertToType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IndexList != nullptr)
			*IndexList = params.IndexList;
		if (ResultListType != nullptr)
			*ResultListType = params.ResultListType;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479285F20
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertMeshSelectionToIndexArray
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshSelection                Selection                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    IndexArray                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		EGeometryScriptMeshSelectionType                   SelectionType                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::STATIC_ConvertMeshSelectionToIndexArray(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, TArray<int32_t>* IndexArray, EGeometryScriptMeshSelectionType* SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertMeshSelectionToIndexArray");
		
		UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexArray_Params params {};
		params.TargetMesh = TargetMesh;
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IndexArray != nullptr)
			*IndexArray = params.IndexArray;
		if (SelectionType != nullptr)
			*SelectionType = params.SelectionType;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479285CE0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertMeshSelection
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshSelection                FromSelection                                              (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshSelection                ToSelection                                                (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGeometryScriptMeshSelectionType                   NewType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowPartialInclusion                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::STATIC_ConvertMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& FromSelection, struct FGeometryScriptMeshSelection* ToSelection, EGeometryScriptMeshSelectionType NewType, bool bAllowPartialInclusion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertMeshSelection");
		
		UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelection_Params params {};
		params.TargetMesh = TargetMesh;
		params.FromSelection = FromSelection;
		params.NewType = NewType;
		params.bAllowPartialInclusion = bAllowPartialInclusion;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ToSelection != nullptr)
			*ToSelection = params.ToSelection;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479285A60
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertIndexSetToMeshSelection
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGeometryScriptMeshSelectionType                   SelectionType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshSelection                Selection                                                  (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::STATIC_ConvertIndexSetToMeshSelection(class UDynamicMesh* TargetMesh, EGeometryScriptMeshSelectionType SelectionType, struct FGeometryScriptMeshSelection* Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertIndexSetToMeshSelection");
		
		UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexSetToMeshSelection_Params params {};
		params.TargetMesh = TargetMesh;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Selection != nullptr)
			*Selection = params.Selection;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792851F0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertIndexListToMeshSelection
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptIndexList                    IndexList                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		EGeometryScriptMeshSelectionType                   SelectionType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshSelection                Selection                                                  (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::STATIC_ConvertIndexListToMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptIndexList& IndexList, EGeometryScriptMeshSelectionType SelectionType, struct FGeometryScriptMeshSelection* Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertIndexListToMeshSelection");
		
		UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexListToMeshSelection_Params params {};
		params.TargetMesh = TargetMesh;
		params.IndexList = IndexList;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Selection != nullptr)
			*Selection = params.Selection;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479284D10
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertIndexArrayToMeshSelection
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    IndexArray                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		EGeometryScriptMeshSelectionType                   SelectionType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshSelection                Selection                                                  (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::STATIC_ConvertIndexArrayToMeshSelection(class UDynamicMesh* TargetMesh, TArray<int32_t> IndexArray, EGeometryScriptMeshSelectionType SelectionType, struct FGeometryScriptMeshSelection* Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertIndexArrayToMeshSelection");
		
		UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexArrayToMeshSelection_Params params {};
		params.TargetMesh = TargetMesh;
		params.IndexArray = IndexArray;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Selection != nullptr)
			*Selection = params.Selection;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47927F910
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.CombineMeshSelections
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FGeometryScriptMeshSelection                SelectionA                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshSelection                SelectionB                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshSelection                ResultSelection                                            (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGeometryScriptCombineSelectionMode                CombineMode                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryScriptLibrary_MeshSelectionFunctions::STATIC_CombineMeshSelections(const struct FGeometryScriptMeshSelection& SelectionA, const struct FGeometryScriptMeshSelection& SelectionB, struct FGeometryScriptMeshSelection* ResultSelection, EGeometryScriptCombineSelectionMode CombineMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.CombineMeshSelections");
		
		UGeometryScriptLibrary_MeshSelectionFunctions_CombineMeshSelections_Params params {};
		params.SelectionA = SelectionA;
		params.SelectionB = SelectionB;
		params.CombineMode = CombineMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ResultSelection != nullptr)
			*ResultSelection = params.ResultSelection;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeometryScriptLibrary_MeshSelectionFunctions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryScriptLibrary_MeshSelectionFunctions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479294690
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionQueryFunctions.GetMeshSelectionBoundingBox
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshSelection                Selection                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		struct FBox                                        SelectionBounds                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsEmpty                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshSelectionQueryFunctions::STATIC_GetMeshSelectionBoundingBox(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, struct FBox* SelectionBounds, bool* bIsEmpty, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionQueryFunctions.GetMeshSelectionBoundingBox");
		
		UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundingBox_Params params {};
		params.TargetMesh = TargetMesh;
		params.Selection = Selection;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SelectionBounds != nullptr)
			*SelectionBounds = params.SelectionBounds;
		if (bIsEmpty != nullptr)
			*bIsEmpty = params.bIsEmpty;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479294160
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionQueryFunctions.GetMeshSelectionBoundaryLoops
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshSelection                Selection                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FGeometryScriptIndexList>            IndexLoops                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FGeometryScriptPolyPath>             PathLoops                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumLoops                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFoundErrors                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshSelectionQueryFunctions::STATIC_GetMeshSelectionBoundaryLoops(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, TArray<struct FGeometryScriptIndexList>* IndexLoops, TArray<struct FGeometryScriptPolyPath>* PathLoops, int32_t* NumLoops, bool* bFoundErrors, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionQueryFunctions.GetMeshSelectionBoundaryLoops");
		
		UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundaryLoops_Params params {};
		params.TargetMesh = TargetMesh;
		params.Selection = Selection;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IndexLoops != nullptr)
			*IndexLoops = params.IndexLoops;
		if (PathLoops != nullptr)
			*PathLoops = params.PathLoops;
		if (NumLoops != nullptr)
			*NumLoops = params.NumLoops;
		if (bFoundErrors != nullptr)
			*bFoundErrors = params.bFoundErrors;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeometryScriptLibrary_MeshSelectionQueryFunctions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryScriptLibrary_MeshSelectionQueryFunctions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionQueryFunctions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47927BB00
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions.ApplySimplifyToVertexCount
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            VertexCount                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptSimplifyMeshOptions          Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshSimplifyFunctions::STATIC_ApplySimplifyToVertexCount(class UDynamicMesh* TargetMesh, int32_t VertexCount, const struct FGeometryScriptSimplifyMeshOptions& Options, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions.ApplySimplifyToVertexCount");
		
		UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToVertexCount_Params params {};
		params.TargetMesh = TargetMesh;
		params.VertexCount = VertexCount;
		params.Options = Options;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47927B860
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions.ApplySimplifyToTriangleCount
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TriangleCount                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptSimplifyMeshOptions          Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshSimplifyFunctions::STATIC_ApplySimplifyToTriangleCount(class UDynamicMesh* TargetMesh, int32_t TriangleCount, const struct FGeometryScriptSimplifyMeshOptions& Options, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions.ApplySimplifyToTriangleCount");
		
		UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTriangleCount_Params params {};
		params.TargetMesh = TargetMesh;
		params.TriangleCount = TriangleCount;
		params.Options = Options;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47927B5B0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions.ApplySimplifyToTolerance
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Tolerance                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptSimplifyMeshOptions          Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshSimplifyFunctions::STATIC_ApplySimplifyToTolerance(class UDynamicMesh* TargetMesh, float Tolerance, const struct FGeometryScriptSimplifyMeshOptions& Options, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions.ApplySimplifyToTolerance");
		
		UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTolerance_Params params {};
		params.TargetMesh = TargetMesh;
		params.Tolerance = Tolerance;
		params.Options = Options;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47927B300
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions.ApplySimplifyToPolygroupTopology
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptPolygroupSimplifyOptions     Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptGroupLayer                   GroupLayer                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshSimplifyFunctions::STATIC_ApplySimplifyToPolygroupTopology(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPolygroupSimplifyOptions& Options, const struct FGeometryScriptGroupLayer& GroupLayer, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions.ApplySimplifyToPolygroupTopology");
		
		UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPolygroupTopology_Params params {};
		params.TargetMesh = TargetMesh;
		params.Options = Options;
		params.GroupLayer = GroupLayer;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47927B0C0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions.ApplySimplifyToPlanar
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptPlanarSimplifyOptions        Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshSimplifyFunctions::STATIC_ApplySimplifyToPlanar(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPlanarSimplifyOptions& Options, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions.ApplySimplifyToPlanar");
		
		UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPlanar_Params params {};
		params.TargetMesh = TargetMesh;
		params.Options = Options;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeometryScriptLibrary_MeshSimplifyFunctions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryScriptLibrary_MeshSimplifyFunctions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792A0120
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.ResetBVH
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FGeometryScriptDynamicMeshBVH               ResetBVH                                                   (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGeometryScriptLibrary_MeshSpatial::STATIC_ResetBVH(struct FGeometryScriptDynamicMeshBVH* ResetBVH)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.ResetBVH");
		
		UGeometryScriptLibrary_MeshSpatial_ResetBVH_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ResetBVH != nullptr)
			*ResetBVH = params.ResetBVH;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47929E800
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.RebuildBVHForMesh
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptDynamicMeshBVH               UpdateBVH                                                  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bOnlyIfInvalid                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshSpatial::STATIC_RebuildBVHForMesh(class UDynamicMesh* TargetMesh, struct FGeometryScriptDynamicMeshBVH* UpdateBVH, bool bOnlyIfInvalid, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.RebuildBVHForMesh");
		
		UGeometryScriptLibrary_MeshSpatial_RebuildBVHForMesh_Params params {};
		params.TargetMesh = TargetMesh;
		params.bOnlyIfInvalid = bOnlyIfInvalid;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UpdateBVH != nullptr)
			*UpdateBVH = params.UpdateBVH;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47929BE90
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.IsPointInsideMesh
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptDynamicMeshBVH               QueryBVH                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     QueryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptSpatialQueryOptions          Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsInside                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGeometryScriptContainmentOutcomePins              Outcome                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshSpatial::STATIC_IsPointInsideMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptDynamicMeshBVH& QueryBVH, const struct FVector& QueryPoint, const struct FGeometryScriptSpatialQueryOptions& Options, bool* bIsInside, EGeometryScriptContainmentOutcomePins* Outcome, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.IsPointInsideMesh");
		
		UGeometryScriptLibrary_MeshSpatial_IsPointInsideMesh_Params params {};
		params.TargetMesh = TargetMesh;
		params.QueryBVH = QueryBVH;
		params.QueryPoint = QueryPoint;
		params.Options = Options;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsInside != nullptr)
			*bIsInside = params.bIsInside;
		if (Outcome != nullptr)
			*Outcome = params.Outcome;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47929B640
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.IsBVHValidForMesh
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptDynamicMeshBVH               TestBVH                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsValid                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshSpatial::STATIC_IsBVHValidForMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptDynamicMeshBVH& TestBVH, bool* bIsValid, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.IsBVHValidForMesh");
		
		UGeometryScriptLibrary_MeshSpatial_IsBVHValidForMesh_Params params {};
		params.TargetMesh = TargetMesh;
		params.TestBVH = TestBVH;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValid != nullptr)
			*bIsValid = params.bIsValid;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47928EA50
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.FindNearestRayIntersectionWithMesh
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptDynamicMeshBVH               QueryBVH                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     RayOrigin                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     RayDirection                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptSpatialQueryOptions          Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptRayHitResult                 HitResult                                                  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EGeometryScriptSearchOutcomePins                   Outcome                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshSpatial::STATIC_FindNearestRayIntersectionWithMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptDynamicMeshBVH& QueryBVH, const struct FVector& RayOrigin, const struct FVector& RayDirection, const struct FGeometryScriptSpatialQueryOptions& Options, struct FGeometryScriptRayHitResult* HitResult, EGeometryScriptSearchOutcomePins* Outcome, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.FindNearestRayIntersectionWithMesh");
		
		UGeometryScriptLibrary_MeshSpatial_FindNearestRayIntersectionWithMesh_Params params {};
		params.TargetMesh = TargetMesh;
		params.QueryBVH = QueryBVH;
		params.RayOrigin = RayOrigin;
		params.RayDirection = RayDirection;
		params.Options = Options;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HitResult != nullptr)
			*HitResult = params.HitResult;
		if (Outcome != nullptr)
			*Outcome = params.Outcome;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47928E4E0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.FindNearestPointOnMesh
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptDynamicMeshBVH               QueryBVH                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     QueryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptSpatialQueryOptions          Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptTrianglePoint                NearestResult                                              (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EGeometryScriptSearchOutcomePins                   Outcome                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshSpatial::STATIC_FindNearestPointOnMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptDynamicMeshBVH& QueryBVH, const struct FVector& QueryPoint, const struct FGeometryScriptSpatialQueryOptions& Options, struct FGeometryScriptTrianglePoint* NearestResult, EGeometryScriptSearchOutcomePins* Outcome, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.FindNearestPointOnMesh");
		
		UGeometryScriptLibrary_MeshSpatial_FindNearestPointOnMesh_Params params {};
		params.TargetMesh = TargetMesh;
		params.QueryBVH = QueryBVH;
		params.QueryPoint = QueryPoint;
		params.Options = Options;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NearestResult != nullptr)
			*NearestResult = params.NearestResult;
		if (Outcome != nullptr)
			*Outcome = params.Outcome;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47927E9D0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.BuildBVHForMesh
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptDynamicMeshBVH               OutputBVH                                                  (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshSpatial::STATIC_BuildBVHForMesh(class UDynamicMesh* TargetMesh, struct FGeometryScriptDynamicMeshBVH* OutputBVH, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.BuildBVHForMesh");
		
		UGeometryScriptLibrary_MeshSpatial_BuildBVHForMesh_Params params {};
		params.TargetMesh = TargetMesh;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutputBVH != nullptr)
			*OutputBVH = params.OutputBVH;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeometryScriptLibrary_MeshSpatial.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryScriptLibrary_MeshSpatial::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47927C4A0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshSubdivideFunctions.ApplyUniformTessellation
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TessellationLevel                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshSubdivideFunctions::STATIC_ApplyUniformTessellation(class UDynamicMesh* TargetMesh, int32_t TessellationLevel, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshSubdivideFunctions.ApplyUniformTessellation");
		
		UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyUniformTessellation_Params params {};
		params.TargetMesh = TargetMesh;
		params.TessellationLevel = TessellationLevel;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47927ABD0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshSubdivideFunctions.ApplySelectiveTessellation
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshSelection                Selection                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptSelectiveTessellateOptions   Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TessellationLevel                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESelectiveTessellatePatternType                    PatternType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshSubdivideFunctions::STATIC_ApplySelectiveTessellation(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FGeometryScriptSelectiveTessellateOptions& Options, int32_t TessellationLevel, ESelectiveTessellatePatternType PatternType, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshSubdivideFunctions.ApplySelectiveTessellation");
		
		UGeometryScriptLibrary_MeshSubdivideFunctions_ApplySelectiveTessellation_Params params {};
		params.TargetMesh = TargetMesh;
		params.Selection = Selection;
		params.Options = Options;
		params.TessellationLevel = TessellationLevel;
		params.PatternType = PatternType;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47927A550
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshSubdivideFunctions.ApplyPNTessellation
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptPNTessellateOptions          Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TessellationLevel                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshSubdivideFunctions::STATIC_ApplyPNTessellation(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPNTessellateOptions& Options, int32_t TessellationLevel, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshSubdivideFunctions.ApplyPNTessellation");
		
		UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyPNTessellation_Params params {};
		params.TargetMesh = TargetMesh;
		params.Options = Options;
		params.TessellationLevel = TessellationLevel;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeometryScriptLibrary_MeshSubdivideFunctions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryScriptLibrary_MeshSubdivideFunctions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryScriptingCore.GeometryScriptLibrary_MeshSubdivideFunctions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792AF8D0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.TranslatePivotToLocation
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     PivotLocation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshTransformFunctions::STATIC_TranslatePivotToLocation(class UDynamicMesh* TargetMesh, const struct FVector& PivotLocation, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.TranslatePivotToLocation");
		
		UGeometryScriptLibrary_MeshTransformFunctions_TranslatePivotToLocation_Params params {};
		params.TargetMesh = TargetMesh;
		params.PivotLocation = PivotLocation;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792AF0B0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.TranslateMeshSelection
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshSelection                Selection                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Translation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshTransformFunctions::STATIC_TranslateMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FVector& Translation, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.TranslateMeshSelection");
		
		UGeometryScriptLibrary_MeshTransformFunctions_TranslateMeshSelection_Params params {};
		params.TargetMesh = TargetMesh;
		params.Selection = Selection;
		params.Translation = Translation;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792AEE70
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.TranslateMesh
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Translation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshTransformFunctions::STATIC_TranslateMesh(class UDynamicMesh* TargetMesh, const struct FVector& Translation, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.TranslateMesh");
		
		UGeometryScriptLibrary_MeshTransformFunctions_TranslateMesh_Params params {};
		params.TargetMesh = TargetMesh;
		params.Translation = Translation;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792AEC10
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.TransformMeshSelection
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshSelection                Selection                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshTransformFunctions::STATIC_TransformMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FTransform& Transform, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.TransformMeshSelection");
		
		UGeometryScriptLibrary_MeshTransformFunctions_TransformMeshSelection_Params params {};
		params.TargetMesh = TargetMesh;
		params.Selection = Selection;
		params.Transform = Transform;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792AE8F0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.TransformMesh
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFixOrientationForNegativeScale                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshTransformFunctions::STATIC_TransformMesh(class UDynamicMesh* TargetMesh, const struct FTransform& Transform, bool bFixOrientationForNegativeScale, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.TransformMesh");
		
		UGeometryScriptLibrary_MeshTransformFunctions_TransformMesh_Params params {};
		params.TargetMesh = TargetMesh;
		params.Transform = Transform;
		params.bFixOrientationForNegativeScale = bFixOrientationForNegativeScale;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792A4F90
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.ScaleMeshSelection
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshSelection                Selection                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ScaleOrigin                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshTransformFunctions::STATIC_ScaleMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FVector& Scale, const struct FVector& ScaleOrigin, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.ScaleMeshSelection");
		
		UGeometryScriptLibrary_MeshTransformFunctions_ScaleMeshSelection_Params params {};
		params.TargetMesh = TargetMesh;
		params.Selection = Selection;
		params.Scale = Scale;
		params.ScaleOrigin = ScaleOrigin;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792A4CA0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.ScaleMesh
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ScaleOrigin                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFixOrientationForNegativeScale                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshTransformFunctions::STATIC_ScaleMesh(class UDynamicMesh* TargetMesh, const struct FVector& Scale, const struct FVector& ScaleOrigin, bool bFixOrientationForNegativeScale, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.ScaleMesh");
		
		UGeometryScriptLibrary_MeshTransformFunctions_ScaleMesh_Params params {};
		params.TargetMesh = TargetMesh;
		params.Scale = Scale;
		params.ScaleOrigin = ScaleOrigin;
		params.bFixOrientationForNegativeScale = bFixOrientationForNegativeScale;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792A0910
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.RotateMeshSelection
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshSelection                Selection                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     RotationOrigin                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshTransformFunctions::STATIC_RotateMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FRotator& Rotation, const struct FVector& RotationOrigin, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.RotateMeshSelection");
		
		UGeometryScriptLibrary_MeshTransformFunctions_RotateMeshSelection_Params params {};
		params.TargetMesh = TargetMesh;
		params.Selection = Selection;
		params.Rotation = Rotation;
		params.RotationOrigin = RotationOrigin;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792A0680
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.RotateMesh
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     RotationOrigin                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshTransformFunctions::STATIC_RotateMesh(class UDynamicMesh* TargetMesh, const struct FRotator& Rotation, const struct FVector& RotationOrigin, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.RotateMesh");
		
		UGeometryScriptLibrary_MeshTransformFunctions_RotateMesh_Params params {};
		params.TargetMesh = TargetMesh;
		params.Rotation = Rotation;
		params.RotationOrigin = RotationOrigin;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeometryScriptLibrary_MeshTransformFunctions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryScriptLibrary_MeshTransformFunctions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792AF400
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.TranslateMeshUVs
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            UVSetIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   Translation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshSelection                Selection                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::STATIC_TranslateMeshUVs(class UDynamicMesh* TargetMesh, int32_t UVSetIndex, const struct FVector2D& Translation, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.TranslateMeshUVs");
		
		UGeometryScriptLibrary_MeshUVFunctions_TranslateMeshUVs_Params params {};
		params.TargetMesh = TargetMesh;
		params.UVSetIndex = UVSetIndex;
		params.Translation = Translation;
		params.Selection = Selection;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792AB620
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.SetNumUVSets
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumUVSets                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::STATIC_SetNumUVSets(class UDynamicMesh* TargetMesh, int32_t NumUVSets, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.SetNumUVSets");
		
		UGeometryScriptLibrary_MeshUVFunctions_SetNumUVSets_Params params {};
		params.TargetMesh = TargetMesh;
		params.NumUVSets = NumUVSets;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792AB150
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.SetMeshUVsFromPlanarProjection
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            UVSetIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  PlaneTransform                                             (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshSelection                Selection                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::STATIC_SetMeshUVsFromPlanarProjection(class UDynamicMesh* TargetMesh, int32_t UVSetIndex, const struct FTransform& PlaneTransform, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.SetMeshUVsFromPlanarProjection");
		
		UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromPlanarProjection_Params params {};
		params.TargetMesh = TargetMesh;
		params.UVSetIndex = UVSetIndex;
		params.PlaneTransform = PlaneTransform;
		params.Selection = Selection;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792AAE60
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.SetMeshUVsFromCylinderProjection
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            UVSetIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  CylinderTransform                                          (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshSelection                Selection                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		float                                              SplitAngle                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::STATIC_SetMeshUVsFromCylinderProjection(class UDynamicMesh* TargetMesh, int32_t UVSetIndex, const struct FTransform& CylinderTransform, const struct FGeometryScriptMeshSelection& Selection, float SplitAngle, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.SetMeshUVsFromCylinderProjection");
		
		UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromCylinderProjection_Params params {};
		params.TargetMesh = TargetMesh;
		params.UVSetIndex = UVSetIndex;
		params.CylinderTransform = CylinderTransform;
		params.Selection = Selection;
		params.SplitAngle = SplitAngle;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792AAB80
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.SetMeshUVsFromBoxProjection
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            UVSetIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  BoxTransform                                               (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshSelection                Selection                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MinIslandTriCount                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::STATIC_SetMeshUVsFromBoxProjection(class UDynamicMesh* TargetMesh, int32_t UVSetIndex, const struct FTransform& BoxTransform, const struct FGeometryScriptMeshSelection& Selection, int32_t MinIslandTriCount, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.SetMeshUVsFromBoxProjection");
		
		UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromBoxProjection_Params params {};
		params.TargetMesh = TargetMesh;
		params.UVSetIndex = UVSetIndex;
		params.BoxTransform = BoxTransform;
		params.Selection = Selection;
		params.MinIslandTriCount = MinIslandTriCount;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792AA920
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.SetMeshTriangleUVs
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            UVSetIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TriangleID                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptUVTriangle                   UVs                                                        (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsValidTriangle                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeferChangeNotifications                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::STATIC_SetMeshTriangleUVs(class UDynamicMesh* TargetMesh, int32_t UVSetIndex, int32_t TriangleID, const struct FGeometryScriptUVTriangle& UVs, bool* bIsValidTriangle, bool bDeferChangeNotifications)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.SetMeshTriangleUVs");
		
		UGeometryScriptLibrary_MeshUVFunctions_SetMeshTriangleUVs_Params params {};
		params.TargetMesh = TargetMesh;
		params.UVSetIndex = UVSetIndex;
		params.TriangleID = TriangleID;
		params.UVs = UVs;
		params.bDeferChangeNotifications = bDeferChangeNotifications;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValidTriangle != nullptr)
			*bIsValidTriangle = params.bIsValidTriangle;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792A5340
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.ScaleMeshUVs
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            UVSetIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   ScaleOrigin                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshSelection                Selection                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::STATIC_ScaleMeshUVs(class UDynamicMesh* TargetMesh, int32_t UVSetIndex, const struct FVector2D& Scale, const struct FVector2D& ScaleOrigin, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.ScaleMeshUVs");
		
		UGeometryScriptLibrary_MeshUVFunctions_ScaleMeshUVs_Params params {};
		params.TargetMesh = TargetMesh;
		params.UVSetIndex = UVSetIndex;
		params.Scale = Scale;
		params.ScaleOrigin = ScaleOrigin;
		params.Selection = Selection;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792A0CC0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.RotateMeshUVs
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            UVSetIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              RotationAngle                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   RotationOrigin                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshSelection                Selection                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::STATIC_RotateMeshUVs(class UDynamicMesh* TargetMesh, int32_t UVSetIndex, float RotationAngle, const struct FVector2D& RotationOrigin, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.RotateMeshUVs");
		
		UGeometryScriptLibrary_MeshUVFunctions_RotateMeshUVs_Params params {};
		params.TargetMesh = TargetMesh;
		params.UVSetIndex = UVSetIndex;
		params.RotationAngle = RotationAngle;
		params.RotationOrigin = RotationOrigin;
		params.Selection = Selection;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47929FB00
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.RepackMeshUVs
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            UVSetIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptRepackUVsOptions             RepackOptions                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::STATIC_RepackMeshUVs(class UDynamicMesh* TargetMesh, int32_t UVSetIndex, const struct FGeometryScriptRepackUVsOptions& RepackOptions, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.RepackMeshUVs");
		
		UGeometryScriptLibrary_MeshUVFunctions_RepackMeshUVs_Params params {};
		params.TargetMesh = TargetMesh;
		params.UVSetIndex = UVSetIndex;
		params.RepackOptions = RepackOptions;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47929EC20
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.RecomputeMeshUVs
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            UVSetIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptRecomputeUVsOptions          Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshSelection                Selection                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::STATIC_RecomputeMeshUVs(class UDynamicMesh* TargetMesh, int32_t UVSetIndex, const struct FGeometryScriptRecomputeUVsOptions& Options, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.RecomputeMeshUVs");
		
		UGeometryScriptLibrary_MeshUVFunctions_RecomputeMeshUVs_Params params {};
		params.TargetMesh = TargetMesh;
		params.UVSetIndex = UVSetIndex;
		params.Options = Options;
		params.Selection = Selection;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479294A60
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.GetMeshUVSizeInfo
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            UVSetIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshSelection                Selection                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		double                                             MeshArea                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		double                                             UVArea                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBox                                        MeshBounds                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FBox2D                                      UVBounds                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsValidUVSet                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFoundUnsetUVs                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOnlyIncludeValidUVTris                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::STATIC_GetMeshUVSizeInfo(class UDynamicMesh* TargetMesh, int32_t UVSetIndex, const struct FGeometryScriptMeshSelection& Selection, double* MeshArea, double* UVArea, struct FBox* MeshBounds, struct FBox2D* UVBounds, bool* bIsValidUVSet, bool* bFoundUnsetUVs, bool bOnlyIncludeValidUVTris, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.GetMeshUVSizeInfo");
		
		UGeometryScriptLibrary_MeshUVFunctions_GetMeshUVSizeInfo_Params params {};
		params.TargetMesh = TargetMesh;
		params.UVSetIndex = UVSetIndex;
		params.Selection = Selection;
		params.bOnlyIncludeValidUVTris = bOnlyIncludeValidUVTris;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MeshArea != nullptr)
			*MeshArea = params.MeshArea;
		if (UVArea != nullptr)
			*UVArea = params.UVArea;
		if (MeshBounds != nullptr)
			*MeshBounds = params.MeshBounds;
		if (UVBounds != nullptr)
			*UVBounds = params.UVBounds;
		if (bIsValidUVSet != nullptr)
			*bIsValidUVSet = params.bIsValidUVSet;
		if (bFoundUnsetUVs != nullptr)
			*bFoundUnsetUVs = params.bFoundUnsetUVs;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479293E50
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.GetMeshPerVertexUVs
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            UVSetIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptUVList                       UVList                                                     (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsValidUVSet                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHasVertexIDGaps                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHasSplitUVs                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::STATIC_GetMeshPerVertexUVs(class UDynamicMesh* TargetMesh, int32_t UVSetIndex, struct FGeometryScriptUVList* UVList, bool* bIsValidUVSet, bool* bHasVertexIDGaps, bool* bHasSplitUVs, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.GetMeshPerVertexUVs");
		
		UGeometryScriptLibrary_MeshUVFunctions_GetMeshPerVertexUVs_Params params {};
		params.TargetMesh = TargetMesh;
		params.UVSetIndex = UVSetIndex;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UVList != nullptr)
			*UVList = params.UVList;
		if (bIsValidUVSet != nullptr)
			*bIsValidUVSet = params.bIsValidUVSet;
		if (bHasVertexIDGaps != nullptr)
			*bHasVertexIDGaps = params.bHasVertexIDGaps;
		if (bHasSplitUVs != nullptr)
			*bHasSplitUVs = params.bHasSplitUVs;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47928A280
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.CopyUVSet
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            FromUVSet                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ToUVSet                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::STATIC_CopyUVSet(class UDynamicMesh* TargetMesh, int32_t FromUVSet, int32_t ToUVSet, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.CopyUVSet");
		
		UGeometryScriptLibrary_MeshUVFunctions_CopyUVSet_Params params {};
		params.TargetMesh = TargetMesh;
		params.FromUVSet = FromUVSet;
		params.ToUVSet = ToUVSet;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479289D70
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.CopyMeshUVLayerToMesh
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                CopyFromMesh                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            UVSetIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDynamicMesh*                                CopyToUVMesh                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDynamicMesh*                                CopyToUVMeshOut                                            (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInvalidTopology                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsValidUVSet                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::STATIC_CopyMeshUVLayerToMesh(class UDynamicMesh* CopyFromMesh, int32_t UVSetIndex, class UDynamicMesh** CopyToUVMesh, class UDynamicMesh** CopyToUVMeshOut, bool* bInvalidTopology, bool* bIsValidUVSet, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.CopyMeshUVLayerToMesh");
		
		UGeometryScriptLibrary_MeshUVFunctions_CopyMeshUVLayerToMesh_Params params {};
		params.CopyFromMesh = CopyFromMesh;
		params.UVSetIndex = UVSetIndex;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CopyToUVMesh != nullptr)
			*CopyToUVMesh = params.CopyToUVMesh;
		if (CopyToUVMeshOut != nullptr)
			*CopyToUVMeshOut = params.CopyToUVMeshOut;
		if (bInvalidTopology != nullptr)
			*bInvalidTopology = params.bInvalidTopology;
		if (bIsValidUVSet != nullptr)
			*bIsValidUVSet = params.bIsValidUVSet;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479288B60
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.CopyMeshToMeshUVLayer
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                CopyFromUVMesh                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ToUVSetIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDynamicMesh*                                CopyToMesh                                                 (Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDynamicMesh*                                CopyToMeshOut                                              (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFoundTopologyErrors                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsValidUVSet                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOnlyUVPositions                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::STATIC_CopyMeshToMeshUVLayer(class UDynamicMesh* CopyFromUVMesh, int32_t ToUVSetIndex, class UDynamicMesh** CopyToMesh, class UDynamicMesh** CopyToMeshOut, bool* bFoundTopologyErrors, bool* bIsValidUVSet, bool bOnlyUVPositions, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.CopyMeshToMeshUVLayer");
		
		UGeometryScriptLibrary_MeshUVFunctions_CopyMeshToMeshUVLayer_Params params {};
		params.CopyFromUVMesh = CopyFromUVMesh;
		params.ToUVSetIndex = ToUVSetIndex;
		params.bOnlyUVPositions = bOnlyUVPositions;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CopyToMesh != nullptr)
			*CopyToMesh = params.CopyToMesh;
		if (CopyToMeshOut != nullptr)
			*CopyToMeshOut = params.CopyToMeshOut;
		if (bFoundTopologyErrors != nullptr)
			*bFoundTopologyErrors = params.bFoundTopologyErrors;
		if (bIsValidUVSet != nullptr)
			*bIsValidUVSet = params.bIsValidUVSet;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47927CB30
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.AutoGenerateXAtlasMeshUVs
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            UVSetIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptXAtlasOptions                Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::STATIC_AutoGenerateXAtlasMeshUVs(class UDynamicMesh* TargetMesh, int32_t UVSetIndex, const struct FGeometryScriptXAtlasOptions& Options, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.AutoGenerateXAtlasMeshUVs");
		
		UGeometryScriptLibrary_MeshUVFunctions_AutoGenerateXAtlasMeshUVs_Params params {};
		params.TargetMesh = TargetMesh;
		params.UVSetIndex = UVSetIndex;
		params.Options = Options;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47927C6F0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.AutoGeneratePatchBuilderMeshUVs
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            UVSetIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptPatchBuilderOptions          Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::STATIC_AutoGeneratePatchBuilderMeshUVs(class UDynamicMesh* TargetMesh, int32_t UVSetIndex, const struct FGeometryScriptPatchBuilderOptions& Options, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.AutoGeneratePatchBuilderMeshUVs");
		
		UGeometryScriptLibrary_MeshUVFunctions_AutoGeneratePatchBuilderMeshUVs_Params params {};
		params.TargetMesh = TargetMesh;
		params.UVSetIndex = UVSetIndex;
		params.Options = Options;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeometryScriptLibrary_MeshUVFunctions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryScriptLibrary_MeshUVFunctions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792AA2E0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.SetMeshSelectionVertexColor
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMeshSelection                Selection                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptColorFlags                   Flags                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bCreateColorSeam                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshVertexColorFunctions::STATIC_SetMeshSelectionVertexColor(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FLinearColor& Color, const struct FGeometryScriptColorFlags& Flags, bool bCreateColorSeam, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.SetMeshSelectionVertexColor");
		
		UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshSelectionVertexColor_Params params {};
		params.TargetMesh = TargetMesh;
		params.Selection = Selection;
		params.Color = Color;
		params.Flags = Flags;
		params.bCreateColorSeam = bCreateColorSeam;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792A94B0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.SetMeshPerVertexColors
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptColorList                    VertexColorList                                            (Parm, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshVertexColorFunctions::STATIC_SetMeshPerVertexColors(class UDynamicMesh* TargetMesh, const struct FGeometryScriptColorList& VertexColorList, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.SetMeshPerVertexColors");
		
		UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshPerVertexColors_Params params {};
		params.TargetMesh = TargetMesh;
		params.VertexColorList = VertexColorList;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792A91E0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.SetMeshConstantVertexColor
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptColorFlags                   Flags                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bClearExisting                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshVertexColorFunctions::STATIC_SetMeshConstantVertexColor(class UDynamicMesh* TargetMesh, const struct FLinearColor& Color, const struct FGeometryScriptColorFlags& Flags, bool bClearExisting, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.SetMeshConstantVertexColor");
		
		UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshConstantVertexColor_Params params {};
		params.TargetMesh = TargetMesh;
		params.Color = Color;
		params.Flags = Flags;
		params.bClearExisting = bClearExisting;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479293660
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.GetMeshPerVertexColors
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptColorList                    ColorList                                                  (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsValidColorSet                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHasVertexIDGaps                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bBlendSplitVertexValues                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshVertexColorFunctions::STATIC_GetMeshPerVertexColors(class UDynamicMesh* TargetMesh, struct FGeometryScriptColorList* ColorList, bool* bIsValidColorSet, bool* bHasVertexIDGaps, bool bBlendSplitVertexValues)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.GetMeshPerVertexColors");
		
		UGeometryScriptLibrary_MeshVertexColorFunctions_GetMeshPerVertexColors_Params params {};
		params.TargetMesh = TargetMesh;
		params.bBlendSplitVertexValues = bBlendSplitVertexValues;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ColorList != nullptr)
			*ColorList = params.ColorList;
		if (bIsValidColorSet != nullptr)
			*bIsValidColorSet = params.bIsValidColorSet;
		if (bHasVertexIDGaps != nullptr)
			*bHasVertexIDGaps = params.bHasVertexIDGaps;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479286790
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.ConvertMeshVertexColorsSRGBToLinear
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshVertexColorFunctions::STATIC_ConvertMeshVertexColorsSRGBToLinear(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.ConvertMeshVertexColorsSRGBToLinear");
		
		UGeometryScriptLibrary_MeshVertexColorFunctions_ConvertMeshVertexColorsSRGBToLinear_Params params {};
		params.TargetMesh = TargetMesh;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479286580
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.ConvertMeshVertexColorsLinearToSRGB
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshVertexColorFunctions::STATIC_ConvertMeshVertexColorsLinearToSRGB(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.ConvertMeshVertexColorsLinearToSRGB");
		
		UGeometryScriptLibrary_MeshVertexColorFunctions_ConvertMeshVertexColorsLinearToSRGB_Params params {};
		params.TargetMesh = TargetMesh;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeometryScriptLibrary_MeshVertexColorFunctions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryScriptLibrary_MeshVertexColorFunctions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47927A2B0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshVoxelFunctions.ApplyMeshSolidify
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptSolidifyOptions              Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshVoxelFunctions::STATIC_ApplyMeshSolidify(class UDynamicMesh* TargetMesh, const struct FGeometryScriptSolidifyOptions& Options, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshVoxelFunctions.ApplyMeshSolidify");
		
		UGeometryScriptLibrary_MeshVoxelFunctions_ApplyMeshSolidify_Params params {};
		params.TargetMesh = TargetMesh;
		params.Options = Options;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479278970
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_MeshVoxelFunctions.ApplyMeshMorphology
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                TargetMesh                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptMorphologyOptions            Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_MeshVoxelFunctions::STATIC_ApplyMeshMorphology(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMorphologyOptions& Options, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_MeshVoxelFunctions.ApplyMeshMorphology");
		
		UGeometryScriptLibrary_MeshVoxelFunctions_ApplyMeshMorphology_Params params {};
		params.TargetMesh = TargetMesh;
		params.Options = Options;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeometryScriptLibrary_MeshVoxelFunctions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryScriptLibrary_MeshVoxelFunctions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryScriptingCore.GeometryScriptLibrary_MeshVoxelFunctions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792A1240
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.SampleSplineToTransforms
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class USplineComponent*                            Spline                                                     (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FTransform>                          Frames                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<double>                                     FrameTimes                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptSplineSamplingOptions        SamplingOptions                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  RelativeTransform                                          (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIncludeScale                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryScriptLibrary_PolyPathFunctions::STATIC_SampleSplineToTransforms(class USplineComponent* Spline, TArray<struct FTransform>* Frames, TArray<double>* FrameTimes, const struct FGeometryScriptSplineSamplingOptions& SamplingOptions, const struct FTransform& RelativeTransform, bool bIncludeScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.SampleSplineToTransforms");
		
		UGeometryScriptLibrary_PolyPathFunctions_SampleSplineToTransforms_Params params {};
		params.Spline = Spline;
		params.SamplingOptions = SamplingOptions;
		params.RelativeTransform = RelativeTransform;
		params.bIncludeScale = bIncludeScale;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Frames != nullptr)
			*Frames = params.Frames;
		if (FrameTimes != nullptr)
			*FrameTimes = params.FrameTimes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479296090
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetPolyPathVertex
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGeometryScriptPolyPath                     PolyPath                                                   (Parm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsValidIndex                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UGeometryScriptLibrary_PolyPathFunctions::STATIC_GetPolyPathVertex(const struct FGeometryScriptPolyPath& PolyPath, int32_t Index, bool* bIsValidIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetPolyPathVertex");
		
		UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathVertex_Params params {};
		params.PolyPath = PolyPath;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValidIndex != nullptr)
			*bIsValidIndex = params.bIsValidIndex;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479295CC0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetPolyPathTangent
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGeometryScriptPolyPath                     PolyPath                                                   (Parm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsValidIndex                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UGeometryScriptLibrary_PolyPathFunctions::STATIC_GetPolyPathTangent(const struct FGeometryScriptPolyPath& PolyPath, int32_t Index, bool* bIsValidIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetPolyPathTangent");
		
		UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathTangent_Params params {};
		params.PolyPath = PolyPath;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValidIndex != nullptr)
			*bIsValidIndex = params.bIsValidIndex;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479295BA0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetPolyPathNumVertices
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGeometryScriptPolyPath                     PolyPath                                                   (Parm, NativeAccessSpecifierPublic)
	 */
	int32_t UGeometryScriptLibrary_PolyPathFunctions::STATIC_GetPolyPathNumVertices(const struct FGeometryScriptPolyPath& PolyPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetPolyPathNumVertices");
		
		UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathNumVertices_Params params {};
		params.PolyPath = PolyPath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479295A80
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetPolyPathLastIndex
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGeometryScriptPolyPath                     PolyPath                                                   (Parm, NativeAccessSpecifierPublic)
	 */
	int32_t UGeometryScriptLibrary_PolyPathFunctions::STATIC_GetPolyPathLastIndex(const struct FGeometryScriptPolyPath& PolyPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetPolyPathLastIndex");
		
		UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathLastIndex_Params params {};
		params.PolyPath = PolyPath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792958F0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetPolyPathArcLength
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FGeometryScriptPolyPath                     PolyPath                                                   (Parm, NativeAccessSpecifierPublic)
	 */
	double UGeometryScriptLibrary_PolyPathFunctions::STATIC_GetPolyPathArcLength(const struct FGeometryScriptPolyPath& PolyPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetPolyPathArcLength");
		
		UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathArcLength_Params params {};
		params.PolyPath = PolyPath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479295020
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetNearestVertexIndex
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FGeometryScriptPolyPath                     PolyPath                                                   (Parm, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Point                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UGeometryScriptLibrary_PolyPathFunctions::STATIC_GetNearestVertexIndex(const struct FGeometryScriptPolyPath& PolyPath, const struct FVector& Point)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetNearestVertexIndex");
		
		UGeometryScriptLibrary_PolyPathFunctions_GetNearestVertexIndex_Params params {};
		params.PolyPath = PolyPath;
		params.Point = Point;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47928F020
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.FlattenTo2DOnAxis
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FGeometryScriptPolyPath                     PolyPath                                                   (Parm, NativeAccessSpecifierPublic)
	 * 		EGeometryScriptAxis                                DropAxis                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGeometryScriptPolyPath UGeometryScriptLibrary_PolyPathFunctions::STATIC_FlattenTo2DOnAxis(const struct FGeometryScriptPolyPath& PolyPath, EGeometryScriptAxis DropAxis)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.FlattenTo2DOnAxis");
		
		UGeometryScriptLibrary_PolyPathFunctions_FlattenTo2DOnAxis_Params params {};
		params.PolyPath = PolyPath;
		params.DropAxis = DropAxis;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47928AC90
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.CreateCirclePath3D
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumPoints                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGeometryScriptPolyPath UGeometryScriptLibrary_PolyPathFunctions::STATIC_CreateCirclePath3D(const struct FTransform& Transform, float Radius, int32_t NumPoints)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.CreateCirclePath3D");
		
		UGeometryScriptLibrary_PolyPathFunctions_CreateCirclePath3D_Params params {};
		params.Transform = Transform;
		params.Radius = Radius;
		params.NumPoints = NumPoints;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47928AB00
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.CreateCirclePath2D
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector2D                                   Center                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumPoints                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGeometryScriptPolyPath UGeometryScriptLibrary_PolyPathFunctions::STATIC_CreateCirclePath2D(const struct FVector2D& Center, float Radius, int32_t NumPoints)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.CreateCirclePath2D");
		
		UGeometryScriptLibrary_PolyPathFunctions_CreateCirclePath2D_Params params {};
		params.Center = Center;
		params.Radius = Radius;
		params.NumPoints = NumPoints;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47928A840
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.CreateArcPath3D
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumPoints                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartAngle                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              EndAngle                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGeometryScriptPolyPath UGeometryScriptLibrary_PolyPathFunctions::STATIC_CreateArcPath3D(const struct FTransform& Transform, float Radius, int32_t NumPoints, float StartAngle, float EndAngle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.CreateArcPath3D");
		
		UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath3D_Params params {};
		params.Transform = Transform;
		params.Radius = Radius;
		params.NumPoints = NumPoints;
		params.StartAngle = StartAngle;
		params.EndAngle = EndAngle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47928A5F0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.CreateArcPath2D
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector2D                                   Center                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumPoints                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartAngle                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              EndAngle                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGeometryScriptPolyPath UGeometryScriptLibrary_PolyPathFunctions::STATIC_CreateArcPath2D(const struct FVector2D& Center, float Radius, int32_t NumPoints, float StartAngle, float EndAngle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.CreateArcPath2D");
		
		UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath2D_Params params {};
		params.Center = Center;
		params.Radius = Radius;
		params.NumPoints = NumPoints;
		params.StartAngle = StartAngle;
		params.EndAngle = EndAngle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479286F00
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.ConvertSplineToPolyPath
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class USplineComponent*                            Spline                                                     (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptPolyPath                     PolyPath                                                   (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptSplineSamplingOptions        SamplingOptions                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGeometryScriptLibrary_PolyPathFunctions::STATIC_ConvertSplineToPolyPath(class USplineComponent* Spline, struct FGeometryScriptPolyPath* PolyPath, const struct FGeometryScriptSplineSamplingOptions& SamplingOptions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.ConvertSplineToPolyPath");
		
		UGeometryScriptLibrary_PolyPathFunctions_ConvertSplineToPolyPath_Params params {};
		params.Spline = Spline;
		params.SamplingOptions = SamplingOptions;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PolyPath != nullptr)
			*PolyPath = params.PolyPath;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479286B40
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.ConvertPolyPathToArrayOfVector2D
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FGeometryScriptPolyPath                     PolyPath                                                   (Parm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector2D>                           VertexArray                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UGeometryScriptLibrary_PolyPathFunctions::STATIC_ConvertPolyPathToArrayOfVector2D(const struct FGeometryScriptPolyPath& PolyPath, TArray<struct FVector2D>* VertexArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.ConvertPolyPathToArrayOfVector2D");
		
		UGeometryScriptLibrary_PolyPathFunctions_ConvertPolyPathToArrayOfVector2D_Params params {};
		params.PolyPath = PolyPath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (VertexArray != nullptr)
			*VertexArray = params.VertexArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792869A0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.ConvertPolyPathToArray
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FGeometryScriptPolyPath                     PolyPath                                                   (Parm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector>                             VertexArray                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UGeometryScriptLibrary_PolyPathFunctions::STATIC_ConvertPolyPathToArray(const struct FGeometryScriptPolyPath& PolyPath, TArray<struct FVector>* VertexArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.ConvertPolyPathToArray");
		
		UGeometryScriptLibrary_PolyPathFunctions_ConvertPolyPathToArray_Params params {};
		params.PolyPath = PolyPath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (VertexArray != nullptr)
			*VertexArray = params.VertexArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479284240
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.ConvertArrayToPolyPath
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FVector>                             VertexArray                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptPolyPath                     PolyPath                                                   (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UGeometryScriptLibrary_PolyPathFunctions::STATIC_ConvertArrayToPolyPath(TArray<struct FVector> VertexArray, struct FGeometryScriptPolyPath* PolyPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.ConvertArrayToPolyPath");
		
		UGeometryScriptLibrary_PolyPathFunctions_ConvertArrayToPolyPath_Params params {};
		params.VertexArray = VertexArray;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PolyPath != nullptr)
			*PolyPath = params.PolyPath;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479283DF0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.ConvertArrayOfVector2DToPolyPath
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FVector2D>                           VertexArray                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptPolyPath                     PolyPath                                                   (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UGeometryScriptLibrary_PolyPathFunctions::STATIC_ConvertArrayOfVector2DToPolyPath(TArray<struct FVector2D> VertexArray, struct FGeometryScriptPolyPath* PolyPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.ConvertArrayOfVector2DToPolyPath");
		
		UGeometryScriptLibrary_PolyPathFunctions_ConvertArrayOfVector2DToPolyPath_Params params {};
		params.VertexArray = VertexArray;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PolyPath != nullptr)
			*PolyPath = params.PolyPath;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479283BB0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.Conv_GeometryScriptPolyPathToArrayOfVector2D
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGeometryScriptPolyPath                     PolyPath                                                   (Parm, NativeAccessSpecifierPublic)
	 */
	TArray<struct FVector2D> UGeometryScriptLibrary_PolyPathFunctions::STATIC_Conv_GeometryScriptPolyPathToArrayOfVector2D(const struct FGeometryScriptPolyPath& PolyPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.Conv_GeometryScriptPolyPathToArrayOfVector2D");
		
		UGeometryScriptLibrary_PolyPathFunctions_Conv_GeometryScriptPolyPathToArrayOfVector2D_Params params {};
		params.PolyPath = PolyPath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479283A80
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.Conv_GeometryScriptPolyPathToArray
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGeometryScriptPolyPath                     PolyPath                                                   (Parm, NativeAccessSpecifierPublic)
	 */
	TArray<struct FVector> UGeometryScriptLibrary_PolyPathFunctions::STATIC_Conv_GeometryScriptPolyPathToArray(const struct FGeometryScriptPolyPath& PolyPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.Conv_GeometryScriptPolyPathToArray");
		
		UGeometryScriptLibrary_PolyPathFunctions_Conv_GeometryScriptPolyPathToArray_Params params {};
		params.PolyPath = PolyPath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479283930
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.Conv_ArrayToGeometryScriptPolyPath
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<struct FVector>                             PathVertices                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FGeometryScriptPolyPath UGeometryScriptLibrary_PolyPathFunctions::STATIC_Conv_ArrayToGeometryScriptPolyPath(TArray<struct FVector> PathVertices)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.Conv_ArrayToGeometryScriptPolyPath");
		
		UGeometryScriptLibrary_PolyPathFunctions_Conv_ArrayToGeometryScriptPolyPath_Params params {};
		params.PathVertices = PathVertices;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479283820
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.Conv_ArrayOfVector2DToGeometryScriptPolyPath
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<struct FVector2D>                           PathVertices                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FGeometryScriptPolyPath UGeometryScriptLibrary_PolyPathFunctions::STATIC_Conv_ArrayOfVector2DToGeometryScriptPolyPath(TArray<struct FVector2D> PathVertices)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.Conv_ArrayOfVector2DToGeometryScriptPolyPath");
		
		UGeometryScriptLibrary_PolyPathFunctions_Conv_ArrayOfVector2DToGeometryScriptPolyPath_Params params {};
		params.PathVertices = PathVertices;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeometryScriptLibrary_PolyPathFunctions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryScriptLibrary_PolyPathFunctions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792A7F00
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_SceneUtilityFunctions.SetComponentMaterialList
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         Component                                                  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UMaterialInterface*>                  MaterialList                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryScriptLibrary_SceneUtilityFunctions::STATIC_SetComponentMaterialList(class UPrimitiveComponent* Component, TArray<class UMaterialInterface*> MaterialList, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_SceneUtilityFunctions.SetComponentMaterialList");
		
		UGeometryScriptLibrary_SceneUtilityFunctions_SetComponentMaterialList_Params params {};
		params.Component = Component;
		params.MaterialList = MaterialList;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47928AEB0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_SceneUtilityFunctions.CreateDynamicMeshPool
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class UDynamicMeshPool* UGeometryScriptLibrary_SceneUtilityFunctions::STATIC_CreateDynamicMeshPool()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_SceneUtilityFunctions.CreateDynamicMeshPool");
		
		UGeometryScriptLibrary_SceneUtilityFunctions_CreateDynamicMeshPool_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479287CE0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_SceneUtilityFunctions.CopyMeshFromComponent
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class USceneComponent*                             Component                                                  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDynamicMesh*                                ToDynamicMesh                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptCopyMeshFromComponentOptions Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bTransformToWorld                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  LocalToWorld                                               (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGeometryScriptOutcomePins                         Outcome                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_SceneUtilityFunctions::STATIC_CopyMeshFromComponent(class USceneComponent* Component, class UDynamicMesh* ToDynamicMesh, const struct FGeometryScriptCopyMeshFromComponentOptions& Options, bool bTransformToWorld, struct FTransform* LocalToWorld, EGeometryScriptOutcomePins* Outcome, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_SceneUtilityFunctions.CopyMeshFromComponent");
		
		UGeometryScriptLibrary_SceneUtilityFunctions_CopyMeshFromComponent_Params params {};
		params.Component = Component;
		params.ToDynamicMesh = ToDynamicMesh;
		params.Options = Options;
		params.bTransformToWorld = bTransformToWorld;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LocalToWorld != nullptr)
			*LocalToWorld = params.LocalToWorld;
		if (Outcome != nullptr)
			*Outcome = params.Outcome;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792879D0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_SceneUtilityFunctions.CopyCollisionMeshesFromObject
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     FromObject                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDynamicMesh*                                ToDynamicMesh                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTransformToWorld                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  LocalToWorld                                               (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGeometryScriptOutcomePins                         Outcome                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseComplexCollision                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SphereResolution                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicMesh* UGeometryScriptLibrary_SceneUtilityFunctions::STATIC_CopyCollisionMeshesFromObject(class UObject* FromObject, class UDynamicMesh* ToDynamicMesh, bool bTransformToWorld, struct FTransform* LocalToWorld, EGeometryScriptOutcomePins* Outcome, bool bUseComplexCollision, int32_t SphereResolution, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_SceneUtilityFunctions.CopyCollisionMeshesFromObject");
		
		UGeometryScriptLibrary_SceneUtilityFunctions_CopyCollisionMeshesFromObject_Params params {};
		params.FromObject = FromObject;
		params.ToDynamicMesh = ToDynamicMesh;
		params.bTransformToWorld = bTransformToWorld;
		params.bUseComplexCollision = bUseComplexCollision;
		params.SphereResolution = SphereResolution;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LocalToWorld != nullptr)
			*LocalToWorld = params.LocalToWorld;
		if (Outcome != nullptr)
			*Outcome = params.Outcome;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeometryScriptLibrary_SceneUtilityFunctions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryScriptLibrary_SceneUtilityFunctions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryScriptingCore.GeometryScriptLibrary_SceneUtilityFunctions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47929DE50
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions.MakeTransformFromZAxis
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ZAxis                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform UGeometryScriptLibrary_TransformFunctions::STATIC_MakeTransformFromZAxis(const struct FVector& Location, const struct FVector& ZAxis)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions.MakeTransformFromZAxis");
		
		UGeometryScriptLibrary_TransformFunctions_MakeTransformFromZAxis_Params params {};
		params.Location = Location;
		params.ZAxis = ZAxis;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47929DC80
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions.MakeTransformFromAxes
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ZAxis                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     TangentAxis                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTangentIsX                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform UGeometryScriptLibrary_TransformFunctions::STATIC_MakeTransformFromAxes(const struct FVector& Location, const struct FVector& ZAxis, const struct FVector& TangentAxis, bool bTangentIsX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions.MakeTransformFromAxes");
		
		UGeometryScriptLibrary_TransformFunctions_MakeTransformFromAxes_Params params {};
		params.Location = Location;
		params.ZAxis = ZAxis;
		params.TangentAxis = TangentAxis;
		params.bTangentIsX = bTangentIsX;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479298330
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions.GetTransformAxisVector
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGeometryScriptAxis                                Axis                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UGeometryScriptLibrary_TransformFunctions::STATIC_GetTransformAxisVector(const struct FTransform& Transform, EGeometryScriptAxis Axis)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions.GetTransformAxisVector");
		
		UGeometryScriptLibrary_TransformFunctions_GetTransformAxisVector_Params params {};
		params.Transform = Transform;
		params.Axis = Axis;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792981A0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions.GetTransformAxisRay
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGeometryScriptAxis                                Axis                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRay UGeometryScriptLibrary_TransformFunctions::STATIC_GetTransformAxisRay(const struct FTransform& Transform, EGeometryScriptAxis Axis)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions.GetTransformAxisRay");
		
		UGeometryScriptLibrary_TransformFunctions_GetTransformAxisRay_Params params {};
		params.Transform = Transform;
		params.Axis = Axis;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479298020
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions.GetTransformAxisPlane
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGeometryScriptAxis                                Axis                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FPlane UGeometryScriptLibrary_TransformFunctions::STATIC_GetTransformAxisPlane(const struct FTransform& Transform, EGeometryScriptAxis Axis)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions.GetTransformAxisPlane");
		
		UGeometryScriptLibrary_TransformFunctions_GetTransformAxisPlane_Params params {};
		params.Transform = Transform;
		params.Axis = Axis;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeometryScriptLibrary_TransformFunctions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryScriptLibrary_TransformFunctions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47929DB10
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.MakeRayFromPoints
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     A                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     B                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRay UGeometryScriptLibrary_RayFunctions::STATIC_MakeRayFromPoints(const struct FVector& A, const struct FVector& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.MakeRayFromPoints");
		
		UGeometryScriptLibrary_RayFunctions_MakeRayFromPoints_Params params {};
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
	 * 		RVA    -> 0x47929D940
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.MakeRayFromPointDirection
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Origin                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDirectionIsNormalized                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRay UGeometryScriptLibrary_RayFunctions::STATIC_MakeRayFromPointDirection(const struct FVector& Origin, const struct FVector& Direction, bool bDirectionIsNormalized)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.MakeRayFromPointDirection");
		
		UGeometryScriptLibrary_RayFunctions_MakeRayFromPointDirection_Params params {};
		params.Origin = Origin;
		params.Direction = Direction;
		params.bDirectionIsNormalized = bDirectionIsNormalized;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479298820
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetTransformedRay
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FRay                                        Ray                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInvert                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRay UGeometryScriptLibrary_RayFunctions::STATIC_GetTransformedRay(const struct FRay& Ray, const struct FTransform& Transform, bool bInvert)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetTransformedRay");
		
		UGeometryScriptLibrary_RayFunctions_GetTransformedRay_Params params {};
		params.Ray = Ray;
		params.Transform = Transform;
		params.bInvert = bInvert;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792975F0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayStartEnd
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FRay                                        Ray                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		double                                             StartDistance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		double                                             EndDistance                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     StartPoint                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     EndPoint                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryScriptLibrary_RayFunctions::STATIC_GetRayStartEnd(const struct FRay& Ray, double StartDistance, double EndDistance, struct FVector* StartPoint, struct FVector* EndPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayStartEnd");
		
		UGeometryScriptLibrary_RayFunctions_GetRayStartEnd_Params params {};
		params.Ray = Ray;
		params.StartDistance = StartDistance;
		params.EndDistance = EndDistance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StartPoint != nullptr)
			*StartPoint = params.StartPoint;
		if (EndPoint != nullptr)
			*EndPoint = params.EndPoint;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792973D0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRaySphereIntersection
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FRay                                        Ray                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     SphereCenter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		double                                             SphereRadius                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		double                                             Distance1                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		double                                             Distance2                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGeometryScriptLibrary_RayFunctions::STATIC_GetRaySphereIntersection(const struct FRay& Ray, const struct FVector& SphereCenter, double SphereRadius, double* Distance1, double* Distance2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRaySphereIntersection");
		
		UGeometryScriptLibrary_RayFunctions_GetRaySphereIntersection_Params params {};
		params.Ray = Ray;
		params.SphereCenter = SphereCenter;
		params.SphereRadius = SphereRadius;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Distance1 != nullptr)
			*Distance1 = params.Distance1;
		if (Distance2 != nullptr)
			*Distance2 = params.Distance2;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479297030
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRaySegmentClosestPoint
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FRay                                        Ray                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     SegStartPoint                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     SegEndPoint                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		double                                             RayParameter                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     RayPoint                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     SegPoint                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	double UGeometryScriptLibrary_RayFunctions::STATIC_GetRaySegmentClosestPoint(const struct FRay& Ray, const struct FVector& SegStartPoint, const struct FVector& SegEndPoint, double* RayParameter, struct FVector* RayPoint, struct FVector* SegPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRaySegmentClosestPoint");
		
		UGeometryScriptLibrary_RayFunctions_GetRaySegmentClosestPoint_Params params {};
		params.Ray = Ray;
		params.SegStartPoint = SegStartPoint;
		params.SegEndPoint = SegEndPoint;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RayParameter != nullptr)
			*RayParameter = params.RayParameter;
		if (RayPoint != nullptr)
			*RayPoint = params.RayPoint;
		if (SegPoint != nullptr)
			*SegPoint = params.SegPoint;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479296EF0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayPointDistance
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FRay                                        Ray                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Point                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	double UGeometryScriptLibrary_RayFunctions::STATIC_GetRayPointDistance(const struct FRay& Ray, const struct FVector& Point)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayPointDistance");
		
		UGeometryScriptLibrary_RayFunctions_GetRayPointDistance_Params params {};
		params.Ray = Ray;
		params.Point = Point;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479296DC0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayPoint
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FRay                                        Ray                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		double                                             Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UGeometryScriptLibrary_RayFunctions::STATIC_GetRayPoint(const struct FRay& Ray, double Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayPoint");
		
		UGeometryScriptLibrary_RayFunctions_GetRayPoint_Params params {};
		params.Ray = Ray;
		params.Distance = Distance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479296BD0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayPlaneIntersection
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FRay                                        Ray                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FPlane                                      Plane                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		double                                             HitDistance                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGeometryScriptLibrary_RayFunctions::STATIC_GetRayPlaneIntersection(const struct FRay& Ray, const struct FPlane& Plane, double* HitDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayPlaneIntersection");
		
		UGeometryScriptLibrary_RayFunctions_GetRayPlaneIntersection_Params params {};
		params.Ray = Ray;
		params.Plane = Plane;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HitDistance != nullptr)
			*HitDistance = params.HitDistance;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479296AB0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayParameter
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FRay                                        Ray                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Point                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	double UGeometryScriptLibrary_RayFunctions::STATIC_GetRayParameter(const struct FRay& Ray, const struct FVector& Point)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayParameter");
		
		UGeometryScriptLibrary_RayFunctions_GetRayParameter_Params params {};
		params.Ray = Ray;
		params.Point = Point;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479296750
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayLineClosestPoint
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FRay                                        Ray                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     LineOrigin                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     LineDirection                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		double                                             RayParameter                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     RayPoint                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		double                                             LineParameter                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     LinePoint                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	double UGeometryScriptLibrary_RayFunctions::STATIC_GetRayLineClosestPoint(const struct FRay& Ray, const struct FVector& LineOrigin, const struct FVector& LineDirection, double* RayParameter, struct FVector* RayPoint, double* LineParameter, struct FVector* LinePoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayLineClosestPoint");
		
		UGeometryScriptLibrary_RayFunctions_GetRayLineClosestPoint_Params params {};
		params.Ray = Ray;
		params.LineOrigin = LineOrigin;
		params.LineDirection = LineDirection;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RayParameter != nullptr)
			*RayParameter = params.RayParameter;
		if (RayPoint != nullptr)
			*RayPoint = params.RayPoint;
		if (LineParameter != nullptr)
			*LineParameter = params.LineParameter;
		if (LinePoint != nullptr)
			*LinePoint = params.LinePoint;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792965C0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayClosestPoint
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FRay                                        Ray                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Point                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UGeometryScriptLibrary_RayFunctions::STATIC_GetRayClosestPoint(const struct FRay& Ray, const struct FVector& Point)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayClosestPoint");
		
		UGeometryScriptLibrary_RayFunctions_GetRayClosestPoint_Params params {};
		params.Ray = Ray;
		params.Point = Point;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479296400
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayBoxIntersection
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FRay                                        Ray                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FBox                                        Box                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		double                                             HitDistance                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGeometryScriptLibrary_RayFunctions::STATIC_GetRayBoxIntersection(const struct FRay& Ray, const struct FBox& Box, double* HitDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayBoxIntersection");
		
		UGeometryScriptLibrary_RayFunctions_GetRayBoxIntersection_Params params {};
		params.Ray = Ray;
		params.Box = Box;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HitDistance != nullptr)
			*HitDistance = params.HitDistance;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeometryScriptLibrary_RayFunctions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryScriptLibrary_RayFunctions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryScriptingCore.GeometryScriptLibrary_RayFunctions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792AE780
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.TestPointInsideBox
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FBox                                        Box                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Point                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConsiderOnBoxAsInside                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGeometryScriptLibrary_BoxFunctions::STATIC_TestPointInsideBox(const struct FBox& Box, const struct FVector& Point, bool bConsiderOnBoxAsInside)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.TestPointInsideBox");
		
		UGeometryScriptLibrary_BoxFunctions_TestPointInsideBox_Params params {};
		params.Box = Box;
		params.Point = Point;
		params.bConsiderOnBoxAsInside = bConsiderOnBoxAsInside;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792AE5E0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.TestBoxSphereIntersection
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FBox                                        Box                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     SphereCenter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		double                                             SphereRadius                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGeometryScriptLibrary_BoxFunctions::STATIC_TestBoxSphereIntersection(const struct FBox& Box, const struct FVector& SphereCenter, double SphereRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.TestBoxSphereIntersection");
		
		UGeometryScriptLibrary_BoxFunctions_TestBoxSphereIntersection_Params params {};
		params.Box = Box;
		params.SphereCenter = SphereCenter;
		params.SphereRadius = SphereRadius;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792AE4B0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.TestBoxBoxIntersection
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FBox                                        Box1                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FBox                                        Box2                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UGeometryScriptLibrary_BoxFunctions::STATIC_TestBoxBoxIntersection(const struct FBox& Box1, const struct FBox& Box2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.TestBoxBoxIntersection");
		
		UGeometryScriptLibrary_BoxFunctions_TestBoxBoxIntersection_Params params {};
		params.Box1 = Box1;
		params.Box2 = Box2;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47929D7B0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.MakeBoxFromCenterSize
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Center                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Dimensions                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FBox UGeometryScriptLibrary_BoxFunctions::STATIC_MakeBoxFromCenterSize(const struct FVector& Center, const struct FVector& Dimensions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.MakeBoxFromCenterSize");
		
		UGeometryScriptLibrary_BoxFunctions_MakeBoxFromCenterSize_Params params {};
		params.Center = Center;
		params.Dimensions = Dimensions;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47929D650
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.MakeBoxFromCenterExtents
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Center                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Extents                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FBox UGeometryScriptLibrary_BoxFunctions::STATIC_MakeBoxFromCenterExtents(const struct FVector& Center, const struct FVector& Extents)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.MakeBoxFromCenterExtents");
		
		UGeometryScriptLibrary_BoxFunctions_MakeBoxFromCenterExtents_Params params {};
		params.Center = Center;
		params.Extents = Extents;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792984B0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetTransformedBox
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FBox                                        Box                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FBox UGeometryScriptLibrary_BoxFunctions::STATIC_GetTransformedBox(const struct FBox& Box, const struct FTransform& Transform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetTransformedBox");
		
		UGeometryScriptLibrary_BoxFunctions_GetTransformedBox_Params params {};
		params.Box = Box;
		params.Transform = Transform;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479290F20
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetExpandedBox
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FBox                                        Box                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ExpandBy                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FBox UGeometryScriptLibrary_BoxFunctions::STATIC_GetExpandedBox(const struct FBox& Box, const struct FVector& ExpandBy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetExpandedBox");
		
		UGeometryScriptLibrary_BoxFunctions_GetExpandedBox_Params params {};
		params.Box = Box;
		params.ExpandBy = ExpandBy;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479290960
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxVolumeArea
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FBox                                        Box                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		double                                             Volume                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		double                                             SurfaceArea                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryScriptLibrary_BoxFunctions::STATIC_GetBoxVolumeArea(const struct FBox& Box, double* Volume, double* SurfaceArea)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxVolumeArea");
		
		UGeometryScriptLibrary_BoxFunctions_GetBoxVolumeArea_Params params {};
		params.Box = Box;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Volume != nullptr)
			*Volume = params.Volume;
		if (SurfaceArea != nullptr)
			*SurfaceArea = params.SurfaceArea;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479290820
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxPointDistance
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FBox                                        Box                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Point                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	double UGeometryScriptLibrary_BoxFunctions::STATIC_GetBoxPointDistance(const struct FBox& Box, const struct FVector& Point)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxPointDistance");
		
		UGeometryScriptLibrary_BoxFunctions_GetBoxPointDistance_Params params {};
		params.Box = Box;
		params.Point = Point;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479290560
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxFaceCenter
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FBox                                        Box                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            FaceIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     FaceNormal                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UGeometryScriptLibrary_BoxFunctions::STATIC_GetBoxFaceCenter(const struct FBox& Box, int32_t FaceIndex, struct FVector* FaceNormal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxFaceCenter");
		
		UGeometryScriptLibrary_BoxFunctions_GetBoxFaceCenter_Params params {};
		params.Box = Box;
		params.FaceIndex = FaceIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FaceNormal != nullptr)
			*FaceNormal = params.FaceNormal;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479290390
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxCorner
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FBox                                        Box                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            CornerIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UGeometryScriptLibrary_BoxFunctions::STATIC_GetBoxCorner(const struct FBox& Box, int32_t CornerIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxCorner");
		
		UGeometryScriptLibrary_BoxFunctions_GetBoxCorner_Params params {};
		params.Box = Box;
		params.CornerIndex = CornerIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792901E0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxCenterSize
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FBox                                        Box                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Center                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Dimensions                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryScriptLibrary_BoxFunctions::STATIC_GetBoxCenterSize(const struct FBox& Box, struct FVector* Center, struct FVector* Dimensions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxCenterSize");
		
		UGeometryScriptLibrary_BoxFunctions_GetBoxCenterSize_Params params {};
		params.Box = Box;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Center != nullptr)
			*Center = params.Center;
		if (Dimensions != nullptr)
			*Dimensions = params.Dimensions;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792900A0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxBoxDistance
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FBox                                        Box1                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FBox                                        Box2                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	double UGeometryScriptLibrary_BoxFunctions::STATIC_GetBoxBoxDistance(const struct FBox& Box1, const struct FBox& Box2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxBoxDistance");
		
		UGeometryScriptLibrary_BoxFunctions_GetBoxBoxDistance_Params params {};
		params.Box1 = Box1;
		params.Box2 = Box2;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47928E2F0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.FindClosestPointOnBox
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FBox                                        Box                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Point                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsInside                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UGeometryScriptLibrary_BoxFunctions::STATIC_FindClosestPointOnBox(const struct FBox& Box, const struct FVector& Point, bool* bIsInside)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.FindClosestPointOnBox");
		
		UGeometryScriptLibrary_BoxFunctions_FindClosestPointOnBox_Params params {};
		params.Box = Box;
		params.Point = Point;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsInside != nullptr)
			*bIsInside = params.bIsInside;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47928E150
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.FindBoxBoxIntersection
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FBox                                        Box1                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FBox                                        Box2                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsIntersecting                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FBox UGeometryScriptLibrary_BoxFunctions::STATIC_FindBoxBoxIntersection(const struct FBox& Box1, const struct FBox& Box2, bool* bIsIntersecting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.FindBoxBoxIntersection");
		
		UGeometryScriptLibrary_BoxFunctions_FindBoxBoxIntersection_Params params {};
		params.Box1 = Box1;
		params.Box2 = Box2;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsIntersecting != nullptr)
			*bIsIntersecting = params.bIsIntersecting;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeometryScriptLibrary_BoxFunctions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryScriptLibrary_BoxFunctions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792A1DF0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_TextureMapFunctions.SampleTextureRenderTarget2DAtUVPositions
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FGeometryScriptUVList                       UVList                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		class UTextureRenderTarget2D*                      Texture                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptSampleTextureOptions         SampleOptions                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptColorList                    ColorList                                                  (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryScriptLibrary_TextureMapFunctions::STATIC_SampleTextureRenderTarget2DAtUVPositions(const struct FGeometryScriptUVList& UVList, class UTextureRenderTarget2D* Texture, const struct FGeometryScriptSampleTextureOptions& SampleOptions, struct FGeometryScriptColorList* ColorList, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_TextureMapFunctions.SampleTextureRenderTarget2DAtUVPositions");
		
		UGeometryScriptLibrary_TextureMapFunctions_SampleTextureRenderTarget2DAtUVPositions_Params params {};
		params.UVList = UVList;
		params.Texture = Texture;
		params.SampleOptions = SampleOptions;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ColorList != nullptr)
			*ColorList = params.ColorList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792A1550
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_TextureMapFunctions.SampleTexture2DAtUVPositions
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FGeometryScriptUVList                       UVList                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		class UTexture2D*                                  Texture                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptSampleTextureOptions         SampleOptions                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptColorList                    ColorList                                                  (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		class UGeometryScriptDebug*                        Debug                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryScriptLibrary_TextureMapFunctions::STATIC_SampleTexture2DAtUVPositions(const struct FGeometryScriptUVList& UVList, class UTexture2D* Texture, const struct FGeometryScriptSampleTextureOptions& SampleOptions, struct FGeometryScriptColorList* ColorList, class UGeometryScriptDebug* Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_TextureMapFunctions.SampleTexture2DAtUVPositions");
		
		UGeometryScriptLibrary_TextureMapFunctions_SampleTexture2DAtUVPositions_Params params {};
		params.UVList = UVList;
		params.Texture = Texture;
		params.SampleOptions = SampleOptions;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ColorList != nullptr)
			*ColorList = params.ColorList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeometryScriptLibrary_TextureMapFunctions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryScriptLibrary_TextureMapFunctions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryScriptingCore.GeometryScriptLibrary_TextureMapFunctions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792B18D0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorToScalar
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FGeometryScriptVectorList                   VectorList                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		double                                             ConstantX                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		double                                             ConstantY                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		double                                             ConstantZ                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGeometryScriptScalarList UGeometryScriptLibrary_VectorMathFunctions::STATIC_VectorToScalar(const struct FGeometryScriptVectorList& VectorList, double ConstantX, double ConstantY, double ConstantZ)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorToScalar");
		
		UGeometryScriptLibrary_VectorMathFunctions_VectorToScalar_Params params {};
		params.VectorList = VectorList;
		params.ConstantX = ConstantX;
		params.ConstantY = ConstantY;
		params.ConstantZ = ConstantZ;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792B1780
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorNormalizeInPlace
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FGeometryScriptVectorList                   VectorList                                                 (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     SetOnFailure                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryScriptLibrary_VectorMathFunctions::STATIC_VectorNormalizeInPlace(struct FGeometryScriptVectorList* VectorList, const struct FVector& SetOnFailure)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorNormalizeInPlace");
		
		UGeometryScriptLibrary_VectorMathFunctions_VectorNormalizeInPlace_Params params {};
		params.SetOnFailure = SetOnFailure;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (VectorList != nullptr)
			*VectorList = params.VectorList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792B1430
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorLength
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FGeometryScriptVectorList                   VectorList                                                 (Parm, NativeAccessSpecifierPublic)
	 */
	struct FGeometryScriptScalarList UGeometryScriptLibrary_VectorMathFunctions::STATIC_VectorLength(const struct FGeometryScriptVectorList& VectorList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorLength");
		
		UGeometryScriptLibrary_VectorMathFunctions_VectorLength_Params params {};
		params.VectorList = VectorList;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792B0FE0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorDot
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FGeometryScriptVectorList                   VectorListA                                                (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptVectorList                   VectorListB                                                (Parm, NativeAccessSpecifierPublic)
	 */
	struct FGeometryScriptScalarList UGeometryScriptLibrary_VectorMathFunctions::STATIC_VectorDot(const struct FGeometryScriptVectorList& VectorListA, const struct FGeometryScriptVectorList& VectorListB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorDot");
		
		UGeometryScriptLibrary_VectorMathFunctions_VectorDot_Params params {};
		params.VectorListA = VectorListA;
		params.VectorListB = VectorListB;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792B0A90
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorCross
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FGeometryScriptVectorList                   VectorListA                                                (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptVectorList                   VectorListB                                                (Parm, NativeAccessSpecifierPublic)
	 */
	struct FGeometryScriptVectorList UGeometryScriptLibrary_VectorMathFunctions::STATIC_VectorCross(const struct FGeometryScriptVectorList& VectorListA, const struct FGeometryScriptVectorList& VectorListB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorCross");
		
		UGeometryScriptLibrary_VectorMathFunctions_VectorCross_Params params {};
		params.VectorListA = VectorListA;
		params.VectorListB = VectorListB;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792B0540
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorBlendInPlace
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FGeometryScriptVectorList                   VectorListA                                                (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptVectorList                   VectorListB                                                (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		double                                             ConstantA                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		double                                             ConstantB                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryScriptLibrary_VectorMathFunctions::STATIC_VectorBlendInPlace(const struct FGeometryScriptVectorList& VectorListA, struct FGeometryScriptVectorList* VectorListB, double ConstantA, double ConstantB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorBlendInPlace");
		
		UGeometryScriptLibrary_VectorMathFunctions_VectorBlendInPlace_Params params {};
		params.VectorListA = VectorListA;
		params.ConstantA = ConstantA;
		params.ConstantB = ConstantB;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (VectorListB != nullptr)
			*VectorListB = params.VectorListB;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792AFF90
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorBlend
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FGeometryScriptVectorList                   VectorListA                                                (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptVectorList                   VectorListB                                                (Parm, NativeAccessSpecifierPublic)
	 * 		double                                             ConstantA                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		double                                             ConstantB                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGeometryScriptVectorList UGeometryScriptLibrary_VectorMathFunctions::STATIC_VectorBlend(const struct FGeometryScriptVectorList& VectorListA, const struct FGeometryScriptVectorList& VectorListB, double ConstantA, double ConstantB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorBlend");
		
		UGeometryScriptLibrary_VectorMathFunctions_VectorBlend_Params params {};
		params.VectorListA = VectorListA;
		params.VectorListB = VectorListB;
		params.ConstantA = ConstantA;
		params.ConstantB = ConstantB;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792A4890
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarVectorMultiplyInPlace
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FGeometryScriptScalarList                   ScalarList                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptVectorList                   VectorList                                                 (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		double                                             ScalarMultiplier                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryScriptLibrary_VectorMathFunctions::STATIC_ScalarVectorMultiplyInPlace(const struct FGeometryScriptScalarList& ScalarList, struct FGeometryScriptVectorList* VectorList, double ScalarMultiplier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarVectorMultiplyInPlace");
		
		UGeometryScriptLibrary_VectorMathFunctions_ScalarVectorMultiplyInPlace_Params params {};
		params.ScalarList = ScalarList;
		params.ScalarMultiplier = ScalarMultiplier;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (VectorList != nullptr)
			*VectorList = params.VectorList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792A4400
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarVectorMultiply
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FGeometryScriptScalarList                   ScalarList                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptVectorList                   VectorList                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		double                                             ScalarMultiplier                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGeometryScriptVectorList UGeometryScriptLibrary_VectorMathFunctions::STATIC_ScalarVectorMultiply(const struct FGeometryScriptScalarList& ScalarList, const struct FGeometryScriptVectorList& VectorList, double ScalarMultiplier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarVectorMultiply");
		
		UGeometryScriptLibrary_VectorMathFunctions_ScalarVectorMultiply_Params params {};
		params.ScalarList = ScalarList;
		params.VectorList = VectorList;
		params.ScalarMultiplier = ScalarMultiplier;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792A3F60
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarMultiplyInPlace
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FGeometryScriptScalarList                   ScalarListA                                                (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptScalarList                   ScalarListB                                                (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		double                                             ConstantMultiplier                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryScriptLibrary_VectorMathFunctions::STATIC_ScalarMultiplyInPlace(const struct FGeometryScriptScalarList& ScalarListA, struct FGeometryScriptScalarList* ScalarListB, double ConstantMultiplier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarMultiplyInPlace");
		
		UGeometryScriptLibrary_VectorMathFunctions_ScalarMultiplyInPlace_Params params {};
		params.ScalarListA = ScalarListA;
		params.ConstantMultiplier = ConstantMultiplier;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ScalarListB != nullptr)
			*ScalarListB = params.ScalarListB;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792A3A20
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarMultiply
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FGeometryScriptScalarList                   ScalarListA                                                (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptScalarList                   ScalarListB                                                (Parm, NativeAccessSpecifierPublic)
	 * 		double                                             ConstantMultiplier                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGeometryScriptScalarList UGeometryScriptLibrary_VectorMathFunctions::STATIC_ScalarMultiply(const struct FGeometryScriptScalarList& ScalarListA, const struct FGeometryScriptScalarList& ScalarListB, double ConstantMultiplier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarMultiply");
		
		UGeometryScriptLibrary_VectorMathFunctions_ScalarMultiply_Params params {};
		params.ScalarListA = ScalarListA;
		params.ScalarListB = ScalarListB;
		params.ConstantMultiplier = ConstantMultiplier;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792A3820
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarInvertInPlace
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FGeometryScriptScalarList                   ScalarList                                                 (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		double                                             Numerator                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		double                                             SetOnFailure                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		double                                             Epsilon                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryScriptLibrary_VectorMathFunctions::STATIC_ScalarInvertInPlace(struct FGeometryScriptScalarList* ScalarList, double Numerator, double SetOnFailure, double Epsilon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarInvertInPlace");
		
		UGeometryScriptLibrary_VectorMathFunctions_ScalarInvertInPlace_Params params {};
		params.Numerator = Numerator;
		params.SetOnFailure = SetOnFailure;
		params.Epsilon = Epsilon;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ScalarList != nullptr)
			*ScalarList = params.ScalarList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792A3440
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarInvert
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FGeometryScriptScalarList                   ScalarList                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		double                                             Numerator                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		double                                             SetOnFailure                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		double                                             Epsilon                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGeometryScriptScalarList UGeometryScriptLibrary_VectorMathFunctions::STATIC_ScalarInvert(const struct FGeometryScriptScalarList& ScalarList, double Numerator, double SetOnFailure, double Epsilon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarInvert");
		
		UGeometryScriptLibrary_VectorMathFunctions_ScalarInvert_Params params {};
		params.ScalarList = ScalarList;
		params.Numerator = Numerator;
		params.SetOnFailure = SetOnFailure;
		params.Epsilon = Epsilon;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792A2EE0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarBlendInPlace
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FGeometryScriptScalarList                   ScalarListA                                                (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptScalarList                   ScalarListB                                                (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		double                                             ConstantA                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		double                                             ConstantB                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryScriptLibrary_VectorMathFunctions::STATIC_ScalarBlendInPlace(const struct FGeometryScriptScalarList& ScalarListA, struct FGeometryScriptScalarList* ScalarListB, double ConstantA, double ConstantB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarBlendInPlace");
		
		UGeometryScriptLibrary_VectorMathFunctions_ScalarBlendInPlace_Params params {};
		params.ScalarListA = ScalarListA;
		params.ConstantA = ConstantA;
		params.ConstantB = ConstantB;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ScalarListB != nullptr)
			*ScalarListB = params.ScalarListB;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792A28E0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarBlend
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FGeometryScriptScalarList                   ScalarListA                                                (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptScalarList                   ScalarListB                                                (Parm, NativeAccessSpecifierPublic)
	 * 		double                                             ConstantA                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		double                                             ConstantB                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGeometryScriptScalarList UGeometryScriptLibrary_VectorMathFunctions::STATIC_ScalarBlend(const struct FGeometryScriptScalarList& ScalarListA, const struct FGeometryScriptScalarList& ScalarListB, double ConstantA, double ConstantB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarBlend");
		
		UGeometryScriptLibrary_VectorMathFunctions_ScalarBlend_Params params {};
		params.ScalarListA = ScalarListA;
		params.ScalarListB = ScalarListB;
		params.ConstantA = ConstantA;
		params.ConstantB = ConstantB;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4792836E0
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ConstantVectorMultiplyInPlace
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		double                                             Constant                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptVectorList                   VectorList                                                 (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGeometryScriptLibrary_VectorMathFunctions::STATIC_ConstantVectorMultiplyInPlace(double Constant, struct FGeometryScriptVectorList* VectorList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ConstantVectorMultiplyInPlace");
		
		UGeometryScriptLibrary_VectorMathFunctions_ConstantVectorMultiplyInPlace_Params params {};
		params.Constant = Constant;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (VectorList != nullptr)
			*VectorList = params.VectorList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479283360
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ConstantVectorMultiply
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		double                                             Constant                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptVectorList                   VectorList                                                 (Parm, NativeAccessSpecifierPublic)
	 */
	struct FGeometryScriptVectorList UGeometryScriptLibrary_VectorMathFunctions::STATIC_ConstantVectorMultiply(double Constant, const struct FGeometryScriptVectorList& VectorList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ConstantVectorMultiply");
		
		UGeometryScriptLibrary_VectorMathFunctions_ConstantVectorMultiply_Params params {};
		params.Constant = Constant;
		params.VectorList = VectorList;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479283220
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ConstantScalarMultiplyInPlace
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		double                                             Constant                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptScalarList                   ScalarList                                                 (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGeometryScriptLibrary_VectorMathFunctions::STATIC_ConstantScalarMultiplyInPlace(double Constant, struct FGeometryScriptScalarList* ScalarList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ConstantScalarMultiplyInPlace");
		
		UGeometryScriptLibrary_VectorMathFunctions_ConstantScalarMultiplyInPlace_Params params {};
		params.Constant = Constant;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ScalarList != nullptr)
			*ScalarList = params.ScalarList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479282E40
	 * 		Name   -> Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ConstantScalarMultiply
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		double                                             Constant                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometryScriptScalarList                   ScalarList                                                 (Parm, NativeAccessSpecifierPublic)
	 */
	struct FGeometryScriptScalarList UGeometryScriptLibrary_VectorMathFunctions::STATIC_ConstantScalarMultiply(double Constant, const struct FGeometryScriptScalarList& ScalarList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ConstantScalarMultiply");
		
		UGeometryScriptLibrary_VectorMathFunctions_ConstantScalarMultiply_Params params {};
		params.Constant = Constant;
		params.ScalarList = ScalarList;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeometryScriptLibrary_VectorMathFunctions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryScriptLibrary_VectorMathFunctions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions");
		return ptr;
	}

}


