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
	 * Function Widget_ActorDetails_Container.Widget_ActorDetails_Container_C.SetShowPointer
	 */
	struct UWidget_ActorDetails_Container_C_SetShowPointer_Params
	{
	public:
		bool                                                       ShowPointer;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ActorDetails_Container.Widget_ActorDetails_Container_C.SetTitle
	 */
	struct UWidget_ActorDetails_Container_C_SetTitle_Params
	{
	public:
		class FText                                                mTitle;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_ActorDetails_Container.Widget_ActorDetails_Container_C.PreConstruct
	 */
	struct UWidget_ActorDetails_Container_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ActorDetails_Container.Widget_ActorDetails_Container_C.Construct
	 */
	struct UWidget_ActorDetails_Container_C_Construct_Params
	{	};

	/**
	 * Function Widget_ActorDetails_Container.Widget_ActorDetails_Container_C.ExecuteUbergraph_Widget_ActorDetails_Container
	 */
	struct UWidget_ActorDetails_Container_C_ExecuteUbergraph_Widget_ActorDetails_Container_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
