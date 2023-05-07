#include <iostream>

using namespace std;

unsigned long long factorial(unsigned long long n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int main(int argc, char const *argv[])
{
    /* code */
    cout << factorial(3) << endl;
    cout << factorial(4) << endl;
    cout << factorial(8) << endl;
    cout << factorial(20) << endl;
    cout << factorial(80) << endl;

    return 0;
}
