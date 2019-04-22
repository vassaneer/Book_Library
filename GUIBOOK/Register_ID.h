#pragma once
#include "Ruleofuse.h"			//for other window
#include "data_include.h"
#include <msclr\marshal_cppstd.h>


namespace GUIBOOK {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Register_ID
	/// </summary>
	public ref class Register_ID : public System::Windows::Forms::Form
	{
	public:
		Register_ID(void)
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
		~Register_ID()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  Student_id;
	private: System::Windows::Forms::TextBox^  User_Pass;
	private: System::Windows::Forms::TextBox^  Confirm_pass;



	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  User_name;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Register_ID::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Student_id = (gcnew System::Windows::Forms::TextBox());
			this->User_Pass = (gcnew System::Windows::Forms::TextBox());
			this->Confirm_pass = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->User_name = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label1->Location = System::Drawing::Point(180, 132);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(124, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Student ID : ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(186, 255);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(118, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Password : ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(95, 319);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(202, 24);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Confirm Password  : ";
			// 
			// Student_id
			// 
			this->Student_id->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->Student_id->Location = System::Drawing::Point(313, 132);
			this->Student_id->MaxLength = 9;
			this->Student_id->Name = L"Student_id";
			this->Student_id->Size = System::Drawing::Size(160, 22);
			this->Student_id->TabIndex = 3;
			this->Student_id->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Student_id->TextChanged += gcnew System::EventHandler(this, &Register_ID::textBox1_TextChanged);
			// 
			// User_Pass
			// 
			this->User_Pass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->User_Pass->Location = System::Drawing::Point(313, 258);
			this->User_Pass->MaxLength = 20;
			this->User_Pass->Name = L"User_Pass";
			this->User_Pass->Size = System::Drawing::Size(160, 22);
			this->User_Pass->TabIndex = 4;
			this->User_Pass->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Confirm_pass
			// 
			this->Confirm_pass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->Confirm_pass->Location = System::Drawing::Point(313, 322);
			this->Confirm_pass->MaxLength = 20;
			this->Confirm_pass->Name = L"Confirm_pass";
			this->Confirm_pass->Size = System::Drawing::Size(160, 22);
			this->Confirm_pass->TabIndex = 5;
			this->Confirm_pass->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"checkBox1.Image")));
			this->checkBox1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->checkBox1->Location = System::Drawing::Point(178, 403);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(296, 33);
			this->checkBox1->TabIndex = 6;
			this->checkBox1->Text = L"   Read the terms of use. ";
			this->checkBox1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Register_ID::checkBox1_CheckedChanged);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(274, 462);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(96, 36);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Register!!!";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Register_ID::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(208, 192);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(96, 24);
			this->label4->TabIndex = 8;
			this->label4->Text = L"User ID : ";
			// 
			// User_name
			// 
			this->User_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->User_name->Location = System::Drawing::Point(313, 194);
			this->User_name->MaxLength = 100;
			this->User_name->Name = L"User_name";
			this->User_name->Size = System::Drawing::Size(159, 22);
			this->User_name->TabIndex = 9;
			this->User_name->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Anchan", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(417, 584);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(188, 32);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Arn-Sue-Gun V.beta";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label6->Location = System::Drawing::Point(310, 347);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(169, 16);
			this->label6->TabIndex = 12;
			this->label6->Text = L"(Input password agian.)";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label7->Location = System::Drawing::Point(310, 293);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(157, 16);
			this->label7->TabIndex = 13;
			this->label7->Text = L"(Input 1-20 character.)";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label8->Location = System::Drawing::Point(310, 228);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(131, 16);
			this->label8->TabIndex = 14;
			this->label8->Text = L"(Input your name.)";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label9->Location = System::Drawing::Point(310, 166);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(130, 16);
			this->label9->TabIndex = 15;
			this->label9->Text = L"(Input Student ID.)";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 576);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(69, 33);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 16;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Register_ID::pictureBox1_Click);
			// 
			// Register_ID
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(617, 625);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->User_name);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->Confirm_pass);
			this->Controls->Add(this->User_Pass);
			this->Controls->Add(this->Student_id);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(617, 625);
			this->MinimumSize = System::Drawing::Size(617, 625);
			this->Name = L"Register_ID";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Register_ID";
			this->Load += gcnew System::EventHandler(this, &Register_ID::Register_ID_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		Ruleofuse Rule;
		Rule.ShowDialog();
	}
	private: System::Void Register_ID_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (checkBox1->Checked) {
			DatabaseApi s;
			String ^ id = Student_id->Text;
			String ^ name = User_name->Text;
			String ^ pass = User_Pass->Text;
			String ^ confirm = Confirm_pass->Text;
			int id_convert;
			string name_convert;
			string pass_convert;
			string confirm_convert;
			if (id != "" || name != "" || pass != "" || confirm != "") {
				id_convert = Convert::ToInt32(id);
				name_convert = msclr::interop::marshal_as<string>(name);
				pass_convert = msclr::interop::marshal_as<string>(pass);
				confirm_convert = msclr::interop::marshal_as<string>(confirm);
				Student_id->Text = "";
				User_name->Text = "";
				User_Pass->Text = "";
				if (s.check_register(id_convert) == true || sizeof(id_convert) != 9) {
					MessageBox::Show("No id/id used!!!");
					Student_id->Text = "";
					User_name->Text = "";
					User_Pass->Text = "";
					Confirm_pass->Text = "";
				}
				else if (s.check_login(name_convert, pass_convert) == 2) {
					MessageBox::Show("���͹��١��������");
					Student_id->Text = "";
					User_name->Text = "";
					User_Pass->Text = "";
					Confirm_pass->Text = "";
				}
				else if (pass_convert != confirm_convert) {
					MessageBox::Show("�������ç�ѹ");
					Confirm_pass->Text = "";
				}

				else {
					MessageBox::Show("Complete!!!");
					s.AddData(id_convert, name_convert, pass_convert);
					this->Hide();

				}
			}
			else {
				MessageBox::Show("Error!!!");
				Student_id->Text = "";
				User_name->Text = "";
				User_Pass->Text = "";
				Confirm_pass->Text = "";
				id = "0";
			}
		}
		else {
			MessageBox::Show("Please Check Box!!!");
		}
	};
	};
}
