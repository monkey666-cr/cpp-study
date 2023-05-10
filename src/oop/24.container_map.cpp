#include <iostream>
#include <map>
#include <set>

template <typename T1, typename T2>
void printMap(const std::map<T1, T2> &m)
{
    std::cout << "[";
    for (const auto &e : m)
        std::cout << e.first << ": " << e.second << " ";
    std::cout << "]" << std::endl;
}

void printMap(const std::map<std::string, std::set<int>> &m)
{
    std::cout << "[";
    for (const auto &e : m)
    {
        std::cout << e.first << ":[";
        for (const auto &s : e.second)
            std::cout << s << " ";
        std::cout << "] ";
    }
    std::cout << "]" << std::endl;
}

void test1()
{
    std::cout << "test1 ======================" << std::endl;
    std::map<std::string, int> m1{
        {"mike", 10},
        {"jane", 20},
        {"tom", 30},
    };
    printMap(m1);

    m1.insert(std::pair<std::string, int>("anna", 100));
    printMap(m1);

    m1.insert(std::make_pair("bob", 200));
    printMap(m1);

    m1["jim"] = 300;
    printMap(m1);
    m1["jim"] += 100;
    printMap(m1);

    std::cout << "mike的计次: " << m1.count("mike") << std::endl;
    std::cout << "alice的计次: " << m1.count("alice") << std::endl;

    auto it = m1.find("jim");
    if (it != m1.end())
        std::cout << "找到" << it->first << ", value为" << it->second << std::endl;
    else
        std::cout << "未找到jim" << std::endl;

    m1.clear();
    printMap(m1);
}

void test2()
{
    std::cout << "test2 =====================" << std::endl;
    std::map<std::string, std::set<int>> student_grades{
        {"mike", {100, 90}},
        {"jane", {99, 88, 77}},
        {"tom", {98, 87, 76}},
    };
    printMap(student_grades);

    student_grades["mike"].insert(80);
    printMap(student_grades);

    auto it = student_grades.find("jane");
    if (it != student_grades.end())
    {
        it->second.erase(88);
        printMap(student_grades);
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    // test1();
    test2();

    return 0;
}
