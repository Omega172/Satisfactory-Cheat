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
	 * WidgetBlueprintGeneratedClass Widget_BuildModeSelectWheel.Widget_BuildModeSelectWheel_C
	 * Size -> 0x0028 (FullSize[0x0310] - InheritedSize[0x02E8])
	 */
	class UWidget_BuildModeSelectWheel_C : public UFGInteractWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02E8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidget_RadialMenu_C*                                Widget_RadialMenu;                                       // 0x02F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFGBuildGunStateBuild*                               mBuildGunState;                                          // 0x02F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		TArray<class UClass*>                                      mSupportedSplineModes;                                   // 0x0300(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void Construct();
		void Destruct();
		void ExecuteUbergraph_Widget_BuildModeSelectWheel(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
