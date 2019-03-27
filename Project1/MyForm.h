#include "Server_select.h"
#include <stdio.h>  // for printf

#pragma once

namespace Project1 {

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
	private: System::Windows::Forms::TextBox^  ID;
	protected:

	protected:
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::TextBox^  Pass;

	private: System::Windows::Forms::Button^  Register;
	private: System::Windows::Forms::Button^  Log_in;


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
			this->ID = (gcnew System::Windows::Forms::TextBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->Pass = (gcnew System::Windows::Forms::TextBox());
			this->Register = (gcnew System::Windows::Forms::Button());
			this->Log_in = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// ID
			// 
			this->ID->BackColor = System::Drawing::SystemColors::MenuText;
			this->ID->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->ID->Location = System::Drawing::Point(390, 144);
			this->ID->Name = L"ID";
			this->ID->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->ID->Size = System::Drawing::Size(211, 22);
			this->ID->TabIndex = 0;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			this->contextMenuStrip1->Opening += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::contextMenuStrip1_Opening);
			// 
			// Pass
			// 
			this->Pass->Location = System::Drawing::Point(390, 193);
			this->Pass->Name = L"Pass";
			this->Pass->Size = System::Drawing::Size(210, 22);
			this->Pass->TabIndex = 2;
			this->Pass->UseSystemPasswordChar = true;
			this->Pass->TextChanged += gcnew System::EventHandler(this, &MyForm::Pass_TextChanged);
			// 
			// Register
			// 
			this->Register->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->Register->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->Register->Location = System::Drawing::Point(518, 235);
			this->Register->Name = L"Register";
			this->Register->Size = System::Drawing::Size(83, 29);
			this->Register->TabIndex = 3;
			this->Register->Text = L"Register";
			this->Register->UseVisualStyleBackColor = false;
			this->Register->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Log_in
			// 
			this->Log_in->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->Log_in->Location = System::Drawing::Point(464, 290);
			this->Log_in->Name = L"Log_in";
			this->Log_in->Size = System::Drawing::Size(137, 34);
			this->Log_in->TabIndex = 4;
			this->Log_in->Text = L"Log in";
			this->Log_in->UseVisualStyleBackColor = true;
			this->Log_in->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(687, 372);
			this->Controls->Add(this->Log_in);
			this->Controls->Add(this->Register);
			this->Controls->Add(this->Pass);
			this->Controls->Add(this->ID);
			this->Name = L"MyForm";
			this->Text = L"Sign In";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		Server_select server;
		server.ShowDialog();
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Pass_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void contextMenuStrip1_Opening(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
}
};
}
