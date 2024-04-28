#pragma once

namespace databaseproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient; // Add this for SqlConnection, SqlCommand, SqlDataAdapter


	/// <summary>
	/// Summary for showallbooks
	/// </summary>
	public ref class showallbooks : public System::Windows::Forms::Form
	{
	public:
		showallbooks(void)
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
		~showallbooks()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbbookname;
	private: System::Windows::Forms::Button^ button1;
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
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbbookname = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->Location = System::Drawing::Point(790, 709);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(57, 22);
			this->linkLabel1->TabIndex = 0;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"return";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &showallbooks::linkLabel1_LinkClicked);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(50, 143);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 26;
			this->dataGridView1->Size = System::Drawing::Size(797, 549);
			this->dataGridView1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(287, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(250, 28);
			this->label1->TabIndex = 2;
			this->label1->Text = L"All Books In Our Library";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(38, 70);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(260, 24);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Enter Book Name To Search";
			// 
			// tbbookname
			// 
			this->tbbookname->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbbookname->Location = System::Drawing::Point(338, 69);
			this->tbbookname->Name = L"tbbookname";
			this->tbbookname->Size = System::Drawing::Size(378, 32);
			this->tbbookname->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(758, 77);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"ok";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &showallbooks::button1_Click);
			// 
			// showallbooks
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(892, 740);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tbbookname);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->linkLabel1);
			this->Name = L"showallbooks";
			this->Text = L"showallbooks";
			this->Load += gcnew System::EventHandler(this, &showallbooks::showallbooks_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:bool switchtodashboard = false;
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->switchtodashboard = true;
		this->Close();
	}
	private: System::Void showallbooks_Load(System::Object^ sender, System::EventArgs^ e) {
		String^ connString = "Data Source=DESKTOP-U852T64;Initial Catalog=databaseproject;Integrated Security=True;Encrypt=False";
		SqlConnection^ sqlconn = gcnew SqlConnection(connString);
		SqlCommand^ command = gcnew SqlCommand("SELECT * FROM book", sqlconn);

		try {
			// Open the connection
			sqlconn->Open();


			// Create a DataAdapter to fetch data
			SqlDataAdapter^ adapter = gcnew SqlDataAdapter();
			adapter->SelectCommand = command;

			// Create a DataTable to hold the data
			DataTable^ table = gcnew DataTable();

			// Fill the DataTable with data from the database
			adapter->Fill(table);

			// Bind the DataTable to the DataGridView to display the data
			dataGridView1->DataSource = table;
			dataGridView1->ReadOnly = true;
			dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			dataGridView1->BackgroundColor = System::Drawing::Color::White;
			dataGridView1->ForeColor = System::Drawing::Color::Black;
			dataGridView1->DefaultCellStyle->Font = gcnew System::Drawing::Font("Arial", 10);
			dataGridView1->RowHeadersVisible = false;
			dataGridView1->ColumnHeadersDefaultCellStyle->BackColor = System::Drawing::Color::SteelBlue;
			dataGridView1->ColumnHeadersDefaultCellStyle->ForeColor = System::Drawing::Color::White;
			dataGridView1->ColumnHeadersDefaultCellStyle->Font = gcnew System::Drawing::Font("Arial", 10, FontStyle::Bold);
			
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message, "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {
			// Close the connection
			if (sqlconn->State == ConnectionState::Open) {
				sqlconn->Close();
			}
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ searchTerm = tbbookname->Text;
		String^ connString = "Data Source=DESKTOP-U852T64;Initial Catalog=databaseproject;Integrated Security=True;Encrypt=False";
		SqlConnection^ sqlconn = gcnew SqlConnection(connString);
		SqlCommand^ command = gcnew SqlCommand("SELECT * FROM book WHERE book_name LIKE @searchTerm", sqlconn);
		command->Parameters->AddWithValue("@searchTerm", "%" + searchTerm + "%");

		try {
			sqlconn->Open();

			SqlDataAdapter^ adapter = gcnew SqlDataAdapter();
			adapter->SelectCommand = command;

			DataTable^ table = gcnew DataTable();
			adapter->Fill(table);

			// Bind the DataTable to the DataGridView to display the filtered data
			dataGridView1->DataSource = table;
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message, "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {
			if (sqlconn->State == ConnectionState::Open) {
				sqlconn->Close();
			}
		}


	}
};
	

}
