#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>

class Account
{
    private:
        std::string name;
        double balance;

    public:
        Account();
        Account(std::string accountName);
        ~Account();
        void deposit(double amount);
        void withdraw(double amount);
        void displayInfo();


};

#endif