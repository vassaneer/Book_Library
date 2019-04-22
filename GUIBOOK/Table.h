#pragma once
#include "seat_include.h"
#include "data_include.h"
namespace GUIBOOK {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Table
	/// </summary>
	public ref class Table : public System::Windows::Forms::Form
	{
	public:
		Table(void)
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
		~Table()
		{
			if (components)
			{
				delete components;
			}
		}
	private: cli::array<System::Windows::Forms::Panel^>  ^PanelArr;
	private: cli::array<System::Windows::Forms::TextBox^>  ^TextBoxArr;
	private: cli::array<System::Windows::Forms::CheckBox^>  ^CheckBoxArr;
	private: System::Windows::Forms::Panel^  A1P;
	private: System::Windows::Forms::Label^  A1T;
	private: System::Windows::Forms::Panel^  A2P;
	protected:



	private: System::Windows::Forms::Label^  A2T;
	private: System::Windows::Forms::Panel^  A3P;

	protected:

	protected:




	private: System::Windows::Forms::Label^  A3T;
	private: System::Windows::Forms::Panel^  A4P;



	private: System::Windows::Forms::Label^  A4T;
	private: System::Windows::Forms::Panel^  A5P;


	private: System::Windows::Forms::Label^  A5T;
	private: System::Windows::Forms::Panel^  A6P;


	private: System::Windows::Forms::Label^  A6T;

	private: System::Windows::Forms::Panel^  AP;

	private: System::Windows::Forms::Label^  AT;
	private: System::Windows::Forms::Panel^  BP;

	private: System::Windows::Forms::Label^  BT;
	private: System::Windows::Forms::Panel^  B6P;




	private: System::Windows::Forms::Label^  B6T;

	private: System::Windows::Forms::Panel^  B5P;

	private: System::Windows::Forms::Label^  B5T;

	private: System::Windows::Forms::Panel^  B4P;

	private: System::Windows::Forms::Label^  B4T;

	private: System::Windows::Forms::Panel^  B3P;

	private: System::Windows::Forms::Label^  B3T;

	private: System::Windows::Forms::Panel^  B2P;

	private: System::Windows::Forms::Label^  B2T;
	private: System::Windows::Forms::Panel^  B1P;


	private: System::Windows::Forms::Label^  B1T;
	private: System::Windows::Forms::Panel^  CP;


	private: System::Windows::Forms::Label^  CT;
	private: System::Windows::Forms::Panel^  C6P;



	private: System::Windows::Forms::Label^  C6T;

	private: System::Windows::Forms::Panel^  C5P;

	private: System::Windows::Forms::Label^  C5T;

	private: System::Windows::Forms::Panel^  C4P;

	private: System::Windows::Forms::Label^  C4T;

	private: System::Windows::Forms::Panel^  C3P;

	private: System::Windows::Forms::Label^  C3T;

	private: System::Windows::Forms::Panel^  C2P;

private: System::Windows::Forms::Label^  C2T;

private: System::Windows::Forms::Panel^  C1P;

private: System::Windows::Forms::Label^  C1T;
private: System::Windows::Forms::Panel^  DP;
private: System::Windows::Forms::Label^  DT;
private: System::Windows::Forms::Panel^  D6P;




private: System::Windows::Forms::Label^  D6T;

private: System::Windows::Forms::Panel^  D5P;

private: System::Windows::Forms::Label^  D5T;

private: System::Windows::Forms::Panel^  D4P;

private: System::Windows::Forms::Label^  D4T;

private: System::Windows::Forms::Panel^  D3P;

private: System::Windows::Forms::Label^  D3T;

private: System::Windows::Forms::Panel^  D2P;

private: System::Windows::Forms::Label^  D2T;


private: System::Windows::Forms::Panel^  D1P;

private: System::Windows::Forms::Label^  D1T;
private: System::Windows::Forms::Panel^  EP;


private: System::Windows::Forms::Label^  ET;
private: System::Windows::Forms::Panel^  E6P;


private: System::Windows::Forms::Label^  E6T;

private: System::Windows::Forms::Panel^  E5P;

private: System::Windows::Forms::Label^  E5T;

private: System::Windows::Forms::Panel^  E4P;

private: System::Windows::Forms::Label^  E4T;

private: System::Windows::Forms::Panel^  E3P;

private: System::Windows::Forms::Label^  E3T;

private: System::Windows::Forms::Panel^  E2P;

private: System::Windows::Forms::Label^  E2T;

private: System::Windows::Forms::Panel^  E1P;

private: System::Windows::Forms::Label^  E1T;
private: System::Windows::Forms::Panel^  FP;


private: System::Windows::Forms::Label^  FT;
private: System::Windows::Forms::Panel^  F6P;


private: System::Windows::Forms::Label^  F6T;

private: System::Windows::Forms::Panel^  F5P;

private: System::Windows::Forms::Label^  F5T;

private: System::Windows::Forms::Panel^  F4P;

private: System::Windows::Forms::Label^  F4T;

private: System::Windows::Forms::Panel^  F3P;

private: System::Windows::Forms::Label^  F3T;

private: System::Windows::Forms::Panel^  F2P;

private: System::Windows::Forms::Label^  F2T;

private: System::Windows::Forms::Panel^  F1P;

private: System::Windows::Forms::Label^  F1T;
private: System::Windows::Forms::Button^  back;
private: System::Windows::Forms::CheckBox^  Chair1;
private: System::Windows::Forms::CheckBox^  Chair2;
private: System::Windows::Forms::CheckBox^  Chair4;




private: System::Windows::Forms::CheckBox^  Chair3;
private: System::Windows::Forms::CheckBox^  Chair6;


private: System::Windows::Forms::CheckBox^  Chair5;
private: System::Windows::Forms::CheckBox^  AllChair;
private: System::Windows::Forms::ComboBox^  Table_list;



private: System::Windows::Forms::TextBox^  ID1;
private: System::Windows::Forms::TextBox^  ID2;
private: System::Windows::Forms::TextBox^  ID4;



private: System::Windows::Forms::TextBox^  ID3;
private: System::Windows::Forms::TextBox^  ID6;


private: System::Windows::Forms::TextBox^  ID5;
private: System::Windows::Forms::Button^  Confirm_Book;
private: System::Windows::Forms::Label^  label1;






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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Table::typeid));
			this->A1P = (gcnew System::Windows::Forms::Panel());
			this->A1T = (gcnew System::Windows::Forms::Label());
			this->A2P = (gcnew System::Windows::Forms::Panel());
			this->A2T = (gcnew System::Windows::Forms::Label());
			this->A3P = (gcnew System::Windows::Forms::Panel());
			this->A3T = (gcnew System::Windows::Forms::Label());
			this->A4P = (gcnew System::Windows::Forms::Panel());
			this->A4T = (gcnew System::Windows::Forms::Label());
			this->A5P = (gcnew System::Windows::Forms::Panel());
			this->A5T = (gcnew System::Windows::Forms::Label());
			this->A6P = (gcnew System::Windows::Forms::Panel());
			this->A6T = (gcnew System::Windows::Forms::Label());
			this->AP = (gcnew System::Windows::Forms::Panel());
			this->AT = (gcnew System::Windows::Forms::Label());
			this->BP = (gcnew System::Windows::Forms::Panel());
			this->BT = (gcnew System::Windows::Forms::Label());
			this->B6P = (gcnew System::Windows::Forms::Panel());
			this->B6T = (gcnew System::Windows::Forms::Label());
			this->B5P = (gcnew System::Windows::Forms::Panel());
			this->B5T = (gcnew System::Windows::Forms::Label());
			this->B4P = (gcnew System::Windows::Forms::Panel());
			this->B4T = (gcnew System::Windows::Forms::Label());
			this->B3P = (gcnew System::Windows::Forms::Panel());
			this->B3T = (gcnew System::Windows::Forms::Label());
			this->B2P = (gcnew System::Windows::Forms::Panel());
			this->B2T = (gcnew System::Windows::Forms::Label());
			this->B1P = (gcnew System::Windows::Forms::Panel());
			this->B1T = (gcnew System::Windows::Forms::Label());
			this->CP = (gcnew System::Windows::Forms::Panel());
			this->CT = (gcnew System::Windows::Forms::Label());
			this->C6P = (gcnew System::Windows::Forms::Panel());
			this->C6T = (gcnew System::Windows::Forms::Label());
			this->C5P = (gcnew System::Windows::Forms::Panel());
			this->C5T = (gcnew System::Windows::Forms::Label());
			this->C4P = (gcnew System::Windows::Forms::Panel());
			this->C4T = (gcnew System::Windows::Forms::Label());
			this->C3P = (gcnew System::Windows::Forms::Panel());
			this->C3T = (gcnew System::Windows::Forms::Label());
			this->C2P = (gcnew System::Windows::Forms::Panel());
			this->C2T = (gcnew System::Windows::Forms::Label());
			this->C1P = (gcnew System::Windows::Forms::Panel());
			this->C1T = (gcnew System::Windows::Forms::Label());
			this->DP = (gcnew System::Windows::Forms::Panel());
			this->DT = (gcnew System::Windows::Forms::Label());
			this->D6P = (gcnew System::Windows::Forms::Panel());
			this->D6T = (gcnew System::Windows::Forms::Label());
			this->D5P = (gcnew System::Windows::Forms::Panel());
			this->D5T = (gcnew System::Windows::Forms::Label());
			this->D4P = (gcnew System::Windows::Forms::Panel());
			this->D4T = (gcnew System::Windows::Forms::Label());
			this->D3P = (gcnew System::Windows::Forms::Panel());
			this->D3T = (gcnew System::Windows::Forms::Label());
			this->D2P = (gcnew System::Windows::Forms::Panel());
			this->D2T = (gcnew System::Windows::Forms::Label());
			this->D1P = (gcnew System::Windows::Forms::Panel());
			this->D1T = (gcnew System::Windows::Forms::Label());
			this->EP = (gcnew System::Windows::Forms::Panel());
			this->ET = (gcnew System::Windows::Forms::Label());
			this->E6P = (gcnew System::Windows::Forms::Panel());
			this->E6T = (gcnew System::Windows::Forms::Label());
			this->E5P = (gcnew System::Windows::Forms::Panel());
			this->E5T = (gcnew System::Windows::Forms::Label());
			this->E4P = (gcnew System::Windows::Forms::Panel());
			this->E4T = (gcnew System::Windows::Forms::Label());
			this->E3P = (gcnew System::Windows::Forms::Panel());
			this->E3T = (gcnew System::Windows::Forms::Label());
			this->E2P = (gcnew System::Windows::Forms::Panel());
			this->E2T = (gcnew System::Windows::Forms::Label());
			this->E1P = (gcnew System::Windows::Forms::Panel());
			this->E1T = (gcnew System::Windows::Forms::Label());
			this->FP = (gcnew System::Windows::Forms::Panel());
			this->FT = (gcnew System::Windows::Forms::Label());
			this->F6P = (gcnew System::Windows::Forms::Panel());
			this->F6T = (gcnew System::Windows::Forms::Label());
			this->F5P = (gcnew System::Windows::Forms::Panel());
			this->F5T = (gcnew System::Windows::Forms::Label());
			this->F4P = (gcnew System::Windows::Forms::Panel());
			this->F4T = (gcnew System::Windows::Forms::Label());
			this->F3P = (gcnew System::Windows::Forms::Panel());
			this->F3T = (gcnew System::Windows::Forms::Label());
			this->F2P = (gcnew System::Windows::Forms::Panel());
			this->F2T = (gcnew System::Windows::Forms::Label());
			this->F1P = (gcnew System::Windows::Forms::Panel());
			this->F1T = (gcnew System::Windows::Forms::Label());
			this->back = (gcnew System::Windows::Forms::Button());
			this->Chair1 = (gcnew System::Windows::Forms::CheckBox());
			this->Chair2 = (gcnew System::Windows::Forms::CheckBox());
			this->Chair4 = (gcnew System::Windows::Forms::CheckBox());
			this->Chair3 = (gcnew System::Windows::Forms::CheckBox());
			this->Chair6 = (gcnew System::Windows::Forms::CheckBox());
			this->Chair5 = (gcnew System::Windows::Forms::CheckBox());
			this->AllChair = (gcnew System::Windows::Forms::CheckBox());
			this->Table_list = (gcnew System::Windows::Forms::ComboBox());
			this->ID1 = (gcnew System::Windows::Forms::TextBox());
			this->ID2 = (gcnew System::Windows::Forms::TextBox());
			this->ID4 = (gcnew System::Windows::Forms::TextBox());
			this->ID3 = (gcnew System::Windows::Forms::TextBox());
			this->ID6 = (gcnew System::Windows::Forms::TextBox());
			this->ID5 = (gcnew System::Windows::Forms::TextBox());
			this->Confirm_Book = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->A1P->SuspendLayout();
			this->A2P->SuspendLayout();
			this->A3P->SuspendLayout();
			this->A4P->SuspendLayout();
			this->A5P->SuspendLayout();
			this->A6P->SuspendLayout();
			this->AP->SuspendLayout();
			this->BP->SuspendLayout();
			this->B6P->SuspendLayout();
			this->B5P->SuspendLayout();
			this->B4P->SuspendLayout();
			this->B3P->SuspendLayout();
			this->B2P->SuspendLayout();
			this->B1P->SuspendLayout();
			this->CP->SuspendLayout();
			this->C6P->SuspendLayout();
			this->C5P->SuspendLayout();
			this->C4P->SuspendLayout();
			this->C3P->SuspendLayout();
			this->C2P->SuspendLayout();
			this->C1P->SuspendLayout();
			this->DP->SuspendLayout();
			this->D6P->SuspendLayout();
			this->D5P->SuspendLayout();
			this->D4P->SuspendLayout();
			this->D3P->SuspendLayout();
			this->D2P->SuspendLayout();
			this->D1P->SuspendLayout();
			this->EP->SuspendLayout();
			this->E6P->SuspendLayout();
			this->E5P->SuspendLayout();
			this->E4P->SuspendLayout();
			this->E3P->SuspendLayout();
			this->E2P->SuspendLayout();
			this->E1P->SuspendLayout();
			this->FP->SuspendLayout();
			this->F6P->SuspendLayout();
			this->F5P->SuspendLayout();
			this->F4P->SuspendLayout();
			this->F3P->SuspendLayout();
			this->F2P->SuspendLayout();
			this->F1P->SuspendLayout();
			this->SuspendLayout();
			// 
			// A1P
			// 
			this->A1P->BackColor = System::Drawing::Color::Gold;
			this->A1P->Controls->Add(this->A1T);
			this->A1P->Location = System::Drawing::Point(29, 80);
			this->A1P->Margin = System::Windows::Forms::Padding(2);
			this->A1P->Name = L"A1P";
			this->A1P->Size = System::Drawing::Size(34, 35);
			this->A1P->TabIndex = 0;
			// 
			// A1T
			// 
			this->A1T->AutoSize = true;
			this->A1T->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->A1T->ForeColor = System::Drawing::SystemColors::Control;
			this->A1T->Location = System::Drawing::Point(3, 5);
			this->A1T->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->A1T->Name = L"A1T";
			this->A1T->Size = System::Drawing::Size(35, 24);
			this->A1T->TabIndex = 0;
			this->A1T->Text = L"A1";
			// 
			// A2P
			// 
			this->A2P->BackColor = System::Drawing::Color::Gold;
			this->A2P->Controls->Add(this->A2T);
			this->A2P->Location = System::Drawing::Point(69, 80);
			this->A2P->Margin = System::Windows::Forms::Padding(2);
			this->A2P->Name = L"A2P";
			this->A2P->Size = System::Drawing::Size(34, 35);
			this->A2P->TabIndex = 1;
			// 
			// A2T
			// 
			this->A2T->AutoSize = true;
			this->A2T->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->A2T->ForeColor = System::Drawing::SystemColors::Control;
			this->A2T->Location = System::Drawing::Point(3, 5);
			this->A2T->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->A2T->Name = L"A2T";
			this->A2T->Size = System::Drawing::Size(35, 24);
			this->A2T->TabIndex = 0;
			this->A2T->Text = L"A2";
			// 
			// A3P
			// 
			this->A3P->BackColor = System::Drawing::Color::Gold;
			this->A3P->Controls->Add(this->A3T);
			this->A3P->Location = System::Drawing::Point(108, 80);
			this->A3P->Margin = System::Windows::Forms::Padding(2);
			this->A3P->Name = L"A3P";
			this->A3P->Size = System::Drawing::Size(34, 35);
			this->A3P->TabIndex = 1;
			// 
			// A3T
			// 
			this->A3T->AutoSize = true;
			this->A3T->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->A3T->ForeColor = System::Drawing::SystemColors::Control;
			this->A3T->Location = System::Drawing::Point(3, 5);
			this->A3T->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->A3T->Name = L"A3T";
			this->A3T->Size = System::Drawing::Size(35, 24);
			this->A3T->TabIndex = 0;
			this->A3T->Text = L"A3";
			// 
			// A4P
			// 
			this->A4P->BackColor = System::Drawing::Color::Gold;
			this->A4P->Controls->Add(this->A4T);
			this->A4P->Location = System::Drawing::Point(30, 169);
			this->A4P->Margin = System::Windows::Forms::Padding(2);
			this->A4P->Name = L"A4P";
			this->A4P->Size = System::Drawing::Size(34, 35);
			this->A4P->TabIndex = 1;
			// 
			// A4T
			// 
			this->A4T->AutoSize = true;
			this->A4T->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->A4T->ForeColor = System::Drawing::SystemColors::Control;
			this->A4T->Location = System::Drawing::Point(3, 5);
			this->A4T->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->A4T->Name = L"A4T";
			this->A4T->Size = System::Drawing::Size(35, 24);
			this->A4T->TabIndex = 0;
			this->A4T->Text = L"A4";
			// 
			// A5P
			// 
			this->A5P->BackColor = System::Drawing::Color::Gold;
			this->A5P->Controls->Add(this->A5T);
			this->A5P->Location = System::Drawing::Point(69, 169);
			this->A5P->Margin = System::Windows::Forms::Padding(2);
			this->A5P->Name = L"A5P";
			this->A5P->Size = System::Drawing::Size(34, 35);
			this->A5P->TabIndex = 1;
			// 
			// A5T
			// 
			this->A5T->AutoSize = true;
			this->A5T->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->A5T->ForeColor = System::Drawing::SystemColors::Control;
			this->A5T->Location = System::Drawing::Point(3, 5);
			this->A5T->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->A5T->Name = L"A5T";
			this->A5T->Size = System::Drawing::Size(35, 24);
			this->A5T->TabIndex = 0;
			this->A5T->Text = L"A5";
			// 
			// A6P
			// 
			this->A6P->BackColor = System::Drawing::Color::Gold;
			this->A6P->Controls->Add(this->A6T);
			this->A6P->Location = System::Drawing::Point(110, 169);
			this->A6P->Margin = System::Windows::Forms::Padding(2);
			this->A6P->Name = L"A6P";
			this->A6P->Size = System::Drawing::Size(34, 35);
			this->A6P->TabIndex = 1;
			// 
			// A6T
			// 
			this->A6T->AutoSize = true;
			this->A6T->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->A6T->ForeColor = System::Drawing::SystemColors::Control;
			this->A6T->Location = System::Drawing::Point(3, 5);
			this->A6T->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->A6T->Name = L"A6T";
			this->A6T->Size = System::Drawing::Size(35, 24);
			this->A6T->TabIndex = 0;
			this->A6T->Text = L"A6";
			// 
			// AP
			// 
			this->AP->BackColor = System::Drawing::Color::Gold;
			this->AP->Controls->Add(this->AT);
			this->AP->Location = System::Drawing::Point(29, 120);
			this->AP->Margin = System::Windows::Forms::Padding(2);
			this->AP->Name = L"AP";
			this->AP->Size = System::Drawing::Size(115, 44);
			this->AP->TabIndex = 2;
			// 
			// AT
			// 
			this->AT->AutoSize = true;
			this->AT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->AT->ForeColor = System::Drawing::SystemColors::Control;
			this->AT->Location = System::Drawing::Point(43, 6);
			this->AT->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->AT->Name = L"AT";
			this->AT->Size = System::Drawing::Size(29, 29);
			this->AT->TabIndex = 1;
			this->AT->Text = L"A";
			// 
			// BP
			// 
			this->BP->BackColor = System::Drawing::Color::LimeGreen;
			this->BP->Controls->Add(this->BT);
			this->BP->Location = System::Drawing::Point(30, 293);
			this->BP->Margin = System::Windows::Forms::Padding(2);
			this->BP->Name = L"BP";
			this->BP->Size = System::Drawing::Size(115, 44);
			this->BP->TabIndex = 9;
			// 
			// BT
			// 
			this->BT->AutoSize = true;
			this->BT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->BT->ForeColor = System::Drawing::SystemColors::Control;
			this->BT->Location = System::Drawing::Point(43, 6);
			this->BT->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->BT->Name = L"BT";
			this->BT->Size = System::Drawing::Size(30, 29);
			this->BT->TabIndex = 1;
			this->BT->Text = L"B";
			// 
			// B6P
			// 
			this->B6P->BackColor = System::Drawing::Color::LimeGreen;
			this->B6P->Controls->Add(this->B6T);
			this->B6P->Location = System::Drawing::Point(110, 342);
			this->B6P->Margin = System::Windows::Forms::Padding(2);
			this->B6P->Name = L"B6P";
			this->B6P->Size = System::Drawing::Size(34, 35);
			this->B6P->TabIndex = 4;
			// 
			// B6T
			// 
			this->B6T->AutoSize = true;
			this->B6T->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->B6T->ForeColor = System::Drawing::SystemColors::Control;
			this->B6T->Location = System::Drawing::Point(3, 5);
			this->B6T->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->B6T->Name = L"B6T";
			this->B6T->Size = System::Drawing::Size(34, 24);
			this->B6T->TabIndex = 0;
			this->B6T->Text = L"B6";
			// 
			// B5P
			// 
			this->B5P->BackColor = System::Drawing::Color::LimeGreen;
			this->B5P->Controls->Add(this->B5T);
			this->B5P->Location = System::Drawing::Point(70, 342);
			this->B5P->Margin = System::Windows::Forms::Padding(2);
			this->B5P->Name = L"B5P";
			this->B5P->Size = System::Drawing::Size(34, 35);
			this->B5P->TabIndex = 5;
			// 
			// B5T
			// 
			this->B5T->AutoSize = true;
			this->B5T->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->B5T->ForeColor = System::Drawing::SystemColors::Control;
			this->B5T->Location = System::Drawing::Point(3, 5);
			this->B5T->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->B5T->Name = L"B5T";
			this->B5T->Size = System::Drawing::Size(34, 24);
			this->B5T->TabIndex = 0;
			this->B5T->Text = L"B5";
			// 
			// B4P
			// 
			this->B4P->BackColor = System::Drawing::Color::LimeGreen;
			this->B4P->Controls->Add(this->B4T);
			this->B4P->Location = System::Drawing::Point(31, 342);
			this->B4P->Margin = System::Windows::Forms::Padding(2);
			this->B4P->Name = L"B4P";
			this->B4P->Size = System::Drawing::Size(34, 35);
			this->B4P->TabIndex = 6;
			// 
			// B4T
			// 
			this->B4T->AutoSize = true;
			this->B4T->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->B4T->ForeColor = System::Drawing::SystemColors::Control;
			this->B4T->Location = System::Drawing::Point(3, 5);
			this->B4T->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->B4T->Name = L"B4T";
			this->B4T->Size = System::Drawing::Size(34, 24);
			this->B4T->TabIndex = 0;
			this->B4T->Text = L"B4";
			// 
			// B3P
			// 
			this->B3P->BackColor = System::Drawing::Color::LimeGreen;
			this->B3P->Controls->Add(this->B3T);
			this->B3P->Location = System::Drawing::Point(109, 254);
			this->B3P->Margin = System::Windows::Forms::Padding(2);
			this->B3P->Name = L"B3P";
			this->B3P->Size = System::Drawing::Size(34, 35);
			this->B3P->TabIndex = 7;
			// 
			// B3T
			// 
			this->B3T->AutoSize = true;
			this->B3T->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->B3T->ForeColor = System::Drawing::SystemColors::Control;
			this->B3T->Location = System::Drawing::Point(3, 5);
			this->B3T->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->B3T->Name = L"B3T";
			this->B3T->Size = System::Drawing::Size(34, 24);
			this->B3T->TabIndex = 0;
			this->B3T->Text = L"B3";
			// 
			// B2P
			// 
			this->B2P->BackColor = System::Drawing::Color::LimeGreen;
			this->B2P->Controls->Add(this->B2T);
			this->B2P->Location = System::Drawing::Point(70, 254);
			this->B2P->Margin = System::Windows::Forms::Padding(2);
			this->B2P->Name = L"B2P";
			this->B2P->Size = System::Drawing::Size(34, 35);
			this->B2P->TabIndex = 8;
			// 
			// B2T
			// 
			this->B2T->AutoSize = true;
			this->B2T->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->B2T->ForeColor = System::Drawing::SystemColors::Control;
			this->B2T->Location = System::Drawing::Point(3, 5);
			this->B2T->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->B2T->Name = L"B2T";
			this->B2T->Size = System::Drawing::Size(34, 24);
			this->B2T->TabIndex = 0;
			this->B2T->Text = L"B2";
			// 
			// B1P
			// 
			this->B1P->BackColor = System::Drawing::Color::LimeGreen;
			this->B1P->Controls->Add(this->B1T);
			this->B1P->Location = System::Drawing::Point(30, 254);
			this->B1P->Margin = System::Windows::Forms::Padding(2);
			this->B1P->Name = L"B1P";
			this->B1P->Size = System::Drawing::Size(34, 35);
			this->B1P->TabIndex = 3;
			// 
			// B1T
			// 
			this->B1T->AutoSize = true;
			this->B1T->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->B1T->ForeColor = System::Drawing::SystemColors::Control;
			this->B1T->Location = System::Drawing::Point(3, 5);
			this->B1T->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->B1T->Name = L"B1T";
			this->B1T->Size = System::Drawing::Size(34, 24);
			this->B1T->TabIndex = 0;
			this->B1T->Text = L"B1";
			// 
			// CP
			// 
			this->CP->BackColor = System::Drawing::Color::Turquoise;
			this->CP->Controls->Add(this->CT);
			this->CP->Location = System::Drawing::Point(29, 470);
			this->CP->Margin = System::Windows::Forms::Padding(2);
			this->CP->Name = L"CP";
			this->CP->Size = System::Drawing::Size(115, 44);
			this->CP->TabIndex = 16;
			// 
			// CT
			// 
			this->CT->AutoSize = true;
			this->CT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->CT->ForeColor = System::Drawing::SystemColors::Control;
			this->CT->Location = System::Drawing::Point(43, 6);
			this->CT->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->CT->Name = L"CT";
			this->CT->Size = System::Drawing::Size(31, 29);
			this->CT->TabIndex = 1;
			this->CT->Text = L"C";
			// 
			// C6P
			// 
			this->C6P->BackColor = System::Drawing::Color::Turquoise;
			this->C6P->Controls->Add(this->C6T);
			this->C6P->Location = System::Drawing::Point(110, 518);
			this->C6P->Margin = System::Windows::Forms::Padding(2);
			this->C6P->Name = L"C6P";
			this->C6P->Size = System::Drawing::Size(34, 35);
			this->C6P->TabIndex = 11;
			// 
			// C6T
			// 
			this->C6T->AutoSize = true;
			this->C6T->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->C6T->ForeColor = System::Drawing::SystemColors::Control;
			this->C6T->Location = System::Drawing::Point(3, 5);
			this->C6T->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->C6T->Name = L"C6T";
			this->C6T->Size = System::Drawing::Size(35, 24);
			this->C6T->TabIndex = 0;
			this->C6T->Text = L"C6";
			// 
			// C5P
			// 
			this->C5P->BackColor = System::Drawing::Color::Turquoise;
			this->C5P->Controls->Add(this->C5T);
			this->C5P->Location = System::Drawing::Point(69, 518);
			this->C5P->Margin = System::Windows::Forms::Padding(2);
			this->C5P->Name = L"C5P";
			this->C5P->Size = System::Drawing::Size(34, 35);
			this->C5P->TabIndex = 12;
			// 
			// C5T
			// 
			this->C5T->AutoSize = true;
			this->C5T->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->C5T->ForeColor = System::Drawing::SystemColors::Control;
			this->C5T->Location = System::Drawing::Point(3, 5);
			this->C5T->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->C5T->Name = L"C5T";
			this->C5T->Size = System::Drawing::Size(35, 24);
			this->C5T->TabIndex = 0;
			this->C5T->Text = L"C5";
			// 
			// C4P
			// 
			this->C4P->BackColor = System::Drawing::Color::Turquoise;
			this->C4P->Controls->Add(this->C4T);
			this->C4P->Location = System::Drawing::Point(30, 518);
			this->C4P->Margin = System::Windows::Forms::Padding(2);
			this->C4P->Name = L"C4P";
			this->C4P->Size = System::Drawing::Size(34, 35);
			this->C4P->TabIndex = 13;
			// 
			// C4T
			// 
			this->C4T->AutoSize = true;
			this->C4T->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->C4T->ForeColor = System::Drawing::SystemColors::Control;
			this->C4T->Location = System::Drawing::Point(3, 5);
			this->C4T->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->C4T->Name = L"C4T";
			this->C4T->Size = System::Drawing::Size(35, 24);
			this->C4T->TabIndex = 0;
			this->C4T->Text = L"C4";
			// 
			// C3P
			// 
			this->C3P->BackColor = System::Drawing::Color::Turquoise;
			this->C3P->Controls->Add(this->C3T);
			this->C3P->Location = System::Drawing::Point(108, 430);
			this->C3P->Margin = System::Windows::Forms::Padding(2);
			this->C3P->Name = L"C3P";
			this->C3P->Size = System::Drawing::Size(34, 35);
			this->C3P->TabIndex = 14;
			// 
			// C3T
			// 
			this->C3T->AutoSize = true;
			this->C3T->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->C3T->ForeColor = System::Drawing::SystemColors::Control;
			this->C3T->Location = System::Drawing::Point(3, 5);
			this->C3T->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->C3T->Name = L"C3T";
			this->C3T->Size = System::Drawing::Size(35, 24);
			this->C3T->TabIndex = 0;
			this->C3T->Text = L"C3";
			// 
			// C2P
			// 
			this->C2P->BackColor = System::Drawing::Color::Turquoise;
			this->C2P->Controls->Add(this->C2T);
			this->C2P->Location = System::Drawing::Point(69, 430);
			this->C2P->Margin = System::Windows::Forms::Padding(2);
			this->C2P->Name = L"C2P";
			this->C2P->Size = System::Drawing::Size(34, 35);
			this->C2P->TabIndex = 15;
			// 
			// C2T
			// 
			this->C2T->AutoSize = true;
			this->C2T->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->C2T->ForeColor = System::Drawing::SystemColors::Control;
			this->C2T->Location = System::Drawing::Point(3, 5);
			this->C2T->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->C2T->Name = L"C2T";
			this->C2T->Size = System::Drawing::Size(35, 24);
			this->C2T->TabIndex = 0;
			this->C2T->Text = L"C2";
			// 
			// C1P
			// 
			this->C1P->BackColor = System::Drawing::Color::Turquoise;
			this->C1P->Controls->Add(this->C1T);
			this->C1P->Location = System::Drawing::Point(29, 430);
			this->C1P->Margin = System::Windows::Forms::Padding(2);
			this->C1P->Name = L"C1P";
			this->C1P->Size = System::Drawing::Size(34, 35);
			this->C1P->TabIndex = 10;
			// 
			// C1T
			// 
			this->C1T->AutoSize = true;
			this->C1T->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->C1T->ForeColor = System::Drawing::SystemColors::Control;
			this->C1T->Location = System::Drawing::Point(3, 5);
			this->C1T->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->C1T->Name = L"C1T";
			this->C1T->Size = System::Drawing::Size(35, 24);
			this->C1T->TabIndex = 0;
			this->C1T->Text = L"C1";
			// 
			// DP
			// 
			this->DP->BackColor = System::Drawing::Color::Blue;
			this->DP->Controls->Add(this->DT);
			this->DP->Location = System::Drawing::Point(174, 120);
			this->DP->Margin = System::Windows::Forms::Padding(2);
			this->DP->Name = L"DP";
			this->DP->Size = System::Drawing::Size(115, 44);
			this->DP->TabIndex = 16;
			// 
			// DT
			// 
			this->DT->AutoSize = true;
			this->DT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->DT->ForeColor = System::Drawing::SystemColors::Control;
			this->DT->Location = System::Drawing::Point(43, 6);
			this->DT->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->DT->Name = L"DT";
			this->DT->Size = System::Drawing::Size(31, 29);
			this->DT->TabIndex = 1;
			this->DT->Text = L"D";
			// 
			// D6P
			// 
			this->D6P->BackColor = System::Drawing::Color::Blue;
			this->D6P->Controls->Add(this->D6T);
			this->D6P->Location = System::Drawing::Point(254, 169);
			this->D6P->Margin = System::Windows::Forms::Padding(2);
			this->D6P->Name = L"D6P";
			this->D6P->Size = System::Drawing::Size(34, 35);
			this->D6P->TabIndex = 11;
			// 
			// D6T
			// 
			this->D6T->AutoSize = true;
			this->D6T->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->D6T->ForeColor = System::Drawing::SystemColors::Control;
			this->D6T->Location = System::Drawing::Point(3, 5);
			this->D6T->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->D6T->Name = L"D6T";
			this->D6T->Size = System::Drawing::Size(35, 24);
			this->D6T->TabIndex = 0;
			this->D6T->Text = L"D6";
			// 
			// D5P
			// 
			this->D5P->BackColor = System::Drawing::Color::Blue;
			this->D5P->Controls->Add(this->D5T);
			this->D5P->Location = System::Drawing::Point(214, 169);
			this->D5P->Margin = System::Windows::Forms::Padding(2);
			this->D5P->Name = L"D5P";
			this->D5P->Size = System::Drawing::Size(34, 35);
			this->D5P->TabIndex = 12;
			// 
			// D5T
			// 
			this->D5T->AutoSize = true;
			this->D5T->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->D5T->ForeColor = System::Drawing::SystemColors::Control;
			this->D5T->Location = System::Drawing::Point(3, 5);
			this->D5T->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->D5T->Name = L"D5T";
			this->D5T->Size = System::Drawing::Size(35, 24);
			this->D5T->TabIndex = 0;
			this->D5T->Text = L"D5";
			// 
			// D4P
			// 
			this->D4P->BackColor = System::Drawing::Color::Blue;
			this->D4P->Controls->Add(this->D4T);
			this->D4P->Location = System::Drawing::Point(175, 169);
			this->D4P->Margin = System::Windows::Forms::Padding(2);
			this->D4P->Name = L"D4P";
			this->D4P->Size = System::Drawing::Size(34, 35);
			this->D4P->TabIndex = 13;
			// 
			// D4T
			// 
			this->D4T->AutoSize = true;
			this->D4T->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->D4T->ForeColor = System::Drawing::SystemColors::Control;
			this->D4T->Location = System::Drawing::Point(3, 5);
			this->D4T->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->D4T->Name = L"D4T";
			this->D4T->Size = System::Drawing::Size(35, 24);
			this->D4T->TabIndex = 0;
			this->D4T->Text = L"D4";
			// 
			// D3P
			// 
			this->D3P->BackColor = System::Drawing::Color::Blue;
			this->D3P->Controls->Add(this->D3T);
			this->D3P->Location = System::Drawing::Point(253, 80);
			this->D3P->Margin = System::Windows::Forms::Padding(2);
			this->D3P->Name = L"D3P";
			this->D3P->Size = System::Drawing::Size(34, 35);
			this->D3P->TabIndex = 14;
			// 
			// D3T
			// 
			this->D3T->AutoSize = true;
			this->D3T->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->D3T->ForeColor = System::Drawing::SystemColors::Control;
			this->D3T->Location = System::Drawing::Point(3, 5);
			this->D3T->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->D3T->Name = L"D3T";
			this->D3T->Size = System::Drawing::Size(35, 24);
			this->D3T->TabIndex = 0;
			this->D3T->Text = L"D3";
			// 
			// D2P
			// 
			this->D2P->BackColor = System::Drawing::Color::Blue;
			this->D2P->Controls->Add(this->D2T);
			this->D2P->Location = System::Drawing::Point(214, 80);
			this->D2P->Margin = System::Windows::Forms::Padding(2);
			this->D2P->Name = L"D2P";
			this->D2P->Size = System::Drawing::Size(34, 35);
			this->D2P->TabIndex = 15;
			// 
			// D2T
			// 
			this->D2T->AutoSize = true;
			this->D2T->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->D2T->ForeColor = System::Drawing::SystemColors::Control;
			this->D2T->Location = System::Drawing::Point(3, 5);
			this->D2T->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->D2T->Name = L"D2T";
			this->D2T->Size = System::Drawing::Size(35, 24);
			this->D2T->TabIndex = 0;
			this->D2T->Text = L"D2";
			// 
			// D1P
			// 
			this->D1P->BackColor = System::Drawing::Color::Blue;
			this->D1P->Controls->Add(this->D1T);
			this->D1P->Location = System::Drawing::Point(174, 80);
			this->D1P->Margin = System::Windows::Forms::Padding(2);
			this->D1P->Name = L"D1P";
			this->D1P->Size = System::Drawing::Size(34, 35);
			this->D1P->TabIndex = 10;
			// 
			// D1T
			// 
			this->D1T->AutoSize = true;
			this->D1T->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->D1T->ForeColor = System::Drawing::SystemColors::Control;
			this->D1T->Location = System::Drawing::Point(3, 5);
			this->D1T->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->D1T->Name = L"D1T";
			this->D1T->Size = System::Drawing::Size(35, 24);
			this->D1T->TabIndex = 0;
			this->D1T->Text = L"D1";
			// 
			// EP
			// 
			this->EP->BackColor = System::Drawing::Color::BlueViolet;
			this->EP->Controls->Add(this->ET);
			this->EP->Location = System::Drawing::Point(174, 293);
			this->EP->Margin = System::Windows::Forms::Padding(2);
			this->EP->Name = L"EP";
			this->EP->Size = System::Drawing::Size(115, 44);
			this->EP->TabIndex = 16;
			// 
			// ET
			// 
			this->ET->AutoSize = true;
			this->ET->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->ET->ForeColor = System::Drawing::SystemColors::Control;
			this->ET->Location = System::Drawing::Point(43, 6);
			this->ET->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->ET->Name = L"ET";
			this->ET->Size = System::Drawing::Size(30, 29);
			this->ET->TabIndex = 1;
			this->ET->Text = L"E";
			// 
			// E6P
			// 
			this->E6P->BackColor = System::Drawing::Color::BlueViolet;
			this->E6P->Controls->Add(this->E6T);
			this->E6P->Location = System::Drawing::Point(254, 342);
			this->E6P->Margin = System::Windows::Forms::Padding(2);
			this->E6P->Name = L"E6P";
			this->E6P->Size = System::Drawing::Size(34, 35);
			this->E6P->TabIndex = 11;
			// 
			// E6T
			// 
			this->E6T->AutoSize = true;
			this->E6T->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->E6T->ForeColor = System::Drawing::SystemColors::Control;
			this->E6T->Location = System::Drawing::Point(3, 5);
			this->E6T->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->E6T->Name = L"E6T";
			this->E6T->Size = System::Drawing::Size(35, 24);
			this->E6T->TabIndex = 0;
			this->E6T->Text = L"E6";
			// 
			// E5P
			// 
			this->E5P->BackColor = System::Drawing::Color::BlueViolet;
			this->E5P->Controls->Add(this->E5T);
			this->E5P->Location = System::Drawing::Point(214, 342);
			this->E5P->Margin = System::Windows::Forms::Padding(2);
			this->E5P->Name = L"E5P";
			this->E5P->Size = System::Drawing::Size(34, 35);
			this->E5P->TabIndex = 12;
			// 
			// E5T
			// 
			this->E5T->AutoSize = true;
			this->E5T->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->E5T->ForeColor = System::Drawing::SystemColors::Control;
			this->E5T->Location = System::Drawing::Point(3, 5);
			this->E5T->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->E5T->Name = L"E5T";
			this->E5T->Size = System::Drawing::Size(35, 24);
			this->E5T->TabIndex = 0;
			this->E5T->Text = L"E5";
			// 
			// E4P
			// 
			this->E4P->BackColor = System::Drawing::Color::BlueViolet;
			this->E4P->Controls->Add(this->E4T);
			this->E4P->Location = System::Drawing::Point(175, 342);
			this->E4P->Margin = System::Windows::Forms::Padding(2);
			this->E4P->Name = L"E4P";
			this->E4P->Size = System::Drawing::Size(34, 35);
			this->E4P->TabIndex = 13;
			// 
			// E4T
			// 
			this->E4T->AutoSize = true;
			this->E4T->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->E4T->ForeColor = System::Drawing::SystemColors::Control;
			this->E4T->Location = System::Drawing::Point(3, 5);
			this->E4T->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->E4T->Name = L"E4T";
			this->E4T->Size = System::Drawing::Size(35, 24);
			this->E4T->TabIndex = 0;
			this->E4T->Text = L"E4";
			// 
			// E3P
			// 
			this->E3P->BackColor = System::Drawing::Color::BlueViolet;
			this->E3P->Controls->Add(this->E3T);
			this->E3P->Location = System::Drawing::Point(253, 254);
			this->E3P->Margin = System::Windows::Forms::Padding(2);
			this->E3P->Name = L"E3P";
			this->E3P->Size = System::Drawing::Size(34, 35);
			this->E3P->TabIndex = 14;
			// 
			// E3T
			// 
			this->E3T->AutoSize = true;
			this->E3T->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->E3T->ForeColor = System::Drawing::SystemColors::Control;
			this->E3T->Location = System::Drawing::Point(3, 5);
			this->E3T->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->E3T->Name = L"E3T";
			this->E3T->Size = System::Drawing::Size(35, 24);
			this->E3T->TabIndex = 0;
			this->E3T->Text = L"E3";
			// 
			// E2P
			// 
			this->E2P->BackColor = System::Drawing::Color::BlueViolet;
			this->E2P->Controls->Add(this->E2T);
			this->E2P->Location = System::Drawing::Point(214, 254);
			this->E2P->Margin = System::Windows::Forms::Padding(2);
			this->E2P->Name = L"E2P";
			this->E2P->Size = System::Drawing::Size(34, 35);
			this->E2P->TabIndex = 15;
			// 
			// E2T
			// 
			this->E2T->AutoSize = true;
			this->E2T->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->E2T->ForeColor = System::Drawing::SystemColors::Control;
			this->E2T->Location = System::Drawing::Point(3, 5);
			this->E2T->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->E2T->Name = L"E2T";
			this->E2T->Size = System::Drawing::Size(35, 24);
			this->E2T->TabIndex = 0;
			this->E2T->Text = L"E2";
			// 
			// E1P
			// 
			this->E1P->BackColor = System::Drawing::Color::BlueViolet;
			this->E1P->Controls->Add(this->E1T);
			this->E1P->Location = System::Drawing::Point(174, 254);
			this->E1P->Margin = System::Windows::Forms::Padding(2);
			this->E1P->Name = L"E1P";
			this->E1P->Size = System::Drawing::Size(34, 35);
			this->E1P->TabIndex = 10;
			// 
			// E1T
			// 
			this->E1T->AutoSize = true;
			this->E1T->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->E1T->ForeColor = System::Drawing::SystemColors::Control;
			this->E1T->Location = System::Drawing::Point(3, 5);
			this->E1T->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->E1T->Name = L"E1T";
			this->E1T->Size = System::Drawing::Size(35, 24);
			this->E1T->TabIndex = 0;
			this->E1T->Text = L"E1";
			// 
			// FP
			// 
			this->FP->BackColor = System::Drawing::Color::HotPink;
			this->FP->Controls->Add(this->FT);
			this->FP->Location = System::Drawing::Point(174, 474);
			this->FP->Margin = System::Windows::Forms::Padding(2);
			this->FP->Name = L"FP";
			this->FP->Size = System::Drawing::Size(115, 44);
			this->FP->TabIndex = 16;
			// 
			// FT
			// 
			this->FT->AutoSize = true;
			this->FT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->FT->ForeColor = System::Drawing::SystemColors::Control;
			this->FT->Location = System::Drawing::Point(43, 6);
			this->FT->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->FT->Name = L"FT";
			this->FT->Size = System::Drawing::Size(29, 29);
			this->FT->TabIndex = 1;
			this->FT->Text = L"F";
			// 
			// F6P
			// 
			this->F6P->BackColor = System::Drawing::Color::HotPink;
			this->F6P->Controls->Add(this->F6T);
			this->F6P->Location = System::Drawing::Point(254, 523);
			this->F6P->Margin = System::Windows::Forms::Padding(2);
			this->F6P->Name = L"F6P";
			this->F6P->Size = System::Drawing::Size(34, 35);
			this->F6P->TabIndex = 11;
			// 
			// F6T
			// 
			this->F6T->AutoSize = true;
			this->F6T->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->F6T->ForeColor = System::Drawing::SystemColors::Control;
			this->F6T->Location = System::Drawing::Point(3, 5);
			this->F6T->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->F6T->Name = L"F6T";
			this->F6T->Size = System::Drawing::Size(34, 24);
			this->F6T->TabIndex = 0;
			this->F6T->Text = L"F6";
			// 
			// F5P
			// 
			this->F5P->BackColor = System::Drawing::Color::HotPink;
			this->F5P->Controls->Add(this->F5T);
			this->F5P->Location = System::Drawing::Point(214, 523);
			this->F5P->Margin = System::Windows::Forms::Padding(2);
			this->F5P->Name = L"F5P";
			this->F5P->Size = System::Drawing::Size(34, 35);
			this->F5P->TabIndex = 12;
			// 
			// F5T
			// 
			this->F5T->AutoSize = true;
			this->F5T->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->F5T->ForeColor = System::Drawing::SystemColors::Control;
			this->F5T->Location = System::Drawing::Point(3, 5);
			this->F5T->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->F5T->Name = L"F5T";
			this->F5T->Size = System::Drawing::Size(34, 24);
			this->F5T->TabIndex = 0;
			this->F5T->Text = L"F5";
			// 
			// F4P
			// 
			this->F4P->BackColor = System::Drawing::Color::HotPink;
			this->F4P->Controls->Add(this->F4T);
			this->F4P->Location = System::Drawing::Point(175, 523);
			this->F4P->Margin = System::Windows::Forms::Padding(2);
			this->F4P->Name = L"F4P";
			this->F4P->Size = System::Drawing::Size(34, 35);
			this->F4P->TabIndex = 13;
			// 
			// F4T
			// 
			this->F4T->AutoSize = true;
			this->F4T->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->F4T->ForeColor = System::Drawing::SystemColors::Control;
			this->F4T->Location = System::Drawing::Point(3, 5);
			this->F4T->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->F4T->Name = L"F4T";
			this->F4T->Size = System::Drawing::Size(34, 24);
			this->F4T->TabIndex = 0;
			this->F4T->Text = L"F4";
			// 
			// F3P
			// 
			this->F3P->BackColor = System::Drawing::Color::HotPink;
			this->F3P->Controls->Add(this->F3T);
			this->F3P->Location = System::Drawing::Point(253, 435);
			this->F3P->Margin = System::Windows::Forms::Padding(2);
			this->F3P->Name = L"F3P";
			this->F3P->Size = System::Drawing::Size(34, 35);
			this->F3P->TabIndex = 14;
			// 
			// F3T
			// 
			this->F3T->AutoSize = true;
			this->F3T->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->F3T->ForeColor = System::Drawing::SystemColors::Control;
			this->F3T->Location = System::Drawing::Point(0, 5);
			this->F3T->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->F3T->Name = L"F3T";
			this->F3T->Size = System::Drawing::Size(34, 24);
			this->F3T->TabIndex = 0;
			this->F3T->Text = L"F3";
			// 
			// F2P
			// 
			this->F2P->BackColor = System::Drawing::Color::HotPink;
			this->F2P->Controls->Add(this->F2T);
			this->F2P->Location = System::Drawing::Point(214, 435);
			this->F2P->Margin = System::Windows::Forms::Padding(2);
			this->F2P->Name = L"F2P";
			this->F2P->Size = System::Drawing::Size(34, 35);
			this->F2P->TabIndex = 15;
			// 
			// F2T
			// 
			this->F2T->AutoSize = true;
			this->F2T->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->F2T->ForeColor = System::Drawing::SystemColors::Control;
			this->F2T->Location = System::Drawing::Point(1, 5);
			this->F2T->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->F2T->Name = L"F2T";
			this->F2T->Size = System::Drawing::Size(34, 24);
			this->F2T->TabIndex = 0;
			this->F2T->Text = L"F2";
			// 
			// F1P
			// 
			this->F1P->BackColor = System::Drawing::Color::HotPink;
			this->F1P->Controls->Add(this->F1T);
			this->F1P->Location = System::Drawing::Point(174, 435);
			this->F1P->Margin = System::Windows::Forms::Padding(2);
			this->F1P->Name = L"F1P";
			this->F1P->Size = System::Drawing::Size(34, 35);
			this->F1P->TabIndex = 10;
			// 
			// F1T
			// 
			this->F1T->AutoSize = true;
			this->F1T->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->F1T->ForeColor = System::Drawing::SystemColors::Control;
			this->F1T->Location = System::Drawing::Point(0, 6);
			this->F1T->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->F1T->Name = L"F1T";
			this->F1T->Size = System::Drawing::Size(34, 24);
			this->F1T->TabIndex = 0;
			this->F1T->Text = L"F1";
			// 
			// back
			// 
			this->back->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->back->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"back.Image")));
			this->back->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->back->Location = System::Drawing::Point(521, 28);
			this->back->Margin = System::Windows::Forms::Padding(2);
			this->back->Name = L"back";
			this->back->Size = System::Drawing::Size(77, 28);
			this->back->TabIndex = 17;
			this->back->Text = L"Back";
			this->back->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->back->UseVisualStyleBackColor = true;
			this->back->Click += gcnew System::EventHandler(this, &Table::back_Click);
			// 
			// Chair1
			// 
			this->Chair1->AutoSize = true;
			this->Chair1->Location = System::Drawing::Point(442, 174);
			this->Chair1->Margin = System::Windows::Forms::Padding(2);
			this->Chair1->Name = L"Chair1";
			this->Chair1->Size = System::Drawing::Size(32, 17);
			this->Chair1->TabIndex = 18;
			this->Chair1->Text = L"1";
			this->Chair1->UseVisualStyleBackColor = true;
			// 
			// Chair2
			// 
			this->Chair2->AutoSize = true;
			this->Chair2->Location = System::Drawing::Point(442, 212);
			this->Chair2->Margin = System::Windows::Forms::Padding(2);
			this->Chair2->Name = L"Chair2";
			this->Chair2->Size = System::Drawing::Size(32, 17);
			this->Chair2->TabIndex = 19;
			this->Chair2->Text = L"2";
			this->Chair2->UseVisualStyleBackColor = true;
			// 
			// Chair4
			// 
			this->Chair4->AutoSize = true;
			this->Chair4->Location = System::Drawing::Point(442, 292);
			this->Chair4->Margin = System::Windows::Forms::Padding(2);
			this->Chair4->Name = L"Chair4";
			this->Chair4->Size = System::Drawing::Size(32, 17);
			this->Chair4->TabIndex = 21;
			this->Chair4->Text = L"4";
			this->Chair4->UseVisualStyleBackColor = true;
			// 
			// Chair3
			// 
			this->Chair3->AutoSize = true;
			this->Chair3->Location = System::Drawing::Point(442, 254);
			this->Chair3->Margin = System::Windows::Forms::Padding(2);
			this->Chair3->Name = L"Chair3";
			this->Chair3->Size = System::Drawing::Size(32, 17);
			this->Chair3->TabIndex = 20;
			this->Chair3->Text = L"3";
			this->Chair3->UseVisualStyleBackColor = true;
			// 
			// Chair6
			// 
			this->Chair6->AutoSize = true;
			this->Chair6->Location = System::Drawing::Point(442, 372);
			this->Chair6->Margin = System::Windows::Forms::Padding(2);
			this->Chair6->Name = L"Chair6";
			this->Chair6->Size = System::Drawing::Size(32, 17);
			this->Chair6->TabIndex = 23;
			this->Chair6->Text = L"6";
			this->Chair6->UseVisualStyleBackColor = true;
			// 
			// Chair5
			// 
			this->Chair5->AutoSize = true;
			this->Chair5->Location = System::Drawing::Point(442, 334);
			this->Chair5->Margin = System::Windows::Forms::Padding(2);
			this->Chair5->Name = L"Chair5";
			this->Chair5->Size = System::Drawing::Size(32, 17);
			this->Chair5->TabIndex = 22;
			this->Chair5->Text = L"5";
			this->Chair5->UseVisualStyleBackColor = true;
			// 
			// AllChair
			// 
			this->AllChair->AutoSize = true;
			this->AllChair->Location = System::Drawing::Point(442, 414);
			this->AllChair->Margin = System::Windows::Forms::Padding(2);
			this->AllChair->Name = L"AllChair";
			this->AllChair->Size = System::Drawing::Size(37, 17);
			this->AllChair->TabIndex = 24;
			this->AllChair->Text = L"All";
			this->AllChair->UseVisualStyleBackColor = true;
			// 
			// Table_list
			// 
			this->Table_list->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Table_list->FormattingEnabled = true;
			this->Table_list->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"A", L"B", L"C", L"D", L"E", L"F" });
			this->Table_list->Location = System::Drawing::Point(376, 174);
			this->Table_list->Margin = System::Windows::Forms::Padding(2);
			this->Table_list->Name = L"Table_list";
			this->Table_list->Size = System::Drawing::Size(40, 21);
			this->Table_list->TabIndex = 25;
			this->Table_list->SelectedIndexChanged += gcnew System::EventHandler(this, &Table::comboBox1_SelectedIndexChanged);
			// 
			// ID1
			// 
			this->ID1->Location = System::Drawing::Point(488, 176);
			this->ID1->Margin = System::Windows::Forms::Padding(2);
			this->ID1->MaxLength = 9;
			this->ID1->Name = L"ID1";
			this->ID1->Size = System::Drawing::Size(82, 20);
			this->ID1->TabIndex = 26;
			// 
			// ID2
			// 
			this->ID2->Location = System::Drawing::Point(488, 213);
			this->ID2->Margin = System::Windows::Forms::Padding(2);
			this->ID2->MaxLength = 9;
			this->ID2->Name = L"ID2";
			this->ID2->Size = System::Drawing::Size(82, 20);
			this->ID2->TabIndex = 27;
			// 
			// ID4
			// 
			this->ID4->Location = System::Drawing::Point(488, 296);
			this->ID4->Margin = System::Windows::Forms::Padding(2);
			this->ID4->MaxLength = 9;
			this->ID4->Name = L"ID4";
			this->ID4->Size = System::Drawing::Size(82, 20);
			this->ID4->TabIndex = 29;
			// 
			// ID3
			// 
			this->ID3->Location = System::Drawing::Point(488, 258);
			this->ID3->Margin = System::Windows::Forms::Padding(2);
			this->ID3->MaxLength = 9;
			this->ID3->Name = L"ID3";
			this->ID3->Size = System::Drawing::Size(82, 20);
			this->ID3->TabIndex = 28;
			// 
			// ID6
			// 
			this->ID6->Location = System::Drawing::Point(488, 371);
			this->ID6->Margin = System::Windows::Forms::Padding(2);
			this->ID6->MaxLength = 9;
			this->ID6->Name = L"ID6";
			this->ID6->Size = System::Drawing::Size(82, 20);
			this->ID6->TabIndex = 31;
			// 
			// ID5
			// 
			this->ID5->Location = System::Drawing::Point(488, 334);
			this->ID5->Margin = System::Windows::Forms::Padding(2);
			this->ID5->MaxLength = 9;
			this->ID5->Name = L"ID5";
			this->ID5->Size = System::Drawing::Size(82, 20);
			this->ID5->TabIndex = 30;
			// 
			// Confirm_Book
			// 
			this->Confirm_Book->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->Confirm_Book->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Confirm_Book.Image")));
			this->Confirm_Book->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Confirm_Book->Location = System::Drawing::Point(442, 477);
			this->Confirm_Book->Margin = System::Windows::Forms::Padding(2);
			this->Confirm_Book->Name = L"Confirm_Book";
			this->Confirm_Book->Size = System::Drawing::Size(127, 38);
			this->Confirm_Book->TabIndex = 32;
			this->Confirm_Book->Text = L"Confirm";
			this->Confirm_Book->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->Confirm_Book->UseVisualStyleBackColor = true;
			this->Confirm_Book->Click += gcnew System::EventHandler(this, &Table::Confirm_Book_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label1->Location = System::Drawing::Point(470, 148);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(128, 16);
			this->label1->TabIndex = 33;
			this->label1->Text = L"(Input student ID.)";
			// 
			// Table
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(617, 625);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Confirm_Book);
			this->Controls->Add(this->ID6);
			this->Controls->Add(this->ID5);
			this->Controls->Add(this->ID4);
			this->Controls->Add(this->ID3);
			this->Controls->Add(this->ID2);
			this->Controls->Add(this->ID1);
			this->Controls->Add(this->Table_list);
			this->Controls->Add(this->AllChair);
			this->Controls->Add(this->Chair6);
			this->Controls->Add(this->Chair5);
			this->Controls->Add(this->Chair4);
			this->Controls->Add(this->Chair3);
			this->Controls->Add(this->Chair2);
			this->Controls->Add(this->Chair1);
			this->Controls->Add(this->back);
			this->Controls->Add(this->FP);
			this->Controls->Add(this->EP);
			this->Controls->Add(this->F6P);
			this->Controls->Add(this->DP);
			this->Controls->Add(this->F5P);
			this->Controls->Add(this->E6P);
			this->Controls->Add(this->F4P);
			this->Controls->Add(this->CP);
			this->Controls->Add(this->F3P);
			this->Controls->Add(this->E5P);
			this->Controls->Add(this->F2P);
			this->Controls->Add(this->F1P);
			this->Controls->Add(this->D6P);
			this->Controls->Add(this->E4P);
			this->Controls->Add(this->BP);
			this->Controls->Add(this->E3P);
			this->Controls->Add(this->D5P);
			this->Controls->Add(this->E2P);
			this->Controls->Add(this->E1P);
			this->Controls->Add(this->C6P);
			this->Controls->Add(this->D4P);
			this->Controls->Add(this->AP);
			this->Controls->Add(this->D3P);
			this->Controls->Add(this->C5P);
			this->Controls->Add(this->D2P);
			this->Controls->Add(this->D1P);
			this->Controls->Add(this->B6P);
			this->Controls->Add(this->C4P);
			this->Controls->Add(this->A6P);
			this->Controls->Add(this->C3P);
			this->Controls->Add(this->B5P);
			this->Controls->Add(this->C2P);
			this->Controls->Add(this->C1P);
			this->Controls->Add(this->A5P);
			this->Controls->Add(this->B4P);
			this->Controls->Add(this->A4P);
			this->Controls->Add(this->B3P);
			this->Controls->Add(this->A3P);
			this->Controls->Add(this->B2P);
			this->Controls->Add(this->B1P);
			this->Controls->Add(this->A2P);
			this->Controls->Add(this->A1P);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximumSize = System::Drawing::Size(617, 625);
			this->MinimumSize = System::Drawing::Size(617, 625);
			this->Name = L"Table";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Table";
			this->Load += gcnew System::EventHandler(this, &Table::Table_Load);
			this->A1P->ResumeLayout(false);
			this->A1P->PerformLayout();
			this->A2P->ResumeLayout(false);
			this->A2P->PerformLayout();
			this->A3P->ResumeLayout(false);
			this->A3P->PerformLayout();
			this->A4P->ResumeLayout(false);
			this->A4P->PerformLayout();
			this->A5P->ResumeLayout(false);
			this->A5P->PerformLayout();
			this->A6P->ResumeLayout(false);
			this->A6P->PerformLayout();
			this->AP->ResumeLayout(false);
			this->AP->PerformLayout();
			this->BP->ResumeLayout(false);
			this->BP->PerformLayout();
			this->B6P->ResumeLayout(false);
			this->B6P->PerformLayout();
			this->B5P->ResumeLayout(false);
			this->B5P->PerformLayout();
			this->B4P->ResumeLayout(false);
			this->B4P->PerformLayout();
			this->B3P->ResumeLayout(false);
			this->B3P->PerformLayout();
			this->B2P->ResumeLayout(false);
			this->B2P->PerformLayout();
			this->B1P->ResumeLayout(false);
			this->B1P->PerformLayout();
			this->CP->ResumeLayout(false);
			this->CP->PerformLayout();
			this->C6P->ResumeLayout(false);
			this->C6P->PerformLayout();
			this->C5P->ResumeLayout(false);
			this->C5P->PerformLayout();
			this->C4P->ResumeLayout(false);
			this->C4P->PerformLayout();
			this->C3P->ResumeLayout(false);
			this->C3P->PerformLayout();
			this->C2P->ResumeLayout(false);
			this->C2P->PerformLayout();
			this->C1P->ResumeLayout(false);
			this->C1P->PerformLayout();
			this->DP->ResumeLayout(false);
			this->DP->PerformLayout();
			this->D6P->ResumeLayout(false);
			this->D6P->PerformLayout();
			this->D5P->ResumeLayout(false);
			this->D5P->PerformLayout();
			this->D4P->ResumeLayout(false);
			this->D4P->PerformLayout();
			this->D3P->ResumeLayout(false);
			this->D3P->PerformLayout();
			this->D2P->ResumeLayout(false);
			this->D2P->PerformLayout();
			this->D1P->ResumeLayout(false);
			this->D1P->PerformLayout();
			this->EP->ResumeLayout(false);
			this->EP->PerformLayout();
			this->E6P->ResumeLayout(false);
			this->E6P->PerformLayout();
			this->E5P->ResumeLayout(false);
			this->E5P->PerformLayout();
			this->E4P->ResumeLayout(false);
			this->E4P->PerformLayout();
			this->E3P->ResumeLayout(false);
			this->E3P->PerformLayout();
			this->E2P->ResumeLayout(false);
			this->E2P->PerformLayout();
			this->E1P->ResumeLayout(false);
			this->E1P->PerformLayout();
			this->FP->ResumeLayout(false);
			this->FP->PerformLayout();
			this->F6P->ResumeLayout(false);
			this->F6P->PerformLayout();
			this->F5P->ResumeLayout(false);
			this->F5P->PerformLayout();
			this->F4P->ResumeLayout(false);
			this->F4P->PerformLayout();
			this->F3P->ResumeLayout(false);
			this->F3P->PerformLayout();
			this->F2P->ResumeLayout(false);
			this->F2P->PerformLayout();
			this->F1P->ResumeLayout(false);
			this->F1P->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Table_Load(System::Object^  sender, System::EventArgs^  e) {
		SeatApi s;
		auto arr_Chair = gcnew cli::array<System::Windows::Forms::Panel^>(36);
		arr_Chair[0] = A1P;
		arr_Chair[1] = A2P;
		arr_Chair[2] = A3P;
		arr_Chair[3] = A4P;
		arr_Chair[4] = A5P;
		arr_Chair[5] = A6P;
		arr_Chair[6] = B1P;
		arr_Chair[7] = B2P;
		arr_Chair[8] = B3P;
		arr_Chair[9] = B4P;
		arr_Chair[10] = B5P;
		arr_Chair[11] = B6P;
		arr_Chair[12] = C1P;
		arr_Chair[13] = C2P;
		arr_Chair[14] = C3P;
		arr_Chair[15] = C4P;
		arr_Chair[16] = C5P;
		arr_Chair[17] = C6P;
		arr_Chair[18] = D1P;
		arr_Chair[19] = D2P;
		arr_Chair[20] = D3P;
		arr_Chair[21] = D4P;
		arr_Chair[22] = D5P;
		arr_Chair[23] = D6P;
		arr_Chair[24] = E1P;
		arr_Chair[25] = E2P;
		arr_Chair[26] = E3P;
		arr_Chair[27] = E4P;
		arr_Chair[28] = E5P;
		arr_Chair[29] = E6P;
		arr_Chair[30] = F1P;
		arr_Chair[31] = F2P;
		arr_Chair[32] = F3P;
		arr_Chair[33] = F4P;
		arr_Chair[34] = F5P;
		arr_Chair[35] = F6P;
		for (int i = 0; i < 6; i++) {
			for(int j = 0; j < 6; j++){
				if (!s.check_seat(i, j)) {
					arr_Chair[(i*6)+j]->BackColor = System::Drawing::Color::Red;
				}
			}
		}
	}
