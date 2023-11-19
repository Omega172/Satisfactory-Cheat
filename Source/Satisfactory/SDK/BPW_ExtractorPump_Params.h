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
	 * Function BPW_ExtractorPump.BPW_ExtractorPump_C.DropInventorySlotStack
	 */
	struct UBPW_ExtractorPump_C_DropInventorySlotStack_Params
	{
	public:
		class UWidget_InventorySlot_C*                             InventorySlot;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		bool                                                       WasStackMoved;                                           // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DPHR[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_ExtractorPump.BPW_ExtractorPump_C.UpdateWarning
	 */
	struct UBPW_ExtractorPump_C_UpdateWarning_Params
	{	};

	/**
	 * Function BPW_ExtractorPump.BPW_ExtractorPump_C.SetupStaticInfo
	 */
	struct UBPW_ExtractorPump_C_SetupStaticInfo_Params
	{	};

	/**
	 * Function BPW_ExtractorPump.BPW_ExtractorPump_C.UpdateFluidTank
	 */
	struct UBPW_ExtractorPump_C_UpdateFluidTank_Params
	{	};

	/**
	 * Function BPW_ExtractorPump.BPW_ExtractorPump_C.UpdateFlowRate
	 */
	struct UBPW_ExtractorPump_C_UpdateFlowRate_Params
	{	};

	/**
	 * Function BPW_ExtractorPump.BPW_ExtractorPump_C.Construct
	 */
	struct UBPW_ExtractorPump_C_Construct_Params
	{	};

	/**
	 * Function BPW_ExtractorPump.BPW_ExtractorPump_C.BndEvt__Widget_StandbyButton_K2Node_ComponentBoundEvent_1_OnStandbyClicked__DelegateSignature
	 */
	struct UBPW_ExtractorPump_C_BndEvt__Widget_StandbyButton_K2Node_ComponentBoundEvent_1_OnStandbyClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ExtractorPump.BPW_ExtractorPump_C.BndEvt__mBuildableExtractor_K2Node_ComponentBoundEvent_2_BuildingStateChanged__DelegateSignature
	 */
	struct UBPW_ExtractorPump_C_BndEvt__mBuildableExtractor_K2Node_ComponentBoundEvent_2_BuildingStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ExtractorPump.BPW_ExtractorPump_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature
	 */
	struct UBPW_ExtractorPump_C_BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ExtractorPump.BPW_ExtractorPump_C.Destruct
	 */
	struct UBPW_ExtractorPump_C_Destruct_Params
	{	};

	/**
	 * Function BPW_ExtractorPump.BPW_ExtractorPump_C.OnStandbyHasChanged
	 */
	struct UBPW_ExtractorPump_C_OnStandbyHasChanged_Params
	{
	public:
		bool                                                       State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ExtractorPump.BPW_ExtractorPump_C.OnCustomTick
	 */
	struct UBPW_ExtractorPump_C_OnCustomTick_Params
	{
	public:
		float                                                      UpdateTime;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ExtractorPump.BPW_ExtractorPump_C.Tick
	 */
	struct UBPW_ExtractorPump_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ExtractorPump.BPW_ExtractorPump_C.OnInteractoObjectLoaded
	 */
	struct UBPW_ExtractorPump_C_OnInteractoObjectLoaded_Params
	{
	public:
		class AActor*                                              replicationDetailActorOwner;                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ExtractorPump.BPW_ExtractorPump_C.ExecuteUbergraph_BPW_ExtractorPump
	 */
	struct UBPW_ExtractorPump_C_ExecuteUbergraph_BPW_ExtractorPump_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
