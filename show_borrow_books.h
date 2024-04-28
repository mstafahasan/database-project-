#pragma once

namespace databaseproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for show_borrow_books
	/// </summary>
	public ref class show_borrow_books : public System::Windows::Forms::Form
	{
	public:
		int userId;
		show_borrow_books(int userid)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->userId = userid;
			this->Load += gcnew System::EventHandler(this, &show_borrow_books::show_borrow_books_Load);
		}
		

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~show_borrow_books()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::LinkLabel^ lllogin;

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->lllogin = (gcnew System::Windows::Forms::LinkLabel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(298, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(402, 48);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Your Borrowed Books";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(52, 147);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 26;
			this->dataGridView1->Size = System::Drawing::Size(924, 509);
			this->dataGridView1->TabIndex = 1;
			// 
			// lllogin
			// 
			this->lllogin->AutoSize = true;
			this->lllogin->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lllogin->Location = System::Drawing::Point(449, 678);
			this->lllogin->Name = L"lllogin";
			this->lllogin->Size = System::Drawing::Size(91, 34);
			this->lllogin->TabIndex = 2;
			this->lllogin->TabStop = true;
			this->lllogin->Text = L"return";
			this->lllogin->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &show_borrow_books::lllogin_LinkClicked);
			// 
			// show_borrow_books
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1014, 736);
			this->Controls->Add(this->lllogin);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Name = L"show_borrow_books";
			this->Text = L"show_borrow_books";
			this->Load += gcnew System::EventHandler(this, &show_borrow_books::show_borrow_books_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:bool switchtodashboard = false;
	private: System::Void lllogin_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {

		switchtodashboard = true;
		this->Close();
	}
	private: System::Void show_borrow_books_Load(System::Object^ sender, System::EventArgs^ e) {
		String^ connString = "Data Source=DESKTOP-U852T64;Initial Catalog=databaseproject;Integrated Security=True;Encrypt=False";

		// Create a SqlConnection object
		SqlConnection^ conn = gcnew SqlConnection(connString);

		try {
			// Open the connection
			conn->Open();

			// Define your SQL query to retrieve borrowed books
			String^ query = "SELECT book_id,borrow_date,return_date,branch_id FROM dbo.user_borrow_book WHERE user_id =@userid;";

			SqlCommand^ cmd = gcnew SqlCommand(query, conn);
			cmd->Parameters->AddWithValue("@userid", userId);

			// Create a SqlDataAdapter to fill a DataSet with the results
			SqlDataAdapter^ adapter = gcnew SqlDataAdapter(cmd);

			// Create a DataSet to hold the data
			DataSet^ ds = gcnew DataSet();

			// Fill the DataSet with the results of the query
			adapter->Fill(ds, "BorrowedBooks");

			// Bind the DataSet to a DataGridView control
			dataGridView1->DataSource = ds;
			dataGridView1->DataMember = "BorrowedBooks";

			// Make the DataGridView readonly
			dataGridView1->ReadOnly = true;

			// Set DataGridView properties for appearance
			dataGridView1->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
			dataGridView1->RowHeadersVisible = false;
			dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			dataGridView1->BackgroundColor = System::Drawing::Color::White;
			dataGridView1->ForeColor = System::Drawing::Color::Black;
			dataGridView1->DefaultCellStyle->Font = gcnew System::Drawing::Font("Arial", 10);
			dataGridView1->ColumnHeadersDefaultCellStyle->BackColor = System::Drawing::Color::SteelBlue;
			dataGridView1->ColumnHeadersDefaultCellStyle->ForeColor = System::Drawing::Color::White;
			dataGridView1->ColumnHeadersDefaultCellStyle->Font = gcnew System::Drawing::Font("Arial", 10, FontStyle::Bold);
		}
		catch (SqlException^ ex) {
			// Handle any SQL exceptions
			MessageBox::Show("SQL Error: " + ex->Message, "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {
			// Close the connection
			if (conn->State == ConnectionState::Open) {
				conn->Close();
			}
		}
	}
};
}
