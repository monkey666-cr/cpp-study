#include <iostream>

using namespace std;

class Account
{
private:
    string name{"None"};
    double balance{0.0};

public:
    // 设置余额
    void set_balance(double amount) { balance = amount; };

    // 获取余额
    double get_balance() { return balance; };

    // 设置名称
    void set_name(string name);

    // 获取名称
    string get_name();

    // 存款
    bool deposit(double amount);

    // 取款
    bool withdraw(double amount);
};

void Account::set_name(string name)
{
    this->name = name;
}

string Account::get_name()
{
    return name;
}

bool Account::deposit(double amount)
{
    balance += amount;
    cout << name << "刚存入" << amount << "元, 现在余额为" << balance << "元" << endl;
    return true;
}

bool Account::withdraw(double amount)
{
    if (balance >= amount)
    {
        balance -= amount;
        cout << name << "刚取出" << amount << "元, 现在余额为" << balance << "元" << endl;
        return true;
    }
    else
    {
        cout << name << "余额不足, 取款失败" << endl;
        return false;
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    Account alice_account;
    alice_account.set_name("Alice's account");
    alice_account.set_balance(1000.0);

    cout << alice_account.get_name() << "的余额为" << alice_account.get_balance() << "元" << endl;

    alice_account.deposit(200.0);
    alice_account.withdraw(500.0);
    alice_account.withdraw(1500);

    return 0;
}
