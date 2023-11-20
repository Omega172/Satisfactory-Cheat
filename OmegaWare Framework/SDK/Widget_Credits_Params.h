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
	 * Function Widget_Credits.Widget_Credits_C.MoveText
	 */
	struct UWidget_Credits_C_MoveText_Params
	{	};

	/**
	 * Function Widget_Credits.Widget_Credits_C.OnEscape
	 */
	struct UWidget_Credits_C_OnEscape_Params
	{	};

	/**
	 * Function Widget_Credits.Widget_Credits_C.Construct
	 */
	struct UWidget_Credits_C_Construct_Params
	{	};

	/**
	 * Function Widget_Credits.Widget_Credits_C.OnMenuEnter
	 */
	struct UWidget_Credits_C_OnMenuEnter_Params
	{
	public:
		class UWidget*                                             prevMenu;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Credits.Widget_Credits_C.Tick
	 */
	struct UWidget_Credits_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Credits.Widget_Credits_C.ExecuteUbergraph_Widget_Credits
	 */
	struct UWidget_Credits_C_ExecuteUbergraph_Widget_Credits_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Credits.Widget_Credits_C.OnBackClicked__DelegateSignature
	 */
	struct UWidget_Credits_C_OnBackClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
