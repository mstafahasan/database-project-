#pragma once
#include"bill.h"
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
	/// Summary for billwindow
	/// </summary>
	public ref class billwindow : public System::Windows::Forms::Form
	{ public:
		int userid;
	public:
		billwindow(User^ user )
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->userid = user->id;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~billwindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::DataGridView^ billgridview;

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
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->billgridview = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->billgridview))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(259, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(301, 52);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Your Bills Here";
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->LinkColor = System::Drawing::Color::Black;
			this->linkLabel1->Location = System::Drawing::Point(389, 630);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(105, 36);
			this->linkLabel1->TabIndex = 1;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Return";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &billwindow::linkLabel1_LinkClicked);
			// 
			// billgridview
			// 
			this->billgridview->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->billgridview->Location = System::Drawing::Point(12, 138);
			this->billgridview->Name = L"billgridview";
			this->billgridview->RowHeadersWidth = 51;
			this->billgridview->RowTemplate->Height = 26;
			this->billgridview->Size = System::Drawing::Size(832, 457);
			this->billgridview->TabIndex = 2;
			// 
			// billwindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(870, 702);
			this->Controls->Add(this->billgridview);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->label1);
			this->Name = L"billwindow";
			this->Text = L"billwindow";
			this->Load += gcnew System::EventHandler(this, &billwindow::billwindow_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->billgridview))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:bool switchfromBilltodashboard = false;
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->switchfromBilltodashboard = true;
		this->Close();
	}
	private: System::Void billwindow_Load(System::Object^ sender, System::EventArgs^ e) {
		try {
			// Open the connection
			String^ connString = "Data Source=DESKTOP-U852T64;Initial Catalog=databaseproject;Integrated Security=True;Encrypt=False";
			SqlConnection^ conn = gcnew SqlConnection(connString);
			conn->Open();

			// Define your SQL query to retrieve bills
			String^ query = "EXEC dbo.CalculateAndUpdateBill @user_id = @userid; SELECT * FROM Bill WHERE user_id = @userid;";

			// Create a SqlCommand with parameters
			SqlCommand^ cmd = gcnew SqlCommand(query, conn);
			cmd->Parameters->AddWithValue("@userid", userid);

			// Create a DataTable to hold the data
			DataTable^ table = gcnew DataTable();

			// Fill the DataTable with the results of the query
			SqlDataAdapter^ adapter = gcnew SqlDataAdapter(cmd);
			adapter->Fill(table);

			// Bind the DataTable to the DataGridView control
			billgridview->DataSource = table;

			// Set DataGridView properties for appearance
			billgridview->ReadOnly = true;
			billgridview->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
			billgridview->RowHeadersVisible = false;
			billgridview->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			billgridview->BackgroundColor = System::Drawing::Color::White;
			billgridview->ForeColor = System::Drawing::Color::Black;
			billgridview->DefaultCellStyle->Font = gcnew System::Drawing::Font("Arial", 10);
			billgridview->ColumnHeadersDefaultCellStyle->BackColor = System::Drawing::Color::SteelBlue;
			billgridview->ColumnHeadersDefaultCellStyle->ForeColor = System::Drawing::Color::White;
			billgridview->ColumnHeadersDefaultCellStyle->Font = gcnew System::Drawing::Font("Arial", 10, FontStyle::Bold);
		}
		catch (SqlException^ ex) {
			// Handle any SQL exceptions
			MessageBox::Show("SQL Error: " + ex->Message, "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		

	}
	};
}
