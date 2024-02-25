#include "pch.h"
#include "ESP.h"

bool ESP::Setup()
{
	std::vector<LocaleData> EnglishLocale = {
		{ HASH("ESP"), "ESP" },
		{ HASH("ESP_ENABLED"), "Enable" },
		{ HASH("ESP_DISTANCE"), "Distance" },
		{ HASH("ESP_IGNORE_ENTITIES"), "Entities to ignore" },
		{ HASH("ESP_IGNORE_SPITTERS"), "Spitters" },
		{ HASH("ESP_IGNORE_HOGS"), "Hogs" },
		{ HASH("ESP_IGNORE_SPIDERS"), "Spiders" },
		{ HASH("ESP_IGNORE_HATCHERS"), "Hatchers" },
		{ HASH("ESP_IGNORE_EXPLODING_BUGS"), "Exploding Bugs" },
		{ HASH("ESP_IGNORE_LIZARD_DOGGO"), "Lizard Doggo" },
		{ HASH("ESP_IGNORE_FRANK"), "Frank" },
		{ HASH("ESP_IGNORE_BIRB"), "Birb" },

		{ HASH("ESP_BOXES"), "Boxes" },
		{ HASH("ESP_BOX_FLAGS"), "Box Flags" },
		{ HASH("ESP_BOX_NAME"), "Name" },
		{ HASH("ESP_BOX_CREATURE_SIZE"), "Type" },
		{ HASH("ESP_BOX_TAMED"), "Tamed" },
		{ HASH("ESP_BOX_DISTANCE"), "Distance" },

		{ HASH("ESP_DRAW_BONES"), "Draw Bones" },
		{ HASH("ESP_ALL_DEBUG"), "Draw All Debug" },
		{ HASH("ESP_DRAW_ALL_ORIGINS"), "Draw All Origins" },
		{ HASH("ESP_BONES_FLAGS"), "Bones Flags" },
		{ HASH("ESP_NAME_AT_ROOT"), "Name at Root" },
		
		{ HASH("ESP_ROOT"), "Name at Root" },

		{ HASH("ESP_DRAW_BONES"), "Draw Bones" },
		{ HASH("ESP_BONE_FLAGS"), "Bone Flags" },
		{ HASH("ESP_BONES_NUMBERS"), "Numbers" },
		{ HASH("ESP_BONES_DOTS"), "Dots" },

		{ HASH("ESP_OTHER"), "Other" },
		{ HASH("ESP_DRAW_ALL_ORIGINS"), "Draw All Origins" }
	};
	if (!Cheat::localization->AddToLocale("ENG", EnglishLocale))
		return false;

	Cheat::localization->UpdateLocale();

	Utils::LogDebug(Utils::GetLocation(CurrentLoc), "Feature: ESP Initalized");

	Initialized = true;
	return Initialized;
}

void ESP::Destroy()
{
	if (!Initialized)
		return;



	Utils::LogDebug(Utils::GetLocation(CurrentLoc), "Feature: ESP Destroyed");
	Initialized = false;
}

