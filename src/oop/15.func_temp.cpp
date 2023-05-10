#include <iostream>
#include <string>

using namespace std;

template <typename T>
T min_func(T a, T b)
{
    return a < b ? a : b;
}

template <class T1, class T2>
void display(T1 a, T2 b)
{
    cout << a << " " << b << endl;
}

int main(int argc, char const *argv[])
{
    /* code */
    cout << min_func<int>(1, 2) << endl;
    cout << min_func(1, 3) << endl;
    cout << min_func('B', 'A') << endl;
    cout << min_func(2.3, 1.2) << endl;
    cout << min_func(5 + 2 * 9, 6 - 1 * 100) << endl;

    display<int, int>(1, 2);
    display(10, 20);
    display<char, double>('A', 2.2);
    display("Hello", "World");
    display(2000, string{"Hello"});

    return 0;
}
