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
	 * Function BPW_Input_PartsList.BPW_Input_PartsList_C.SetMaxItemAmount
	 */
	struct UBPW_Input_PartsList_C_SetMaxItemAmount_Params
	{
	public:
		int32_t                                                    mMaxItemAmount;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Input_PartsList.BPW_Input_PartsList_C.UpdateAddButtonVisibility
	 */
	struct UBPW_Input_PartsList_C_UpdateAddButtonVisibility_Params
	{	};

	/**
	 * Function BPW_Input_PartsList.BPW_Input_PartsList_C.SetAddButtonVisibility
	 */
	struct UBPW_Input_PartsList_C_SetAddButtonVisibility_Params
	{
	public:
		bool                                                       mIsVisible;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Input_PartsList.BPW_Input_PartsList_C.SendListChangedDelegate
	 */
	struct UBPW_Input_PartsList_C_SendListChangedDelegate_Params
	{	};

	/**
	 * Function BPW_Input_PartsList.BPW_Input_PartsList_C.ClearList
	 */
	struct UBPW_Input_PartsList_C_ClearList_Params
	{	};

	/**
	 * Function BPW_Input_PartsList.BPW_Input_PartsList_C.SetName
	 */
	struct UBPW_Input_PartsList_C_SetName_Params
	{
	public:
		class FText                                                mName;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_Input_PartsList.BPW_Input_PartsList_C.SetUseBackground
	 */
	struct UBPW_Input_PartsList_C_SetUseBackground_Params
	{
	public:
		bool                                                       mUseBackground;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Input_PartsList.BPW_Input_PartsList_C.CreateList
	 */
	struct UBPW_Input_PartsList_C_CreateList_Params
	{
	public:
		TArray<class UClass*>                                      descriptors;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_Input_PartsList.BPW_Input_PartsList_C.SetDescriptors
	 */
	struct UBPW_Input_PartsList_C_SetDescriptors_Params
	{
	public:
		TArray<class UClass*>                                      mDescriptors;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_Input_PartsList.BPW_Input_PartsList_C.AddItem
	 */
	struct UBPW_Input_PartsList_C_AddItem_Params
	{
	public:
		class UClass*                                              mCachedDescriptor;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Input_PartsList.BPW_Input_PartsList_C.GetList
	 */
	struct UBPW_Input_PartsList_C_GetList_Params
	{
	public:
		TArray<class UClass*>                                      Items;                                                   // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BPW_Input_PartsList.BPW_Input_PartsList_C.PreConstruct
	 */
	struct UBPW_Input_PartsList_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Input_PartsList.BPW_Input_PartsList_C.Construct
	 */
	struct UBPW_Input_PartsList_C_Construct_Params
	{	};

	/**
	 * Function BPW_Input_PartsList.BPW_Input_PartsList_C.BndEvt__mAddButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UBPW_Input_PartsList_C_BndEvt__mAddButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_Input_PartsList.BPW_Input_PartsList_C.ExecuteUbergraph_BPW_Input_PartsList
	 */
	struct UBPW_Input_PartsList_C_ExecuteUbergraph_BPW_Input_PartsList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Input_PartsList.BPW_Input_PartsList_C.OnListChanged__DelegateSignature
	 */
	struct UBPW_Input_PartsList_C_OnListChanged__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
