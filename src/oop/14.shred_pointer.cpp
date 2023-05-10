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
    Account(string name, double balance);
    ~Account();

    void set_name(string name);

    void print() const;
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

void Account::set_name(string name)
{
    this->name = name;
}

void Account::print() const
{
    cout << "name: " << name << ", balance" << balance << endl;
}

void test_func(shared_ptr<Account> p)
{
    cout << "p.use_count(): " << p.use_count() << endl;
}

int main(int argc, char const *argv[])
{
    /* code */
    // cout << "==========================" << endl;
    // shared_ptr<int> p1{new int{1000}};
    // cout << "p1.use_count(): " << p1.use_count() << endl;

    // shared_ptr<int> p2{p1};
    // cout << "p1.use_count(): " << p1.use_count() << endl;

    // p1.reset();
    // cout << "p1.use_count(): " << p1.use_count() << endl;
    // cout << "p2.use_count(): " << p2.use_count() << endl;

    // cout << "==========================" << endl;
    // shared_ptr<Account> p1 = make_shared<Account>("Alice", 1000.0);
    // test_func(p1);
    // cout << "p1.use_count(): " << p1.use_count() << endl;

    // {
    //     shared_ptr<Account> p2 = p1;
    //     cout << "p2.use_count(): " << p2.use_count() << endl;

    //     {
    //         shared_ptr<Account> p3 = p1;
    //         cout << "p3.use_count(): " << p3.use_count() << endl;

    //         p1.reset();
    //     }

    //     cout << "p1.use_count(): " << p1.use_count() << endl;
    //     cout << "p2.use_count(): " << p2.use_count() << endl;
    // }

    cout << "====================" << endl;
    shared_ptr<Account> p1 = make_shared<Account>("Alice", 1000.0);
    shared_ptr<Account> p2 = make_shared<Account>("Bob", 2000.0);
    shared_ptr<Account> p3 = make_shared<Account>("Charlie", 3000.0);

    vector<shared_ptr<Account>> accounts;

    accounts.push_back(p1);
    accounts.push_back(p2);
    accounts.push_back(p3);

    for (const auto &p : accounts)
    {
        p->print();
        cout << "p.use_count(): " << p.use_count() << endl;
    }

    accounts[0]->set_name("hello");

    p1->print();

    return 0;
}
