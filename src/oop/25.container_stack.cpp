#include <iostream>
#include <vector>
#include <stack>
#include <deque>
#include <list>

template <typename T>
void display(std::stack<T> s)
{
    std::cout << "[";
    while (!s.empty())
    {
        T elem = s.top();
        std::cout << elem << " ";
        s.pop();
    }
    std::cout << "]" << std::endl;
}

int main(int argc, char const *argv[])
{
    /* code */
    std::stack<int> s;
    for (auto i : {1, 2, 3, 4, 5})
        s.push(i);
    display(s);

    s.push(100);
    display(s);

    s.pop();
    s.pop();

    display(s);

    while (!s.empty())
        s.pop();
    display(s);

    s.push(10);
    display(s);

    s.top() = 100;
    display(s);

    return 0;
}