void ESP::PopulateMenu()
{
	if (!Initialized)
		return;

	Child* ESP = new Child("ESP", []() { return ImVec2(ImGui::GetContentRegionAvail().x / 2, ImGui::GetContentRegionAvail().y);  }, ImGuiChildFlags_Border);
	ESP->AddElement(new Text(Cheat::localization->Get("ESP")));
	ESP->AddElement(new Spacing());
	ESP->AddElement(new Checkbox(Cheat::localization->Get("ESP_ENABLED"), &bESP));
	if (bESP)
	{ 
		ESP->AddElement(new SliderInt(Cheat::localization->Get("ESP_DISTANCE"), &iESPDistance, 0, 5000));
		ESP->AddElement(new Combo(Cheat::localization->Get("ESP_IGNORE_ENTITIES"), "", ImGuiComboFlags_NoPreview, [this]() {
			ImGui::Selectable(Cheat::localization->Get("ESP_IGNORE_SPITTERS").c_str(), &bIgnoreSpitters);
			ImGui::Selectable(Cheat::localization->Get("ESP_IGNORE_HOGS").c_str(), &bIgnoreHogs);
			ImGui::Selectable(Cheat::localization->Get("ESP_IGNORE_SPIDERS").c_str(), &bIgnoreSpiders);
			ImGui::Selectable(Cheat::localization->Get("ESP_IGNORE_HATCHERS").c_str(), &bIgnoreHatchers);
			ImGui::Selectable(Cheat::localization->Get("ESP_IGNORE_EXPLODING_BUGS").c_str(), &bIgnoreExplodingBugs);

			ImGui::Selectable(Cheat::localization->Get("ESP_IGNORE_LIZARD_DOGGO").c_str(), &bIgnoreDoggo);
			ImGui::Selectable(Cheat::localization->Get("ESP_IGNORE_FRANK").c_str(), &bIgnoreFrank);
			ImGui::Selectable(Cheat::localization->Get("ESP_IGNORE_BIRB").c_str(), &bIgnoreBirb);
		}));

		ESP->AddElement(new Checkbox(Cheat::localization->Get("ESP_BOXES"), &bBoxESP));
		ESP->AddElement(new Combo(Cheat::localization->Get("ESP_BOX_FLAGS"), "", ImGuiComboFlags_NoPreview, [this]() {
			ImGui::Selectable(Cheat::localization->Get("ESP_BOX_NAME").c_str(), &bBoxName);
			ImGui::Selectable(Cheat::localization->Get("ESP_BOX_CREATURE_SIZE").c_str(), &bBoxCreatureSize);
			ImGui::Selectable(Cheat::localization->Get("ESP_BOX_TAMED").c_str(), &bBoxTamed);
			ImGui::Selectable(Cheat::localization->Get("ESP_BOX_DISTANCE").c_str(), &bBoxDistance);
		}), true);
	}
	else {
		ESP->AddElement(new Checkbox(Cheat::localization->Get("ESP_ROOT"), &bNameESP));
	}
	ESP->AddElement(new Checkbox(Cheat::localization->Get("ESP_DRAW_BONES"), &bESPDrawBones));
	ESP->AddElement(new Combo(Cheat::localization->Get("ESP_BONE_FLAGS"), "", ImGuiComboFlags_NoPreview, [this]() {
		if(ImGui::Selectable(Cheat::localization->Get("ESP_BONES_NUMBERS").c_str(), !bESPBonesDot))
			bESPBonesDot = false;

		if (ImGui::Selectable(Cheat::localization->Get("ESP_BONES_DOTS").c_str(), bESPBonesDot))
			bESPBonesDot = true;
	}), true);
	ESP->AddElement(new Spacing());
	ESP->AddElement(new Text(Cheat::localization->Get("ESP_OTHER")));
	ESP->AddElement(new Spacing());
	ESP->AddElement(new Checkbox(Cheat::localization->Get("ESP_DRAW_ALL_ORIGINS"), &bDrawAll));

	Cheat::menu->AddElement(ESP, true);
}

struct CreatureData
{
	std::string sName;
	std::string sSize;
	bool bIsTamed;
};

