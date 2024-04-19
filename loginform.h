#pragma once
#include "User.h"


namespace databaseproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for loginform
	/// </summary>
	public ref class loginform : public System::Windows::Forms::Form
	{
	public:
		loginform(void)
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
		~loginform()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbemail;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbpassword;
	private: System::Windows::Forms::Button^ btnok;
	private: System::Windows::Forms::Button^ btncancel;
	private: System::Windows::Forms::LinkLabel^ llRegister;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(loginform::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbemail = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbpassword = (gcnew System::Windows::Forms::TextBox());
			this->btnok = (gcnew System::Windows::Forms::Button());
			this->btncancel = (gcnew System::Windows::Forms::Button());
			this->llRegister = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(33, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(510, 74);
			this->label1->TabIndex = 0;
			this->label1->Text = L"login";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &loginform::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(42, 205);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(81, 34);
			this->label2->TabIndex = 1;
			this->label2->Text = L"email";
			this->label2->Click += gcnew System::EventHandler(this, &loginform::label2_Click);
			// 
			// tbemail
			// 
			this->tbemail->Location = System::Drawing::Point(170, 199);
			this->tbemail->Name = L"tbemail";
			this->tbemail->Size = System::Drawing::Size(402, 40);
			this->tbemail->TabIndex = 2;
			this->tbemail->TextChanged += gcnew System::EventHandler(this, &loginform::tbemail_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(36, 288);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(132, 34);
			this->label3->TabIndex = 3;
			this->label3->Text = L"password";
			this->label3->Click += gcnew System::EventHandler(this, &loginform::label3_Click);
			// 
			// tbpassword
			// 
			this->tbpassword->Location = System::Drawing::Point(174, 288);
			this->tbpassword->Name = L"tbpassword";
			this->tbpassword->PasswordChar = '*';
			this->tbpassword->Size = System::Drawing::Size(402, 40);
			this->tbpassword->TabIndex = 4;
			// 
			// btnok
			// 
			this->btnok->Location = System::Drawing::Point(174, 367);
			this->btnok->Name = L"btnok";
			this->btnok->Size = System::Drawing::Size(114, 42);
			this->btnok->TabIndex = 5;
			this->btnok->Text = L"ok";
			this->btnok->UseVisualStyleBackColor = true;
			this->btnok->Click += gcnew System::EventHandler(this, &loginform::btnok_Click);
			// 
			// btncancel
			// 
			this->btncancel->Location = System::Drawing::Point(412, 367);
			this->btncancel->Name = L"btncancel";
			this->btncancel->Size = System::Drawing::Size(131, 42);
			this->btncancel->TabIndex = 6;
			this->btncancel->Text = L"cancel";
			this->btncancel->UseVisualStyleBackColor = true;
			this->btncancel->Click += gcnew System::EventHandler(this, &loginform::btncancel_Click);
			// 
			// llRegister
			// 
			this->llRegister->AutoSize = true;
			this->llRegister->Location = System::Drawing::Point(246, 433);
			this->llRegister->Name = L"llRegister";
			this->llRegister->Size = System::Drawing::Size(401, 34);
			this->llRegister->TabIndex = 7;
			this->llRegister->TabStop = true;
			this->llRegister->Text = L"don\'t have account create one \r\n";
			this->llRegister->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &loginform::llRegister_LinkClicked);
			// 
			// loginform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(15, 33);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ClientSize = System::Drawing::Size(650, 476);
			this->Controls->Add(this->llRegister);
			this->Controls->Add(this->btncancel);
			this->Controls->Add(this->btnok);
			this->Controls->Add(this->tbpassword);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tbemail);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"loginform";
			this->Text = L"welcome to our library ";
			this->Load += gcnew System::EventHandler(this, &loginform::loginform_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tbemail_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btncancel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
	   public: User^ user = nullptr;
private: System::Void btnok_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ email = this ->tbemail->Text;
	String^ password = this->tbpassword->Text;
	if (email->Length == 0 || password->Length == 0) {
		MessageBox::Show("please enter email and password",
			"email or password is empty", MessageBoxButtons::OK);
		return;
	}
		try{
			
			
			String^ connString = "Data Source=DESKTOP-U852T64;Initial Catalog=databaseproject;Integrated Security=True;Encrypt=False";
			SqlConnection sqlconn(connString);
			sqlconn.Open();
			String^ sqlQuery = "SELECT * FROM users WHERE email=@email AND PASSWORD=@pwd;";
			SqlCommand command(sqlQuery, % sqlconn);
			command.Parameters->AddWithValue("@email", email);
			command.Parameters->AddWithValue("@pwd", password);
			SqlDataReader^ reader = command.ExecuteReader();
			if (reader->Read())
			{
				
				user = gcnew User;
				user->id = reader->GetInt32(0);
				user->name = reader->GetString(1);
				user->email = reader->GetString(2);
				user->phone = reader->GetString(3);
				user->address = reader->GetString(4);
				user->password = reader->GetString(5);
				this->Close();
			}
			else {
				MessageBox::Show("Email or password is incorrect", "Email or Password Error", MessageBoxButtons::OK);
			}


		}
		catch (Exception^ e) {
			MessageBox::Show("failed to connect to data base"+ e->Message ,
				"Data base connection error", MessageBoxButtons::OK);
		}
	
}
private: System::Void loginform_Load(System::Object^ sender, System::EventArgs^ e) {
}
	   public: bool switchToRegister = false;
private: System::Void llRegister_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->switchToRegister = true;
	this->Close();
}
};
}
