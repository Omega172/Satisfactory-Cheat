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
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass BPW_LightsControlPanel_ColorManager.BPW_LightsControlPanel_ColorManager_C
	 * Size -> 0x0020 (FullSize[0x02A0] - InheritedSize[0x0280])
	 */
	class UBPW_LightsControlPanel_ColorManager_C : public UUserWidget
	{
	public:
		TArray<class UBPW_LightsControlPanel_Color_C*>             mColorWidgets;                                           // 0x0280(0x0010) Edit, BlueprintVisible, ContainsInstancedReference, ExposeOnSpawn
		class FScriptMulticastDelegate                             OnColorClicked;                                          // 0x0290(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void ColorClicked(class UBPW_LightsControlPanel_Color_C* ColorWidget);
		void SetupColors(TArray<struct FLinearColor>* Colors);
		void SetSelectedColor(int32_t Index);
		void OnColorClicked__DelegateSignature(int32_t Index);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
