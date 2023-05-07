#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int student_scores[]{100, 98, 97};
    cout << "student_scores的值是: " << student_scores << endl;

    int *score_ptr{student_scores};
    cout << "score_ptr的值是: " << score_ptr << endl;

    cout << "====== 数组名称, 下标方式访问元素 ======" << endl;
    cout << student_scores[0] << endl;
    cout << student_scores[1] << endl;
    cout << student_scores[2] << endl;

    cout << "====== 指针名称, 下标方式访问元素 ======" << endl;
    cout << score_ptr[0] << endl;
    cout << score_ptr[1] << endl;
    cout << score_ptr[2] << endl;

    cout << "====== 指针名称, 指针运算符方式访问元素 ======" << endl;
    cout << *score_ptr << endl;
    cout << *(score_ptr + 1) << endl;
    cout << *(score_ptr + 2) << endl;

    cout << "====== 数组名称, 指针运算符方式访问元素 ======" << endl;
    cout << *student_scores << endl;
    cout << *(student_scores + 1) << endl;
    cout << *(student_scores + 2) << endl;

    cout << "====== ++运算符 ======" << endl;
    cout << *score_ptr++ << endl;
    cout << *score_ptr++ << endl;
    cout << *score_ptr++ << endl;

    return 0;
}
