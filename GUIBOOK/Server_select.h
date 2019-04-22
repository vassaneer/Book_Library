#pragma once
#include "seat_include.h"
#include <string>
#include<iostream>
#include <vector>
#include "Table.h"


namespace GUIBOOK {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Server_select
	/// </summary>
	public ref class Server_select : public System::Windows::Forms::Form
	{

	public:
		Server_select(void)
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
		~Server_select()
		{
			if (components)
			{
				delete components;
			}
		}



	private: cli::array<System::Windows::Forms::Label^>  ^LabelArr;
	private: cli::array<System::Windows::Forms::Panel^>  ^PanelArr;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  hor1;
	private: System::Windows::Forms::Label^  hor2;
	private: System::Windows::Forms::Label^  hor4;
	private: System::Windows::Forms::Label^  hor3;
	private: System::Windows::Forms::Label^  N4;
	private: System::Windows::Forms::Label^  N3;
	private: System::Windows::Forms::Label^  N2;
	private: System::Windows::Forms::Label^  N1;
	private: System::Windows::Forms::TextBox^  Start_T;
	private: System::Windows::Forms::TextBox^  End_T;
	private: System::Windows::Forms::Label^  Choosetime;
	private: System::Windows::Forms::Label^  Start;
	private: System::Windows::Forms::Label^  End;
	private: System::Windows::Forms::Button^  Confirmtime;
	private: System::Windows::Forms::Label^  N6;
	private: System::Windows::Forms::Label^  N5;
	private: System::Windows::Forms::Label^  hor6;
	private: System::Windows::Forms::Label^  hor5;
	private: System::Windows::Forms::Panel^  Hor1P;
	private: System::Windows::Forms::Panel^  Hor2P;
	private: System::Windows::Forms::Panel^  Hor3P;
	private: System::Windows::Forms::Panel^  Hor4P;
	private: System::Windows::Forms::Panel^  Hor5P;
	private: System::Windows::Forms::Panel^  Hor6P;
	private: System::Windows::Forms::Button^  Refresh;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;

	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Server_select::typeid));
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->hor1 = (gcnew System::Windows::Forms::Label());
			this->hor2 = (gcnew System::Windows::Forms::Label());
			this->hor4 = (gcnew System::Windows::Forms::Label());
			this->hor3 = (gcnew System::Windows::Forms::Label());
			this->N4 = (gcnew System::Windows::Forms::Label());
			this->N3 = (gcnew System::Windows::Forms::Label());
			this->N2 = (gcnew System::Windows::Forms::Label());
			this->N1 = (gcnew System::Windows::Forms::Label());
			this->Start_T = (gcnew System::Windows::Forms::TextBox());
			this->End_T = (gcnew System::Windows::Forms::TextBox());
			this->Choosetime = (gcnew System::Windows::Forms::Label());
			this->Start = (gcnew System::Windows::Forms::Label());
			this->End = (gcnew System::Windows::Forms::Label());
			this->Confirmtime = (gcnew System::Windows::Forms::Button());
			this->N6 = (gcnew System::Windows::Forms::Label());
			this->N5 = (gcnew System::Windows::Forms::Label());
			this->hor6 = (gcnew System::Windows::Forms::Label());
			this->hor5 = (gcnew System::Windows::Forms::Label());
			this->Hor1P = (gcnew System::Windows::Forms::Panel());
			this->Hor2P = (gcnew System::Windows::Forms::Panel());
			this->Hor3P = (gcnew System::Windows::Forms::Panel());
			this->Hor4P = (gcnew System::Windows::Forms::Panel());
			this->Hor5P = (gcnew System::Windows::Forms::Panel());
			this->Hor6P = (gcnew System::Windows::Forms::Panel());
			this->Refresh = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->Hor1P->SuspendLayout();
			this->Hor2P->SuspendLayout();
			this->Hor3P->SuspendLayout();
			this->Hor4P->SuspendLayout();
			this->Hor5P->SuspendLayout();
			this->Hor6P->SuspendLayout();
			this->SuspendLayout();
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Anchan", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label4->Location = System::Drawing::Point(417, 584);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(188, 32);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Arn-Sue-Gun V.beta";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 576);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(69, 33);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 17;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Server_select::pictureBox1_Click);
			// 
			// hor1
			// 
			this->hor1->AutoSize = true;
			this->hor1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->hor1->ForeColor = System::Drawing::Color::White;
			this->hor1->Location = System::Drawing::Point(16, 6);
			this->hor1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->hor1->Name = L"hor1";
			this->hor1->Size = System::Drawing::Size(76, 26);
			this->hor1->TabIndex = 18;
			this->hor1->Text = L"label1";
			this->hor1->Visible = false;
			// 
			// hor2
			// 
			this->hor2->AutoSize = true;
			this->hor2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->hor2->ForeColor = System::Drawing::Color::White;
			this->hor2->Location = System::Drawing::Point(16, 5);
			this->hor2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->hor2->Name = L"hor2";
			this->hor2->Size = System::Drawing::Size(76, 26);
			this->hor2->TabIndex = 19;
			this->hor2->Text = L"label2";
			this->hor2->Visible = false;
			// 
			// hor4
			// 
			this->hor4->AutoSize = true;
			this->hor4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->hor4->Location = System::Drawing::Point(12, 8);
			this->hor4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->hor4->Name = L"hor4";
			this->hor4->Size = System::Drawing::Size(76, 26);
			this->hor4->TabIndex = 21;
			this->hor4->Text = L"label3";
			this->hor4->Visible = false;
			// 
			// hor3
			// 
			this->hor3->AutoSize = true;
			this->hor3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->hor3->Location = System::Drawing::Point(15, 4);
			this->hor3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->hor3->Name = L"hor3";
			this->hor3->Size = System::Drawing::Size(76, 26);
			this->hor3->TabIndex = 20;
			this->hor3->Text = L"label5";
			this->hor3->Visible = false;
			// 
			// N4
			// 
			this->N4->AutoSize = true;
			this->N4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->N4->Location = System::Drawing::Point(277, 8);
			this->N4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->N4->Name = L"N4";
			this->N4->Size = System::Drawing::Size(76, 26);
			this->N4->TabIndex = 25;
			this->N4->Text = L"label6";
			this->N4->Visible = false;
			// 
			// N3
			// 
			this->N3->AutoSize = true;
			this->N3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->N3->Location = System::Drawing::Point(280, 4);
			this->N3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->N3->Name = L"N3";
			this->N3->Size = System::Drawing::Size(76, 26);
			this->N3->TabIndex = 24;
			this->N3->Text = L"label7";
			this->N3->Visible = false;
			// 
			// N2
			// 
			this->N2->AutoSize = true;
			this->N2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->N2->Location = System::Drawing::Point(281, 5);
			this->N2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->N2->Name = L"N2";
			this->N2->Size = System::Drawing::Size(76, 26);
			this->N2->TabIndex = 23;
			this->N2->Text = L"label8";
			this->N2->Visible = false;
			// 
			// N1
			// 
			this->N1->AutoSize = true;
			this->N1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->N1->ForeColor = System::Drawing::Color::White;
			this->N1->Location = System::Drawing::Point(281, 6);
			this->N1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->N1->Name = L"N1";
			this->N1->Size = System::Drawing::Size(76, 26);
			this->N1->TabIndex = 22;
			this->N1->Text = L"label9";
			this->N1->Visible = false;
			// 
			// Start_T
			// 
			this->Start_T->Location = System::Drawing::Point(221, 99);
			this->Start_T->Margin = System::Windows::Forms::Padding(2);
			this->Start_T->MaxLength = 2;
			this->Start_T->Name = L"Start_T";
			this->Start_T->Size = System::Drawing::Size(83, 20);
			this->Start_T->TabIndex = 26;
			// 
			// End_T
			// 
			this->End_T->Location = System::Drawing::Point(364, 99);
			this->End_T->Margin = System::Windows::Forms::Padding(2);
			this->End_T->MaxLength = 2;
			this->End_T->Name = L"End_T";
			this->End_T->Size = System::Drawing::Size(83, 20);
			this->End_T->TabIndex = 27;
			// 
			// Choosetime
			// 
			this->Choosetime->AutoSize = true;
			this->Choosetime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->Choosetime->Location = System::Drawing::Point(255, 56);
			this->Choosetime->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Choosetime->Name = L"Choosetime";
			this->Choosetime->Size = System::Drawing::Size(139, 26);
			this->Choosetime->TabIndex = 28;
			this->Choosetime->Text = L"Choosetime";
			// 
			// Start
			// 
			this->Start->AutoSize = true;
			this->Start->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->Start->Location = System::Drawing::Point(156, 98);
			this->Start->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Start->Name = L"Start";
			this->Start->Size = System::Drawing::Size(54, 18);
			this->Start->TabIndex = 29;
			this->Start->Text = L"Start :";
			// 
			// End
			// 
			this->End->AutoSize = true;
			this->End->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->End->Location = System::Drawing::Point(319, 99);
			this->End->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->End->Name = L"End";
			this->End->Size = System::Drawing::Size(28, 18);
			this->End->TabIndex = 30;
			this->End->Text = L"To";
			// 
			// Confirmtime
			// 
			this->Confirmtime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->Confirmtime->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Confirmtime.Image")));
			this->Confirmtime->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Confirmtime->Location = System::Drawing::Point(221, 144);
			this->Confirmtime->Margin = System::Windows::Forms::Padding(2);
			this->Confirmtime->Name = L"Confirmtime";
			this->Confirmtime->Size = System::Drawing::Size(103, 30);
			this->Confirmtime->TabIndex = 31;
			this->Confirmtime->Text = L"Comfirm";
			this->Confirmtime->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->Confirmtime->UseVisualStyleBackColor = true;
			this->Confirmtime->Click += gcnew System::EventHandler(this, &Server_select::Confirmtime_Click);
			// 
			// N6
			// 
			this->N6->AutoSize = true;
			this->N6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->N6->Location = System::Drawing::Point(274, 11);
			this->N6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->N6->Name = L"N6";
			this->N6->Size = System::Drawing::Size(76, 26);
			this->N6->TabIndex = 35;
			this->N6->Text = L"label6";
			this->N6->Visible = false;
			// 
			// N5
			// 
			this->N5->AutoSize = true;
			this->N5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->N5->Location = System::Drawing::Point(274, 9);
			this->N5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->N5->Name = L"N5";
			this->N5->Size = System::Drawing::Size(76, 26);
			this->N5->TabIndex = 34;
			this->N5->Text = L"label7";
			this->N5->Visible = false;
			// 
			// hor6
			// 
			this->hor6->AutoSize = true;
			this->hor6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->hor6->Location = System::Drawing::Point(9, 11);
			this->hor6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->hor6->Name = L"hor6";
			this->hor6->Size = System::Drawing::Size(76, 26);
			this->hor6->TabIndex = 33;
			this->hor6->Text = L"label3";
			this->hor6->Visible = false;
			// 
			// hor5
			// 
			this->hor5->AutoSize = true;
			this->hor5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->hor5->Location = System::Drawing::Point(9, 9);
			this->hor5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->hor5->Name = L"hor5";
			this->hor5->Size = System::Drawing::Size(76, 26);
			this->hor5->TabIndex = 32;
			this->hor5->Text = L"label5";
			this->hor5->Visible = false;
			// 
			// Hor1P
			// 
			this->Hor1P->Controls->Add(this->N1);
			this->Hor1P->Controls->Add(this->hor1);
			this->Hor1P->Location = System::Drawing::Point(125, 214);
			this->Hor1P->Margin = System::Windows::Forms::Padding(2);
			this->Hor1P->Name = L"Hor1P";
			this->Hor1P->Size = System::Drawing::Size(365, 40);
			this->Hor1P->TabIndex = 36;
			this->Hor1P->Visible = false;
			this->Hor1P->Click += gcnew System::EventHandler(this, &Server_select::Hor1P_Click);
			// 
			// Hor2P
			// 
			this->Hor2P->Controls->Add(this->N2);
			this->Hor2P->Controls->Add(this->hor2);
			this->Hor2P->ForeColor = System::Drawing::Color::White;
			this->Hor2P->Location = System::Drawing::Point(125, 271);
			this->Hor2P->Margin = System::Windows::Forms::Padding(2);
			this->Hor2P->Name = L"Hor2P";
			this->Hor2P->Size = System::Drawing::Size(364, 38);
			this->Hor2P->TabIndex = 37;
			this->Hor2P->Visible = false;
			this->Hor2P->Click += gcnew System::EventHandler(this, &Server_select::Hor2P_Click);
			// 
			// Hor3P
			// 
			this->Hor3P->Controls->Add(this->N3);
			this->Hor3P->Controls->Add(this->hor3);
			this->Hor3P->ForeColor = System::Drawing::Color::White;
			this->Hor3P->Location = System::Drawing::Point(127, 324);
			this->Hor3P->Margin = System::Windows::Forms::Padding(2);
			this->Hor3P->Name = L"Hor3P";
			this->Hor3P->Size = System::Drawing::Size(362, 37);
			this->Hor3P->TabIndex = 38;
			this->Hor3P->Visible = false;
			this->Hor3P->Click += gcnew System::EventHandler(this, &Server_select::Hor3P_Click);
			// 
			// Hor4P
			// 
			this->Hor4P->Controls->Add(this->N4);
			this->Hor4P->Controls->Add(this->hor4);
			this->Hor4P->ForeColor = System::Drawing::Color::White;
			this->Hor4P->Location = System::Drawing::Point(130, 375);
			this->Hor4P->Margin = System::Windows::Forms::Padding(2);
			this->Hor4P->Name = L"Hor4P";
			this->Hor4P->Size = System::Drawing::Size(358, 42);
			this->Hor4P->TabIndex = 39;
			this->Hor4P->Visible = false;
			this->Hor4P->Click += gcnew System::EventHandler(this, &Server_select::Hor4P_Click);
			// 
			// Hor5P
			// 
			this->Hor5P->Controls->Add(this->N5);
			this->Hor5P->Controls->Add(this->hor5);
			this->Hor5P->ForeColor = System::Drawing::Color::White;
			this->Hor5P->Location = System::Drawing::Point(133, 435);
			this->Hor5P->Margin = System::Windows::Forms::Padding(2);
			this->Hor5P->Name = L"Hor5P";
			this->Hor5P->Size = System::Drawing::Size(355, 42);
			this->Hor5P->TabIndex = 40;
			this->Hor5P->Visible = false;
			this->Hor5P->Click += gcnew System::EventHandler(this, &Server_select::Hor5P_Click);
			// 
			// Hor6P
			// 
			this->Hor6P->Controls->Add(this->N6);
			this->Hor6P->Controls->Add(this->hor6);
			this->Hor6P->ForeColor = System::Drawing::Color::White;
			this->Hor6P->Location = System::Drawing::Point(133, 488);
			this->Hor6P->Margin = System::Windows::Forms::Padding(2);
			this->Hor6P->Name = L"Hor6P";
			this->Hor6P->Size = System::Drawing::Size(354, 46);
			this->Hor6P->TabIndex = 41;
			this->Hor6P->Visible = false;
			this->Hor6P->Click += gcnew System::EventHandler(this, &Server_select::Hor6P_Click);
			// 
			// Refresh
			// 
			this->Refresh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->Refresh->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Refresh.Image")));
			this->Refresh->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Refresh->Location = System::Drawing::Point(344, 144);
			this->Refresh->Margin = System::Windows::Forms::Padding(2);
			this->Refresh->Name = L"Refresh";
			this->Refresh->Size = System::Drawing::Size(103, 30);
			this->Refresh->TabIndex = 42;
			this->Refresh->Text = L"Refresh";
			this->Refresh->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->Refresh->UseVisualStyleBackColor = true;
			this->Refresh->Click += gcnew System::EventHandler(this, &Server_select::Refresh_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label1->Location = System::Drawing::Point(452, 98);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(70, 20);
			this->label1->TabIndex = 43;
			this->label1->Text = L"(24 Hr.)";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->Location = System::Drawing::Point(241, 577);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(124, 32);
			this->button1->TabIndex = 44;
			this->button1->Text = L"Status colour";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Server_select::button1_Click);
			// 
			// Server_select
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(617, 625);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Refresh);
			this->Controls->Add(this->Hor6P);
			this->Controls->Add(this->Hor5P);
			this->Controls->Add(this->Hor4P);
			this->Controls->Add(this->Hor3P);
			this->Controls->Add(this->Hor2P);
			this->Controls->Add(this->Hor1P);
			this->Controls->Add(this->Confirmtime);
			this->Controls->Add(this->End);
			this->Controls->Add(this->Start);
			this->Controls->Add(this->Choosetime);
			this->Controls->Add(this->End_T);
			this->Controls->Add(this->Start_T);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label4);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(617, 625);
			this->MinimumSize = System::Drawing::Size(617, 625);
			this->Name = L"Server_select";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Server_select";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->Hor1P->ResumeLayout(false);
			this->Hor1P->PerformLayout();
			this->Hor2P->ResumeLayout(false);
			this->Hor2P->PerformLayout();
			this->Hor3P->ResumeLayout(false);
			this->Hor3P->PerformLayout();
			this->Hor4P->ResumeLayout(false);
			this->Hor4P->PerformLayout();
			this->Hor5P->ResumeLayout(false);
			this->Hor5P->PerformLayout();
			this->Hor6P->ResumeLayout(false);
			this->Hor6P->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

	}

	private: System::Void Confirmtime_Click(System::Object^  sender, System::EventArgs^  e) {
		auto arr_hor = gcnew cli::array<System::Windows::Forms::Label^>(6);
		auto arr_N = gcnew cli::array<System::Windows::Forms::Label^>(6);
		auto arr_HorP = gcnew cli::array<System::Windows::Forms::Panel^>(6);
		arr_hor[0] = hor1;
		arr_hor[1] = hor2;
		arr_hor[2] = hor3;
		arr_hor[3] = hor4;
		arr_hor[4] = hor5;
		arr_hor[5] = hor6;
		arr_N[0] = N1;
		arr_N[1] = N2;
		arr_N[2] = N3;
		arr_N[3] = N4;
		arr_N[4] = N5;
		arr_N[5] = N6;
		arr_HorP[0] = Hor1P;
		arr_HorP[1] = Hor2P;
		arr_HorP[2] = Hor3P;
		arr_HorP[3] = Hor4P;
		arr_HorP[4] = Hor5P;
		arr_HorP[5] = Hor6P;
		String ^ start = Start_T->Text;
		String ^ end = End_T->Text;
		if (start != "" && end!="") {
			int start_convert = Convert::ToInt32(start);
			int end_convert = Convert::ToInt32(end);
			SeatApi s(start_convert, end_convert);
			string *temp = s.get_hor();
			if (end_convert-start_convert>0 && start_convert>=0 && start_convert<24 && end_convert >= 0 && end_convert < 24 ) {
				for (int i = 0; i < 6; i++) {
					arr_hor[i]->Visible = true;
					arr_N[i]->Visible = true;
					arr_HorP[i]->Visible = true;
					arr_hor[i]->Text = gcnew String(temp[i].c_str());
					arr_N[i]->Text = Convert::ToString(s.empty_seat[i]);
					if (s.empty_seat[i] > 27 && s.empty_seat[i] <= 36) {
						arr_HorP[i]->BackColor = System::Drawing::Color::Lime;
					}
					else if (s.empty_seat[i] >= 18 && s.empty_seat[i] <= 27) {
						arr_HorP[i]->BackColor = System::Drawing::Color::Yellow;
					}
					else if (s.empty_seat[i] >= 9 && s.empty_seat[i] < 18) {
						arr_HorP[i]->BackColor = System::Drawing::Color::OrangeRed;
					}
					else if (s.empty_seat[i] >= 0 && s.empty_seat[i] < 9) {
						arr_HorP[i]->BackColor = System::Drawing::Color::Red;
					}
				}
			}else{
				MessageBox::Show("Please Add time Again"); 
			}
		}
		else {
			MessageBox::Show("Please Add time");
		}

	}

