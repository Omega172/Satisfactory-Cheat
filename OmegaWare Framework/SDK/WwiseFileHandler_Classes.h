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
	 * Class WwiseFileHandler.WwiseExternalSourceStatics
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWwiseExternalSourceStatics : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SetExternalSourceMediaWithIds(const struct FAkUniqueID& ExternalSourceCookie, int32_t MediaId);
		void STATIC_SetExternalSourceMediaByName(const class FString& ExternalSourceName, const class FString& MediaName);
		void STATIC_SetExternalSourceMediaById(const class FString& ExternalSourceName, int32_t MediaId);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
