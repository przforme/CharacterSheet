#pragma once

namespace CppWinForm1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for IniDialog
	/// </summary>
	public ref class IniDialog : public System::Windows::Forms::Form
	{
	public:
		IniDialog(String ^text)
		{
			InitializeComponent();
			DexMod->Text = text;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~IniDialog()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  UpdateButton;
	protected:

	protected:

	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::Label^  DexLabel;
	private: System::Windows::Forms::Label^  MiscLabel;
	private: System::Windows::Forms::TextBox^  DexMod;
	private: System::Windows::Forms::TextBox^  MiscMod;




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
			this->UpdateButton = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->DexLabel = (gcnew System::Windows::Forms::Label());
			this->MiscLabel = (gcnew System::Windows::Forms::Label());
			this->DexMod = (gcnew System::Windows::Forms::TextBox());
			this->MiscMod = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// UpdateButton
			// 
			this->UpdateButton->Location = System::Drawing::Point(88, 76);
			this->UpdateButton->Name = L"UpdateButton";
			this->UpdateButton->Size = System::Drawing::Size(75, 23);
			this->UpdateButton->TabIndex = 0;
			this->UpdateButton->Text = L"Update!";
			this->UpdateButton->UseVisualStyleBackColor = true;
			this->UpdateButton->Click += gcnew System::EventHandler(this, &IniDialog::button1_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->DexLabel, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->MiscLabel, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->DexMod, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->MiscMod, 1, 1);
			this->tableLayoutPanel1->Location = System::Drawing::Point(13, 13);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(150, 57);
			this->tableLayoutPanel1->TabIndex = 1;
			// 
			// DexLabel
			// 
			this->DexLabel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->DexLabel->AutoSize = true;
			this->DexLabel->Location = System::Drawing::Point(24, 6);
			this->DexLabel->Name = L"DexLabel";
			this->DexLabel->Size = System::Drawing::Size(27, 15);
			this->DexLabel->TabIndex = 0;
			this->DexLabel->Text = L"Dex";
			// 
			// MiscLabel
			// 
			this->MiscLabel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->MiscLabel->AutoSize = true;
			this->MiscLabel->Location = System::Drawing::Point(96, 6);
			this->MiscLabel->Name = L"MiscLabel";
			this->MiscLabel->Size = System::Drawing::Size(33, 15);
			this->MiscLabel->TabIndex = 1;
			this->MiscLabel->Text = L"Misc.";
			// 
			// DexMod
			// 
			this->DexMod->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->DexMod->Location = System::Drawing::Point(23, 32);
			this->DexMod->Name = L"DexMod";
			this->DexMod->ReadOnly = true;
			this->DexMod->Size = System::Drawing::Size(29, 21);
			this->DexMod->TabIndex = 2;
			this->DexMod->Text = L"0";
			// 
			// MiscMod
			// 
			this->MiscMod->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->MiscMod->Location = System::Drawing::Point(98, 32);
			this->MiscMod->Name = L"MiscMod";
			this->MiscMod->Size = System::Drawing::Size(29, 21);
			this->MiscMod->TabIndex = 3;
			this->MiscMod->Text = L"0";
			// 
			// IniDialog
			// 
			this->AcceptButton = this->UpdateButton;
			this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::AntiqueWhite;
			this->ClientSize = System::Drawing::Size(174, 111);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->UpdateButton);
			this->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->ForeColor = System::Drawing::Color::SaddleBrown;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"IniDialog";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Calculate Initiative";
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	};
}