CreatureData GetCreatureData(FNames::ActorInfo_t stInfo)
{
	if (!IsValidObjectPtr(stInfo.pActor))
		return { "Unknown", "Unknown", false };

	switch (stInfo.iLookupIndex) {
	case FNames::Char_SpitterAquaticAlpha_C:
	case FNames::Char_SpitterForestAlpha_C:
	case FNames::Char_SpitterForestRedAlpha_C:
	{
		return { "Spitter", "Alpha", false };
		break;
	}
	case FNames::Char_SpitterDesertSmall_C:
	case FNames::Char_SpitterForestSmall_C:
	case FNames::Char_SpitterForestRedSmall_C:
	{
		return { "Spitter", "Normal", false };
		break;
	}
	case FNames::Char_CliffHog_C:
	{
		return { "Hog", "Cliff", false };
		break;
	
	}
	case FNames::Char_AlphaHog_C:
	{
		return { "Hog", "Alpha", false };
		break;
	}
	case FNames::Char_NuclearHog_C:
	{
		return { "Hog", "Nuclear", false };
		break;
	}
	case FNames::Char_Hog_C:
	{
		return { "Hog", "Normal", false };
		break;
	}
	case FNames::Char_Stinger_Child_C:
	{
		return { "Stinger", "Child", false };
		break;
	}
	case FNames::Char_EliteStinger_C:
{
		return { "Stinger", "Elite", false };
		break;
	}
	case FNames::Char_Stinger_C:
	{
		return { "Stinger", "Normal", false };
		break;
	}
	case FNames::Char_SpaceRabbit_C:
	{
		CG::AChar_SpaceRabbit_C* pDoggo = reinterpret_cast<CG::AChar_SpaceRabbit_C*>(stInfo.pActor);
		if (!IsValidObjectPtr(pDoggo))
			return { "Unknown", "Unknown", false };
		
		return { "Lizard Doggo", "Doggo", pDoggo->IsTamed() };
	}
	case FNames::Char_SpaceGiraffe_C:
	{
		return { "Frank", "Massive", false };
		break;
	}
	case FNames::Char_NonFlyingBird_C:
	{
		return { "Birb", "Flightless", false };
		break;
	}
	default:
		return { "Unknown", "Unknown", false };
		break;
	}

	return { "Unknown", "Unknown", false };
}

bool ESP::GetBoxFromBBox(CG::FVector& vecLocation, CG::FVector& vecExtent, ImRect& rectOut, bool bAccurate) {

	Unreal* pUnreal = Cheat::unreal.get();

	if (bAccurate) {
		CG::FVector2D v1, v2, v3, v4, v5, v6, v7, v8;
		if (!(
			pUnreal->WorldToScreen({ vecLocation.X + vecExtent.X, vecLocation.Y + vecExtent.Y, vecLocation.Z + vecExtent.Z }, v1) &&
			pUnreal->WorldToScreen({ vecLocation.X - vecExtent.X, vecLocation.Y + vecExtent.Y, vecLocation.Z + vecExtent.Z }, v2) &&
			pUnreal->WorldToScreen({ vecLocation.X + vecExtent.X, vecLocation.Y - vecExtent.Y, vecLocation.Z + vecExtent.Z }, v3) &&
			pUnreal->WorldToScreen({ vecLocation.X - vecExtent.X, vecLocation.Y - vecExtent.Y, vecLocation.Z + vecExtent.Z }, v4) &&
			pUnreal->WorldToScreen({ vecLocation.X + vecExtent.X, vecLocation.Y + vecExtent.Y, vecLocation.Z - vecExtent.Z }, v5) &&
			pUnreal->WorldToScreen({ vecLocation.X - vecExtent.X, vecLocation.Y + vecExtent.Y, vecLocation.Z - vecExtent.Z }, v6) &&
			pUnreal->WorldToScreen({ vecLocation.X + vecExtent.X, vecLocation.Y - vecExtent.Y, vecLocation.Z - vecExtent.Z }, v7) &&
			pUnreal->WorldToScreen({ vecLocation.X - vecExtent.X, vecLocation.Y - vecExtent.Y, vecLocation.Z - vecExtent.Z }, v8)
			)) {
			return false;
		}

		rectOut.Min.x = std::min({ v1.X, v2.X, v3.X, v4.X, v5.X, v6.X, v7.X, v8.X });
		rectOut.Max.x = std::max({ v1.X, v2.X, v3.X, v4.X, v5.X, v6.X, v7.X, v8.X });

		rectOut.Min.y = std::min({ v1.Y, v2.Y, v3.Y, v4.Y, v5.Y, v6.Y, v7.Y, v8.Y });
		rectOut.Max.y = std::max({ v1.Y, v2.Y, v3.Y, v4.Y, v5.Y, v6.Y, v7.Y, v8.Y });

		return true;
	}

	CG::FVector2D v1, v2;
	if (!(
		pUnreal->WorldToScreen({ vecLocation.X, vecLocation.Y, vecLocation.Z + vecExtent.Z }, v1) &&
		pUnreal->WorldToScreen({ vecLocation.X, vecLocation.Y, vecLocation.Z - vecExtent.Z }, v2)
		)) {
		return false;
	}

	rectOut.Min.x = rectOut.Max.x = 0.f;

	rectOut.Min.y = std::min(v1.Y, v2.Y);
	rectOut.Max.y = std::max(v1.Y, v2.Y);

	float flHalfWidth = rectOut.GetHeight() * 0.3f;
	rectOut.Min.x = std::min(v1.X, v2.X) - flHalfWidth;
	rectOut.Max.x = std::max(v1.X, v2.X) + flHalfWidth;

	return true;
}

