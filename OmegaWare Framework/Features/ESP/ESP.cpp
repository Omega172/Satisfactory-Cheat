#include "pch.h"
#include "ESP.h"

bool ESP::Setup()
{
	Root = CG::FName("Root");

	// Hostile
	Spitters.push_back(CG::FName("Char_SpitterAquaticSmall_C"));
	Spitters.push_back(CG::FName("Char_SpitterAquaticAlpha_C"));
	Spitters.push_back(CG::FName("Char_SpitterDesertSmall_C"));
	Spitters.push_back(CG::FName("Char_SpitterDesertAlpha_C"));
	Spitters.push_back(CG::FName("Char_SpitterForestSmall_C"));
	Spitters.push_back(CG::FName("Char_SpitterForestAlpha_C"));
	Spitters.push_back(CG::FName("Char_SpitterForestRedSmall_C"));
	Spitters.push_back(CG::FName("Char_SpitterForestRedAlpha_C"));

	Hogs.push_back(CG::FName("Char_Hog_C"));
	Hogs.push_back(CG::FName("Char_CliffHog_C"));
	Hogs.push_back(CG::FName("Char_AlphaHog_C"));
	Hogs.push_back(CG::FName("Char_NuclearHog_C"));
	
	Spiders.push_back(CG::FName("Char_Stinger_Child_C"));
	Spiders.push_back(CG::FName("Char_Stinger_C"));
	Spiders.push_back(CG::FName("Char_EliteStinger_C"));

	// Passive
	Doggo = CG::FName("Char_SpaceRabbit_C");
	Frank = CG::FName("Char_SpaceGiraffe_C");
	Birb = CG::FName("Char_NonFlyingBird_C");

	this->Initalized = true;

	Utils::LogDebug(Utils::GetLocation(CurrentLoc), "Feature: ESP Initalized");

	return this->Initalized;
}

void ESP::Destroy()
{
	if (!this->Initalized)
		return;

	// Reset any values to defaults

	Utils::LogDebug(Utils::GetLocation(CurrentLoc), "Feature: ESP Destroyed");
	this->Initalized = false;
}

void ESP::DrawMenuItems()
{
	if (!this->Initalized)
		return;

	ImGui::SameLine();

	ImGui::BeginChild("ESP", ImVec2(ImGui::GetContentRegionAvail().x / 2, ImGui::GetContentRegionAvail().y), true);
	{

		ImGui::Checkbox("ESP", &bESP);
		if (bESP)
		{
			ImGui::SameLine();
			if (ImGui::BeginCombo("Flags", "", ImGuiComboFlags_NoPreview))
			{
				ImGui::Selectable("Name", &bNameESP);
				ImGui::Selectable("Boxes", &bBoxESP);
				ImGui::Selectable("Ignore Hatchers", &bIgnoreHatchers);

				ImGui::EndCombo();
			}

			ImGui::SliderInt("Distance", &iESPDistance, 0, 5000);
			
			ImGui::Checkbox("Draw Bones", &bESPDrawBones);
			if (bESPDrawBones)
			{
				ImGui::SameLine();
				ImGui::Checkbox("Dots", &bESPBonesDot);
			}

			ImGui::Separator();

			ImGui::Checkbox("Draw Debug Boxes", &bAllDebug);
			ImGui::Checkbox("Draw All Origins", &bDrawAll);
		}
	}
	ImGui::EndChild();
}

void ESP::Render()
{
	if (!this->Initalized || !this->bESP)
		return;

	Unreal* pUnreal = Cheat::unreal.get();
	if (!pUnreal)
		return;

	CG::AFGCharacterPlayer* FGPlayer = pUnreal->GetFGPlayer();
	if (!FGPlayer)
		return;
	
	CG::AFGPlayerController* PlayerController = FGPlayer->GetFGPlayerController();
	if (!PlayerController)
		return;

	if (bDrawAll)
	{
		DrawAllOrigins();
		return;
	}

	for (CG::AActor* Actor : pUnreal->Actors)
	{
		if (!Actor)
			continue;

		if (Actor->IsA(CG::AFGCreature::StaticClass()))
		{
			CreatureESP(reinterpret_cast<CG::AFGCreature*>(Actor));
			continue;
		}

		if (Actor->IsA(CG::AFGCrabHatcher::StaticClass()) && !bIgnoreHatchers)
		{
			HatcherESP(reinterpret_cast<CG::AFGCrabHatcher*>(Actor));
			continue;
		}

		if (Actor->IsA(CG::AFGFlyingBabyCrab::StaticClass()))
		{
			BugsESP(reinterpret_cast<CG::AFGFlyingBabyCrab*>(Actor));
			continue;
		}
	}
}

