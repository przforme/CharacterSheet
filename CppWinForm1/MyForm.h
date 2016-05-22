#pragma once
#include "ACDialog.h"
#include "IniDialog.h"

namespace CppWinForm1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::FlowLayoutPanel^  MainPanel;
	private: System::Windows::Forms::GroupBox^  AbilityScoresGroup;
	private: System::Windows::Forms::TextBox^  StrScore;
	private: System::Windows::Forms::Label^  StrLabel;
	private: System::Windows::Forms::Panel^  StrPanel;
	private: System::Windows::Forms::TextBox^  StrMod;
	private: System::Windows::Forms::Panel^  ChaPanel;
	private: System::Windows::Forms::Label^  ChaLabel;
	private: System::Windows::Forms::TextBox^  ChaMod;
	private: System::Windows::Forms::TextBox^  ChaScore;
	private: System::Windows::Forms::Panel^  WisPanel;
	private: System::Windows::Forms::Label^  WisLabel;
	private: System::Windows::Forms::TextBox^  WisMod;
	private: System::Windows::Forms::TextBox^  WisScore;
	private: System::Windows::Forms::Panel^  IntPanel;
	private: System::Windows::Forms::Label^  IntLabel;
	private: System::Windows::Forms::TextBox^  IntMod;
	private: System::Windows::Forms::TextBox^  IntScore;
	private: System::Windows::Forms::Panel^  ConPanel;
	private: System::Windows::Forms::Label^  ConLabel;
	private: System::Windows::Forms::TextBox^  ConMod;
	private: System::Windows::Forms::TextBox^  ConScore;
	private: System::Windows::Forms::Panel^  DexPanel;
	private: System::Windows::Forms::Label^  DexLabel;
	private: System::Windows::Forms::TextBox^  DexMod;
	private: System::Windows::Forms::TextBox^  DexScore;
	private: System::Windows::Forms::CheckBox^  StrAthleticsProf;
	private: System::Windows::Forms::CheckBox^  StrSTProf;
	private: System::Windows::Forms::CheckBox^  DexAcrobaticsProf;
	private: System::Windows::Forms::CheckBox^  DexSTProf;
	private: System::Windows::Forms::CheckBox^  ChaIntimProf;
	private: System::Windows::Forms::CheckBox^  ChaDecProf;
	private: System::Windows::Forms::CheckBox^  DexStealthProf;
	private: System::Windows::Forms::CheckBox^  ChaSTProf;
	private: System::Windows::Forms::CheckBox^  DexSoHProf;
	private: System::Windows::Forms::CheckBox^  ConSTProf;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::Panel^  DexSkillPanel;
	private: System::Windows::Forms::TextBox^  DexStealthMod;
	private: System::Windows::Forms::TextBox^  DexSoHMod;
	private: System::Windows::Forms::TextBox^  DexAcroMod;
	private: System::Windows::Forms::TextBox^  DexSTMod;
	private: System::Windows::Forms::Panel^  StrSkillPanel;
	private: System::Windows::Forms::TextBox^  StrAthleticsMod;
	private: System::Windows::Forms::TextBox^  StrSTMod;
	private: System::Windows::Forms::Panel^  ConSkillPanel;
	private: System::Windows::Forms::TextBox^  ConSTMod;
	private: System::Windows::Forms::Panel^  IntSkillPanel;
	private: System::Windows::Forms::CheckBox^  IntSTProf;
	private: System::Windows::Forms::TextBox^  IntNatMod;
	private: System::Windows::Forms::TextBox^  IntInvMod;
	private: System::Windows::Forms::TextBox^  IntHistMod;
	private: System::Windows::Forms::TextBox^  IntArcaMod;
	private: System::Windows::Forms::TextBox^  IntSTMod;
	private: System::Windows::Forms::CheckBox^  IntArcanaProf;
	private: System::Windows::Forms::CheckBox^  IntHistoryProf;
	private: System::Windows::Forms::CheckBox^  IntNatureProf;
	private: System::Windows::Forms::CheckBox^  IntInvestProf;
	private: System::Windows::Forms::TextBox^  IntRelMod;
	private: System::Windows::Forms::CheckBox^  IntReligionProf;
	private: System::Windows::Forms::Panel^  WisSkillPanel;
	private: System::Windows::Forms::CheckBox^  WisST;
	private: System::Windows::Forms::TextBox^  WisSurvMod;
	private: System::Windows::Forms::TextBox^  WisPercMod;
	private: System::Windows::Forms::TextBox^  WisMedMod;
	private: System::Windows::Forms::TextBox^  WisInsMod;
	private: System::Windows::Forms::TextBox^  WisAHMod;
	private: System::Windows::Forms::TextBox^  WisSTMod;
	private: System::Windows::Forms::CheckBox^  WisAnimProf;
	private: System::Windows::Forms::CheckBox^  WisInsProf;
	private: System::Windows::Forms::CheckBox^  WisSurvProf;
	private: System::Windows::Forms::CheckBox^  WisPercProf;
	private: System::Windows::Forms::CheckBox^  WisMedProf;
	private: System::Windows::Forms::Panel^  ChaSkillPanel;
	private: System::Windows::Forms::CheckBox^  ChaPersProf;
	private: System::Windows::Forms::CheckBox^  ChaPerfProf;
	private: System::Windows::Forms::TextBox^  ChaPersMod;
	private: System::Windows::Forms::TextBox^  ChaPerfMod;
	private: System::Windows::Forms::TextBox^  ChaIntimMod;
	private: System::Windows::Forms::TextBox^  ChaDecMod;
	private: System::Windows::Forms::TextBox^  ChaSTMod;
	private: System::Windows::Forms::CheckBox^  ChaPerfExp;
	private: System::Windows::Forms::CheckBox^  ChaIntimExp;
	private: System::Windows::Forms::CheckBox^  ChaDecExp;
	private: System::Windows::Forms::CheckBox^  ChaPersExp;
	private: System::Windows::Forms::CheckBox^  DexStealthExp;
	private: System::Windows::Forms::CheckBox^  DexSoHExp;
	private: System::Windows::Forms::CheckBox^  DexAcroExp;
	private: System::Windows::Forms::CheckBox^  StrAthExp;
	private: System::Windows::Forms::CheckBox^  IntInvExp;
	private: System::Windows::Forms::CheckBox^  IntHistExp;
	private: System::Windows::Forms::CheckBox^  IntRelExp;
	private: System::Windows::Forms::CheckBox^  IntArcaExp;
	private: System::Windows::Forms::CheckBox^  IntNatExp;
	private: System::Windows::Forms::CheckBox^  WisMedExp;
	private: System::Windows::Forms::CheckBox^  WisSurvExp;
	private: System::Windows::Forms::CheckBox^  WisInsExp;
	private: System::Windows::Forms::CheckBox^  WisAHExp;
	private: System::Windows::Forms::CheckBox^  WisPercExp;
	private: System::Windows::Forms::TextBox^  WisPasPercVal;
	private: System::Windows::Forms::Label^  PasPercLabel;
	private: System::Windows::Forms::ToolTip^  toolTip1;
	private: System::Windows::Forms::GroupBox^  BasicInfoGroup;
	private: System::Windows::Forms::TextBox^  RaceVal;
	private: System::Windows::Forms::TextBox^  BGVal;
	private: System::Windows::Forms::Label^  RaceLabel;
	private: System::Windows::Forms::Label^  BGLabel;
	private: System::Windows::Forms::Label^  ClassLabel;
	private: System::Windows::Forms::Label^  NameLabel;
	private: System::Windows::Forms::TextBox^  NameVal;
	private: System::Windows::Forms::NumericUpDown^  ProfBonus;
	private: System::Windows::Forms::TextBox^  AlignmentVal;
	private: System::Windows::Forms::Label^  AlignmentLabel;



	private: System::Windows::Forms::Label^  ProfBonusLabel;
	private: System::Windows::Forms::CheckBox^  MonsterCheckBox;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel3;
	private: System::Windows::Forms::Panel^  CharInfoPanel;
	private: System::Windows::Forms::Panel^  ClassPanel;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel2;
	private: System::Windows::Forms::GroupBox^  DefenseGroup;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel4;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel5;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel7;
	private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::Button^  ACButton;

	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel8;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel9;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel6;
private: System::Windows::Forms::Button^  UpdateInit;

private: System::Windows::Forms::TextBox^  textBox1;
private: System::Windows::Forms::TableLayoutPanel^  TempHPTable;
private: System::Windows::Forms::Label^  TempHPLabel;

private: System::Windows::Forms::TableLayoutPanel^  CurHPTable;
private: System::Windows::Forms::Label^  CurHPLabel;

private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel10;
private: System::Windows::Forms::TextBox^  HPMax;

private: System::Windows::Forms::Label^  HPMaxLabel;
private: System::Windows::Forms::TextBox^  TempHP;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel11;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel12;
private: System::Windows::Forms::TextBox^  HealHP;
private: System::Windows::Forms::Button^  HealButton;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel13;
private: System::Windows::Forms::TextBox^  LoseHP;
private: System::Windows::Forms::Button^  LoseButton;
private: System::Windows::Forms::Label^  CurHP;
private: System::Windows::Forms::TextBox^  Class4Lvl;

private: System::Windows::Forms::TextBox^  Class2Lvl;

private: System::Windows::Forms::TextBox^  Class1Lvl;
private: System::Windows::Forms::TextBox^  Class3Lvl;


private: System::Windows::Forms::TextBox^  Class4Name;

private: System::Windows::Forms::TextBox^  Class2Name;

