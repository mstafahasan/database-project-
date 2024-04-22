#pragma once
#include "librarian.h"
namespace databaseproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for LoginLibrarianForm
	/// </summary>
	public ref class LoginLibrarianForm : public System::Windows::Forms::Form
	{
	public:
		LoginLibrarianForm(void)
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
		~LoginLibrarianForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ librarianlogin;
	private: System::Windows::Forms::Label^ lbemail;

	private: System::Windows::Forms::Label^ lbpassword;
	private: System::Windows::Forms::TextBox^ tbemail;
	private: System::Windows::Forms::TextBox^ tbpassword;
	private: System::Windows::Forms::Button^ tbnOK;
	private: System::Windows::Forms::Button^ tbncancel;
	private: System::Windows::Forms::LinkLabel^ llswitchtologinasmember;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginLibrarianForm::typeid));
			this->librarianlogin = (gcnew System::Windows::Forms::Label());
			this->lbemail = (gcnew System::Windows::Forms::Label());
			this->lbpassword = (gcnew System::Windows::Forms::Label());
			this->tbemail = (gcnew System::Windows::Forms::TextBox());
			this->tbpassword = (gcnew System::Windows::Forms::TextBox());
			this->tbnOK = (gcnew System::Windows::Forms::Button());
			this->tbncancel = (gcnew System::Windows::Forms::Button());
			this->llswitchtologinasmember = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// librarianlogin
			// 
			this->librarianlogin->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->librarianlogin->Font = (gcnew System::Drawing::Font(L"Tahoma", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->librarianlogin->Location = System::Drawing::Point(113, 29);
			this->librarianlogin->Name = L"librarianlogin";
			this->librarianlogin->Size = System::Drawing::Size(519, 69);
			this->librarianlogin->TabIndex = 0;
			this->librarianlogin->Text = L"librarian login";
			this->librarianlogin->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbemail
			// 
			this->lbemail->AutoSize = true;
			this->lbemail->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbemail->Location = System::Drawing::Point(66, 227);
			this->lbemail->Name = L"lbemail";
			this->lbemail->Size = System::Drawing::Size(82, 34);
			this->lbemail->TabIndex = 1;
			this->lbemail->Text = L"Email";
			this->lbemail->Click += gcnew System::EventHandler(this, &LoginLibrarianForm::label1_Click);
			// 
			// lbpassword
			// 
			this->lbpassword->AutoSize = true;
			this->lbpassword->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbpassword->Location = System::Drawing::Point(66, 325);
			this->lbpassword->Name = L"lbpassword";
			this->lbpassword->Size = System::Drawing::Size(132, 34);
			this->lbpassword->TabIndex = 2;
			this->lbpassword->Text = L"Password";
			// 
			// tbemail
			// 
			this->tbemail->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbemail->Location = System::Drawing::Point(254, 227);
			this->tbemail->Name = L"tbemail";
			this->tbemail->Size = System::Drawing::Size(402, 40);
			this->tbemail->TabIndex = 3;
			// 
			// tbpassword
			// 
			this->tbpassword->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbpassword->Location = System::Drawing::Point(254, 319);
			this->tbpassword->Name = L"tbpassword";
			this->tbpassword->PasswordChar = '*';
			this->tbpassword->Size = System::Drawing::Size(402, 40);
			this->tbpassword->TabIndex = 4;
			// 
			// tbnOK
			// 
			this->tbnOK->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbnOK->Location = System::Drawing::Point(254, 441);
			this->tbnOK->Name = L"tbnOK";
			this->tbnOK->Size = System::Drawing::Size(131, 42);
			this->tbnOK->TabIndex = 5;
			this->tbnOK->Text = L"OK";
			this->tbnOK->UseVisualStyleBackColor = true;
			this->tbnOK->Click += gcnew System::EventHandler(this, &LoginLibrarianForm::tbnOK_Click);
			// 
			// tbncancel
			// 
			this->tbncancel->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbncancel->Location = System::Drawing::Point(471, 441);
			this->tbncancel->Name = L"tbncancel";
			this->tbncancel->Size = System::Drawing::Size(131, 42);
			this->tbncancel->TabIndex = 6;
			this->tbncancel->Text = L"Cancel";
			this->tbncancel->UseVisualStyleBackColor = true;
			this->tbncancel->Click += gcnew System::EventHandler(this, &LoginLibrarianForm::tbncancel_Click);
			// 
			// llswitchtologinasmember
			// 
			this->llswitchtologinasmember->AutoSize = true;
			this->llswitchtologinasmember->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->llswitchtologinasmember->LinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->llswitchtologinasmember->Location = System::Drawing::Point(29, 491);
			this->llswitchtologinasmember->Name = L"llswitchtologinasmember";
			this->llswitchtologinasmember->Size = System::Drawing::Size(231, 34);
			this->llswitchtologinasmember->TabIndex = 7;
			this->llswitchtologinasmember->TabStop = true;
			this->llswitchtologinasmember->Text = L"login as member ";
			this->llswitchtologinasmember->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginLibrarianForm::llswitchtologinasmember_LinkClicked);
			// 
			// LoginLibrarianForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ClientSize = System::Drawing::Size(762, 534);
			this->Controls->Add(this->llswitchtologinasmember);
			this->Controls->Add(this->tbncancel);
			this->Controls->Add(this->tbnOK);
			this->Controls->Add(this->tbpassword);
			this->Controls->Add(this->tbemail);
			this->Controls->Add(this->lbpassword);
			this->Controls->Add(this->lbemail);
			this->Controls->Add(this->librarianlogin);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"LoginLibrarianForm";
			this->Text = L"LoginLibrarianForm";
			this->Load += gcnew System::EventHandler(this, &LoginLibrarianForm::LoginLibrarianForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void tbncancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
		  public: librarian^ Librarian = nullptr;
private: System::Void tbnOK_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ email = this->tbemail->Text;
	String^ password = this->tbpassword->Text;
	if (email->Length == 0 || password->Length == 0) {
		MessageBox::Show("please enter email and password",
			"email or password is empty", MessageBoxButtons::OK);
		return;
	}

	try {


		String^ connString = "Data Source=DESKTOP-U852T64;Initial Catalog=databaseproject;Integrated Security=True;Encrypt=False";
		SqlConnection sqlconn(connString);
		sqlconn.Open();
		String^ sqlQuery = "SELECT * FROM librarian WHERE email=@email AND PASSWORD=@pwd;";
		SqlCommand command(sqlQuery, % sqlconn);
		command.Parameters->AddWithValue("@email", email);
		command.Parameters->AddWithValue("@pwd", password);
		SqlDataReader^ reader = command.ExecuteReader();
		if (reader->Read())
		{
	


			Librarian = gcnew librarian;
			Librarian->id = reader->GetInt32(0);
			Librarian->name = reader->GetString(1);
			Librarian->email = reader->GetString(2);
			Librarian->phone = reader->GetString(3);
			Librarian->address = reader->GetString(4);
			Librarian->password = reader->GetString(5);
			Librarian->salary=reader->GetString(6);
			Librarian->sex = reader->GetString(6);
			Librarian->hiredate = reader->GetString(6);
			Librarian->country = reader->GetString(6);
			Librarian->city = reader->GetString(6);
			Librarian->street = reader->GetString(6);

			this->Close();
		}
		else {
			MessageBox::Show("Email or password is incorrect", "Email or Password Error", MessageBoxButtons::OK);
		}


	}
	catch (Exception^ el) {
		MessageBox::Show("failed to connect to data base" + el->Message,
			"Data base connection error", MessageBoxButtons::OK);
	}
}
private: System::Void LoginLibrarianForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
	   public:bool switchtologinasmember = false;
private: System::Void llswitchtologinasmember_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->switchtologinasmember = true;
	this->Close();
}
};
}
