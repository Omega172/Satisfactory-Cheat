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
	 * Function Widget_Overclock.Widget_Overclock_C.FillSlotsForPotential
	 */
	struct UWidget_Overclock_C_FillSlotsForPotential_Params
	{
	public:
		double                                                     potential;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ResultingNumOfFilledSlots;                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Overclock.Widget_Overclock_C.GetMaxOverclockOfGivenChards
	 */
	struct UWidget_Overclock_C_GetMaxOverclockOfGivenChards_Params
	{
	public:
		int32_t                                                    NumOfChards;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RSME[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     potential;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Overclock.Widget_Overclock_C.GetNumOfMissingCrystalsForPotential
	 */
	struct UWidget_Overclock_C_GetNumOfMissingCrystalsForPotential_Params
	{
	public:
		double                                                     potential;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    MissingSlots;                                            // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_C88H[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_Overclock.Widget_Overclock_C.FillShardSlots
	 */
	struct UWidget_Overclock_C_FillShardSlots_Params
	{
	public:
		int32_t                                                    NumOfSlotsToFill;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SlotsFilled;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Overclock.Widget_Overclock_C.GetUnlockedOverclockSlots
	 */
	struct UWidget_Overclock_C_GetUnlockedOverclockSlots_Params
	{
	public:
		TArray<class UWidget_InventorySlot_C*>                     Slots;                                                   // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function Widget_Overclock.Widget_Overclock_C.SetSuffix
	 */
	struct UWidget_Overclock_C_SetSuffix_Params
	{
	public:
		class FText                                                Suffix;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_Overclock.Widget_Overclock_C.UpdateTargetProductionSpeed
	 */
	struct UWidget_Overclock_C_UpdateTargetProductionSpeed_Params
	{	};

	/**
	 * Function Widget_Overclock.Widget_Overclock_C.SetDefaultProductionSpeed
	 */
	struct UWidget_Overclock_C_SetDefaultProductionSpeed_Params
	{	};

	/**
	 * Function Widget_Overclock.Widget_Overclock_C.OnMouseButtonDown
	 */
	struct UWidget_Overclock_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_Overclock.Widget_Overclock_C.UpdateDropArea
	 */
	struct UWidget_Overclock_C_UpdateDropArea_Params
	{
	public:
		class UWidget_CostSlotWrapper_C*                           NewActiveCostslot;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Overclock.Widget_Overclock_C.SetPercentText
	 */
	struct UWidget_Overclock_C_SetPercentText_Params
	{	};

	/**
	 * Function Widget_Overclock.Widget_Overclock_C.CheckIsOverclockUnlocked
	 */
	struct UWidget_Overclock_C_CheckIsOverclockUnlocked_Params
	{	};

	/**
	 * Function Widget_Overclock.Widget_Overclock_C.SetCrystalSlotUsable
	 */
	struct UWidget_Overclock_C_SetCrystalSlotUsable_Params
	{
	public:
		int32_t                                                    SlotIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EG43[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget_CostSlotWrapper_C*                           CostSlot;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Overclock.Widget_Overclock_C.IsCrystalSlotEnabled
	 */
	struct UWidget_Overclock_C_IsCrystalSlotEnabled_Params
	{
	public:
		int32_t                                                    SlotIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsEnabled;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Overclock.Widget_Overclock_C.InitCostSlots
	 */
	struct UWidget_Overclock_C_InitCostSlots_Params
	{
	public:
		int32_t                                                    idx;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XRDF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget_CostSlotWrapper_C*                           CostSlot;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsValid;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Overclock.Widget_Overclock_C.SetActiveProgressbars
	 */
	struct UWidget_Overclock_C_SetActiveProgressbars_Params
	{	};

	/**
	 * Function Widget_Overclock.Widget_Overclock_C.GetClampedSliderValue
	 */
	struct UWidget_Overclock_C_GetClampedSliderValue_Params
	{
	public:
		double                                                     ClampedOvercklock;                                       // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Overclock.Widget_Overclock_C.ScaleToOverclock
	 */
	struct UWidget_Overclock_C_ScaleToOverclock_Params
	{
	public:
		double                                                     NormalizedOverclock;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ScaledOverclock;                                         // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Overclock.Widget_Overclock_C.NormalizeOverclock
	 */
	struct UWidget_Overclock_C_NormalizeOverclock_Params
	{
	public:
		double                                                     ScaledOverclock;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     NormalizedOverclock;                                     // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Overclock.Widget_Overclock_C.GetPercentText
	 */
	struct UWidget_Overclock_C_GetPercentText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_Overclock.Widget_Overclock_C.GetMAXColor
	 */
	struct UWidget_Overclock_C_GetMAXColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0014)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_Overclock.Widget_Overclock_C.Get200%Color
	 */
	struct UWidget_Overclock_C_Get200Color_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0014)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_Overclock.Widget_Overclock_C.Get150%Color
	 */
	struct UWidget_Overclock_C_Get150Color_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0014)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_Overclock.Widget_Overclock_C.Get100%Color
	 */
	struct UWidget_Overclock_C_Get100Color_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0014)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_Overclock.Widget_Overclock_C.Get0%Color
	 */
	struct UWidget_Overclock_C_Get0Color_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0014)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_Overclock.Widget_Overclock_C.SetBarValue
	 */
	struct UWidget_Overclock_C_SetBarValue_Params
	{	};

	/**
	 * Function Widget_Overclock.Widget_Overclock_C.Construct
	 */
	struct UWidget_Overclock_C_Construct_Params
	{	};

	/**
	 * Function Widget_Overclock.Widget_Overclock_C.SetupOverclock
	 */
	struct UWidget_Overclock_C_SetupOverclock_Params
	{
	public:
		double                                                     OvecklockAmount;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Overclock.Widget_Overclock_C.SetupCostslots
	 */
	struct UWidget_Overclock_C_SetupCostslots_Params
	{	};

	/**
	 * Function Widget_Overclock.Widget_Overclock_C.Tick
	 */
	struct UWidget_Overclock_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Overclock.Widget_Overclock_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UWidget_Overclock_C_BndEvt__Slider_0_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Overclock.Widget_Overclock_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature
	 */
	struct UWidget_Overclock_C_BndEvt__Slider_0_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_Overclock.Widget_Overclock_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_3_OnControllerCaptureEndEvent__DelegateSignature
	 */
	struct UWidget_Overclock_C_BndEvt__Slider_0_K2Node_ComponentBoundEvent_3_OnControllerCaptureEndEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_Overclock.Widget_Overclock_C.BndEvt__PercentText_K2Node_ComponentBoundEvent_5_OnEditableTextCommittedEvent__DelegateSignature
	 */
	struct UWidget_Overclock_C_BndEvt__PercentText_K2Node_ComponentBoundEvent_5_OnEditableTextCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Overclock.Widget_Overclock_C.OnPercentageTextConfirmed
	 */
	struct UWidget_Overclock_C_OnPercentageTextConfirmed_Params
	{
	public:
		double                                                     Value;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Overclock.Widget_Overclock_C.OnMouseEnter
	 */
	struct UWidget_Overclock_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Widget_Overclock.Widget_Overclock_C.OnMouseLeave
	 */
	struct UWidget_Overclock_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Widget_Overclock.Widget_Overclock_C.BndEvt__MainSlider_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature
	 */
	struct UWidget_Overclock_C_BndEvt__MainSlider_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_Overclock.Widget_Overclock_C.BndEvt__mPartsPerMinutes_K2Node_ComponentBoundEvent_6_OnEditableTextCommittedEvent__DelegateSignature
	 */
	struct UWidget_Overclock_C_BndEvt__mPartsPerMinutes_K2Node_ComponentBoundEvent_6_OnEditableTextCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Overclock.Widget_Overclock_C.PreConstruct
	 */
	struct UWidget_Overclock_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Overclock.Widget_Overclock_C.SetOverclockOnServer
	 */
	struct UWidget_Overclock_C_SetOverclockOnServer_Params
	{	};

	/**
	 * Function Widget_Overclock.Widget_Overclock_C.SetupOverclockWidget
	 */
	struct UWidget_Overclock_C_SetupOverclockWidget_Params
	{	};

	/**
	 * Function Widget_Overclock.Widget_Overclock_C.RetriggerConstruct
	 */
	struct UWidget_Overclock_C_RetriggerConstruct_Params
	{	};

	/**
	 * Function Widget_Overclock.Widget_Overclock_C.UpdateOverlclockWidget
	 */
	struct UWidget_Overclock_C_UpdateOverlclockWidget_Params
	{
	public:
		class UClass*                                              ItemClass;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    numRemoved;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Overclock.Widget_Overclock_C.SetOvercklock
	 */
	struct UWidget_Overclock_C_SetOvercklock_Params
	{
	public:
		double                                                     PendingPotential;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Overclock.Widget_Overclock_C.SetOverclockAndAddCrystals
	 */
	struct UWidget_Overclock_C_SetOverclockAndAddCrystals_Params
	{
	public:
		double                                                     PendingPotential;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Overclock.Widget_Overclock_C.BndEvt__Widget_Overclock_mPartsPerMinutesInput_K2Node_ComponentBoundEvent_4_OnEditableTextChangedEvent__DelegateSignature
	 */
	struct UWidget_Overclock_C_BndEvt__Widget_Overclock_mPartsPerMinutesInput_K2Node_ComponentBoundEvent_4_OnEditableTextChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Widget_Overclock.Widget_Overclock_C.BndEvt__Widget_Overclock_PercentText_K2Node_ComponentBoundEvent_7_OnEditableTextChangedEvent__DelegateSignature
	 */
	struct UWidget_Overclock_C_BndEvt__Widget_Overclock_PercentText_K2Node_ComponentBoundEvent_7_OnEditableTextChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Widget_Overclock.Widget_Overclock_C.ExecuteUbergraph_Widget_Overclock
	 */
	struct UWidget_Overclock_C_ExecuteUbergraph_Widget_Overclock_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PQL0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_Overclock.Widget_Overclock_C.UpdateBarFill__DelegateSignature
	 */
	struct UWidget_Overclock_C_UpdateBarFill__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