private: System::Void back_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
}
private: System::Void Confirm_Book_Click(System::Object^  sender, System::EventArgs^  e) {
	SeatApi seat;
	DatabaseApi s;
	auto Chair = gcnew cli::array<System::Windows::Forms::CheckBox^>(7);
	Chair[0] =  Chair1;
	Chair[1] = Chair2;
	Chair[2] = Chair3;
	Chair[3] = Chair4;
	Chair[4] = Chair5;
	Chair[5] = Chair6;
	Chair[6] = AllChair;
	vector <int> chair_index;
	for (int i = 0; i < 6; i++) {
		if (Chair[6]->Checked) {
			for (int j = 0; j < 6; j++) {
				Chair[j]->Checked = true;
			}
		}
		else if (Chair[i]->Checked) {
			chair_index.push_back(i);
			}
		}
	auto id_student = gcnew cli::array<System::Windows::Forms::TextBox^>(6);
	id_student[0] = ID1;
	id_student[1] = ID2;
	id_student[2] = ID3;
	id_student[3] = ID4;
	id_student[4] = ID5;
	id_student[5] = ID6;
	int id_convert[6];
	int sum_number_id = 0;
	int sum_number_id_canbook = 0;
	vector <int>id_canbook;
	for (int i = 0; i < 6; i++) {
		if (id_student[i]->Text != "") {
			id_convert[i] = Convert::ToInt32(id_student[i]->Text);
			sum_number_id++;
			if (s.book_yet(id_convert[i])==2) {
				sum_number_id_canbook++;
				id_canbook.push_back(s.id_confirm);
			}
			else if(s.book_yet(id_convert[i]) == 1) {
				continue;
			}
		}
	}
	int full_chair = 0;
	for(int j=0;j< chair_index.size();j++){
		if (!seat.check_seat(Table_list->SelectedIndex, chair_index[j])) {
			full_chair++;
		}
	}
	if (sum_number_id == 0  || chair_index.size()==0 || Table_list->SelectedIndex==-1 ||full_chair>0) {
		MessageBox::Show("Please your information");
	}
	else if(sum_number_id == sum_number_id_canbook){
		
		for (int i = 0; i < id_canbook.size(); i++) {
			s.set_book(id_canbook[i]);
		}
		seat.confirm_book(Table_list->SelectedIndex, chair_index);
		MessageBox::Show("completed");
		this->Hide();
	}
	else {
		MessageBox::Show("Booked");
	}
	
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
