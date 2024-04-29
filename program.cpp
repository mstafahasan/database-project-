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
#include"bill.h"
#include"billwindow.h"
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
    bill^ billl = nullptr;
    bool exitProgram = false; // Flag to exit the program

    while (!exitProgram) { // Loop until exitProgram is true
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

    while (user != nullptr && !exitProgram) { // Loop until user is null or exitProgram is true

        databaseproject::MainForm mainform(user);
        Application::Run(% mainform);
        if (mainform.switchtologinn)
        {
            databaseproject::loginform loginForm;
            loginForm.ShowDialog();
            user = loginForm.user;

            if (user != nullptr)
                continue;
            else
                break;
           
        }
        if (mainform.switch_to_borrow_label) {
            databaseproject::borrowbook BorrowBook(user);
            Application::Run(% BorrowBook);

            if (BorrowBook.switch_to_dashboard) {
                continue; // Go back to MainForm
            }
            else {
                borrowbookk = BorrowBook.borrowbookk;
            }

            if ((borrowbookk != nullptr) && (borrowbookk->availability == "available")) {
                MessageBox::Show("Book availability: " + borrowbookk->availability, "Book Availability", MessageBoxButtons::OK, MessageBoxIcon::Information);
                MessageBox::Show("Successfully borrow book process ", "program.cpp", MessageBoxButtons::OK);
            }
            else {
                MessageBox::Show("Book availability: " + borrowbookk->availability, "Book Availability", MessageBoxButtons::OK, MessageBoxIcon::Information);
                MessageBox::Show("Borrow book failed", "program.cpp", MessageBoxButtons::OK);
            }
        }

        if (mainform.switch_to_show_all_books) {
            databaseproject::showallbooks ShowAllBooks;
            Application::Run(% ShowAllBooks);
            if (ShowAllBooks.switchtodashboard) {
                continue; // Go back to MainForm
            }
        }

        if (mainform.switchtoreturnbook) {
            databaseproject::returnbook ReturnBook(user);
            Application::Run(% ReturnBook);
            if (ReturnBook.backtodashboard) {
                continue; // Go back to MainForm
            }
            else {
                returnbookk = ReturnBook.returnbookk;
            }

            if ((returnbookk != nullptr) && (returnbookk->availability == "not available") && returnbookk->user_id == user->id) {
                MessageBox::Show("Book availability: " + returnbookk->availability, "Book Availability", MessageBoxButtons::OK, MessageBoxIcon::Information);
                MessageBox::Show("Successfully return book process ", "program.cpp", MessageBoxButtons::OK);
            }
            else {
                MessageBox::Show("Book availability: " + returnbookk->availability, "Book Availability", MessageBoxButtons::OK, MessageBoxIcon::Information);
                MessageBox::Show("Return book failed, you didn't borrow that book", "program.cpp", MessageBoxButtons::OK);
            }
        }

        if (mainform.switch_to_show_borrowed_books) {
            databaseproject::show_borrow_books borr_books(user->id);
            Application::Run(% borr_books);
            if (borr_books.switchtodashboard) {
                continue; // Go back to MainForm
            }
        }

        if (mainform.switchfromdashboardtobills) {
            databaseproject::billwindow BillWindow(user);
            Application::Run(% BillWindow);
            if (BillWindow.switchfromBilltodashboard) {
                continue; // Go back to MainForm
            }
        }

        exitProgram = true; // Exit the program if none of the above conditions are met
    }

    if (Librarian != nullptr) {
        MessageBox::Show("Successfully authenticated as librarian", "program.cpp", MessageBoxButtons::OK);
    }
}







