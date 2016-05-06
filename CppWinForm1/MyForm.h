#pragma once

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
	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel1;
	protected:
	private: System::Windows::Forms::GroupBox^  groupBox1;
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
private: System::Windows::Forms::NumericUpDown^  ProfBonus;











	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
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
			this->ProfBonus = (gcnew System::Windows::Forms::NumericUpDown());
			this->flowLayoutPanel1->SuspendLayout();
			this->groupBox1->SuspendLayout();
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ProfBonus))->BeginInit();
			this->SuspendLayout();
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->groupBox1);
			this->flowLayoutPanel1->Controls->Add(this->ProfBonus);
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(405, 729);
			this->flowLayoutPanel1->TabIndex = 0;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->WisPasPercVal);
			this->groupBox1->Controls->Add(this->PasPercLabel);
			this->groupBox1->Controls->Add(this->tableLayoutPanel1);
			this->groupBox1->Location = System::Drawing::Point(3, 3);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(245, 694);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Ability Scores";
			// 
			// WisPasPercVal
			// 
			this->WisPasPercVal->BackColor = System::Drawing::Color::AntiqueWhite;
			this->WisPasPercVal->Location = System::Drawing::Point(181, 666);
			this->WisPasPercVal->Name = L"WisPasPercVal";
			this->WisPasPercVal->ReadOnly = true;
			this->WisPasPercVal->Size = System::Drawing::Size(24, 20);
			this->WisPasPercVal->TabIndex = 12;
			this->WisPasPercVal->Text = L"10";
			// 
			// PasPercLabel
			// 
			this->PasPercLabel->AutoSize = true;
			this->PasPercLabel->Location = System::Drawing::Point(79, 669);
			this->PasPercLabel->Name = L"PasPercLabel";
			this->PasPercLabel->Size = System::Drawing::Size(101, 13);
			this->PasPercLabel->TabIndex = 11;
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
			this->tableLayoutPanel1->Location = System::Drawing::Point(6, 19);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 6;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(230, 643);
			this->tableLayoutPanel1->TabIndex = 10;
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
			this->ChaSkillPanel->Location = System::Drawing::Point(69, 521);
			this->ChaSkillPanel->Name = L"ChaSkillPanel";
			this->ChaSkillPanel->Size = System::Drawing::Size(159, 119);
			this->ChaSkillPanel->TabIndex = 11;
			// 
			// ChaPerfExp
			// 
			this->ChaPerfExp->AutoSize = true;
			this->ChaPerfExp->Enabled = false;
			this->ChaPerfExp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ChaPerfExp->Location = System::Drawing::Point(136, 74);
			this->ChaPerfExp->Name = L"ChaPerfExp";
			this->ChaPerfExp->Size = System::Drawing::Size(12, 11);
			this->ChaPerfExp->TabIndex = 7;
			this->ChaPerfExp->CheckedChanged += gcnew System::EventHandler(this, &MyForm::ChaPerfExp_CheckedChanged);
			// 
			// ChaPersProf
			// 
			this->ChaPersProf->AutoSize = true;
			this->ChaPersProf->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ChaPersProf->Location = System::Drawing::Point(3, 96);
			this->ChaPersProf->Name = L"ChaPersProf";
			this->ChaPersProf->Size = System::Drawing::Size(75, 17);
			this->ChaPersProf->TabIndex = 10;
			this->ChaPersProf->Text = L"Persuasion";
			this->ChaPersProf->UseVisualStyleBackColor = true;
			this->ChaPersProf->CheckedChanged += gcnew System::EventHandler(this, &MyForm::ChaPersProf_CheckedChanged);
			// 
			// ChaPersMod
			// 
			this->ChaPersMod->BackColor = System::Drawing::Color::AntiqueWhite;
			this->ChaPersMod->Location = System::Drawing::Point(106, 94);
			this->ChaPersMod->Name = L"ChaPersMod";
			this->ChaPersMod->ReadOnly = true;
			this->ChaPersMod->Size = System::Drawing::Size(24, 20);
			this->ChaPersMod->TabIndex = 5;
			this->ChaPersMod->Text = L"0";
			// 
			// ChaPerfMod
			// 
			this->ChaPerfMod->BackColor = System::Drawing::Color::AntiqueWhite;
			this->ChaPerfMod->Location = System::Drawing::Point(106, 71);
			this->ChaPerfMod->Name = L"ChaPerfMod";
			this->ChaPerfMod->ReadOnly = true;
			this->ChaPerfMod->Size = System::Drawing::Size(24, 20);
			this->ChaPerfMod->TabIndex = 5;
			this->ChaPerfMod->Text = L"0";
			// 
			// ChaIntimExp
			// 
			this->ChaIntimExp->AutoSize = true;
			this->ChaIntimExp->Enabled = false;
			this->ChaIntimExp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ChaIntimExp->Location = System::Drawing::Point(136, 50);
			this->ChaIntimExp->Name = L"ChaIntimExp";
			this->ChaIntimExp->Size = System::Drawing::Size(12, 11);
			this->ChaIntimExp->TabIndex = 7;
			this->ChaIntimExp->CheckedChanged += gcnew System::EventHandler(this, &MyForm::ChaIntimExp_CheckedChanged);
			// 
			// ChaIntimMod
			// 
			this->ChaIntimMod->BackColor = System::Drawing::Color::AntiqueWhite;
			this->ChaIntimMod->Location = System::Drawing::Point(106, 47);
			this->ChaIntimMod->Name = L"ChaIntimMod";
			this->ChaIntimMod->ReadOnly = true;
			this->ChaIntimMod->Size = System::Drawing::Size(24, 20);
			this->ChaIntimMod->TabIndex = 5;
			this->ChaIntimMod->Text = L"0";
			// 
			// ChaDecMod
			// 
			this->ChaDecMod->BackColor = System::Drawing::Color::AntiqueWhite;
			this->ChaDecMod->Location = System::Drawing::Point(106, 24);
			this->ChaDecMod->Name = L"ChaDecMod";
			this->ChaDecMod->ReadOnly = true;
			this->ChaDecMod->Size = System::Drawing::Size(24, 20);
			this->ChaDecMod->TabIndex = 5;
			this->ChaDecMod->Text = L"0";
			// 
			// ChaSTMod
			// 
			this->ChaSTMod->BackColor = System::Drawing::Color::AntiqueWhite;
			this->ChaSTMod->Location = System::Drawing::Point(106, 1);
			this->ChaSTMod->Name = L"ChaSTMod";
			this->ChaSTMod->ReadOnly = true;
			this->ChaSTMod->Size = System::Drawing::Size(24, 20);
			this->ChaSTMod->TabIndex = 5;
			this->ChaSTMod->Text = L"0";
			// 
			// ChaDecExp
			// 
			this->ChaDecExp->AutoSize = true;
			this->ChaDecExp->Enabled = false;
			this->ChaDecExp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ChaDecExp->Location = System::Drawing::Point(136, 27);
			this->ChaDecExp->Name = L"ChaDecExp";
			this->ChaDecExp->Size = System::Drawing::Size(12, 11);
			this->ChaDecExp->TabIndex = 7;
			this->ChaDecExp->CheckedChanged += gcnew System::EventHandler(this, &MyForm::ChaDecExp_CheckedChanged);
			// 
			// ChaPerfProf
			// 
			this->ChaPerfProf->AutoSize = true;
			this->ChaPerfProf->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ChaPerfProf->Location = System::Drawing::Point(3, 73);
			this->ChaPerfProf->Name = L"ChaPerfProf";
			this->ChaPerfProf->Size = System::Drawing::Size(83, 17);
			this->ChaPerfProf->TabIndex = 9;
			this->ChaPerfProf->Text = L"Performance";
			this->ChaPerfProf->UseVisualStyleBackColor = true;
			this->ChaPerfProf->CheckedChanged += gcnew System::EventHandler(this, &MyForm::ChaPerfProf_CheckedChanged);
			// 
			// ChaSTProf
			// 
			this->ChaSTProf->AutoSize = true;
			this->ChaSTProf->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ChaSTProf->Location = System::Drawing::Point(3, 3);
			this->ChaSTProf->Name = L"ChaSTProf";
			this->ChaSTProf->Size = System::Drawing::Size(94, 17);
			this->ChaSTProf->TabIndex = 6;
			this->ChaSTProf->Text = L"Saving Throws";
			this->ChaSTProf->UseVisualStyleBackColor = true;
			this->ChaSTProf->CheckedChanged += gcnew System::EventHandler(this, &MyForm::ChaSTProf_CheckedChanged);
			// 
			// ChaDecProf
			// 
			this->ChaDecProf->AutoSize = true;
			this->ChaDecProf->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ChaDecProf->Location = System::Drawing::Point(3, 26);
			this->ChaDecProf->Name = L"ChaDecProf";
			this->ChaDecProf->Size = System::Drawing::Size(72, 17);
			this->ChaDecProf->TabIndex = 7;
			this->ChaDecProf->Text = L"Deception";
			this->ChaDecProf->UseVisualStyleBackColor = true;
			this->ChaDecProf->CheckedChanged += gcnew System::EventHandler(this, &MyForm::ChaDecProf_CheckedChanged);
			// 
			// ChaPersExp
			// 
			this->ChaPersExp->AutoSize = true;
			this->ChaPersExp->Enabled = false;
			this->ChaPersExp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ChaPersExp->Location = System::Drawing::Point(136, 97);
			this->ChaPersExp->Name = L"ChaPersExp";
			this->ChaPersExp->Size = System::Drawing::Size(12, 11);
			this->ChaPersExp->TabIndex = 7;
			this->ChaPersExp->CheckedChanged += gcnew System::EventHandler(this, &MyForm::ChaPersExp_CheckedChanged);
			// 
			// ChaIntimProf
			// 
			this->ChaIntimProf->AutoSize = true;
			this->ChaIntimProf->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ChaIntimProf->Location = System::Drawing::Point(3, 49);
			this->ChaIntimProf->Name = L"ChaIntimProf";
			this->ChaIntimProf->Size = System::Drawing::Size(76, 17);
			this->ChaIntimProf->TabIndex = 8;
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
			this->DexSkillPanel->Location = System::Drawing::Point(69, 58);
			this->DexSkillPanel->Name = L"DexSkillPanel";
			this->DexSkillPanel->Size = System::Drawing::Size(159, 95);
			this->DexSkillPanel->TabIndex = 11;
			// 
			// DexStealthExp
			// 
			this->DexStealthExp->AutoSize = true;
			this->DexStealthExp->Enabled = false;
			this->DexStealthExp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->DexStealthExp->Location = System::Drawing::Point(136, 74);
			this->DexStealthExp->Name = L"DexStealthExp";
			this->DexStealthExp->Size = System::Drawing::Size(12, 11);
			this->DexStealthExp->TabIndex = 7;
			this->DexStealthExp->CheckedChanged += gcnew System::EventHandler(this, &MyForm::DexStealthExp_CheckedChanged);
			// 
			// DexSoHExp
			// 
			this->DexSoHExp->AutoSize = true;
			this->DexSoHExp->Enabled = false;
			this->DexSoHExp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->DexSoHExp->Location = System::Drawing::Point(136, 50);
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
			this->DexAcroExp->Location = System::Drawing::Point(136, 27);
			this->DexAcroExp->Name = L"DexAcroExp";
			this->DexAcroExp->Size = System::Drawing::Size(12, 11);
			this->DexAcroExp->TabIndex = 7;
			this->DexAcroExp->CheckedChanged += gcnew System::EventHandler(this, &MyForm::DexAcroExp_CheckedChanged);
			// 
			// DexSTProf
			// 
			this->DexSTProf->AutoSize = true;
			this->DexSTProf->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->DexSTProf->Location = System::Drawing::Point(3, 3);
			this->DexSTProf->Name = L"DexSTProf";
			this->DexSTProf->Size = System::Drawing::Size(91, 17);
			this->DexSTProf->TabIndex = 5;
			this->DexSTProf->Text = L"SavingThrows";
			this->DexSTProf->UseVisualStyleBackColor = true;
			this->DexSTProf->CheckedChanged += gcnew System::EventHandler(this, &MyForm::DexSTProf_CheckedChanged);
			// 
			// DexStealthMod
			// 
			this->DexStealthMod->BackColor = System::Drawing::Color::AntiqueWhite;
			this->DexStealthMod->Location = System::Drawing::Point(106, 71);
			this->DexStealthMod->Name = L"DexStealthMod";
			this->DexStealthMod->ReadOnly = true;
			this->DexStealthMod->Size = System::Drawing::Size(24, 20);
			this->DexStealthMod->TabIndex = 5;
			this->DexStealthMod->Text = L"0";
			// 
			// DexSoHMod
			// 
			this->DexSoHMod->BackColor = System::Drawing::Color::AntiqueWhite;
			this->DexSoHMod->Location = System::Drawing::Point(106, 47);
			this->DexSoHMod->Name = L"DexSoHMod";
			this->DexSoHMod->ReadOnly = true;
			this->DexSoHMod->Size = System::Drawing::Size(24, 20);
			this->DexSoHMod->TabIndex = 5;
			this->DexSoHMod->Text = L"0";
			// 
			// DexAcroMod
			// 
			this->DexAcroMod->BackColor = System::Drawing::Color::AntiqueWhite;
			this->DexAcroMod->Location = System::Drawing::Point(106, 24);
			this->DexAcroMod->Name = L"DexAcroMod";
			this->DexAcroMod->ReadOnly = true;
			this->DexAcroMod->Size = System::Drawing::Size(24, 20);
			this->DexAcroMod->TabIndex = 5;
			this->DexAcroMod->Text = L"0";
			// 
			// DexSTMod
			// 
			this->DexSTMod->BackColor = System::Drawing::Color::AntiqueWhite;
			this->DexSTMod->Location = System::Drawing::Point(106, 1);
			this->DexSTMod->Name = L"DexSTMod";
			this->DexSTMod->ReadOnly = true;
			this->DexSTMod->Size = System::Drawing::Size(24, 20);
			this->DexSTMod->TabIndex = 5;
			this->DexSTMod->Text = L"0";
			// 
			// DexAcrobaticsProf
			// 
			this->DexAcrobaticsProf->AutoSize = true;
			this->DexAcrobaticsProf->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->DexAcrobaticsProf->Location = System::Drawing::Point(3, 26);
			this->DexAcrobaticsProf->Name = L"DexAcrobaticsProf";
			this->DexAcrobaticsProf->Size = System::Drawing::Size(73, 17);
			this->DexAcrobaticsProf->TabIndex = 6;
			this->DexAcrobaticsProf->Text = L"Acrobatics";
			this->DexAcrobaticsProf->UseVisualStyleBackColor = true;
			this->DexAcrobaticsProf->CheckedChanged += gcnew System::EventHandler(this, &MyForm::DexAcrobaticsProf_CheckedChanged);
			// 
			// DexSoHProf
			// 
			this->DexSoHProf->AutoSize = true;
			this->DexSoHProf->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->DexSoHProf->Location = System::Drawing::Point(3, 49);
			this->DexSoHProf->Name = L"DexSoHProf";
			this->DexSoHProf->Size = System::Drawing::Size(96, 17);
			this->DexSoHProf->TabIndex = 7;
			this->DexSoHProf->Text = L"Sleight of Hand";
			this->DexSoHProf->UseVisualStyleBackColor = true;
			this->DexSoHProf->CheckedChanged += gcnew System::EventHandler(this, &MyForm::DexHandProf_CheckedChanged);
			// 
			// DexStealthProf
			// 
			this->DexStealthProf->AutoSize = true;
			this->DexStealthProf->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->DexStealthProf->Location = System::Drawing::Point(3, 73);
			this->DexStealthProf->Name = L"DexStealthProf";
			this->DexStealthProf->Size = System::Drawing::Size(56, 17);
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
			this->ChaPanel->Location = System::Drawing::Point(3, 521);
			this->ChaPanel->Name = L"ChaPanel";
			this->ChaPanel->Size = System::Drawing::Size(60, 43);
			this->ChaPanel->TabIndex = 2;
			// 
			// ChaLabel
			// 
			this->ChaLabel->AutoSize = true;
			this->ChaLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->ChaLabel->Location = System::Drawing::Point(17, 4);
			this->ChaLabel->Name = L"ChaLabel";
			this->ChaLabel->Size = System::Drawing::Size(32, 13);
			this->ChaLabel->TabIndex = 0;
			this->ChaLabel->Text = L"CHA";
			this->ChaLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ChaMod
			// 
			this->ChaMod->BackColor = System::Drawing::Color::AntiqueWhite;
			this->ChaMod->Location = System::Drawing::Point(33, 20);
			this->ChaMod->Name = L"ChaMod";
			this->ChaMod->ReadOnly = true;
			this->ChaMod->Size = System::Drawing::Size(24, 20);
			this->ChaMod->TabIndex = 1;
			this->ChaMod->Text = L"0";
			// 
			// ChaScore
			// 
			this->ChaScore->BackColor = System::Drawing::Color::FloralWhite;
			this->ChaScore->Location = System::Drawing::Point(3, 20);
			this->ChaScore->Name = L"ChaScore";
			this->ChaScore->Size = System::Drawing::Size(24, 20);
			this->ChaScore->TabIndex = 1;
			this->ChaScore->Text = L"10";
			this->ChaScore->TextChanged += gcnew System::EventHandler(this, &MyForm::ChaScore_TextChanged);
			// 
			// WisPanel
			// 
			this->WisPanel->Controls->Add(this->WisLabel);
			this->WisPanel->Controls->Add(this->WisMod);
			this->WisPanel->Controls->Add(this->WisScore);
			this->WisPanel->Location = System::Drawing::Point(3, 374);
			this->WisPanel->Name = L"WisPanel";
			this->WisPanel->Size = System::Drawing::Size(60, 43);
			this->WisPanel->TabIndex = 2;
			// 
			// WisLabel
			// 
			this->WisLabel->AutoSize = true;
			this->WisLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->WisLabel->Location = System::Drawing::Point(17, 4);
			this->WisLabel->Name = L"WisLabel";
			this->WisLabel->Size = System::Drawing::Size(31, 13);
			this->WisLabel->TabIndex = 0;
			this->WisLabel->Text = L"WIS";
			this->WisLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// WisMod
			// 
			this->WisMod->BackColor = System::Drawing::Color::AntiqueWhite;
			this->WisMod->Location = System::Drawing::Point(33, 20);
			this->WisMod->Name = L"WisMod";
			this->WisMod->ReadOnly = true;
			this->WisMod->Size = System::Drawing::Size(24, 20);
			this->WisMod->TabIndex = 1;
			this->WisMod->Text = L"0";
			// 
			// WisScore
			// 
			this->WisScore->BackColor = System::Drawing::Color::FloralWhite;
			this->WisScore->Location = System::Drawing::Point(3, 20);
			this->WisScore->Name = L"WisScore";
			this->WisScore->Size = System::Drawing::Size(24, 20);
			this->WisScore->TabIndex = 1;
			this->WisScore->Text = L"10";
			this->WisScore->TextChanged += gcnew System::EventHandler(this, &MyForm::WisScore_TextChanged);
			// 
			// IntPanel
			// 
			this->IntPanel->Controls->Add(this->IntLabel);
			this->IntPanel->Controls->Add(this->IntMod);
			this->IntPanel->Controls->Add(this->IntScore);
			this->IntPanel->Location = System::Drawing::Point(3, 227);
			this->IntPanel->Name = L"IntPanel";
			this->IntPanel->Size = System::Drawing::Size(60, 46);
			this->IntPanel->TabIndex = 2;
			// 
			// IntLabel
			// 
			this->IntLabel->AutoSize = true;
			this->IntLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->IntLabel->Location = System::Drawing::Point(17, 4);
			this->IntLabel->Name = L"IntLabel";
			this->IntLabel->Size = System::Drawing::Size(28, 13);
			this->IntLabel->TabIndex = 0;
			this->IntLabel->Text = L"INT";
			this->IntLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// IntMod
			// 
			this->IntMod->BackColor = System::Drawing::Color::AntiqueWhite;
			this->IntMod->Location = System::Drawing::Point(33, 20);
			this->IntMod->Name = L"IntMod";
			this->IntMod->ReadOnly = true;
			this->IntMod->Size = System::Drawing::Size(24, 20);
			this->IntMod->TabIndex = 1;
			this->IntMod->Text = L"0";
			// 
			// IntScore
			// 
			this->IntScore->BackColor = System::Drawing::Color::FloralWhite;
			this->IntScore->Location = System::Drawing::Point(3, 20);
			this->IntScore->Name = L"IntScore";
			this->IntScore->Size = System::Drawing::Size(24, 20);
			this->IntScore->TabIndex = 1;
			this->IntScore->Text = L"10";
			this->IntScore->TextChanged += gcnew System::EventHandler(this, &MyForm::IntScore_TextChanged);
			// 
			// ConPanel
			// 
			this->ConPanel->Controls->Add(this->ConLabel);
			this->ConPanel->Controls->Add(this->ConMod);
			this->ConPanel->Controls->Add(this->ConScore);
			this->ConPanel->Location = System::Drawing::Point(3, 159);
			this->ConPanel->Name = L"ConPanel";
			this->ConPanel->Size = System::Drawing::Size(60, 43);
			this->ConPanel->TabIndex = 2;
			// 
			// ConLabel
			// 
			this->ConLabel->AccessibleDescription = L"Constitution";
			this->ConLabel->AutoSize = true;
			this->ConLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->ConLabel->Location = System::Drawing::Point(17, 4);
			this->ConLabel->Name = L"ConLabel";
			this->ConLabel->Size = System::Drawing::Size(33, 13);
			this->ConLabel->TabIndex = 0;
			this->ConLabel->Text = L"CON";
			this->ConLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ConMod
			// 
			this->ConMod->BackColor = System::Drawing::Color::AntiqueWhite;
			this->ConMod->Location = System::Drawing::Point(33, 20);
			this->ConMod->Name = L"ConMod";
			this->ConMod->ReadOnly = true;
			this->ConMod->Size = System::Drawing::Size(24, 20);
			this->ConMod->TabIndex = 1;
			this->ConMod->Text = L"0";
			// 
			// ConScore
			// 
			this->ConScore->BackColor = System::Drawing::Color::FloralWhite;
			this->ConScore->Location = System::Drawing::Point(3, 20);
			this->ConScore->Name = L"ConScore";
			this->ConScore->Size = System::Drawing::Size(24, 20);
			this->ConScore->TabIndex = 1;
			this->ConScore->Text = L"10";
			this->ConScore->TextChanged += gcnew System::EventHandler(this, &MyForm::ConScore_TextChanged);
			// 
			// DexPanel
			// 
			this->DexPanel->Controls->Add(this->DexLabel);
			this->DexPanel->Controls->Add(this->DexMod);
			this->DexPanel->Controls->Add(this->DexScore);
			this->DexPanel->Location = System::Drawing::Point(3, 58);
			this->DexPanel->Name = L"DexPanel";
			this->DexPanel->Size = System::Drawing::Size(60, 43);
			this->DexPanel->TabIndex = 2;
			// 
			// DexLabel
			// 
			this->DexLabel->AutoSize = true;
			this->DexLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->DexLabel->Location = System::Drawing::Point(17, 4);
			this->DexLabel->Name = L"DexLabel";
			this->DexLabel->Size = System::Drawing::Size(32, 13);
			this->DexLabel->TabIndex = 0;
			this->DexLabel->Text = L"DEX";
			this->DexLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// DexMod
			// 
			this->DexMod->BackColor = System::Drawing::Color::AntiqueWhite;
			this->DexMod->Location = System::Drawing::Point(33, 20);
			this->DexMod->Name = L"DexMod";
			this->DexMod->ReadOnly = true;
			this->DexMod->Size = System::Drawing::Size(24, 20);
			this->DexMod->TabIndex = 1;
			this->DexMod->Text = L"0";
			// 
			// DexScore
			// 
			this->DexScore->BackColor = System::Drawing::Color::FloralWhite;
			this->DexScore->Location = System::Drawing::Point(3, 20);
			this->DexScore->Name = L"DexScore";
			this->DexScore->Size = System::Drawing::Size(24, 20);
			this->DexScore->TabIndex = 1;
			this->DexScore->Text = L"10";
			this->DexScore->TextChanged += gcnew System::EventHandler(this, &MyForm::DexScore_TextChanged);
			// 
			// StrPanel
			// 
			this->StrPanel->Controls->Add(this->StrLabel);
			this->StrPanel->Controls->Add(this->StrMod);
			this->StrPanel->Controls->Add(this->StrScore);
			this->StrPanel->Location = System::Drawing::Point(3, 3);
			this->StrPanel->Name = L"StrPanel";
			this->StrPanel->Size = System::Drawing::Size(60, 43);
			this->StrPanel->TabIndex = 2;
			// 
			// StrLabel
			// 
			this->StrLabel->AutoSize = true;
			this->StrLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->StrLabel->Location = System::Drawing::Point(17, 4);
			this->StrLabel->Name = L"StrLabel";
			this->StrLabel->Size = System::Drawing::Size(32, 13);
			this->StrLabel->TabIndex = 0;
			this->StrLabel->Text = L"STR";
			this->StrLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// StrMod
			// 
			this->StrMod->BackColor = System::Drawing::Color::AntiqueWhite;
			this->StrMod->Location = System::Drawing::Point(33, 20);
			this->StrMod->Name = L"StrMod";
			this->StrMod->ReadOnly = true;
			this->StrMod->Size = System::Drawing::Size(24, 20);
			this->StrMod->TabIndex = 1;
			this->StrMod->Text = L"0";
			// 
			// StrScore
			// 
			this->StrScore->BackColor = System::Drawing::Color::FloralWhite;
			this->StrScore->Location = System::Drawing::Point(3, 20);
			this->StrScore->Name = L"StrScore";
			this->StrScore->Size = System::Drawing::Size(24, 20);
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
			this->StrSkillPanel->Location = System::Drawing::Point(69, 3);
			this->StrSkillPanel->Name = L"StrSkillPanel";
			this->StrSkillPanel->Size = System::Drawing::Size(159, 49);
			this->StrSkillPanel->TabIndex = 9;
			// 
			// StrAthExp
			// 
			this->StrAthExp->AutoSize = true;
			this->StrAthExp->Enabled = false;
			this->StrAthExp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->StrAthExp->Location = System::Drawing::Point(136, 27);
			this->StrAthExp->Name = L"StrAthExp";
			this->StrAthExp->Size = System::Drawing::Size(12, 11);
			this->StrAthExp->TabIndex = 7;
			this->StrAthExp->CheckedChanged += gcnew System::EventHandler(this, &MyForm::StrAthExp_CheckedChanged);
			// 
			// StrAthleticsMod
			// 
			this->StrAthleticsMod->BackColor = System::Drawing::Color::AntiqueWhite;
			this->StrAthleticsMod->Location = System::Drawing::Point(106, 24);
			this->StrAthleticsMod->Name = L"StrAthleticsMod";
			this->StrAthleticsMod->ReadOnly = true;
			this->StrAthleticsMod->Size = System::Drawing::Size(24, 20);
			this->StrAthleticsMod->TabIndex = 6;
			this->StrAthleticsMod->Text = L"0";
			// 
			// StrSTMod
			// 
			this->StrSTMod->BackColor = System::Drawing::Color::AntiqueWhite;
			this->StrSTMod->Location = System::Drawing::Point(106, 1);
			this->StrSTMod->Name = L"StrSTMod";
			this->StrSTMod->ReadOnly = true;
			this->StrSTMod->Size = System::Drawing::Size(24, 20);
			this->StrSTMod->TabIndex = 5;
			this->StrSTMod->Text = L"0";
			// 
			// StrSTProf
			// 
			this->StrSTProf->AutoSize = true;
			this->StrSTProf->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->StrSTProf->Location = System::Drawing::Point(3, 3);
			this->StrSTProf->Name = L"StrSTProf";
			this->StrSTProf->Size = System::Drawing::Size(94, 17);
			this->StrSTProf->TabIndex = 3;
			this->StrSTProf->Text = L"Saving Throws";
			this->StrSTProf->UseVisualStyleBackColor = true;
			this->StrSTProf->CheckedChanged += gcnew System::EventHandler(this, &MyForm::StrSTProf_CheckedChanged);
			// 
			// StrAthleticsProf
			// 
			this->StrAthleticsProf->AutoSize = true;
			this->StrAthleticsProf->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->StrAthleticsProf->Location = System::Drawing::Point(3, 26);
			this->StrAthleticsProf->Name = L"StrAthleticsProf";
			this->StrAthleticsProf->Size = System::Drawing::Size(63, 17);
			this->StrAthleticsProf->TabIndex = 4;
			this->StrAthleticsProf->Text = L"Athletics";
			this->StrAthleticsProf->UseVisualStyleBackColor = true;
			this->StrAthleticsProf->CheckedChanged += gcnew System::EventHandler(this, &MyForm::StrAthleticsProf_CheckedChanged);
			// 
			// ConSkillPanel
			// 
			this->ConSkillPanel->Controls->Add(this->ConSTProf);
			this->ConSkillPanel->Controls->Add(this->ConSTMod);
			this->ConSkillPanel->Location = System::Drawing::Point(69, 159);
			this->ConSkillPanel->Name = L"ConSkillPanel";
			this->ConSkillPanel->Size = System::Drawing::Size(159, 62);
			this->ConSkillPanel->TabIndex = 12;
			// 
			// ConSTProf
			// 
			this->ConSTProf->AutoSize = true;
			this->ConSTProf->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ConSTProf->Location = System::Drawing::Point(3, 4);
			this->ConSTProf->Name = L"ConSTProf";
			this->ConSTProf->Size = System::Drawing::Size(94, 17);
			this->ConSTProf->TabIndex = 5;
			this->ConSTProf->Text = L"Saving Throws";
			this->ConSTProf->UseVisualStyleBackColor = true;
			this->ConSTProf->CheckedChanged += gcnew System::EventHandler(this, &MyForm::ConSTProf_CheckedChanged);
			// 
			// ConSTMod
			// 
			this->ConSTMod->BackColor = System::Drawing::Color::AntiqueWhite;
			this->ConSTMod->Location = System::Drawing::Point(106, 2);
			this->ConSTMod->Name = L"ConSTMod";
			this->ConSTMod->ReadOnly = true;
			this->ConSTMod->Size = System::Drawing::Size(24, 20);
			this->ConSTMod->TabIndex = 5;
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
			this->IntSkillPanel->Location = System::Drawing::Point(69, 227);
			this->IntSkillPanel->Name = L"IntSkillPanel";
			this->IntSkillPanel->Size = System::Drawing::Size(159, 141);
			this->IntSkillPanel->TabIndex = 13;
			// 
			// IntInvExp
			// 
			this->IntInvExp->AutoSize = true;
			this->IntInvExp->Enabled = false;
			this->IntInvExp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->IntInvExp->Location = System::Drawing::Point(136, 74);
			this->IntInvExp->Name = L"IntInvExp";
			this->IntInvExp->Size = System::Drawing::Size(12, 11);
			this->IntInvExp->TabIndex = 7;
			this->IntInvExp->CheckedChanged += gcnew System::EventHandler(this, &MyForm::IntInvExp_CheckedChanged);
			// 
			// IntSTProf
			// 
			this->IntSTProf->AutoSize = true;
			this->IntSTProf->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->IntSTProf->Location = System::Drawing::Point(3, 3);
			this->IntSTProf->Name = L"IntSTProf";
			this->IntSTProf->Size = System::Drawing::Size(94, 17);
			this->IntSTProf->TabIndex = 11;
			this->IntSTProf->Text = L"Saving Throws";
			this->IntSTProf->UseVisualStyleBackColor = true;
			this->IntSTProf->CheckedChanged += gcnew System::EventHandler(this, &MyForm::IntSTProf_CheckedChanged);
			// 
			// IntHistExp
			// 
			this->IntHistExp->AutoSize = true;
			this->IntHistExp->Enabled = false;
			this->IntHistExp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->IntHistExp->Location = System::Drawing::Point(136, 50);
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
			this->IntRelExp->Location = System::Drawing::Point(136, 119);
			this->IntRelExp->Name = L"IntRelExp";
			this->IntRelExp->Size = System::Drawing::Size(12, 11);
			this->IntRelExp->TabIndex = 7;
			this->IntRelExp->CheckedChanged += gcnew System::EventHandler(this, &MyForm::IntRelExp_CheckedChanged);
			// 
			// IntRelMod
			// 
			this->IntRelMod->BackColor = System::Drawing::Color::AntiqueWhite;
			this->IntRelMod->Location = System::Drawing::Point(106, 116);
			this->IntRelMod->Name = L"IntRelMod";
			this->IntRelMod->ReadOnly = true;
			this->IntRelMod->Size = System::Drawing::Size(24, 20);
			this->IntRelMod->TabIndex = 5;
			this->IntRelMod->Text = L"0";
			// 
			// IntArcaExp
			// 
			this->IntArcaExp->AutoSize = true;
			this->IntArcaExp->Enabled = false;
			this->IntArcaExp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->IntArcaExp->Location = System::Drawing::Point(136, 27);
			this->IntArcaExp->Name = L"IntArcaExp";
			this->IntArcaExp->Size = System::Drawing::Size(12, 11);
			this->IntArcaExp->TabIndex = 7;
			this->IntArcaExp->CheckedChanged += gcnew System::EventHandler(this, &MyForm::IntArcaExp_CheckedChanged);
			// 
			// IntNatMod
			// 
			this->IntNatMod->BackColor = System::Drawing::Color::AntiqueWhite;
			this->IntNatMod->Location = System::Drawing::Point(106, 93);
			this->IntNatMod->Name = L"IntNatMod";
			this->IntNatMod->ReadOnly = true;
			this->IntNatMod->Size = System::Drawing::Size(24, 20);
			this->IntNatMod->TabIndex = 5;
			this->IntNatMod->Text = L"0";
			// 
			// IntNatExp
			// 
			this->IntNatExp->AutoSize = true;
			this->IntNatExp->Enabled = false;
			this->IntNatExp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->IntNatExp->Location = System::Drawing::Point(136, 96);
			this->IntNatExp->Name = L"IntNatExp";
			this->IntNatExp->Size = System::Drawing::Size(12, 11);
			this->IntNatExp->TabIndex = 7;
			this->IntNatExp->CheckedChanged += gcnew System::EventHandler(this, &MyForm::IntNatExp_CheckedChanged);
			// 
			// IntInvMod
			// 
			this->IntInvMod->BackColor = System::Drawing::Color::AntiqueWhite;
			this->IntInvMod->Location = System::Drawing::Point(106, 70);
			this->IntInvMod->Name = L"IntInvMod";
			this->IntInvMod->ReadOnly = true;
			this->IntInvMod->Size = System::Drawing::Size(24, 20);
			this->IntInvMod->TabIndex = 5;
			this->IntInvMod->Text = L"0";
			// 
			// IntHistMod
			// 
			this->IntHistMod->BackColor = System::Drawing::Color::AntiqueWhite;
			this->IntHistMod->Location = System::Drawing::Point(106, 47);
			this->IntHistMod->Name = L"IntHistMod";
			this->IntHistMod->ReadOnly = true;
			this->IntHistMod->Size = System::Drawing::Size(24, 20);
			this->IntHistMod->TabIndex = 5;
			this->IntHistMod->Text = L"0";
			// 
			// IntArcaMod
			// 
			this->IntArcaMod->BackColor = System::Drawing::Color::AntiqueWhite;
			this->IntArcaMod->Location = System::Drawing::Point(106, 24);
			this->IntArcaMod->Name = L"IntArcaMod";
			this->IntArcaMod->ReadOnly = true;
			this->IntArcaMod->Size = System::Drawing::Size(24, 20);
			this->IntArcaMod->TabIndex = 5;
			this->IntArcaMod->Text = L"0";
			// 
			// IntSTMod
			// 
			this->IntSTMod->BackColor = System::Drawing::Color::AntiqueWhite;
			this->IntSTMod->Location = System::Drawing::Point(106, 1);
			this->IntSTMod->Name = L"IntSTMod";
			this->IntSTMod->ReadOnly = true;
			this->IntSTMod->Size = System::Drawing::Size(24, 20);
			this->IntSTMod->TabIndex = 5;
			this->IntSTMod->Text = L"0";
			// 
			// IntArcanaProf
			// 
			this->IntArcanaProf->AutoSize = true;
			this->IntArcanaProf->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->IntArcanaProf->Location = System::Drawing::Point(3, 26);
			this->IntArcanaProf->Name = L"IntArcanaProf";
			this->IntArcanaProf->Size = System::Drawing::Size(57, 17);
			this->IntArcanaProf->TabIndex = 6;
			this->IntArcanaProf->Text = L"Arcana";
			this->IntArcanaProf->UseVisualStyleBackColor = true;
			this->IntArcanaProf->CheckedChanged += gcnew System::EventHandler(this, &MyForm::IntArcanaProf_CheckedChanged);
			// 
			// IntHistoryProf
			// 
			this->IntHistoryProf->AutoSize = true;
			this->IntHistoryProf->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->IntHistoryProf->Location = System::Drawing::Point(3, 49);
			this->IntHistoryProf->Name = L"IntHistoryProf";
			this->IntHistoryProf->Size = System::Drawing::Size(55, 17);
			this->IntHistoryProf->TabIndex = 6;
			this->IntHistoryProf->Text = L"History";
			this->IntHistoryProf->UseVisualStyleBackColor = true;
			this->IntHistoryProf->CheckedChanged += gcnew System::EventHandler(this, &MyForm::IntHistoryProf_CheckedChanged);
			// 
			// IntReligionProf
			// 
			this->IntReligionProf->AutoSize = true;
			this->IntReligionProf->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->IntReligionProf->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->IntReligionProf->Location = System::Drawing::Point(3, 118);
			this->IntReligionProf->Name = L"IntReligionProf";
			this->IntReligionProf->Size = System::Drawing::Size(61, 17);
			this->IntReligionProf->TabIndex = 6;
			this->IntReligionProf->Text = L"Religion";
			this->IntReligionProf->UseVisualStyleBackColor = true;
			this->IntReligionProf->CheckedChanged += gcnew System::EventHandler(this, &MyForm::IntReligionProf_CheckedChanged);
			// 
			// IntNatureProf
			// 
			this->IntNatureProf->AutoSize = true;
			this->IntNatureProf->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->IntNatureProf->Location = System::Drawing::Point(3, 95);
			this->IntNatureProf->Name = L"IntNatureProf";
			this->IntNatureProf->Size = System::Drawing::Size(55, 17);
			this->IntNatureProf->TabIndex = 6;
			this->IntNatureProf->Text = L"Nature";
			this->IntNatureProf->UseVisualStyleBackColor = true;
			this->IntNatureProf->CheckedChanged += gcnew System::EventHandler(this, &MyForm::IntNatureProf_CheckedChanged);
			// 
			// IntInvestProf
			// 
			this->IntInvestProf->AutoSize = true;
			this->IntInvestProf->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->IntInvestProf->Location = System::Drawing::Point(3, 72);
			this->IntInvestProf->Name = L"IntInvestProf";
			this->IntInvestProf->Size = System::Drawing::Size(83, 17);
			this->IntInvestProf->TabIndex = 6;
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
			this->WisSkillPanel->Location = System::Drawing::Point(69, 374);
			this->WisSkillPanel->Name = L"WisSkillPanel";
			this->WisSkillPanel->Size = System::Drawing::Size(159, 141);
			this->WisSkillPanel->TabIndex = 13;
			// 
			// WisMedExp
			// 
			this->WisMedExp->AutoSize = true;
			this->WisMedExp->Enabled = false;
			this->WisMedExp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->WisMedExp->Location = System::Drawing::Point(136, 74);
			this->WisMedExp->Name = L"WisMedExp";
			this->WisMedExp->Size = System::Drawing::Size(12, 11);
			this->WisMedExp->TabIndex = 7;
			this->WisMedExp->CheckedChanged += gcnew System::EventHandler(this, &MyForm::WisMedExp_CheckedChanged);
			// 
			// WisST
			// 
			this->WisST->AutoSize = true;
			this->WisST->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->WisST->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->WisST->Location = System::Drawing::Point(3, 3);
			this->WisST->Name = L"WisST";
			this->WisST->Size = System::Drawing::Size(94, 17);
			this->WisST->TabIndex = 11;
			this->WisST->Text = L"Saving Throws";
			this->WisST->UseVisualStyleBackColor = true;
			this->WisST->CheckedChanged += gcnew System::EventHandler(this, &MyForm::WisST_CheckedChanged);
			// 
			// WisSurvExp
			// 
			this->WisSurvExp->AutoSize = true;
			this->WisSurvExp->Enabled = false;
			this->WisSurvExp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->WisSurvExp->Location = System::Drawing::Point(136, 119);
			this->WisSurvExp->Name = L"WisSurvExp";
			this->WisSurvExp->Size = System::Drawing::Size(12, 11);
			this->WisSurvExp->TabIndex = 7;
			this->WisSurvExp->CheckedChanged += gcnew System::EventHandler(this, &MyForm::WisSurvExp_CheckedChanged);
			// 
			// WisSurvMod
			// 
			this->WisSurvMod->BackColor = System::Drawing::Color::AntiqueWhite;
			this->WisSurvMod->Location = System::Drawing::Point(106, 116);
			this->WisSurvMod->Name = L"WisSurvMod";
			this->WisSurvMod->ReadOnly = true;
			this->WisSurvMod->Size = System::Drawing::Size(24, 20);
			this->WisSurvMod->TabIndex = 5;
			this->WisSurvMod->Text = L"0";
			// 
			// WisInsExp
			// 
			this->WisInsExp->AutoSize = true;
			this->WisInsExp->Enabled = false;
			this->WisInsExp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->WisInsExp->Location = System::Drawing::Point(136, 50);
			this->WisInsExp->Name = L"WisInsExp";
			this->WisInsExp->Size = System::Drawing::Size(12, 11);
			this->WisInsExp->TabIndex = 7;
			this->WisInsExp->CheckedChanged += gcnew System::EventHandler(this, &MyForm::WisInsExp_CheckedChanged);
			// 
			// WisPercMod
			// 
			this->WisPercMod->BackColor = System::Drawing::Color::AntiqueWhite;
			this->WisPercMod->Location = System::Drawing::Point(106, 93);
			this->WisPercMod->Name = L"WisPercMod";
			this->WisPercMod->ReadOnly = true;
			this->WisPercMod->Size = System::Drawing::Size(24, 20);
			this->WisPercMod->TabIndex = 5;
			this->WisPercMod->Text = L"0";
			// 
			// WisMedMod
			// 
			this->WisMedMod->BackColor = System::Drawing::Color::AntiqueWhite;
			this->WisMedMod->Location = System::Drawing::Point(106, 70);
			this->WisMedMod->Name = L"WisMedMod";
			this->WisMedMod->ReadOnly = true;
			this->WisMedMod->Size = System::Drawing::Size(24, 20);
			this->WisMedMod->TabIndex = 5;
			this->WisMedMod->Text = L"0";
			// 
			// WisAHExp
			// 
			this->WisAHExp->AutoSize = true;
			this->WisAHExp->Enabled = false;
			this->WisAHExp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->WisAHExp->Location = System::Drawing::Point(136, 27);
			this->WisAHExp->Name = L"WisAHExp";
			this->WisAHExp->Size = System::Drawing::Size(12, 11);
			this->WisAHExp->TabIndex = 7;
			this->WisAHExp->CheckedChanged += gcnew System::EventHandler(this, &MyForm::WisAHExp_CheckedChanged);
			// 
			// WisInsMod
			// 
			this->WisInsMod->BackColor = System::Drawing::Color::AntiqueWhite;
			this->WisInsMod->Location = System::Drawing::Point(106, 47);
			this->WisInsMod->Name = L"WisInsMod";
			this->WisInsMod->ReadOnly = true;
			this->WisInsMod->Size = System::Drawing::Size(24, 20);
			this->WisInsMod->TabIndex = 5;
			this->WisInsMod->Text = L"0";
			// 
			// WisAHMod
			// 
			this->WisAHMod->BackColor = System::Drawing::Color::AntiqueWhite;
			this->WisAHMod->Location = System::Drawing::Point(106, 24);
			this->WisAHMod->Name = L"WisAHMod";
			this->WisAHMod->ReadOnly = true;
			this->WisAHMod->Size = System::Drawing::Size(24, 20);
			this->WisAHMod->TabIndex = 5;
			this->WisAHMod->Text = L"0";
			// 
			// WisPercExp
			// 
			this->WisPercExp->AutoSize = true;
			this->WisPercExp->Enabled = false;
			this->WisPercExp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->WisPercExp->Location = System::Drawing::Point(136, 96);
			this->WisPercExp->Name = L"WisPercExp";
			this->WisPercExp->Size = System::Drawing::Size(12, 11);
			this->WisPercExp->TabIndex = 7;
			this->WisPercExp->CheckedChanged += gcnew System::EventHandler(this, &MyForm::WisPercExp_CheckedChanged);
			// 
			// WisSTMod
			// 
			this->WisSTMod->BackColor = System::Drawing::Color::AntiqueWhite;
			this->WisSTMod->Location = System::Drawing::Point(106, 1);
			this->WisSTMod->Name = L"WisSTMod";
			this->WisSTMod->ReadOnly = true;
			this->WisSTMod->Size = System::Drawing::Size(24, 20);
			this->WisSTMod->TabIndex = 5;
			this->WisSTMod->Text = L"0";
			// 
			// WisAnimProf
			// 
			this->WisAnimProf->AutoSize = true;
			this->WisAnimProf->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->WisAnimProf->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->WisAnimProf->Location = System::Drawing::Point(3, 26);
			this->WisAnimProf->Name = L"WisAnimProf";
			this->WisAnimProf->Size = System::Drawing::Size(99, 17);
			this->WisAnimProf->TabIndex = 6;
			this->WisAnimProf->Text = L"Animal Handling";
			this->WisAnimProf->UseVisualStyleBackColor = true;
			this->WisAnimProf->CheckedChanged += gcnew System::EventHandler(this, &MyForm::WisAnimProf_CheckedChanged);
			// 
			// WisInsProf
			// 
			this->WisInsProf->AutoSize = true;
			this->WisInsProf->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->WisInsProf->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->WisInsProf->Location = System::Drawing::Point(3, 49);
			this->WisInsProf->Name = L"WisInsProf";
			this->WisInsProf->Size = System::Drawing::Size(54, 17);
			this->WisInsProf->TabIndex = 6;
			this->WisInsProf->Text = L"Insight";
			this->WisInsProf->UseVisualStyleBackColor = true;
			this->WisInsProf->CheckedChanged += gcnew System::EventHandler(this, &MyForm::WisInsProf_CheckedChanged);
			// 
			// WisSurvProf
			// 
			this->WisSurvProf->AutoSize = true;
			this->WisSurvProf->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->WisSurvProf->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->WisSurvProf->Location = System::Drawing::Point(3, 118);
			this->WisSurvProf->Name = L"WisSurvProf";
			this->WisSurvProf->Size = System::Drawing::Size(61, 17);
			this->WisSurvProf->TabIndex = 6;
			this->WisSurvProf->Text = L"Survival";
			this->WisSurvProf->UseVisualStyleBackColor = true;
			this->WisSurvProf->CheckedChanged += gcnew System::EventHandler(this, &MyForm::WisSurvProf_CheckedChanged);
			// 
			// WisPercProf
			// 
			this->WisPercProf->AutoSize = true;
			this->WisPercProf->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->WisPercProf->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->WisPercProf->Location = System::Drawing::Point(3, 95);
			this->WisPercProf->Name = L"WisPercProf";
			this->WisPercProf->Size = System::Drawing::Size(74, 17);
			this->WisPercProf->TabIndex = 6;
			this->WisPercProf->Text = L"Perception";
			this->WisPercProf->UseVisualStyleBackColor = true;
			this->WisPercProf->CheckedChanged += gcnew System::EventHandler(this, &MyForm::WisPercProf_CheckedChanged);
			// 
			// WisMedProf
			// 
			this->WisMedProf->AutoSize = true;
			this->WisMedProf->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->WisMedProf->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->WisMedProf->Location = System::Drawing::Point(3, 72);
			this->WisMedProf->Name = L"WisMedProf";
			this->WisMedProf->Size = System::Drawing::Size(66, 17);
			this->WisMedProf->TabIndex = 6;
			this->WisMedProf->Text = L"Medicine";
			this->WisMedProf->UseVisualStyleBackColor = true;
			this->WisMedProf->CheckedChanged += gcnew System::EventHandler(this, &MyForm::WisMedProf_CheckedChanged);
			// 
			// ProfBonus
			// 
			this->ProfBonus->BackColor = System::Drawing::Color::OldLace;
			this->ProfBonus->Location = System::Drawing::Point(254, 3);
			this->ProfBonus->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 7, 0, 0, 0 });
			this->ProfBonus->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->ProfBonus->Name = L"ProfBonus";
			this->ProfBonus->Size = System::Drawing::Size(29, 20);
			this->ProfBonus->TabIndex = 1;
			this->ProfBonus->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->ProfBonus->ValueChanged += gcnew System::EventHandler(this, &MyForm::ProfBonus_ValueChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::AntiqueWhite;
			this->ClientSize = System::Drawing::Size(405, 729);
			this->Controls->Add(this->flowLayoutPanel1);
			this->ForeColor = System::Drawing::Color::SaddleBrown;
			this->MinimumSize = System::Drawing::Size(405, 405);
			this->Name = L"MyForm";
			this->Text = L"MonsterSheet";
			this->flowLayoutPanel1->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ProfBonus))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void ProfBonus_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	UpdateSTR();
	UpdateDEX();
	UpdateCON();
	UpdateINT();
	UpdateWIS();
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
			StrSTMod->Text = (ProfBonus->Value + System::Int16::Parse(StrMod->Text)).ToString();
		}
		else
			StrSTMod->Text = (System::Int16::Parse(StrMod->Text)).ToString();
		//
		// Athletics
		//
		if (StrAthleticsProf->Checked) {
			if (StrAthExp->Checked)
				StrAthleticsMod->Text = (2 * ProfBonus->Value + System::Int16::Parse(StrMod->Text)).ToString();
			else
				StrAthleticsMod->Text = (ProfBonus->Value + System::Int16::Parse(StrMod->Text)).ToString();
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
			DexSTMod->Text = (ProfBonus->Value + System::Int16::Parse(DexMod->Text)).ToString();
		}
		else
			DexSTMod->Text = (System::Int16::Parse(DexMod->Text)).ToString();
		//
		// Acrobatics
		//
		if (DexAcrobaticsProf->Checked) {
			if (DexAcroExp->Checked)
				DexAcroMod->Text = (2 * ProfBonus->Value + System::Int16::Parse(DexMod->Text)).ToString();
			else
				DexAcroMod->Text = (ProfBonus->Value + System::Int16::Parse(DexMod->Text)).ToString();
		}
		else
			DexAcroMod->Text = (System::Int16::Parse(DexMod->Text)).ToString();
		//
		// Sleight of Hand
		//
		if (DexSoHProf->Checked) {
			if (DexSoHExp->Checked)
				DexSoHMod->Text = (2 * ProfBonus->Value + System::Int16::Parse(DexMod->Text)).ToString();
			else
				DexSoHMod->Text = (ProfBonus->Value + System::Int16::Parse(DexMod->Text)).ToString();
		}
		else
			DexSoHMod->Text = (System::Int16::Parse(DexMod->Text)).ToString();
		//
		// Stealth
		//
		if (DexStealthProf->Checked) {
			if (DexStealthExp->Checked)
				DexStealthMod->Text = (2 * ProfBonus->Value + System::Int16::Parse(DexMod->Text)).ToString();
			else
				DexStealthMod->Text = (ProfBonus->Value + System::Int16::Parse(DexMod->Text)).ToString();
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
			ConSTMod->Text = (ProfBonus->Value + System::Int16::Parse(ConMod->Text)).ToString();
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
			IntSTMod->Text = (ProfBonus->Value + System::Int16::Parse(IntMod->Text)).ToString();
		else
			IntSTMod->Text = (System::Int16::Parse(IntMod->Text)).ToString();
		//
		// Arcana
		//
		if (IntArcanaProf->Checked) {
			if (IntArcaExp->Checked)
				IntArcaMod->Text = (2 * ProfBonus->Value + System::Int16::Parse(IntMod->Text)).ToString();
			else
				IntArcaMod->Text = (ProfBonus->Value + System::Int16::Parse(IntMod->Text)).ToString();
		}
		else
			IntArcaMod->Text = (System::Int16::Parse(IntMod->Text)).ToString();
		//
		// History
		//
		if (IntHistoryProf->Checked) {
			if (IntHistExp->Checked)
				IntHistMod->Text = (2 * ProfBonus->Value + System::Int16::Parse(IntMod->Text)).ToString();
			else
				IntHistMod->Text = (ProfBonus->Value + System::Int16::Parse(IntMod->Text)).ToString();
		}
		else
			IntHistMod->Text = (System::Int16::Parse(IntMod->Text)).ToString();
		//
		// Investigation
		//
		if (IntInvestProf->Checked) {
			if (IntInvExp->Checked)
				IntInvMod->Text = (2 * ProfBonus->Value + System::Int16::Parse(IntMod->Text)).ToString();
			else
				IntInvMod->Text = (ProfBonus->Value + System::Int16::Parse(IntMod->Text)).ToString();
		}
		else
			IntInvMod->Text = (System::Int16::Parse(IntMod->Text)).ToString();
		//
		// Nature
		//
		if (IntNatureProf->Checked) {
			if (IntNatExp->Checked)
				IntNatMod->Text = (2 * ProfBonus->Value + System::Int16::Parse(IntMod->Text)).ToString();
			else
				IntNatMod->Text = (ProfBonus->Value + System::Int16::Parse(IntMod->Text)).ToString();
		}
		else
			IntNatMod->Text = (System::Int16::Parse(IntMod->Text)).ToString();
		//
		// Religion
		//
		if (IntReligionProf->Checked) {
			if (IntRelExp->Checked)
				IntRelMod->Text = (2 * ProfBonus->Value + System::Int16::Parse(IntMod->Text)).ToString();
			else
				IntRelMod->Text = (ProfBonus->Value + System::Int16::Parse(IntMod->Text)).ToString();
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
			WisSTMod->Text = (ProfBonus->Value + System::Int16::Parse(WisMod->Text)).ToString();
		else
			WisSTMod->Text = (System::Int16::Parse(WisMod->Text)).ToString();
		//
		// Animal Handling
		//
		if (WisAnimProf->Checked) {
			if (WisAHExp->Checked)
				WisAHMod->Text = (2 * ProfBonus->Value + System::Int16::Parse(WisMod->Text)).ToString();
			else
				WisAHMod->Text = (ProfBonus->Value + System::Int16::Parse(WisMod->Text)).ToString();
		}
		else
			WisAHMod->Text = (System::Int16::Parse(WisMod->Text)).ToString();
		//
		// Insight
		//
		if (WisInsProf->Checked) {
			if (WisInsExp->Checked)
				WisInsMod->Text = (2 * ProfBonus->Value + System::Int16::Parse(WisMod->Text)).ToString();
			else
				WisInsMod->Text = (ProfBonus->Value + System::Int16::Parse(WisMod->Text)).ToString();
		}
		else
			WisInsMod->Text = (System::Int16::Parse(WisMod->Text)).ToString();
		//
		// Medicine
		//
		if (WisMedProf->Checked) {
			if (WisMedExp->Checked)
				WisMedMod->Text = (2 * ProfBonus->Value + System::Int16::Parse(WisMod->Text)).ToString();
			else
				WisMedMod->Text = (ProfBonus->Value + System::Int16::Parse(WisMod->Text)).ToString();
		}
		else
			WisMedMod->Text = (System::Int16::Parse(WisMod->Text)).ToString();
		//
		// Perception
		//
		if (WisPercProf->Checked) {
			if (WisPercExp->Checked) {
				WisPercMod->Text = (2 * ProfBonus->Value + System::Int16::Parse(WisMod->Text)).ToString();
				WisPasPercVal->Text = (10 + 2 * ProfBonus->Value + System::Int16::Parse(WisMod->Text)).ToString();
			}
			else {
				WisPercMod->Text = (ProfBonus->Value + System::Int16::Parse(WisMod->Text)).ToString();
				WisPasPercVal->Text = (10 + ProfBonus->Value + System::Int16::Parse(WisMod->Text)).ToString();
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
				WisSurvMod->Text = (2 * ProfBonus->Value + System::Int16::Parse(WisMod->Text)).ToString();
			else
				WisSurvMod->Text = (ProfBonus->Value + System::Int16::Parse(WisMod->Text)).ToString();
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
private: System::Void ChaScore_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void ChaSTProf_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void ChaDecProf_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void ChaDecExp_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void ChaIntimProf_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void ChaIntimExp_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void ChaPerfProf_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void ChaPerfExp_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void ChaPersProf_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void ChaPersExp_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
