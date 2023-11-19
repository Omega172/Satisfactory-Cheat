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
	 * Function BPW_WorldObjectHUDIndicator.BPW_WorldObjectHUDIndicator_C.GetScale
	 */
	struct UBPW_WorldObjectHUDIndicator_C_GetScale_Params
	{
	public:
		struct FVector                                             WorldLocation;                                           // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     Scale;                                                   // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_WorldObjectHUDIndicator.BPW_WorldObjectHUDIndicator_C.GetCentermostWidget
	 */
	struct UBPW_WorldObjectHUDIndicator_C_GetCentermostWidget_Params
	{	};

	/**
	 * Function BPW_WorldObjectHUDIndicator.BPW_WorldObjectHUDIndicator_C.GetIsInCenterArea
	 */
	struct UBPW_WorldObjectHUDIndicator_C_GetIsInCenterArea_Params
	{
	public:
		struct FVector2D                                           PosOnScreen;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           ScreenSize;                                              // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsInCenterArea;                                          // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZLCL[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_WorldObjectHUDIndicator.BPW_WorldObjectHUDIndicator_C.ScaleWidget
	 */
	struct UBPW_WorldObjectHUDIndicator_C_ScaleWidget_Params
	{
	public:
		struct FWorldObjectHUDIndicator_Struct                     ObjectData;                                              // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
		bool                                                       ShouldScale;                                             // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ABAY[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_WorldObjectHUDIndicator.BPW_WorldObjectHUDIndicator_C.AddWidget
	 */
	struct UBPW_WorldObjectHUDIndicator_C_AddWidget_Params
	{
	public:
		class UBPW_WorldObjectHUDIndicator_Object_C*               Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Location;                                                // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_WorldObjectHUDIndicator.BPW_WorldObjectHUDIndicator_C.LerpFromStickyToLockedSidePosition
	 */
	struct UBPW_WorldObjectHUDIndicator_C_LerpFromStickyToLockedSidePosition_Params
	{
	public:
		struct FVector2D                                           InPosition;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           ScreenSize;                                              // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             PingPosition;                                            // 0x0020(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     padding;                                                 // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           OutPosition;                                             // 0x0040(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_WorldObjectHUDIndicator.BPW_WorldObjectHUDIndicator_C.GetTargetAngleToPlayer
	 */
	struct UBPW_WorldObjectHUDIndicator_C_GetTargetAngleToPlayer_Params
	{
	public:
		struct FVector                                             Position;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_WorldObjectHUDIndicator.BPW_WorldObjectHUDIndicator_C.CalculateStickyEdgePosition
	 */
	struct UBPW_WorldObjectHUDIndicator_C_CalculateStickyEdgePosition_Params
	{
	public:
		double                                                     AngleFromCenter;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           InPositionOnScreen;                                      // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           ScreenSize;                                              // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     padding;                                                 // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           OutPositionOnScreen;                                     // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_WorldObjectHUDIndicator.BPW_WorldObjectHUDIndicator_C.PositionWidget
	 */
	struct UBPW_WorldObjectHUDIndicator_C_PositionWidget_Params
	{
	public:
		struct FWorldObjectHUDIndicator_Struct                     ObjectData;                                              // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_WorldObjectHUDIndicator.BPW_WorldObjectHUDIndicator_C.Tick
	 */
	struct UBPW_WorldObjectHUDIndicator_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_WorldObjectHUDIndicator.BPW_WorldObjectHUDIndicator_C.Construct
	 */
	struct UBPW_WorldObjectHUDIndicator_C_Construct_Params
	{	};

	/**
	 * Function BPW_WorldObjectHUDIndicator.BPW_WorldObjectHUDIndicator_C.OnScalingUpdated
	 */
	struct UBPW_WorldObjectHUDIndicator_C_OnScalingUpdated_Params
	{
	public:
		class FString                                              updatedCvar;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_WorldObjectHUDIndicator.BPW_WorldObjectHUDIndicator_C.ExecuteUbergraph_BPW_WorldObjectHUDIndicator
	 */
	struct UBPW_WorldObjectHUDIndicator_C_ExecuteUbergraph_BPW_WorldObjectHUDIndicator_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
