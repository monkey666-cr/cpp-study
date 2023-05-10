#include <iostream>

using namespace std;

class Account
{
private:
    string name{"account"};
    double balance{0.0};
    static int num_account;

public:
    static int get_num_accounts();

    Account(string name, double balance);
    ~Account();
};

int Account::num_account{0};

Account::Account(string name, double balance)
    : name{name}, balance{balance}
{
    num_account++;
}

Account::~Account()
{
    num_account--;
}

int Account::get_num_accounts()
{
    return num_account;
}

int main(int argc, char const *argv[])
{
    /* code */
    cout << Account::get_num_accounts() << endl;
    Account alice_account{"Alice's account", 1000.0};
    cout << alice_account.get_num_accounts() << endl;
    Account bob_account{"Bob's account", 2000.0};
    cout << Account::get_num_accounts() << endl;

    {
        Account test_account{"test", 1000.0};
        cout << Account::get_num_accounts() << endl;
    }

    cout << Account::get_num_accounts() << endl;

    return 0;
}
