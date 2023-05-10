#include <iostream>

using namespace std;

class Account
{
private:
    string name{"account"};
    double balance{0.0};

public:
    string getName() { return name; }

    double getBalance() { return balance; }

    Account(string name = "none", double balance = 0.0);

    ~Account();

    // 拷贝构造函数
    Account(const Account &source);
};

Account::Account(string name, double balance) : name{name}, balance{balance}
{
    cout << "2个参数的构造函数被调用, name: " << name << endl;
}

Account::~Account()
{
    cout << "析构函数被调用, name: " << name << endl;
}

Account::Account(const Account &source)
    : name{source.name}, balance{source.balance}
{
    cout << "拷贝构造函数被调用, 是" << source.name << "的拷贝" << endl;
}

void printAccountInfo(Account acc)
{
    cout << acc.getName() << "的余额是: " << acc.getBalance() << endl;
}

int main(int argc, char const *argv[])
{
    /* code */
    // 1, 值传递的方式给函数传递参数
    // Account alice_account;
    // printAccountInfo(alice_account);

    // 2, 基于已存在的对象创建新的对象
    Account alice_account{"Alice's account", 1000.0};
    Account new_account{alice_account};

    return 0;
}
