#include <iostream>

using namespace std;

void double_data(int *int_ptr)
{
    *int_ptr *= 2;
}

int main(int argc, char const *argv[])
{
    /* code */
    int value{20};

    cout << "value的值是: " << value << endl;
    double_data(&value);
    cout << "value的值是: " << value << endl;

    int *int_ptr{nullptr};
    int_ptr = &value;
    double_data(int_ptr);
    cout << "value的值是: " << value << endl;

    return 0;
}