void ESP::CreatureESP(CG::AFGCreature* Creature)
{
	Unreal* pUnreal = Cheat::unreal.get();
	if (!pUnreal)
		return;

	CG::AFGCharacterPlayer* FGPlayer = pUnreal->GetFGPlayer();
	if (!FGPlayer)
		return;

	CG::USkeletalMeshComponent* Mesh = Creature->Mesh;
	if (!Mesh)
		return;

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
				ImGui::GetBackgroundDrawList()->AddCircle(ScreenPos, 1.f, White, 32);
			else
				ImGui::GetBackgroundDrawList()->AddText(ScreenPos, White, BoneName.c_str());
		}
	}

	CG::FVector WorldPos = Mesh->GetSocketLocation(Root);

	int Distance = static_cast<int>(round(FGPlayer->K2_GetActorLocation().DistanceMeter(WorldPos)));
	if (iESPDistance && Distance > iESPDistance)
		return;

	CG::FVector2D ScreenPos = pUnreal->W2S(WorldPos);
	if (ScreenPos.IsValid())
		return;

	CG::FName fName = Creature->Name;
	std::string Name = fName.GetName();

	if (bNameESP)
	{
		// Hostile
		for (CG::FName Spitter : Spitters)
		{
			if (fName.ComparisonIndex == Spitter.ComparisonIndex)
				Name = "Spitter";
		}

		for (CG::FName Hog : Hogs)
		{
			if (fName.ComparisonIndex == Hog.ComparisonIndex)
				Name = "Hog";
		}

		for (CG::FName Spider : Spiders)
		{
			if (fName.ComparisonIndex == Spider.ComparisonIndex)
				Name = "Spider";
		}

		// Passive
		if (fName.ComparisonIndex == Frank.ComparisonIndex)
			Name = "Frank";
		if (fName.ComparisonIndex == Birb.ComparisonIndex)
			Name = "Birb";
		if (fName.ComparisonIndex == Doggo.ComparisonIndex)
			Name = "Lizard Doggo";

		if (Name == fName.GetName())
			std::cout << Name << std::endl;

		ImVec2 Screen = ScreenPos;
		ImVec2 TextSize = ImGui::CalcTextSize(Name.c_str());

		ImVec2 Pos = { Screen.x - (TextSize.x / 2), Screen.y - 7.f };
		ImGui::GetBackgroundDrawList()->AddText(Pos, White, Name.c_str());
	}
}

void ESP::HatcherESP(CG::AFGCrabHatcher* Hatcher)
{
	Unreal* pUnreal = Cheat::unreal.get();
	if (!pUnreal)
		return;

	CG::USceneComponent* RootComponent = Hatcher->RootComponent;
	if (!RootComponent)
		return;

	CG::AFGCharacterPlayer* FGPlayer = pUnreal->GetFGPlayer();
	if (!FGPlayer)
		return;

	CG::FVector Origin = RootComponent->RelativeLocation;

	int Distance = static_cast<int>(round(FGPlayer->K2_GetActorLocation().DistanceMeter(Origin)));
	if (iESPDistance && Distance > iESPDistance)
		return;

	CG::FVector2D ScreenPos = pUnreal->W2S(Origin);
	if (ScreenPos.IsValid())
		return;

	std::string Name = "Hatcher";

	ImVec2 Screen = ScreenPos;
	ImVec2 TextSize = ImGui::CalcTextSize(Name.c_str());

	ImVec2 Pos = { Screen.x - 20.f, Screen.y - 7.f };
	if (bNameESP)
		ImGui::GetBackgroundDrawList()->AddText(Pos, White, Name.c_str());
}

void ESP::BugsESP(CG::AFGFlyingBabyCrab* Bug)
{
	Unreal* pUnreal = Cheat::unreal.get();
	if (!pUnreal)
		return;

	CG::USceneComponent* RootComponent = Bug->RootComponent;
	if (!RootComponent)
		return;

	CG::AFGCharacterPlayer* FGPlayer = pUnreal->GetFGPlayer();
	if (!FGPlayer)
		return;

	CG::FVector Origin = RootComponent->RelativeLocation;

	int Distance = static_cast<int>(round(FGPlayer->K2_GetActorLocation().DistanceMeter(Origin)));
	if (iESPDistance && Distance > iESPDistance)
		return;

	CG::FVector2D ScreenPos = pUnreal->W2S(Origin);
	if (ScreenPos.IsValid())
		return;

	std::string Name = "Exploding Bug";

	ImVec2 Screen = ScreenPos;
	ImVec2 TextSize = ImGui::CalcTextSize(Name.c_str());

	ImVec2 Pos = { Screen.x - 36.5f, Screen.y - 7.f };
	if (bNameESP)
		ImGui::GetBackgroundDrawList()->AddText(Pos, White, Name.c_str());
}