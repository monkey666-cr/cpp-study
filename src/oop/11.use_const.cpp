#include <iostream>

using namespace std;

class Account
{
private:
    double balance{0.0};

public:
    string const name{"account"};

    void set_new_name(string new_name) const
    {
        // name = new_name;
    }

    string get_name() const
    {
        return name;
    }

    Account(string name = "none", double balance = 0.0);
    ~Account();
};

Account::Account(string name, double balance)
    : balance{balance}, name{name}
{
    cout << "构造函数" << endl;
}

Account::~Account()
{
    cout << "析构函数" << endl;
}

int main(int argc, char const *argv[])
{
    /* code */
    Account alice_account {"alice", 1000.0};
    // alice_account.name = "bob";
    cout << alice_account.get_name() << endl;

    return 0;
}
