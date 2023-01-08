#include "account.h"
#include <iostream>

//no args constructor
Account::Account() :name{"N/A"}, balance{0.00}
{

}

Account::Account(std::string accountName) :name{accountName}, balance{0.00}
{

}
Account::~Account()
{}

void Account::deposit(double amount)
{
    if (amount > 0)
    {
        this->balance += amount;
    }
}

void Account::withdraw(double amount)
{
    if (balance > 0 && amount - balance > 0)
    {
        this->balance -= amount;
    }

    else
    {
        std::cout << "Withdrawal failed due to insufficient balance\n";
    }
}

void Account::displayInfo()
{
    std::cout <<"Account name = "<< name << "\nbalance = " << balance;
}
