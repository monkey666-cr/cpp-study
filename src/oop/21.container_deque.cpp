#include <iostream>
#include <deque>
#include <vector>

template <typename T>
void display(const std::deque<T> &d)
{
    std::cout << "[ ";
    for (const auto &item : d)
        std::cout << item << " ";
    std::cout << "]";
    std::cout << std::endl;
}

void test1()
{
    std::cout << "test1 =====================" << std::endl;
    std::deque<int> d1{1, 2, 3, 4, 5, 6};
    display(d1);

    std::deque<int> d2(10, 100);
    display(d2);
    d2[0] = 99;
    d2.at(1) = 88;
    display(d2);
}

void test2()
{
    std::cout << "test2 =====================" << std::endl;
    std::deque<int> d1{0, 0, 0, 0, 0};
    display(d1);

    d1.push_back(10);
    d1.push_back(20);
    display(d1);

    d1.push_front(1000);
    d1.push_front(2000);
    display(d1);

    std::cout << "第一个元素: " << d1.front() << std::endl;
    std::cout << "最后一个元素: " << d1.back() << std::endl;
    std::cout << "大小: " << d1.size() << std::endl;

    d1.pop_back();
    d1.pop_front();
    display(d1);
}

void test3()
{
    std::cout << "test3 ======================" << std::endl;
    std::vector<int> v1{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::deque<int> d2;

    for (const auto &item : v1)
    {
        if (item % 2 == 0)
            d2.push_back(item);
        else
            d2.push_front(item);
    }
    display(d2);
}

void test4()
{
    std::cout << "test4 ====================" << std::endl;
    std::vector<int> v1{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::deque<int> d2;

    for (const auto &item : v1)
        d2.push_back(item);
    display(d2);

    d2.clear();
    for (const auto &item : v1)
        d2.push_front(item);
    display(d2);
}

void test5()
{
    std::cout << "test5 ======================" << std::endl;
    std::vector<int> v1{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::deque<int> d2;

    std::copy(v1.begin(), v1.end(), std::back_inserter(d2));
    display(d2);

    d2.clear();
    std::copy(v1.begin(), v1.end(), std::front_inserter(d2));
    display(d2);
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
