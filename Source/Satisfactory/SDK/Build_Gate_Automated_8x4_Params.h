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
	 * Function Build_Gate_Automated_8x4.Build_Gate_Automated_8x4_C.GetLookAtDecription
	 */
	struct ABuild_Gate_Automated_8x4_C_GetLookAtDecription_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FUseState                                           State;                                                   // 0x0008(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
		class FText                                                ReturnValue;                                             // 0x0038(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Build_Gate_Automated_8x4.Build_Gate_Automated_8x4_C.CanClose
	 */
	struct ABuild_Gate_Automated_8x4_C_CanClose_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_Gate_Automated_8x4.Build_Gate_Automated_8x4_C.GetDoorLocation
	 */
	struct ABuild_Gate_Automated_8x4_C_GetDoorLocation_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_Gate_Automated_8x4.Build_Gate_Automated_8x4_C.PlayOpenFromStart
	 */
	struct ABuild_Gate_Automated_8x4_C_PlayOpenFromStart_Params
	{	};

	/**
	 * Function Build_Gate_Automated_8x4.Build_Gate_Automated_8x4_C.PlayOpeningFromSeekTime
	 */
	struct ABuild_Gate_Automated_8x4_C_PlayOpeningFromSeekTime_Params
	{
	public:
		double                                                     SeekTime;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_Gate_Automated_8x4.Build_Gate_Automated_8x4_C.PlayCloseFromStart
	 */
	struct ABuild_Gate_Automated_8x4_C_PlayCloseFromStart_Params
	{	};

	/**
	 * Function Build_Gate_Automated_8x4.Build_Gate_Automated_8x4_C.Play Closing From Seek Time
	 */
	struct ABuild_Gate_Automated_8x4_C_PlayClosingFromSeekTime_Params
	{
	public:
		double                                                     SeekTime;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_Gate_Automated_8x4.Build_Gate_Automated_8x4_C.OnMovementStateChanged
	 */
	struct ABuild_Gate_Automated_8x4_C_OnMovementStateChanged_Params
	{
	public:
		EFactoryGame_EDoorState                                    oldState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EFactoryGame_EDoorState                                    NewState;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0FB9[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      percentage;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_Gate_Automated_8x4.Build_Gate_Automated_8x4_C.OnFinishedOpening
	 */
	struct ABuild_Gate_Automated_8x4_C_OnFinishedOpening_Params
	{	};

	/**
	 * Function Build_Gate_Automated_8x4.Build_Gate_Automated_8x4_C.OnFinishedClosing
	 */
	struct ABuild_Gate_Automated_8x4_C_OnFinishedClosing_Params
	{	};

	/**
	 * Function Build_Gate_Automated_8x4.Build_Gate_Automated_8x4_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABuild_Gate_Automated_8x4_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M9Y9[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x00E8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Build_Gate_Automated_8x4.Build_Gate_Automated_8x4_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABuild_Gate_Automated_8x4_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_Gate_Automated_8x4.Build_Gate_Automated_8x4_C.ExecuteUbergraph_Build_Gate_Automated_8x4
	 */
	struct ABuild_Gate_Automated_8x4_C_ExecuteUbergraph_Build_Gate_Automated_8x4_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
