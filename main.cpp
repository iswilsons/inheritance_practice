#include "account.h"
#include <iostream>

int main()
{
    Account account1("kojo");
    account1.deposit(40.50);
    account1.withdraw(59);
    account1.displayInfo();

    return 0;


}