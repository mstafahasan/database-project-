#pragma once
#include "User.h"

namespace databaseproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(User^ user)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			lbHellouser->Text = "hello " + user->name;
			borrowlabel->Text = "to borrow a book press on switch to borrow label";
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lbHellouser;
	private: System::Windows::Forms::LinkLabel^ llborrowlabel;

	private: System::Windows::Forms::Label^ borrowlabel;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbHellouser = (gcnew System::Windows::Forms::Label());
			this->llborrowlabel = (gcnew System::Windows::Forms::LinkLabel());
			this->borrowlabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label1->Location = System::Drawing::Point(145, -18);
			this->label1->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(681, 115);
			this->label1->TabIndex = 0;
			this->label1->Text = L"welcome to our library";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &MainForm::label1_Click);
			// 
			// lbHellouser
			// 
			this->lbHellouser->AutoSize = true;
			this->lbHellouser->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbHellouser->Location = System::Drawing::Point(41, 61);
			this->lbHellouser->Name = L"lbHellouser";
			this->lbHellouser->Size = System::Drawing::Size(72, 28);
			this->lbHellouser->TabIndex = 1;
			this->lbHellouser->Text = L"label2";
			this->lbHellouser->Click += gcnew System::EventHandler(this, &MainForm::lbHellouser_Click);
			// 
			// llborrowlabel
			// 
			this->llborrowlabel->AutoSize = true;
			this->llborrowlabel->Location = System::Drawing::Point(509, 105);
			this->llborrowlabel->Name = L"llborrowlabel";
			this->llborrowlabel->Size = System::Drawing::Size(307, 36);
			this->llborrowlabel->TabIndex = 2;
			this->llborrowlabel->TabStop = true;
			this->llborrowlabel->Text = L"switch to borrow label";
			this->llborrowlabel->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MainForm::llborrowlabel_LinkClicked);
			// 
			// borrowlabel
			// 
			this->borrowlabel->AutoSize = true;
			this->borrowlabel->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->borrowlabel->Location = System::Drawing::Point(40, 115);
			this->borrowlabel->Name = L"borrowlabel";
			this->borrowlabel->Size = System::Drawing::Size(115, 24);
			this->borrowlabel->TabIndex = 3;
			this->borrowlabel->Text = L"borrowlabel";
			this->borrowlabel->Click += gcnew System::EventHandler(this, &MainForm::borrowlabel_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(17, 36);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1032, 532);
			this->Controls->Add(this->borrowlabel);
			this->Controls->Add(this->llborrowlabel);
			this->Controls->Add(this->lbHellouser);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(7);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void lbHellouser_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		   public:bool switch_to_borrow_label = false;
	private: System::Void llborrowlabel_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->switch_to_borrow_label = true;
		this->Close();
	}
private: System::Void borrowlabel_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
