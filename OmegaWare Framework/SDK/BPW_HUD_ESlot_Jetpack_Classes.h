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
	 * WidgetBlueprintGeneratedClass BPW_HUD_ESlot_Jetpack.BPW_HUD_ESlot_Jetpack_C
	 * Size -> 0x0010 (FullSize[0x0310] - InheritedSize[0x0300])
	 */
	class UBPW_HUD_ESlot_Jetpack_C : public UBPW_HUD_ESlot_Fuel_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0300(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class AFGJetPack*                                          mJetpack;                                                // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void CREATEDELEGATE_PROXYFUNCTION_1(float newBurnPercent);
		void OnFuelTypeChanged(int32_t newFuelIndex);
		void Construct();
		void UpdateFuelClass();
		void UpdateFuelInInventory();
		void UpdateFuelPercent();
		void ExecuteUbergraph_BPW_HUD_ESlot_Jetpack(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
