#include <iostream>

using namespace std;

// 打印数组
void print_arr(const int arr[], size_t size);
// 变更数组内容
void change_arr(int arr[], size_t size);

int main(int argc, char const *argv[])
{
    /* code */
    int student_scores[]{100, 99, 98, 97};
    cout << "数组的地址是: " << student_scores << endl;

    print_arr(student_scores, 4);
    change_arr(student_scores, 4);
    print_arr(student_scores, 4);

    return 0;
}

void print_arr(const int arr[], size_t size)
{
    cout << "print_arr函数内数组的地址是: " << arr << endl;

    for (size_t i{0}; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void change_arr(int arr[], size_t size)
{
    cout << "change_arr函数内数组的地址是: " << arr << endl;
    for (size_t i{0}; i < size; i++)
        arr[i] = 60;
}