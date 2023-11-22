#include "pch.h"
#include "ESP.h"

bool ESP::Setup()
{
	Root = CG::FName("Root");

	// Hostile
	SpittersSmall.push_back(CG::FName("Char_SpitterAquaticSmall_C"));
	SpittersAlpha.push_back(CG::FName("Char_SpitterAquaticAlpha_C"));
	SpittersSmall.push_back(CG::FName("Char_SpitterDesertSmall_C"));
	SpittersAlpha.push_back(CG::FName("Char_SpitterDesertAlpha_C"));
	SpittersSmall.push_back(CG::FName("Char_SpitterForestSmall_C"));
	SpittersAlpha.push_back(CG::FName("Char_SpitterForestAlpha_C"));
	SpittersSmall.push_back(CG::FName("Char_SpitterForestRedSmall_C"));
	SpittersAlpha.push_back(CG::FName("Char_SpitterForestRedAlpha_C"));

	Hog = CG::FName("Char_Hog_C");
	CliffHog = CG::FName("Char_CliffHog_C");
	AlphaHog = CG::FName("Char_AlphaHog_C");
	NuclearHog = CG::FName("Char_NuclearHog_C");
	
	SpiderChild = CG::FName("Char_Stinger_Child_C");
	Spider = CG::FName("Char_Stinger_C");
	SpiderElite = CG::FName("Char_EliteStinger_C");

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
		ImGui::Text("ESP");
		ImGui::Spacing();

		ImGui::Checkbox("ESP Enabled", &bESP);
		ImGui::SliderInt("Distance", &iESPDistance, 0, 5000);
		if (ImGui::BeginCombo("Entities to Ignore", "", ImGuiComboFlags_NoPreview))
		{
			ImGui::Selectable("Spitters", &bIgnoreSpitters);
			ImGui::Selectable("Hogs", &bIgnoreHogs);
			ImGui::Selectable("Spiders", bIgnoreSpiders);
			ImGui::Selectable("Hatchers", &bIgnoreHatchers);
			ImGui::Selectable("Exploding Bugs", &bIgnoreExplodingBugs);

			ImGui::Selectable("Lizard Doggo", &bIgnoreDoggo);
			ImGui::Selectable("Frank", &bIgnoreFrank);
			ImGui::Selectable("Birb", &bIgnoreBirb);

			ImGui::EndCombo();
		}
		
		ImGui::Checkbox("Boxes", &bBoxESP);
		ImGui::SameLine();
		if (ImGui::BeginCombo("Box Flags", "", ImGuiComboFlags_NoPreview))
		{
			ImGui::Selectable("Name", &bBoxName);
			ImGui::Selectable("Type", &bBoxCreatureSize);
			ImGui::Selectable("Tamed", &bBoxTamed);
			ImGui::Selectable("Distance", &bBoxDistance);

			ImGui::EndCombo();
		}

		if (!bBoxESP)
			ImGui::Checkbox("Name at Root", &bNameESP);

		ImGui::Checkbox("Draw Bones", &bESPDrawBones);
		ImGui::SameLine();
		if (ImGui::BeginCombo("Bones Flags", "", ImGuiComboFlags_NoPreview))
		{
			if (ImGui::Selectable("Numbers", !bESPBonesDot))
				bESPBonesDot = false;

			if (ImGui::Selectable("Dots", bESPBonesDot))
				bESPBonesDot = true;

			ImGui::EndCombo();
		}

		ImGui::Separator();

		ImGui::Text("ESP Other");
		ImGui::Spacing();

		ImGui::Checkbox("Draw Debug Boxes", &bAllDebug);
		ImGui::Checkbox("Draw All Origins", &bDrawAll);
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

		if (Actor->IsA(CG::AFGFlyingBabyCrab::StaticClass()) && !bIgnoreExplodingBugs)
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

	CG::FVector WorldPos = Mesh->GetSocketLocation(Root);

	int Distance = static_cast<int>(round(FGPlayer->K2_GetActorLocation().DistanceMeter(WorldPos)));
	if (iESPDistance && Distance > iESPDistance)
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
				ImGui::GetBackgroundDrawList()->AddText(ScreenPos, White, std::to_string(i).c_str());
		}
	}

	CG::FVector2D ScreenPos = pUnreal->W2S(WorldPos);
	if (ScreenPos.IsValid())
		return;

	CG::FName fName = Creature->Name;
	std::string Name = fName.GetName();
	std::string Size = "Normal";

	// Hostile
	for (CG::FName Spitter : SpittersSmall)
	{
		if (fName.ComparisonIndex == Spitter.ComparisonIndex)
		{
			if (bIgnoreSpitters)
				return;

			Name = "Spitter";
		}
	}

	for (CG::FName Spitter : SpittersAlpha)
	{
		if (fName.ComparisonIndex == Spitter.ComparisonIndex)
		{
			if (bIgnoreSpitters)
				return;

			Name = "Spitter";
			Size = "Alpha";
		}
	}

	if (fName.ComparisonIndex == Hog.ComparisonIndex)
	{
		if (bIgnoreHogs)
			return;

		Name = "Hog";
	}

	if (fName.ComparisonIndex == CliffHog.ComparisonIndex)
	{
		if (bIgnoreHogs)
			return;

		Name = "Hog";
		Size = "Cliff";
	}

	if (fName.ComparisonIndex == AlphaHog.ComparisonIndex)
	{
		if (bIgnoreHogs)
			return;

		Name = "Hog";
		Size = "Alpha";
	}

	if (fName.ComparisonIndex == NuclearHog.ComparisonIndex)
	{
		if (bIgnoreHogs)
			return;

		Name = "Hog";
		Size = "Nuclear";
	}

	if (fName.ComparisonIndex == SpiderChild.ComparisonIndex)
	{
		if (bIgnoreSpiders)
			return;

		Name = "Spider";
		Size = "Child";
	}

	if (fName.ComparisonIndex == Spider.ComparisonIndex)
	{
		if (bIgnoreSpiders)
			return;

		Name = "Spider";
	}

	if (fName.ComparisonIndex == SpiderElite.ComparisonIndex)
	{
		if (bIgnoreSpiders)
			return;

		Name = "Spider";
		Size = "Elite";
	}

	bool bIsTamed = false;

	// Passive
	if (fName.ComparisonIndex == Doggo.ComparisonIndex)
	{
		if (bIgnoreDoggo)
			return;

		Name = "Lizard Doggo";
		Size = "Doggo";

		CG::AChar_SpaceRabbit_C* Doggo = reinterpret_cast<CG::AChar_SpaceRabbit_C*>(Creature);
		if (Doggo)
		{
			bIsTamed = Doggo->IsTamed();
		}
	}

	if (fName.ComparisonIndex == Frank.ComparisonIndex)
	{
		if (bIgnoreFrank)
			return;

		Name = "Frank";
		Size = "Massive";
	}

	if (fName.ComparisonIndex == Birb.ComparisonIndex)
	{
		if (bIgnoreBirb)
			return;

		Name = "Birb";
		Size = "Flightless";
	}

	ImVec2 TextSize = ImGui::CalcTextSize(Name.c_str());

	if (bNameESP && !bBoxESP)
	{
		if (Name == fName.GetName())
			std::cout << Name << std::endl;

		ImVec2 Screen = ScreenPos;

		ImVec2 Pos = { Screen.x - (TextSize.x / 2), Screen.y - 7.f };
		ImGui::GetBackgroundDrawList()->AddText(Pos, White, Name.c_str());
	}

	if (bBoxESP)
	{
		CG::FVector Origin, BoxExtent;
		Creature->GetActorBounds(true, &Origin, &BoxExtent, false);

		CG::FVector Head = { Origin.X, Origin.Y, Origin.Z + BoxExtent.Z };
		CG::FVector Feet = { Origin.X, Origin.Y, Origin.Z - BoxExtent.Z };

		CG::FVector2D HeadPos = pUnreal->W2S(Head);
		CG::FVector2D FeetPos = pUnreal->W2S(Feet);

		if (HeadPos.IsValid() || FeetPos.IsValid())
			return;

		const float Height = abs(FeetPos.Y - HeadPos.Y);
		const float Width = Height * 0.6f;

		CG::FVector2D TopLeft = { HeadPos.X - Width * 0.5f, HeadPos.Y };
		CG::FVector2D DownRight = { HeadPos.X + Width * 0.5f, FeetPos.Y };

		float h = DownRight.Y - TopLeft.Y;
		float w = DownRight.X - TopLeft.X;

		CG::FVector2D TopRight = CG::FVector2D(DownRight.X, TopLeft.Y);
		CG::FVector2D DownLeft = CG::FVector2D(TopLeft.X, DownRight.Y);

		ImGui::GetBackgroundDrawList()->AddRect(TopRight, DownLeft, Cyan);

		if (bBoxName)
		{
			float val = TopLeft.X - TopRight.X;
			ImVec2 Pos = CG::FVector2D(TopRight.X + (val / 2), TopLeft.Y);
			Pos.x = Pos.x - (TextSize.x / 2);
			Pos.y = Pos.y - 16.f; // TextSize.y = 14.f

			ImGui::GetBackgroundDrawList()->AddText(Pos, White, Name.c_str());
		}

		if (bBoxCreatureSize || bBoxTamed)
		{
			ImVec2 Pos = TopRight;
			Pos.x = Pos.x + 5.f;

			if (bBoxCreatureSize)
			{
				ImGui::GetBackgroundDrawList()->AddText(Pos, Green, Size.c_str());
				Pos.y = Pos.y + 16.f;
			}

			if (bBoxTamed && bIsTamed)
				ImGui::GetBackgroundDrawList()->AddText(Pos, Gold, "Tamed");
				
		}

		if (bBoxDistance)
		{
			std::stringstream ssDistance;
			ssDistance << "[ " << std::to_string(Distance) << " ]";

			std::string sDistance = ssDistance.str();
			ImVec2 TextSize = ImGui::CalcTextSize(sDistance.c_str());

			float val = DownLeft.X - DownRight.X;
			ImVec2 Pos = CG::FVector2D(DownRight.X + (val / 2), DownLeft.Y);
			Pos.x = Pos.x - (TextSize.x / 2);
			Pos.y = Pos.y + 2.f; // TextSize.y = 14.f

			ImGui::GetBackgroundDrawList()->AddText(Pos, White, sDistance.c_str());
		}
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