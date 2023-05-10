#include <iostream>

using namespace std;

class Account
{
private:
    std::string name{"account"};
    double balance{0.0};

public:
    void printInfo();

    Account();
    Account(string name);
    Account(string name, double balance);
};

void Account::printInfo()
{
    cout << "name: " << name << ", balance: " << balance << endl;
}

Account::Account() : Account{"none", 0} {}

Account::Account(string name) : Account{name, 0} {}

Account::Account(string name, double balance) : name{name}, balance{balance} {}

int main(int argc, char const *argv[])
{
    /* code */
    Account alice_account;
    alice_account.printInfo();

    Account jobs_account{"Jobs's account"};
    jobs_account.printInfo();

    Account bill_account{"Bill's account", 1000.0};
    bill_account.printInfo();

    return 0;
}
