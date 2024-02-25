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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum MeshModelingTools.EMakeMeshPlacementType
	 */
	enum class EMakeMeshPlacementType : uint8_t
	{
		GroundPlane = 0,
		OnScene     = 1,
		MAX         = 2
	};

	/**
	 * Enum MeshModelingTools.EMakeMeshPivotLocation
	 */
	enum class EMakeMeshPivotLocation : uint8_t
	{
		Base     = 0,
		Centered = 1,
		Top      = 2,
		MAX      = 3
	};

	/**
	 * Enum MeshModelingTools.EMakeMeshPolygroupMode
	 */
	enum class EMakeMeshPolygroupMode : uint8_t
	{
		PerShape = 0,
		PerFace  = 1,
		PerQuad  = 2,
		MAX      = 3
	};

	/**
	 * Enum MeshModelingTools.EProceduralRectType
	 */
	enum class EProceduralRectType : uint8_t
	{
		Rectangle        = 0,
		RoundedRectangle = 1,
		MAX              = 2
	};

	/**
	 * Enum MeshModelingTools.EProceduralDiscType
	 */
	enum class EProceduralDiscType : uint8_t
	{
		Disc          = 0,
		PuncturedDisc = 1,
		MAX           = 2
	};

	/**
	 * Enum MeshModelingTools.EProceduralSphereType
	 */
	enum class EProceduralSphereType : uint8_t
	{
		LatLong = 0,
		Box     = 1,
		MAX     = 2
	};

	/**
	 * Enum MeshModelingTools.EProceduralStairsType
	 */
	enum class EProceduralStairsType : uint8_t
	{
		Linear   = 0,
		Floating = 1,
		Curved   = 2,
		Spiral   = 3,
		MAX      = 4
	};

	/**
	 * Enum MeshModelingTools.EDrawPolygonDrawMode
	 */
	enum class EDrawPolygonDrawMode : uint8_t
	{
		Freehand         = 0,
		Circle           = 1,
		Square           = 2,
		Rectangle        = 3,
		RoundedRectangle = 4,
		Ring             = 5,
		MAX              = 6
	};

	/**
	 * Enum MeshModelingTools.EDrawPolygonExtrudeMode
	 */
	enum class EDrawPolygonExtrudeMode : uint8_t
	{
		Flat        = 0,
		Fixed       = 1,
		Interactive = 2,
		MAX         = 3
	};

	/**
	 * Enum MeshModelingTools.ELocalFrameMode
	 */
	enum class ELocalFrameMode : uint8_t
	{
		FromObject   = 0,
		FromGeometry = 1,
		MAX          = 2
	};

	/**
	 * Enum MeshModelingTools.EEditMeshPolygonsToolActions
	 */
	enum class EEditMeshPolygonsToolActions : uint8_t
	{
		NoAction               = 0,
		AcceptCurrent          = 1,
		CancelCurrent          = 2,
		Extrude                = 3,
		PushPull               = 4,
		Offset                 = 5,
		Inset                  = 6,
		Outset                 = 7,
		BevelFaces             = 8,
		InsertEdge             = 9,
		InsertEdgeLoop         = 10,
		Complete               = 11,
		PlaneCut               = 12,
		Merge                  = 13,
		Delete                 = 14,
		CutFaces               = 15,
		RecalculateNormals     = 16,
		FlipNormals            = 17,
		Retriangulate          = 18,
		Decompose              = 19,
		Disconnect             = 20,
		Duplicate              = 21,
		CollapseEdge           = 22,
		WeldEdges              = 23,
		StraightenEdge         = 24,
		FillHole               = 25,
		BridgeEdges            = 26,
		BevelEdges             = 27,
		PlanarProjectionUV     = 28,
		SimplifyByGroups       = 29,
		RegenerateExtraCorners = 30,
		PokeSingleFace         = 31,
		SplitSingleEdge        = 32,
		FlipSingleEdge         = 33,
		CollapseSingleEdge     = 34,
		BevelAuto              = 35,
		MAX                    = 36
	};

	/**
	 * Enum MeshModelingTools.EEditMeshPolygonsToolSelectionMode
	 */
	enum class EEditMeshPolygonsToolSelectionMode : uint8_t
	{
		Faces              = 0,
		Edges              = 1,
		Vertices           = 2,
		Loops              = 3,
		Rings              = 4,
		FacesEdgesVertices = 5,
		MAX                = 6
	};

	/**
	 * Enum MeshModelingTools.ESetMeshMaterialMode
	 */
	enum class ESetMeshMaterialMode : uint8_t
	{
		Original     = 0,
		Checkerboard = 1,
		Override     = 2,
		MAX          = 3
	};

	/**
	 * Enum MeshModelingTools.EMeshEditingMaterialModes
	 */
	enum class EMeshEditingMaterialModes : uint8_t
	{
		ExistingMaterial = 0,
		Diffuse          = 1,
		Grey             = 2,
		Soft             = 3,
		Transparent      = 4,
		TangentNormal    = 5,
		VertexColor      = 6,
		CustomImage      = 7,
		Custom           = 8,
		MAX              = 9
	};

	/**
	 * Enum MeshModelingTools.ERevolvePropertiesCapFillMode
	 */
	enum class ERevolvePropertiesCapFillMode : uint8_t
	{
		None        = 0,
		CenterFan   = 1,
		Delaunay    = 2,
		EarClipping = 3,
		MAX         = 4
	};

	/**
	 * Enum MeshModelingTools.ERevolvePropertiesPolygroupMode
	 */
	enum class ERevolvePropertiesPolygroupMode : uint8_t
	{
		PerShape       = 0,
		PerFace        = 1,
		PerRevolveStep = 2,
		PerPathSegment = 3,
		MAX            = 4
	};

	/**
	 * Enum MeshModelingTools.ERevolvePropertiesQuadSplit
	 */
	enum class ERevolvePropertiesQuadSplit : uint8_t
	{
		Uniform = 0,
		Compact = 1,
		MAX     = 2
	};

	/**
	 * Enum MeshModelingTools.EPolyEditCutPlaneOrientation
	 */
	enum class EPolyEditCutPlaneOrientation : uint8_t
	{
		FaceNormals   = 0,
		ViewDirection = 1,
		MAX           = 2
	};

	/**
	 * Enum MeshModelingTools.EPolyEditExtrudeDirection
	 */
	enum class EPolyEditExtrudeDirection : uint8_t
	{
		SelectionNormal = 0,
		WorldX          = 1,
		WorldY          = 2,
		WorldZ          = 3,
		LocalX          = 4,
		LocalY          = 5,
		LocalZ          = 6,
		MAX             = 7
	};

	/**
	 * Enum MeshModelingTools.EPolyEditExtrudeDistanceMode
	 */
	enum class EPolyEditExtrudeDistanceMode : uint8_t
	{
		ClickInViewport = 0,
		Fixed           = 1,
		MAX             = 2
	};

	/**
	 * Enum MeshModelingTools.EPolyEditExtrudeModeOptions
	 */
	enum class EPolyEditExtrudeModeOptions : uint8_t
	{
		SingleDirection             = 0,
		SelectedTriangleNormals     = 1,
		SelectedTriangleNormalsEven = 2,
		MAX                         = 3
	};

	/**
	 * Enum MeshModelingTools.EPolyEditOffsetModeOptions
	 */
	enum class EPolyEditOffsetModeOptions : uint8_t
	{
		VertexNormals               = 0,
		SelectedTriangleNormals     = 1,
		SelectedTriangleNormalsEven = 2,
		MAX                         = 3
	};

	/**
	 * Enum MeshModelingTools.EPolyEditPushPullModeOptions
	 */
	enum class EPolyEditPushPullModeOptions : uint8_t
	{
		SelectedTriangleNormals     = 0,
		SelectedTriangleNormalsEven = 1,
		SingleDirection             = 2,
		VertexNormals               = 3,
		MAX                         = 4
	};

	/**
	 * Enum MeshModelingTools.EGroupEdgeInsertionMode
	 */
	enum class EGroupEdgeInsertionMode : uint8_t
	{
		Retriangulate = 0,
		PlaneCut      = 1,
		MAX           = 2
	};

	/**
	 * Enum MeshModelingTools.EEdgeLoopPositioningMode
	 */
	enum class EEdgeLoopPositioningMode : uint8_t
	{
		Even             = 0,
		ProportionOffset = 1,
		DistanceOffset   = 2,
		MAX              = 3
	};

	/**
	 * Enum MeshModelingTools.EEdgeLoopInsertionMode
	 */
	enum class EEdgeLoopInsertionMode : uint8_t
	{
		Retriangulate = 0,
		PlaneCut      = 1,
		MAX           = 2
	};

	/**
	 * Enum MeshModelingTools.EUVProjectionToolActions
	 */
	enum class EUVProjectionToolActions : uint8_t
	{
		NoAction     = 0,
		AutoFit      = 1,
		AutoFitAlign = 2,
		Reset        = 3,
		MAX          = 4
	};

	/**
	 * Enum MeshModelingTools.EUVProjectionToolInitializationMode
	 */
	enum class EUVProjectionToolInitializationMode : uint8_t
	{
		Default      = 0,
		UsePrevious  = 1,
		AutoFit      = 2,
		AutoFitAlign = 3,
		MAX          = 4
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
