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
	 * BlueprintGeneratedClass BPI_MapMarkerHelpers.BPI_MapMarkerHelpers_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_MapMarkerHelpers_C : public UInterface
	{
	public:
		void ScrollToOnMap();
		void UnfocusOnMap();
		void FocusOnMap();
		void OpenImageBrowser(int32_t CurrentIconID);
		void OpenColorPicker(const struct FLinearColor& CurrentColor);
		void SetOverwriteIcon(class UTexture2D* Texture);
		void GetMapMarker(struct FMapMarker* MapMarker, bool* Success);
		void GetActorRepresentation(class UFGActorRepresentation** ActorRepresntation);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
