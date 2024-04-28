#include "loginform.h"
#include"RegisterForm.h"
#include"MainForm.h"
#include"LoginLibrarianForm.h"
#include"borrowbook.h"
#include"Book.h"
#include"borrowprocess.h"
#include"showallbooks.h"
using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    User^ user = nullptr;
    User^ usertoborrow = nullptr;
    librarian^ Librarian = nullptr;
    Book^ book = nullptr;
    borrowprocess^ borrowbookk = nullptr;
    

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
                if (loginlibrarianForm.switchtologinasmember)
                {
                    user = loginForm.user;
                    continue;

                }
                else {
                    Librarian = loginlibrarianForm.Librarian;
                    break;
                }
            }
            else {
                user = loginForm.user;
                break;
            }
        }
    }

    while (true) {
        if (user != nullptr) {

            databaseproject::MainForm mainform(user);
            Application::Run(% mainform);
            if (mainform.switch_to_borrow_label) {

                databaseproject::borrowbook BorrowBook(user);
                Application::Run(% BorrowBook);

                if (BorrowBook.switch_to_dashboard)
                {
                    BorrowBook.Close();
                    continue;
                }

                else {
                    borrowbookk = BorrowBook.borrowbookk;
                }

                if ((borrowbookk != nullptr)&&( borrowbookk->availability=="available") ){
                    MessageBox::Show("Book availability: " + borrowbookk->availability, "Book Availability", MessageBoxButtons::OK, MessageBoxIcon::Information);
                    MessageBox::Show("seccefully borrow book process ", "program.cpp", MessageBoxButtons::OK);
                    break;
                }


                else {
                    MessageBox::Show("Book availability: " + borrowbookk->availability, "Book Availability", MessageBoxButtons::OK, MessageBoxIcon::Information);

                    MessageBox::Show("borrow book failed", "program.cpp", MessageBoxButtons::OK);
                    break;
                }
            }
            if(mainform.switch_to_show_all_books){
                databaseproject::showallbooks ShowAllBooks;
                Application::Run(% ShowAllBooks);
                if (ShowAllBooks.switchtodashboard)
                {
                    ShowAllBooks.Close();
                    continue;
                }
            }
        }

        else {
            MessageBox::Show("Authentication Cancelled", "program.cpp", MessageBoxButtons::OK);
            break;
        }
        break;

    }
    if (Librarian != nullptr) {
        MessageBox::Show("seccefully authentication of librarian", "program.cpp", MessageBoxButtons::OK);

    }



}






