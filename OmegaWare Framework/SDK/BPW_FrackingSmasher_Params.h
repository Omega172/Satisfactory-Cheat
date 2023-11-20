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
	 * Function BPW_FrackingSmasher.BPW_FrackingSmasher_C.UpdatePowerStats
	 */
	struct UBPW_FrackingSmasher_C_UpdatePowerStats_Params
	{
	public:
		double                                                     Power;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_FrackingSmasher.BPW_FrackingSmasher_C.UpdateFlowrateText
	 */
	struct UBPW_FrackingSmasher_C_UpdateFlowrateText_Params
	{
	public:
		double                                                     Value;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_FrackingSmasher.BPW_FrackingSmasher_C.UpdateNodeIndicators
	 */
	struct UBPW_FrackingSmasher_C_UpdateNodeIndicators_Params
	{
	public:
		int32_t                                                    ConnectedExtractors;                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_FrackingSmasher.BPW_FrackingSmasher_C.UnbindAllEvents
	 */
	struct UBPW_FrackingSmasher_C_UnbindAllEvents_Params
	{	};

	/**
	 * Function BPW_FrackingSmasher.BPW_FrackingSmasher_C.BindAllEvents
	 */
	struct UBPW_FrackingSmasher_C_BindAllEvents_Params
	{	};

	/**
	 * Function BPW_FrackingSmasher.BPW_FrackingSmasher_C.SetWindowTitle
	 */
	struct UBPW_FrackingSmasher_C_SetWindowTitle_Params
	{	};

	/**
	 * Function BPW_FrackingSmasher.BPW_FrackingSmasher_C.DropInventorySlotStack
	 */
	struct UBPW_FrackingSmasher_C_DropInventorySlotStack_Params
	{
	public:
		class UWidget_InventorySlot_C*                             InventorySlot;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		bool                                                       WasStackMoved;                                           // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M4TN[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_FrackingSmasher.BPW_FrackingSmasher_C.Construct
	 */
	struct UBPW_FrackingSmasher_C_Construct_Params
	{	};

	/**
	 * Function BPW_FrackingSmasher.BPW_FrackingSmasher_C.Destruct
	 */
	struct UBPW_FrackingSmasher_C_Destruct_Params
	{	};

	/**
	 * Function BPW_FrackingSmasher.BPW_FrackingSmasher_C.Event OnConnectedExtractorCountChanged
	 */
	struct UBPW_FrackingSmasher_C_EventOnConnectedExtractorCountChanged_Params
	{
	public:
		int32_t                                                    connectedExtractorCount;                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_FrackingSmasher.BPW_FrackingSmasher_C.Event OnCurrentPotentialChanged
	 */
	struct UBPW_FrackingSmasher_C_EventOnCurrentPotentialChanged_Params
	{
	public:
		float                                                      currentPotential;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_FrackingSmasher.BPW_FrackingSmasher_C.OnHasStandbyChanged
	 */
	struct UBPW_FrackingSmasher_C_OnHasStandbyChanged_Params
	{
	public:
		bool                                                       State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_FrackingSmasher.BPW_FrackingSmasher_C.BndEvt__mStandbyButton_K2Node_ComponentBoundEvent_2_OnStandbyClicked__DelegateSignature
	 */
	struct UBPW_FrackingSmasher_C_BndEvt__mStandbyButton_K2Node_ComponentBoundEvent_2_OnStandbyClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_FrackingSmasher.BPW_FrackingSmasher_C.ExecuteUbergraph_BPW_FrackingSmasher
	 */
	struct UBPW_FrackingSmasher_C_ExecuteUbergraph_BPW_FrackingSmasher_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2B5T[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
