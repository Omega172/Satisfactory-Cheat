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
	 * Function WwiseFileHandler.WwiseExternalSourceStatics.SetExternalSourceMediaWithIds
	 */
	struct UWwiseExternalSourceStatics_SetExternalSourceMediaWithIds_Params
	{
	public:
		struct FAkUniqueID                                         ExternalSourceCookie;                                    // 0x0000(0x0004)  (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    MediaId;                                                 // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseFileHandler.WwiseExternalSourceStatics.SetExternalSourceMediaByName
	 */
	struct UWwiseExternalSourceStatics_SetExternalSourceMediaByName_Params
	{
	public:
		class FString                                              ExternalSourceName;                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              MediaName;                                               // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseFileHandler.WwiseExternalSourceStatics.SetExternalSourceMediaById
	 */
	struct UWwiseExternalSourceStatics_SetExternalSourceMediaById_Params
	{
	public:
		class FString                                              ExternalSourceName;                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MediaId;                                                 // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
