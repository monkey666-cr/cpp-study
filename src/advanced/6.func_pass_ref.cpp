#include <iostream>
#include <vector>
#include <string>

using namespace std;

void pass_by_ref_1(int &num)
{
    num = 100;
}

void pass_by_ref_2(string &s)
{
    s = "Changed";
}

void pass_by_ref_3(vector<string> &v)
{
    v.clear();
}

void print_vector(const vector<string> v)
{
    for (auto s: v)
        cout << s << " ";
    cout << endl;
}

int main(int argc, char const *argv[])
{
    /* code */
    cout << "====================" << endl;
    int my_num {19};
    cout << "修改前的值：" << my_num << endl; // 19
    pass_by_ref_1(my_num);
    cout << "修改后的值：" << my_num << endl; // 100

    cout << "====================" << endl;
    string my_str {"Hello"};
    cout << "修改前的值：" << my_str << endl; // Hello
    pass_by_ref_2(my_str);
    cout << "修改后的值：" << my_str << endl; // Changed

    cout << "====================" << endl;
    vector<string> my_vec {"apple", "banana", "orange"};
    cout << "修改前的值：";
    print_vector(my_vec); // apple banana orange
    pass_by_ref_3(my_vec);
    cout << "修改后的值：";
    print_vector(my_vec); // 空

    return 0;
}
