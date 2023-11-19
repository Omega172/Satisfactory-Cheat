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
	 * Function Widget_Compass_new.Widget_Compass_new_C.GetCompassObjectWidgetClass
	 */
	struct UWidget_Compass_new_C_GetCompassObjectWidgetClass_Params
	{
	public:
		class UFGActorRepresentation*                              actorRepresentation;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Compass_new.Widget_Compass_new_C.Construct
	 */
	struct UWidget_Compass_new_C_Construct_Params
	{	};

	/**
	 * Function Widget_Compass_new.Widget_Compass_new_C.EventUpdateBackgroundOpacity
	 */
	struct UWidget_Compass_new_C_EventUpdateBackgroundOpacity_Params
	{
	public:
		class FString                                              updatedCvar;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Compass_new.Widget_Compass_new_C.Destruct
	 */
	struct UWidget_Compass_new_C_Destruct_Params
	{	};

	/**
	 * Function Widget_Compass_new.Widget_Compass_new_C.ExecuteUbergraph_Widget_Compass_new
	 */
	struct UWidget_Compass_new_C_ExecuteUbergraph_Widget_Compass_new_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ALKT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
