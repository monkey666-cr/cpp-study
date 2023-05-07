#include <iostream>

using namespace std;

int *create_array(size_t size, int initial_value = 0)
{
    int *new_storage{nullptr};

    new_storage = new int[size];

    for (size_t i{0}; i < size; i++)
        *(new_storage + i) = initial_value;

    return new_storage;
}

void dispaly(int *arr, size_t size)
{
    for (size_t i{0}; i < size; i++)
        cout << *arr++ << " ";
    cout << endl;
}

int main(int argc, char const *argv[])
{
    /* code */
    size_t size{};
    int value{};
    int *new_arr{nullptr};

    cout << "请输入数组的大小: ";
    cin >> size;
    cout << "请输入数据的初始值: ";
    cin >> value;

    new_arr = create_array(size, value);

    dispaly(new_arr, size);

    delete[] new_arr;

    return 0;
}