private: System::Windows::Forms::TextBox^  Class1Name;
private: System::Windows::Forms::TextBox^  Class3Name;



	private: System::ComponentModel::IContainer^  components;
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
	#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->MainPanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->AbilityScoresGroup = (gcnew System::Windows::Forms::GroupBox());
			this->WisPasPercVal = (gcnew System::Windows::Forms::TextBox());
			this->PasPercLabel = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->ChaSkillPanel = (gcnew System::Windows::Forms::Panel());
			this->ChaPerfExp = (gcnew System::Windows::Forms::CheckBox());
			this->ChaPersProf = (gcnew System::Windows::Forms::CheckBox());
			this->ChaPersMod = (gcnew System::Windows::Forms::TextBox());
			this->ChaPerfMod = (gcnew System::Windows::Forms::TextBox());
			this->ChaIntimExp = (gcnew System::Windows::Forms::CheckBox());
			this->ChaIntimMod = (gcnew System::Windows::Forms::TextBox());
			this->ChaDecMod = (gcnew System::Windows::Forms::TextBox());
			this->ChaSTMod = (gcnew System::Windows::Forms::TextBox());
			this->ChaDecExp = (gcnew System::Windows::Forms::CheckBox());
			this->ChaPerfProf = (gcnew System::Windows::Forms::CheckBox());
			this->ChaSTProf = (gcnew System::Windows::Forms::CheckBox());
			this->ChaDecProf = (gcnew System::Windows::Forms::CheckBox());
			this->ChaPersExp = (gcnew System::Windows::Forms::CheckBox());
			this->ChaIntimProf = (gcnew System::Windows::Forms::CheckBox());
			this->DexSkillPanel = (gcnew System::Windows::Forms::Panel());
			this->DexStealthExp = (gcnew System::Windows::Forms::CheckBox());
			this->DexSoHExp = (gcnew System::Windows::Forms::CheckBox());
			this->DexAcroExp = (gcnew System::Windows::Forms::CheckBox());
			this->DexSTProf = (gcnew System::Windows::Forms::CheckBox());
			this->DexStealthMod = (gcnew System::Windows::Forms::TextBox());
			this->DexSoHMod = (gcnew System::Windows::Forms::TextBox());
			this->DexAcroMod = (gcnew System::Windows::Forms::TextBox());
			this->DexSTMod = (gcnew System::Windows::Forms::TextBox());
			this->DexAcrobaticsProf = (gcnew System::Windows::Forms::CheckBox());
			this->DexSoHProf = (gcnew System::Windows::Forms::CheckBox());
			this->DexStealthProf = (gcnew System::Windows::Forms::CheckBox());
			this->ChaPanel = (gcnew System::Windows::Forms::Panel());
			this->ChaLabel = (gcnew System::Windows::Forms::Label());
			this->ChaMod = (gcnew System::Windows::Forms::TextBox());
			this->ChaScore = (gcnew System::Windows::Forms::TextBox());
			this->WisPanel = (gcnew System::Windows::Forms::Panel());
			this->WisLabel = (gcnew System::Windows::Forms::Label());
			this->WisMod = (gcnew System::Windows::Forms::TextBox());
			this->WisScore = (gcnew System::Windows::Forms::TextBox());
			this->IntPanel = (gcnew System::Windows::Forms::Panel());
			this->IntLabel = (gcnew System::Windows::Forms::Label());
			this->IntMod = (gcnew System::Windows::Forms::TextBox());
			this->IntScore = (gcnew System::Windows::Forms::TextBox());
			this->ConPanel = (gcnew System::Windows::Forms::Panel());
			this->ConLabel = (gcnew System::Windows::Forms::Label());
			this->ConMod = (gcnew System::Windows::Forms::TextBox());
			this->ConScore = (gcnew System::Windows::Forms::TextBox());
			this->DexPanel = (gcnew System::Windows::Forms::Panel());
			this->DexLabel = (gcnew System::Windows::Forms::Label());
			this->DexMod = (gcnew System::Windows::Forms::TextBox());
			this->DexScore = (gcnew System::Windows::Forms::TextBox());
			this->StrPanel = (gcnew System::Windows::Forms::Panel());
			this->StrLabel = (gcnew System::Windows::Forms::Label());
			this->StrMod = (gcnew System::Windows::Forms::TextBox());
			this->StrScore = (gcnew System::Windows::Forms::TextBox());
			this->StrSkillPanel = (gcnew System::Windows::Forms::Panel());
			this->StrAthExp = (gcnew System::Windows::Forms::CheckBox());
			this->StrAthleticsMod = (gcnew System::Windows::Forms::TextBox());
			this->StrSTMod = (gcnew System::Windows::Forms::TextBox());
			this->StrSTProf = (gcnew System::Windows::Forms::CheckBox());
			this->StrAthleticsProf = (gcnew System::Windows::Forms::CheckBox());
			this->ConSkillPanel = (gcnew System::Windows::Forms::Panel());
			this->ConSTProf = (gcnew System::Windows::Forms::CheckBox());
			this->ConSTMod = (gcnew System::Windows::Forms::TextBox());
			this->IntSkillPanel = (gcnew System::Windows::Forms::Panel());
			this->IntInvExp = (gcnew System::Windows::Forms::CheckBox());
			this->IntSTProf = (gcnew System::Windows::Forms::CheckBox());
			this->IntHistExp = (gcnew System::Windows::Forms::CheckBox());
			this->IntRelExp = (gcnew System::Windows::Forms::CheckBox());
			this->IntRelMod = (gcnew System::Windows::Forms::TextBox());
			this->IntArcaExp = (gcnew System::Windows::Forms::CheckBox());
			this->IntNatMod = (gcnew System::Windows::Forms::TextBox());
			this->IntNatExp = (gcnew System::Windows::Forms::CheckBox());
			this->IntInvMod = (gcnew System::Windows::Forms::TextBox());
			this->IntHistMod = (gcnew System::Windows::Forms::TextBox());
			this->IntArcaMod = (gcnew System::Windows::Forms::TextBox());
			this->IntSTMod = (gcnew System::Windows::Forms::TextBox());
			this->IntArcanaProf = (gcnew System::Windows::Forms::CheckBox());
			this->IntHistoryProf = (gcnew System::Windows::Forms::CheckBox());
			this->IntReligionProf = (gcnew System::Windows::Forms::CheckBox());
			this->IntNatureProf = (gcnew System::Windows::Forms::CheckBox());
			this->IntInvestProf = (gcnew System::Windows::Forms::CheckBox());
			this->WisSkillPanel = (gcnew System::Windows::Forms::Panel());
			this->WisMedExp = (gcnew System::Windows::Forms::CheckBox());
			this->WisST = (gcnew System::Windows::Forms::CheckBox());
			this->WisSurvExp = (gcnew System::Windows::Forms::CheckBox());
			this->WisSurvMod = (gcnew System::Windows::Forms::TextBox());
			this->WisInsExp = (gcnew System::Windows::Forms::CheckBox());
			this->WisPercMod = (gcnew System::Windows::Forms::TextBox());
			this->WisMedMod = (gcnew System::Windows::Forms::TextBox());
			this->WisAHExp = (gcnew System::Windows::Forms::CheckBox());
			this->WisInsMod = (gcnew System::Windows::Forms::TextBox());
			this->WisAHMod = (gcnew System::Windows::Forms::TextBox());
			this->WisPercExp = (gcnew System::Windows::Forms::CheckBox());
			this->WisSTMod = (gcnew System::Windows::Forms::TextBox());
			this->WisAnimProf = (gcnew System::Windows::Forms::CheckBox());
			this->WisInsProf = (gcnew System::Windows::Forms::CheckBox());
			this->WisSurvProf = (gcnew System::Windows::Forms::CheckBox());
			this->WisPercProf = (gcnew System::Windows::Forms::CheckBox());
			this->WisMedProf = (gcnew System::Windows::Forms::CheckBox());
			this->DefenseGroup = (gcnew System::Windows::Forms::GroupBox());
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel7 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->ACButton = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel8 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->UpdateInit = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel9 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel6 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->TempHPTable = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->TempHPLabel = (gcnew System::Windows::Forms::Label());
			this->TempHP = (gcnew System::Windows::Forms::TextBox());
			this->CurHPTable = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->CurHPLabel = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel11 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel12 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->HealHP = (gcnew System::Windows::Forms::TextBox());
			this->HealButton = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel13 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->LoseHP = (gcnew System::Windows::Forms::TextBox());
			this->LoseButton = (gcnew System::Windows::Forms::Button());
			this->CurHP = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel10 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->HPMax = (gcnew System::Windows::Forms::TextBox());
			this->HPMaxLabel = (gcnew System::Windows::Forms::Label());
			this->BasicInfoGroup = (gcnew System::Windows::Forms::GroupBox());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->CharInfoPanel = (gcnew System::Windows::Forms::Panel());
			this->NameLabel = (gcnew System::Windows::Forms::Label());
			this->MonsterCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->NameVal = (gcnew System::Windows::Forms::TextBox());
			this->BGLabel = (gcnew System::Windows::Forms::Label());
			this->AlignmentVal = (gcnew System::Windows::Forms::TextBox());
			this->RaceLabel = (gcnew System::Windows::Forms::Label());
			this->AlignmentLabel = (gcnew System::Windows::Forms::Label());
			this->RaceVal = (gcnew System::Windows::Forms::TextBox());
			this->BGVal = (gcnew System::Windows::Forms::TextBox());
			this->ClassPanel = (gcnew System::Windows::Forms::Panel());
			this->Class4Lvl = (gcnew System::Windows::Forms::TextBox());
			this->Class2Lvl = (gcnew System::Windows::Forms::TextBox());
			this->Class1Lvl = (gcnew System::Windows::Forms::TextBox());
			this->Class3Lvl = (gcnew System::Windows::Forms::TextBox());
			this->Class4Name = (gcnew System::Windows::Forms::TextBox());
			this->Class2Name = (gcnew System::Windows::Forms::TextBox());
			this->Class1Name = (gcnew System::Windows::Forms::TextBox());
			this->Class3Name = (gcnew System::Windows::Forms::TextBox());
			this->ClassLabel = (gcnew System::Windows::Forms::Label());
			this->ProfBonus = (gcnew System::Windows::Forms::NumericUpDown());
			this->ProfBonusLabel = (gcnew System::Windows::Forms::Label());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->MainPanel->SuspendLayout();
			this->AbilityScoresGroup->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->ChaSkillPanel->SuspendLayout();
			this->DexSkillPanel->SuspendLayout();
			this->ChaPanel->SuspendLayout();
			this->WisPanel->SuspendLayout();
			this->IntPanel->SuspendLayout();
			this->ConPanel->SuspendLayout();
			this->DexPanel->SuspendLayout();
			this->StrPanel->SuspendLayout();
			this->StrSkillPanel->SuspendLayout();
			this->ConSkillPanel->SuspendLayout();
			this->IntSkillPanel->SuspendLayout();
			this->WisSkillPanel->SuspendLayout();
			this->DefenseGroup->SuspendLayout();
			this->tableLayoutPanel4->SuspendLayout();
			this->tableLayoutPanel5->SuspendLayout();
			this->tableLayoutPanel7->SuspendLayout();
			this->tableLayoutPanel8->SuspendLayout();
			this->tableLayoutPanel9->SuspendLayout();
			this->TempHPTable->SuspendLayout();
			this->CurHPTable->SuspendLayout();
			this->tableLayoutPanel11->SuspendLayout();
			this->tableLayoutPanel12->SuspendLayout();
			this->tableLayoutPanel13->SuspendLayout();
			this->tableLayoutPanel10->SuspendLayout();
			this->BasicInfoGroup->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->CharInfoPanel->SuspendLayout();
			this->ClassPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ProfBonus))->BeginInit();
			this->tableLayoutPanel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// MainPanel
			// 
			this->MainPanel->Controls->Add(this->AbilityScoresGroup);
			this->MainPanel->Controls->Add(this->DefenseGroup);
			this->MainPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->MainPanel->Location = System::Drawing::Point(3, 185);
			this->MainPanel->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->MainPanel->Name = L"MainPanel";
			this->MainPanel->Size = System::Drawing::Size(590, 812);
			this->MainPanel->TabIndex = 1;
			// 
			// AbilityScoresGroup
			// 
			this->AbilityScoresGroup->Controls->Add(this->WisPasPercVal);
			this->AbilityScoresGroup->Controls->Add(this->PasPercLabel);
			this->AbilityScoresGroup->Controls->Add(this->tableLayoutPanel1);
			this->AbilityScoresGroup->Location = System::Drawing::Point(3, 4);
			this->AbilityScoresGroup->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->AbilityScoresGroup->Name = L"AbilityScoresGroup";
			this->AbilityScoresGroup->Padding = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->AbilityScoresGroup->Size = System::Drawing::Size(278, 800);
			this->AbilityScoresGroup->TabIndex = 0;
			this->AbilityScoresGroup->TabStop = false;
			this->AbilityScoresGroup->Text = L"Ability Scores";
			// 
			// WisPasPercVal
			// 
			this->WisPasPercVal->BackColor = System::Drawing::Color::AntiqueWhite;
			this->WisPasPercVal->Location = System::Drawing::Point(212, 769);
			this->WisPasPercVal->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->WisPasPercVal->Name = L"WisPasPercVal";
			this->WisPasPercVal->ReadOnly = true;
			this->WisPasPercVal->Size = System::Drawing::Size(27, 21);
			this->WisPasPercVal->TabIndex = 2;
			this->WisPasPercVal->TabStop = false;
			this->WisPasPercVal->Text = L"10";
			// 
			// PasPercLabel
			// 
			this->PasPercLabel->AutoSize = true;
			this->PasPercLabel->Location = System::Drawing::Point(92, 772);
			this->PasPercLabel->Name = L"PasPercLabel";
			this->PasPercLabel->Size = System::Drawing::Size(102, 15);
			this->PasPercLabel->TabIndex = 1;
			this->PasPercLabel->Text = L"Passive Perception:";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->Controls->Add(this->ChaSkillPanel, 1, 5);
			this->tableLayoutPanel1->Controls->Add(this->DexSkillPanel, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->ChaPanel, 0, 5);
			this->tableLayoutPanel1->Controls->Add(this->WisPanel, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->IntPanel, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->ConPanel, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->DexPanel, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->StrPanel, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->StrSkillPanel, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->ConSkillPanel, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->IntSkillPanel, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->WisSkillPanel, 1, 4);
			this->tableLayoutPanel1->Location = System::Drawing::Point(7, 22);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 6;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 23)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(268, 742);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// ChaSkillPanel
			// 
			this->ChaSkillPanel->Controls->Add(this->ChaPerfExp);
			this->ChaSkillPanel->Controls->Add(this->ChaPersProf);
			this->ChaSkillPanel->Controls->Add(this->ChaPersMod);
			this->ChaSkillPanel->Controls->Add(this->ChaPerfMod);
			this->ChaSkillPanel->Controls->Add(this->ChaIntimExp);
			this->ChaSkillPanel->Controls->Add(this->ChaIntimMod);
			this->ChaSkillPanel->Controls->Add(this->ChaDecMod);
			this->ChaSkillPanel->Controls->Add(this->ChaSTMod);
			this->ChaSkillPanel->Controls->Add(this->ChaDecExp);
			this->ChaSkillPanel->Controls->Add(this->ChaPerfProf);
			this->ChaSkillPanel->Controls->Add(this->ChaSTProf);
			this->ChaSkillPanel->Controls->Add(this->ChaDecProf);
			this->ChaSkillPanel->Controls->Add(this->ChaPersExp);
			this->ChaSkillPanel->Controls->Add(this->ChaIntimProf);
			this->ChaSkillPanel->Location = System::Drawing::Point(79, 604);
			this->ChaSkillPanel->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ChaSkillPanel->Name = L"ChaSkillPanel";
			this->ChaSkillPanel->Size = System::Drawing::Size(185, 138);
			this->ChaSkillPanel->TabIndex = 11;
			// 
			// ChaPerfExp
			// 
			this->ChaPerfExp->AutoSize = true;
			this->ChaPerfExp->Enabled = false;
			this->ChaPerfExp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ChaPerfExp->Location = System::Drawing::Point(159, 86);
			this->ChaPerfExp->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ChaPerfExp->Name = L"ChaPerfExp";
			this->ChaPerfExp->Size = System::Drawing::Size(12, 11);
			this->ChaPerfExp->TabIndex = 10;
			this->ChaPerfExp->CheckedChanged += gcnew System::EventHandler(this, &MyForm::ChaPerfExp_CheckedChanged);
			// 
			// ChaPersProf
			// 
			this->ChaPersProf->AutoSize = true;
			this->ChaPersProf->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ChaPersProf->Location = System::Drawing::Point(3, 110);
			this->ChaPersProf->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ChaPersProf->Name = L"ChaPersProf";
			this->ChaPersProf->Size = System::Drawing::Size(77, 19);
			this->ChaPersProf->TabIndex = 11;
			this->ChaPersProf->Text = L"Persuasion";
			this->ChaPersProf->UseVisualStyleBackColor = true;
			this->ChaPersProf->CheckedChanged += gcnew System::EventHandler(this, &MyForm::ChaPersProf_CheckedChanged);
			// 
			// ChaPersMod
			// 
			this->ChaPersMod->BackColor = System::Drawing::Color::AntiqueWhite;
			this->ChaPersMod->Location = System::Drawing::Point(124, 109);
			this->ChaPersMod->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ChaPersMod->Name = L"ChaPersMod";
			this->ChaPersMod->ReadOnly = true;
			this->ChaPersMod->Size = System::Drawing::Size(27, 21);
			this->ChaPersMod->TabIndex = 12;
			this->ChaPersMod->TabStop = false;
			this->ChaPersMod->Text = L"0";
			// 
			// ChaPerfMod
			// 
			this->ChaPerfMod->BackColor = System::Drawing::Color::AntiqueWhite;
			this->ChaPerfMod->Location = System::Drawing::Point(124, 82);
			this->ChaPerfMod->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ChaPerfMod->Name = L"ChaPerfMod";
			this->ChaPerfMod->ReadOnly = true;
			this->ChaPerfMod->Size = System::Drawing::Size(27, 21);
			this->ChaPerfMod->TabIndex = 9;
			this->ChaPerfMod->TabStop = false;
			this->ChaPerfMod->Text = L"0";
			// 
			// ChaIntimExp
			// 
			this->ChaIntimExp->AutoSize = true;
			this->ChaIntimExp->Enabled = false;
			this->ChaIntimExp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ChaIntimExp->Location = System::Drawing::Point(159, 57);
			this->ChaIntimExp->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ChaIntimExp->Name = L"ChaIntimExp";
			this->ChaIntimExp->Size = System::Drawing::Size(12, 11);
			this->ChaIntimExp->TabIndex = 7;
			this->ChaIntimExp->CheckedChanged += gcnew System::EventHandler(this, &MyForm::ChaIntimExp_CheckedChanged);
			// 
			// ChaIntimMod
			// 
			this->ChaIntimMod->BackColor = System::Drawing::Color::AntiqueWhite;
			this->ChaIntimMod->Location = System::Drawing::Point(124, 55);
			this->ChaIntimMod->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ChaIntimMod->Name = L"ChaIntimMod";
			this->ChaIntimMod->ReadOnly = true;
			this->ChaIntimMod->Size = System::Drawing::Size(27, 21);
			this->ChaIntimMod->TabIndex = 6;
			this->ChaIntimMod->TabStop = false;
			this->ChaIntimMod->Text = L"0";
			// 
			// ChaDecMod
			// 
			this->ChaDecMod->BackColor = System::Drawing::Color::AntiqueWhite;
			this->ChaDecMod->Location = System::Drawing::Point(124, 27);
			this->ChaDecMod->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ChaDecMod->Name = L"ChaDecMod";
			this->ChaDecMod->ReadOnly = true;
			this->ChaDecMod->Size = System::Drawing::Size(27, 21);
			this->ChaDecMod->TabIndex = 3;
			this->ChaDecMod->TabStop = false;
			this->ChaDecMod->Text = L"0";
			// 
			// ChaSTMod
			// 
			this->ChaSTMod->BackColor = System::Drawing::Color::AntiqueWhite;
			this->ChaSTMod->Location = System::Drawing::Point(124, 1);
			this->ChaSTMod->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ChaSTMod->Name = L"ChaSTMod";
			this->ChaSTMod->ReadOnly = true;
			this->ChaSTMod->Size = System::Drawing::Size(27, 21);
			this->ChaSTMod->TabIndex = 1;
			this->ChaSTMod->TabStop = false;
			this->ChaSTMod->Text = L"0";
			// 
			// ChaDecExp
			// 
			this->ChaDecExp->AutoSize = true;
			this->ChaDecExp->Enabled = false;
			this->ChaDecExp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ChaDecExp->Location = System::Drawing::Point(159, 31);
			this->ChaDecExp->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ChaDecExp->Name = L"ChaDecExp";
			this->ChaDecExp->Size = System::Drawing::Size(12, 11);
			this->ChaDecExp->TabIndex = 4;
			this->ChaDecExp->CheckedChanged += gcnew System::EventHandler(this, &MyForm::ChaDecExp_CheckedChanged);
			// 
			// ChaPerfProf
			// 
			this->ChaPerfProf->AutoSize = true;
			this->ChaPerfProf->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ChaPerfProf->Location = System::Drawing::Point(3, 85);
			this->ChaPerfProf->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ChaPerfProf->Name = L"ChaPerfProf";
			this->ChaPerfProf->Size = System::Drawing::Size(85, 19);
			this->ChaPerfProf->TabIndex = 8;
			this->ChaPerfProf->Text = L"Performance";
			this->ChaPerfProf->UseVisualStyleBackColor = true;
			this->ChaPerfProf->CheckedChanged += gcnew System::EventHandler(this, &MyForm::ChaPerfProf_CheckedChanged);
			// 
			// ChaSTProf
			// 
			this->ChaSTProf->AutoSize = true;
			this->ChaSTProf->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ChaSTProf->Location = System::Drawing::Point(3, 4);
			this->ChaSTProf->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ChaSTProf->Name = L"ChaSTProf";
			this->ChaSTProf->Size = System::Drawing::Size(96, 19);
			this->ChaSTProf->TabIndex = 0;
			this->ChaSTProf->Text = L"Saving Throws";
			this->ChaSTProf->UseVisualStyleBackColor = true;
			this->ChaSTProf->CheckedChanged += gcnew System::EventHandler(this, &MyForm::ChaSTProf_CheckedChanged);
			// 
			// ChaDecProf
			// 
			this->ChaDecProf->AutoSize = true;
			this->ChaDecProf->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ChaDecProf->Location = System::Drawing::Point(3, 30);
			this->ChaDecProf->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ChaDecProf->Name = L"ChaDecProf";
			this->ChaDecProf->Size = System::Drawing::Size(73, 19);
			this->ChaDecProf->TabIndex = 2;
			this->ChaDecProf->Text = L"Deception";
			this->ChaDecProf->UseVisualStyleBackColor = true;
			this->ChaDecProf->CheckedChanged += gcnew System::EventHandler(this, &MyForm::ChaDecProf_CheckedChanged);
			// 
			// ChaPersExp
			// 
			this->ChaPersExp->AutoSize = true;
			this->ChaPersExp->Enabled = false;
			this->ChaPersExp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ChaPersExp->Location = System::Drawing::Point(159, 112);
			this->ChaPersExp->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ChaPersExp->Name = L"ChaPersExp";
			this->ChaPersExp->Size = System::Drawing::Size(12, 11);
			this->ChaPersExp->TabIndex = 13;
			this->ChaPersExp->CheckedChanged += gcnew System::EventHandler(this, &MyForm::ChaPersExp_CheckedChanged);
			// 
			// ChaIntimProf
			// 
			this->ChaIntimProf->AutoSize = true;
			this->ChaIntimProf->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ChaIntimProf->Location = System::Drawing::Point(3, 56);
			this->ChaIntimProf->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ChaIntimProf->Name = L"ChaIntimProf";
			this->ChaIntimProf->Size = System::Drawing::Size(85, 19);
			this->ChaIntimProf->TabIndex = 5;
			this->ChaIntimProf->Text = L"Intimidation";
			this->ChaIntimProf->UseVisualStyleBackColor = true;
			this->ChaIntimProf->CheckedChanged += gcnew System::EventHandler(this, &MyForm::ChaIntimProf_CheckedChanged);
			// 
			// DexSkillPanel
			// 
			this->DexSkillPanel->Controls->Add(this->DexStealthExp);
			this->DexSkillPanel->Controls->Add(this->DexSoHExp);
			this->DexSkillPanel->Controls->Add(this->DexAcroExp);
			this->DexSkillPanel->Controls->Add(this->DexSTProf);
			this->DexSkillPanel->Controls->Add(this->DexStealthMod);
			this->DexSkillPanel->Controls->Add(this->DexSoHMod);
			this->DexSkillPanel->Controls->Add(this->DexAcroMod);
			this->DexSkillPanel->Controls->Add(this->DexSTMod);
			this->DexSkillPanel->Controls->Add(this->DexAcrobaticsProf);
			this->DexSkillPanel->Controls->Add(this->DexSoHProf);
			this->DexSkillPanel->Controls->Add(this->DexStealthProf);
			this->DexSkillPanel->Location = System::Drawing::Point(79, 68);
			this->DexSkillPanel->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->DexSkillPanel->Name = L"DexSkillPanel";
			this->DexSkillPanel->Size = System::Drawing::Size(185, 109);
			this->DexSkillPanel->TabIndex = 7;
			// 
			// DexStealthExp
			// 
			this->DexStealthExp->AutoSize = true;
			this->DexStealthExp->Enabled = false;
			this->DexStealthExp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->DexStealthExp->Location = System::Drawing::Point(159, 86);
			this->DexStealthExp->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->DexStealthExp->Name = L"DexStealthExp";
			this->DexStealthExp->Size = System::Drawing::Size(12, 11);
			this->DexStealthExp->TabIndex = 10;
			this->DexStealthExp->CheckedChanged += gcnew System::EventHandler(this, &MyForm::DexStealthExp_CheckedChanged);
			// 
			// DexSoHExp
			// 
			this->DexSoHExp->AutoSize = true;
			this->DexSoHExp->Enabled = false;
			this->DexSoHExp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->DexSoHExp->Location = System::Drawing::Point(159, 57);
			this->DexSoHExp->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->DexSoHExp->Name = L"DexSoHExp";
			this->DexSoHExp->Size = System::Drawing::Size(12, 11);
			this->DexSoHExp->TabIndex = 7;
			this->DexSoHExp->CheckedChanged += gcnew System::EventHandler(this, &MyForm::DexSoHExp_CheckedChanged);
			// 
			// DexAcroExp
			// 
			this->DexAcroExp->AutoSize = true;
			this->DexAcroExp->Enabled = false;
			this->DexAcroExp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->DexAcroExp->Location = System::Drawing::Point(159, 31);
			this->DexAcroExp->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->DexAcroExp->Name = L"DexAcroExp";
			this->DexAcroExp->Size = System::Drawing::Size(12, 11);
			this->DexAcroExp->TabIndex = 4;
			this->DexAcroExp->CheckedChanged += gcnew System::EventHandler(this, &MyForm::DexAcroExp_CheckedChanged);
			// 
			// DexSTProf
			// 
			this->DexSTProf->AutoSize = true;
			this->DexSTProf->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->DexSTProf->Location = System::Drawing::Point(3, 4);
			this->DexSTProf->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->DexSTProf->Name = L"DexSTProf";
			this->DexSTProf->Size = System::Drawing::Size(93, 19);
			this->DexSTProf->TabIndex = 0;
			this->DexSTProf->Text = L"SavingThrows";
			this->DexSTProf->UseVisualStyleBackColor = true;
			this->DexSTProf->CheckedChanged += gcnew System::EventHandler(this, &MyForm::DexSTProf_CheckedChanged);
			// 
			// DexStealthMod
			// 
			this->DexStealthMod->BackColor = System::Drawing::Color::AntiqueWhite;
			this->DexStealthMod->Location = System::Drawing::Point(124, 82);
			this->DexStealthMod->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->DexStealthMod->Name = L"DexStealthMod";
			this->DexStealthMod->ReadOnly = true;
			this->DexStealthMod->Size = System::Drawing::Size(27, 21);
			this->DexStealthMod->TabIndex = 9;
			this->DexStealthMod->TabStop = false;
			this->DexStealthMod->Text = L"0";
			// 
			// DexSoHMod
			// 
			this->DexSoHMod->BackColor = System::Drawing::Color::AntiqueWhite;
			this->DexSoHMod->Location = System::Drawing::Point(124, 55);
			this->DexSoHMod->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->DexSoHMod->Name = L"DexSoHMod";
			this->DexSoHMod->ReadOnly = true;
			this->DexSoHMod->Size = System::Drawing::Size(27, 21);
			this->DexSoHMod->TabIndex = 6;
			this->DexSoHMod->TabStop = false;
			this->DexSoHMod->Text = L"0";
			// 
			// DexAcroMod
			// 
			this->DexAcroMod->BackColor = System::Drawing::Color::AntiqueWhite;
			this->DexAcroMod->Location = System::Drawing::Point(124, 27);
			this->DexAcroMod->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->DexAcroMod->Name = L"DexAcroMod";
			this->DexAcroMod->ReadOnly = true;
			this->DexAcroMod->Size = System::Drawing::Size(27, 21);
			this->DexAcroMod->TabIndex = 3;
			this->DexAcroMod->TabStop = false;
			this->DexAcroMod->Text = L"0";
			// 
			// DexSTMod
			// 
			this->DexSTMod->BackColor = System::Drawing::Color::AntiqueWhite;
			this->DexSTMod->Location = System::Drawing::Point(124, 1);
			this->DexSTMod->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->DexSTMod->Name = L"DexSTMod";
			this->DexSTMod->ReadOnly = true;
			this->DexSTMod->Size = System::Drawing::Size(27, 21);
			this->DexSTMod->TabIndex = 1;
			this->DexSTMod->TabStop = false;
			this->DexSTMod->Text = L"0";
			// 
			// DexAcrobaticsProf
			// 
			this->DexAcrobaticsProf->AutoSize = true;
			this->DexAcrobaticsProf->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->DexAcrobaticsProf->Location = System::Drawing::Point(3, 30);
			this->DexAcrobaticsProf->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->DexAcrobaticsProf->Name = L"DexAcrobaticsProf";
			this->DexAcrobaticsProf->Size = System::Drawing::Size(76, 19);
			this->DexAcrobaticsProf->TabIndex = 2;
			this->DexAcrobaticsProf->Text = L"Acrobatics";
			this->DexAcrobaticsProf->UseVisualStyleBackColor = true;
			this->DexAcrobaticsProf->CheckedChanged += gcnew System::EventHandler(this, &MyForm::DexAcrobaticsProf_CheckedChanged);
			// 
			// DexSoHProf
			// 
			this->DexSoHProf->AutoSize = true;
			this->DexSoHProf->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->DexSoHProf->Location = System::Drawing::Point(3, 56);
			this->DexSoHProf->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->DexSoHProf->Name = L"DexSoHProf";
			this->DexSoHProf->Size = System::Drawing::Size(100, 19);
			this->DexSoHProf->TabIndex = 5;
			this->DexSoHProf->Text = L"Sleight of Hand";
			this->DexSoHProf->UseVisualStyleBackColor = true;
			this->DexSoHProf->CheckedChanged += gcnew System::EventHandler(this, &MyForm::DexHandProf_CheckedChanged);
			// 
			// DexStealthProf
			// 
			this->DexStealthProf->AutoSize = true;
			this->DexStealthProf->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->DexStealthProf->Location = System::Drawing::Point(3, 85);
			this->DexStealthProf->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->DexStealthProf->Name = L"DexStealthProf";
			this->DexStealthProf->Size = System::Drawing::Size(57, 19);
			this->DexStealthProf->TabIndex = 8;
			this->DexStealthProf->Text = L"Stealth";
			this->DexStealthProf->UseVisualStyleBackColor = true;
			this->DexStealthProf->CheckedChanged += gcnew System::EventHandler(this, &MyForm::DexStealthProf_CheckedChanged);
			// 
			// ChaPanel
			// 
			this->ChaPanel->Controls->Add(this->ChaLabel);
			this->ChaPanel->Controls->Add(this->ChaMod);
			this->ChaPanel->Controls->Add(this->ChaScore);
			this->ChaPanel->Location = System::Drawing::Point(3, 604);
			this->ChaPanel->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ChaPanel->Name = L"ChaPanel";
			this->ChaPanel->Size = System::Drawing::Size(70, 49);
			this->ChaPanel->TabIndex = 5;
			// 
			// ChaLabel
			// 
			this->ChaLabel->AutoSize = true;
			this->ChaLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->ChaLabel->Location = System::Drawing::Point(20, 4);
			this->ChaLabel->Name = L"ChaLabel";
			this->ChaLabel->Size = System::Drawing::Size(32, 13);
			this->ChaLabel->TabIndex = 0;
			this->ChaLabel->Text = L"CHA";
			this->ChaLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ChaMod
			// 
			this->ChaMod->BackColor = System::Drawing::Color::AntiqueWhite;
			this->ChaMod->Location = System::Drawing::Point(39, 23);
			this->ChaMod->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ChaMod->Name = L"ChaMod";
			this->ChaMod->ReadOnly = true;
			this->ChaMod->Size = System::Drawing::Size(27, 21);
			this->ChaMod->TabIndex = 2;
			this->ChaMod->TabStop = false;
			this->ChaMod->Text = L"0";
			// 
			// ChaScore
			// 
			this->ChaScore->BackColor = System::Drawing::Color::FloralWhite;
			this->ChaScore->Location = System::Drawing::Point(3, 23);
			this->ChaScore->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ChaScore->Name = L"ChaScore";
			this->ChaScore->Size = System::Drawing::Size(27, 21);
			this->ChaScore->TabIndex = 1;
			this->ChaScore->Text = L"10";
			this->ChaScore->TextChanged += gcnew System::EventHandler(this, &MyForm::ChaScore_TextChanged);
			// 
			// WisPanel
			// 
			this->WisPanel->Controls->Add(this->WisLabel);
			this->WisPanel->Controls->Add(this->WisMod);
			this->WisPanel->Controls->Add(this->WisScore);
			this->WisPanel->Location = System::Drawing::Point(3, 434);
			this->WisPanel->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->WisPanel->Name = L"WisPanel";
			this->WisPanel->Size = System::Drawing::Size(70, 49);
			this->WisPanel->TabIndex = 4;
			// 
			// WisLabel
			// 
			this->WisLabel->AutoSize = true;
			this->WisLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->WisLabel->Location = System::Drawing::Point(20, 4);
			this->WisLabel->Name = L"WisLabel";
			this->WisLabel->Size = System::Drawing::Size(31, 13);
			this->WisLabel->TabIndex = 0;
			this->WisLabel->Text = L"WIS";
			this->WisLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// WisMod
			// 
			this->WisMod->BackColor = System::Drawing::Color::AntiqueWhite;
			this->WisMod->Location = System::Drawing::Point(39, 23);
			this->WisMod->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->WisMod->Name = L"WisMod";
			this->WisMod->ReadOnly = true;
			this->WisMod->Size = System::Drawing::Size(27, 21);
			this->WisMod->TabIndex = 2;
			this->WisMod->TabStop = false;
			this->WisMod->Text = L"0";
			// 
			// WisScore
			// 
			this->WisScore->BackColor = System::Drawing::Color::FloralWhite;
			this->WisScore->Location = System::Drawing::Point(3, 23);
			this->WisScore->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->WisScore->Name = L"WisScore";
			this->WisScore->Size = System::Drawing::Size(27, 21);
			this->WisScore->TabIndex = 1;
			this->WisScore->Text = L"10";
			this->WisScore->TextChanged += gcnew System::EventHandler(this, &MyForm::WisScore_TextChanged);
			// 
			// IntPanel
			// 
			this->IntPanel->Controls->Add(this->IntLabel);
			this->IntPanel->Controls->Add(this->IntMod);
			this->IntPanel->Controls->Add(this->IntScore);
			this->IntPanel->Location = System::Drawing::Point(3, 264);
			this->IntPanel->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->IntPanel->Name = L"IntPanel";
			this->IntPanel->Size = System::Drawing::Size(70, 53);
			this->IntPanel->TabIndex = 3;
			// 
			// IntLabel
			// 
			this->IntLabel->AutoSize = true;
			this->IntLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->IntLabel->Location = System::Drawing::Point(20, 4);
			this->IntLabel->Name = L"IntLabel";
			this->IntLabel->Size = System::Drawing::Size(28, 13);
			this->IntLabel->TabIndex = 0;
			this->IntLabel->Text = L"INT";
			this->IntLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// IntMod
			// 
			this->IntMod->BackColor = System::Drawing::Color::AntiqueWhite;
			this->IntMod->Location = System::Drawing::Point(39, 23);
			this->IntMod->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->IntMod->Name = L"IntMod";
			this->IntMod->ReadOnly = true;
			this->IntMod->Size = System::Drawing::Size(27, 21);
			this->IntMod->TabIndex = 2;
			this->IntMod->TabStop = false;
			this->IntMod->Text = L"0";
			// 
			// IntScore
			// 
			this->IntScore->BackColor = System::Drawing::Color::FloralWhite;
			this->IntScore->Location = System::Drawing::Point(3, 23);
			this->IntScore->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->IntScore->Name = L"IntScore";
			this->IntScore->Size = System::Drawing::Size(27, 21);
			this->IntScore->TabIndex = 1;
			this->IntScore->Text = L"10";
			this->IntScore->TextChanged += gcnew System::EventHandler(this, &MyForm::IntScore_TextChanged);
			// 
			// ConPanel
			// 
			this->ConPanel->Controls->Add(this->ConLabel);
			this->ConPanel->Controls->Add(this->ConMod);
			this->ConPanel->Controls->Add(this->ConScore);
			this->ConPanel->Location = System::Drawing::Point(3, 185);
			this->ConPanel->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ConPanel->Name = L"ConPanel";
			this->ConPanel->Size = System::Drawing::Size(70, 49);
			this->ConPanel->TabIndex = 2;
			// 
			// ConLabel
			// 
			this->ConLabel->AccessibleDescription = L"Constitution";
			this->ConLabel->AutoSize = true;
			this->ConLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->ConLabel->Location = System::Drawing::Point(20, 4);
			this->ConLabel->Name = L"ConLabel";
			this->ConLabel->Size = System::Drawing::Size(33, 13);
			this->ConLabel->TabIndex = 0;
			this->ConLabel->Text = L"CON";
			this->ConLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ConMod
			// 
			this->ConMod->BackColor = System::Drawing::Color::AntiqueWhite;
			this->ConMod->Location = System::Drawing::Point(39, 23);
			this->ConMod->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ConMod->Name = L"ConMod";
			this->ConMod->ReadOnly = true;
			this->ConMod->Size = System::Drawing::Size(27, 21);
			this->ConMod->TabIndex = 2;
			this->ConMod->TabStop = false;
			this->ConMod->Text = L"0";
			// 
			// ConScore
			// 
			this->ConScore->BackColor = System::Drawing::Color::FloralWhite;
			this->ConScore->Location = System::Drawing::Point(3, 23);
			this->ConScore->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ConScore->Name = L"ConScore";
			this->ConScore->Size = System::Drawing::Size(27, 21);
			this->ConScore->TabIndex = 1;
			this->ConScore->Text = L"10";
			this->ConScore->TextChanged += gcnew System::EventHandler(this, &MyForm::ConScore_TextChanged);
			// 
			// DexPanel
			// 
			this->DexPanel->Controls->Add(this->DexLabel);
			this->DexPanel->Controls->Add(this->DexMod);
			this->DexPanel->Controls->Add(this->DexScore);
			this->DexPanel->Location = System::Drawing::Point(3, 68);
			this->DexPanel->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->DexPanel->Name = L"DexPanel";
			this->DexPanel->Size = System::Drawing::Size(70, 49);
			this->DexPanel->TabIndex = 1;
			// 
			// DexLabel
			// 
			this->DexLabel->AutoSize = true;
			this->DexLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->DexLabel->Location = System::Drawing::Point(20, 4);
			this->DexLabel->Name = L"DexLabel";
			this->DexLabel->Size = System::Drawing::Size(32, 13);
			this->DexLabel->TabIndex = 0;
			this->DexLabel->Text = L"DEX";
			this->DexLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// DexMod
			// 
			this->DexMod->BackColor = System::Drawing::Color::AntiqueWhite;
			this->DexMod->Location = System::Drawing::Point(39, 23);
			this->DexMod->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->DexMod->Name = L"DexMod";
			this->DexMod->ReadOnly = true;
			this->DexMod->Size = System::Drawing::Size(27, 21);
			this->DexMod->TabIndex = 2;
			this->DexMod->TabStop = false;
			this->DexMod->Text = L"0";
			// 
			// DexScore
			// 
			this->DexScore->BackColor = System::Drawing::Color::FloralWhite;
			this->DexScore->Location = System::Drawing::Point(3, 23);
			this->DexScore->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->DexScore->Name = L"DexScore";
			this->DexScore->Size = System::Drawing::Size(27, 21);
			this->DexScore->TabIndex = 1;
			this->DexScore->Text = L"10";
			this->DexScore->TextChanged += gcnew System::EventHandler(this, &MyForm::DexScore_TextChanged);
			// 
			// StrPanel
			// 
			this->StrPanel->Controls->Add(this->StrLabel);
			this->StrPanel->Controls->Add(this->StrMod);
			this->StrPanel->Controls->Add(this->StrScore);
			this->StrPanel->Location = System::Drawing::Point(3, 4);
			this->StrPanel->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->StrPanel->Name = L"StrPanel";
			this->StrPanel->Size = System::Drawing::Size(70, 49);
			this->StrPanel->TabIndex = 0;
			// 
			// StrLabel
			// 
			this->StrLabel->AutoSize = true;
			this->StrLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->StrLabel->Location = System::Drawing::Point(20, 4);
			this->StrLabel->Name = L"StrLabel";
			this->StrLabel->Size = System::Drawing::Size(32, 13);
			this->StrLabel->TabIndex = 0;
			this->StrLabel->Text = L"STR";
			this->StrLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// StrMod
			// 
			this->StrMod->BackColor = System::Drawing::Color::AntiqueWhite;
			this->StrMod->Location = System::Drawing::Point(39, 23);
			this->StrMod->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->StrMod->Name = L"StrMod";
			this->StrMod->ReadOnly = true;
			this->StrMod->Size = System::Drawing::Size(27, 21);
			this->StrMod->TabIndex = 2;
			this->StrMod->TabStop = false;
			this->StrMod->Text = L"0";
			// 
			// StrScore
			// 
			this->StrScore->BackColor = System::Drawing::Color::FloralWhite;
			this->StrScore->Location = System::Drawing::Point(3, 23);
			this->StrScore->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->StrScore->Name = L"StrScore";
			this->StrScore->Size = System::Drawing::Size(27, 21);
			this->StrScore->TabIndex = 1;
			this->StrScore->Text = L"10";
			this->StrScore->TextChanged += gcnew System::EventHandler(this, &MyForm::StrScore_TextChanged);
			// 
			// StrSkillPanel
			// 
			this->StrSkillPanel->Controls->Add(this->StrAthExp);
			this->StrSkillPanel->Controls->Add(this->StrAthleticsMod);
			this->StrSkillPanel->Controls->Add(this->StrSTMod);
			this->StrSkillPanel->Controls->Add(this->StrSTProf);
			this->StrSkillPanel->Controls->Add(this->StrAthleticsProf);
			this->StrSkillPanel->Location = System::Drawing::Point(79, 4);
			this->StrSkillPanel->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->StrSkillPanel->Name = L"StrSkillPanel";
			this->StrSkillPanel->Size = System::Drawing::Size(185, 56);
			this->StrSkillPanel->TabIndex = 6;
			// 
			// StrAthExp
			// 
			this->StrAthExp->AutoSize = true;
			this->StrAthExp->Enabled = false;
			this->StrAthExp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->StrAthExp->Location = System::Drawing::Point(159, 31);
			this->StrAthExp->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->StrAthExp->Name = L"StrAthExp";
			this->StrAthExp->Size = System::Drawing::Size(12, 11);
			this->StrAthExp->TabIndex = 4;
			this->StrAthExp->CheckedChanged += gcnew System::EventHandler(this, &MyForm::StrAthExp_CheckedChanged);
			// 
			// StrAthleticsMod
			// 
			this->StrAthleticsMod->BackColor = System::Drawing::Color::AntiqueWhite;
			this->StrAthleticsMod->Location = System::Drawing::Point(124, 27);
			this->StrAthleticsMod->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->StrAthleticsMod->Name = L"StrAthleticsMod";
			this->StrAthleticsMod->ReadOnly = true;
			this->StrAthleticsMod->Size = System::Drawing::Size(27, 21);
			this->StrAthleticsMod->TabIndex = 3;
			this->StrAthleticsMod->TabStop = false;
			this->StrAthleticsMod->Text = L"0";
			// 
			// StrSTMod
			// 
			this->StrSTMod->BackColor = System::Drawing::Color::AntiqueWhite;
			this->StrSTMod->Location = System::Drawing::Point(124, 1);
			this->StrSTMod->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->StrSTMod->Name = L"StrSTMod";
			this->StrSTMod->ReadOnly = true;
			this->StrSTMod->Size = System::Drawing::Size(27, 21);
			this->StrSTMod->TabIndex = 1;
			this->StrSTMod->TabStop = false;
			this->StrSTMod->Text = L"0";
			// 
			// StrSTProf
			// 
			this->StrSTProf->AutoSize = true;
			this->StrSTProf->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->StrSTProf->Location = System::Drawing::Point(3, 4);
			this->StrSTProf->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->StrSTProf->Name = L"StrSTProf";
			this->StrSTProf->Size = System::Drawing::Size(96, 19);
			this->StrSTProf->TabIndex = 0;
			this->StrSTProf->Text = L"Saving Throws";
			this->StrSTProf->UseVisualStyleBackColor = true;
			this->StrSTProf->CheckedChanged += gcnew System::EventHandler(this, &MyForm::StrSTProf_CheckedChanged);
			// 
			// StrAthleticsProf
			// 
			this->StrAthleticsProf->AutoSize = true;
			this->StrAthleticsProf->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->StrAthleticsProf->Location = System::Drawing::Point(3, 30);
			this->StrAthleticsProf->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->StrAthleticsProf->Name = L"StrAthleticsProf";
			this->StrAthleticsProf->Size = System::Drawing::Size(67, 19);
			this->StrAthleticsProf->TabIndex = 2;
			this->StrAthleticsProf->Text = L"Athletics";
			this->StrAthleticsProf->UseVisualStyleBackColor = true;
			this->StrAthleticsProf->CheckedChanged += gcnew System::EventHandler(this, &MyForm::StrAthleticsProf_CheckedChanged);
			// 
			// ConSkillPanel
			// 
			this->ConSkillPanel->Controls->Add(this->ConSTProf);
			this->ConSkillPanel->Controls->Add(this->ConSTMod);
			this->ConSkillPanel->Location = System::Drawing::Point(79, 185);
			this->ConSkillPanel->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ConSkillPanel->Name = L"ConSkillPanel";
			this->ConSkillPanel->Size = System::Drawing::Size(185, 71);
			this->ConSkillPanel->TabIndex = 8;
			// 
			// ConSTProf
			// 
			this->ConSTProf->AutoSize = true;
			this->ConSTProf->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ConSTProf->Location = System::Drawing::Point(3, 4);
			this->ConSTProf->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ConSTProf->Name = L"ConSTProf";
			this->ConSTProf->Size = System::Drawing::Size(96, 19);
			this->ConSTProf->TabIndex = 0;
			this->ConSTProf->Text = L"Saving Throws";
			this->ConSTProf->UseVisualStyleBackColor = true;
			this->ConSTProf->CheckedChanged += gcnew System::EventHandler(this, &MyForm::ConSTProf_CheckedChanged);
			// 
			// ConSTMod
			// 
			this->ConSTMod->BackColor = System::Drawing::Color::AntiqueWhite;
			this->ConSTMod->Location = System::Drawing::Point(124, 3);
			this->ConSTMod->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ConSTMod->Name = L"ConSTMod";
			this->ConSTMod->ReadOnly = true;
			this->ConSTMod->Size = System::Drawing::Size(27, 21);
			this->ConSTMod->TabIndex = 1;
			this->ConSTMod->TabStop = false;
			this->ConSTMod->Text = L"0";
			// 
			// IntSkillPanel
			// 
			this->IntSkillPanel->Controls->Add(this->IntInvExp);
			this->IntSkillPanel->Controls->Add(this->IntSTProf);
			this->IntSkillPanel->Controls->Add(this->IntHistExp);
			this->IntSkillPanel->Controls->Add(this->IntRelExp);
			this->IntSkillPanel->Controls->Add(this->IntRelMod);
			this->IntSkillPanel->Controls->Add(this->IntArcaExp);
			this->IntSkillPanel->Controls->Add(this->IntNatMod);
			this->IntSkillPanel->Controls->Add(this->IntNatExp);
			this->IntSkillPanel->Controls->Add(this->IntInvMod);
			this->IntSkillPanel->Controls->Add(this->IntHistMod);
			this->IntSkillPanel->Controls->Add(this->IntArcaMod);
			this->IntSkillPanel->Controls->Add(this->IntSTMod);
			this->IntSkillPanel->Controls->Add(this->IntArcanaProf);
			this->IntSkillPanel->Controls->Add(this->IntHistoryProf);
			this->IntSkillPanel->Controls->Add(this->IntReligionProf);
			this->IntSkillPanel->Controls->Add(this->IntNatureProf);
			this->IntSkillPanel->Controls->Add(this->IntInvestProf);
			this->IntSkillPanel->Location = System::Drawing::Point(79, 264);
			this->IntSkillPanel->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->IntSkillPanel->Name = L"IntSkillPanel";
			this->IntSkillPanel->Size = System::Drawing::Size(185, 162);
			this->IntSkillPanel->TabIndex = 9;
			// 
			// IntInvExp
			// 
			this->IntInvExp->AutoSize = true;
			this->IntInvExp->Enabled = false;
			this->IntInvExp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->IntInvExp->Location = System::Drawing::Point(159, 86);
			this->IntInvExp->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->IntInvExp->Name = L"IntInvExp";
			this->IntInvExp->Size = System::Drawing::Size(12, 11);
			this->IntInvExp->TabIndex = 10;
			this->IntInvExp->CheckedChanged += gcnew System::EventHandler(this, &MyForm::IntInvExp_CheckedChanged);
			// 
			// IntSTProf
			// 
			this->IntSTProf->AutoSize = true;
			this->IntSTProf->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->IntSTProf->Location = System::Drawing::Point(3, 4);
			this->IntSTProf->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->IntSTProf->Name = L"IntSTProf";
			this->IntSTProf->Size = System::Drawing::Size(96, 19);
			this->IntSTProf->TabIndex = 0;
			this->IntSTProf->Text = L"Saving Throws";
			this->IntSTProf->UseVisualStyleBackColor = true;
			this->IntSTProf->CheckedChanged += gcnew System::EventHandler(this, &MyForm::IntSTProf_CheckedChanged);
			// 
			// IntHistExp
			// 
			this->IntHistExp->AutoSize = true;
			this->IntHistExp->Enabled = false;
			this->IntHistExp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->IntHistExp->Location = System::Drawing::Point(159, 57);
			this->IntHistExp->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->IntHistExp->Name = L"IntHistExp";
			this->IntHistExp->Size = System::Drawing::Size(12, 11);
			this->IntHistExp->TabIndex = 7;
			this->IntHistExp->CheckedChanged += gcnew System::EventHandler(this, &MyForm::IntHistExp_CheckedChanged);
			// 
			// IntRelExp
			// 
			this->IntRelExp->AutoSize = true;
			this->IntRelExp->Enabled = false;
			this->IntRelExp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->IntRelExp->Location = System::Drawing::Point(159, 138);
			this->IntRelExp->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->IntRelExp->Name = L"IntRelExp";
			this->IntRelExp->Size = System::Drawing::Size(12, 11);
			this->IntRelExp->TabIndex = 16;
			this->IntRelExp->CheckedChanged += gcnew System::EventHandler(this, &MyForm::IntRelExp_CheckedChanged);
			// 
			// IntRelMod
			// 
			this->IntRelMod->BackColor = System::Drawing::Color::AntiqueWhite;
			this->IntRelMod->Location = System::Drawing::Point(124, 134);
			this->IntRelMod->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->IntRelMod->Name = L"IntRelMod";
			this->IntRelMod->ReadOnly = true;
			this->IntRelMod->Size = System::Drawing::Size(27, 21);
			this->IntRelMod->TabIndex = 15;
			this->IntRelMod->TabStop = false;
			this->IntRelMod->Text = L"0";
			// 
			// IntArcaExp
			// 
			this->IntArcaExp->AutoSize = true;
			this->IntArcaExp->Enabled = false;
			this->IntArcaExp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->IntArcaExp->Location = System::Drawing::Point(159, 31);
			this->IntArcaExp->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->IntArcaExp->Name = L"IntArcaExp";
			this->IntArcaExp->Size = System::Drawing::Size(12, 11);
			this->IntArcaExp->TabIndex = 4;
			this->IntArcaExp->CheckedChanged += gcnew System::EventHandler(this, &MyForm::IntArcaExp_CheckedChanged);
			// 
			// IntNatMod
			// 
			this->IntNatMod->BackColor = System::Drawing::Color::AntiqueWhite;
			this->IntNatMod->Location = System::Drawing::Point(124, 108);
			this->IntNatMod->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->IntNatMod->Name = L"IntNatMod";
			this->IntNatMod->ReadOnly = true;
			this->IntNatMod->Size = System::Drawing::Size(27, 21);
			this->IntNatMod->TabIndex = 12;
			this->IntNatMod->TabStop = false;
			this->IntNatMod->Text = L"0";
			// 
			// IntNatExp
			// 
			this->IntNatExp->AutoSize = true;
			this->IntNatExp->Enabled = false;
			this->IntNatExp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->IntNatExp->Location = System::Drawing::Point(159, 110);
			this->IntNatExp->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->IntNatExp->Name = L"IntNatExp";
			this->IntNatExp->Size = System::Drawing::Size(12, 11);
			this->IntNatExp->TabIndex = 13;
			this->IntNatExp->CheckedChanged += gcnew System::EventHandler(this, &MyForm::IntNatExp_CheckedChanged);
			// 
			// IntInvMod
			// 
			this->IntInvMod->BackColor = System::Drawing::Color::AntiqueWhite;
			this->IntInvMod->Location = System::Drawing::Point(124, 80);
			this->IntInvMod->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->IntInvMod->Name = L"IntInvMod";
			this->IntInvMod->ReadOnly = true;
			this->IntInvMod->Size = System::Drawing::Size(27, 21);
			this->IntInvMod->TabIndex = 9;
			this->IntInvMod->TabStop = false;
			this->IntInvMod->Text = L"0";
			// 
			// IntHistMod
			// 
			this->IntHistMod->BackColor = System::Drawing::Color::AntiqueWhite;
			this->IntHistMod->Location = System::Drawing::Point(124, 55);
			this->IntHistMod->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->IntHistMod->Name = L"IntHistMod";
			this->IntHistMod->ReadOnly = true;
			this->IntHistMod->Size = System::Drawing::Size(27, 21);
			this->IntHistMod->TabIndex = 6;
			this->IntHistMod->TabStop = false;
			this->IntHistMod->Text = L"0";
			// 
			// IntArcaMod
			// 
			this->IntArcaMod->BackColor = System::Drawing::Color::AntiqueWhite;
			this->IntArcaMod->Location = System::Drawing::Point(124, 27);
			this->IntArcaMod->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->IntArcaMod->Name = L"IntArcaMod";
			this->IntArcaMod->ReadOnly = true;
			this->IntArcaMod->Size = System::Drawing::Size(27, 21);
			this->IntArcaMod->TabIndex = 3;
			this->IntArcaMod->TabStop = false;
			this->IntArcaMod->Text = L"0";
			// 
			// IntSTMod
			// 
			this->IntSTMod->BackColor = System::Drawing::Color::AntiqueWhite;
			this->IntSTMod->Location = System::Drawing::Point(124, 1);
			this->IntSTMod->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->IntSTMod->Name = L"IntSTMod";
			this->IntSTMod->ReadOnly = true;
			this->IntSTMod->Size = System::Drawing::Size(27, 21);
			this->IntSTMod->TabIndex = 1;
			this->IntSTMod->TabStop = false;
			this->IntSTMod->Text = L"0";
			// 
			// IntArcanaProf
			// 
			this->IntArcanaProf->AutoSize = true;
			this->IntArcanaProf->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->IntArcanaProf->Location = System::Drawing::Point(3, 30);
			this->IntArcanaProf->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->IntArcanaProf->Name = L"IntArcanaProf";
			this->IntArcanaProf->Size = System::Drawing::Size(59, 19);
			this->IntArcanaProf->TabIndex = 2;
			this->IntArcanaProf->Text = L"Arcana";
			this->IntArcanaProf->UseVisualStyleBackColor = true;
			this->IntArcanaProf->CheckedChanged += gcnew System::EventHandler(this, &MyForm::IntArcanaProf_CheckedChanged);
			// 
			// IntHistoryProf
			// 
			this->IntHistoryProf->AutoSize = true;
			this->IntHistoryProf->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->IntHistoryProf->Location = System::Drawing::Point(3, 56);
			this->IntHistoryProf->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->IntHistoryProf->Name = L"IntHistoryProf";
			this->IntHistoryProf->Size = System::Drawing::Size(60, 19);
			this->IntHistoryProf->TabIndex = 5;
			this->IntHistoryProf->Text = L"History";
			this->IntHistoryProf->UseVisualStyleBackColor = true;
			this->IntHistoryProf->CheckedChanged += gcnew System::EventHandler(this, &MyForm::IntHistoryProf_CheckedChanged);
			// 
			// IntReligionProf
			// 
			this->IntReligionProf->AutoSize = true;
			this->IntReligionProf->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->IntReligionProf->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->IntReligionProf->Location = System::Drawing::Point(3, 136);
			this->IntReligionProf->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->IntReligionProf->Name = L"IntReligionProf";
			this->IntReligionProf->Size = System::Drawing::Size(62, 19);
			this->IntReligionProf->TabIndex = 14;
			this->IntReligionProf->Text = L"Religion";
			this->IntReligionProf->UseVisualStyleBackColor = true;
			this->IntReligionProf->CheckedChanged += gcnew System::EventHandler(this, &MyForm::IntReligionProf_CheckedChanged);
			// 
			// IntNatureProf
			// 
			this->IntNatureProf->AutoSize = true;
			this->IntNatureProf->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->IntNatureProf->Location = System::Drawing::Point(3, 109);
			this->IntNatureProf->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->IntNatureProf->Name = L"IntNatureProf";
			this->IntNatureProf->Size = System::Drawing::Size(58, 19);
			this->IntNatureProf->TabIndex = 11;
			this->IntNatureProf->Text = L"Nature";
			this->IntNatureProf->UseVisualStyleBackColor = true;
			this->IntNatureProf->CheckedChanged += gcnew System::EventHandler(this, &MyForm::IntNatureProf_CheckedChanged);
			// 
			// IntInvestProf
			// 
			this->IntInvestProf->AutoSize = true;
			this->IntInvestProf->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->IntInvestProf->Location = System::Drawing::Point(3, 83);
			this->IntInvestProf->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->IntInvestProf->Name = L"IntInvestProf";
			this->IntInvestProf->Size = System::Drawing::Size(87, 19);
			this->IntInvestProf->TabIndex = 8;
			this->IntInvestProf->Text = L"Investigation";
			this->IntInvestProf->UseVisualStyleBackColor = true;
			this->IntInvestProf->CheckedChanged += gcnew System::EventHandler(this, &MyForm::IntInvestProf_CheckedChanged);
			// 
			// WisSkillPanel
			// 
			this->WisSkillPanel->Controls->Add(this->WisMedExp);
			this->WisSkillPanel->Controls->Add(this->WisST);
			this->WisSkillPanel->Controls->Add(this->WisSurvExp);
			this->WisSkillPanel->Controls->Add(this->WisSurvMod);
			this->WisSkillPanel->Controls->Add(this->WisInsExp);
			this->WisSkillPanel->Controls->Add(this->WisPercMod);
			this->WisSkillPanel->Controls->Add(this->WisMedMod);
			this->WisSkillPanel->Controls->Add(this->WisAHExp);
			this->WisSkillPanel->Controls->Add(this->WisInsMod);
			this->WisSkillPanel->Controls->Add(this->WisAHMod);
			this->WisSkillPanel->Controls->Add(this->WisPercExp);
			this->WisSkillPanel->Controls->Add(this->WisSTMod);
			this->WisSkillPanel->Controls->Add(this->WisAnimProf);
			this->WisSkillPanel->Controls->Add(this->WisInsProf);
			this->WisSkillPanel->Controls->Add(this->WisSurvProf);
			this->WisSkillPanel->Controls->Add(this->WisPercProf);
			this->WisSkillPanel->Controls->Add(this->WisMedProf);
			this->WisSkillPanel->Location = System::Drawing::Point(79, 434);
			this->WisSkillPanel->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->WisSkillPanel->Name = L"WisSkillPanel";
			this->WisSkillPanel->Size = System::Drawing::Size(185, 162);
			this->WisSkillPanel->TabIndex = 10;
			// 
			// WisMedExp
			// 
			this->WisMedExp->AutoSize = true;
			this->WisMedExp->Enabled = false;
			this->WisMedExp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->WisMedExp->Location = System::Drawing::Point(159, 86);
			this->WisMedExp->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->WisMedExp->Name = L"WisMedExp";
			this->WisMedExp->Size = System::Drawing::Size(12, 11);
			this->WisMedExp->TabIndex = 10;
			this->WisMedExp->CheckedChanged += gcnew System::EventHandler(this, &MyForm::WisMedExp_CheckedChanged);
			// 
			// WisST
			// 
			this->WisST->AutoSize = true;
			this->WisST->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->WisST->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->WisST->Location = System::Drawing::Point(3, 4);
			this->WisST->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->WisST->Name = L"WisST";
			this->WisST->Size = System::Drawing::Size(96, 19);
			this->WisST->TabIndex = 0;
			this->WisST->Text = L"Saving Throws";
			this->WisST->UseVisualStyleBackColor = true;
			this->WisST->CheckedChanged += gcnew System::EventHandler(this, &MyForm::WisST_CheckedChanged);
			// 
			// WisSurvExp
			// 
			this->WisSurvExp->AutoSize = true;
			this->WisSurvExp->Enabled = false;
			this->WisSurvExp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->WisSurvExp->Location = System::Drawing::Point(159, 138);
			this->WisSurvExp->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->WisSurvExp->Name = L"WisSurvExp";
			this->WisSurvExp->Size = System::Drawing::Size(12, 11);
			this->WisSurvExp->TabIndex = 16;
			this->WisSurvExp->CheckedChanged += gcnew System::EventHandler(this, &MyForm::WisSurvExp_CheckedChanged);
			// 
			// WisSurvMod
			// 
			this->WisSurvMod->BackColor = System::Drawing::Color::AntiqueWhite;
			this->WisSurvMod->Location = System::Drawing::Point(124, 134);
			this->WisSurvMod->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->WisSurvMod->Name = L"WisSurvMod";
			this->WisSurvMod->ReadOnly = true;
			this->WisSurvMod->Size = System::Drawing::Size(27, 21);
			this->WisSurvMod->TabIndex = 15;
			this->WisSurvMod->TabStop = false;
			this->WisSurvMod->Text = L"0";
			// 
			// WisInsExp
			// 
			this->WisInsExp->AutoSize = true;
			this->WisInsExp->Enabled = false;
			this->WisInsExp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->WisInsExp->Location = System::Drawing::Point(159, 57);
			this->WisInsExp->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->WisInsExp->Name = L"WisInsExp";
			this->WisInsExp->Size = System::Drawing::Size(12, 11);
			this->WisInsExp->TabIndex = 7;
			this->WisInsExp->CheckedChanged += gcnew System::EventHandler(this, &MyForm::WisInsExp_CheckedChanged);
			// 
			// WisPercMod
			// 
			this->WisPercMod->BackColor = System::Drawing::Color::AntiqueWhite;
			this->WisPercMod->Location = System::Drawing::Point(124, 108);
			this->WisPercMod->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->WisPercMod->Name = L"WisPercMod";
			this->WisPercMod->ReadOnly = true;
			this->WisPercMod->Size = System::Drawing::Size(27, 21);
			this->WisPercMod->TabIndex = 12;
			this->WisPercMod->TabStop = false;
			this->WisPercMod->Text = L"0";
			// 
			// WisMedMod
			// 
			this->WisMedMod->BackColor = System::Drawing::Color::AntiqueWhite;
			this->WisMedMod->Location = System::Drawing::Point(124, 80);
			this->WisMedMod->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->WisMedMod->Name = L"WisMedMod";
			this->WisMedMod->ReadOnly = true;
			this->WisMedMod->Size = System::Drawing::Size(27, 21);
			this->WisMedMod->TabIndex = 9;
			this->WisMedMod->TabStop = false;
			this->WisMedMod->Text = L"0";
			// 
			// WisAHExp
			// 
			this->WisAHExp->AutoSize = true;
			this->WisAHExp->Enabled = false;
			this->WisAHExp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->WisAHExp->Location = System::Drawing::Point(159, 31);
			this->WisAHExp->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->WisAHExp->Name = L"WisAHExp";
			this->WisAHExp->Size = System::Drawing::Size(12, 11);
			this->WisAHExp->TabIndex = 4;
			this->WisAHExp->CheckedChanged += gcnew System::EventHandler(this, &MyForm::WisAHExp_CheckedChanged);
			// 
			// WisInsMod
			// 
			this->WisInsMod->BackColor = System::Drawing::Color::AntiqueWhite;
			this->WisInsMod->Location = System::Drawing::Point(124, 55);
			this->WisInsMod->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->WisInsMod->Name = L"WisInsMod";
			this->WisInsMod->ReadOnly = true;
			this->WisInsMod->Size = System::Drawing::Size(27, 21);
			this->WisInsMod->TabIndex = 6;
			this->WisInsMod->TabStop = false;
			this->WisInsMod->Text = L"0";
			// 
			// WisAHMod
			// 
			this->WisAHMod->BackColor = System::Drawing::Color::AntiqueWhite;
			this->WisAHMod->Location = System::Drawing::Point(124, 27);
			this->WisAHMod->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->WisAHMod->Name = L"WisAHMod";
			this->WisAHMod->ReadOnly = true;
			this->WisAHMod->Size = System::Drawing::Size(27, 21);
			this->WisAHMod->TabIndex = 3;
			this->WisAHMod->TabStop = false;
			this->WisAHMod->Text = L"0";
			// 
			// WisPercExp
			// 
			this->WisPercExp->AutoSize = true;
			this->WisPercExp->Enabled = false;
			this->WisPercExp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->WisPercExp->Location = System::Drawing::Point(159, 110);
			this->WisPercExp->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->WisPercExp->Name = L"WisPercExp";
			this->WisPercExp->Size = System::Drawing::Size(12, 11);
			this->WisPercExp->TabIndex = 13;
			this->WisPercExp->CheckedChanged += gcnew System::EventHandler(this, &MyForm::WisPercExp_CheckedChanged);
			// 
			// WisSTMod
			// 
			this->WisSTMod->BackColor = System::Drawing::Color::AntiqueWhite;
			this->WisSTMod->Location = System::Drawing::Point(124, 1);
			this->WisSTMod->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->WisSTMod->Name = L"WisSTMod";
			this->WisSTMod->ReadOnly = true;
			this->WisSTMod->Size = System::Drawing::Size(27, 21);
			this->WisSTMod->TabIndex = 1;
			this->WisSTMod->TabStop = false;
			this->WisSTMod->Text = L"0";
			// 
			// WisAnimProf
			// 
			this->WisAnimProf->AutoSize = true;
			this->WisAnimProf->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->WisAnimProf->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->WisAnimProf->Location = System::Drawing::Point(3, 30);
			this->WisAnimProf->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->WisAnimProf->Name = L"WisAnimProf";
			this->WisAnimProf->Size = System::Drawing::Size(109, 19);
			this->WisAnimProf->TabIndex = 2;
			this->WisAnimProf->Text = L"Animal Handling";
			this->WisAnimProf->UseVisualStyleBackColor = true;
			this->WisAnimProf->CheckedChanged += gcnew System::EventHandler(this, &MyForm::WisAnimProf_CheckedChanged);
			// 
			// WisInsProf
			// 
			this->WisInsProf->AutoSize = true;
			this->WisInsProf->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->WisInsProf->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->WisInsProf->Location = System::Drawing::Point(3, 56);
			this->WisInsProf->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->WisInsProf->Name = L"WisInsProf";
			this->WisInsProf->Size = System::Drawing::Size(57, 19);
			this->WisInsProf->TabIndex = 5;
			this->WisInsProf->Text = L"Insight";
			this->WisInsProf->UseVisualStyleBackColor = true;
			this->WisInsProf->CheckedChanged += gcnew System::EventHandler(this, &MyForm::WisInsProf_CheckedChanged);
			// 
			// WisSurvProf
			// 
			this->WisSurvProf->AutoSize = true;
			this->WisSurvProf->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->WisSurvProf->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->WisSurvProf->Location = System::Drawing::Point(3, 136);
			this->WisSurvProf->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->WisSurvProf->Name = L"WisSurvProf";
			this->WisSurvProf->Size = System::Drawing::Size(64, 19);
			this->WisSurvProf->TabIndex = 14;
			this->WisSurvProf->Text = L"Survival";
			this->WisSurvProf->UseVisualStyleBackColor = true;
			this->WisSurvProf->CheckedChanged += gcnew System::EventHandler(this, &MyForm::WisSurvProf_CheckedChanged);
			// 
			// WisPercProf
			// 
			this->WisPercProf->AutoSize = true;
			this->WisPercProf->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->WisPercProf->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->WisPercProf->Location = System::Drawing::Point(3, 109);
			this->WisPercProf->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->WisPercProf->Name = L"WisPercProf";
			this->WisPercProf->Size = System::Drawing::Size(75, 19);
			this->WisPercProf->TabIndex = 11;
			this->WisPercProf->Text = L"Perception";
			this->WisPercProf->UseVisualStyleBackColor = true;
			this->WisPercProf->CheckedChanged += gcnew System::EventHandler(this, &MyForm::WisPercProf_CheckedChanged);
			// 
			// WisMedProf
			// 
			this->WisMedProf->AutoSize = true;
			this->WisMedProf->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->WisMedProf->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->WisMedProf->Location = System::Drawing::Point(3, 83);
			this->WisMedProf->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->WisMedProf->Name = L"WisMedProf";
			this->WisMedProf->Size = System::Drawing::Size(67, 19);
			this->WisMedProf->TabIndex = 8;
			this->WisMedProf->Text = L"Medicine";
			this->WisMedProf->UseVisualStyleBackColor = true;
			this->WisMedProf->CheckedChanged += gcnew System::EventHandler(this, &MyForm::WisMedProf_CheckedChanged);
			// 
			// DefenseGroup
			// 
			this->DefenseGroup->Controls->Add(this->tableLayoutPanel4);
			this->DefenseGroup->Location = System::Drawing::Point(287, 4);
			this->DefenseGroup->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->DefenseGroup->Name = L"DefenseGroup";
			this->DefenseGroup->Padding = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->DefenseGroup->Size = System::Drawing::Size(283, 457);
			this->DefenseGroup->TabIndex = 1;
			this->DefenseGroup->TabStop = false;
			this->DefenseGroup->Text = L"Defense";
			// 
			// tableLayoutPanel4
			// 
			this->tableLayoutPanel4->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->tableLayoutPanel4->ColumnCount = 1;
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel4->Controls->Add(this->tableLayoutPanel5, 0, 0);
			this->tableLayoutPanel4->Controls->Add(this->tableLayoutPanel6, 0, 4);
			this->tableLayoutPanel4->Controls->Add(this->TempHPTable, 0, 3);
			this->tableLayoutPanel4->Controls->Add(this->CurHPTable, 0, 2);
			this->tableLayoutPanel4->Controls->Add(this->tableLayoutPanel10, 0, 1);
			this->tableLayoutPanel4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel4->Location = System::Drawing::Point(3, 18);
			this->tableLayoutPanel4->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 5;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 31)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel4->Size = System::Drawing::Size(277, 435);
			this->tableLayoutPanel4->TabIndex = 0;
			// 
			// tableLayoutPanel5
			// 
			this->tableLayoutPanel5->ColumnCount = 3;
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel5->Controls->Add(this->tableLayoutPanel7, 0, 0);
			this->tableLayoutPanel5->Controls->Add(this->tableLayoutPanel8, 1, 0);
			this->tableLayoutPanel5->Controls->Add(this->tableLayoutPanel9, 2, 0);
			this->tableLayoutPanel5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel5->Location = System::Drawing::Point(3, 4);
			this->tableLayoutPanel5->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
			this->tableLayoutPanel5->RowCount = 1;
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel5->Size = System::Drawing::Size(271, 93);
			this->tableLayoutPanel5->TabIndex = 0;
			// 
			// tableLayoutPanel7
			// 
			this->tableLayoutPanel7->ColumnCount = 1;
			this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel7->Controls->Add(this->label1, 0, 1);
			this->tableLayoutPanel7->Controls->Add(this->ACButton, 0, 0);
			this->tableLayoutPanel7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel7->Location = System::Drawing::Point(3, 4);
			this->tableLayoutPanel7->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->tableLayoutPanel7->Name = L"tableLayoutPanel7";
			this->tableLayoutPanel7->RowCount = 2;
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 80)));
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel7->Size = System::Drawing::Size(84, 85);
			this->tableLayoutPanel7->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label1->Location = System::Drawing::Point(3, 68);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(78, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Armor Class";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ACButton
			// 
			this->ACButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->ACButton->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->ACButton->Location = System::Drawing::Point(3, 4);
			this->ACButton->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ACButton->Name = L"ACButton";
			this->ACButton->Size = System::Drawing::Size(78, 60);
			this->ACButton->TabIndex = 1;
			this->ACButton->Text = L"10";
			this->ACButton->UseVisualStyleBackColor = true;
			this->ACButton->Click += gcnew System::EventHandler(this, &MyForm::ACButton_Click);
			// 
			// tableLayoutPanel8
			// 
			this->tableLayoutPanel8->ColumnCount = 1;
			this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel8->Controls->Add(this->label2, 0, 1);
			this->tableLayoutPanel8->Controls->Add(this->UpdateInit, 0, 0);
			this->tableLayoutPanel8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel8->Location = System::Drawing::Point(93, 4);
			this->tableLayoutPanel8->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->tableLayoutPanel8->Name = L"tableLayoutPanel8";
			this->tableLayoutPanel8->RowCount = 2;
			this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 80)));
			this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel8->Size = System::Drawing::Size(84, 85);
			this->tableLayoutPanel8->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label2->Location = System::Drawing::Point(3, 68);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Initiative";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// UpdateInit
			// 
			this->UpdateInit->BackColor = System::Drawing::Color::FloralWhite;
			this->UpdateInit->Dock = System::Windows::Forms::DockStyle::Fill;
			this->UpdateInit->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->UpdateInit->Location = System::Drawing::Point(3, 3);
			this->UpdateInit->Name = L"UpdateInit";
			this->UpdateInit->Size = System::Drawing::Size(78, 62);
			this->UpdateInit->TabIndex = 0;
			this->UpdateInit->Text = L"0";
			this->UpdateInit->UseVisualStyleBackColor = false;
			this->UpdateInit->Click += gcnew System::EventHandler(this, &MyForm::UpdateButton_Click);
			// 
			// tableLayoutPanel9
			// 
			this->tableLayoutPanel9->ColumnCount = 1;
			this->tableLayoutPanel9->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel9->Controls->Add(this->label3, 0, 1);
			this->tableLayoutPanel9->Controls->Add(this->textBox1, 0, 0);
			this->tableLayoutPanel9->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel9->Location = System::Drawing::Point(183, 4);
			this->tableLayoutPanel9->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->tableLayoutPanel9->Name = L"tableLayoutPanel9";
			this->tableLayoutPanel9->RowCount = 2;
			this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 80)));
			this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel9->Size = System::Drawing::Size(85, 85);
			this->tableLayoutPanel9->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label3->Location = System::Drawing::Point(3, 68);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(79, 17);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Speed";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FloralWhite;
			this->textBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox1->Location = System::Drawing::Point(3, 3);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(79, 62);
			this->textBox1->TabIndex = 2;
			// 
			// tableLayoutPanel6
			// 
			this->tableLayoutPanel6->ColumnCount = 2;
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel6->Location = System::Drawing::Point(3, 338);
			this->tableLayoutPanel6->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->tableLayoutPanel6->Name = L"tableLayoutPanel6";
			this->tableLayoutPanel6->RowCount = 1;
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel6->Size = System::Drawing::Size(271, 93);
			this->tableLayoutPanel6->TabIndex = 1;
			// 
			// TempHPTable
			// 
			this->TempHPTable->ColumnCount = 1;
			this->TempHPTable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->TempHPTable->Controls->Add(this->TempHPLabel, 0, 1);
			this->TempHPTable->Controls->Add(this->TempHP, 0, 0);
			this->TempHPTable->Dock = System::Windows::Forms::DockStyle::Fill;
			this->TempHPTable->Location = System::Drawing::Point(3, 236);
			this->TempHPTable->Name = L"TempHPTable";
			this->TempHPTable->RowCount = 2;
			this->TempHPTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 80)));
			this->TempHPTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->TempHPTable->Size = System::Drawing::Size(271, 95);
			this->TempHPTable->TabIndex = 2;
			// 
			// TempHPLabel
			// 
			this->TempHPLabel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->TempHPLabel->AutoSize = true;
			this->TempHPLabel->Location = System::Drawing::Point(78, 78);
			this->TempHPLabel->Name = L"TempHPLabel";
			this->TempHPLabel->Size = System::Drawing::Size(115, 15);
			this->TempHPLabel->TabIndex = 1;
			this->TempHPLabel->Text = L"Temporary Hit Points";
			// 
			// TempHP
			// 
			this->TempHP->BackColor = System::Drawing::Color::FloralWhite;
			this->TempHP->Dock = System::Windows::Forms::DockStyle::Fill;
			this->TempHP->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->TempHP->Location = System::Drawing::Point(3, 3);
			this->TempHP->Multiline = true;
			this->TempHP->Name = L"TempHP";
			this->TempHP->Size = System::Drawing::Size(265, 70);
			this->TempHP->TabIndex = 2;
			this->TempHP->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// CurHPTable
			// 
			this->CurHPTable->ColumnCount = 1;
			this->CurHPTable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->CurHPTable->Controls->Add(this->CurHPLabel, 0, 1);
			this->CurHPTable->Controls->Add(this->tableLayoutPanel11, 0, 0);
			this->CurHPTable->Dock = System::Windows::Forms::DockStyle::Fill;
			this->CurHPTable->Location = System::Drawing::Point(3, 135);
			this->CurHPTable->Name = L"CurHPTable";
			this->CurHPTable->RowCount = 2;
			this->CurHPTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 80)));
			this->CurHPTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->CurHPTable->Size = System::Drawing::Size(271, 95);
			this->CurHPTable->TabIndex = 3;
			// 
			// CurHPLabel
			// 
			this->CurHPLabel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->CurHPLabel->AutoSize = true;
			this->CurHPLabel->Location = System::Drawing::Point(86, 78);
			this->CurHPLabel->Name = L"CurHPLabel";
			this->CurHPLabel->Size = System::Drawing::Size(98, 15);
			this->CurHPLabel->TabIndex = 1;
			this->CurHPLabel->Text = L"Current Hit Points";
			// 
			// tableLayoutPanel11
			// 
			this->tableLayoutPanel11->ColumnCount = 3;
			this->tableLayoutPanel11->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel11->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel11->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel11->Controls->Add(this->tableLayoutPanel12, 0, 0);
			this->tableLayoutPanel11->Controls->Add(this->tableLayoutPanel13, 2, 0);
			this->tableLayoutPanel11->Controls->Add(this->CurHP, 1, 0);
			this->tableLayoutPanel11->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel11->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel11->Name = L"tableLayoutPanel11";
			this->tableLayoutPanel11->RowCount = 1;
			this->tableLayoutPanel11->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel11->Size = System::Drawing::Size(265, 70);
			this->tableLayoutPanel11->TabIndex = 2;
			// 
			// tableLayoutPanel12
			// 
			this->tableLayoutPanel12->ColumnCount = 1;
			this->tableLayoutPanel12->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel12->Controls->Add(this->HealHP, 0, 0);
			this->tableLayoutPanel12->Controls->Add(this->HealButton, 0, 1);
			this->tableLayoutPanel12->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel12->Name = L"tableLayoutPanel12";
			this->tableLayoutPanel12->RowCount = 2;
			this->tableLayoutPanel12->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel12->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel12->Size = System::Drawing::Size(82, 64);
			this->tableLayoutPanel12->TabIndex = 0;
			// 
			// HealHP
			// 
			this->HealHP->BackColor = System::Drawing::Color::FloralWhite;
			this->HealHP->Location = System::Drawing::Point(3, 3);
			this->HealHP->Name = L"HealHP";
			this->HealHP->Size = System::Drawing::Size(76, 21);
			this->HealHP->TabIndex = 0;
			// 
			// HealButton
			// 
			this->HealButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->HealButton->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->HealButton->ForeColor = System::Drawing::Color::ForestGreen;
			this->HealButton->Location = System::Drawing::Point(3, 30);
			this->HealButton->Name = L"HealButton";
			this->HealButton->Size = System::Drawing::Size(76, 31);
			this->HealButton->TabIndex = 1;
			this->HealButton->Text = L"Heal!";
			this->HealButton->UseVisualStyleBackColor = true;
			this->HealButton->Click += gcnew System::EventHandler(this, &MyForm::HealButton_Click);
			// 
			// tableLayoutPanel13
			// 
			this->tableLayoutPanel13->ColumnCount = 1;
			this->tableLayoutPanel13->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel13->Controls->Add(this->LoseHP, 0, 0);
			this->tableLayoutPanel13->Controls->Add(this->LoseButton, 0, 1);
			this->tableLayoutPanel13->Location = System::Drawing::Point(179, 3);
			this->tableLayoutPanel13->Name = L"tableLayoutPanel13";
			this->tableLayoutPanel13->RowCount = 2;
			this->tableLayoutPanel13->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel13->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel13->Size = System::Drawing::Size(83, 64);
			this->tableLayoutPanel13->TabIndex = 1;
			// 
			// LoseHP
			// 
			this->LoseHP->BackColor = System::Drawing::Color::FloralWhite;
			this->LoseHP->Location = System::Drawing::Point(3, 3);
			this->LoseHP->Name = L"LoseHP";
			this->LoseHP->Size = System::Drawing::Size(77, 21);
			this->LoseHP->TabIndex = 0;
			// 
			// LoseButton
			// 
			this->LoseButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->LoseButton->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->LoseButton->ForeColor = System::Drawing::Color::Tomato;
			this->LoseButton->Location = System::Drawing::Point(3, 30);
			this->LoseButton->Name = L"LoseButton";
			this->LoseButton->Size = System::Drawing::Size(77, 31);
			this->LoseButton->TabIndex = 1;
			this->LoseButton->Text = L"Damage";
			this->LoseButton->UseVisualStyleBackColor = true;
			this->LoseButton->Click += gcnew System::EventHandler(this, &MyForm::LoseButton_Click);
			// 
			// CurHP
			// 
			this->CurHP->AutoSize = true;
			this->CurHP->Dock = System::Windows::Forms::DockStyle::Fill;
			this->CurHP->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->CurHP->Location = System::Drawing::Point(91, 0);
			this->CurHP->Name = L"CurHP";
			this->CurHP->Size = System::Drawing::Size(82, 70);
			this->CurHP->TabIndex = 2;
			this->CurHP->Text = L"0";
			this->CurHP->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel10
			// 
			this->tableLayoutPanel10->ColumnCount = 2;
			this->tableLayoutPanel10->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel10->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				156)));
			this->tableLayoutPanel10->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->tableLayoutPanel10->Controls->Add(this->HPMax, 1, 0);
			this->tableLayoutPanel10->Controls->Add(this->HPMaxLabel, 0, 0);
			this->tableLayoutPanel10->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel10->Location = System::Drawing::Point(3, 104);
			this->tableLayoutPanel10->Name = L"tableLayoutPanel10";
			this->tableLayoutPanel10->RowCount = 1;
			this->tableLayoutPanel10->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel10->Size = System::Drawing::Size(271, 25);
			this->tableLayoutPanel10->TabIndex = 4;
			// 
			// HPMax
			// 
			this->HPMax->BackColor = System::Drawing::Color::FloralWhite;
			this->HPMax->Dock = System::Windows::Forms::DockStyle::Fill;
			this->HPMax->Location = System::Drawing::Point(118, 3);
			this->HPMax->Name = L"HPMax";
			this->HPMax->Size = System::Drawing::Size(150, 21);
			this->HPMax->TabIndex = 0;
			this->HPMax->Text = L"0";
			this->HPMax->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// HPMaxLabel
			// 
			this->HPMaxLabel->AutoSize = true;
			this->HPMaxLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->HPMaxLabel->Location = System::Drawing::Point(3, 0);
			this->HPMaxLabel->Name = L"HPMaxLabel";
			this->HPMaxLabel->Size = System::Drawing::Size(109, 25);
			this->HPMaxLabel->TabIndex = 1;
			this->HPMaxLabel->Text = L"Hit Point Maximum";
			this->HPMaxLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// BasicInfoGroup
			// 
			this->BasicInfoGroup->Controls->Add(this->tableLayoutPanel3);
			this->BasicInfoGroup->Dock = System::Windows::Forms::DockStyle::Top;
			this->BasicInfoGroup->Location = System::Drawing::Point(3, 4);
			this->BasicInfoGroup->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->BasicInfoGroup->MinimumSize = System::Drawing::Size(570, 173);
			this->BasicInfoGroup->Name = L"BasicInfoGroup";
			this->BasicInfoGroup->Padding = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->BasicInfoGroup->Size = System::Drawing::Size(590, 173);
			this->BasicInfoGroup->TabIndex = 0;
			this->BasicInfoGroup->TabStop = false;
			this->BasicInfoGroup->Text = L"Basic Info";
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->ColumnCount = 2;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				45.95959F)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				54.04041F)));
			this->tableLayoutPanel3->Controls->Add(this->CharInfoPanel, 0, 0);
			this->tableLayoutPanel3->Controls->Add(this->ClassPanel, 1, 0);
			this->tableLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel3->Location = System::Drawing::Point(3, 18);
			this->tableLayoutPanel3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->tableLayoutPanel3->MinimumSize = System::Drawing::Size(570, 151);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 1;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(584, 151);
			this->tableLayoutPanel3->TabIndex = 0;
			// 
			// CharInfoPanel
			// 
			this->CharInfoPanel->Controls->Add(this->NameLabel);
			this->CharInfoPanel->Controls->Add(this->MonsterCheckBox);
			this->CharInfoPanel->Controls->Add(this->NameVal);
			this->CharInfoPanel->Controls->Add(this->BGLabel);
			this->CharInfoPanel->Controls->Add(this->AlignmentVal);
			this->CharInfoPanel->Controls->Add(this->RaceLabel);
			this->CharInfoPanel->Controls->Add(this->AlignmentLabel);
			this->CharInfoPanel->Controls->Add(this->RaceVal);
			this->CharInfoPanel->Controls->Add(this->BGVal);
			this->CharInfoPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->CharInfoPanel->Location = System::Drawing::Point(3, 4);
			this->CharInfoPanel->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->CharInfoPanel->Name = L"CharInfoPanel";
			this->CharInfoPanel->Size = System::Drawing::Size(262, 143);
			this->CharInfoPanel->TabIndex = 0;
			// 
			// NameLabel
			// 
			this->NameLabel->AutoSize = true;
			this->NameLabel->Location = System::Drawing::Point(3, 7);
			this->NameLabel->Name = L"NameLabel";
			this->NameLabel->Size = System::Drawing::Size(88, 15);
			this->NameLabel->TabIndex = 0;
			this->NameLabel->Text = L"Character Name";
			// 
			// MonsterCheckBox
			// 
			this->MonsterCheckBox->AutoSize = true;
			this->MonsterCheckBox->Location = System::Drawing::Point(109, 124);
			this->MonsterCheckBox->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->MonsterCheckBox->Name = L"MonsterCheckBox";
			this->MonsterCheckBox->Size = System::Drawing::Size(71, 19);
			this->MonsterCheckBox->TabIndex = 8;
			this->MonsterCheckBox->Text = L"Monster\?";
			this->MonsterCheckBox->UseVisualStyleBackColor = true;
			this->MonsterCheckBox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::MonsterCheckBox_CheckedChanged);
			// 
			// NameVal
			// 
			this->NameVal->BackColor = System::Drawing::Color::FloralWhite;
			this->NameVal->Location = System::Drawing::Point(109, 4);
			this->NameVal->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->NameVal->Name = L"NameVal";
			this->NameVal->Size = System::Drawing::Size(118, 21);
			this->NameVal->TabIndex = 1;
			// 
			// BGLabel
			// 
			this->BGLabel->AutoSize = true;
			this->BGLabel->Location = System::Drawing::Point(26, 67);
			this->BGLabel->Name = L"BGLabel";
			this->BGLabel->Size = System::Drawing::Size(67, 15);
			this->BGLabel->TabIndex = 4;
			this->BGLabel->Text = L"Background";
			// 
			// AlignmentVal
			// 
			this->AlignmentVal->BackColor = System::Drawing::Color::FloralWhite;
			this->AlignmentVal->Location = System::Drawing::Point(109, 94);
			this->AlignmentVal->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->AlignmentVal->Name = L"AlignmentVal";
			this->AlignmentVal->Size = System::Drawing::Size(118, 21);
			this->AlignmentVal->TabIndex = 7;
			// 
			// RaceLabel
			// 
			this->RaceLabel->AutoSize = true;
			this->RaceLabel->Location = System::Drawing::Point(63, 37);
			this->RaceLabel->Name = L"RaceLabel";
			this->RaceLabel->Size = System::Drawing::Size(30, 15);
			this->RaceLabel->TabIndex = 2;
			this->RaceLabel->Text = L"Race";
			// 
			// AlignmentLabel
			// 
			this->AlignmentLabel->AutoSize = true;
			this->AlignmentLabel->Location = System::Drawing::Point(40, 97);
			this->AlignmentLabel->Name = L"AlignmentLabel";
			this->AlignmentLabel->Size = System::Drawing::Size(59, 15);
			this->AlignmentLabel->TabIndex = 6;
			this->AlignmentLabel->Text = L"Alignment";
			// 
			// RaceVal
			// 
			this->RaceVal->BackColor = System::Drawing::Color::FloralWhite;
			this->RaceVal->Location = System::Drawing::Point(109, 34);
			this->RaceVal->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->RaceVal->Name = L"RaceVal";
			this->RaceVal->Size = System::Drawing::Size(118, 21);
			this->RaceVal->TabIndex = 3;
			// 
			// BGVal
			// 
			this->BGVal->BackColor = System::Drawing::Color::FloralWhite;
			this->BGVal->Location = System::Drawing::Point(109, 64);
			this->BGVal->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->BGVal->Name = L"BGVal";
			this->BGVal->Size = System::Drawing::Size(118, 21);
			this->BGVal->TabIndex = 5;
			// 
			// ClassPanel
			// 
			this->ClassPanel->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->ClassPanel->Controls->Add(this->Class4Lvl);
			this->ClassPanel->Controls->Add(this->Class2Lvl);
			this->ClassPanel->Controls->Add(this->Class1Lvl);
			this->ClassPanel->Controls->Add(this->Class3Lvl);
			this->ClassPanel->Controls->Add(this->Class4Name);
			this->ClassPanel->Controls->Add(this->Class2Name);
			this->ClassPanel->Controls->Add(this->Class1Name);
			this->ClassPanel->Controls->Add(this->Class3Name);
			this->ClassPanel->Controls->Add(this->ClassLabel);
			this->ClassPanel->Controls->Add(this->ProfBonus);
			this->ClassPanel->Controls->Add(this->ProfBonusLabel);
			this->ClassPanel->Location = System::Drawing::Point(272, 4);
			this->ClassPanel->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ClassPanel->Name = L"ClassPanel";
			this->ClassPanel->Size = System::Drawing::Size(309, 143);
			this->ClassPanel->TabIndex = 1;
			// 
			// Class4Lvl
			// 
			this->Class4Lvl->Location = System::Drawing::Point(272, 61);
			this->Class4Lvl->Name = L"Class4Lvl";
			this->Class4Lvl->Size = System::Drawing::Size(34, 21);
			this->Class4Lvl->TabIndex = 5;
			this->Class4Lvl->TextChanged += gcnew System::EventHandler(this, &MyForm::Class4Lvl_TextChanged);
			// 
			// Class2Lvl
			// 
			this->Class2Lvl->Location = System::Drawing::Point(121, 61);
			this->Class2Lvl->Name = L"Class2Lvl";
			this->Class2Lvl->Size = System::Drawing::Size(34, 21);
			this->Class2Lvl->TabIndex = 5;
			this->Class2Lvl->TextChanged += gcnew System::EventHandler(this, &MyForm::Class2Lvl_TextChanged);
			// 
			// Class1Lvl
			// 
			this->Class1Lvl->Location = System::Drawing::Point(121, 34);
			this->Class1Lvl->Name = L"Class1Lvl";
			this->Class1Lvl->Size = System::Drawing::Size(34, 21);
			this->Class1Lvl->TabIndex = 5;
			this->Class1Lvl->TextChanged += gcnew System::EventHandler(this, &MyForm::Class1Lvl_TextChanged);
			// 
			// Class3Lvl
			// 
			this->Class3Lvl->Location = System::Drawing::Point(272, 34);
			this->Class3Lvl->Name = L"Class3Lvl";
			this->Class3Lvl->Size = System::Drawing::Size(34, 21);
			this->Class3Lvl->TabIndex = 5;
			this->Class3Lvl->TextChanged += gcnew System::EventHandler(this, &MyForm::Class3Lvl_TextChanged);
			// 
			// Class4Name
			// 
			this->Class4Name->Location = System::Drawing::Point(166, 61);
			this->Class4Name->Name = L"Class4Name";
			this->Class4Name->Size = System::Drawing::Size(100, 21);
			this->Class4Name->TabIndex = 4;
			// 
			// Class2Name
			// 
			this->Class2Name->Location = System::Drawing::Point(15, 61);
			this->Class2Name->Name = L"Class2Name";
			this->Class2Name->Size = System::Drawing::Size(100, 21);
			this->Class2Name->TabIndex = 4;
			// 
			// Class1Name
			// 
			this->Class1Name->Location = System::Drawing::Point(15, 34);
			this->Class1Name->Name = L"Class1Name";
			this->Class1Name->Size = System::Drawing::Size(100, 21);
			this->Class1Name->TabIndex = 4;
			// 
			// Class3Name
			// 
			this->Class3Name->Location = System::Drawing::Point(166, 34);
			this->Class3Name->Name = L"Class3Name";
			this->Class3Name->Size = System::Drawing::Size(100, 21);
			this->Class3Name->TabIndex = 4;
			// 
			// ClassLabel
			// 
			this->ClassLabel->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->ClassLabel->AutoSize = true;
			this->ClassLabel->Location = System::Drawing::Point(12, 7);
			this->ClassLabel->Name = L"ClassLabel";
			this->ClassLabel->Size = System::Drawing::Size(44, 15);
			this->ClassLabel->TabIndex = 0;
			this->ClassLabel->Text = L"Classes";
			// 
			// ProfBonus
			// 
			this->ProfBonus->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->ProfBonus->BackColor = System::Drawing::Color::OldLace;
			this->ProfBonus->Enabled = false;
			this->ProfBonus->Location = System::Drawing::Point(272, 88);
			this->ProfBonus->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ProfBonus->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 6, 0, 0, 0 });
			this->ProfBonus->Name = L"ProfBonus";
			this->ProfBonus->Size = System::Drawing::Size(34, 21);
			this->ProfBonus->TabIndex = 3;
			this->ProfBonus->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->ProfBonus->ValueChanged += gcnew System::EventHandler(this, &MyForm::ProfBonus_ValueChanged);
			// 
			// ProfBonusLabel
			// 
			this->ProfBonusLabel->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->ProfBonusLabel->AutoSize = true;
			this->ProfBonusLabel->Location = System::Drawing::Point(168, 90);
			this->ProfBonusLabel->Name = L"ProfBonusLabel";
			this->ProfBonusLabel->Size = System::Drawing::Size(98, 15);
			this->ProfBonusLabel->TabIndex = 2;
			this->ProfBonusLabel->Text = L"Proficiency Bonus:";
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->AutoScroll = true;
			this->tableLayoutPanel2->ColumnCount = 1;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel2->Controls->Add(this->MainPanel, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->BasicInfoGroup, 0, 0);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel2->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 2;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel2->Size = System::Drawing::Size(596, 672);
			this->tableLayoutPanel2->TabIndex = 0;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::AntiqueWhite;
			this->ClientSize = System::Drawing::Size(596, 672);
			this->Controls->Add(this->tableLayoutPanel2);
			this->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->ForeColor = System::Drawing::Color::SaddleBrown;
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->MinimumSize = System::Drawing::Size(612, 480);
			this->Name = L"MyForm";
			this->Text = L"MonsterSheet";
			this->MainPanel->ResumeLayout(false);
			this->AbilityScoresGroup->ResumeLayout(false);
			this->AbilityScoresGroup->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ChaSkillPanel->ResumeLayout(false);
			this->ChaSkillPanel->PerformLayout();
			this->DexSkillPanel->ResumeLayout(false);
			this->DexSkillPanel->PerformLayout();
			this->ChaPanel->ResumeLayout(false);
			this->ChaPanel->PerformLayout();
			this->WisPanel->ResumeLayout(false);
			this->WisPanel->PerformLayout();
			this->IntPanel->ResumeLayout(false);
			this->IntPanel->PerformLayout();
			this->ConPanel->ResumeLayout(false);
			this->ConPanel->PerformLayout();
			this->DexPanel->ResumeLayout(false);
			this->DexPanel->PerformLayout();
			this->StrPanel->ResumeLayout(false);
			this->StrPanel->PerformLayout();
			this->StrSkillPanel->ResumeLayout(false);
			this->StrSkillPanel->PerformLayout();
			this->ConSkillPanel->ResumeLayout(false);
			this->ConSkillPanel->PerformLayout();
			this->IntSkillPanel->ResumeLayout(false);
			this->IntSkillPanel->PerformLayout();
			this->WisSkillPanel->ResumeLayout(false);
			this->WisSkillPanel->PerformLayout();
			this->DefenseGroup->ResumeLayout(false);
			this->tableLayoutPanel4->ResumeLayout(false);
			this->tableLayoutPanel5->ResumeLayout(false);
			this->tableLayoutPanel7->ResumeLayout(false);
			this->tableLayoutPanel7->PerformLayout();
			this->tableLayoutPanel8->ResumeLayout(false);
			this->tableLayoutPanel8->PerformLayout();
			this->tableLayoutPanel9->ResumeLayout(false);
			this->tableLayoutPanel9->PerformLayout();
			this->TempHPTable->ResumeLayout(false);
			this->TempHPTable->PerformLayout();
			this->CurHPTable->ResumeLayout(false);
			this->CurHPTable->PerformLayout();
			this->tableLayoutPanel11->ResumeLayout(false);
			this->tableLayoutPanel11->PerformLayout();
			this->tableLayoutPanel12->ResumeLayout(false);
			this->tableLayoutPanel12->PerformLayout();
			this->tableLayoutPanel13->ResumeLayout(false);
			this->tableLayoutPanel13->PerformLayout();
			this->tableLayoutPanel10->ResumeLayout(false);
			this->tableLayoutPanel10->PerformLayout();
			this->BasicInfoGroup->ResumeLayout(false);
			this->tableLayoutPanel3->ResumeLayout(false);
			this->CharInfoPanel->ResumeLayout(false);
			this->CharInfoPanel->PerformLayout();
			this->ClassPanel->ResumeLayout(false);
			this->ClassPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ProfBonus))->EndInit();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
		#pragma endregion
		private: System::Void ProfBonus_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			UpdateSTR();
			UpdateDEX();
			UpdateCON();
			UpdateINT();
			UpdateWIS();
			UpdateCHA();
		}
				//
				// UPDATE STR
				//
		private: System::Void UpdateSTR() {
			StrLabel->ForeColor = System::Drawing::SystemColors::ControlText;
			try {
				StrMod->Text = (System::Math::Floor((System::Double::Parse(StrScore->Text) - 10) / 2)).ToString();
				//
				// STR Saving Throws
				//
				if (StrSTProf->Checked) {
					StrSTMod->Text = ((Int32)ProfBonus->Value + System::Int16::Parse(StrMod->Text)).ToString();
				}
				else
					StrSTMod->Text = (System::Int16::Parse(StrMod->Text)).ToString();
				//
				// Athletics
				//
				if (StrAthleticsProf->Checked) {
					if (StrAthExp->Checked)
						StrAthleticsMod->Text = (2 * (Int32)ProfBonus->Value + System::Int16::Parse(StrMod->Text)).ToString();
					else
						StrAthleticsMod->Text = ((Int32)ProfBonus->Value + System::Int16::Parse(StrMod->Text)).ToString();
				}
				else
					StrAthleticsMod->Text = (System::Int16::Parse(StrMod->Text)).ToString();
			}
			catch (Exception ^BadStr) {
				StrLabel->ForeColor = System::Drawing::Color::Red;
			}
		}
		private: System::Void StrScore_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				UpdateSTR();
		}
		private: System::Void StrSTProf_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
				UpdateSTR();
		}
		private: System::Void StrAthleticsProf_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
				UpdateSTR();
				StrAthExp->Enabled = StrAthExp->Enabled ? false : true;
		}
		private: System::Void StrAthExp_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
				UpdateSTR();
		}
				 //
				 // UPDATE DEX
				 //
		private: System::Void UpdateDEX() {
			DexLabel->ForeColor = System::Drawing::SystemColors::ControlText;
			try {
				DexMod->Text = (System::Math::Floor((System::Double::Parse(DexScore->Text) - 10) / 2)).ToString();
				//
				// DEX Saving Throws
				//
				if (DexSTProf->Checked) {
					DexSTMod->Text = ((Int32)ProfBonus->Value + System::Int16::Parse(DexMod->Text)).ToString();
				}
				else
					DexSTMod->Text = (System::Int16::Parse(DexMod->Text)).ToString();
				//
				// Acrobatics
				//
				if (DexAcrobaticsProf->Checked) {
					if (DexAcroExp->Checked)
						DexAcroMod->Text = (2 * (Int32)ProfBonus->Value + System::Int16::Parse(DexMod->Text)).ToString();
					else
						DexAcroMod->Text = ((Int32)ProfBonus->Value + System::Int16::Parse(DexMod->Text)).ToString();
				}
				else
					DexAcroMod->Text = (System::Int16::Parse(DexMod->Text)).ToString();
				//
				// Sleight of Hand
				//
				if (DexSoHProf->Checked) {
					if (DexSoHExp->Checked)
						DexSoHMod->Text = (2 * (Int32)ProfBonus->Value + System::Int16::Parse(DexMod->Text)).ToString();
					else
						DexSoHMod->Text = ((Int32)ProfBonus->Value + System::Int16::Parse(DexMod->Text)).ToString();
				}
				else
					DexSoHMod->Text = (System::Int16::Parse(DexMod->Text)).ToString();
				//
				// Stealth
				//
				if (DexStealthProf->Checked) {
					if (DexStealthExp->Checked)
						DexStealthMod->Text = (2 * (Int32)ProfBonus->Value + System::Int16::Parse(DexMod->Text)).ToString();
					else
						DexStealthMod->Text = ((Int32)ProfBonus->Value + System::Int16::Parse(DexMod->Text)).ToString();
				}
				else
					DexStealthMod->Text = (System::Int16::Parse(DexMod->Text)).ToString();
			}
			catch (Exception ^BadDex) {
				DexLabel->ForeColor = System::Drawing::Color::Red;
			}
		}
		private: System::Void DexScore_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			UpdateDEX();
		}
		private: System::Void DexSTProf_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			UpdateDEX();
		}
		private: System::Void DexAcrobaticsProf_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			UpdateDEX();
			DexAcroExp->Enabled = DexAcroExp->Enabled ? false : true;
		}
		private: System::Void DexAcroExp_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			UpdateDEX();
		}
		private: System::Void DexHandProf_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			UpdateDEX();
			DexSoHExp->Enabled = DexSoHExp->Enabled ? false : true;
		}
		private: System::Void DexSoHExp_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			UpdateDEX();
		}
		private: System::Void DexStealthProf_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			UpdateDEX();
			DexStealthExp->Enabled = DexStealthExp->Enabled ? false : true;
		}
		private: System::Void DexStealthExp_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			UpdateDEX();
		}
				 //
				 // UPDATE CON
				 //
		private: System::Void UpdateCON() {
			ConLabel->ForeColor = System::Drawing::SystemColors::ControlText;
			try {
				ConMod->Text = (System::Math::Floor((System::Double::Parse(ConScore->Text) - 10) / 2)).ToString();
				//
				// CON Saving Throws
				//
				if (ConSTProf->Checked) {
					ConSTMod->Text = ((Int32)ProfBonus->Value + System::Int16::Parse(ConMod->Text)).ToString();
				}
				else
					ConSTMod->Text = (System::Int16::Parse(ConMod->Text)).ToString();
			}
			catch (Exception ^BadCon) {
				ConLabel->ForeColor = System::Drawing::Color::Red;
			}
		}
		private: System::Void ConScore_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			UpdateCON();
		}
		private: System::Void ConSTProf_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			UpdateCON();
		}
				 //
				 // UPDATE INT
				 //
		private: System::Void UpdateINT() {
			IntLabel->ForeColor = System::Drawing::SystemColors::ControlText;
			try {
				IntMod->Text = (System::Math::Floor((System::Double::Parse(IntScore->Text) - 10) / 2)).ToString();
				//
				// INT Saving Throws
				//
				if (IntSTProf->Checked)
					IntSTMod->Text = ((Int32)ProfBonus->Value + System::Int16::Parse(IntMod->Text)).ToString();
				else
					IntSTMod->Text = (System::Int16::Parse(IntMod->Text)).ToString();
				//
				// Arcana
				//
				if (IntArcanaProf->Checked) {
					if (IntArcaExp->Checked)
						IntArcaMod->Text = (2 * (Int32)ProfBonus->Value + System::Int16::Parse(IntMod->Text)).ToString();
					else
						IntArcaMod->Text = ((Int32)ProfBonus->Value + System::Int16::Parse(IntMod->Text)).ToString();
				}
				else
					IntArcaMod->Text = (System::Int16::Parse(IntMod->Text)).ToString();
				//
				// History
				//
				if (IntHistoryProf->Checked) {
					if (IntHistExp->Checked)
						IntHistMod->Text = (2 * (Int32)ProfBonus->Value + System::Int16::Parse(IntMod->Text)).ToString();
					else
						IntHistMod->Text = ((Int32)ProfBonus->Value + System::Int16::Parse(IntMod->Text)).ToString();
				}
				else
					IntHistMod->Text = (System::Int16::Parse(IntMod->Text)).ToString();
				//
				// Investigation
				//
				if (IntInvestProf->Checked) {
					if (IntInvExp->Checked)
						IntInvMod->Text = (2 * (Int32)ProfBonus->Value + System::Int16::Parse(IntMod->Text)).ToString();
					else
						IntInvMod->Text = ((Int32)ProfBonus->Value + System::Int16::Parse(IntMod->Text)).ToString();
				}
				else
					IntInvMod->Text = (System::Int16::Parse(IntMod->Text)).ToString();
				//
				// Nature
				//
				if (IntNatureProf->Checked) {
					if (IntNatExp->Checked)
						IntNatMod->Text = (2 * (Int32)ProfBonus->Value + System::Int16::Parse(IntMod->Text)).ToString();
					else
						IntNatMod->Text = ((Int32)ProfBonus->Value + System::Int16::Parse(IntMod->Text)).ToString();
				}
				else
					IntNatMod->Text = (System::Int16::Parse(IntMod->Text)).ToString();
				//
				// Religion
				//
				if (IntReligionProf->Checked) {
					if (IntRelExp->Checked)
						IntRelMod->Text = (2 * (Int32)ProfBonus->Value + System::Int16::Parse(IntMod->Text)).ToString();
					else
						IntRelMod->Text = ((Int32)ProfBonus->Value + System::Int16::Parse(IntMod->Text)).ToString();
				}
				else
					IntRelMod->Text = (System::Int16::Parse(IntMod->Text)).ToString();
			}
			catch (Exception ^BadInt) {
				IntLabel->ForeColor = System::Drawing::Color::Red;
			}
		}
		private: System::Void IntScore_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			UpdateINT();
		}
		private: System::Void IntSTProf_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			UpdateINT();
		}
		private: System::Void IntArcanaProf_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			UpdateINT();
			IntArcaExp->Enabled = IntArcaExp->Enabled ? false : true;
		}
		private: System::Void IntArcaExp_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			UpdateINT();
		}
		private: System::Void IntHistoryProf_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			UpdateINT();
			IntHistExp->Enabled = IntHistExp->Enabled ? false : true;
		}
		private: System::Void IntHistExp_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			UpdateINT();
		}
		private: System::Void IntInvestProf_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			UpdateINT();
			IntInvExp->Enabled = IntInvExp->Enabled ? false : true;
		}
		private: System::Void IntInvExp_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			UpdateINT();
		}
		private: System::Void IntNatureProf_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			UpdateINT();
			IntNatExp->Enabled = IntNatExp->Enabled ? false : true;
		}
		private: System::Void IntNatExp_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			UpdateINT();
		}
		private: System::Void IntReligionProf_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			UpdateINT();
			IntRelExp->Enabled = IntRelExp->Enabled ? false : true;
		}
		private: System::Void IntRelExp_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			UpdateINT();
		}
				 //
				 // UPDATE WIS
				 //
		private: System::Void UpdateWIS() {
			WisLabel->ForeColor = System::Drawing::SystemColors::ControlText;
			try {
				WisMod->Text = (System::Math::Floor((System::Double::Parse(WisScore->Text) - 10) / 2)).ToString();
				//
				// WIS Saving Throws
				//
				if (WisST->Checked)
					WisSTMod->Text = ((Int32)ProfBonus->Value + System::Int16::Parse(WisMod->Text)).ToString();
				else
					WisSTMod->Text = (System::Int16::Parse(WisMod->Text)).ToString();
				//
				// Animal Handling
				//
				if (WisAnimProf->Checked) {
					if (WisAHExp->Checked)
						WisAHMod->Text = (2 * (Int32)ProfBonus->Value + System::Int16::Parse(WisMod->Text)).ToString();
					else
						WisAHMod->Text = ((Int32)ProfBonus->Value + System::Int16::Parse(WisMod->Text)).ToString();
				}
				else
					WisAHMod->Text = (System::Int16::Parse(WisMod->Text)).ToString();
				//
				// Insight
				//
				if (WisInsProf->Checked) {
					if (WisInsExp->Checked)
						WisInsMod->Text = (2 * (Int32)ProfBonus->Value + System::Int16::Parse(WisMod->Text)).ToString();
					else
						WisInsMod->Text = ((Int32)ProfBonus->Value + System::Int16::Parse(WisMod->Text)).ToString();
				}
				else
					WisInsMod->Text = (System::Int16::Parse(WisMod->Text)).ToString();
				//
				// Medicine
				//
				if (WisMedProf->Checked) {
					if (WisMedExp->Checked)
						WisMedMod->Text = (2 * (Int32)ProfBonus->Value + System::Int16::Parse(WisMod->Text)).ToString();
					else
						WisMedMod->Text = ((Int32)ProfBonus->Value + System::Int16::Parse(WisMod->Text)).ToString();
				}
				else
					WisMedMod->Text = (System::Int16::Parse(WisMod->Text)).ToString();
				//
				// Perception
				//
				if (WisPercProf->Checked) {
					if (WisPercExp->Checked) {
						WisPercMod->Text = (2 * (Int32)ProfBonus->Value + System::Int16::Parse(WisMod->Text)).ToString();
						WisPasPercVal->Text = (10 + 2 * (Int32)ProfBonus->Value + System::Int16::Parse(WisMod->Text)).ToString();
					}
					else {
						WisPercMod->Text = ((Int32)ProfBonus->Value + System::Int16::Parse(WisMod->Text)).ToString();
						WisPasPercVal->Text = (10 + (Int32)ProfBonus->Value + System::Int16::Parse(WisMod->Text)).ToString();
					}
				}
				else {
					WisPercMod->Text = (System::Int16::Parse(WisMod->Text)).ToString();
					WisPasPercVal->Text = (10 + System::Int16::Parse(WisMod->Text)).ToString();
				}
				//
				// Survival
				//
				if (WisSurvProf->Checked) {
					if (WisSurvExp->Checked)
						WisSurvMod->Text = (2 * (Int32)ProfBonus->Value + System::Int16::Parse(WisMod->Text)).ToString();
					else
						WisSurvMod->Text = ((Int32)ProfBonus->Value + System::Int16::Parse(WisMod->Text)).ToString();
				}
				else
					WisSurvMod->Text = (System::Int16::Parse(WisMod->Text)).ToString();
			}
			catch (Exception ^BadWis) {
				WisLabel->ForeColor = System::Drawing::Color::Red;
			}
		}
		private: System::Void WisScore_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			UpdateWIS();
		}
		private: System::Void WisST_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			UpdateWIS();
		}
		private: System::Void WisAnimProf_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			UpdateWIS();
			WisAHExp->Enabled = WisAHExp->Enabled ? false : true;

		}
		private: System::Void WisAHExp_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			UpdateWIS();
		}
		private: System::Void WisInsProf_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			UpdateWIS();
			WisInsExp->Enabled = WisInsExp->Enabled ? false : true;
		}
		private: System::Void WisInsExp_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			UpdateWIS();
		}
		private: System::Void WisMedProf_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			UpdateWIS();
			WisMedExp->Enabled = WisMedExp->Enabled ? false : true;
		}
		private: System::Void WisMedExp_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			UpdateWIS();
		}
		private: System::Void WisPercProf_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			UpdateWIS();
			WisPercExp->Enabled = WisPercExp->Enabled ? false : true;
		}
		private: System::Void WisPercExp_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			UpdateWIS();
		}
		private: System::Void WisSurvProf_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			UpdateWIS();
			WisSurvExp->Enabled = WisSurvExp->Enabled ? false : true;
		}
		private: System::Void WisSurvExp_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			UpdateWIS();
		}
				//
				// UPDATE CHA
				//
		private: System::Void UpdateCHA() {
			ChaLabel->ForeColor = System::Drawing::SystemColors::ControlText;
			try {
				ChaMod->Text = (System::Math::Floor((System::Double::Parse(ChaScore->Text) - 10) / 2)).ToString();
				//
				// Cha Saving Throws
				//
				if (ChaSTProf->Checked)
					ChaSTMod->Text = ((Int32)ProfBonus->Value + System::Int16::Parse(ChaMod->Text)).ToString();
				else
					ChaSTMod->Text = (System::Int16::Parse(ChaMod->Text)).ToString();
				//
				// Deception
				//
				if (ChaDecProf->Checked) {
					if (ChaDecExp->Checked)
						ChaDecMod->Text = (2 * (Int32)ProfBonus->Value + System::Int16::Parse(ChaMod->Text)).ToString();
					else
						ChaDecMod->Text = ((Int32)ProfBonus->Value + System::Int16::Parse(ChaMod->Text)).ToString();
				}
				else
					ChaDecMod->Text = (System::Int16::Parse(ChaMod->Text)).ToString();
				//
				// Intimidation
				//
				if (ChaIntimProf->Checked) {
					if (ChaIntimExp->Checked)
						ChaIntimMod->Text = (2 * (Int32)ProfBonus->Value + System::Int16::Parse(ChaMod->Text)).ToString();
					else
						ChaIntimMod->Text = ((Int32)ProfBonus->Value + System::Int16::Parse(ChaMod->Text)).ToString();
				}
				else
					ChaIntimMod->Text = (System::Int16::Parse(ChaMod->Text)).ToString();
				//
				// Performance
				//
				if (ChaPerfProf->Checked) {
					if (ChaPerfExp->Checked)
						ChaPerfMod->Text = (2 * (Int32)ProfBonus->Value + System::Int16::Parse(ChaMod->Text)).ToString();
					else
						ChaPerfMod->Text = ((Int32)ProfBonus->Value + System::Int16::Parse(ChaMod->Text)).ToString();
				}
				else
					ChaPerfMod->Text = (System::Int16::Parse(ChaMod->Text)).ToString();
				//
				// Persuasion
				//
				if (ChaPersProf->Checked) {
					if (ChaPersExp->Checked) {
						ChaPersMod->Text = (2 * (Int32)ProfBonus->Value + System::Int16::Parse(ChaMod->Text)).ToString();
					}
					else {
						ChaPersMod->Text = ((Int32)ProfBonus->Value + System::Int16::Parse(ChaMod->Text)).ToString();
					}
				}
				else {
					ChaPersMod->Text = (System::Int16::Parse(ChaMod->Text)).ToString();
				}
			}
			catch (Exception ^BadCha) {
				ChaLabel->ForeColor = System::Drawing::Color::Red;
			}
		}
		private: System::Void ChaScore_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			UpdateCHA();
		}
		private: System::Void ChaSTProf_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			UpdateCHA();
		}
		private: System::Void ChaDecProf_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			UpdateCHA();
			ChaDecExp->Enabled = ChaDecExp->Enabled ? false : true;
		}
		private: System::Void ChaDecExp_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			UpdateCHA();
		}
		private: System::Void ChaIntimProf_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			UpdateCHA();
			ChaIntimExp->Enabled = ChaIntimExp->Enabled ? false : true;
		}
		private: System::Void ChaIntimExp_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			UpdateCHA();
		}
		private: System::Void ChaPerfProf_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			UpdateCHA();
			ChaPerfExp->Enabled = ChaPerfExp->Enabled ? false : true;
		}
		private: System::Void ChaPerfExp_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			UpdateCHA();
		}
		private: System::Void ChaPersProf_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			UpdateCHA();
			ChaPersExp->Enabled = ChaPersExp->Enabled ? false : true;
		}
		private: System::Void ChaPersExp_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			UpdateCHA();
		}
				 //
				 // Monster or Hero
				 //
		private: System::Void UpdateMonster() {
			ProfBonus->Enabled = MonsterCheckBox->Checked ? true : false;
			Class1Name->Enabled = MonsterCheckBox->Checked ? false : true;
			Class1Lvl->Enabled = MonsterCheckBox->Checked ? false : true;
			Class2Name->Enabled = MonsterCheckBox->Checked ? false : true;
			Class2Lvl->Enabled = MonsterCheckBox->Checked ? false : true;
			Class3Name->Enabled = MonsterCheckBox->Checked ? false : true;
			Class3Lvl->Enabled = MonsterCheckBox->Checked ? false : true;
			Class4Name->Enabled = MonsterCheckBox->Checked ? false : true;
			Class4Lvl->Enabled = MonsterCheckBox->Checked ? false : true;
			int CharLvl = 0;
			int classlvl[4];
			if (!(MonsterCheckBox->Checked)) {
				System::Int32::TryParse(Class1Lvl->Text, classlvl[0]);
				System::Int32::TryParse(Class2Lvl->Text, classlvl[1]);
				System::Int32::TryParse(Class3Lvl->Text, classlvl[2]);
				System::Int32::TryParse(Class4Lvl->Text, classlvl[3]);
				for (int i = 0; i < 4; i++) {
					CharLvl += classlvl[i];
				}
				if (CharLvl < 5) {
					ProfBonus->Value = 2;
				}
				else if (CharLvl < 9) {
					ProfBonus->Value = 3;
				}
				else if (CharLvl < 13) {
					ProfBonus->Value = 4;
				}
				else if (CharLvl < 17) {
					ProfBonus->Value = 5;
				}
				else if (CharLvl < 21) {
					ProfBonus->Value = 6;
				}
				else ProfBonus->Value = 0;
			}
		}
		private: Void MonsterCheckBox_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			UpdateMonster();
		}
		private: System::Void Class1Lvl_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			UpdateMonster();
		}
		private: System::Void Class2Lvl_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			UpdateMonster();
		}
		private: System::Void Class3Lvl_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			UpdateMonster();
		}
		private: System::Void Class4Lvl_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			UpdateMonster();
		}
				 //
				 // UPDATE HIT POINTS
				 //
		private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			CurHP->Text = HPMax->Text;
		}
		private: System::Void HealButton_Click(System::Object^  sender, System::EventArgs^  e) {
			CurHP->Text = ( Int32::Parse(CurHP->Text) + Int32::Parse(HealHP->Text)).ToString();
			if (Int32::Parse(CurHP->Text) > Int32::Parse(HPMax->Text)) CurHP->Text = HPMax->Text;
		}
		private: System::Void LoseButton_Click(System::Object^  sender, System::EventArgs^  e) {
			int HPtemp, HPLose, HPCur;
			Int32::TryParse(TempHP->Text, HPtemp);
			Int32::TryParse(LoseHP->Text, HPLose);
			Int32::TryParse(CurHP->Text, HPCur);
			if (HPtemp > HPLose) {
				TempHP->Text = (HPtemp - HPLose).ToString();
			}
			else {
				CurHP->Text = ((HPCur + HPtemp) - HPLose).ToString();
				TempHP->Text = L"0";
				if (Int32::Parse(CurHP->Text) < 0) CurHP->Text = L"0";
			}
		}
				 //
				 //	UPDATE AC
				 //
		private: System::Void ACButton_Click(System::Object^  sender, System::EventArgs^  e) {
			ACDialog ^AClassWin = gcnew ACDialog();
			AClassWin->AC = DexMod->Text;
			AClassWin->ShowDialog(this);
			ACButton->Text = AClassWin->AC;
		}
				 //
				 //	UPDATE INITIATIVE
				 //
		private: System::Void UpdateButton_Click(System::Object^  sender, System::EventArgs^  e) {
			IniDialog ^IniWin = gcnew IniDialog(DexMod->Text);
			IniWin->Init = DexMod->Text;
			IniWin->ShowDialog(this);
			UpdateInit->Text = IniWin->Init;
		}
};
}
