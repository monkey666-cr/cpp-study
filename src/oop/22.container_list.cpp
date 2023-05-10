#include <iostream>
#include <list>
#include <algorithm>

template <typename T>
void printList(const std::list<T> &l)
{
    std::cout << "[ ";
    for (const auto &e : l)
        std::cout << e << " ";
    std::cout << "]" << std::endl;
}

void test1()
{
    std::cout << "test1 ======================" << std::endl;
    std::list<int> l1{1, 2, 3, 4, 5};
    printList(l1);

    std::list<std::string> l2;
    l2.push_back("hello");
    l2.push_back("world");
    printList(l2);

    std::list<int> l3;
    l3 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printList(l3);

    std::list<int> l4(10, 88);
    printList(l4);
}

void test2()
{
    std::cout << "test2 ==========================" << std::endl;
    std::list<int> l1{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printList(l1);

    std::cout << "第一个元素: " << l1.front() << std::endl;
    std::cout << "最后一个元素: " << l1.back() << std::endl;
    std::cout << "大小: " << l1.size() << std::endl;

    l1.clear();
    printList(l1);
    std::cout << "大小: " << l1.size() << std::endl;
}

void test3()
{
    std::cout << "test3 =========================" << std::endl;
    std::list<int> l1{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printList(l1);

    l1.resize(5);
    printList(l1);
}

void test4()
{
    std::cout << "test4 =========================" << std::endl;
    std::list<int> l1{1, 2, 3, 4, 5, 6, 7, 8, 8, 10};
    printList(l1);

    std::list<int>::iterator it = std::find(l1.begin(), l1.end(), 5);
    if (it != l1.end())
        l1.insert(it, 100);
    printList(l1);

    std::list<int> l2{1000, 2000, 3000};
    l1.insert(it, l2.begin(), l2.end());
    printList(l1);

    std::advance(it, -2);
    std::cout << *it << std::endl;

    l1.erase(it);
    printList(l1);
}

void test5()
{
    std::cout << "test5 =======================" << std::endl;
    std::list<int> l1{3, 5, 2, 10, 7, 9, 8, 1, 4, 6};
    printList(l1);
    l1.sort();
    printList(l1);
}

int main(int argc, char const *argv[])
{
    /* code */
    // test1();
    // test2();
    // test3();
    // test4();
    test5();

    return 0;
}
