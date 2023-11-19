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
	 * Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.SetupCompassDistanceButton
	 */
	struct UBPW_MarkerEditor_Marker_C_SetupCompassDistanceButton_Params
	{	};

	/**
	 * Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.SetCompassViewDistance
	 */
	struct UBPW_MarkerEditor_Marker_C_SetCompassViewDistance_Params
	{
	public:
		ECompassViewDistance                                       compassViewDistance;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.SetSize
	 */
	struct UBPW_MarkerEditor_Marker_C_SetSize_Params
	{
	public:
		double                                                     Size;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.SetColor
	 */
	struct UBPW_MarkerEditor_Marker_C_SetColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.SetIconID
	 */
	struct UBPW_MarkerEditor_Marker_C_SetIconID_Params
	{
	public:
		int32_t                                                    IconID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3GTP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.UpdateName
	 */
	struct UBPW_MarkerEditor_Marker_C_UpdateName_Params
	{	};

	/**
	 * Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.Construct
	 */
	struct UBPW_MarkerEditor_Marker_C_Construct_Params
	{	};

	/**
	 * Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mRemoveMarker_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UBPW_MarkerEditor_Marker_C_BndEvt__BPW_MarkerEditor_Marker_mRemoveMarker_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mRemoveMarker_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UBPW_MarkerEditor_Marker_C_BndEvt__BPW_MarkerEditor_Marker_mRemoveMarker_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.OnEscapePressed
	 */
	struct UBPW_MarkerEditor_Marker_C_OnEscapePressed_Params
	{	};

	/**
	 * Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mName_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature
	 */
	struct UBPW_MarkerEditor_Marker_C_BndEvt__BPW_MarkerEditor_Marker_mName_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mApply_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	 */
	struct UBPW_MarkerEditor_Marker_C_BndEvt__BPW_MarkerEditor_Marker_mApply_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mSelectColorButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	 */
	struct UBPW_MarkerEditor_Marker_C_BndEvt__BPW_MarkerEditor_Marker_mSelectColorButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_MSelectIconButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
	 */
	struct UBPW_MarkerEditor_Marker_C_BndEvt__BPW_MarkerEditor_Marker_MSelectIconButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mSizeLargeButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UBPW_MarkerEditor_Marker_C_BndEvt__BPW_MarkerEditor_Marker_mSizeLargeButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mSizeSmallButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
	 */
	struct UBPW_MarkerEditor_Marker_C_BndEvt__BPW_MarkerEditor_Marker_mSizeSmallButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mHighlightMarker_K2Node_ComponentBoundEvent_8_OnStateChanged__DelegateSignature
	 */
	struct UBPW_MarkerEditor_Marker_C_BndEvt__BPW_MarkerEditor_Marker_mHighlightMarker_K2Node_ComponentBoundEvent_8_OnStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsTrue;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mViewDistanceOff_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
	 */
	struct UBPW_MarkerEditor_Marker_C_BndEvt__BPW_MarkerEditor_Marker_mViewDistanceOff_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mViewDistanceNear_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
	 */
	struct UBPW_MarkerEditor_Marker_C_BndEvt__BPW_MarkerEditor_Marker_mViewDistanceNear_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mViewDistanceMedium_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
	 */
	struct UBPW_MarkerEditor_Marker_C_BndEvt__BPW_MarkerEditor_Marker_mViewDistanceMedium_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mViewDistanceInfinite_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature
	 */
	struct UBPW_MarkerEditor_Marker_C_BndEvt__BPW_MarkerEditor_Marker_mViewDistanceInfinite_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mViewDistanceFar_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature
	 */
	struct UBPW_MarkerEditor_Marker_C_BndEvt__BPW_MarkerEditor_Marker_mViewDistanceFar_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mViewDistanceOff_K2Node_ComponentBoundEvent_14_OnHovered__DelegateSignature
	 */
	struct UBPW_MarkerEditor_Marker_C_BndEvt__BPW_MarkerEditor_Marker_mViewDistanceOff_K2Node_ComponentBoundEvent_14_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mViewDistanceNear_K2Node_ComponentBoundEvent_15_OnHovered__DelegateSignature
	 */
	struct UBPW_MarkerEditor_Marker_C_BndEvt__BPW_MarkerEditor_Marker_mViewDistanceNear_K2Node_ComponentBoundEvent_15_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mViewDistanceMedium_K2Node_ComponentBoundEvent_16_OnHovered__DelegateSignature
	 */
	struct UBPW_MarkerEditor_Marker_C_BndEvt__BPW_MarkerEditor_Marker_mViewDistanceMedium_K2Node_ComponentBoundEvent_16_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mViewDistanceFar_K2Node_ComponentBoundEvent_17_OnHovered__DelegateSignature
	 */
	struct UBPW_MarkerEditor_Marker_C_BndEvt__BPW_MarkerEditor_Marker_mViewDistanceFar_K2Node_ComponentBoundEvent_17_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mViewDistanceInfinite_K2Node_ComponentBoundEvent_18_OnHovered__DelegateSignature
	 */
	struct UBPW_MarkerEditor_Marker_C_BndEvt__BPW_MarkerEditor_Marker_mViewDistanceInfinite_K2Node_ComponentBoundEvent_18_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mViewDistanceOff_K2Node_ComponentBoundEvent_19_OnUnhovered__DelegateSignature
	 */
	struct UBPW_MarkerEditor_Marker_C_BndEvt__BPW_MarkerEditor_Marker_mViewDistanceOff_K2Node_ComponentBoundEvent_19_OnUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mViewDistanceNear_K2Node_ComponentBoundEvent_20_OnUnhovered__DelegateSignature
	 */
	struct UBPW_MarkerEditor_Marker_C_BndEvt__BPW_MarkerEditor_Marker_mViewDistanceNear_K2Node_ComponentBoundEvent_20_OnUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mViewDistanceMedium_K2Node_ComponentBoundEvent_21_OnUnhovered__DelegateSignature
	 */
	struct UBPW_MarkerEditor_Marker_C_BndEvt__BPW_MarkerEditor_Marker_mViewDistanceMedium_K2Node_ComponentBoundEvent_21_OnUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mViewDistanceFar_K2Node_ComponentBoundEvent_22_OnUnhovered__DelegateSignature
	 */
	struct UBPW_MarkerEditor_Marker_C_BndEvt__BPW_MarkerEditor_Marker_mViewDistanceFar_K2Node_ComponentBoundEvent_22_OnUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mViewDistanceInfinite_K2Node_ComponentBoundEvent_23_OnUnhovered__DelegateSignature
	 */
	struct UBPW_MarkerEditor_Marker_C_BndEvt__BPW_MarkerEditor_Marker_mViewDistanceInfinite_K2Node_ComponentBoundEvent_23_OnUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.BndEvt__BPW_MarkerEditor_Marker_mName_K2Node_ComponentBoundEvent_24_OnEditableTextChangedEvent__DelegateSignature
	 */
	struct UBPW_MarkerEditor_Marker_C_BndEvt__BPW_MarkerEditor_Marker_mName_K2Node_ComponentBoundEvent_24_OnEditableTextChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C.ExecuteUbergraph_BPW_MarkerEditor_Marker
	 */
	struct UBPW_MarkerEditor_Marker_C_ExecuteUbergraph_BPW_MarkerEditor_Marker_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CA4I[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
