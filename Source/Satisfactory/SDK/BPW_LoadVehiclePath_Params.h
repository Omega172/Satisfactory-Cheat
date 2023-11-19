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
	 * Function BPW_LoadVehiclePath.BPW_LoadVehiclePath_C.Clear Map Data
	 */
	struct UBPW_LoadVehiclePath_C_ClearMapData_Params
	{
	public:
		class UBPW_VehiclePathMap_C*                               Map;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class UCanvasPanel*                                        IconCanvas;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_LoadVehiclePath.BPW_LoadVehiclePath_C.Display Map Data
	 */
	struct UBPW_LoadVehiclePath_C_DisplayMapData_Params
	{
	public:
		class UBPW_VehiclePathMap_C*                               Map;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class UCanvasPanel*                                        IconCanvas;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		struct FDrivingTargetListMapData                           Data;                                                    // 0x0010(0x0068)  (BlueprintVisible, BlueprintReadOnly, Parm)
		double                                                     MapSize;                                                 // 0x0078(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_LoadVehiclePath.BPW_LoadVehiclePath_C.SearchPaths
	 */
	struct UBPW_LoadVehiclePath_C_SearchPaths_Params
	{
	public:
		class FString                                              textFilter;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UBPW_VehiclePaths_List_C*                            VehicleList;                                             // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		bool                                                       filterOnVehicleType;                                     // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7ZN3[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AFGSavedWheeledVehiclePath*                          PathToIgnore;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_LoadVehiclePath.BPW_LoadVehiclePath_C.Construct
	 */
	struct UBPW_LoadVehiclePath_C_Construct_Params
	{	};

	/**
	 * Function BPW_LoadVehiclePath.BPW_LoadVehiclePath_C.BndEvt__mSaveButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UBPW_LoadVehiclePath_C_BndEvt__mSaveButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_LoadVehiclePath.BPW_LoadVehiclePath_C.BndEvt__mCancelButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UBPW_LoadVehiclePath_C_BndEvt__mCancelButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_LoadVehiclePath.BPW_LoadVehiclePath_C.BndEvt__mSearchBox_K2Node_ComponentBoundEvent_2_OnTextChanged__DelegateSignature
	 */
	struct UBPW_LoadVehiclePath_C_BndEvt__mSearchBox_K2Node_ComponentBoundEvent_2_OnTextChanged__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_LoadVehiclePath.BPW_LoadVehiclePath_C.Event Delete Path In All Paths List
	 */
	struct UBPW_LoadVehiclePath_C_EventDeletePathInAllPathsList_Params
	{
	public:
		bool                                                       ConfirmClicked;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_LoadVehiclePath.BPW_LoadVehiclePath_C.BndEvt__mPathList_K2Node_ComponentBoundEvent_6_OnItemSelectionChanged__DelegateSignature
	 */
	struct UBPW_LoadVehiclePath_C_BndEvt__mPathList_K2Node_ComponentBoundEvent_6_OnItemSelectionChanged__DelegateSignature_Params
	{
	public:
		class UObject*                                             Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsSelected;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_LoadVehiclePath.BPW_LoadVehiclePath_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_7_OnTabButtonClicked__DelegateSignature
	 */
	struct UBPW_LoadVehiclePath_C_BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_7_OnTabButtonClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    ButtonIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_LoadVehiclePath.BPW_LoadVehiclePath_C.BndEvt__mAllPathsSearchbox_K2Node_ComponentBoundEvent_9_OnTextChanged__DelegateSignature
	 */
	struct UBPW_LoadVehiclePath_C_BndEvt__mAllPathsSearchbox_K2Node_ComponentBoundEvent_9_OnTextChanged__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_LoadVehiclePath.BPW_LoadVehiclePath_C.BndEvt__mPathlistAllVehicles_K2Node_ComponentBoundEvent_3_OnItemSelectionChanged__DelegateSignature
	 */
	struct UBPW_LoadVehiclePath_C_BndEvt__mPathlistAllVehicles_K2Node_ComponentBoundEvent_3_OnItemSelectionChanged__DelegateSignature_Params
	{
	public:
		class UObject*                                             Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsSelected;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_LoadVehiclePath.BPW_LoadVehiclePath_C.BndEvt__mDeleteButtonAllPaths_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	 */
	struct UBPW_LoadVehiclePath_C_BndEvt__mDeleteButtonAllPaths_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_LoadVehiclePath.BPW_LoadVehiclePath_C.BndEvt__mCancelButtonAllPaths_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
	 */
	struct UBPW_LoadVehiclePath_C_BndEvt__mCancelButtonAllPaths_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_LoadVehiclePath.BPW_LoadVehiclePath_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_8_OnClose__DelegateSignature
	 */
	struct UBPW_LoadVehiclePath_C_BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_8_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_LoadVehiclePath.BPW_LoadVehiclePath_C.Destruct
	 */
	struct UBPW_LoadVehiclePath_C_Destruct_Params
	{	};

	/**
	 * Function BPW_LoadVehiclePath.BPW_LoadVehiclePath_C.BndEvt__mLoadButton_1_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	 */
	struct UBPW_LoadVehiclePath_C_BndEvt__mLoadButton_1_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_LoadVehiclePath.BPW_LoadVehiclePath_C.Event Delete Path This Vehicle List
	 */
	struct UBPW_LoadVehiclePath_C_EventDeletePathThisVehicleList_Params
	{
	public:
		bool                                                       ConfirmClicked;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_LoadVehiclePath.BPW_LoadVehiclePath_C.OnEscapePressed
	 */
	struct UBPW_LoadVehiclePath_C_OnEscapePressed_Params
	{	};

	/**
	 * Function BPW_LoadVehiclePath.BPW_LoadVehiclePath_C.ExecuteUbergraph_BPW_LoadVehiclePath
	 */
	struct UBPW_LoadVehiclePath_C_ExecuteUbergraph_BPW_LoadVehiclePath_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0LS6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_LoadVehiclePath.BPW_LoadVehiclePath_C.OnClosed__DelegateSignature
	 */
	struct UBPW_LoadVehiclePath_C_OnClosed__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
