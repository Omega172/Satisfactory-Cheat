#pragma once

/**
 * Name: Satisfactory
 * Version: Early_Access_CL#273254
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BPHUDHelpers.BPHUDHelpers_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPHUDHelpers_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_TruncateInputText(class UObject* InputTextObject, const class FText& Text, int32_t Length, class UObject* __WorldContext);
		void STATIC_IsHiddenHUDModeActive(class AController* Controller, class UObject* __WorldContext, bool* Active);
		void STATIC_GetAnyRecipeProduct(class UClass* recipe, class UObject* __WorldContext, class UClass** Descriptor);
		void STATIC_GetCustomiserTypeFromCategory(class UClass* Category, class UObject* __WorldContext, ECustomiserType* CustomiserType);
		void STATIC_TruncateText(const class FText& InText, int32_t DesiredLength, bool EndWithDots, class UObject* __WorldContext, class FText* OutText, bool* DidTruncate);
		bool STATIC_DoesTextContainSearchWords(const class FText& Input, const class FText& SearchFor, bool IgnorePunctuation, class UObject* __WorldContext);
		void STATIC_GetDefaultRCO(class APlayerController* Controller, class UObject* __WorldContext, class UBP_RemoteCallObject_C** RCO);
		void STATIC_FindWidgetOfClass(class UClass* Windget, class UFGGameUI* Target, class UObject* __WorldContext, class UFGInteractWidget** Widget);
		void STATIC_GetFGHud(class AController* Controller, class UObject* __WorldContext, class AFGHUD** AsFGHUD);
		void STATIC_ShowHideHUD(bool IsMenuOpen, class APawn* OwningPawn, class AController* Controller, class UObject* __WorldContext);
		void STATIC_PopStackWidget(class AController* instigatingController, class UFGInteractWidget* StackWidget, class UObject* __WorldContext);
		void STATIC_PushStackWidget(class AController* instigatingController, class UFGInteractWidget* stackWidget, class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
