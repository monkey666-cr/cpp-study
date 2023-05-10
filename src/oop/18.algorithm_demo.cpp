#include <algorithm>
#include <iostream>
#include <vector>

void test1()
{
    std::cout << "test1 ========================" << std::endl;

    std::vector<int> v1{1, 2, 3, 4, 5};
    std::vector<int>::iterator loc = std::find(v1.begin(), v1.end(), 3);
    if (loc != v1.end())
        std::cout << "找到 3" << std::endl;
    else
        std::cout << "未找到 3" << std::endl;
}

void test2()
{
    std::cout << "test2 =======================" << std::endl;
    std::vector<int> v1{1, 2, 3, 4, 5, 6, 1, 2, 3};
    int counts = std::count(v1.begin(), v1.end(), 1);
    std::cout << "1的个数: " << counts << std::endl;
}

bool isEven(int x)
{
    return x % 2 == 0;
}

void test3()
{
    std::cout << "test3 ======================" << std::endl;
    std::vector<int> v1{1, 2, 3, 4, 5, 6, 7, 8, 9};

    int counts = std::count_if(v1.begin(), v1.end(), isEven);

    counts = std::count_if(
        v1.begin(),
        v1.end(),
        [](int x)
        { return x % 2 == 0; });
    std::cout << "偶数个数: " << counts << std::endl;

    counts = std::count_if(
        v1.begin(),
        v1.end(),
        [](int x)
        { return x > 6; });
    std::cout << "大于6的个数: " << counts << std::endl;
}

void test4()
{
    std::cout << "test4 ============================" << std::endl;
    std::vector<int> v1{1, 2, 3, 4, 5, 1, 2, 3, 1, 2, 3};

    for (const auto &e : v1)
        std::cout << e << " ";

    std::cout << std::endl;

    std::replace(v1.begin(), v1.end(), 1, 100);

    for (const auto &e : v1)
        std::cout << e << " ";

    std::cout << std::endl;
}

void test5()
{
    std::cout << "test5 ==========================" << std::endl;
    std::vector<int> v1{
        1,
        2,
        3,
        3,
        4,
        5,
        44,
    };
    if (std::all_of(v1.begin(), v1.end(), [](int x)
                    { return x > 5; }))
        std::cout << "所有元素大于5" << std::endl;
    else
        std::cout << "不是所有元素都大于5" << std::endl;

    if (std::any_of(v1.begin(), v1.end(), [](int x)
                    { return x > 5; }))
        std::cout << "有元素大于5" << std::endl;
    else
        std::cout << "没有元素大于5" << std::endl;

    if (std::none_of(v1.begin(), v1.end(), [](int x)
                     { return x < 0; }))
        std::cout << "没有元素小于0" << std::endl;
    else
        std::cout << "有元素小于0" << std::endl;
}

void test6()
{
    std::cout << "test6 =======================" << std::endl;
    std::string s1{"hello world"};
    std::cout << s1 << std::endl;
    std::transform(s1.begin() + 1, s1.end(), s1.begin() + 1, ::toupper);
    std::cout << s1 << std::endl;
}

void test7()
{
    std::cout << "test7 ========================" << std::endl;
    std::vector<int> vc{1, 2, 3, 0, 1, 23, 45, 100};

    auto gerater = [](int a, int b)
    { return a > b; };

    std::sort(vc.begin(), vc.end(), gerater);
    for (const auto &num : vc)
        std::cout << num << " ";
    std::cout << std::endl;
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

    return 0;
}
