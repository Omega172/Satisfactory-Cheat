﻿#pragma once

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
	 * Function Landscape.LandscapeProxy.SetVirtualTextureRenderPassType
	 */
	struct ALandscapeProxy_SetVirtualTextureRenderPassType_Params
	{
	public:
		ERuntimeVirtualTextureMainPassType                         InType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue
	 */
	struct ALandscapeProxy_SetLandscapeMaterialVectorParameterValue_Params
	{
	public:
		class FName                                                ParameterName;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                                        Value;                                                   // 0x0008(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue
	 */
	struct ALandscapeProxy_SetLandscapeMaterialTextureParameterValue_Params
	{
	public:
		class FName                                                ParameterName;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTexture*                                            Value;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue
	 */
	struct ALandscapeProxy_SetLandscapeMaterialScalarParameterValue_Params
	{
	public:
		class FName                                                ParameterName;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Landscape.LandscapeProxy.LandscapeExportHeightmapToRenderTarget
	 */
	struct ALandscapeProxy_LandscapeExportHeightmapToRenderTarget_Params
	{
	public:
		class UTextureRenderTarget2D*                              InRenderTarget;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       InExportHeightIntoRGChannel;                             // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       InExportLandscapeProxies;                                // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000A(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Landscape.LandscapeProxy.GetLandscapeActor
	 */
	struct ALandscapeProxy_GetLandscapeActor_Params
	{
	public:
		class ALandscape*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Landscape.LandscapeProxy.EditorSetLandscapeMaterial
	 */
	struct ALandscapeProxy_EditorSetLandscapeMaterial_Params
	{
	public:
		class UMaterialInterface*                                  NewLandscapeMaterial;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Landscape.LandscapeProxy.EditorApplySpline
	 */
	struct ALandscapeProxy_EditorApplySpline_Params
	{
	public:
		class USplineComponent*                                    InSplineComponent;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      StartWidth;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      EndWidth;                                                // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      StartSideFalloff;                                        // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      EndSideFalloff;                                          // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      StartRoll;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      EndRoll;                                                 // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NumSubdivisions;                                         // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bRaiseHeights;                                           // 0x0024(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bLowerHeights;                                           // 0x0025(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8T0K[0x2];                                   // 0x0026(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ULandscapeLayerInfoObject*                           PaintLayer;                                              // 0x0028(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                EditLayerName;                                           // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Landscape.LandscapeProxy.ChangeLODDistanceFactor
	 */
	struct ALandscapeProxy_ChangeLODDistanceFactor_Params
	{
	public:
		float                                                      InLODDistanceFactor;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections
	 */
	struct ALandscapeProxy_ChangeComponentScreenSizeToUseSubSections_Params
	{
	public:
		float                                                      InComponentScreenSizeToUseSubSections;                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Landscape.Landscape.RenderHeightmap
	 */
	struct ALandscape_RenderHeightmap_Params
	{
	public:
		struct FTransform                                          InWorldTransform;                                        // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FBox2D                                              InExtents;                                               // 0x0060(0x0028)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		class UTextureRenderTarget2D*                              OutRenderTarget;                                         // 0x0088(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Landscape.LandscapeComponent.SetLODBias
	 */
	struct ULandscapeComponent_SetLODBias_Params
	{
	public:
		int32_t                                                    InLODBias;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Landscape.LandscapeComponent.SetForcedLOD
	 */
	struct ULandscapeComponent_SetForcedLOD_Params
	{
	public:
		int32_t                                                    InForcedLOD;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic
	 */
	struct ULandscapeComponent_GetMaterialInstanceDynamic_Params
	{
	public:
		int32_t                                                    InIndex;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CDW6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMaterialInstanceDynamic*                            ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightByNameAtLocation
	 */
	struct ULandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation_Params
	{
	public:
		struct FVector                                             InLocation;                                              // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                InPaintLayerName;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightAtLocation
	 */
	struct ULandscapeComponent_EditorGetPaintLayerWeightAtLocation_Params
	{
	public:
		struct FVector                                             InLocation;                                              // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ULandscapeLayerInfoObject*                           PaintLayer;                                              // 0x0018(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent
	 */
	struct ULandscapeHeightfieldCollisionComponent_GetRenderComponent_Params
	{
	public:
		class ULandscapeComponent*                                 ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Landscape.LandscapeSplinesComponent.GetSplineMeshComponents
	 */
	struct ULandscapeSplinesComponent_GetSplineMeshComponents_Params
	{
	public:
		TArray<class USplineMeshComponent*>                        ReturnValue;                                             // 0x0000(0x0010)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Landscape.LandscapeBlueprintBrushBase.RequestLandscapeUpdate
	 */
	struct ALandscapeBlueprintBrushBase_RequestLandscapeUpdate_Params
	{
	public:
		bool                                                       bInUserTriggered;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Landscape.LandscapeBlueprintBrushBase.Render
	 */
	struct ALandscapeBlueprintBrushBase_Render_Params
	{
	public:
		bool                                                       InIsHeightmap;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_K4CP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTextureRenderTarget2D*                              InCombinedResult;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                InWeightmapLayerName;                                    // 0x0010(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTextureRenderTarget2D*                              ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Landscape.LandscapeBlueprintBrushBase.Initialize
	 */
	struct ALandscapeBlueprintBrushBase_Initialize_Params
	{
	public:
		struct FTransform                                          InLandscapeTransform;                                    // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FIntPoint                                           InLandscapeSize;                                         // 0x0060(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FIntPoint                                           InLandscapeRenderTargetSize;                             // 0x0068(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Landscape.LandscapeBlueprintBrushBase.GetBlueprintRenderDependencies
	 */
	struct ALandscapeBlueprintBrushBase_GetBlueprintRenderDependencies_Params
	{
	public:
		TArray<class UObject*>                                     OutStreamableAssets;                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
