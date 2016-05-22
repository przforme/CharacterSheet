#pragma once

namespace CppWinForm1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ACDialog
	/// </summary>
	public ref class ACDialog : public System::Windows::Forms::Form
	{
	public:
		ACDialog(String ^Dex)
		{
			InitializeComponent();
			DexModVal->Text = Dex;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ACDialog()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::Label^  BaseMod;
	private: System::Windows::Forms::Label^  DexMod;
	private: System::Windows::Forms::Label^  MagMod;
	private: System::Windows::Forms::TextBox^  BaseModVal;
	private: System::Windows::Forms::TextBox^  DexModVal;
	private: System::Windows::Forms::TextBox^  MagModVal;
	private: System::Windows::Forms::Label^  MiscMod;
	private: System::Windows::Forms::TextBox^  MiscModVal;
	private: System::Windows::Forms::Button^  CalcAC;
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
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->BaseMod = (gcnew System::Windows::Forms::Label());
			this->DexMod = (gcnew System::Windows::Forms::Label());
			this->MagMod = (gcnew System::Windows::Forms::Label());
			this->BaseModVal = (gcnew System::Windows::Forms::TextBox());
			this->DexModVal = (gcnew System::Windows::Forms::TextBox());
			this->MagModVal = (gcnew System::Windows::Forms::TextBox());
			this->MiscMod = (gcnew System::Windows::Forms::Label());
			this->MiscModVal = (gcnew System::Windows::Forms::TextBox());
			this->CalcAC = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 4;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->Controls->Add(this->BaseMod, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->DexMod, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->MagMod, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->BaseModVal, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->DexModVal, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->MagModVal, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->MiscMod, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->MiscModVal, 3, 1);
			this->tableLayoutPanel1->Location = System::Drawing::Point(12, 12);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(290, 48);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// BaseMod
			// 
			this->BaseMod->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->BaseMod->AutoSize = true;
			this->BaseMod->Location = System::Drawing::Point(21, 4);
			this->BaseMod->Name = L"BaseMod";
			this->BaseMod->Size = System::Drawing::Size(30, 15);
			this->BaseMod->TabIndex = 0;
			this->BaseMod->Text = L"Base";
			// 
			// DexMod
			// 
			this->DexMod->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->DexMod->AutoSize = true;
			this->DexMod->Location = System::Drawing::Point(81, 4);
			this->DexMod->Name = L"DexMod";
			this->DexMod->Size = System::Drawing::Size(53, 15);
			this->DexMod->TabIndex = 1;
			this->DexMod->Text = L"Dexterity";
			// 
			// MagMod
			// 
			this->MagMod->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->MagMod->AutoSize = true;
			this->MagMod->Location = System::Drawing::Point(161, 4);
			this->MagMod->Name = L"MagMod";
			this->MagMod->Size = System::Drawing::Size(37, 15);
			this->MagMod->TabIndex = 2;
			this->MagMod->Text = L"Magic";
			// 
			// BaseModVal
			// 
			this->BaseModVal->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->BaseModVal->Location = System::Drawing::Point(22, 27);
			this->BaseModVal->Name = L"BaseModVal";
			this->BaseModVal->Size = System::Drawing::Size(28, 21);
			this->BaseModVal->TabIndex = 3;
			this->BaseModVal->Text = L"10";
			// 
			// DexModVal
			// 
			this->DexModVal->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->DexModVal->Location = System::Drawing::Point(94, 27);
			this->DexModVal->Name = L"DexModVal";
			this->DexModVal->ReadOnly = true;
			this->DexModVal->Size = System::Drawing::Size(28, 21);
			this->DexModVal->TabIndex = 4;
			this->DexModVal->Text = L"0";
			// 
			// MagModVal
			// 
			this->MagModVal->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->MagModVal->Location = System::Drawing::Point(165, 27);
			this->MagModVal->Name = L"MagModVal";
			this->MagModVal->Size = System::Drawing::Size(30, 21);
			this->MagModVal->TabIndex = 5;
			this->MagModVal->Text = L"0";
			// 
			// MiscMod
			// 
			this->MiscMod->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->MiscMod->AutoSize = true;
			this->MiscMod->Location = System::Drawing::Point(236, 4);
			this->MiscMod->Name = L"MiscMod";
			this->MiscMod->Size = System::Drawing::Size(33, 15);
			this->MiscMod->TabIndex = 2;
			this->MiscMod->Text = L"Misc.";
			// 
			// MiscModVal
			// 
			this->MiscModVal->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->MiscModVal->Location = System::Drawing::Point(238, 27);
			this->MiscModVal->Name = L"MiscModVal";
			this->MiscModVal->Size = System::Drawing::Size(30, 21);
			this->MiscModVal->TabIndex = 5;
			this->MiscModVal->Text = L"0";
			// 
			// CalcAC
			// 
			this->CalcAC->Location = System::Drawing::Point(227, 66);
			this->CalcAC->Name = L"CalcAC";
			this->CalcAC->Size = System::Drawing::Size(75, 23);
			this->CalcAC->TabIndex = 1;
			this->CalcAC->Text = L"Update!";
			this->CalcAC->UseVisualStyleBackColor = true;
			this->CalcAC->Click += gcnew System::EventHandler(this, &ACDialog::CalcAC_Click);
			// 
			// ACDialog
			// 
			this->AcceptButton = this->CalcAC;
			this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::AntiqueWhite;
			this->ClientSize = System::Drawing::Size(314, 101);
			this->Controls->Add(this->CalcAC);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->ForeColor = System::Drawing::Color::SaddleBrown;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(330, 140);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(330, 140);
			this->Name = L"ACDialog";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Calculate Armor Class";
			this->TopMost = true;
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void CalcAC_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	public:
		String ^ACVal() {
			int AC, base, dex, mag, misc;
			Int32::TryParse(BaseModVal->Text, base);
			Int32::TryParse(DexModVal->Text, dex);
			Int32::TryParse(MagModVal->Text, mag);
			Int32::TryParse(MiscModVal->Text, misc);
			AC = (base + dex + mag + misc);
			return AC.ToString();
		}
};
}
