#include "loginform.h"
#include"RegisterForm.h"
#include"MainForm.h"
#include"LoginLibrarianForm.h"
#include"borrowbook.h"
#include"Book.h"
#include"borrowprocess.h"
#include"showallbooks.h"
#include "returnbook.h"
#include "returnprocess.h"
#include"show_borrow_books.h"
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
    returnprocess^ returnbookk = nullptr;

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
            if (mainform.switchtoreturnbook)
            {
                databaseproject::returnbook ReturnBook(user);
                Application::Run(% ReturnBook);
                if (ReturnBook.backtodashboard) {
                    ReturnBook.Close();
                    continue;
                }
                else {
                    returnbookk = ReturnBook.returnbookk;
                }
                if ((returnbookk != nullptr) && (returnbookk->availability == "not available")&&returnbookk->user_id==user->id) {
                    MessageBox::Show("Book availability: " + returnbookk->availability, "Book Availability", MessageBoxButtons::OK, MessageBoxIcon::Information);
                    MessageBox::Show("seccefully return book process ", "program.cpp", MessageBoxButtons::OK);
                    break;
                }


                else {
                    MessageBox::Show("Book availability: " + returnbookk->availability, "Book Availability", MessageBoxButtons::OK, MessageBoxIcon::Information);

                    MessageBox::Show("return book failed , you didn't borrow that book  ", "program.cpp", MessageBoxButtons::OK);
                    break;
                }

            }
            if (mainform.switch_to_show_borrowed_books) {
                databaseproject::show_borrow_books borr_books(user->id);
                Application::Run(% borr_books);
                if (borr_books.switchtodashboard)
                {
                    borr_books.Close();
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






