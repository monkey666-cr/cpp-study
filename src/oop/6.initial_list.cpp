#include <iostream>

using namespace std;

class Account
{
private:
    std::string name{"account"};
    double balance{0.0};

public:
    void printInfo();

    Account(string name, double balance);
};

void Account::printInfo()
{
    cout << "name: " << name << ", balance: " << balance << endl;
}

Account::Account(string name, double balance)
{
    this->name = name;
    this->balance = balance;
}

int main(int argc, char const *argv[])
{
    /* code */
    Account *mark_account = new Account("Mark's account", 1000.0);
    mark_account->printInfo();
    delete mark_account;

    return 0;
}
