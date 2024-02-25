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
	 * WidgetBlueprintGeneratedClass Widget_AmmoRadialSelector.Widget_AmmoRadialSelector_C
	 * Size -> 0x0030 (FullSize[0x0318] - InheritedSize[0x02E8])
	 */
	class UWidget_AmmoRadialSelector_C : public UFGInteractWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02E8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidget_RadialMenu_C*                                Widget_RadialMenu;                                       // 0x02F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		EEquipmentSlot                                             mEquipmentSlot;                                          // 0x02F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_X4PM[0x7];                                   // 0x02F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      AmmoClasses;                                             // 0x0300(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class AFGWeapon*                                           mWeapon;                                                 // 0x0310(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void AddAvailableAmmoTypes();
		void Construct();
		void Destruct();
		void ExecuteUbergraph_Widget_AmmoRadialSelector(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
