#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <map>

using namespace std;

void printVec(const vector<int> &v)
{
    cout << "[";
    for (const auto &e : v)
        cout << e << " ";
    cout << "]" << endl;
}

void test1()
{
    cout << "test1 =======================" << endl;
    vector<int> v1{1, 2, 3, 4, 5};
    vector<int>::iterator it = v1.begin();
    cout << *it << endl;

    it++;
    cout << *it << endl;

    it += 2;
    cout << *it << endl;

    it -= 2;
    cout << *it << endl;

    it = v1.end() - 1;
    cout << *it << endl;
}

void test2()
{
    cout << "test2 =====================" << endl;
    vector<int> v1{1, 2, 3, 4, 5};
    auto it = v1.begin();

    while (it != v1.end())
    {
        cout << *it << endl;
        it++;
    }

    it = v1.begin();
    while (it != v1.end())
    {
        *it = 100;
        it++;
    }
    printVec(v1);
}

void test3()
{
    cout << "test3 ====================" << endl;
    vector<int> v1{1, 2, 3, 4, 5, 6};
    auto it = v1.cbegin(); // 常量迭代器, 只能读取元素, 无法修改元素

    while (it != v1.end())
    {
        cout << *it << endl;
        it++;
    }

    it = v1.begin();
    while (it != v1.end())
    {
        // *it = 100;
        it++;
    }
}

void test4()
{
    cout << "test4 ========================" << endl;
    vector<int> v1{1, 2, 3, 4, 5};
    auto it = v1.rbegin();

    while (it != v1.rend())
    {
        cout << *it << endl;
        it++;
    }

    list<string> l1{"hello", "world", "c++"};
    auto it2 = l1.rbegin();
    cout << *it2 << endl;
    it2++;
    cout << *it2 << endl;

    map<string, string> m1{
        {"hello", "你好"},
        {"world", "世界"},
        {"Computer", "计算机"},
    };

    auto it3 = m1.begin();
    while (it3 != m1.end())
    {
        cout << it3->first << " : " << it3->second << endl;
        it3++;
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    // test1();
    // test2();
    // test3();
    test4();

    return 0;
}
