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
	 * Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.SetVariableCollectionDescription
	 */
	struct UConsoleVariablesAsset_SetVariableCollectionDescription_Params
	{
	public:
		class FString                                              InVariableCollectionDescription;                         // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.ReplaceSavedCommands
	 */
	struct UConsoleVariablesAsset_ReplaceSavedCommands_Params
	{
	public:
		TArray<struct FConsoleVariablesEditorAssetSaveData>        Replacement;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.RemoveConsoleVariable
	 */
	struct UConsoleVariablesAsset_RemoveConsoleVariable_Params
	{
	public:
		class FString                                              InCommandString;                                         // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.GetVariableCollectionDescription
	 */
	struct UConsoleVariablesAsset_GetVariableCollectionDescription_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.GetSavedCommandsCount
	 */
	struct UConsoleVariablesAsset_GetSavedCommandsCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.GetSavedCommandsAsStringArray
	 */
	struct UConsoleVariablesAsset_GetSavedCommandsAsStringArray_Params
	{
	public:
		bool                                                       bOnlyIncludeChecked;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0SRR[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FString>                                      ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.GetSavedCommandsAsCommaSeparatedString
	 */
	struct UConsoleVariablesAsset_GetSavedCommandsAsCommaSeparatedString_Params
	{
	public:
		bool                                                       bOnlyIncludeChecked;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WFOJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.GetSavedCommands
	 */
	struct UConsoleVariablesAsset_GetSavedCommands_Params
	{
	public:
		TArray<struct FConsoleVariablesEditorAssetSaveData>        ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.FindSavedDataByCommandString
	 */
	struct UConsoleVariablesAsset_FindSavedDataByCommandString_Params
	{
	public:
		class FString                                              InCommandString;                                         // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FConsoleVariablesEditorAssetSaveData                OutValue;                                                // 0x0010(0x0028)  (Parm, OutParm, NativeAccessSpecifierPublic)
		ESearchCase                                                SearchCase;                                              // 0x0038(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0039(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.ExecuteSavedCommands
	 */
	struct UConsoleVariablesAsset_ExecuteSavedCommands_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bOnlyIncludeChecked;                                     // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.CopyFrom
	 */
	struct UConsoleVariablesAsset_CopyFrom_Params
	{
	public:
		class UConsoleVariablesAsset*                              InAssetToCopy;                                           // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.AddOrSetConsoleObjectSavedData
	 */
	struct UConsoleVariablesAsset_AddOrSetConsoleObjectSavedData_Params
	{
	public:
		struct FConsoleVariablesEditorAssetSaveData                InData;                                                  // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
