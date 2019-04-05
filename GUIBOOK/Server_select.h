#pragma once
#include "seat_include.h"
#include <string>
#include<iostream>
#include <vector>

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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label4->Location = System::Drawing::Point(573, 726);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(277, 31);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Arn-Sue-Gun V.beta";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(16, 709);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(92, 41);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 17;
			this->pictureBox1->TabStop = false;
			// 
			// hor1
			// 
			this->hor1->AutoSize = true;
			this->hor1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->hor1->Location = System::Drawing::Point(189, 272);
			this->hor1->Name = L"hor1";
			this->hor1->Size = System::Drawing::Size(99, 32);
			this->hor1->TabIndex = 18;
			this->hor1->Text = L"label1";
			this->hor1->Visible = false;
			// 
			// hor2
			// 
			this->hor2->AutoSize = true;
			this->hor2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->hor2->Location = System::Drawing::Point(189, 340);
			this->hor2->Name = L"hor2";
			this->hor2->Size = System::Drawing::Size(99, 32);
			this->hor2->TabIndex = 19;
			this->hor2->Text = L"label2";
			this->hor2->Visible = false;
			// 
			// hor4
			// 
			this->hor4->AutoSize = true;
			this->hor4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->hor4->Location = System::Drawing::Point(189, 472);
			this->hor4->Name = L"hor4";
			this->hor4->Size = System::Drawing::Size(99, 32);
			this->hor4->TabIndex = 21;
			this->hor4->Text = L"label3";
			this->hor4->Visible = false;
			// 
			// hor3
			// 
			this->hor3->AutoSize = true;
			this->hor3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->hor3->Location = System::Drawing::Point(189, 404);
			this->hor3->Name = L"hor3";
			this->hor3->Size = System::Drawing::Size(99, 32);
			this->hor3->TabIndex = 20;
			this->hor3->Text = L"label5";
			this->hor3->Visible = false;
			// 
			// N4
			// 
			this->N4->AutoSize = true;
			this->N4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->N4->Location = System::Drawing::Point(542, 472);
			this->N4->Name = L"N4";
			this->N4->Size = System::Drawing::Size(99, 32);
			this->N4->TabIndex = 25;
			this->N4->Text = L"label6";
			this->N4->Visible = false;
			// 
			// N3
			// 
			this->N3->AutoSize = true;
			this->N3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->N3->Location = System::Drawing::Point(542, 404);
			this->N3->Name = L"N3";
			this->N3->Size = System::Drawing::Size(99, 32);
			this->N3->TabIndex = 24;
			this->N3->Text = L"label7";
			this->N3->Visible = false;
			// 
			// N2
			// 
			this->N2->AutoSize = true;
			this->N2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->N2->Location = System::Drawing::Point(542, 340);
			this->N2->Name = L"N2";
			this->N2->Size = System::Drawing::Size(99, 32);
			this->N2->TabIndex = 23;
			this->N2->Text = L"label8";
			this->N2->Visible = false;
			// 
			// N1
			// 
			this->N1->AutoSize = true;
			this->N1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->N1->Location = System::Drawing::Point(542, 272);
			this->N1->Name = L"N1";
			this->N1->Size = System::Drawing::Size(99, 32);
			this->N1->TabIndex = 22;
			this->N1->Text = L"label9";
			this->N1->Visible = false;
			// 
			// Start_T
			// 
			this->Start_T->Location = System::Drawing::Point(295, 122);
			this->Start_T->MaxLength = 2;
			this->Start_T->Name = L"Start_T";
			this->Start_T->Size = System::Drawing::Size(109, 22);
			this->Start_T->TabIndex = 26;
			// 
			// End_T
			// 
			this->End_T->Location = System::Drawing::Point(485, 122);
			this->End_T->MaxLength = 2;
			this->End_T->Name = L"End_T";
			this->End_T->Size = System::Drawing::Size(109, 22);
			this->End_T->TabIndex = 27;
			// 
			// Choosetime
			// 
			this->Choosetime->AutoSize = true;
			this->Choosetime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->Choosetime->Location = System::Drawing::Point(340, 69);
			this->Choosetime->Name = L"Choosetime";
			this->Choosetime->Size = System::Drawing::Size(177, 32);
			this->Choosetime->TabIndex = 28;
			this->Choosetime->Text = L"Choosetime";
			// 
			// Start
			// 
			this->Start->AutoSize = true;
			this->Start->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->Start->Location = System::Drawing::Point(208, 120);
			this->Start->Name = L"Start";
			this->Start->Size = System::Drawing::Size(63, 24);
			this->Start->TabIndex = 29;
			this->Start->Text = L"Start :";
			// 
			// End
			// 
			this->End->AutoSize = true;
			this->End->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->End->Location = System::Drawing::Point(425, 122);
			this->End->Name = L"End";
			this->End->Size = System::Drawing::Size(35, 24);
			this->End->TabIndex = 30;
			this->End->Text = L"To";
			// 
			// Confirmtime
			// 
			this->Confirmtime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->Confirmtime->Location = System::Drawing::Point(357, 170);
			this->Confirmtime->Name = L"Confirmtime";
			this->Confirmtime->Size = System::Drawing::Size(125, 37);
			this->Confirmtime->TabIndex = 31;
			this->Confirmtime->Text = L"Comfirm";
			this->Confirmtime->UseVisualStyleBackColor = true;
			this->Confirmtime->Click += gcnew System::EventHandler(this, &Server_select::Confirmtime_Click);
			// 
			// N6
			// 
			this->N6->AutoSize = true;
			this->N6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->N6->Location = System::Drawing::Point(542, 614);
			this->N6->Name = L"N6";
			this->N6->Size = System::Drawing::Size(99, 32);
			this->N6->TabIndex = 35;
			this->N6->Text = L"label6";
			this->N6->Visible = false;
			// 
			// N5
			// 
			this->N5->AutoSize = true;
			this->N5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->N5->Location = System::Drawing::Point(542, 546);
			this->N5->Name = L"N5";
			this->N5->Size = System::Drawing::Size(99, 32);
			this->N5->TabIndex = 34;
			this->N5->Text = L"label7";
			this->N5->Visible = false;
			// 
			// hor6
			// 
			this->hor6->AutoSize = true;
			this->hor6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->hor6->Location = System::Drawing::Point(189, 614);
			this->hor6->Name = L"hor6";
			this->hor6->Size = System::Drawing::Size(99, 32);
			this->hor6->TabIndex = 33;
			this->hor6->Text = L"label3";
			this->hor6->Visible = false;
			// 
			// hor5
			// 
			this->hor5->AutoSize = true;
			this->hor5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->hor5->Location = System::Drawing::Point(189, 546);
			this->hor5->Name = L"hor5";
			this->hor5->Size = System::Drawing::Size(99, 32);
			this->hor5->TabIndex = 32;
			this->hor5->Text = L"label5";
			this->hor5->Visible = false;
			// 
			// Server_select
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(820, 754);
			this->Controls->Add(this->N6);
			this->Controls->Add(this->N5);
			this->Controls->Add(this->hor6);
			this->Controls->Add(this->hor5);
			this->Controls->Add(this->Confirmtime);
			this->Controls->Add(this->End);
			this->Controls->Add(this->Start);
			this->Controls->Add(this->Choosetime);
			this->Controls->Add(this->End_T);
			this->Controls->Add(this->Start_T);
			this->Controls->Add(this->N4);
			this->Controls->Add(this->N3);
			this->Controls->Add(this->N2);
			this->Controls->Add(this->N1);
			this->Controls->Add(this->hor4);
			this->Controls->Add(this->hor3);
			this->Controls->Add(this->hor2);
			this->Controls->Add(this->hor1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label4);
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(838, 801);
			this->MinimumSize = System::Drawing::Size(838, 801);
			this->Name = L"Server_select";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Server_select";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	
	}
	