private: System::Void Hor1P_Click(System::Object^  sender, System::EventArgs^  e) {
	SeatApi s(0);
	Table t;
	this->Hide();
	t.ShowDialog();
	this->Show();

}

private: System::Void Hor2P_Click(System::Object^  sender, System::EventArgs^  e) {
	SeatApi s(1);
	Table t;
	this->Hide();
	t.ShowDialog();
	this->Show();
}
private: System::Void Hor3P_Click(System::Object^  sender, System::EventArgs^  e) {
	SeatApi s(2);
	Table t;
	this->Hide();
	t.ShowDialog();
	this->Show();
}
private: System::Void Hor4P_Click(System::Object^  sender, System::EventArgs^  e) {
	SeatApi s(3);
	Table t;
	this->Hide();
	t.ShowDialog();
	this->Show();
}
private: System::Void Hor5P_Click(System::Object^  sender, System::EventArgs^  e) {
	SeatApi s(4);
	Table t;
	this->Hide();
	t.ShowDialog();
	this->Show();
}
private: System::Void Hor6P_Click(System::Object^  sender, System::EventArgs^  e) {
	SeatApi s(5);
	Table t;
	this->Hide();
	t.ShowDialog();
	this->Show();
}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
}
private: System::Void Refresh_Click(System::Object^  sender, System::EventArgs^  e) {
	auto arr_hor = gcnew cli::array<System::Windows::Forms::Label^>(6);
	auto arr_N = gcnew cli::array<System::Windows::Forms::Label^>(6);
	auto arr_HorP = gcnew cli::array<System::Windows::Forms::Panel^>(6);
	arr_hor[0] = hor1;
	arr_hor[1] = hor2;
	arr_hor[2] = hor3;
	arr_hor[3] = hor4;
	arr_hor[4] = hor5;
	arr_hor[5] = hor6;
	arr_N[0] = N1;
	arr_N[1] = N2;
	arr_N[2] = N3;
	arr_N[3] = N4;
	arr_N[4] = N5;
	arr_N[5] = N6;
	arr_HorP[0] = Hor1P;
	arr_HorP[1] = Hor2P;
	arr_HorP[2] = Hor3P;
	arr_HorP[3] = Hor4P;
	arr_HorP[4] = Hor5P;
	arr_HorP[5] = Hor6P;
	String ^ start = Start_T->Text;
	String ^ end = End_T->Text;
	if (start != "" && end != ""){
		int start_convert = Convert::ToInt32(start);
		int end_convert = Convert::ToInt32(end);
		SeatApi s(start_convert, end_convert);
		string *temp = s.get_hor();
		for (int i = 0; i < 6; i++) {
			arr_hor[i]->Visible = true;
			arr_N[i]->Visible = true;
			arr_HorP[i]->Visible = true;
			arr_hor[i]->Text = gcnew String(temp[i].c_str());
			arr_N[i]->Text = Convert::ToString(s.empty_seat[i]);
			if (s.empty_seat[i] > 27 && s.empty_seat[i] <= 36) {
				arr_HorP[i]->BackColor = System::Drawing::Color::Lime;
			}
			else if (s.empty_seat[i] >= 18 && s.empty_seat[i] <= 27) {
				arr_HorP[i]->BackColor = System::Drawing::Color::Yellow;
			}
			else if (s.empty_seat[i] >= 9 && s.empty_seat[i] < 18) {
				arr_HorP[i]->BackColor = System::Drawing::Color::OrangeRed;
			}
			else if (s.empty_seat[i] >= 0 && s.empty_seat[i] < 9) {
				arr_HorP[i]->BackColor = System::Drawing::Color::Red;
			}
		}
	}
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("0-8 seat(s) remain = Red colour\n9-17 seats remain = Orange colour\n18-27 seats remain = Yellow colour\n28-36 seats remain = Lime colour");
}
};
}