#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int my_num{10};
    // 引用
    int &my_ref{my_num};

    cout << "my_num: " << my_num << endl;
    cout << "my_ref: " << my_ref << endl;

    cout << "my_num address: " << &my_num << endl;
    cout << "my_ref address: " << &my_ref << endl;

    my_ref = 100;
    cout << "my_num: " << my_num << endl;
    cout << "my_ref: " << my_ref << endl;

    vector<string> my_str{"Hello", "World", "!"};
    cout << "====================" << endl;
    // str是个拷贝
    for (auto str : my_str)
        str = "Hello";

    for (auto str : my_str)
        cout << str << endl;

    cout << "====================" << endl;
    for (auto &str : my_str)
        str = "Hello";

    for (auto str : my_str)
        cout << str << endl;

    // 常量引用不能修改
    for (auto const &str : my_str)
    {
        // str = "computer"; // 编译报错, str是常量引用
        cout << str << endl;
    }
    return 0;
}
