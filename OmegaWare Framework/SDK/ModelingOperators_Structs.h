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
	 * Enum ModelingOperators.ERecomputeUVsPropertiesUnwrapType
	 */
	enum class ERecomputeUVsPropertiesUnwrapType : uint8_t
	{
		ExpMap            = 0,
		Conformal         = 1,
		SpectralConformal = 2,
		IslandMerging     = 3,
		MAX               = 4
	};

	/**
	 * Enum ModelingOperators.ERecomputeUVsPropertiesIslandMode
	 */
	enum class ERecomputeUVsPropertiesIslandMode : uint8_t
	{
		PolyGroups  = 0,
		ExistingUVs = 1,
		MAX         = 2
	};

	/**
	 * Enum ModelingOperators.ERecomputeUVsToolOrientationMode
	 */
	enum class ERecomputeUVsToolOrientationMode : uint8_t
	{
		None      = 0,
		MinBounds = 1,
		MAX       = 2
	};

	/**
	 * Enum ModelingOperators.ERecomputeUVsPropertiesLayoutType
	 */
	enum class ERecomputeUVsPropertiesLayoutType : uint8_t
	{
		None                      = 0,
		Repack                    = 1,
		NormalizeToExistingBounds = 2,
		NormalizeToBounds         = 3,
		NormalizeToWorld          = 4,
		MAX                       = 5
	};

	/**
	 * Enum ModelingOperators.EUVLayoutType
	 */
	enum class EUVLayoutType : uint8_t
	{
		Transform = 0,
		Stack     = 1,
		Repack    = 2,
		MAX       = 3
	};

	/**
	 * Enum ModelingOperators.ENormalCalculationMethod
	 */
	enum class ENormalCalculationMethod : uint8_t
	{
		AreaWeighted       = 0,
		AngleWeighted      = 1,
		AreaAngleWeighting = 2,
		MAX                = 3
	};

	/**
	 * Enum ModelingOperators.ESplitNormalMethod
	 */
	enum class ESplitNormalMethod : uint8_t
	{
		UseExistingTopology = 0,
		FaceNormalThreshold = 1,
		FaceGroupID         = 2,
		PerTriangle         = 3,
		PerVertex           = 4,
		MAX                 = 5
	};

	/**
	 * Enum ModelingOperators.EHoleFillOpFillType
	 */
	enum class EHoleFillOpFillType : uint8_t
	{
		TriangleFan        = 0,
		PolygonEarClipping = 1,
		Planar             = 2,
		Minimal            = 3,
		Smooth             = 4,
		MAX                = 5
	};

	/**
	 * Enum ModelingOperators.ERemeshType
	 */
	enum class ERemeshType : uint8_t
	{
		Standard   = 0,
		FullPass   = 1,
		NormalFlow = 2,
		MAX        = 3
	};

	/**
	 * Enum ModelingOperators.ERemeshSmoothingType
	 */
	enum class ERemeshSmoothingType : uint8_t
	{
		Uniform   = 0,
		Cotangent = 1,
		MeanValue = 2,
		MAX       = 3
	};

	/**
	 * Enum ModelingOperators.ECSGOperation
	 */
	enum class ECSGOperation : uint8_t
	{
		DifferenceAB = 0,
		DifferenceBA = 1,
		Intersect    = 2,
		Union        = 3,
		MAX          = 4
	};

	/**
	 * Enum ModelingOperators.ETrimOperation
	 */
	enum class ETrimOperation : uint8_t
	{
		TrimA = 0,
		TrimB = 1,
		MAX   = 2
	};

	/**
	 * Enum ModelingOperators.ETrimSide
	 */
	enum class ETrimSide : uint8_t
	{
		RemoveInside  = 0,
		RemoveOutside = 1,
		MAX           = 2
	};

	/**
	 * Enum ModelingOperators.EMorphologyOperation
	 */
	enum class EMorphologyOperation : uint8_t
	{
		Dilate   = 0,
		Contract = 1,
		Close    = 2,
		Open     = 3,
		MAX      = 4
	};

	/**
	 * Enum ModelingOperators.EUVProjectionMethod
	 */
	enum class EUVProjectionMethod : uint8_t
	{
		Box      = 0,
		Cylinder = 1,
		Plane    = 2,
		ExpMap   = 3,
		MAX      = 4
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
