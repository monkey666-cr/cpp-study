#include <iostream>
#include <queue>

template <typename T>
void display(std::priority_queue<T> pq)
{
    std::cout << "[";
    while (!pq.empty())
    {
        T elem = pq.top();
        std::cout << elem << " ";
        pq.pop();
    }
    std::cout << "]" << std::endl;
}

void test1()
{
    std::cout << "test1 =======================" << std::endl;
    std::priority_queue<int> pq;
    for (auto i : {3, 5, 8, 1, 2, 9, 4, 7, 6})
        pq.push(i);
    display(pq);

    std::cout << "大小: " << pq.size() << std::endl;
    std::cout << "最大值: " << pq.top() << std::endl;

    pq.pop();
    display(pq);
}

int main(int argc, char const *argv[])
{
    /* code */
    test1();

    return 0;
}
