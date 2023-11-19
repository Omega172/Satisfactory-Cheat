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
	 * Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.OnIconUnhovered
	 */
	struct UBPW_MarkerPicker_Map_C_OnIconUnhovered_Params
	{
	public:
		int32_t                                                    IconID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.OnIconHovered
	 */
	struct UBPW_MarkerPicker_Map_C_OnIconHovered_Params
	{
	public:
		int32_t                                                    IconID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.OnBrushSizeChanged
	 */
	struct UBPW_MarkerPicker_Map_C_OnBrushSizeChanged_Params
	{
	public:
		double                                                     Size;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.OnSwatchDeselected
	 */
	struct UBPW_MarkerPicker_Map_C_OnSwatchDeselected_Params
	{	};

	/**
	 * Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.OnSwatchClicked
	 */
	struct UBPW_MarkerPicker_Map_C_OnSwatchClicked_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.SetMarkerAmount
	 */
	struct UBPW_MarkerPicker_Map_C_SetMarkerAmount_Params
	{	};

	/**
	 * Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.SelectButtonAfterID
	 */
	struct UBPW_MarkerPicker_Map_C_SelectButtonAfterID_Params
	{
	public:
		bool                                                       mIsNewMarker;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       mIsSwatch;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.OnNewMarkerButtonClicked
	 */
	struct UBPW_MarkerPicker_Map_C_OnNewMarkerButtonClicked_Params
	{	};

	/**
	 * Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.OnIconClicked
	 */
	struct UBPW_MarkerPicker_Map_C_OnIconClicked_Params
	{
	public:
		int32_t                                                    IconID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.CreateIcons
	 */
	struct UBPW_MarkerPicker_Map_C_CreateIcons_Params
	{	};

	/**
	 * Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.PreConstruct
	 */
	struct UBPW_MarkerPicker_Map_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.Construct
	 */
	struct UBPW_MarkerPicker_Map_C_Construct_Params
	{	};

	/**
	 * Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.OnMapMarkerAdded
	 */
	struct UBPW_MarkerPicker_Map_C_OnMapMarkerAdded_Params
	{
	public:
		int32_t                                                    markerIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.OnMapMarkerRemoved
	 */
	struct UBPW_MarkerPicker_Map_C_OnMapMarkerRemoved_Params
	{
	public:
		int32_t                                                    markerIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.Destruct
	 */
	struct UBPW_MarkerPicker_Map_C_Destruct_Params
	{	};

	/**
	 * Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.ExecuteUbergraph_BPW_MarkerPicker_Map
	 */
	struct UBPW_MarkerPicker_Map_C_ExecuteUbergraph_BPW_MarkerPicker_Map_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_118H[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.OnStampUnhovered__DelegateSignature
	 */
	struct UBPW_MarkerPicker_Map_C_OnStampUnhovered__DelegateSignature_Params
	{
	public:
		int32_t                                                    IconID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.OnStampHovered__DelegateSignature
	 */
	struct UBPW_MarkerPicker_Map_C_OnStampHovered__DelegateSignature_Params
	{
	public:
		int32_t                                                    IconID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.OnPainterBrushSizeChanged__DelegateSignature
	 */
	struct UBPW_MarkerPicker_Map_C_OnPainterBrushSizeChanged__DelegateSignature_Params
	{
	public:
		double                                                     Size;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.OnSwatchSelected__DelegateSignature
	 */
	struct UBPW_MarkerPicker_Map_C_OnSwatchSelected__DelegateSignature_Params
	{
	public:
		int32_t                                                    ColorIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.OnNewMarkerSelected__DelegateSignature
	 */
	struct UBPW_MarkerPicker_Map_C_OnNewMarkerSelected__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.OnClearSelection__DelegateSignature
	 */
	struct UBPW_MarkerPicker_Map_C_OnClearSelection__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C.OnStampSelected__DelegateSignature
	 */
	struct UBPW_MarkerPicker_Map_C_OnStampSelected__DelegateSignature_Params
	{
	public:
		int32_t                                                    IconID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
