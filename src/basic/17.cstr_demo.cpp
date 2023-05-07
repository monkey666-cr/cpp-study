#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    // char first_name [20] {};
    // char last_name [20] {};
    char full_name [50] {};
    char temp [50] {};

    // // 用户输入
    // cout << "请输入您的姓: ";
    // cin >> first_name;
    // cout << "请输入您的名: ";
    // cin >> last_name;

    // cout << "--------------------------------------------" << endl;
    // cout << "您的姓: " << first_name << ", 一共有" << strlen(first_name) << "个字符" << endl;
    // cout << "您的名: " << last_name << ", 一共有" << strlen(last_name) << "个字符" << endl;

    // strcpy(full_name, first_name);
    // strcat(full_name, " ");
    // strcat(full_name, last_name);
    // cout << "您的全名是: " << full_name << endl;

    cout << "---------------------------------------------" << endl;
    cout << "请输入您的全名: ";
    cin.getline(full_name, 50);
    cout << "您的全名是: " << full_name << endl;

    strcpy(temp, full_name);
    if (strcmp(temp, full_name) == 0)
        cout << temp << " 和 " << full_name << " 相同的" << endl;
    else
        cout << temp << " 和 " << full_name << " 是不同的" << endl;

    for (size_t i {0}; i < strlen(full_name); i++)
    {
        if (isalpha(full_name[i]))
            full_name[i] = toupper(full_name[i]);
        else
            full_name[i] = '*';
    }

    cout << full_name << endl;

    return 0;
}
