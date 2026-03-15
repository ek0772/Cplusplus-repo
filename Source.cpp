/** 
*@file Source.cpp
*@author ek0772
*@date 3/15/2026
*@brief A basic banking system, with focus on class and object implimentation.
*/
#include<iostream>
#include "Account.h"

void printMenu();
int getMenuOption();
bool isAmountValid(double amount);
bool isMenuChoiceValid(int choice);
void printInvalidMenuChoiceMessage();

const int DEPOSIT = 1;
const int WITHDRAWAL = 2;
const int CLOSE_OF_BUSINESS = 3;
const int QUIT = 4;

int main()
{
    // just use dummy data for now for the customer and the account
    // we care about interacting with account object for this lab
    Customer customer("0123456789", "customer@cscc.edu");
    Account account("5423678409", 100.00, customer);
    account.printAccountInfo();

    int menuChoice = getMenuOption();
    while (menuChoice != QUIT)
    {
        switch (menuChoice)
        {
        case DEPOSIT:
            /* 
            TODO: Gather the deposit amount input and validate it is > 0.
            Add the code that interacts with the account object to add
            a deposit to the account.
            */
            cin >> amount;
            if (amount > 0) {
                deposits.push_back(amount);
                return true;
            }
            else {
                return false;
            }
            break;
        case WITHDRAWAL:
            /*
            TODO: Gather the withdrawal amount input and validate it is > 0.
            Add the code that interacts with the account object to add
            a widthdrawal to the account.
            */
           cin >> amount;
            if (amount > 0) {
                withdrawals.push_back(amount);
                return true;
            }
            else {
                return false;
            }
            break;
        
        case CLOSE_OF_BUSINESS:
            /*
            TODO: Add the code that interacts with the account object to perform
            the close of business account balancing.
            */
                double totalDeposits = accumulate(deposits.begin(), deposits.end(), 0.0);
                double totalWithdrawals = accumulate(withdrawals.begin(), withdrawals.end(), 0.0);

                double previousBalance = balance;
                double newBalance = previousBalance + totalDeposits - totalWithdrawals;

                printSummary(previousBalance, totalDeposits, totalWithdrawals, newBalance);

                balance = newBalance;

                deposits.clear();
                withdrawals.clear();
            
            break;
        }

        menuChoice = getMenuOption();
    }
}

void printMenu()
{
    cout << "\nCSCC Bank and Trust" << endl;
    cout << "Select an option:" << endl;
    cout << DEPOSIT << ". Make a deposit" << endl;
    cout << WITHDRAWAL << ". Make a withdrawal" << endl;
    cout << CLOSE_OF_BUSINESS << ". Close of Business" << endl;
    cout << QUIT << ". Quit" << endl;
}

int getMenuOption()
{
    int choice = 0;

    do
    {
        printMenu();
        cin >> choice;

        if (!isMenuChoiceValid(choice))
        {
            printInvalidMenuChoiceMessage();
        }
    } while (!isMenuChoiceValid(choice));

    return choice;
}

bool isMenuChoiceValid(int choice)
{
    return choice >= DEPOSIT and choice <= QUIT;
}

bool isAmountValid(double amount)
{
    return amount > 0;
}

void printInvalidMenuChoiceMessage()
{
    cout << "Invalid option selected. Please try again." << endl;
}