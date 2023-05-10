#include <iostream>
#include <vector>
#include <string>

using namespace std;

template <typename T>
class Item
{
private:
    std::string name;
    T value;

public:
    Item(std::string name, T value)
        : name{name}, value{value}
    {
    }
    std::string get_name() const { return name; }
    T get_value() const { return value; }
};

template <typename T1, typename T2>
struct My_pair
{
    T1 first;
    T2 second;
};

int main(int argc, char const *argv[])
{
    Item<int> item1{"alice", 100};
    cout << item1.get_name() << " " << item1.get_value() << endl;

    Item<string> item2{"bbb", "C++"};
    cout << item2.get_name() << " " << item2.get_value() << endl;

    Item<Item<string>> item3{"caropl", {"david", "C++"}};
    cout << item3.get_name() << " " << item3.get_value().get_name() << " " << item3.get_value().get_value() << endl;

    vector<Item<double>> vec;
    vec.push_back(Item<double>("Frank", 100.0));
    vec.push_back(Item<double>("Georger", 200.0));
    vec.push_back(Item<double>("Harry", 300.0));

    for (const auto &item : vec)
        cout << item.get_name() << " " << item.get_value() << endl;

    cout << "==========================" << endl;
    My_pair<std::string, int> p1{"hello", 1000};
    My_pair<int, double> p2{200, 3.14};

    cout << p1.first << " " << p1.second << endl;
    cout << p2.first << " " << p2.second << endl;

    return 0;
}