void ESP::Render()
{
	if (!Initialized || !bESP)
		return;
	
	Unreal* pUnreal = Cheat::unreal.get();

	CG::AFGCharacterPlayer* FGPlayer = reinterpret_cast<CG::AFGCharacterPlayer*>(pUnreal->GetAcknowledgedPawn());
	if (!IsValidObjectPtr(FGPlayer))
		return;
	
	CG::AFGPlayerController* PlayerController = FGPlayer->GetFGPlayerController();
	if (!IsValidObjectPtr(PlayerController))
		return;

	ImU32 uiDebugColor = ImGui::ColorConvertFloat4ToU32({ 1.f, 1.f, 0.4f, 1.f });

	for (FNames::ActorInfo_t stInfo : pUnreal->ActorList) {
		switch (stInfo.iLookupIndex) {
		case FNames::Char_SpitterAquaticAlpha_C:
		case FNames::Char_SpitterDesertAlpha_C:
		case FNames::Char_SpitterDesertSmall_C:
		case FNames::Char_SpitterForestAlpha_C:
		case FNames::Char_SpitterForestSmall_C:
		case FNames::Char_SpitterForestRedAlpha_C:
		case FNames::Char_SpitterForestRedSmall_C:
		{
			if (bIgnoreSpitters && (stInfo.iLookupIndex == FNames::Char_SpitterAquaticAlpha_C || stInfo.iLookupIndex == FNames::Char_SpitterDesertAlpha_C || stInfo.iLookupIndex == FNames::Char_SpitterDesertSmall_C || stInfo.iLookupIndex == FNames::Char_SpitterForestAlpha_C || stInfo.iLookupIndex == FNames::Char_SpitterForestSmall_C || stInfo.iLookupIndex == FNames::Char_SpitterForestRedAlpha_C || stInfo.iLookupIndex == FNames::Char_SpitterForestRedSmall_C))
				break;
		}
		case FNames::Char_CliffHog_C:
		case FNames::Char_AlphaHog_C:
		case FNames::Char_NuclearHog_C:
		case FNames::Char_Hog_C:
		{
			if (bIgnoreHogs && (stInfo.iLookupIndex == FNames::Char_CliffHog_C || stInfo.iLookupIndex == FNames::Char_AlphaHog_C || stInfo.iLookupIndex == FNames::Char_NuclearHog_C || stInfo.iLookupIndex == FNames::Char_Hog_C))
				break;
		}
		case FNames::Char_Stinger_Child_C:
		case FNames::Char_EliteStinger_C:
		case FNames::Char_Stinger_C:
		{
			if (bIgnoreSpiders && (stInfo.iLookupIndex == FNames::Char_Stinger_Child_C || stInfo.iLookupIndex == FNames::Char_EliteStinger_C || stInfo.iLookupIndex == FNames::Char_Stinger_C))
				break;
		}
		case FNames::Char_SpaceRabbit_C:
		{
			if (bIgnoreDoggo && stInfo.iLookupIndex == FNames::Char_SpaceRabbit_C)
				break;
		}
		case FNames::Char_SpaceGiraffe_C:
		{
			if (bIgnoreFrank && stInfo.iLookupIndex == FNames::Char_SpaceGiraffe_C)
				break;
		}
		case FNames::Char_NonFlyingBird_C:
		{
			if (bIgnoreBirb && stInfo.iLookupIndex == FNames::Char_NonFlyingBird_C)
				break;

			if (!IsValidObjectPtr(stInfo.pActor))
				break;

			CG::AFGCreature* pCreature = reinterpret_cast<CG::AFGCreature*>(stInfo.pActor);
			if (!IsValidObjectPtr(pCreature))
				break;

			CreatureData stCreatureData = GetCreatureData(stInfo);

			CG::USkeletalMeshComponent* Mesh = pCreature->GetMainMesh(); // GetMesh3P
			if (!Mesh)
				break;

			if (iESPDistance && (int)stInfo.flDistance > iESPDistance)
				break;

			if (bESPDrawBones)
			{
				for (size_t i = 0; i < Mesh->GetNumBones(); i++)
				{
					CG::FName Bone = Mesh->GetBoneName(static_cast<int32_t>(i));
					std::string BoneName = Bone.GetName();

					CG::FVector WorldPos = Mesh->GetSocketLocation(Bone);
					CG::FVector2D ScreenPos = pUnreal->W2S(WorldPos);
					if (ScreenPos.IsValid())
						continue;

					if (bESPBonesDot)
					{
						ImGui::GetBackgroundDrawList()->AddCircle(ScreenPos, 3.f, Black, 32);
						ImGui::GetBackgroundDrawList()->AddCircle(ScreenPos, 1.f, White, 32);
					}
					else
						ImGui::OutlinedText(ScreenPos, White, std::to_string(i).c_str());
				}
			}

			ImVec2 TextSize = ImGui::CalcTextSize(stCreatureData.sName.c_str());

			if (bNameESP && !bBoxESP)
			{
				CG::FVector2D Screen;
				if (pUnreal->WorldToScreen(pCreature->K2_GetActorLocation(), Screen))
				{
					ImVec2 Pos = { (float)Screen.X - (TextSize.x / 2.f), (float)Screen.Y - 7.f };
					ImGui::OutlinedText(Pos, White, stCreatureData.sName.c_str());
				}
			}

			CG::FVector vecLocation, vecExtent;
			stInfo.pActor->GetActorBounds(true, &vecLocation, &vecExtent, false);

			ImRect rectBox{};
			if (!GetBoxFromBBox(vecLocation, vecExtent, rectBox, true))
				break;

			if (bBoxESP) {
				ImGui::GetBackgroundDrawList()->AddRect(rectBox.Min, rectBox.Max, Black, 0.f, ImDrawFlags_None, 3.f);
				ImGui::GetBackgroundDrawList()->AddRect(rectBox.Min, rectBox.Max, Cyan);
			}

			if (bBoxName) {

				// EVIL TERRIBLE HORRIBLE HACK
				char szName[64];
				szName[stInfo.pActor->Name.GetName().copy(szName, 63, 0)] = 0;

				ImVec2 vecTextSize = ImGui::CalcTextSize(szName);
				ImGui::OutlinedText({ rectBox.Min.x + (rectBox.GetWidth() - vecTextSize.x) / 2, rectBox.Min.y - 17.f }, White, szName);
			}

			if (bBoxDistance)
			{
				std::stringstream ssDistance;
				ssDistance << "[ " << std::to_string(static_cast<int>(stInfo.flDistance)) << "m ]";

				std::string sDistance = ssDistance.str();
				ImVec2 vecTextSize = ImGui::CalcTextSize(sDistance.c_str());

				ImGui::OutlinedText({ rectBox.Min.x + (rectBox.GetWidth() - vecTextSize.x) / 2, rectBox.Max.y + 2.f }, White, sDistance.c_str());
			}

			ImVec2 vecFlags(rectBox.Max.x + 4.f, rectBox.Min.y);

			if (bBoxCreatureSize)
			{
				ImGui::OutlinedText(vecFlags, Green, stCreatureData.sSize.c_str());
				vecFlags.y += 16.f;
			}

			if (bBoxTamed && stCreatureData.bIsTamed)
			{
				ImGui::OutlinedText(vecFlags, Gold, "Tamed");
			}

			break;
		}

		default:
		{
			if (!bDrawAll)
				break;

			if (!IsValidObjectPtr(stInfo.pActor))
				break;

			CG::FVector vecLocation, vecExtent;
			stInfo.pActor->GetActorBounds(true, &vecLocation, &vecExtent, false);

			CG::FVector2D vecCenter;
			if (!pUnreal->WorldToScreen(vecLocation, vecCenter))
				break;

			char szName[64];
			szName[stInfo.pActor->Name.GetName().copy(szName, 63, 0)] = 0;

			ImVec2 vecTextSize = ImGui::CalcTextSize(szName);
			ImGui::OutlinedText({ (float)vecCenter.X - vecTextSize.x / 2.f, (float)vecCenter.Y - 8.f }, uiDebugColor, szName);

			break;
		}}
	}

	/*
	for (CG::AActor* Actor : pUnreal->Actors)
	{
		if (Actor->IsA(CG::AFGCrabHatcher::StaticClass()) && !bIgnoreHatchers)
		{
			HatcherESP(reinterpret_cast<CG::AFGCrabHatcher*>(Actor));
			continue;
		}

		if (Actor->IsA(CG::AFGFlyingBabyCrab::StaticClass()) && !bIgnoreExplodingBugs)
		{
			BugsESP(reinterpret_cast<CG::AFGFlyingBabyCrab*>(Actor));
			continue;
		}
	}
	*/
}

