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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_BuildGunStatePaint.BP_BuildGunStatePaint_C.OpenCustomiserUI
	 */
	struct UBP_BuildGunStatePaint_C_OpenCustomiserUI_Params
	{	};

	/**
	 * Function BP_BuildGunStatePaint.BP_BuildGunStatePaint_C.EndState
	 */
	struct UBP_BuildGunStatePaint_C_EndState_Params
	{	};

	/**
	 * Function BP_BuildGunStatePaint.BP_BuildGunStatePaint_C.OnMaterialDescriptorChanged
	 */
	struct UBP_BuildGunStatePaint_C_OnMaterialDescriptorChanged_Params
	{
	public:
		class UClass*                                              newMaterialDesc;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BuildGunStatePaint.BP_BuildGunStatePaint_C.OnPatternDescriptorChanged
	 */
	struct UBP_BuildGunStatePaint_C_OnPatternDescriptorChanged_Params
	{
	public:
		class UClass*                                              newPatternDesc;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BuildGunStatePaint.BP_BuildGunStatePaint_C.OnSwatchDescriptorChanged
	 */
	struct UBP_BuildGunStatePaint_C_OnSwatchDescriptorChanged_Params
	{
	public:
		class UClass*                                              newColorDesc;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BuildGunStatePaint.BP_BuildGunStatePaint_C.OnHitStatusChanged
	 */
	struct UBP_BuildGunStatePaint_C_OnHitStatusChanged_Params
	{
	public:
		class UClass*                                              hitBuildingDesc;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		bool                                                       validSwatch;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       validPattern;                                            // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       validMaterial;                                           // 0x000A(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BuildGunStatePaint.BP_BuildGunStatePaint_C.SecondaryFire
	 */
	struct UBP_BuildGunStatePaint_C_SecondaryFire_Params
	{	};

	/**
	 * Function BP_BuildGunStatePaint.BP_BuildGunStatePaint_C.BeginState
	 */
	struct UBP_BuildGunStatePaint_C_BeginState_Params
	{	};

	/**
	 * Function BP_BuildGunStatePaint.BP_BuildGunStatePaint_C.OnApplyCustomization
	 */
	struct UBP_BuildGunStatePaint_C_OnApplyCustomization_Params
	{
	public:
		class UClass*                                              customizationDesc;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BuildGunStatePaint.BP_BuildGunStatePaint_C.OnApplyCustomizationFailed
	 */
	struct UBP_BuildGunStatePaint_C_OnApplyCustomizationFailed_Params
	{	};

	/**
	 * Function BP_BuildGunStatePaint.BP_BuildGunStatePaint_C.OnSkinDescriptorChanged
	 */
	struct UBP_BuildGunStatePaint_C_OnSkinDescriptorChanged_Params
	{
	public:
		class UClass*                                              newSkinDesc;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BuildGunStatePaint.BP_BuildGunStatePaint_C.ExecuteUbergraph_BP_BuildGunStatePaint
	 */
	struct UBP_BuildGunStatePaint_C_ExecuteUbergraph_BP_BuildGunStatePaint_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9IMB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_BuildGunStatePaint.BP_BuildGunStatePaint_C.OnApplyCustomisationFailed__DelegateSignature
	 */
	struct UBP_BuildGunStatePaint_C_OnApplyCustomisationFailed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_BuildGunStatePaint.BP_BuildGunStatePaint_C.OnApplyCustomisation__DelegateSignature
	 */
	struct UBP_BuildGunStatePaint_C_OnApplyCustomisation__DelegateSignature_Params
	{
	public:
		class UClass*                                              CustomisationDesc;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BuildGunStatePaint.BP_BuildGunStatePaint_C.OnBuildGunHitStatusChanged__DelegateSignature
	 */
	struct UBP_BuildGunStatePaint_C_OnBuildGunHitStatusChanged__DelegateSignature_Params
	{
	public:
		class UClass*                                              BuildingDescriptor;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       validSwatch;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       validPattern;                                            // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       validMaterial;                                           // 0x000A(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BuildGunStatePaint.BP_BuildGunStatePaint_C.OnCustomiserDescriptorChanged__DelegateSignature
	 */
	struct UBP_BuildGunStatePaint_C_OnCustomiserDescriptorChanged__DelegateSignature_Params
	{
	public:
		ECustomiserType                                            CustomiserType;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
