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
	 * 		Name   -> Function BPW_LightsControlPanel_ColorManager.BPW_LightsControlPanel_ColorManager_C.ColorClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBPW_LightsControlPanel_Color_C*             ColorWidget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_LightsControlPanel_ColorManager_C::ColorClicked(class UBPW_LightsControlPanel_Color_C* ColorWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LightsControlPanel_ColorManager.BPW_LightsControlPanel_ColorManager_C.ColorClicked");
		
		UBPW_LightsControlPanel_ColorManager_C_ColorClicked_Params params {};
		params.ColorWidget = ColorWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_LightsControlPanel_ColorManager.BPW_LightsControlPanel_ColorManager_C.SetupColors
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FLinearColor>                        Colors                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBPW_LightsControlPanel_ColorManager_C::SetupColors(TArray<struct FLinearColor>* Colors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LightsControlPanel_ColorManager.BPW_LightsControlPanel_ColorManager_C.SetupColors");
		
		UBPW_LightsControlPanel_ColorManager_C_SetupColors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Colors != nullptr)
			*Colors = params.Colors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_LightsControlPanel_ColorManager.BPW_LightsControlPanel_ColorManager_C.SetSelectedColor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_LightsControlPanel_ColorManager_C::SetSelectedColor(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LightsControlPanel_ColorManager.BPW_LightsControlPanel_ColorManager_C.SetSelectedColor");
		
		UBPW_LightsControlPanel_ColorManager_C_SetSelectedColor_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_LightsControlPanel_ColorManager.BPW_LightsControlPanel_ColorManager_C.OnColorClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_LightsControlPanel_ColorManager_C::OnColorClicked__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LightsControlPanel_ColorManager.BPW_LightsControlPanel_ColorManager_C.OnColorClicked__DelegateSignature");
		
		UBPW_LightsControlPanel_ColorManager_C_OnColorClicked__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_LightsControlPanel_ColorManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_LightsControlPanel_ColorManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_LightsControlPanel_ColorManager.BPW_LightsControlPanel_ColorManager_C");
		return ptr;
	}

}


