#pragma once
#include"User.h"
#include "loginform.h"
#include"borrowprocess.h"
#include"returnprocess.h"
namespace databaseproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;




	/// <summary>
	/// Summary for returnbook
	/// </summary>
	public ref class returnbook : public System::Windows::Forms::Form
	{
	public:
		int userid;
		returnbook(User^ user)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			labelreturn->Text="Return Book Form For  " + user->name;
			this->userid = user->id;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~returnbook()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::LinkLabel^ llback;
	private: System::Windows::Forms::TextBox^ tbbranchid;
	private: System::Windows::Forms::Label^ id;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ tbbookid;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ labelreturn;

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
			this->llback = (gcnew System::Windows::Forms::LinkLabel());
			this->tbbranchid = (gcnew System::Windows::Forms::TextBox());
			this->id = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tbbookid = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->labelreturn = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// llback
			// 
			this->llback->AutoSize = true;
			this->llback->Font = (gcnew System::Drawing::Font(L"Tahoma", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->llback->Location = System::Drawing::Point(684, 287);
			this->llback->Name = L"llback";
			this->llback->Size = System::Drawing::Size(84, 40);
			this->llback->TabIndex = 0;
			this->llback->TabStop = true;
			this->llback->Text = L"Back";
			this->llback->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &returnbook::llback_LinkClicked);
			// 
			// tbbranchid
			// 
			this->tbbranchid->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbbranchid->Location = System::Drawing::Point(325, 195);
			this->tbbranchid->Name = L"tbbranchid";
			this->tbbranchid->Size = System::Drawing::Size(453, 40);
			this->tbbranchid->TabIndex = 21;
			// 
			// id
			// 
			this->id->AutoSize = true;
			this->id->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->id->Location = System::Drawing::Point(107, 201);
			this->id->Name = L"id";
			this->id->Size = System::Drawing::Size(138, 34);
			this->id->TabIndex = 20;
			this->id->Text = L"Branch_id";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(506, 278);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(124, 49);
			this->button2->TabIndex = 19;
			this->button2->Text = L"cancel";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &returnbook::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(325, 278);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(124, 49);
			this->button1->TabIndex = 18;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &returnbook::button1_Click);
			// 
			// tbbookid
			// 
			this->tbbookid->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbbookid->Location = System::Drawing::Point(325, 127);
			this->tbbookid->Name = L"tbbookid";
			this->tbbookid->Size = System::Drawing::Size(453, 40);
			this->tbbookid->TabIndex = 17;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(107, 127);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(110, 34);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Book Id";
			// 
			// labelreturn
			// 
			this->labelreturn->AutoSize = true;
			this->labelreturn->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelreturn->Location = System::Drawing::Point(351, 30);
			this->labelreturn->Name = L"labelreturn";
			this->labelreturn->Size = System::Drawing::Size(169, 36);
			this->labelreturn->TabIndex = 22;
			this->labelreturn->Text = L"return label";
			this->labelreturn->Click += gcnew System::EventHandler(this, &returnbook::label1_Click);
			// 
			// returnbook
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(934, 462);
			this->Controls->Add(this->labelreturn);
			this->Controls->Add(this->tbbranchid);
			this->Controls->Add(this->id);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tbbookid);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->llback);
			this->Name = L"returnbook";
			this->Text = L"returnbook";
			this->Load += gcnew System::EventHandler(this, &returnbook::returnbook_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void returnbook_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	public:bool backtodashboard = false;
	private: System::Void llback_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->backtodashboard = true;
		this->Close();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
	public:returnprocess^ returnbookk = nullptr;
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		// Extracting values from UI elements
		String^ bookid = tbbookid->Text;
		int boookid;

		if (!Int32::TryParse(bookid, boookid)) {
			MessageBox::Show("Please enter a valid book ID.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return; // Exit the function or return an error code
		}

		String^ branchid = tbbranchid->Text;
		int branchhid;

		if (!Int32::TryParse(branchid, branchhid)) {
			MessageBox::Show("Please enter a valid branch ID.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return; // Exit the function or return an error code
		}

		// Getting the user ID from the user session or any other suitable way
		int user_id = userid; // Replace this with your logic to get the user ID

		// Define the connection string
		String^ connString = "Data Source=DESKTOP-U852T64;Initial Catalog=databaseproject;Integrated Security=True;Encrypt=False";

		// Create a SqlConnection
		SqlConnection^ sqlconn = gcnew SqlConnection(connString);
		sqlconn->Open();

		// Define the SQL query to execute the stored procedure
		String^ sqlQuery = "EXEC ReturnBookProcedure @book_id, @branch_id, @user_id, @Availability OUTPUT;";
		SqlCommand^ command = gcnew SqlCommand(sqlQuery, sqlconn);

		// Add parameters
		command->Parameters->AddWithValue("@book_id", boookid);
		command->Parameters->AddWithValue("@branch_id", branchhid);
		command->Parameters->AddWithValue("@user_id", user_id);

		// Define a parameter to capture the output availability
		SqlParameter^ availabilityParam = gcnew SqlParameter("@Availability", SqlDbType::VarChar, 50);
		availabilityParam->Direction = ParameterDirection::Output;
		command->Parameters->Add(availabilityParam);

		// Execute the command
		command->ExecuteNonQuery();

		// Get the output value of availability from the parameter
		String^ availabilityResult = safe_cast<String^>(availabilityParam->Value);

		// Handle the availability result
		if (availabilityResult == "available") {
			// Book was returned successfully and is now available
			Console::WriteLine("Book returned successfully.");
		}
		else {
			// Book return failed or book was already available
			Console::WriteLine("Book return failed or book was already available.");
		}

		// Creating a returnprocess object
		returnbookk = gcnew returnprocess;
		returnbookk->bookid = boookid;
		returnbookk->branch_id = branchhid;
		returnbookk->user_id = user_id;
		returnbookk->return_date = "2000-06-07"; // Modify this if needed
		returnbookk->borrow_date = "1999-05-08"; // Modify this if needed
		returnbookk->availability = availabilityResult;
		if (availabilityResult == "available") {
			returnbookk->availability = "available";
		}
		else {
			returnbookk->availability = "not available";
		}
	}
	catch (SqlException^ ex) {
		// Handle SQL exceptions
		Console::WriteLine("SQL Error: " + ex->Message);
		MessageBox::Show("SQL Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	catch (Exception^ ex) {
		// Handle any other exceptions
		Console::WriteLine("Error: " + ex->Message);
		MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

}
};
}
