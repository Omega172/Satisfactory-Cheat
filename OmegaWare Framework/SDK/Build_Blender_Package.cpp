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
	 * 		Name   -> Function Build_Blender.Build_Blender_C.GetManufacturingBackground
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterial*                                   MaterialOptional                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_Blender_C::GetManufacturingBackground(class UTexture2D** Texture, class UMaterial** MaterialOptional)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_Blender.Build_Blender_C.GetManufacturingBackground");
		
		ABuild_Blender_C_GetManufacturingBackground_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Texture != nullptr)
			*Texture = params.Texture;
		if (MaterialOptional != nullptr)
			*MaterialOptional = params.MaterialOptional;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_Blender.Build_Blender_C.AssignColors
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuild_Blender_C::AssignColors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_Blender.Build_Blender_C.AssignColors");
		
		ABuild_Blender_C_AssignColors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_Blender.Build_Blender_C.UpdateColors
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      InClass                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_Blender_C::UpdateColors(class UClass* InClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_Blender.Build_Blender_C.UpdateColors");
		
		ABuild_Blender_C_UpdateColors_Params params {};
		params.InClass = InClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_Blender.Build_Blender_C.CheckForAkNotifesActive
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuild_Blender_C::CheckForAkNotifesActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_Blender.Build_Blender_C.CheckForAkNotifesActive");
		
		ABuild_Blender_C_CheckForAkNotifesActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_Blender.Build_Blender_C.Start_SFX_OnSignificance
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABuild_Blender_C::Start_SFX_OnSignificance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_Blender.Build_Blender_C.Start_SFX_OnSignificance");
		
		ABuild_Blender_C_Start_SFX_OnSignificance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_Blender.Build_Blender_C.Kill_SFX_Production
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuild_Blender_C::Kill_SFX_Production()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_Blender.Build_Blender_C.Kill_SFX_Production");
		
		ABuild_Blender_C_Kill_SFX_Production_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_Blender.Build_Blender_C.Stop_SFX_Production
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABuild_Blender_C::Stop_SFX_Production()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_Blender.Build_Blender_C.Stop_SFX_Production");
		
		ABuild_Blender_C_Stop_SFX_Production_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_Blender.Build_Blender_C.Start_SFX_Production
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABuild_Blender_C::Start_SFX_Production()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_Blender.Build_Blender_C.Start_SFX_Production");
		
		ABuild_Blender_C_Start_SFX_Production_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_Blender.Build_Blender_C.CheckCurrentRecipeVFX
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABuild_Blender_C::CheckCurrentRecipeVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_Blender.Build_Blender_C.CheckCurrentRecipeVFX");
		
		ABuild_Blender_C_CheckCurrentRecipeVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_Blender.Build_Blender_C.Destroy_VFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuild_Blender_C::Destroy_VFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_Blender.Build_Blender_C.Destroy_VFX");
		
		ABuild_Blender_C_Destroy_VFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_Blender.Build_Blender_C.Spawn_VFX_Emitters
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuild_Blender_C::Spawn_VFX_Emitters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_Blender.Build_Blender_C.Spawn_VFX_Emitters");
		
		ABuild_Blender_C_Spawn_VFX_Emitters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_Blender.Build_Blender_C.Stop_VFX_Production
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuild_Blender_C::Stop_VFX_Production()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_Blender.Build_Blender_C.Stop_VFX_Production");
		
		ABuild_Blender_C_Stop_VFX_Production_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_Blender.Build_Blender_C.Start_VFX_Production
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuild_Blender_C::Start_VFX_Production()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_Blender.Build_Blender_C.Start_VFX_Production");
		
		ABuild_Blender_C_Start_VFX_Production_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_Blender.Build_Blender_C.LostSignificance
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABuild_Blender_C::LostSignificance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_Blender.Build_Blender_C.LostSignificance");
		
		ABuild_Blender_C_LostSignificance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_Blender.Build_Blender_C.GainedSignificance
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABuild_Blender_C::GainedSignificance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_Blender.Build_Blender_C.GainedSignificance");
		
		ABuild_Blender_C_GainedSignificance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_Blender.Build_Blender_C.StartProductionLoopEffects
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               didStartProducing                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_Blender_C::StartProductionLoopEffects(bool didStartProducing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_Blender.Build_Blender_C.StartProductionLoopEffects");
		
		ABuild_Blender_C_StartProductionLoopEffects_Params params {};
		params.didStartProducing = didStartProducing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_Blender.Build_Blender_C.OnIsProducingChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               newIsProducing                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_Blender_C::OnIsProducingChanged(bool newIsProducing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_Blender.Build_Blender_C.OnIsProducingChanged");
		
		ABuild_Blender_C_OnIsProducingChanged_Params params {};
		params.newIsProducing = newIsProducing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_Blender.Build_Blender_C.StopProductionLoopEffects
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               didStopProducing                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_Blender_C::StopProductionLoopEffects(bool didStopProducing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_Blender.Build_Blender_C.StopProductionLoopEffects");
		
		ABuild_Blender_C_StopProductionLoopEffects_Params params {};
		params.didStopProducing = didStopProducing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_Blender.Build_Blender_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABuild_Blender_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_Blender.Build_Blender_C.ReceiveBeginPlay");
		
		ABuild_Blender_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_Blender.Build_Blender_C.UpdateRecipeColors
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      newRecipe                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void ABuild_Blender_C::UpdateRecipeColors(class UClass* newRecipe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_Blender.Build_Blender_C.UpdateRecipeColors");
		
		ABuild_Blender_C_UpdateRecipeColors_Params params {};
		params.newRecipe = newRecipe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_Blender.Build_Blender_C.StartIsAimedAtForColor
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AFGCharacterPlayer*                          byCharacter                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsValid                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_Blender_C::StartIsAimedAtForColor(class AFGCharacterPlayer* byCharacter, bool IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_Blender.Build_Blender_C.StartIsAimedAtForColor");
		
		ABuild_Blender_C_StartIsAimedAtForColor_Params params {};
		params.byCharacter = byCharacter;
		params.IsValid = IsValid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_Blender.Build_Blender_C.StopIsAimedAtForColor
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AFGCharacterPlayer*                          byCharacter                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_Blender_C::StopIsAimedAtForColor(class AFGCharacterPlayer* byCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_Blender.Build_Blender_C.StopIsAimedAtForColor");
		
		ABuild_Blender_C_StopIsAimedAtForColor_Params params {};
		params.byCharacter = byCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_Blender.Build_Blender_C.Create Liquid Mesh Component
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuild_Blender_C::CreateLiquidMeshComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_Blender.Build_Blender_C.Create Liquid Mesh Component");
		
		ABuild_Blender_C_CreateLiquidMeshComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_Blender.Build_Blender_C.K2_OnBuildEffectFinished
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABuild_Blender_C::K2_OnBuildEffectFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_Blender.Build_Blender_C.K2_OnBuildEffectFinished");
		
		ABuild_Blender_C_K2_OnBuildEffectFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_Blender.Build_Blender_C.ExecuteUbergraph_Build_Blender
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_Blender_C::ExecuteUbergraph_Build_Blender(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_Blender.Build_Blender_C.ExecuteUbergraph_Build_Blender");
		
		ABuild_Blender_C_ExecuteUbergraph_Build_Blender_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuild_Blender_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuild_Blender_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Build_Blender.Build_Blender_C");
		return ptr;
	}

}


