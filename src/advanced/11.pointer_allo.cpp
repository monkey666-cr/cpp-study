#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int *int_ptr {nullptr};
    cout << "分配的int_ptr的值是: " << int_ptr << endl;
    // 在heap堆上分配一个int类型的内存空间,返回该内存空间的地址
    int_ptr = new int;
    cout << "分配后的int_ptr的值是: " << int_ptr << endl;
    cout << *int_ptr << endl; 

    *int_ptr = 100;
    cout << *int_ptr << endl;

    delete int_ptr;

    size_t size {0};
    double *temp_ptr {nullptr};
    cout << "多少个温度值?";
    cin >> size;
    temp_ptr = new double[size];
    cout << "地址是: " << temp_ptr << endl;
    delete[] temp_ptr;

    return 0;
}
