#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    char input_char{};
    do
    {
        cout << "\n 菜单: " << endl;
        cout << "1. 打印Hello World" << endl;
        cout << "2. 打印Hello C++" << endl;
        cout << "3. 打印Hello C" << endl;
        cout << "q或Q. 退出" << endl;

        cout << "请输入菜单选项: ";
        cin >> input_char;

        cout << endl;

        switch (input_char)
        {
        case '1':
            cout << "Hello World" << endl;
            break;
        case '2':
            cout << "Hello C++" << endl;
            break;
        case '3':
            cout << "Hello C" << endl;
            break;
        case 'q':
        case 'Q':
            cout << "推出" << endl;
            break;
        default:
            break;
        }

    } while (input_char != 'q' && input_char != 'Q');

    return 0;
}
