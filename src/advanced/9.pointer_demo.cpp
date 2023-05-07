#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    cout << "====================" << endl;
    int my_num{10};
    cout << "my_num变量的值是: " << my_num << endl;
    cout << "my_num变量的sizeof是: " << sizeof(my_num) << endl;
    cout << "my_num变量的地址是: " << &my_num << endl;

    cout << "====================" << endl;
    int *num_ptr{nullptr};
    cout << "num_ptr变量的值是: " << num_ptr << endl;
    cout << "num_ptr变量sizeof是: " << sizeof(num_ptr) << endl;
    cout << "num_ptr变量的地址是: " << &num_ptr << endl;

    cout << "=====================" << endl;

    int *p1{nullptr};
    double *p2{nullptr};
    long long *p3{nullptr};
    string *p4{nullptr};
    vector<string> *p5{nullptr};

    cout << "p1的sizeof是: " << sizeof(p1) << endl;
    cout << "p2的sizeof是: " << sizeof(p2) << endl;
    cout << "p3的sizeof是: " << sizeof(p3) << endl;
    cout << "p4的sizeof是: " << sizeof(p4) << endl;
    cout << "p5的sizeof是: " << sizeof(p5) << endl;

    cout << "====================" << endl;
    int student_score{100};
    // double hight_temp {41.5};

    int *score_ptr{nullptr};
    score_ptr = &student_score;

    cout << "student_score的值是: " << student_score << endl;
    cout << "student_score的地址是: " << &student_score << endl;
    cout << "score_ptr的地址是: " << score_ptr << endl;
}
