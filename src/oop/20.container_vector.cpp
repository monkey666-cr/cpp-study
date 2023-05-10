/*
 * vector示例
 * vector是一个动态数组, 可以随意增加元素
 */

#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
void printVector(const std::vector<T> &v)
{
    std::cout << "[ ";
    for (const auto &e : v)
        std::cout << e << " ";
    std::cout << "]" << std::endl;
}

void test1()
{
    std::cout << "test1 ==================" << std::endl;
    std::vector<int> v1{1, 2, 3, 4, 5, 6};
    printVector(v1);

    std::vector<int> v2{10, 88};
    printVector(v2);
}

void test2()
{
    std::cout << "test2 ===================" << std::endl;
    std::vector<int> v1{1, 2, 3, 4, 5, 6};

    printVector(v1);
    std::cout << "size: " << v1.size() << std::endl;
    std::cout << "capacity: " << v1.capacity() << std::endl;
    std::cout << "max_size: " << v1.max_size() << std::endl;

    v1.push_back(7);
    printVector(v1);
    std::cout << "size: " << v1.size() << std::endl;
    std::cout << "capacity: " << v1.capacity() << std::endl;
    std::cout << "max_size: " << v1.max_size() << std::endl;

    v1.shrink_to_fit(); // 释放多余的内存
    printVector(v1);
    std::cout << "size: " << v1.size() << std::endl;
    std::cout << "capacity: " << v1.capacity() << std::endl;
    std::cout << "max_size: " << v1.max_size() << std::endl;

    v1.reserve(100); // 预留100个元素的空间
    printVector(v1);
    std::cout << "size: " << v1.size() << std::endl;
    std::cout << "capacity: " << v1.capacity() << std::endl;
    std::cout << "max_size: " << v1.max_size() << std::endl;
}

void test3()
{
    std::cout << "test3 =========================" << std::endl;
    std::vector<int> v1{1, 2, 3, 4, 5};
    printVector(v1);
    v1[0] = 100;
    v1.at(1) = 200;
    printVector(v1);

    std::cout << "v1的第一个元素: " << v1.front() << std::endl;
    std::cout << "v1的最后一个元素: " << v1.back() << std::endl;

    v1.pop_back(); // 删除最后一个元素
    printVector(v1);
}

void test4()
{
    std::vector<int> v1{1, 2, 3, 4, 5};
    printVector(v1);

    v1.clear(); // 清空容器
    printVector(v1);

    v1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printVector(v1);
    v1.erase(v1.begin(), v1.begin() + 3);
    printVector(v1);

    // 删除所有偶数
    v1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::vector<int>::iterator it = v1.begin();
    while (it != v1.end())
    {
        if (*it % 2 == 0)
            v1.erase(it);
        else
            it++;
    }
    printVector(v1);
}

void test5()
{
    std::cout << "test5 ===================" << std::endl;
    std::vector<int> v1{1, 2, 3, 4, 5};
    std::vector<int> v2{10, 20, 30, 40, 50};
    printVector(v1);
    printVector(v2);

    v1.swap(v2);
    printVector(v1);
    printVector(v2);
}

void test6()
{
    std::cout << "test6 ===================" << std::endl;
    std::vector<int> v1{9, 2, 5, 4, 7, 6, 8, 1, 3};
    printVector(v1);
    std::sort(v1.begin(), v1.end());
    printVector(v1);
}

int getEven(int n)
{
    return n % 2 == 0;
}

void test7()
{
    std::cout << "test7 =====================" << std::endl;
    std::vector<int> v1{1, 2, 3, 4, 5};
    std::vector<int> v2{10, 20};

    printVector(v1);
    printVector(v2);

    std::copy(v1.begin(), v1.end(), std::back_inserter(v2));
    printVector(v1);
    printVector(v2);

    v1 = {1, 2, 3, 4, 5};
    v2 = {10, 20};
    std::copy_if(v1.begin(), v1.end(), std::back_inserter(v2), [](int x)
                 { return x % 2 == 0; });
    printVector(v1);
    printVector(v2);
}

void test8()
{
    std::cout << "test8 ==========================" << std::endl;
    std::vector<int> v1{1, 2, 3, 4, 5};
    std::vector<int> v2{10, 20, 30, 40, 50};
    std::vector<int> v3;

    // std::transform(v1.begin(), v1.end(), v2.begin(), std::back_inserter(v3), [](int x, int y)
    //    { return x + y; });
    std::transform(v1.begin(), v1.end(), v2.begin(), std::back_inserter(v3), std::plus<int>());
    std::cout << "v1 + v2 = " << std::endl;
    printVector(v3);

    v3.clear();
    // std::transform(v1.begin(), v1.end(), v2.begin(), std::back_inserter(v3), [](int x, int y)
    //                { return x * y; });
    std::transform(v1.begin(), v1.end(), v2.begin(), std::back_inserter(v3), std::multiplies<int>());
    std::cout << "v1 * v2 = " << std::endl;
    printVector(v3);
}

void test9()
{
    std::cout << "test9 =========================" << std::endl;
    std::vector<int> v1{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::vector<int> v2{100, 200, 300, 400};
    printVector(v1);
    printVector(v2);

    auto it = std::find(v1.begin(), v1.end(), 5);
    if (it != v1.end())
    {
        std::cout << "找到了: 5" << std::endl;
        v1.insert(it + 1, v2.begin(), v2.end());
    }
    else
    {
        std::cout << "没有找到" << std::endl;
    }
    printVector(v1);
}

int main(int argc, char const *argv[])
{
    /* code */
    // test1();
    // test2();
    // test3();
    // test4();
    // test5();
    // test6();
    // test7();
    // test8();
    test9();

    return 0;
}
