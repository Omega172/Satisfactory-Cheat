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
	 * Function BPW_RadarTowerOtherScannables.BPW_RadarTowerOtherScannables_C.OnMouseButtonDown
	 */
	struct UBPW_RadarTowerOtherScannables_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BPW_RadarTowerOtherScannables.BPW_RadarTowerOtherScannables_C.CreateRightClickMenu
	 */
	struct UBPW_RadarTowerOtherScannables_C_CreateRightClickMenu_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_RadarTowerOtherScannables.BPW_RadarTowerOtherScannables_C.SetDescriptor
	 */
	struct UBPW_RadarTowerOtherScannables_C_SetDescriptor_Params
	{
	public:
		class UClass*                                              mDescriptor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_RadarTowerOtherScannables.BPW_RadarTowerOtherScannables_C.PreConstruct
	 */
	struct UBPW_RadarTowerOtherScannables_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_RadarTowerOtherScannables.BPW_RadarTowerOtherScannables_C.BndEvt__BPW_RadarTowerOtherScannables_mHoverButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBPW_RadarTowerOtherScannables_C_BndEvt__BPW_RadarTowerOtherScannables_mHoverButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_RadarTowerOtherScannables.BPW_RadarTowerOtherScannables_C.BndEvt__BPW_RadarTowerOtherScannables_mRightClickMenu_K2Node_ComponentBoundEvent_2_OnMenuOpenChangedEvent__DelegateSignature
	 */
	struct UBPW_RadarTowerOtherScannables_C_BndEvt__BPW_RadarTowerOtherScannables_mRightClickMenu_K2Node_ComponentBoundEvent_2_OnMenuOpenChangedEvent__DelegateSignature_Params
	{
	public:
		bool                                                       bIsOpen;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_RadarTowerOtherScannables.BPW_RadarTowerOtherScannables_C.ExecuteUbergraph_BPW_RadarTowerOtherScannables
	 */
	struct UBPW_RadarTowerOtherScannables_C_ExecuteUbergraph_BPW_RadarTowerOtherScannables_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
