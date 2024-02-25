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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct DataflowCore.NodeColors
	 * Size -> 0x0020
	 */
	struct FNodeColors
	{
	public:
		struct FLinearColor                                        NodeTitleColor;                                          // 0x0000(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        NodeBodyTintColor;                                       // 0x0010(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DataflowCore.DataflowConnection
	 * Size -> 0x0040
	 */
	struct FDataflowConnection
	{
	public:
		unsigned char                                              UnknownData_EVP4[0x40];                                  // 0x0000(0x0040) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DataflowCore.DataflowInput
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	struct FDataflowInput : public FDataflowConnection
	{
	public:
		unsigned char                                              UnknownData_3N74[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DataflowCore.DataflowOutput
	 * Size -> 0x0028 (FullSize[0x0068] - InheritedSize[0x0040])
	 */
	struct FDataflowOutput : public FDataflowConnection
	{
	public:
		unsigned char                                              UnknownData_YEOI[0x28];                                  // 0x0040(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DataflowCore.DataflowNode
	 * Size -> 0x00E8
	 */
	struct FDataflowNode
	{
	public:
		unsigned char                                              UnknownData_6CL2[0xC8];                                  // 0x0000(0x00C8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bActive;                                                 // 0x00C8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E51T[0x1F];                                  // 0x00C9(0x001F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DataflowCore.DataflowSelection
	 * Size -> 0x0020
	 */
	struct FDataflowSelection
	{
	public:
		unsigned char                                              UnknownData_YUGE[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DataflowCore.DataflowTransformSelection
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FDataflowTransformSelection : public FDataflowSelection
	{	};

	/**
	 * ScriptStruct DataflowCore.DataflowVertexSelection
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FDataflowVertexSelection : public FDataflowSelection
	{	};

	/**
	 * ScriptStruct DataflowCore.DataflowFaceSelection
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FDataflowFaceSelection : public FDataflowSelection
	{	};

	/**
	 * ScriptStruct DataflowCore.DataflowTerminalNode
	 * Size -> 0x0000 (FullSize[0x00E8] - InheritedSize[0x00E8])
	 */
	struct FDataflowTerminalNode : public FDataflowNode
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
