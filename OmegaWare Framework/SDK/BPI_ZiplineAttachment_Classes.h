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
	 * BlueprintGeneratedClass BPI_ZiplineAttachment.BPI_ZiplineAttachment_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_ZiplineAttachment_C : public UInterface
	{
	public:
		void OnZiplineSprintStatusChanged(bool sprint);
		void TryStartZiplineDeAttaching();
		void TryStartZiplineAttaching();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
