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
			borrowlabel->Text = "to borrow a book press on ";
			showallbooks->Text = "To show all book press on ";
			returnbook->Text = "To Return your borrowed book press on ";

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
	private: System::Windows::Forms::Label^ showallbooks;
	private: System::Windows::Forms::LinkLabel^ llshow;
	private: System::Windows::Forms::Label^ returnbook;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;




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
			this->showallbooks = (gcnew System::Windows::Forms::Label());
			this->llshow = (gcnew System::Windows::Forms::LinkLabel());
			this->returnbook = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
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
			// showallbooks
			// 
			this->showallbooks->AutoSize = true;
			this->showallbooks->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->showallbooks->Location = System::Drawing::Point(42, 181);
			this->showallbooks->Name = L"showallbooks";
			this->showallbooks->Size = System::Drawing::Size(129, 24);
			this->showallbooks->TabIndex = 4;
			this->showallbooks->Text = L"showallbooks";
			this->showallbooks->Click += gcnew System::EventHandler(this, &MainForm::showallbooks_Click);
			// 
			// llshow
			// 
			this->llshow->AutoSize = true;
			this->llshow->Location = System::Drawing::Point(509, 171);
			this->llshow->Name = L"llshow";
			this->llshow->Size = System::Drawing::Size(339, 36);
			this->llshow->TabIndex = 5;
			this->llshow->TabStop = true;
			this->llshow->Text = L"Switch to show all books";
			this->llshow->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MainForm::llshow_LinkClicked);
			// 
			// returnbook
			// 
			this->returnbook->AutoSize = true;
			this->returnbook->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->returnbook->Location = System::Drawing::Point(46, 254);
			this->returnbook->Name = L"returnbook";
			this->returnbook->Size = System::Drawing::Size(113, 24);
			this->returnbook->TabIndex = 6;
			this->returnbook->Text = L"return label";
			this->returnbook->Click += gcnew System::EventHandler(this, &MainForm::label2_Click);
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(515, 254);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(310, 36);
			this->linkLabel1->TabIndex = 7;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Switch to return book ";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MainForm::linkLabel1_LinkClicked);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(17, 36);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1032, 532);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->returnbook);
			this->Controls->Add(this->llshow);
			this->Controls->Add(this->showallbooks);
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
	   public:bool switch_to_show_all_books=false;
private: System::Void llshow_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->switch_to_show_all_books = true;
	this->Close();
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void showallbooks_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   public:bool switchtoreturnbook = false;

private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->switchtoreturnbook = true;
	this->Close();
}
};
}
