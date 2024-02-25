#pragma once

/**
 * Name: Satisfactory
 * Version: Early_Access_CL#273254
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
	 * Function Widget_ServerManager.Widget_ServerManager_C.SetRemoveServerButtonVisibility
	 */
	struct UWidget_ServerManager_C_SetRemoveServerButtonVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ARKI[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_ServerManager.Widget_ServerManager_C.ServerFoundOrAdded
	 */
	struct UWidget_ServerManager_C_ServerFoundOrAdded_Params
	{
	public:
		class UFGServerObject*                                     Server;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ServerManager.Widget_ServerManager_C.BndEvt__mTabServerState_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
	 */
	struct UWidget_ServerManager_C_BndEvt__mTabServerState_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_ServerManager.Widget_ServerManager_C.BndEvt__mTabConsole_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
	 */
	struct UWidget_ServerManager_C_BndEvt__mTabConsole_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_ServerManager.Widget_ServerManager_C.BndEvt__mTabCreateGame_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
	 */
	struct UWidget_ServerManager_C_BndEvt__mTabCreateGame_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_ServerManager.Widget_ServerManager_C.BndEvt__mTabManageSaves_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
	 */
	struct UWidget_ServerManager_C_BndEvt__mTabManageSaves_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_ServerManager.Widget_ServerManager_C.BndEvt__mTabServerSettings_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
	 */
	struct UWidget_ServerManager_C_BndEvt__mTabServerSettings_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_ServerManager.Widget_ServerManager_C.BndEvt__Widget_StandardButton_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature
	 */
	struct UWidget_ServerManager_C_BndEvt__Widget_StandardButton_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_ServerManager.Widget_ServerManager_C.AddServer
	 */
	struct UWidget_ServerManager_C_AddServer_Params
	{
	public:
		class FString                                              Address;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    Port;                                                    // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ServerManager.Widget_ServerManager_C.BndEvt__mRemoveButton_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature
	 */
	struct UWidget_ServerManager_C_BndEvt__mRemoveButton_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_ServerManager.Widget_ServerManager_C.Construct
	 */
	struct UWidget_ServerManager_C_Construct_Params
	{	};

	/**
	 * Function Widget_ServerManager.Widget_ServerManager_C.ServerAddedToServerManager
	 */
	struct UWidget_ServerManager_C_ServerAddedToServerManager_Params
	{
	public:
		class UFGServerObject*                                     Server;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ServerManager.Widget_ServerManager_C.ServerRemovedFromServerManager
	 */
	struct UWidget_ServerManager_C_ServerRemovedFromServerManager_Params
	{
	public:
		class UFGServerObject*                                     Server;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ServerManager.Widget_ServerManager_C.OnServerListSelectionChanged
	 */
	struct UWidget_ServerManager_C_OnServerListSelectionChanged_Params
	{
	public:
		class UObject*                                             Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsSelected;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ServerManager.Widget_ServerManager_C.OnMenuEnter
	 */
	struct UWidget_ServerManager_C_OnMenuEnter_Params
	{
	public:
		class UWidget*                                             prevMenu;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ServerManager.Widget_ServerManager_C.ExecuteUbergraph_Widget_ServerManager
	 */
	struct UWidget_ServerManager_C_ExecuteUbergraph_Widget_ServerManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_C06D[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
