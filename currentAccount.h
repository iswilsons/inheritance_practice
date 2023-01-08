#ifndef CURRENTACCOUNT_H
#define CURRENTACCOUNT_H
#include "account.h"
#include <string>

class currentAccount: public Account
{   
    private:
        std::string name;
        double balance;
        std::string accountNumber;
    
    public:
        currentAccount();
        currentAccount(std::string name);
        ~currentAccount();
        void deposit(double amount);
        void printInfo();


    
};

#endif

