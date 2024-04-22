#pragma once
#include"User.h"
#include "loginform.h"
#include "Book.h"
#include"borrowprocess.h"
namespace databaseproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for borrowbook
	/// </summary>
	public ref class borrowbook : public System::Windows::Forms::Form
	{
	public:
		borrowbook(User^ user)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			borrowbooklabel->Text = "borrow book form for " + user->name;
			int userrid = user->id;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~borrowbook()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ borrowbooklabel;





	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::TextBox^ tbbookid;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ id;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ tbbranchid;
	private: System::Windows::Forms::TextBox^ tbyourid;





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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->borrowbooklabel = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbbookid = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->id = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tbbranchid = (gcnew System::Windows::Forms::TextBox());
			this->tbyourid = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(400, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 17);
			this->label1->TabIndex = 0;
			// 
			// borrowbooklabel
			// 
			this->borrowbooklabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->borrowbooklabel->AutoSize = true;
			this->borrowbooklabel->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->borrowbooklabel->Location = System::Drawing::Point(317, 51);
			this->borrowbooklabel->Name = L"borrowbooklabel";
			this->borrowbooklabel->Size = System::Drawing::Size(94, 36);
			this->borrowbooklabel->TabIndex = 1;
			this->borrowbooklabel->Text = L"label2";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(46, 227);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 34);
			this->label2->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(92, 166);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(110, 34);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Book Id";
			// 
			// tbbookid
			// 
			this->tbbookid->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbbookid->Location = System::Drawing::Point(310, 175);
			this->tbbookid->Name = L"tbbookid";
			this->tbbookid->Size = System::Drawing::Size(453, 40);
			this->tbbookid->TabIndex = 9;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(323, 366);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(124, 49);
			this->button1->TabIndex = 11;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &borrowbook::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(531, 366);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(124, 49);
			this->button2->TabIndex = 12;
			this->button2->Text = L"cancel";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &borrowbook::button2_Click);
			// 
			// id
			// 
			this->id->AutoSize = true;
			this->id->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->id->Location = System::Drawing::Point(92, 309);
			this->id->Name = L"id";
			this->id->Size = System::Drawing::Size(138, 34);
			this->id->TabIndex = 13;
			this->id->Text = L"Branch_id";
			this->id->Click += gcnew System::EventHandler(this, &borrowbook::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(92, 105);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(106, 34);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Your Id";
			this->label6->Click += gcnew System::EventHandler(this, &borrowbook::label6_Click);
			// 
			// tbbranchid
			// 
			this->tbbranchid->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbbranchid->Location = System::Drawing::Point(310, 309);
			this->tbbranchid->Name = L"tbbranchid";
			this->tbbranchid->Size = System::Drawing::Size(453, 40);
			this->tbbranchid->TabIndex = 15;
			// 
			// tbyourid
			// 
			this->tbyourid->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbyourid->Location = System::Drawing::Point(310, 105);
			this->tbyourid->Name = L"tbyourid";
			this->tbyourid->Size = System::Drawing::Size(453, 40);
			this->tbyourid->TabIndex = 16;
			// 
			// borrowbook
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(940, 597);
			this->Controls->Add(this->tbyourid);
			this->Controls->Add(this->tbbranchid);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->id);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tbbookid);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->borrowbooklabel);
			this->Controls->Add(this->label1);
			this->Name = L"borrowbook";
			this->Text = L"borrowbook";
			this->Load += gcnew System::EventHandler(this, &borrowbook::borrowbook_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void borrowbook_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
	   public:borrowprocess^ borrowbookk = nullptr;
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ bookid = tbbookid->Text;
	String^ existornot = "yes";
	String^ branchid = tbbranchid->Text;
	String^ user_id = tbyourid->Text;
	if (bookid->Length == 0||branchid->Length==0||user_id->Length==0 )
	{
		MessageBox::Show("Please enter all the fields",
			"One or more empty fields", MessageBoxButtons::OK);
		return;
	}
	try {
		String^ connString = "Data Source=DESKTOP-U852T64;Initial Catalog=databaseproject;Integrated Security=True;Encrypt=False";
		SqlConnection sqlconn(connString);
		sqlconn.Open();
		String^ sqlQuery = "INSERT INTO user_borrow_book " +
			"([book_id], [user_id], [book_exist_or_not], branch_id) VALUES " +
			"(@book_id, @user_id, @book_exist_or_not, @branch_id);";
		SqlCommand command(sqlQuery, % sqlconn);
		command.Parameters->AddWithValue("@book_id", bookid);
		command.Parameters->AddWithValue("@user_id", user_id);
		command.Parameters->AddWithValue("@book_exist_or_not", existornot);
		command.Parameters->AddWithValue("@branch_id", branchid);

		command.ExecuteNonQuery();
		borrowbookk = gcnew borrowprocess ;

		borrowbookk->bookid = bookid;
		borrowbookk->branch_id = branchid;
		borrowbookk->user_id = user_id;
		borrowbookk->return_date = "2000--6-7";
		borrowbookk->borrow_date = "1999-5-8";
		borrowbookk->book_exist_or_not = existornot;

	}
	catch (Exception^ ex) {
		MessageBox::Show("Failed to borrow book" + ex->Message,
			"Borrow book Failure", MessageBoxButtons::OK);
	}


}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
