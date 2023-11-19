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
	 * BlueprintGeneratedClass Build_StandaloneWidgetSign_Huge.Build_StandaloneWidgetSign_Huge_C
	 * Size -> 0x0010 (FullSize[0x07A0] - InheritedSize[0x0790])
	 */
	class ABuild_StandaloneWidgetSign_Huge_C : public AFGBuildableWidgetSign
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0790(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UFGClearanceComponent*                               FGClearance;                                             // 0x0798(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void SetLayoutManager(class UBPW_SignLayoutManager_C* LayoutManager);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_Build_StandaloneWidgetSign_Huge(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
