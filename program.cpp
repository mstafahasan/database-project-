#include "loginform.h"
using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    databaseproject::loginform loginForm;
    loginForm.ShowDialog();
    User^ user = loginForm.user;

    if (user != nullptr) {
        MessageBox::Show("Successful Authentication Of" +user->name, "program.cpp", MessageBoxButtons::OK);
    }
    else {
        MessageBox::Show("Authentication Cancelled", "program.cpp", MessageBoxButtons::OK);
    }
}
