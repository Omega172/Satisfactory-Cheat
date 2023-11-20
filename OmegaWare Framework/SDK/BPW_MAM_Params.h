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
	 * Function BPW_MAM.BPW_MAM_C.WidgetFactory
	 */
	struct UBPW_MAM_C_WidgetFactory_Params
	{
	public:
		class UClass*                                              PopupClass;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		TArray<class UUserWidget*>                                 out_widgets;                                             // 0x0008(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function BPW_MAM.BPW_MAM_C.SchematicsPurchased
	 */
	struct UBPW_MAM_C_SchematicsPurchased_Params
	{
	public:
		class UClass*                                              schematic;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MAM.BPW_MAM_C.OnHarddriveButtonClicked
	 */
	struct UBPW_MAM_C_OnHarddriveButtonClicked_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LYPU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget_ListButton_C*                                ListButton;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MAM.BPW_MAM_C.OnPopupClosed
	 */
	struct UBPW_MAM_C_OnPopupClosed_Params
	{
	public:
		bool                                                       confirm;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L1BW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_MAM.BPW_MAM_C.HandleCompletedResearch
	 */
	struct UBPW_MAM_C_HandleCompletedResearch_Params
	{
	public:
		class UClass*                                              schematic;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MAM.BPW_MAM_C.OnResearchStateChanged
	 */
	struct UBPW_MAM_C_OnResearchStateChanged_Params
	{
	public:
		EResearchState                                             researchState;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SOCL[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_MAM.BPW_MAM_C.ConvertFloatTimeToText
	 */
	struct UBPW_MAM_C_ConvertFloatTimeToText_Params
	{
	public:
		double                                                     Seconds;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Result;                                                  // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BPW_MAM.BPW_MAM_C.UpdateResearchTimer
	 */
	struct UBPW_MAM_C_UpdateResearchTimer_Params
	{	};

	/**
	 * Function BPW_MAM.BPW_MAM_C.OnGetTreeInfoWidget
	 */
	struct UBPW_MAM_C_OnGetTreeInfoWidget_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MAM.BPW_MAM_C.OnListButtonUnhovered
	 */
	struct UBPW_MAM_C_OnListButtonUnhovered_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BIXM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget_ListButton_C*                                ListButton;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MAM.BPW_MAM_C.OnListButtonHovered
	 */
	struct UBPW_MAM_C_OnListButtonHovered_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CSR8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget_ListButton_C*                                ListButton;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MAM.BPW_MAM_C.OnResearchStarted
	 */
	struct UBPW_MAM_C_OnResearchStarted_Params
	{
	public:
		class UClass*                                              schematic;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MAM.BPW_MAM_C.InitResearchListButtons
	 */
	struct UBPW_MAM_C_InitResearchListButtons_Params
	{	};

	/**
	 * Function BPW_MAM.BPW_MAM_C.DropInventorySlotStack
	 */
	struct UBPW_MAM_C_DropInventorySlotStack_Params
	{
	public:
		class UWidget_InventorySlot_C*                             InventorySlot;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		bool                                                       WasStackMoved;                                           // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MAM.BPW_MAM_C.Cleanup
	 */
	struct UBPW_MAM_C_Cleanup_Params
	{	};

	/**
	 * Function BPW_MAM.BPW_MAM_C.Destruct
	 */
	struct UBPW_MAM_C_Destruct_Params
	{	};

	/**
	 * Function BPW_MAM.BPW_MAM_C.Init
	 */
	struct UBPW_MAM_C_Init_Params
	{	};

	/**
	 * Function BPW_MAM.BPW_MAM_C.Construct
	 */
	struct UBPW_MAM_C_Construct_Params
	{	};

	/**
	 * Function BPW_MAM.BPW_MAM_C.OnResearchListButtonClicked
	 */
	struct UBPW_MAM_C_OnResearchListButtonClicked_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RNR7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget_ListButton_C*                                ListButton;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MAM.BPW_MAM_C.BndEvt__BPW_MAMTree_Ingame_K2Node_ComponentBoundEvent_1_OnResearchSelectedSchematic__DelegateSignature
	 */
	struct UBPW_MAM_C_BndEvt__BPW_MAMTree_Ingame_K2Node_ComponentBoundEvent_1_OnResearchSelectedSchematic__DelegateSignature_Params
	{
	public:
		class UClass*                                              schematic;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MAM.BPW_MAM_C.NotifyPopupClosed
	 */
	struct UBPW_MAM_C_NotifyPopupClosed_Params
	{
	public:
		class UClass*                                              PopupClass;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		int32_t                                                    exitCode;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MAM.BPW_MAM_C.BndEvt__BPW_MAM_HardDriveScanner_K2Node_ComponentBoundEvent_2_OnScanStarted__DelegateSignature
	 */
	struct UBPW_MAM_C_BndEvt__BPW_MAM_HardDriveScanner_K2Node_ComponentBoundEvent_2_OnScanStarted__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_MAM.BPW_MAM_C.ExecuteUbergraph_BPW_MAM
	 */
	struct UBPW_MAM_C_ExecuteUbergraph_BPW_MAM_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XZ0Q[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
