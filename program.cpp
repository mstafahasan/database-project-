#include "loginform.h"
#include"RegisterForm.h"
#include"MainForm.h"
using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    User^ user = nullptr;
    
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
            user = loginForm.user;
            break;
        }
    }


    if (user != nullptr) {

        databaseproject::MainForm mainform(user);
        Application::Run(% mainform);

    }
    else {
        MessageBox::Show("Authentication Cancelled", "program.cpp", MessageBoxButtons::OK);
    }
}
