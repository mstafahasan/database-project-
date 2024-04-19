#pragma once
#include"User.h"
namespace databaseproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;


	/// <summary>
	/// Summary for RegisterForm
	/// </summary>
	public ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:
		RegisterForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->CenterToScreen();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RegisterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbName;
	private: System::Windows::Forms::TextBox^ tbEmail;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbPhone;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ tbAddress;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ tbPassword;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ tbConfirmPassword;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ btnOK;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::LinkLabel^ llLogin;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RegisterForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbPhone = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbAddress = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tbConfirmPassword = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->llLogin = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(-547, -47);
			this->label1->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1807, 151);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Register";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &RegisterForm::label1_Click);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(15, 73);
			this->label2->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(199, 60);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Name";
			this->label2->Click += gcnew System::EventHandler(this, &RegisterForm::label2_Click);
			// 
			// tbName
			// 
			this->tbName->Location = System::Drawing::Point(273, 73);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(390, 40);
			this->tbName->TabIndex = 2;
			// 
			// tbEmail
			// 
			this->tbEmail->Location = System::Drawing::Point(273, 145);
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(390, 40);
			this->tbEmail->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(15, 145);
			this->label3->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(199, 60);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Email";
			// 
			// tbPhone
			// 
			this->tbPhone->Location = System::Drawing::Point(273, 205);
			this->tbPhone->Name = L"tbPhone";
			this->tbPhone->Size = System::Drawing::Size(390, 40);
			this->tbPhone->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(15, 205);
			this->label4->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(199, 60);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Phone";
			// 
			// tbAddress
			// 
			this->tbAddress->Location = System::Drawing::Point(273, 265);
			this->tbAddress->Name = L"tbAddress";
			this->tbAddress->Size = System::Drawing::Size(390, 40);
			this->tbAddress->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(15, 265);
			this->label5->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(199, 60);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Address";
			// 
			// tbPassword
			// 
			this->tbPassword->Location = System::Drawing::Point(273, 325);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '*';
			this->tbPassword->Size = System::Drawing::Size(390, 40);
			this->tbPassword->TabIndex = 10;
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(15, 325);
			this->label6->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(199, 60);
			this->label6->TabIndex = 9;
			this->label6->Text = L"password";
			// 
			// tbConfirmPassword
			// 
			this->tbConfirmPassword->Location = System::Drawing::Point(273, 385);
			this->tbConfirmPassword->Name = L"tbConfirmPassword";
			this->tbConfirmPassword->PasswordChar = '*';
			this->tbConfirmPassword->Size = System::Drawing::Size(390, 40);
			this->tbConfirmPassword->TabIndex = 12;
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(15, 385);
			this->label7->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(184, 55);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Confirm Password";
			// 
			// btnOK
			// 
			this->btnOK->Location = System::Drawing::Point(273, 451);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(150, 44);
			this->btnOK->TabIndex = 13;
			this->btnOK->Text = L"OK";
			this->btnOK->UseVisualStyleBackColor = true;
			this->btnOK->Click += gcnew System::EventHandler(this, &RegisterForm::btnOK_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(470, 451);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(150, 44);
			this->btnCancel->TabIndex = 14;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &RegisterForm::btnCancel_Click);
			// 
			// llLogin
			// 
			this->llLogin->AutoSize = true;
			this->llLogin->Location = System::Drawing::Point(677, 500);
			this->llLogin->Name = L"llLogin";
			this->llLogin->Size = System::Drawing::Size(81, 34);
			this->llLogin->TabIndex = 15;
			this->llLogin->TabStop = true;
			this->llLogin->Text = L"Login";
			this->llLogin->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &RegisterForm::linkLabel1_LinkClicked);
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(15, 33);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(773, 552);
			this->Controls->Add(this->llLogin);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnOK);
			this->Controls->Add(this->tbConfirmPassword);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->tbAddress);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->tbPhone);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->tbEmail);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tbName);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"RegisterForm";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->StartPosition = System::Windows::Forms::FormStartPosition::WindowsDefaultBounds;
			this->Text = L"RegisterForm";
			this->Load += gcnew System::EventHandler(this, &RegisterForm::RegisterForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void RegisterForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	 public: bool switchToLogin = false;
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->switchToLogin = true;
		this->Close();
	}
private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
	   public:User^ user = nullptr;
private: System::Void btnOK_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ name = tbName->Text;
	String^ email = tbEmail->Text;
	String^ phone = tbPhone->Text;
	String^ address = tbAddress->Text;
	String^ Password = tbPassword->Text;
	String^ confirmPassword = tbConfirmPassword->Text;

	if (name->Length == 0 || email->Length == 0
		|| phone->Length == 0 || address->Length == 0
		|| Password->Length == 0) {
		MessageBox::Show("Please enter all the fields",
			"One or more empty fields", MessageBoxButtons::OK);
		return;}
	if (String::Compare(Password, confirmPassword) != 0) {
		MessageBox::Show("Password and Confirm Password do not match",
			"Password Error", MessageBoxButtons::OK);
		return;
	}

	try {
		String^ connString = "Data Source=DESKTOP-U852T64;Initial Catalog=databaseproject;Integrated Security=True;Encrypt=False";
		SqlConnection sqlconn(connString);
		sqlconn.Open();
		String^ sqlQuery = "INSERT INTO users " +
			"(name, email, phone, address, password) VALUES " +
			"(@name, @email, @phone, @address, @password);";

		SqlCommand command(sqlQuery, % sqlconn);
		command.Parameters->AddWithValue("@name", name);
		command.Parameters->AddWithValue("@email", email);
		command.Parameters->AddWithValue("@phone", phone);
		command.Parameters->AddWithValue("@address", address);
		command.Parameters->AddWithValue("@password", Password);

		command.ExecuteNonQuery();
		user = gcnew User;
		user->name = name;
		user->email = email;
		user->phone = phone;
		user->address = address;
		user->password = Password;
		this->Close();


	}

	catch (Exception^ ex) {
		MessageBox::Show("Failed to register new user"+ex->Message,
			"Register Failure", MessageBoxButtons::OK);
	}


}
};
}
