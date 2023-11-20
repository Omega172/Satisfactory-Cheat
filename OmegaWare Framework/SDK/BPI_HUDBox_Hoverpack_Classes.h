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
	 * BlueprintGeneratedClass BPI_HUDBox_Hoverpack.BPI_HUDBox_Hoverpack_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_HUDBox_Hoverpack_C : public UInterface
	{
	public:
		void GetRangeWarningNrmlzdDistThreshold(double* RangeWarningNormalizedDistanceThreshold);
		void IsHoverpackHovering(bool* IsHovering);
		void GetHoverpackStates(EHoverPackMode* HoverpackState);
		void GetConnectionDistance(double* ConnectionDistance);
		void GetCurrentNormalisedConnectionDistance(double* NormalisedConnectionDistance);
		void GetPowerConnectionBool(bool* IsConnected);
		void GetMaxConnectionDistance(double* ConnectionMaxDistance);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
