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
	 * Function BPI_BlueprintOrganizationHelper.BPI_BlueprintOrganizationHelper_C.GetDescriptorObject
	 */
	struct UBPI_BlueprintOrganizationHelper_C_GetDescriptorObject_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_BlueprintOrganizationHelper.BPI_BlueprintOrganizationHelper_C.EditMode
	 */
	struct UBPI_BlueprintOrganizationHelper_C_EditMode_Params
	{
	public:
		bool                                                       EditMode;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_BlueprintOrganizationHelper.BPI_BlueprintOrganizationHelper_C.ClearDragEvent
	 */
	struct UBPI_BlueprintOrganizationHelper_C_ClearDragEvent_Params
	{	};

	/**
	 * Function BPI_BlueprintOrganizationHelper.BPI_BlueprintOrganizationHelper_C.SetIsSelected
	 */
	struct UBPI_BlueprintOrganizationHelper_C_SetIsSelected_Params
	{
	public:
		bool                                                       IsSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
