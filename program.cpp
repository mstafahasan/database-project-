#include "loginform.h"
#include"RegisterForm.h"
#include"MainForm.h"
#include"LoginLibrarianForm.h"
using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    User^ user = nullptr;
    librarian^ Librarian = nullptr;


    
    while (true) {
        databaseproject::loginform loginForm;
        loginForm.ShowDialog();

        if (loginForm.switchToRegister) {
            //show the register form
            databaseproject::RegisterForm registerForm;
            registerForm.ShowDialog();
            if (registerForm.switchToLogin) {
                continue;
            }
            else {
                user = registerForm.user;
                break;
            }
        }
        else {
            if (loginForm.switchToLoginlibririan) {
                databaseproject::LoginLibrarianForm loginlibrarianForm;
                loginlibrarianForm.ShowDialog();
                Librarian = loginlibrarianForm.Librarian;
                break;
            }
            else {
                user = loginForm.user;
                break;
            }
        }
    }


    if (user != nullptr) {

        databaseproject::MainForm mainform(user);
        Application::Run(% mainform);

    }
    if (Librarian != nullptr) {
        MessageBox::Show("seccefully authentication of librarian", "program.cpp", MessageBoxButtons::OK);

    }


    else {
        MessageBox::Show("Authentication Cancelled", "program.cpp", MessageBoxButtons::OK);
    }
}
