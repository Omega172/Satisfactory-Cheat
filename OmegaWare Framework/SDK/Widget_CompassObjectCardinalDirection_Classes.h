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
	 * WidgetBlueprintGeneratedClass Widget_CompassObjectCardinalDirection.Widget_CompassObjectCardinalDirection_C
	 * Size -> 0x0010 (FullSize[0x0328] - InheritedSize[0x0318])
	 */
	class UWidget_CompassObjectCardinalDirection_C : public UFGCompassObjectWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0318(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              CompassObject_C_Direction;                               // 0x0320(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		ESlateVisibility GetVisibility_1();
		void OnCompassObjectAddedToPanel(class UCanvasPanelSlot* parentSlot);
		void ExecuteUbergraph_Widget_CompassObjectCardinalDirection(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
