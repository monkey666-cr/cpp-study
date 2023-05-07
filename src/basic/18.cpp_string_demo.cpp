#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    // string s1;
    // string s2 {"hello"};
    // string s3 {s2}; // 拷贝s2
    // string s4 {s3, 0, 4};  // 拷贝s3的前4个字符
    // string s5 {"hello", 3}; // 拷贝hello的前3个字符
    // string s6 {5, 'x'};

    // cout << "s1 is empty: " << s1 << endl;
    // cout << "s2 is: " << s2 << endl;
    // cout << "s3 is: " << s3 << endl;
    // cout << "s4 is: " << s4 << endl;
    // cout << "s5 is: " << s5 << endl;
    // cout << "s6 is: " << s6 << endl;

    string s1;

    s1 = "C++ Hello World";
    cout << "s1 is: " << s1 << endl;

    string s2 {"course"};
    cout << "s2 is: " << s2 << endl;
    s2 = s1;
    cout << "s2 is: " << s2 << endl;

    // 拼接
    string part1 {"C++"};
    string part2 {"是一门强大的"};
    string sentence;
    sentence = part1 + " " + part2 + "语言";
    cout << sentence << endl;

    string s3 {"Hello"};
    cout << s3[1] << endl;
    cout << s3.at(2) << endl;

    string s4 {"hello"};
    for (auto c: s4)
    {
        cout << c << endl;
    }

    for (int c: s4)
        cout << c << endl;

    return 0;
}
