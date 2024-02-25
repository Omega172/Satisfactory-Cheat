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
	 * BlueprintGeneratedClass BPI_BlueprintOrganizationHelper.BPI_BlueprintOrganizationHelper_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_BlueprintOrganizationHelper_C : public UInterface
	{
	public:
		void GetDescriptorObject(class UObject** Object);
		void EditMode(bool EditMode);
		void ClearDragEvent();
		void SetIsSelected(bool IsSelected);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
