#include <algorithm>
#include <iostream>
#include <numeric>
#include <array>

void display(const std::array<int, 5> &arr)
{
    std::cout << "[ ";
    for (const auto &a : arr)
        std::cout << a << " ";
    std::cout << "]" << std::endl;
}

void test1()
{
    std::cout << "test1 ========================" << std::endl;
    std::array<int, 5> arr1{1, 2, 3, 4, 5};
    std::array<int, 5> arr2;

    display(arr1);
    display(arr2);

    arr2 = {10, 20, 30, 40, 50};

    display(arr1);
    display(arr2);

    std::cout << "arr1的大小: " << arr1.size() << std::endl;
    std::cout << "arr2的大小: " << arr2.size() << std::endl;

    arr1[0] = 1000;
    arr1.at(1) = 2000;
    display(arr1);

    std::cout << "arr1的第一个元素: " << arr1.front() << std::endl;
    std::cout << "arr1的最后一个元素: " << arr1.back() << std::endl;
}

void test2()
{
    std::cout << "test2 ============================" << std::endl;
    std::array<int, 5> arr1{1, 2, 3, 4, 5};
    std::array<int, 5> arr2{10, 20, 30, 40, 50};

    display(arr1);
    display(arr2);

    arr1.fill(0);
    display(arr1);
    display(arr2);

    arr1.swap(arr2);
    display(arr1);
    display(arr2);
}

void test3()
{
    std::cout << "test3 ============================" << std::endl;
    std::array<int, 5> arr1{1, 2, 3, 4, 5};
    int *ptr = arr1.data();
    std::cout << ptr << std::endl;
    std::cout << *ptr << std::endl;
    *ptr = 100;
    display(arr1);
}

void test4()
{
    std::cout << "test4 ===========================" << std::endl;
    std::array<int, 5> arr1{3, 1, 4, 2, 5};
    display(arr1);
    std::sort(arr1.begin(), arr1.end());
    display(arr1);
}

void test5()
{
    std::cout << "test5 ===========================" << std::endl;
    std::array<int, 5> arr1{3, 6, 4, 2, 5};
    std::array<int, 5>::iterator min_val = std::min_element(arr1.begin(), arr1.end());
    auto max_val = std::max_element(arr1.begin(), arr1.end());
    std::cout << "min: " << *min_val << std::endl;
    std::cout << "max: " << *max_val << std::endl;
}

void test6()
{
    std::cout << "test6 ===========================" << std::endl;
    std::array<int, 5> arr1{3, 6, 2, 2, 5};

    auto adjacent = std::adjacent_find(arr1.begin(), arr1.end());
    if (adjacent != arr1.end())
        std::cout << "adjanent: " << *adjacent << std::endl;
    else
        std::cout << "没有找到相邻的两个相同元素" << std::endl;
}

void test7()
{
    std::cout << "test7 ===========================" << std::endl;

    std::array<int, 5> arr1{1, 2, 3, 4, 5};
    int sum = std::accumulate(arr1.begin(), arr1.end(), 0);
    std::cout << "sum: " << sum << std::endl;
}

void test8()
{
    std::cout << "test8 ===========================" << std::endl;
    std::array<int, 10> arr1{1, 2, 3, 4, 5, 5, 5, 5, 5, 5};
    int counts = std::count(arr1.begin(), arr1.end(), 5);
    std::cout << "5一共出现了" << counts << "次" << std::endl;
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
    test7();
    test8();

    return 0;
}
