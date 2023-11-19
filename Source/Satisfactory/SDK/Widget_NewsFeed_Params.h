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
	 * Function Widget_NewsFeed.Widget_NewsFeed_C.GetStringFromTag
	 */
	struct UWidget_NewsFeed_C_GetStringFromTag_Params
	{
	public:
		class FString                                              TagName;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              SourceString;                                            // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              OutString;                                               // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              OutSource;                                               // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_NewsFeed.Widget_NewsFeed_C.GetNewsHeaderText
	 */
	struct UWidget_NewsFeed_C_GetNewsHeaderText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_NewsFeed.Widget_NewsFeed_C.GetHeaderAndBody
	 */
	struct UWidget_NewsFeed_C_GetHeaderAndBody_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Header;                                                  // 0x0018(0x0018)  (Parm, OutParm)
		class FText                                                Body;                                                    // 0x0030(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function Widget_NewsFeed.Widget_NewsFeed_C.GetNewsBodyText
	 */
	struct UWidget_NewsFeed_C_GetNewsBodyText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_NewsFeed.Widget_NewsFeed_C.OnFail_74A37E23495D65D8B1428F9D6302EA77
	 */
	struct UWidget_NewsFeed_C_OnFail_74A37E23495D65D8B1428F9D6302EA77_Params
	{
	public:
		class UTexture2DDynamic*                                   Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_NewsFeed.Widget_NewsFeed_C.OnSuccess_74A37E23495D65D8B1428F9D6302EA77
	 */
	struct UWidget_NewsFeed_C_OnSuccess_74A37E23495D65D8B1428F9D6302EA77_Params
	{
	public:
		class UTexture2DDynamic*                                   Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_NewsFeed.Widget_NewsFeed_C.Construct
	 */
	struct UWidget_NewsFeed_C_Construct_Params
	{	};

	/**
	 * Function Widget_NewsFeed.Widget_NewsFeed_C.FindNewsFeedActor
	 */
	struct UWidget_NewsFeed_C_FindNewsFeedActor_Params
	{	};

	/**
	 * Function Widget_NewsFeed.Widget_NewsFeed_C.OnNewsTextReceived
	 */
	struct UWidget_NewsFeed_C_OnNewsTextReceived_Params
	{
	public:
		class FText                                                NewsText;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_NewsFeed.Widget_NewsFeed_C.PreConstruct
	 */
	struct UWidget_NewsFeed_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_NewsFeed.Widget_NewsFeed_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWidget_NewsFeed_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_NewsFeed.Widget_NewsFeed_C.BndEvt__mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWidget_NewsFeed_C_BndEvt__mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_NewsFeed.Widget_NewsFeed_C.BndEvt__mButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWidget_NewsFeed_C_BndEvt__mButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_NewsFeed.Widget_NewsFeed_C.ParseText
	 */
	struct UWidget_NewsFeed_C_ParseText_Params
	{
	public:
		class FText                                                NewsText;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_NewsFeed.Widget_NewsFeed_C.BndEvt__Widget_FrontEnd_Button_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 */
	struct UWidget_NewsFeed_C_BndEvt__Widget_FrontEnd_Button_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_NewsFeed.Widget_NewsFeed_C.ExecuteUbergraph_Widget_NewsFeed
	 */
	struct UWidget_NewsFeed_C_ExecuteUbergraph_Widget_NewsFeed_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
