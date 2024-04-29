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
			labelbills->Text="To Show Your bills Press On ";
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
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::LinkLabel^ linkLabel2;
	private: System::Windows::Forms::Label^ labelbills;
	private: System::Windows::Forms::LinkLabel^ linkLabel3;
	private: System::Windows::Forms::LinkLabel^ linkLabel4;




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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->labelbills = (gcnew System::Windows::Forms::Label());
			this->linkLabel3 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel4 = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label1->Location = System::Drawing::Point(342, 9);
			this->label1->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(316, 59);
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
			this->lbHellouser->Location = System::Drawing::Point(45, 27);
			this->lbHellouser->Name = L"lbHellouser";
			this->lbHellouser->Size = System::Drawing::Size(72, 28);
			this->lbHellouser->TabIndex = 1;
			this->lbHellouser->Text = L"label2";
			this->lbHellouser->Click += gcnew System::EventHandler(this, &MainForm::lbHellouser_Click);
			// 
			// llborrowlabel
			// 
			this->llborrowlabel->AutoSize = true;
			this->llborrowlabel->LinkColor = System::Drawing::Color::Black;
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
			this->llshow->LinkColor = System::Drawing::Color::Black;
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
			this->linkLabel1->LinkColor = System::Drawing::Color::Black;
			this->linkLabel1->Location = System::Drawing::Point(515, 254);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(310, 36);
			this->linkLabel1->TabIndex = 7;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Switch to return book ";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MainForm::linkLabel1_LinkClicked);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(50, 328);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(136, 21);
			this->label2->TabIndex = 8;
			this->label2->Text = L"show_all_borrow";
			// 
			// linkLabel2
			// 
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->LinkColor = System::Drawing::Color::Black;
			this->linkLabel2->Location = System::Drawing::Point(521, 328);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(436, 36);
			this->linkLabel2->TabIndex = 9;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"Switch to Show All Borrow Book";
			this->linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MainForm::linkLabel2_LinkClicked);
			// 
			// labelbills
			// 
			this->labelbills->AutoSize = true;
			this->labelbills->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelbills->Location = System::Drawing::Point(50, 390);
			this->labelbills->Name = L"labelbills";
			this->labelbills->Size = System::Drawing::Size(130, 24);
			this->labelbills->TabIndex = 10;
			this->labelbills->Text = L"show all bills ";
			this->labelbills->Click += gcnew System::EventHandler(this, &MainForm::labelbills_Click);
			// 
			// linkLabel3
			// 
			this->linkLabel3->AutoSize = true;
			this->linkLabel3->LinkColor = System::Drawing::Color::Black;
			this->linkLabel3->Location = System::Drawing::Point(527, 409);
			this->linkLabel3->Name = L"linkLabel3";
			this->linkLabel3->Size = System::Drawing::Size(343, 36);
			this->linkLabel3->TabIndex = 11;
			this->linkLabel3->TabStop = true;
			this->linkLabel3->Text = L"Switch To Show you bills";
			this->linkLabel3->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MainForm::linkLabel3_LinkClicked);
			// 
			// linkLabel4
			// 
			this->linkLabel4->AutoSize = true;
			this->linkLabel4->LinkColor = System::Drawing::Color::Black;
			this->linkLabel4->Location = System::Drawing::Point(865, 468);
			this->linkLabel4->Name = L"linkLabel4";
			this->linkLabel4->Size = System::Drawing::Size(120, 36);
			this->linkLabel4->TabIndex = 12;
			this->linkLabel4->TabStop = true;
			this->linkLabel4->Text = L"Log Out";
			this->linkLabel4->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MainForm::linkLabel4_LinkClicked);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(17, 36);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1032, 532);
			this->Controls->Add(this->linkLabel4);
			this->Controls->Add(this->linkLabel3);
			this->Controls->Add(this->labelbills);
			this->Controls->Add(this->linkLabel2);
			this->Controls->Add(this->label2);
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
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
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
private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
	  public:bool switch_to_show_borrowed_books = false;
private: System::Void linkLabel2_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->switch_to_show_borrowed_books = true;
	this->Close();
}
private: System::Void labelbills_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   public:bool switchfromdashboardtobills = false;
private: System::Void linkLabel3_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->switchfromdashboardtobills=true;
	this->Close();
}
		   public:bool switchtologinn = false;

private: System::Void linkLabel4_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->switchtologinn = true;
	this->Close();
}
};
}
