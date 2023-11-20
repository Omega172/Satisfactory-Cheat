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
	 * Function BPW_MapFilterCategories.BPW_MapFilterCategories_C.DeconvertRepresentationType
	 */
	struct UBPW_MapFilterCategories_C_DeconvertRepresentationType_Params
	{
	public:
		ERepresentationType                                        representationType;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YSR4[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<ERepresentationType>                                OutTypes;                                                // 0x0008(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BPW_MapFilterCategories.BPW_MapFilterCategories_C.GetCategoryName
	 */
	struct UBPW_MapFilterCategories_C_GetCategoryName_Params
	{
	public:
		ERepresentationType                                        Index;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JRPK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BPW_MapFilterCategories.BPW_MapFilterCategories_C.CanBeSeenOnCompass
	 */
	struct UBPW_MapFilterCategories_C_CanBeSeenOnCompass_Params
	{
	public:
		ERepresentationType                                        Index;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MapFilterCategories.BPW_MapFilterCategories_C.GetAllGenericClasses
	 */
	struct UBPW_MapFilterCategories_C_GetAllGenericClasses_Params
	{
	public:
		TArray<class UClass*>                                      OutClasses;                                              // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BPW_MapFilterCategories.BPW_MapFilterCategories_C.UnfocusCategory
	 */
	struct UBPW_MapFilterCategories_C_UnfocusCategory_Params
	{	};

	/**
	 * Function BPW_MapFilterCategories.BPW_MapFilterCategories_C.FocusCategory
	 */
	struct UBPW_MapFilterCategories_C_FocusCategory_Params
	{	};

	/**
	 * Function BPW_MapFilterCategories.BPW_MapFilterCategories_C.SetShowOnCompass
	 */
	struct UBPW_MapFilterCategories_C_SetShowOnCompass_Params
	{
	public:
		bool                                                       mShowOnCompass;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       UpdateActorRepresentationManager;                        // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MapFilterCategories.BPW_MapFilterCategories_C.SetRepresentationType
	 */
	struct UBPW_MapFilterCategories_C_SetRepresentationType_Params
	{
	public:
		ERepresentationType                                        mRepresentationType;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MapFilterCategories.BPW_MapFilterCategories_C.SetShowOnMap
	 */
	struct UBPW_MapFilterCategories_C_SetShowOnMap_Params
	{
	public:
		bool                                                       mShowOnMap;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       UpdateActorRepresentationManager;                        // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SI4B[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_MapFilterCategories.BPW_MapFilterCategories_C.GetCategoryTooltip
	 */
	struct UBPW_MapFilterCategories_C_GetCategoryTooltip_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MapFilterCategories.BPW_MapFilterCategories_C.GetCompassButtonTooltip
	 */
	struct UBPW_MapFilterCategories_C_GetCompassButtonTooltip_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MapFilterCategories.BPW_MapFilterCategories_C.GetMapButtonTooltip
	 */
	struct UBPW_MapFilterCategories_C_GetMapButtonTooltip_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MapFilterCategories.BPW_MapFilterCategories_C.SetIsSearchActive
	 */
	struct UBPW_MapFilterCategories_C_SetIsSearchActive_Params
	{
	public:
		bool                                                       IsSearchActive;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NVMM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_MapFilterCategories.BPW_MapFilterCategories_C.HasAnyChildren
	 */
	struct UBPW_MapFilterCategories_C_HasAnyChildren_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MapFilterCategories.BPW_MapFilterCategories_C.SetIsCollapsed
	 */
	struct UBPW_MapFilterCategories_C_SetIsCollapsed_Params
	{
	public:
		bool                                                       mIsCollapsed;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MapFilterCategories.BPW_MapFilterCategories_C.SetText
	 */
	struct UBPW_MapFilterCategories_C_SetText_Params
	{
	public:
		class FText                                                mText;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_MapFilterCategories.BPW_MapFilterCategories_C.ClearChildren
	 */
	struct UBPW_MapFilterCategories_C_ClearChildren_Params
	{	};

	/**
	 * Function BPW_MapFilterCategories.BPW_MapFilterCategories_C.AddChild
	 */
	struct UBPW_MapFilterCategories_C_AddChild_Params
	{
	public:
		class UWidget*                                             Content;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MapFilterCategories.BPW_MapFilterCategories_C.PreConstruct
	 */
	struct UBPW_MapFilterCategories_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MapFilterCategories.BPW_MapFilterCategories_C.Construct
	 */
	struct UBPW_MapFilterCategories_C_Construct_Params
	{	};

	/**
	 * Function BPW_MapFilterCategories.BPW_MapFilterCategories_C.BndEvt__BPW_MapFilterCategories_mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_MapFilterCategories_C_BndEvt__BPW_MapFilterCategories_mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_MapFilterCategories.BPW_MapFilterCategories_C.BndEvt__BPW_MapFilterCategories_mMapButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_MapFilterCategories_C_BndEvt__BPW_MapFilterCategories_mMapButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_MapFilterCategories.BPW_MapFilterCategories_C.BndEvt__BPW_MapFilterCategories_mCompassButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_MapFilterCategories_C_BndEvt__BPW_MapFilterCategories_mCompassButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_MapFilterCategories.BPW_MapFilterCategories_C.BndEvt__BPW_MapFilterCategories_mButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBPW_MapFilterCategories_C_BndEvt__BPW_MapFilterCategories_mButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_MapFilterCategories.BPW_MapFilterCategories_C.BndEvt__BPW_MapFilterCategories_mButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBPW_MapFilterCategories_C_BndEvt__BPW_MapFilterCategories_mButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_MapFilterCategories.BPW_MapFilterCategories_C.ExecuteUbergraph_BPW_MapFilterCategories
	 */
	struct UBPW_MapFilterCategories_C_ExecuteUbergraph_BPW_MapFilterCategories_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MapFilterCategories.BPW_MapFilterCategories_C.OnUnfocusType__DelegateSignature
	 */
	struct UBPW_MapFilterCategories_C_OnUnfocusType__DelegateSignature_Params
	{
	public:
		ERepresentationType                                        Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MapFilterCategories.BPW_MapFilterCategories_C.OnFocusType__DelegateSignature
	 */
	struct UBPW_MapFilterCategories_C_OnFocusType__DelegateSignature_Params
	{
	public:
		ERepresentationType                                        Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MapFilterCategories.BPW_MapFilterCategories_C.OnCompassButtonClicked__DelegateSignature
	 */
	struct UBPW_MapFilterCategories_C_OnCompassButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_MapFilterCategories.BPW_MapFilterCategories_C.OnMapButtonClicked__DelegateSignature
	 */
	struct UBPW_MapFilterCategories_C_OnMapButtonClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