void HatcherESP(CG::AFGCrabHatcher* Hatcher)
{
	Unreal* pUnreal = Cheat::unreal.get();
	if (!pUnreal)
		return;

	CG::USceneComponent* RootComponent = Hatcher->RootComponent;
	if (!RootComponent)
		return;

	CG::AFGCharacterPlayer* FGPlayer = reinterpret_cast<CG::AFGCharacterPlayer*>(pUnreal->GetAcknowledgedPawn());
	if (!FGPlayer)
		return;

	CG::FVector Origin = RootComponent->RelativeLocation;

	int Distance = static_cast<int>(round(FGPlayer->K2_GetActorLocation().DistanceMeter(Origin)));
	//if (iESPDistance && Distance > iESPDistance)
		//return;

	CG::FVector2D ScreenPos = pUnreal->W2S(Origin);
	if (ScreenPos.IsValid())
		return;

	std::string Name = "Hatcher";

	ImVec2 Screen = ScreenPos;
	ImVec2 TextSize = ImGui::CalcTextSize(Name.c_str());

	ImVec2 Pos = { Screen.x - (TextSize.x / 2), Screen.y - 7.f };
	//if (bNameESP && !bBoxESP)
		ImGui::OutlinedText(Pos, White, Name.c_str());

	//if (bBoxESP)
		//DrawBox(Hatcher, Name, TextSize, "Rooted", Distance, false);
}

