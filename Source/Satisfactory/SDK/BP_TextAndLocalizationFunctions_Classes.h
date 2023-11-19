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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_TextAndLocalizationFunctions.BP_TextAndLocalizationFunctions_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBP_TextAndLocalizationFunctions_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_RemoveExcessSpacesFromText(const class FText& InText, bool TrimTrailing, bool TrimLeading, class UObject* __WorldContext, class FText* OutText);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
