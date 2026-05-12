#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>
#include <vector>
#include "Customer.h"
using namespace std;


/*
*Update the acocunt class.
*/
class Account {
private:

protected:
    string accountNumber;
    double balance;
    Customer owner;

    vector<double> deposits;
    vector<double> withdrawals;

    void printSummary(double previousBalance, double totalDeposits, double totalWithdrawals, double newBalance) const;

public:
    Account();
    Account(const string& accNum, double initialBalance, const Customer& customer);

    bool deposit(double amount);
    bool withdraw(double amount);
    
    /* Make virtual*/
    virtual void closeOfBusiness();

    double getBalance() const;
    string getAccountNumber() const;
    Customer getCustomer() const;

    /* Make virtual*/
    virtual void printAccountInfo() const;
    void printTransactions() const;
};



/*
*Create a savings account class.
*/
class SavingsAccount : public Account {
    private: 
        double dailyInterestRate;
    public:
        SavingsAccount(const string& accNum, double initialBalance, const Customer& customer, double rate);
        /* override */
        void closeOfBusiness() override;
        void printAccountInfo() const override;
        
};


#endif
