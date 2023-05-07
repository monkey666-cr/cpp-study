#include <iostream>
#include <string>
#include <vector>

using namespace std;

void demo_print(int);
void demo_print(double);
void demo_print(string);
void demo_print(string, string);
void demo_print(vector<string>);

int main(int argc, char const *argv[])
{
    /* code */
    demo_print(100);
    demo_print(123.456);
    demo_print(123.5f);
    demo_print('A');
    demo_print("C style string");

    string s{"C++ string"};
    demo_print(s);

    demo_print("C style string ", s);

    vector<string> languages{"C++", "Python", "Java"};
    demo_print(languages);

    return 0;
}

void demo_print(int num)
{
    cout << "整数: " << num << endl;
}

void demo_print(double num)
{
    cout << "浮点数: " << num << endl;
}

void demo_print(string s)
{
    cout << "字符串：" << s << endl;
}

void demo_print(string s1, string s2)
{
    cout << "字符串l" << s1 << s2 << endl;
}

void demo_print(vector<string> v)
{
    cout << "字符串向量: " << endl;
    for (auto s : v)
    {
        cout << s << " ";
    }
    cout << endl;
}