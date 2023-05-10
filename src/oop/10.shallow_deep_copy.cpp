#include <iostream>

using namespace std;

class Account
{
private:
    string name{"account"};
    double *balance{nullptr};

public:
    double get_balance() { return *balance; };
    string get_name() { return name; };

    Account(string name = "none", double balance = 0.0);
    Account(const Account &source);
    ~Account();
};

Account::Account(string name, double balance)
    : name{name}, balance{new double{balance}}
{
    cout << "2个参数的构造函数被调用, name: " << name << endl;
}

Account::Account(const Account &source)
    : Account{source.name, *source.balance}
{
    cout << "拷贝构造函数被调用, 是" << source.name << "的拷贝" << endl;
}

Account::~Account()
{
    if (balance != nullptr)
        delete balance;

    cout << "析构函数被调用, name: " << name << endl;
}

int main(int argc, char const *argv[])
{
    /* code */
    Account alice_account{"Alice", 1000.0};
    Account new_account{alice_account};

    return 0;
}
