#include <iostream>
#include <vector>

using namespace std;

class Account
{
    // 属性
    string name {"None"};
    double balance {0.0};

    // 方法
    bool deposit(double amount);  // 存款
    bool withdraw(double amount);  // 取款
};


int main(int argc, char const *argv[])
{
    /* code */
    Account jobs_account;
    Account alice_account;

    Account accounts[] {jobs_account, alice_account};

    vector<Account> accounts_vec {jobs_account};
    accounts_vec.push_back(alice_account);

    Account *p_account = new Account();
    delete p_account;

    return 0;
}
