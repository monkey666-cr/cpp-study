#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    for (int i{1}; i <= 10; i++)
        cout << i << endl;

    for (int i{1}; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << "是偶数" << endl;
        }
        else
        {
            cout << i << "是奇数" << endl;
        }
    }

    for (int i{1}, j{5}; i <= 5; i++, j++)
    {
        cout << i << " * " << j << " =  " << (i * j) << endl;
    }

    vector<int> nums{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (unsigned i {0}; i < nums.size(); i++)
    {
        cout << nums[i] << endl;
    }

    return 0;
}
