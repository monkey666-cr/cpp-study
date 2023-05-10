#include <iostream>
#include <string>

using namespace std;

class Account
{
private:
    std::string name{"account"};
    double balance{0.0};

public:
    void setName(string name) { this->name = name; };

    // 构造函数
    Account()
    {
        cout << "没有参数的构造函数被调用" << endl;
    };

    Account(std::string name)
    {
        cout << "带string name参数的构造函数被调用" << endl;
    };

    Account(double balance)
    {
        cout << "带double balance参数的构造函数被调用" << endl;
    };

    Account(string name, double balance)
    {
        cout << "带string name和double balance参数的构造函数被调用" << endl;
    };

    // 析构函数
    ~Account()
    {
        cout << name << " 的析构函数被调用" << endl;
    };
};

int main(int argc, char const *argv[])
{
    {
        Account alice_account;
        alice_account.setName("Alice's account");
    }
    {
        Account jobs_account;
        jobs_account.setName("Jobs's account");

        Account bill_account("Bill's account");
        bill_account.setName("Bill's account");

        Account steve_account(1000.0);
        steve_account.setName("Steve's account");
    }

    Account *mark_account = new Account("Mark's account", 1000.0);
    mark_account->setName("Mark's account");

    return 0;
}
