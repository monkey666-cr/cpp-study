#include <iostream>
#include <vector>
#include <string>

using namespace std;

void display(const vector<string> *const v)
{
    for (auto c : *v)
        cout << c << " ";
    cout << endl;
}

void display(int *array, int sentinel)
{
    while (*array != sentinel)
        cout << *array++ << endl;
    cout << endl;
}

int main(int argc, char const *argv[])
{
    /* code */
    vector<string> my_str{"apple", "orange", "banana"};
    display(&my_str);

    cout << "========================" << endl;
    int student_scores[]{100, 98, 90, 86, 84, -1};
    display(student_scores, -1);

    return 0;
}
