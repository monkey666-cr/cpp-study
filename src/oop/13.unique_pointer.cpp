#include <iostream>
#include <vector>
#include <memory>

using namespace std;

class Account
{
private:
    string name{"account"};
    double balance{0.0};

public:
    Account(string name = "none", double balance = 0.0);
    ~Account();

    bool deposit(double amount);
    void printInfo() const;
    double getBalance();
};

Account::Account(string name, double balance)
    : name{name}, balance{balance}
{
    cout << "构造函数, name: " << name << endl;
}

Account::~Account()
{
    cout << "析构函数, name: " << name << endl;
}

bool Account::deposit(double amount)
{
    balance += amount;
    return true;
}

void Account::printInfo() const
{
    cout << "name: " << name << ", balance: " << balance << endl;
}

double Account::getBalance()
{
    return balance;
}

int main(int argc, char const *argv[])
{
    /* code */
    // Account alice_account{"alice", 1000.0};

    // Account *bob_account = new Account{"Bob", 2000.0};
    // delete bob_account;

    // unique_ptr<Account> p1{new Account{"jams", 1000.0}};

    // auto p2 = make_unique<Account>("mike", 3000.0);
    // unique_ptr<Account> p3;

    // p3 = p2  // 报错, 因为unique_ptr不允许拷贝, 只能移动
    // p3 = move(p2); // p2会被置为null

    // if (!p2)
    // {
    //     cout << "p2 is null" << endl;
    // }

    // auto p4 = make_unique<Account>("Helen", 3000.0);
    // p4->deposit(1000.0);
    // p4->printInfo(); // 调用成员函数

    vector<unique_ptr<Account>> accounts;
    accounts.push_back(make_unique<Account>("alice", 1000.0));
    accounts.push_back(make_unique<Account>("bob", 500.0));
    accounts.push_back(make_unique<Account>("mike", 2000.0));

    for (const auto &acc : accounts)
    {
        cout << acc->getBalance() << endl;
    }

    return 0;
}
