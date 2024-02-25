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
	 * Function BPI_MapMarkerHelpers.BPI_MapMarkerHelpers_C.ScrollToOnMap
	 */
	struct UBPI_MapMarkerHelpers_C_ScrollToOnMap_Params
	{	};

	/**
	 * Function BPI_MapMarkerHelpers.BPI_MapMarkerHelpers_C.UnfocusOnMap
	 */
	struct UBPI_MapMarkerHelpers_C_UnfocusOnMap_Params
	{	};

	/**
	 * Function BPI_MapMarkerHelpers.BPI_MapMarkerHelpers_C.FocusOnMap
	 */
	struct UBPI_MapMarkerHelpers_C_FocusOnMap_Params
	{	};

	/**
	 * Function BPI_MapMarkerHelpers.BPI_MapMarkerHelpers_C.OpenImageBrowser
	 */
	struct UBPI_MapMarkerHelpers_C_OpenImageBrowser_Params
	{
	public:
		int32_t                                                    CurrentIconID;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_MapMarkerHelpers.BPI_MapMarkerHelpers_C.OpenColorPicker
	 */
	struct UBPI_MapMarkerHelpers_C_OpenColorPicker_Params
	{
	public:
		struct FLinearColor                                        CurrentColor;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_MapMarkerHelpers.BPI_MapMarkerHelpers_C.SetOverwriteIcon
	 */
	struct UBPI_MapMarkerHelpers_C_SetOverwriteIcon_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_MapMarkerHelpers.BPI_MapMarkerHelpers_C.GetMapMarker
	 */
	struct UBPI_MapMarkerHelpers_C_GetMapMarker_Params
	{
	public:
		struct FMapMarker                                          MapMarker;                                               // 0x0000(0x0050)  (Parm, OutParm)
		bool                                                       Success;                                                 // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_MapMarkerHelpers.BPI_MapMarkerHelpers_C.GetActorRepresentation
	 */
	struct UBPI_MapMarkerHelpers_C_GetActorRepresentation_Params
	{
	public:
		class UFGActorRepresentation*                              ActorRepresntation;                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