private: System::Void Confirmtime_Click(System::Object^  sender, System::EventArgs^  e) {
		String ^ start = Start_T->Text;
		String ^ end = End_T->Text;
		int start_convert = Convert::ToInt32(start);
		int end_convert = Convert::ToInt32(end);
		SeatApi s(start_convert,end_convert);
		string *temp=s.get_hor();
		hor1->Text = gcnew String(temp[0].c_str());
		hor2->Text = gcnew String(temp[1].c_str());
		hor3->Text = gcnew String(temp[2].c_str());
		hor4->Text = gcnew String(temp[3].c_str());
		hor5->Text = gcnew String(temp[4].c_str());
		hor6->Text = gcnew String(temp[5].c_str());
		N1->Text = Convert::ToString(s.empty_seat[0]);
		N2->Text = Convert::ToString(s.empty_seat[1]);
		N3->Text = Convert::ToString(s.empty_seat[2]);
		N4->Text = Convert::ToString(s.empty_seat[3]);
		N5->Text = Convert::ToString(s.empty_seat[4]);
		N6->Text = Convert::ToString(s.empty_seat[5]);
		hor1->Visible = true;
		hor2->Visible = true;
		hor3->Visible = true;
		hor4->Visible = true;
		hor5->Visible = true;
		hor6->Visible = true;
		N1->Visible = true;
		N2->Visible = true;
		N3->Visible = true;
		N4->Visible = true;
		N5->Visible = true;
		N6->Visible = true;
}
};
}