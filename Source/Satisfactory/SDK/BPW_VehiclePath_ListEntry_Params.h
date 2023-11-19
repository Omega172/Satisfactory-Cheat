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
	 * Function BPW_VehiclePath_ListEntry.BPW_VehiclePath_ListEntry_C.SetIsSelected
	 */
	struct UBPW_VehiclePath_ListEntry_C_SetIsSelected_Params
	{
	public:
		bool                                                       mIsSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_VehiclePath_ListEntry.BPW_VehiclePath_ListEntry_C.GetFuelPerTrip
	 */
	struct UBPW_VehiclePath_ListEntry_C_GetFuelPerTrip_Params
	{
	public:
		class AFGSavedWheeledVehiclePath*                          VehiclePath;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_VehiclePath_ListEntry.BPW_VehiclePath_ListEntry_C.GetIsInUseByThisVehicle
	 */
	struct UBPW_VehiclePath_ListEntry_C_GetIsInUseByThisVehicle_Params
	{
	public:
		class AFGSavedWheeledVehiclePath*                          Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_VehiclePath_ListEntry.BPW_VehiclePath_ListEntry_C.GetIsInUse
	 */
	struct UBPW_VehiclePath_ListEntry_C_GetIsInUse_Params
	{
	public:
		class AFGSavedWheeledVehiclePath*                          VehiclePath;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_VehiclePath_ListEntry.BPW_VehiclePath_ListEntry_C.GetDistanceToVehicle
	 */
	struct UBPW_VehiclePath_ListEntry_C_GetDistanceToVehicle_Params
	{
	public:
		class AFGSavedWheeledVehiclePath*                          VehiclePath;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_VehiclePath_ListEntry.BPW_VehiclePath_ListEntry_C.GetVehicleType
	 */
	struct UBPW_VehiclePath_ListEntry_C_GetVehicleType_Params
	{
	public:
		class AFGSavedWheeledVehiclePath*                          VehiclePath;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_VehiclePath_ListEntry.BPW_VehiclePath_ListEntry_C.GetPathName
	 */
	struct UBPW_VehiclePath_ListEntry_C_GetPathName_Params
	{
	public:
		class AFGSavedWheeledVehiclePath*                          VehiclePath;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_VehiclePath_ListEntry.BPW_VehiclePath_ListEntry_C.GetSavedVehiclePath
	 */
	struct UBPW_VehiclePath_ListEntry_C_GetSavedVehiclePath_Params
	{
	public:
		class UObject*                                             ListObject;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_VehiclePath_ListEntry.BPW_VehiclePath_ListEntry_C.GetPathLength
	 */
	struct UBPW_VehiclePath_ListEntry_C_GetPathLength_Params
	{
	public:
		class AFGSavedWheeledVehiclePath*                          VehiclePath;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_VehiclePath_ListEntry.BPW_VehiclePath_ListEntry_C.UpdateButton
	 */
	struct UBPW_VehiclePath_ListEntry_C_UpdateButton_Params
	{
	public:
		class AFGSavedWheeledVehiclePath*                          mSavedVehiclePath;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_VehiclePath_ListEntry.BPW_VehiclePath_ListEntry_C.BP_OnEntryReleased
	 */
	struct UBPW_VehiclePath_ListEntry_C_BP_OnEntryReleased_Params
	{	};

	/**
	 * Function BPW_VehiclePath_ListEntry.BPW_VehiclePath_ListEntry_C.BP_OnItemExpansionChanged
	 */
	struct UBPW_VehiclePath_ListEntry_C_BP_OnItemExpansionChanged_Params
	{
	public:
		bool                                                       bIsExpanded;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_VehiclePath_ListEntry.BPW_VehiclePath_ListEntry_C.OnListItemObjectSet
	 */
	struct UBPW_VehiclePath_ListEntry_C_OnListItemObjectSet_Params
	{
	public:
		class UObject*                                             ListItemObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_VehiclePath_ListEntry.BPW_VehiclePath_ListEntry_C.BP_OnItemSelectionChanged
	 */
	struct UBPW_VehiclePath_ListEntry_C_BP_OnItemSelectionChanged_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_VehiclePath_ListEntry.BPW_VehiclePath_ListEntry_C.Event Collapse Vehicle Type Row
	 */
	struct UBPW_VehiclePath_ListEntry_C_EventCollapseVehicleTypeRow_Params
	{
	public:
		bool                                                       isCollapsed;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_VehiclePath_ListEntry.BPW_VehiclePath_ListEntry_C.PreConstruct
	 */
	struct UBPW_VehiclePath_ListEntry_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_VehiclePath_ListEntry.BPW_VehiclePath_ListEntry_C.OnMouseEnter
	 */
	struct UBPW_VehiclePath_ListEntry_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_VehiclePath_ListEntry.BPW_VehiclePath_ListEntry_C.OnMouseLeave
	 */
	struct UBPW_VehiclePath_ListEntry_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_VehiclePath_ListEntry.BPW_VehiclePath_ListEntry_C.ExecuteUbergraph_BPW_VehiclePath_ListEntry
	 */
	struct UBPW_VehiclePath_ListEntry_C_ExecuteUbergraph_BPW_VehiclePath_ListEntry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
