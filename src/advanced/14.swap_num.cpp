#include <iostream>

using namespace std;

void swap_value(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(int argc, char const *argv[])
{
    /* code */
    int x{100}, y{200};
    cout << "交换前, x的值是: " << x << endl;
    cout << "交换前, y的值是: " << y << endl;

    swap_value(&x, &y);
    cout << "=====================" << endl;
    cout << "交换后, x的值是: " << x << endl;
    cout << "交换后, y的值是: " << y << endl;

    return 0;
}
