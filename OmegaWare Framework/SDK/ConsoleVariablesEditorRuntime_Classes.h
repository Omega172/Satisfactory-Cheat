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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class ConsoleVariablesEditorRuntime.ConsoleVariablesAsset
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UConsoleVariablesAsset : public UObject
	{
	public:
		unsigned char                                              UnknownData_8Y82[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              VariableCollectionDescription;                           // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FConsoleVariablesEditorAssetSaveData>        SavedCommands;                                           // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		void SetVariableCollectionDescription(const class FString& InVariableCollectionDescription);
		void ReplaceSavedCommands(TArray<struct FConsoleVariablesEditorAssetSaveData> Replacement);
		bool RemoveConsoleVariable(const class FString& InCommandString);
		class FString GetVariableCollectionDescription();
		int32_t GetSavedCommandsCount();
		TArray<class FString> GetSavedCommandsAsStringArray(bool bOnlyIncludeChecked);
		class FString GetSavedCommandsAsCommaSeparatedString(bool bOnlyIncludeChecked);
		TArray<struct FConsoleVariablesEditorAssetSaveData> GetSavedCommands();
		bool FindSavedDataByCommandString(const class FString& InCommandString, struct FConsoleVariablesEditorAssetSaveData* OutValue, ESearchCase SearchCase);
		void ExecuteSavedCommands(class UObject* WorldContextObject, bool bOnlyIncludeChecked);
		void CopyFrom(class UConsoleVariablesAsset* InAssetToCopy);
		void AddOrSetConsoleObjectSavedData(const struct FConsoleVariablesEditorAssetSaveData& InData);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
