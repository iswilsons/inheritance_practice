#include "currentAccount.h"
#include <iostream>


currentAccount::currentAccount() :name{"N/A"}, balance{0.00}
{
    
}

currentAccount::currentAccount(std::string name) 
:name{name}, balance{0.00}, accountNumber{"78470273085"}
{

}

currentAccount::~currentAccount()
{
}
void currentAccount::deposit(double amount)
{
    if (amount > 0)
    balance += amount;
}
void currentAccount::printInfo()
{
    std::cout << "Account name = " << name << "\nAcc. No. = " << accountNumber
    << "\nbalance = " << balance << std::endl;
}