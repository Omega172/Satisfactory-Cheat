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
	 * Function Widget_MapCompass_Icon.Widget_MapCompass_Icon_C.SetupResourceWell
	 */
	struct UWidget_MapCompass_Icon_C_SetupResourceWell_Params
	{
	public:
		class AFGResourceNodeFrackingCore*                         FrackingCore;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_J1PS[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_MapCompass_Icon.Widget_MapCompass_Icon_C.SetupResourceIcon
	 */
	struct UWidget_MapCompass_Icon_C_SetupResourceIcon_Params
	{	};

	/**
	 * Function Widget_MapCompass_Icon.Widget_MapCompass_Icon_C.SetIsHighlighted
	 */
	struct UWidget_MapCompass_Icon_C_SetIsHighlighted_Params
	{
	public:
		bool                                                       mIsHighlighted;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D988[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLinearColor                                        Color;                                                   // 0x0004(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MapCompass_Icon.Widget_MapCompass_Icon_C.SetOverwriteTexture
	 */
	struct UWidget_MapCompass_Icon_C_SetOverwriteTexture_Params
	{
	public:
		class UTexture2D*                                          mOverwriteTexture;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MapCompass_Icon.Widget_MapCompass_Icon_C.DisplayWarning
	 */
	struct UWidget_MapCompass_Icon_C_DisplayWarning_Params
	{
	public:
		bool                                                       DisplayWarning;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_U384[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLinearColor                                        iconColor;                                               // 0x0004(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_31HU[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture2D*                                          Icon;                                                    // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MapCompass_Icon.Widget_MapCompass_Icon_C.OnTruckStationStatusChanged
	 */
	struct UWidget_MapCompass_Icon_C_OnTruckStationStatusChanged_Params
	{
	public:
		EDockingStationStatus                                      Status;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MapCompass_Icon.Widget_MapCompass_Icon_C.OnVehicleStatusChanged
	 */
	struct UWidget_MapCompass_Icon_C_OnVehicleStatusChanged_Params
	{
	public:
		EVehicleStatus                                             Status;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MapCompass_Icon.Widget_MapCompass_Icon_C.OnTrainStateChanged
	 */
	struct UWidget_MapCompass_Icon_C_OnTrainStateChanged_Params
	{
	public:
		ETrainStatus                                               State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MapCompass_Icon.Widget_MapCompass_Icon_C.UpdateRadarTowerTime
	 */
	struct UWidget_MapCompass_Icon_C_UpdateRadarTowerTime_Params
	{	};

	/**
	 * Function Widget_MapCompass_Icon.Widget_MapCompass_Icon_C.SetScale
	 */
	struct UWidget_MapCompass_Icon_C_SetScale_Params
	{
	public:
		double                                                     Scale;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MapCompass_Icon.Widget_MapCompass_Icon_C.UpdateActor
	 */
	struct UWidget_MapCompass_Icon_C_UpdateActor_Params
	{
	public:
		class UFGActorRepresentation*                              actorRepresentation;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       mIsCompassObject;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MapCompass_Icon.Widget_MapCompass_Icon_C.SetIconType
	 */
	struct UWidget_MapCompass_Icon_C_SetIconType_Params
	{
	public:
		ERepresentationType                                        mRepresentationType;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IEJW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_MapCompass_Icon.Widget_MapCompass_Icon_C.TestFunction
	 */
	struct UWidget_MapCompass_Icon_C_TestFunction_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ERepresentationType                                        mRepresentationType;                                     // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Z4ZL[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture2D*                                          Icon;                                                    // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MapCompass_Icon.Widget_MapCompass_Icon_C.SetDescription
	 */
	struct UWidget_MapCompass_Icon_C_SetDescription_Params
	{
	public:
		class FText                                                mDescriptionText;                                        // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_MapCompass_Icon.Widget_MapCompass_Icon_C.SetRepresentatoinType
	 */
	struct UWidget_MapCompass_Icon_C_SetRepresentatoinType_Params
	{
	public:
		ERepresentationType                                        mRepresentationType;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_J69W[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_MapCompass_Icon.Widget_MapCompass_Icon_C.SetRotation
	 */
	struct UWidget_MapCompass_Icon_C_SetRotation_Params
	{
	public:
		double                                                     Angle;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MapCompass_Icon.Widget_MapCompass_Icon_C.SetIcon
	 */
	struct UWidget_MapCompass_Icon_C_SetIcon_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MapCompass_Icon.Widget_MapCompass_Icon_C.SetColor
	 */
	struct UWidget_MapCompass_Icon_C_SetColor_Params
	{
	public:
		struct FLinearColor                                        InColorAndOpacity;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MapCompass_Icon.Widget_MapCompass_Icon_C.Construct
	 */
	struct UWidget_MapCompass_Icon_C_Construct_Params
	{	};

	/**
	 * Function Widget_MapCompass_Icon.Widget_MapCompass_Icon_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWidget_MapCompass_Icon_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_MapCompass_Icon.Widget_MapCompass_Icon_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWidget_MapCompass_Icon_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_MapCompass_Icon.Widget_MapCompass_Icon_C.PreConstruct
	 */
	struct UWidget_MapCompass_Icon_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MapCompass_Icon.Widget_MapCompass_Icon_C.DynamicDescriptionUpdate
	 */
	struct UWidget_MapCompass_Icon_C_DynamicDescriptionUpdate_Params
	{	};

	/**
	 * Function Widget_MapCompass_Icon.Widget_MapCompass_Icon_C.BndEvt__Widget_MapCompass_Icon_mButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWidget_MapCompass_Icon_C_BndEvt__Widget_MapCompass_Icon_mButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_MapCompass_Icon.Widget_MapCompass_Icon_C.ExecuteUbergraph_Widget_MapCompass_Icon
	 */
	struct UWidget_MapCompass_Icon_C_ExecuteUbergraph_Widget_MapCompass_Icon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MapCompass_Icon.Widget_MapCompass_Icon_C.OnClicked__DelegateSignature
	 */
	struct UWidget_MapCompass_Icon_C_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_MapCompass_Icon.Widget_MapCompass_Icon_C.OnUnhovered__DelegateSignature
	 */
	struct UWidget_MapCompass_Icon_C_OnUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_MapCompass_Icon.Widget_MapCompass_Icon_C.OnHovered__DelegateSignature
	 */
	struct UWidget_MapCompass_Icon_C_OnHovered__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
