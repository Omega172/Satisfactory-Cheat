/**
 * Name: Satisfactory
 * Version: Early_Access_CL#264901
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_WorldObjectHUDIndicator.BPW_WorldObjectHUDIndicator_C.GetScale
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     WorldLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Scale                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_WorldObjectHUDIndicator_C::GetScale(const struct FVector& WorldLocation, double* Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_WorldObjectHUDIndicator.BPW_WorldObjectHUDIndicator_C.GetScale");
		
		UBPW_WorldObjectHUDIndicator_C_GetScale_Params params {};
		params.WorldLocation = WorldLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Scale != nullptr)
			*Scale = params.Scale;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_WorldObjectHUDIndicator.BPW_WorldObjectHUDIndicator_C.GetCentermostWidget
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_WorldObjectHUDIndicator_C::GetCentermostWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_WorldObjectHUDIndicator.BPW_WorldObjectHUDIndicator_C.GetCentermostWidget");
		
		UBPW_WorldObjectHUDIndicator_C_GetCentermostWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_WorldObjectHUDIndicator.BPW_WorldObjectHUDIndicator_C.GetIsInCenterArea
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector2D                                   PosOnScreen                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   ScreenSize                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsInCenterArea                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_WorldObjectHUDIndicator_C::GetIsInCenterArea(const struct FVector2D& PosOnScreen, const struct FVector2D& ScreenSize, bool* IsInCenterArea)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_WorldObjectHUDIndicator.BPW_WorldObjectHUDIndicator_C.GetIsInCenterArea");
		
		UBPW_WorldObjectHUDIndicator_C_GetIsInCenterArea_Params params {};
		params.PosOnScreen = PosOnScreen;
		params.ScreenSize = ScreenSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsInCenterArea != nullptr)
			*IsInCenterArea = params.IsInCenterArea;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_WorldObjectHUDIndicator.BPW_WorldObjectHUDIndicator_C.ScaleWidget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FWorldObjectHUDIndicator_Struct             ObjectData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	 * 		bool                                               ShouldScale                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_WorldObjectHUDIndicator_C::ScaleWidget(const struct FWorldObjectHUDIndicator_Struct& ObjectData, bool ShouldScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_WorldObjectHUDIndicator.BPW_WorldObjectHUDIndicator_C.ScaleWidget");
		
		UBPW_WorldObjectHUDIndicator_C_ScaleWidget_Params params {};
		params.ObjectData = ObjectData;
		params.ShouldScale = ShouldScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_WorldObjectHUDIndicator.BPW_WorldObjectHUDIndicator_C.AddWidget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBPW_WorldObjectHUDIndicator_Object_C*       Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_WorldObjectHUDIndicator_C::AddWidget(class UBPW_WorldObjectHUDIndicator_Object_C* Widget, const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_WorldObjectHUDIndicator.BPW_WorldObjectHUDIndicator_C.AddWidget");
		
		UBPW_WorldObjectHUDIndicator_C_AddWidget_Params params {};
		params.Widget = Widget;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_WorldObjectHUDIndicator.BPW_WorldObjectHUDIndicator_C.LerpFromStickyToLockedSidePosition
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector2D                                   InPosition                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   ScreenSize                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     PingPosition                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             padding                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   OutPosition                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_WorldObjectHUDIndicator_C::LerpFromStickyToLockedSidePosition(const struct FVector2D& InPosition, const struct FVector2D& ScreenSize, const struct FVector& PingPosition, double padding, struct FVector2D* OutPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_WorldObjectHUDIndicator.BPW_WorldObjectHUDIndicator_C.LerpFromStickyToLockedSidePosition");
		
		UBPW_WorldObjectHUDIndicator_C_LerpFromStickyToLockedSidePosition_Params params {};
		params.InPosition = InPosition;
		params.ScreenSize = ScreenSize;
		params.PingPosition = PingPosition;
		params.padding = padding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPosition != nullptr)
			*OutPosition = params.OutPosition;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_WorldObjectHUDIndicator.BPW_WorldObjectHUDIndicator_C.GetTargetAngleToPlayer
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Position                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	double UBPW_WorldObjectHUDIndicator_C::GetTargetAngleToPlayer(const struct FVector& Position)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_WorldObjectHUDIndicator.BPW_WorldObjectHUDIndicator_C.GetTargetAngleToPlayer");
		
		UBPW_WorldObjectHUDIndicator_C_GetTargetAngleToPlayer_Params params {};
		params.Position = Position;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_WorldObjectHUDIndicator.BPW_WorldObjectHUDIndicator_C.CalculateStickyEdgePosition
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             AngleFromCenter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   InPositionOnScreen                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   ScreenSize                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             padding                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   OutPositionOnScreen                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_WorldObjectHUDIndicator_C::CalculateStickyEdgePosition(double AngleFromCenter, const struct FVector2D& InPositionOnScreen, const struct FVector2D& ScreenSize, double padding, struct FVector2D* OutPositionOnScreen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_WorldObjectHUDIndicator.BPW_WorldObjectHUDIndicator_C.CalculateStickyEdgePosition");
		
		UBPW_WorldObjectHUDIndicator_C_CalculateStickyEdgePosition_Params params {};
		params.AngleFromCenter = AngleFromCenter;
		params.InPositionOnScreen = InPositionOnScreen;
		params.ScreenSize = ScreenSize;
		params.padding = padding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPositionOnScreen != nullptr)
			*OutPositionOnScreen = params.OutPositionOnScreen;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_WorldObjectHUDIndicator.BPW_WorldObjectHUDIndicator_C.PositionWidget
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FWorldObjectHUDIndicator_Struct             ObjectData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	 */
	void UBPW_WorldObjectHUDIndicator_C::PositionWidget(const struct FWorldObjectHUDIndicator_Struct& ObjectData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_WorldObjectHUDIndicator.BPW_WorldObjectHUDIndicator_C.PositionWidget");
		
		UBPW_WorldObjectHUDIndicator_C_PositionWidget_Params params {};
		params.ObjectData = ObjectData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_WorldObjectHUDIndicator.BPW_WorldObjectHUDIndicator_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_WorldObjectHUDIndicator_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_WorldObjectHUDIndicator.BPW_WorldObjectHUDIndicator_C.Tick");
		
		UBPW_WorldObjectHUDIndicator_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_WorldObjectHUDIndicator.BPW_WorldObjectHUDIndicator_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_WorldObjectHUDIndicator_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_WorldObjectHUDIndicator.BPW_WorldObjectHUDIndicator_C.Construct");
		
		UBPW_WorldObjectHUDIndicator_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_WorldObjectHUDIndicator.BPW_WorldObjectHUDIndicator_C.OnScalingUpdated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      updatedCvar                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBPW_WorldObjectHUDIndicator_C::OnScalingUpdated(const class FString& updatedCvar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_WorldObjectHUDIndicator.BPW_WorldObjectHUDIndicator_C.OnScalingUpdated");
		
		UBPW_WorldObjectHUDIndicator_C_OnScalingUpdated_Params params {};
		params.updatedCvar = updatedCvar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_WorldObjectHUDIndicator.BPW_WorldObjectHUDIndicator_C.ExecuteUbergraph_BPW_WorldObjectHUDIndicator
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_WorldObjectHUDIndicator_C::ExecuteUbergraph_BPW_WorldObjectHUDIndicator(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_WorldObjectHUDIndicator.BPW_WorldObjectHUDIndicator_C.ExecuteUbergraph_BPW_WorldObjectHUDIndicator");
		
		UBPW_WorldObjectHUDIndicator_C_ExecuteUbergraph_BPW_WorldObjectHUDIndicator_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_WorldObjectHUDIndicator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_WorldObjectHUDIndicator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_WorldObjectHUDIndicator.BPW_WorldObjectHUDIndicator_C");
		return ptr;
	}

}


