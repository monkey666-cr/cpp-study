#include <iostream>
#include <queue>

template <typename T>
void display(std::queue<T> q)
{
    std::cout << "[";
    while (!q.empty())
    {
        T elem = q.front();
        std::cout << elem << " ";
        q.pop();
    }
    std::cout << "]" << std::endl;
}

int main(int argc, char const *argv[])
{
    /* code */
    std::queue<int> q;
    for (auto i : {1, 2, 3, 4, 5})
        q.push(i);
    display(q);

    std::cout << "队首元素: " << q.front() << std::endl;
    std::cout << "队尾元素: " << q.back() << std::endl;

    q.push(100);
    display(q);

    q.pop();
    q.pop();

    display(q);
    while (!q.empty())
        q.pop();
    display(q);

    std::cout << "size: " << q.size() << std::endl;

    q.push(10);
    q.push(20);
    q.push(30);
    display(q);

    std::cout << "第一个元素: " << q.front() << std::endl;
    std::cout << "最后一个元素: " << q.front() << std::endl;

    q.front() = 100;
    q.back() = 200;
    display(q);

    return 0;
}
