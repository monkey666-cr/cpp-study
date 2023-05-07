#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    cout << "参数数量: " << argc << endl; 
    cout << "==============================" << endl;
    for (int i = 0; i < argc; i++)
    {
        cout << argv[i] << endl;
    }

    return 0;
}
