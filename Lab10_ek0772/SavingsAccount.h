#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include "Account.h"

class SavingsAccount : public Account
{
protected:
    float interest;
public:
    SavingsAccount();
    SavingsAccount(const string& accNum, double initialBalance, float interest, const Customer& customer);
    void closeOfBusiness();
    void printAccountInfo() const;
    //This is the save function for Lab10.
    void Save();
};

#endif


