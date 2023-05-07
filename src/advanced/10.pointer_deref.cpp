#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    cout << "====================" << endl;
    int studentg_score {100};
    int *score_ptr {&studentg_score};

    cout << "student_score的值是: " << studentg_score << endl;
    cout << "student_ptr访问student_score的值是: " << *score_ptr << endl;

    *score_ptr = 150;
    cout << "Updated,student_score的值是: " << studentg_score << endl;
    cout << "Updated,通过指针score_ptr访问student_score的值是: " << *score_ptr << endl;

    cout << "=======================" << endl; 
    double hight_temp {41.5};
    double low_temp {37.5};

    double *temp_ptr {&hight_temp};
    cout << "通过指针temp_ptr访问hight_temp的值是: " << *temp_ptr << endl;

    temp_ptr = &low_temp;
    cout << "通过temp_ptr访问low_temp的值是: " << *temp_ptr << endl;

    cout << "======================" << endl;
    string str {"Hello"};
    string *str_ptr {&str};

    cout << "通过指针str_ptr访问str的值是: " << *str_ptr << endl;
    str = "World";
    cout << "通过指针str_ptr访问str的值是: " << *str_ptr << endl;

    cout << "======================" << endl;
    vector<string> my_str_vec {"Hello", "World", "computer", "vision"};
    vector<string> *vector_ptr {&my_str_vec};

    cout << "my_str_vec的第一个元素是: " << my_str_vec.at(0) << endl;
    cout << "通过指针vecotr_ptr访问my_str_vec的第一个元素: " << (*vector_ptr).at(0) << endl;

    cout << "遍历所有元素: ";
    for (auto str: *vector_ptr)
        cout << str << " ";
    cout << endl;

    return 0;
}
