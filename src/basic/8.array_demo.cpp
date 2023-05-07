#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    char vowels[]{'a', 'e', 'i', 'o', 'u'};
    cout << "元音字母第1个字母为: " << vowels[0] << endl;
    cout << "元音字母第4个字母为: " << vowels[3] << endl;

    double hi_temps[]{90.1, 89.9, 77.5, 81.6};
    cout << "第1天的最高温度为: " << hi_temps[0] << endl;
    hi_temps[0] = 100.7;
    cout << "第1天的最高温度为: " << hi_temps[0] << endl;
    cout << "第6天的最高温度为: " << hi_temps[5] << endl; // 越界访问得到一个随机值

    cout << "===================================" << endl;

    int student_scores[5]{};
    cout << "第1个学生的成绩为：" << student_scores[0] << endl;
    cout << "第2个学生的成绩为：" << student_scores[1] << endl;
    cout << "第3个学生的成绩为：" << student_scores[2] << endl;
    cout << "第4个学生的成绩为：" << student_scores[3] << endl;
    cout << "第5个学生的成绩为：" << student_scores[4] << endl;

    cout << "数组的名称为: " << student_scores << endl;

    int movie_ratings[3][4]{
        {0, 4, 3, 5},
        {2, 3, 3, 5},
        {1, 4, 4, 5},
    };

    cout << "第1部电影的第1个评分为：" << movie_ratings[0][0] << endl;
    cout << "第2部电影的第4个评分为：" << movie_ratings[1][3] << endl;

    return 0;
}
