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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function GLTFExporter.GLTFExportOptions.ResetToDefault
	 */
	struct UGLTFExportOptions_ResetToDefault_Params
	{	};

	/**
	 * Function GLTFExporter.GLTFExporter.ExportToGLTF
	 */
	struct UGLTFExporter_ExportToGLTF_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              FilePath;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGLTFExportOptions*                                  Options;                                                 // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DOYR[0x50];                                  // 0x0020(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGLTFExportMessages                                 OutMessages;                                             // 0x0070(0x0030)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00A0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GLTFExporter.GLTFProxyOptions.ResetToDefault
	 */
	struct UGLTFProxyOptions_ResetToDefault_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