void BugsESP(CG::AFGFlyingBabyCrab* Bug)
{
	Unreal* pUnreal = Cheat::unreal.get();
	if (!pUnreal)
		return;

	CG::USceneComponent* RootComponent = Bug->RootComponent;
	if (!RootComponent)
		return;

	CG::AFGCharacterPlayer* FGPlayer = reinterpret_cast<CG::AFGCharacterPlayer*>(pUnreal->GetAcknowledgedPawn());
	if (!FGPlayer)
		return;

	CG::FVector Origin = RootComponent->RelativeLocation;

	int Distance = static_cast<int>(round(FGPlayer->K2_GetActorLocation().DistanceMeter(Origin)));
	//if (iESPDistance && Distance > iESPDistance)
		//return;

	CG::FVector2D ScreenPos = pUnreal->W2S(Origin);
	if (ScreenPos.IsValid())
		return;

	std::string Name = "Exploding Bug";

	ImVec2 Screen = ScreenPos;
	ImVec2 TextSize = ImGui::CalcTextSize(Name.c_str());

	ImVec2 Pos = { Screen.x - 36.5f, Screen.y - 7.f };
	//if (bNameESP && !bBoxESP)
		ImGui::OutlinedText(Pos, White, Name.c_str());

	//if (bBoxESP)
		//DrawBox(Bug, Name, TextSize, "Suicidal", Distance, false);

	//if (bAllDebug)
		//DrawDebugBox(Bug, Distance);
}

void ESP::SaveConfig()
{

}

void ESP::LoadConfig()
{

}