#pragma once
#include "pch.h"

class ESP : public  Feature
{
private:
	bool Initalized = false;

	bool bESP = true;
	int iESPDistance = 200;

	bool bIgnoreSpitters = false;
	bool bIgnoreHogs = false;
	bool bIgnoreSpiders = false;
	bool bIgnoreHatchers = true;
	bool bIgnoreExplodingBugs = false;
	bool bIgnoreDoggo = false;
	bool bIgnoreFrank = false;
	bool bIgnoreBirb = false;

	bool bBoxESP = true;
	bool bBoxName = true;
	bool bBoxCreatureSize = true;
	bool bBoxTamed = true;
	bool bBoxDistance = true;

	bool bNameESP = true;

	bool bESPDrawBones = false;
	bool bESPBonesDot = true;

	bool bAllDebug = false;
	bool bDrawAll = false;

	CG::FName Root;

	// Hostile
	std::vector<CG::FName> SpittersSmall;
	std::vector<CG::FName> SpittersAlpha;

	CG::FName Hog;
	CG::FName CliffHog;
	CG::FName AlphaHog;
	CG::FName NuclearHog;

	CG::FName SpiderChild;
	CG::FName Spider;
	CG::FName SpiderElite;

	// Passive
	CG::FName Doggo;
	CG::FName Frank;
	CG::FName Birb;

public:
	ESP() {};

	bool Setup() override;

	void Destroy() override;

	void HandleKeys() override {};

	void DrawMenuItems() override;

	void Render() override;

	void Run() override {};

private:
	void DrawAllOrigins()
	{
		Unreal* pUnreal = Cheat::unreal.get();
		if (!pUnreal)
			return;

		for (auto& Actor : Cheat::unreal.get()->Actors)
		{
			if (!Actor)
				return;

			auto RootComponent = Actor->RootComponent;
			if (!RootComponent)
				continue;

			auto Origin = RootComponent->RelativeLocation;

			CG::FVector2D Screen = pUnreal->W2S(Origin);
			if (Screen.IsValid())
				continue;

			ImGui::GetBackgroundDrawList()->AddText(Screen, White, Actor->GetName().c_str());
		}
	}

	void DrawBox(CG::AActor* Actor, std::string Name, ImVec2 TextSize, std::string Size, int Distance, bool bIsTamed)
	{
		Unreal* pUnreal = Cheat::unreal.get();
		if (!pUnreal)
			return;

		CG::FVector Origin, BoxExtent;
		Actor->GetActorBounds(true, &Origin, &BoxExtent, false);

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

		ImGui::GetBackgroundDrawList()->AddRect(TopRight, DownLeft, Black, 0.f, ImDrawFlags_None, 3.f);
		ImGui::GetBackgroundDrawList()->AddRect(TopRight, DownLeft, Cyan);

		if (bBoxName)
		{
			float val = TopLeft.X - TopRight.X;
			ImVec2 Pos = CG::FVector2D(TopRight.X + (val / 2), TopLeft.Y);
			Pos.x = Pos.x - (TextSize.x / 2);
			Pos.y = Pos.y - 17.f; // TextSize.y = 14.f

			ImGui::OutlinedText(Pos, White, Name.c_str());
		}

		if (bBoxCreatureSize || bBoxTamed)
		{
			ImVec2 Pos = TopRight;
			Pos.x = Pos.x + 5.f;

			if (bBoxCreatureSize)
			{
				ImGui::OutlinedText(Pos, Green, Size.c_str());
				Pos.y = Pos.y + 16.f;
			}

			if (bBoxTamed && bIsTamed)
				ImGui::OutlinedText(Pos, Gold, "Tamed");

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

			ImGui::OutlinedText(Pos, White, sDistance.c_str());
		}
	}

	void DrawDebugBox(CG::AActor* Actor, int Distance)
	{
		Unreal* pUnreal = Cheat::unreal.get();
		if (!pUnreal)
			return;

		auto Pos = Actor->K2_GetActorLocation();

		CG::FVector2D DrawPos = pUnreal->W2S(Pos);
		if (DrawPos.IsValid())
			return;

		std::string Name = Actor->Name.GetName();
		std::string PosString = "X: " + std::to_string(Pos.X) + " Y: " + std::to_string(Pos.Y) + " Z: " + std::to_string(Pos.Z);

		ImVec2 NameSize = ImGui::CalcTextSize(Name.c_str());
		ImVec2 PosSize = ImGui::CalcTextSize(PosString.c_str());

		ImVec2 Size = NameSize;
		
		if (PosSize.x > NameSize.x)
			Size = PosSize;

		CG::USkeletalMeshComponent* Mesh = nullptr;
		
		if (Actor->IsA(CG::AFGCreature::StaticClass()))
			Mesh = reinterpret_cast<CG::AFGCreature*>(Actor)->Mesh;

		int NumRows = 3;
		if (Mesh)
			NumRows++;

		ImColor Col = { 0.f, 0.f, 0.f, .5f };

		ImVec2 Begin = { (float)DrawPos.X - (Size.x / 2), (float)DrawPos.Y + 50.f };
		ImVec2 End = { Begin.x + Size.x, Begin.y + Size.y * NumRows };

		auto pDL = ImGui::GetBackgroundDrawList();
		int Row = 0;

		pDL->AddLine(DrawPos, Begin, White);
		pDL->AddRect(Begin, { End.x + 2, End.y }, White);
		pDL->AddRectFilled(Begin, { End.x + 2, End.y }, Col);

		pDL->AddText({ Begin.x + 2, Begin.y }, White, Name.c_str());
		Row++;

		pDL->AddText({ Begin.x + 2, Begin.y + Size.y * Row }, White, PosString.c_str());
		Row++;

		pDL->AddText({ Begin.x + 2, Begin.y + Size.y * Row }, White, (std::stringstream() << "Distance: " << Distance).str().c_str());
		Row++;

		if (Mesh)
		{
			std::string NumBones = "# of Bones: " + std::to_string(Mesh->GetNumBones());
			pDL->AddText({ Begin.x + 2, Begin.y + Size.y * Row }, White, NumBones.c_str());
			Row++;
		}
	}

	void CreatureESP(CG::AFGCreature* Creature);

	void HatcherESP(CG::AFGCrabHatcher* Hatcher);

	void BugsESP(CG::AFGFlyingBabyCrab* Bug);
};