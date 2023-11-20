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
	 * Function BPW_MapMenu.BPW_MapMenu_C.UnfocusResources
	 */
	struct UBPW_MapMenu_C_UnfocusResources_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WVS9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UBPW_MapFilterButton_C*                              FilterButton;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MapMenu.BPW_MapMenu_C.FocusResources
	 */
	struct UBPW_MapMenu_C_FocusResources_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_73XK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UBPW_MapFilterButton_C*                              FilterButton;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MapMenu.BPW_MapMenu_C.GetGenericClass
	 */
	struct UBPW_MapMenu_C_GetGenericClass_Params
	{
	public:
		class UFGActorRepresentation*                              actorRepresentation;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              Class;                                                   // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		bool                                                       HasGenericClass;                                         // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KM7M[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_MapMenu.BPW_MapMenu_C.UnfocusGenericType
	 */
	struct UBPW_MapMenu_C_UnfocusGenericType_Params
	{
	public:
		ERepresentationType                                        Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_01M3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_MapMenu.BPW_MapMenu_C.FocusGenericType
	 */
	struct UBPW_MapMenu_C_FocusGenericType_Params
	{
	public:
		ERepresentationType                                        Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DPYJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_MapMenu.BPW_MapMenu_C.AddGenericActor
	 */
	struct UBPW_MapMenu_C_AddGenericActor_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UFGActorRepresentation*                              actorRepresentation;                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MapMenu.BPW_MapMenu_C.UnfocusGenericClass
	 */
	struct UBPW_MapMenu_C_UnfocusGenericClass_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MapMenu.BPW_MapMenu_C.FocusGenericClass
	 */
	struct UBPW_MapMenu_C_FocusGenericClass_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MapMenu.BPW_MapMenu_C.ShouldAddToMenu
	 */
	struct UBPW_MapMenu_C_ShouldAddToMenu_Params
	{
	public:
		class UFGActorRepresentation*                              actorRepresentation;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HRLV[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_MapMenu.BPW_MapMenu_C.UnfocusStamps
	 */
	struct UBPW_MapMenu_C_UnfocusStamps_Params
	{
	public:
		int32_t                                                    IconID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MapMenu.BPW_MapMenu_C.FocusStamps
	 */
	struct UBPW_MapMenu_C_FocusStamps_Params
	{
	public:
		int32_t                                                    IconID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MapMenu.BPW_MapMenu_C.OnSearch
	 */
	struct UBPW_MapMenu_C_OnSearch_Params
	{
	public:
		class FText                                                mText;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_MapMenu.BPW_MapMenu_C.SetIsSearchActive
	 */
	struct UBPW_MapMenu_C_SetIsSearchActive_Params
	{
	public:
		bool                                                       mIsSearchActive;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Y2YG[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_MapMenu.BPW_MapMenu_C.ClearData
	 */
	struct UBPW_MapMenu_C_ClearData_Params
	{	};

	/**
	 * Function BPW_MapMenu.BPW_MapMenu_C.RemoveActorRepresentation
	 */
	struct UBPW_MapMenu_C_RemoveActorRepresentation_Params
	{
	public:
		class UFGActorRepresentation*                              actorRepresentation;                                     // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MapMenu.BPW_MapMenu_C.UpdateActorRepresentation
	 */
	struct UBPW_MapMenu_C_UpdateActorRepresentation_Params
	{
	public:
		class UFGActorRepresentation*                              actorRepresentation;                                     // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MapMenu.BPW_MapMenu_C.ConvertRepresentationType
	 */
	struct UBPW_MapMenu_C_ConvertRepresentationType_Params
	{
	public:
		ERepresentationType                                        InType;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ERepresentationType                                        OutType;                                                 // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MapMenu.BPW_MapMenu_C.AddCategory
	 */
	struct UBPW_MapMenu_C_AddCategory_Params
	{
	public:
		ERepresentationType                                        representationType;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_57Y7[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UBPW_MapFilterCategories_C*                          ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MapMenu.BPW_MapMenu_C.AddActorRepresentationToMenu
	 */
	struct UBPW_MapMenu_C_AddActorRepresentationToMenu_Params
	{
	public:
		class UFGActorRepresentation*                              actorRepresentation;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UFGMapObjectWidget*                                  mMapObject;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MapMenu.BPW_MapMenu_C.PreConstruct
	 */
	struct UBPW_MapMenu_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MapMenu.BPW_MapMenu_C.Construct
	 */
	struct UBPW_MapMenu_C_Construct_Params
	{	};

	/**
	 * Function BPW_MapMenu.BPW_MapMenu_C.BndEvt__BPW_MapMenu_Widget_InputBox_K2Node_ComponentBoundEvent_1_OnTextChanged__DelegateSignature
	 */
	struct UBPW_MapMenu_C_BndEvt__BPW_MapMenu_Widget_InputBox_K2Node_ComponentBoundEvent_1_OnTextChanged__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_MapMenu.BPW_MapMenu_C.BndEvt__BPW_MapMenu_Widget_InputBox_K2Node_ComponentBoundEvent_2_OnClearTextClicked__DelegateSignature
	 */
	struct UBPW_MapMenu_C_BndEvt__BPW_MapMenu_Widget_InputBox_K2Node_ComponentBoundEvent_2_OnClearTextClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_MapMenu.BPW_MapMenu_C.BndEvt__BPW_MapMenu_mShowStampsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_MapMenu_C_BndEvt__BPW_MapMenu_mShowStampsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_MapMenu.BPW_MapMenu_C.BndEvt__BPW_MapMenu_BPW_OptionsCheckbox_K2Node_ComponentBoundEvent_3_OnCheckChanged__DelegateSignature
	 */
	struct UBPW_MapMenu_C_BndEvt__BPW_MapMenu_BPW_OptionsCheckbox_K2Node_ComponentBoundEvent_3_OnCheckChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MapMenu.BPW_MapMenu_C.Destruct
	 */
	struct UBPW_MapMenu_C_Destruct_Params
	{	};

	/**
	 * Function BPW_MapMenu.BPW_MapMenu_C.ExecuteUbergraph_BPW_MapMenu
	 */
	struct UBPW_MapMenu_C_ExecuteUbergraph_BPW_MapMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MapMenu.BPW_MapMenu_C.OnMapMenuInitilized__DelegateSignature
	 */
	struct UBPW_MapMenu_C_OnMapMenuInitilized__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
