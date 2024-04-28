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
	/// Summary for returnbook
	/// </summary>
	public ref class returnbook : public System::Windows::Forms::Form
	{
	public:
		returnbook(void)
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
		~returnbook()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->SuspendLayout();
			// 
			// returnbook
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 253);
			this->Name = L"returnbook";
			this->Text = L"returnbook";
			this->Load += gcnew System::EventHandler(this, &returnbook::returnbook_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void returnbook_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
