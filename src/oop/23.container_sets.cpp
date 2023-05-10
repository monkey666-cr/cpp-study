#include <iostream>
#include <set>

template <typename T>
void printSet(const std::set<T> &s)
{
    std::cout << "[";
    for (const auto &e : s)
        std::cout << e << " ";
    std::cout << "]" << std::endl;
}

void test1()
{
    std::cout << "test1 =========================" << std::endl;
    std::set<int> s1{1, 2, 3, 4, 5};
    printSet(s1);

    s1 = {1, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 3};
    printSet(s1);

    s1.insert(10);
    s1.insert(0);
    printSet(s1);

    if (s1.count(10))
        std::cout << "找到10" << std::endl;
    else
        std::cout << "未找到10" << std::endl;

    auto it = s1.find(10);
    if (it != s1.end())
        std::cout << "找到" << *it << std::endl;

    s1.clear();
    printSet(s1);
}

void test2()
{
    std::cout << "test2 ==================" << std::endl;
    std::set<std::string> s1{"A", "B", "C", "D", "E"};
    printSet(s1);

    auto result = s1.insert("F");
    printSet(s1);
    std::cout << std::boolalpha;
    std::cout << "first: " << *(result.first) << std::endl;
    std::cout << "second: " << result.second << std::endl;

    result = s1.insert("A");
    printSet(s1);
    std::cout << std::boolalpha;
    std::cout << "first: " << *(result.first) << std::endl;
    std::cout << "second: " << result.second << std::endl;
}

int main(int argc, char const *argv[])
{
    /* code */
    // test1();
    test2();

    return 0;
}
