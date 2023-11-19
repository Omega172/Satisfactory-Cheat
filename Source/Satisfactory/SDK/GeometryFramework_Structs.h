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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum GeometryFramework.EDynamicMeshComponentTangentsMode
	 */
	enum class EDynamicMeshComponentTangentsMode : uint8_t
	{
		NoTangents         = 0,
		AutoCalculated     = 1,
		ExternallyProvided = 2,
		MAX                = 3
	};

	/**
	 * Enum GeometryFramework.EDynamicMeshComponentColorOverrideMode
	 */
	enum class EDynamicMeshComponentColorOverrideMode : uint8_t
	{
		None         = 0,
		VertexColors = 1,
		Polygroups   = 2,
		Constant     = 3,
		MAX          = 4
	};

	/**
	 * Enum GeometryFramework.EDynamicMeshComponentRenderUpdateMode
	 */
	enum class EDynamicMeshComponentRenderUpdateMode : uint8_t
	{
		NoUpdate   = 0,
		FullUpdate = 1,
		FastUpdate = 2,
		MAX        = 3
	};

	/**
	 * Enum GeometryFramework.EDynamicMeshChangeType
	 */
	enum class EDynamicMeshChangeType : uint8_t
	{
		GeneralEdit           = 0,
		MeshChange            = 1,
		MeshReplacementChange = 2,
		MeshVertexChange      = 3,
		DeformationEdit       = 4,
		AttributeEdit         = 5,
		MAX                   = 6
	};

	/**
	 * Enum GeometryFramework.EDynamicMeshAttributeChangeFlags
	 */
	enum class EDynamicMeshAttributeChangeFlags : uint8_t
	{
		Unknown         = 0,
		MeshTopology    = 1,
		VertexPositions = 2,
		NormalsTangents = 3,
		VertexColors    = 4,
		UVs             = 5,
		TriangleGroups  = 6,
		MAX             = 7
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct GeometryFramework.DynamicMeshChangeInfo
	 * Size -> 0x0020
	 */
	struct FDynamicMeshChangeInfo
	{
	public:
		EDynamicMeshChangeType                                     Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDynamicMeshAttributeChangeFlags                           Flags;                                                   // 0x0001(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsRevertChange;                                         // 0x0002(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OPR0[0x1D];                                  // 0x0003(0x001D) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
