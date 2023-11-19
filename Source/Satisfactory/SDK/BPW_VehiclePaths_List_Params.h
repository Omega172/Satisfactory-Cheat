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
	 * Function BPW_VehiclePaths_List.BPW_VehiclePaths_List_C.BndEvt__mListView_K2Node_ComponentBoundEvent_0_OnListItemSelectionChangedDynamic__DelegateSignature
	 */
	struct UBPW_VehiclePaths_List_C_BndEvt__mListView_K2Node_ComponentBoundEvent_0_OnListItemSelectionChangedDynamic__DelegateSignature_Params
	{
	public:
		class UObject*                                             Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsSelected;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_VehiclePaths_List.BPW_VehiclePaths_List_C.Event Add Item To List
	 */
	struct UBPW_VehiclePaths_List_C_EventAddItemToList_Params
	{
	public:
		class UObject*                                             Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_VehiclePaths_List.BPW_VehiclePaths_List_C.Event Clear List
	 */
	struct UBPW_VehiclePaths_List_C_EventClearList_Params
	{	};

	/**
	 * Function BPW_VehiclePaths_List.BPW_VehiclePaths_List_C.Event Collapse Vehicle Type Row
	 */
	struct UBPW_VehiclePaths_List_C_EventCollapseVehicleTypeRow_Params
	{
	public:
		bool                                                       isCollapsed;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_VehiclePaths_List.BPW_VehiclePaths_List_C.PreConstruct
	 */
	struct UBPW_VehiclePaths_List_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_VehiclePaths_List.BPW_VehiclePaths_List_C.BndEvt__mListView_K2Node_ComponentBoundEvent_2_OnListEntryGeneratedDynamic__DelegateSignature
	 */
	struct UBPW_VehiclePaths_List_C_BndEvt__mListView_K2Node_ComponentBoundEvent_2_OnListEntryGeneratedDynamic__DelegateSignature_Params
	{
	public:
		class UUserWidget*                                         Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_VehiclePaths_List.BPW_VehiclePaths_List_C.ExecuteUbergraph_BPW_VehiclePaths_List
	 */
	struct UBPW_VehiclePaths_List_C_ExecuteUbergraph_BPW_VehiclePaths_List_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZZ6D[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_VehiclePaths_List.BPW_VehiclePaths_List_C.OnItemSelectionChanged__DelegateSignature
	 */
	struct UBPW_VehiclePaths_List_C_OnItemSelectionChanged__DelegateSignature_Params
	{
	public:
		class UObject*                                             Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsSelected;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
