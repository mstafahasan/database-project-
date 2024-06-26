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
		int userid;
	public:
		borrowbook(User^ user)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			borrowbooklabel->Text = "borrow book form for " + user->name;
			this->userid = user->id;
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



	private: System::Windows::Forms::TextBox^ tbbranchid;

	private: System::Windows::Forms::LinkLabel^ llreturn;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip2;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip3;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;








	private: System::ComponentModel::IContainer^ components;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(borrowbook::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->borrowbooklabel = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbbookid = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->id = (gcnew System::Windows::Forms::Label());
			this->tbbranchid = (gcnew System::Windows::Forms::TextBox());
			this->llreturn = (gcnew System::Windows::Forms::LinkLabel());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->contextMenuStrip2 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->contextMenuStrip3 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
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
			this->borrowbooklabel->Location = System::Drawing::Point(397, 34);
			this->borrowbooklabel->Name = L"borrowbooklabel";
			this->borrowbooklabel->Size = System::Drawing::Size(94, 36);
			this->borrowbooklabel->TabIndex = 1;
			this->borrowbooklabel->Text = L"label2";
			this->borrowbooklabel->Click += gcnew System::EventHandler(this, &borrowbook::borrowbooklabel_Click);
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
			this->label3->Location = System::Drawing::Point(92, 98);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(110, 34);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Book Id";
			this->label3->Click += gcnew System::EventHandler(this, &borrowbook::label3_Click);
			// 
			// tbbookid
			// 
			this->tbbookid->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbbookid->Location = System::Drawing::Point(310, 98);
			this->tbbookid->Name = L"tbbookid";
			this->tbbookid->Size = System::Drawing::Size(453, 40);
			this->tbbookid->TabIndex = 9;
			this->tbbookid->TextChanged += gcnew System::EventHandler(this, &borrowbook::tbbookid_TextChanged);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(310, 371);
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
			this->button2->Location = System::Drawing::Point(494, 371);
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
			this->id->Location = System::Drawing::Point(92, 172);
			this->id->Name = L"id";
			this->id->Size = System::Drawing::Size(138, 34);
			this->id->TabIndex = 13;
			this->id->Text = L"Branch_id";
			this->id->Click += gcnew System::EventHandler(this, &borrowbook::label5_Click);
			// 
			// tbbranchid
			// 
			this->tbbranchid->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbbranchid->Location = System::Drawing::Point(310, 166);
			this->tbbranchid->Name = L"tbbranchid";
			this->tbbranchid->Size = System::Drawing::Size(453, 40);
			this->tbbranchid->TabIndex = 15;
			this->tbbranchid->TextChanged += gcnew System::EventHandler(this, &borrowbook::tbbranchid_TextChanged);
			// 
			// llreturn
			// 
			this->llreturn->AutoSize = true;
			this->llreturn->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->llreturn->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->llreturn->LinkColor = System::Drawing::Color::Black;
			this->llreturn->Location = System::Drawing::Point(694, 396);
			this->llreturn->Name = L"llreturn";
			this->llreturn->Size = System::Drawing::Size(69, 24);
			this->llreturn->TabIndex = 17;
			this->llreturn->TabStop = true;
			this->llreturn->Text = L"Reutrn";
			this->llreturn->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &borrowbook::llreturn_LinkClicked);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// contextMenuStrip2
			// 
			this->contextMenuStrip2->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip2->Name = L"contextMenuStrip2";
			this->contextMenuStrip2->Size = System::Drawing::Size(61, 4);
			// 
			// contextMenuStrip3
			// 
			this->contextMenuStrip3->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip3->Name = L"contextMenuStrip3";
			this->contextMenuStrip3->Size = System::Drawing::Size(61, 4);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->Location = System::Drawing::Point(310, 239);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(460, 40);
			this->dateTimePicker1->TabIndex = 18;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(92, 239);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(164, 34);
			this->label4->TabIndex = 19;
			this->label4->Text = L"borrow date";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(98, 313);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(161, 34);
			this->label5->TabIndex = 20;
			this->label5->Text = L"Return date";
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker2->Location = System::Drawing::Point(310, 313);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(460, 40);
			this->dateTimePicker2->TabIndex = 21;
			// 
			// borrowbook
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(940, 597);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->llreturn);
			this->Controls->Add(this->tbbranchid);
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
	

		try {
			// Get the borrow date and return date from the DateTimePicker controls
			DateTime borrow_datee = dateTimePicker1->Value;
			DateTime return_datee = dateTimePicker2->Value;
			int user_id = userid;
			String^ bookid = tbbookid->Text;
			int boookid;
			String^ availabilityyResult;

			// Convert book ID to integer
			if (!Int32::TryParse(bookid, boookid)) {
				MessageBox::Show("Please enter a valid book ID.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return; // Exit the function or return an error code
			}

			String^ branchid = tbbranchid->Text;
			int branchhid;

			// Convert branch ID to integer
			if (!Int32::TryParse(branchid, branchhid)) {
				MessageBox::Show("Please enter a valid branch ID.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return; // Exit the function or return an error code
			}

			// Define the connection string
			String^ connString = "Data Source=DESKTOP-U852T64;Initial Catalog=databaseproject;Integrated Security=True;Encrypt=False";

			// Create a SqlConnection
			SqlConnection^ sqlconn = gcnew SqlConnection(connString);
			sqlconn->Open();

			// Define the SQL query to execute the stored procedure
			String^ sqlQuery = "EXEC BorrowBookProcedure @book_id, @user_id, @branch_id, @borrow_date, @return_date, @Availability OUTPUT;";
			SqlCommand^ command = gcnew SqlCommand(sqlQuery, sqlconn);

			// Add parameters
			command->Parameters->AddWithValue("@book_id", boookid);
			command->Parameters->AddWithValue("@user_id", user_id);
			command->Parameters->AddWithValue("@branch_id", branchhid);

			// Add borrow and return dates as parameters
			command->Parameters->AddWithValue("@borrow_date", borrow_datee);
			command->Parameters->AddWithValue("@return_date", return_datee);

			// Define a parameter to capture the output availability
			SqlParameter^ availabilityParam = gcnew SqlParameter("@Availability", SqlDbType::VarChar, 50);
			availabilityParam->Direction = ParameterDirection::Output;
			command->Parameters->Add(availabilityParam);

			// Execute the command
			command->ExecuteNonQuery();

			// Get the output value of availability from the parameter
			availabilityyResult = safe_cast<String^>(availabilityParam->Value);

			// Create a new borrowprocess object and assign values
			borrowbookk = gcnew borrowprocess;
			borrowbookk->bookid = boookid;
			borrowbookk->branch_id = branchhid;
			borrowbookk->user_id = user_id;
			borrowbookk->borrow_date = borrow_datee.ToString("yyyy-MM-dd"); // Convert to desired format
			borrowbookk->return_date = return_datee.ToString("yyyy-MM-dd"); // Convert to desired format

			// Set borrowbookk->availability based on the availabilityResult
			if (availabilityyResult == "available") {
				borrowbookk->availability = "available";
			}
			else {
				borrowbookk->availability = "not available";
			}

		}
		catch (SqlException^ ex) {
			// Handle SQL exceptions
			MessageBox::Show("SQL Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		catch (Exception^ ex) {
			// Handle any other exceptions
			MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}


	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	public:bool switch_to_dashboard = false;
	private: System::Void llreturn_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->switch_to_dashboard = true;
		this->Close();

	}
	private: System::Void tbbookid_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void borrowbooklabel_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void tbbranchid_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
	
};
}
